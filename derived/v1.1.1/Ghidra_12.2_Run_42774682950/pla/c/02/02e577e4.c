/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e577e4; name: FUN_02e577e4
 */


void FUN_02e577e4(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1 + (ulong)*(uint *)(param_1 + 1) * 0x50;
  uVar1 = *param_2;
  while (uVar1 < lVar2 - 0x50U) {
    FUN_02e57670(uVar1,uVar1 + 0x50);
    uVar1 = uVar1 + 0x50;
  }
  lVar2 = lVar2 + -0x10;
  FUN_02e437f0(lVar2);
  FUN_02e437f0(lVar2);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return;
}


