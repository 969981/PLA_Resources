/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00250790; name: FUN_00250790
 */


long FUN_00250790(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x28) != param_1 + 0x20) {
    return *(long *)(param_1 + 0x28) + -8;
  }
  do {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == 0) {
      return 0;
    }
    plVar1 = (long *)(param_1 + 0x10);
    param_1 = lVar2;
  } while (*plVar1 == lVar2 + 0x20);
  return *plVar1 + -8;
}


