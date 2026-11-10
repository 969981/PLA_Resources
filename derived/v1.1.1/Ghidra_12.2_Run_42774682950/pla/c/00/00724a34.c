/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00724a34; name: FUN_00724a34
 */


long * FUN_00724a34(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    if (plVar1 != (long *)0x0) {
      *plVar1 = (long)(PTR_DAT_04376630 + 0x10);
      plVar1[1] = 0;
      plVar1[2] = 0;
      *(undefined4 *)(plVar1 + 3) = 0;
                    /* try { // try from 00724adc to 00724ae3 has its CatchHandler @ 00724b48 */
      FUN_00726834(plVar1 + 2);
      *(undefined4 *)(plVar1 + 3) = 0;
      *(undefined4 *)(plVar1 + 5) = 0;
      if (*(int *)PTR_DAT_04376638 != 0) {
                    /* try { // try from 00724b20 to 00724b2b has its CatchHandler @ 00724b30 */
        FUN_0032d2b0(PTR_DAT_04376638);
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x30);
    }
    plVar1 = (long *)FUN_0032cea0(param_1,0x30);
    *plVar1 = (long)(PTR_DAT_04376630 + 0x10);
    plVar1[1] = param_1;
    plVar1[2] = param_1;
    *(undefined4 *)(plVar1 + 3) = 0;
                    /* try { // try from 00724a78 to 00724a7f has its CatchHandler @ 00724b4c */
    FUN_00726834(plVar1 + 2);
    *(undefined4 *)(plVar1 + 3) = 0;
    *(undefined4 *)(plVar1 + 5) = 0;
    if (*(int *)PTR_DAT_04376638 != 0) {
                    /* try { // try from 00724a98 to 00724aa3 has its CatchHandler @ 00724b34 */
      FUN_0032d2b0(PTR_DAT_04376638);
    }
  }
  return plVar1;
}


