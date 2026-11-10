/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba07c8; name: FUN_01ba07c8
 */


void FUN_01ba07c8(long param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x8b0) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x8b4);
  if (param_2 <= *(int *)(param_1 + 0x8b4)) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x8b0) = iVar1;
  return;
}


