/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02df4b60; name: FUN_02df4b60
 */


void FUN_02df4b60(int param_1,int param_2,int param_3,int param_4,long param_5,long param_6,
                 long param_7,long param_8,float *param_9,undefined8 param_10,uint param_11,
                 uint param_12)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  undefined1 (*pauVar25) [16];
  float *pfVar26;
  float *pfVar27;
  long lVar28;
  undefined1 (*pauVar29) [16];
  ulong uVar30;
  ulong uVar31;
  float *pfVar32;
  float *pfVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uVar36;
  undefined8 uVar37;
  
  bVar12 = param_4 == 0;
  bVar13 = param_3 == 0;
  uVar15 = param_2 >> 2;
  uVar3 = param_1 >> 2;
  uVar23 = uVar15;
  if (bVar13) {
    uVar23 = uVar3;
  }
  uVar4 = uVar15;
  if (bVar13 || bVar12) {
    uVar4 = uVar3;
  }
  pauVar25 = (undefined1 (*) [16])(param_6 + (long)(int)uVar23 * 4);
  lVar24 = param_8 + (long)(param_2 >> 1) * 4;
  if (bVar13 || bVar12) {
    param_8 = param_7;
    lVar24 = param_7 + (long)(param_1 >> 1) * 4;
  }
  uVar15 = uVar15 - uVar3;
  uVar3 = uVar15;
  if (!bVar13 || bVar12) {
    uVar3 = 0;
  }
  if (((uVar15 != 0) && (param_3 != 0)) && (param_4 == 0)) {
    uVar23 = param_12;
    if ((int)uVar15 <= (int)param_12) {
      uVar23 = uVar15;
    }
    uVar22 = param_11;
    if ((int)uVar15 <= (int)param_11) {
      uVar22 = uVar15;
    }
    pauVar29 = (undefined1 (*) [16])((long)pauVar25 + (long)(int)uVar23 * -4);
    lVar14 = (long)(int)uVar22;
    pauVar25 = (undefined1 (*) [16])((long)pauVar25 + (long)(int)uVar22 * -4);
    param_11 = param_11 - uVar22;
    lVar28 = (long)(int)uVar23;
    param_12 = param_12 - uVar23;
    if (((((ulong)param_9 & 0xf) == 0) && (((ulong)pauVar25 & 0xf) == 0)) &&
       (((ulong)pauVar29 & 0xf) == 0)) {
      pfVar19 = param_9;
      if (lVar28 != lVar14 && -lVar28 <= -lVar14) {
        do {
          pauVar25 = pauVar25 + -1;
          auVar35 = NEON_rev64(*pauVar25,4);
          auVar35 = NEON_ext(auVar35,auVar35,8,1);
          param_9 = pfVar19 + 4;
          *(long *)(pfVar19 + 2) = auVar35._8_8_;
          *(long *)pfVar19 = auVar35._0_8_;
          pfVar19 = param_9;
        } while (pauVar29 < pauVar25);
      }
    }
    else {
      pfVar19 = param_9;
      if (lVar28 != lVar14 && -lVar28 <= -lVar14) {
        do {
          pauVar25 = (undefined1 (*) [16])(pauVar25[-1] + 0xc);
          param_9 = pfVar19 + 1;
          *pfVar19 = *(float *)*pauVar25;
          pfVar19 = param_9;
        } while (pauVar29 < pauVar25);
      }
    }
  }
  uVar15 = param_12;
  if ((int)uVar4 <= (int)param_12) {
    uVar15 = uVar4;
  }
  uVar30 = (long)pauVar25 + (long)(int)uVar15 * -4;
  uVar23 = param_11;
  if ((int)uVar4 <= (int)param_11) {
    uVar23 = uVar4;
  }
  lVar14 = (long)(int)uVar15;
  lVar16 = (long)(int)uVar23;
  uVar17 = -(ulong)(uVar23 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar23 << 2;
  uVar31 = (long)pauVar25 - uVar17;
  lVar28 = (param_5 + (long)(int)uVar4 * 4) - uVar17;
  param_11 = param_11 - uVar23;
  lVar24 = lVar24 - uVar17;
  param_8 = param_8 + uVar17;
  param_12 = param_12 - uVar15;
  if (((((ulong)param_9 & 0xf) == 0) && ((uVar31 & 0xf) == 0)) && ((uVar30 & 0xf) == 0)) {
    if (lVar14 == lVar16 || -lVar16 < -lVar14) goto LAB_02df4ca8;
    lVar14 = 0;
    lVar16 = 0;
    do {
      lVar1 = lVar24 + lVar16;
      auVar35 = NEON_rev64(*(undefined1 (*) [16])(param_8 + lVar14),4);
      uVar37 = *(undefined8 *)(lVar28 + lVar16 + -8);
      uVar36 = *(undefined8 *)(lVar28 + lVar16 + -0x10);
      auVar34 = NEON_ext(auVar35,auVar35,8,1);
      auVar35._0_4_ =
           *(float *)(lVar1 + -0x10) * *(float *)(uVar31 + lVar16 + -0x10) +
           (float)uVar36 * auVar34._0_4_;
      auVar35._4_4_ =
           *(float *)(lVar1 + -0xc) * *(float *)(uVar31 + lVar16 + -0xc) +
           (float)((ulong)uVar36 >> 0x20) * auVar34._4_4_;
      auVar35._8_4_ =
           *(float *)(lVar1 + -8) * *(float *)(uVar31 + lVar16 + -8) + (float)uVar37 * auVar34._8_4_
      ;
      auVar35._12_4_ =
           *(float *)(lVar1 + -4) * *(float *)(uVar31 + lVar16 + -4) +
           (float)((ulong)uVar37 >> 0x20) * auVar34._12_4_;
      auVar35 = NEON_rev64(auVar35,4);
      auVar35 = NEON_ext(auVar35,auVar35,8,1);
      lVar16 = lVar16 + -0x10;
      uVar17 = uVar31 + lVar16;
      ((undefined8 *)((long)param_9 + lVar14))[1] = auVar35._8_8_;
      *(undefined8 *)((long)param_9 + lVar14) = auVar35._0_8_;
      lVar14 = lVar14 + 0x10;
    } while (uVar30 < uVar17);
  }
  else {
    if (lVar14 == lVar16 || -lVar16 < -lVar14) goto LAB_02df4ca8;
    lVar14 = 0;
    lVar16 = 0;
    do {
      lVar1 = lVar24 + lVar16;
      lVar11 = lVar16 + -4;
      lVar2 = lVar28 + lVar16;
      lVar16 = lVar16 + -4;
      uVar17 = uVar31 + lVar16;
      *(float *)((long)param_9 + lVar14) =
           *(float *)(lVar1 + -4) * *(float *)(uVar31 + lVar11) +
           *(float *)(lVar2 + -4) * *(float *)(param_8 + lVar14);
      lVar14 = lVar14 + 4;
    } while (uVar30 < uVar17);
  }
  param_9 = (float *)((long)param_9 - lVar16);
  lVar28 = lVar28 + lVar16;
  lVar24 = lVar24 + lVar16;
  param_8 = param_8 - lVar16;
  uVar31 = uVar17;
LAB_02df4ca8:
  uVar15 = param_12;
  if ((int)uVar4 <= (int)param_12) {
    uVar15 = uVar4;
  }
  uVar23 = param_11;
  if ((int)uVar4 <= (int)param_11) {
    uVar23 = uVar4;
  }
  uVar30 = -(ulong)(uVar23 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar23 << 2;
  pfVar19 = (float *)(uVar31 + (long)(int)uVar15 * 4);
  pfVar32 = (float *)(uVar31 + uVar30);
  pfVar20 = (float *)(lVar28 + uVar30);
  if (((((ulong)param_9 & 0xf) == 0) && (((ulong)pfVar32 & 0xf) == 0)) &&
     (((ulong)pfVar19 & 0xf) == 0)) {
    if ((int)uVar23 < (int)uVar15) {
      pfVar18 = param_9;
      pfVar21 = pfVar20;
      pauVar25 = (undefined1 (*) [16])(lVar24 + (-4 - (long)(int)uVar23) * 4);
      pfVar26 = (float *)(param_8 + uVar30);
      do {
        pfVar27 = pfVar32 + 4;
        fVar5 = *pfVar32;
        fVar6 = pfVar32[1];
        fVar7 = pfVar32[3];
        auVar35 = NEON_rev64(*pauVar25,4);
        pfVar20 = pfVar21 + 4;
        fVar8 = *pfVar21;
        fVar9 = pfVar21[1];
        fVar10 = pfVar21[3];
        auVar35 = NEON_ext(auVar35,auVar35,8,1);
        uVar37 = *(undefined8 *)(pfVar26 + 2);
        uVar36 = *(undefined8 *)pfVar26;
        param_9 = pfVar18 + 4;
        pfVar18[2] = -((float)uVar37 * pfVar21[2]) + pfVar32[2] * auVar35._8_4_;
        pfVar18[3] = -((float)((ulong)uVar37 >> 0x20) * fVar10) + fVar7 * auVar35._12_4_;
        *pfVar18 = -((float)uVar36 * fVar8) + fVar5 * auVar35._0_4_;
        pfVar18[1] = -((float)((ulong)uVar36 >> 0x20) * fVar9) + fVar6 * auVar35._4_4_;
        pfVar18 = param_9;
        pfVar21 = pfVar20;
        pauVar25 = pauVar25 + -1;
        pfVar26 = pfVar26 + 4;
        pfVar32 = pfVar27;
      } while (pfVar27 < pfVar19);
    }
  }
  else if ((int)uVar23 < (int)uVar15) {
    pfVar18 = param_9;
    pfVar21 = pfVar20;
    pfVar26 = (float *)(lVar24 + ~(long)(int)uVar23 * 4);
    pfVar27 = (float *)(param_8 + uVar30);
    do {
      pfVar33 = pfVar32 + 1;
      pfVar20 = pfVar21 + 1;
      param_9 = pfVar18 + 1;
      *pfVar18 = *pfVar26 * *pfVar32 - *pfVar27 * *pfVar21;
      pfVar18 = param_9;
      pfVar21 = pfVar20;
      pfVar26 = pfVar26 + -1;
      pfVar27 = pfVar27 + 1;
      pfVar32 = pfVar33;
    } while (pfVar33 < pfVar19);
  }
  if (uVar3 != 0) {
    uVar4 = param_12 - uVar15;
    if ((int)uVar3 <= (int)(param_12 - uVar15)) {
      uVar4 = uVar3;
    }
    uVar15 = param_11 - uVar23;
    if ((int)uVar3 <= (int)(param_11 - uVar23)) {
      uVar15 = uVar3;
    }
    lVar24 = (long)(int)uVar15;
    pfVar19 = pfVar20 + (int)uVar15;
    pfVar32 = pfVar20 + (int)uVar4;
    if ((((ulong)param_9 & 0xf) == 0 && ((ulong)pfVar19 & 0xf) == 0) && ((ulong)pfVar32 & 0xf) == 0)
    {
      if ((int)uVar15 < (int)uVar4) {
        pfVar18 = pfVar20 + lVar24 + 4;
        if (pfVar20 + lVar24 + 4 <= pfVar32) {
          pfVar18 = pfVar32;
        }
        uVar30 = (long)pfVar18 + ~(ulong)pfVar20 + lVar24 * -4;
        uVar15 = ((uint)(uVar30 >> 4) & 0xfffffff) + 1;
        uVar31 = (ulong)uVar15 & 3;
        pfVar20 = param_9;
        pfVar18 = pfVar19;
        if ((uVar15 & 3) != 0) {
          do {
            pfVar19 = pfVar18 + 4;
            fVar5 = *pfVar18;
            fVar6 = pfVar18[1];
            fVar7 = pfVar18[3];
            param_9 = pfVar20 + 4;
            pfVar20[2] = -pfVar18[2];
            pfVar20[3] = -fVar7;
            *pfVar20 = -fVar5;
            pfVar20[1] = -fVar6;
            uVar31 = uVar31 - 1;
            pfVar20 = param_9;
            pfVar18 = pfVar19;
          } while (uVar31 != 0);
        }
        if (0x2f < uVar30) {
          do {
            fVar5 = *pfVar19;
            fVar6 = pfVar19[1];
            fVar7 = pfVar19[3];
            param_9[2] = -pfVar19[2];
            param_9[3] = -fVar7;
            *param_9 = -fVar5;
            param_9[1] = -fVar6;
            fVar5 = pfVar19[4];
            fVar6 = pfVar19[5];
            fVar7 = pfVar19[7];
            param_9[6] = -pfVar19[6];
            param_9[7] = -fVar7;
            param_9[4] = -fVar5;
            param_9[5] = -fVar6;
            fVar5 = pfVar19[8];
            fVar6 = pfVar19[9];
            fVar7 = pfVar19[0xb];
            param_9[10] = -pfVar19[10];
            param_9[0xb] = -fVar7;
            param_9[8] = -fVar5;
            param_9[9] = -fVar6;
            fVar5 = pfVar19[0xc];
            fVar6 = pfVar19[0xd];
            pfVar20 = pfVar19 + 0xe;
            fVar7 = pfVar19[0xf];
            pfVar19 = pfVar19 + 0x10;
            param_9[0xe] = -*pfVar20;
            param_9[0xf] = -fVar7;
            param_9[0xc] = -fVar5;
            param_9[0xd] = -fVar6;
            param_9 = param_9 + 0x10;
          } while (pfVar19 < pfVar32);
        }
      }
    }
    else if ((int)uVar15 < (int)uVar4) {
      pfVar18 = pfVar20 + lVar24 + 1;
      if (pfVar20 + lVar24 + 1 <= pfVar32) {
        pfVar18 = pfVar32;
      }
      uVar30 = (long)pfVar18 + ~(ulong)pfVar20 + lVar24 * -4;
      uVar15 = ((uint)(uVar30 >> 2) & 0x3fffffff) + 1;
      uVar31 = (ulong)uVar15 & 3;
      pfVar20 = param_9;
      pfVar18 = pfVar19;
      if ((uVar15 & 3) != 0) {
        do {
          pfVar19 = pfVar18 + 1;
          param_9 = pfVar20 + 1;
          *pfVar20 = -*pfVar18;
          uVar31 = uVar31 - 1;
          pfVar20 = param_9;
          pfVar18 = pfVar19;
        } while (uVar31 != 0);
      }
      if (0xb < uVar30) {
        do {
          *param_9 = -*pfVar19;
          param_9[1] = -pfVar19[1];
          param_9[2] = -pfVar19[2];
          pfVar20 = pfVar19 + 3;
          pfVar19 = pfVar19 + 4;
          param_9[3] = -*pfVar20;
          param_9 = param_9 + 4;
        } while (pfVar19 < pfVar32);
      }
    }
  }
  return;
}


