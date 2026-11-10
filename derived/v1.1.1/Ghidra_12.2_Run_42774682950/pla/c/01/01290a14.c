/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01290a14; name: FUN_01290a14
 */


undefined8 FUN_01290a14(long param_1)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined2 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *local_38;
  long *local_28;
  
  switch(*(undefined4 *)(param_1 + 0x1780)) {
  case 0:
    uVar10 = FUN_00d73cb0(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x1778) = uVar10;
    goto LAB_01290a64;
  case 1:
    uVar9 = FUN_00d73e20(*(undefined8 *)(param_1 + 0x1778));
    if ((uVar9 & 1) == 0) goto switchD_01290a4c_default;
    *(int *)(param_1 + 0x1780) = *(int *)(param_1 + 0x1780) + 1;
  case 2:
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar11 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar11;
    plVar12 = *(long **)(lVar11 + 0x238);
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_01290e10:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_00d591fc(&local_28,param_1);
    plVar2 = local_28;
    if (*(char *)((long)local_28 + 0x7c) != '\0') {
      *(undefined2 *)local_28[0xb] = 0;
      *(undefined2 *)((long)local_28 + 0x7a) = 0;
      if (*(char *)((long)local_28 + 0x7c) != '\0') {
        uVar3 = 0;
        if (*(uint *)(plVar12 + 0xa6) < 6) {
          uVar3 = *(uint *)(plVar12 + 0xa6);
        }
        uVar7 = FUN_02c30580(local_28[0xb],(long)plVar12 + (ulong)uVar3 * 0x2a + 0x338,
                             (short)local_28[0xf]);
        *(undefined2 *)((long)plVar2 + 0x7a) = uVar7;
      }
    }
    uVar10 = *(undefined8 *)(param_1 + 0x1778);
    if (local_28 != (long *)0x0) {
      plVar2 = local_28 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_38 = local_28;
    uVar9 = FUN_00d759a0(uVar10,&local_38);
    if (local_38 != (long *)0x0) {
      plVar2 = local_38 + 10;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    if (((uVar9 & 0x180000000) == 0x100000000) && (iVar8 = FUN_02c30040(local_28), iVar8 != 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
      *(undefined4 *)(param_1 + 0x1780) = 4;
    }
    if (local_28 != (long *)0x0) {
      plVar2 = local_28 + 10;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    lVar11 = plVar12[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    uVar10 = 0;
    if (bVar5) {
LAB_01290a64:
      uVar10 = 0;
      *(int *)(param_1 + 0x1780) = *(int *)(param_1 + 0x1780) + 1;
    }
    break;
  case 3:
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar11 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar11;
    plVar12 = *(long **)(lVar11 + 0x238);
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01290e10;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_00d591fc(&local_28,param_1);
    uVar10 = FUN_02c2f268(local_28);
    FUN_0111d3d4(plVar12,uVar10,(int)plVar12[0xa6]);
    if (local_28 != (long *)0x0) {
      plVar2 = local_28 + 10;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    lVar11 = plVar12[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    FUN_00d50d90(param_1,1);
    *(int *)(param_1 + 0x1780) = *(int *)(param_1 + 0x1780) + 1;
  case 4:
    FUN_00d73e80(*(undefined8 *)(param_1 + 0x1778));
    uVar10 = FUN_00d73f40();
    *(undefined8 *)(param_1 + 0x1778) = uVar10;
    uVar10 = 1;
    *(undefined4 *)(param_1 + 0x1780) = 0;
    break;
  default:
switchD_01290a4c_default:
    uVar10 = 0;
  }
  return uVar10;
}


