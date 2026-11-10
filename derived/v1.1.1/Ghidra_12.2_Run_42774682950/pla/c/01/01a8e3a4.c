/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8e3a4; name: FUN_01a8e3a4
 */


void FUN_01a8e3a4(float param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  undefined1 auVar14 [16];
  byte bVar17;
  byte bVar18;
  int iVar16;
  byte bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  long *local_28;
  float local_14;
  
  if (*(int *)(param_2 + 0x8e8) < 1) {
    fVar12 = *(float *)(param_2 + 0x8e0);
    if ((0.0 < fVar12) && (*(float *)(param_2 + 0x8e4) < fVar12)) {
      param_1 = *(float *)(param_2 + 0x8e4) + param_1;
      pfVar4 = (float *)(param_2 + 0x8e0);
      if (param_1 <= fVar12) {
        pfVar4 = (float *)(param_2 + 0x8e4);
      }
      *(float *)(param_2 + 0x8e4) = param_1;
      local_14 = 0.0;
      if (param_1 < 0.0) {
        pfVar4 = &local_14;
      }
      fVar6 = *pfVar4;
      *(float *)(param_2 + 0x8e4) = fVar6;
      auVar8 = FUN_009c6b1c(fVar6 / fVar12,param_2 + 0x8f0,param_2 + 0x900);
      fVar7 = auVar8._0_4_;
      auVar25._0_4_ = fVar7 * fVar7;
      fVar9 = auVar8._4_4_;
      auVar25._4_4_ = fVar9 * fVar9;
      fVar10 = auVar8._8_4_;
      auVar25._8_4_ = fVar10 * fVar10;
      fVar11 = auVar8._12_4_;
      auVar25._12_4_ = fVar11 * fVar11;
      auVar8 = NEON_ext(auVar25,auVar25,8,1);
      fVar13 = auVar8._0_4_ + auVar25._0_4_;
      fVar15 = auVar8._4_4_ + auVar25._4_4_;
      fVar12 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
      fVar6 = fVar13 + fVar15;
      fVar13 = fVar13 + fVar15;
      auVar8._8_8_ = CONCAT44(fVar13,fVar6);
      auVar8._0_8_ = CONCAT44(fVar13,fVar6);
      iVar16 = -(uint)(fVar6 < fVar12);
      iVar20 = -(uint)(fVar13 < fVar12);
      iVar21 = -(uint)(fVar6 < fVar12);
      iVar22 = -(uint)(fVar13 < fVar12);
      bVar17 = (byte)((uint)iVar16 >> 8);
      bVar18 = (byte)((uint)iVar16 >> 0x10);
      bVar19 = (byte)((uint)iVar16 >> 0x18);
      if ((float)CONCAT13((byte)((uint)fVar6 >> 0x18) & ~bVar19,
                          CONCAT12((byte)((uint)fVar6 >> 0x10) & ~bVar18,
                                   CONCAT11((byte)((uint)fVar6 >> 8) & ~bVar17,
                                            SUB41(fVar6,0) & ~(byte)iVar16))) != 0.0) {
        auVar8 = NEON_frsqrte(auVar8,4);
        auVar24._0_4_ = auVar8._0_4_ * fVar6;
        auVar24._4_4_ = auVar8._4_4_ * fVar13;
        auVar24._8_4_ = auVar8._8_4_ * fVar6;
        auVar24._12_4_ = auVar8._12_4_ * fVar13;
        auVar25 = NEON_frsqrts(auVar8,auVar24,4);
        auVar23._0_4_ = auVar8._0_4_ * auVar25._0_4_;
        auVar23._4_4_ = auVar8._4_4_ * auVar25._4_4_;
        auVar23._8_4_ = auVar8._8_4_ * auVar25._8_4_;
        auVar23._12_4_ = auVar8._12_4_ * auVar25._12_4_;
        auVar14._0_4_ = fVar6 * auVar23._0_4_;
        auVar14._4_4_ = fVar13 * auVar23._4_4_;
        auVar14._8_4_ = fVar6 * auVar23._8_4_;
        auVar14._12_4_ = fVar13 * auVar23._12_4_;
        auVar8 = NEON_frsqrts(auVar23,auVar14,4);
        fVar7 = fVar7 * auVar23._0_4_ * auVar8._0_4_;
        fVar9 = fVar9 * auVar23._4_4_ * auVar8._4_4_;
        fVar10 = fVar10 * auVar23._8_4_ * auVar8._8_4_;
        fVar11 = fVar11 * auVar23._12_4_ * auVar8._12_4_;
        FUN_009c69bc(&local_28,param_2);
        *(undefined1 *)(local_28 + 0x1c) = 1;
        local_28[0x19] =
             CONCAT17((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                      CONCAT16((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                               CONCAT15((byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                        CONCAT14(SUB41(fVar11,0) & ~(byte)iVar22,
                                                 CONCAT13((byte)((uint)fVar10 >> 0x18) &
                                                          ~(byte)((uint)iVar21 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar10 >> 0x10) &
                                                                   ~(byte)((uint)iVar21 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar10 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar21 >> 8),SUB41(fVar10,0) & ~(byte)iVar21))))))
                     );
        local_28[0x18] =
             CONCAT17((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                      CONCAT16((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                               CONCAT15((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                        CONCAT14(SUB41(fVar9,0) & ~(byte)iVar20,
                                                 CONCAT13((byte)((uint)fVar7 >> 0x18) & ~bVar19,
                                                          CONCAT12((byte)((uint)fVar7 >> 0x10) &
                                                                   ~bVar18,CONCAT11((byte)((uint)
                                                  fVar7 >> 8) & ~bVar17,
                                                  SUB41(fVar7,0) & ~(byte)iVar16)))))));
        if (local_28 != (long *)0x0) {
          lVar5 = local_28[0xb];
          piVar1 = (int *)(lVar5 + 0xc);
          do {
            iVar16 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar16 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar16 + -1 == 0) {
            *(undefined8 *)(lVar5 + 0x18) = 0;
            (**(code **)(*local_28 + 0x20))();
          }
        }
      }
    }
  }
  else {
    *(int *)(param_2 + 0x8e8) = *(int *)(param_2 + 0x8e8) + -1;
  }
  return;
}


