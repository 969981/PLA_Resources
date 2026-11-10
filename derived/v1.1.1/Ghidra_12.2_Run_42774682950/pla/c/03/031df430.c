/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031df430; name: FUN_031df430
 */


void FUN_031df430(undefined8 param_1,long param_2,long param_3,undefined1 (*param_4) [16],
                 undefined1 (*param_5) [16],long param_6,long param_7,undefined8 param_8,
                 long param_9,long param_10,char *param_11)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar38;
  int iVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 *local_1c8;
  undefined8 local_1c0;
  undefined1 auStack_1b8 [64];
  undefined1 *local_178;
  undefined8 local_170;
  undefined1 auStack_168 [64];
  undefined1 *local_128;
  undefined8 local_120;
  undefined1 auStack_118 [64];
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [64];
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  
  local_78 = 0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0x80000000;
  local_88 = 0;
  local_80 = 0x8000000000000000;
  auVar35 = *param_4;
  uVar25 = *(undefined8 *)(param_4[1] + 8);
  uVar34 = *(undefined8 *)param_4[1];
  uVar16 = (ulong)(param_7 - param_6) >> 3;
  if (0 < (int)uVar16) {
    local_78 = FUN_031e0d70(PTR_PTR_0434a090,uVar16,0,0,(long)&local_70 + 4);
  }
  if (param_6 != param_7) {
    fVar21 = (float)uVar34 - auVar35._0_4_;
    fVar23 = (float)((ulong)uVar34 >> 0x20) - auVar35._4_4_;
    fVar24 = (float)uVar25 - auVar35._8_4_;
    fVar22 = fVar21 * fVar21 + fVar23 * fVar23 + fVar24 * fVar24;
    fVar31 = fVar21 * fVar21 + fVar23 * fVar23 + fVar24 * fVar24;
    uVar26 = SUB41(fVar31,0);
    uVar27 = (undefined1)((uint)fVar31 >> 8);
    uVar28 = (undefined1)((uint)fVar31 >> 0x10);
    uVar29 = (undefined1)((uint)fVar31 >> 0x18);
    uVar33 = NEON_frecpe(CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,fVar22)))),
                         4);
    uVar34 = NEON_frecps(CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,fVar22)))),
                         uVar33,4);
    fVar31 = (float)uVar33 * (float)uVar34;
    fVar38 = (float)((ulong)uVar33 >> 0x20) * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frecps(CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,fVar22)))),
                         CONCAT44(fVar38,fVar31),4);
    fVar31 = fVar31 * (float)uVar34;
    fVar38 = fVar38 * (float)((ulong)uVar34 >> 0x20);
    fVar21 = fVar21 * fVar31;
    fVar23 = fVar23 * fVar38;
    fVar24 = fVar24 * fVar31;
    fVar22 = auVar35._0_4_ * fVar21;
    fVar40 = auVar35._4_4_ * fVar23;
    uVar26 = (undefined1)((uint)fVar40 >> 8);
    uVar27 = (undefined1)((uint)fVar40 >> 0x10);
    uVar28 = (undefined1)((uint)fVar40 >> 0x18);
    fVar30 = auVar35._8_4_ * fVar24;
    fVar31 = auVar35._12_4_ *
             ((float)((ulong)uVar25 >> 0x20) - auVar35._12_4_) *
             (float)(CONCAT17((char)((uint)fVar38 >> 0x18),
                              CONCAT16((char)((uint)fVar38 >> 0x10),
                                       CONCAT15((char)((uint)fVar38 >> 8),
                                                CONCAT14(SUB41(fVar38,0),fVar31)))) >> 0x20);
    auVar35[4] = SUB41(fVar40,0);
    auVar35._0_4_ = fVar22;
    auVar35[5] = uVar26;
    auVar35[6] = uVar27;
    auVar35[7] = uVar28;
    auVar35._8_4_ = fVar30;
    auVar35._12_4_ = fVar31;
    auVar41[4] = SUB41(fVar40,0);
    auVar41._0_4_ = fVar22;
    auVar41[5] = uVar26;
    auVar41[6] = uVar27;
    auVar41[7] = uVar28;
    auVar41._8_4_ = fVar30;
    auVar41._12_4_ = fVar31;
    auVar35 = NEON_ext(auVar35,auVar41,8,1);
    fVar22 = -(fVar22 + fVar40 + auVar35._0_4_);
    lVar17 = param_6;
    do {
      lVar18 = *(long *)(param_2 + 0x20);
      iVar32 = *(int *)(lVar17 + 4);
      if (iVar32 < *(int *)(lVar18 + 0x30)) {
        lVar19 = *(long *)(lVar18 + 0x28);
        iVar39 = iVar32;
        if (*(int *)(lVar18 + 0x78) != 0) {
          iVar39 = *(int *)(*(long *)(lVar18 + 0x70) + (long)iVar32 * 4);
        }
        if (iVar39 != -1) {
          plVar20 = (long *)(lVar18 + 0xc0);
          iVar32 = iVar39;
          goto LAB_031df538;
        }
      }
      else {
        plVar20 = (long *)(lVar18 + 0xe0);
        iVar32 = iVar32 - *(int *)(lVar18 + 0x30);
LAB_031df538:
        lVar19 = *plVar20;
      }
      iVar39 = *(int *)(lVar18 + 0x40);
      iVar4 = *(int *)(lVar19 + (long)iVar32 * 0x14);
      iVar32 = *(int *)(lVar19 + (long)iVar32 * 0x14 + 4);
      plVar20 = (long *)(lVar18 + 0x38);
      if (iVar39 <= iVar4) {
        plVar20 = (long *)(lVar18 + 0xf0);
      }
      iVar1 = 0;
      if (iVar39 <= iVar4) {
        iVar1 = iVar39;
      }
      plVar3 = (long *)(lVar18 + 0x38);
      if (iVar39 <= iVar32) {
        plVar3 = (long *)(lVar18 + 0xf0);
      }
      iVar2 = 0;
      if (iVar39 <= iVar32) {
        iVar2 = iVar39;
      }
      pfVar5 = (float *)(*plVar20 + (long)(iVar4 - iVar1) * 0x10);
      puVar6 = (undefined8 *)(*plVar3 + (long)(iVar32 - iVar2) * 0x10);
      uVar25 = puVar6[1];
      uVar34 = *puVar6;
      lVar18 = (long)(int)local_70;
      auVar36._0_4_ = fVar21 * *pfVar5;
      auVar36._4_4_ = fVar23 * pfVar5[1];
      auVar36._8_4_ = fVar24 * pfVar5[2];
      auVar36._12_4_ = fVar22 * pfVar5[3];
      auVar35 = NEON_ext(auVar36,auVar36,8,1);
      fVar31 = fVar21 * (float)uVar34;
      fVar38 = fVar23 * (float)((ulong)uVar34 >> 0x20);
      fVar40 = fVar24 * (float)uVar25;
      fVar30 = fVar22 * (float)((ulong)uVar25 >> 0x20);
      auVar9._4_4_ = fVar38;
      auVar9._0_4_ = fVar31;
      auVar9._8_4_ = fVar40;
      auVar9._12_4_ = fVar30;
      auVar10._4_4_ = fVar38;
      auVar10._0_4_ = fVar31;
      auVar10._8_4_ = fVar40;
      auVar10._12_4_ = fVar30;
      auVar41 = NEON_ext(auVar9,auVar10,8,1);
      local_70._0_4_ = (int)local_70 + 1;
      lVar17 = lVar17 + 8;
      *(ulong *)(local_78 + lVar18 * 8) =
           CONCAT44(fVar31 + fVar38 + auVar41._0_4_ + fVar22,
                    auVar36._0_4_ + auVar36._4_4_ + auVar35._0_4_ + fVar22);
    } while (param_7 != lVar17);
  }
  uVar16 = (ulong)(param_10 - param_9) >> 3;
  auVar35 = *param_5;
  uVar25 = *(undefined8 *)(param_5[1] + 8);
  uVar34 = *(undefined8 *)param_5[1];
  if ((int)(local_80._4_4_ & 0x3fffffff) < (int)uVar16) {
    local_88 = FUN_031e0d70(PTR_PTR_0434a090,uVar16,local_88,local_80 & 0xffffffff,
                            (long)&local_80 + 4);
  }
  if (param_9 != param_10) {
    fVar21 = (float)uVar34 - auVar35._0_4_;
    fVar23 = (float)((ulong)uVar34 >> 0x20) - auVar35._4_4_;
    fVar24 = (float)uVar25 - auVar35._8_4_;
    fVar22 = fVar21 * fVar21 + fVar23 * fVar23 + fVar24 * fVar24;
    fVar31 = fVar21 * fVar21 + fVar23 * fVar23 + fVar24 * fVar24;
    uVar26 = SUB41(fVar31,0);
    uVar27 = (undefined1)((uint)fVar31 >> 8);
    uVar28 = (undefined1)((uint)fVar31 >> 0x10);
    uVar29 = (undefined1)((uint)fVar31 >> 0x18);
    uVar33 = NEON_frecpe(CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,fVar22)))),
                         4);
    uVar34 = NEON_frecps(CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,fVar22)))),
                         uVar33,4);
    fVar31 = (float)uVar33 * (float)uVar34;
    fVar38 = (float)((ulong)uVar33 >> 0x20) * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frecps(CONCAT17(uVar29,CONCAT16(uVar28,CONCAT15(uVar27,CONCAT14(uVar26,fVar22)))),
                         CONCAT44(fVar38,fVar31),4);
    fVar31 = fVar31 * (float)uVar34;
    fVar38 = fVar38 * (float)((ulong)uVar34 >> 0x20);
    fVar21 = fVar21 * fVar31;
    fVar23 = fVar23 * fVar38;
    fVar24 = fVar24 * fVar31;
    fVar22 = auVar35._0_4_ * fVar21;
    fVar40 = auVar35._4_4_ * fVar23;
    uVar26 = (undefined1)((uint)fVar40 >> 8);
    uVar27 = (undefined1)((uint)fVar40 >> 0x10);
    uVar28 = (undefined1)((uint)fVar40 >> 0x18);
    fVar30 = auVar35._8_4_ * fVar24;
    fVar31 = auVar35._12_4_ *
             ((float)((ulong)uVar25 >> 0x20) - auVar35._12_4_) *
             (float)(CONCAT17((char)((uint)fVar38 >> 0x18),
                              CONCAT16((char)((uint)fVar38 >> 0x10),
                                       CONCAT15((char)((uint)fVar38 >> 8),
                                                CONCAT14(SUB41(fVar38,0),fVar31)))) >> 0x20);
    auVar7[4] = SUB41(fVar40,0);
    auVar7._0_4_ = fVar22;
    auVar7[5] = uVar26;
    auVar7[6] = uVar27;
    auVar7[7] = uVar28;
    auVar7._8_4_ = fVar30;
    auVar7._12_4_ = fVar31;
    auVar8[4] = SUB41(fVar40,0);
    auVar8._0_4_ = fVar22;
    auVar8[5] = uVar26;
    auVar8[6] = uVar27;
    auVar8[7] = uVar28;
    auVar8._8_4_ = fVar30;
    auVar8._12_4_ = fVar31;
    auVar35 = NEON_ext(auVar7,auVar8,8,1);
    fVar22 = -(fVar22 + fVar40 + auVar35._0_4_);
    lVar17 = param_9;
    do {
      lVar18 = *(long *)(param_3 + 0x20);
      iVar32 = *(int *)(lVar17 + 4);
      if (iVar32 < *(int *)(lVar18 + 0x30)) {
        lVar19 = *(long *)(lVar18 + 0x28);
        iVar39 = iVar32;
        if (*(int *)(lVar18 + 0x78) != 0) {
          iVar39 = *(int *)(*(long *)(lVar18 + 0x70) + (long)iVar32 * 4);
        }
        if (iVar39 != -1) {
          plVar20 = (long *)(lVar18 + 0xc0);
          iVar32 = iVar39;
          goto LAB_031df6c4;
        }
      }
      else {
        plVar20 = (long *)(lVar18 + 0xe0);
        iVar32 = iVar32 - *(int *)(lVar18 + 0x30);
LAB_031df6c4:
        lVar19 = *plVar20;
      }
      iVar39 = *(int *)(lVar18 + 0x40);
      iVar4 = *(int *)(lVar19 + (long)iVar32 * 0x14);
      iVar32 = *(int *)(lVar19 + (long)iVar32 * 0x14 + 4);
      plVar20 = (long *)(lVar18 + 0x38);
      if (iVar39 <= iVar4) {
        plVar20 = (long *)(lVar18 + 0xf0);
      }
      iVar1 = 0;
      if (iVar39 <= iVar4) {
        iVar1 = iVar39;
      }
      plVar3 = (long *)(lVar18 + 0x38);
      if (iVar39 <= iVar32) {
        plVar3 = (long *)(lVar18 + 0xf0);
      }
      iVar2 = 0;
      if (iVar39 <= iVar32) {
        iVar2 = iVar39;
      }
      pfVar5 = (float *)(*plVar20 + (long)(iVar4 - iVar1) * 0x10);
      puVar6 = (undefined8 *)(*plVar3 + (long)(iVar32 - iVar2) * 0x10);
      uVar25 = puVar6[1];
      uVar34 = *puVar6;
      lVar18 = (long)(int)local_80;
      auVar37._0_4_ = fVar21 * *pfVar5;
      auVar37._4_4_ = fVar23 * pfVar5[1];
      auVar37._8_4_ = fVar24 * pfVar5[2];
      auVar37._12_4_ = fVar22 * pfVar5[3];
      auVar35 = NEON_ext(auVar37,auVar37,8,1);
      fVar31 = fVar21 * (float)uVar34;
      fVar38 = fVar23 * (float)((ulong)uVar34 >> 0x20);
      fVar40 = fVar24 * (float)uVar25;
      fVar30 = fVar22 * (float)((ulong)uVar25 >> 0x20);
      auVar11._4_4_ = fVar38;
      auVar11._0_4_ = fVar31;
      auVar11._8_4_ = fVar40;
      auVar11._12_4_ = fVar30;
      auVar12._4_4_ = fVar38;
      auVar12._0_4_ = fVar31;
      auVar12._8_4_ = fVar40;
      auVar12._12_4_ = fVar30;
      auVar41 = NEON_ext(auVar11,auVar12,8,1);
      local_80 = CONCAT44(local_80._4_4_,(int)local_80 + 1);
      lVar17 = lVar17 + 8;
      *(ulong *)(local_88 + lVar18 * 8) =
           CONCAT44(fVar31 + fVar38 + auVar41._0_4_ + fVar22,
                    auVar37._0_4_ + auVar37._4_4_ + auVar35._0_4_ + fVar22);
    } while (param_10 != lVar17);
  }
  fVar22 = (float)*(undefined8 *)*param_4 - (float)*(undefined8 *)param_4[1];
  fVar38 = (float)((ulong)*(undefined8 *)*param_4 >> 0x20) -
           (float)((ulong)*(undefined8 *)param_4[1] >> 0x20);
  fVar40 = (float)*(undefined8 *)(*param_4 + 8) - (float)*(undefined8 *)(param_4[1] + 8);
  fVar22 = fVar22 * fVar22;
  fVar38 = fVar38 * fVar38;
  fVar40 = fVar40 * fVar40;
  fVar31 = fVar22 + fVar38 + fVar40;
  fVar40 = fVar22 + fVar38 + fVar40;
  uVar25 = CONCAT44(fVar40,fVar31);
  uVar34 = NEON_frsqrte(uVar25,4);
  fVar22 = (float)uVar34;
  fVar38 = (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frsqrts(uVar25,CONCAT44(fVar38 * fVar38,fVar22 * fVar22),4);
  fVar22 = fVar22 * (float)uVar34;
  fVar38 = fVar38 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frsqrts(uVar25,CONCAT44(fVar38 * fVar38,fVar22 * fVar22),4);
  iVar32 = -(uint)(fVar31 <= 0.0);
  iVar39 = -(uint)(fVar40 <= 0.0);
  fVar31 = fVar31 * (float)uVar34 * fVar22;
  fVar40 = fVar40 * (float)((ulong)uVar34 >> 0x20) * fVar38;
  fVar31 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                           CONCAT12((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                                    CONCAT11((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar32 >> 8),
                                             SUB41(fVar31,0) & ~(byte)iVar32)));
  uVar25 = CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                    CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10),
                             CONCAT15((byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar39 >> 8),
                                      CONCAT14(SUB41(fVar40,0) & ~(byte)iVar39,fVar31))));
  fVar22 = *(float *)(param_11 + 4);
  uVar34 = NEON_frecpe(uVar25,4);
  uVar33 = NEON_frecps(uVar25,uVar34,4);
  fVar38 = (float)uVar34 * (float)uVar33;
  fVar40 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar33 >> 0x20);
  iVar32 = -(uint)(fVar31 == 0.0);
  iVar39 = -(uint)((float)((ulong)uVar25 >> 0x20) == 0.0);
  uVar34 = NEON_frecps(uVar25,CONCAT44(fVar40,fVar38),4);
  uVar16 = CONCAT44(fVar40 * (float)((ulong)uVar34 >> 0x20),fVar38 * (float)uVar34) &
           CONCAT17(~(byte)((uint)iVar39 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar39 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar39 >> 8),
                                      CONCAT14(~(byte)iVar39,
                                               CONCAT13(~(byte)((uint)iVar32 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar32 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar32 >> 8)
                                                                          ,~(byte)iVar32)))))));
  if (*param_11 == '\0') {
    local_d8 = auStack_c8;
    local_d0 = -0x7ffffff800000000;
    local_128 = auStack_118;
    local_120 = -0x7ffffff800000000;
    local_178 = auStack_168;
    local_170 = -0x7ffffff800000000;
    local_1c8 = auStack_1b8;
    local_1c0 = -0x7ffffff800000000;
    FUN_031e0120(param_6,param_7,local_78,local_78 + (long)(int)local_70 * 8,&local_d8,&local_178);
    FUN_031e0120(param_9,param_10,local_88,local_88 + (long)(int)local_80 * 8,&local_128,&local_1c8)
    ;
    FUN_031e0440(CONCAT44((float)(uVar16 >> 0x20) * fVar22,(float)uVar16 * fVar22),param_1,param_2,
                 param_3,param_4,param_5,local_d8,local_d8 + (long)(int)local_d0 * 8,param_8,
                 local_128,local_128 + (long)(int)local_120 * 8,local_178,
                 local_178 + (long)(int)local_170 * 8,local_1c8,local_1c8 + (long)(int)local_1c0 * 8
                 ,param_11[1]);
    lVar17 = local_1c0;
    puVar13 = PTR_PTR_0434a090;
    uVar14 = local_1c0._4_4_;
    local_1c0 = (ulong)local_1c0._4_4_ << 0x20;
    if ((-1 < lVar17) && (local_1c8 != (undefined1 *)0x0)) {
      FUN_032cf244(PTR_PTR_0434a090,local_1c8,8,uVar14 & 0x3fffffff);
    }
    lVar17 = local_170;
    uVar14 = local_170._4_4_;
    local_170 = (ulong)local_170._4_4_ << 0x20;
    if ((-1 < lVar17) && (local_178 != (undefined1 *)0x0)) {
      FUN_032cf244(puVar13,local_178,8,uVar14 & 0x3fffffff);
    }
    lVar17 = local_120;
    uVar14 = local_120._4_4_;
    local_120 = (ulong)local_120._4_4_ << 0x20;
    if ((-1 < lVar17) && (local_128 != (undefined1 *)0x0)) {
      FUN_032cf244(puVar13,local_128,8,uVar14 & 0x3fffffff);
    }
    lVar17 = local_d0;
    uVar14 = local_d0._4_4_;
    local_d0 = (ulong)local_d0._4_4_ << 0x20;
    if ((-1 < lVar17) && (local_d8 != (undefined1 *)0x0)) {
      FUN_032cf244(puVar13,local_d8,8,uVar14 & 0x3fffffff);
    }
  }
  else {
    FUN_031e0440(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 local_78,local_78 + (long)(int)local_70 * 8,local_88,
                 local_88 + (long)(int)local_80 * 8,param_11[1]);
  }
  uVar15 = local_80;
  puVar13 = PTR_PTR_0434a090;
  uVar16 = local_80 >> 0x20;
  local_80 = local_80 & 0xffffffff00000000;
  if ((-1 < (long)uVar15) && (local_88 != 0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_88,8,(uint)uVar16 & 0x3fffffff);
  }
  uVar14 = local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < (int)uVar14) && (local_78 != 0)) {
    FUN_032cf244(puVar13,local_78,8,uVar14 & 0x3fffffff);
  }
  return;
}


