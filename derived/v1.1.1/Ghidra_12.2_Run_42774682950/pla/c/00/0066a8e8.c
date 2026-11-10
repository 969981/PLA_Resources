/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0066a8e8; name: FUN_0066a8e8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0066a8e8(long *param_1,long *param_2)

{
  MutexType *pMVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 local_110;
  long *local_108;
  byte local_100;
  undefined7 uStack_ff;
  undefined8 local_f0;
  long *plStack_e8;
  undefined8 local_e0;
  long *local_d8;
  byte local_d0;
  undefined7 uStack_cf;
  undefined8 local_c0;
  long *plStack_b8;
  byte local_b0;
  undefined7 uStack_af;
  undefined8 local_a0;
  long *plStack_98;
  byte local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  long *plStack_78;
  long local_70;
  long *local_68;
  
  pMVar1 = (MutexType *)(param_2 + 8);
  nn::os::LockMutex(pMVar1);
  if (param_2[7] == 0) {
    *param_1 = param_2[0x35];
    lVar18 = param_2[0x36];
    param_1[1] = lVar18;
    if (lVar18 != 0) {
      plVar7 = (long *)(lVar18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  param_2[7] = 0;
  nn::os::UnlockMutex(pMVar1);
  FUN_0066724c(param_2 + 0x20);
  FUN_0066724c(param_2 + 0x1d);
  (**(code **)(*param_2 + 0x30))(param_2,0);
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0xc0))(param_2);
  FUN_0064c230(*puVar6,param_2 + 0x35);
  plVar7 = (long *)(**(code **)(*param_2 + 0xc0))(param_2);
  lVar18 = *plVar7;
  uVar8 = FUN_00675ed4();
  FUN_0064f424(&local_110,lVar18 + 0x10,uVar8);
  pbVar9 = (byte *)(**(code **)(*param_2 + 0x18))(param_2);
  pbVar13 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar13 = pbVar9 + 1;
  }
  FUN_0064f564(&local_e0,&local_110,pbVar13);
  FUN_00650cfc(&local_70,&local_e0);
  if ((local_90 & 1) != 0) {
    (**(code **)(*plStack_78 + 0x18))
              (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
  }
  if ((local_b0 & 1) != 0) {
    (**(code **)(*plStack_98 + 0x18))
              (plStack_98,local_a0,CONCAT71(uStack_af,local_b0) & 0xfffffffffffffffe,1);
  }
  if ((local_d0 & 1) != 0) {
    (**(code **)(*plStack_b8 + 0x18))
              (plStack_b8,local_c0,CONCAT71(uStack_cf,local_d0) & 0xfffffffffffffffe,1);
  }
  if (local_d8 != (long *)0x0) {
    plVar7 = local_d8 + 1;
    do {
      lVar18 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_d8 + 0x10))(local_d8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((local_100 & 1) != 0) {
    (**(code **)(*plStack_e8 + 0x18))
              (plStack_e8,local_f0,CONCAT71(uStack_ff,local_100) & 0xfffffffffffffffe,1);
  }
  if (local_108 != (long *)0x0) {
    plVar7 = local_108 + 1;
    do {
      lVar18 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar5 = local_68;
  lVar18 = local_70;
  local_70 = 0;
  local_68 = (long *)0x0;
  lVar14 = param_2[0x31];
  lVar15 = param_2[0x32];
  lVar16 = param_2[0x33];
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  lVar17 = param_2[0x34];
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  plVar19 = *(long **)(param_2[3] + 0x198);
  puVar6 = *(undefined8 **)(param_2[3] + 0x348);
  plVar10 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x78,8);
  plVar10[2] = 0;
  plVar20 = plVar10 + 1;
  *plVar20 = 0;
  puVar4 = PTR_DAT_043753e0;
  plVar10[3] = (long)plVar19;
  plVar7 = plVar10 + 4;
  *plVar10 = (long)(puVar4 + 0x10);
  FUN_00782ef8(plVar7);
  plVar10[4] = (long)(PTR_DAT_043753e8 + 0x10);
  nn::os::InitializeEvent(plVar10 + 6,0,0);
  plVar10[4] = (long)(PTR_DAT_043753f0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar10 + 0xb),false,0);
  if (plVar10 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = *plVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar11 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x170,8);
  plVar21 = plVar11 + 1;
  *plVar21 = 0;
  plVar11[2] = 0;
  plVar11[3] = (long)plVar19;
  *plVar11 = (long)&PTR_LAB_04196af0;
  FUN_007840dc(plVar11 + 4);
  plVar11[4] = (long)&PTR_LAB_04196b40;
  lVar12 = (**(code **)(*plVar19 + 0x10))(plVar19,0x10000,0x10);
  if (lVar12 == 0) {
    local_e0 = (long *)CONCAT44(local_e0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_e0,"");
  }
  FUN_00782cfc(plVar11 + 10,plVar7,0,lVar12,0x10000,1);
  plVar11[10] = (long)&PTR_LAB_04196b88;
  plVar11[0x29] = (long)plVar19;
  plVar11[0x2a] = 0x10000;
  *(undefined1 *)((long)plVar11 + 0x169) = 1;
  plVar11[0x2b] = (long)plVar7;
  plVar11[0x2c] = (long)plVar10;
  plVar11[0x23] = lVar18;
  plVar11[0x24] = (long)plVar5;
  plVar11[0x25] = lVar14;
  plVar11[0x26] = lVar15;
  plVar11[0x27] = lVar16;
  plVar11[0x28] = lVar17;
  local_110 = 0;
  local_108 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = *plVar21 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_e0 = plVar11 + 4;
  local_d8 = plVar11;
  (**(code **)*puVar6)(puVar6,&local_e0,&local_110);
  if (local_d8 != (long *)0x0) {
    plVar7 = local_d8 + 1;
    do {
      lVar18 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_d8 + 0x10))(local_d8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_108 != (long *)0x0) {
    plVar7 = local_108 + 1;
    do {
      lVar18 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar11 != (long *)0x0) {
    do {
      lVar18 = *plVar21;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar10 != (long *)0x0) {
    do {
      lVar18 = *plVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = param_2[0x35];
  lVar18 = param_2[0x36];
  param_1[1] = lVar18;
  if (lVar18 != 0) {
    plVar7 = (long *)(lVar18 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (local_68 != (long *)0x0) {
    plVar7 = local_68 + 1;
    do {
      lVar18 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


