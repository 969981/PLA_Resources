/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01222ce0; name: FUN_01222ce0
 */


undefined8 FUN_01222ce0(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined2 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *local_40;
  long *local_38;
  
  switch(*(undefined4 *)(param_1 + 0x1698)) {
  case 0:
    uVar8 = FUN_00d73cb0(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x1690) = uVar8;
    goto LAB_01222d30;
  case 1:
    uVar11 = FUN_00d73e20(*(undefined8 *)(param_1 + 0x1690));
    if ((uVar11 & 1) == 0) goto switchD_01222d18_default;
    *(int *)(param_1 + 0x1698) = *(int *)(param_1 + 0x1698) + 1;
  case 2:
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar9 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar9;
    plVar10 = *(long **)(lVar9 + 0x248);
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_01223168:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_00d591fc(&local_38,param_1);
    if (*(char *)((long)local_38 + 0x7c) != '\0') {
      *(undefined2 *)local_38[0xb] = 0;
      *(undefined2 *)((long)local_38 + 0x7a) = 0;
    }
    uVar11 = (ulong)*(byte *)((long)plVar10 + 0x4a9);
    if (0x1f < *(byte *)((long)plVar10 + 0x4a9)) {
      uVar11 = 0;
    }
    cVar3 = *(char *)((long)plVar10 + uVar11 + 0x4d0);
    if (((*PTR_DAT_0437b180 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b180);
    }
    plVar2 = local_38;
    lVar9 = *(long *)PTR_DAT_0437b188;
    *(long *)PTR_DAT_0437b190 = lVar9;
    if ((cVar3 == *(char *)(lVar9 + 0x50)) && (*(char *)((long)local_38 + 0x7c) != '\0')) {
      uVar6 = FUN_02c30580(local_38[0xb],(long)plVar10 + uVar11 * 0x22 + 0x68,(short)local_38[0xf]);
      *(undefined2 *)((long)plVar2 + 0x7a) = uVar6;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x1690);
    if (local_38 != (long *)0x0) {
      plVar2 = local_38 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_40 = local_38;
    uVar11 = FUN_00d74f10(uVar8,&local_40);
    if (local_40 != (long *)0x0) {
      plVar2 = local_40 + 10;
      do {
        iVar7 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    if (((uVar11 & 0x180000000) == 0x100000000) && (iVar7 = FUN_02c30040(local_38), iVar7 != 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
      *(undefined4 *)(param_1 + 0x1698) = 4;
    }
    if (local_38 != (long *)0x0) {
      plVar2 = local_38 + 10;
      do {
        iVar7 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    lVar9 = plVar10[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    uVar8 = 0;
    if (bVar4) {
LAB_01222d30:
      uVar8 = 0;
      *(int *)(param_1 + 0x1698) = *(int *)(param_1 + 0x1698) + 1;
    }
    break;
  case 3:
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar9 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar9;
    plVar10 = *(long **)(lVar9 + 0x248);
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01223168;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_00d591fc(&local_38,param_1);
    uVar8 = FUN_02c2f268(local_38);
    FUN_010e60b4(plVar10,uVar8,*(undefined1 *)((long)plVar10 + 0x4a9));
    if (local_38 != (long *)0x0) {
      plVar2 = local_38 + 10;
      do {
        iVar7 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    lVar9 = plVar10[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    FUN_00d50d90(param_1,0);
    *(int *)(param_1 + 0x1698) = *(int *)(param_1 + 0x1698) + 1;
  case 4:
    FUN_00d73e80(*(undefined8 *)(param_1 + 0x1690));
    uVar8 = FUN_00d73f40();
    *(undefined8 *)(param_1 + 0x1690) = uVar8;
    uVar8 = 1;
    *(undefined4 *)(param_1 + 0x1698) = 0;
    break;
  default:
switchD_01222d18_default:
    uVar8 = 0;
  }
  return uVar8;
}


