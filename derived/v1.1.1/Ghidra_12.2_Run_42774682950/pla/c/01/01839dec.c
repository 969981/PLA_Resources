/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01839dec; name: FUN_01839dec
 */


int FUN_01839dec(long param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if (*(int *)(param_1 + 0x278) < 2) {
    iVar1 = *(int *)(param_1 + 0x278) + 1;
  }
  *(int *)(param_1 + 0x278) = iVar1;
  return iVar1;
}


