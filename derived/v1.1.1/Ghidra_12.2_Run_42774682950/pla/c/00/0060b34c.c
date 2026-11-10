/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060b34c; name: FUN_0060b34c
 */


long * FUN_0060b34c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x38);
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar2 = (long)(PTR_DAT_04375318 + 0x10);
    plVar2[1] = 0;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x38);
    }
    plVar2 = (long *)FUN_0032cea0(param_1,0x38);
    *plVar2 = (long)(PTR_DAT_04375318 + 0x10);
    plVar2[1] = param_1;
  }
  *(undefined4 *)(plVar2 + 4) = 0;
  FUN_003a1704(plVar2 + 5,plVar2 + 2,plVar2 + 3);
  if (*(int *)PTR_DAT_04375320 != 0) {
    FUN_0032d2b0(PTR_DAT_04375320);
  }
  puVar1 = PTR_DAT_043730c0;
  plVar2[2] = (long)PTR_DAT_043730c0;
  plVar2[3] = (long)puVar1;
  return plVar2;
}


