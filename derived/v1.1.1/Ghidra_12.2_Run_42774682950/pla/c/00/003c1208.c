/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c1208; name: FUN_003c1208
 */


long * FUN_003c1208(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x40);
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar2[2] = 0;
    puVar1 = PTR_DAT_04373e18;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    plVar2[3] = 0;
    if (*(int *)PTR_DAT_04373e20 != 0) {
                    /* try { // try from 003c12e8 to 003c12f3 has its CatchHandler @ 003c12f8 */
      FUN_0032d2b0(PTR_DAT_04373e20);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x40);
    }
    plVar2 = (long *)FUN_0032cea0(param_1,0x40);
    puVar1 = PTR_DAT_04373e18;
    plVar2[2] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = param_1;
    plVar2[3] = 0;
    plVar2[4] = param_1;
    if (*(int *)PTR_DAT_04373e20 != 0) {
                    /* try { // try from 003c1260 to 003c126b has its CatchHandler @ 003c130c */
      FUN_0032d2b0(PTR_DAT_04373e20);
    }
  }
  plVar2[6] = (long)PTR_DAT_043730c0;
  plVar2[7] = 0;
  return plVar2;
}


