/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bfef0; name: FUN_003bfef0
 */


long * FUN_003bfef0(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x48);
    if (plVar1 != (long *)0x0) {
      *plVar1 = (long)(PTR_DAT_04373da0 + 0x10);
      plVar1[1] = 0;
                    /* try { // try from 003bff98 to 003bffa3 has its CatchHandler @ 003c0024 */
      FUN_0032dd08(plVar1 + 2,0);
      *(undefined4 *)(plVar1 + 8) = 0;
      plVar1[5] = 0;
      plVar1[6] = 0;
      plVar1[7] = 0;
      if (*(int *)PTR_DAT_04373da8 != 0) {
                    /* try { // try from 003bffec to 003bfff7 has its CatchHandler @ 003bfffc */
        FUN_0032d2b0(PTR_DAT_04373da8);
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x48);
    }
    plVar1 = (long *)FUN_0032cea0(param_1,0x48);
    *plVar1 = (long)(PTR_DAT_04373da0 + 0x10);
    plVar1[1] = param_1;
                    /* try { // try from 003bff30 to 003bff3b has its CatchHandler @ 003c0028 */
    FUN_0032dd08(plVar1 + 2,param_1);
    plVar1[5] = param_1;
    plVar1[6] = 0;
    plVar1[7] = 0;
    *(undefined4 *)(plVar1 + 8) = 0;
    if (*(int *)PTR_DAT_04373da8 != 0) {
                    /* try { // try from 003bff5c to 003bff67 has its CatchHandler @ 003c0008 */
      FUN_0032d2b0(PTR_DAT_04373da8);
    }
  }
  return plVar1;
}


