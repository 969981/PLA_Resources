/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00786b68; name: FUN_00786b68
 */


void FUN_00786b68(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
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
  
                    /* try { // try from 00786b8c to 00786b97 has its CatchHandler @ 00786fac */
  FUN_007ab4b0(auStack_a8,0);
  FUN_00799d70(&local_c8);
  uVar3 = (ulong)&local_c8 | 1;
  if (((ulong)local_c8 & 1) != 0) {
    uVar3 = local_b8;
  }
                    /* try { // try from 00786bb8 to 00786bbf has its CatchHandler @ 00786f9c */
  FUN_00786ffc(auStack_a8,uVar3);
  if (((ulong)local_c8 & 1) != 0) {
    (**(code **)(*plStack_b0 + 0x18))(plStack_b0,local_b8,(ulong)local_c8 & 0xfffffffffffffffe,1);
  }
  lVar12 = *param_3;
  lVar10 = param_3[1];
  if (lVar12 != lVar10) {
    do {
      if (local_88 == (int *)0x0) {
        iVar11 = local_8c;
LAB_00786c40:
                    /* try { // try from 00786c44 to 00786c63 has its CatchHandler @ 00786fe8 */
        FUN_0032bcac(&local_98,iVar11 + 1);
        iVar11 = *local_88;
LAB_00786c54:
        *local_88 = iVar11 + 1;
        uVar13 = FUN_007af15c(local_98);
        *(undefined8 *)(local_88 + (long)local_90 * 2 + 2) = uVar13;
      }
      else {
        iVar11 = *local_88;
        if (iVar11 <= local_90) {
          if (iVar11 == local_8c) goto LAB_00786c40;
          goto LAB_00786c54;
        }
        uVar13 = *(undefined8 *)(local_88 + (long)local_90 * 2 + 2);
      }
      local_90 = local_90 + 1;
      FUN_00799d30(&local_c8,lVar12 + 8);
      uVar3 = (ulong)&local_c8 | 1;
      if (((ulong)local_c8 & 1) != 0) {
        uVar3 = local_b8;
      }
                    /* try { // try from 00786c9c to 00786ca3 has its CatchHandler @ 00786fb0 */
      FUN_00786820(uVar13,uVar3);
      if (((ulong)local_c8 & 1) != 0) {
        (**(code **)(*plStack_b0 + 0x18))
                  (plStack_b0,local_b8,(ulong)local_c8 & 0xfffffffffffffffe,1);
      }
      if ((*(byte *)(lVar12 + 0x28) & 1) == 0) {
        lVar9 = lVar12 + 0x29;
      }
      else {
        lVar9 = *(long *)(lVar12 + 0x38);
      }
                    /* try { // try from 00786cdc to 00786ce3 has its CatchHandler @ 00786fe8 */
      FUN_007869c4(uVar13,lVar9);
      lVar12 = lVar12 + 0x48;
    } while (lVar10 != lVar12);
  }
  local_c8 = (long *)0x0;
  local_c0 = (long *)0x0;
  FUN_0078c2ec(&local_d8,*(undefined8 *)(*(long *)(param_2 + 8) + 8),auStack_a8,&local_c8);
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
  plVar14 = *(long **)(lVar10 + 0x198);
  uVar13 = *(undefined8 *)(lVar10 + 0x348);
  local_70 = 0;
  local_68 = (long *)0x0;
  local_d8 = 0;
  local_d0 = (long *)0x0;
  plVar7 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0xf0,8);
  plVar7[2] = 0;
  plVar8 = plVar7 + 1;
  *plVar8 = 0;
  puVar6 = PTR_DAT_04376d28;
  plVar7[3] = (long)plVar14;
  plVar1 = plVar7 + 4;
  *plVar7 = (long)(puVar6 + 0x10);
  FUN_00782ef8(plVar1);
  plVar7[4] = (long)(PTR_DAT_04376d30 + 0x10);
  nn::os::InitializeEvent(plVar7 + 6,0,0);
  plVar7[4] = (long)(PTR_DAT_04376d38 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar7 + 0xb),false,0);
  *(undefined1 *)(plVar7 + 0x1d) = 0;
  if (plVar7 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar2 != (long *)0x0) {
    plVar8 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x78,8);
  *plVar8 = (long)&PTR_FUN_041a5ec8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = (long)plVar14;
  FUN_007836ec(plVar8 + 4,plVar1,lVar12);
  plVar8[4] = (long)&PTR_FUN_041a5f18;
  *(undefined1 *)(plVar8 + 0xe) = 1;
  plVar8[10] = (long)plVar1;
  plVar8[0xb] = (long)plVar7;
  plVar8[0xc] = lVar12;
  plVar8[0xd] = (long)plVar2;
  local_60 = lVar12;
  local_58 = plVar2;
  local_c8 = plVar8 + 4;
  local_c0 = plVar8;
  FUN_007841b0(uVar13,&local_c8,&local_70,&local_60);
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
  param_1[1] = plVar7;
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
  FUN_007ab580(auStack_a8);
  return;
}


