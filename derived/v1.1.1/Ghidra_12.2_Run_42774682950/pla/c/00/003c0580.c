/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c0580; name: FUN_003c0580
 */


long * FUN_003c0580(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x50);
    if (plVar1 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar1 = (long)(PTR_DAT_04373e28 + 0x10);
    plVar1[1] = 0;
                    /* try { // try from 003c0628 to 003c0633 has its CatchHandler @ 003c06b8 */
    FUN_0032dd08(plVar1 + 2,0);
    plVar1[8] = 0;
    plVar1[7] = 0;
    plVar1[6] = 0;
    plVar1[5] = 0;
    if (*(int *)PTR_DAT_04373e30 != 0) {
                    /* try { // try from 003c0680 to 003c068b has its CatchHandler @ 003c0690 */
      FUN_0032d2b0(PTR_DAT_04373e30);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x50);
    }
    plVar1 = (long *)FUN_0032cea0(param_1,0x50);
    *plVar1 = (long)(PTR_DAT_04373e28 + 0x10);
    plVar1[1] = param_1;
                    /* try { // try from 003c05c0 to 003c05cb has its CatchHandler @ 003c06bc */
    FUN_0032dd08(plVar1 + 2,param_1);
    plVar1[5] = 0;
    plVar1[6] = param_1;
    plVar1[7] = 0;
    plVar1[8] = 0;
    if (*(int *)PTR_DAT_04373e30 != 0) {
                    /* try { // try from 003c05ec to 003c05f7 has its CatchHandler @ 003c069c */
      FUN_0032d2b0(PTR_DAT_04373e30);
    }
  }
  *(undefined4 *)(plVar1 + 9) = 0;
  return plVar1;
}


