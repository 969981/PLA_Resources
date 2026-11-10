/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02efc7a0; name: FUN_02efc7a0
 */


void FUN_02efc7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                 undefined1 (*param_5) [16],int param_6,float *param_7,float *param_8,
                 undefined8 *param_9)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar30;
  undefined8 uVar27;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar32;
  float fVar33;
  undefined1 auVar34 [12];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar40;
  float fVar41;
  undefined1 auVar37 [16];
  float fVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar43;
  int iVar44;
  int iVar47;
  undefined8 uVar45;
  float fVar48;
  int iVar49;
  undefined1 auVar46 [16];
  int iVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  
  FUN_02f01290(param_7[6],param_7[7],param_7[8],param_1,param_2,param_3,param_8,&local_a4);
  fVar4 = param_7[4];
  fVar5 = param_7[5];
  uVar1 = param_6 << 2;
  fVar6 = *param_7;
  fVar7 = param_7[1];
  fVar8 = param_7[2];
  fVar9 = param_7[3];
  fVar10 = *param_8;
  fVar11 = param_8[1];
  fVar24 = param_8[6];
  fVar25 = param_8[7];
  fVar16 = fVar8 * fVar4 - fVar7 * fVar5;
  fVar20 = param_8[2];
  fVar21 = param_8[3];
  fVar22 = param_8[4];
  fVar23 = param_8[5];
  fVar17 = fVar6 * fVar5 - fVar9 * fVar8;
  fVar26 = param_8[8];
  fVar19 = fVar9 * fVar7 - fVar6 * fVar4;
  fVar18 = fVar10 * fVar6 + fVar7 * fVar11 + fVar8 * fVar20;
  fVar33 = fVar21 * fVar6 + fVar7 * fVar22 + fVar8 * fVar23;
  fVar7 = fVar24 * fVar6 + fVar7 * fVar25 + fVar8 * fVar26;
  fVar8 = fVar10 * fVar9 + fVar4 * fVar11 + fVar5 * fVar20;
  fVar11 = fVar10 * fVar16 + fVar11 * fVar17 + fVar19 * fVar20;
  fVar10 = fVar21 * fVar16 + fVar17 * fVar22 + fVar19 * fVar23;
  fVar16 = fVar24 * fVar16 + fVar17 * fVar25 + fVar19 * fVar26;
  fVar6 = fVar21 * fVar9 + fVar4 * fVar22 + fVar5 * fVar23;
  fVar4 = fVar24 * fVar9 + fVar4 * fVar25 + fVar5 * fVar26;
  fVar9 = local_a4 * fVar18 + fVar33 * local_a0 + fVar7 * fStack_9c;
  fVar19 = local_98 * fVar18 + fVar33 * fStack_94 + fVar7 * local_90;
  fVar7 = fStack_8c * fVar18 + fVar33 * local_88 + fVar7 * fStack_84;
  fVar17 = local_a4 * fVar8 + fVar6 * local_a0 + fVar4 * fStack_9c;
  fVar5 = local_98 * fVar8 + fVar6 * fStack_94 + fVar4 * local_90;
  fVar18 = fStack_8c * fVar8 + fVar6 * local_88 + fVar4 * fStack_84;
  fVar6 = local_98 * fVar11 + fVar10 * fStack_94 + fVar16 * local_90;
  fVar8 = fStack_8c * fVar11 + fVar10 * local_88 + fVar16 * fStack_84;
  fVar4 = local_a4 * fVar11 + fVar10 * local_a0 + fVar16 * fStack_9c;
  puVar3 = *param_5;
  if (0.5 < param_4) {
    if (uVar1 != 0) {
      fVar10 = 1.5707964 - param_4 * 1.5707964;
      auVar46 = NEON_fmov(0x3f800000,4);
      auVar28 = NEON_fmov(0xbf800000,4);
      do {
        auVar37 = *param_5;
        auVar35 = param_5[1];
        fVar11 = auVar37._0_4_;
        fVar24 = auVar35._0_4_;
        auVar52 = param_5[2];
        auVar29 = param_5[3];
        fVar16 = auVar52._0_4_;
        fVar25 = auVar29._0_4_;
        fVar22 = auVar37._4_4_;
        fVar48 = auVar35._4_4_;
        fVar23 = auVar52._4_4_;
        fVar51 = auVar29._4_4_;
        auVar37 = NEON_ext(auVar37,auVar37,8,1);
        auVar35 = NEON_ext(auVar35,auVar35,8,1);
        auVar52 = NEON_ext(auVar52,auVar52,8,1);
        auVar29 = NEON_ext(auVar29,auVar29,8,1);
        fVar20 = auVar37._0_4_;
        fVar26 = auVar35._0_4_;
        fVar21 = auVar52._0_4_;
        fVar33 = auVar29._0_4_;
        param_5 = param_5 + 4;
        fVar36 = fVar11 * fVar4 + fVar17 * fVar22 + fVar9 * fVar20;
        fVar40 = fVar24 * fVar4 + fVar17 * fVar48 + fVar9 * fVar26;
        fVar41 = fVar16 * fVar4 + fVar17 * fVar23 + fVar9 * fVar21;
        fVar42 = fVar25 * fVar4 + fVar17 * fVar51 + fVar9 * fVar33;
        fVar43 = fVar11 * fVar6 + fVar5 * fVar22 + fVar19 * fVar20;
        fVar30 = fVar24 * fVar6 + fVar5 * fVar48 + fVar19 * fVar26;
        fVar31 = fVar16 * fVar6 + fVar5 * fVar23 + fVar19 * fVar21;
        fVar32 = fVar25 * fVar6 + fVar5 * fVar51 + fVar19 * fVar33;
        auVar52._0_4_ = fVar11 * fVar8 + fVar18 * fVar22 + fVar7 * fVar20;
        auVar52._4_4_ = fVar24 * fVar8 + fVar18 * fVar48 + fVar7 * fVar26;
        auVar52._8_4_ = fVar16 * fVar8 + fVar18 * fVar23 + fVar7 * fVar21;
        auVar52._12_4_ = fVar25 * fVar8 + fVar18 * fVar51 + fVar7 * fVar33;
        fVar22 = fVar36 * fVar36 + fVar43 * fVar43;
        fVar23 = fVar40 * fVar40 + fVar30 * fVar30;
        fVar24 = fVar41 * fVar41 + fVar31 * fVar31;
        fVar25 = fVar42 * fVar42 + fVar32 * fVar32;
        fVar11 = fVar22 + -0.0001;
        fVar16 = fVar23 + -0.0001;
        fVar20 = fVar24 + -0.0001;
        fVar21 = fVar25 + -0.0001;
        auVar37 = NEON_fmax(auVar52,auVar28,4);
        iVar44 = -(uint)(fVar11 < 0.0);
        iVar47 = -(uint)(fVar16 < 0.0);
        iVar49 = -(uint)(fVar20 < 0.0);
        iVar50 = -(uint)(fVar21 < 0.0);
        iVar12 = -(uint)(0.0 <= fVar11);
        iVar13 = -(uint)(0.0 <= fVar16);
        iVar14 = -(uint)(0.0 <= fVar20);
        iVar15 = -(uint)(0.0 <= fVar21);
        fVar11 = (float)CONCAT13((byte)((uint)iVar44 >> 0x18) & auVar46[3] |
                                 (byte)((uint)iVar12 >> 0x18) & auVar37[3],
                                 CONCAT12((byte)((uint)iVar44 >> 0x10) & auVar46[2] |
                                          (byte)((uint)iVar12 >> 0x10) & auVar37[2],
                                          CONCAT11((byte)((uint)iVar44 >> 8) & auVar46[1] |
                                                   (byte)((uint)iVar12 >> 8) & auVar37[1],
                                                   (byte)iVar44 & auVar46[0] |
                                                   (byte)iVar12 & auVar37[0])));
        auVar34._0_8_ =
             CONCAT17((byte)((uint)iVar47 >> 0x18) & auVar46[7] |
                      (byte)((uint)iVar13 >> 0x18) & auVar37[7],
                      CONCAT16((byte)((uint)iVar47 >> 0x10) & auVar46[6] |
                               (byte)((uint)iVar13 >> 0x10) & auVar37[6],
                               CONCAT15((byte)((uint)iVar47 >> 8) & auVar46[5] |
                                        (byte)((uint)iVar13 >> 8) & auVar37[5],
                                        CONCAT14((byte)iVar47 & auVar46[4] |
                                                 (byte)iVar13 & auVar37[4],fVar11))));
        auVar34[8] = (byte)iVar49 & auVar46[8] | (byte)iVar14 & auVar37[8];
        auVar34[9] = (byte)((uint)iVar49 >> 8) & auVar46[9] | (byte)((uint)iVar14 >> 8) & auVar37[9]
        ;
        auVar34[10] = (byte)((uint)iVar49 >> 0x10) & auVar46[10] |
                      (byte)((uint)iVar14 >> 0x10) & auVar37[10];
        auVar34[0xb] = (byte)((uint)iVar49 >> 0x18) & auVar46[0xb] |
                       (byte)((uint)iVar14 >> 0x18) & auVar37[0xb];
        auVar29[0xc] = (byte)iVar50 & auVar46[0xc] | (byte)iVar15 & auVar37[0xc];
        auVar29._0_12_ = auVar34;
        auVar29[0xd] = (byte)((uint)iVar50 >> 8) & auVar46[0xd] |
                       (byte)((uint)iVar15 >> 8) & auVar37[0xd];
        auVar29[0xe] = (byte)((uint)iVar50 >> 0x10) & auVar46[0xe] |
                       (byte)((uint)iVar15 >> 0x10) & auVar37[0xe];
        auVar29[0xf] = (byte)((uint)iVar50 >> 0x18) & auVar46[0xf] |
                       (byte)((uint)iVar15 >> 0x18) & auVar37[0xf];
        fVar16 = (float)((ulong)auVar34._0_8_ >> 0x20);
        fVar20 = auVar34._8_4_;
        fVar21 = auVar29._12_4_;
        fVar26 = fVar10 + (fVar11 * fVar11 * (fVar11 * fVar11 * 0.719088 + -0.35786) + 1.085865) *
                          param_4 * fVar11;
        fVar33 = fVar10 + (fVar16 * fVar16 * (fVar16 * fVar16 * 0.719088 + -0.35786) + 1.085865) *
                          param_4 * fVar16;
        fVar48 = fVar10 + (fVar20 * fVar20 * (fVar20 * fVar20 * 0.719088 + -0.35786) + 1.085865) *
                          param_4 * fVar20;
        fVar51 = fVar10 + (fVar21 * fVar21 * (fVar21 * fVar21 * 0.719088 + -0.35786) + 1.085865) *
                          param_4 * fVar21;
        fVar26 = fVar26 + fVar26 * (fVar26 * fVar26 * 0.00833216 + -0.16666655) * fVar26 * fVar26;
        fVar33 = fVar33 + fVar33 * (fVar33 * fVar33 * 0.00833216 + -0.16666655) * fVar33 * fVar33;
        fVar48 = fVar48 + fVar48 * (fVar48 * fVar48 * 0.00833216 + -0.16666655) * fVar48 * fVar48;
        fVar51 = fVar51 + fVar51 * (fVar51 * fVar51 * 0.00833216 + -0.16666655) * fVar51 * fVar51;
        fVar11 = auVar46._0_4_ - fVar26 * fVar26;
        fVar16 = auVar46._4_4_ - fVar33 * fVar33;
        fVar20 = auVar46._8_4_ - fVar48 * fVar48;
        fVar21 = auVar46._12_4_ - fVar51 * fVar51;
        auVar38._0_4_ = fVar11 * fVar22;
        auVar38._4_4_ = fVar16 * fVar23;
        auVar38._8_4_ = fVar20 * fVar24;
        auVar38._12_4_ = fVar21 * fVar25;
        auVar37._8_4_ = 0x38d1b717;
        auVar37._0_8_ = 0x38d1b71738d1b717;
        auVar37._12_4_ = 0x38d1b717;
        auVar37 = NEON_fmax(auVar38,auVar37,4);
        auVar37 = NEON_frsqrte(auVar37,4);
        fVar11 = fVar11 * auVar37._0_4_;
        fVar16 = fVar16 * auVar37._4_4_;
        fVar20 = fVar20 * auVar37._8_4_;
        fVar21 = fVar21 * auVar37._12_4_;
        fVar36 = fVar11 * fVar36;
        fVar40 = fVar16 * fVar40;
        fVar41 = fVar20 * fVar41;
        fVar42 = fVar21 * fVar42;
        fVar11 = fVar11 * fVar43;
        fVar16 = fVar16 * fVar30;
        fVar20 = fVar20 * fVar31;
        fVar21 = fVar21 * fVar32;
        auVar39._0_4_ = fVar26 * fStack_8c + local_a4 * fVar36 + local_98 * fVar11;
        auVar39._4_4_ = fVar33 * fStack_8c + local_a4 * fVar40 + local_98 * fVar16;
        auVar39._8_4_ = fVar48 * fStack_8c + local_a4 * fVar41 + local_98 * fVar20;
        auVar39._12_4_ = fVar51 * fStack_8c + local_a4 * fVar42 + local_98 * fVar21;
        auVar35._0_4_ = fVar26 * local_88 + local_a0 * fVar36 + fStack_94 * fVar11;
        auVar35._4_4_ = fVar33 * local_88 + local_a0 * fVar40 + fStack_94 * fVar16;
        auVar35._8_4_ = fVar48 * local_88 + local_a0 * fVar41 + fStack_94 * fVar20;
        auVar35._12_4_ = fVar51 * local_88 + local_a0 * fVar42 + fStack_94 * fVar21;
        fVar11 = fVar26 * fStack_84 + fStack_9c * fVar36 + local_90 * fVar11;
        fVar16 = fVar33 * fStack_84 + fStack_9c * fVar40 + local_90 * fVar16;
        fVar20 = fVar48 * fStack_84 + fStack_9c * fVar41 + local_90 * fVar20;
        fVar21 = fVar51 * fStack_84 + fStack_9c * fVar42 + local_90 * fVar21;
        uVar27 = CONCAT44(auVar35._0_4_,auVar39._0_4_);
        uVar45 = CONCAT44(auVar35._4_4_,auVar39._4_4_);
        auVar52 = NEON_ext(auVar39,auVar39,8,1);
        auVar37 = NEON_ext(auVar35,auVar35,8,1);
        param_9[1] = CONCAT44(fVar11,fVar11);
        *param_9 = uVar27;
        param_9[3] = CONCAT44(fVar16,fVar16);
        param_9[2] = uVar45;
        param_9[5] = CONCAT44(fVar20,fVar20);
        param_9[4] = CONCAT44(auVar37._0_4_,auVar52._0_4_);
        param_9[7] = CONCAT44(fVar21,fVar21);
        param_9[6] = CONCAT44(auVar37._4_4_,auVar52._4_4_);
        param_9 = param_9 + 8;
      } while (param_5 < (undefined1 (*) [16])(puVar3 + (ulong)uVar1 * 4));
    }
  }
  else if (uVar1 != 0) {
    fVar10 = (ABS(param_4 * 3.1415927) * -0.4052847 + 1.2732395) * param_4 * 3.1415927;
    fVar10 = 1.0 / (fVar10 + 0.0001 + (ABS(fVar10) * fVar10 - fVar10) * 0.225);
    auVar28._8_4_ = 0xbf7fbe77;
    auVar28._0_8_ = 0xbf7fbe77bf7fbe77;
    auVar28._12_4_ = 0xbf7fbe77;
    do {
      auVar46 = *param_5;
      auVar37 = param_5[1];
      fVar11 = auVar46._0_4_;
      fVar24 = auVar37._0_4_;
      fVar22 = auVar46._4_4_;
      fVar48 = auVar37._4_4_;
      auVar35 = NEON_ext(auVar46,auVar46,8,1);
      auVar46 = param_5[2];
      auVar52 = param_5[3];
      fVar16 = auVar46._0_4_;
      fVar25 = auVar52._0_4_;
      fVar23 = auVar46._4_4_;
      fVar51 = auVar52._4_4_;
      auVar37 = NEON_ext(auVar37,auVar37,8,1);
      auVar46 = NEON_ext(auVar46,auVar46,8,1);
      auVar52 = NEON_ext(auVar52,auVar52,8,1);
      fVar20 = auVar35._0_4_;
      fVar26 = auVar37._0_4_;
      fVar21 = auVar46._0_4_;
      fVar33 = auVar52._0_4_;
      param_5 = param_5 + 4;
      auVar53._0_4_ = fVar11 * fVar8 + fVar18 * fVar22 + fVar7 * fVar20;
      auVar53._4_4_ = fVar24 * fVar8 + fVar18 * fVar48 + fVar7 * fVar26;
      auVar53._8_4_ = fVar16 * fVar8 + fVar18 * fVar23 + fVar7 * fVar21;
      auVar53._12_4_ = fVar25 * fVar8 + fVar18 * fVar51 + fVar7 * fVar33;
      auVar46 = NEON_fmax(auVar53,auVar28,4);
      fVar36 = fVar11 * fVar4 + fVar17 * fVar22 + fVar9 * fVar20;
      fVar40 = fVar24 * fVar4 + fVar17 * fVar48 + fVar9 * fVar26;
      fVar41 = fVar16 * fVar4 + fVar17 * fVar23 + fVar9 * fVar21;
      fVar42 = fVar25 * fVar4 + fVar17 * fVar51 + fVar9 * fVar33;
      fVar43 = fVar11 * fVar6 + fVar5 * fVar22 + fVar19 * fVar20;
      fVar26 = fVar24 * fVar6 + fVar5 * fVar48 + fVar19 * fVar26;
      fVar48 = fVar16 * fVar6 + fVar5 * fVar23 + fVar19 * fVar21;
      fVar33 = fVar25 * fVar6 + fVar5 * fVar51 + fVar19 * fVar33;
      fVar22 = auVar46._0_4_ + fVar10;
      fVar23 = auVar46._4_4_ + fVar10;
      fVar24 = auVar46._8_4_ + fVar10;
      fVar25 = auVar46._12_4_ + fVar10;
      auVar54._0_4_ = fVar22 * fVar22 + fVar36 * fVar36 + fVar43 * fVar43;
      auVar54._4_4_ = fVar23 * fVar23 + fVar40 * fVar40 + fVar26 * fVar26;
      auVar54._8_4_ = fVar24 * fVar24 + fVar41 * fVar41 + fVar48 * fVar48;
      auVar54._12_4_ = fVar25 * fVar25 + fVar42 * fVar42 + fVar33 * fVar33;
      auVar46 = NEON_frsqrte(auVar54,4);
      fVar11 = auVar46._0_4_;
      fVar22 = fVar22 * fVar11;
      fVar16 = auVar46._4_4_;
      fVar23 = fVar23 * fVar16;
      fVar20 = auVar46._8_4_;
      fVar24 = fVar24 * fVar20;
      fVar21 = auVar46._12_4_;
      fVar25 = fVar25 * fVar21;
      fVar36 = fVar36 * fVar11;
      fVar40 = fVar40 * fVar16;
      fVar41 = fVar41 * fVar20;
      fVar42 = fVar42 * fVar21;
      fVar43 = fVar43 * fVar11;
      fVar26 = fVar26 * fVar16;
      fVar48 = fVar48 * fVar20;
      fVar33 = fVar33 * fVar21;
      auVar55._0_4_ = fVar22 * fStack_8c + local_a4 * fVar36 + local_98 * fVar43;
      auVar55._4_4_ = fVar23 * fStack_8c + local_a4 * fVar40 + local_98 * fVar26;
      auVar55._8_4_ = fVar24 * fStack_8c + local_a4 * fVar41 + local_98 * fVar48;
      auVar55._12_4_ = fVar25 * fStack_8c + local_a4 * fVar42 + local_98 * fVar33;
      fVar11 = fVar22 * local_88 + local_a0 * fVar36 + fStack_94 * fVar43;
      fVar16 = fVar23 * local_88 + local_a0 * fVar40 + fStack_94 * fVar26;
      fVar20 = fVar24 * local_88 + local_a0 * fVar41 + fStack_94 * fVar48;
      fVar21 = fVar25 * local_88 + local_a0 * fVar42 + fStack_94 * fVar33;
      fVar22 = fVar22 * fStack_84 + fStack_9c * fVar36 + local_90 * fVar43;
      fVar23 = fVar23 * fStack_84 + fStack_9c * fVar40 + local_90 * fVar26;
      fVar24 = fVar24 * fStack_84 + fStack_9c * fVar41 + local_90 * fVar48;
      fVar25 = fVar25 * fStack_84 + fStack_9c * fVar42 + local_90 * fVar33;
      auVar37 = NEON_ext(auVar55,auVar55,8,1);
      auVar46._4_4_ = fVar16;
      auVar46._0_4_ = fVar11;
      auVar46._8_4_ = fVar20;
      auVar46._12_4_ = fVar21;
      auVar2._4_4_ = fVar16;
      auVar2._0_4_ = fVar11;
      auVar2._8_4_ = fVar20;
      auVar2._12_4_ = fVar21;
      auVar46 = NEON_ext(auVar46,auVar2,8,1);
      param_9[1] = CONCAT44(fVar22,fVar22);
      *param_9 = CONCAT44(fVar11,auVar55._0_4_);
      param_9[3] = CONCAT44(fVar23,fVar23);
      param_9[2] = CONCAT44(fVar16,auVar55._4_4_);
      param_9[5] = CONCAT44(fVar24,fVar24);
      param_9[4] = CONCAT44(auVar46._0_4_,auVar37._0_4_);
      param_9[7] = CONCAT44(fVar25,fVar25);
      param_9[6] = CONCAT44(auVar46._4_4_,auVar37._4_4_);
      param_9 = param_9 + 8;
    } while (param_5 < (undefined1 (*) [16])(puVar3 + (ulong)uVar1 * 4));
  }
  return;
}


