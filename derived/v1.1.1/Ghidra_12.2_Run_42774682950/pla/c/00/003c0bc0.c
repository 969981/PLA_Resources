/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c0bc0; name: FUN_003c0bc0
 */


long * FUN_003c0bc0(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x50);
    if (plVar1 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar1 = (long)(PTR_DAT_04373e90 + 0x10);
    plVar1[1] = 0;
                    /* try { // try from 003c0c68 to 003c0c73 has its CatchHandler @ 003c0cf8 */
    FUN_0032dd08(plVar1 + 2,0);
    plVar1[8] = 0;
    plVar1[7] = 0;
    plVar1[6] = 0;
    plVar1[5] = 0;
    if (*(int *)PTR_DAT_04373e98 != 0) {
                    /* try { // try from 003c0cc0 to 003c0ccb has its CatchHandler @ 003c0cd0 */
      FUN_0032d2b0(PTR_DAT_04373e98);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x50);
    }
    plVar1 = (long *)FUN_0032cea0(param_1,0x50);
    *plVar1 = (long)(PTR_DAT_04373e90 + 0x10);
    plVar1[1] = param_1;
                    /* try { // try from 003c0c00 to 003c0c0b has its CatchHandler @ 003c0cfc */
    FUN_0032dd08(plVar1 + 2,param_1);
    plVar1[5] = 0;
    plVar1[6] = param_1;
    plVar1[7] = 0;
    plVar1[8] = 0;
    if (*(int *)PTR_DAT_04373e98 != 0) {
                    /* try { // try from 003c0c2c to 003c0c37 has its CatchHandler @ 003c0cdc */
      FUN_0032d2b0(PTR_DAT_04373e98);
    }
  }
  *(undefined1 *)(plVar1 + 9) = 0;
  return plVar1;
}


