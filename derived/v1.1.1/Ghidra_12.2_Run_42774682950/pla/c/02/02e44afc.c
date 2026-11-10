/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e44afc; name: FUN_02e44afc
 */


ulong FUN_02e44afc(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x80) - 0x80;
  uVar1 = *param_2;
  while (uVar1 < uVar2) {
    FUN_02e44b70(uVar1,uVar1 + 0x80);
    uVar1 = uVar1 + 0x80;
  }
  FUN_02e4499c(uVar2);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return *param_2;
}


