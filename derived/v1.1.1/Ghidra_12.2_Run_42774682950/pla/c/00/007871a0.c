/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007871a0; name: FUN_007871a0
 */


void FUN_007871a0(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  ulong local_120;
  long *local_118;
  undefined8 local_110;
  ulong *local_108;
  long *local_100;
  ulong local_f8;
  long *plStack_f0;
  undefined1 auStack_e8 [8];
  ulong local_e0;
  long local_a0;
  undefined4 local_98;
  long *local_90;
  long *local_88;
  ulong local_80;
  long *plStack_78;
  ulong *local_70;
  long *local_68;
  undefined1 auStack_58 [8];
  
                    /* try { // try from 007871c8 to 007871d3 has its CatchHandler @ 00787670 */
  FUN_007a3ccc(auStack_e8,0);
  FUN_00799d90(&local_90);
  uVar3 = (ulong)&local_90 | 1;
  if (((ulong)local_90 & 1) != 0) {
    uVar3 = local_80;
  }
                    /* try { // try from 007871f4 to 007871fb has its CatchHandler @ 00787658 */
  FUN_007876e0(auStack_e8,uVar3);
  if (((ulong)local_90 & 1) != 0) {
    (**(code **)(*plStack_78 + 0x18))(plStack_78,local_80,(ulong)local_90 & 0xfffffffffffffffe,1);
  }
  local_98 = (undefined4)*(undefined8 *)(param_3 + 0x30);
                    /* try { // try from 00787228 to 00787287 has its CatchHandler @ 007876cc */
  FUN_00787884(auStack_e8,&DAT_03996322);
  lVar12 = param_3 + 9;
  if ((*(byte *)(param_3 + 8) & 1) != 0) {
    lVar12 = *(long *)(param_3 + 0x18);
  }
  FUN_00787a28(auStack_e8,lVar12);
  if (local_a0 == 0) {
    puVar7 = (ulong *)(local_e0 & 0xfffffffffffffffe);
    if ((local_e0 & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
    local_a0 = FUN_002e1a14(puVar7);
  }
  lVar12 = local_a0;
  uVar8 = FUN_006d9e10(param_3 + 0x28);
  FUN_002e1668(lVar12,uVar8);
  FUN_00799db0(&local_108);
  uVar3 = (ulong)&local_108 | 1;
  if (((ulong)local_108 & 1) != 0) {
    uVar3 = local_f8;
  }
  FUN_006e4a70(auStack_58,uVar3);
  uVar8 = FUN_006e4ca4(auStack_58);
  if (local_a0 == 0) {
    puVar7 = (ulong *)(local_e0 & 0xfffffffffffffffe);
    if ((local_e0 & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
                    /* try { // try from 007872d0 to 007872d3 has its CatchHandler @ 00787640 */
    local_a0 = FUN_002e1a14(puVar7);
  }
  lVar12 = local_a0;
  local_118 = (long *)0x0;
  local_110 = 0;
  local_70 = &local_120;
  local_120 = 0x7265737508;
  local_68 = (long *)0x0;
                    /* try { // try from 00787308 to 0078733b has its CatchHandler @ 00787674 */
  FUN_00634d1c(&local_90,*(undefined8 *)(local_a0 + 0x20),&local_70);
  lVar9 = local_90[1];
  if (lVar9 == 0) {
    lVar9 = FUN_00634be0(lVar12 + 0x10,&local_120);
    *local_90 = lVar9;
    local_90[1] = lVar9;
  }
  FUN_002e03d4(lVar9 + 0x18,uVar8);
  if ((local_120 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_110);
  }
  FUN_006e4b9c(auStack_58);
  if (((ulong)local_108 & 1) != 0) {
    (**(code **)(*plStack_f0 + 0x18))(plStack_f0,local_f8,(ulong)local_108 & 0xfffffffffffffffe,1);
  }
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  FUN_0078e780(&local_70,*(undefined8 *)(*(long *)(param_2 + 8) + 8),auStack_e8,&local_90);
  if (local_88 != (long *)0x0) {
    plVar1 = local_88 + 1;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_88 + 0x10))(local_88);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar2 = local_68;
  puVar7 = local_70;
  lVar12 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 8) + 0x48);
  plVar13 = *(long **)(lVar12 + 0x198);
  uVar8 = *(undefined8 *)(lVar12 + 0x348);
  local_120 = 0;
  local_118 = (long *)0x0;
  local_70 = (ulong *)0x0;
  local_68 = (long *)0x0;
  plVar10 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0xf8,8);
  plVar10[2] = 0;
  plVar11 = plVar10 + 1;
  *plVar11 = 0;
  puVar6 = PTR_DAT_04376d40;
  plVar10[3] = (long)plVar13;
  plVar1 = plVar10 + 4;
  *plVar10 = (long)(puVar6 + 0x10);
  FUN_00782ef8(plVar1);
  plVar10[4] = (long)(PTR_DAT_04376d48 + 0x10);
  nn::os::InitializeEvent(plVar10 + 6,0,0);
  plVar10[4] = (long)(PTR_DAT_04376d50 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar10 + 0xb),false,0);
  *(undefined1 *)(plVar10 + 0x1e) = 0;
  if (plVar10 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar2 != (long *)0x0) {
    plVar11 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x78,8);
  *plVar11 = (long)&PTR_LAB_041a6378;
  plVar11[1] = 0;
  plVar11[2] = 0;
  plVar11[3] = (long)plVar13;
  FUN_007836ec(plVar11 + 4,plVar1,puVar7);
  plVar11[4] = (long)&PTR_FUN_041a63c8;
  *(undefined1 *)(plVar11 + 0xe) = 1;
  plVar11[10] = (long)plVar1;
  plVar11[0xb] = (long)plVar10;
  plVar11[0xc] = (long)puVar7;
  plVar11[0xd] = (long)plVar2;
  local_108 = puVar7;
  local_100 = plVar2;
  local_90 = plVar11 + 4;
  local_88 = plVar11;
  FUN_007841b0(uVar8,&local_90,&local_120,&local_108);
  if (local_100 != (long *)0x0) {
    plVar2 = local_100 + 1;
    do {
      lVar12 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_100 + 0x10))(local_100);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_88 != (long *)0x0) {
    plVar2 = local_88 + 1;
    do {
      lVar12 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_88 + 0x10))(local_88);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar10;
  if (local_118 != (long *)0x0) {
    plVar1 = local_118 + 1;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_118 + 0x10))(local_118);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 1;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_007a3d68(auStack_e8);
  return;
}


