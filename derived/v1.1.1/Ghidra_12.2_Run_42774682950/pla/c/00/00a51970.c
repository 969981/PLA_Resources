/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a51970; name: FUN_00a51970
 */


void FUN_00a51970(long param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  long *plVar8;
  long *plVar9;
  uint *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long extraout_d0;
  long extraout_var;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  char cVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined1 auStack_60 [16];
  float local_50;
  float fStack_4c;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379578), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
  plVar8 = (long *)FUN_00954924();
  plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x68) + 0x70))();
  puVar10 = (uint *)FUN_009dfc38(param_1);
  uVar14 = plVar9[1];
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar2 = *puVar10;
    uVar12 = (ulong)uVar2;
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = (ulong)((int)uVar14 - 1U & uVar2);
    }
    else {
      uVar16 = uVar12;
      if (uVar14 <= uVar12) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = uVar12 / uVar14;
        }
        uVar16 = uVar12 - uVar16 * uVar14;
      }
    }
    plVar17 = *(long **)(*plVar9 + uVar16 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar17[1] == uVar12) {
            if (*(uint *)(plVar17 + 2) == uVar2) goto LAB_00a51a8c;
          }
          else if ((plVar17[1] & uVar14 - 1) != uVar16) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar17[1];
          if (uVar15 == uVar12) {
            if (*(uint *)(plVar17 + 2) == uVar2) goto LAB_00a51a8c;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar4 = 0;
              if (uVar14 != 0) {
                uVar4 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar4 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
LAB_00a51f28:
  plVar17 = (long *)FUN_00a525e0();
LAB_00a51f2c:
  (**(code **)(*plVar17 + 0x18))();
joined_r0x00a51cfc:
  local_88 = plVar8;
  if (plVar8 != (long *)0x0) {
    lVar13 = plVar8[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_00a52034:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar20 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
  }
  FUN_00aa90cc(*(undefined1 (*) [16])(param_1 + 0x90),&local_88,&local_80,
               *(undefined4 *)(param_1 + 0xa0),*(undefined1 *)(param_1 + 0xa4),
               *(undefined1 *)(param_1 + 0xa5),&local_40,&local_50,auStack_60);
  if (local_88 != (long *)0x0) {
    lVar13 = local_88[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar20 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  lVar13 = plVar9[0x1a];
  *(long *)(param_1 + 200) = plVar9[0x1b];
  *(long *)(param_1 + 0xc0) = lVar13;
  local_40 = *(float *)(plVar8 + 0x1a) + local_40;
  fStack_3c = *(float *)((long)plVar8 + 0xd4) + fStack_3c;
  fStack_38 = *(float *)(plVar8 + 0x1b) + fStack_38;
  fStack_34 = *(float *)((long)plVar8 + 0xdc) + fStack_34;
  if (*(int *)(param_1 + 0xa0) == 100) {
    cVar20 = *(char *)(param_1 + 0xa4);
  }
  else {
    fVar21 = (float)plVar9[0x1a];
    fVar22 = (float)((ulong)plVar9[0x1a] >> 0x20);
    fVar23 = (float)plVar9[0x1b];
    fVar24 = (float)((ulong)plVar9[0x1b] >> 0x20);
    fVar25 = (float)*(int *)(param_1 + 0xa0) * 0.01;
    local_40 = fVar21 + (local_40 - fVar21) * fVar25;
    fStack_3c = fVar22 + (fStack_3c - fVar22) * fVar25;
    fStack_38 = fVar23 + (fStack_38 - fVar23) * fVar25;
    fStack_34 = fVar24 + (fStack_34 - fVar24) * fVar25;
    cVar20 = *(char *)(param_1 + 0xa4);
  }
  if (cVar20 != '\0') {
    FUN_009a7ff4((*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0) *
                 fStack_4c,
                 (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0) * local_50
                );
    *(undefined1 *)(plVar9 + 0x1c) = 1;
    plVar9[0x19] = extraout_var;
    plVar9[0x18] = extraout_d0;
  }
  auVar6 = *(undefined1 (*) [16])(plVar9 + 0x1a);
  auVar28[0] = -(*(char *)(param_1 + 0xac) == '\0');
  auVar28[1] = auVar28[0];
  auVar28[2] = auVar28[0];
  auVar28[3] = auVar28[0];
  auVar28[4] = auVar28[0];
  auVar28[5] = auVar28[0];
  auVar28[6] = auVar28[0];
  auVar28[7] = auVar28[0];
  auVar28[8] = auVar28[0];
  auVar28[9] = auVar28[0];
  auVar28[10] = auVar28[0];
  auVar28[0xb] = auVar28[0];
  auVar28[0xc] = auVar28[0];
  auVar28[0xd] = auVar28[0];
  auVar28[0xe] = auVar28[0];
  auVar28[0xf] = auVar28[0];
  auVar5._4_4_ = auVar6._4_4_;
  auVar5._0_4_ = local_40;
  auVar5._8_8_ = auVar6._8_8_;
  auVar29._4_4_ = auVar6._4_4_;
  auVar29._0_4_ = local_40;
  auVar29._8_8_ = auVar6._8_8_;
  auVar29 = auVar29 ^ (auVar5 ^ auVar6) & auVar28;
  auVar26[0] = -(*(char *)(param_1 + 0xad) == '\0');
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
  *(undefined1 *)(param_1 + 0xe1) = 1;
  auVar6._4_4_ = fStack_3c;
  auVar6._0_4_ = auVar29._0_4_;
  auVar6._8_8_ = auVar29._8_8_;
  auVar27._4_4_ = fStack_3c;
  auVar27._0_4_ = auVar29._0_4_;
  auVar27._8_8_ = auVar29._8_8_;
  auVar27 = auVar27 ^ (auVar6 ^ auVar29) & auVar26;
  cVar20 = -(*(char *)(param_1 + 0xae) == '\0');
  auVar19._8_4_ = fStack_38;
  auVar19._0_8_ = auVar27._0_8_;
  auVar19._12_4_ = 0;
  auVar18[1] = cVar20;
  auVar18[0] = cVar20;
  auVar18[2] = cVar20;
  auVar18[3] = cVar20;
  auVar18[4] = cVar20;
  auVar18[5] = cVar20;
  auVar18[6] = cVar20;
  auVar18[7] = cVar20;
  auVar18[8] = cVar20;
  auVar18[9] = cVar20;
  auVar18[10] = cVar20;
  auVar18[0xb] = cVar20;
  auVar18[0xc] = cVar20;
  auVar18[0xd] = cVar20;
  auVar18[0xe] = cVar20;
  auVar18[0xf] = cVar20;
  auVar19 = auVar19 ^ (auVar19 ^ auVar27) & auVar18;
  *(long *)(param_1 + 0xd8) = auVar19._8_8_;
  *(long *)(param_1 + 0xd0) = auVar19._0_8_;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  lVar13 = plVar8[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar7 = *piVar1;
    cVar20 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar7 + -1;
      cVar20 = ExclusiveMonitorsStatus();
    }
  } while (cVar20 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  lVar13 = plVar9[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar7 = *piVar1;
    cVar20 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar7 + -1;
      cVar20 = ExclusiveMonitorsStatus();
    }
  } while (cVar20 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  return;
LAB_00a51a8c:
  uVar15 = plVar8[0x69];
  uVar2 = *(uint *)((long)plVar17 + 0x14);
  uVar14 = (ulong)uVar2;
  if ((uVar15 & uVar15 - 1) == 0) {
    plVar9 = *(long **)(plVar8[0x68] + (ulong)((int)uVar15 - 1U & uVar2) * 8);
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != uVar14);
    } while (*(uint *)(plVar9 + 2) != uVar2);
  }
  else {
    uVar12 = uVar14;
    if (uVar15 <= uVar14) {
      uVar12 = 0;
      if (uVar15 != 0) {
        uVar12 = uVar14 / uVar15;
      }
      uVar12 = uVar14 - uVar12 * uVar15;
    }
    plVar9 = *(long **)(plVar8[0x68] + uVar12 * 8);
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != uVar14);
    } while (*(uint *)(plVar9 + 2) != uVar2);
  }
  plVar9 = *(long **)((long)plVar9 + 0x18);
  if (plVar9 != (long *)0x0) {
    lVar13 = plVar9[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_00a52034;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar20 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
  }
  plVar17 = (long *)(**(code **)(**(long **)(param_1 + 0x68) + 0x70))();
  uVar14 = plVar17[1];
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar2 = *(uint *)(param_1 + 0x8c);
    uVar12 = (ulong)uVar2;
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = (ulong)((int)uVar14 - 1U & uVar2);
    }
    else {
      uVar16 = uVar12;
      if (uVar14 <= uVar12) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = uVar12 / uVar14;
        }
        uVar16 = uVar12 - uVar16 * uVar14;
      }
    }
    plVar17 = *(long **)(*plVar17 + uVar16 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar17[1] == uVar12) {
            if (*(uint *)(plVar17 + 2) == uVar2) goto LAB_00a51c10;
          }
          else if ((plVar17[1] & uVar14 - 1) != uVar16) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar17[1];
          if (uVar15 == uVar12) {
            if (*(uint *)(plVar17 + 2) == uVar2) goto LAB_00a51c10;
          }
          else {
            if (uVar14 <= uVar15) {
              uVar4 = 0;
              if (uVar14 != 0) {
                uVar4 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar4 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  goto LAB_00a51f28;
LAB_00a51c10:
  uVar15 = plVar8[0x69];
  uVar2 = *(uint *)((long)plVar17 + 0x14);
  uVar14 = (ulong)uVar2;
  if ((uVar15 & uVar15 - 1) == 0) {
    plVar8 = *(long **)(plVar8[0x68] + (ulong)((int)uVar15 - 1U & uVar2) * 8);
    do {
      do {
        plVar8 = (long *)*plVar8;
      } while (plVar8[1] != uVar14);
    } while (*(uint *)(plVar8 + 2) != uVar2);
  }
  else {
    uVar12 = uVar14;
    if (uVar15 <= uVar14) {
      uVar12 = 0;
      if (uVar15 != 0) {
        uVar12 = uVar14 / uVar15;
      }
      uVar12 = uVar14 - uVar12 * uVar15;
    }
    plVar8 = *(long **)(plVar8[0x68] + uVar12 * 8);
    do {
      do {
        plVar8 = (long *)*plVar8;
      } while (plVar8[1] != uVar14);
    } while (*(uint *)(plVar8 + 2) != uVar2);
  }
  plVar8 = *(long **)((long)plVar8 + 0x18);
  if (plVar8 != (long *)0x0) {
    lVar13 = plVar8[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_00a52034;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar20 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar20 = ExclusiveMonitorsStatus();
      }
    } while (cVar20 != '\0');
  }
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar7 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  local_80 = *(undefined8 *)PTR_DAT_0437a0d8;
  uStack_78 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
  local_70 = *(undefined8 *)(PTR_DAT_0437a0d8 + 0x10);
  plVar17 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
  local_68 = plVar17;
  if (plVar17 != (long *)0x0) goto LAB_00a51f2c;
  goto joined_r0x00a51cfc;
}


