/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a52b50; name: FUN_00a52b50
 */


void FUN_00a52b50(long param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  long lVar9;
  long *plVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long extraout_x8;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  float extraout_s0;
  float extraout_var;
  long extraout_d0;
  float extraout_var_00;
  undefined1 auVar20 [16];
  float extraout_var_02;
  long extraout_var_01;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar28;
  long *local_a0;
  undefined1 local_98 [24];
  long *local_80;
  long *local_78;
  long local_70;
  long local_68;
  undefined1 local_60 [16];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  long *local_38;
  
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379578), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
  lVar9 = FUN_00954924();
  plVar10 = (long *)(**(code **)(**(long **)(param_1 + 0x68) + 0x70))();
  puVar11 = (uint *)FUN_009dfc38(param_1);
  uVar15 = plVar10[1];
  if (uVar15 != 0) {
    uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar2 = *puVar11;
    uVar14 = (ulong)uVar2;
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = (ulong)((int)uVar15 - 1U & uVar2);
    }
    else {
      uVar17 = uVar14;
      if (uVar15 <= uVar14) {
        uVar17 = 0;
        if (uVar15 != 0) {
          uVar17 = uVar14 / uVar15;
        }
        uVar17 = uVar14 - uVar17 * uVar15;
      }
    }
    plVar18 = *(long **)(*plVar10 + uVar17 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar18[1] == uVar14) {
            if (*(uint *)(plVar18 + 2) == uVar2) goto LAB_00a52c70;
          }
          else if ((plVar18[1] & uVar15 - 1) != uVar17) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar18[1];
          if (uVar16 == uVar14) {
            if (*(uint *)(plVar18 + 2) == uVar2) goto LAB_00a52c70;
          }
          else {
            if (uVar15 <= uVar16) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar16 / uVar15;
              }
              uVar16 = uVar16 - uVar5 * uVar15;
            }
            if (uVar16 != uVar17) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  FUN_00a53830();
  lVar9 = extraout_x8;
LAB_00a53044:
  *(undefined8 *)(lVar9 + 0x18) = 0;
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return;
LAB_00a52c70:
  uVar16 = *(ulong *)(lVar9 + 0x348);
  uVar2 = *(uint *)((long)plVar18 + 0x14);
  uVar15 = (ulong)uVar2;
  if ((uVar16 & uVar16 - 1) == 0) {
    plVar10 = *(long **)(*(long *)(lVar9 + 0x340) + (ulong)((int)uVar16 - 1U & uVar2) * 8);
    do {
      do {
        plVar10 = (long *)*plVar10;
      } while (plVar10[1] != uVar15);
    } while (*(uint *)(plVar10 + 2) != uVar2);
  }
  else {
    uVar14 = uVar15;
    if (uVar16 <= uVar15) {
      uVar14 = 0;
      if (uVar16 != 0) {
        uVar14 = uVar15 / uVar16;
      }
      uVar14 = uVar15 - uVar14 * uVar16;
    }
    plVar10 = *(long **)(*(long *)(lVar9 + 0x340) + uVar14 * 8);
    do {
      do {
        plVar10 = (long *)*plVar10;
      } while (plVar10[1] != uVar15);
    } while (*(uint *)(plVar10 + 2) != uVar2);
  }
  plVar10 = *(long **)((long)plVar10 + 0x18);
  if (plVar10 != (long *)0x0) {
    lVar19 = plVar10[0xb];
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_00a530d4;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_00aad37c(&local_38,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c));
  if (*(char *)(param_1 + 0xb4) == '\0') {
    uVar12 = 0x3f800000;
    uVar28 = 0;
  }
  else {
    local_98[0] = FUN_00aad3a8(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c));
    auVar20 = FUN_0099d50c(lVar9,local_98);
    uVar28 = auVar20._8_8_;
    uVar12 = auVar20._0_8_;
  }
  local_78 = local_38;
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_00a530d4;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_02a47560(local_98,param_1 + 0x90);
  auVar20._8_8_ = uVar28;
  auVar20._0_8_ = uVar12;
  FUN_00aa8430(*(undefined1 (*) [16])(param_1 + 0xa0),auVar20,&local_78,local_98,
               *(undefined4 *)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0xb4),
               *(undefined1 *)(param_1 + 0xb5),*(undefined1 *)(param_1 + 0xb6),&local_50,local_60,
               &local_70);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    lVar9 = local_78[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  auVar20 = *(undefined1 (*) [16])(plVar10 + 0x1a);
  *(long *)(param_1 + 0xd8) = auVar20._8_8_;
  *(long *)(param_1 + 0xd0) = auVar20._0_8_;
  local_a0 = local_38;
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_00a530d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_00aabe2c(&local_a0);
  local_50 = local_50 + extraout_s0;
  fStack_4c = fStack_4c + extraout_var;
  fStack_48 = fStack_48 + extraout_var_00;
  fStack_44 = fStack_44 + extraout_var_02;
  if (local_a0 != (long *)0x0) {
    lVar9 = local_a0[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  if (*(int *)(param_1 + 0xb0) != 100) {
    fVar25 = (float)*(int *)(param_1 + 0xb0) * 0.01;
    local_50 = *(float *)(plVar10 + 0x1a) + (local_50 - *(float *)(plVar10 + 0x1a)) * fVar25;
    fStack_4c = *(float *)((long)plVar10 + 0xd4) +
                (fStack_4c - *(float *)((long)plVar10 + 0xd4)) * fVar25;
    fStack_48 = *(float *)(plVar10 + 0x1b) + (fStack_48 - *(float *)(plVar10 + 0x1b)) * fVar25;
    fStack_44 = *(float *)((long)plVar10 + 0xdc) +
                (fStack_44 - *(float *)((long)plVar10 + 0xdc)) * fVar25;
  }
  if (*(char *)(param_1 + 0xb5) != '\0') {
    FUN_009a7ff4();
    *(undefined1 *)(plVar10 + 0x1c) = 1;
    plVar10[0x19] = extraout_var_01;
    plVar10[0x18] = extraout_d0;
  }
  if (*(char *)(param_1 + 0xb4) != '\0') {
    plVar10[0x17] = local_68;
    plVar10[0x16] = local_70;
    *(undefined1 *)(plVar10 + 0x1c) = 1;
  }
  auVar20 = *(undefined1 (*) [16])(plVar10 + 0x1a);
  auVar26[0] = -(*(char *)(param_1 + 0xbc) == '\0');
  auVar26[1] = auVar26[0];
  auVar26[2] = auVar26[0];
  auVar26[3] = auVar26[0];
  auVar26[4] = auVar26[0];
  auVar26[5] = auVar26[0];
  auVar26[6] = auVar26[0];
  auVar26[7] = auVar26[0];
  auVar26[8] = auVar26[0];
  auVar26[9] = auVar26[0];
  auVar26[10] = auVar26[0];
  auVar26[0xb] = auVar26[0];
  auVar26[0xc] = auVar26[0];
  auVar26[0xd] = auVar26[0];
  auVar26[0xe] = auVar26[0];
  auVar26[0xf] = auVar26[0];
  auVar6._4_4_ = auVar20._4_4_;
  auVar6._0_4_ = local_50;
  auVar6._8_8_ = auVar20._8_8_;
  auVar27._4_4_ = auVar20._4_4_;
  auVar27._0_4_ = local_50;
  auVar27._8_8_ = auVar20._8_8_;
  auVar27 = auVar27 ^ (auVar6 ^ auVar20) & auVar26;
  auVar23[0] = -(*(char *)(param_1 + 0xbd) == '\0');
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
  auVar7._4_4_ = fStack_4c;
  auVar7._0_4_ = auVar27._0_4_;
  auVar7._8_8_ = auVar27._8_8_;
  auVar24._4_4_ = fStack_4c;
  auVar24._0_4_ = auVar27._0_4_;
  auVar24._8_8_ = auVar27._8_8_;
  auVar24 = auVar24 ^ (auVar7 ^ auVar27) & auVar23;
  auVar21[0] = -(*(char *)(param_1 + 0xbe) == '\0');
  auVar21[1] = auVar21[0];
  auVar21[2] = auVar21[0];
  auVar21[3] = auVar21[0];
  auVar21[4] = auVar21[0];
  auVar21[5] = auVar21[0];
  auVar21[6] = auVar21[0];
  auVar21[7] = auVar21[0];
  auVar21[8] = auVar21[0];
  auVar21[9] = auVar21[0];
  auVar21[10] = auVar21[0];
  auVar21[0xb] = auVar21[0];
  auVar21[0xc] = auVar21[0];
  auVar21[0xd] = auVar21[0];
  auVar21[0xe] = auVar21[0];
  auVar21[0xf] = auVar21[0];
  auVar22._8_4_ = fStack_48;
  auVar22._0_8_ = auVar24._0_8_;
  auVar22._12_4_ = 0;
  *(undefined1 *)(param_1 + 0xf1) = 1;
  auVar22 = auVar22 ^ (auVar22 ^ auVar24) & auVar21;
  *(long *)(param_1 + 0xe8) = auVar22._8_8_;
  *(long *)(param_1 + 0xe0) = auVar22._0_8_;
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  lVar9 = plVar10[0xb];
  piVar1 = (int *)(lVar9 + 0xc);
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
  goto LAB_00a53044;
}


