/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070519c; name: FUN_0070519c
 */


/* WARNING: Removing unreachable block (ram,0x00705ecc) */
/* WARNING: Removing unreachable block (ram,0x00705ed0) */
/* WARNING: Removing unreachable block (ram,0x00705ed8) */
/* WARNING: Removing unreachable block (ram,0x00705ee0) */
/* WARNING: Removing unreachable block (ram,0x00705ee4) */
/* WARNING: Removing unreachable block (ram,0x00705e94) */
/* WARNING: Removing unreachable block (ram,0x00705e98) */
/* WARNING: Removing unreachable block (ram,0x00705ea0) */
/* WARNING: Removing unreachable block (ram,0x00705ea8) */
/* WARNING: Removing unreachable block (ram,0x00705eac) */
/* WARNING: Removing unreachable block (ram,0x00705f04) */
/* WARNING: Removing unreachable block (ram,0x00705f08) */
/* WARNING: Removing unreachable block (ram,0x00705f10) */
/* WARNING: Removing unreachable block (ram,0x00705f18) */
/* WARNING: Removing unreachable block (ram,0x00705f1c) */

void FUN_0070519c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long **pplVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long **pplVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  long local_190;
  long local_188;
  long local_180;
  long *plStack_178;
  long **local_170;
  long *local_168;
  long *local_160;
  long *local_158;
  long **local_150;
  long *plStack_148;
  long *local_140;
  long *local_138;
  long **local_130;
  long *plStack_128;
  long local_120;
  long local_118;
  long local_110;
  long *plStack_108;
  long **local_100;
  long *plStack_f8;
  long *local_f0;
  long *plStack_e8;
  long **local_e0;
  long *plStack_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long *plStack_b8;
  long **local_b0;
  long *plStack_a8;
  long *local_a0;
  long *plStack_98;
  long **local_90;
  long *plStack_88;
  long local_80;
  long local_78;
  long local_70;
  long *plStack_68;
  
  lVar15 = *param_2;
  plVar14 = *(long **)(lVar15 + 400);
  uVar3 = *(undefined8 *)(lVar15 + 0x198);
  plVar9 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x110,8);
  puVar1 = PTR_DAT_04376498 + 0x10;
  plVar19 = plVar9 + 4;
  plVar9[2] = 0;
  plVar9[3] = (long)plVar14;
  *plVar9 = (long)puVar1;
  plVar9[1] = 0;
  FUN_007828d8(plVar19,uVar3,lVar15 + 0x128);
  local_160 = plVar19;
  local_158 = plVar9;
  iVar8 = nn::socket::Socket(2,2,0x11);
  if (iVar8 < 0) {
    plVar19 = (long *)FUN_00612290();
  }
  else {
    *(int *)(plVar9 + 4) = iVar8;
    *(undefined4 *)((long)plVar9 + 0x24) = 0x11;
    FUN_007827e4(&local_b0,0,0);
    uVar10 = FUN_007829d8(plVar19,&local_b0);
    if ((uVar10 & 1) != 0) {
      local_150 = *(long ***)(*param_2 + 400);
                    /* try { // try from 0070526c to 0070527b has its CatchHandler @ 00706270 */
      local_100 = local_150;
      FUN_00706710(&local_b0,&local_150,&local_100);
      local_170 = local_b0;
      local_168 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar14 = plStack_a8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *plVar14 = *plVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar21 = (long *)plVar9[5];
      puVar20 = (undefined8 *)plVar9[0x11];
      plVar11 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x78,8);
      plVar11[2] = 0;
      plVar12 = plVar11 + 1;
      *plVar12 = 0;
      puVar1 = PTR_DAT_043753e0;
      plVar11[3] = (long)plVar21;
      plVar14 = plVar11 + 4;
      *plVar11 = (long)(puVar1 + 0x10);
      FUN_00782ef8(plVar14);
      plVar11[4] = (long)(PTR_DAT_043753e8 + 0x10);
      nn::os::InitializeEvent(plVar11 + 6,0,0);
      plVar11[4] = (long)(PTR_DAT_043753f0 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar11 + 0xb),false,0);
      if (plVar11 != (long *)0x0) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = *plVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar12 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x80,8);
      plVar16 = plVar12 + 1;
      *plVar16 = 0;
      plVar12[2] = 0;
      plVar12[3] = (long)plVar21;
      *plVar12 = (long)&PTR_FUN_0419ecc8;
      FUN_007836ec(plVar12 + 4,plVar14,0);
      plVar12[4] = (long)&PTR_FUN_0419ed18;
      plVar12[0xc] = (long)plStack_a8;
      plVar12[0xd] = (long)plVar14;
      *(undefined1 *)((long)plVar12 + 0x79) = 1;
      plVar12[0xe] = (long)plVar11;
      plVar12[10] = (long)plVar19;
      plVar12[0xb] = (long)local_b0;
      local_100 = (long **)0x0;
      plStack_f8 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *plVar16 = *plVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      local_b0 = (long **)(plVar12 + 4);
      plStack_a8 = plVar12;
      (**(code **)*puVar20)(puVar20,&local_b0,&local_100);
      if (plStack_a8 != (long *)0x0) {
        plVar19 = plStack_a8 + 1;
        do {
          lVar15 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_f8 != (long *)0x0) {
        plVar19 = plStack_f8 + 1;
        do {
          lVar15 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plVar12 != (long *)0x0) {
        do {
          lVar15 = *plVar16;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *plVar16 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          std::__shared_weak_count::__release_weak();
        }
      }
      *(undefined1 *)(plVar11 + 5) = 1;
      plVar9[0x20] = (long)plVar14;
      plVar19 = (long *)plVar9[0x21];
      plVar9[0x21] = (long)plVar11;
      if (plVar19 != (long *)0x0) {
        plVar14 = plVar19 + 1;
        do {
          lVar15 = *plVar14;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *plVar14 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          std::__shared_weak_count::__release_weak();
        }
        plVar11 = (long *)plVar9[0x21];
      }
      if (plVar11 != (long *)0x0) {
        plVar19 = plVar11 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = *plVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        do {
          lVar15 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar11 = local_158;
      plVar9 = local_160;
      plVar14 = local_168;
      pplVar7 = local_170;
      pplVar2 = (long **)*param_2;
      plVar19 = (long *)param_2[1];
      if (plVar19 != (long *)0x0) {
        plVar12 = plVar19 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = *plVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (local_158 != (long *)0x0) {
        plVar12 = local_158 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = *plVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (local_168 != (long *)0x0) {
        plVar12 = local_168 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = *plVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
                    /* try { // try from 00705590 to 0070559b has its CatchHandler @ 0070623c */
      FUN_00706274(&local_190,param_3);
      plVar22 = pplVar2[0x33];
      plVar16 = pplVar2[0x69];
      plVar21 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0xa0,8);
      plVar21[2] = 0;
      plVar13 = plVar21 + 1;
      *plVar13 = 0;
      puVar1 = PTR_DAT_043764a0;
      plVar21[3] = (long)plVar22;
      plVar12 = plVar21 + 4;
      *plVar21 = (long)(puVar1 + 0x10);
      FUN_00782ef8(plVar12);
      plVar21[4] = (long)(PTR_DAT_043764a8 + 0x10);
      nn::os::InitializeEvent(plVar21 + 6,0,0);
      plVar21[4] = (long)(PTR_DAT_043764b0 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar21 + 0xb),false,0);
      *(undefined1 *)(plVar21 + 0x13) = 0;
      if (plVar21 != (long *)0x0) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = *plVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar13 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,400,8);
      plVar13[2] = 0;
      plVar17 = plVar13 + 1;
      *plVar17 = 0;
      *plVar13 = (long)&PTR_LAB_0419ee98;
      plVar13[3] = (long)plVar22;
      FUN_007840dc();
      plVar13[4] = (long)&PTR_LAB_0419eee8;
      lVar15 = (**(code **)(*plVar22 + 0x10))(plVar22,0x10000,0x10);
      if (lVar15 == 0) {
        local_b0 = (long **)CONCAT44(local_b0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)&local_b0,"");
      }
      FUN_00782cfc(plVar13 + 10,plVar12,0,lVar15,0x10000,1);
      *(undefined1 *)((long)plVar13 + 0x189) = 1;
      plVar13[0x2d] = (long)plVar22;
      plVar13[0x2e] = 0x10000;
      plVar13[10] = (long)&PTR_LAB_0419ef30;
      plVar13[0x2f] = (long)plVar12;
      plVar13[0x30] = (long)plVar21;
      local_138 = plVar11;
      local_140 = plVar9;
      plStack_128 = plVar14;
      local_130 = pplVar7;
      local_150 = pplVar2;
      plStack_148 = plVar19;
                    /* try { // try from 00705718 to 00705723 has its CatchHandler @ 00706178 */
      FUN_00706274(&local_120,&local_190);
      plStack_e8 = local_138;
      local_f0 = local_140;
      plStack_f8 = plStack_148;
      local_100 = local_150;
      local_150 = (long **)0x0;
      plStack_148 = (long *)0x0;
      local_140 = (long *)0x0;
      local_138 = (long *)0x0;
      plStack_d8 = plStack_128;
      local_e0 = local_130;
      local_130 = (long **)0x0;
      plStack_128 = (long *)0x0;
                    /* try { // try from 00705750 to 0070575b has its CatchHandler @ 007060c4 */
      FUN_00706274(&local_d0,&local_120);
      plStack_98 = plStack_e8;
      local_a0 = local_f0;
      plStack_a8 = plStack_f8;
      local_b0 = local_100;
      local_100 = (long **)0x0;
      plStack_f8 = (long *)0x0;
      local_f0 = (long *)0x0;
      plStack_e8 = (long *)0x0;
      plStack_88 = plStack_d8;
      local_90 = local_e0;
      local_e0 = (long **)0x0;
      plStack_d8 = (long *)0x0;
                    /* try { // try from 00705788 to 00705793 has its CatchHandler @ 00706030 */
      FUN_00706274(&local_80,&local_d0);
      plVar13[0x24] = (long)plStack_a8;
      plVar13[0x23] = (long)local_b0;
      local_b0 = (long **)0x0;
      plStack_a8 = (long *)0x0;
      plVar13[0x26] = (long)plStack_98;
      plVar13[0x25] = (long)local_a0;
      local_a0 = (long *)0x0;
      plStack_98 = (long *)0x0;
      plVar13[0x28] = (long)plStack_88;
      plVar13[0x27] = (long)local_90;
      local_90 = (long **)0x0;
      plStack_88 = (long *)0x0;
                    /* try { // try from 007057cc to 007057d3 has its CatchHandler @ 00705f9c */
      FUN_00706274(plVar13 + 0x29,&local_80);
      lVar15 = local_80;
      if (local_80 != 0) {
        lVar18 = local_78;
        if (local_78 != local_80) {
          do {
            if ((*(byte *)(lVar18 + -0x20) & 1) == 0) {
              bVar4 = *(byte *)(lVar18 + -0x48);
            }
            else {
              (**(code **)(**(long **)(lVar18 + -8) + 0x18))
                        (*(long **)(lVar18 + -8),*(undefined8 *)(lVar18 + -0x10),
                         *(ulong *)(lVar18 + -0x20) & 0xfffffffffffffffe,1);
              bVar4 = *(byte *)(lVar18 + -0x48);
            }
            if ((bVar4 & 1) != 0) {
              (**(code **)(**(long **)(lVar18 + -0x30) + 0x18))
                        (*(long **)(lVar18 + -0x30),*(undefined8 *)(lVar18 + -0x38),
                         *(ulong *)(lVar18 + -0x48) & 0xfffffffffffffffe,1);
            }
            lVar18 = lVar18 + -0x48;
          } while (lVar15 != lVar18);
        }
        local_78 = lVar15;
        (**(code **)(*plStack_68 + 0x18))(plStack_68,local_80,local_70 - local_80,8);
      }
      if (plStack_88 != (long *)0x0) {
        plVar19 = plStack_88 + 1;
        do {
          lVar15 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_98 != (long *)0x0) {
        plVar19 = plStack_98 + 1;
        do {
          lVar15 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_a8 != (long *)0x0) {
        plVar19 = plStack_a8 + 1;
        do {
          lVar15 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar15 = local_d0;
      if (local_d0 != 0) {
        lVar18 = local_c8;
        if (local_c8 != local_d0) {
          do {
            if ((*(byte *)(lVar18 + -0x20) & 1) == 0) {
              bVar4 = *(byte *)(lVar18 + -0x48);
            }
            else {
              (**(code **)(**(long **)(lVar18 + -8) + 0x18))
                        (*(long **)(lVar18 + -8),*(undefined8 *)(lVar18 + -0x10),
                         *(ulong *)(lVar18 + -0x20) & 0xfffffffffffffffe,1);
              bVar4 = *(byte *)(lVar18 + -0x48);
            }
            if ((bVar4 & 1) != 0) {
              (**(code **)(**(long **)(lVar18 + -0x30) + 0x18))
                        (*(long **)(lVar18 + -0x30),*(undefined8 *)(lVar18 + -0x38),
                         *(ulong *)(lVar18 + -0x48) & 0xfffffffffffffffe,1);
            }
            lVar18 = lVar18 + -0x48;
          } while (lVar15 != lVar18);
        }
        local_c8 = lVar15;
        (**(code **)(*plStack_b8 + 0x18))(plStack_b8,local_d0,local_c0 - local_d0,8);
      }
      if (plStack_d8 != (long *)0x0) {
        plVar19 = plStack_d8 + 1;
        do {
          lVar15 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_e8 != (long *)0x0) {
        plVar19 = plStack_e8 + 1;
        do {
          lVar15 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_f8 != (long *)0x0) {
        plVar19 = plStack_f8 + 1;
        do {
          lVar15 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar15 = local_120;
      if (local_120 != 0) {
        lVar18 = local_118;
        if (local_118 != local_120) {
          do {
            if ((*(byte *)(lVar18 + -0x20) & 1) == 0) {
              bVar4 = *(byte *)(lVar18 + -0x48);
            }
            else {
              (**(code **)(**(long **)(lVar18 + -8) + 0x18))
                        (*(long **)(lVar18 + -8),*(undefined8 *)(lVar18 + -0x10),
                         *(ulong *)(lVar18 + -0x20) & 0xfffffffffffffffe,1);
              bVar4 = *(byte *)(lVar18 + -0x48);
            }
            if ((bVar4 & 1) != 0) {
              (**(code **)(**(long **)(lVar18 + -0x30) + 0x18))
                        (*(long **)(lVar18 + -0x30),*(undefined8 *)(lVar18 + -0x38),
                         *(ulong *)(lVar18 + -0x48) & 0xfffffffffffffffe,1);
            }
            lVar18 = lVar18 + -0x48;
          } while (lVar15 != lVar18);
        }
        local_118 = lVar15;
        (**(code **)(*plStack_108 + 0x18))(plStack_108,local_120,local_110 - local_120,8);
      }
      if (plStack_128 != (long *)0x0) {
        plVar19 = plStack_128 + 1;
        do {
          lVar15 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_138 != (long *)0x0) {
        plVar19 = local_138 + 1;
        do {
          lVar15 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*local_138 + 0x10))(local_138);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_148 != (long *)0x0) {
        plVar19 = plStack_148 + 1;
        do {
          lVar15 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_100 = (long **)0x0;
      plStack_f8 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = *plVar17 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      local_b0 = (long **)(plVar13 + 4);
      plStack_a8 = plVar13;
      (**(code **)*plVar16)(plVar16,&local_b0,&local_100);
      if (plStack_a8 != (long *)0x0) {
        plVar19 = plStack_a8 + 1;
        do {
          lVar15 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_f8 != (long *)0x0) {
        plVar19 = plStack_f8 + 1;
        do {
          lVar15 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          std::__shared_weak_count::__release_weak();
        }
      }
      *param_1 = plVar12;
      param_1[1] = plVar21;
      if (plVar13 != (long *)0x0) {
        do {
          lVar15 = *plVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar15 = local_190;
      if (local_190 != 0) {
        lVar18 = local_188;
        if (local_188 != local_190) {
          do {
            if ((*(byte *)(lVar18 + -0x20) & 1) == 0) {
              bVar4 = *(byte *)(lVar18 + -0x48);
            }
            else {
              (**(code **)(**(long **)(lVar18 + -8) + 0x18))
                        (*(long **)(lVar18 + -8),*(undefined8 *)(lVar18 + -0x10),
                         *(ulong *)(lVar18 + -0x20) & 0xfffffffffffffffe,1);
              bVar4 = *(byte *)(lVar18 + -0x48);
            }
            if ((bVar4 & 1) != 0) {
              (**(code **)(**(long **)(lVar18 + -0x30) + 0x18))
                        (*(long **)(lVar18 + -0x30),*(undefined8 *)(lVar18 + -0x38),
                         *(ulong *)(lVar18 + -0x48) & 0xfffffffffffffffe,1);
            }
            lVar18 = lVar18 + -0x48;
          } while (lVar15 != lVar18);
        }
        local_188 = lVar15;
        (**(code **)(*plStack_178 + 0x18))(plStack_178,local_190,local_180 - local_190,8);
      }
      if (local_168 != (long *)0x0) {
        plVar19 = local_168 + 1;
        do {
          lVar15 = *plVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *plVar19 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*local_168 + 0x10))(local_168);
          std::__shared_weak_count::__release_weak();
        }
      }
      goto joined_r0x0070594c;
    }
    plVar19 = (long *)FUN_00612290();
  }
  plStack_a8 = (long *)0x0;
  local_a0 = (long *)FUN_00612290();
  plStack_98 = (long *)0x0;
  local_b0 = &plStack_a8;
  plVar14 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x98,8);
  puVar1 = PTR_DAT_043764b8 + 0x10;
  plVar14[2] = 0;
  plVar14[3] = (long)plVar19;
  *plVar14 = (long)puVar1;
  plVar14[1] = 0;
  FUN_00782ef8(plVar14 + 4);
  plVar14[4] = (long)(PTR_DAT_043764c0 + 0x10);
  plVar14[6] = (long)local_b0;
  plVar14[8] = (long)local_a0;
  plVar14[7] = (long)plStack_a8;
  plVar19 = plVar14 + 7;
  plVar14[9] = (long)plStack_98;
  if (plStack_98 == (long *)0x0) {
    plVar14[6] = (long)plVar19;
  }
  else {
    *(long **)(*plVar19 + 0x10) = plVar19;
    plStack_98 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    local_b0 = &plStack_a8;
  }
  nn::os::InitializeMutex((MutexType *)(plVar14 + 10),false,0);
  nn::os::InitializeEvent((EventType *)(plVar14 + 0xe),0,0);
  nn::os::SignalEvent((EventType *)(plVar14 + 0xe));
  *param_1 = plVar14 + 4;
  param_1[1] = plVar14;
  FUN_02cd5c94(&local_b0,plStack_a8);
joined_r0x0070594c:
  if (local_158 != (long *)0x0) {
    plVar19 = local_158 + 1;
    do {
      lVar15 = *plVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*local_158 + 0x10))(local_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


