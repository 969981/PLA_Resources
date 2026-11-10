/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068b6f0; name: FUN_0068b6f0
 */


long * FUN_0068b6f0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  
  if (param_1 == 0) {
    plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x28);
    puVar2 = PTR_DAT_04375b98;
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    *(undefined4 *)(plVar3 + 4) = 0;
    *plVar3 = (long)(puVar2 + 0x10);
    plVar3[1] = 0;
    iVar1 = *(int *)PTR_DAT_04375ba0;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x28);
    }
    plVar3 = (long *)FUN_0032cea0(param_1,0x28);
    *plVar3 = (long)(PTR_DAT_04375b98 + 0x10);
    plVar3[1] = param_1;
    *(undefined4 *)(plVar3 + 4) = 0;
    iVar1 = *(int *)PTR_DAT_04375ba0;
  }
  if (iVar1 != 0) {
    FUN_0032d2b0(PTR_DAT_04375ba0);
  }
  puVar2 = PTR_DAT_043730c0;
  plVar3[3] = (long)PTR_DAT_043730c0;
  plVar3[2] = (long)puVar2;
  return plVar3;
}


