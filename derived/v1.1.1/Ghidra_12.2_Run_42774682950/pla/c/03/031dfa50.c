/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031dfa50; name: FUN_031dfa50
 */


void FUN_031dfa50(undefined8 param_1,long param_2,long param_3,undefined1 (*param_4) [16],
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
  undefined8 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  float fVar29;
  float fVar30;
  int iVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar37;
  int iVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined1 auStack_1c8 [64];
  undefined1 *local_188;
  undefined8 local_180;
  undefined1 auStack_178 [64];
  undefined1 *local_138;
  undefined8 local_130;
  undefined1 auStack_128 [64];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [64];
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  
  local_88 = 0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0x80000000;
  local_98 = 0;
  local_90 = 0x8000000000000000;
  auVar34 = *param_4;
  uVar24 = *(undefined8 *)(param_4[1] + 8);
  uVar33 = *(undefined8 *)param_4[1];
  fVar41 = *(float *)param_4[2];
  fVar42 = *(float *)(param_4[2] + 4);
  uVar16 = (ulong)(param_7 - param_6) >> 3;
  if (0 < (int)uVar16) {
    local_88 = FUN_031e0d70(PTR_PTR_0434a090,uVar16,0,0,(long)&local_80 + 4);
  }
  if (param_6 != param_7) {
    fVar21 = (float)uVar33 - auVar34._0_4_;
    fVar22 = (float)((ulong)uVar33 >> 0x20) - auVar34._4_4_;
    fVar23 = (float)uVar24 - auVar34._8_4_;
    fVar39 = fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23;
    fVar30 = fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23;
    uVar25 = SUB41(fVar30,0);
    uVar26 = (undefined1)((uint)fVar30 >> 8);
    uVar27 = (undefined1)((uint)fVar30 >> 0x10);
    uVar28 = (undefined1)((uint)fVar30 >> 0x18);
    uVar32 = NEON_frecpe(CONCAT17(uVar28,CONCAT16(uVar27,CONCAT15(uVar26,CONCAT14(uVar25,fVar39)))),
                         4);
    uVar33 = NEON_frecps(CONCAT17(uVar28,CONCAT16(uVar27,CONCAT15(uVar26,CONCAT14(uVar25,fVar39)))),
                         uVar32,4);
    fVar30 = (float)uVar32 * (float)uVar33;
    fVar37 = (float)((ulong)uVar32 >> 0x20) * (float)((ulong)uVar33 >> 0x20);
    uVar33 = NEON_frecps(CONCAT17(uVar28,CONCAT16(uVar27,CONCAT15(uVar26,CONCAT14(uVar25,fVar39)))),
                         CONCAT44(fVar37,fVar30),4);
    fVar39 = fVar30 * (float)uVar33 * fVar41;
    fVar41 = fVar37 * (float)((ulong)uVar33 >> 0x20) * fVar41;
    fVar21 = fVar21 * fVar39;
    fVar22 = fVar22 * fVar41;
    fVar23 = fVar23 * fVar39;
    fVar30 = auVar34._0_4_ * fVar21;
    fVar37 = auVar34._4_4_ * fVar22;
    uVar25 = (undefined1)((uint)fVar37 >> 8);
    uVar26 = (undefined1)((uint)fVar37 >> 0x10);
    uVar27 = (undefined1)((uint)fVar37 >> 0x18);
    fVar29 = auVar34._8_4_ * fVar23;
    fVar41 = auVar34._12_4_ *
             ((float)((ulong)uVar24 >> 0x20) - auVar34._12_4_) *
             (float)(CONCAT17((char)((uint)fVar41 >> 0x18),
                              CONCAT16((char)((uint)fVar41 >> 0x10),
                                       CONCAT15((char)((uint)fVar41 >> 8),
                                                CONCAT14(SUB41(fVar41,0),fVar39)))) >> 0x20);
    auVar34[4] = SUB41(fVar37,0);
    auVar34._0_4_ = fVar30;
    auVar34[5] = uVar25;
    auVar34[6] = uVar26;
    auVar34[7] = uVar27;
    auVar34._8_4_ = fVar29;
    auVar34._12_4_ = fVar41;
    auVar40[4] = SUB41(fVar37,0);
    auVar40._0_4_ = fVar30;
    auVar40[5] = uVar25;
    auVar40[6] = uVar26;
    auVar40[7] = uVar27;
    auVar40._8_4_ = fVar29;
    auVar40._12_4_ = fVar41;
    auVar34 = NEON_ext(auVar34,auVar40,8,1);
    fVar42 = fVar42 - (fVar30 + fVar37 + auVar34._0_4_);
    lVar17 = param_6;
    do {
      lVar18 = *(long *)(param_2 + 0x20);
      iVar31 = *(int *)(lVar17 + 4);
      if (iVar31 < *(int *)(lVar18 + 0x30)) {
        lVar19 = *(long *)(lVar18 + 0x28);
        iVar38 = iVar31;
        if (*(int *)(lVar18 + 0x78) != 0) {
          iVar38 = *(int *)(*(long *)(lVar18 + 0x70) + (long)iVar31 * 4);
        }
        if (iVar38 != -1) {
          plVar20 = (long *)(lVar18 + 0xc0);
          iVar31 = iVar38;
          goto LAB_031dfb6c;
        }
      }
      else {
        plVar20 = (long *)(lVar18 + 0xe0);
        iVar31 = iVar31 - *(int *)(lVar18 + 0x30);
LAB_031dfb6c:
        lVar19 = *plVar20;
      }
      iVar38 = *(int *)(lVar18 + 0x40);
      iVar4 = *(int *)(lVar19 + (long)iVar31 * 0x14);
      iVar31 = *(int *)(lVar19 + (long)iVar31 * 0x14 + 4);
      plVar20 = (long *)(lVar18 + 0x38);
      if (iVar38 <= iVar4) {
        plVar20 = (long *)(lVar18 + 0xf0);
      }
      iVar1 = 0;
      if (iVar38 <= iVar4) {
        iVar1 = iVar38;
      }
      plVar3 = (long *)(lVar18 + 0x38);
      if (iVar38 <= iVar31) {
        plVar3 = (long *)(lVar18 + 0xf0);
      }
      iVar2 = 0;
      if (iVar38 <= iVar31) {
        iVar2 = iVar38;
      }
      pfVar5 = (float *)(*plVar20 + (long)(iVar4 - iVar1) * 0x10);
      puVar6 = (undefined8 *)(*plVar3 + (long)(iVar31 - iVar2) * 0x10);
      uVar24 = puVar6[1];
      uVar33 = *puVar6;
      lVar18 = (long)(int)local_80;
      auVar35._0_4_ = fVar21 * *pfVar5;
      auVar35._4_4_ = fVar22 * pfVar5[1];
      auVar35._8_4_ = fVar23 * pfVar5[2];
      auVar35._12_4_ = fVar42 * pfVar5[3];
      auVar34 = NEON_ext(auVar35,auVar35,8,1);
      fVar41 = fVar21 * (float)uVar33;
      fVar39 = fVar22 * (float)((ulong)uVar33 >> 0x20);
      fVar30 = fVar23 * (float)uVar24;
      fVar37 = fVar42 * (float)((ulong)uVar24 >> 0x20);
      auVar9._4_4_ = fVar39;
      auVar9._0_4_ = fVar41;
      auVar9._8_4_ = fVar30;
      auVar9._12_4_ = fVar37;
      auVar10._4_4_ = fVar39;
      auVar10._0_4_ = fVar41;
      auVar10._8_4_ = fVar30;
      auVar10._12_4_ = fVar37;
      auVar40 = NEON_ext(auVar9,auVar10,8,1);
      local_80._0_4_ = (int)local_80 + 1;
      lVar17 = lVar17 + 8;
      *(ulong *)(local_88 + lVar18 * 8) =
           CONCAT44(fVar41 + fVar39 + auVar40._0_4_ + fVar42,
                    auVar35._0_4_ + auVar35._4_4_ + auVar34._0_4_ + fVar42);
    } while (param_7 != lVar17);
  }
  uVar16 = (ulong)(param_10 - param_9) >> 3;
  auVar34 = *param_5;
  uVar24 = *(undefined8 *)(param_5[1] + 8);
  uVar33 = *(undefined8 *)param_5[1];
  fVar41 = *(float *)param_5[2];
  fVar42 = *(float *)(param_5[2] + 4);
  if ((int)(local_90._4_4_ & 0x3fffffff) < (int)uVar16) {
    local_98 = FUN_031e0d70(PTR_PTR_0434a090,uVar16,local_98,local_90 & 0xffffffff,
                            (long)&local_90 + 4);
  }
  if (param_9 != param_10) {
    fVar21 = (float)uVar33 - auVar34._0_4_;
    fVar22 = (float)((ulong)uVar33 >> 0x20) - auVar34._4_4_;
    fVar23 = (float)uVar24 - auVar34._8_4_;
    fVar39 = fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23;
    fVar30 = fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23;
    uVar25 = SUB41(fVar30,0);
    uVar26 = (undefined1)((uint)fVar30 >> 8);
    uVar27 = (undefined1)((uint)fVar30 >> 0x10);
    uVar28 = (undefined1)((uint)fVar30 >> 0x18);
    uVar32 = NEON_frecpe(CONCAT17(uVar28,CONCAT16(uVar27,CONCAT15(uVar26,CONCAT14(uVar25,fVar39)))),
                         4);
    uVar33 = NEON_frecps(CONCAT17(uVar28,CONCAT16(uVar27,CONCAT15(uVar26,CONCAT14(uVar25,fVar39)))),
                         uVar32,4);
    fVar30 = (float)uVar32 * (float)uVar33;
    fVar37 = (float)((ulong)uVar32 >> 0x20) * (float)((ulong)uVar33 >> 0x20);
    uVar33 = NEON_frecps(CONCAT17(uVar28,CONCAT16(uVar27,CONCAT15(uVar26,CONCAT14(uVar25,fVar39)))),
                         CONCAT44(fVar37,fVar30),4);
    fVar39 = fVar30 * (float)uVar33 * fVar41;
    fVar41 = fVar37 * (float)((ulong)uVar33 >> 0x20) * fVar41;
    fVar21 = fVar21 * fVar39;
    fVar22 = fVar22 * fVar41;
    fVar23 = fVar23 * fVar39;
    fVar30 = auVar34._0_4_ * fVar21;
    fVar37 = auVar34._4_4_ * fVar22;
    uVar25 = (undefined1)((uint)fVar37 >> 8);
    uVar26 = (undefined1)((uint)fVar37 >> 0x10);
    uVar27 = (undefined1)((uint)fVar37 >> 0x18);
    fVar29 = auVar34._8_4_ * fVar23;
    fVar41 = auVar34._12_4_ *
             ((float)((ulong)uVar24 >> 0x20) - auVar34._12_4_) *
             (float)(CONCAT17((char)((uint)fVar41 >> 0x18),
                              CONCAT16((char)((uint)fVar41 >> 0x10),
                                       CONCAT15((char)((uint)fVar41 >> 8),
                                                CONCAT14(SUB41(fVar41,0),fVar39)))) >> 0x20);
    auVar7[4] = SUB41(fVar37,0);
    auVar7._0_4_ = fVar30;
    auVar7[5] = uVar25;
    auVar7[6] = uVar26;
    auVar7[7] = uVar27;
    auVar7._8_4_ = fVar29;
    auVar7._12_4_ = fVar41;
    auVar8[4] = SUB41(fVar37,0);
    auVar8._0_4_ = fVar30;
    auVar8[5] = uVar25;
    auVar8[6] = uVar26;
    auVar8[7] = uVar27;
    auVar8._8_4_ = fVar29;
    auVar8._12_4_ = fVar41;
    auVar34 = NEON_ext(auVar7,auVar8,8,1);
    fVar42 = fVar42 - (fVar30 + fVar37 + auVar34._0_4_);
    lVar17 = param_9;
    do {
      lVar18 = *(long *)(param_3 + 0x20);
      iVar31 = *(int *)(lVar17 + 4);
      if (iVar31 < *(int *)(lVar18 + 0x30)) {
        lVar19 = *(long *)(lVar18 + 0x28);
        iVar38 = iVar31;
        if (*(int *)(lVar18 + 0x78) != 0) {
          iVar38 = *(int *)(*(long *)(lVar18 + 0x70) + (long)iVar31 * 4);
        }
        if (iVar38 != -1) {
          plVar20 = (long *)(lVar18 + 0xc0);
          iVar31 = iVar38;
          goto LAB_031dfd08;
        }
      }
      else {
        plVar20 = (long *)(lVar18 + 0xe0);
        iVar31 = iVar31 - *(int *)(lVar18 + 0x30);
LAB_031dfd08:
        lVar19 = *plVar20;
      }
      iVar38 = *(int *)(lVar18 + 0x40);
      iVar4 = *(int *)(lVar19 + (long)iVar31 * 0x14);
      iVar31 = *(int *)(lVar19 + (long)iVar31 * 0x14 + 4);
      plVar20 = (long *)(lVar18 + 0x38);
      if (iVar38 <= iVar4) {
        plVar20 = (long *)(lVar18 + 0xf0);
      }
      iVar1 = 0;
      if (iVar38 <= iVar4) {
        iVar1 = iVar38;
      }
      plVar3 = (long *)(lVar18 + 0x38);
      if (iVar38 <= iVar31) {
        plVar3 = (long *)(lVar18 + 0xf0);
      }
      iVar2 = 0;
      if (iVar38 <= iVar31) {
        iVar2 = iVar38;
      }
      pfVar5 = (float *)(*plVar20 + (long)(iVar4 - iVar1) * 0x10);
      puVar6 = (undefined8 *)(*plVar3 + (long)(iVar31 - iVar2) * 0x10);
      uVar24 = puVar6[1];
      uVar33 = *puVar6;
      lVar18 = (long)(int)local_90;
      auVar36._0_4_ = fVar21 * *pfVar5;
      auVar36._4_4_ = fVar22 * pfVar5[1];
      auVar36._8_4_ = fVar23 * pfVar5[2];
      auVar36._12_4_ = fVar42 * pfVar5[3];
      auVar34 = NEON_ext(auVar36,auVar36,8,1);
      fVar41 = fVar21 * (float)uVar33;
      fVar39 = fVar22 * (float)((ulong)uVar33 >> 0x20);
      fVar30 = fVar23 * (float)uVar24;
      fVar37 = fVar42 * (float)((ulong)uVar24 >> 0x20);
      auVar11._4_4_ = fVar39;
      auVar11._0_4_ = fVar41;
      auVar11._8_4_ = fVar30;
      auVar11._12_4_ = fVar37;
      auVar12._4_4_ = fVar39;
      auVar12._0_4_ = fVar41;
      auVar12._8_4_ = fVar30;
      auVar12._12_4_ = fVar37;
      auVar40 = NEON_ext(auVar11,auVar12,8,1);
      local_90 = CONCAT44(local_90._4_4_,(int)local_90 + 1);
      lVar17 = lVar17 + 8;
      *(ulong *)(local_98 + lVar18 * 8) =
           CONCAT44(fVar41 + fVar39 + auVar40._0_4_ + fVar42,
                    auVar36._0_4_ + auVar36._4_4_ + auVar34._0_4_ + fVar42);
    } while (param_10 != lVar17);
  }
  fVar42 = (float)*(undefined8 *)*param_4 - (float)*(undefined8 *)param_4[1];
  fVar39 = (float)((ulong)*(undefined8 *)*param_4 >> 0x20) -
           (float)((ulong)*(undefined8 *)param_4[1] >> 0x20);
  fVar30 = (float)*(undefined8 *)(*param_4 + 8) - (float)*(undefined8 *)(param_4[1] + 8);
  fVar42 = fVar42 * fVar42;
  fVar39 = fVar39 * fVar39;
  fVar30 = fVar30 * fVar30;
  fVar41 = fVar42 + fVar39 + fVar30;
  fVar30 = fVar42 + fVar39 + fVar30;
  uVar24 = CONCAT44(fVar30,fVar41);
  uVar33 = NEON_frsqrte(uVar24,4);
  fVar42 = (float)uVar33;
  fVar39 = (float)((ulong)uVar33 >> 0x20);
  uVar33 = NEON_frsqrts(uVar24,CONCAT44(fVar39 * fVar39,fVar42 * fVar42),4);
  fVar42 = fVar42 * (float)uVar33;
  fVar39 = fVar39 * (float)((ulong)uVar33 >> 0x20);
  uVar33 = NEON_frsqrts(uVar24,CONCAT44(fVar39 * fVar39,fVar42 * fVar42),4);
  iVar31 = -(uint)(fVar41 <= 0.0);
  iVar38 = -(uint)(fVar30 <= 0.0);
  fVar41 = fVar41 * (float)uVar33 * fVar42;
  fVar30 = fVar30 * (float)((ulong)uVar33 >> 0x20) * fVar39;
  fVar41 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                           CONCAT12((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                                    CONCAT11((byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar31 >> 8),
                                             SUB41(fVar41,0) & ~(byte)iVar31)));
  uVar24 = CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                    CONCAT16((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                             CONCAT15((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                      CONCAT14(SUB41(fVar30,0) & ~(byte)iVar38,fVar41))));
  fVar42 = *(float *)(param_11 + 4);
  uVar33 = NEON_frecpe(uVar24,4);
  uVar32 = NEON_frecps(uVar24,uVar33,4);
  fVar39 = (float)uVar33 * (float)uVar32;
  fVar30 = (float)((ulong)uVar33 >> 0x20) * (float)((ulong)uVar32 >> 0x20);
  iVar31 = -(uint)(fVar41 == 0.0);
  iVar38 = -(uint)((float)((ulong)uVar24 >> 0x20) == 0.0);
  uVar33 = NEON_frecps(uVar24,CONCAT44(fVar30,fVar39),4);
  uVar16 = CONCAT44(fVar30 * (float)((ulong)uVar33 >> 0x20),fVar39 * (float)uVar33) &
           CONCAT17(~(byte)((uint)iVar38 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar38 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar38 >> 8),
                                      CONCAT14(~(byte)iVar38,
                                               CONCAT13(~(byte)((uint)iVar31 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar31 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar31 >> 8)
                                                                          ,~(byte)iVar31)))))));
  if (*param_11 == '\0') {
    local_e8 = auStack_d8;
    local_e0 = -0x7ffffff800000000;
    local_138 = auStack_128;
    local_130 = -0x7ffffff800000000;
    local_188 = auStack_178;
    local_180 = -0x7ffffff800000000;
    local_1d8 = auStack_1c8;
    local_1d0 = -0x7ffffff800000000;
    FUN_031e0120(param_6,param_7,local_88,local_88 + (long)(int)local_80 * 8,&local_e8,&local_188);
    FUN_031e0120(param_9,param_10,local_98,local_98 + (long)(int)local_90 * 8,&local_138,&local_1d8)
    ;
    FUN_031e1a00(CONCAT44((float)(uVar16 >> 0x20) * fVar42,(float)uVar16 * fVar42),param_1,param_2,
                 param_3,param_4,param_5,local_e8,local_e8 + (long)(int)local_e0 * 8,param_8,
                 local_138,local_138 + (long)(int)local_130 * 8,local_188,
                 local_188 + (long)(int)local_180 * 8,local_1d8,local_1d8 + (long)(int)local_1d0 * 8
                 ,param_11[1]);
    lVar17 = local_1d0;
    puVar13 = PTR_PTR_0434a090;
    uVar14 = local_1d0._4_4_;
    local_1d0 = (ulong)local_1d0._4_4_ << 0x20;
    if ((-1 < lVar17) && (local_1d8 != (undefined1 *)0x0)) {
      FUN_032cf244(PTR_PTR_0434a090,local_1d8,8,uVar14 & 0x3fffffff);
    }
    lVar17 = local_180;
    uVar14 = local_180._4_4_;
    local_180 = (ulong)local_180._4_4_ << 0x20;
    if ((-1 < lVar17) && (local_188 != (undefined1 *)0x0)) {
      FUN_032cf244(puVar13,local_188,8,uVar14 & 0x3fffffff);
    }
    lVar17 = local_130;
    uVar14 = local_130._4_4_;
    local_130 = (ulong)local_130._4_4_ << 0x20;
    if ((-1 < lVar17) && (local_138 != (undefined1 *)0x0)) {
      FUN_032cf244(puVar13,local_138,8,uVar14 & 0x3fffffff);
    }
    lVar17 = local_e0;
    uVar14 = local_e0._4_4_;
    local_e0 = (ulong)local_e0._4_4_ << 0x20;
    if ((-1 < lVar17) && (local_e8 != (undefined1 *)0x0)) {
      FUN_032cf244(puVar13,local_e8,8,uVar14 & 0x3fffffff);
    }
  }
  else {
    FUN_031e1a00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 local_88,local_88 + (long)(int)local_80 * 8,local_98,
                 local_98 + (long)(int)local_90 * 8,param_11[1]);
  }
  uVar15 = local_90;
  puVar13 = PTR_PTR_0434a090;
  uVar16 = local_90 >> 0x20;
  local_90 = local_90 & 0xffffffff00000000;
  if ((-1 < (long)uVar15) && (local_98 != 0)) {
    FUN_032cf244(PTR_PTR_0434a090,local_98,8,(uint)uVar16 & 0x3fffffff);
  }
  uVar14 = local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < (int)uVar14) && (local_88 != 0)) {
    FUN_032cf244(puVar13,local_88,8,uVar14 & 0x3fffffff);
  }
  return;
}


