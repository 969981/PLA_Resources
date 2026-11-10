/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc4e40; name: FUN_02cc4e40
 */


void FUN_02cc4e40(void)

{
  long *plVar1;
  long lVar2;
  
  FUN_02cbb4a0();
  plVar1 = (long *)FUN_027812ec();
  lVar2 = *plVar1;
  *(long *)PTR_DAT_0437b478 = lVar2;
  if (lVar2 != 0) {
    FUN_02cc79a0();
  }
  plVar1 = (long *)FUN_013b2b18();
  lVar2 = *plVar1;
  *(long *)PTR_DAT_0437b480 = lVar2;
  if (lVar2 == 0) {
    return;
  }
  FUN_02cc4e90();
  return;
}


