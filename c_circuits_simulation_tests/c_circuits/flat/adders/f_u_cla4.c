#include <stdio.h>
#include <stdint.h>

uint64_t f_u_cla4(uint64_t a, uint64_t b){
  uint8_t f_u_cla4_out = 0;
  uint8_t f_u_cla4_pg_logic0_or0 = 0;
  uint8_t f_u_cla4_pg_logic0_and0 = 0;
  uint8_t f_u_cla4_pg_logic0_xor0 = 0;
  uint8_t f_u_cla4_pg_logic1_or0 = 0;
  uint8_t f_u_cla4_pg_logic1_and0 = 0;
  uint8_t f_u_cla4_pg_logic1_xor0 = 0;
  uint8_t f_u_cla4_xor1 = 0;
  uint8_t f_u_cla4_and0 = 0;
  uint8_t f_u_cla4_or0 = 0;
  uint8_t f_u_cla4_pg_logic2_or0 = 0;
  uint8_t f_u_cla4_pg_logic2_and0 = 0;
  uint8_t f_u_cla4_pg_logic2_xor0 = 0;
  uint8_t f_u_cla4_xor2 = 0;
  uint8_t f_u_cla4_and1 = 0;
  uint8_t f_u_cla4_and2 = 0;
  uint8_t f_u_cla4_and3 = 0;
  uint8_t f_u_cla4_and4 = 0;
  uint8_t f_u_cla4_or1 = 0;
  uint8_t f_u_cla4_or2 = 0;
  uint8_t f_u_cla4_pg_logic3_or0 = 0;
  uint8_t f_u_cla4_pg_logic3_and0 = 0;
  uint8_t f_u_cla4_pg_logic3_xor0 = 0;
  uint8_t f_u_cla4_xor3 = 0;
  uint8_t f_u_cla4_and5 = 0;
  uint8_t f_u_cla4_and6 = 0;
  uint8_t f_u_cla4_and7 = 0;
  uint8_t f_u_cla4_and8 = 0;
  uint8_t f_u_cla4_and9 = 0;
  uint8_t f_u_cla4_and10 = 0;
  uint8_t f_u_cla4_and11 = 0;
  uint8_t f_u_cla4_or3 = 0;
  uint8_t f_u_cla4_or4 = 0;
  uint8_t f_u_cla4_or5 = 0;

  f_u_cla4_pg_logic0_or0 = ((a >> 0) & 0x01) | ((b >> 0) & 0x01);
  f_u_cla4_pg_logic0_and0 = ((a >> 0) & 0x01) & ((b >> 0) & 0x01);
  f_u_cla4_pg_logic0_xor0 = ((a >> 0) & 0x01) ^ ((b >> 0) & 0x01);
  f_u_cla4_pg_logic1_or0 = ((a >> 1) & 0x01) | ((b >> 1) & 0x01);
  f_u_cla4_pg_logic1_and0 = ((a >> 1) & 0x01) & ((b >> 1) & 0x01);
  f_u_cla4_pg_logic1_xor0 = ((a >> 1) & 0x01) ^ ((b >> 1) & 0x01);
  f_u_cla4_xor1 = ((f_u_cla4_pg_logic1_xor0 >> 0) & 0x01) ^ ((f_u_cla4_pg_logic0_and0 >> 0) & 0x01);
  f_u_cla4_and0 = ((f_u_cla4_pg_logic0_and0 >> 0) & 0x01) & ((f_u_cla4_pg_logic1_or0 >> 0) & 0x01);
  f_u_cla4_or0 = ((f_u_cla4_pg_logic1_and0 >> 0) & 0x01) | ((f_u_cla4_and0 >> 0) & 0x01);
  f_u_cla4_pg_logic2_or0 = ((a >> 2) & 0x01) | ((b >> 2) & 0x01);
  f_u_cla4_pg_logic2_and0 = ((a >> 2) & 0x01) & ((b >> 2) & 0x01);
  f_u_cla4_pg_logic2_xor0 = ((a >> 2) & 0x01) ^ ((b >> 2) & 0x01);
  f_u_cla4_xor2 = ((f_u_cla4_pg_logic2_xor0 >> 0) & 0x01) ^ ((f_u_cla4_or0 >> 0) & 0x01);
  f_u_cla4_and1 = ((f_u_cla4_pg_logic2_or0 >> 0) & 0x01) & ((f_u_cla4_pg_logic0_or0 >> 0) & 0x01);
  f_u_cla4_and2 = ((f_u_cla4_pg_logic0_and0 >> 0) & 0x01) & ((f_u_cla4_pg_logic2_or0 >> 0) & 0x01);
  f_u_cla4_and3 = ((f_u_cla4_and2 >> 0) & 0x01) & ((f_u_cla4_pg_logic1_or0 >> 0) & 0x01);
  f_u_cla4_and4 = ((f_u_cla4_pg_logic1_and0 >> 0) & 0x01) & ((f_u_cla4_pg_logic2_or0 >> 0) & 0x01);
  f_u_cla4_or1 = ((f_u_cla4_and3 >> 0) & 0x01) | ((f_u_cla4_and4 >> 0) & 0x01);
  f_u_cla4_or2 = ((f_u_cla4_pg_logic2_and0 >> 0) & 0x01) | ((f_u_cla4_or1 >> 0) & 0x01);
  f_u_cla4_pg_logic3_or0 = ((a >> 3) & 0x01) | ((b >> 3) & 0x01);
  f_u_cla4_pg_logic3_and0 = ((a >> 3) & 0x01) & ((b >> 3) & 0x01);
  f_u_cla4_pg_logic3_xor0 = ((a >> 3) & 0x01) ^ ((b >> 3) & 0x01);
  f_u_cla4_xor3 = ((f_u_cla4_pg_logic3_xor0 >> 0) & 0x01) ^ ((f_u_cla4_or2 >> 0) & 0x01);
  f_u_cla4_and5 = ((f_u_cla4_pg_logic3_or0 >> 0) & 0x01) & ((f_u_cla4_pg_logic1_or0 >> 0) & 0x01);
  f_u_cla4_and6 = ((f_u_cla4_pg_logic0_and0 >> 0) & 0x01) & ((f_u_cla4_pg_logic2_or0 >> 0) & 0x01);
  f_u_cla4_and7 = ((f_u_cla4_pg_logic3_or0 >> 0) & 0x01) & ((f_u_cla4_pg_logic1_or0 >> 0) & 0x01);
  f_u_cla4_and8 = ((f_u_cla4_and6 >> 0) & 0x01) & ((f_u_cla4_and7 >> 0) & 0x01);
  f_u_cla4_and9 = ((f_u_cla4_pg_logic1_and0 >> 0) & 0x01) & ((f_u_cla4_pg_logic3_or0 >> 0) & 0x01);
  f_u_cla4_and10 = ((f_u_cla4_and9 >> 0) & 0x01) & ((f_u_cla4_pg_logic2_or0 >> 0) & 0x01);
  f_u_cla4_and11 = ((f_u_cla4_pg_logic2_and0 >> 0) & 0x01) & ((f_u_cla4_pg_logic3_or0 >> 0) & 0x01);
  f_u_cla4_or3 = ((f_u_cla4_and8 >> 0) & 0x01) | ((f_u_cla4_and11 >> 0) & 0x01);
  f_u_cla4_or4 = ((f_u_cla4_and10 >> 0) & 0x01) | ((f_u_cla4_or3 >> 0) & 0x01);
  f_u_cla4_or5 = ((f_u_cla4_pg_logic3_and0 >> 0) & 0x01) | ((f_u_cla4_or4 >> 0) & 0x01);

  f_u_cla4_out |= ((f_u_cla4_pg_logic0_xor0 >> 0) & 0x01) << 0;
  f_u_cla4_out |= ((f_u_cla4_xor1 >> 0) & 0x01) << 1;
  f_u_cla4_out |= ((f_u_cla4_xor2 >> 0) & 0x01) << 2;
  f_u_cla4_out |= ((f_u_cla4_xor3 >> 0) & 0x01) << 3;
  f_u_cla4_out |= ((f_u_cla4_or5 >> 0) & 0x01) << 4;
  return f_u_cla4_out;
}

#include <assert.h>
int main(){
  for (int i = 0; i < 16; i++){
    for (int j = 0; j < 16; j++){
      assert((i + j) == f_u_cla4(i,j));
    }
  }
  return 0;
}