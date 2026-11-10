/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bbc258; name: FUN_01bbc258
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_01bbc258(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long *plVar17;
  undefined1 *puVar18;
  long *plVar19;
  bool bVar20;
  long lVar21;
  undefined8 *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined8 uVar28;
  undefined1 in_q3 [16];
  undefined8 uVar29;
  undefined8 uVar30;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  long *local_c0;
  long *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long local_78;
  
  puVar10 = PTR_DAT_043796e8;
  puVar9 = PTR_DAT_043796e0;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  uVar30 = in_q3._8_8_;
  uVar28 = in_q3._0_8_;
  lVar21 = *(long *)(param_1 + 0x2e8);
  if ((lVar21 == 0) || (*(int *)(lVar21 + 0xc) == 0)) {
LAB_01bbc28c:
    plVar19 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar21 + 0xc);
    iVar11 = *(int *)(lVar21 + 0xc);
    do {
      puVar22 = *(undefined8 **)(lVar21 + 0x10);
      if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)puVar8 = uVar14;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar10 = puVar8;
        __cxa_guard_release(puVar9);
      }
      if (puVar22 == (undefined8 *)0x0) goto LAB_01bbc28c;
      while (puVar22 != (undefined8 *)puVar10) {
        puVar22 = (undefined8 *)*puVar22;
        plVar19 = (long *)0x0;
        if (puVar22 == (undefined8 *)0x0) goto LAB_01bbc290;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar11) {
        cVar3 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar20) {
          *piVar1 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar19 = (long *)0x0;
          if (*(long *)(lVar21 + 0x18) != 0) {
            plVar19 = (long *)(*(long *)(lVar21 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar19 = (long *)0x0;
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
LAB_01bbc290:
  FUN_0199c138(&local_88,plVar19);
  FUN_01aed8d0(&local_b8,local_88);
  if (local_b8 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else {
    FUN_0095dafc(&local_90);
    plVar17 = local_b8;
    if (local_b8 != (long *)0x0) {
      plVar2 = local_b8 + 1;
      do {
        iVar11 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar20) {
          *(int *)plVar2 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar21;
        local_78 = *plVar17;
        FUN_02a44274(lVar21 + 0xd8,&local_78);
      }
    }
  }
  FUN_009c69bc(&local_b8,local_90);
  (**(code **)(*local_b8 + 0x40))();
  uVar14 = uVar28;
  uVar29 = uVar30;
  if (local_b8 != (long *)0x0) {
    lVar21 = local_b8[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar20) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  FUN_009c69bc(&local_b8,param_1);
  (**(code **)(*local_b8 + 0x40))();
  if (local_b8 != (long *)0x0) {
    lVar21 = local_b8[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar20) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  FUN_01aeda18(&local_b8,local_88);
  if (local_b8 == (long *)0x0) {
    local_98 = (long *)0x0;
LAB_01bbc354:
    if (local_98 == (long *)0x0) goto LAB_01bbc35c;
LAB_01bbcc40:
    iVar11 = FUN_0267081c();
    if (iVar11 == 4) {
      uVar13 = (**(code **)(*local_98 + 0x158))();
      if ((uVar13 & 1) != 0) goto LAB_01bbcc88;
      goto LAB_01bbc384;
    }
    if (iVar11 != 3) {
      if (iVar11 != 1) goto LAB_01bbc384;
      uVar13 = (**(code **)(*local_98 + 0x150))();
      goto joined_r0x01bbcc6c;
    }
  }
  else {
    FUN_00959eac(&local_98);
    plVar17 = local_b8;
    if (local_b8 == (long *)0x0) goto LAB_01bbc354;
    plVar2 = local_b8 + 1;
    do {
      iVar11 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar20) {
        *(int *)plVar2 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 != 0) goto LAB_01bbc354;
    local_b8[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar21 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar21;
    local_78 = *plVar17;
    FUN_02a44274(lVar21 + 0xd8,&local_78);
    if (local_98 != (long *)0x0) goto LAB_01bbcc40;
LAB_01bbc35c:
    uVar13 = (**(code **)(*local_90 + 0x218))();
    if ((uVar13 & 1) == 0) {
      uVar13 = (**(code **)(*local_90 + 0x228))();
joined_r0x01bbcc6c:
      if ((uVar13 & 1) == 0) {
LAB_01bbc384:
        if (local_98 != (long *)0x0) {
          lVar21 = local_98[0xb];
          piVar1 = (int *)(lVar21 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar20) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar21 + 0x18) = 0;
            (**(code **)(*local_98 + 0x20))();
          }
        }
        puVar7 = PTR_DAT_04379660;
        local_e0 = (float)uVar14;
        fStack_dc = (float)((ulong)uVar14 >> 0x20);
        fStack_d8 = (float)uVar29;
        fStack_d4 = (float)((ulong)uVar29 >> 0x20);
        fVar25 = (float)((ulong)uVar28 >> 0x20);
        fVar23 = (float)uVar28 - local_e0;
        fVar26 = fVar25 - fStack_dc;
        fStack_d8 = (float)uVar30 - fStack_d8;
        fStack_d4 = (float)((ulong)uVar30 >> 0x20) - fStack_d4;
        fVar23 = fVar23 * fVar23;
        fVar26 = fVar26 * fVar26;
        fStack_d8 = fStack_d8 * fStack_d8;
        fStack_d4 = fStack_d4 * fStack_d4;
        auVar27._4_4_ = fVar26;
        auVar27._0_4_ = fVar23;
        auVar27._8_4_ = fStack_d8;
        auVar27._12_4_ = fStack_d4;
        auVar6._4_4_ = fVar26;
        auVar6._0_4_ = fVar23;
        auVar6._8_4_ = fStack_d8;
        auVar6._12_4_ = fStack_d4;
        auVar27 = NEON_ext(auVar27,auVar6,8,1);
        local_b8 = (long *)0xa902d329628cf35a;
        pcStack_b0 = "start_check_target_player_distance";
        local_a8 = 0x22;
        local_a0 = (long *)0x0;
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        puVar9 = PTR_DAT_04379670;
        puVar8 = PTR_DAT_04379668;
        lVar21 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar21;
        puVar15 = *(undefined1 **)(lVar21 + 0x60);
        fVar24 = 0.0;
        if (puVar15 != (undefined1 *)0x0) {
          uVar13 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555);
          uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
          uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar13 < 2) {
            puVar16 = (undefined1 *)((ulong)(puVar15 + -1) & 0x613bd1694d6a9884);
          }
          else {
            uVar5 = 0;
            if (puVar15 != (undefined1 *)0x0) {
              uVar5 = 0x613bd1694d6a9884 / (ulong)puVar15;
            }
            puVar16 = &DAT_613bd1694d6a9884;
            if (puVar15 < (undefined1 *)0x613bd1694d6a9885) {
              puVar16 = &DAT_613bd1694d6a9884 + -(uVar5 * (long)puVar15);
            }
          }
          plVar17 = *(long **)(*(long *)(lVar21 + 0x58) + (long)puVar16 * 8);
          if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
            if (uVar13 < 2) {
              do {
                if ((undefined1 *)plVar17[1] == &DAT_613bd1694d6a9884) {
                  if ((undefined1 *)plVar17[2] == &DAT_613bd1694d6a9884) goto LAB_01bbc4b0;
                }
                else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar15 + -1)) != puVar16)
                break;
                plVar17 = (long *)*plVar17;
              } while (plVar17 != (long *)0x0);
            }
            else {
              do {
                puVar18 = (undefined1 *)plVar17[1];
                if (puVar18 == &DAT_613bd1694d6a9884) {
                  if ((undefined1 *)plVar17[2] == &DAT_613bd1694d6a9884) goto LAB_01bbc4b0;
                }
                else {
                  if (puVar15 <= puVar18) {
                    uVar13 = 0;
                    if (puVar15 != (undefined1 *)0x0) {
                      uVar13 = (ulong)puVar18 / (ulong)puVar15;
                    }
                    puVar18 = puVar18 + -(uVar13 * (long)puVar15);
                  }
                  if (puVar18 != puVar16) break;
                }
                plVar17 = (long *)*plVar17;
              } while (plVar17 != (long *)0x0);
            }
          }
        }
        goto joined_r0x01bbc8d4;
      }
    }
  }
LAB_01bbcc88:
  if (local_98 != (long *)0x0) {
    lVar21 = local_98[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar20) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
LAB_01bbccac:
  bVar20 = false;
joined_r0x01bbc7c4:
  if (local_90 != (long *)0x0) {
    lVar21 = local_90[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  if (local_88 != (long *)0x0) {
    lVar21 = local_88[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  if (plVar19 != (long *)0x0) {
    lVar21 = plVar19[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  return bVar20;
LAB_01bbc4b0:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar2 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar20) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    fVar24 = (float)FUN_00d7905c(plVar17,&local_b8);
    do {
      iVar11 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar20) {
        *(int *)plVar2 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
joined_r0x01bbc8d4:
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (SQRT(auVar27._0_4_ + fVar23 + auVar27._4_4_ + fVar26) <= fVar24) {
    local_b8 = (long *)&DAT_7280f8de68026c53;
    pcStack_b0 = "start_check_target_player_hight_diff";
    local_a8 = 0x24;
    local_a0 = (long *)0x0;
    if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    fVar23 = 0.0;
    lVar21 = *(long *)puVar8;
    *(long *)puVar9 = lVar21;
    puVar15 = *(undefined1 **)(lVar21 + 0x60);
    if (puVar15 != (undefined1 *)0x0) {
      uVar13 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        puVar16 = (undefined1 *)((ulong)(puVar15 + -1) & 0x613bd1694d6a9884);
      }
      else {
        puVar16 = &DAT_613bd1694d6a9884;
        if (puVar15 < (undefined1 *)0x613bd1694d6a9885) {
          uVar5 = 0;
          if (puVar15 != (undefined1 *)0x0) {
            uVar5 = 0x613bd1694d6a9884 / (ulong)puVar15;
          }
          puVar16 = &DAT_613bd1694d6a9884 + -(uVar5 * (long)puVar15);
        }
      }
      plVar17 = *(long **)(*(long *)(lVar21 + 0x58) + (long)puVar16 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar13 < 2) {
          do {
            if ((undefined1 *)plVar17[1] == &DAT_613bd1694d6a9884) {
              if ((undefined1 *)plVar17[2] == &DAT_613bd1694d6a9884) goto LAB_01bbc5e0;
            }
            else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar15 + -1)) != puVar16) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            puVar18 = (undefined1 *)plVar17[1];
            if (puVar18 == &DAT_613bd1694d6a9884) {
              if ((undefined1 *)plVar17[2] == &DAT_613bd1694d6a9884) goto LAB_01bbc5e0;
            }
            else {
              if (puVar15 <= puVar18) {
                uVar13 = 0;
                if (puVar15 != (undefined1 *)0x0) {
                  uVar13 = (ulong)puVar18 / (ulong)puVar15;
                }
                puVar18 = puVar18 + -(uVar13 * (long)puVar15);
              }
              if (puVar18 != puVar16) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    goto LAB_01bbc620;
  }
  goto LAB_01bbccac;
LAB_01bbc5e0:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar2 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar20) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    fVar23 = (float)FUN_00d7905c(local_e0,plVar17,&local_b8);
    do {
      iVar11 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar20) {
        *(int *)plVar2 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
LAB_01bbc620:
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (ABS(fVar25 - fStack_dc) <= fVar23) {
    FUN_01aeda18(&local_b8,local_88);
    if (local_b8 == (long *)0x0) {
      local_98 = (long *)0x0;
    }
    else {
      FUN_00959eac(&local_98);
      plVar17 = local_b8;
      if (local_b8 != (long *)0x0) {
        plVar2 = local_b8 + 1;
        do {
          iVar11 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar20) {
            *(int *)plVar2 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 == 0) {
          local_b8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar21 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar21;
          local_78 = *plVar17;
          FUN_02a44274(lVar21 + 0xd8,&local_78);
        }
      }
    }
    if (local_98 != (long *)0x0) {
      FUN_01a73640(&local_b8);
      if (local_b8 == (long *)0x0) {
        local_c0 = (long *)0x0;
      }
      else {
        FUN_0095a0ac(&local_c0);
        plVar17 = local_b8;
        if (local_b8 != (long *)0x0) {
          plVar2 = local_b8 + 1;
          do {
            iVar11 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar20) {
              *(int *)plVar2 = iVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 == 0) {
            local_b8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar21 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar21;
            local_78 = *plVar17;
            FUN_02a44274(lVar21 + 0xd8,&local_78);
          }
        }
      }
      if (local_c0 != (long *)0x0) {
        fVar23 = (float)(**(code **)(*local_c0 + 0x198))();
        local_b8 = (long *)0xc6b6d7b7e5f56799;
        pcStack_b0 = "start_check_player_ground_hight";
        local_a8 = 0x1f;
        local_a0 = (long *)0x0;
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar21 = *(long *)puVar8;
        *(long *)puVar9 = lVar21;
        puVar15 = *(undefined1 **)(lVar21 + 0x60);
        fVar25 = 0.0;
        if (puVar15 != (undefined1 *)0x0) {
          uVar13 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555);
          uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
          uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar13 < 2) {
            puVar16 = (undefined1 *)((ulong)(puVar15 + -1) & 0x613bd1694d6a9884);
          }
          else {
            puVar16 = &DAT_613bd1694d6a9884;
            if (puVar15 < (undefined1 *)0x613bd1694d6a9885) {
              uVar5 = 0;
              if (puVar15 != (undefined1 *)0x0) {
                uVar5 = 0x613bd1694d6a9884 / (ulong)puVar15;
              }
              puVar16 = &DAT_613bd1694d6a9884 + -(uVar5 * (long)puVar15);
            }
          }
          plVar17 = *(long **)(*(long *)(lVar21 + 0x58) + (long)puVar16 * 8);
          if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
            if (uVar13 < 2) {
              do {
                if ((undefined1 *)plVar17[1] == &DAT_613bd1694d6a9884) {
                  if ((undefined1 *)plVar17[2] == &DAT_613bd1694d6a9884) goto LAB_01bbce2c;
                }
                else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar15 + -1)) != puVar16)
                break;
                plVar17 = (long *)*plVar17;
              } while (plVar17 != (long *)0x0);
            }
            else {
              do {
                puVar18 = (undefined1 *)plVar17[1];
                if (puVar18 == &DAT_613bd1694d6a9884) {
                  if ((undefined1 *)plVar17[2] == &DAT_613bd1694d6a9884) goto LAB_01bbce2c;
                }
                else {
                  if (puVar15 <= puVar18) {
                    uVar13 = 0;
                    if (puVar15 != (undefined1 *)0x0) {
                      uVar13 = (ulong)puVar18 / (ulong)puVar15;
                    }
                    puVar18 = puVar18 + -(uVar13 * (long)puVar15);
                  }
                  if (puVar18 != puVar16) break;
                }
                plVar17 = (long *)*plVar17;
              } while (plVar17 != (long *)0x0);
            }
          }
        }
        goto joined_r0x01bbced0;
      }
      goto LAB_01bbcf48;
    }
    fVar23 = (float)(**(code **)(*local_90 + 0x198))();
    local_b8 = (long *)0xc6b6d7b7e5f56799;
    pcStack_b0 = "start_check_player_ground_hight";
    local_a8 = 0x1f;
    local_a0 = (long *)0x0;
    if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar21 = *(long *)puVar8;
    *(long *)puVar9 = lVar21;
    puVar15 = *(undefined1 **)(lVar21 + 0x60);
    fVar25 = 0.0;
    if (puVar15 != (undefined1 *)0x0) {
      uVar13 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        puVar16 = (undefined1 *)((ulong)(puVar15 + -1) & 0x613bd1694d6a9884);
      }
      else {
        puVar16 = &DAT_613bd1694d6a9884;
        if (puVar15 < (undefined1 *)0x613bd1694d6a9885) {
          uVar5 = 0;
          if (puVar15 != (undefined1 *)0x0) {
            uVar5 = 0x613bd1694d6a9884 / (ulong)puVar15;
          }
          puVar16 = &DAT_613bd1694d6a9884 + -(uVar5 * (long)puVar15);
        }
      }
      plVar17 = *(long **)(*(long *)(lVar21 + 0x58) + (long)puVar16 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar13 < 2) {
          do {
            if ((undefined1 *)plVar17[1] == &DAT_613bd1694d6a9884) {
              if ((undefined1 *)plVar17[2] == &DAT_613bd1694d6a9884) goto LAB_01bbc734;
            }
            else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar15 + -1)) != puVar16) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            puVar18 = (undefined1 *)plVar17[1];
            if (puVar18 == &DAT_613bd1694d6a9884) {
              if ((undefined1 *)plVar17[2] == &DAT_613bd1694d6a9884) goto LAB_01bbc734;
            }
            else {
              if (puVar15 <= puVar18) {
                uVar13 = 0;
                if (puVar15 != (undefined1 *)0x0) {
                  uVar13 = (ulong)puVar18 / (ulong)puVar15;
                }
                puVar18 = puVar18 + -(uVar13 * (long)puVar15);
              }
              if (puVar18 != puVar16) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    goto joined_r0x01bbc904;
  }
  goto LAB_01bbccac;
LAB_01bbce2c:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar2 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar20) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    fVar25 = (float)FUN_00d7905c(plVar17,&local_b8);
    do {
      iVar11 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar20) {
        *(int *)plVar2 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
joined_r0x01bbced0:
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (fVar23 <= fVar25) {
LAB_01bbcf48:
    bVar20 = false;
  }
  else {
    bVar20 = true;
  }
  if (local_c0 == (long *)0x0) {
LAB_01bbcf70:
    if (!bVar20) goto LAB_01bbc790;
    goto LAB_01bbcf74;
  }
  lVar21 = local_c0[0xb];
  piVar1 = (int *)(lVar21 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 + -1 != 0) goto LAB_01bbcf70;
  *(undefined8 *)(lVar21 + 0x18) = 0;
  (**(code **)(*local_c0 + 0x20))();
  if (bVar20) goto LAB_01bbcf74;
LAB_01bbc790:
  bVar20 = false;
  goto joined_r0x01bbcf7c;
LAB_01bbc734:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar2 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar20) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    fVar25 = (float)FUN_00d7905c(plVar17,&local_b8);
    do {
      iVar11 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar20) {
        *(int *)plVar2 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
joined_r0x01bbc904:
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (fVar23 <= fVar25) goto LAB_01bbc790;
LAB_01bbcf74:
  bVar20 = true;
joined_r0x01bbcf7c:
  if (local_98 != (long *)0x0) {
    lVar21 = local_98[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
  bVar20 = !bVar20;
  goto joined_r0x01bbc7c4;
}


