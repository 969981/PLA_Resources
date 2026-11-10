/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01289f50; name: FUN_01289f50
 */


void FUN_01289f50(undefined8 *param_1,int param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_68 [16];
  int local_58 [6];
  
  lVar9 = *(long *)(*(long *)(param_1[(long)param_2 * 0xc + 199] + 0xa8) + (ulong)param_3 * 0x10);
  if (*(int *)param_1[0x2c9] != 0) {
    *(undefined4 *)(lVar9 + 0x44) = 0;
    *(undefined8 *)(lVar9 + 0x3c) = 0;
    *(undefined8 *)(lVar9 + 0x34) = 0;
    *(undefined8 *)(lVar9 + 0x2c) = 0;
    return;
  }
  local_58[4] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  if (param_2 == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (param_1 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)param_1 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      param_1 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
    }
    lVar6 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar6;
    plVar8 = *(long **)(lVar6 + 0x280);
    if (plVar8 != (long *)0x0) {
      lVar6 = plVar8[0xb];
      param_1 = *(undefined8 **)(lVar6 + 0x18);
      if (param_1 == (undefined8 *)0x0) goto LAB_0128a22c;
      if (*(long *)(lVar6 + 0x10) == 0) {
        param_1 = (undefined8 *)(**(code **)*param_1)();
        *(undefined8 **)(lVar6 + 0x10) = param_1;
      }
      piVar7 = (int *)(lVar6 + 0xc);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar4 = FUN_010dac08(param_1,0);
    if (param_3 < uVar4) {
      uVar4 = *(uint *)((long)plVar8 + (ulong)param_3 * 4 + 0x68);
    }
    else {
      uVar4 = 0;
    }
    local_58[0] = 0x1a;
    if (plVar8 == (long *)0x0) goto LAB_0128a040;
    lVar6 = plVar8[0xb];
    piVar7 = (int *)(lVar6 + 0xc);
    do {
      iVar3 = *piVar7 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379558), iVar3 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar6 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar6;
    plVar8 = *(long **)(lVar6 + 0x238);
    if (plVar8 != (long *)0x0) {
      lVar6 = plVar8[0xb];
      if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
LAB_0128a22c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar6 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
        *(undefined8 *)(lVar6 + 0x10) = uVar5;
      }
      piVar7 = (int *)(lVar6 + 0xc);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar4 = *(uint *)((long)plVar8 + (ulong)(param_3 + (int)plVar8[0xa6] * 0x1e) * 4 + 0x68);
    local_58[0] = 0x1b;
    lVar6 = plVar8[0xb];
    piVar7 = (int *)(lVar6 + 0xc);
    do {
      iVar3 = *piVar7 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar2) {
        *piVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (iVar3 == 0) {
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
LAB_0128a040:
  FUN_02c4fb44(auStack_68,uVar4 & 0xffff);
  local_58[1] = 0x1c;
  local_58[2] = 0x16;
  iVar3 = FUN_02c4fc60(auStack_68,0xc);
  if (iVar3 == 0) {
    local_58[3] = 5;
    lVar6 = 4;
  }
  else {
    lVar6 = 3;
  }
  local_58[lVar6] = 2;
  piVar7 = (int *)(lVar9 + 0x2c);
  piVar7[0] = 0;
  piVar7[1] = 0;
  *(undefined4 *)(lVar9 + 0x44) = 0;
  *(undefined8 *)(lVar9 + 0x34) = 0;
  *(undefined8 *)(lVar9 + 0x3c) = 0;
  if ((((local_58[0] != 0) && (*piVar7 = local_58[0], local_58[1] != 0)) &&
      (*(int *)(lVar9 + 0x30) = local_58[1], local_58[2] != 0)) &&
     ((*(int *)(lVar9 + 0x34) = local_58[2], local_58[3] != 0 &&
      (*(int *)(lVar9 + 0x38) = local_58[3], local_58[4] != 0)))) {
    *(int *)(lVar9 + 0x3c) = local_58[4];
  }
  return;
}


