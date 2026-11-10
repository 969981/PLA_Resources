/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fcbc38; name: FUN_02fcbc38
 */


void FUN_02fcbc38(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,undefined8 *param_7,byte param_8,long param_9)

{
  float *pfVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 local_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  long lStack_d30;
  long local_d28;
  undefined8 uStack_d20;
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined8 local_d00;
  undefined8 uStack_cf8;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  undefined8 local_cd0;
  byte local_cc8;
  long local_cc0;
  undefined8 local_cb0;
  float local_ca8;
  undefined8 local_ca4;
  float local_c9c;
  undefined8 local_c98;
  float local_c90;
  float local_c84 [745];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar7 = *(long *)(param_2 + 0x28);
  param_8 = param_8 & 1;
  lVar4 = 0;
  if ((*(ushort *)(lVar7 + 0x1a) & 1) != 0) {
    lVar4 = lVar7;
  }
  if (*(char *)(param_3 + 0x30) == '\0') {
    if (*(char *)(param_6 + 0x30) == '\0') {
      auVar12 = NEON_fmov(0x3f800000,4);
      uStack_d68 = auVar12._8_8_;
      auVar17._0_8_ = auVar12._0_8_;
      local_e0 = auVar17._0_8_;
      uStack_d8 = (undefined8 *)uStack_d68;
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar7 + 0x18) * 0x200 + 0x18))
                (lVar7,param_7,&local_d50);
      goto LAB_02fcbce8;
    }
    auVar12 = *(undefined1 (*) [16])(param_6 + 0x40);
    auVar17 = NEON_frecpe(auVar12,4);
    auVar19 = NEON_frecps(auVar12,auVar17,4);
    auVar18._0_4_ = auVar17._0_4_ * auVar19._0_4_;
    auVar18._4_4_ = auVar17._4_4_ * auVar19._4_4_;
    auVar18._8_4_ = auVar17._8_4_ * auVar19._8_4_;
    auVar18._12_4_ = auVar17._12_4_ * auVar19._12_4_;
    auVar12 = NEON_frecps(auVar12,auVar18,4);
    fVar8 = auVar18._0_4_ * auVar12._0_4_;
    fVar13 = auVar18._4_4_ * auVar12._4_4_;
    auVar19._0_8_ = CONCAT44(fVar13,fVar8);
    auVar19._8_4_ = auVar18._8_4_ * auVar12._8_4_;
    auVar19._12_4_ = auVar18._12_4_ * auVar12._12_4_;
    fVar8 = ABS(fVar8);
    fVar13 = ABS(fVar13);
    auVar17._0_8_ = CONCAT44(fVar13,fVar8);
    auVar17._8_4_ = ABS(auVar19._8_4_);
    auVar17._12_4_ = ABS(auVar19._12_4_);
    uStack_d8 = auVar19._8_8_;
    uStack_d68 = auVar17._8_8_;
    local_e0 = auVar19._0_8_;
    if ((lVar7 != 0) && ((*(ushort *)(lVar7 + 0x1a) & 1) != 0)) {
      FUN_02fdb1b0(lVar7,param_7,&local_d50);
      fVar9 = (float)local_d50 * (float)local_e0;
      fVar14 = local_d50._4_4_ * local_e0._4_4_;
      fVar15 = (float)uStack_d48 * (float)uStack_d8;
      fVar16 = uStack_d48._4_4_ * uStack_d8._4_4_;
      uStack_d40._0_4_ = (float)local_e0 * (float)uStack_d40;
      uStack_d40._4_4_ = local_e0._4_4_ * uStack_d40._4_4_;
      local_d38._0_4_ = (float)uStack_d8 * (float)local_d38;
      local_d38._4_4_ = uStack_d8._4_4_ * local_d38._4_4_;
      fVar10 = *(float *)(lVar7 + 0x20);
      uVar11 = CONCAT44(fVar13 * fVar10,fVar8 * fVar10);
      uVar11 = NEON_fmaxp(uVar11,uVar11,4);
      uVar11 = NEON_fmax(CONCAT44(auVar17._8_4_ * fVar10,auVar17._8_4_ * fVar10),uVar11,4);
      fVar8 = (float)uVar11;
      fVar13 = (float)((ulong)uVar11 >> 0x20);
      uStack_d48 = CONCAT44((float)((uint)fVar16 ^
                                   ((uint)fVar16 ^ (uint)local_d38._4_4_) &
                                   -(uint)(uStack_d8._4_4_ < 0.0)) - fVar13,
                            (float)((uint)fVar15 ^
                                   ((uint)fVar15 ^ (uint)(float)local_d38) &
                                   -(uint)((float)uStack_d8 < 0.0)) - fVar8);
      local_d50 = CONCAT44((float)((uint)fVar14 ^
                                  ((uint)fVar14 ^ (uint)uStack_d40._4_4_) &
                                  -(uint)(local_e0._4_4_ < 0.0)) - fVar13,
                           (float)((uint)fVar9 ^
                                  ((uint)fVar9 ^ (uint)(float)uStack_d40) &
                                  -(uint)((float)local_e0 < 0.0)) - fVar8);
      local_d38 = (undefined8 *)
                  CONCAT44((float)((uint)local_d38._4_4_ ^
                                  ((uint)local_d38._4_4_ ^ (uint)fVar16) &
                                  -(uint)(uStack_d8._4_4_ < 0.0)) + fVar13,
                           (float)((uint)(float)local_d38 ^
                                  ((uint)(float)local_d38 ^ (uint)fVar15) &
                                  -(uint)((float)uStack_d8 < 0.0)) + fVar8);
      uStack_d40 = CONCAT44((float)((uint)uStack_d40._4_4_ ^
                                   ((uint)uStack_d40._4_4_ ^ (uint)fVar14) &
                                   -(uint)(local_e0._4_4_ < 0.0)) + fVar13,
                            (float)((uint)(float)uStack_d40 ^
                                   ((uint)(float)uStack_d40 ^ (uint)fVar9) &
                                   -(uint)((float)local_e0 < 0.0)) + fVar8);
      goto LAB_02fcbce8;
    }
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar7 + 0x18) * 0x200 + 0x18))
              (lVar7,param_7,&local_d50);
    fVar8 = (float)local_d50 * (float)local_e0;
    fVar13 = local_d50._4_4_ * local_e0._4_4_;
    fVar9 = (float)uStack_d48 * (float)uStack_d8;
    fVar10 = uStack_d48._4_4_ * uStack_d8._4_4_;
    uStack_d40._0_4_ = (float)local_e0 * (float)uStack_d40;
    uStack_d40._4_4_ = local_e0._4_4_ * uStack_d40._4_4_;
    local_d38._0_4_ = (float)uStack_d8 * (float)local_d38;
    local_d38._4_4_ = uStack_d8._4_4_ * local_d38._4_4_;
    uStack_d48 = CONCAT44((uint)fVar10 ^
                          ((uint)fVar10 ^ (uint)local_d38._4_4_) & -(uint)(uStack_d8._4_4_ < 0.0),
                          (uint)fVar9 ^
                          ((uint)fVar9 ^ (uint)(float)local_d38) & -(uint)((float)uStack_d8 < 0.0));
    local_d50 = CONCAT44((uint)fVar13 ^
                         ((uint)fVar13 ^ (uint)uStack_d40._4_4_) & -(uint)(local_e0._4_4_ < 0.0),
                         (uint)fVar8 ^
                         ((uint)fVar8 ^ (uint)(float)uStack_d40) & -(uint)((float)local_e0 < 0.0));
    local_d38 = (undefined8 *)
                CONCAT44((uint)local_d38._4_4_ ^
                         ((uint)local_d38._4_4_ ^ (uint)fVar10) & -(uint)(uStack_d8._4_4_ < 0.0),
                         (uint)(float)local_d38 ^
                         ((uint)(float)local_d38 ^ (uint)fVar9) & -(uint)((float)uStack_d8 < 0.0));
    uStack_d40 = CONCAT44((uint)uStack_d40._4_4_ ^
                          ((uint)uStack_d40._4_4_ ^ (uint)fVar13) & -(uint)(local_e0._4_4_ < 0.0),
                          (uint)(float)uStack_d40 ^
                          ((uint)(float)uStack_d40 ^ (uint)fVar8) & -(uint)((float)local_e0 < 0.0));
    local_d70 = auVar17._0_8_;
  }
  else {
    FUN_02fbc3d0(param_3,param_6,&local_cb0,&local_e0);
    fVar8 = ABS((float)local_e0);
    fVar13 = ABS(local_e0._4_4_);
    auVar12._0_8_ = CONCAT44(fVar13,fVar8);
    auVar12._8_4_ = ABS((float)uStack_d8);
    auVar12._12_4_ = ABS(uStack_d8._4_4_);
    uStack_d68 = auVar12._8_8_;
    local_d70 = auVar12._0_8_;
    if ((lVar7 == 0) || ((*(ushort *)(lVar7 + 0x1a) & 1) == 0)) {
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar7 + 0x18) * 0x200 + 0x18))
                (lVar7,&local_cb0,&local_d50);
    }
    else {
      FUN_02fdb1b0(lVar7,&local_cb0,&local_d50);
      fVar9 = *(float *)(param_3 + 0x38);
      auVar17._0_8_ = CONCAT44(fVar13 * fVar9,fVar8 * fVar9);
      auVar17._0_8_ = NEON_fmaxp(auVar17._0_8_,auVar17._0_8_,4);
      auVar17._0_8_ =
           NEON_fmax(CONCAT44(auVar12._8_4_ * fVar9,auVar12._8_4_ * fVar9),auVar17._0_8_,4);
      fVar8 = (float)auVar17._0_8_;
      fVar13 = (float)((ulong)auVar17._0_8_ >> 0x20);
      uStack_d48 = CONCAT44(uStack_d48._4_4_ - fVar13,(float)uStack_d48 - fVar8);
      local_d50 = CONCAT44(local_d50._4_4_ - fVar13,(float)local_d50 - fVar8);
      local_d38 = (undefined8 *)CONCAT44(local_d38._4_4_ + fVar13,(float)local_d38 + fVar8);
      uStack_d40 = CONCAT44(uStack_d40._4_4_ + fVar13,(float)uStack_d40 + fVar8);
    }
  }
  auVar17._0_8_ = local_d70;
LAB_02fcbce8:
  local_e0 = CONCAT44(local_e0._4_4_,7);
  uStack_98 = uStack_d48;
  local_a0 = local_d50;
  uStack_88 = local_d38;
  local_90 = uStack_d40;
  uStack_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  auVar17._0_8_ = NEON_fmaxp(auVar17._0_8_,auVar17._0_8_,4);
  local_c8 = 0;
  uStack_c0 = 0;
  auVar17._0_8_ = NEON_fmax(CONCAT44((int)uStack_d68,(int)uStack_d68),auVar17._0_8_,4);
  iVar2 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar4 + 0x18) * 0x200 + 0xa8))
                    (lVar4,&local_e0,&local_cb0,&local_e0);
  if ((-1 < iVar2) && (*(char *)(param_3 + 0x30) != '\0')) {
    if (0 < (int)local_d0) {
      fVar8 = *(float *)(param_3 + 0x40);
      fVar13 = *(float *)(param_3 + 0x44);
      fVar9 = *(float *)(param_3 + 0x48);
      fVar10 = *(float *)(param_3 + 0x50);
      fVar14 = *(float *)(param_3 + 0x54);
      fVar15 = *(float *)(param_3 + 0x58);
      local_cb0 = CONCAT44(fVar14 + fVar13 * (float)((ulong)*uStack_d8 >> 0x20),
                           fVar10 + fVar8 * (float)*uStack_d8);
      local_ca8 = fVar15 + fVar9 * *(float *)(uStack_d8 + 1);
      if ((int)local_d0 != 1) {
        local_ca4 = CONCAT44(fVar14 + fVar13 * (float)((ulong)*(undefined8 *)((long)uStack_d8 + 0xc)
                                                      >> 0x20),
                             fVar10 + fVar8 * (float)*(undefined8 *)((long)uStack_d8 + 0xc));
        local_c9c = fVar15 + fVar9 * *(float *)((long)uStack_d8 + 0x14);
        if ((int)local_d0 != 2) {
          local_c98 = CONCAT44(fVar14 + fVar13 * (float)((ulong)uStack_d8[3] >> 0x20),
                               fVar10 + fVar8 * (float)uStack_d8[3]);
          local_c90 = fVar15 + fVar9 * *(float *)(uStack_d8 + 4);
          if ((int)local_d0 != 3) {
            lVar4 = (local_d0 & 0xffffffff) - 3;
            pfVar6 = local_c84;
            pfVar5 = (float *)((long)uStack_d8 + 0x2c);
            do {
              fVar16 = *pfVar5;
              lVar4 = lVar4 + -1;
              pfVar1 = pfVar5 + -2;
              pfVar5 = pfVar5 + 3;
              *(ulong *)(pfVar6 + -2) =
                   CONCAT44(fVar14 + fVar13 * (float)((ulong)*(undefined8 *)pfVar1 >> 0x20),
                            fVar10 + fVar8 * (float)*(undefined8 *)pfVar1);
              *pfVar6 = fVar15 + fVar9 * fVar16;
              pfVar6 = pfVar6 + 3;
            } while (lVar4 != 0);
          }
        }
      }
    }
    uStack_d8 = &local_cb0;
    local_d0 = CONCAT44(*(undefined4 *)(param_3 + 0x38),(int)local_d0);
    local_c8 = 0;
    uStack_c0 = 0;
  }
  local_d10 = *param_7;
  uStack_d08 = param_7[1];
  local_d00 = param_7[2];
  uStack_cf8 = param_7[3];
  local_cf0 = param_7[4];
  uStack_ce8 = param_7[5];
  local_ce0 = param_7[6];
  uStack_cd8 = param_7[7];
  local_cc0 = param_9;
  uVar11 = NEON_fmax(*(undefined8 *)(param_9 + 0x10),0,4);
  fVar8 = (float)auVar17._0_8_ * (float)uVar11;
  fVar13 = (float)((ulong)auVar17._0_8_ >> 0x20) * (float)((ulong)uVar11 >> 0x20);
  local_d58 = NEON_fmin(CONCAT44(fVar13 * fVar13,fVar8 * fVar8),0x7f7fffee7f7fffee,4);
  lVar7 = *(long *)(param_4 + 0x58);
  lVar4 = 0;
  if (lVar7 != 0) {
    lVar4 = lVar7 + param_4 + 0x58;
  }
  plVar3 = (long *)(lVar4 + 0x50);
  lVar7 = *plVar3;
  auVar12 = *(undefined1 (*) [16])((long)plVar3 + lVar7 + 0x90);
  local_d50 = param_4;
  uStack_d48 = param_1;
  uStack_d40 = param_2;
  local_d38 = &local_e0;
  lStack_d30 = param_3;
  local_d28 = param_6;
  uStack_d20 = param_5;
  local_cd0 = auVar17._0_8_;
  local_cc8 = param_8;
  if (((auVar12._0_4_ < *(float *)((long)plVar3 + lVar7 + 0x80) &&
       auVar12._4_4_ < *(float *)((long)plVar3 + lVar7 + 0x84)) &&
      auVar12._8_4_ < *(float *)((long)plVar3 + lVar7 + 0x88)) &&
      auVar12._12_4_ < *(float *)((long)plVar3 + lVar7 + 0x8c)) {
    FUN_02fcc650(lVar4 + 0x20,&local_a0,&local_d50,&local_d58);
  }
  else if ((*(byte *)(param_9 + 8) & 0x41) == 0) {
    FUN_02fcc350(plVar3,&local_a0,&local_d58,&local_d50);
  }
  else {
    FUN_02fcc0dc();
  }
  return;
}


