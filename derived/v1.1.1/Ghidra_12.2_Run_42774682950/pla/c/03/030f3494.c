/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f3494; name: FUN_030f3494
 */


void FUN_030f3494(float param_1,long param_2,undefined8 *param_3,long param_4,undefined8 *param_5)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  long lVar12;
  undefined1 (*pauVar13) [16];
  long lVar14;
  long *plVar15;
  undefined4 uVar16;
  float *pfVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar27;
  undefined8 uVar24;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  int iVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar36 [16];
  float fVar40;
  float fVar43;
  float fVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 uVar45;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  float fStack_118;
  float fStack_114;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0 [2];
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  float fStack_88;
  float fStack_84;
  
  uVar24 = param_3[2];
  param_5[1] = CONCAT44(*(float *)(param_3 + 4) - *(float *)(param_2 + 0x140),(int)param_3[3]);
  *param_5 = uVar24;
  *(undefined4 *)(param_5 + 6) = *(undefined4 *)(param_2 + 0x124);
  uVar16 = *(undefined4 *)(param_2 + 0x120);
  pfVar17 = (float *)(param_5 + 4);
  pfVar17[0] = 0.0;
  pfVar17[1] = 0.0;
  *(undefined8 *)((long)param_5 + 0x34) = 0;
  *(undefined4 *)((long)param_5 + 0x3c) = uVar16;
  *(undefined4 *)(param_5 + 8) = 0;
  pfVar18 = (float *)(param_5 + 2);
  pfVar18[0] = 0.0;
  pfVar18[1] = 0.0;
  param_5[3] = 0;
  param_5[5] = 0;
  iVar11 = (**(code **)(**(long **)(param_2 + 0x48) + 0x78))(*(long **)(param_2 + 0x48),param_3[5]);
  if (iVar11 == 0) {
    return;
  }
  lVar12 = (**(code **)(**(long **)(param_2 + 0x48) + 0x80))(*(long **)(param_2 + 0x48),param_3[5]);
  pauVar13 = (undefined1 (*) [16])
             (**(code **)(**(long **)(param_2 + 0x48) + 0x100))
                       (*(long **)(param_2 + 0x48),*(undefined4 *)(lVar12 + 0x80));
  uVar35 = NEON_fmax(CONCAT44(*(undefined4 *)(param_2 + 0x118),*(undefined4 *)(param_2 + 0x118)),
                     0x3dcccccd3dcccccd,4);
  fVar20 = (float)*(undefined8 *)(param_2 + 0x138);
  fVar19 = (float)*(undefined8 *)(param_2 + 0x130);
  fVar21 = (float)((ulong)*(undefined8 *)(param_2 + 0x130) >> 0x20);
  uStack_f8 = param_3[1];
  local_100 = *param_3;
  auVar30 = *(undefined1 (*) [16])(param_3 + 2);
  fVar22 = auVar30._0_4_ * fVar19;
  fVar27 = auVar30._4_4_ * fVar21;
  fVar28 = auVar30._8_4_ * fVar20;
  fVar23 = fVar22 + fVar27 + fVar28;
  uVar24 = CONCAT44(fVar22 + fVar27 + fVar28,fVar23);
  if ((float)uVar35 < fVar23) {
    auVar31 = *(undefined1 (*) [16])(param_2 + 0x90);
    fVar23 = auVar30._0_4_ * ((float)local_100 - auVar31._0_4_);
    fVar27 = auVar30._4_4_ * ((float)((ulong)local_100 >> 0x20) - auVar31._4_4_);
    fVar28 = auVar30._8_4_ * ((float)uStack_f8 - auVar31._8_4_);
    uVar35 = NEON_frecpe(uVar24,4);
    uVar45 = NEON_frecps(uVar24,uVar35,4);
    fVar22 = (float)uVar35 * (float)uVar45;
    fVar43 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar45 >> 0x20);
    uVar24 = NEON_frecps(uVar24,CONCAT44(fVar43,fVar22),4);
    fVar22 = (fVar23 + fVar27 + fVar28) * fVar22 * (float)uVar24;
    fVar23 = (fVar23 + fVar27 + fVar28) * fVar43 * (float)((ulong)uVar24 >> 0x20);
    uStack_f8 = CONCAT44(auVar31._12_4_ +
                         (float)((ulong)*(undefined8 *)(param_2 + 0x138) >> 0x20) * fVar23,
                         auVar31._8_4_ + fVar20 * fVar22);
    local_100 = CONCAT44(auVar31._4_4_ + fVar21 * fVar23,auVar31._0_4_ + fVar19 * fVar22);
  }
  lVar14 = (**(code **)(**(long **)(param_2 + 0x48) + 0x30))();
  plVar15 = *(long **)(*(long *)(lVar14 + 0x48) + (ulong)*(ushort *)(lVar12 + 0x8a) * 0x50 + 8);
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15,param_3,param_3 + 2,lVar12,pfVar18,pfVar17);
    fVar19 = *(float *)(param_4 + 8);
    uStack_f8 = CONCAT44(uStack_f8._4_4_ + *(float *)((long)param_5 + 0x1c) * fVar19,
                         (float)uStack_f8 + *(float *)(param_5 + 3) * fVar19);
    local_100 = CONCAT44(local_100._4_4_ + *(float *)((long)param_5 + 0x14) * fVar19,
                         (float)local_100 + *pfVar18 * fVar19);
  }
  lVar14 = *(long *)(lVar12 + 0x78);
  if (*(short *)(lVar14 + 0x1a) < 0) {
    uStack_a8 = uStack_f8;
    local_b0 = local_100;
    local_c0[0] = *(undefined4 *)(param_3 + 6);
    local_f0 = local_f0 & 0xffffffffffff0000;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_b8 = lVar12;
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar14 + 0x18) * 0x200 + 0x40))
              (lVar14,local_c0,&local_f0);
    param_5[3] = CONCAT44((float)((ulong)param_5[3] >> 0x20) + uStack_d8._4_4_,
                          (float)param_5[3] + (float)uStack_d8);
    param_5[2] = CONCAT44((float)((ulong)param_5[2] >> 0x20) + local_e0._4_4_,
                          (float)param_5[2] + (float)local_e0);
    param_5[5] = CONCAT44((float)((ulong)param_5[5] >> 0x20) + uStack_c8._4_4_,
                          (float)param_5[5] + (float)uStack_c8);
    param_5[4] = CONCAT44((float)((ulong)param_5[4] >> 0x20) + local_d0._4_4_,
                          (float)param_5[4] + (float)local_d0);
    fVar19 = (float)param_5[1];
    fVar21 = (float)((ulong)param_5[1] >> 0x20);
    uVar24 = *param_5;
    auVar30._0_4_ = (float)local_e0 * (float)uVar24;
    auVar30._4_4_ = local_e0._4_4_ * (float)((ulong)uVar24 >> 0x20);
    auVar30._8_4_ = (float)uStack_d8 * fVar19;
    auVar30._12_4_ = uStack_d8._4_4_ * fVar21;
    auVar31 = NEON_ext(auVar30,auVar30,8,1);
    param_5[1] = CONCAT44(fVar21 + (auVar30._0_4_ + auVar30._4_4_ + auVar31._0_4_) *
                                   *(float *)(param_4 + 8),fVar19);
    *param_5 = uVar24;
    fVar19 = *(float *)(param_4 + 8);
    uStack_f8 = CONCAT44(uStack_f8._4_4_ + uStack_d8._4_4_ * fVar19,
                         (float)uStack_f8 + (float)uStack_d8 * fVar19);
    local_100 = CONCAT44(local_100._4_4_ + local_e0._4_4_ * fVar19,
                         (float)local_100 + (float)local_e0 * fVar19);
    uVar1 = *(uint *)(lVar12 + 0x54);
  }
  else {
    uVar1 = *(uint *)(lVar12 + 0x54);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    local_120._0_4_ = *pfVar18;
    local_120._4_4_ = *(float *)((long)param_5 + 0x14);
    fStack_118 = *(float *)(param_5 + 3);
    fStack_114 = *(float *)((long)param_5 + 0x1c);
  }
  else {
    fVar19 = (float)((ulong)local_100 >> 0x20);
    fVar21 = (float)((ulong)uStack_f8 >> 0x20);
    if ((uVar1 >> 2 & 1) == 0) {
      pauVar2 = (undefined1 (*) [16])(pauVar13[2] + 8);
      fVar20 = *(float *)*pauVar2;
      fVar22 = *(float *)(pauVar13[2] + 0xc);
      fVar23 = *(float *)pauVar13[3];
      fVar27 = *(float *)(pauVar13[3] + 4);
      local_120 = *(undefined8 *)(pauVar13[3] + 8);
      fStack_114 = 0.0;
      if (1.1920929e-07 < ABS(fVar23) ||
          (1.1920929e-07 < ABS(fVar20) || 1.1920929e-07 < ABS(fVar22))) {
        fVar34 = (float)*(undefined8 *)(*pauVar13 + 8);
        fVar39 = (float)((ulong)*(undefined8 *)(*pauVar13 + 8) >> 0x20);
        uVar24 = *(undefined8 *)*pauVar13;
        fVar28 = (float)uVar24;
        fVar43 = (float)((ulong)uVar24 >> 0x20);
        auVar31._12_4_ = fVar39;
        auVar31._0_12_ = *(undefined1 (*) [12])*pauVar13;
        auVar41._12_4_ = fVar39;
        auVar41._0_12_ = *(undefined1 (*) [12])*pauVar13;
        auVar30 = NEON_ext(auVar31,auVar41,8,1);
        auVar31 = NEON_ext(*pauVar2,*pauVar2,4,1);
        local_130 = auVar31._0_8_;
        uVar24 = NEON_ext(uVar24,auVar30._0_8_,4,1);
        fVar38 = auVar30._4_4_ * auVar30._4_4_;
        fVar33 = fVar20 * fVar28 + fVar22 * fVar43 + fVar23 * fVar34;
        fVar37 = fVar20 * fVar28 + fVar22 * fVar43 + fVar23 * fVar34;
        fVar29 = fVar38 + -0.5;
        fVar38 = fVar38 + -0.5;
        auVar36._0_4_ = auVar31._0_4_ * fVar28 - fVar20 * (float)uVar24;
        auVar36._4_4_ = auVar31._4_4_ * fVar43 - fVar22 * (float)((ulong)uVar24 >> 0x20);
        auVar36._8_4_ = fVar20 * fVar34 - fVar23 * fVar28;
        auVar36._12_4_ = fVar22 * fVar39 - fVar27 * fVar43;
        auVar30 = NEON_ext(auVar36,auVar36,4,1);
        fVar28 = fVar20 * fVar29 + fVar28 * fVar33 + auVar30._0_4_ * fVar39;
        fVar43 = fVar22 * fVar38 + fVar43 * fVar37 + auVar30._4_4_ * fVar39;
        fVar34 = fVar23 * fVar29 + fVar34 * fVar33 + auVar36._0_4_ * fVar39;
        fVar39 = fVar27 * fVar38 + fVar39 * fVar37 + auVar36._4_4_ * fVar39;
        fVar28 = fVar28 + fVar28;
        fVar43 = fVar43 + fVar43;
        fVar34 = fVar34 + fVar34;
        fVar29 = fVar28 * fVar28 + fVar43 * fVar43 + fVar34 * fVar34;
        fVar38 = fVar28 * fVar28 + fVar43 * fVar43 + fVar34 * fVar34;
        uVar24 = CONCAT44(fVar38,fVar29);
        uVar35 = NEON_frsqrte(uVar24,4);
        fVar33 = (float)uVar35;
        fVar37 = (float)((ulong)uVar35 >> 0x20);
        uVar35 = NEON_frsqrts(uVar24,CONCAT44(fVar37 * fVar37,fVar33 * fVar33),4);
        fVar33 = fVar33 * (float)uVar35;
        fVar37 = fVar37 * (float)((ulong)uVar35 >> 0x20);
        uVar24 = NEON_frsqrts(uVar24,CONCAT44(fVar37 * fVar37,fVar33 * fVar33),4);
        iVar11 = -(uint)(fVar29 <= 0.0);
        iVar32 = -(uint)(fVar38 <= 0.0);
        fVar33 = (float)uVar24 * fVar33;
        fVar37 = (float)((ulong)uVar24 >> 0x20) * fVar37;
        fVar40 = *(float *)(param_4 + 0xc);
        fVar33 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                                 CONCAT12((byte)((uint)fVar33 >> 0x10) &
                                          ~(byte)((uint)iVar11 >> 0x10),
                                          CONCAT11((byte)((uint)fVar33 >> 8) &
                                                   ~(byte)((uint)iVar11 >> 8),
                                                   SUB41(fVar33,0) & ~(byte)iVar11)));
        fVar37 = (float)(CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                                  CONCAT16((byte)((uint)fVar37 >> 0x10) &
                                           ~(byte)((uint)iVar32 >> 0x10),
                                           CONCAT15((byte)((uint)fVar37 >> 8) &
                                                    ~(byte)((uint)iVar32 >> 8),
                                                    CONCAT14(SUB41(fVar37,0) & ~(byte)iVar32,fVar33)
                                                   ))) >> 0x20);
        uStack_e8 = CONCAT44((fVar39 + fVar39) * fVar37,fVar34 * fVar33);
        local_f0 = CONCAT44(fVar43 * fVar37,fVar28 * fVar33);
        local_90 = CONCAT44(fVar38 * fVar37 * *(float *)(param_4 + 8),
                            fVar29 * fVar33 * *(float *)(param_4 + 8));
        FUN_032caa90(local_c0,&local_f0,&local_90);
        local_90._0_4_ = (float)local_100 - (float)*(double *)pauVar13[1];
        local_90._4_4_ = fVar19 - (float)*(double *)(pauVar13[1] + 8);
        fStack_88 = (float)uStack_f8 - (float)*(double *)pauVar13[2];
        fStack_84 = fVar21 - 0.0;
        FUN_032cc5bc(&local_a0,local_c0,&local_90);
        local_120._4_4_ = (float)((ulong)local_120 >> 0x20);
        fStack_118 = fVar27 + ((float)uStack_98 - fStack_88) * fVar40;
        fStack_114 = ((float)((ulong)uStack_98 >> 0x20) - fStack_84) * fVar40 + 0.0;
        local_120 = CONCAT44(local_120._4_4_ +
                             ((float)((ulong)local_a0 >> 0x20) - local_90._4_4_) * fVar40,
                             (float)local_120 + ((float)local_a0 - (float)local_90) * fVar40);
      }
      else {
        auVar30 = NEON_ext(*pauVar2,*pauVar2,4,1);
        local_130 = auVar30._0_8_;
        fStack_118 = fVar27;
      }
      uStack_128 = *(undefined8 *)*pauVar2;
      fVar28 = (float)*(undefined8 *)(*pauVar13 + 8);
      fVar43 = (float)((ulong)*(undefined8 *)(*pauVar13 + 8) >> 0x20);
      uVar24 = *(undefined8 *)*pauVar13;
      fVar19 = (float)uVar24;
      fVar21 = (float)((ulong)uVar24 >> 0x20);
      auVar9._12_4_ = fVar43;
      auVar9._0_12_ = *(undefined1 (*) [12])*pauVar13;
      auVar10._12_4_ = fVar43;
      auVar10._0_12_ = *(undefined1 (*) [12])*pauVar13;
      auVar30 = NEON_ext(auVar9,auVar10,8,1);
      fVar39 = auVar30._4_4_ * auVar30._4_4_;
      uVar24 = NEON_ext(uVar24,auVar30._0_8_,4,1);
      fVar34 = fVar39 + -0.5;
      fVar39 = fVar39 + -0.5;
      fVar29 = fVar20 * fVar19 + fVar22 * fVar21 + fVar23 * fVar28;
      fVar38 = fVar20 * fVar19 + fVar22 * fVar21 + fVar23 * fVar28;
      auVar26._0_4_ = fVar20 * (float)uVar24 - (float)local_130 * fVar19;
      auVar26._4_4_ = fVar22 * (float)((ulong)uVar24 >> 0x20) - local_130._4_4_ * fVar21;
      auVar26._8_4_ = fVar23 * fVar19 - (float)uStack_128 * fVar28;
      auVar26._12_4_ = fVar27 * fVar21 - uStack_128._4_4_ * fVar43;
      auVar30 = NEON_ext(auVar26,auVar26,4,1);
      fVar19 = fVar20 * fVar34 + fVar19 * fVar29 + auVar30._0_4_ * fVar43;
      fVar21 = fVar22 * fVar39 + fVar21 * fVar38 + auVar30._4_4_ * fVar43;
      fVar20 = fVar23 * fVar34 + fVar28 * fVar29 + auVar26._0_4_ * fVar43;
      fVar22 = fVar27 * fVar39 + fVar43 * fVar38 + auVar26._4_4_ * fVar43;
    }
    else {
      local_120._0_4_ = *(float *)pauVar13[6];
      local_120._4_4_ = *(float *)(pauVar13[6] + 4);
      fStack_118 = *(float *)(pauVar13[6] + 8);
      fStack_114 = *(float *)(pauVar13[6] + 0xc);
      pauVar2 = pauVar13 + 7;
      fVar23 = (float)*(undefined8 *)(pauVar13[7] + 8);
      fVar27 = (float)((ulong)*(undefined8 *)(pauVar13[7] + 8) >> 0x20);
      fVar20 = (float)*(undefined8 *)*pauVar2;
      fVar22 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
      if (1.1920929e-07 < ABS(fVar23) ||
          (1.1920929e-07 < ABS(fVar20) || 1.1920929e-07 < ABS(fVar22))) {
        auVar30 = *pauVar13;
        auVar31 = NEON_ext(auVar30,auVar30,8,1);
        auVar7._12_4_ = fVar27;
        auVar7._0_12_ = *(undefined1 (*) [12])*pauVar2;
        auVar8._12_4_ = fVar27;
        auVar8._0_12_ = *(undefined1 (*) [12])*pauVar2;
        auVar41 = NEON_ext(auVar7,auVar8,4,1);
        uVar24 = NEON_ext(auVar30._0_8_,auVar31._0_8_,4,1);
        fVar38 = auVar31._4_4_ * auVar31._4_4_;
        fVar28 = auVar30._0_4_;
        fVar43 = auVar30._4_4_;
        fVar34 = auVar30._8_4_;
        fVar39 = auVar30._12_4_;
        fVar33 = fVar20 * fVar28 + fVar22 * fVar43 + fVar23 * fVar34;
        fVar37 = fVar20 * fVar28 + fVar22 * fVar43 + fVar23 * fVar34;
        fVar29 = fVar38 + -0.5;
        fVar38 = fVar38 + -0.5;
        auVar42._0_4_ = auVar41._0_4_ * fVar28 - fVar20 * (float)uVar24;
        auVar42._4_4_ = auVar41._4_4_ * fVar43 - fVar22 * (float)((ulong)uVar24 >> 0x20);
        auVar42._8_4_ = fVar20 * fVar34 - fVar23 * fVar28;
        auVar42._12_4_ = fVar22 * fVar39 - fVar27 * fVar43;
        auVar30 = NEON_ext(auVar42,auVar42,4,1);
        fVar20 = fVar20 * fVar29 + fVar28 * fVar33 + auVar30._0_4_ * fVar39;
        fVar22 = fVar22 * fVar38 + fVar43 * fVar37 + auVar30._4_4_ * fVar39;
        fVar23 = fVar23 * fVar29 + fVar34 * fVar33 + auVar42._0_4_ * fVar39;
        fVar27 = fVar27 * fVar38 + fVar39 * fVar37 + auVar42._4_4_ * fVar39;
        fVar20 = fVar20 + fVar20;
        fVar22 = fVar22 + fVar22;
        fVar23 = fVar23 + fVar23;
        fVar28 = fVar20 * fVar20 + fVar22 * fVar22 + fVar23 * fVar23;
        fVar43 = fVar20 * fVar20 + fVar22 * fVar22 + fVar23 * fVar23;
        uVar24 = CONCAT44(fVar43,fVar28);
        uVar35 = NEON_frsqrte(uVar24,4);
        fVar34 = (float)uVar35;
        fVar39 = (float)((ulong)uVar35 >> 0x20);
        uVar35 = NEON_frsqrts(uVar24,CONCAT44(fVar39 * fVar39,fVar34 * fVar34),4);
        fVar34 = fVar34 * (float)uVar35;
        fVar39 = fVar39 * (float)((ulong)uVar35 >> 0x20);
        uVar24 = NEON_frsqrts(uVar24,CONCAT44(fVar39 * fVar39,fVar34 * fVar34),4);
        iVar11 = -(uint)(fVar28 <= 0.0);
        iVar32 = -(uint)(fVar43 <= 0.0);
        fVar34 = (float)uVar24 * fVar34;
        fVar39 = (float)((ulong)uVar24 >> 0x20) * fVar39;
        fVar29 = *(float *)(param_4 + 0xc);
        fVar34 = (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                                 CONCAT12((byte)((uint)fVar34 >> 0x10) &
                                          ~(byte)((uint)iVar11 >> 0x10),
                                          CONCAT11((byte)((uint)fVar34 >> 8) &
                                                   ~(byte)((uint)iVar11 >> 8),
                                                   SUB41(fVar34,0) & ~(byte)iVar11)));
        fVar39 = (float)(CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                                  CONCAT16((byte)((uint)fVar39 >> 0x10) &
                                           ~(byte)((uint)iVar32 >> 0x10),
                                           CONCAT15((byte)((uint)fVar39 >> 8) &
                                                    ~(byte)((uint)iVar32 >> 8),
                                                    CONCAT14(SUB41(fVar39,0) & ~(byte)iVar32,fVar34)
                                                   ))) >> 0x20);
        uStack_e8 = CONCAT44((fVar27 + fVar27) * fVar39,fVar23 * fVar34);
        local_f0 = CONCAT44(fVar22 * fVar39,fVar20 * fVar34);
        local_90 = CONCAT44(fVar43 * fVar39 * *(float *)(param_4 + 8),
                            fVar28 * fVar34 * *(float *)(param_4 + 8));
        FUN_032caa90(local_c0,&local_f0,&local_90);
        local_90._0_4_ = (float)local_100 - (float)*(double *)pauVar13[1];
        local_90._4_4_ = fVar19 - (float)*(double *)(pauVar13[1] + 8);
        fStack_88 = (float)uStack_f8 - (float)*(double *)pauVar13[2];
        fStack_84 = fVar21 - 0.0;
        FUN_032cc5bc(&local_a0,local_c0,&local_90);
        local_120._0_4_ = (float)local_120 + ((float)local_a0 - (float)local_90) * fVar29;
        local_120._4_4_ =
             local_120._4_4_ + ((float)((ulong)local_a0 >> 0x20) - local_90._4_4_) * fVar29;
        fStack_118 = fStack_118 + ((float)uStack_98 - fStack_88) * fVar29;
        fStack_114 = fStack_114 + ((float)((ulong)uStack_98 >> 0x20) - fStack_84) * fVar29;
        fVar23 = (float)*(undefined8 *)(pauVar13[7] + 8);
        fVar27 = (float)((ulong)*(undefined8 *)(pauVar13[7] + 8) >> 0x20);
        fVar20 = (float)*(undefined8 *)pauVar13[7];
        fVar22 = (float)((ulong)*(undefined8 *)pauVar13[7] >> 0x20);
      }
      auVar30 = *pauVar13;
      auVar31 = NEON_ext(auVar30,auVar30,8,1);
      fVar37 = auVar31._4_4_ * auVar31._4_4_;
      uVar24 = NEON_ext(auVar30._0_8_,auVar31._0_8_,4,1);
      fVar33 = fVar37 + -0.5;
      fVar37 = fVar37 + -0.5;
      fVar34 = auVar30._0_4_;
      fVar39 = auVar30._4_4_;
      fVar29 = auVar30._8_4_;
      fVar38 = auVar30._12_4_;
      fVar40 = fVar34 * fVar20 + fVar39 * fVar22 + fVar29 * fVar23;
      fVar44 = fVar34 * fVar20 + fVar39 * fVar22 + fVar29 * fVar23;
      auVar3._4_4_ = fVar22;
      auVar3._0_4_ = fVar20;
      auVar3._8_4_ = fVar23;
      auVar3._12_4_ = fVar27;
      auVar4._4_4_ = fVar22;
      auVar4._0_4_ = fVar20;
      auVar4._8_4_ = fVar23;
      auVar4._12_4_ = fVar27;
      auVar30 = NEON_ext(auVar3,auVar4,4,1);
      fVar28 = fVar20 * (float)uVar24 - fVar34 * auVar30._0_4_;
      fVar43 = fVar22 * (float)((ulong)uVar24 >> 0x20) - fVar39 * auVar30._4_4_;
      fVar19 = fVar23 * fVar34 - fVar29 * fVar20;
      fVar21 = fVar27 * fVar39 - fVar38 * fVar22;
      auVar5._4_4_ = fVar43;
      auVar5._0_4_ = fVar28;
      auVar5._8_4_ = fVar19;
      auVar5._12_4_ = fVar21;
      auVar6._4_4_ = fVar43;
      auVar6._0_4_ = fVar28;
      auVar6._8_4_ = fVar19;
      auVar6._12_4_ = fVar21;
      auVar30 = NEON_ext(auVar5,auVar6,4,1);
      fVar19 = fVar20 * fVar33 + fVar34 * fVar40 + auVar30._0_4_ * fVar38;
      fVar21 = fVar22 * fVar37 + fVar39 * fVar44 + auVar30._4_4_ * fVar38;
      fVar20 = fVar23 * fVar33 + fVar29 * fVar40 + fVar28 * fVar38;
      fVar22 = fVar27 * fVar37 + fVar38 * fVar44 + fVar43 * fVar38;
    }
    local_120._0_4_ = (float)local_120 + *pfVar18;
    local_120._4_4_ = local_120._4_4_ + *(float *)((long)param_5 + 0x14);
    fStack_118 = fStack_118 + *(float *)(param_5 + 3);
    fStack_114 = fStack_114 + *(float *)((long)param_5 + 0x1c);
    *(float *)(param_5 + 3) = fStack_118;
    *(float *)((long)param_5 + 0x1c) = fStack_114;
    *pfVar18 = (float)local_120;
    *(float *)((long)param_5 + 0x14) = local_120._4_4_;
    param_5[5] = CONCAT44(fVar22 + fVar22 + *(float *)((long)param_5 + 0x2c),
                          fVar20 + fVar20 + *(float *)(param_5 + 5));
    *(ulong *)pfVar17 =
         CONCAT44(fVar21 + fVar21 + *(float *)((long)param_5 + 0x24),fVar19 + fVar19 + *pfVar17);
  }
  fVar19 = (float)param_5[1];
  fVar21 = (float)((ulong)param_5[1] >> 0x20);
  uVar24 = *param_5;
  auVar25._0_4_ = (float)local_120 * (float)uVar24;
  auVar25._4_4_ = local_120._4_4_ * (float)((ulong)uVar24 >> 0x20);
  auVar25._8_4_ = fStack_118 * fVar19;
  auVar25._12_4_ = fStack_114 * fVar21;
  auVar30 = NEON_ext(auVar25,auVar25,8,1);
  param_5[1] = CONCAT44(fVar21 - param_1 * (auVar25._0_4_ + auVar25._4_4_ + auVar30._0_4_),fVar19);
  *param_5 = uVar24;
  if ((*(uint *)(lVar12 + 0x54) & 1) == 0) {
    if ((*(uint *)(lVar12 + 0x54) >> 2 & 1) == 0) {
      return;
    }
    uVar16 = 1;
  }
  else {
    uVar16 = 2;
  }
  *(undefined4 *)(param_5 + 8) = uVar16;
  return;
}


