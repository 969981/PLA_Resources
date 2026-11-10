/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026c9b88; name: FUN_026c9b88
 */


/* WARNING: Removing unreachable block (ram,0x026c9c48) */

void FUN_026c9b88(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,
                 undefined1 (*param_4) [16],undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  float fVar15;
  float extraout_s0;
  float extraout_var;
  float fVar16;
  float extraout_var_00;
  float fVar17;
  float extraout_var_01;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_1 = 0;
  uVar2 = *(undefined8 *)(PTR_DAT_0437a0f8 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)PTR_DAT_0437a0f8;
  *(undefined8 *)(param_1 + 6) = uVar2;
  uVar8 = FUN_026c4408(param_5,param_6,1);
  if ((uVar8 & 1) != 0) {
    fVar15 = (float)FUN_026c3894();
    auVar19 = *param_4;
    local_60 = CONCAT44(0.0 - auVar19._4_4_,0.0 - auVar19._0_4_);
    uStack_58 = CONCAT44(0.0 - auVar19._12_4_,0.0 - auVar19._8_4_);
    uStack_48 = CONCAT44(auVar19._12_4_ * fVar15 + (float)((ulong)param_3[1] >> 0x20) + 0.0,
                         auVar19._8_4_ * fVar15 + (float)param_3[1] + 0.0);
    local_50 = CONCAT44(auVar19._4_4_ * fVar15 + fVar15 + (float)((ulong)*param_3 >> 0x20),
                        auVar19._0_4_ * fVar15 + (float)*param_3 + 0.0);
    FUN_026c9fec(param_2,&local_60);
    fVar15 = (0.0 - extraout_s0) * (float)DAT_0388a140;
    fVar16 = (0.0 - extraout_var) * (float)((ulong)DAT_0388a140 >> 0x20);
    fVar17 = (0.0 - extraout_var_00) * (float)DAT_0388a148;
    fVar18 = (0.0 - extraout_var_01) * (float)((ulong)DAT_0388a148 >> 0x20);
    auVar19._4_4_ = fVar16;
    auVar19._0_4_ = fVar15;
    auVar19._8_4_ = fVar17;
    auVar19._12_4_ = fVar18;
    auVar6._4_4_ = fVar16;
    auVar6._0_4_ = fVar15;
    auVar6._8_4_ = fVar17;
    auVar6._12_4_ = fVar18;
    auVar19 = NEON_ext(auVar19,auVar6,8,1);
    fVar16 = auVar19._0_4_ + fVar15 + auVar19._4_4_ + fVar16;
    fVar15 = -1.0;
    if (-1.0 <= fVar16) {
      fVar15 = fVar16;
    }
    fVar15 = (float)FUN_0095d8f0(fVar15);
    fVar16 = (float)FUN_026c4130();
    if (fVar15 < fVar16) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar12 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar12;
      uVar8 = *(ulong *)(lVar12 + 0x60);
      fVar16 = 0.0;
      if (uVar8 != 0) {
        uVar10 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
        uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
        uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar10 < 2) {
          uVar11 = uVar8 - 1 & 0x6a437d1436c47a27;
        }
        else if (uVar8 < 0x6a437d1436c47a28) {
          uVar11 = 0;
          if (uVar8 != 0) {
            uVar11 = 0x6a437d1436c47a27 / uVar8;
          }
          uVar11 = 0x6a437d1436c47a27 - uVar11 * uVar8;
        }
        else {
          uVar11 = 0x6a437d1436c47a27;
        }
        plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + uVar11 * 8);
        if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
          if (uVar10 < 2) {
            do {
              if (plVar13[1] == 0x6a437d1436c47a27) {
                if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026c9d20;
              }
              else if ((plVar13[1] & uVar8 - 1) != uVar11) break;
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
          else {
            do {
              uVar10 = plVar13[1];
              if (uVar10 == 0x6a437d1436c47a27) {
                if (plVar13[2] == 0x6a437d1436c47a27) goto LAB_026c9d20;
              }
              else {
                if (uVar8 <= uVar10) {
                  uVar5 = 0;
                  if (uVar8 != 0) {
                    uVar5 = uVar10 / uVar8;
                  }
                  uVar10 = uVar10 - uVar5 * uVar8;
                }
                if (uVar10 != uVar11) break;
              }
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
        }
      }
      goto joined_r0x026c9f10;
    }
  }
  *param_1 = 0;
  return;
LAB_026c9d20:
  plVar13 = (long *)plVar13[3];
  if (plVar13 == (long *)0x0) goto joined_r0x026c9f10;
  plVar1 = plVar13 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar8 = plVar13[0x21];
  fVar16 = 0.0;
  if (uVar8 != 0) {
    uVar10 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar8 - 1 & 0xed31f3d2618d19c4;
    }
    else if (uVar8 < 0xed31f3d2618d19c5) {
      uVar11 = 0;
      if (uVar8 != 0) {
        uVar11 = 0xed31f3d2618d19c4 / uVar8;
      }
      uVar11 = 0xed31f3d2618d19c4 - uVar11 * uVar8;
    }
    else {
      uVar11 = 0xed31f3d2618d19c4;
    }
    plVar14 = *(long **)(plVar13[0x20] + uVar11 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar14[1] == 0xed31f3d2618d19c4) {
            if (plVar14[2] == -0x12ce0c2d9e72e63c) goto LAB_026c9e64;
          }
          else if ((plVar14[1] & uVar8 - 1) != uVar11) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar14[1];
          if (uVar10 == 0xed31f3d2618d19c4) {
            if (plVar14[2] == -0x12ce0c2d9e72e63c) goto LAB_026c9e64;
          }
          else {
            if (uVar8 <= uVar10) {
              uVar5 = 0;
              if (uVar8 != 0) {
                uVar5 = uVar10 / uVar8;
              }
              uVar10 = uVar10 - uVar5 * uVar8;
            }
            if (uVar10 != uVar11) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  goto LAB_026c9e68;
LAB_026c9e64:
  fVar16 = *(float *)(plVar14 + 6);
LAB_026c9e68:
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
joined_r0x026c9f10:
  if (fVar15 <= fVar16) {
    uStack_68 = CONCAT44(-(float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20),
                         -(float)*(undefined8 *)(*param_4 + 8));
    local_70 = CONCAT44(-(float)((ulong)*(undefined8 *)*param_4 >> 0x20),
                        -(float)*(undefined8 *)*param_4);
    uVar8 = FUN_026c4b58(param_2,param_3,&local_70);
    if ((uVar8 & 1) == 0) {
      uVar9 = 5;
    }
    else {
      uVar9 = 6;
    }
  }
  else {
    fVar16 = (float)FUN_026c3e58();
    if (fVar15 <= fVar16) {
      uStack_68 = CONCAT44(-(float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20),
                           -(float)*(undefined8 *)(*param_4 + 8));
      local_70 = CONCAT44(-(float)((ulong)*(undefined8 *)*param_4 >> 0x20),
                          -(float)*(undefined8 *)*param_4);
      uVar8 = FUN_026c4b58(param_2,param_3,&local_70);
      if ((uVar8 & 1) == 0) {
        uVar9 = 3;
      }
      else {
        uVar9 = 4;
      }
    }
    else {
      uStack_68 = CONCAT44(-(float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20),
                           -(float)*(undefined8 *)(*param_4 + 8));
      local_70 = CONCAT44(-(float)((ulong)*(undefined8 *)*param_4 >> 0x20),
                          -(float)*(undefined8 *)*param_4);
      uVar8 = FUN_026c4b58(param_2,param_3,&local_70);
      if ((uVar8 & 1) == 0) {
        uVar9 = 1;
      }
      else {
        uVar9 = 2;
      }
    }
  }
  *param_1 = uVar9;
  *(ulong *)(param_1 + 6) = CONCAT44(extraout_var_01,extraout_var_00);
  *(ulong *)(param_1 + 4) = CONCAT44(extraout_var,extraout_s0);
  return;
}


