/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01398d1c; name: FUN_01398d1c
 */


undefined8 FUN_01398d1c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *local_40;
  undefined8 local_38;
  long *local_28;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar7 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar7;
  plVar5 = *(long **)(lVar7 + 0xd0);
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar8 = (long *)plVar5[0xb];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar1 = plVar5 + 10;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  uVar6 = (**(code **)(*plVar8 + 0x28))(plVar8,*(undefined8 *)*param_1);
  if ((uVar6 & 1) != 0) {
    uVar9 = 1;
    goto LAB_01398dcc;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148b80(&local_28);
  local_38 = 0;
  uVar6 = FUN_010e3260(local_28,(long)&local_38 + 4,&local_38,*(undefined8 *)param_1[1]);
  if ((uVar6 & 1) == 0) {
LAB_01398ef4:
    uVar9 = 3;
    plVar5 = local_28;
  }
  else {
    local_40 = *(long **)*param_1;
    if (local_40 != (long *)0x0) {
      plVar5 = local_40 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar6 = FUN_010e1280(local_28,&local_40,*(undefined8 *)param_1[1],local_38._4_4_,
                         local_38 & 0xffffffff);
    if (local_40 != (long *)0x0) {
      plVar5 = local_40 + 10;
      do {
        iVar4 = (int)*plVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    if ((uVar6 & 1) == 0) goto LAB_01398ef4;
    uVar9 = 2;
    plVar5 = local_28;
  }
  if ((plVar5 != (long *)0x0) && (uVar6 = FUN_02a43a5c(plVar5[0xb]), (uVar6 & 1) != 0)) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
LAB_01398dcc:
  plVar5 = plVar8 + 10;
  do {
    iVar4 = (int)*plVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *(int *)plVar5 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return uVar9;
}


