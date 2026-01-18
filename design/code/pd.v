module pd(
  input clock,
  input reset
);

///////////////////////////////////////////////////////////////////////////////////
//// Code from Labs 1,2


wire [31:0] pc_value;
wire [31:0] dataout;   

// decoded fields
wire [6:0]  opcode;
wire [4:0]  rd;
wire [4:0]  rs1;
wire [4:0]  rs2;
wire [2:0]  funct3;
wire [6:0]  funct7;
wire [31:0] imm;       
wire [4:0]  shamt;      

reg [31:0] pc;
assign pc_value = (reset) ? 'h01000000 : pc;

always @(posedge clock) begin
  if (reset) begin
    pc <= 32'h01000000;
  end else begin
    if ((opcode_ex == 7'b1101111) || (opcode_ex == 7'b1100111) || ((opcode_ex == 7'b1100011) && branch_taken)) begin
      pc <= alu_result;
    end else begin
      if (!decode_stall) begin
    pc <= pc + 4;
      end
    end
  end
end

wire [31:0] imem_dout;

imemory u_imemory (
  .clock(clock),
  .data_in('b0),
  .data_out(imem_dout),
  .address(pc),
  .read_write('b0),
  .enable(instr_mem_enable)
);

assign dataout = imem_dout;

reg decode_stall;

wire test1, test2, test3;
assign test1 = ((addr_rd_wb == addr_rs1) || (addr_rd_wb == addr_rs2)) && write_enable_wb && (addr_rd_wb!=0);
assign test2 = (opcode_ex == 7'b0000011) && (addr_rd_ex == addr_rs1) && (addr_rd_ex!=0) && ((opcode == 7'b0110011) || (opcode == 7'b0010011) || (opcode == 7'b0000011) || (opcode == 7'b0100011) || (opcode == 7'b1100011) || (opcode == 7'b1100111));
assign test3 = (opcode_ex == 7'b0000011) && (addr_rd_ex == addr_rs2) && (addr_rd_ex!=0) && ((opcode == 7'b0110011) || (opcode == 7'b1100011));

always @(*) begin
  decode_stall = 1'b0;
  if ((addr_rd_wb == addr_rs1) && ((addr_rd_wb != addr_rd_ex) || !write_enable_ex) && ((addr_rd_wb != addr_rd_mem) || !write_enable_mem) && write_enable_wb && (addr_rd_wb!=0) && (opcode != 7'b1101111) && (opcode != 7'b0110111) && (opcode != 7'b0010111) && (opcode != 7'b1110011)) begin
    decode_stall = 1'b1;
  end
  if ((addr_rd_wb == addr_rs2) && ((addr_rd_wb != addr_rd_ex) || !write_enable_ex) && ((addr_rd_wb != addr_rd_mem) || !write_enable_mem) && write_enable_wb && (addr_rd_wb!=0) && ((opcode == 7'b0110011) || (opcode == 7'b0100011) || (opcode == 7'b1100011))) begin
    decode_stall = 1'b1;
  end
  if ((opcode_ex == 7'b0000011) && (addr_rd_ex == addr_rs1) && (addr_rd_ex!=0) && ((opcode == 7'b0110011) || (opcode == 7'b0010011) || (opcode == 7'b0000011) || (opcode == 7'b0100011) || (opcode == 7'b1100011) || (opcode == 7'b1100111))) begin
    decode_stall = 1'b1;
  end
  if ((opcode_ex == 7'b0000011) && (addr_rd_ex == addr_rs2) && (addr_rd_ex!=0) && ((opcode == 7'b0110011) || (opcode == 7'b1100011))) begin
    decode_stall = 1'b1;
  end
end



reg [31:0] instr_d;
reg [31:0] instr_d_min1;
wire instr_mem_enable;
assign instr_mem_enable = !branch_taken_pc && !decode_stall;
reg instr_mem_enable_min1;
reg [31:0] pc_d;
reg branch_taken_min1;
wire branch_taken_pc;
assign branch_taken_pc = (opcode_ex == 7'b1101111) || (opcode_ex == 7'b1100111) || ((opcode_ex == 7'b1100011) && branch_taken);
always @(posedge clock) begin
  if (reset) begin
    //instr_d <= 'b0;
    instr_d_min1 <= 'b0;
    pc_d <= 'b0;
    branch_taken_min1 <= 'b0;
    instr_mem_enable_min1 <= 'b0;
  end else begin
    instr_mem_enable_min1 <= instr_mem_enable;
    instr_d_min1 <= instr_d;
    branch_taken_min1 <= branch_taken_pc;
    if (!branch_taken_pc && !decode_stall) begin
    //instr_d <= imem_dout;
    pc_d <= pc_value;
    end else if (branch_taken_pc) begin
      //pc_d <= pc_value;
      //instr_d <= 32'b00000000000000000000000000010011;
    end
  end
end

always @(*) begin
  instr_d = instr_d_min1;
  if (instr_mem_enable_min1) begin
    instr_d = imem_dout;
  end
  if (branch_taken_min1) begin
    instr_d = 32'b00000000000000000000000000010011;
  end
  

end
wire [4:0] rs1_raw = instr_d[19:15];

assign opcode = instr_d[6:0];
assign rd     = instr_d[11:7];
assign funct3 = instr_d[14:12];
assign rs1 = (opcode == 7'b0110111) ? 5'b00000 : rs1_raw;
assign rs2    = instr_d[24:20];
assign funct7 = instr_d[31:25];

wire [31:0] imm_i = {{20{instr_d[31]}}, instr_d[31:20]};                                // I
wire [31:0] imm_s = {{20{instr_d[31]}}, instr_d[31:25], instr_d[11:7]};                   // S
wire [31:0] imm_b = {{19{instr_d[31]}}, instr_d[31], instr_d[7], instr_d[30:25],
                      instr_d[11:8], 1'b0};                                           // B, LSB=0
wire [31:0] imm_u = {instr_d[31:12], 12'b0};                                          // U
wire [31:0] imm_j = {{11{instr_d[31]}}, instr_d[31], instr_d[19:12],
                      instr_d[20], instr_d[30:21], 1'b0};                               // J, LSB=0

reg [31:0] imm_r;
always @* begin
  case (opcode)
    7'b0010111, // AUIPC
    7'b0110111: // LUI
      imm_r = imm_u;

    7'b1101111: // JAL
      imm_r = imm_j;

    7'b1100111, // JALR
    7'b0000011, // LOAD
    7'b0010011: // OP-IMM
      if (funct3 == 3'b101 && funct7 == 7'b0100000) begin
        imm_r = {27'b0, shamt};
      end else begin
        imm_r = imm_i;
      end

    7'b0100011: // STORE
      imm_r = imm_s;

    7'b1100011: // BRANCH
      imm_r = imm_b;

    default:
      imm_r = 32'b0; 
  endcase
end
assign imm = imm_r;

assign shamt = instr_d[24:20];

/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

// WB
wire write_enable_in;
wire write_enable_module;

//assign write_enable_in = (!branch_taken_min1) ? ((opcode != 7'b0100011) && (opcode != 7'b1100011) && (opcode != 7'b1110011) && (opcode != 7'b0)) : 'b0;
assign write_enable_in = ((opcode != 7'b0100011) && (opcode != 7'b1100011) && (opcode != 7'b1110011) && (opcode != 7'b0));

assign write_enable_module = (reset) ? 'b0 : write_enable_wb;
// ^ WB

wire [31:0] data_rd, data_rs1, data_rs2;
wire [4:0] addr_rs1, addr_rs2, addr_rd;

assign addr_rd = rd;
assign addr_rs1 = rs1;
assign addr_rs2 = rs2;


register_file u_regfile (
    .clock(clock),
    .addr_rs1(addr_rs1),
    .addr_rs2(addr_rs2),
    .addr_rd(addr_rd_wb),
    .data_rd(data_rd),
    .data_rs1(data_rs1),
    .data_rs2(data_rs2), 
    .write_enable(write_enable_module)
);

// EX stage below:

reg branch_taken;
reg [31:0] ex_pc_value;
reg [31:0] data_rs1_ex, data_rs2_ex;
reg [4:0] addr_rs1_ex, addr_rs2_ex, addr_rd_ex;
reg [6:0] opcode_ex;
reg [31:0] imm_ex;
reg[4:0] shamt_ex;
reg [2:0] funct3_ex;
reg [6:0] funct7_ex;
reg write_enable_ex;

always @(*) begin
  data_rs1_ex = 'b0;
  data_rs2_ex = 'b0;
  if (instr_mem_enable_min1) begin
    data_rs1_ex = data_rs1;
    data_rs2_ex = data_rs2;
  end

end

always @(posedge clock) begin
  if (reset) begin
    ex_pc_value <= 'b0;
    //data_rs1_ex <= 'b0;
    //data_rs2_ex <= 'b0;
    addr_rs1_ex <= 'b0;
    addr_rs2_ex <= 'b0;
    addr_rd_ex <= 'b0;
    opcode_ex <= 'b0;
    imm_ex <= 'b0;
    shamt_ex <= 'b0;
    funct3_ex <= 'b0;
    funct7_ex <= 'b0;
    write_enable_ex <= 'b0;
  end else begin
    if (!branch_taken_pc && !decode_stall) begin
    ex_pc_value <= pc_d;
    //data_rs1_ex <= data_rs1;
    //data_rs2_ex <= data_rs2;
    addr_rs1_ex <= addr_rs1;
    addr_rs2_ex <= addr_rs2;
    addr_rd_ex <= addr_rd;
    opcode_ex <= opcode;
    imm_ex <= imm;
    shamt_ex <= shamt;
    funct3_ex <= funct3;
    funct7_ex <= funct7;
    write_enable_ex <= write_enable_in;
    end else begin
      ex_pc_value <= pc_d;
      //data_rs1_ex <= 'b0;
      //data_rs2_ex <= 'b0;
      addr_rs1_ex <= 'b0;
      addr_rs2_ex <= 'b0;
      addr_rd_ex <= 'b0;
      imm_ex <= 'b0;
      shamt_ex <= 'b0;
      write_enable_ex <= 1'b1;
      opcode_ex <= 7'b0010011;
      funct3_ex <= 'b0;
      funct7_ex <= 'b0;
    end

    
  end
end

reg [31:0] data_rs1_ex_bypass; // todo
reg [31:0] data_rs2_ex_bypass; // TODO

always @(*) begin
  data_rs1_ex_bypass = data_rs1_ex;
  data_rs2_ex_bypass = data_rs2_ex;
  if ((addr_rd_wb == addr_rs1_ex) && (write_enable_wb) && (addr_rd_wb != 0)) begin
    data_rs1_ex_bypass = wb_data;
  end
  if ((addr_rd_wb == addr_rs2_ex) && (write_enable_wb) && (addr_rd_wb != 0)) begin
    data_rs2_ex_bypass = wb_data;
  end
  if ((addr_rd_mem == addr_rs1_ex) && (opcode_mem != 7'b0000011) && write_enable_mem && (addr_rd_mem != 0)) begin
    data_rs1_ex_bypass = alu_result_mem; // fix above line, && (opcode_mem != opcode_wb == 7'b1101111) && (opcode_mem != 7'b1100111) 
  end

  if ((addr_rd_mem == addr_rs2_ex) && (opcode_mem != 7'b0000011) && write_enable_mem && (addr_rd_mem != 0)) begin
    data_rs2_ex_bypass = alu_result_mem; // fix aboveline, && (opcode_mem != opcode_wb == 7'b1101111) && (opcode_mem != 7'b1100111)
  end

end

always @(*) begin
  branch_taken = 0;
  if (opcode_ex == 'b1100011) begin
    
    case (funct3_ex)
    3'b000: branch_taken = (data_rs1_ex_bypass == data_rs2_ex_bypass);
    3'b001: branch_taken = !(data_rs1_ex_bypass == data_rs2_ex_bypass);
    3'b100: branch_taken = $signed(data_rs1_ex_bypass) < $signed(data_rs2_ex_bypass);
    3'b101: branch_taken = ($signed(data_rs1_ex_bypass) >= $signed(data_rs2_ex_bypass));
    3'b110: branch_taken = $unsigned(data_rs1_ex_bypass) < $unsigned(data_rs2_ex_bypass);
    3'b111: branch_taken = $unsigned(data_rs1_ex_bypass) >= $unsigned(data_rs2_ex_bypass);
    default: branch_taken = 0;
    endcase 
  end 
  if (opcode_ex == 7'b1100111) begin
    branch_taken = 'b0;
  end
  if (opcode_ex == 7'b1101111) begin
    branch_taken = 'b0;
  end
  
end

//ALU
reg [31:0] alu_result;
always @(*) begin
  alu_result = 'b0;
   case (opcode_ex)
    7'b0010111: // AUIPC
    alu_result = $unsigned(ex_pc_value) + $signed(imm_ex);
    7'b0110111: // LUI
    alu_result = imm_ex;

    7'b1101111: // JAL
    alu_result = $unsigned(ex_pc_value) + $signed(imm_ex);

    7'b1100111: // JALR
    alu_result = ($signed(data_rs1_ex_bypass) + $signed(imm_ex))&~1;
    7'b0000011: // LOAD
    alu_result = $signed(data_rs1_ex_bypass) + $signed(imm_ex);
    7'b0010011: begin // OP-IMM
     if (funct3_ex == 0) begin

        alu_result = $signed(data_rs1_ex_bypass) + $signed(imm_ex);

    end
    if (funct3_ex == 1) begin //sll
      alu_result = data_rs1_ex_bypass << imm_ex;
    end
    if (funct3_ex == 'b010) begin //slt
    alu_result = ($signed(data_rs1_ex_bypass) < $signed(imm_ex)) ? 32'd1 : 32'd0;
    end
    if (funct3_ex == 'b011) begin //sltu
    alu_result = ($unsigned(data_rs1_ex_bypass) < $unsigned(imm_ex)) ? 32'd1 : 32'd0;
    end
    if (funct3_ex == 'b100) begin //xor
    alu_result = data_rs1_ex_bypass ^ imm_ex;
    end
    if (funct3_ex == 'b101) begin //srl,sra
        if (funct7_ex == 7'b0000000) begin 
        alu_result = data_rs1_ex_bypass >> imm_ex;
        end else if (funct7_ex == 7'b0100000) begin 
        alu_result = $signed(data_rs1_ex_bypass) >>> imm_ex;
        end
    end
    if (funct3_ex == 'b110) begin //or
    alu_result = data_rs1_ex_bypass | imm_ex;
    end
    if (funct3_ex == 'b111) begin //and
    alu_result = data_rs1_ex_bypass & imm_ex;
    end
    end

    7'b0100011: // STORE
    alu_result = data_rs1_ex_bypass + imm_ex;

    7'b1100011: // BRANCH
    alu_result = $unsigned(ex_pc_value) + $signed(imm_ex);

    7'b0110011: begin // R-R
    if (funct3_ex == 0) begin
      if (funct7_ex[5]) begin
        alu_result = $signed(data_rs1_ex_bypass) - $signed(data_rs2_ex_bypass);
      end else begin
        alu_result = $signed(data_rs1_ex_bypass) + $signed(data_rs2_ex_bypass);
      end
    end
    if (funct3_ex == 1) begin //sll
      alu_result = data_rs1_ex_bypass << data_rs2_ex_bypass[4:0];
    end
    if (funct3_ex == 'b010) begin //slt
    alu_result = ($signed(data_rs1_ex_bypass) < $signed(data_rs2_ex_bypass)) ? 32'd1 : 32'd0;
    end
    if (funct3_ex == 'b011) begin //sltu
    alu_result = (data_rs1_ex_bypass < data_rs2_ex_bypass) ? 32'd1 : 32'd0;
    end
    if (funct3_ex == 'b100) begin //xor
    alu_result = data_rs1_ex_bypass ^ data_rs2_ex_bypass;
    end
    if (funct3_ex == 'b101) begin //srl,sra
        if (funct7_ex == 7'b0000000) begin 
        alu_result = data_rs1_ex_bypass >> data_rs2_ex_bypass[4:0];
        end else if (funct7_ex == 7'b0100000) begin 
        alu_result = $signed(data_rs1_ex_bypass) >>> data_rs2_ex_bypass[4:0];
        end
    end
    if (funct3_ex == 'b110) begin //or
    alu_result = data_rs1_ex_bypass | data_rs2_ex_bypass;
    end
    if (funct3_ex == 'b111) begin //and
    alu_result = data_rs1_ex_bypass & data_rs2_ex_bypass;
    end
    end


    default:
    alu_result = 'b0;
  endcase
end

/////////////////////////////////PD 4 CODE BELOW ////////////////////////////////////////
reg [6:0] opcode_mem;
reg [31:0] alu_result_mem;
reg [31:0] data_rs2_mem;
reg [2:0] funct3_mem;
reg [31:0] pc_mem;
reg[4:0] addr_rd_mem, addr_rs2_mem;
reg write_enable_mem;

always @(posedge clock) begin
  if(reset) begin
    opcode_mem <= 'b0;
    alu_result_mem <= 'b0;
    data_rs2_mem <= 'b0;
    funct3_mem <= 'b0;
    pc_mem <= 'b0;
    addr_rd_mem <= 'b0;
    addr_rs2_mem <= 'b0;
    write_enable_mem <= 'b0;
  end else begin
    opcode_mem <= opcode_ex;
    alu_result_mem <= alu_result;
    data_rs2_mem <= data_rs2_ex_bypass;
    funct3_mem <= funct3_ex;
    pc_mem <= ex_pc_value;
    addr_rd_mem <= addr_rd_ex;
    addr_rs2_mem <= addr_rs2_ex;
    write_enable_mem <= write_enable_ex;
  end
end



reg [31:0] data_rs2_mem_bypass; // TODO
always @(*) begin
  data_rs2_mem_bypass = data_rs2_mem;
  if ((addr_rd_wb == addr_rs2_mem) && write_enable_wb && (addr_rd_wb != 0)) begin
    data_rs2_mem_bypass = wb_data;
  end
end

wire dmem_write;
assign dmem_write = (opcode_mem == 7'b0100011);
wire [31:0] dmem_addr;
reg [31:0] dmem_out;
wire [31:0] dmem_out_pre;
dmemory u_dmemory (
    .clock(clock),
  .data_in(data_rs2_mem_bypass),
  .data_out(dmem_out_pre),
  .address(alu_result_mem),
  .read_write(dmem_write),
  .access_size(funct3_mem[1:0])

);

reg [2:0] funct3_mem_min1;

always @(posedge clock) begin
  if (reset) begin
    funct3_mem_min1 <= 'b0;

  end else begin
    funct3_mem_min1 <= funct3_mem;
  end
end

always @(*) begin
    case (funct3_mem_min1)
    3'b000:dmem_out = {{24{dmem_out_pre[7]}}, dmem_out_pre[7:0]};
    3'b01: dmem_out = {{16{dmem_out_pre[15]}}, dmem_out_pre[15:8], dmem_out_pre[7:0]};
    3'b010:dmem_out = dmem_out_pre;
    3'b101:dmem_out = {16'b0, dmem_out_pre[15:8], dmem_out_pre[7:0]};
    3'b100:dmem_out = {24'b0, dmem_out_pre[7:0]};
    default: dmem_out = 32'hBADF00D;
    endcase
end


wire [31:0] next_pc_mem;
assign next_pc_mem = pc_mem + 4;


//WB
reg [6:0] opcode_wb;
//reg [31:0] dmem_out_wb;
wire [31:0] dmem_out_wb;
reg [31:0] pc_wb;
reg [31:0] next_pc_wb;
reg [31:0] alu_result_wb;
reg [4:0] addr_rd_wb;
reg write_enable_wb;

assign dmem_out_wb = dmem_out;

always @(posedge clock) begin
  if(reset) begin
    opcode_wb <= 'b0;
    //dmem_out_wb <= 'b0;
    pc_wb <= 'b0;
    next_pc_wb <= 'b0;
    alu_result_wb <= 'b0; 
    addr_rd_wb <= 'b0;
    write_enable_wb <= 'b0;
  end else begin
    opcode_wb <= opcode_mem;
    //dmem_out_wb <= dmem_out;
    pc_wb <= pc_mem;
    next_pc_wb <= next_pc_mem;
    alu_result_wb <= alu_result_mem;
    addr_rd_wb <= addr_rd_mem;
    write_enable_wb <= write_enable_mem;
  end
end
wire [31:0] wb_data;
assign wb_data = (opcode_wb == 7'b0000011) ? dmem_out_wb : ((opcode_wb == 7'b1101111) || (opcode_wb == 7'b1100111)) ? (next_pc_wb) : alu_result_wb;

assign data_rd = wb_data;

wire [1:0] access_size;
assign access_size = funct3_mem[1:0];


endmodule
