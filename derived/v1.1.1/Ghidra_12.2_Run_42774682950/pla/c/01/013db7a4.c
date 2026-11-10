/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013db7a4; name: FUN_013db7a4
 */


void FUN_013db7a4(undefined4 *param_1,undefined4 *param_2,byte param_3)

{
  undefined4 uVar1;
  
  param_1[2] = 0;
  uVar1 = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 4) = 0xffffffff00000000;
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  if ((uint)param_2[2] < 6) {
    uVar1 = *(undefined4 *)(&DAT_03a7b790 + (long)(int)param_2[2] * 4);
  }
  param_1[2] = uVar1;
  *(byte *)(param_1 + 3) = param_3 & 1;
  return;
}


