/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283d384; name: FUN_0283d384
 */


long * FUN_0283d384(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar7 = *(long **)(param_1 + 0x148);
  lVar2 = *(long *)(param_1 + 0x150);
  lVar9 = *param_2;
  plVar8 = (long *)param_2[3];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar3 = plVar7;
  if ((lVar2 != 0) && (*plVar7 != lVar9)) {
    lVar6 = lVar2 * 0x30;
    plVar5 = plVar7 + lVar2 * 6;
    do {
      lVar6 = lVar6 + -0x30;
      plVar3 = plVar5;
      if (lVar6 == 0) break;
      plVar1 = plVar7 + 6;
      plVar7 = plVar7 + 6;
      plVar3 = plVar7;
    } while (*plVar1 != lVar9);
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (plVar3 == (long *)(*(long *)(param_1 + 0x148) + *(long *)(param_1 + 0x150) * 0x30)) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = (long *)plVar3[4];
  }
  if (((*PTR_DAT_043729e8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar4 != 0))
  {
    *(undefined8 *)PTR_DAT_043729f0 = 0;
    __cxa_guard_release(PTR_DAT_043729e8);
  }
  if (plVar7 != (long *)0x0) {
    for (plVar8 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7); plVar8 != (long *)0x0;
        plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)PTR_DAT_043729f0) {
        return plVar7;
      }
    }
  }
  return (long *)0x0;
}


