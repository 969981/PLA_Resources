/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ba0014; name: FUN_00ba0014
 */


bool FUN_00ba0014(long param_1,float *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float fVar22;
  undefined1 auVar23 [12];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  long local_90 [2];
  
  FUN_00b5f5a4(local_90,*(undefined8 *)(param_1 + 0xa0));
  lVar16 = local_90[0];
  puVar11 = PTR_DAT_04379e90;
  puVar10 = PTR_DAT_04379e88;
  puVar9 = PTR_DAT_043795e0;
  if (local_90[0] == 0) {
    bVar12 = false;
  }
  else {
    if (*(int *)(local_90[0] + 0xc) != 0) {
      piVar1 = (int *)(local_90[0] + 0xc);
      iVar19 = *(int *)(local_90[0] + 0xc);
      do {
        puVar18 = *(undefined8 **)(lVar16 + 0x10);
        if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar13 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
              uVar15 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar15;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar9 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar11 = puVar9;
          __cxa_guard_release(puVar10);
        }
        if (puVar18 == (undefined8 *)0x0) break;
        while (puVar18 != (undefined8 *)puVar11) {
          puVar18 = (undefined8 *)*puVar18;
          if (puVar18 == (undefined8 *)0x0) {
            bVar12 = false;
            goto joined_r0x00ba0288;
          }
        }
        iVar13 = *piVar1;
        if (iVar13 == iVar19) {
          cVar2 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar19 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar16 = *(long *)(lVar16 + 0x18);
            plVar17 = (long *)(lVar16 + -0x50);
            if (lVar16 != 0) {
              FUN_01a831dc(plVar17);
              fVar22 = *param_2 - (float)*param_3;
              fVar26 = param_2[2] - (float)param_3[1];
              fVar27 = param_2[3] - (float)((ulong)param_3[1] >> 0x20);
              fVar21 = fVar22 * fVar22;
              fVar25 = fVar26 * fVar26;
              uVar28 = (undefined1)((uint)fVar25 >> 8);
              uVar29 = (undefined1)((uint)fVar25 >> 0x10);
              uVar30 = (undefined1)((uint)fVar25 >> 0x18);
              fVar20 = fVar27 * fVar27;
              uVar31 = (undefined1)((uint)fVar20 >> 8);
              uVar32 = (undefined1)((uint)fVar20 >> 0x10);
              uVar33 = (undefined1)((uint)fVar20 >> 0x18);
              auVar3._4_4_ = 0;
              auVar3._0_4_ = fVar21;
              auVar3[8] = SUB41(fVar25,0);
              auVar3[9] = uVar28;
              auVar3[10] = uVar29;
              auVar3[0xb] = uVar30;
              auVar3[0xc] = SUB41(fVar20,0);
              auVar3[0xd] = uVar31;
              auVar3[0xe] = uVar32;
              auVar3[0xf] = uVar33;
              auVar4._4_4_ = 0;
              auVar4._0_4_ = fVar21;
              auVar4[8] = SUB41(fVar25,0);
              auVar4[9] = uVar28;
              auVar4[10] = uVar29;
              auVar4[0xb] = uVar30;
              auVar4[0xc] = SUB41(fVar20,0);
              auVar4[0xd] = uVar31;
              auVar4[0xe] = uVar32;
              auVar4[0xf] = uVar33;
              auVar34 = NEON_ext(auVar3,auVar4,8,1);
              fVar21 = auVar34._0_4_ + fVar21;
              fVar25 = auVar34._4_4_ + 0.0;
              fVar20 = fVar21 + fVar25;
              fVar21 = fVar21 + fVar25;
              uVar28 = SUB41(fVar21,0);
              uVar29 = (undefined1)((uint)fVar21 >> 8);
              uVar30 = (undefined1)((uint)fVar21 >> 0x10);
              uVar31 = (undefined1)((uint)fVar21 >> 0x18);
              auVar5[4] = uVar28;
              auVar5._0_4_ = fVar20;
              auVar5[5] = uVar29;
              auVar5[6] = uVar30;
              auVar5[7] = uVar31;
              auVar5[8] = SUB41(fVar20,0);
              auVar5[9] = (char)((uint)fVar20 >> 8);
              auVar5[10] = (char)((uint)fVar20 >> 0x10);
              auVar5[0xb] = (char)((uint)fVar20 >> 0x18);
              auVar5[0xc] = uVar28;
              auVar5[0xd] = uVar29;
              auVar5[0xe] = uVar30;
              auVar5[0xf] = uVar31;
              auVar34 = NEON_frsqrte(auVar5,4);
              auVar36._0_4_ = auVar34._0_4_ * fVar20;
              auVar36._4_4_ = auVar34._4_4_ * fVar21;
              auVar36._8_4_ = auVar34._8_4_ * fVar20;
              uVar6 = (undefined2)(CONCAT15(uVar29,CONCAT14(uVar28,fVar20)) >> 0x20);
              auVar36._12_4_ = auVar34._12_4_ * (float)CONCAT13(uVar31,CONCAT12(uVar30,uVar6));
              auVar37 = NEON_frsqrts(auVar34,auVar36,4);
              auVar35._0_4_ = auVar34._0_4_ * auVar37._0_4_;
              auVar35._4_4_ = auVar34._4_4_ * auVar37._4_4_;
              auVar35._8_4_ = auVar34._8_4_ * auVar37._8_4_;
              auVar35._12_4_ = auVar34._12_4_ * auVar37._12_4_;
              auVar38._0_4_ = fVar20 * auVar35._0_4_;
              auVar38._4_4_ = fVar21 * auVar35._4_4_;
              auVar38._8_4_ = fVar20 * auVar35._8_4_;
              auVar38._12_4_ = (float)CONCAT13(uVar31,CONCAT12(uVar30,uVar6)) * auVar35._12_4_;
              iVar19 = -(uint)(fVar20 == 0.0);
              iVar13 = -(uint)(fVar21 == 0.0);
              iVar7 = -(uint)(fVar20 == 0.0);
              iVar8 = -(uint)((float)CONCAT13(uVar31,CONCAT12(uVar30,uVar6)) == 0.0);
              auVar34 = NEON_frsqrts(auVar35,auVar38,4);
              fVar22 = fVar22 * auVar35._0_4_ * auVar34._0_4_;
              fVar25 = auVar35._4_4_ * auVar34._4_4_ * 0.0;
              fVar26 = fVar26 * auVar35._8_4_ * auVar34._8_4_;
              fVar27 = fVar27 * auVar35._12_4_ * auVar34._12_4_;
              fVar21 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                       CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                                ~(byte)((uint)iVar19 >> 0x10),
                                                CONCAT11((byte)((uint)fVar22 >> 8) &
                                                         ~(byte)((uint)iVar19 >> 8),
                                                         SUB41(fVar22,0) & ~(byte)iVar19)));
              auVar23._0_8_ =
                   CONCAT17((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                            CONCAT16((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                     CONCAT15((byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar13 >> 8)
                                              ,CONCAT14(SUB41(fVar25,0) & ~(byte)iVar13,fVar21))));
              auVar23[8] = SUB41(fVar26,0) & ~(byte)iVar7;
              auVar23[9] = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar7 >> 8);
              auVar23[10] = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
              auVar23[0xb] = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
              auVar24[0xc] = SUB41(fVar27,0) & ~(byte)iVar8;
              auVar24._0_12_ = auVar23;
              auVar24[0xd] = (byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar8 >> 8);
              auVar24[0xe] = (byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
              auVar24[0xf] = (byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
              fVar21 = extraout_s0 * fVar21;
              fVar25 = extraout_var * (float)((ulong)auVar23._0_8_ >> 0x20);
              fVar20 = extraout_var_00 * auVar23._8_4_;
              fVar22 = extraout_var_01 * auVar24._12_4_;
              auVar34._4_4_ = fVar25;
              auVar34._0_4_ = fVar21;
              auVar34._8_4_ = fVar20;
              auVar34._12_4_ = fVar22;
              auVar37._4_4_ = fVar25;
              auVar37._0_4_ = fVar21;
              auVar37._8_4_ = fVar20;
              auVar37._12_4_ = fVar22;
              auVar34 = NEON_ext(auVar34,auVar37,8,1);
              fVar25 = auVar34._0_4_ + fVar21 + auVar34._4_4_ + fVar25;
              fVar21 = -1.0;
              if (fVar25 < -1.0) {
LAB_00ba0364:
                fVar22 = 1.0 - fVar21 * fVar21;
                fVar25 = SQRT(fVar22);
                fVar20 = *(float *)PTR_FloatPi_04372cf0;
                if (NAN(fVar25)) {
                  fVar25 = sqrtf(fVar22);
                }
                fVar25 = -fVar25 / fVar21;
LAB_00ba02dc:
                fVar21 = fVar25 * fVar25;
                fVar20 = fVar20 - fVar25 * (fVar21 * (fVar21 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x18) +
                                                  fVar21 * (fVar21 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar21 * (fVar21 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar21 * (*(float *)PTR_AtanCoefficients_04372e40
                                                            * fVar21 -
                                                           *(float *)(PTR_AtanCoefficients_04372e40
                                                                     + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) - *(float *)(PTR_AtanCoefficients_04372e40 +
                                                                 0x1c)) + 1.0);
              }
              else {
                fVar21 = 1.0;
                if (fVar25 <= 1.0) {
                  if (fVar25 < 0.0) {
                    if (fVar25 < -0.70710677) {
                      fVar21 = fVar25;
                      goto LAB_00ba0364;
                    }
                    fVar22 = 1.0 - fVar25 * fVar25;
                    fVar21 = SQRT(fVar22);
                    fVar20 = *(float *)PTR_FloatPiDivided2_04372d38;
                    if (NAN(fVar21)) {
                      fVar21 = sqrtf(fVar22);
                    }
                    fVar21 = -fVar25 / fVar21;
                    fVar25 = fVar21 * fVar21;
                    fVar20 = fVar20 + fVar21 * (fVar25 * (fVar25 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x18) +
                                                  fVar25 * (fVar25 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar25 * (fVar25 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar25 * (*(float *)PTR_AtanCoefficients_04372e40
                                                            * fVar25 -
                                                           *(float *)(PTR_AtanCoefficients_04372e40
                                                                     + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) - *(float *)(PTR_AtanCoefficients_04372e40 +
                                                                 0x1c)) + 1.0);
                    goto LAB_00ba0254;
                  }
                  if (fVar25 <= 0.70710677) {
                    fVar22 = 1.0 - fVar25 * fVar25;
                    fVar21 = SQRT(fVar22);
                    fVar20 = *(float *)PTR_FloatPiDivided2_04372d38;
                    if (NAN(fVar21)) {
                      fVar21 = sqrtf(fVar22);
                    }
                    fVar25 = fVar25 / fVar21;
                    goto LAB_00ba02dc;
                  }
                  fVar21 = fVar25;
                }
                fVar25 = 1.0 - fVar21 * fVar21;
                fVar20 = SQRT(fVar25);
                if (NAN(fVar20)) {
                  fVar20 = sqrtf(fVar25);
                }
                fVar20 = fVar20 / fVar21;
                fVar21 = fVar20 * fVar20;
                fVar20 = fVar20 * (fVar21 * (fVar21 * (*(float *)(PTR_AtanCoefficients_04372e40 +
                                                                 0x18) +
                                                      fVar21 * (fVar21 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 0x10) +
                                                  fVar21 * (fVar21 * (*(float *)(
                                                  PTR_AtanCoefficients_04372e40 + 8) +
                                                  fVar21 * (*(float *)PTR_AtanCoefficients_04372e40
                                                            * fVar21 -
                                                           *(float *)(PTR_AtanCoefficients_04372e40
                                                                     + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_04372e40 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_04372e40 + 0x14)
                                                  )) -
                                            *(float *)(PTR_AtanCoefficients_04372e40 + 0x1c)) + 1.0)
                ;
              }
LAB_00ba0254:
              bVar12 = fVar20 <= *(float *)(param_1 + 0xa8) * 0.5;
              uVar14 = FUN_02a43a5c(*(undefined8 *)(lVar16 + 8));
              if ((uVar14 & 1) != 0) {
                (**(code **)(*plVar17 + 0x20))(plVar17);
              }
              goto joined_r0x00ba0288;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar19 = iVar13;
      } while (iVar13 != 0);
    }
    bVar12 = false;
joined_r0x00ba0288:
    if (local_90[0] != 0) {
      FUN_02a43934();
    }
  }
  return bVar12;
}


