/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b6d38; name: FUN_005b6d38
 */


void FUN_005b6d38(long *param_1,long *param_2,long param_3,long param_4,long param_5,long param_6,
                 long param_7,long param_8,long *param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04374fe8;
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  param_1[3] = *param_2;
  *param_2 = 0;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[10] = 0;
  param_1[6] = param_5;
  param_1[7] = param_6;
  param_1[8] = param_7;
  param_1[9] = param_8;
  param_1[10] = *param_9;
  *param_9 = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
                    /* try { // try from 005b6d9c to 005b6d9f has its CatchHandler @ 005b6dbc */
  FUN_002ef6d0(param_1 + 0xf);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = (long)(param_1 + 0x14);
  return;
}


