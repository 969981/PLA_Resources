/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b69b8; name: FUN_005b69b8
 */


void FUN_005b69b8(long *param_1,long *param_2,long param_3,long param_4,long param_5,long param_6,
                 long param_7,long param_8)

{
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = (long)(PTR_DAT_04374fe0 + 0x10);
  param_1[1] = 0;
  param_1[3] = *param_2;
  *param_2 = 0;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[6] = param_5;
  param_1[7] = param_6;
  param_1[8] = param_7;
  param_1[9] = param_8;
                    /* try { // try from 005b69f8 to 005b69fb has its CatchHandler @ 005b6a14 */
  FUN_002ef6d0(param_1 + 10);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = (long)(param_1 + 0xf);
  return;
}


