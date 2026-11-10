/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030df3c0; name: FUN_030df3c0
 */


undefined1  [16]
FUN_030df3c0(uint param_1,float *param_2,float *param_3,float *param_4,char *param_5,float *param_6,
            float *param_7,char *param_8,float *param_9,long param_10,long param_11,long param_12,
            float *param_13,byte param_14,char *param_15)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float afStack_30 [6];
  float afStack_18 [6];
  
  pfVar12 = afStack_30;
  pfVar10 = afStack_30;
  if ((0 < (int)param_1) && ((param_14 & 1) != 0)) {
    fVar13 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar28 = 0.0;
    fVar29 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    uVar6 = (ulong)param_1;
    puVar9 = (undefined8 *)(param_12 + 0x20);
    pfVar11 = param_2;
    uVar7 = uVar6;
    do {
      fVar30 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      fVar34 = (float)((ulong)*(undefined8 *)(param_10 + 0x28) >> 0x20) * fVar30;
      uVar7 = uVar7 - 1;
      fVar33 = (float)((ulong)*(undefined8 *)(param_11 + 0x28) >> 0x20) * fVar30;
      fVar31 = (float)puVar9[-4];
      fVar35 = (float)((ulong)puVar9[-4] >> 0x20);
      fVar36 = (float)puVar9[-3];
      fVar37 = (float)((ulong)puVar9[-3] >> 0x20);
      fVar18 = fVar18 - fVar31 * fVar33;
      fVar19 = fVar19 - fVar35 * fVar33;
      fVar20 = fVar20 - fVar36 * fVar33;
      fVar21 = fVar21 - fVar37 * fVar33;
      fVar13 = fVar13 + fVar31 * fVar34;
      fVar15 = fVar15 + fVar35 * fVar34;
      fVar16 = fVar16 + fVar36 * fVar34;
      fVar17 = fVar17 + fVar37 * fVar34;
      fVar22 = fVar22 + (float)puVar9[-2] * (float)*(undefined8 *)(param_10 + 0x20) * fVar30;
      fVar23 = fVar23 + (float)((ulong)puVar9[-2] >> 0x20) *
                        (float)((ulong)*(undefined8 *)(param_10 + 0x20) >> 0x20) * fVar30;
      fVar24 = fVar24 + (float)puVar9[-1] * (float)*(undefined8 *)(param_10 + 0x28) * fVar30;
      fVar25 = fVar25 + (float)((ulong)puVar9[-1] >> 0x20) * fVar34;
      fVar26 = fVar26 + (float)*(undefined8 *)(param_11 + 0x20) * fVar30 * (float)*puVar9;
      fVar27 = fVar27 + (float)((ulong)*(undefined8 *)(param_11 + 0x20) >> 0x20) * fVar30 *
                        (float)((ulong)*puVar9 >> 0x20);
      fVar28 = fVar28 + (float)*(undefined8 *)(param_11 + 0x28) * fVar30 * (float)puVar9[1];
      fVar29 = fVar29 + fVar33 * (float)((ulong)puVar9[1] >> 0x20);
      puVar9 = puVar9 + 6;
    } while (uVar7 != 0);
    puVar9 = (undefined8 *)(param_12 + 0x20);
    pfVar11 = afStack_18;
    cVar3 = *param_8;
    pcVar2 = param_5;
    pcVar1 = param_8;
    while( true ) {
      if ((cVar3 != '\0') && (*pcVar2 == '\0')) {
        fVar34 = (float)puVar9[-3];
        fVar31 = (float)((ulong)puVar9[-3] >> 0x20);
        fVar30 = (float)puVar9[-4];
        fVar33 = (float)((ulong)puVar9[-4] >> 0x20);
        fVar30 = fVar13 * fVar30 + fVar18 * (0.0 - fVar30) +
                 fVar22 * *(float *)(puVar9 + -2) + fVar26 * (float)*puVar9;
        fVar33 = fVar15 * fVar33 + fVar19 * (0.0 - fVar33) +
                 fVar23 * *(float *)((long)puVar9 + -0xc) + fVar27 * (float)((ulong)*puVar9 >> 0x20)
        ;
        fVar34 = fVar16 * fVar34 + fVar20 * (0.0 - fVar34) +
                 fVar24 * *(float *)(puVar9 + -1) + fVar28 * (float)puVar9[1];
        fVar31 = fVar17 * fVar31 + fVar21 * (0.0 - fVar31) +
                 fVar25 * *(float *)((long)puVar9 + -4) + fVar29 * (float)((ulong)puVar9[1] >> 0x20)
        ;
        auVar32._4_4_ = fVar33;
        auVar32._0_4_ = fVar30;
        auVar32._8_4_ = fVar34;
        auVar32._12_4_ = fVar31;
        auVar4._4_4_ = fVar33;
        auVar4._0_4_ = fVar30;
        auVar4._8_4_ = fVar34;
        auVar4._12_4_ = fVar31;
        auVar32 = NEON_ext(auVar32,auVar4,8,1);
        fVar30 = *param_13 * (fVar30 + fVar33 + auVar32._0_4_);
        *pfVar11 = *param_6 - fVar30;
        *pfVar12 = *param_7 - fVar30;
      }
      uVar6 = uVar6 - 1;
      pfVar12 = pfVar12 + 1;
      param_7 = param_7 + 1;
      pfVar11 = pfVar11 + 1;
      param_6 = param_6 + 1;
      pcVar1 = pcVar1 + 1;
      pcVar2 = pcVar2 + 1;
      puVar9 = puVar9 + 6;
      param_13 = param_13 + 1;
      if (uVar6 == 0) break;
      cVar3 = *pcVar1;
    }
  }
  *param_9 = 0.0;
  if ((int)param_1 < 1) {
    return ZEXT816(0x3f800000);
  }
  uVar7 = (ulong)param_1;
  bVar8 = true;
  pfVar12 = afStack_18;
  fVar13 = 0.0;
  pfVar11 = afStack_30;
  if (*param_8 != '\0') goto LAB_030df59c;
LAB_030df56c:
  do {
    uVar7 = uVar7 - 1;
    pfVar10 = pfVar10 + 1;
    pfVar12 = pfVar12 + 1;
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
    param_15 = param_15 + 1;
    param_4 = param_4 + 1;
    param_5 = param_5 + 1;
    param_8 = param_8 + 1;
    if (uVar7 == 0) {
      uVar7 = 0x3f800000;
      if (0.01 <= fVar13) {
        uVar7 = 0;
      }
      uVar6 = 0x3f800000;
      if (!bVar8) {
        uVar6 = uVar7;
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar6;
      return auVar14;
    }
    pfVar11 = pfVar10;
  } while (*param_8 == '\0');
LAB_030df59c:
  pfVar10 = pfVar11;
  fVar15 = *param_4;
  if (*param_5 == '\0') goto LAB_030df5d8;
  if ((fVar15 < 0.0) || (*param_15 != '\0')) {
    fVar15 = *param_2 - *param_3;
    bVar8 = (bool)(bVar8 & *param_2 < *param_3 + 0.01);
  }
  else {
    if (bVar8) {
      fVar16 = *param_2;
      fVar15 = *param_3;
      bVar8 = fVar15 < fVar16 + 0.01;
    }
    else {
      fVar15 = *param_3;
      bVar8 = false;
      fVar16 = *param_2;
    }
    fVar15 = fVar15 - fVar16;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar13 = fVar13 + fVar15;
  goto LAB_030df568;
LAB_030df5d8:
  fVar17 = *pfVar12;
  fVar16 = fVar17;
  if (fVar17 <= 0.0) {
    fVar16 = 0.0;
  }
  fVar18 = (float)NEON_fminnm(fVar17,0);
  fVar18 = fVar13 - fVar18;
  bVar5 = fVar17 < 0.001;
  if (fVar15 < 0.0) {
    bVar5 = -0.001 < fVar17;
  }
  bVar8 = (bool)(bVar8 & bVar5);
  fVar13 = fVar13 + fVar16;
  if (fVar15 < 0.0) {
    fVar13 = fVar18;
  }
  *param_9 = fVar13;
  if (*param_8 == '\x03') {
    fVar15 = (float)NEON_fminnm(*pfVar10,0);
    bVar8 = (bool)(bVar8 & -0.001 < *pfVar10);
    fVar13 = fVar13 - fVar15;
LAB_030df568:
    *param_9 = fVar13;
  }
  goto LAB_030df56c;
}


