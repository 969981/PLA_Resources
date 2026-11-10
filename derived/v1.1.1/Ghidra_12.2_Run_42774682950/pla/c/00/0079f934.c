/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079f934; name: FUN_0079f934
 */


long * FUN_0079f934(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x80);
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar2[1] = 0;
    plVar2[2] = 0;
    *plVar2 = (long)(PTR_DAT_04376f30 + 0x10);
    plVar2[5] = 0;
    *(undefined4 *)(plVar2 + 6) = 0;
    plVar2[3] = 0;
                    /* try { // try from 0079fa00 to 0079fa07 has its CatchHandler @ 0079fa90 */
    FUN_007a0c1c(plVar2 + 5);
    *(undefined4 *)(plVar2 + 6) = 0;
    *(undefined4 *)(plVar2 + 0xf) = 0;
    if (*(int *)PTR_DAT_04376f38 != 0) {
                    /* try { // try from 0079fa60 to 0079fa6b has its CatchHandler @ 0079fa70 */
      FUN_0032d2b0(PTR_DAT_04376f38);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x80);
    }
    plVar2 = (long *)FUN_0032cea0(param_1,0x80);
    puVar1 = PTR_DAT_04376f30;
    *(undefined4 *)((long)plVar2 + 0x14) = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = param_1;
    *(undefined4 *)(plVar2 + 2) = 0;
    plVar2[3] = param_1;
    plVar2[5] = param_1;
    *(undefined4 *)(plVar2 + 6) = 0;
                    /* try { // try from 0079f98c to 0079f993 has its CatchHandler @ 0079fa94 */
    FUN_007a0c1c(plVar2 + 5);
    *(undefined4 *)(plVar2 + 6) = 0;
    *(undefined4 *)(plVar2 + 0xf) = 0;
    if (*(int *)PTR_DAT_04376f38 != 0) {
                    /* try { // try from 0079f9ac to 0079f9b7 has its CatchHandler @ 0079fa74 */
      FUN_0032d2b0(PTR_DAT_04376f38);
    }
  }
  puVar1 = PTR_DAT_043730c0;
  *(undefined4 *)((long)plVar2 + 0x7c) = 0;
  plVar2[0xc] = 0;
  plVar2[0xd] = 0;
  plVar2[9] = (long)puVar1;
  plVar2[8] = (long)puVar1;
  plVar2[0xb] = (long)puVar1;
  plVar2[10] = (long)puVar1;
  return plVar2;
}


