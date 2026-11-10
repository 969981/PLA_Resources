/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c0a80; name: FUN_003c0a80
 */


long * FUN_003c0a80(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x50);
    if (plVar1 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar1 = (long)(PTR_DAT_04373d90 + 0x10);
    plVar1[1] = 0;
                    /* try { // try from 003c0b28 to 003c0b33 has its CatchHandler @ 003c0bb8 */
    FUN_0032dd08(plVar1 + 2,0);
    plVar1[8] = 0;
    plVar1[7] = 0;
    plVar1[6] = 0;
    plVar1[5] = 0;
    if (*(int *)PTR_DAT_04373d98 != 0) {
                    /* try { // try from 003c0b80 to 003c0b8b has its CatchHandler @ 003c0b90 */
      FUN_0032d2b0(PTR_DAT_04373d98);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x50);
    }
    plVar1 = (long *)FUN_0032cea0(param_1,0x50);
    *plVar1 = (long)(PTR_DAT_04373d90 + 0x10);
    plVar1[1] = param_1;
                    /* try { // try from 003c0ac0 to 003c0acb has its CatchHandler @ 003c0bbc */
    FUN_0032dd08(plVar1 + 2,param_1);
    plVar1[5] = 0;
    plVar1[6] = param_1;
    plVar1[7] = 0;
    plVar1[8] = 0;
    if (*(int *)PTR_DAT_04373d98 != 0) {
                    /* try { // try from 003c0aec to 003c0af7 has its CatchHandler @ 003c0b9c */
      FUN_0032d2b0(PTR_DAT_04373d98);
    }
  }
  *(undefined1 *)(plVar1 + 9) = 0;
  return plVar1;
}


