/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc79a0; name: FUN_02cc79a0
 */


void FUN_02cc79a0(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  uint local_e0 [2];
  byte local_d8;
  undefined7 uStack_d7;
  undefined8 local_c8;
  long *plStack_c0;
  char local_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  byte local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined5 local_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined8 *local_50;
  undefined8 local_48;
  ulong local_40;
  long *plStack_38;
  
  puVar3 = *(undefined8 **)(param_1 + 0xb0);
  for (puVar10 = *(undefined8 **)(param_1 + 0xa8); puVar10 != puVar3; puVar10 = puVar10 + 1) {
    (**(code **)(*(long *)*puVar10 + 0x40))();
  }
  if ((*(long **)(param_1 + 0x200) == (long *)0x0) ||
     (uVar6 = (**(code **)(**(long **)(param_1 + 0x200) + 0x20))(), (uVar6 & 1) == 0))
  goto LAB_02cc7ca0;
  plVar7 = *(long **)(param_1 + 0x200);
  plVar11 = *(long **)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  (**(code **)(*plVar7 + 0x30))(local_e0);
  if (plVar11 == (long *)0x0) {
LAB_02cc7a30:
    if (local_e0[0] != 0) goto LAB_02cc7a38;
LAB_02cc7adc:
    if (*(long *)(param_1 + 0xe0) != 0) {
      FUN_02762fb0(&local_50,&local_90);
      uVar2 = (uint)((byte)local_50 >> 1);
      if (((ulong)local_50 & 1) != 0) {
        uVar2 = (uint)local_48;
      }
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      uStack_5b = 0;
      uStack_58 = 0;
      if (uVar2 < 0x1d) {
        uVar6 = (ulong)&local_50 | 1;
        if (((ulong)local_50 & 1) != 0) {
          uVar6 = local_40;
        }
        snprintf((char *)&local_70,0x1d,"%s",uVar6);
      }
      *(undefined8 *)(param_1 + 0x1e1) = local_70;
      *(ulong *)(param_1 + 0x1f6) = CONCAT53(uStack_58,uStack_5b);
      *(ulong *)(param_1 + 0x1f1) = CONCAT35(uStack_5b,local_60);
      *(undefined8 *)(param_1 + 0x1e9) = local_68;
      if (*(char *)(param_1 + 0x1e0) == '\0') {
        *(undefined1 *)(param_1 + 0x1e0) = 1;
      }
      local_70 = *(undefined8 *)(param_1 + 0x1e1);
      local_68 = *(undefined8 *)(param_1 + 0x1e9);
      uStack_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1f6) >> 0x18);
      local_60 = (undefined5)*(undefined8 *)(param_1 + 0x1f1);
      uStack_5b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x1f1) >> 0x28);
      (**(code **)(param_1 + 0xe0))(param_1 + 0x100,&local_70);
      if (((ulong)local_50 & 1) != 0) {
        (**(code **)(*plStack_38 + 0x18))
                  (plStack_38,local_40,(ulong)local_50 & 0xfffffffffffffffe,1);
      }
    }
LAB_02cc7bd0:
    pcVar8 = *(code **)(param_1 + 0x168);
  }
  else {
    plVar7 = plVar11 + 1;
    do {
      lVar9 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 != 0) goto LAB_02cc7a30;
    (**(code **)(*plVar11 + 0x10))(plVar11);
    std::__shared_weak_count::__release_weak();
    if (local_e0[0] == 0) goto LAB_02cc7adc;
LAB_02cc7a38:
    uVar2 = local_e0[0];
    if (*(long *)(param_1 + 0x160) == 0) goto LAB_02cc7bd0;
    local_48 = 0;
    local_40 = FUN_00612290();
    plStack_38 = (long *)0x0;
    local_50 = &local_48;
    FUN_02767d84(&local_70,local_b8,&local_50);
    FUN_02767254(&local_50,local_48);
    uVar6 = FUN_006164f0(uVar2,&local_70);
    FUN_02767254(&local_70,local_68);
    local_50 = (undefined8 *)(uVar6 & 0xffffffff | (ulong)local_e0[0] << 0x20);
    (**(code **)(param_1 + 0x160))(param_1 + 0x180,&local_50);
    pcVar8 = *(code **)(param_1 + 0x168);
  }
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    (*pcVar8)(param_1 + 0x180);
  }
  pcVar8 = *(code **)(param_1 + 0xe8);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    (*pcVar8)(param_1 + 0x100);
  }
  plVar7 = *(long **)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
    do {
      lVar9 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((local_90 & 1) != 0) {
    (**(code **)(*plStack_78 + 0x18))
              (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
  }
  if (local_b8[0] != '\0') {
    FUN_02767254(auStack_b0,local_a8);
  }
  if ((local_d8 & 1) != 0) {
    (**(code **)(*plStack_c0 + 0x18))
              (plStack_c0,local_c8,CONCAT71(uStack_d7,local_d8) & 0xfffffffffffffffe,1);
  }
LAB_02cc7ca0:
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    lVar9 = **(long **)(param_1 + 0x98);
    pMVar1 = (MutexType *)(lVar9 + 0x20);
    nn::os::LockMutex(pMVar1);
    plVar7 = *(long **)(lVar9 + 0x10);
    if (plVar7 == (long *)0x0) {
      nn::os::UnlockMutex(pMVar1);
    }
    else {
      uVar6 = (**(code **)(*plVar7 + 0x20))();
      nn::os::UnlockMutex(pMVar1);
      if ((uVar6 & 1) != 0) {
        return;
      }
    }
    lVar9 = *(long *)**(undefined8 **)(param_1 + 0x98);
    pMVar1 = (MutexType *)(lVar9 + 0x5d8);
    uVar6 = nn::os::IsMutexLockedByCurrentThread(pMVar1);
    if ((uVar6 & 1) == 0) {
      nn::os::LockMutex(pMVar1);
      do {
        uVar6 = FUN_00784774(lVar9 + 0x490);
      } while ((uVar6 & 1) != 0);
      nn::os::UnlockMutex(pMVar1);
    }
  }
  return;
}


