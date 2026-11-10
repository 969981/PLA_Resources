/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014eb374; name: FUN_014eb374
 */


long FUN_014eb374(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_014fe55c(*(undefined8 *)(param_1 + 0x1a8));
  if (iVar1 == 0) {
    iVar1 = FUN_014fe69c(*(undefined8 *)(param_1 + 0x1a8),0);
    lVar2 = (ulong)(iVar1 == 0) << 1;
  }
  else {
    lVar2 = 1;
  }
  return lVar2;
}


