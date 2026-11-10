/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e92288; name: FUN_00e92288
 */


void FUN_00e92288(long *param_1,int param_2,undefined4 param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  code *pcVar9;
  long *plVar10;
  long *local_40;
  long *local_38;
  undefined8 local_28;
  
  local_28 = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388);
  lVar6 = FUN_00e9439c(&local_38,local_28,&local_28);
  *param_1 = lVar6;
  if (lVar6 != 0) {
    piVar2 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (param_2 == -1) {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar6 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar6;
    plVar7 = *(long **)(lVar6 + 0xd0);
    if (plVar7 != (long *)0x0) {
      plVar10 = plVar7 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar10 = (long *)plVar7[0xb];
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar1 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    uVar8 = (**(code **)(*plVar10 + 0x50))(plVar10,param_3);
    FUN_02c653d0(*param_1,uVar8);
    if (plVar10 == (long *)0x0) {
      return;
    }
    plVar7 = plVar10 + 10;
    do {
      iVar5 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) {
      return;
    }
    pcVar9 = *(code **)(*plVar10 + 0x10);
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148b80(&local_38);
    local_40 = (long *)*param_1;
    if (local_40 != (long *)0x0) {
      plVar10 = local_40 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_010e0448(local_38,&local_40,param_2,param_3);
    plVar10 = local_38;
    if (local_40 != (long *)0x0) {
      plVar7 = local_40 + 10;
      do {
        iVar5 = (int)*plVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_40 + 0x10))();
        plVar10 = local_38;
      }
    }
    if (plVar10 == (long *)0x0) {
      return;
    }
    lVar6 = plVar10[0xb];
    piVar2 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) {
      return;
    }
    *(undefined8 *)(lVar6 + 0x18) = 0;
    pcVar9 = *(code **)(*plVar10 + 0x20);
  }
  (*pcVar9)(plVar10);
  return;
}


