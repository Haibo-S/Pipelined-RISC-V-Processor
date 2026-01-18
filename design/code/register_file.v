module register_file
(
    input wire clock,
    input wire [4:0] addr_rs1,
    input wire [4:0] addr_rs2,
    input wire [4:0] addr_rd,
    input wire [31:0] data_rd,
    output reg [31:0] data_rs1,
    output reg [31:0] data_rs2, 
    input wire write_enable

    
);

(* ram_style = "block" *) reg [31:0] reg_file [0:31];
integer i;
initial begin
    for (i = 0; i < 32; i = i + 1) begin
        if (i != 2) begin
            reg_file[i] = 'b0;
        end else begin
            reg_file[i] = 32'h01000000 + `MEM_DEPTH;
        end
    end
end

always @(posedge clock) begin
    data_rs1 <= reg_file[addr_rs1];
    data_rs2 <= reg_file[addr_rs2];
end


always @(posedge clock) begin


    if (write_enable && |addr_rd) begin
        reg_file[addr_rd] <= data_rd;
    end

    

end




endmodule
