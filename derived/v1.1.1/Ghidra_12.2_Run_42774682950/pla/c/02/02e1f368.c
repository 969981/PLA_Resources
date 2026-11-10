/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e1f368; name: FUN_02e1f368
 */


void FUN_02e1f368(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 uint param_5)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  ushort uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  ulong uVar16;
  float *pfVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  
  uVar2 = (uint)(ushort)param_1[0xc6];
  if ((uint)*(ushort *)((long)param_1 + 0x31a) <= (uint)(ushort)param_1[0xc6]) {
    uVar2 = (uint)*(ushort *)((long)param_1 + 0x31a);
  }
  if (param_5 != 0) {
    lVar12 = *(long *)(param_1 + 2);
    uVar13 = *param_1;
    puVar1 = (ushort *)((long)param_1 + 0x29a);
    uVar16 = (ulong)*(ushort *)((long)param_1 + 0x316);
    uVar14 = param_1[4];
    do {
      while( true ) {
        uVar18 = (ulong)(ushort)param_1[0xc5];
        uVar4 = *(ushort *)((long)param_1 + uVar18 * 2 + 0x214);
        uVar6 = uVar13 - *(ushort *)((long)param_1 + (uVar16 & 0xffff) * 2 + 0x294);
        uVar3 = uVar13 - uVar4;
        if (uVar6 <= uVar13 - uVar4) {
          uVar3 = uVar6;
        }
        uVar6 = uVar13 - uVar14;
        if (uVar3 <= uVar13 - uVar14) {
          uVar6 = uVar3;
        }
        uVar3 = param_5;
        if (uVar6 <= param_5) {
          uVar3 = uVar6;
        }
        if (3 < uVar3) {
          puVar9 = param_2;
          puVar10 = param_3;
          puVar11 = param_4;
          uVar13 = uVar3;
          while( true ) {
            param_2 = puVar9 + 2;
            uVar20 = *puVar9;
            puVar8 = (undefined8 *)(lVar12 + (ulong)uVar14 * 4);
            puVar8[1] = puVar9[1];
            *puVar8 = uVar20;
            param_1[4] = param_1[4] + 4;
            if ((uVar2 & 0xfffc) == 0) {
              uVar14 = 0;
              uVar21 = 0;
              uVar20 = 0;
              uVar24 = 0;
              uVar23 = 0;
            }
            else {
              uVar24 = 0;
              uVar23 = 0;
              uVar21 = 0;
              uVar20 = 0;
              lVar19 = 0x14d;
              puVar15 = puVar1;
              pfVar17 = (float *)(param_1 + 0x45);
              do {
                fVar37 = pfVar17[-0x40];
                fVar38 = pfVar17[-0x3f];
                fVar25 = pfVar17[-0x3e];
                fVar30 = pfVar17[-0x3d];
                puVar9 = (undefined8 *)(lVar12 + (ulong)puVar15[-0x43] * 4);
                uVar29 = puVar9[1];
                uVar27 = *puVar9;
                puVar9 = (undefined8 *)(lVar12 + (ulong)puVar15[-0x42] * 4);
                uVar32 = puVar9[1];
                uVar31 = *puVar9;
                puVar9 = (undefined8 *)(lVar12 + (ulong)puVar15[-0x41] * 4);
                uVar34 = puVar9[1];
                uVar33 = *puVar9;
                puVar9 = (undefined8 *)(lVar12 + (ulong)puVar15[-3] * 4);
                uVar40 = puVar9[1];
                uVar39 = *puVar9;
                puVar9 = (undefined8 *)(lVar12 + (ulong)puVar15[-0x40] * 4);
                uVar36 = puVar9[1];
                uVar35 = *puVar9;
                fVar22 = *pfVar17;
                puVar9 = (undefined8 *)(lVar12 + (ulong)puVar15[-2] * 4);
                uVar28 = puVar9[1];
                uVar26 = *puVar9;
                uVar23 = CONCAT44((float)((ulong)uVar23 >> 0x20) +
                                  (float)((ulong)uVar27 >> 0x20) * fVar37 +
                                  (float)((ulong)uVar31 >> 0x20) * fVar38 +
                                  (float)((ulong)uVar33 >> 0x20) * fVar25 +
                                  (float)((ulong)uVar35 >> 0x20) * fVar30,
                                  (float)uVar23 + (float)uVar27 * fVar37 + (float)uVar31 * fVar38 +
                                  (float)uVar33 * fVar25 + (float)uVar35 * fVar30);
                uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) +
                                  (float)((ulong)uVar29 >> 0x20) * fVar37 +
                                  (float)((ulong)uVar32 >> 0x20) * fVar38 +
                                  (float)((ulong)uVar34 >> 0x20) * fVar25 +
                                  (float)((ulong)uVar36 >> 0x20) * fVar30,
                                  (float)uVar24 + (float)uVar29 * fVar37 + (float)uVar32 * fVar38 +
                                  (float)uVar34 * fVar25 + (float)uVar36 * fVar30);
                fVar30 = pfVar17[1];
                puVar9 = (undefined8 *)(lVar12 + (ulong)puVar15[-1] * 4);
                uVar32 = puVar9[1];
                uVar31 = *puVar9;
                fVar25 = pfVar17[2];
                fVar37 = pfVar17[3];
                pfVar17 = pfVar17 + 4;
                puVar9 = (undefined8 *)(lVar12 + (ulong)*puVar15 * 4);
                uVar29 = puVar9[1];
                uVar27 = *puVar9;
                puVar15[-0x43] = puVar15[-0x43] + 4;
                puVar15[-0x42] = puVar15[-0x42] + 4;
                uVar16 = lVar19 - 0x149;
                lVar19 = lVar19 + 4;
                puVar15[-0x41] = puVar15[-0x41] + 4;
                puVar15[-0x40] = puVar15[-0x40] + 4;
                puVar15[-3] = puVar15[-3] + 4;
                puVar15[-2] = puVar15[-2] + 4;
                puVar15[-1] = puVar15[-1] + 4;
                *puVar15 = *puVar15 + 4;
                uVar20 = CONCAT44((float)((ulong)uVar20 >> 0x20) +
                                  (float)((ulong)uVar39 >> 0x20) * fVar22 +
                                  (float)((ulong)uVar26 >> 0x20) * fVar30 +
                                  (float)((ulong)uVar31 >> 0x20) * fVar25 +
                                  (float)((ulong)uVar27 >> 0x20) * fVar37,
                                  (float)uVar20 + (float)uVar39 * fVar22 + (float)uVar26 * fVar30 +
                                  (float)uVar31 * fVar25 + (float)uVar27 * fVar37);
                uVar21 = CONCAT44((float)((ulong)uVar21 >> 0x20) +
                                  (float)((ulong)uVar40 >> 0x20) * fVar22 +
                                  (float)((ulong)uVar28 >> 0x20) * fVar30 +
                                  (float)((ulong)uVar32 >> 0x20) * fVar25 +
                                  (float)((ulong)uVar29 >> 0x20) * fVar37,
                                  (float)uVar21 + (float)uVar40 * fVar22 + (float)uVar28 * fVar30 +
                                  (float)uVar32 * fVar25 + (float)uVar29 * fVar37);
                puVar15 = puVar15 + 4;
              } while (uVar16 < (uVar2 & 0xfffc));
              uVar14 = (int)lVar19 - 0x14d;
            }
            if (uVar14 < (ushort)param_1[0xc6]) {
              uVar4 = *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x214);
              fVar37 = (float)param_1[(ulong)uVar14 + 5];
              puVar9 = (undefined8 *)(lVar12 + (ulong)uVar4 * 4);
              uVar27 = puVar9[1];
              uVar26 = *puVar9;
              fVar22 = (float)uVar23 + (float)uVar26 * fVar37;
              fVar25 = (float)((ulong)uVar23 >> 0x20) + (float)((ulong)uVar26 >> 0x20) * fVar37;
              uVar23 = CONCAT44(fVar25,fVar22);
              fVar30 = (float)uVar24 + (float)uVar27 * fVar37;
              fVar37 = (float)((ulong)uVar24 >> 0x20) + (float)((ulong)uVar27 >> 0x20) * fVar37;
              uVar24 = CONCAT44(fVar37,fVar30);
              *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x214) = uVar4 + 4;
              uVar18 = (ulong)uVar14;
              uVar16 = uVar18 + 1;
              if (uVar16 < (ushort)param_1[0xc6]) {
                uVar4 = *(ushort *)((long)param_1 + uVar16 * 2 + 0x214);
                fVar38 = (float)param_1[uVar18 + 6];
                puVar9 = (undefined8 *)(lVar12 + (ulong)uVar4 * 4);
                uVar24 = puVar9[1];
                uVar23 = *puVar9;
                *(ushort *)((long)param_1 + uVar16 * 2 + 0x214) = uVar4 + 4;
                uVar23 = CONCAT44(fVar25 + (float)((ulong)uVar23 >> 0x20) * fVar38,
                                  fVar22 + (float)uVar23 * fVar38);
                uVar24 = CONCAT44(fVar37 + (float)((ulong)uVar24 >> 0x20) * fVar38,
                                  fVar30 + (float)uVar24 * fVar38);
                if (uVar18 + 2 < (ulong)(ushort)param_1[0xc6]) {
                  do {
                    uVar4 = *(ushort *)((long)param_1 + uVar18 * 2 + 0x218);
                    puVar9 = (undefined8 *)(lVar12 + (ulong)uVar4 * 4);
                    uVar27 = puVar9[1];
                    uVar26 = *puVar9;
                    fVar22 = (float)param_1[uVar18 + 7];
                    uVar23 = CONCAT44((float)((ulong)uVar23 >> 0x20) +
                                      (float)((ulong)uVar26 >> 0x20) * fVar22,
                                      (float)uVar23 + (float)uVar26 * fVar22);
                    uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) +
                                      (float)((ulong)uVar27 >> 0x20) * fVar22,
                                      (float)uVar24 + (float)uVar27 * fVar22);
                    *(ushort *)((long)param_1 + uVar18 * 2 + 0x218) = uVar4 + 4;
                    uVar16 = uVar18 + 3;
                    uVar18 = uVar18 + 1;
                  } while (uVar16 < (ushort)param_1[0xc6]);
                }
              }
            }
            if (uVar14 < *(ushort *)((long)param_1 + 0x31a)) {
              uVar4 = *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x294);
              fVar37 = (float)param_1[(ulong)uVar14 + 0x45];
              puVar9 = (undefined8 *)(lVar12 + (ulong)uVar4 * 4);
              uVar27 = puVar9[1];
              uVar26 = *puVar9;
              fVar22 = (float)uVar20 + (float)uVar26 * fVar37;
              fVar25 = (float)((ulong)uVar20 >> 0x20) + (float)((ulong)uVar26 >> 0x20) * fVar37;
              uVar20 = CONCAT44(fVar25,fVar22);
              fVar30 = (float)uVar21 + (float)uVar27 * fVar37;
              fVar37 = (float)((ulong)uVar21 >> 0x20) + (float)((ulong)uVar27 >> 0x20) * fVar37;
              uVar21 = CONCAT44(fVar37,fVar30);
              *(ushort *)((long)param_1 + (ulong)uVar14 * 2 + 0x294) = uVar4 + 4;
              uVar18 = (ulong)uVar14;
              uVar16 = uVar18 + 1;
              if (uVar16 < *(ushort *)((long)param_1 + 0x31a)) {
                uVar4 = *(ushort *)((long)param_1 + uVar16 * 2 + 0x294);
                fVar38 = (float)param_1[uVar18 + 0x46];
                puVar9 = (undefined8 *)(lVar12 + (ulong)uVar4 * 4);
                uVar21 = puVar9[1];
                uVar20 = *puVar9;
                *(ushort *)((long)param_1 + uVar16 * 2 + 0x294) = uVar4 + 4;
                uVar16 = uVar18 + 2;
                fVar22 = fVar22 + (float)uVar20 * fVar38;
                fVar25 = fVar25 + (float)((ulong)uVar20 >> 0x20) * fVar38;
                uVar20 = CONCAT44(fVar25,fVar22);
                fVar30 = fVar30 + (float)uVar21 * fVar38;
                fVar37 = fVar37 + (float)((ulong)uVar21 >> 0x20) * fVar38;
                uVar21 = CONCAT44(fVar37,fVar30);
                if (uVar16 < *(ushort *)((long)param_1 + 0x31a)) {
                  uVar4 = *(ushort *)((long)param_1 + uVar16 * 2 + 0x294);
                  fVar38 = (float)param_1[uVar18 + 0x47];
                  puVar9 = (undefined8 *)(lVar12 + (ulong)uVar4 * 4);
                  uVar21 = puVar9[1];
                  uVar20 = *puVar9;
                  *(ushort *)((long)param_1 + uVar16 * 2 + 0x294) = uVar4 + 4;
                  uVar20 = CONCAT44(fVar25 + (float)((ulong)uVar20 >> 0x20) * fVar38,
                                    fVar22 + (float)uVar20 * fVar38);
                  uVar21 = CONCAT44(fVar37 + (float)((ulong)uVar21 >> 0x20) * fVar38,
                                    fVar30 + (float)uVar21 * fVar38);
                  if (uVar18 + 3 < (ulong)*(ushort *)((long)param_1 + 0x31a)) {
                    do {
                      puVar9 = (undefined8 *)(lVar12 + (ulong)puVar1[uVar18] * 4);
                      uVar27 = puVar9[1];
                      uVar26 = *puVar9;
                      fVar22 = *(float *)(puVar1 + uVar18 * 2 + -0xbd);
                      uVar20 = CONCAT44((float)((ulong)uVar20 >> 0x20) +
                                        (float)((ulong)uVar26 >> 0x20) * fVar22,
                                        (float)uVar20 + (float)uVar26 * fVar22);
                      uVar21 = CONCAT44((float)((ulong)uVar21 >> 0x20) +
                                        (float)((ulong)uVar27 >> 0x20) * fVar22,
                                        (float)uVar21 + (float)uVar27 * fVar22);
                      puVar1[uVar18] = puVar1[uVar18] + 4;
                      uVar16 = uVar18 + 4;
                      uVar18 = uVar18 + 1;
                    } while (uVar16 < *(ushort *)((long)param_1 + 0x31a));
                  }
                }
              }
            }
            uVar13 = uVar13 - 4;
            param_3 = puVar10 + 2;
            puVar10[1] = uVar24;
            *puVar10 = uVar23;
            param_4 = puVar11 + 2;
            puVar11[1] = uVar21;
            *puVar11 = uVar20;
            if (uVar13 < 4) break;
            uVar14 = param_1[4];
            puVar9 = param_2;
            puVar10 = param_3;
            puVar11 = param_4;
          }
          uVar18 = (ulong)(ushort)param_1[0xc5];
          uVar4 = *(ushort *)((long)param_1 + uVar18 * 2 + 0x214);
          uVar13 = *param_1;
        }
        if (uVar13 == uVar4) {
          *(undefined2 *)((long)param_1 + uVar18 * 2 + 0x214) = 0;
          uVar5 = (ushort)param_1[0xc6];
          uVar4 = (short)param_1[0xc5] + 1;
          uVar7 = 0;
          if (uVar5 != 0) {
            uVar7 = uVar4 / uVar5;
          }
          *(ushort *)(param_1 + 0xc5) = uVar4 - uVar7 * uVar5;
        }
        uVar16 = (ulong)*(ushort *)((long)param_1 + 0x316);
        if (uVar13 == *(ushort *)((long)param_1 + uVar16 * 2 + 0x294)) {
          *(undefined2 *)((long)param_1 + uVar16 * 2 + 0x294) = 0;
          uVar4 = *(ushort *)((long)param_1 + 0x31a);
          uVar14 = *(ushort *)((long)param_1 + 0x316) + 1 & 0xffff;
          uVar6 = 0;
          if (uVar4 != 0) {
            uVar6 = uVar14 / uVar4;
          }
          uVar14 = uVar14 - uVar6 * uVar4;
          uVar16 = (ulong)uVar14;
          *(short *)((long)param_1 + 0x316) = (short)uVar14;
        }
        uVar14 = param_1[4];
        if (uVar14 == uVar13) break;
        param_5 = param_5 - uVar3;
        if (param_5 == 0) {
          return;
        }
      }
      uVar14 = 0;
      param_1[4] = 0;
      param_5 = param_5 - uVar3;
    } while (param_5 != 0);
  }
  return;
}


