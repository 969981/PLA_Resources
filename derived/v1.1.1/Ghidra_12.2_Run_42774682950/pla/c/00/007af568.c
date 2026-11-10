/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007af568; name: FUN_007af568
 */


long * FUN_007af568(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x40);
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar2 = (long)(PTR_DAT_04377070 + 0x10);
    plVar2[1] = 0;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 0;
                    /* try { // try from 007af610 to 007af617 has its CatchHandler @ 007af68c */
    FUN_007b2d70(plVar2 + 2);
    *(undefined4 *)(plVar2 + 3) = 0;
    *(undefined4 *)(plVar2 + 7) = 0;
    if (*(int *)PTR_DAT_04377080 != 0) {
                    /* try { // try from 007af664 to 007af66f has its CatchHandler @ 007af674 */
      FUN_0032d2b0(PTR_DAT_04377080);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x40);
    }
    plVar2 = (long *)FUN_0032cea0(param_1,0x40);
    *plVar2 = (long)(PTR_DAT_04377070 + 0x10);
    plVar2[1] = param_1;
    plVar2[2] = param_1;
    *(undefined4 *)(plVar2 + 3) = 0;
                    /* try { // try from 007af5ac to 007af5b3 has its CatchHandler @ 007af690 */
    FUN_007b2d70(plVar2 + 2);
    *(undefined4 *)(plVar2 + 3) = 0;
    *(undefined4 *)(plVar2 + 7) = 0;
    if (*(int *)PTR_DAT_04377080 != 0) {
                    /* try { // try from 007af5cc to 007af5d7 has its CatchHandler @ 007af678 */
      FUN_0032d2b0(PTR_DAT_04377080);
    }
  }
  puVar1 = PTR_DAT_043730c0;
  plVar2[6] = (long)PTR_DAT_043730c0;
  plVar2[5] = (long)puVar1;
  return plVar2;
}


