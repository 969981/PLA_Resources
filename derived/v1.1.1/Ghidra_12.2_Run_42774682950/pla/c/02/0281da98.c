/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281da98; name: FUN_0281da98
 */


void FUN_0281da98(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined6 uVar15;
  byte bVar17;
  float fVar16;
  byte bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
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
  
  FUN_0281e088(param_1,param_2,param_4);
  fVar21 = (float)*param_3;
  fVar13 = (float)*param_4 - fVar21;
  fVar22 = (float)((ulong)*param_3 >> 0x20);
  fVar16 = (float)((ulong)*param_4 >> 0x20) - fVar22;
  fVar23 = (float)param_3[1];
  fVar19 = (float)param_4[1] - fVar23;
  fVar24 = (float)((ulong)param_3[1] >> 0x20);
  fVar20 = (float)((ulong)param_4[1] >> 0x20) - fVar24;
  fVar12 = fVar13 * fVar13;
  fVar14 = fVar16 * fVar16;
  uVar25 = (undefined1)((uint)fVar14 >> 8);
  uVar26 = (undefined1)((uint)fVar14 >> 0x10);
  uVar27 = (undefined1)((uint)fVar14 >> 0x18);
  fVar11 = fVar19 * fVar19;
  uVar28 = (undefined1)((uint)fVar11 >> 8);
  uVar29 = (undefined1)((uint)fVar11 >> 0x10);
  uVar30 = (undefined1)((uint)fVar11 >> 0x18);
  fVar7 = fVar20 * fVar20;
  uVar31 = (undefined1)((uint)fVar7 >> 8);
  uVar32 = (undefined1)((uint)fVar7 >> 0x10);
  uVar33 = (undefined1)((uint)fVar7 >> 0x18);
  auVar34[4] = SUB41(fVar14,0);
  auVar34._0_4_ = fVar12;
  auVar34[5] = uVar25;
  auVar34[6] = uVar26;
  auVar34[7] = uVar27;
  auVar34[8] = SUB41(fVar11,0);
  auVar34[9] = uVar28;
  auVar34[10] = uVar29;
  auVar34[0xb] = uVar30;
  auVar34[0xc] = SUB41(fVar7,0);
  auVar34[0xd] = uVar31;
  auVar34[0xe] = uVar32;
  auVar34[0xf] = uVar33;
  auVar37[4] = SUB41(fVar14,0);
  auVar37._0_4_ = fVar12;
  auVar37[5] = uVar25;
  auVar37[6] = uVar26;
  auVar37[7] = uVar27;
  auVar37[8] = SUB41(fVar11,0);
  auVar37[9] = uVar28;
  auVar37[10] = uVar29;
  auVar37[0xb] = uVar30;
  auVar37[0xc] = SUB41(fVar7,0);
  auVar37[0xd] = uVar31;
  auVar37[0xe] = uVar32;
  auVar37[0xf] = uVar33;
  auVar34 = NEON_ext(auVar34,auVar37,8,1);
  fVar12 = auVar34._0_4_ + fVar12;
  fVar14 = auVar34._4_4_ + fVar14;
  fVar11 = fVar12 + fVar14;
  fVar12 = fVar12 + fVar14;
  uVar25 = SUB41(fVar12,0);
  uVar26 = (undefined1)((uint)fVar12 >> 8);
  uVar27 = (undefined1)((uint)fVar12 >> 0x10);
  uVar28 = (undefined1)((uint)fVar12 >> 0x18);
  auVar2[4] = uVar25;
  auVar2._0_4_ = fVar11;
  auVar2[5] = uVar26;
  auVar2[6] = uVar27;
  auVar2[7] = uVar28;
  auVar2[8] = SUB41(fVar11,0);
  auVar2[9] = (char)((uint)fVar11 >> 8);
  auVar2[10] = (char)((uint)fVar11 >> 0x10);
  auVar2[0xb] = (char)((uint)fVar11 >> 0x18);
  auVar2[0xc] = uVar25;
  auVar2[0xd] = uVar26;
  auVar2[0xe] = uVar27;
  auVar2[0xf] = uVar28;
  auVar34 = NEON_frsqrte(auVar2,4);
  auVar36._0_4_ = auVar34._0_4_ * fVar11;
  auVar36._4_4_ = auVar34._4_4_ * fVar12;
  auVar36._8_4_ = auVar34._8_4_ * fVar11;
  uVar3 = (undefined2)(CONCAT15(uVar26,CONCAT14(uVar25,fVar11)) >> 0x20);
  auVar36._12_4_ = auVar34._12_4_ * (float)CONCAT13(uVar28,CONCAT12(uVar27,uVar3));
  auVar37 = NEON_frsqrts(auVar34,auVar36,4);
  auVar35._0_4_ = auVar34._0_4_ * auVar37._0_4_;
  auVar35._4_4_ = auVar34._4_4_ * auVar37._4_4_;
  auVar35._8_4_ = auVar34._8_4_ * auVar37._8_4_;
  auVar35._12_4_ = auVar34._12_4_ * auVar37._12_4_;
  auVar38._0_4_ = fVar11 * auVar35._0_4_;
  auVar38._4_4_ = fVar12 * auVar35._4_4_;
  auVar38._8_4_ = fVar11 * auVar35._8_4_;
  auVar38._12_4_ = (float)CONCAT13(uVar28,CONCAT12(uVar27,uVar3)) * auVar35._12_4_;
  iVar4 = -(uint)(fVar11 == 0.0);
  iVar5 = -(uint)(fVar12 == 0.0);
  iVar6 = -(uint)(fVar11 == 0.0);
  iVar8 = -(uint)((float)CONCAT13(uVar28,CONCAT12(uVar27,uVar3)) == 0.0);
  auVar34 = NEON_frsqrts(auVar35,auVar38,4);
  fVar13 = fVar13 * auVar35._0_4_ * auVar34._0_4_;
  fVar16 = fVar16 * auVar35._4_4_ * auVar34._4_4_;
  fVar19 = fVar19 * auVar35._8_4_ * auVar34._8_4_;
  fVar20 = fVar20 * auVar35._12_4_ * auVar34._12_4_;
  fVar14 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                           CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10),
                                    CONCAT11((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar4 >> 8),
                                             SUB41(fVar13,0) & ~(byte)iVar4)));
  uVar15 = CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar5 >> 8),
                    CONCAT14(SUB41(fVar16,0) & ~(byte)iVar5,fVar14));
  bVar17 = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10);
  bVar18 = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18);
  fVar11 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                           CONCAT12((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                    CONCAT11((byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                             SUB41(fVar19,0) & ~(byte)iVar6)));
  fVar12 = (*(float *)(param_1 + 0x76c) + *(float *)(*(long *)(param_1 + 0x818) + 0x14) * 0.5) /
           ABS((float)CONCAT13(bVar18,CONCAT12(bVar17,(short)((uint6)uVar15 >> 0x20))));
  param_5[1] = CONCAT44(fVar24 + (float)(CONCAT17((byte)((uint)fVar20 >> 0x18) &
                                                  ~(byte)((uint)iVar8 >> 0x18),
                                                  CONCAT16((byte)((uint)fVar20 >> 0x10) &
                                                           ~(byte)((uint)iVar8 >> 0x10),
                                                           CONCAT15((byte)((uint)fVar20 >> 8) &
                                                                    ~(byte)((uint)iVar8 >> 8),
                                                                    CONCAT14(SUB41(fVar20,0) &
                                                                             ~(byte)iVar8,fVar11))))
                                        >> 0x20) * fVar12,fVar23 + fVar11 * fVar12);
  *param_5 = CONCAT44(fVar22 + (float)(CONCAT17(bVar18,CONCAT16(bVar17,uVar15)) >> 0x20) * fVar12,
                      fVar21 + fVar14 * fVar12);
  lVar10 = **(long **)(param_1 + 0x838);
  lVar1 = (*(long **)(param_1 + 0x838))[1];
  if ((lVar10 != lVar1) &&
     ((*(char *)(lVar10 + 0x20) != '\0' || (*(int *)(lVar10 + 0x24) != param_2)))) {
    lVar9 = lVar10 + 0x30;
    do {
      lVar10 = lVar9;
      if (lVar1 == lVar10) {
        lVar10 = lVar1;
        if (lVar1 == 0) {
          return;
        }
        goto LAB_0281db98;
      }
      lVar9 = lVar10 + 0x30;
    } while ((*(char *)(lVar10 + 0x20) != '\0') || (*(int *)(lVar10 + 0x24) != param_2));
  }
  if (lVar10 != 0) {
LAB_0281db98:
    if (lVar1 != lVar10) {
      param_5[1] = param_4[1];
      *param_5 = *param_4;
    }
  }
  return;
}


