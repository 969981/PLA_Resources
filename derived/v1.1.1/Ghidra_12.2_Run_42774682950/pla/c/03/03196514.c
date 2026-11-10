/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03196514; name: FUN_03196514
 */


void FUN_03196514(long param_1,int *param_2,undefined8 *param_3,float *param_4,undefined8 *param_5)

{
  short sVar1;
  undefined1 (*pauVar2) [12];
  undefined1 (*pauVar3) [12];
  int *piVar4;
  int iVar5;
  undefined1 (*pauVar6) [12];
  float *pfVar7;
  float *pfVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long *plVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  uint uVar31;
  float fVar36;
  undefined8 uVar32;
  int iVar37;
  ulong uVar33;
  float fVar35;
  uint uVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar34 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  float fVar56;
  float fVar58;
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar62;
  float fVar63;
  undefined1 auVar61 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float in_s22;
  float in_register_000052c4;
  undefined8 uVar68;
  float in_register_000052c8;
  
  lVar20 = *(long *)(param_1 + 0x20);
  iVar21 = *param_2;
  if (iVar21 < *(int *)(lVar20 + 0x20)) {
    lVar24 = *(long *)(lVar20 + 0x18);
    iVar22 = iVar21;
    if (*(int *)(lVar20 + 0x98) != 0) {
      iVar22 = *(int *)(*(long *)(lVar20 + 0x90) + (long)iVar21 * 4);
    }
    if (iVar22 != -1) {
      plVar18 = (long *)(lVar20 + 0xb0);
      iVar21 = iVar22;
      goto LAB_031967ac;
    }
  }
  else {
    plVar18 = (long *)(lVar20 + 0xd0);
    iVar21 = iVar21 - *(int *)(lVar20 + 0x20);
LAB_031967ac:
    lVar24 = *plVar18;
  }
  piVar4 = (int *)(lVar24 + (long)iVar21 * 0x10);
  iVar21 = *piVar4;
  pauVar2 = (undefined1 (*) [12])(param_1 + 0x80);
  fVar48 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  fVar46 = (float)*(undefined8 *)*pauVar2;
  fVar47 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  iVar22 = *(int *)(lVar20 + 0x30);
  pauVar3 = (undefined1 (*) [12])(param_1 + 0x60);
  fVar54 = (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
  fVar52 = (float)*(undefined8 *)*pauVar3;
  fVar53 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
  pauVar6 = (undefined1 (*) [12])(param_1 + 0x70);
  fVar51 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  fVar49 = (float)*(undefined8 *)*pauVar6;
  fVar50 = (float)((ulong)*(undefined8 *)*pauVar6 >> 0x20);
  if (iVar21 < iVar22) {
    iVar23 = iVar21;
    if (*(int *)(lVar20 + 0x78) != 0) {
      iVar23 = *(int *)(*(long *)(lVar20 + 0x70) + (long)iVar21 * 4);
    }
    lVar24 = *(long *)(lVar20 + 0x28);
    iVar30 = iVar21;
    if (iVar23 == -1) goto LAB_031965a0;
    plVar18 = (long *)(lVar20 + 0xc0);
    iVar30 = iVar23;
  }
  else {
    iVar30 = iVar21 - iVar22;
    plVar18 = (long *)(lVar20 + 0xe0);
  }
  lVar24 = *plVar18;
LAB_031965a0:
  iVar37 = *(int *)(lVar24 + (long)iVar30 * 0x14);
  iVar23 = *(int *)(lVar20 + 0x40);
  if (iVar37 < iVar23) {
    iVar19 = 0;
    plVar18 = (long *)(lVar20 + 0x38);
  }
  else {
    plVar18 = (long *)(lVar20 + 0xf0);
    iVar19 = iVar23;
  }
  sVar1 = (short)*(undefined8 *)(piVar4 + 2);
  iVar5 = iVar21 + 1;
  fVar43 = (float)*(undefined8 *)(param_1 + 0x90);
  fVar44 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  fVar45 = (float)*(undefined8 *)(param_1 + 0x98);
  if (iVar5 != iVar21 + sVar1 + -1) {
    auVar55._12_4_ = fVar48;
    auVar55._0_12_ = *pauVar2;
    auVar57._12_4_ = fVar48;
    auVar57._0_12_ = *pauVar2;
    auVar55 = NEON_ext(auVar55,auVar57,8,1);
    auVar10._12_4_ = fVar54;
    auVar10._0_12_ = *pauVar3;
    auVar11._12_4_ = fVar54;
    auVar11._0_12_ = *pauVar3;
    auVar57 = NEON_ext(auVar10,auVar11,8,1);
    auVar59._12_4_ = fVar51;
    auVar59._0_12_ = *pauVar6;
    auVar9._12_4_ = fVar51;
    auVar9._0_12_ = *pauVar6;
    auVar59 = NEON_ext(auVar59,auVar9,8,1);
    fVar27 = *param_4 - fVar43;
    fVar35 = param_4[1] - fVar44;
    fVar39 = param_4[2] - fVar45;
    iVar30 = *(int *)(lVar24 + (long)iVar30 * 0x14 + 4);
    iVar21 = 0;
    if (iVar23 <= iVar30) {
      iVar21 = iVar23;
    }
    pfVar7 = (float *)(*plVar18 + (long)(iVar37 - iVar19) * 0x10);
    fVar15 = *pfVar7;
    fVar16 = pfVar7[1];
    fVar17 = pfVar7[2];
    plVar18 = (long *)(lVar20 + 0x38);
    if (iVar23 <= iVar30) {
      plVar18 = (long *)(lVar20 + 0xf0);
    }
    fVar56 = auVar57._0_4_ * fVar39 + fVar52 * fVar27 + fVar53 * fVar35;
    fVar58 = auVar59._0_4_ * fVar39 + fVar49 * fVar27 + fVar50 * fVar35;
    fVar39 = auVar55._0_4_ * fVar39 + fVar46 * fVar27 + fVar47 * fVar35;
    pfVar8 = (float *)(*plVar18 + (long)(iVar30 - iVar21) * 0x10);
    lVar24 = (long)iVar5;
    auVar61._0_4_ = *pfVar8 - fVar15;
    auVar61._4_4_ = pfVar8[1] - fVar16;
    auVar61._8_4_ = pfVar8[2] - fVar17;
    auVar61._12_4_ = pfVar8[3] - pfVar7[3];
    lVar25 = (long)iVar5 * 0x14 + (long)iVar22 * -0x14;
    fVar27 = 1.8446726e+19;
    fVar35 = 1.8446726e+19;
    iVar21 = sVar1 + -2;
    in_s22 = fVar53;
    in_register_000052c4 = fVar50;
    in_register_000052c8 = fVar47;
    do {
      if (lVar24 < iVar22) {
        if (*(int *)(lVar20 + 0x78) == 0) {
          iVar30 = (int)lVar24;
        }
        else {
          iVar30 = *(int *)(*(long *)(lVar20 + 0x70) + lVar24 * 4);
        }
        if (iVar30 == -1) {
          lVar26 = *(long *)(lVar20 + 0x28) + lVar24 * 0x14;
        }
        else {
          lVar26 = *(long *)(lVar20 + 0xc0) + (long)iVar30 * 0x14;
        }
      }
      else {
        lVar26 = *(long *)(lVar20 + 0xe0) + lVar25;
      }
      if (*(int *)(lVar26 + 4) < iVar23) {
        iVar30 = 0;
        plVar18 = (long *)(lVar20 + 0x38);
      }
      else {
        plVar18 = (long *)(lVar20 + 0xf0);
        iVar30 = iVar23;
      }
      lVar24 = lVar24 + 1;
      pfVar8 = (float *)(*plVar18 + (long)(*(int *)(lVar26 + 4) - iVar30) * 0x10);
      lVar25 = lVar25 + 0x14;
      fVar64 = *pfVar8 - fVar15;
      fVar65 = pfVar8[1] - fVar16;
      fVar66 = pfVar8[2] - fVar17;
      fVar67 = pfVar8[3] - pfVar7[3];
      auVar55 = NEON_ext(auVar61,auVar61,4,1);
      auVar12._4_4_ = fVar65;
      auVar12._0_4_ = fVar64;
      auVar12._8_4_ = fVar66;
      auVar12._12_4_ = fVar67;
      auVar13._4_4_ = fVar65;
      auVar13._0_4_ = fVar64;
      auVar13._8_4_ = fVar66;
      auVar13._12_4_ = fVar67;
      auVar57 = NEON_ext(auVar12,auVar13,4,1);
      iVar21 = iVar21 + -1;
      auVar34._0_4_ = auVar61._0_4_ * auVar57._0_4_ - auVar55._0_4_ * fVar64;
      auVar34._4_4_ = auVar61._4_4_ * auVar57._4_4_ - auVar55._4_4_ * fVar65;
      auVar34._8_4_ = auVar61._8_4_ * fVar64 - auVar61._0_4_ * fVar66;
      auVar34._12_4_ = auVar61._12_4_ * fVar65 - auVar61._4_4_ * fVar67;
      auVar55 = NEON_ext(auVar34,auVar34,4,1);
      fVar41 = (float)*param_3;
      fVar28 = fVar41 * auVar55._0_4_;
      fVar42 = (float)((ulong)*param_3 >> 0x20);
      fVar36 = fVar42 * auVar55._4_4_;
      fVar40 = (float)param_3[1] * auVar34._0_4_;
      fVar60 = (fVar56 - fVar15) * auVar55._0_4_;
      fVar62 = (fVar58 - fVar16) * auVar55._4_4_;
      fVar63 = (fVar39 - fVar17) * auVar34._0_4_;
      fVar29 = fVar28 + fVar36 + fVar40;
      fVar40 = fVar28 + fVar36 + fVar40;
      uVar32 = CONCAT44(fVar40,fVar29);
      uVar68 = NEON_frecpe(uVar32,4);
      uVar14 = NEON_frecps(uVar32,uVar68,4);
      fVar28 = (float)uVar68 * (float)uVar14;
      fVar36 = (float)((ulong)uVar68 >> 0x20) * (float)((ulong)uVar14 >> 0x20);
      uVar14 = NEON_frecps(uVar32,CONCAT44(fVar36,fVar28),4);
      iVar30 = -(uint)(fVar29 == 0.0);
      iVar37 = -(uint)(fVar40 == 0.0);
      uVar33 = (CONCAT44(fVar36 * (float)((ulong)uVar14 >> 0x20) * (fVar60 + fVar62 + fVar63),
                         fVar28 * (float)uVar14 * (fVar60 + fVar62 + fVar63)) ^ 0x5f7ffff05f7ffff0)
               & CONCAT17(~(byte)((uint)iVar37 >> 0x18),
                          CONCAT16(~(byte)((uint)iVar37 >> 0x10),
                                   CONCAT15(~(byte)((uint)iVar37 >> 8),
                                            CONCAT14(~(byte)iVar37,
                                                     CONCAT13(~(byte)((uint)iVar30 >> 0x18),
                                                              CONCAT12(~(byte)((uint)iVar30 >> 0x10)
                                                                       ,CONCAT11(~(byte)((uint)
                                                  iVar30 >> 8),~(byte)iVar30))))))) ^
               0x5f7ffff05f7ffff0;
      fVar28 = (float)uVar33;
      fVar29 = (float)(uVar33 >> 0x20);
      fVar36 = ABS(fVar29);
      uVar31 = -(uint)(ABS(fVar28) < fVar27);
      uVar38 = -(uint)(fVar36 < fVar35);
      fVar27 = (float)((uint)fVar27 ^ ((uint)fVar27 ^ (uint)ABS(fVar28)) & uVar31);
      fVar35 = (float)((uint)fVar35 ^ ((uint)fVar35 ^ (uint)fVar36) & uVar38);
      in_s22 = (float)((uint)in_s22 ^ ((uint)in_s22 ^ (uint)(fVar56 - fVar41 * fVar28)) & uVar31);
      in_register_000052c4 =
           (float)((uint)in_register_000052c4 ^
                  ((uint)in_register_000052c4 ^ (uint)(fVar58 - fVar42 * fVar29)) & uVar38);
      in_register_000052c8 =
           (float)((uint)in_register_000052c8 ^
                  ((uint)in_register_000052c8 ^ (uint)(fVar39 - (float)param_3[1] * fVar28)) &
                  uVar31);
      auVar61._12_4_ = fVar67;
      auVar61._8_4_ = fVar66;
      auVar61._4_4_ = fVar65;
      auVar61._0_4_ = fVar64;
    } while (iVar21 != 0);
  }
  param_5[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
                        fVar48 * in_register_000052c8 +
                        fVar54 * in_s22 + fVar51 * in_register_000052c4,
                        fVar45 + (float)*(undefined8 *)(param_1 + 0x88) * in_register_000052c8 +
                                 (float)*(undefined8 *)(param_1 + 0x68) * in_s22 +
                                 (float)*(undefined8 *)(param_1 + 0x78) * in_register_000052c4);
  *param_5 = CONCAT44(fVar44 + fVar47 * in_register_000052c8 +
                               fVar53 * in_s22 + fVar50 * in_register_000052c4,
                      fVar43 + fVar46 * in_register_000052c8 +
                               fVar52 * in_s22 + fVar49 * in_register_000052c4);
  return;
}


