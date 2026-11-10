/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00788ed4; name: FUN_00788ed4
 */


void FUN_00788ed4(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  ulong local_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 local_98;
  int local_90;
  int local_8c;
  int *local_88;
  undefined8 local_70;
  long *local_68;
  long local_60;
  long *local_58;
  
                    /* try { // try from 00788ef8 to 00788f03 has its CatchHandler @ 007892e4 */
  FUN_007ac9ec(auStack_a8,0);
  FUN_00799d90(&local_c8);
  uVar3 = (ulong)&local_c8 | 1;
  if (((ulong)local_c8 & 1) != 0) {
    uVar3 = local_b8;
  }
                    /* try { // try from 00788f24 to 00788f2b has its CatchHandler @ 007892ac */
  FUN_007892fc(auStack_a8,uVar3);
  if (((ulong)local_c8 & 1) != 0) {
    (**(code **)(*plStack_b0 + 0x18))(plStack_b0,local_b8,(ulong)local_c8 & 0xfffffffffffffffe,1);
  }
  lVar12 = *param_3;
  lVar10 = param_3[1];
  if (lVar12 != lVar10) {
    if (local_88 != (int *)0x0) goto LAB_00788f9c;
LAB_00788fbc:
    iVar11 = local_8c;
    do {
                    /* try { // try from 00788fc4 to 00788fe3 has its CatchHandler @ 007892e8 */
      FUN_0032bcac(&local_98,iVar11 + 1);
      iVar11 = *local_88;
      do {
        *local_88 = iVar11 + 1;
        uVar7 = FUN_007af8b0(local_98);
        *(undefined8 *)(local_88 + (long)local_90 * 2 + 2) = uVar7;
        while( true ) {
          local_90 = local_90 + 1;
          FUN_00788c10(uVar7,lVar12);
          lVar12 = lVar12 + 0x68;
          if (lVar10 == lVar12) goto LAB_00789000;
          if (local_88 == (int *)0x0) goto LAB_00788fbc;
LAB_00788f9c:
          iVar11 = *local_88;
          if (iVar11 <= local_90) break;
          uVar7 = *(undefined8 *)(local_88 + (long)local_90 * 2 + 2);
        }
      } while (iVar11 != local_8c);
    } while( true );
  }
LAB_00789000:
  local_c8 = (long *)0x0;
  local_c0 = (long *)0x0;
  FUN_0079138c(&local_d8,*(undefined8 *)(*(long *)(param_2 + 8) + 8),auStack_a8,&local_c8);
  if (local_c0 != (long *)0x0) {
    plVar1 = local_c0 + 1;
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
      (**(code **)(*local_c0 + 0x10))(local_c0);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar2 = local_d0;
  lVar12 = local_d8;
  lVar10 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 8) + 0x48);
  plVar13 = *(long **)(lVar10 + 0x198);
  uVar7 = *(undefined8 *)(lVar10 + 0x348);
  local_70 = 0;
  local_68 = (long *)0x0;
  local_d8 = 0;
  local_d0 = (long *)0x0;
  plVar8 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0xf0,8);
  plVar8[2] = 0;
  plVar9 = plVar8 + 1;
  *plVar9 = 0;
  puVar6 = PTR_DAT_04376d58;
  plVar8[3] = (long)plVar13;
  plVar1 = plVar8 + 4;
  *plVar8 = (long)(puVar6 + 0x10);
  FUN_00782ef8(plVar1);
  plVar8[4] = (long)(PTR_DAT_04376d60 + 0x10);
  nn::os::InitializeEvent(plVar8 + 6,0,0);
  plVar8[4] = (long)(PTR_DAT_04376d68 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar8 + 0xb),false,0);
  *(undefined1 *)(plVar8 + 0x1d) = 0;
  if (plVar8 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar2 != (long *)0x0) {
    plVar9 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x78,8);
  *plVar9 = (long)&PTR_FUN_041a67f8;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)plVar13;
  FUN_007836ec(plVar9 + 4,plVar1,lVar12);
  plVar9[4] = (long)&PTR_FUN_041a6848;
  *(undefined1 *)(plVar9 + 0xe) = 1;
  plVar9[10] = (long)plVar1;
  plVar9[0xb] = (long)plVar8;
  plVar9[0xc] = lVar12;
  plVar9[0xd] = (long)plVar2;
  local_60 = lVar12;
  local_58 = plVar2;
  local_c8 = plVar9 + 4;
  local_c0 = plVar9;
  FUN_007841b0(uVar7,&local_c8,&local_70,&local_60);
  if (local_58 != (long *)0x0) {
    plVar2 = local_58 + 1;
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
      (**(code **)(*local_58 + 0x10))(local_58);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_c0 != (long *)0x0) {
    plVar2 = local_c0 + 1;
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
      (**(code **)(*local_c0 + 0x10))(local_c0);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar8;
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
  if (local_d0 != (long *)0x0) {
    plVar1 = local_d0 + 1;
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
      (**(code **)(*local_d0 + 0x10))(local_d0);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_007aca68(auStack_a8);
  return;
}


