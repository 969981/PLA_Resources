/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e53d18; name: FUN_02e53d18
 */


void FUN_02e53d18(float *param_1,float *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  
  param_1[0x14] = param_2[6];
  param_1[0x15] = param_2[7];
  param_1[0x16] = param_2[8];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  FUN_02e53e1c();
  pfVar1 = param_1 + 3;
  *pfVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  FUN_02e53e1c(pfVar1);
  param_1[0x1a] = param_1[2] * param_1[4] - param_1[1] * param_1[5];
  param_1[0x1b] = *param_1 * param_1[5] - *pfVar1 * param_1[2];
  param_1[0x1c] = *pfVar1 * param_1[1] - *param_1 * param_1[4];
  param_1[0x17] = ABS(param_2[9]);
  param_1[0x18] = ABS(param_2[10]);
  param_1[0x19] = ABS(param_2[0xb]);
  uVar2 = *(undefined8 *)(param_2 + 0xe);
  FUN_02e437f0(param_1 + 6);
  *(undefined8 *)(param_1 + 6) = uVar2;
  FUN_02e43834(param_1 + 6);
  *(undefined1 *)(param_1 + 0x1a4) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0xe) = 1;
  return;
}


