/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00280d38; name: FUN_00280d38
 */


void FUN_00280d38(float param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 int *param_6)

{
  char cVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined2 uVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  long lVar15;
  float *pfVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  undefined1 uVar20;
  byte bVar21;
  undefined1 uVar22;
  byte bVar23;
  undefined1 uVar24;
  byte bVar25;
  undefined1 uVar26;
  byte bVar27;
  undefined1 uVar28;
  byte bVar29;
  undefined1 uVar30;
  byte bVar31;
  undefined1 uVar32;
  byte bVar33;
  undefined1 uVar34;
  byte bVar35;
  undefined1 uVar36;
  byte bVar37;
  undefined1 uVar38;
  byte bVar39;
  undefined1 uVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0 [4];
  float local_b0;
  float fStack_ac;
  
  iVar12 = *(int *)(param_4 + 0x70);
  if (iVar12 < 3) {
    *(undefined4 *)(param_4 + 0x78) = 0;
    return;
  }
  pfVar16 = *(float **)(*(long *)(param_4 + 0x58) + 0x58);
  if (param_6[0x16] == 1) {
    fVar44 = 0.0;
    iVar14 = iVar12 + -1;
    pfVar10 = pfVar16;
    do {
      pfVar10 = *(float **)(pfVar10 + 0x16);
      iVar14 = iVar14 + -1;
      pfVar11 = *(float **)(pfVar10 + 0x18);
      auVar47._0_4_ = (*pfVar10 - *pfVar11) * (*pfVar10 - *pfVar11);
      auVar47._4_4_ = (pfVar10[1] - pfVar11[1]) * (pfVar10[1] - pfVar11[1]);
      auVar47._8_4_ = (pfVar10[2] - pfVar11[2]) * (pfVar10[2] - pfVar11[2]);
      auVar47._12_4_ = (pfVar10[3] - pfVar11[3]) * (pfVar10[3] - pfVar11[3]);
      auVar51 = NEON_ext(auVar47,auVar47,8,1);
      fVar44 = fVar44 + SQRT(auVar51._0_4_ + auVar47._0_4_ + auVar51._4_4_ + auVar47._4_4_);
    } while (iVar14 != 0);
    fVar44 = 1.0 / fVar44;
    lVar9 = *(long *)(*(long *)(param_5 + 0x238) + 0x10);
    cVar1 = *(char *)(lVar9 + 0x75c);
  }
  else {
    fVar44 = 0.0;
    lVar9 = *(long *)(*(long *)(param_5 + 0x238) + 0x10);
    cVar1 = *(char *)(lVar9 + 0x75c);
  }
  if (cVar1 == '\0') {
    fVar55 = 1.0;
    cVar1 = *(char *)(lVar9 + 0x756);
  }
  else {
    fVar55 = *(float *)(param_5 + 0x74);
    cVar1 = *(char *)(lVar9 + 0x756);
  }
  if (cVar1 != '\0') {
    fVar55 = fVar55 * *(float *)(param_5 + 0x70);
  }
  iVar14 = param_6[10];
  uVar2 = iVar12 + iVar14 * (iVar12 + -1);
  fVar54 = 1.0 / (float)(iVar14 + 1);
  if ((int)uVar2 < 1) {
    *(undefined4 *)(param_4 + 0x78) = 0;
    iVar12 = *param_6;
  }
  else {
    fVar45 = *(float *)(param_4 + 0x80);
    pfVar10 = (float *)(param_3 + 0x50);
    iVar17 = 0;
    uVar18 = 0;
    iVar19 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    do {
      fVar56 = (float)(int)uVar18;
      fVar46 = fVar54 * fVar56;
      iVar8 = (int)fVar46;
      if (iVar19 < iVar8) {
        pfVar16 = *(float **)(pfVar16 + 0x16);
        iVar19 = iVar8;
      }
      FUN_0028147c(SUB41(fVar46 - (float)iVar8,0),&local_d0,&local_e0,pfVar16,iVar8,iVar12);
      if (param_6[0x16] == 1) {
        fVar46 = 0.0;
        if (uVar18 != 0) {
          auVar51._0_4_ = (local_d0 - (float)local_f0) * (local_d0 - (float)local_f0);
          auVar51._4_4_ = (fStack_cc - local_f0._4_4_) * (fStack_cc - local_f0._4_4_);
          auVar51._8_4_ = (fStack_c8 - (float)uStack_e8) * (fStack_c8 - (float)uStack_e8);
          auVar51._12_4_ = (fStack_c4 - uStack_e8._4_4_) * (fStack_c4 - uStack_e8._4_4_);
          auVar47 = NEON_ext(auVar51,auVar51,8,1);
          fVar46 = SQRT(auVar47._0_4_ + auVar51._0_4_ + auVar47._4_4_ + auVar51._4_4_);
        }
        iVar8 = iVar17;
        if (iVar17 < 3) {
          iVar8 = 2;
        }
        lVar9 = param_3 + (ulong)(iVar8 - 2) * 0x50;
        fVar49 = fVar44 * fVar46;
        bVar7 = uVar18 != 0;
        fVar46 = fVar46 * 0.1;
        fStack_ac = *(float *)(param_4 + 0x8c) * 0.1;
        local_c0[0] = 0.0;
        if (bVar7) {
          local_c0[0] = fVar49 + *(float *)(lVar9 + 0x30);
        }
        local_c0[3] = fStack_ac;
        if (bVar7) {
          local_c0[3] = *(float *)(lVar9 + 0x30) - fVar46;
        }
        local_c0[1] = 0.0;
        if (bVar7) {
          local_c0[1] = fVar49 + *(float *)(lVar9 + 0x34);
        }
        local_b0 = fStack_ac;
        if (bVar7) {
          local_b0 = *(float *)(lVar9 + 0x34) - fVar46;
        }
        local_c0[2] = 0.0;
        if (bVar7) {
          fStack_ac = *(float *)(lVar9 + 0x38) - fVar46;
          local_c0[2] = fVar49 + *(float *)(lVar9 + 0x38);
        }
        local_f0 = CONCAT44(fStack_cc,local_d0);
        uStack_e8 = CONCAT44(fStack_c4,fStack_c8);
LAB_00280eb0:
        fVar46 = local_c0[(long)param_6[3] * 3];
        uVar20 = SUB41(fVar46,0);
        uVar22 = (undefined1)((uint)fVar46 >> 8);
        uVar24 = (undefined1)((uint)fVar46 >> 0x10);
        uVar26 = (undefined1)((uint)fVar46 >> 0x18);
        fVar46 = local_c0[(long)param_6[4] * 3 + 1];
        uVar28 = SUB41(fVar46,0);
        uVar30 = (undefined1)((uint)fVar46 >> 8);
        uVar32 = (undefined1)((uint)fVar46 >> 0x10);
        uVar34 = (undefined1)((uint)fVar46 >> 0x18);
        fVar46 = local_c0[(long)param_6[5] * 3 + 2];
        uVar36 = SUB41(fVar46,0);
        uVar38 = (undefined1)((uint)fVar46 >> 8);
        uVar40 = (undefined1)((uint)fVar46 >> 0x10);
        uVar42 = (undefined1)((uint)fVar46 >> 0x18);
      }
      else {
        if (param_6[0x16] == 0) {
          fVar46 = ((fVar45 - (float)(int)fVar45) + param_1 + fVar56) /
                   (float)((int)(float)param_6[6] + -1 + ((int)(float)param_6[6] + -1) * iVar14);
          uVar20 = SUB41(fVar46,0);
          uVar22 = (undefined1)((uint)fVar46 >> 8);
          uVar24 = (undefined1)((uint)fVar46 >> 0x10);
          uVar26 = (undefined1)((uint)fVar46 >> 0x18);
          local_c0[2] = fVar56 / (float)(int)(uVar2 - 1);
          if (1.0 < fVar46) {
            uVar20 = 0;
            uVar22 = 0;
            uVar24 = 0x80;
            uVar26 = 0x3f;
          }
          local_c0[3] = (float)CONCAT13(uVar26,CONCAT12(uVar24,CONCAT11(uVar22,uVar20)));
          local_c0[0] = local_c0[2];
          local_c0[1] = local_c0[2];
          local_b0 = (float)CONCAT13(uVar26,CONCAT12(uVar24,CONCAT11(uVar22,uVar20)));
          fStack_ac = (float)CONCAT13(uVar26,CONCAT12(uVar24,CONCAT11(uVar22,uVar20)));
          goto LAB_00280eb0;
        }
        uVar20 = 0;
        uVar22 = 0;
        uVar24 = 0;
        uVar26 = 0;
        uVar28 = 0;
        uVar30 = 0;
        uVar32 = 0;
        uVar34 = 0;
        uVar36 = 0;
        uVar38 = 0;
        uVar40 = 0;
        uVar42 = 0;
      }
      uVar18 = uVar18 + 1;
      fVar46 = pfVar16[0x14];
      pfVar10[-0x14] = local_d0;
      pfVar10[-0x13] = fStack_cc;
      pfVar10[-0x12] = fStack_c8;
      *pfVar10 = local_d0;
      pfVar10[1] = fStack_cc;
      pfVar10[2] = fStack_c8;
      pfVar10[-0x11] = fVar55 * fVar46;
      pfVar10[3] = -(fVar55 * fVar46);
      pfVar10[-0x10] = local_e0;
      pfVar10[-0xf] = fStack_dc;
      pfVar10[-0xe] = fStack_d8;
      pfVar10[4] = local_e0;
      pfVar10[5] = fStack_dc;
      pfVar10[6] = fStack_d8;
      fVar46 = pfVar16[0xd];
      fVar49 = pfVar16[0xe];
      pfVar10[-0xc] = pfVar16[0xc];
      pfVar10[-0xb] = fVar46;
      pfVar10[-10] = fVar49;
      fVar46 = pfVar16[0xd];
      fVar49 = pfVar16[0xe];
      pfVar10[8] = pfVar16[0xc];
      pfVar10[9] = fVar46;
      pfVar10[10] = fVar49;
      *(ulong *)(pfVar10 + -8) =
           CONCAT17(uVar34,CONCAT16(uVar32,CONCAT15(uVar30,CONCAT14(uVar28,CONCAT13(uVar26,CONCAT12(
                                                  uVar24,CONCAT11(uVar22,uVar20)))))));
      pfVar10[-6] = (float)CONCAT13(uVar42,CONCAT12(uVar40,CONCAT11(uVar38,uVar36)));
      *(ulong *)(pfVar10 + 0xc) =
           CONCAT17(uVar34,CONCAT16(uVar32,CONCAT15(uVar30,CONCAT14(uVar28,CONCAT13(uVar26,CONCAT12(
                                                  uVar24,CONCAT11(uVar22,uVar20)))))));
      pfVar10[0xe] = (float)CONCAT13(uVar42,CONCAT12(uVar40,CONCAT11(uVar38,uVar36)));
      pfVar10[-0xd] = fVar56;
      pfVar10[7] = fVar56;
      iVar17 = iVar17 + 2;
      pfVar10 = pfVar10 + 0x28;
    } while (uVar2 != uVar18);
    *(uint *)(param_4 + 0x78) = uVar2 * 2;
    iVar12 = *param_6;
  }
  if (((iVar12 != 0) && (iVar12 != 3)) && (0 < (int)uVar2)) {
    uVar18 = 0;
    iVar12 = 0;
    puVar13 = (undefined4 *)(param_3 + 0x98);
    lVar9 = *(long *)(*(long *)(param_4 + 0x58) + 0x58);
    do {
      fVar44 = fVar54 * (float)(int)uVar18;
      iVar14 = (int)fVar44;
      if (iVar12 < iVar14) {
        lVar9 = *(long *)(lVar9 + 0x58);
        iVar12 = iVar14;
      }
      fVar44 = fVar44 - (float)iVar14;
      lVar15 = *(long *)(lVar9 + 0x58);
      fVar56 = *(float *)(lVar9 + 0x40) +
               (*(float *)(lVar15 + 0x40) - *(float *)(lVar9 + 0x40)) * fVar44;
      fVar49 = *(float *)(lVar9 + 0x44) +
               (*(float *)(lVar15 + 0x44) - *(float *)(lVar9 + 0x44)) * fVar44;
      fVar50 = *(float *)(lVar9 + 0x48) +
               (*(float *)(lVar15 + 0x48) - *(float *)(lVar9 + 0x48)) * fVar44;
      fVar46 = *(float *)(lVar9 + 0x4c) +
               (*(float *)(lVar15 + 0x4c) - *(float *)(lVar9 + 0x4c)) * fVar44;
      fVar44 = fVar56 * fVar56;
      fVar55 = fVar49 * fVar49;
      uVar20 = (undefined1)((uint)fVar55 >> 8);
      uVar22 = (undefined1)((uint)fVar55 >> 0x10);
      uVar24 = (undefined1)((uint)fVar55 >> 0x18);
      fVar45 = fVar50 * fVar50;
      uVar26 = (undefined1)((uint)fVar45 >> 8);
      uVar28 = (undefined1)((uint)fVar45 >> 0x10);
      uVar30 = (undefined1)((uint)fVar45 >> 0x18);
      fVar46 = fVar46 * fVar46;
      uVar32 = (undefined1)((uint)fVar46 >> 8);
      uVar34 = (undefined1)((uint)fVar46 >> 0x10);
      uVar36 = (undefined1)((uint)fVar46 >> 0x18);
      auVar3[4] = SUB41(fVar55,0);
      auVar3._0_4_ = fVar44;
      auVar3[5] = uVar20;
      auVar3[6] = uVar22;
      auVar3[7] = uVar24;
      auVar3[8] = SUB41(fVar45,0);
      auVar3[9] = uVar26;
      auVar3[10] = uVar28;
      auVar3[0xb] = uVar30;
      auVar3[0xc] = SUB41(fVar46,0);
      auVar3[0xd] = uVar32;
      auVar3[0xe] = uVar34;
      auVar3[0xf] = uVar36;
      auVar4[4] = SUB41(fVar55,0);
      auVar4._0_4_ = fVar44;
      auVar4[5] = uVar20;
      auVar4[6] = uVar22;
      auVar4[7] = uVar24;
      auVar4[8] = SUB41(fVar45,0);
      auVar4[9] = uVar26;
      auVar4[10] = uVar28;
      auVar4[0xb] = uVar30;
      auVar4[0xc] = SUB41(fVar46,0);
      auVar4[0xd] = uVar32;
      auVar4[0xe] = uVar34;
      auVar4[0xf] = uVar36;
      auVar47 = NEON_ext(auVar3,auVar4,8,1);
      fVar44 = auVar47._0_4_ + fVar44;
      fVar55 = auVar47._4_4_ + fVar55;
      fVar45 = fVar44 + fVar55;
      fVar44 = fVar44 + fVar55;
      uVar20 = SUB41(fVar44,0);
      uVar22 = (undefined1)((uint)fVar44 >> 8);
      uVar24 = (undefined1)((uint)fVar44 >> 0x10);
      uVar26 = (undefined1)((uint)fVar44 >> 0x18);
      uVar18 = uVar18 + 1;
      auVar5[4] = uVar20;
      auVar5._0_4_ = fVar45;
      auVar5[5] = uVar22;
      auVar5[6] = uVar24;
      auVar5[7] = uVar26;
      auVar5[8] = SUB41(fVar45,0);
      auVar5[9] = (char)((uint)fVar45 >> 8);
      auVar5[10] = (char)((uint)fVar45 >> 0x10);
      auVar5[0xb] = (char)((uint)fVar45 >> 0x18);
      auVar5[0xc] = uVar20;
      auVar5[0xd] = uVar22;
      auVar5[0xe] = uVar24;
      auVar5[0xf] = uVar26;
      auVar47 = NEON_frsqrte(auVar5,4);
      auVar52._0_4_ = auVar47._0_4_ * fVar45;
      auVar52._4_4_ = auVar47._4_4_ * fVar44;
      auVar52._8_4_ = auVar47._8_4_ * fVar45;
      uVar6 = (undefined2)(CONCAT15(uVar22,CONCAT14(uVar20,fVar45)) >> 0x20);
      auVar52._12_4_ = auVar47._12_4_ * (float)CONCAT13(uVar26,CONCAT12(uVar24,uVar6));
      auVar51 = NEON_frsqrts(auVar47,auVar52,4);
      auVar48._0_4_ = auVar47._0_4_ * auVar51._0_4_;
      auVar48._4_4_ = auVar47._4_4_ * auVar51._4_4_;
      auVar48._8_4_ = auVar47._8_4_ * auVar51._8_4_;
      auVar48._12_4_ = auVar47._12_4_ * auVar51._12_4_;
      auVar53._0_4_ = fVar45 * auVar48._0_4_;
      auVar53._4_4_ = fVar44 * auVar48._4_4_;
      auVar53._8_4_ = fVar45 * auVar48._8_4_;
      auVar53._12_4_ = (float)CONCAT13(uVar26,CONCAT12(uVar24,uVar6)) * auVar48._12_4_;
      iVar14 = -(uint)(fVar45 == 0.0);
      iVar17 = -(uint)(fVar44 == 0.0);
      iVar19 = -(uint)(fVar45 == 0.0);
      auVar47 = NEON_frsqrts(auVar48,auVar53,4);
      fVar56 = fVar56 * auVar48._0_4_ * auVar47._0_4_;
      fVar49 = fVar49 * auVar48._4_4_ * auVar47._4_4_;
      fVar50 = fVar50 * auVar48._8_4_ * auVar47._8_4_;
      bVar21 = SUB41(fVar56,0) & ~(byte)iVar14;
      bVar23 = (byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar14 >> 8);
      bVar25 = (byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10);
      bVar27 = (byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18);
      bVar29 = SUB41(fVar49,0) & ~(byte)iVar17;
      bVar31 = (byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar17 >> 8);
      bVar33 = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10);
      bVar35 = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18);
      bVar37 = SUB41(fVar50,0) & ~(byte)iVar19;
      bVar39 = (byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar19 >> 8);
      bVar41 = (byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10);
      bVar43 = (byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18);
      *(ulong *)(puVar13 + -0x16) =
           CONCAT17(bVar35,CONCAT16(bVar33,CONCAT15(bVar31,CONCAT14(bVar29,CONCAT13(bVar27,CONCAT12(
                                                  bVar25,CONCAT11(bVar23,bVar21)))))));
      puVar13[-0x14] = CONCAT13(bVar43,CONCAT12(bVar41,CONCAT11(bVar39,bVar37)));
      *(ulong *)(puVar13 + -2) =
           CONCAT17(bVar35,CONCAT16(bVar33,CONCAT15(bVar31,CONCAT14(bVar29,CONCAT13(bVar27,CONCAT12(
                                                  bVar25,CONCAT11(bVar23,bVar21)))))));
      *puVar13 = CONCAT13(bVar43,CONCAT12(bVar41,CONCAT11(bVar39,bVar37)));
      puVar13 = puVar13 + 0x28;
    } while (uVar2 != uVar18);
  }
  return;
}


