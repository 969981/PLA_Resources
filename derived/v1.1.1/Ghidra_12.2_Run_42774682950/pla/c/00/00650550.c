/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00650550; name: FUN_00650550
 */


void FUN_00650550(undefined8 *param_1,long *param_2,byte *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  undefined *puVar6;
  long lVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  ulong local_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [48];
  undefined8 local_70;
  long *local_68;
  
                    /* try { // try from 00650578 to 00650583 has its CatchHandler @ 006509b0 */
  FUN_00685f0c(auStack_a0,0);
  if ((*(byte *)(param_2 + 10) & 1) == 0) {
    lVar13 = (long)param_2 + 0x51;
  }
  else {
    lVar13 = param_2[0xc];
  }
                    /* try { // try from 0065059c to 006505a7 has its CatchHandler @ 006509ac */
  FUN_00682930(&local_c0,lVar13);
  uVar3 = (ulong)&local_c0 | 1;
  if (((ulong)local_c0 & 1) != 0) {
    uVar3 = local_b0;
  }
                    /* try { // try from 006505bc to 006505c3 has its CatchHandler @ 00650974 */
  FUN_006509b4(auStack_a0,uVar3);
  if (((ulong)local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))(plStack_a8,local_b0,(ulong)local_c0 & 0xfffffffffffffffe,1);
  }
  bVar8 = (*param_3 & 1) != 0;
  uVar3 = (ulong)(*param_3 >> 1);
  if (bVar8) {
    uVar3 = *(ulong *)(param_3 + 8);
  }
  if (uVar3 != 0) {
    pbVar11 = *(byte **)(param_3 + 0x10);
    if (!bVar8) {
      pbVar11 = param_3 + 1;
    }
                    /* try { // try from 00650608 to 0065060f has its CatchHandler @ 00650960 */
    FUN_00650b58(auStack_a0,pbVar11);
  }
  local_c0 = (long *)0x0;
  local_b8 = (long *)0x0;
  FUN_00651e5c(&local_d0,*(undefined8 *)(*param_2 + 8),auStack_a0,&local_c0);
  if (local_b8 != (long *)0x0) {
    plVar1 = local_b8 + 1;
    do {
      lVar13 = *plVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_b8 + 0x10))(local_b8);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar1 = local_c8;
  lVar7 = local_d0;
  lVar13 = *param_2;
  lVar4 = param_2[1];
  lVar12 = *(long *)(*(long *)(lVar13 + 8) + 0x48);
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + 8);
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = *plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_d0 = 0;
  local_c8 = (long *)0x0;
  plVar15 = *(long **)(lVar12 + 0x198);
  puVar14 = *(undefined8 **)(lVar12 + 0x348);
  plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xe0,8);
  plVar9[2] = 0;
  plVar10 = plVar9 + 1;
  *plVar10 = 0;
  puVar6 = PTR_DAT_04375870;
  plVar9[3] = (long)plVar15;
  plVar2 = plVar9 + 4;
  *plVar9 = (long)(puVar6 + 0x10);
  FUN_00782ef8(plVar2);
  plVar9[4] = (long)(PTR_DAT_04375878 + 0x10);
  nn::os::InitializeEvent(plVar9 + 6,0,0);
  plVar9[4] = (long)(PTR_DAT_04375880 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar9 + 0xb),false,0);
  *(undefined1 *)(plVar9 + 0x1b) = 0;
  if (plVar9 != (long *)0x0) {
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *plVar10 = *plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar10 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x160,8);
  plVar16 = plVar10 + 1;
  *plVar16 = 0;
  plVar10[2] = 0;
  plVar10[3] = (long)plVar15;
  *plVar10 = (long)&PTR_LAB_041947d0;
  FUN_007840dc(plVar10 + 4);
  plVar10[4] = (long)&PTR_LAB_04194820;
  lVar12 = (**(code **)(*plVar15 + 0x10))(plVar15,0x10000,0x10);
  if (lVar12 == 0) {
    local_c0 = (long *)CONCAT44(local_c0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_c0,"");
  }
  FUN_00782cfc(plVar10 + 10,plVar2,0,lVar12,0x10000,1);
  *(undefined1 *)((long)plVar10 + 0x159) = 1;
  plVar10[0x27] = (long)plVar15;
  plVar10[0x28] = 0x10000;
  plVar10[10] = (long)&PTR_LAB_04194868;
  plVar10[0x29] = (long)plVar2;
  plVar10[0x2a] = (long)plVar9;
  plVar10[0x23] = lVar13;
  plVar10[0x24] = lVar4;
  plVar10[0x25] = lVar7;
  plVar10[0x26] = (long)plVar1;
  local_70 = 0;
  local_68 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar8) {
        *plVar16 = *plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_c0 = plVar10 + 4;
  local_b8 = plVar10;
  (**(code **)*puVar14)(puVar14,&local_c0,&local_70);
  if (local_b8 != (long *)0x0) {
    plVar1 = local_b8 + 1;
    do {
      lVar13 = *plVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_b8 + 0x10))(local_b8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 1;
    do {
      lVar13 = *plVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar2;
  param_1[1] = plVar9;
  if (plVar10 != (long *)0x0) {
    do {
      lVar13 = *plVar16;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar8) {
        *plVar16 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_c8 != (long *)0x0) {
    plVar1 = local_c8 + 1;
    do {
      lVar13 = *plVar1;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_c8 + 0x10))(local_c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00685f68(auStack_a0);
  return;
}


