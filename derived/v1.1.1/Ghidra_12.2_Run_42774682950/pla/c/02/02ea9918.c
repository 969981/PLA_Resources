/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea9918; name: FUN_02ea9918
 */


void FUN_02ea9918(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1 + (ulong)(uint)param_1[1] * 0x18;
  uVar1 = *param_1;
  while (uVar1 < lVar2 - 0x18U) {
    FUN_02ea9988(uVar1,uVar1 + 0x18);
    uVar1 = uVar1 + 0x18;
  }
  if (*(long *)(lVar2 + -8) != 0) {
    FUN_02e771a8();
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return;
}


