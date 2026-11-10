/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0308db0c; name: FUN_0308db0c
 */


void FUN_0308db0c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 1;
  *param_1 = &PTR_FUN_042b3ac8;
  FUN_0332cf84(param_1 + 4);
  param_1[8] = 0;
  param_1[10] = param_1 + 0xe;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000018;
  FUN_0309c75c(param_1 + 0x28);
  param_1[0x2f] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x8000000000000000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x8000000000000000;
  FUN_0333af28(param_1 + 0x30);
  puVar4 = PTR_DAT_04388870;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  param_1[0x30] = puVar4 + 0x10;
  param_1[0xc9] = 0xffffffffffffffff;
  param_1[0xca] = 0xffffffffffffffff;
  param_1[0xcb] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0xcc) = 0xffff;
  if (*(int *)(param_1 + 0xa8) != 0) {
    plVar9 = (long *)param_1[0xa7];
    plVar6 = plVar9 + (long)*(int *)(param_1 + 0xa8) + -1;
    plVar5 = (long *)*plVar6;
    if (plVar5 == (long *)0x0) goto LAB_0308dbec;
    if (plVar5[1] == 0) goto LAB_0308dbec;
    plVar1 = plVar5 + 2;
    do {
      lVar8 = *plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      if (lVar8 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
LAB_0308dbec:
      do {
        if (plVar6 == plVar9) goto LAB_0308dc20;
        plVar6 = plVar6 + -1;
        plVar5 = (long *)*plVar6;
      } while ((plVar5 == (long *)0x0) || (plVar5[1] == 0));
      plVar1 = plVar5 + 2;
      do {
        lVar8 = *plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    } while( true );
  }
LAB_0308dc20:
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 1;
  lVar8 = tpidr_el0;
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x40,0);
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[4] = (long)&PTR_LAB_042b3b78;
  plVar6[5] = 0;
  plVar6[2] = 1;
  plVar6[3] = 0;
  *plVar6 = (long)&PTR_LAB_042b3b30;
  plVar6[1] = 0xffffffff;
  plVar5 = (long *)param_1[0xd3];
  if (((plVar5 != plVar6) && (param_1[0xd3] = plVar6, plVar5 != (long *)0x0)) && (plVar5[1] != 0)) {
    plVar6 = plVar5 + 2;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x40,0);
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[4] = (long)&PTR_LAB_042b3c38;
  plVar6[5] = 0;
  plVar6[2] = 1;
  plVar6[3] = 0;
  *plVar6 = (long)&PTR_LAB_042b3bf0;
  plVar6[1] = 0xffffffff;
  plVar5 = (long *)param_1[0xd5];
  if (((plVar5 != plVar6) && (param_1[0xd5] = plVar6, plVar5 != (long *)0x0)) && (plVar5[1] != 0)) {
    plVar6 = plVar5 + 2;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x40,0);
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[4] = (long)&PTR_LAB_042b3ce0;
  plVar6[5] = 0;
  plVar6[2] = 1;
  plVar6[3] = 0;
  *plVar6 = (long)&PTR_LAB_042b3c98;
  plVar6[1] = 0xffffffff;
  plVar5 = (long *)param_1[0xd8];
  if (((plVar5 != plVar6) && (param_1[0xd8] = plVar6, plVar5 != (long *)0x0)) && (plVar5[1] != 0)) {
    plVar6 = plVar5 + 2;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  lVar7 = *(long *)(lVar8 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar7;
  }
  plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x920,0);
  memset(plVar6,0,0x920);
  *plVar6 = (long)&PTR_LAB_042b3d40;
  plVar6[1] = 0xffffffff;
  plVar6[2] = 1;
  plVar6[4] = (long)&PTR_LAB_042b3d80;
  *(undefined4 *)(plVar6 + 0x11) = 0;
  *(undefined4 *)((long)plVar6 + 0x8c) = 0x80000011;
  *(undefined4 *)(plVar6 + 0x9b) = 0;
  *(undefined4 *)((long)plVar6 + 0x4dc) = 0x80000011;
  plVar6[6] = 0;
  plVar6[7] = -0x8000000000000000;
  plVar6[0x10] = (long)(plVar6 + 0x12);
  plVar6[0x9a] = (long)(plVar6 + 0x9c);
  plVar5 = (long *)param_1[0xd7];
  if (((plVar5 != plVar6) && (param_1[0xd7] = plVar6, plVar5 != (long *)0x0)) && (plVar5[1] != 0)) {
    plVar6 = plVar5 + 2;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0308df30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))();
      return;
    }
  }
  return;
}


