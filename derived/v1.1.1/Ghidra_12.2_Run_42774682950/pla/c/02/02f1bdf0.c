/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1bdf0; name: FUN_02f1bdf0
 */


void FUN_02f1bdf0(float param_1,undefined8 *param_2,long *param_3,uint param_4,float *param_5,
                 long param_6,long param_7,ushort param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  
  if ((param_4 & 0xff) != 0) {
    puVar1 = (undefined8 *)((long)param_2 + (ulong)param_8 * 4);
    puVar2 = param_2 + 4;
    puVar3 = puVar1;
    if (puVar1 <= puVar2) {
      puVar3 = puVar2;
    }
    uVar4 = 0;
    do {
      lVar5 = uVar4 * 4;
      fVar17 = *param_5 * *(float *)(param_6 + lVar5);
      fVar18 = (param_5[1] * *(float *)(param_7 + lVar5) - fVar17) * param_1;
      puVar6 = (undefined8 *)(*param_3 + lVar5 * (ulong)*(ushort *)(param_3 + 2));
      if (1.1920929e-07 <= ABS(fVar18)) {
        fVar21 = fVar18 + fVar17;
        fVar27 = fVar17 + fVar18 * 2.0;
        fVar28 = fVar17 + fVar18 * 3.0;
        fVar18 = fVar18 * 4.0;
        fVar19 = fVar18 + fVar18;
        fVar22 = fVar17 + fVar18;
        fVar24 = fVar21 + fVar18;
        fVar25 = fVar27 + fVar18;
        fVar18 = fVar28 + fVar18;
        puVar8 = puVar1;
        if (puVar1 <= param_2 + 4) {
          puVar8 = param_2 + 4;
        }
        if (((uint)((long)puVar8 + ~(ulong)param_2) >> 5 & 1) == 0) {
          fVar9 = fVar22 * (float)param_2[2];
          fVar11 = fVar24 * (float)((ulong)param_2[2] >> 0x20);
          fVar13 = fVar25 * (float)param_2[3];
          fVar15 = fVar18 * (float)((ulong)param_2[3] >> 0x20);
          fVar22 = fVar22 + fVar19;
          fVar24 = fVar24 + fVar19;
          fVar25 = fVar25 + fVar19;
          fVar18 = fVar18 + fVar19;
          fVar10 = fVar17 * (float)*param_2;
          fVar12 = fVar21 * (float)((ulong)*param_2 >> 0x20);
          fVar14 = fVar27 * (float)param_2[1];
          fVar16 = fVar28 * (float)((ulong)param_2[1] >> 0x20);
          fVar17 = fVar17 + fVar19;
          fVar21 = fVar21 + fVar19;
          fVar27 = fVar27 + fVar19;
          fVar28 = fVar28 + fVar19;
          puVar6[1] = CONCAT44((float)((ulong)puVar6[1] >> 0x20) + fVar16,(float)puVar6[1] + fVar14)
          ;
          *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) + fVar12,(float)*puVar6 + fVar10);
          puVar6[3] = CONCAT44((float)((ulong)puVar6[3] >> 0x20) + fVar15,(float)puVar6[3] + fVar13)
          ;
          puVar6[2] = CONCAT44((float)((ulong)puVar6[2] >> 0x20) + fVar11,(float)puVar6[2] + fVar9);
          puVar6 = puVar6 + 4;
          puVar7 = puVar2;
        }
        else {
          puVar7 = param_2;
        }
        if (0x1f < (long)puVar8 + ~(ulong)param_2) {
          do {
            uVar20 = *puVar7;
            uVar26 = puVar7[3];
            uVar23 = puVar7[2];
            fVar13 = fVar22 + fVar19;
            fVar14 = fVar24 + fVar19;
            fVar15 = fVar25 + fVar19;
            fVar16 = fVar18 + fVar19;
            fVar9 = fVar17 + fVar19;
            fVar10 = fVar21 + fVar19;
            fVar11 = fVar27 + fVar19;
            fVar12 = fVar28 + fVar19;
            puVar6[1] = CONCAT44((float)((ulong)puVar6[1] >> 0x20) +
                                 fVar28 * (float)((ulong)puVar7[1] >> 0x20),
                                 (float)puVar6[1] + fVar27 * (float)puVar7[1]);
            *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) +
                               fVar21 * (float)((ulong)uVar20 >> 0x20),
                               (float)*puVar6 + fVar17 * (float)uVar20);
            puVar6[3] = CONCAT44((float)((ulong)puVar6[3] >> 0x20) +
                                 fVar18 * (float)((ulong)uVar26 >> 0x20),
                                 (float)puVar6[3] + fVar25 * (float)uVar26);
            puVar6[2] = CONCAT44((float)((ulong)puVar6[2] >> 0x20) +
                                 fVar24 * (float)((ulong)uVar23 >> 0x20),
                                 (float)puVar6[2] + fVar22 * (float)uVar23);
            puVar8 = puVar7 + 5;
            uVar20 = puVar7[4];
            uVar26 = puVar7[7];
            uVar23 = puVar7[6];
            puVar7 = puVar7 + 8;
            fVar22 = fVar13 + fVar19;
            fVar24 = fVar14 + fVar19;
            fVar25 = fVar15 + fVar19;
            fVar18 = fVar16 + fVar19;
            fVar17 = fVar9 + fVar19;
            fVar21 = fVar10 + fVar19;
            fVar27 = fVar11 + fVar19;
            fVar28 = fVar12 + fVar19;
            puVar6[5] = CONCAT44((float)((ulong)puVar6[5] >> 0x20) +
                                 fVar12 * (float)((ulong)*puVar8 >> 0x20),
                                 (float)puVar6[5] + fVar11 * (float)*puVar8);
            puVar6[4] = CONCAT44((float)((ulong)puVar6[4] >> 0x20) +
                                 fVar10 * (float)((ulong)uVar20 >> 0x20),
                                 (float)puVar6[4] + fVar9 * (float)uVar20);
            puVar6[7] = CONCAT44((float)((ulong)puVar6[7] >> 0x20) +
                                 fVar16 * (float)((ulong)uVar26 >> 0x20),
                                 (float)puVar6[7] + fVar15 * (float)uVar26);
            puVar6[6] = CONCAT44((float)((ulong)puVar6[6] >> 0x20) +
                                 fVar14 * (float)((ulong)uVar23 >> 0x20),
                                 (float)puVar6[6] + fVar13 * (float)uVar23);
            puVar6 = puVar6 + 8;
          } while (puVar7 < puVar1);
        }
      }
      else if (1.1920929e-07 <= ABS(fVar17)) {
        puVar7 = puVar6;
        puVar8 = param_2;
        if (((uint)((long)puVar3 + ~(ulong)param_2) >> 5 & 1) == 0) {
          uVar20 = *param_2;
          uVar26 = param_2[3];
          uVar23 = param_2[2];
          puVar7 = puVar6 + 4;
          puVar6[1] = CONCAT44((float)((ulong)puVar6[1] >> 0x20) +
                               fVar17 * (float)((ulong)param_2[1] >> 0x20),
                               (float)puVar6[1] + fVar17 * (float)param_2[1]);
          *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) +
                             fVar17 * (float)((ulong)uVar20 >> 0x20),
                             (float)*puVar6 + fVar17 * (float)uVar20);
          puVar6[3] = CONCAT44((float)((ulong)puVar6[3] >> 0x20) +
                               fVar17 * (float)((ulong)uVar26 >> 0x20),
                               (float)puVar6[3] + fVar17 * (float)uVar26);
          puVar6[2] = CONCAT44((float)((ulong)puVar6[2] >> 0x20) +
                               fVar17 * (float)((ulong)uVar23 >> 0x20),
                               (float)puVar6[2] + fVar17 * (float)uVar23);
          puVar8 = puVar2;
        }
        if (0x1f < (long)puVar3 + ~(ulong)param_2) {
          do {
            uVar20 = *puVar8;
            uVar26 = puVar8[3];
            uVar23 = puVar8[2];
            puVar7[1] = CONCAT44((float)((ulong)puVar7[1] >> 0x20) +
                                 fVar17 * (float)((ulong)puVar8[1] >> 0x20),
                                 (float)puVar7[1] + fVar17 * (float)puVar8[1]);
            *puVar7 = CONCAT44((float)((ulong)*puVar7 >> 0x20) +
                               fVar17 * (float)((ulong)uVar20 >> 0x20),
                               (float)*puVar7 + fVar17 * (float)uVar20);
            puVar7[3] = CONCAT44((float)((ulong)puVar7[3] >> 0x20) +
                                 fVar17 * (float)((ulong)uVar26 >> 0x20),
                                 (float)puVar7[3] + fVar17 * (float)uVar26);
            puVar7[2] = CONCAT44((float)((ulong)puVar7[2] >> 0x20) +
                                 fVar17 * (float)((ulong)uVar23 >> 0x20),
                                 (float)puVar7[2] + fVar17 * (float)uVar23);
            puVar6 = puVar8 + 5;
            uVar20 = puVar8[4];
            uVar26 = puVar8[7];
            uVar23 = puVar8[6];
            puVar8 = puVar8 + 8;
            puVar7[5] = CONCAT44((float)((ulong)puVar7[5] >> 0x20) +
                                 fVar17 * (float)((ulong)*puVar6 >> 0x20),
                                 (float)puVar7[5] + fVar17 * (float)*puVar6);
            puVar7[4] = CONCAT44((float)((ulong)puVar7[4] >> 0x20) +
                                 fVar17 * (float)((ulong)uVar20 >> 0x20),
                                 (float)puVar7[4] + fVar17 * (float)uVar20);
            puVar7[7] = CONCAT44((float)((ulong)puVar7[7] >> 0x20) +
                                 fVar17 * (float)((ulong)uVar26 >> 0x20),
                                 (float)puVar7[7] + fVar17 * (float)uVar26);
            puVar7[6] = CONCAT44((float)((ulong)puVar7[6] >> 0x20) +
                                 fVar17 * (float)((ulong)uVar23 >> 0x20),
                                 (float)puVar7[6] + fVar17 * (float)uVar23);
            puVar7 = puVar7 + 8;
          } while (puVar8 < puVar1);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != (param_4 & 0xff));
  }
  return;
}


