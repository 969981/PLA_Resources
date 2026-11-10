/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a89928; name: FUN_01a89928
 */


void FUN_01a89928(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  undefined1 auVar6 [16];
  long lVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long *local_28;
  
  fVar13 = (float)*param_3;
  fVar17 = fVar13 * fVar13;
  fVar14 = (float)((ulong)*param_3 >> 0x20);
  fVar18 = fVar14 * fVar14;
  fVar15 = (float)param_3[1];
  fVar16 = (float)((ulong)param_3[1] >> 0x20);
  auVar19._4_4_ = fVar18;
  auVar19._0_4_ = fVar17;
  auVar19._8_4_ = fVar15 * fVar15;
  auVar19._12_4_ = fVar16 * fVar16;
  auVar22._4_4_ = fVar18;
  auVar22._0_4_ = fVar17;
  auVar22._8_4_ = fVar15 * fVar15;
  auVar22._12_4_ = fVar16 * fVar16;
  auVar19 = NEON_ext(auVar19,auVar22,8,1);
  fVar5 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
  fVar17 = auVar19._0_4_ + fVar17;
  fVar18 = auVar19._4_4_ + fVar18;
  fVar8 = fVar17 + fVar18;
  fVar17 = fVar17 + fVar18;
  auVar6._4_4_ = fVar17;
  auVar6._0_4_ = fVar8;
  auVar6._8_4_ = fVar8;
  auVar6._12_4_ = fVar17;
  auVar19 = NEON_frsqrte(auVar6,4);
  iVar9 = -(uint)(fVar8 < fVar5);
  iVar10 = -(uint)(fVar17 < fVar5);
  iVar11 = -(uint)(fVar8 < fVar5);
  iVar12 = -(uint)(fVar17 < fVar5);
  auVar21._0_4_ = auVar19._0_4_ * fVar8;
  auVar21._4_4_ = auVar19._4_4_ * fVar17;
  auVar21._8_4_ = auVar19._8_4_ * fVar8;
  auVar21._12_4_ = auVar19._12_4_ * fVar17;
  auVar22 = NEON_frsqrts(auVar19,auVar21,4);
  auVar20._0_4_ = auVar19._0_4_ * auVar22._0_4_;
  auVar20._4_4_ = auVar19._4_4_ * auVar22._4_4_;
  auVar20._8_4_ = auVar19._8_4_ * auVar22._8_4_;
  auVar20._12_4_ = auVar19._12_4_ * auVar22._12_4_;
  auVar23._0_4_ = fVar8 * auVar20._0_4_;
  auVar23._4_4_ = fVar17 * auVar20._4_4_;
  auVar23._8_4_ = fVar8 * auVar20._8_4_;
  auVar23._12_4_ = fVar17 * auVar20._12_4_;
  auVar19 = NEON_frsqrts(auVar20,auVar23,4);
  fVar13 = fVar13 * auVar20._0_4_ * auVar19._0_4_;
  fVar14 = fVar14 * auVar20._4_4_ * auVar19._4_4_;
  fVar15 = fVar15 * auVar20._8_4_ * auVar19._8_4_;
  fVar16 = fVar16 * auVar20._12_4_ * auVar19._12_4_;
  FUN_01a83770();
  FUN_009c69bc(&local_28,param_1);
  lVar7 = param_2[1];
  local_28[0x1a] = *param_2;
  local_28[0x1b] = lVar7;
  *(undefined1 *)(local_28 + 0x1c) = 1;
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  FUN_009c69bc(&local_28,param_1);
  *(undefined1 *)(local_28 + 0x1c) = 1;
  local_28[0x19] =
       CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                         CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                  CONCAT14(SUB41(fVar16,0) & ~(byte)iVar12,
                                           CONCAT13((byte)((uint)fVar15 >> 0x18) &
                                                    ~(byte)((uint)iVar11 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar15 >> 0x10) &
                                                             ~(byte)((uint)iVar11 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar15 >> 8) &
                                                                      ~(byte)((uint)iVar11 >> 8),
                                                                      SUB41(fVar15,0) &
                                                                      ~(byte)iVar11)))))));
  local_28[0x18] =
       CONCAT17((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                CONCAT16((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                         CONCAT15((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                  CONCAT14(SUB41(fVar14,0) & ~(byte)iVar10,
                                           CONCAT13((byte)((uint)fVar13 >> 0x18) &
                                                    ~(byte)((uint)iVar9 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                             ~(byte)((uint)iVar9 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar13 >> 8) &
                                                                      ~(byte)((uint)iVar9 >> 8),
                                                                      SUB41(fVar13,0) & ~(byte)iVar9
                                                                     )))))));
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


