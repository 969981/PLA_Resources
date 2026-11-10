/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ea38f8; name: FUN_00ea38f8
 */


long FUN_00ea38f8(void)

{
  long *plVar1;
  long lVar2;
  long *local_18;
  
  FUN_00bef9ac(&local_18);
  plVar1 = (long *)PTR_PTR_04379d00;
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 0xc;
  }
  lVar2 = *plVar1;
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return lVar2;
}


