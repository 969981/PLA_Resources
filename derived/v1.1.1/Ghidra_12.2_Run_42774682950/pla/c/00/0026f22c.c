/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026f22c; name: FUN_0026f22c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0026f22c(float param_1,ulong *param_2,undefined8 *param_3,long param_4,undefined8 param_5,
            undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined2 uVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 uVar12;
  byte bVar13;
  undefined1 uVar14;
  byte bVar15;
  undefined1 uVar16;
  byte bVar17;
  undefined1 uVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
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
  
  puVar10 = PTR_Float2Pi_04372d30;
  lVar11 = *(long *)(param_4 + 0xa0);
  if (*(char *)(lVar11 + 0x839) == '\0') {
    uVar4 = *(undefined4 *)(lVar11 + 0x848);
    uVar12 = (undefined1)uVar4;
    uVar14 = (undefined1)((uint)uVar4 >> 8);
    uVar16 = (undefined1)((uint)uVar4 >> 0x10);
    uVar18 = (undefined1)((uint)uVar4 >> 0x18);
  }
  else {
    fVar32 = *(float *)PTR_FloatPi_04372db0 * param_1 + *(float *)PTR_FloatPi_04372db0 * param_1;
    uVar12 = SUB41(fVar32,0);
    uVar14 = (undefined1)((uint)fVar32 >> 8);
    uVar16 = (undefined1)((uint)fVar32 >> 0x10);
    uVar18 = (undefined1)((uint)fVar32 >> 0x18);
  }
  fVar34 = 0.5;
  fVar32 = ((float)CONCAT13(uVar18,CONCAT12(uVar16,CONCAT11(uVar14,uVar12))) +
           *(float *)(lVar11 + 0x840) * (float)*(uint *)(param_4 + 0xac) * 2.3283064e-10) -
           *(float *)(lVar11 + 0x840) * 0.5;
  if (fVar32 < 0.0) {
    fVar34 = -0.5;
  }
  fVar33 = *(float *)PTR_Float1Divided2Pi_04372d20;
  uVar1 = *(uint *)(param_4 + 0xac) * 0x41c64e6d + 0x3039;
  *(uint *)(param_4 + 0xac) = uVar1;
  fVar32 = fVar32 - *(float *)puVar10 * (float)(int)(fVar33 * fVar32 + fVar34);
  if (fVar32 <= *(float *)PTR_FloatPiDivided2_04372d38) {
    if (-*(float *)PTR_FloatPiDivided2_04372d38 <= fVar32) {
      fVar34 = 1.0;
      goto LAB_0026f344;
    }
    fVar34 = -*(float *)PTR_FloatPi_04372cf0;
  }
  else {
    fVar34 = *(float *)PTR_FloatPi_04372cf0;
  }
  fVar32 = fVar34 - fVar32;
  fVar34 = -1.0;
LAB_0026f344:
  fVar37 = fVar32 * fVar32;
  fVar41 = *(float *)PTR_SinCoefficients_04372d28;
  fVar42 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
  fVar44 = *(float *)(PTR_SinCoefficients_04372d28 + 8);
  fVar48 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
  fVar43 = *(float *)PTR_CosCoefficients_04372d40;
  fVar49 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
  fVar45 = *(float *)(PTR_CosCoefficients_04372d40 + 8);
  fVar50 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
  fVar46 = *(float *)(PTR_SinCoefficients_04372d28 + 0x10);
  fVar47 = *(float *)(PTR_CosCoefficients_04372d40 + 0x10);
  *(uint *)(param_4 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
  fVar33 = 1.0 - *(float *)(lVar11 + 0x850);
  fVar33 = (float)uVar1 * 2.3283064e-10 + (1.0 - (float)uVar1 * 2.3283064e-10) * fVar33 * fVar33;
  if (fVar33 <= 0.0) {
    uVar12 = 0;
    uVar14 = 0;
    uVar16 = 0;
    uVar18 = 0;
  }
  else {
    fVar5 = SQRT(fVar33);
    uVar12 = SUB41(fVar5,0);
    uVar14 = (undefined1)((uint)fVar5 >> 8);
    uVar16 = (undefined1)((uint)fVar5 >> 0x10);
    uVar18 = (undefined1)((uint)fVar5 >> 0x18);
    if (NAN(fVar5)) {
      fVar33 = sqrtf(fVar33);
      uVar12 = SUB41(fVar33,0);
      uVar14 = (undefined1)((uint)fVar33 >> 8);
      uVar16 = (undefined1)((uint)fVar33 >> 0x10);
      uVar18 = (undefined1)((uint)fVar33 >> 0x18);
    }
  }
  fVar33 = fVar32 * (fVar37 * (fVar37 * (fVar48 + fVar37 * (fVar37 * (fVar42 - fVar41 * fVar37) -
                                                           fVar44)) - fVar46) + 1.0) *
           (float)CONCAT13(uVar18,CONCAT12(uVar16,CONCAT11(uVar14,uVar12)));
  fVar41 = *(float *)(lVar11 + 0x85c) * *(float *)(param_7 + 0x90);
  fVar42 = fVar34 * (fVar37 * (fVar37 * (fVar50 + fVar37 * (fVar37 * (fVar49 - fVar37 * fVar43) -
                                                           fVar45)) - fVar47) + 1.0) *
           (float)CONCAT13(uVar18,CONCAT12(uVar16,CONCAT11(uVar14,uVar12)));
  fVar37 = *(float *)(lVar11 + 0x864) * *(float *)(param_7 + 0x98);
  fVar34 = (float)CONCAT13(uVar18,CONCAT12(uVar16,CONCAT11(uVar14,uVar12))) * fVar33;
  fVar32 = (float)CONCAT13(uVar18,CONCAT12(uVar16,CONCAT11(uVar14,uVar12))) * fVar42;
  param_2[1] = (ulong)(uint)(fVar42 * fVar37);
  *param_2 = (ulong)(uint)(fVar33 * fVar41);
  if (fVar41 <= fVar37) {
    fVar34 = fVar34 * (fVar41 / fVar37);
  }
  else {
    fVar32 = fVar32 * (fVar37 / fVar41);
  }
  fVar33 = fVar34 * fVar34;
  fVar37 = fVar32 * fVar32;
  uVar12 = (undefined1)((uint)fVar37 >> 8);
  uVar14 = (undefined1)((uint)fVar37 >> 0x10);
  uVar16 = (undefined1)((uint)fVar37 >> 0x18);
  auVar35._4_4_ = 0;
  auVar35._0_4_ = fVar33;
  auVar35[8] = SUB41(fVar37,0);
  auVar35[9] = uVar12;
  auVar35[10] = uVar14;
  auVar35[0xb] = uVar16;
  auVar35._12_4_ = 0;
  auVar39._4_4_ = 0;
  auVar39._0_4_ = fVar33;
  auVar39[8] = SUB41(fVar37,0);
  auVar39[9] = uVar12;
  auVar39[10] = uVar14;
  auVar39[0xb] = uVar16;
  auVar39._12_4_ = 0;
  auVar35 = NEON_ext(auVar35,auVar39,8,1);
  fVar33 = auVar35._0_4_ + fVar33;
  fVar37 = auVar35._4_4_ + 0.0;
  fVar41 = fVar33 + fVar37;
  fVar33 = fVar33 + fVar37;
  uVar12 = SUB41(fVar33,0);
  uVar14 = (undefined1)((uint)fVar33 >> 8);
  uVar16 = (undefined1)((uint)fVar33 >> 0x10);
  uVar18 = (undefined1)((uint)fVar33 >> 0x18);
  if (fVar41 <= 0.0) {
    bVar24 = (byte)_UNK_03888d18;
    bVar25 = (byte)((ulong)_UNK_03888d18 >> 8);
    bVar26 = (byte)((ulong)_UNK_03888d18 >> 0x10);
    bVar27 = (byte)((ulong)_UNK_03888d18 >> 0x18);
    bVar28 = (byte)((ulong)_UNK_03888d18 >> 0x20);
    bVar29 = (byte)((ulong)_UNK_03888d18 >> 0x28);
    bVar30 = (byte)((ulong)_UNK_03888d18 >> 0x30);
    bVar31 = (byte)((ulong)_UNK_03888d18 >> 0x38);
    bVar13 = (byte)_DAT_03888d10;
    bVar15 = (byte)((ulong)_DAT_03888d10 >> 8);
    bVar17 = (byte)((ulong)_DAT_03888d10 >> 0x10);
    bVar19 = (byte)((ulong)_DAT_03888d10 >> 0x18);
    bVar20 = (byte)((ulong)_DAT_03888d10 >> 0x20);
    bVar21 = (byte)((ulong)_DAT_03888d10 >> 0x28);
    bVar22 = (byte)((ulong)_DAT_03888d10 >> 0x30);
    bVar23 = (byte)((ulong)_DAT_03888d10 >> 0x38);
  }
  else {
    auVar2[4] = uVar12;
    auVar2._0_4_ = fVar41;
    auVar2[5] = uVar14;
    auVar2[6] = uVar16;
    auVar2[7] = uVar18;
    auVar2[8] = SUB41(fVar41,0);
    auVar2[9] = (char)((uint)fVar41 >> 8);
    auVar2[10] = (char)((uint)fVar41 >> 0x10);
    auVar2[0xb] = (char)((uint)fVar41 >> 0x18);
    auVar2[0xc] = uVar12;
    auVar2[0xd] = uVar14;
    auVar2[0xe] = uVar16;
    auVar2[0xf] = uVar18;
    auVar35 = NEON_frsqrte(auVar2,4);
    auVar38._0_4_ = fVar41 * auVar35._0_4_;
    auVar38._4_4_ = fVar33 * auVar35._4_4_;
    auVar38._8_4_ = fVar41 * auVar35._8_4_;
    uVar3 = (undefined2)(CONCAT15(uVar14,CONCAT14(uVar12,fVar41)) >> 0x20);
    auVar38._12_4_ = (float)CONCAT13(uVar18,CONCAT12(uVar16,uVar3)) * auVar35._12_4_;
    auVar39 = NEON_frsqrts(auVar35,auVar38,4);
    auVar36._0_4_ = auVar35._0_4_ * auVar39._0_4_;
    auVar36._4_4_ = auVar35._4_4_ * auVar39._4_4_;
    auVar36._8_4_ = auVar35._8_4_ * auVar39._8_4_;
    auVar36._12_4_ = auVar35._12_4_ * auVar39._12_4_;
    auVar40._0_4_ = fVar41 * auVar36._0_4_;
    auVar40._4_4_ = fVar33 * auVar36._4_4_;
    auVar40._8_4_ = fVar41 * auVar36._8_4_;
    auVar40._12_4_ = (float)CONCAT13(uVar18,CONCAT12(uVar16,uVar3)) * auVar36._12_4_;
    iVar6 = -(uint)(fVar41 == 0.0);
    iVar7 = -(uint)(fVar33 == 0.0);
    iVar8 = -(uint)(fVar41 == 0.0);
    iVar9 = -(uint)((float)CONCAT13(uVar18,CONCAT12(uVar16,uVar3)) == 0.0);
    auVar35 = NEON_frsqrts(auVar36,auVar40,4);
    fVar34 = fVar34 * auVar36._0_4_ * auVar35._0_4_;
    fVar33 = auVar36._4_4_ * auVar35._4_4_ * 0.0;
    fVar32 = fVar32 * auVar36._8_4_ * auVar35._8_4_;
    fVar37 = auVar36._12_4_ * auVar35._12_4_ * 0.0;
    bVar13 = SUB41(fVar34,0) & ~(byte)iVar6;
    bVar15 = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar6 >> 8);
    bVar17 = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10);
    bVar19 = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18);
    bVar20 = SUB41(fVar33,0) & ~(byte)iVar7;
    bVar21 = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar7 >> 8);
    bVar22 = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
    bVar23 = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
    bVar24 = SUB41(fVar32,0) & ~(byte)iVar8;
    bVar25 = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar8 >> 8);
    bVar26 = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
    bVar27 = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
    bVar28 = SUB41(fVar37,0) & ~(byte)iVar9;
    bVar29 = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar9 >> 8);
    bVar30 = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
    bVar31 = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
  }
  fVar33 = *(float *)(param_7 + 0x6c);
  fVar32 = (float)CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar20))) * fVar33;
  fVar34 = (float)CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28))) * fVar33;
  param_3[1] = CONCAT17((char)((uint)fVar34 >> 0x18),
                        CONCAT16((char)((uint)fVar34 >> 0x10),
                                 CONCAT15((char)((uint)fVar34 >> 8),
                                          CONCAT14(SUB41(fVar34,0),
                                                   (float)CONCAT13(bVar27,CONCAT12(bVar26,CONCAT11(
                                                  bVar25,bVar24))) * fVar33))));
  *param_3 = CONCAT17((char)((uint)fVar32 >> 0x18),
                      CONCAT16((char)((uint)fVar32 >> 0x10),
                               CONCAT15((char)((uint)fVar32 >> 8),
                                        CONCAT14(SUB41(fVar32,0),
                                                 (float)CONCAT13(bVar19,CONCAT12(bVar17,CONCAT11(
                                                  bVar15,bVar13))) * fVar33))));
  return 1;
}


