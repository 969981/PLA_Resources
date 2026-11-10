/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065e848; name: FUN_0065e848
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0065e848(long *param_1)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  undefined1 auStack_198 [8];
  long *local_190;
  undefined8 local_188;
  undefined8 local_180;
  long *plStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 local_150;
  long *local_140;
  undefined1 local_138;
  undefined1 local_130 [8];
  long *local_128;
  long *local_120;
  MutexType aMStack_118 [32];
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  undefined8 *******pppppppuStack_c8;
  undefined8 *******local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  long **local_70;
  undefined8 uStack_68;
  
  local_f0 = 0;
  local_e8 = 0;
  local_f8 = 0;
  local_e0 = (long *)FUN_00612290();
  nn::os::InitializeMutex(aMStack_118,false,0);
  local_128 = (long *)0x0;
  local_120 = (long *)0x0;
  local_130[0] = 0;
  if ((param_1[1] == 0) ||
     (plVar9 = (long *)std::__shared_weak_count::lock(), plVar9 == (long *)0x0)) {
    bVar4 = false;
  }
  else {
    if ((*param_1 == 0) ||
       (lVar13 = *(long *)(*(long *)(*param_1 + 8) + 0x48), *(int *)(lVar13 + 0x168) != 3)) {
      bVar4 = false;
    }
    else {
      plVar20 = *(long **)(lVar13 + 0x198);
      puVar17 = *(undefined8 **)(lVar13 + 0x5f8);
      plVar10 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x78,8);
      plVar10[2] = 0;
      plVar11 = plVar10 + 1;
      *plVar11 = 0;
      puVar7 = PTR_DAT_043753e0;
      plVar10[3] = (long)plVar20;
      plVar1 = plVar10 + 4;
      *plVar10 = (long)(puVar7 + 0x10);
      FUN_00782ef8(plVar1);
      plVar10[4] = (long)(PTR_DAT_043753e8 + 0x10);
      nn::os::InitializeEvent(plVar10 + 6,0,0);
      plVar10[4] = (long)(PTR_DAT_043753f0 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar10 + 0xb),false,0);
      if (plVar10 != (long *)0x0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar11 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x160,8);
      plVar21 = plVar11 + 1;
      *plVar21 = 0;
      plVar11[2] = 0;
      plVar11[3] = (long)plVar20;
      *plVar11 = (long)&PTR_LAB_04195998;
      FUN_007840dc(plVar11 + 4);
      plVar11[4] = (long)&PTR_LAB_041959e8;
      lVar13 = (**(code **)(*plVar20 + 0x10))(plVar20,0x10000,0x10);
      if (lVar13 == 0) {
        local_d8 = (long *)CONCAT44(local_d8._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)&local_d8,"");
      }
      FUN_00782cfc(plVar11 + 10,plVar1,0,lVar13,0x10000,1);
      *(undefined1 *)((long)plVar11 + 0x159) = 1;
      plVar11[10] = (long)&PTR_LAB_04195a30;
      plVar11[0x23] = (long)param_1;
      plVar11[0x24] = (long)&local_f8;
      plVar11[0x27] = (long)plVar20;
      plVar11[0x28] = 0x10000;
      plVar11[0x29] = (long)plVar1;
      plVar11[0x2a] = (long)plVar10;
      plVar11[0x25] = (long)local_130;
      plVar11[0x26] = (long)aMStack_118;
      local_180 = 0;
      plStack_178 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar4) {
            *plVar21 = *plVar21 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_d8 = plVar11 + 4;
      local_d0 = plVar11;
      (**(code **)*puVar17)(puVar17,&local_d8,&local_180);
      if (local_d0 != (long *)0x0) {
        plVar20 = local_d0 + 1;
        do {
          lVar13 = *plVar20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *plVar20 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_178 != (long *)0x0) {
        plVar20 = plStack_178 + 1;
        do {
          lVar13 = *plVar20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *plVar20 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plVar11 != (long *)0x0) {
        do {
          lVar13 = *plVar21;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar4) {
            *plVar21 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar11 = local_120;
      local_128 = plVar1;
      if (local_120 != (long *)0x0) {
        plVar1 = local_120 + 1;
        do {
          lVar13 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          lVar13 = *local_120;
          local_120 = plVar10;
          (**(code **)(lVar13 + 0x10))(plVar11);
          std::__shared_weak_count::__release_weak();
          plVar10 = local_120;
        }
      }
      local_120 = plVar10;
      bVar4 = true;
    }
    plVar1 = plVar9 + 1;
    do {
      lVar13 = *plVar1;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *plVar1 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_140 = param_1 + 6;
  local_138 = 1;
  local_b0 = 0;
  pppppppuStack_c8 = (undefined8 *******)0x0;
  local_d0 = (long *)0x0;
  uStack_b8 = 0;
  local_c0 = (undefined8 *******)0x0;
  local_d8 = local_140;
                    /* try { // try from 0065eba0 to 0065ebab has its CatchHandler @ 0065ef84 */
  FUN_00689b90(&pppppppuStack_c8,0);
  local_a8 = 1;
  FUN_0065ef88(&local_d8);
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  plStack_178 = (long *)0x0;
  local_180 = 0;
                    /* try { // try from 0065ebcc to 0065ebd7 has its CatchHandler @ 0065ef80 */
  FUN_00689b90(&local_170,0);
  local_150 = 0;
  local_180 = 0;
  if (local_d8 != (long *)0x0) {
    do {
      if (bVar4) {
        while (nn::os::LockMutex(aMStack_118),
              (ulong)param_1[0x4b] <= (ulong)((long)(local_f0 - local_f8) >> 5)) {
          nn::os::UnlockMutex(aMStack_118);
          local_188 = 10000000;
          FUN_006118d0(&local_188);
        }
        if (local_f0 < local_e8) {
          FUN_00665d58(local_f0,&pppppppuStack_c8);
          local_f0 = local_f0 + 0x20;
        }
        else {
          lVar13 = (long)(local_f0 - local_f8) >> 5;
          uVar18 = lVar13 + 1;
          if (uVar18 >> 0x3b != 0) {
                    /* try { // try from 0065ef0c to 0065ef13 has its CatchHandler @ 0065ef38 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)(local_e8 - local_f8) >> 5) < 0x3ffffffffffffff) {
            uVar14 = (long)(local_e8 - local_f8) >> 4;
            if (uVar18 <= uVar14) {
              uVar18 = uVar14;
            }
            if (uVar18 != 0) goto LAB_0065ecac;
            lVar12 = 0;
          }
          else {
            uVar18 = 0x7ffffffffffffff;
LAB_0065ecac:
            lVar12 = (**(code **)(*local_e0 + 0x10))(local_e0,uVar18 << 5,8);
          }
          uVar14 = lVar12 + lVar13 * 0x20;
          FUN_00665d58(uVar14,&pppppppuStack_c8);
          uVar8 = local_f8;
          uVar16 = uVar14;
          uVar5 = local_f8;
          uVar15 = local_f8;
          uVar19 = local_f0;
          uVar6 = local_e8;
          while( true ) {
            local_f8 = uVar16;
            local_e8 = lVar12 + uVar18 * 0x20;
            uVar16 = uVar14 + 0x20;
            if (uVar19 == uVar8) break;
            uVar16 = local_f8 - 0x20;
            uVar19 = uVar19 - 0x20;
            local_f8 = uVar5;
            local_e8 = uVar6;
            FUN_00665d58(uVar16,uVar19);
            uVar5 = local_f8;
            uVar15 = local_f0;
            uVar6 = local_e8;
          }
          while (local_f0 = uVar16, uVar15 != uVar5) {
            uVar15 = uVar15 - 0x20;
            FUN_00689be4(uVar15);
            uVar16 = local_f0;
          }
          if (uVar5 != 0) {
            (**(code **)(*local_e0 + 0x18))(local_e0,uVar5,uVar6 - uVar5,8);
          }
        }
        nn::os::UnlockMutex(aMStack_118);
        FUN_0065ef88(&local_d8);
      }
      else {
        FUN_0065d7f0(param_1,&pppppppuStack_c8);
        FUN_0065ef88(&local_d8);
      }
    } while (local_d8 != (long *)0x0);
  }
  FUN_00689be4(&local_170);
  FUN_00689be4(&pppppppuStack_c8);
  if ((char)local_140[10] == '\0') {
    *(undefined1 *)(local_140 + 10) = 1;
                    /* try { // try from 0065eda4 to 0065edab has its CatchHandler @ 0065ef7c */
    (**(code **)(**(long **)(local_140[6] + 0x20) + 0x38))(*(long **)(local_140[6] + 0x20),0);
  }
  local_130[0] = 1;
  if (local_128 != (long *)0x0) {
    plVar9 = (long *)(PTR_DAT_04373168 + 0x10);
    local_d0 = (long *)(PTR_DAT_04373170 + 0x10);
    local_70 = (long **)0x0;
    uStack_68 = 0;
    pppppppuStack_c8 = &pppppppuStack_c8;
    local_d8 = plVar9;
    local_c0 = pppppppuStack_c8;
    (**(code **)(*local_128 + 0x10))(local_128,&local_b0);
    local_70 = &local_d0;
    thunk_FUN_00783af0(&local_d8);
    local_d8 = plVar9;
    FUN_00782f18(&local_d0);
  }
  FUN_0065b85c(auStack_198,param_1);
  if (local_190 != (long *)0x0) {
    plVar9 = local_190 + 1;
    do {
      lVar13 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_190 + 0x10))(local_190);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_120 != (long *)0x0) {
    plVar9 = local_120 + 1;
    do {
      lVar13 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_120 + 0x10))(local_120);
      std::__shared_weak_count::__release_weak();
    }
  }
  nn::os::FinalizeMutex(aMStack_118);
  uVar14 = local_f8;
  uVar18 = local_f0;
  if (local_f8 != 0) {
    for (; uVar18 != uVar14; uVar18 = uVar18 - 0x20) {
      FUN_00689be4(uVar18 - 0x20);
    }
    local_f0 = uVar14;
    (**(code **)(*local_e0 + 0x18))(local_e0,local_f8,local_e8 - local_f8,8);
  }
  return;
}


