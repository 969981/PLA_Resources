/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006fdd00; name: FUN_006fdd00
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_006fdd00(long param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  long lVar3;
  undefined8 *******pppppppuVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined4 local_238 [2];
  ulong local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  long *plStack_218;
  char local_210;
  undefined8 *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  long local_1f0;
  undefined8 *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  long local_1d0;
  undefined8 local_1c8;
  long *local_1c0;
  long *local_1b8;
  long *local_1b0;
  undefined **local_1a8;
  undefined *local_1a0;
  undefined8 *******local_198;
  undefined8 *******local_190;
  long *plStack_188;
  char local_180 [8];
  undefined1 auStack_178 [8];
  undefined8 local_170;
  undefined1 auStack_158 [24];
  undefined **local_140;
  long local_138;
  undefined8 local_120;
  long *local_118;
  undefined4 local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  long *local_e0;
  undefined **local_d8;
  undefined *local_d0;
  undefined8 *******local_c8;
  undefined8 *******pppppppuStack_c0;
  undefined1 auStack_b0 [64];
  undefined **local_70;
  undefined8 uStack_68;
  
  lVar19 = *(long *)(param_1 + 0x100);
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = (long *)FUN_00612290();
                    /* try { // try from 006fdd34 to 006fdd3f has its CatchHandler @ 006fe728 */
  FUN_00710a98(&local_120,0);
  FUN_002a8570(&local_1a8);
  pppppppuVar4 = (undefined8 *******)((ulong)&local_1a8 | 1);
  if (((ulong)local_1a8 & 1) != 0) {
    pppppppuVar4 = local_198;
  }
                    /* try { // try from 006fdd60 to 006fdd67 has its CatchHandler @ 006fe648 */
  FUN_006fe80c(&local_120,pppppppuVar4);
  if (((ulong)local_1a8 & 1) != 0) {
    (**(code **)((long)*local_190 + 0x18))
              (local_190,local_198,(ulong)local_1a8 & 0xfffffffffffffffe,1);
  }
  local_100 = (undefined4)*(undefined8 *)(param_1 + 0xd8);
  local_1c8 = 0;
  local_1c0 = (long *)0x0;
  FUN_006fec84(&local_1b8,*(undefined8 *)(*(long *)(param_1 + 0xe0) + 8),&local_120,&local_1c8);
  local_70 = (undefined **)0x0;
  uStack_68 = 0;
  ppuVar1 = (undefined **)(PTR_DAT_04373168 + 0x10);
  local_d0 = PTR_DAT_04373170 + 0x10;
  local_c8 = &local_c8;
  local_d8 = ppuVar1;
  pppppppuStack_c0 = local_c8;
  (**(code **)(*local_1b8 + 0x10))(local_1b8,auStack_b0);
  local_70 = &local_d0;
  thunk_FUN_00783af0(&local_d8);
  local_d8 = ppuVar1;
  FUN_00782f18(&local_d0);
  plVar2 = local_1b0;
  plVar22 = local_1b8;
  local_1b8 = (long *)0x0;
  local_1b0 = (long *)0x0;
  (**(code **)(*plVar22 + 0x30))(&local_1a8);
  if (plVar2 != (long *)0x0) {
    plVar22 = plVar2 + 1;
    do {
      lVar12 = *plVar22;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar7) {
        *plVar22 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1b0 != (long *)0x0) {
    plVar22 = local_1b0 + 1;
    do {
      lVar12 = *plVar22;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar7) {
        *plVar22 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_1b0 + 0x10))(local_1b0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1c0 != (long *)0x0) {
    plVar22 = local_1c0 + 1;
    do {
      lVar12 = *plVar22;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar7) {
        *plVar22 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_1c0 + 0x10))(local_1c0);
      std::__shared_weak_count::__release_weak();
      goto joined_r0x006fdeb4;
    }
  }
joined_r0x006fdeb4:
  if ((int)local_1a8 == 0) {
    plVar22 = (long *)0x0;
    if (local_138 != 0) {
      plVar22 = (long *)(local_138 + 8);
    }
    if ((int)local_140 != 0) {
      plVar2 = plVar22 + (int)local_140;
      lVar12 = *plVar22;
      pbVar13 = *(byte **)(lVar12 + 0x20);
      if ((*pbVar13 & 1) == 0) goto LAB_006fe104;
LAB_006fe12c:
      pbVar13 = *(byte **)(pbVar13 + 0x10);
      uVar17 = *(undefined4 *)(lVar12 + 0x28);
      uVar16 = *(undefined4 *)(lVar12 + 0x2c);
      pbVar11 = *(byte **)(lVar12 + 0x18);
      if ((*pbVar11 & 1) != 0) goto LAB_006fe118;
LAB_006fe140:
      pbVar11 = pbVar11 + 1;
      if (local_f0 < local_e8) goto LAB_006fe0c8;
      do {
        lVar12 = (long)(local_f0 - local_f8) >> 3;
        uVar21 = lVar12 * -0x71c71c71c71c71c7 + 1;
        if (0x38e38e38e38e38e < uVar21) {
                    /* try { // try from 006fe608 to 006fe60f has its CatchHandler @ 006fe610 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar14 = (long)(local_e8 - local_f8) >> 3;
        uVar20 = 0x38e38e38e38e38e;
        if ((ulong)(lVar14 * -0x71c71c71c71c71c7) < 0x1c71c71c71c71c7) {
          uVar15 = lVar14 * 0x1c71c71c71c71c72;
          uVar20 = uVar21;
          if (uVar21 <= uVar15) {
            uVar20 = uVar15;
          }
          if (uVar20 != 0) goto LAB_006fe1ac;
          lVar14 = 0;
        }
        else {
LAB_006fe1ac:
          lVar14 = (**(code **)(*local_e0 + 0x10))(local_e0,uVar20 * 0x48,8);
        }
        uVar18 = lVar14 + lVar12 * 8;
        uVar21 = lVar14 + uVar20 * 0x48;
        FUN_0070033c(uVar18,pbVar13,uVar17,uVar16,pbVar11);
        uVar15 = local_e8;
        uVar20 = local_f8;
        local_e8 = uVar21;
        uVar10 = uVar18 + 0x48;
        uVar21 = local_f8;
        if (local_f0 != local_f8) {
          lVar12 = 0;
          do {
            lVar14 = local_f0 + lVar12;
            uVar24 = *(undefined8 *)(lVar14 + -0x40);
            uVar23 = *(undefined8 *)(lVar14 + -0x48);
            uVar25 = *(undefined8 *)(lVar14 + -0x38);
            lVar3 = uVar18 + lVar12;
            lVar12 = lVar12 + -0x48;
            *(undefined8 *)(lVar3 + -0x30) = *(undefined8 *)(lVar14 + -0x30);
            *(undefined8 *)(lVar3 + -0x38) = uVar25;
            *(undefined8 *)(lVar3 + -0x40) = uVar24;
            *(undefined8 *)(lVar3 + -0x48) = uVar23;
            *(undefined8 *)(lVar14 + -0x40) = 0;
            *(undefined8 *)(lVar14 + -0x38) = 0;
            *(undefined8 *)(lVar14 + -0x48) = 0;
            *(undefined8 *)(lVar3 + -0x28) = *(undefined8 *)(lVar14 + -0x28);
            uVar23 = *(undefined8 *)(lVar14 + -0x20);
            uVar25 = *(undefined8 *)(lVar14 + -8);
            uVar24 = *(undefined8 *)(lVar14 + -0x10);
            *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar14 + -0x18);
            *(undefined8 *)(lVar3 + -0x20) = uVar23;
            *(undefined8 *)(lVar3 + -8) = uVar25;
            *(undefined8 *)(lVar3 + -0x10) = uVar24;
            *(undefined8 *)(lVar14 + -0x20) = 0;
            *(undefined8 *)(lVar14 + -0x18) = 0;
            *(undefined8 *)(lVar14 + -0x10) = 0;
          } while (local_f8 - local_f0 != lVar12);
          uVar21 = local_f0;
          uVar18 = uVar18 + lVar12;
        }
        for (; local_f8 = uVar18, local_f0 = uVar10, uVar21 != uVar20; uVar21 = uVar21 - 0x48) {
          if ((*(byte *)(uVar21 - 0x20) & 1) == 0) {
            bVar5 = *(byte *)(uVar21 - 0x48);
          }
          else {
            (**(code **)(**(long **)(uVar21 - 8) + 0x18))
                      (*(long **)(uVar21 - 8),*(undefined8 *)(uVar21 - 0x10),
                       *(ulong *)(uVar21 - 0x20) & 0xfffffffffffffffe,1);
            bVar5 = *(byte *)(uVar21 - 0x48);
          }
          if ((bVar5 & 1) != 0) {
            (**(code **)(**(long **)(uVar21 - 0x30) + 0x18))
                      (*(long **)(uVar21 - 0x30),*(undefined8 *)(uVar21 - 0x38),
                       *(ulong *)(uVar21 - 0x48) & 0xfffffffffffffffe,1);
          }
          uVar10 = local_f0;
          uVar18 = local_f8;
        }
        if (uVar20 != 0) {
          (**(code **)(*local_e0 + 0x18))(local_e0,uVar20,uVar15 - uVar20,8);
        }
        while( true ) {
          plVar22 = plVar22 + 1;
          if (plVar22 == plVar2) goto LAB_006fe314;
          lVar12 = *plVar22;
          pbVar13 = *(byte **)(lVar12 + 0x20);
          if ((*pbVar13 & 1) != 0) goto LAB_006fe12c;
LAB_006fe104:
          pbVar13 = pbVar13 + 1;
          uVar17 = *(undefined4 *)(lVar12 + 0x28);
          uVar16 = *(undefined4 *)(lVar12 + 0x2c);
          pbVar11 = *(byte **)(lVar12 + 0x18);
          if ((*pbVar11 & 1) == 0) goto LAB_006fe140;
LAB_006fe118:
          pbVar11 = *(byte **)(pbVar11 + 0x10);
          if (local_e8 <= local_f0) break;
LAB_006fe0c8:
          FUN_0070033c(local_f0,pbVar13,uVar17,uVar16,pbVar11);
          local_f0 = local_f0 + 0x48;
        }
      } while( true );
    }
LAB_006fe314:
    FUN_007117e4(auStack_158);
    if (local_180[0] != '\0') {
      FUN_02767254(auStack_178,local_170);
    }
    puVar9 = PTR_DAT_04373170;
    puVar8 = PTR_DAT_04373168;
    if (((ulong)local_1a0 & 1) != 0) {
      (**(code **)(*plStack_188 + 0x18))
                (plStack_188,local_190,(ulong)local_1a0 & 0xfffffffffffffffe,1);
    }
    FUN_00710af4(&local_120);
    local_120 = *(undefined8 *)(param_1 + 200);
    local_118 = *(long **)(param_1 + 0xd0);
    if (local_118 == (long *)0x0) {
      local_118 = (long *)0x0;
    }
    else {
      plVar22 = local_118 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar7) {
          *plVar22 = *plVar22 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar7) {
          *plVar22 = *plVar22 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        lVar12 = *plVar22;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar7) {
          *plVar22 = lVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_118 + 0x10))(local_118);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_0070519c(&local_1b8,&local_120,&local_f8);
    local_1a0 = puVar9 + 0x10;
    local_198 = &local_198;
    local_140 = (undefined **)0x0;
    local_138 = 0;
    local_1a8 = (undefined **)(puVar8 + 0x10);
    local_190 = local_198;
    (**(code **)(*local_1b8 + 0x10))(local_1b8,local_180);
    local_140 = &local_1a0;
    thunk_FUN_00783af0(&local_1a8);
    local_1a8 = (undefined **)(puVar8 + 0x10);
    FUN_00782f18(&local_1a0);
    plVar2 = local_1b0;
    plVar22 = local_1b8;
    local_1b8 = (long *)0x0;
    local_1b0 = (long *)0x0;
    (**(code **)(*plVar22 + 0x30))(&local_d8);
    if (plVar2 != (long *)0x0) {
      plVar22 = plVar2 + 1;
      do {
        lVar12 = *plVar22;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar7) {
          *plVar22 = lVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__shared_weak_count::__release_weak();
      }
    }
    local_1a0 = (undefined *)0x0;
    local_198 = (undefined8 *******)FUN_00612290();
    local_190 = (undefined8 *******)0x0;
    local_1a8 = &local_1a0;
    FUN_007004bc(local_238,&local_d8,0,&DAT_03996322,&local_1a8);
    FUN_02767254(&local_1a8,local_1a0);
    FUN_02cd5c94(&local_d8,local_d0);
    if (local_1b0 != (long *)0x0) {
      plVar22 = local_1b0 + 1;
      do {
        lVar12 = *plVar22;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar7) {
          *plVar22 = lVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_1b0 + 0x10))(local_1b0);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar21 = local_f8;
    if (local_118 != (long *)0x0) {
      plVar22 = local_118 + 1;
      do {
        lVar12 = *plVar22;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar7) {
          *plVar22 = lVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_118 + 0x10))(local_118);
        std::__shared_weak_count::__release_weak();
        uVar21 = local_f8;
      }
    }
  }
  else {
    local_d0 = (undefined *)0x0;
    local_c8 = (undefined8 *******)FUN_00612290();
    pppppppuStack_c0 = (undefined8 *******)0x0;
    local_d8 = &local_d0;
    FUN_006fe9b0(local_238,&local_1a8,&local_d8);
    FUN_02cd5c94(&local_d8,local_d0);
    FUN_007117e4(auStack_158);
    if (local_180[0] != '\0') {
      FUN_02767254(auStack_178,local_170);
    }
    if (((ulong)local_1a0 & 1) != 0) {
      (**(code **)(*plStack_188 + 0x18))
                (plStack_188,local_190,(ulong)local_1a0 & 0xfffffffffffffffe,1);
    }
    FUN_00710af4(&local_120);
    uVar21 = local_f8;
  }
  local_f8 = uVar21;
  if (uVar21 != 0) {
    for (uVar20 = local_f0; uVar20 != uVar21; uVar20 = uVar20 - 0x48) {
      if ((*(byte *)(uVar20 - 0x20) & 1) == 0) {
        bVar5 = *(byte *)(uVar20 - 0x48);
      }
      else {
        (**(code **)(**(long **)(uVar20 - 8) + 0x18))
                  (*(long **)(uVar20 - 8),*(undefined8 *)(uVar20 - 0x10),
                   *(ulong *)(uVar20 - 0x20) & 0xfffffffffffffffe,1);
        bVar5 = *(byte *)(uVar20 - 0x48);
      }
      if ((bVar5 & 1) != 0) {
        (**(code **)(**(long **)(uVar20 - 0x30) + 0x18))
                  (*(long **)(uVar20 - 0x30),*(undefined8 *)(uVar20 - 0x38),
                   *(ulong *)(uVar20 - 0x48) & 0xfffffffffffffffe,1);
      }
    }
    local_f0 = uVar21;
    (**(code **)(*local_e0 + 0x18))(local_e0,local_f8,local_e8 - local_f8,8);
  }
  nn::os::LockMutex((MutexType *)(lVar19 + 0x38));
  *(undefined4 *)(lVar19 + 0x58) = local_238[0];
  *(undefined8 *)(lVar19 + 0x68) = uStack_228;
  *(ulong *)(lVar19 + 0x60) = local_230;
  *(long **)(lVar19 + 0x78) = plStack_218;
  *(undefined8 *)(lVar19 + 0x70) = local_220;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  *(undefined1 *)(lVar19 + 0x80) = 0;
  if (local_210 != '\0') {
    *(undefined8 **)(lVar19 + 0x88) = local_208;
    *(undefined8 *)(lVar19 + 0x98) = uStack_1f8;
    *(undefined8 *)(lVar19 + 0x90) = local_200;
    plVar22 = (long *)(lVar19 + 0x90);
    *(long *)(lVar19 + 0xa0) = local_1f0;
    if (local_1f0 == 0) {
      *(long **)(lVar19 + 0x88) = plVar22;
    }
    else {
      *(long **)(*plVar22 + 0x10) = plVar22;
      local_208 = &local_200;
      local_200 = 0;
      local_1f0 = 0;
    }
    *(undefined1 *)(lVar19 + 0x80) = 1;
  }
  *(undefined8 **)(lVar19 + 0xa8) = local_1e8;
  *(undefined8 *)(lVar19 + 0xb8) = uStack_1d8;
  *(undefined8 *)(lVar19 + 0xb0) = local_1e0;
  plVar22 = (long *)(lVar19 + 0xb0);
  *(long *)(lVar19 + 0xc0) = local_1d0;
  if (local_1d0 == 0) {
    *(long **)(lVar19 + 0xa8) = plVar22;
  }
  else {
    *(long **)(*plVar22 + 0x10) = plVar22;
    local_1e8 = &local_1e0;
    local_1e0 = 0;
    local_1d0 = 0;
  }
  *(undefined1 *)(lVar19 + 200) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar19 + 0x38));
  FUN_02cd5c94(&local_1e8,local_1e0);
  if (local_210 != '\0') {
    FUN_02767254(&local_208,local_200);
  }
  if ((local_230 & 1) != 0) {
    (**(code **)(*plStack_218 + 0x18))(plStack_218,local_220,local_230 & 0xfffffffffffffffe,1);
  }
  return 1;
}


