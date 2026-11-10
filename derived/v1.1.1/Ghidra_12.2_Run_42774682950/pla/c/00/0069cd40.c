/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0069cd40; name: FUN_0069cd40
 */


long * FUN_0069cd40(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    if (plVar2 != (long *)0x0) {
      plVar2[2] = 0;
      puVar1 = PTR_DAT_04375d58;
      plVar2[3] = 0;
      plVar2[4] = 0;
      *(undefined4 *)(plVar2 + 5) = 0;
      *plVar2 = (long)(puVar1 + 0x10);
      plVar2[1] = 0;
      if (*(int *)PTR_DAT_04375d60 != 0) {
                    /* try { // try from 0069ce14 to 0069ce1f has its CatchHandler @ 0069ce24 */
        FUN_0032d2b0(PTR_DAT_04375d60);
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x30);
    }
    plVar2 = (long *)FUN_0032cea0(param_1,0x30);
    *plVar2 = (long)(PTR_DAT_04375d58 + 0x10);
    plVar2[1] = param_1;
    plVar2[2] = param_1;
    plVar2[3] = 0;
    plVar2[4] = 0;
    *(undefined4 *)(plVar2 + 5) = 0;
    if (*(int *)PTR_DAT_04375d60 != 0) {
                    /* try { // try from 0069cd98 to 0069cda3 has its CatchHandler @ 0069ce38 */
      FUN_0032d2b0(PTR_DAT_04375d60);
    }
  }
  return plVar2;
}


