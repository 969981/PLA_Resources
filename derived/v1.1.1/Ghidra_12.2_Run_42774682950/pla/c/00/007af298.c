/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007af298; name: FUN_007af298
 */


long * FUN_007af298(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x58);
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar2 = (long)(PTR_DAT_04377030 + 0x10);
    plVar2[1] = 0;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 0;
                    /* try { // try from 007af340 to 007af347 has its CatchHandler @ 007af3c8 */
    FUN_007a0c1c(plVar2 + 2);
    *(undefined4 *)(plVar2 + 3) = 0;
    *(undefined4 *)((long)plVar2 + 0x54) = 0;
    if (*(int *)PTR_DAT_04377040 != 0) {
                    /* try { // try from 007af3a0 to 007af3ab has its CatchHandler @ 007af3b0 */
      FUN_0032d2b0(PTR_DAT_04377040);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x58);
    }
    plVar2 = (long *)FUN_0032cea0(param_1,0x58);
    *plVar2 = (long)(PTR_DAT_04377030 + 0x10);
    plVar2[1] = param_1;
    plVar2[2] = param_1;
    *(undefined4 *)(plVar2 + 3) = 0;
                    /* try { // try from 007af2dc to 007af2e3 has its CatchHandler @ 007af3cc */
    FUN_007a0c1c(plVar2 + 2);
    *(undefined4 *)(plVar2 + 3) = 0;
    *(undefined4 *)((long)plVar2 + 0x54) = 0;
    if (*(int *)PTR_DAT_04377040 != 0) {
                    /* try { // try from 007af2fc to 007af307 has its CatchHandler @ 007af3b4 */
      FUN_0032d2b0(PTR_DAT_04377040);
    }
  }
  puVar1 = PTR_DAT_043730c0;
  plVar2[9] = 0;
  *(undefined4 *)(plVar2 + 10) = 0;
  plVar2[6] = (long)puVar1;
  plVar2[5] = (long)puVar1;
  plVar2[8] = (long)puVar1;
  plVar2[7] = (long)puVar1;
  return plVar2;
}


