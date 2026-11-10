/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00299040; name: FUN_00299040
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00299040(undefined8 *param_1,int *param_2,undefined8 param_3,long *param_4,long param_5,
                 byte *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  byte *pbVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined *local_1f8;
  long *local_1f0;
  long *plStack_1e8;
  long local_1e0;
  byte local_1d8;
  undefined7 uStack_1d7;
  undefined8 local_1c8;
  long *plStack_1c0;
  byte local_1b8;
  undefined7 uStack_1b7;
  undefined8 local_1a8;
  long *plStack_1a0;
  undefined *local_198;
  undefined8 local_190;
  long *local_188;
  long *local_180;
  long *local_178;
  long *plStack_170;
  long local_168;
  byte local_160;
  undefined7 uStack_15f;
  undefined8 local_150;
  long *plStack_148;
  byte local_140;
  undefined7 uStack_13f;
  undefined8 local_130;
  long *plStack_128;
  long *local_120;
  long *local_118;
  long *plStack_110;
  long *local_108;
  byte local_100;
  undefined7 uStack_ff;
  undefined8 local_f0;
  long *plStack_e8;
  byte local_e0;
  undefined7 uStack_df;
  undefined8 local_d0;
  long *plStack_c8;
  long *local_c0;
  long *local_b8;
  long *plStack_b0;
  long local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  undefined8 local_90;
  long *plStack_88;
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  long *plStack_68;
  
  if (*param_2 == 3) {
                    /* try { // try from 00299080 to 0029908b has its CatchHandler @ 0029a570 */
    FUN_002af4d8(&local_c0,0);
    if (local_a8 == 0) {
      puVar7 = (ulong *)((ulong)local_b8 & 0xfffffffffffffffe);
      if (((ulong)local_b8 & 1) != 0) {
        puVar7 = (ulong *)*puVar7;
      }
                    /* try { // try from 002990a0 to 002990bf has its CatchHandler @ 0029a574 */
      local_a8 = FUN_002b3e1c(puVar7);
    }
    pbVar13 = param_6 + 0x21;
    if ((param_6[0x20] & 1) != 0) {
      pbVar13 = *(byte **)(param_6 + 0x30);
    }
    FUN_0029a588(local_a8,pbVar13);
    FUN_002a8540(&local_120,param_5);
    plVar8 = (long *)((ulong)&local_120 | 1);
    if (((ulong)local_120 & 1) != 0) {
      plVar8 = plStack_110;
    }
                    /* try { // try from 002990e4 to 002990eb has its CatchHandler @ 0029a544 */
    FUN_0029a75c(&local_c0,plVar8);
    if (((ulong)local_120 & 1) != 0) {
      (**(code **)(*local_108 + 0x18))
                (local_108,plStack_110,(ulong)local_120 & 0xfffffffffffffffe,1);
    }
    plVar14 = *(long **)(*param_4 + 400);
    plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x78,8);
    plVar8[2] = 0;
    plVar11 = plVar8 + 1;
    *plVar11 = 0;
    puVar1 = PTR_DAT_04373090;
    plVar8[3] = (long)plVar14;
    *plVar8 = (long)(puVar1 + 0x10);
    FUN_00291b60(plVar8 + 4,param_3,param_4);
    local_120 = (long *)0x0;
    local_118 = (long *)0x0;
    FUN_0029a900(&local_1f8,plVar8 + 4,&local_c0,&local_120);
    if (local_118 != (long *)0x0) {
      plVar14 = local_118 + 1;
      do {
        lVar12 = *plVar14;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *plVar14 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_118 + 0x10))(local_118);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar17 = local_1f0;
    puVar2 = local_1f8;
    local_1f8 = (undefined *)0x0;
    local_1f0 = (long *)0x0;
    plVar16 = *(long **)(*param_4 + 0x198);
    puVar15 = *(undefined8 **)(*param_4 + 0x348);
    plVar9 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x138,8);
    plVar9[2] = 0;
    plVar10 = plVar9 + 1;
    *plVar10 = 0;
    puVar1 = PTR_DAT_04373098;
    plVar9[3] = (long)plVar16;
    plVar14 = plVar9 + 4;
    *plVar9 = (long)(puVar1 + 0x10);
    FUN_00782ef8(plVar14);
    plVar9[4] = (long)(PTR_DAT_043730a0 + 0x10);
    nn::os::InitializeEvent(plVar9 + 6,0,0);
    plVar9[4] = (long)(PTR_DAT_043730a8 + 0x10);
    nn::os::InitializeMutex((MutexType *)(plVar9 + 0xb),false,0);
    *(undefined1 *)(plVar9 + 0x26) = 0;
    if (plVar9 != (long *)0x0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = *plVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar10 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x150,8);
    plVar18 = plVar10 + 1;
    *plVar18 = 0;
    plVar10[2] = 0;
    plVar10[3] = (long)plVar16;
    *plVar10 = (long)&PTR_LAB_0414e4b8;
    FUN_007840dc(plVar10 + 4);
    plVar10[4] = (long)&PTR_LAB_0414e508;
    lVar12 = (**(code **)(*plVar16 + 0x10))(plVar16,0x10000,0x10);
    if (lVar12 == 0) {
LAB_0029a340:
      local_120 = (long *)CONCAT44(local_120._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0,(Result *)&local_120,"");
    }
    FUN_00782cfc(plVar10 + 10,plVar14,0,lVar12,0x10000,1);
    plVar10[10] = (long)&PTR_LAB_0414e550;
    plVar10[0x25] = (long)plVar16;
    plVar10[0x26] = 0x10000;
    *(undefined1 *)((long)plVar10 + 0x149) = 1;
    plVar10[0x27] = (long)plVar14;
    plVar10[0x28] = (long)plVar9;
    plVar10[0x23] = (long)puVar2;
    plVar10[0x24] = (long)plVar17;
    local_180 = (long *)0x0;
    local_178 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *plVar18 = *plVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_120 = plVar10 + 4;
    local_118 = plVar10;
    (**(code **)*puVar15)(puVar15,&local_120,&local_180);
    if (local_118 != (long *)0x0) {
      plVar17 = local_118 + 1;
      do {
        lVar12 = *plVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *plVar17 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_118 + 0x10))(local_118);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_178 != (long *)0x0) {
      plVar17 = local_178 + 1;
      do {
        lVar12 = *plVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *plVar17 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_178 + 0x10))(local_178);
        std::__shared_weak_count::__release_weak();
      }
    }
    *param_1 = plVar14;
    param_1[1] = plVar9;
    if (plVar10 != (long *)0x0) {
      do {
        lVar12 = *plVar18;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *plVar18 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_1f0 != (long *)0x0) {
      plVar14 = local_1f0 + 1;
      do {
        lVar12 = *plVar14;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *plVar14 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_1f0 + 0x10))(local_1f0);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plVar8 != (long *)0x0) {
      do {
        lVar12 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_002af52c(&local_c0);
  }
  else {
    uVar3 = (ulong)(*param_6 >> 1);
    if ((*param_6 & 1) != 0) {
      uVar3 = *(ulong *)(param_6 + 8);
    }
    if (uVar3 == 0) {
      if (*param_2 == 0) {
        uVar4 = param_2[10];
                    /* try { // try from 00299b9c to 00299ba7 has its CatchHandler @ 0029a3c0 */
        FUN_002adbc4(&local_c0,0);
        if (local_a8 == 0) {
          puVar7 = (ulong *)((ulong)local_b8 & 0xfffffffffffffffe);
          if (((ulong)local_b8 & 1) != 0) {
            puVar7 = (ulong *)*puVar7;
          }
                    /* try { // try from 00299bbc to 00299bdb has its CatchHandler @ 0029a3c4 */
          local_a8 = FUN_002b3e1c(puVar7);
        }
        pbVar13 = param_6 + 0x21;
        if ((param_6[0x20] & 1) != 0) {
          pbVar13 = *(byte **)(param_6 + 0x30);
        }
        FUN_0029a588(local_a8,pbVar13);
        FUN_002a8540(&local_120,param_5);
        plVar8 = (long *)((ulong)&local_120 | 1);
        if (((ulong)local_120 & 1) != 0) {
          plVar8 = plStack_110;
        }
                    /* try { // try from 00299c00 to 00299c07 has its CatchHandler @ 0029a388 */
        FUN_0029ea60(&local_c0,plVar8);
        if (((ulong)local_120 & 1) != 0) {
          (**(code **)(*local_108 + 0x18))
                    (local_108,plStack_110,(ulong)local_120 & 0xfffffffffffffffe,1);
        }
        plVar14 = *(long **)(*param_4 + 400);
        local_a0 = uVar4;
        plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x78,8);
        plVar8[2] = 0;
        plVar11 = plVar8 + 1;
        *plVar11 = 0;
        puVar1 = PTR_DAT_04373090;
        plVar8[3] = (long)plVar14;
        *plVar8 = (long)(puVar1 + 0x10);
        FUN_00291b60(plVar8 + 4,param_3,param_4);
        local_120 = (long *)0x0;
        local_118 = (long *)0x0;
        FUN_0029ec04(&local_1f8,plVar8 + 4,&local_c0,&local_120);
        if (local_118 != (long *)0x0) {
          plVar14 = local_118 + 1;
          do {
            lVar12 = *plVar14;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *plVar14 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*local_118 + 0x10))(local_118);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar17 = local_1f0;
        puVar2 = local_1f8;
        local_1f8 = (undefined *)0x0;
        local_1f0 = (long *)0x0;
        plVar16 = *(long **)(*param_4 + 0x198);
        puVar15 = *(undefined8 **)(*param_4 + 0x348);
        plVar9 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x138,8);
        plVar9[2] = 0;
        plVar10 = plVar9 + 1;
        *plVar10 = 0;
        puVar1 = PTR_DAT_04373098;
        plVar9[3] = (long)plVar16;
        plVar14 = plVar9 + 4;
        *plVar9 = (long)(puVar1 + 0x10);
        FUN_00782ef8(plVar14);
        plVar9[4] = (long)(PTR_DAT_043730a0 + 0x10);
        nn::os::InitializeEvent(plVar9 + 6,0,0);
        plVar9[4] = (long)(PTR_DAT_043730a8 + 0x10);
        nn::os::InitializeMutex((MutexType *)(plVar9 + 0xb),false,0);
        *(undefined1 *)(plVar9 + 0x26) = 0;
        if (plVar9 != (long *)0x0) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = *plVar10 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar10 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x150,8);
        plVar18 = plVar10 + 1;
        *plVar18 = 0;
        plVar10[2] = 0;
        plVar10[3] = (long)plVar16;
        *plVar10 = (long)&PTR_LAB_0414ebd8;
        FUN_007840dc(plVar10 + 4);
        plVar10[4] = (long)&PTR_LAB_0414ec28;
        lVar12 = (**(code **)(*plVar16 + 0x10))(plVar16,0x10000,0x10);
        if (lVar12 == 0) goto LAB_0029a340;
        FUN_00782cfc(plVar10 + 10,plVar14,0,lVar12,0x10000,1);
        plVar10[10] = (long)&PTR_LAB_0414ec70;
        plVar10[0x25] = (long)plVar16;
        plVar10[0x26] = 0x10000;
        *(undefined1 *)((long)plVar10 + 0x149) = 1;
        plVar10[0x27] = (long)plVar14;
        plVar10[0x28] = (long)plVar9;
        plVar10[0x23] = (long)puVar2;
        plVar10[0x24] = (long)plVar17;
        local_180 = (long *)0x0;
        local_178 = (long *)0x0;
        if (plVar10 != (long *)0x0) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar6) {
              *plVar18 = *plVar18 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        local_120 = plVar10 + 4;
        local_118 = plVar10;
        (**(code **)*puVar15)(puVar15,&local_120,&local_180);
        if (local_118 != (long *)0x0) {
          plVar17 = local_118 + 1;
          do {
            lVar12 = *plVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*local_118 + 0x10))(local_118);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_178 != (long *)0x0) {
          plVar17 = local_178 + 1;
          do {
            lVar12 = *plVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*local_178 + 0x10))(local_178);
            std::__shared_weak_count::__release_weak();
          }
        }
        *param_1 = plVar14;
        param_1[1] = plVar9;
        if (plVar10 != (long *)0x0) {
          do {
            lVar12 = *plVar18;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar6) {
              *plVar18 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_1f0 != (long *)0x0) {
          plVar14 = local_1f0 + 1;
          do {
            lVar12 = *plVar14;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *plVar14 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*local_1f0 + 0x10))(local_1f0);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plVar8 != (long *)0x0) {
          do {
            lVar12 = *plVar11;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar6) {
              *plVar11 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            std::__shared_weak_count::__release_weak();
          }
        }
        FUN_002adc1c(&local_c0);
      }
      else {
        local_188 = (long *)0x0;
        puVar1 = PTR_DAT_043730c8 + 0x10;
        plVar14 = *(long **)(*param_4 + 400);
        local_198 = puVar1;
        plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x78,8);
        puVar2 = PTR_DAT_04373090 + 0x10;
        plVar8[2] = 0;
        plVar8[3] = (long)plVar14;
        *plVar8 = (long)puVar2;
        plVar8[1] = 0;
        FUN_00291b60(plVar8 + 4,param_3,param_4);
        lVar12 = *param_4;
        local_190 = 0;
        local_188 = (long *)0x0;
        local_1f8 = puVar1;
        local_1f0 = plVar8 + 4;
        plStack_1e8 = plVar8;
        local_1e0 = param_5;
                    /* try { // try from 00299938 to 00299943 has its CatchHandler @ 0029a4d8 */
        FUN_002985e8(&local_1d8,param_6);
        plVar17 = *(long **)(lVar12 + 0x198);
        puVar15 = *(undefined8 **)(lVar12 + 0x348);
        plVar8 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x138,8);
        plVar8[2] = 0;
        plVar11 = plVar8 + 1;
        *plVar11 = 0;
        puVar1 = PTR_DAT_04373098;
        plVar8[3] = (long)plVar17;
        plVar14 = plVar8 + 4;
        *plVar8 = (long)(puVar1 + 0x10);
        FUN_00782ef8();
        plVar8[4] = (long)(PTR_DAT_043730a0 + 0x10);
        nn::os::InitializeEvent(plVar8 + 6,0,0);
        plVar8[4] = (long)(PTR_DAT_043730a8 + 0x10);
        nn::os::InitializeMutex((MutexType *)(plVar8 + 0xb),false,0);
        *(undefined1 *)(plVar8 + 0x26) = 0;
        if (plVar8 != (long *)0x0) {
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar6) {
              *plVar11 = *plVar11 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x1a0,8);
        plVar11[2] = 0;
        plVar9 = plVar11 + 1;
        *plVar9 = 0;
        *plVar11 = (long)&PTR_LAB_0414ecd0;
        plVar11[3] = (long)plVar17;
        FUN_007840dc();
        plVar11[4] = (long)&PTR_LAB_0414ed20;
        lVar12 = (**(code **)(*plVar17 + 0x10))(plVar17,0x10000,0x10);
        if (lVar12 == 0) {
          local_c0 = (long *)CONCAT44(local_c0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0,(Result *)&local_c0,"");
        }
        FUN_00782cfc(plVar11 + 10,plVar14,0,lVar12,0x10000,1);
        plStack_170 = plStack_1e8;
        local_178 = local_1f0;
        *(undefined1 *)((long)plVar11 + 0x199) = 1;
        plVar11[0x2f] = (long)plVar17;
        plVar11[0x30] = 0x10000;
        plVar11[0x31] = (long)plVar14;
        plVar11[0x32] = (long)plVar8;
        plVar17 = (long *)(PTR_DAT_043730c8 + 0x10);
        plVar11[10] = (long)&PTR_LAB_0414ed68;
        local_1f0 = (long *)0x0;
        plStack_1e8 = (long *)0x0;
        local_168 = local_1e0;
        local_180 = plVar17;
                    /* try { // try from 00299ad0 to 00299adb has its CatchHandler @ 0029a480 */
        FUN_002985e8(&local_160,&local_1d8);
        plStack_110 = plStack_170;
        local_118 = local_178;
        local_178 = (long *)0x0;
        plStack_170 = (long *)0x0;
        local_108 = (long *)local_168;
        local_120 = plVar17;
                    /* try { // try from 00299b00 to 00299b0b has its CatchHandler @ 0029a42c */
        FUN_002985e8(&local_100,&local_160);
        plStack_b0 = plStack_110;
        local_b8 = local_118;
        puVar1 = PTR_DAT_043730c8;
        local_118 = (long *)0x0;
        plStack_110 = (long *)0x0;
        plVar17 = (long *)(PTR_DAT_043730c8 + 0x10);
        local_a8 = (long)local_108;
        local_c0 = plVar17;
                    /* try { // try from 00299b3c to 00299b47 has its CatchHandler @ 0029a404 */
        FUN_002985e8(&local_a0,&local_100);
        plVar11[0x23] = (long)plVar17;
        plVar11[0x25] = (long)plStack_b0;
        plVar11[0x24] = (long)local_b8;
        local_b8 = (long *)0x0;
        plStack_b0 = (long *)0x0;
        plVar11[0x26] = local_a8;
                    /* try { // try from 00299b68 to 00299b6f has its CatchHandler @ 0029a3d8 */
        FUN_002985e8(plVar11 + 0x27,&local_a0);
        if ((local_80 & 1) != 0) {
          (**(code **)(*plStack_68 + 0x18))
                    (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
        }
        if ((local_a0 & 1) != 0) {
          (**(code **)(*plStack_88 + 0x18))
                    (plStack_88,local_90,CONCAT44(uStack_9c,local_a0) & 0xfffffffffffffffe,1);
        }
        local_c0 = (long *)(puVar1 + 0x10);
        if (plStack_b0 != (long *)0x0) {
          local_c0 = (long *)(puVar1 + 0x10);
          plVar17 = plStack_b0 + 1;
          do {
            lVar12 = *plVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
            std::__shared_weak_count::__release_weak();
          }
        }
        if ((local_e0 & 1) != 0) {
          (**(code **)(*plStack_c8 + 0x18))
                    (plStack_c8,local_d0,CONCAT71(uStack_df,local_e0) & 0xfffffffffffffffe,1);
        }
        if ((local_100 & 1) != 0) {
          (**(code **)(*plStack_e8 + 0x18))
                    (plStack_e8,local_f0,CONCAT71(uStack_ff,local_100) & 0xfffffffffffffffe,1);
        }
        local_120 = (long *)(puVar1 + 0x10);
        if (plStack_110 != (long *)0x0) {
          local_120 = (long *)(puVar1 + 0x10);
          plVar17 = plStack_110 + 1;
          do {
            lVar12 = *plVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_110 + 0x10))(plStack_110);
            std::__shared_weak_count::__release_weak();
          }
        }
        if ((local_140 & 1) != 0) {
          (**(code **)(*plStack_128 + 0x18))
                    (plStack_128,local_130,CONCAT71(uStack_13f,local_140) & 0xfffffffffffffffe,1);
        }
        if ((local_160 & 1) != 0) {
          (**(code **)(*plStack_148 + 0x18))
                    (plStack_148,local_150,CONCAT71(uStack_15f,local_160) & 0xfffffffffffffffe,1);
        }
        local_180 = (long *)(puVar1 + 0x10);
        if (plStack_170 != (long *)0x0) {
          local_180 = (long *)(puVar1 + 0x10);
          plVar17 = plStack_170 + 1;
          do {
            lVar12 = *plVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_170 + 0x10))(plStack_170);
            std::__shared_weak_count::__release_weak();
          }
        }
        local_120 = (long *)0x0;
        local_118 = (long *)0x0;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = *plVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        local_c0 = plVar11 + 4;
        local_b8 = plVar11;
        (**(code **)*puVar15)(puVar15,&local_c0,&local_120);
        if (local_b8 != (long *)0x0) {
          plVar17 = local_b8 + 1;
          do {
            lVar12 = *plVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*local_b8 + 0x10))(local_b8);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_118 != (long *)0x0) {
          plVar17 = local_118 + 1;
          do {
            lVar12 = *plVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*local_118 + 0x10))(local_118);
            std::__shared_weak_count::__release_weak();
          }
        }
        *param_1 = plVar14;
        param_1[1] = plVar8;
        do {
          lVar12 = *plVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          std::__shared_weak_count::__release_weak();
        }
        if ((local_1b8 & 1) != 0) {
          (**(code **)(*plStack_1a0 + 0x18))
                    (plStack_1a0,local_1a8,CONCAT71(uStack_1b7,local_1b8) & 0xfffffffffffffffe,1);
        }
        if ((local_1d8 & 1) != 0) {
          (**(code **)(*plStack_1c0 + 0x18))
                    (plStack_1c0,local_1c8,CONCAT71(uStack_1d7,local_1d8) & 0xfffffffffffffffe,1);
        }
        local_1f8 = puVar1 + 0x10;
        if (plStack_1e8 != (long *)0x0) {
          local_1f8 = puVar1 + 0x10;
          plVar8 = plStack_1e8 + 1;
          do {
            lVar12 = *plVar8;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *plVar8 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
            std::__shared_weak_count::__release_weak();
          }
        }
        local_198 = puVar1 + 0x10;
        if (local_188 != (long *)0x0) {
          plVar8 = local_188 + 1;
          do {
            lVar12 = *plVar8;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *plVar8 = lVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*local_188 + 0x10))(local_188);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
    else {
                    /* try { // try from 00299494 to 0029949f has its CatchHandler @ 0029a52c */
      FUN_002aaf2c(&local_c0,0);
      if (local_a8 == 0) {
        puVar7 = (ulong *)((ulong)local_b8 & 0xfffffffffffffffe);
        if (((ulong)local_b8 & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
                    /* try { // try from 002994b4 to 002994d3 has its CatchHandler @ 0029a530 */
        local_a8 = FUN_002b3e1c(puVar7);
      }
      pbVar13 = param_6 + 0x21;
      if ((param_6[0x20] & 1) != 0) {
        pbVar13 = *(byte **)(param_6 + 0x30);
      }
      FUN_0029a588(local_a8,pbVar13);
      pbVar13 = *(byte **)(param_6 + 0x10);
      if ((*param_6 & 1) == 0) {
        pbVar13 = param_6 + 1;
      }
      FUN_002a8590(&local_120,pbVar13,param_5);
      plVar8 = (long *)((ulong)&local_120 | 1);
      if (((ulong)local_120 & 1) != 0) {
        plVar8 = plStack_110;
      }
                    /* try { // try from 00299508 to 0029950f has its CatchHandler @ 0029a4f4 */
      FUN_0029c8e0(&local_c0,plVar8);
      if (((ulong)local_120 & 1) != 0) {
        (**(code **)(*local_108 + 0x18))
                  (local_108,plStack_110,(ulong)local_120 & 0xfffffffffffffffe,1);
      }
      plVar14 = *(long **)(*param_4 + 400);
      plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x78,8);
      plVar8[2] = 0;
      plVar11 = plVar8 + 1;
      *plVar11 = 0;
      puVar1 = PTR_DAT_04373090;
      plVar8[3] = (long)plVar14;
      *plVar8 = (long)(puVar1 + 0x10);
      FUN_00291b60(plVar8 + 4,param_3,param_4);
      local_120 = (long *)0x0;
      local_118 = (long *)0x0;
      FUN_0029ca84(&local_1f8,plVar8 + 4,&local_c0,&local_120);
      if (local_118 != (long *)0x0) {
        plVar14 = local_118 + 1;
        do {
          lVar12 = *plVar14;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *plVar14 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_118 + 0x10))(local_118);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar17 = local_1f0;
      puVar2 = local_1f8;
      local_1f8 = (undefined *)0x0;
      local_1f0 = (long *)0x0;
      plVar16 = *(long **)(*param_4 + 0x198);
      puVar15 = *(undefined8 **)(*param_4 + 0x348);
      plVar9 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x138,8);
      plVar9[2] = 0;
      plVar10 = plVar9 + 1;
      *plVar10 = 0;
      puVar1 = PTR_DAT_04373098;
      plVar9[3] = (long)plVar16;
      plVar14 = plVar9 + 4;
      *plVar9 = (long)(puVar1 + 0x10);
      FUN_00782ef8(plVar14);
      plVar9[4] = (long)(PTR_DAT_043730a0 + 0x10);
      nn::os::InitializeEvent(plVar9 + 6,0,0);
      plVar9[4] = (long)(PTR_DAT_043730a8 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar9 + 0xb),false,0);
      *(undefined1 *)(plVar9 + 0x26) = 0;
      if (plVar9 != (long *)0x0) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = *plVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar10 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x150,8);
      plVar18 = plVar10 + 1;
      *plVar18 = 0;
      plVar10[2] = 0;
      plVar10[3] = (long)plVar16;
      *plVar10 = (long)&PTR_LAB_0414e848;
      FUN_007840dc(plVar10 + 4);
      plVar10[4] = (long)&PTR_LAB_0414e898;
      lVar12 = (**(code **)(*plVar16 + 0x10))(plVar16,0x10000,0x10);
      if (lVar12 == 0) goto LAB_0029a340;
      FUN_00782cfc(plVar10 + 10,plVar14,0,lVar12,0x10000,1);
      plVar10[10] = (long)&PTR_LAB_0414e8e0;
      plVar10[0x25] = (long)plVar16;
      plVar10[0x26] = 0x10000;
      *(undefined1 *)((long)plVar10 + 0x149) = 1;
      plVar10[0x27] = (long)plVar14;
      plVar10[0x28] = (long)plVar9;
      plVar10[0x23] = (long)puVar2;
      plVar10[0x24] = (long)plVar17;
      local_180 = (long *)0x0;
      local_178 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *plVar18 = *plVar18 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      local_120 = plVar10 + 4;
      local_118 = plVar10;
      (**(code **)*puVar15)(puVar15,&local_120,&local_180);
      if (local_118 != (long *)0x0) {
        plVar17 = local_118 + 1;
        do {
          lVar12 = *plVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_118 + 0x10))(local_118);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_178 != (long *)0x0) {
        plVar17 = local_178 + 1;
        do {
          lVar12 = *plVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_178 + 0x10))(local_178);
          std::__shared_weak_count::__release_weak();
        }
      }
      *param_1 = plVar14;
      param_1[1] = plVar9;
      if (plVar10 != (long *)0x0) {
        do {
          lVar12 = *plVar18;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *plVar18 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_1f0 != (long *)0x0) {
        plVar14 = local_1f0 + 1;
        do {
          lVar12 = *plVar14;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *plVar14 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_1f0 + 0x10))(local_1f0);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plVar8 != (long *)0x0) {
        do {
          lVar12 = *plVar11;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_002aaf80(&local_c0);
    }
  }
  return;
}


