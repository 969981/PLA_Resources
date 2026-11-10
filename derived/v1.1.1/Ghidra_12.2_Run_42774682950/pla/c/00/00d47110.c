/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d47110; name: FUN_00d47110
 */


long * FUN_00d47110(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  plVar8 = *(long **)(param_1 + 0x148);
  lVar2 = *(long *)(param_1 + 0x150);
  lVar10 = *param_2;
  plVar9 = (long *)param_2[3];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  plVar3 = plVar8;
  if ((lVar2 != 0) && (*plVar8 != lVar10)) {
    lVar7 = lVar2 * 0x30;
    plVar6 = plVar8 + lVar2 * 6;
    do {
      lVar7 = lVar7 + -0x30;
      plVar3 = plVar6;
      if (lVar7 == 0) break;
      plVar1 = plVar8 + 6;
      plVar8 = plVar8 + 6;
      plVar3 = plVar8;
    } while (*plVar1 != lVar10);
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (plVar3 == (long *)(*(long *)(param_1 + 0x148) + *(long *)(param_1 + 0x150) * 0x30)) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = (long *)plVar3[4];
  }
  if (((*PTR_DAT_04372ab0 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04372ab0), puVar4 = PTR_DAT_043729f0, iVar5 != 0)) {
    if (((*PTR_DAT_043729e8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar5 != 0)) {
      *(undefined8 *)puVar4 = 0;
      __cxa_guard_release(PTR_DAT_043729e8);
    }
    *(undefined **)PTR_DAT_04372ab8 = puVar4;
    __cxa_guard_release(PTR_DAT_04372ab0);
  }
  if (plVar8 != (long *)0x0) {
    for (plVar9 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8); plVar9 != (long *)0x0;
        plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)PTR_DAT_04372ab8) {
        return plVar8;
      }
    }
  }
  return (long *)0x0;
}


