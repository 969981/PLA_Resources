/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad59c4; name: FUN_00ad59c4
 */


undefined8 FUN_00ad59c4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_0437a6e0;
  puVar1 = PTR_DAT_0437a6d8;
  plVar7 = (long *)*param_1;
  plVar8 = (long *)param_1[1];
  plVar4 = plVar7;
  if (plVar7 != plVar8) {
    do {
      if (*plVar7 != 0) {
        plVar4 = (long *)(*(code *)**(undefined8 **)(*plVar7 + 8))();
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          uVar5 = FUN_00ad3750();
          *(undefined8 *)puVar2 = uVar5;
          __cxa_guard_release(puVar1);
        }
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (plVar4 == (long *)puVar2) {
            plVar4 = plVar7;
            goto LAB_00ad5a30;
          }
        }
      }
      plVar7 = plVar7 + 1;
      plVar4 = plVar8;
    } while (plVar7 != plVar8);
  }
LAB_00ad5a30:
  plVar7 = (long *)param_1[1];
  if (plVar7 == plVar4) {
    return 0;
  }
  plVar8 = plVar4;
  if (plVar4 + 1 != plVar7) {
    do {
      plVar4 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))();
      }
      plVar4 = plVar8 + 1;
      lVar6 = *plVar4;
      *plVar4 = 0;
      plVar9 = plVar8 + 2;
      *plVar8 = lVar6;
      plVar8 = plVar4;
    } while (plVar9 != plVar7);
    plVar7 = (long *)param_1[1];
    if (plVar7 == plVar4) goto LAB_00ad5aa0;
  }
  plVar7 = plVar7 + -1;
  if ((long *)*plVar7 != (long *)0x0) {
    (**(code **)(*(long *)*plVar7 + 0x18))();
  }
  while (plVar7 != plVar4) {
    plVar7 = plVar7 + -1;
    if ((long *)*plVar7 != (long *)0x0) {
      (**(code **)(*(long *)*plVar7 + 0x18))();
    }
  }
LAB_00ad5aa0:
  param_1[1] = plVar4;
  return 1;
}


