/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e1a14; name: FUN_002e1a14
 */


long * FUN_002e1a14(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    if (plVar1 != (long *)0x0) {
      *plVar1 = (long)(PTR_DAT_043737a0 + 0x10);
      plVar1[1] = 0;
      plVar1[2] = 0;
      *(undefined4 *)(plVar1 + 3) = 0;
                    /* try { // try from 002e1abc to 002e1ac3 has its CatchHandler @ 002e1b28 */
      FUN_00634a20(plVar1 + 2);
      *(undefined4 *)(plVar1 + 3) = 0;
      *(undefined4 *)(plVar1 + 5) = 0;
      if (*(int *)PTR_DAT_04373770 != 0) {
                    /* try { // try from 002e1b00 to 002e1b0b has its CatchHandler @ 002e1b10 */
        FUN_0032d2b0(PTR_DAT_04373770);
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x30);
    }
    plVar1 = (long *)FUN_0032cea0(param_1,0x30);
    *plVar1 = (long)(PTR_DAT_043737a0 + 0x10);
    plVar1[1] = param_1;
    plVar1[2] = param_1;
    *(undefined4 *)(plVar1 + 3) = 0;
                    /* try { // try from 002e1a58 to 002e1a5f has its CatchHandler @ 002e1b2c */
    FUN_00634a20(plVar1 + 2);
    *(undefined4 *)(plVar1 + 3) = 0;
    *(undefined4 *)(plVar1 + 5) = 0;
    if (*(int *)PTR_DAT_04373770 != 0) {
                    /* try { // try from 002e1a78 to 002e1a83 has its CatchHandler @ 002e1b14 */
      FUN_0032d2b0(PTR_DAT_04373770);
    }
  }
  return plVar1;
}


