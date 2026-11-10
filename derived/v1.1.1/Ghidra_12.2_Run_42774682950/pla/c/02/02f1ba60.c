/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1ba60; name: FUN_02f1ba60
 */


void FUN_02f1ba60(float param_1,long *param_2,long *param_3,float *param_4,long param_5,long param_6
                 ,ushort param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
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
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  uVar7 = *(uint *)(param_2 + 1);
  uVar4 = *(uint *)(param_3 + 1);
  uVar2 = uVar7 - (uVar7 >> 0xf & 1) & 0xff;
  if ((uVar2 != 0) && (uVar3 = uVar4 - (uVar4 >> 0xf & 1) & 0xff, uVar3 != 0)) {
    uVar9 = (ulong)param_7;
    uVar8 = 0;
    do {
      lVar11 = *param_2;
      lVar13 = uVar8 * ((ulong)((uVar4 & 0xff) + 3) & 0x1fc) * 4;
      lVar12 = uVar8 * *(ushort *)(param_2 + 2) * 4;
      puVar5 = (undefined8 *)(lVar11 + lVar12);
      puVar6 = (undefined8 *)(lVar11 + uVar9 * 4 + lVar12);
      puVar1 = puVar5 + 4;
      if (puVar6 <= puVar1) {
        puVar6 = puVar1;
      }
      uVar10 = 0;
      do {
        lVar14 = uVar10 * 4;
        fVar35 = *param_4 * *(float *)(param_5 + lVar13 + lVar14);
        fVar37 = (param_4[1] * *(float *)(param_6 + lVar13 + lVar14) - fVar35) * param_1;
        puVar15 = (undefined8 *)(*param_3 + lVar14 * (ulong)*(ushort *)(param_3 + 2));
        if (1.1920929e-07 <= ABS(fVar37)) {
          fVar27 = fVar37 + fVar35;
          fVar28 = fVar35 + fVar37 * 2.0;
          fVar30 = fVar35 + fVar37 * 3.0;
          fVar37 = fVar37 * 4.0;
          fVar34 = fVar37 + fVar37;
          puVar17 = (undefined8 *)(lVar11 + uVar9 * 4 + lVar12);
          fVar36 = fVar35 + fVar37;
          fVar31 = fVar27 + fVar37;
          fVar18 = fVar28 + fVar37;
          fVar37 = fVar30 + fVar37;
          if (puVar17 <= puVar5 + 4) {
            puVar17 = puVar5 + 4;
          }
          if (((uint)(~(ulong)puVar5 + (long)puVar17) >> 5 & 1) == 0) {
            fVar19 = fVar36 * (float)puVar5[2];
            fVar21 = fVar31 * (float)((ulong)puVar5[2] >> 0x20);
            fVar23 = fVar18 * (float)puVar5[3];
            fVar26 = fVar37 * (float)((ulong)puVar5[3] >> 0x20);
            fVar36 = fVar36 + fVar34;
            fVar31 = fVar31 + fVar34;
            fVar18 = fVar18 + fVar34;
            fVar37 = fVar37 + fVar34;
            fVar20 = fVar35 * (float)*puVar5;
            fVar22 = fVar27 * (float)((ulong)*puVar5 >> 0x20);
            fVar25 = fVar28 * (float)puVar5[1];
            fVar24 = fVar30 * (float)((ulong)puVar5[1] >> 0x20);
            fVar35 = fVar35 + fVar34;
            fVar27 = fVar27 + fVar34;
            fVar28 = fVar28 + fVar34;
            fVar30 = fVar30 + fVar34;
            puVar15[1] = CONCAT44((float)((ulong)puVar15[1] >> 0x20) + fVar24,
                                  (float)puVar15[1] + fVar25);
            *puVar15 = CONCAT44((float)((ulong)*puVar15 >> 0x20) + fVar22,(float)*puVar15 + fVar20);
            puVar15[3] = CONCAT44((float)((ulong)puVar15[3] >> 0x20) + fVar26,
                                  (float)puVar15[3] + fVar23);
            puVar15[2] = CONCAT44((float)((ulong)puVar15[2] >> 0x20) + fVar21,
                                  (float)puVar15[2] + fVar19);
            puVar15 = puVar15 + 4;
            puVar16 = puVar1;
          }
          else {
            puVar16 = puVar5;
          }
          if (0x1f < ~(ulong)puVar5 + (long)puVar17) {
            do {
              uVar29 = *puVar16;
              uVar33 = puVar16[3];
              uVar32 = puVar16[2];
              fVar23 = fVar36 + fVar34;
              fVar25 = fVar31 + fVar34;
              fVar26 = fVar18 + fVar34;
              fVar24 = fVar37 + fVar34;
              fVar19 = fVar35 + fVar34;
              fVar20 = fVar27 + fVar34;
              fVar21 = fVar28 + fVar34;
              fVar22 = fVar30 + fVar34;
              puVar15[1] = CONCAT44((float)((ulong)puVar15[1] >> 0x20) +
                                    fVar30 * (float)((ulong)puVar16[1] >> 0x20),
                                    (float)puVar15[1] + fVar28 * (float)puVar16[1]);
              *puVar15 = CONCAT44((float)((ulong)*puVar15 >> 0x20) +
                                  fVar27 * (float)((ulong)uVar29 >> 0x20),
                                  (float)*puVar15 + fVar35 * (float)uVar29);
              puVar15[3] = CONCAT44((float)((ulong)puVar15[3] >> 0x20) +
                                    fVar37 * (float)((ulong)uVar33 >> 0x20),
                                    (float)puVar15[3] + fVar18 * (float)uVar33);
              puVar15[2] = CONCAT44((float)((ulong)puVar15[2] >> 0x20) +
                                    fVar31 * (float)((ulong)uVar32 >> 0x20),
                                    (float)puVar15[2] + fVar36 * (float)uVar32);
              puVar17 = puVar16 + 5;
              uVar29 = puVar16[4];
              uVar33 = puVar16[7];
              uVar32 = puVar16[6];
              puVar16 = puVar16 + 8;
              fVar36 = fVar23 + fVar34;
              fVar31 = fVar25 + fVar34;
              fVar18 = fVar26 + fVar34;
              fVar37 = fVar24 + fVar34;
              fVar35 = fVar19 + fVar34;
              fVar27 = fVar20 + fVar34;
              fVar28 = fVar21 + fVar34;
              fVar30 = fVar22 + fVar34;
              puVar15[5] = CONCAT44((float)((ulong)puVar15[5] >> 0x20) +
                                    fVar22 * (float)((ulong)*puVar17 >> 0x20),
                                    (float)puVar15[5] + fVar21 * (float)*puVar17);
              puVar15[4] = CONCAT44((float)((ulong)puVar15[4] >> 0x20) +
                                    fVar20 * (float)((ulong)uVar29 >> 0x20),
                                    (float)puVar15[4] + fVar19 * (float)uVar29);
              puVar15[7] = CONCAT44((float)((ulong)puVar15[7] >> 0x20) +
                                    fVar24 * (float)((ulong)uVar33 >> 0x20),
                                    (float)puVar15[7] + fVar26 * (float)uVar33);
              puVar15[6] = CONCAT44((float)((ulong)puVar15[6] >> 0x20) +
                                    fVar25 * (float)((ulong)uVar32 >> 0x20),
                                    (float)puVar15[6] + fVar23 * (float)uVar32);
              puVar15 = puVar15 + 8;
            } while (puVar16 < (undefined8 *)((long)puVar5 + uVar9 * 4));
          }
        }
        else if (1.1920929e-07 <= ABS(fVar35)) {
          puVar17 = puVar5;
          if (((uint)(~(ulong)puVar5 + (long)puVar6) >> 5 & 1) == 0) {
            uVar29 = *puVar5;
            uVar33 = puVar5[3];
            uVar32 = puVar5[2];
            puVar15[1] = CONCAT44((float)((ulong)puVar15[1] >> 0x20) +
                                  fVar35 * (float)((ulong)puVar5[1] >> 0x20),
                                  (float)puVar15[1] + fVar35 * (float)puVar5[1]);
            *puVar15 = CONCAT44((float)((ulong)*puVar15 >> 0x20) +
                                fVar35 * (float)((ulong)uVar29 >> 0x20),
                                (float)*puVar15 + fVar35 * (float)uVar29);
            puVar15[3] = CONCAT44((float)((ulong)puVar15[3] >> 0x20) +
                                  fVar35 * (float)((ulong)uVar33 >> 0x20),
                                  (float)puVar15[3] + fVar35 * (float)uVar33);
            puVar15[2] = CONCAT44((float)((ulong)puVar15[2] >> 0x20) +
                                  fVar35 * (float)((ulong)uVar32 >> 0x20),
                                  (float)puVar15[2] + fVar35 * (float)uVar32);
            puVar17 = puVar1;
            puVar15 = puVar15 + 4;
          }
          if (0x1f < ~(ulong)puVar5 + (long)puVar6) {
            do {
              uVar29 = *puVar17;
              uVar33 = puVar17[3];
              uVar32 = puVar17[2];
              puVar15[1] = CONCAT44((float)((ulong)puVar15[1] >> 0x20) +
                                    fVar35 * (float)((ulong)puVar17[1] >> 0x20),
                                    (float)puVar15[1] + fVar35 * (float)puVar17[1]);
              *puVar15 = CONCAT44((float)((ulong)*puVar15 >> 0x20) +
                                  fVar35 * (float)((ulong)uVar29 >> 0x20),
                                  (float)*puVar15 + fVar35 * (float)uVar29);
              puVar15[3] = CONCAT44((float)((ulong)puVar15[3] >> 0x20) +
                                    fVar35 * (float)((ulong)uVar33 >> 0x20),
                                    (float)puVar15[3] + fVar35 * (float)uVar33);
              puVar15[2] = CONCAT44((float)((ulong)puVar15[2] >> 0x20) +
                                    fVar35 * (float)((ulong)uVar32 >> 0x20),
                                    (float)puVar15[2] + fVar35 * (float)uVar32);
              puVar16 = puVar17 + 5;
              uVar29 = puVar17[4];
              uVar33 = puVar17[7];
              uVar32 = puVar17[6];
              puVar17 = puVar17 + 8;
              puVar15[5] = CONCAT44((float)((ulong)puVar15[5] >> 0x20) +
                                    fVar35 * (float)((ulong)*puVar16 >> 0x20),
                                    (float)puVar15[5] + fVar35 * (float)*puVar16);
              puVar15[4] = CONCAT44((float)((ulong)puVar15[4] >> 0x20) +
                                    fVar35 * (float)((ulong)uVar29 >> 0x20),
                                    (float)puVar15[4] + fVar35 * (float)uVar29);
              puVar15[7] = CONCAT44((float)((ulong)puVar15[7] >> 0x20) +
                                    fVar35 * (float)((ulong)uVar33 >> 0x20),
                                    (float)puVar15[7] + fVar35 * (float)uVar33);
              puVar15[6] = CONCAT44((float)((ulong)puVar15[6] >> 0x20) +
                                    fVar35 * (float)((ulong)uVar32 >> 0x20),
                                    (float)puVar15[6] + fVar35 * (float)uVar32);
              puVar15 = puVar15 + 8;
            } while (puVar17 < (undefined8 *)((long)puVar5 + uVar9 * 4));
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar3);
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar2);
    uVar7 = *(uint *)(param_2 + 1);
  }
  if (((uVar7 >> 0xf & 1) != 0) && ((*(uint *)(param_3 + 1) >> 0xf & 1) != 0)) {
    lVar11 = (ulong)(uVar2 * ((uVar4 & 0xff) + 3 & 0x1fc)) * 4;
    lVar12 = (ulong)((*(uint *)(param_3 + 1) & 0xff) - 1) * 4;
    fVar35 = *param_4 * *(float *)(param_5 + lVar11 + lVar12);
    puVar5 = (undefined8 *)
             (*param_2 + (ulong)((uVar7 & 0xff) - 1) * (ulong)*(ushort *)(param_2 + 2) * 4);
    puVar6 = (undefined8 *)(*param_3 + lVar12 * (ulong)*(ushort *)(param_3 + 2));
    param_1 = (param_4[1] * *(float *)(param_6 + lVar11 + lVar12) - fVar35) * param_1;
    puVar1 = (undefined8 *)((long)puVar5 + (ulong)param_7 * 4);
    if (1.1920929e-07 <= ABS(param_1)) {
      fVar30 = param_1 + fVar35;
      fVar34 = fVar35 + param_1 * 2.0;
      fVar36 = fVar35 + param_1 * 3.0;
      param_1 = param_1 * 4.0;
      fVar31 = param_1 + param_1;
      fVar37 = fVar35 + param_1;
      fVar27 = fVar30 + param_1;
      fVar28 = fVar34 + param_1;
      param_1 = fVar36 + param_1;
      do {
        puVar15 = puVar5 + 4;
        fVar18 = fVar37 * (float)puVar5[2];
        fVar20 = fVar27 * (float)((ulong)puVar5[2] >> 0x20);
        fVar22 = fVar28 * (float)puVar5[3];
        fVar25 = param_1 * (float)((ulong)puVar5[3] >> 0x20);
        fVar19 = fVar35 * (float)*puVar5;
        fVar21 = fVar30 * (float)((ulong)*puVar5 >> 0x20);
        fVar23 = fVar34 * (float)puVar5[1];
        fVar26 = fVar36 * (float)((ulong)puVar5[1] >> 0x20);
        fVar35 = fVar35 + fVar31;
        fVar30 = fVar30 + fVar31;
        fVar34 = fVar34 + fVar31;
        fVar36 = fVar36 + fVar31;
        fVar37 = fVar37 + fVar31;
        fVar27 = fVar27 + fVar31;
        fVar28 = fVar28 + fVar31;
        param_1 = param_1 + fVar31;
        puVar6[1] = CONCAT44((float)((ulong)puVar6[1] >> 0x20) + fVar26,(float)puVar6[1] + fVar23);
        *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) + fVar21,(float)*puVar6 + fVar19);
        puVar6[3] = CONCAT44((float)((ulong)puVar6[3] >> 0x20) + fVar25,(float)puVar6[3] + fVar22);
        puVar6[2] = CONCAT44((float)((ulong)puVar6[2] >> 0x20) + fVar20,(float)puVar6[2] + fVar18);
        puVar5 = puVar15;
        puVar6 = puVar6 + 4;
      } while (puVar15 < puVar1);
    }
    else if (1.1920929e-07 <= ABS(fVar35)) {
      do {
        puVar15 = puVar5 + 4;
        uVar29 = *puVar5;
        uVar33 = puVar5[3];
        uVar32 = puVar5[2];
        puVar6[1] = CONCAT44((float)((ulong)puVar6[1] >> 0x20) +
                             fVar35 * (float)((ulong)puVar5[1] >> 0x20),
                             (float)puVar6[1] + fVar35 * (float)puVar5[1]);
        *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) + fVar35 * (float)((ulong)uVar29 >> 0x20)
                           ,(float)*puVar6 + fVar35 * (float)uVar29);
        puVar6[3] = CONCAT44((float)((ulong)puVar6[3] >> 0x20) +
                             fVar35 * (float)((ulong)uVar33 >> 0x20),
                             (float)puVar6[3] + fVar35 * (float)uVar33);
        puVar6[2] = CONCAT44((float)((ulong)puVar6[2] >> 0x20) +
                             fVar35 * (float)((ulong)uVar32 >> 0x20),
                             (float)puVar6[2] + fVar35 * (float)uVar32);
        puVar5 = puVar15;
        puVar6 = puVar6 + 4;
      } while (puVar15 < puVar1);
    }
  }
  *(ushort *)((long)param_3 + 0x12) = param_7;
  return;
}


