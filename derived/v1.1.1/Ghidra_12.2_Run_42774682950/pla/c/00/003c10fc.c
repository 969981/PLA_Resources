/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c10fc; name: FUN_003c10fc
 */


long * FUN_003c10fc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    if (plVar2 != (long *)0x0) {
      plVar2[2] = 0;
      puVar1 = PTR_DAT_04373ea0;
      plVar2[3] = 0;
      plVar2[4] = 0;
      *(undefined4 *)(plVar2 + 5) = 0;
      *plVar2 = (long)(puVar1 + 0x10);
      plVar2[1] = 0;
      if (*(int *)PTR_DAT_04373ea8 != 0) {
                    /* try { // try from 003c11d0 to 003c11db has its CatchHandler @ 003c11e0 */
        FUN_0032d2b0(PTR_DAT_04373ea8);
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x30);
    }
    plVar2 = (long *)FUN_0032cea0(param_1,0x30);
    *plVar2 = (long)(PTR_DAT_04373ea0 + 0x10);
    plVar2[1] = param_1;
    plVar2[2] = param_1;
    plVar2[3] = 0;
    plVar2[4] = 0;
    *(undefined4 *)(plVar2 + 5) = 0;
    if (*(int *)PTR_DAT_04373ea8 != 0) {
                    /* try { // try from 003c1154 to 003c115f has its CatchHandler @ 003c11f4 */
      FUN_0032d2b0(PTR_DAT_04373ea8);
    }
  }
  return plVar2;
}


