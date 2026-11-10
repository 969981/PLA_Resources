/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f3f7c; name: FUN_007f3f7c
 */


bool FUN_007f3f7c(long param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar2 = FUN_007fabd0();
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}


