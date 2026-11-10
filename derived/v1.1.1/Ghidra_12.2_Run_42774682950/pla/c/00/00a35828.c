/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a35828; name: FUN_00a35828
 */


void FUN_00a35828(long param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 uVar9;
  int extraout_w8;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *unaff_x20;
  long *plVar16;
  float extraout_s0;
  float extraout_var;
  long extraout_d0;
  float extraout_var_00;
  float extraout_var_02;
  long extraout_var_01;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long *local_a0;
  undefined1 auStack_98 [24];
  long *local_80;
  long *local_78;
  undefined1 auStack_70 [16];
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
  lVar10 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar10;
  plVar16 = *(long **)(lVar10 + 200);
  lVar10 = (**(code **)(**(long **)(param_1 + 0x68) + 0x70))();
  uVar12 = *(ulong *)(lVar10 + 0xd8);
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar2 = *(uint *)(*(long *)(param_1 + 0x70) + 0x70);
    uVar11 = (ulong)uVar2;
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = (ulong)((int)uVar12 - 1U & uVar2);
    }
    else {
      uVar14 = uVar11;
      if (uVar12 <= uVar11) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = uVar11 / uVar12;
        }
        uVar14 = uVar11 - uVar14 * uVar12;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar10 + 0xd0) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == uVar11) {
            if (*(uint *)(plVar15 + 2) == uVar2) goto LAB_00a35938;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == uVar11) {
            if (*(uint *)(plVar15 + 2) == uVar2) goto LAB_00a35938;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar5 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_00a35e60:
  FUN_00a366a0();
  iVar8 = extraout_w8;
LAB_00a35e64:
  fVar21 = (float)iVar8 * 0.01;
  local_50 = *(float *)(param_1 + 0xd0) + (local_50 - *(float *)(param_1 + 0xd0)) * fVar21;
  fStack_4c = *(float *)(param_1 + 0xd4) + (fStack_4c - *(float *)(param_1 + 0xd4)) * fVar21;
  fStack_48 = *(float *)(param_1 + 0xd8) + (fStack_48 - *(float *)(param_1 + 0xd8)) * fVar21;
  fStack_44 = *(float *)(param_1 + 0xdc) + (fStack_44 - *(float *)(param_1 + 0xdc)) * fVar21;
  cVar3 = *(char *)(param_1 + 0xb4);
joined_r0x00a35cd0:
  if (cVar3 != '\0') {
    FUN_009a7ff4();
    *(undefined1 *)(unaff_x20 + 0x1c) = 1;
    unaff_x20[0x19] = extraout_var_01;
    unaff_x20[0x18] = extraout_d0;
  }
  auVar7 = *(undefined1 (*) [16])(param_1 + 0xd0);
  auVar22[0] = -(*(char *)(param_1 + 0xbc) == '\0');
  auVar22[1] = auVar22[0];
  auVar22[2] = auVar22[0];
  auVar22[3] = auVar22[0];
  auVar22[4] = auVar22[0];
  auVar22[5] = auVar22[0];
  auVar22[6] = auVar22[0];
  auVar22[7] = auVar22[0];
  auVar22[8] = auVar22[0];
  auVar22[9] = auVar22[0];
  auVar22[10] = auVar22[0];
  auVar22[0xb] = auVar22[0];
  auVar22[0xc] = auVar22[0];
  auVar22[0xd] = auVar22[0];
  auVar22[0xe] = auVar22[0];
  auVar22[0xf] = auVar22[0];
  auVar6._4_4_ = auVar7._4_4_;
  auVar6._0_4_ = local_50;
  auVar6._8_8_ = auVar7._8_8_;
  auVar23._4_4_ = auVar7._4_4_;
  auVar23._0_4_ = local_50;
  auVar23._8_8_ = auVar7._8_8_;
  auVar23 = auVar23 ^ (auVar6 ^ auVar7) & auVar22;
  auVar19[0] = -(*(char *)(param_1 + 0xbd) == '\0');
  auVar19[1] = auVar19[0];
  auVar19[2] = auVar19[0];
  auVar19[3] = auVar19[0];
  auVar19[4] = auVar19[0];
  auVar19[5] = auVar19[0];
  auVar19[6] = auVar19[0];
  auVar19[7] = auVar19[0];
  auVar19[8] = auVar19[0];
  auVar19[9] = auVar19[0];
  auVar19[10] = auVar19[0];
  auVar19[0xb] = auVar19[0];
  auVar19[0xc] = auVar19[0];
  auVar19[0xd] = auVar19[0];
  auVar19[0xe] = auVar19[0];
  auVar19[0xf] = auVar19[0];
  auVar7._4_4_ = fStack_4c;
  auVar7._0_4_ = auVar23._0_4_;
  auVar7._8_8_ = auVar23._8_8_;
  auVar20._4_4_ = fStack_4c;
  auVar20._0_4_ = auVar23._0_4_;
  auVar20._8_8_ = auVar23._8_8_;
  auVar20 = auVar20 ^ (auVar7 ^ auVar23) & auVar19;
  auVar17[0] = -(*(char *)(param_1 + 0xbe) == '\0');
  auVar17[1] = auVar17[0];
  auVar17[2] = auVar17[0];
  auVar17[3] = auVar17[0];
  auVar17[4] = auVar17[0];
  auVar17[5] = auVar17[0];
  auVar17[6] = auVar17[0];
  auVar17[7] = auVar17[0];
  auVar17[8] = auVar17[0];
  auVar17[9] = auVar17[0];
  auVar17[10] = auVar17[0];
  auVar17[0xb] = auVar17[0];
  auVar17[0xc] = auVar17[0];
  auVar17[0xd] = auVar17[0];
  auVar17[0xe] = auVar17[0];
  auVar17[0xf] = auVar17[0];
  auVar18._8_4_ = fStack_48;
  auVar18._0_8_ = auVar20._0_8_;
  auVar18._12_4_ = 0;
  *(undefined1 *)(param_1 + 0xf1) = 1;
  auVar18 = auVar18 ^ (auVar18 ^ auVar20) & auVar17;
  *(long *)(param_1 + 0xe8) = auVar18._8_8_;
  *(long *)(param_1 + 0xe0) = auVar18._0_8_;
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  lVar10 = plVar16[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
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
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  if (unaff_x20 != (long *)0x0) {
    lVar10 = unaff_x20[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*unaff_x20 + 0x20))(unaff_x20);
    }
  }
  return;
LAB_00a35938:
  uVar13 = plVar16[0x69];
  uVar2 = *(uint *)((long)plVar15 + 0x14);
  uVar12 = (ulong)uVar2;
  if ((uVar13 & uVar13 - 1) == 0) {
    plVar15 = *(long **)(plVar16[0x68] + (ulong)((int)uVar13 - 1U & uVar2) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != uVar12);
    } while (*(uint *)(plVar15 + 2) != uVar2);
  }
  else {
    uVar11 = uVar12;
    if (uVar13 <= uVar12) {
      uVar11 = 0;
      if (uVar13 != 0) {
        uVar11 = uVar12 / uVar13;
      }
      uVar11 = uVar12 - uVar11 * uVar13;
    }
    plVar15 = *(long **)(plVar16[0x68] + uVar11 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (plVar15[1] != uVar12);
    } while (*(uint *)(plVar15 + 2) != uVar2);
  }
  unaff_x20 = *(long **)((long)plVar15 + 0x18);
  if (unaff_x20 != (long *)0x0) {
    lVar10 = unaff_x20[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00a35f48;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar10 = (**(code **)(**(long **)(param_1 + 0x68) + 0x70))();
  uVar12 = *(ulong *)(lVar10 + 0x140);
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar2 = *(uint *)(*(long *)(param_1 + 0x70) + 0x70);
    uVar11 = (ulong)uVar2;
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = (ulong)((int)uVar12 - 1U & uVar2);
    }
    else {
      uVar14 = uVar11;
      if (uVar12 <= uVar11) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = uVar11 / uVar12;
        }
        uVar14 = uVar11 - uVar14 * uVar12;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar10 + 0x138) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == uVar11) {
            if (*(uint *)(plVar15 + 2) == uVar2) goto LAB_00a35ac0;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == uVar11) {
            if (*(uint *)(plVar15 + 2) == uVar2) goto LAB_00a35ac0;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar5 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_00a35e60;
LAB_00a35ac0:
  uVar13 = plVar16[0x78];
  uVar2 = *(uint *)((long)plVar15 + 0x14);
  uVar12 = (ulong)uVar2;
  if ((uVar13 & uVar13 - 1) == 0) {
    plVar16 = *(long **)(plVar16[0x77] + (ulong)((int)uVar13 - 1U & uVar2) * 8);
    do {
      do {
        plVar16 = (long *)*plVar16;
      } while (plVar16[1] != uVar12);
    } while (*(uint *)(plVar16 + 2) != uVar2);
  }
  else {
    uVar11 = uVar12;
    if (uVar13 <= uVar12) {
      uVar11 = 0;
      if (uVar13 != 0) {
        uVar11 = uVar12 / uVar13;
      }
      uVar11 = uVar12 - uVar11 * uVar13;
    }
    plVar16 = *(long **)(plVar16[0x77] + uVar11 * 8);
    do {
      do {
        plVar16 = (long *)*plVar16;
      } while (plVar16[1] != uVar12);
    } while (*(uint *)(plVar16 + 2) != uVar2);
  }
  plVar16 = *(long **)((long)plVar16 + 0x18);
  if (plVar16 != (long *)0x0) {
    lVar10 = plVar16[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00a35f48;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_00aad3d4(&local_38,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c));
  local_78 = local_38;
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00a35f48;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_02a47560(auStack_98,param_1 + 0x90);
  FUN_00aa90cc(*(undefined1 (*) [16])(param_1 + 0xa0),&local_78,auStack_98,
               *(undefined4 *)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0xb4),
               *(undefined1 *)(param_1 + 0xb5),&local_50,local_60,auStack_70);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    lVar10 = local_78[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  auVar6 = *(undefined1 (*) [16])(plVar16 + 0x5e);
  *(long *)(param_1 + 0xd8) = auVar6._8_8_;
  *(long *)(param_1 + 0xd0) = auVar6._0_8_;
  local_a0 = local_38;
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_00a35f48:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar10 + 0xc);
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
    lVar10 = local_a0[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  iVar8 = *(int *)(param_1 + 0xb0);
  if (iVar8 == 100) {
    cVar3 = *(char *)(param_1 + 0xb4);
    goto joined_r0x00a35cd0;
  }
  goto LAB_00a35e64;
}


