/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065d184; name: FUN_0065d184
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0065d184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  MutexType *pMVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  char cVar10;
  bool bVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined8 local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  undefined8 *******local_c8;
  undefined8 *******pppppppuStack_c0;
  undefined1 auStack_b0 [64];
  long **local_70;
  undefined8 uStack_68;
  
  plVar12 = (long *)FUN_00612290();
  puVar1 = PTR_DAT_043753e0 + 0x10;
  puVar2 = PTR_DAT_043753e8 + 0x10;
  puVar3 = PTR_DAT_043753f0 + 0x10;
  plVar4 = (long *)(PTR_DAT_04373168 + 0x10);
  pMVar5 = (MutexType *)(param_1 + 0x1a8);
  plVar6 = (long *)(PTR_DAT_04373170 + 0x10);
  lVar16 = 0;
  lVar20 = 0;
  do {
    nn::os::LockMutex(pMVar5);
    cVar10 = *(char *)(param_1 + 0x1c8);
    while (cVar10 == '\0') {
      FUN_006644f4(param_1 + 0x140);
      nn::os::UnlockMutex(pMVar5);
      lVar18 = *(long *)(param_1 + 0x170);
      lVar19 = *(long *)(param_1 + 0x178);
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined8 *)(param_1 + 0x178) = 0;
      plVar8 = *(long **)(param_1 + 0x140);
      puVar9 = *(undefined8 **)(param_1 + 0x148);
      plVar13 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x78,8);
      plVar13[2] = 0;
      plVar13[3] = (long)plVar8;
      plVar7 = plVar13 + 4;
      plVar21 = plVar13 + 1;
      *plVar21 = 0;
      *plVar13 = (long)puVar1;
      FUN_00782ef8(plVar7);
      plVar13[4] = (long)puVar2;
      nn::os::InitializeEvent(plVar13 + 6,0,0);
      plVar13[4] = (long)puVar3;
      nn::os::InitializeMutex((MutexType *)(plVar13 + 0xb),false,0);
      if (plVar13 != (long *)0x0) {
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar11) {
            *plVar21 = *plVar21 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      plVar14 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x150,8);
      plVar14[2] = 0;
      plVar14[3] = (long)plVar8;
      plVar17 = plVar14 + 1;
      *plVar17 = 0;
      *plVar14 = (long)&PTR_LAB_041957a8;
      FUN_007840dc(plVar14 + 4);
      plVar14[4] = (long)&PTR_LAB_041957f8;
      lVar22 = (**(code **)(*plVar8 + 0x10))(plVar8,0x1000,0x10);
      if (lVar22 == 0) {
        local_d8 = (long *)CONCAT44(local_d8._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)&local_d8,"");
      }
      FUN_00782cfc(plVar14 + 10,plVar7,0,lVar22,0x1000,1);
      plVar14[10] = (long)&PTR_LAB_04195840;
      plVar14[0x25] = (long)plVar8;
      plVar14[0x26] = 0x1000;
      *(undefined1 *)((long)plVar14 + 0x149) = 1;
      plVar14[0x27] = (long)plVar7;
      plVar14[0x28] = (long)plVar13;
      plVar14[0x23] = lVar18;
      plVar14[0x24] = lVar19;
      local_e8 = 0;
      local_e0 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = *plVar17 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      local_d8 = plVar14 + 4;
      local_d0 = plVar14;
      (**(code **)*puVar9)(puVar9,&local_d8,&local_e8);
      if (local_d0 != (long *)0x0) {
        plVar8 = local_d0 + 1;
        do {
          lVar18 = *plVar8;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar11) {
            *plVar8 = lVar18 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_e0 != (long *)0x0) {
        plVar8 = local_e0 + 1;
        do {
          lVar18 = *plVar8;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar11) {
            *plVar8 = lVar18 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*local_e0 + 0x10))(local_e0);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plVar14 != (long *)0x0) {
        do {
          lVar18 = *plVar17;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar11) {
            *plVar17 = lVar18 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_70 = (long **)0x0;
      uStack_68 = 0;
      local_d8 = plVar4;
      local_d0 = plVar6;
      local_c8 = &local_c8;
      pppppppuStack_c0 = &local_c8;
      (**(code **)(plVar13[4] + 0x10))(plVar7,auStack_b0);
      local_70 = &local_d0;
      thunk_FUN_00783af0(&local_d8);
      local_d8 = plVar4;
      FUN_00782f18(&local_d0);
      (**(code **)(plVar13[4] + 0x30))(plVar7);
      if (plVar13 != (long *)0x0) {
        do {
          lVar18 = *plVar21;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar11) {
            *plVar21 = lVar18 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          std::__shared_weak_count::__release_weak();
        }
      }
      nn::os::LockMutex(pMVar5);
      cVar10 = *(char *)(param_1 + 0x1c8);
    }
    *(undefined1 *)(param_1 + 0x1c8) = 0;
    lVar22 = *(long *)(param_1 + 0x218);
    *(long *)(param_1 + 0x218) = lVar20;
    lVar18 = *(long *)(param_1 + 0x220);
    *(long *)(param_1 + 0x220) = lVar20;
    lVar19 = *(long *)(param_1 + 0x228);
    *(long *)(param_1 + 0x228) = lVar16;
    nn::os::UnlockMutex(pMVar5);
    if (lVar22 != lVar18) {
      lVar16 = lVar22;
      do {
        local_d8 = (long *)((ulong)local_d8 & 0xffffff0000000000);
        uVar15 = FUN_0065d640(param_2,lVar16,&local_d8);
        if ((uVar15 & 1) == 0) goto LAB_0065d5c0;
        lVar16 = lVar16 + 0x28;
      } while (lVar18 != lVar16);
      while (lVar22 != lVar18) {
        lVar18 = lVar18 + -0x28;
        FUN_006888c8(lVar18);
      }
    }
    uVar15 = FUN_00783cf4(param_3);
    lVar16 = lVar19;
    lVar20 = lVar22;
  } while ((uVar15 & 1) == 0);
  lVar18 = lVar22;
LAB_0065d5c0:
  if (lVar22 != 0) {
    while (lVar18 != lVar22) {
      lVar18 = lVar18 + -0x28;
      FUN_006888c8(lVar18);
    }
    (**(code **)(*plVar12 + 0x18))(plVar12,lVar22,lVar19 - lVar22,8);
  }
  return;
}


