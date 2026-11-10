/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030769b0; name: FUN_030769b0
 */


undefined8
FUN_030769b0(code *param_1,code *param_2,undefined8 *param_3,float *param_4,
            undefined1 (*param_5) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined1 auVar24 [16];
  undefined8 uVar23;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_130;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined1 local_f0 [16];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar31 = 0;
  local_70 = 0x7f7fffee7f7fffee;
  uStack_68 = 0x3fb3333300000000;
  puVar13 = param_3 + 0x18;
  uStack_a8 = param_3[0x19];
  local_b0 = *puVar13;
  uStack_98 = param_3[0x1b];
  local_a0 = param_3[0x1a];
  uStack_88 = param_3[0x1d];
  local_90 = param_3[0x1c];
  uStack_78 = param_3[0x1f];
  local_80 = param_3[0x1e];
  iVar14 = 0;
  fVar32 = (float)*(undefined8 *)(*param_5 + 8);
  fVar33 = (float)((ulong)*(undefined8 *)(*param_5 + 8) >> 0x20);
  fVar18 = (float)*(undefined8 *)*param_5;
  fVar19 = (float)((ulong)*(undefined8 *)*param_5 >> 0x20);
  fVar15 = (float)param_3[0xf];
  uVar23 = CONCAT44((float)((ulong)param_3[0xf] >> 0x20) - (float)((ulong)param_3[0x11] >> 0x20),
                    fVar15 - (float)param_3[0x11]);
  auVar26._0_12_ = SUB1612(*param_5,0);
  auVar26._12_4_ = fVar15 - (float)param_3[0x10];
  uStack_b8 = auVar26._8_8_;
  local_c0 = SUB168(*param_5,0);
  fVar20 = (float)param_3[9];
  fVar15 = (float)param_3[8];
  fVar17 = (float)((ulong)param_3[8] >> 0x20);
  do {
    fVar15 = auVar26._0_4_ * fVar15;
    fVar17 = auVar26._4_4_ * fVar17;
    fVar20 = auVar26._8_4_ * fVar20;
    local_100 = *param_4;
    fStack_fc = (float)CONCAT31(fStack_fc._1_3_,*(undefined1 *)(param_4 + 1));
    fVar16 = -(fVar20 + fVar15 + fVar17);
    fVar15 = -(fVar20 + fVar15 + fVar17);
    if ((float)param_3[0xc] * fVar16 < (float)param_3[0x12]) {
LAB_03076ba0:
      if (iVar14 < 1) {
        return 0x80040200;
      }
      auVar26._8_8_ = uStack_b8;
      auVar26._0_8_ = local_c0;
      fVar20 = (float)param_3[9];
      fVar21 = (float)((ulong)param_3[9] >> 0x20);
      fVar15 = (float)param_3[8];
      fVar17 = (float)((ulong)param_3[8] >> 0x20);
      break;
    }
    uVar22 = NEON_frecpe(CONCAT44(fVar15,fVar16),4);
    uVar29 = NEON_frecps(CONCAT44(fVar15,fVar16),uVar22,4);
    fVar17 = (float)uVar22 * (float)uVar29;
    fVar20 = (float)((ulong)uVar22 >> 0x20) * (float)((ulong)uVar29 >> 0x20);
    uVar29 = NEON_fmax(uVar23,0,4);
    uVar22 = NEON_frecps(CONCAT44(fVar15,fVar16),CONCAT44(fVar20,fVar17),4);
    uVar31 = NEON_fmin(CONCAT44((float)((ulong)uVar31 >> 0x20) +
                                (float)((ulong)param_3[0x21] >> 0x20) +
                                fVar20 * (float)((ulong)uVar22 >> 0x20) *
                                (float)((ulong)uVar29 >> 0x20),
                                (float)uVar31 + (float)param_3[0x21] +
                                fVar17 * (float)uVar22 * (float)uVar29),param_3[0xd],4);
    fVar16 = (float)uVar31;
    fVar15 = (float)((ulong)uVar31 >> 0x20);
    auVar26 = *(undefined1 (*) [16])(param_3 + 0x1e);
    uStack_78 = CONCAT44(auVar26._12_4_ + fVar15 * *(float *)((long)param_3 + 0x5c),
                         auVar26._8_4_ + fVar16 * *(float *)(param_3 + 0xb));
    local_80 = CONCAT44(auVar26._4_4_ + fVar15 * *(float *)((long)param_3 + 0x54),
                        auVar26._0_4_ + fVar16 * *(float *)(param_3 + 10));
    iVar12 = (*param_1)(param_3[6],param_3[0x20],&local_b0,&local_100,local_f0);
    if (4 < iVar12) goto LAB_03076ba0;
    iVar14 = iVar14 + 1;
    fVar32 = (float)uStack_b8;
    fVar33 = (float)((ulong)uStack_b8 >> 0x20);
    fVar18 = (float)local_c0;
    fVar19 = (float)((ulong)local_c0 >> 0x20);
    fVar20 = (float)param_3[9];
    fVar21 = (float)((ulong)param_3[9] >> 0x20);
    fVar15 = (float)param_3[8];
    fVar17 = (float)((ulong)param_3[8] >> 0x20);
    fVar34 = (float)param_3[4] * fStack_d8 +
             (float)*param_3 * local_e0 + *(float *)(param_3 + 2) * fStack_dc;
    fVar35 = (float)((ulong)param_3[4] >> 0x20) * fStack_d8 +
             (float)((ulong)*param_3 >> 0x20) * local_e0 +
             *(float *)((long)param_3 + 0x14) * fStack_dc;
    auVar26._0_8_ = CONCAT44(fVar35,fVar34);
    auVar26._8_4_ =
         (float)param_3[5] * fStack_d8 +
         (float)param_3[1] * local_e0 + *(float *)(param_3 + 3) * fStack_dc;
    auVar30._0_4_ = fVar34 * fVar15;
    auVar30._4_4_ = fVar35 * fVar17;
    auVar30._8_4_ = auVar26._8_4_ * fVar20;
    auVar30._12_4_ =
         ((float)((ulong)param_3[5] >> 0x20) * fStack_d8 +
         (float)((ulong)param_3[1] >> 0x20) * local_e0 +
         *(float *)((long)param_3 + 0x1c) * fStack_dc) * fVar21;
    auVar24 = NEON_ext(auVar30,auVar30,8,1);
    local_130 = (float)uVar23;
    auVar26._12_4_ =
         (local_f0._0_4_ - (float)param_3[0x10]) -
         fVar16 * (auVar30._0_4_ + auVar30._4_4_ + auVar24._0_4_);
    fVar34 = local_f0._0_4_ - (float)param_3[0x11];
    uVar23 = CONCAT44(local_f0._4_4_ - (float)((ulong)param_3[0x11] >> 0x20),fVar34);
    uStack_b8 = auVar26._8_8_;
    local_c0 = auVar26._0_8_;
    if (((local_130 <= fVar34) || (fVar34 <= 0.0)) || ((float)param_3[0xd] <= fVar16))
    goto LAB_03076ba0;
  } while (iVar14 != 6);
  fVar16 = auVar26._0_4_;
  auVar24._0_4_ = fVar15 * fVar16;
  fVar34 = auVar26._4_4_;
  auVar24._4_4_ = fVar17 * fVar34;
  auVar24._8_4_ = fVar20 * auVar26._8_4_;
  auVar24._12_4_ = fVar21 * auVar26._12_4_;
  auVar30 = NEON_ext(auVar24,auVar24,8,1);
  if (0.0 < auVar30._0_4_ + auVar24._0_4_ + auVar24._4_4_) {
    auVar8._4_4_ = fVar19;
    auVar8._0_4_ = fVar18;
    auVar8._8_4_ = fVar32;
    auVar8._12_4_ = fVar33;
    auVar9._4_4_ = fVar19;
    auVar9._0_4_ = fVar18;
    auVar9._8_4_ = fVar32;
    auVar9._12_4_ = fVar33;
    auVar30 = NEON_ext(auVar8,auVar9,4,1);
    auVar24 = NEON_ext(auVar26,auVar26,4,1);
    auVar7._4_4_ = fVar19;
    auVar7._0_4_ = fVar18;
    fVar35 = fVar18 * auVar24._0_4_ - fVar16 * auVar30._0_4_;
    fVar28 = fVar19 * auVar24._4_4_ - fVar34 * auVar30._4_4_;
    auVar25._0_8_ = CONCAT44(fVar28,fVar35);
    auVar25._8_4_ = fVar32 * fVar16 - auVar26._8_4_ * fVar18;
    auVar25._12_4_ = fVar33 * fVar34 - auVar26._12_4_ * fVar19;
    auVar30 = NEON_ext(auVar25,auVar25,4,1);
    uVar31 = NEON_ext(auVar30._0_8_,auVar25._0_8_,4,1);
    fVar35 = fVar15 * fVar35;
    fVar28 = fVar17 * fVar28;
    auVar1._4_4_ = fVar28;
    auVar1._0_4_ = fVar35;
    auVar1._8_4_ = fVar20 * auVar25._8_4_;
    auVar1._12_4_ = fVar21 * auVar25._12_4_;
    auVar2._4_4_ = fVar28;
    auVar2._0_4_ = fVar35;
    auVar2._8_4_ = fVar20 * auVar25._8_4_;
    auVar2._12_4_ = fVar21 * auVar25._12_4_;
    auVar26 = NEON_ext(auVar1,auVar2,4,1);
    fVar15 = fVar15 * (float)uVar31 - auVar26._0_4_;
    fVar18 = fVar17 * (float)((ulong)uVar31 >> 0x20) - auVar26._4_4_;
    fVar35 = fVar20 * auVar30._0_4_ - fVar35;
    fVar28 = fVar21 * auVar30._4_4_ - fVar28;
    auVar3._4_4_ = fVar18;
    auVar3._0_4_ = fVar15;
    auVar3._8_4_ = fVar35;
    auVar3._12_4_ = fVar28;
    auVar4._4_4_ = fVar18;
    auVar4._0_4_ = fVar15;
    auVar4._8_4_ = fVar35;
    auVar4._12_4_ = fVar28;
    auVar26 = NEON_ext(auVar3,auVar4,4,1);
    fVar21 = auVar26._0_4_;
    fVar34 = auVar26._4_4_;
    fVar17 = fVar15 * fVar15 + fVar21 * fVar21 + fVar34 * fVar34;
    fVar19 = fVar15 * fVar15 + fVar21 * fVar21 + fVar34 * fVar34;
    uVar23 = CONCAT44(-(uint)(fVar19 < 1.1920929e-07),-(uint)(fVar17 < 1.1920929e-07));
    uVar31 = NEON_frsqrte(CONCAT44(fVar19,fVar17),4);
    fVar20 = (float)uVar31;
    fVar16 = (float)((ulong)uVar31 >> 0x20);
    uVar31 = NEON_frsqrts(CONCAT44(fVar19,fVar17),CONCAT44(fVar16 * fVar16,fVar20 * fVar20),4);
    fVar20 = fVar20 * (float)uVar31;
    fVar16 = fVar16 * (float)((ulong)uVar31 >> 0x20);
    uVar31 = NEON_frsqrts(CONCAT44(fVar19,fVar17),CONCAT44(fVar16 * fVar16,fVar20 * fVar20),4);
    fVar20 = (float)uVar31 * fVar20;
    fVar16 = (float)((ulong)uVar31 >> 0x20) * fVar16;
    uStack_b8 = CONCAT44(fVar18 * fVar16,fVar15 * fVar20);
    local_c0 = CONCAT44(fVar34 * fVar16,fVar21 * fVar20);
    FUN_032cc3ac(&local_100,param_3,&local_c0);
    local_110 = 0.0 - local_100;
    fStack_10c = 0.0 - fStack_fc;
    fStack_108 = 0.0 - fStack_f8;
    fStack_104 = 0.0 - fStack_f4;
    (*param_2)(param_3[6],&local_110,param_3[0x20],puVar13,local_f0);
    FUN_032cc45c(&local_110,puVar13,&local_e0);
    auVar10._8_8_ = uVar23;
    auVar10._0_8_ = uVar23;
    local_100 = (local_f0._0_4_ - local_110) * local_100;
    fVar15 = (local_f0._4_4_ - fStack_10c) * fStack_fc;
    fStack_f8 = (local_f0._8_4_ - fStack_108) * fStack_f8;
    fStack_f4 = (local_f0._12_4_ - fStack_104) * fStack_f4;
    auVar5._4_4_ = fVar15;
    auVar5._0_4_ = local_100;
    auVar5._8_4_ = fStack_f8;
    auVar5._12_4_ = fStack_f4;
    auVar6._4_4_ = fVar15;
    auVar6._0_4_ = local_100;
    auVar6._8_4_ = fStack_f8;
    auVar6._12_4_ = fStack_f4;
    auVar26 = NEON_ext(auVar5,auVar6,8,1);
    auVar11._8_8_ = uStack_b8;
    auVar11._0_8_ = local_c0;
    auVar27._0_12_ = auVar11._0_12_;
    auVar27._12_4_ = (local_100 + fVar15 + auVar26._0_4_) - (float)param_3[0x10];
    auVar7._8_4_ = fVar32;
    auVar7._12_4_ = fVar33;
    auVar26 = auVar27 ^ (auVar27 ^ auVar7) & auVar10;
  }
  *(long *)(*param_5 + 8) = auVar26._8_8_;
  *(long *)*param_5 = auVar26._0_8_;
  return 0;
}


