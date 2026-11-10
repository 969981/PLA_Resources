/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c0f94; name: FUN_003c0f94
 */


long * FUN_003c0f94(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x70);
    puVar1 = PTR_DAT_04373eb8;
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar2[1] = 0;
    plVar2[2] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[3] = 0;
    plVar2[6] = 0;
    plVar2[9] = 0;
    plVar2[4] = 0;
    plVar2[7] = 0;
    puVar1 = PTR_DAT_04373ec0;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    if (*(int *)puVar1 != 0) {
                    /* try { // try from 003c10b4 to 003c10bf has its CatchHandler @ 003c10c4 */
      FUN_0032d2b0(PTR_DAT_04373ec0);
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x70);
    }
    plVar2 = (long *)FUN_0032cea0(param_1,0x70);
    *plVar2 = (long)(PTR_DAT_04373eb8 + 0x10);
    plVar2[1] = param_1;
    plVar2[2] = 0;
    plVar2[3] = 0;
    plVar2[4] = param_1;
    *(undefined4 *)((long)plVar2 + 0x34) = 0;
    *(undefined4 *)(plVar2 + 6) = 0;
    plVar2[7] = param_1;
    plVar2[9] = param_1;
    puVar1 = PTR_DAT_04373ec0;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    if (*(int *)puVar1 != 0) {
                    /* try { // try from 003c100c to 003c1017 has its CatchHandler @ 003c10d8 */
      FUN_0032d2b0(PTR_DAT_04373ec0);
    }
  }
  puVar1 = PTR_DAT_043730c0;
  plVar2[0xd] = (long)PTR_DAT_043730c0;
  plVar2[0xc] = (long)puVar1;
  return plVar2;
}


