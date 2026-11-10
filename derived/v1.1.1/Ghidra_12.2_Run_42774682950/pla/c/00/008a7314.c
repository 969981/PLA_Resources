/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008a7314; name: FUN_008a7314
 */


void FUN_008a7314(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *local_d8;
  undefined8 uStack_d0;
  long *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  ulong local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined2 local_58;
  long *local_48;
  
  uVar3 = *(undefined1 *)(param_2 + 0x7d);
  plVar10 = *(long **)(param_2 + 0x60);
  uVar8 = *(undefined8 *)(param_1 + 8);
  if (plVar10 == (long *)0x0) {
    local_d8 = (long *)0x0;
    FUN_010a0870(uVar8,&local_d8,0,0);
  }
  else {
    plVar2 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_d8 = plVar10;
    FUN_010a0870(uVar8,&local_d8,0,0);
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  local_88 = 0x100000000;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_70 = local_70 & 0xffffffffffffff00;
  local_78 = 0;
  local_58 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (long *)0x0;
  uStack_c0 = 0;
  local_d8 = (long *)0x0;
  uStack_d0 = 0;
  local_68 = &DAT_cbf29ce484222645;
  local_60 = &DAT_cbf29ce484222645;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_48 = plVar10;
  FUN_01906830(&local_d8,&local_48,*(undefined8 *)(param_1 + 8));
  plVar2 = local_c8;
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_48 + 0x10))();
      plVar2 = local_c8;
    }
  }
  local_c8 = plVar2;
  if (((param_3 & 1) != 0) && (local_c8 = (long *)0x0, plVar2 != (long *)0x0)) {
    plVar1 = plVar2 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  uStack_80._0_7_ = CONCAT16(1,(undefined6)uStack_80);
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379578), iVar7 != 0))
  {
    FUN_00100250(&LAB_008a85dc,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar9 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar9;
  local_78 = CONCAT11(*(undefined1 *)(*(long *)(lVar9 + 200) + 0x569),(undefined1)local_78);
  uVar6 = FUN_008a75fc(param_1,uVar3);
  uStack_80 = CONCAT17(uVar6,(undefined7)uStack_80) & 0x1ffffffffffffff;
  uStack_80._0_5_ = CONCAT14(1,(undefined4)uStack_80);
  local_98 = 0;
  lVar9 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),uVar3);
  if (lVar9 != 0) {
    local_70 = *(ulong *)(lVar9 + 0xd8);
    local_68 = *(undefined1 **)(lVar9 + 0xe0);
    local_60 = *(undefined1 **)(lVar9 + 0xe8);
  }
  if ((param_3 & 1) == 0) {
    iVar7 = FUN_02c6849c(plVar10[0x13]);
    if (iVar7 - 0x1e9U < 5) {
      FUN_02c7ee20(plVar10[0x13],1);
    }
    FUN_01907950(&local_d8,0);
  }
  else {
    FUN_01907760(&local_d8);
  }
  FUN_008a7624(&local_d8);
  return;
}


