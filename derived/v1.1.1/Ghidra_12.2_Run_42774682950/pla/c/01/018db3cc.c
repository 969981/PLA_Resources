/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018db3cc; name: FUN_018db3cc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_018db3cc(long *param_1)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *in_d3;
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [104];
  long *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  long local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc [4];
  long *local_b8;
  long *local_b0 [2];
  long *local_a0;
  long *local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  long *local_68;
  
  plVar1 = param_1 + 0x49;
  *(undefined1 *)((long)param_1 + 0x75c) = 1;
  local_98 = (long *)0x0;
  pcStack_90 = (char *)0x0;
  FUN_00ac3fa4(&local_98,plVar1);
  if (local_98 == (long *)0x0) {
    local_b0[0] = (long *)0x0;
  }
  else {
    FUN_00bd915c(local_b0);
    plVar20 = local_98;
    if (local_98 != (long *)0x0) {
      plVar22 = local_98 + 1;
      do {
        iVar13 = (int)*plVar22 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar5) {
          *(int *)plVar22 = iVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 == 0) {
        local_98[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar16;
        local_e8 = *plVar20;
        FUN_02a44274(lVar16 + 0xd8,&local_e8);
      }
    }
  }
  if (local_b0[0] != (long *)0x0) {
    FUN_01a883dc(&local_98);
    plVar20 = local_98;
    if (local_98 != (long *)0x0) {
      if (*(int *)((long)local_98 + 0xc) != 0) {
        piVar2 = (int *)((long)local_98 + 0xc);
        iVar13 = *(int *)((long)local_98 + 0xc);
        do {
          plVar22 = (long *)plVar20[2];
          lVar16 = FUN_018e43a0();
          while( true ) {
            if (plVar22 == (long *)0x0) goto LAB_018dc0ec;
            if (plVar22 == (long *)lVar16) break;
            plVar22 = (long *)*plVar22;
          }
          iVar14 = *piVar2;
          if (iVar14 == iVar13) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar16 = plVar20[3];
              plVar20 = (long *)0x0;
              plVar22 = local_98;
              if (lVar16 != 0) {
                plVar20 = (long *)(lVar16 + -0x50);
              }
              goto joined_r0x018dc040;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar13 = iVar14;
        } while (iVar14 != 0);
      }
LAB_018dc0ec:
      plVar20 = (long *)0x0;
      plVar22 = local_98;
joined_r0x018dc040:
      local_98 = plVar22;
      if (plVar22 != (long *)0x0) {
        plVar3 = plVar22 + 1;
        do {
          iVar13 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 == 0) {
          plVar22[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_e8 = *plVar22;
          FUN_02a44274(lVar16 + 0xd8,&local_e8);
        }
      }
      if (plVar20 != (long *)0x0) {
        FUN_0260f6d0(plVar20);
        lVar16 = plVar20[0xb];
        piVar2 = (int *)(lVar16 + 0xc);
        do {
          iVar13 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar20 + 0x20))(plVar20);
        }
      }
    }
    if (local_b0[0] != (long *)0x0) {
      lVar16 = local_b0[0][0xb];
      piVar2 = (int *)(lVar16 + 0xc);
      do {
        iVar13 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_b0[0] + 0x20))();
      }
    }
  }
  FUN_01a74a50(&local_98,param_1);
  if (local_98 == (long *)0x0) {
    local_b0[0] = (long *)0x0;
LAB_018db470:
    if (local_b0[0] == (long *)0x0) goto LAB_018db4e0;
LAB_018db478:
    local_98 = (long *)0x27ddf1b8e0fe6001;
    pcStack_90 = "PLAY_BA_SYS_POKE_APPERANCE";
    local_88 = 0x1a;
    local_80 = (long *)0x0;
    FUN_0290b66c(local_b0[0],&local_98,0);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_b0[0] == (long *)0x0) goto LAB_018db4e0;
    lVar16 = local_b0[0][0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 != 0) goto LAB_018db4e0;
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*local_b0[0] + 0x20))();
    if (param_1[0xc9] != 0) goto LAB_018db728;
LAB_018db4e8:
    local_68 = (long *)0x0;
  }
  else {
    FUN_00bd9360(local_b0);
    plVar20 = local_98;
    if (local_98 == (long *)0x0) goto LAB_018db470;
    plVar22 = local_98 + 1;
    do {
      iVar13 = (int)*plVar22 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = iVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 != 0) goto LAB_018db470;
    local_98[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar16 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar16;
    local_e8 = *plVar20;
    FUN_02a44274(lVar16 + 0xd8,&local_e8);
    if (local_b0[0] != (long *)0x0) goto LAB_018db478;
LAB_018db4e0:
    if (param_1[0xc9] == 0) goto LAB_018db4e8;
LAB_018db728:
    FUN_018e4ba0(&local_68);
    if (local_68 != (long *)0x0) {
      local_a0 = (long *)0x0;
      lVar16 = param_1[1];
      FUN_009c69bc(&local_b8,param_1);
      (**(code **)(*local_b8 + 0x40))();
      puVar9 = PTR_DAT_04379660;
      local_bc[0] = 0;
      local_98 = (long *)0x1fa51b776461d5b7;
      pcStack_90 = "hearing_ball_out_continue_second";
      local_88 = 0x20;
      local_80 = (long *)0x0;
      local_b0[0] = in_d3;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar11 = PTR_DAT_04379670;
      puVar10 = PTR_DAT_04379668;
      lVar21 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar21;
      uVar17 = *(ulong *)(lVar21 + 0x60);
      local_c0 = 0;
      if (uVar17 != 0) {
        uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          uVar19 = uVar17 - 1 & 0x4e9fd5f8e749f8e3;
        }
        else {
          uVar19 = 0x4e9fd5f8e749f8e3;
          if (uVar17 < 0x4e9fd5f8e749f8e4) {
            uVar19 = 0;
            if (uVar17 != 0) {
              uVar19 = 0x4e9fd5f8e749f8e3 / uVar17;
            }
            uVar19 = 0x4e9fd5f8e749f8e3 - uVar19 * uVar17;
          }
        }
        plVar20 = *(long **)(*(long *)(lVar21 + 0x58) + uVar19 * 8);
        if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
          if (uVar18 < 2) {
            do {
              if (plVar20[1] == 0x4e9fd5f8e749f8e3) {
                if (plVar20[2] == 0x4e9fd5f8e749f8e3) goto LAB_018db84c;
              }
              else if ((plVar20[1] & uVar17 - 1) != uVar19) break;
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
          else {
            do {
              uVar18 = plVar20[1];
              if (uVar18 == 0x4e9fd5f8e749f8e3) {
                if (plVar20[2] == 0x4e9fd5f8e749f8e3) goto LAB_018db84c;
              }
              else {
                if (uVar17 <= uVar18) {
                  uVar7 = 0;
                  if (uVar17 != 0) {
                    uVar7 = uVar18 / uVar17;
                  }
                  uVar18 = uVar18 - uVar7 * uVar17;
                }
                if (uVar18 != uVar19) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      goto LAB_018db88c;
    }
  }
  goto LAB_018db4ec;
LAB_018db950:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar22 = plVar20 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_c4 = FUN_00d7905c(plVar20,&local_e8);
    do {
      iVar13 = (int)*plVar22 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = iVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  goto LAB_018db990;
LAB_018db84c:
  plVar20 = (long *)plVar20[3];
  if (plVar20 != (long *)0x0) {
    plVar22 = plVar20 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_c0 = FUN_00d7905c(plVar20,&local_98);
    do {
      iVar13 = (int)*plVar22 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = iVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
LAB_018db88c:
  local_e8 = -0x31d08d3f05d781b4;
  pcStack_e0 = "hearing_ball_out_reach_range";
  local_d8 = 0x1c;
  local_d0 = (long *)0x0;
  if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar21 = *(long *)puVar10;
  *(long *)puVar11 = lVar21;
  uVar17 = *(ulong *)(lVar21 + 0x60);
  local_c4 = 0;
  if (uVar17 != 0) {
    uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar17 - 1 & 0x4e9fd5f8e749f8e3;
    }
    else {
      uVar19 = 0x4e9fd5f8e749f8e3;
      if (uVar17 < 0x4e9fd5f8e749f8e4) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = 0x4e9fd5f8e749f8e3 / uVar17;
        }
        uVar19 = 0x4e9fd5f8e749f8e3 - uVar19 * uVar17;
      }
    }
    plVar20 = *(long **)(*(long *)(lVar21 + 0x58) + uVar19 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar20[1] == 0x4e9fd5f8e749f8e3) {
            if (plVar20[2] == 0x4e9fd5f8e749f8e3) goto LAB_018db950;
          }
          else if ((plVar20[1] & uVar17 - 1) != uVar19) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar20[1];
          if (uVar18 == 0x4e9fd5f8e749f8e3) {
            if (plVar20[2] == 0x4e9fd5f8e749f8e3) goto LAB_018db950;
          }
          else {
            if (uVar17 <= uVar18) {
              uVar7 = 0;
              if (uVar17 != 0) {
                uVar7 = uVar18 / uVar17;
              }
              uVar18 = uVar18 - uVar7 * uVar17;
            }
            if (uVar18 != uVar19) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_018db990:
  local_f0 = 0xb;
  uStack_ec = 0;
  plVar20 = (long *)FUN_018e4d58(lVar16,local_b0,local_bc,&local_c0,&local_c4,&uStack_ec,&local_f0);
  if (plVar20 != (long *)0x0) {
    lVar16 = plVar20[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar15;
    }
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar22 = local_a0;
  local_a0 = (long *)0x0;
  if (plVar22 != (long *)0x0) {
    lVar16 = plVar22[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))();
    }
  }
  local_a0 = plVar20;
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    lVar16 = local_b8[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  local_180 = 0;
  local_178 = (code *)0x0;
  local_170 = 0;
  uStack_168 = 0;
  FUN_00bcd1e0(&local_f8,local_68,0x10,&local_a0,&local_180,0);
  pcVar8 = local_178;
  if (local_f8 != (long *)0x0) {
    lVar16 = local_f8[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_f8 + 0x20))();
      pcVar8 = local_178;
      local_178 = (code *)0x0;
    }
  }
  if (pcVar8 != (code *)0x0) {
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar8)(auStack_160);
  }
  if (local_a0 != (long *)0x0) {
    lVar16 = local_a0[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  if (local_68 != (long *)0x0) {
    lVar16 = local_68[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
LAB_018db4ec:
  local_98 = (long *)0x0;
  pcStack_90 = (char *)0x0;
  FUN_00ac3fa4(&local_98,plVar1);
  if (local_98 == (long *)0x0) {
    local_b0[0] = (long *)0x0;
  }
  else {
    FUN_00bd915c(local_b0);
    plVar20 = local_98;
    if (local_98 != (long *)0x0) {
      plVar22 = local_98 + 1;
      do {
        iVar13 = (int)*plVar22 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar5) {
          *(int *)plVar22 = iVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 == 0) {
        local_98[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar16;
        local_e8 = *plVar20;
        FUN_02a44274(lVar16 + 0xd8,&local_e8);
      }
    }
  }
  if (local_b0[0] != (long *)0x0) {
    FUN_01a82160(&local_98);
    plVar20 = local_98;
    puVar12 = PTR_DAT_0437a3d0;
    puVar11 = PTR_DAT_0437a3c8;
    puVar10 = PTR_DAT_043795e0;
    puVar9 = PTR_DAT_043794d0;
    if (local_98 != (long *)0x0) {
      if (*(int *)((long)local_98 + 0xc) != 0) {
        piVar2 = (int *)((long)local_98 + 0xc);
        iVar13 = *(int *)((long)local_98 + 0xc);
        do {
          plVar22 = (long *)plVar20[2];
          if (((*puVar11 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar11), iVar14 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar14 != 0)) {
              if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
                uVar15 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar15;
                __cxa_guard_release(puVar9);
              }
              *(undefined **)puVar10 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar12 = puVar10;
            __cxa_guard_release(puVar11);
          }
          while( true ) {
            if (plVar22 == (long *)0x0) goto LAB_018dc274;
            if (plVar22 == (long *)puVar12) break;
            plVar22 = (long *)*plVar22;
          }
          iVar14 = *piVar2;
          if (iVar14 == iVar13) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar16 = plVar20[3];
              plVar20 = (long *)0x0;
              plVar22 = local_98;
              if (lVar16 != 0) {
                plVar20 = (long *)(lVar16 + -0x50);
              }
              goto joined_r0x018dc194;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar13 = iVar14;
        } while (iVar14 != 0);
      }
LAB_018dc274:
      plVar20 = (long *)0x0;
      plVar22 = local_98;
joined_r0x018dc194:
      local_98 = plVar22;
      if (plVar22 != (long *)0x0) {
        plVar3 = plVar22 + 1;
        do {
          iVar13 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 == 0) {
          plVar22[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_e8 = *plVar22;
          FUN_02a44274(lVar16 + 0xd8,&local_e8);
        }
      }
      if (plVar20 != (long *)0x0) {
        FUN_01a56fa4(plVar20,0);
        FUN_01a5728c(plVar20,0);
        lVar16 = plVar20[0xb];
        piVar2 = (int *)(lVar16 + 0xc);
        do {
          iVar13 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar20 + 0x20))(plVar20);
        }
      }
    }
    if (local_b0[0] != (long *)0x0) {
      lVar16 = local_b0[0][0xb];
      piVar2 = (int *)(lVar16 + 0xc);
      do {
        iVar13 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_b0[0] + 0x20))();
      }
    }
  }
  plVar20 = param_1 + 0xef;
  lVar21 = *plVar20;
  lVar16 = nn::os::GetCurrentThread();
  if (lVar16 == lVar21) {
    bVar5 = false;
    plVar22 = (long *)0x0;
  }
  else {
    plVar22 = param_1 + 0xed;
    lVar16 = nn::os::GetCurrentThread();
    do {
      if (*plVar20 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x76c));
          while (*plVar20 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar5) {
              *plVar20 = lVar16;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_018db5ac;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = lVar16;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_018db5ac:
    bVar5 = true;
  }
  FUN_016c24d0(&local_98,param_1 + 0xe9);
  if ((local_98 != (long *)0x0) && (FUN_015916d0(local_98,0,0x10000,0), local_98 != (long *)0x0)) {
    lVar16 = local_98[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar2;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
      *(undefined1 *)(param_1 + 0xf0) = 0;
      goto joined_r0x018db5fc;
    }
  }
  *(undefined1 *)(param_1 + 0xf0) = 0;
joined_r0x018db5fc:
  if (bVar5) {
    plVar22[2] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar22 + 4));
  }
  (**(code **)(*param_1 + 0xf0))(param_1,0);
  local_98 = (long *)0x0;
  pcStack_90 = (char *)0x0;
  FUN_00ac3fa4(&local_98,plVar1);
  FUN_0099c748(local_b0,&local_98);
  plVar1 = local_98;
  if (local_98 != (long *)0x0) {
    plVar20 = local_98 + 1;
    do {
      iVar13 = (int)*plVar20 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *(int *)plVar20 = iVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 == 0) {
      local_98[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_e8 = *plVar1;
      FUN_02a44274(lVar16 + 0xd8,&local_e8);
    }
  }
  if (local_b0[0] != (long *)0x0) {
    FUN_01a8c91c();
    FUN_01a87278(local_b0[0]);
    if (local_b0[0] != (long *)0x0) {
      lVar16 = local_b0[0][0xb];
      piVar2 = (int *)(lVar16 + 0xc);
      do {
        iVar13 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_b0[0] + 0x20))();
      }
    }
  }
  return;
}


