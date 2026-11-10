/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a55020; name: FUN_00a55020
 */


void FUN_00a55020(long param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  long *plVar9;
  long *plVar10;
  uint *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long extraout_x8;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  float extraout_s0;
  float extraout_var;
  long extraout_d0;
  float extraout_var_00;
  float extraout_var_02;
  long extraout_var_01;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  long *local_90;
  undefined1 auStack_88 [24];
  long *local_70;
  long *local_68;
  undefined1 auStack_60 [16];
  undefined1 local_50 [16];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  long *local_28;
  
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379578), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
  plVar9 = (long *)FUN_00954924();
  plVar10 = (long *)(**(code **)(**(long **)(param_1 + 0x68) + 0x70))();
  puVar11 = (uint *)FUN_009dfc38(param_1);
  uVar14 = plVar10[1];
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar2 = *puVar11;
    uVar13 = (ulong)uVar2;
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = (ulong)((int)uVar14 - 1U & uVar2);
    }
    else {
      uVar16 = uVar13;
      if (uVar14 <= uVar13) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = uVar13 / uVar14;
        }
        uVar16 = uVar13 - uVar16 * uVar14;
      }
    }
    plVar10 = *(long **)(*plVar10 + uVar16 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar10[1] == uVar13) {
            if (*(uint *)(plVar10 + 2) == uVar2) goto LAB_00a5513c;
          }
          else if ((plVar10[1] & uVar14 - 1) != uVar16) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar10[1];
          if (uVar15 == uVar13) {
            if (*(uint *)(plVar10 + 2) == uVar2) goto LAB_00a5513c;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar5 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  FUN_00a55cb0();
  lVar17 = extraout_x8;
LAB_00a554c0:
  *(undefined8 *)(lVar17 + 0x18) = 0;
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return;
LAB_00a5513c:
  uVar15 = plVar9[0x69];
  uVar2 = *(uint *)((long)plVar10 + 0x14);
  uVar14 = (ulong)uVar2;
  if ((uVar15 & uVar15 - 1) == 0) {
    plVar9 = *(long **)(plVar9[0x68] + (ulong)((int)uVar15 - 1U & uVar2) * 8);
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != uVar14);
    } while (*(uint *)(plVar9 + 2) != uVar2);
  }
  else {
    uVar13 = uVar14;
    if (uVar15 <= uVar14) {
      uVar13 = 0;
      if (uVar15 != 0) {
        uVar13 = uVar14 / uVar15;
      }
      uVar13 = uVar14 - uVar13 * uVar15;
    }
    plVar9 = *(long **)(plVar9[0x68] + uVar13 * 8);
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != uVar14);
    } while (*(uint *)(plVar9 + 2) != uVar2);
  }
  plVar9 = *(long **)((long)plVar9 + 0x18);
  if (plVar9 != (long *)0x0) {
    lVar17 = plVar9[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_00a55550;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_00aad3d4(&local_28,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c));
  local_68 = local_28;
  if (local_28 != (long *)0x0) {
    lVar17 = local_28[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_00a55550;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_02a47560(auStack_88,param_1 + 0x90);
  FUN_00aa90cc(*(undefined1 (*) [16])(param_1 + 0xa0),&local_68,auStack_88,
               *(undefined4 *)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0xb4),
               *(undefined1 *)(param_1 + 0xb5),&local_40,local_50,auStack_60);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    lVar17 = local_68[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  lVar17 = plVar9[0x1a];
  *(long *)(param_1 + 0xd8) = plVar9[0x1b];
  *(long *)(param_1 + 0xd0) = lVar17;
  auVar6 = *(undefined1 (*) [16])(local_28 + 0x1a);
  local_90 = local_28;
  local_40 = auVar6._0_4_ + local_40;
  fStack_3c = auVar6._4_4_ + fStack_3c;
  fStack_38 = auVar6._8_4_ + fStack_38;
  fStack_34 = auVar6._12_4_ + fStack_34;
  if (local_28 != (long *)0x0) {
    lVar17 = local_28[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_00a55550:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_00aabe2c(&local_90);
  local_40 = local_40 + extraout_s0;
  fStack_3c = fStack_3c + extraout_var;
  fStack_38 = fStack_38 + extraout_var_00;
  fStack_34 = fStack_34 + extraout_var_02;
  if (local_90 != (long *)0x0) {
    lVar17 = local_90[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  if (*(int *)(param_1 + 0xb0) != 100) {
    fVar22 = (float)*(int *)(param_1 + 0xb0) * 0.01;
    local_40 = *(float *)(plVar9 + 0x1a) + (local_40 - *(float *)(plVar9 + 0x1a)) * fVar22;
    fStack_3c = *(float *)((long)plVar9 + 0xd4) +
                (fStack_3c - *(float *)((long)plVar9 + 0xd4)) * fVar22;
    fStack_38 = *(float *)(plVar9 + 0x1b) + (fStack_38 - *(float *)(plVar9 + 0x1b)) * fVar22;
    fStack_34 = *(float *)((long)plVar9 + 0xdc) +
                (fStack_34 - *(float *)((long)plVar9 + 0xdc)) * fVar22;
  }
  if (*(char *)(param_1 + 0xb4) != '\0') {
    FUN_009a7ff4();
    *(undefined1 *)(plVar9 + 0x1c) = 1;
    plVar9[0x19] = extraout_var_01;
    plVar9[0x18] = extraout_d0;
  }
  auVar7 = *(undefined1 (*) [16])(plVar9 + 0x1a);
  auVar23[0] = -(*(char *)(param_1 + 0xbc) == '\0');
  auVar23[1] = auVar23[0];
  auVar23[2] = auVar23[0];
  auVar23[3] = auVar23[0];
  auVar23[4] = auVar23[0];
  auVar23[5] = auVar23[0];
  auVar23[6] = auVar23[0];
  auVar23[7] = auVar23[0];
  auVar23[8] = auVar23[0];
  auVar23[9] = auVar23[0];
  auVar23[10] = auVar23[0];
  auVar23[0xb] = auVar23[0];
  auVar23[0xc] = auVar23[0];
  auVar23[0xd] = auVar23[0];
  auVar23[0xe] = auVar23[0];
  auVar23[0xf] = auVar23[0];
  auVar6._4_4_ = auVar7._4_4_;
  auVar6._0_4_ = local_40;
  auVar6._8_8_ = auVar7._8_8_;
  auVar24._4_4_ = auVar7._4_4_;
  auVar24._0_4_ = local_40;
  auVar24._8_8_ = auVar7._8_8_;
  auVar24 = auVar24 ^ (auVar6 ^ auVar7) & auVar23;
  auVar20[0] = -(*(char *)(param_1 + 0xbd) == '\0');
  auVar20[1] = auVar20[0];
  auVar20[2] = auVar20[0];
  auVar20[3] = auVar20[0];
  auVar20[4] = auVar20[0];
  auVar20[5] = auVar20[0];
  auVar20[6] = auVar20[0];
  auVar20[7] = auVar20[0];
  auVar20[8] = auVar20[0];
  auVar20[9] = auVar20[0];
  auVar20[10] = auVar20[0];
  auVar20[0xb] = auVar20[0];
  auVar20[0xc] = auVar20[0];
  auVar20[0xd] = auVar20[0];
  auVar20[0xe] = auVar20[0];
  auVar20[0xf] = auVar20[0];
  auVar7._4_4_ = fStack_3c;
  auVar7._0_4_ = auVar24._0_4_;
  auVar7._8_8_ = auVar24._8_8_;
  auVar21._4_4_ = fStack_3c;
  auVar21._0_4_ = auVar24._0_4_;
  auVar21._8_8_ = auVar24._8_8_;
  auVar21 = auVar21 ^ (auVar7 ^ auVar24) & auVar20;
  auVar18[0] = -(*(char *)(param_1 + 0xbe) == '\0');
  auVar18[1] = auVar18[0];
  auVar18[2] = auVar18[0];
  auVar18[3] = auVar18[0];
  auVar18[4] = auVar18[0];
  auVar18[5] = auVar18[0];
  auVar18[6] = auVar18[0];
  auVar18[7] = auVar18[0];
  auVar18[8] = auVar18[0];
  auVar18[9] = auVar18[0];
  auVar18[10] = auVar18[0];
  auVar18[0xb] = auVar18[0];
  auVar18[0xc] = auVar18[0];
  auVar18[0xd] = auVar18[0];
  auVar18[0xe] = auVar18[0];
  auVar18[0xf] = auVar18[0];
  auVar19._8_4_ = fStack_38;
  auVar19._0_8_ = auVar21._0_8_;
  auVar19._12_4_ = 0;
  *(undefined1 *)(param_1 + 0xf1) = 1;
  auVar19 = auVar19 ^ (auVar19 ^ auVar21) & auVar18;
  *(long *)(param_1 + 0xe8) = auVar19._8_8_;
  *(long *)(param_1 + 0xe0) = auVar19._0_8_;
  if (local_28 != (long *)0x0) {
    lVar17 = local_28[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  lVar17 = plVar9[0xb];
  piVar1 = (int *)(lVar17 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 + -1 != 0) {
    return;
  }
  goto LAB_00a554c0;
}


