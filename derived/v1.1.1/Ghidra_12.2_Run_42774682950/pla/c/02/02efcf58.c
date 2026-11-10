/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02efcf58; name: FUN_02efcf58
 */


void FUN_02efcf58(float param_1,undefined1 (*param_2) [16],int param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  float fVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar22;
  int iVar23;
  float fVar24;
  float fVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  undefined1 auVar25 [16];
  float fVar32;
  int iVar33;
  float fVar34;
  int iVar35;
  int iVar38;
  undefined8 uVar36;
  int iVar39;
  undefined1 auVar37 [16];
  int iVar40;
  undefined8 uVar41;
  
  fVar12 = 1.5707964 - param_1 * 1.5707964;
  auVar10 = NEON_fmov(0x3f800000,4);
  auVar11 = NEON_fmov(0xbf800000,4);
  puVar1 = *param_2;
  do {
    auVar25 = *param_2;
    auVar16 = param_2[1];
    fVar2 = auVar25._0_4_;
    fVar6 = auVar16._0_4_;
    fVar4 = auVar25._4_4_;
    fVar8 = auVar16._4_4_;
    auVar14 = NEON_ext(auVar25,auVar25,8,1);
    auVar25 = param_2[2];
    auVar37 = param_2[3];
    fVar3 = auVar25._0_4_;
    fVar7 = auVar37._0_4_;
    fVar5 = auVar25._4_4_;
    fVar9 = auVar37._4_4_;
    auVar16 = NEON_ext(auVar16,auVar16,8,1);
    auVar16._4_4_ = auVar16._0_4_;
    auVar16._0_4_ = auVar14._0_4_;
    auVar25 = NEON_ext(auVar25,auVar25,8,1);
    fVar15 = fVar2 * fVar2 + fVar4 * fVar4;
    fVar19 = fVar6 * fVar6 + fVar8 * fVar8;
    fVar20 = fVar3 * fVar3 + fVar5 * fVar5;
    fVar21 = fVar7 * fVar7 + fVar9 * fVar9;
    auVar37 = NEON_ext(auVar37,auVar37,8,1);
    auVar16._12_4_ = auVar37._0_4_;
    auVar16._8_4_ = auVar25._0_4_;
    param_2 = param_2 + 4;
    fVar22 = fVar15 + -0.0001;
    fVar26 = fVar19 + -0.0001;
    fVar29 = fVar20 + -0.0001;
    fVar32 = fVar21 + -0.0001;
    auVar25 = NEON_fmax(auVar16,auVar11,4);
    iVar35 = -(uint)(fVar22 < 0.0);
    iVar38 = -(uint)(fVar26 < 0.0);
    iVar39 = -(uint)(fVar29 < 0.0);
    iVar40 = -(uint)(fVar32 < 0.0);
    iVar23 = -(uint)(0.0 <= fVar22);
    iVar27 = -(uint)(0.0 <= fVar26);
    iVar30 = -(uint)(0.0 <= fVar29);
    iVar33 = -(uint)(0.0 <= fVar32);
    fVar22 = (float)CONCAT13((byte)((uint)iVar35 >> 0x18) & auVar10[3] |
                             (byte)((uint)iVar23 >> 0x18) & auVar25[3],
                             CONCAT12((byte)((uint)iVar35 >> 0x10) & auVar10[2] |
                                      (byte)((uint)iVar23 >> 0x10) & auVar25[2],
                                      CONCAT11((byte)((uint)iVar35 >> 8) & auVar10[1] |
                                               (byte)((uint)iVar23 >> 8) & auVar25[1],
                                               (byte)iVar35 & auVar10[0] | (byte)iVar23 & auVar25[0]
                                              )));
    auVar13._0_8_ =
         CONCAT17((byte)((uint)iVar38 >> 0x18) & auVar10[7] |
                  (byte)((uint)iVar27 >> 0x18) & auVar25[7],
                  CONCAT16((byte)((uint)iVar38 >> 0x10) & auVar10[6] |
                           (byte)((uint)iVar27 >> 0x10) & auVar25[6],
                           CONCAT15((byte)((uint)iVar38 >> 8) & auVar10[5] |
                                    (byte)((uint)iVar27 >> 8) & auVar25[5],
                                    CONCAT14((byte)iVar38 & auVar10[4] | (byte)iVar27 & auVar25[4],
                                             fVar22))));
    auVar13[8] = (byte)iVar39 & auVar10[8] | (byte)iVar30 & auVar25[8];
    auVar13[9] = (byte)((uint)iVar39 >> 8) & auVar10[9] | (byte)((uint)iVar30 >> 8) & auVar25[9];
    auVar13[10] = (byte)((uint)iVar39 >> 0x10) & auVar10[10] |
                  (byte)((uint)iVar30 >> 0x10) & auVar25[10];
    auVar13[0xb] = (byte)((uint)iVar39 >> 0x18) & auVar10[0xb] |
                   (byte)((uint)iVar30 >> 0x18) & auVar25[0xb];
    auVar37[0xc] = (byte)iVar40 & auVar10[0xc] | (byte)iVar33 & auVar25[0xc];
    auVar37._0_12_ = auVar13;
    auVar37[0xd] = (byte)((uint)iVar40 >> 8) & auVar10[0xd] |
                   (byte)((uint)iVar33 >> 8) & auVar25[0xd];
    auVar37[0xe] = (byte)((uint)iVar40 >> 0x10) & auVar10[0xe] |
                   (byte)((uint)iVar33 >> 0x10) & auVar25[0xe];
    auVar37[0xf] = (byte)((uint)iVar40 >> 0x18) & auVar10[0xf] |
                   (byte)((uint)iVar33 >> 0x18) & auVar25[0xf];
    fVar26 = (float)((ulong)auVar13._0_8_ >> 0x20);
    fVar29 = auVar13._8_4_;
    fVar32 = auVar37._12_4_;
    fVar24 = fVar12 + (fVar22 * fVar22 * (fVar22 * fVar22 * 0.719088 + -0.35786) + 1.085865) *
                      param_1 * fVar22;
    fVar28 = fVar12 + (fVar26 * fVar26 * (fVar26 * fVar26 * 0.719088 + -0.35786) + 1.085865) *
                      param_1 * fVar26;
    fVar31 = fVar12 + (fVar29 * fVar29 * (fVar29 * fVar29 * 0.719088 + -0.35786) + 1.085865) *
                      param_1 * fVar29;
    fVar34 = fVar12 + (fVar32 * fVar32 * (fVar32 * fVar32 * 0.719088 + -0.35786) + 1.085865) *
                      param_1 * fVar32;
    fVar24 = fVar24 + fVar24 * (fVar24 * fVar24 * 0.00833216 + -0.16666655) * fVar24 * fVar24;
    fVar28 = fVar28 + fVar28 * (fVar28 * fVar28 * 0.00833216 + -0.16666655) * fVar28 * fVar28;
    fVar31 = fVar31 + fVar31 * (fVar31 * fVar31 * 0.00833216 + -0.16666655) * fVar31 * fVar31;
    fVar34 = fVar34 + fVar34 * (fVar34 * fVar34 * 0.00833216 + -0.16666655) * fVar34 * fVar34;
    fVar22 = auVar10._0_4_ - fVar24 * fVar24;
    fVar26 = auVar10._4_4_ - fVar28 * fVar28;
    fVar29 = auVar10._8_4_ - fVar31 * fVar31;
    fVar32 = auVar10._12_4_ - fVar34 * fVar34;
    auVar17._0_4_ = fVar22 * fVar15;
    auVar17._4_4_ = fVar26 * fVar19;
    auVar17._8_4_ = fVar29 * fVar20;
    auVar17._12_4_ = fVar32 * fVar21;
    auVar25._8_4_ = 0x38d1b717;
    auVar25._0_8_ = 0x38d1b71738d1b717;
    auVar25._12_4_ = 0x38d1b717;
    auVar25 = NEON_fmax(auVar17,auVar25,4);
    auVar25 = NEON_frsqrte(auVar25,4);
    fVar22 = fVar22 * auVar25._0_4_;
    fVar26 = fVar26 * auVar25._4_4_;
    fVar29 = fVar29 * auVar25._8_4_;
    fVar32 = fVar32 * auVar25._12_4_;
    auVar18._0_4_ = fVar22 * fVar2;
    auVar18._4_4_ = fVar26 * fVar6;
    auVar18._8_4_ = fVar29 * fVar3;
    auVar18._12_4_ = fVar32 * fVar7;
    auVar14._0_4_ = fVar22 * fVar4;
    auVar14._4_4_ = fVar26 * fVar8;
    auVar14._8_4_ = fVar29 * fVar5;
    auVar14._12_4_ = fVar32 * fVar9;
    uVar36 = CONCAT44(auVar14._0_4_,auVar18._0_4_);
    uVar41 = CONCAT44(auVar14._4_4_,auVar18._4_4_);
    auVar16 = NEON_ext(auVar18,auVar18,8,1);
    auVar25 = NEON_ext(auVar14,auVar14,8,1);
    param_4[1] = CONCAT44(fVar24,fVar24);
    *param_4 = uVar36;
    param_4[3] = CONCAT44(fVar28,fVar28);
    param_4[2] = uVar41;
    param_4[5] = CONCAT44(fVar31,fVar31);
    param_4[4] = CONCAT44(auVar25._0_4_,auVar16._0_4_);
    param_4[7] = CONCAT44(fVar34,fVar34);
    param_4[6] = CONCAT44(auVar25._4_4_,auVar16._4_4_);
    param_4 = param_4 + 8;
  } while (param_2 < (undefined1 (*) [16])(puVar1 + (ulong)(uint)(param_3 << 2) * 4));
  return;
}


