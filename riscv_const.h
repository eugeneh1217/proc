/*
 * File defining constants used for RV32I  ISA.
 * Some constants are specific to RV32I
 * Some are universal amongst standard RISCV ISAs
 * Some are specific to this implementation
*/

#ifdef RISCV_CONST_H
#define RISCV_CONST_H

// RISCV STANDARD
#define DOUBLEWORD_SIZE 8
#define WORD_SIZE 4
#define HALFWORD_SIZE 2


// RV32I
#define XLEN 32
#define IALIGN 32

// IMPLEMENTATION
#define MAIN_MEM_START
#define MAIN_MEM_SIZE
#define DEVICE_MEM_START
#define DEVICE_MEM_SIZE

#endif // RISCV_CONST_H
