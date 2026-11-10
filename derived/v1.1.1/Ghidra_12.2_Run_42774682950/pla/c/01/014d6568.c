/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014d6568; name: FUN_014d6568
 */


void FUN_014d6568(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if ((*(long *)(param_1 + 0xa8) != 0) && (lVar1 = FUN_014d4b64(), lVar1 != 0)) {
    FUN_014de73c(lVar1,0);
  }
  plVar2 = (long *)FUN_0120ca1c();
  lVar1 = *plVar2;
  *(long *)PTR_DAT_0437e8f8 = lVar1;
  if (lVar1 == 0) {
    return;
  }
  FUN_027bdc20(lVar1,0);
  return;
}


