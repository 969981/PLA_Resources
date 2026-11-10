/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c7388; name: FUN_014c7388
 */


long * FUN_014c7388(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar2 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar2 == 0) || (*plVar7 == -0xb482d9cb23a3fe7)) {
    plVar4 = plVar7;
  }
  else {
    lVar5 = lVar2 * 0x30;
    plVar6 = plVar7;
    do {
      lVar5 = lVar5 + -0x30;
      if (lVar5 == 0) goto LAB_014c7450;
      plVar1 = plVar6 + 6;
      plVar4 = plVar6 + 6;
      plVar6 = plVar6 + 6;
    } while (*plVar1 != -0xb482d9cb23a3fe7);
  }
  if (plVar4 == plVar7 + lVar2 * 6) {
LAB_014c7450:
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = (long *)plVar4[4];
  }
  if (((*PTR_DAT_043729e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar3 != 0))
  {
    *(undefined8 *)PTR_DAT_043729f0 = 0;
    __cxa_guard_release(PTR_DAT_043729e8);
  }
  if (plVar7 != (long *)0x0) {
    for (plVar4 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7); plVar4 != (long *)0x0;
        plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_043729f0) {
        return plVar7;
      }
    }
  }
  return (long *)0x0;
}


