#include <stdio.h>
#include <stdint.h>

uint64_t f_s_wallace_cla4(uint64_t a, uint64_t b){
  uint8_t f_s_wallace_cla4_out = 0;
  uint8_t f_s_wallace_cla4_and_2_0 = 0;
  uint8_t f_s_wallace_cla4_and_1_1 = 0;
  uint8_t f_s_wallace_cla4_ha0_xor0 = 0;
  uint8_t f_s_wallace_cla4_ha0_and0 = 0;
  uint8_t f_s_wallace_cla4_nand_3_0 = 0;
  uint8_t f_s_wallace_cla4_and_2_1 = 0;
  uint8_t f_s_wallace_cla4_fa0_xor0 = 0;
  uint8_t f_s_wallace_cla4_fa0_and0 = 0;
  uint8_t f_s_wallace_cla4_fa0_xor1 = 0;
  uint8_t f_s_wallace_cla4_fa0_and1 = 0;
  uint8_t f_s_wallace_cla4_fa0_or0 = 0;
  uint8_t f_s_wallace_cla4_nand_3_1 = 0;
  uint8_t f_s_wallace_cla4_fa1_xor0 = 0;
  uint8_t f_s_wallace_cla4_fa1_xor1 = 0;
  uint8_t f_s_wallace_cla4_fa1_and1 = 0;
  uint8_t f_s_wallace_cla4_fa1_or0 = 0;
  uint8_t f_s_wallace_cla4_and_1_2 = 0;
  uint8_t f_s_wallace_cla4_nand_0_3 = 0;
  uint8_t f_s_wallace_cla4_ha1_xor0 = 0;
  uint8_t f_s_wallace_cla4_ha1_and0 = 0;
  uint8_t f_s_wallace_cla4_and_2_2 = 0;
  uint8_t f_s_wallace_cla4_nand_1_3 = 0;
  uint8_t f_s_wallace_cla4_fa2_xor0 = 0;
  uint8_t f_s_wallace_cla4_fa2_and0 = 0;
  uint8_t f_s_wallace_cla4_fa2_xor1 = 0;
  uint8_t f_s_wallace_cla4_fa2_and1 = 0;
  uint8_t f_s_wallace_cla4_fa2_or0 = 0;
  uint8_t f_s_wallace_cla4_nand_3_2 = 0;
  uint8_t f_s_wallace_cla4_fa3_xor0 = 0;
  uint8_t f_s_wallace_cla4_fa3_and0 = 0;
  uint8_t f_s_wallace_cla4_fa3_xor1 = 0;
  uint8_t f_s_wallace_cla4_fa3_and1 = 0;
  uint8_t f_s_wallace_cla4_fa3_or0 = 0;
  uint8_t f_s_wallace_cla4_and_0_0 = 0;
  uint8_t f_s_wallace_cla4_and_1_0 = 0;
  uint8_t f_s_wallace_cla4_and_0_2 = 0;
  uint8_t f_s_wallace_cla4_nand_2_3 = 0;
  uint8_t f_s_wallace_cla4_and_0_1 = 0;
  uint8_t f_s_wallace_cla4_and_3_3 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic0_or0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic0_and0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic0_xor0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic1_or0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic1_and0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic1_xor0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_xor1 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_and0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_or0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic2_or0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic2_and0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic2_xor0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_xor2 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_and1 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_and2 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_and3 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_and4 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_or1 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_or2 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic3_or0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic3_and0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic3_xor0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_xor3 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_and5 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_and6 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_and7 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_and8 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_and9 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_and10 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_and11 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_or3 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_or4 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_or5 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic4_or0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic4_and0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic4_xor0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_xor4 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_and12 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_or6 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic5_or0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic5_and0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_pg_logic5_xor0 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_xor5 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_and13 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_and14 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_and15 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_or7 = 0;
  uint8_t f_s_wallace_cla4_u_cla6_or8 = 0;
  uint8_t f_s_wallace_cla4_xor0 = 0;

  f_s_wallace_cla4_and_2_0 = ((a >> 2) & 0x01) & ((b >> 0) & 0x01);
  f_s_wallace_cla4_and_1_1 = ((a >> 1) & 0x01) & ((b >> 1) & 0x01);
  f_s_wallace_cla4_ha0_xor0 = ((f_s_wallace_cla4_and_2_0 >> 0) & 0x01) ^ ((f_s_wallace_cla4_and_1_1 >> 0) & 0x01);
  f_s_wallace_cla4_ha0_and0 = ((f_s_wallace_cla4_and_2_0 >> 0) & 0x01) & ((f_s_wallace_cla4_and_1_1 >> 0) & 0x01);
  f_s_wallace_cla4_nand_3_0 = ~(((a >> 3) & 0x01) & ((b >> 0) & 0x01)) & 0x01;
  f_s_wallace_cla4_and_2_1 = ((a >> 2) & 0x01) & ((b >> 1) & 0x01);
  f_s_wallace_cla4_fa0_xor0 = ((f_s_wallace_cla4_ha0_and0 >> 0) & 0x01) ^ ((f_s_wallace_cla4_nand_3_0 >> 0) & 0x01);
  f_s_wallace_cla4_fa0_and0 = ((f_s_wallace_cla4_ha0_and0 >> 0) & 0x01) & ((f_s_wallace_cla4_nand_3_0 >> 0) & 0x01);
  f_s_wallace_cla4_fa0_xor1 = ((f_s_wallace_cla4_fa0_xor0 >> 0) & 0x01) ^ ((f_s_wallace_cla4_and_2_1 >> 0) & 0x01);
  f_s_wallace_cla4_fa0_and1 = ((f_s_wallace_cla4_fa0_xor0 >> 0) & 0x01) & ((f_s_wallace_cla4_and_2_1 >> 0) & 0x01);
  f_s_wallace_cla4_fa0_or0 = ((f_s_wallace_cla4_fa0_and0 >> 0) & 0x01) | ((f_s_wallace_cla4_fa0_and1 >> 0) & 0x01);
  f_s_wallace_cla4_nand_3_1 = ~(((a >> 3) & 0x01) & ((b >> 1) & 0x01)) & 0x01;
  f_s_wallace_cla4_fa1_xor0 = ~(((f_s_wallace_cla4_fa0_or0 >> 0) & 0x01)) & 0x01;
  f_s_wallace_cla4_fa1_xor1 = ((f_s_wallace_cla4_fa1_xor0 >> 0) & 0x01) ^ ((f_s_wallace_cla4_nand_3_1 >> 0) & 0x01);
  f_s_wallace_cla4_fa1_and1 = ((f_s_wallace_cla4_fa1_xor0 >> 0) & 0x01) & ((f_s_wallace_cla4_nand_3_1 >> 0) & 0x01);
  f_s_wallace_cla4_fa1_or0 = ((f_s_wallace_cla4_fa0_or0 >> 0) & 0x01) | ((f_s_wallace_cla4_fa1_and1 >> 0) & 0x01);
  f_s_wallace_cla4_and_1_2 = ((a >> 1) & 0x01) & ((b >> 2) & 0x01);
  f_s_wallace_cla4_nand_0_3 = ~(((a >> 0) & 0x01) & ((b >> 3) & 0x01)) & 0x01;
  f_s_wallace_cla4_ha1_xor0 = ((f_s_wallace_cla4_and_1_2 >> 0) & 0x01) ^ ((f_s_wallace_cla4_nand_0_3 >> 0) & 0x01);
  f_s_wallace_cla4_ha1_and0 = ((f_s_wallace_cla4_and_1_2 >> 0) & 0x01) & ((f_s_wallace_cla4_nand_0_3 >> 0) & 0x01);
  f_s_wallace_cla4_and_2_2 = ((a >> 2) & 0x01) & ((b >> 2) & 0x01);
  f_s_wallace_cla4_nand_1_3 = ~(((a >> 1) & 0x01) & ((b >> 3) & 0x01)) & 0x01;
  f_s_wallace_cla4_fa2_xor0 = ((f_s_wallace_cla4_ha1_and0 >> 0) & 0x01) ^ ((f_s_wallace_cla4_and_2_2 >> 0) & 0x01);
  f_s_wallace_cla4_fa2_and0 = ((f_s_wallace_cla4_ha1_and0 >> 0) & 0x01) & ((f_s_wallace_cla4_and_2_2 >> 0) & 0x01);
  f_s_wallace_cla4_fa2_xor1 = ((f_s_wallace_cla4_fa2_xor0 >> 0) & 0x01) ^ ((f_s_wallace_cla4_nand_1_3 >> 0) & 0x01);
  f_s_wallace_cla4_fa2_and1 = ((f_s_wallace_cla4_fa2_xor0 >> 0) & 0x01) & ((f_s_wallace_cla4_nand_1_3 >> 0) & 0x01);
  f_s_wallace_cla4_fa2_or0 = ((f_s_wallace_cla4_fa2_and0 >> 0) & 0x01) | ((f_s_wallace_cla4_fa2_and1 >> 0) & 0x01);
  f_s_wallace_cla4_nand_3_2 = ~(((a >> 3) & 0x01) & ((b >> 2) & 0x01)) & 0x01;
  f_s_wallace_cla4_fa3_xor0 = ((f_s_wallace_cla4_fa2_or0 >> 0) & 0x01) ^ ((f_s_wallace_cla4_fa1_or0 >> 0) & 0x01);
  f_s_wallace_cla4_fa3_and0 = ((f_s_wallace_cla4_fa2_or0 >> 0) & 0x01) & ((f_s_wallace_cla4_fa1_or0 >> 0) & 0x01);
  f_s_wallace_cla4_fa3_xor1 = ((f_s_wallace_cla4_fa3_xor0 >> 0) & 0x01) ^ ((f_s_wallace_cla4_nand_3_2 >> 0) & 0x01);
  f_s_wallace_cla4_fa3_and1 = ((f_s_wallace_cla4_fa3_xor0 >> 0) & 0x01) & ((f_s_wallace_cla4_nand_3_2 >> 0) & 0x01);
  f_s_wallace_cla4_fa3_or0 = ((f_s_wallace_cla4_fa3_and0 >> 0) & 0x01) | ((f_s_wallace_cla4_fa3_and1 >> 0) & 0x01);
  f_s_wallace_cla4_and_0_0 = ((a >> 0) & 0x01) & ((b >> 0) & 0x01);
  f_s_wallace_cla4_and_1_0 = ((a >> 1) & 0x01) & ((b >> 0) & 0x01);
  f_s_wallace_cla4_and_0_2 = ((a >> 0) & 0x01) & ((b >> 2) & 0x01);
  f_s_wallace_cla4_nand_2_3 = ~(((a >> 2) & 0x01) & ((b >> 3) & 0x01)) & 0x01;
  f_s_wallace_cla4_and_0_1 = ((a >> 0) & 0x01) & ((b >> 1) & 0x01);
  f_s_wallace_cla4_and_3_3 = ((a >> 3) & 0x01) & ((b >> 3) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic0_or0 = ((f_s_wallace_cla4_and_1_0 >> 0) & 0x01) | ((f_s_wallace_cla4_and_0_1 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic0_and0 = ((f_s_wallace_cla4_and_1_0 >> 0) & 0x01) & ((f_s_wallace_cla4_and_0_1 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic0_xor0 = ((f_s_wallace_cla4_and_1_0 >> 0) & 0x01) ^ ((f_s_wallace_cla4_and_0_1 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic1_or0 = ((f_s_wallace_cla4_and_0_2 >> 0) & 0x01) | ((f_s_wallace_cla4_ha0_xor0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic1_and0 = ((f_s_wallace_cla4_and_0_2 >> 0) & 0x01) & ((f_s_wallace_cla4_ha0_xor0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic1_xor0 = ((f_s_wallace_cla4_and_0_2 >> 0) & 0x01) ^ ((f_s_wallace_cla4_ha0_xor0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_xor1 = ((f_s_wallace_cla4_u_cla6_pg_logic1_xor0 >> 0) & 0x01) ^ ((f_s_wallace_cla4_u_cla6_pg_logic0_and0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_and0 = ((f_s_wallace_cla4_u_cla6_pg_logic0_and0 >> 0) & 0x01) & ((f_s_wallace_cla4_u_cla6_pg_logic1_or0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_or0 = ((f_s_wallace_cla4_u_cla6_pg_logic1_and0 >> 0) & 0x01) | ((f_s_wallace_cla4_u_cla6_and0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic2_or0 = ((f_s_wallace_cla4_fa0_xor1 >> 0) & 0x01) | ((f_s_wallace_cla4_ha1_xor0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic2_and0 = ((f_s_wallace_cla4_fa0_xor1 >> 0) & 0x01) & ((f_s_wallace_cla4_ha1_xor0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic2_xor0 = ((f_s_wallace_cla4_fa0_xor1 >> 0) & 0x01) ^ ((f_s_wallace_cla4_ha1_xor0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_xor2 = ((f_s_wallace_cla4_u_cla6_pg_logic2_xor0 >> 0) & 0x01) ^ ((f_s_wallace_cla4_u_cla6_or0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_and1 = ((f_s_wallace_cla4_u_cla6_pg_logic2_or0 >> 0) & 0x01) & ((f_s_wallace_cla4_u_cla6_pg_logic0_or0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_and2 = ((f_s_wallace_cla4_u_cla6_pg_logic0_and0 >> 0) & 0x01) & ((f_s_wallace_cla4_u_cla6_pg_logic2_or0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_and3 = ((f_s_wallace_cla4_u_cla6_and2 >> 0) & 0x01) & ((f_s_wallace_cla4_u_cla6_pg_logic1_or0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_and4 = ((f_s_wallace_cla4_u_cla6_pg_logic1_and0 >> 0) & 0x01) & ((f_s_wallace_cla4_u_cla6_pg_logic2_or0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_or1 = ((f_s_wallace_cla4_u_cla6_and3 >> 0) & 0x01) | ((f_s_wallace_cla4_u_cla6_and4 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_or2 = ((f_s_wallace_cla4_u_cla6_pg_logic2_and0 >> 0) & 0x01) | ((f_s_wallace_cla4_u_cla6_or1 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic3_or0 = ((f_s_wallace_cla4_fa1_xor1 >> 0) & 0x01) | ((f_s_wallace_cla4_fa2_xor1 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic3_and0 = ((f_s_wallace_cla4_fa1_xor1 >> 0) & 0x01) & ((f_s_wallace_cla4_fa2_xor1 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic3_xor0 = ((f_s_wallace_cla4_fa1_xor1 >> 0) & 0x01) ^ ((f_s_wallace_cla4_fa2_xor1 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_xor3 = ((f_s_wallace_cla4_u_cla6_pg_logic3_xor0 >> 0) & 0x01) ^ ((f_s_wallace_cla4_u_cla6_or2 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_and5 = ((f_s_wallace_cla4_u_cla6_pg_logic3_or0 >> 0) & 0x01) & ((f_s_wallace_cla4_u_cla6_pg_logic1_or0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_and6 = ((f_s_wallace_cla4_u_cla6_pg_logic0_and0 >> 0) & 0x01) & ((f_s_wallace_cla4_u_cla6_pg_logic2_or0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_and7 = ((f_s_wallace_cla4_u_cla6_pg_logic3_or0 >> 0) & 0x01) & ((f_s_wallace_cla4_u_cla6_pg_logic1_or0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_and8 = ((f_s_wallace_cla4_u_cla6_and6 >> 0) & 0x01) & ((f_s_wallace_cla4_u_cla6_and7 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_and9 = ((f_s_wallace_cla4_u_cla6_pg_logic1_and0 >> 0) & 0x01) & ((f_s_wallace_cla4_u_cla6_pg_logic3_or0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_and10 = ((f_s_wallace_cla4_u_cla6_and9 >> 0) & 0x01) & ((f_s_wallace_cla4_u_cla6_pg_logic2_or0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_and11 = ((f_s_wallace_cla4_u_cla6_pg_logic2_and0 >> 0) & 0x01) & ((f_s_wallace_cla4_u_cla6_pg_logic3_or0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_or3 = ((f_s_wallace_cla4_u_cla6_and8 >> 0) & 0x01) | ((f_s_wallace_cla4_u_cla6_and11 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_or4 = ((f_s_wallace_cla4_u_cla6_and10 >> 0) & 0x01) | ((f_s_wallace_cla4_u_cla6_or3 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_or5 = ((f_s_wallace_cla4_u_cla6_pg_logic3_and0 >> 0) & 0x01) | ((f_s_wallace_cla4_u_cla6_or4 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic4_or0 = ((f_s_wallace_cla4_nand_2_3 >> 0) & 0x01) | ((f_s_wallace_cla4_fa3_xor1 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic4_and0 = ((f_s_wallace_cla4_nand_2_3 >> 0) & 0x01) & ((f_s_wallace_cla4_fa3_xor1 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic4_xor0 = ((f_s_wallace_cla4_nand_2_3 >> 0) & 0x01) ^ ((f_s_wallace_cla4_fa3_xor1 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_xor4 = ((f_s_wallace_cla4_u_cla6_pg_logic4_xor0 >> 0) & 0x01) ^ ((f_s_wallace_cla4_u_cla6_or5 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_and12 = ((f_s_wallace_cla4_u_cla6_or5 >> 0) & 0x01) & ((f_s_wallace_cla4_u_cla6_pg_logic4_or0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_or6 = ((f_s_wallace_cla4_u_cla6_pg_logic4_and0 >> 0) & 0x01) | ((f_s_wallace_cla4_u_cla6_and12 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic5_or0 = ((f_s_wallace_cla4_fa3_or0 >> 0) & 0x01) | ((f_s_wallace_cla4_and_3_3 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic5_and0 = ((f_s_wallace_cla4_fa3_or0 >> 0) & 0x01) & ((f_s_wallace_cla4_and_3_3 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_pg_logic5_xor0 = ((f_s_wallace_cla4_fa3_or0 >> 0) & 0x01) ^ ((f_s_wallace_cla4_and_3_3 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_xor5 = ((f_s_wallace_cla4_u_cla6_pg_logic5_xor0 >> 0) & 0x01) ^ ((f_s_wallace_cla4_u_cla6_or6 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_and13 = ((f_s_wallace_cla4_u_cla6_or5 >> 0) & 0x01) & ((f_s_wallace_cla4_u_cla6_pg_logic5_or0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_and14 = ((f_s_wallace_cla4_u_cla6_and13 >> 0) & 0x01) & ((f_s_wallace_cla4_u_cla6_pg_logic4_or0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_and15 = ((f_s_wallace_cla4_u_cla6_pg_logic4_and0 >> 0) & 0x01) & ((f_s_wallace_cla4_u_cla6_pg_logic5_or0 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_or7 = ((f_s_wallace_cla4_u_cla6_and14 >> 0) & 0x01) | ((f_s_wallace_cla4_u_cla6_and15 >> 0) & 0x01);
  f_s_wallace_cla4_u_cla6_or8 = ((f_s_wallace_cla4_u_cla6_pg_logic5_and0 >> 0) & 0x01) | ((f_s_wallace_cla4_u_cla6_or7 >> 0) & 0x01);
  f_s_wallace_cla4_xor0 = ~(((f_s_wallace_cla4_u_cla6_or8 >> 0) & 0x01)) & 0x01;

  f_s_wallace_cla4_out |= ((f_s_wallace_cla4_and_0_0 >> 0) & 0x01) << 0;
  f_s_wallace_cla4_out |= ((f_s_wallace_cla4_u_cla6_pg_logic0_xor0 >> 0) & 0x01) << 1;
  f_s_wallace_cla4_out |= ((f_s_wallace_cla4_u_cla6_xor1 >> 0) & 0x01) << 2;
  f_s_wallace_cla4_out |= ((f_s_wallace_cla4_u_cla6_xor2 >> 0) & 0x01) << 3;
  f_s_wallace_cla4_out |= ((f_s_wallace_cla4_u_cla6_xor3 >> 0) & 0x01) << 4;
  f_s_wallace_cla4_out |= ((f_s_wallace_cla4_u_cla6_xor4 >> 0) & 0x01) << 5;
  f_s_wallace_cla4_out |= ((f_s_wallace_cla4_u_cla6_xor5 >> 0) & 0x01) << 6;
  f_s_wallace_cla4_out |= ((f_s_wallace_cla4_xor0 >> 0) & 0x01) << 7;
  return f_s_wallace_cla4_out;
}

#include <assert.h>
int main(){
  int result = 0;
  for (int i = -8; i < 8; i++){
    for (int j = -8; j < 8; j++){
      result = i * j;
      
      // Calculating 2's complement in case of negative sum
      if (result < 0) {
        result = 256 + result;  
      }
      
      assert(result == (int)f_s_wallace_cla4(i,j));
    }
  }
  return 0;
}