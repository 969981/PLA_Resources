/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5fcb0; name: FUN_02c5fcb0
 */


bool FUN_02c5fcb0(long param_1)

{
  int iVar1;
  
  if (*(long *)(*(long *)(param_1 + 0x98) + 8) == 0) {
    return false;
  }
  iVar1 = FUN_02c66b3c();
  return iVar1 == 0;
}


