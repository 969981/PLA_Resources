/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024bbd8; name: FUN_0024bbd8
 */


void FUN_0024bbd8(ushort *param_1,long param_2)

{
  ushort uVar1;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_2 == 0) {
    *param_1 = *param_1 & 0xe0ff;
    return;
  }
  uVar1 = (ushort)*(byte *)((long)param_1 + 1) << 8;
  *(long *)(param_1 + 4) = param_2;
  *param_1 = uVar1 | 0x90;
  *param_1 = uVar1 & 0xe0ff | 0x90;
  return;
}


