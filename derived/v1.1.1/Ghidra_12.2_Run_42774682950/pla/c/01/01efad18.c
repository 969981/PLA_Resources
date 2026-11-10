/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01efad18; name: FUN_01efad18
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_01efad18(long param_1,ulong param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  undefined1 uVar19;
  long lVar20;
  undefined8 *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 in_q3 [16];
  undefined8 uVar27;
  undefined8 uVar28;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  long *local_f0;
  long *local_e8;
  undefined1 *local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90 [2];
  long *local_78;
  
  puVar11 = PTR_DAT_043796e8;
  puVar10 = PTR_DAT_043796e0;
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  uVar28 = in_q3._8_8_;
  uVar15 = in_q3._0_8_;
  if ((param_2 & 1) != 0) {
    return true;
  }
  lVar20 = *(long *)(param_1 + 0x80);
  if ((lVar20 == 0) || (*(int *)(lVar20 + 0xc) == 0)) {
LAB_01efad50:
    plVar17 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar20 + 0xc);
    iVar12 = *(int *)(lVar20 + 0xc);
    do {
      puVar21 = *(undefined8 **)(lVar20 + 0x10);
      if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
          uVar16 = FUN_0087f8f0();
          *(undefined8 *)puVar9 = uVar16;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)puVar11 = puVar9;
        __cxa_guard_release(puVar10);
      }
      if (puVar21 == (undefined8 *)0x0) goto LAB_01efad50;
      while (puVar21 != (undefined8 *)puVar11) {
        puVar21 = (undefined8 *)*puVar21;
        plVar17 = (long *)0x0;
        if (puVar21 == (undefined8 *)0x0) goto LAB_01efad54;
      }
      iVar13 = *piVar1;
      if (iVar13 == iVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          plVar17 = (long *)0x0;
          if (*(long *)(lVar20 + 0x18) != 0) {
            plVar17 = (long *)(*(long *)(lVar20 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar17 = (long *)0x0;
      iVar12 = iVar13;
    } while (iVar13 != 0);
  }
LAB_01efad54:
  FUN_0199c138(local_90,plVar17);
  FUN_01aed8d0(&local_c0,local_90[0]);
  if (local_c0 == (long *)0x0) {
    local_98 = (long *)0x0;
LAB_01efad78:
    if (*(long *)(param_1 + 0xa8) == 0) goto LAB_01efad80;
LAB_01efb5c8:
    FUN_009b3e90(&local_a0);
  }
  else {
    FUN_0095dafc(&local_98);
    if (local_c0 == (long *)0x0) goto LAB_01efad78;
    plVar18 = local_c0 + 1;
    do {
      iVar12 = (int)*plVar18 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 != 0) goto LAB_01efad78;
    local_c0[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar20 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar20;
    local_e0 = (undefined1 *)*local_c0;
    FUN_02a44274(lVar20 + 0xd8,&local_e0);
    if (*(long *)(param_1 + 0xa8) != 0) goto LAB_01efb5c8;
LAB_01efad80:
    local_a0 = (long *)0x0;
  }
  local_c0 = (long *)0x0;
  pcStack_b8 = (char *)0x0;
  FUN_009ab200(&local_c0,local_a0 + 0x68);
  plVar2 = local_c0;
  plVar18 = (long *)0x0;
  if (local_c0 != (long *)0x0) {
    if (*(int *)((long)local_c0 + 0xc) != 0) {
      piVar1 = (int *)((long)local_c0 + 0xc);
      iVar12 = *(int *)((long)local_c0 + 0xc);
      do {
        plVar18 = (long *)plVar2[2];
        lVar20 = FUN_009ccde4();
        while( true ) {
          if (plVar18 == (long *)0x0) goto LAB_01efb548;
          if (plVar18 == (long *)lVar20) break;
          plVar18 = (long *)*plVar18;
        }
        iVar13 = *piVar1;
        if (iVar13 == iVar12) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar20 = plVar2[3];
            plVar18 = (long *)0x0;
            plVar2 = local_c0;
            if (lVar20 != 0) {
              plVar18 = (long *)(lVar20 + -0x50);
            }
            goto joined_r0x01efb4b8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar13;
      } while (iVar13 != 0);
    }
LAB_01efb548:
    plVar18 = (long *)0x0;
    plVar2 = local_c0;
joined_r0x01efb4b8:
    local_c0 = plVar2;
    if (plVar2 != (long *)0x0) {
      plVar3 = plVar2 + 1;
      do {
        iVar12 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        plVar2[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar20 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar20;
        local_e0 = (undefined1 *)*plVar2;
        FUN_02a44274(lVar20 + 0xd8,&local_e0);
      }
    }
  }
  FUN_009c69bc(&local_c0,local_98);
  (**(code **)(*local_c0 + 0x40))();
  uVar16 = uVar15;
  uVar27 = uVar28;
  if (local_c0 != (long *)0x0) {
    lVar20 = local_c0[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_c0 + 0x20))();
    }
  }
  FUN_009c69bc(&local_c0,plVar18);
  (**(code **)(*local_c0 + 0x40))();
  if (local_c0 != (long *)0x0) {
    lVar20 = local_c0[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_c0 + 0x20))();
    }
  }
  FUN_01aeda18(&local_c0,local_90[0]);
  if (local_c0 == (long *)0x0) {
    local_78 = (long *)0x0;
LAB_01efae44:
    if (local_78 == (long *)0x0) goto LAB_01efae4c;
LAB_01efb648:
    iVar12 = FUN_0267081c();
    if (iVar12 != 4) {
      if (iVar12 == 3) goto LAB_01efb690;
      if (iVar12 != 1) goto LAB_01efae74;
      uVar14 = (**(code **)(*local_78 + 0x150))();
      goto joined_r0x01efae70;
    }
    uVar14 = (**(code **)(*local_78 + 0x158))();
    if ((uVar14 & 1) != 0) goto LAB_01efb690;
LAB_01efae74:
    if (local_78 != (long *)0x0) {
      lVar20 = local_78[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
      }
    }
    puVar8 = PTR_DAT_04379660;
    local_110 = (float)uVar16;
    fStack_10c = (float)((ulong)uVar16 >> 0x20);
    fStack_108 = (float)uVar27;
    fStack_104 = (float)((ulong)uVar27 >> 0x20);
    fVar24 = (float)((ulong)uVar15 >> 0x20);
    fVar22 = (float)uVar15 - local_110;
    fVar25 = fVar24 - fStack_10c;
    fStack_108 = (float)uVar28 - fStack_108;
    fStack_104 = (float)((ulong)uVar28 >> 0x20) - fStack_104;
    fVar22 = fVar22 * fVar22;
    fVar25 = fVar25 * fVar25;
    fStack_108 = fStack_108 * fStack_108;
    fStack_104 = fStack_104 * fStack_104;
    auVar26._4_4_ = fVar25;
    auVar26._0_4_ = fVar22;
    auVar26._8_4_ = fStack_108;
    auVar26._12_4_ = fStack_104;
    auVar7._4_4_ = fVar25;
    auVar7._0_4_ = fVar22;
    auVar7._8_4_ = fStack_108;
    auVar7._12_4_ = fStack_104;
    auVar26 = NEON_ext(auVar26,auVar7,8,1);
    local_b0 = 0xc;
    local_a8 = (long *)0x0;
    local_e0 = (undefined1 *)0xa902d329628cf35a;
    pcStack_d8 = "start_check_target_player_distance";
    local_c0 = (long *)&DAT_613bd1694d6a9884;
    pcStack_b8 = "battle_start";
    local_d0 = 0x22;
    local_c8 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar10 = PTR_DAT_04379670;
    puVar9 = PTR_DAT_04379668;
    uVar15 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar15;
    FUN_00d7d9e4(&local_78,uVar15,&local_c0);
    if (local_78 == (long *)0x0) {
      fVar23 = 0.0;
    }
    else {
      fVar23 = (float)FUN_00d7905c(local_78,&local_e0);
      if (local_78 != (long *)0x0) {
        plVar2 = local_78 + 10;
        do {
          iVar12 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
      }
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (SQRT(auVar26._0_4_ + fVar22 + auVar26._4_4_ + fVar25) <= fVar23) {
      local_b0 = 0xc;
      local_a8 = (long *)0x0;
      local_e0 = &DAT_7280f8de68026c53;
      pcStack_d8 = "start_check_target_player_hight_diff";
      local_c0 = (long *)&DAT_613bd1694d6a9884;
      pcStack_b8 = "battle_start";
      local_d0 = 0x24;
      local_c8 = (long *)0x0;
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      uVar15 = *(undefined8 *)puVar9;
      *(undefined8 *)puVar10 = uVar15;
      FUN_00d7d9e4(&local_78,uVar15,&local_c0);
      if (local_78 == (long *)0x0) {
        fVar22 = 0.0;
      }
      else {
        fVar22 = (float)FUN_00d7905c(local_78,&local_e0);
        if (local_78 != (long *)0x0) {
          plVar2 = local_78 + 10;
          do {
            iVar12 = (int)*plVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar12;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*local_78 + 0x10))();
          }
        }
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))(local_110);
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      if (ABS(fVar24 - fStack_10c) <= fVar22) {
        FUN_01aeda18(&local_c0,local_90[0]);
        if (local_c0 == (long *)0x0) {
          local_e8 = (long *)0x0;
LAB_01efb084:
          if (local_e8 == (long *)0x0) goto LAB_01efb08c;
LAB_01efb74c:
          local_c0 = (long *)0x0;
          pcStack_b8 = (char *)0x0;
          FUN_00ac3fa4(&local_c0,local_e8 + 0x49);
          if (local_c0 == (long *)0x0) {
            local_f0 = (long *)0x0;
LAB_01efb768:
            if (local_f0 == (long *)0x0) goto LAB_01efb830;
LAB_01efb770:
            fVar22 = (float)(**(code **)(*local_f0 + 0x198))();
            local_b0 = 0xc;
            local_a8 = (long *)0x0;
            local_e0 = (undefined1 *)0xc6b6d7b7e5f56799;
            pcStack_d8 = "start_check_player_ground_hight";
            local_c0 = (long *)&DAT_613bd1694d6a9884;
            pcStack_b8 = "battle_start";
            local_d0 = 0x1f;
            local_c8 = (long *)0x0;
            if (((*puVar8 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379660);
            }
            uVar15 = *(undefined8 *)puVar9;
            *(undefined8 *)puVar10 = uVar15;
            FUN_00d7d9e4(&local_78,uVar15,&local_c0);
            if (local_78 == (long *)0x0) {
              fVar24 = 0.0;
            }
            else {
              fVar24 = (float)FUN_00d7905c(local_78,&local_e0);
              if (local_78 != (long *)0x0) {
                plVar2 = local_78 + 10;
                do {
                  iVar12 = (int)*plVar2 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar5) {
                    *(int *)plVar2 = iVar12;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar12 == 0) {
                  (**(code **)(*local_78 + 0x10))();
                }
              }
            }
            if (local_c8 != (long *)0x0) {
              (**(code **)(*local_c8 + 0x20))();
            }
            if (local_a8 != (long *)0x0) {
              (**(code **)(*local_a8 + 0x20))();
            }
            if (fVar22 <= fVar24) goto LAB_01efb830;
            bVar5 = true;
          }
          else {
            FUN_0095a0ac(&local_f0);
            plVar2 = local_c0;
            if (local_c0 == (long *)0x0) goto LAB_01efb768;
            plVar3 = local_c0 + 1;
            do {
              iVar12 = (int)*plVar3 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar5) {
                *(int *)plVar3 = iVar12;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar12 != 0) goto LAB_01efb768;
            local_c0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar20 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar20;
            local_e0 = (undefined1 *)*plVar2;
            FUN_02a44274(lVar20 + 0xd8,&local_e0);
            if (local_f0 != (long *)0x0) goto LAB_01efb770;
LAB_01efb830:
            bVar5 = false;
          }
          if (local_f0 != (long *)0x0) {
            lVar20 = local_f0[0xb];
            piVar1 = (int *)(lVar20 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar20 + 0x18) = 0;
              (**(code **)(*local_f0 + 0x20))();
            }
          }
          if (bVar5) goto LAB_01efb85c;
LAB_01efb150:
          bVar5 = false;
        }
        else {
          FUN_00959eac(&local_e8);
          plVar2 = local_c0;
          if (local_c0 == (long *)0x0) goto LAB_01efb084;
          plVar3 = local_c0 + 1;
          do {
            iVar12 = (int)*plVar3 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *(int *)plVar3 = iVar12;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 != 0) goto LAB_01efb084;
          local_c0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar20 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar20;
          local_e0 = (undefined1 *)*plVar2;
          FUN_02a44274(lVar20 + 0xd8,&local_e0);
          if (local_e8 != (long *)0x0) goto LAB_01efb74c;
LAB_01efb08c:
          fVar22 = (float)(**(code **)(*local_98 + 0x198))();
          local_b0 = 0xc;
          local_a8 = (long *)0x0;
          local_e0 = (undefined1 *)0xc6b6d7b7e5f56799;
          pcStack_d8 = "start_check_player_ground_hight";
          local_c0 = (long *)&DAT_613bd1694d6a9884;
          pcStack_b8 = "battle_start";
          local_d0 = 0x1f;
          local_c8 = (long *)0x0;
          if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0))
          {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          uVar15 = *(undefined8 *)puVar9;
          *(undefined8 *)puVar10 = uVar15;
          FUN_00d7d9e4(&local_78,uVar15,&local_c0);
          if (local_78 == (long *)0x0) {
            fVar24 = 0.0;
          }
          else {
            fVar24 = (float)FUN_00d7905c(local_78,&local_e0);
            if (local_78 != (long *)0x0) {
              plVar2 = local_78 + 10;
              do {
                iVar12 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar12;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar12 == 0) {
                (**(code **)(*local_78 + 0x10))();
              }
            }
          }
          if (local_c8 != (long *)0x0) {
            (**(code **)(*local_c8 + 0x20))();
          }
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          if (fVar22 <= fVar24) goto LAB_01efb150;
LAB_01efb85c:
          bVar5 = true;
        }
        if (local_e8 != (long *)0x0) {
          lVar20 = local_e8[0xb];
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar20 + 0x18) = 0;
            (**(code **)(*local_e8 + 0x20))();
          }
        }
        uVar19 = !bVar5;
        goto joined_r0x01efb6d4;
      }
    }
  }
  else {
    FUN_00959eac(&local_78);
    plVar2 = local_c0;
    if (local_c0 == (long *)0x0) goto LAB_01efae44;
    plVar3 = local_c0 + 1;
    do {
      iVar12 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 != 0) goto LAB_01efae44;
    local_c0[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar20 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar20;
    local_e0 = (undefined1 *)*plVar2;
    FUN_02a44274(lVar20 + 0xd8,&local_e0);
    if (local_78 != (long *)0x0) goto LAB_01efb648;
LAB_01efae4c:
    uVar14 = (**(code **)(*local_98 + 0x218))();
    if ((uVar14 & 1) == 0) {
      uVar14 = (**(code **)(*local_98 + 0x228))();
joined_r0x01efae70:
      if ((uVar14 & 1) == 0) goto LAB_01efae74;
    }
LAB_01efb690:
    if (local_78 != (long *)0x0) {
      lVar20 = local_78[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
        uVar19 = false;
        goto joined_r0x01efb6d4;
      }
    }
  }
  uVar19 = false;
joined_r0x01efb6d4:
  if (plVar18 != (long *)0x0) {
    lVar20 = plVar18[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  if (local_a0 != (long *)0x0) {
    lVar20 = *(long *)((long)local_a0 + 0x58);
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  if (local_98 != (long *)0x0) {
    lVar20 = *(long *)((long)local_98 + 0x58);
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
  if (local_90[0] != (long *)0x0) {
    lVar20 = *(long *)((long)local_90[0] + 0x58);
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_90[0] + 0x20))();
    }
  }
  if (plVar17 != (long *)0x0) {
    lVar20 = plVar17[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  return (bool)uVar19;
}


