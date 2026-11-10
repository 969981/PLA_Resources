/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03262c80; name: FUN_03262c80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_03262c80(long param_1,long param_2,long param_3,ulong param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  float fVar25;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  float fVar58;
  int iVar59;
  int iVar60;
  int iVar65;
  int iVar66;
  undefined1 auVar61 [12];
  int iVar67;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  long local_a0;
  undefined8 local_98;
  long local_90;
  uint local_88;
  int *local_80;
  undefined8 local_78;
  int *local_70;
  int local_68;
  
  uVar24 = (ulong)(param_3 - param_2) >> 4;
  iVar55 = (int)uVar24;
  local_80 = (int *)0x0;
  local_78 = 0x8000000000000000;
  iVar19 = iVar55 * 5 + 5;
  lVar17 = tpidr_el0;
  local_68 = iVar19;
  if (iVar19 == 0) {
    local_70 = (int *)0x0;
  }
  else {
    lVar21 = *(long *)(lVar17 + 0x38d490);
    if (lVar21 == 0) {
      lVar21 = FUN_0333d16c(0,1);
      *(long *)(lVar17 + 0x38d490) = lVar21;
    }
    lVar21 = *(long *)(lVar21 + 8);
    uVar18 = (ulong)(int)(iVar19 * 4 + 0x7fU & 0xffffff80);
    if (uVar18 <= *(ulong *)(lVar21 + 0x10)) {
      local_70 = *(int **)(lVar21 + 0x18);
      uVar18 = (long)local_70 + uVar18;
      if (uVar18 <= *(ulong *)(lVar21 + 0x20)) {
        *(ulong *)(lVar21 + 0x18) = uVar18;
        goto LAB_03262d20;
      }
    }
    local_70 = (int *)FUN_032ce670(lVar21);
  }
LAB_03262d20:
  puVar14 = PTR_DAT_043723a0;
  uVar13 = _UNK_03889fb8;
  uVar12 = _DAT_03889fb0;
  local_78 = CONCAT44(iVar19,(uint)local_78) | 0x8000000000000000;
  local_80 = local_70;
  if (iVar55 < 1) {
    iVar19 = 0;
LAB_03262f74:
    uVar24 = FUN_032625f0(param_1,param_2,param_3);
    if ((uVar24 & 1) == 0) goto LAB_0326316c;
    if ((local_78 & 0x3ffffffc00000000) == 0) {
      uVar23 = (local_78._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar23) {
        uVar23 = 0x3fffffff;
      }
      if (uVar23 < 5) {
        uVar23 = 4;
      }
      local_80 = (int *)FUN_032bd1d4(PTR_PTR_0434a080,uVar23,4,local_80,iVar19,(long)&local_78 + 4);
      if ((uint)local_78 != 4) goto LAB_03262f98;
    }
    else {
LAB_03262f98:
      local_78 = CONCAT44(local_78._4_4_,4);
    }
    *local_80 = 0;
    local_80[1] = 0x3fff0000;
    local_80[2] = 0x3fff3fff;
    local_80[3] = 0x3fff;
  }
  else {
    auVar69 = NEON_fmov(0x3f800000,4);
    iVar19 = 0;
    uVar18 = 0;
    uVar24 = uVar24 - 1;
    do {
      uVar22 = uVar18;
      pfVar1 = (float *)(param_2 +
                        (-(uVar24 >> 0x1f & 1) & 0xfffffff000000000 | (uVar24 & 0xffffffff) << 4));
      fVar3 = *pfVar1;
      fVar35 = pfVar1[1];
      fVar36 = pfVar1[2];
      fVar32 = (float)*(undefined8 *)(param_1 + 0x40);
      fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
      fVar34 = (float)*(undefined8 *)(param_1 + 0x48);
      fVar58 = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
      fVar25 = fVar32 + *(float *)(param_1 + 0x10) * fVar3 + *(float *)(param_1 + 0x20) * fVar35 +
               *(float *)(param_1 + 0x30) * fVar36;
      fVar29 = fVar33 + *(float *)(param_1 + 0x14) * fVar3 + *(float *)(param_1 + 0x24) * fVar35 +
               *(float *)(param_1 + 0x34) * fVar36;
      fVar30 = fVar34 + *(float *)(param_1 + 0x18) * fVar3 + *(float *)(param_1 + 0x28) * fVar35 +
               *(float *)(param_1 + 0x38) * fVar36;
      fVar31 = fVar58 + *(float *)(param_1 + 0x1c) * fVar3 + *(float *)(param_1 + 0x2c) * fVar35 +
               *(float *)(param_1 + 0x3c) * fVar36;
      puVar2 = (undefined8 *)(param_2 + uVar22 * 0x10);
      uVar4 = *puVar2;
      fVar3 = (float)uVar4;
      fVar35 = (float)((ulong)uVar4 >> 0x20);
      fVar36 = (float)puVar2[1];
      fVar32 = (*(float *)(param_1 + 0x30) * fVar36 +
               *(float *)(param_1 + 0x20) * fVar35 + fVar32 + *(float *)(param_1 + 0x10) * fVar3) -
               fVar25;
      fVar33 = (*(float *)(param_1 + 0x34) * fVar36 +
               *(float *)(param_1 + 0x24) * fVar35 + fVar33 + *(float *)(param_1 + 0x14) * fVar3) -
               fVar29;
      fVar34 = (*(float *)(param_1 + 0x38) * fVar36 +
               *(float *)(param_1 + 0x28) * fVar35 + fVar34 + *(float *)(param_1 + 0x18) * fVar3) -
               fVar30;
      fVar35 = (*(float *)(param_1 + 0x3c) * fVar36 +
               *(float *)(param_1 + 0x2c) * fVar35 + fVar58 + *(float *)(param_1 + 0x1c) * fVar3) -
               fVar31;
      auVar27._0_4_ = -fVar32;
      auVar27._4_4_ = fVar32;
      fVar3 = -fVar33;
      uVar4 = CONCAT17((char)((uint)fVar33 >> 0x18),
                       CONCAT16((char)((uint)fVar33 >> 0x10),
                                CONCAT15((char)((uint)fVar33 >> 8),CONCAT14(SUB41(fVar33,0),fVar3)))
                      );
      auVar27._8_8_ = uVar4;
      iVar55 = -(uint)(auVar27._0_4_ == 0.0);
      iVar56 = -(uint)(fVar32 == 0.0);
      iVar57 = -(uint)(fVar3 == 0.0);
      fVar36 = (float)((ulong)uVar4 >> 0x20);
      iVar59 = -(uint)(fVar36 == 0.0);
      iVar60 = -(uint)(fVar25 < 0.0);
      iVar65 = -(uint)(16383.0 - fVar25 < 0.0);
      iVar66 = -(uint)(fVar29 < 0.0);
      iVar67 = -(uint)(16383.0 - fVar29 < 0.0);
      bVar40 = (byte)((uint)iVar55 >> 8);
      bVar41 = (byte)((uint)iVar55 >> 0x10);
      bVar42 = (byte)((uint)iVar55 >> 0x18);
      iVar60 = CONCAT13(bVar42 & (byte)((uint)iVar60 >> 0x18),
                        CONCAT12(bVar41 & (byte)((uint)iVar60 >> 0x10),
                                 CONCAT11(bVar40 & (byte)((uint)iVar60 >> 8),
                                          (byte)iVar55 & (byte)iVar60)));
      bVar44 = (byte)((uint)iVar56 >> 8);
      bVar45 = (byte)((uint)iVar56 >> 0x10);
      bVar46 = (byte)((uint)iVar56 >> 0x18);
      auVar61._0_8_ =
           CONCAT17(bVar46 & (byte)((uint)iVar65 >> 0x18),
                    CONCAT16(bVar45 & (byte)((uint)iVar65 >> 0x10),
                             CONCAT15(bVar44 & (byte)((uint)iVar65 >> 8),
                                      CONCAT14((byte)iVar56 & (byte)iVar65,iVar60))));
      auVar61[8] = (byte)iVar57 & (byte)iVar66;
      bVar48 = (byte)((uint)iVar57 >> 8);
      auVar61[9] = bVar48 & (byte)((uint)iVar66 >> 8);
      bVar49 = (byte)((uint)iVar57 >> 0x10);
      auVar61[10] = bVar49 & (byte)((uint)iVar66 >> 0x10);
      bVar50 = (byte)((uint)iVar57 >> 0x18);
      auVar61[0xb] = bVar50 & (byte)((uint)iVar66 >> 0x18);
      auVar62[0xc] = (byte)iVar59 & (byte)iVar67;
      auVar62._0_12_ = auVar61;
      bVar52 = (byte)((uint)iVar59 >> 8);
      auVar62[0xd] = bVar52 & (byte)((uint)iVar67 >> 8);
      bVar53 = (byte)((uint)iVar59 >> 0x10);
      auVar62[0xe] = bVar53 & (byte)((uint)iVar67 >> 0x10);
      bVar54 = (byte)((uint)iVar59 >> 0x18);
      auVar62[0xf] = bVar54 & (byte)((uint)iVar67 >> 0x18);
      if (((iVar60 == 0 && (int)((ulong)auVar61._0_8_ >> 0x20) == 0) && auVar61._8_4_ == 0) &&
          auVar62._12_4_ == 0) {
        auVar62 = NEON_frecpe(auVar27,4);
        auVar68 = NEON_frecps(auVar27,auVar62,4);
        auVar63._0_4_ = auVar62._0_4_ * auVar68._0_4_;
        auVar63._4_4_ = auVar62._4_4_ * auVar68._4_4_;
        auVar63._8_4_ = auVar62._8_4_ * auVar68._8_4_;
        auVar63._12_4_ = auVar62._12_4_ * auVar68._12_4_;
        auVar62 = NEON_frecps(auVar27,auVar63,4);
        fVar58 = fVar25 * auVar63._0_4_ * auVar62._0_4_;
        fVar5 = (16383.0 - fVar25) * auVar63._4_4_ * auVar62._4_4_;
        fVar6 = fVar29 * auVar63._8_4_ * auVar62._8_4_;
        fVar7 = (16383.0 - fVar29) * auVar63._12_4_ * auVar62._12_4_;
        bVar39 = SUB41(fVar58,0) & ~(byte)iVar55;
        bVar40 = (byte)((uint)fVar58 >> 8) & ~bVar40;
        bVar41 = (byte)((uint)fVar58 >> 0x10) & ~bVar41;
        bVar42 = (byte)((uint)fVar58 >> 0x18) & ~bVar42;
        bVar43 = SUB41(fVar5,0) & ~(byte)iVar56;
        bVar44 = (byte)((uint)fVar5 >> 8) & ~bVar44;
        bVar45 = (byte)((uint)fVar5 >> 0x10) & ~bVar45;
        bVar46 = (byte)((uint)fVar5 >> 0x18) & ~bVar46;
        bVar47 = SUB41(fVar6,0) & ~(byte)iVar57;
        bVar48 = (byte)((uint)fVar6 >> 8) & ~bVar48;
        bVar49 = (byte)((uint)fVar6 >> 0x10) & ~bVar49;
        bVar50 = (byte)((uint)fVar6 >> 0x18) & ~bVar50;
        bVar51 = SUB41(fVar7,0) & ~(byte)iVar59;
        bVar52 = (byte)((uint)fVar7 >> 8) & ~bVar52;
        bVar53 = (byte)((uint)fVar7 >> 0x10) & ~bVar53;
        bVar54 = (byte)((uint)fVar7 >> 0x18) & ~bVar54;
        iVar55 = -(uint)(auVar27._0_4_ < 0.0);
        iVar56 = -(uint)(fVar32 < 0.0);
        iVar57 = -(uint)(fVar3 < 0.0);
        iVar59 = -(uint)(fVar36 < 0.0);
        auVar64._0_4_ = -(uint)(0.0 < auVar27._0_4_);
        auVar64._4_4_ = -(uint)(0.0 < fVar32);
        auVar64._8_4_ = -(uint)(0.0 < fVar3);
        auVar64._12_4_ = -(uint)(0.0 < fVar36);
        auVar37[0] = bVar39 & (byte)iVar55;
        auVar37[1] = bVar40 & (byte)((uint)iVar55 >> 8);
        auVar37[2] = bVar41 & (byte)((uint)iVar55 >> 0x10);
        auVar37[3] = bVar42 & (byte)((uint)iVar55 >> 0x18);
        auVar37[4] = bVar43 & (byte)iVar56;
        auVar37[5] = bVar44 & (byte)((uint)iVar56 >> 8);
        auVar37[6] = bVar45 & (byte)((uint)iVar56 >> 0x10);
        auVar37[7] = bVar46 & (byte)((uint)iVar56 >> 0x18);
        auVar37[8] = bVar47 & (byte)iVar57;
        auVar37[9] = bVar48 & (byte)((uint)iVar57 >> 8);
        auVar37[10] = bVar49 & (byte)((uint)iVar57 >> 0x10);
        auVar37[0xb] = bVar50 & (byte)((uint)iVar57 >> 0x18);
        auVar37[0xc] = bVar51 & (byte)iVar59;
        auVar37[0xd] = bVar52 & (byte)((uint)iVar59 >> 8);
        auVar37[0xe] = bVar53 & (byte)((uint)iVar59 >> 0x10);
        auVar37[0xf] = bVar54 & (byte)((uint)iVar59 >> 0x18);
        auVar68[1] = bVar40;
        auVar68[0] = bVar39;
        auVar68[2] = bVar41;
        auVar68[3] = bVar42;
        auVar68[4] = bVar43;
        auVar68[5] = bVar44;
        auVar68[6] = bVar45;
        auVar68[7] = bVar46;
        auVar68[8] = bVar47;
        auVar68[9] = bVar48;
        auVar68[10] = bVar49;
        auVar68[0xb] = bVar50;
        auVar68[0xc] = bVar51;
        auVar68[0xd] = bVar52;
        auVar68[0xe] = bVar53;
        auVar68[0xf] = bVar54;
        fVar3 = (float)NEON_fminnmv(auVar69 ^ (auVar69 ^ auVar68) & auVar64,4);
        fVar36 = (float)NEON_fmaxnmv(auVar37,4);
        if (fVar36 < fVar3) {
          auVar38._0_4_ = fVar25 + fVar32 * fVar36;
          auVar38._4_4_ = fVar29 + fVar33 * fVar36;
          auVar38._8_4_ = fVar30 + fVar34 * fVar36;
          auVar38._12_4_ = fVar31 + fVar35 * fVar36;
          auVar26._0_4_ = fVar25 + fVar32 * fVar3;
          auVar26._4_4_ = fVar29 + fVar33 * fVar3;
          auVar26._8_4_ = fVar30 + fVar34 * fVar3;
          auVar26._12_4_ = fVar31 + fVar35 * fVar3;
          auVar8._8_8_ = uVar13;
          auVar8._0_8_ = uVar12;
          auVar62 = a64_TBL(ZEXT816(0),auVar38,auVar8);
          auVar9._8_8_ = uVar13;
          auVar9._0_8_ = uVar12;
          auVar27 = a64_TBL(ZEXT816(0),auVar26,auVar9);
          auVar27 = auVar27 ^ (auVar27 ^ auVar62) & *(undefined1 (*) [16])(puVar14 + 0x30);
          auVar28._0_4_ = (int)(auVar27._0_4_ + 0.5);
          auVar28._4_4_ = (int)(auVar27._4_4_ + 0.5);
          auVar28._8_4_ = (int)(auVar27._8_4_ + 0.5);
          auVar28._12_4_ = (int)(auVar27._12_4_ + 0.5);
          auVar10._8_4_ = 0x3fff;
          auVar10._0_8_ = 0x3fff00003fff;
          auVar10._12_4_ = 0x3fff;
          auVar27 = NEON_smin(auVar28,auVar10,4);
          uVar23 = auVar27._4_4_ | auVar27._0_4_ << 0x10;
          uVar20 = auVar27._12_4_ | auVar27._8_4_ << 0x10;
          if (uVar23 != uVar20) {
            if (iVar19 == 0) {
              iVar19 = 0;
LAB_03262d80:
              local_80[iVar19] = uVar23;
              local_78 = local_78 & 0xffffffff00000000;
              iVar55 = iVar19 + 1;
            }
            else {
              FUN_032619b0(local_80[(long)iVar19 + -1],uVar23,&local_80);
              iVar19 = (uint)local_78;
              if (((uint)local_78 == 0) ||
                 (iVar55 = (uint)local_78, local_80[(int)((uint)local_78 + -1)] != uVar23))
              goto LAB_03262d80;
            }
            iVar19 = iVar55 + 1;
            local_80[iVar55] = uVar20;
            local_78 = CONCAT44(local_78._4_4_,iVar19);
          }
        }
      }
      uVar18 = uVar22 + 1;
      uVar24 = uVar22;
    } while (((ulong)(param_3 - param_2) >> 4 & 0xffffffff) != uVar22 + 1);
    if (iVar19 < 2) goto LAB_03262f74;
    if (*local_80 == local_80[(long)iVar19 + -1]) {
      local_78 = CONCAT44(local_78._4_4_,(int)((long)iVar19 + -1));
    }
    else {
      FUN_032619b0(local_80[(long)iVar19 + -1],*local_80,&local_80);
    }
    uVar24 = FUN_03261230(&local_80);
    if ((uVar24 & 1) == 0) {
      FUN_03261390(&local_80);
    }
  }
  uVar24 = local_78;
  uVar23 = (uint)local_78;
  local_88 = (uint)local_78;
  local_a0 = 0;
  local_98 = 0x8000000000000000;
  if ((uint)local_78 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(long *)(lVar17 + 0x38d490);
    if (lVar21 == 0) {
      lVar21 = FUN_0333d16c(0,1);
      *(long *)(lVar17 + 0x38d490) = lVar21;
    }
    lVar16 = *(long *)(lVar21 + 8);
    uVar18 = (ulong)(int)(uVar23 * 2 + 0x7f & 0xffffff80);
    if (uVar18 <= *(ulong *)(lVar16 + 0x10)) {
      lVar21 = *(long *)(lVar16 + 0x18);
      uVar18 = lVar21 + uVar18;
      if (uVar18 <= *(ulong *)(lVar16 + 0x20)) {
        *(ulong *)(lVar16 + 0x18) = uVar18;
        goto LAB_03263024;
      }
    }
    lVar21 = FUN_032ce670();
  }
LAB_03263024:
  uVar18 = local_98;
  puVar14 = PTR_PTR_0434a080;
  local_98._4_4_ = uVar23 | 0x80000000;
  local_a0 = lVar21;
  local_90 = lVar21;
  if (0x3fffffff < (int)uVar23) {
    FUN_032bd0a8(uVar24 & 0xffffffff);
    uVar20 = (uVar23 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar20) {
      uVar20 = 0x3fffffff;
    }
    uVar11 = uVar23;
    if ((int)uVar23 <= (int)uVar20) {
      uVar11 = uVar20;
    }
    local_a0 = FUN_032bd1d4(puVar14,uVar11,2,lVar21,uVar18 & 0xffffffff,(long)&local_98 + 4);
  }
  lVar21 = (long)(int)(uint)local_98;
  if ((int)(uint)local_98 < (int)uVar23) {
    uVar20 = ~(uint)local_98;
    local_98._0_4_ = uVar23;
    memset((void *)(local_a0 + lVar21 * 2),0xff,(ulong)(uVar23 + uVar20) * 2 + 2);
  }
  else if ((int)uVar23 < (int)(uint)local_98) {
    local_98._0_4_ = uVar23;
  }
  FUN_032621a0(param_1,&local_80,(param_4 & 0xffff) + 1,&local_a0);
  uVar23 = local_88;
  lVar21 = local_90;
  if (local_90 == local_a0) {
    local_98._0_4_ = 0;
  }
  lVar16 = *(long *)(lVar17 + 0x38d490);
  if (lVar16 == 0) {
    lVar16 = FUN_0333d16c(0,1);
    *(long *)(lVar17 + 0x38d490) = lVar16;
  }
  lVar16 = *(long *)(lVar16 + 8);
  uVar24 = (ulong)(int)(uVar23 * 2 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar16 + 0x10) < uVar24) || (*(long *)(lVar16 + 0x18) != uVar24 + lVar21)) ||
     (*(long *)(lVar16 + 0x28) == lVar21)) {
    FUN_032cedf0(lVar16,lVar21);
  }
  else {
    *(long *)(lVar16 + 0x18) = lVar21;
  }
  uVar23 = local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < (int)uVar23) && (local_a0 != 0)) {
    FUN_032cf244(puVar14,local_a0,2,uVar23 & 0x3fffffff);
  }
LAB_0326316c:
  iVar19 = local_68;
  piVar15 = local_70;
  if (local_70 == local_80) {
    local_78 = local_78 & 0xffffffff00000000;
  }
  lVar21 = *(long *)(lVar17 + 0x38d490);
  if (lVar21 == 0) {
    lVar21 = FUN_0333d16c(0,1);
    *(long *)(lVar17 + 0x38d490) = lVar21;
  }
  lVar17 = *(long *)(lVar21 + 8);
  uVar24 = (ulong)(int)(iVar19 * 4 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar17 + 0x10) < uVar24) || (*(long *)(lVar17 + 0x18) != uVar24 + (long)piVar15))
     || (*(int **)(lVar17 + 0x28) == piVar15)) {
    FUN_032cedf0(lVar17,piVar15);
  }
  else {
    *(int **)(lVar17 + 0x18) = piVar15;
  }
  uVar24 = local_78;
  uVar23 = local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < (long)uVar24) && (local_80 != (int *)0x0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_80,4,uVar23 & 0x3fffffff);
  }
  return 1;
}


