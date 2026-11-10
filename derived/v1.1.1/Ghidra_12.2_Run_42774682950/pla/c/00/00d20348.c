/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d20348; name: FUN_00d20348
 */


void FUN_00d20348(undefined8 *param_1)

{
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00d23bac();
  *param_1 = &PTR_FUN_041ea428;
  param_1[9] = &PTR_LAB_041ea4f0;
  param_1[0xb] = &PTR_LAB_041ea520;
  memcpy(param_1 + 0xc,&PTR_s_N_fade_cross_00_041ea538,0x88);
  memcpy(param_1 + 0x1d,&DAT_03a78248,0xc0);
  memcpy(param_1 + 0x35,&PTR_s_fade_common_00_fade_out_bflan_041ea5c0,0x210);
  param_1[0x77] = 0;
  param_1[0x79] = &DAT_03996322;
  param_1[0x78] = &DAT_cbf29ce484222645;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  FUN_02c39da4(param_1 + 0x7c);
  param_1[0x98] = &PTR_LAB_041ea870;
  param_1[0xa1] = 0xffffffffffffffff;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0xffffffff;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)((long)param_1 + 0x582) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  return;
}


