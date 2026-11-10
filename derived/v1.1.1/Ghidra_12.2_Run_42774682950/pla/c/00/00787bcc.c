/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00787bcc; name: FUN_00787bcc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00787bcc(undefined8 *param_1,long param_2,long param_3,long *param_4,long *param_5)

{
  long *plVar1;
  char *__s;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong ***pppuVar5;
  size_t sVar6;
  void *__dest;
  long **pplVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  void *pvVar17;
  byte *pbVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long ****local_320;
  long *plStack_318;
  long local_310;
  long *local_308;
  undefined1 auStack_300 [64];
  long local_2c0 [4];
  long *local_2a0;
  long local_290;
  long *local_288;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined8 local_260;
  ulong ***local_240;
  long *plStack_238;
  void *local_230;
  long *local_228;
  undefined1 auStack_220 [64];
  long local_1e0 [4];
  long *local_1c0;
  long local_1b0;
  long *local_1a8;
  ulong ***local_1a0;
  long *plStack_198;
  char *local_190;
  long *local_188;
  undefined1 auStack_180 [64];
  long local_140 [4];
  long *local_120;
  long local_110;
  long *local_108;
  ulong ***local_100;
  long *plStack_f8;
  ulong local_f0;
  long *plStack_e8;
  undefined1 auStack_e0 [64];
  long local_a0 [4];
  long *local_80;
  long local_70;
  long *local_68;
  
                    /* try { // try from 00787bfc to 00787c07 has its CatchHandler @ 007887e8 */
  FUN_007a63cc(auStack_280,0);
  FUN_00799d90(&local_100);
  uVar20 = (ulong)&local_100 | 1;
  if (((ulong)local_100 & 1) != 0) {
    uVar20 = local_f0;
  }
                    /* try { // try from 00787c28 to 00787c2f has its CatchHandler @ 007887cc */
  FUN_0078883c(auStack_280,uVar20);
  if (((ulong)local_100 & 1) != 0) {
    (**(code **)(*plStack_e8 + 0x18))(plStack_e8,local_f0,(ulong)local_100 & 0xfffffffffffffffe,1);
  }
  FUN_00799db0(&local_100);
  uVar20 = (ulong)&local_100 | 1;
  if (((ulong)local_100 & 1) != 0) {
    uVar20 = local_f0;
  }
                    /* try { // try from 00787c78 to 00787c7f has its CatchHandler @ 007887bc */
  FUN_007889e0(auStack_280,uVar20);
  if (((ulong)local_100 & 1) != 0) {
    (**(code **)(*plStack_e8 + 0x18))(plStack_e8,local_f0,(ulong)local_100 & 0xfffffffffffffffe,1);
  }
  plVar16 = *(long **)(param_3 + 8);
  if (plVar16 == (long *)(param_3 + 0x10)) {
LAB_00787e84:
    local_320 = *(long *****)(param_2 + 8);
    plStack_318 = *(long **)(param_2 + 0x10);
    lVar14 = *(long *)(param_2 + 0x18);
    if (plStack_318 == (long *)0x0) {
      local_310 = lVar14;
    }
    else {
      plVar16 = (long *)((long)plStack_318 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_310 = *(long *)(param_2 + 0x18);
    }
    local_308 = *(long **)(param_2 + 0x20);
    if (local_308 != (long *)0x0) {
      plVar16 = (long *)((long)local_308 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_00788b84(auStack_300,auStack_280);
    plVar16 = local_2c0;
    if (plVar16 != param_4) {
      plVar12 = (long *)param_4[4];
      if (plVar12 == (long *)0x0) {
        local_2a0 = (long *)0x0;
      }
      else if (plVar12 == param_4) {
        local_2a0 = plVar16;
        (**(code **)(*plVar12 + 0x28))(plVar12,plVar16);
      }
      else {
        param_4[4] = 0;
        local_2a0 = plVar12;
      }
    }
    local_290 = *param_5;
    local_288 = (long *)param_5[1];
    if (local_288 != (long *)0x0) {
      plVar12 = local_288 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar15 = *(long **)(lVar14 + 0x198);
    puVar21 = *(undefined8 **)(lVar14 + 0x348);
    plVar8 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xd0,8);
    plVar8[2] = 0;
    plVar9 = plVar8 + 1;
    *plVar9 = 0;
    puVar4 = PTR_DAT_04375438;
    plVar8[3] = (long)plVar15;
    plVar12 = plVar8 + 4;
    *plVar8 = (long)(puVar4 + 0x10);
    FUN_00782ef8(plVar12);
    plVar8[4] = (long)(PTR_DAT_04375448 + 0x10);
    nn::os::InitializeEvent(plVar8 + 6,0,0);
    plVar8[4] = (long)(PTR_DAT_04375440 + 0x10);
    nn::os::InitializeMutex((MutexType *)(plVar8 + 0xb),false,0);
    *(undefined1 *)(plVar8 + 0x19) = 0;
    if (plVar8 != (long *)0x0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x200,0x10);
    plVar9[2] = 0;
    plVar19 = plVar9 + 1;
    *plVar19 = 0;
    *plVar9 = (long)&PTR_LAB_041a6a10;
    plVar9[4] = (long)plVar15;
    FUN_007840dc();
    plVar9[6] = (long)&PTR_LAB_041a6a60;
    lVar14 = (**(code **)(*plVar15 + 0x10))(plVar15,0x10000,0x10);
    if (lVar14 == 0) {
      local_100 = (ulong ***)CONCAT44(local_100._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0,(Result *)&local_100,"");
    }
    FUN_00782cfc(plVar9 + 0xc,plVar12,0,lVar14,0x10000,1);
    local_228 = local_308;
    local_230 = (void *)local_310;
    plStack_238 = plStack_318;
    local_240 = (ulong ***)local_320;
    *(undefined1 *)((long)plVar9 + 0x1f1) = 1;
    plVar9[0x3a] = (long)plVar15;
    plVar9[0x3b] = 0x10000;
    plVar9[0xc] = (long)&PTR_LAB_041a6aa8;
    plVar9[0x3c] = (long)plVar12;
    plVar9[0x3d] = (long)plVar8;
    local_320 = (long ****)0x0;
    plStack_318 = (long *)0x0;
    local_310 = 0;
    local_308 = (long *)0x0;
    FUN_00788b84(auStack_220,auStack_300);
    local_1c0 = local_2a0;
    plVar15 = local_1e0;
    local_1a0 = local_240;
    plStack_198 = plStack_238;
    local_190 = local_230;
    local_188 = local_228;
    if (local_2a0 == (long *)0x0) {
      local_1c0 = (long *)0x0;
    }
    else if (local_2a0 == plVar16) {
      local_1c0 = plVar15;
      (**(code **)(local_2c0[0] + 0x28))(plVar16,plVar15);
      local_1a0 = local_240;
      plStack_198 = plStack_238;
      local_190 = local_230;
      local_188 = local_228;
    }
    else {
      local_2a0 = (long *)0x0;
    }
    if (local_288 != (long *)0x0) {
      plVar11 = local_288 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_240 = (ulong ***)0x0;
    plStack_238 = (long *)0x0;
    local_230 = (void *)0x0;
    local_228 = (long *)0x0;
    local_1b0 = local_290;
    local_1a8 = local_288;
    FUN_00788b84(auStack_180,auStack_220);
    plVar11 = local_140;
    if (local_1c0 == (long *)0x0) {
      local_120 = (long *)0x0;
    }
    else if (local_1c0 == plVar15) {
      local_120 = plVar11;
      (**(code **)(local_1e0[0] + 0x28))(plVar15);
    }
    else {
      local_120 = local_1c0;
      local_1c0 = (long *)0x0;
    }
    plStack_e8 = local_188;
    local_f0 = (ulong)local_190;
    plStack_f8 = plStack_198;
    local_100 = local_1a0;
    local_110 = local_1b0;
    local_108 = local_1a8;
    if (local_1a8 != (long *)0x0) {
      plVar10 = local_1a8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_1a0 = (ulong ***)0x0;
    plStack_198 = (long *)0x0;
    local_190 = (char *)0x0;
    local_188 = (long *)0x0;
    FUN_00788b84(auStack_e0,auStack_180);
    plVar10 = local_a0;
    if (local_120 == (long *)0x0) {
      local_80 = (long *)0x0;
    }
    else if (local_120 == plVar11) {
      local_80 = plVar10;
      (**(code **)(local_140[0] + 0x28))(plVar11,plVar10);
    }
    else {
      local_80 = local_120;
      local_120 = (long *)0x0;
    }
    local_70 = local_110;
    local_68 = local_108;
    if (local_108 != (long *)0x0) {
      plVar1 = local_108 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar9[0x27] = (long)plStack_f8;
    plVar9[0x26] = (long)local_100;
    plStack_f8 = (long *)0x0;
    local_100 = (ulong ***)0x0;
    plVar9[0x29] = (long)plStack_e8;
    plVar9[0x28] = local_f0;
    local_f0 = 0;
    plStack_e8 = (long *)0x0;
    FUN_00788b84(plVar9 + 0x2a,auStack_e0);
    if (&local_100 != (ulong ****)(plVar9 + 0x26)) {
      if (local_80 == (long *)0x0) {
        plVar9[0x36] = 0;
      }
      else if (local_80 == plVar10) {
        plVar9[0x36] = (long)(plVar9 + 0x32);
        (**(code **)(local_a0[0] + 0x28))(plVar10);
      }
      else {
        plVar9[0x36] = (long)local_80;
        local_80 = (long *)0x0;
      }
    }
    plVar9[0x38] = local_70;
    plVar9[0x39] = (long)local_68;
    if (local_68 != (long *)0x0) {
      plVar1 = local_68 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (local_68 != (long *)0x0) {
        plVar1 = local_68 + 1;
        do {
          lVar14 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    if (local_80 != (long *)0x0) {
      if (local_80 == plVar10) {
        pcVar13 = *(code **)(*local_80 + 0x10);
      }
      else {
        pcVar13 = *(code **)(*local_80 + 0x18);
        plVar10 = local_80;
      }
      (*pcVar13)(plVar10);
    }
    FUN_007a6528(auStack_e0);
    if (plStack_e8 != (long *)0x0) {
      plVar10 = plStack_e8 + 1;
      do {
        lVar14 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_f8 != (long *)0x0) {
      plVar10 = plStack_f8 + 1;
      do {
        lVar14 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_108 != (long *)0x0) {
      plVar10 = local_108 + 1;
      do {
        lVar14 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*local_108 + 0x10))(local_108);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_120 != (long *)0x0) {
      if (local_120 == plVar11) {
        pcVar13 = *(code **)(*local_120 + 0x10);
      }
      else {
        pcVar13 = *(code **)(*local_120 + 0x18);
        plVar11 = local_120;
      }
      (*pcVar13)(plVar11);
    }
    FUN_007a6528(auStack_180);
    if (local_188 != (long *)0x0) {
      plVar11 = local_188 + 1;
      do {
        lVar14 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*local_188 + 0x10))(local_188);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_198 != (long *)0x0) {
      plVar11 = plStack_198 + 1;
      do {
        lVar14 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_1a8 != (long *)0x0) {
      plVar11 = local_1a8 + 1;
      do {
        lVar14 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*local_1a8 + 0x10))(local_1a8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_1c0 != (long *)0x0) {
      if (local_1c0 == plVar15) {
        pcVar13 = *(code **)(*local_1c0 + 0x10);
      }
      else {
        pcVar13 = *(code **)(*local_1c0 + 0x18);
        plVar15 = local_1c0;
      }
      (*pcVar13)(plVar15);
    }
    FUN_007a6528(auStack_220);
    if (local_228 != (long *)0x0) {
      plVar15 = local_228 + 1;
      do {
        lVar14 = *plVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *plVar15 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*local_228 + 0x10))(local_228);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_238 != (long *)0x0) {
      plVar15 = plStack_238 + 1;
      do {
        lVar14 = *plVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *plVar15 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_238 + 0x10))(plStack_238);
        std::__shared_weak_count::__release_weak();
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar3) {
        *plVar19 = *plVar19 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_100 = (ulong ***)(plVar9 + 6);
    plStack_f8 = plVar9;
    (**(code **)*puVar21)(puVar21,&local_100,param_5);
    if (plStack_f8 != (long *)0x0) {
      plVar15 = plStack_f8 + 1;
      do {
        lVar14 = *plVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *plVar15 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        std::__shared_weak_count::__release_weak();
      }
    }
    *param_1 = plVar12;
    param_1[1] = plVar8;
    do {
      lVar14 = *plVar19;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar3) {
        *plVar19 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
    if (local_288 != (long *)0x0) {
      plVar12 = local_288 + 1;
      do {
        lVar14 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*local_288 + 0x10))(local_288);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_2a0 != (long *)0x0) {
      if (local_2a0 == plVar16) {
        pcVar13 = *(code **)(*local_2a0 + 0x10);
      }
      else {
        pcVar13 = *(code **)(*local_2a0 + 0x18);
        plVar16 = local_2a0;
      }
      (*pcVar13)(plVar16);
    }
    FUN_007a6528(auStack_300);
    if (local_308 != (long *)0x0) {
      plVar16 = local_308 + 1;
      do {
        lVar14 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*local_308 + 0x10))(local_308);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_318 != (long *)0x0) {
      plVar16 = plStack_318 + 1;
      do {
        lVar14 = *plVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_318 + 0x10))(plStack_318);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_007a6528(auStack_280);
    return;
  }
  pvVar17 = (void *)((ulong)&local_240 | 1);
  pbVar18 = (byte *)(plVar16 + 8);
  plVar12 = plVar16 + 4;
  if ((*pbVar18 & 1) == 0) goto LAB_00787d08;
LAB_00787d10:
  pbVar18 = (byte *)plVar16[10];
  plVar8 = plVar16;
  do {
    FUN_00799d30(&local_1a0,plVar12);
    local_240 = (ulong ***)0x0;
    plStack_238 = (long *)0x0;
    __s = (char *)((ulong)&local_1a0 | 1);
    if (((ulong)local_1a0 & 1) != 0) {
      __s = local_190;
    }
    local_230 = (void *)0x0;
    sVar6 = strlen(__s);
    if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 00788780 to 00788787 has its CatchHandler @ 007887ac */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar6 < 0x17) {
      local_240 = (ulong ***)CONCAT71(local_240._1_7_,(char)((int)sVar6 << 1));
      __dest = pvVar17;
      if (sVar6 != 0) goto LAB_00787d8c;
    }
    else {
      uVar20 = sVar6 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar20);
      local_240 = (ulong ***)(uVar20 | 1);
      plStack_238 = (long *)sVar6;
      local_230 = __dest;
LAB_00787d8c:
      memcpy(__dest,__s,sVar6);
    }
    *(undefined1 *)((long)__dest + sVar6) = 0;
    plStack_318 = (long *)0x0;
                    /* try { // try from 00787da8 to 00787deb has its CatchHandler @ 007887ec */
    local_320 = (long ****)&local_240;
    FUN_0079410c(&local_100,local_260,&local_320);
    pppuVar5 = local_100;
    pplVar7 = (long **)local_100[1];
    if (pplVar7 == (long **)0x0) {
      pplVar7 = (long **)FUN_00793f40(auStack_270,&local_240);
      *pppuVar5 = (ulong **)pplVar7;
      pppuVar5[1] = (ulong **)pplVar7;
    }
    sVar6 = strlen((char *)pbVar18);
    FUN_00291910(pplVar7 + 3,pbVar18,sVar6);
    if (((ulong)local_240 & 1) == 0) {
      if (((ulong)local_1a0 & 1) != 0) goto LAB_00787e20;
LAB_00787dfc:
      plVar12 = (long *)plVar8[1];
      if ((long *)plVar8[1] != (long *)0x0) goto LAB_00787e44;
LAB_00787e54:
      plVar12 = plVar8 + 2;
      plVar16 = (long *)*plVar12;
      if ((long *)*plVar16 != plVar8) {
        do {
          lVar14 = *plVar12;
          plVar12 = (long *)(lVar14 + 0x10);
          plVar16 = (long *)*plVar12;
        } while (*plVar16 != lVar14);
      }
    }
    else {
      FUN_002e2ea0(PTR_LAB_04373088,local_230);
      if (((ulong)local_1a0 & 1) == 0) goto LAB_00787dfc;
LAB_00787e20:
      (**(code **)(*local_188 + 0x18))(local_188,local_190,(ulong)local_1a0 & 0xfffffffffffffffe,1);
      plVar12 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) goto LAB_00787e54;
LAB_00787e44:
      do {
        plVar16 = plVar12;
        plVar12 = (long *)*plVar16;
      } while ((long *)*plVar16 != (long *)0x0);
    }
    if (plVar16 == (long *)(param_3 + 0x10)) goto LAB_00787e84;
    pbVar18 = (byte *)(plVar16 + 8);
    plVar12 = plVar16 + 4;
    if ((*pbVar18 & 1) != 0) goto LAB_00787d10;
LAB_00787d08:
    pbVar18 = pbVar18 + 1;
    plVar8 = plVar16;
  } while( true );
}


