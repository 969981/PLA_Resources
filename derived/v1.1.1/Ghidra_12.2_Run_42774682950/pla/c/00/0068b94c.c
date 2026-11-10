/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068b94c; name: FUN_0068b94c
 */


long * FUN_0068b94c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x48);
    if (plVar2 != (long *)0x0) {
      *plVar2 = (long)(PTR_DAT_04375be8 + 0x10);
      plVar2[1] = 0;
      plVar2[3] = 0;
      plVar2[2] = 0;
      puVar1 = PTR_DAT_04375bf0;
      *(undefined4 *)(plVar2 + 8) = 0;
      plVar2[5] = 0;
      plVar2[4] = 0;
      plVar2[7] = 0;
      plVar2[6] = 0;
      if (*(int *)puVar1 != 0) {
                    /* try { // try from 0068ba3c to 0068ba47 has its CatchHandler @ 0068ba4c */
        FUN_0032d2b0(PTR_DAT_04375bf0);
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x48);
    }
    plVar2 = (long *)FUN_0032cea0(param_1,0x48);
    *plVar2 = (long)(PTR_DAT_04375be8 + 0x10);
    plVar2[1] = param_1;
    plVar2[2] = param_1;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[5] = param_1;
    puVar1 = PTR_DAT_04375bf0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    *(undefined4 *)(plVar2 + 8) = 0;
    if (*(int *)puVar1 != 0) {
                    /* try { // try from 0068b9b4 to 0068b9bf has its CatchHandler @ 0068ba68 */
      FUN_0032d2b0(PTR_DAT_04375bf0);
    }
  }
  return plVar2;
}


