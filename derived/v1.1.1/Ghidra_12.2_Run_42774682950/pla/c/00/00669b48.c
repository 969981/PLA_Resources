/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00669b48; name: FUN_00669b48
 */


void FUN_00669b48(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  MutexType *pMVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined4 local_d0 [2];
  ulong local_c8;
  long lStack_c0;
  long local_b8;
  long *plStack_b0;
  char local_a8;
  long *local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  byte local_80;
  undefined7 uStack_7f;
  ulong local_78;
  ulong local_70;
  long *plStack_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 0x50))(&local_80);
  uVar2 = (ulong)(local_80 >> 1);
  if ((local_80 & 1) != 0) {
    uVar2 = local_78;
  }
  if (uVar2 == 0) {
    plVar8 = *(long **)(param_2[3] + 400);
    plVar6 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0xd0,8);
    plVar6[2] = 0;
    plVar9 = plVar6 + 1;
    *plVar9 = 0;
    puVar5 = PTR_DAT_04375438;
    plVar6[3] = (long)plVar8;
    *plVar6 = (long)(puVar5 + 0x10);
    FUN_00782ef8(plVar6 + 4);
    plVar6[4] = (long)(PTR_DAT_04375448 + 0x10);
    nn::os::InitializeEvent((EventType *)(plVar6 + 6),0,0);
    pMVar1 = (MutexType *)(plVar6 + 0xb);
    plVar6[4] = (long)(PTR_DAT_04375440 + 0x10);
    nn::os::InitializeMutex(pMVar1,false,0);
    *(undefined1 *)(plVar6 + 0x19) = 0;
    if (plVar6 != (long *)0x0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_58 = 0;
    local_50 = FUN_00612290();
    uStack_48 = 0;
    local_60 = &local_58;
    FUN_002a3b60(local_d0,0,&DAT_03996322,&local_60);
    FUN_02767254(&local_60,local_58);
    nn::os::LockMutex(pMVar1);
    *(undefined4 *)(plVar6 + 0xf) = local_d0[0];
    plVar6[0x11] = lStack_c0;
    plVar6[0x10] = local_c8;
    plVar6[0x13] = (long)plStack_b0;
    plVar6[0x12] = local_b8;
    local_c8 = 0;
    lStack_c0 = 0;
    local_b8 = 0;
    *(undefined1 *)(plVar6 + 0x14) = 0;
    if (local_a8 != '\0') {
      plVar6[0x15] = (long)local_a0;
      plVar6[0x17] = lStack_90;
      plVar6[0x16] = local_98;
      plVar8 = plVar6 + 0x16;
      plVar6[0x18] = local_88;
      if (local_88 == 0) {
        plVar6[0x15] = (long)plVar8;
      }
      else {
        *(long **)(*plVar8 + 0x10) = plVar8;
        local_a0 = &local_98;
        local_98 = 0;
        local_88 = 0;
      }
      *(undefined1 *)(plVar6 + 0x14) = 1;
    }
    *(undefined1 *)(plVar6 + 0x19) = 1;
    nn::os::SignalEvent((EventType *)(plVar6 + 6));
    nn::os::UnlockMutex(pMVar1);
    if (local_a8 != '\0') {
      FUN_02767254(&local_a0,local_98);
    }
    if ((local_c8 & 1) != 0) {
      (**(code **)(*plStack_b0 + 0x18))(plStack_b0,local_b8,local_c8 & 0xfffffffffffffffe,1);
    }
    *param_1 = (long)(plVar6 + 4);
    param_1[1] = (long)plVar6;
    do {
      lVar7 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  else {
    uVar2 = (ulong)&local_80 | 1;
    if ((local_80 & 1) != 0) {
      uVar2 = local_70;
    }
    (**(code **)(*param_2 + 0x70))(param_1,param_2,uVar2,param_4);
  }
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))
              (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
  }
  return;
}


