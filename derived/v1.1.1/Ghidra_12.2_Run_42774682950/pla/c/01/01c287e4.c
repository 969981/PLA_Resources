/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c287e4; name: FUN_01c287e4
 */


undefined8 FUN_01c287e4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  puVar6 = PTR_DAT_0437a428;
  puVar5 = PTR_DAT_0437a420;
  puVar4 = PTR_DAT_043795e0;
  puVar3 = PTR_DAT_043795d8;
  puVar2 = PTR_DAT_043794d8;
  puVar1 = PTR_DAT_043794d0;
  plVar11 = (long *)*param_1;
  plVar13 = (long *)param_1[1];
  plVar8 = plVar11;
  if (plVar11 != plVar13) {
    do {
      if (*plVar11 != 0) {
        plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar11 + 8))();
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
            if (((*puVar1 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar1), iVar7 != 0)) {
              uVar9 = FUN_0087f8f0();
              *(undefined8 *)puVar2 = uVar9;
              __cxa_guard_release(puVar1);
            }
            *(undefined **)puVar4 = puVar2;
            __cxa_guard_release(puVar3);
          }
          *(undefined **)puVar6 = puVar4;
          __cxa_guard_release(puVar5);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar6) {
            plVar8 = plVar11;
            goto LAB_01c28878;
          }
        }
      }
      plVar11 = plVar11 + 1;
      plVar8 = plVar13;
    } while (plVar11 != plVar13);
  }
LAB_01c28878:
  plVar11 = (long *)param_1[1];
  if (plVar11 == plVar8) {
    return 0;
  }
  plVar13 = plVar8;
  if (plVar8 + 1 != plVar11) {
    do {
      plVar8 = (long *)*plVar13;
      *plVar13 = 0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))();
      }
      plVar8 = plVar13 + 1;
      lVar10 = *plVar8;
      *plVar8 = 0;
      plVar12 = plVar13 + 2;
      *plVar13 = lVar10;
      plVar13 = plVar8;
    } while (plVar12 != plVar11);
    plVar11 = (long *)param_1[1];
    if (plVar11 == plVar8) goto LAB_01c28900;
  }
  plVar11 = plVar11 + -1;
  if ((long *)*plVar11 != (long *)0x0) {
    (**(code **)(*(long *)*plVar11 + 0x18))();
  }
  while (plVar11 != plVar8) {
    plVar11 = plVar11 + -1;
    if ((long *)*plVar11 != (long *)0x0) {
      (**(code **)(*(long *)*plVar11 + 0x18))();
    }
  }
LAB_01c28900:
  param_1[1] = plVar8;
  return 1;
}


