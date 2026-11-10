/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009b1e68; name: FUN_009b1e68
 */


undefined8 FUN_009b1e68(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_0437a198;
  puVar1 = PTR_DAT_0437a190;
  plVar5 = (long *)*param_1;
  plVar8 = (long *)param_1[1];
  if (plVar5 != plVar8) {
    do {
      if (*plVar5 != 0) {
        plVar4 = (long *)(*(code *)**(undefined8 **)(*plVar5 + 8))();
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          uVar6 = FUN_009aba24();
          *(undefined8 *)puVar2 = uVar6;
          __cxa_guard_release(puVar1);
        }
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (plVar4 == (long *)puVar2) goto LAB_009b1edc;
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar8);
    plVar5 = plVar8;
  }
LAB_009b1edc:
  plVar8 = (long *)param_1[1];
  if (plVar8 == plVar5) {
    return 0;
  }
  plVar4 = plVar5;
  if (plVar5 + 1 != plVar8) {
    do {
      plVar5 = (long *)*plVar4;
      *plVar4 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))();
      }
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *plVar5 = 0;
      plVar9 = plVar4 + 2;
      *plVar4 = lVar7;
      plVar4 = plVar5;
    } while (plVar9 != plVar8);
    plVar8 = (long *)param_1[1];
    if (plVar8 == plVar5) goto LAB_009b1f90;
  }
  plVar8 = plVar8 + -1;
  if ((long *)*plVar8 != (long *)0x0) {
    (**(code **)(*(long *)*plVar8 + 0x18))();
  }
  while (plVar8 != plVar5) {
    plVar8 = plVar8 + -1;
    if ((long *)*plVar8 != (long *)0x0) {
      (**(code **)(*(long *)*plVar8 + 0x18))();
    }
  }
LAB_009b1f90:
  param_1[1] = plVar5;
  return 1;
}


