/* Your Code Below! Enable the following define's
 * and replace ??? with actual wires */
// ----- signals -----
// You will also need to define PC properly
`define F_PC                pc_value 
`define F_INSN              dataout

`define D_PC                pc_d
`define D_OPCODE            opcode
`define D_RD                rd
`define D_RS1               rs1
`define D_RS2               rs2
`define D_FUNCT3            funct3
`define D_FUNCT7            funct7
`define D_IMM               imm
`define D_SHAMT             shamt

`define R_WRITE_ENABLE      write_enable_wb
`define R_WRITE_DESTINATION addr_rd_wb
`define R_WRITE_DATA        data_rd
`define R_READ_RS1          addr_rs1
`define R_READ_RS2          addr_rs2
`define R_READ_RS1_DATA     data_rs1
`define R_READ_RS2_DATA     data_rs2

`define E_PC                ex_pc_value
`define E_ALU_RES           alu_result
`define E_BR_TAKEN          branch_taken

`define M_PC                pc_mem
`define M_ADDRESS           alu_result_mem
`define M_RW                dmem_write
`define M_SIZE_ENCODED      access_size
`define M_DATA              data_rs2_mem_bypass

`define W_PC                pc_wb
`define W_ENABLE            write_enable_module
`define W_DESTINATION       addr_rd_wb
`define W_DATA              wb_data

`define IMEMORY             u_imemory
`define DMEMORY             u_dmemory

// ----- signals -----

// ----- design -----
`define TOP_MODULE                 pd
// ----- design -----
