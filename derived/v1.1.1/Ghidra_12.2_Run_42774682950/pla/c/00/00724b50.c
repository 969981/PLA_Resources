/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00724b50; name: FUN_00724b50
 */


long * FUN_00724b50(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x50);
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar2 = (long)(PTR_DAT_04376600 + 0x10);
    plVar2[1] = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    puVar1 = PTR_DAT_04376608;
    *(undefined4 *)((long)plVar2 + 0x4c) = 0;
    plVar2[5] = 0;
    plVar2[4] = 0;
    plVar2[7] = 0;
    plVar2[6] = 0;
    if (*(int *)puVar1 != 0) {
                    /* try { // try from 00724c50 to 00724c5b has its CatchHandler @ 00724c60 */
      FUN_0032d2b0(PTR_DAT_04376608);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x50);
    }
    plVar2 = (long *)FUN_0032cea0(param_1,0x50);
    *plVar2 = (long)(PTR_DAT_04376600 + 0x10);
    plVar2[1] = param_1;
    plVar2[2] = param_1;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[5] = param_1;
    puVar1 = PTR_DAT_04376608;
    plVar2[6] = 0;
    plVar2[7] = 0;
    *(undefined4 *)((long)plVar2 + 0x4c) = 0;
    if (*(int *)puVar1 != 0) {
                    /* try { // try from 00724bb8 to 00724bc3 has its CatchHandler @ 00724c7c */
      FUN_0032d2b0(PTR_DAT_04376608);
    }
  }
  plVar2[8] = (long)PTR_DAT_043730c0;
  *(undefined1 *)(plVar2 + 9) = 0;
  return plVar2;
}


