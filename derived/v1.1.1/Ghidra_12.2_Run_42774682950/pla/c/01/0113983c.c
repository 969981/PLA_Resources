/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0113983c; name: FUN_0113983c
 */


void FUN_0113983c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 local_78;
  undefined1 *puStack_70;
  undefined1 local_68 [8];
  undefined4 local_60 [2];
  undefined1 *local_58;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  uVar8 = *(undefined8 *)(lVar7 + 0x100);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar7 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar7;
  plVar10 = *(long **)(lVar7 + 0x100);
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar11 = (long *)plVar10[0x20];
  if (plVar11 != (long *)0x0) {
    plVar5 = plVar11 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *(int *)plVar5 = (int)*plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)plVar11[0xe];
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = (long *)plVar5[0xb];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
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
  plVar5 = plVar11 + 10;
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
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  plVar11 = plVar10 + 10;
  do {
    iVar4 = (int)*plVar11 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *(int *)plVar11 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar9[0x1e];
  }
  else {
    lVar7 = plVar9[0x1e];
  }
  if (lVar7 != 0) {
    uVar12 = 0;
    do {
      if ((uVar12 & 0xffffffff) < (ulong)(plVar9[0x21] - plVar9[0x20] >> 3)) {
        local_58 = *(undefined1 **)(plVar9[0x20] + (uVar12 & 0xffffffff) * 8);
      }
      else {
        local_58 = &DAT_cbf29ce484222645;
      }
      local_60[0] = SUB84(local_58,0);
      puVar6 = (undefined1 *)FUN_01139528(param_1 + 0x68,&local_58);
      local_68[0] = *puVar6;
      local_78 = 1;
      puStack_70 = local_68;
      FUN_0113a078(uVar8,local_60,&puStack_70,&local_78);
      uVar12 = uVar12 + 1;
    } while (uVar12 < (ulong)plVar9[0x1e]);
  }
  FUN_010f0ee8(uVar8,&DAT_03a79024,param_1 + 0xd0);
  plVar10 = plVar9 + 10;
  do {
    iVar4 = (int)*plVar10 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *(int *)plVar10 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  return;
}


