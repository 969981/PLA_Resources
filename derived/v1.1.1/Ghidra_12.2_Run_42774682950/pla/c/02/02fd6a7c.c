/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fd6a7c; name: FUN_02fd6a7c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fd6a7c(undefined4 param_1,undefined8 *param_2,undefined1 (*param_3) [16],long param_4)

{
  float *pfVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
  int iVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  float fVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar30;
  undefined8 uVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  ulong uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 auVar41 [16];
  undefined8 uVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auStack_80 [64];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  cVar2 = *(char *)(param_4 + 0x4d);
  *param_2 = &PTR_LAB_042ba030;
  param_2[1] = 0xffffffff;
  *(undefined4 *)(param_2 + 3) = 0x30205;
  param_2[2] = 1;
  bVar10 = cVar2 != '\0';
  *(undefined2 *)(param_2 + 0xe) = 0x7f7f;
  *(undefined1 *)((long)param_2 + 0x1c) = 0;
  param_2[9] = 0x6000000d8;
  param_2[10] = 0x600000130;
  iVar23 = 0x18;
  if (!bVar10) {
    iVar23 = 0;
  }
  param_2[7] = 0;
  param_2[8] = 0x800000080;
  param_2[0xb] = 0x1800000140;
  *(undefined4 *)(param_2 + 0xc) = 0x150;
  *(int *)((long)param_2 + 100) = iVar23;
  param_2[5] = 0;
  param_2[6] = 0;
  uVar15 = CONCAT44(param_1,param_1);
  *(undefined4 *)(param_2 + 4) = param_1;
  *(int *)(param_2 + 0xd) = iVar23 * 4 + 0x148;
  *(uint *)((long)param_2 + 0x6c) = (uint)bVar10 << 3;
  local_28 = *(undefined8 *)(param_3[1] + 8);
  uStack_38 = *(undefined8 *)(*param_3 + 8);
  local_40 = *(undefined8 *)*param_3;
  local_30 = *(undefined8 *)param_3[1];
  if (*(char *)(param_4 + 4) == '\0') {
    local_40._4_4_ = (float)((ulong)local_40 >> 0x20);
    uStack_38._4_4_ = (float)((ulong)uStack_38 >> 0x20);
    local_30._4_4_ = (float)((ulong)local_30 >> 0x20);
    local_28._4_4_ = (float)((ulong)local_28 >> 0x20);
    fVar11 = (float)local_30;
    fVar21 = local_30._4_4_;
    fVar22 = (float)local_28;
    fVar46 = local_28._4_4_;
    fVar47 = (float)local_40;
    fVar27 = local_40._4_4_;
    fVar28 = (float)uStack_38;
    fVar29 = uStack_38._4_4_;
  }
  else {
    auVar41 = *param_3;
    auVar26 = param_3[1];
    fVar11 = auVar26._0_4_ - auVar41._0_4_;
    fVar21 = auVar26._4_4_ - auVar41._4_4_;
    uVar38 = (undefined1)((uint)fVar21 >> 8);
    uVar39 = (undefined1)((uint)fVar21 >> 0x10);
    uVar40 = (undefined1)((uint)fVar21 >> 0x18);
    fVar22 = auVar26._8_4_ - auVar41._8_4_;
    if (((DAT_0442d318 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_0442d318), iVar23 != 0)) {
      uVar14 = NEON_fmov(0x40400000,4);
      uVar31 = NEON_frsqrte(uVar14,4);
      fVar46 = (float)uVar31;
      fVar47 = (float)((ulong)uVar31 >> 0x20);
      uVar31 = NEON_frsqrts(uVar14,CONCAT44(fVar47 * fVar47,fVar46 * fVar46),4);
      fVar46 = fVar46 * (float)uVar31;
      fVar47 = fVar47 * (float)((ulong)uVar31 >> 0x20);
      uVar14 = NEON_frsqrts(uVar14,CONCAT44(fVar47 * fVar47,fVar46 * fVar46),4);
      uVar31 = NEON_fmov(0xbf800000,4);
      DAT_0442d310 = CONCAT44((float)((ulong)uVar14 >> 0x20) * fVar47 +
                              (float)((ulong)uVar31 >> 0x20),(float)uVar14 * fVar46 + (float)uVar31)
      ;
      __cxa_guard_release(&DAT_0442d318);
    }
    uVar14 = NEON_fminp(CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(SUB41(fVar21,0),
                                                                                 fVar11)))),
                        CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(SUB41(fVar21,0),
                                                                                 fVar11)))),4);
    uVar14 = NEON_fmin(CONCAT44(fVar22,fVar22),uVar14,4);
    uVar31 = NEON_fmov(0x3f800000,4);
    uVar15 = NEON_fmin(uVar15,CONCAT44((float)((ulong)uVar14 >> 0x20) * 0.5,(float)uVar14 * 0.5),4);
    fVar46 = (float)uVar15 * ((float)DAT_0442d310 * *(float *)(param_4 + 8) + (float)uVar31);
    fVar47 = (float)((ulong)uVar15 >> 0x20) *
             ((float)((ulong)DAT_0442d310 >> 0x20) * *(float *)(param_4 + 8) +
             (float)((ulong)uVar31 >> 0x20));
    uVar15 = CONCAT44(fVar47,fVar46);
    auVar24._0_4_ = *(float *)*param_3 + fVar46;
    auVar24._4_4_ = *(float *)(*param_3 + 4) + fVar47;
    auVar24._8_4_ = *(float *)(*param_3 + 8) + fVar46;
    auVar24._12_4_ = *(float *)(*param_3 + 0xc) + fVar47;
    auVar17._0_4_ = (float)*(undefined8 *)param_3[1] - fVar46;
    auVar17._4_4_ = (float)((ulong)*(undefined8 *)param_3[1] >> 0x20) - fVar47;
    auVar17._8_4_ = (float)*(undefined8 *)(param_3[1] + 8) - fVar46;
    auVar17._12_4_ = (float)((ulong)*(undefined8 *)(param_3[1] + 8) >> 0x20) - fVar47;
    auVar17 = NEON_fmax(auVar24,auVar17,4);
    uVar37 = CONCAT44(-(uint)(fVar21 == 0.0),-(uint)(fVar11 == 0.0)) >> 0x18 & 0xffffffff34;
    uVar32 = CONCAT17((char)(uVar37 >> 0x20),(uint7)(uint)(uVar37 << 0x18)) & 0x34ffffffffffffff;
    uVar37 = CONCAT44(-(uint)(auVar26._12_4_ - auVar41._12_4_ == 0.0),-(uint)(fVar22 == 0.0)) >>
             0x18 & 0xffffffff34;
    uVar37 = CONCAT17((char)(uVar37 >> 0x20),(uint7)(uint)(uVar37 << 0x18)) & 0x34ffffffffffffff;
    fVar11 = (float)uVar32;
    fVar47 = auVar24._0_4_ - fVar11;
    fVar21 = (float)(uVar32 >> 0x20);
    fVar27 = auVar24._4_4_ - fVar21;
    fVar22 = (float)uVar37;
    fVar28 = auVar24._8_4_ - fVar22;
    fVar46 = (float)(uVar37 >> 0x20);
    fVar29 = auVar24._12_4_ - fVar46;
    fVar11 = fVar11 + auVar17._0_4_;
    fVar21 = fVar21 + auVar17._4_4_;
    fVar22 = fVar22 + auVar17._8_4_;
    fVar46 = fVar46 + auVar17._12_4_;
    uStack_38 = CONCAT44(fVar29,fVar28);
    local_40 = CONCAT44(fVar27,fVar47);
    local_28 = CONCAT44(fVar46,fVar22);
    local_30 = CONCAT44(fVar21,fVar11);
  }
  pfVar1 = (float *)&DAT_03aae430;
  if (*(float **)(param_4 + 0x40) != (float *)0x0) {
    pfVar1 = *(float **)(param_4 + 0x40);
  }
  fVar30 = (fVar11 + fVar47) * 0.5;
  fVar33 = (fVar21 + fVar27) * 0.5;
  fVar35 = (fVar22 + fVar28) * 0.5;
  fVar4 = *pfVar1;
  fVar5 = pfVar1[1];
  fVar6 = pfVar1[2];
  uVar31 = *(undefined8 *)(pfVar1 + 6);
  uVar14 = *(undefined8 *)(pfVar1 + 4);
  fVar7 = pfVar1[8];
  fVar8 = pfVar1[9];
  fVar9 = pfVar1[10];
  uVar43 = *(undefined8 *)(pfVar1 + 0xe);
  uVar42 = *(undefined8 *)(pfVar1 + 0xc);
  *(float *)(param_2 + 4) = (float)uVar15;
  fVar34 = (float)uVar14;
  fVar36 = (float)((ulong)uVar14 >> 0x20);
  fVar3 = (float)uVar31;
  auVar18._0_4_ = (fVar11 - fVar47) * 0.5;
  auVar18._4_4_ = (fVar21 - fVar27) * 0.5;
  auVar18._8_4_ = (fVar22 - fVar28) * 0.5;
  auVar18._12_4_ = (fVar46 - fVar29) * 0.5;
  fVar44 = fVar7 + fVar4 * 0.0 + fVar34 * 0.0;
  fVar28 = fVar8 + fVar5 * 0.0 + fVar36 * 0.0;
  fVar45 = fVar9 + fVar6 * 0.0 + fVar3 * 0.0;
  auVar41 = NEON_ext(auVar18,auVar18,8,1);
  fVar11 = fVar4 * 0.0 + fVar34 + fVar7 * 0.0;
  fVar21 = fVar5 * 0.0 + fVar36 + fVar8 * 0.0;
  fVar22 = fVar6 * 0.0 + fVar3 + fVar9 * 0.0;
  fVar46 = fVar7 * 0.0 + fVar4 + fVar34 * 0.0;
  fVar47 = fVar8 * 0.0 + fVar5 + fVar36 * 0.0;
  fVar27 = fVar9 * 0.0 + fVar6 + fVar3 * 0.0;
  fVar29 = (float)uVar42 + fVar7 * fVar35 + fVar4 * fVar30 + fVar34 * fVar33;
  fVar34 = (float)((ulong)uVar42 >> 0x20) + fVar8 * fVar35 + fVar5 * fVar30 + fVar36 * fVar33;
  fVar36 = (float)uVar43 + fVar9 * fVar35 + fVar6 * fVar30 + fVar3 * fVar33;
  *(float *)(param_2 + 0x11) = fVar27;
  *(float *)((long)param_2 + 0x8c) = auVar18._0_4_;
  *(float *)(param_2 + 0x10) = fVar46;
  *(float *)((long)param_2 + 0x84) = fVar47;
  param_2[0x13] =
       CONCAT17((char)((uint)auVar18._4_4_ >> 0x18),
                CONCAT16((char)((uint)auVar18._4_4_ >> 0x10),
                         CONCAT15((char)((uint)auVar18._4_4_ >> 8),
                                  CONCAT14(SUB41(auVar18._4_4_,0),fVar22))));
  param_2[0x12] =
       CONCAT17((char)((uint)fVar21 >> 0x18),
                CONCAT16((char)((uint)fVar21 >> 0x10),
                         CONCAT15((char)((uint)fVar21 >> 8),CONCAT14(SUB41(fVar21,0),fVar11))));
  uVar14 = CONCAT44(auVar18._8_4_,fVar45);
  param_2[0x15] = uVar14;
  param_2[0x14] = CONCAT44(fVar28,fVar44);
  param_2[0x17] = (ulong)(uint)fVar36;
  param_2[0x16] = CONCAT44(fVar34,fVar29);
  iVar23 = -(uint)(auVar41._0_4_ <= 1.1920929e-07);
  uVar12 = (uint)(byte)(-(auVar18._0_4_ <= 1.1920929e-07) & (byte)_DAT_03889700);
  auVar16._0_8_ =
       CONCAT17((byte)(-(uint)(auVar18._4_4_ <= 1.1920929e-07) >> 0x18) &
                (byte)((ulong)_DAT_03889700 >> 0x38),
                (uint7)CONCAT14((byte)-(uint)(auVar18._4_4_ <= 1.1920929e-07) &
                                (byte)((ulong)_DAT_03889700 >> 0x20),uVar12));
  auVar16[8] = (byte)iVar23 & (byte)_UNK_03889708;
  auVar16[9] = (byte)((uint)iVar23 >> 8) & (byte)((ulong)_UNK_03889708 >> 8);
  auVar16[10] = (byte)((uint)iVar23 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x10);
  auVar16[0xb] = (byte)((uint)iVar23 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x18);
  auVar19[0xc] = (char)((ulong)_UNK_03889708 >> 0x20);
  auVar19._0_12_ = auVar16;
  auVar19[0xd] = (char)((ulong)_UNK_03889708 >> 0x28);
  auVar19[0xe] = (char)((ulong)_UNK_03889708 >> 0x30);
  auVar19[0xf] = (char)((ulong)_UNK_03889708 >> 0x38);
  uVar13 = uVar12 + (int)((ulong)auVar16._0_8_ >> 0x20) + auVar16._8_4_ + auVar19._12_4_;
  auVar25._0_4_ = ABS((float)_DAT_03889a80 - fVar46);
  auVar25._4_4_ = ABS((float)((ulong)_DAT_03889a80 >> 0x20) - fVar47);
  auVar25._8_4_ = ABS((float)_UNK_03889a88 - fVar27);
  auVar25._12_4_ = ABS((float)((ulong)_UNK_03889a88 >> 0x20) - auVar18._0_4_);
  fVar21 = ABS((float)((ulong)DAT_0388a140 >> 0x20) - fVar21);
  fVar22 = ABS((float)DAT_0388a148 - fVar22);
  fVar46 = ABS((float)((ulong)DAT_0388a148 >> 0x20) - auVar18._4_4_);
  fVar47 = ABS((float)((ulong)_DAT_03888d10 >> 0x20) - fVar28);
  fVar27 = ABS((float)_UNK_03888d18 - fVar45);
  fVar28 = ABS((float)((ulong)_UNK_03888d18 >> 0x20) - auVar18._8_4_);
  auVar41[4] = SUB41(fVar21,0);
  auVar41._0_4_ = ABS((float)DAT_0388a140 - fVar11);
  auVar41[5] = (char)((uint)fVar21 >> 8);
  auVar41[6] = (char)((uint)fVar21 >> 0x10);
  auVar41[7] = (char)((uint)fVar21 >> 0x18);
  auVar41[8] = SUB41(fVar22,0);
  auVar41[9] = (char)((uint)fVar22 >> 8);
  auVar41[10] = (char)((uint)fVar22 >> 0x10);
  auVar41[0xb] = (char)((uint)fVar22 >> 0x18);
  auVar41[0xc] = SUB41(fVar46,0);
  auVar41[0xd] = (char)((uint)fVar46 >> 8);
  auVar41[0xe] = (char)((uint)fVar46 >> 0x10);
  auVar41[0xf] = (char)((uint)fVar46 >> 0x18);
  auVar41 = NEON_fmax(auVar25,auVar41,4);
  auVar20._0_4_ = fVar29 * fVar29;
  auVar20._4_4_ = fVar34 * fVar34;
  auVar20._8_4_ = fVar36 * fVar36;
  auVar20._12_4_ = 0;
  auVar26[4] = SUB41(fVar47,0);
  auVar26._0_4_ = ABS((float)_DAT_03888d10 - fVar44);
  auVar26[5] = (char)((uint)fVar47 >> 8);
  auVar26[6] = (char)((uint)fVar47 >> 0x10);
  auVar26[7] = (char)((uint)fVar47 >> 0x18);
  auVar26[8] = SUB41(fVar27,0);
  auVar26[9] = (char)((uint)fVar27 >> 8);
  auVar26[10] = (char)((uint)fVar27 >> 0x10);
  auVar26[0xb] = (char)((uint)fVar27 >> 0x18);
  auVar26[0xc] = SUB41(fVar28,0);
  auVar26[0xd] = (char)((uint)fVar28 >> 8);
  auVar26[0xe] = (char)((uint)fVar28 >> 0x10);
  auVar26[0xf] = (char)((uint)fVar28 >> 0x18);
  auVar41 = NEON_fmax(auVar41,auVar26,4);
  auVar26 = NEON_ext(auVar20,auVar20,8,1);
  uVar12 = uVar13 & 7;
  if (auVar41._8_4_ <= 0.001 && (auVar41._0_4_ <= 0.001 && auVar41._4_4_ <= 0.001)) {
    uVar12 = uVar13 & 7 | 8;
  }
  uVar13 = uVar12 | 0x10;
  if (1.1920929e-07 <= auVar26._0_4_ + auVar20._0_4_ + auVar20._4_4_) {
    uVar13 = uVar12;
  }
  *(uint *)((long)param_2 + 0xbc) = uVar13 | 0x3f000000;
  FUN_02fdf538(param_2,&local_40,*(undefined8 *)(param_4 + 0x40));
  uVar14 = CONCAT44((local_30._4_4_ - local_40._4_4_) * 0.5,
                    ((float)local_30 - (float)local_40) * 0.5);
  fVar11 = ((float)local_28 - (float)uStack_38) * 0.5;
  uVar14 = NEON_fminp(uVar14,uVar14,4);
  uVar14 = NEON_fmin(CONCAT44(fVar11,fVar11),uVar14,4);
  *(short *)(param_2 + 0xe) =
       (short)((uint)(DAT_042b0ab0 * ((float)uVar15 + (float)uVar14) * 1.0039062) >> 0x10);
  if (*(char *)(param_4 + 0x11) != '\0') {
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_2 + 3) * 0x200 + 0x38))
              (param_2,param_4 + 0x18,auStack_80);
    FUN_02fed11c(param_2,auStack_80);
  }
  if (*(char *)(param_4 + 0x4d) != '\0') {
    FUN_02fdfcd4(param_2);
  }
  return;
}


