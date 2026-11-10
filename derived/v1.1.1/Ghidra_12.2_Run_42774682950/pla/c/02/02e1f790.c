/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e1f790; name: FUN_02e1f790
 */


void FUN_02e1f790(float param_1,float param_2,long *param_3,uint param_4,uint param_5,
                 undefined8 *param_6)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar6 = *(uint *)(param_3 + 1);
  uVar10 = (ulong)param_4;
  if ((uVar6 & 0xf00) == 0x100) {
    fVar13 = 1.0;
    if (param_2 <= 1.0) {
      fVar13 = param_2;
    }
    fVar15 = 1.0;
    if (param_1 <= 1.0) {
      fVar15 = param_1;
    }
    fVar12 = 0.0;
    if ((uVar6 & 0x1000) != 0) {
      fVar12 = 1.0;
    }
    if ((uVar6 & 0x2000) != 0) {
      fVar12 = fVar12 + 1.0;
    }
    if ((uVar6 & 0x200000) != 0) {
      fVar12 = fVar12 + 1.0;
    }
    if ((uVar6 & 0x400000) != 0) {
      fVar12 = fVar12 + 1.0;
    }
    if ((uVar6 & 0x10000) != 0) {
      fVar12 = fVar12 + 1.0;
    }
    if ((uVar6 & 0x20000) != 0) {
      fVar12 = fVar12 + 1.0;
    }
    fVar16 = 0.0;
    if ((uVar6 & 0x4000) != 0) {
      fVar16 = fVar15 * fVar15;
    }
    uVar11 = uVar6 >> 0xc;
    fVar17 = 0.0;
    if ((uVar6 & 0x8000) != 0) {
      fVar17 = fVar13 * fVar13;
    }
    memset(param_6,0,-(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2);
    if (uVar11 != 0) {
      uVar1 = 0;
      uVar6 = (param_4 - 1 >> 2) + 1 & 3;
      uVar2 = 1;
      fVar12 = SQRT(1.0 / (fVar17 + fVar16 + fVar12));
      do {
        if (uVar11 == 8) {
          fVar16 = fVar12;
          if ((uVar2 >> 2 & 1) != 0) {
            fVar16 = fVar12 * fVar15;
          }
          uVar11 = 0;
          fVar17 = fVar16 * fVar13;
LAB_02e1f8a4:
          fVar16 = fVar17;
joined_r0x02e1fb08:
          if (0 < (int)param_4) {
            puVar4 = (undefined8 *)
                     (*param_3 + uVar1 * *(ushort *)(param_3 + 2) * 4 + (ulong)param_5 * 4);
            uVar7 = uVar10;
            puVar5 = param_6;
            if (uVar6 != 0) {
              puVar3 = puVar4;
              puVar9 = param_6;
              uVar8 = uVar6;
              do {
                puVar5 = puVar9 + 2;
                uVar7 = (ulong)((int)uVar7 - 4);
                puVar4 = puVar3 + 2;
                uVar14 = *puVar3;
                puVar9[1] = CONCAT44((float)((ulong)puVar9[1] >> 0x20) +
                                     fVar16 * (float)((ulong)puVar3[1] >> 0x20),
                                     (float)puVar9[1] + fVar16 * (float)puVar3[1]);
                *puVar9 = CONCAT44((float)((ulong)*puVar9 >> 0x20) +
                                   fVar16 * (float)((ulong)uVar14 >> 0x20),
                                   (float)*puVar9 + fVar16 * (float)uVar14);
                uVar8 = uVar8 - 1;
                puVar3 = puVar4;
                puVar9 = puVar5;
              } while (uVar8 != 0);
            }
            if (0xb < param_4 - 1) {
              do {
                uVar8 = (int)uVar7 - 0x10;
                uVar7 = (ulong)uVar8;
                uVar14 = *puVar4;
                puVar5[1] = CONCAT44((float)((ulong)puVar5[1] >> 0x20) +
                                     fVar16 * (float)((ulong)puVar4[1] >> 0x20),
                                     (float)puVar5[1] + fVar16 * (float)puVar4[1]);
                *puVar5 = CONCAT44((float)((ulong)*puVar5 >> 0x20) +
                                   fVar16 * (float)((ulong)uVar14 >> 0x20),
                                   (float)*puVar5 + fVar16 * (float)uVar14);
                uVar14 = puVar4[2];
                puVar5[3] = CONCAT44((float)((ulong)puVar5[3] >> 0x20) +
                                     fVar16 * (float)((ulong)puVar4[3] >> 0x20),
                                     (float)puVar5[3] + fVar16 * (float)puVar4[3]);
                puVar5[2] = CONCAT44((float)((ulong)puVar5[2] >> 0x20) +
                                     fVar16 * (float)((ulong)uVar14 >> 0x20),
                                     (float)puVar5[2] + fVar16 * (float)uVar14);
                uVar14 = puVar4[4];
                puVar5[5] = CONCAT44((float)((ulong)puVar5[5] >> 0x20) +
                                     fVar16 * (float)((ulong)puVar4[5] >> 0x20),
                                     (float)puVar5[5] + fVar16 * (float)puVar4[5]);
                puVar5[4] = CONCAT44((float)((ulong)puVar5[4] >> 0x20) +
                                     fVar16 * (float)((ulong)uVar14 >> 0x20),
                                     (float)puVar5[4] + fVar16 * (float)uVar14);
                puVar3 = puVar4 + 7;
                uVar14 = puVar4[6];
                puVar4 = puVar4 + 8;
                puVar5[7] = CONCAT44((float)((ulong)puVar5[7] >> 0x20) +
                                     fVar16 * (float)((ulong)*puVar3 >> 0x20),
                                     (float)puVar5[7] + fVar16 * (float)*puVar3);
                puVar5[6] = CONCAT44((float)((ulong)puVar5[6] >> 0x20) +
                                     fVar16 * (float)((ulong)uVar14 >> 0x20),
                                     (float)puVar5[6] + fVar16 * (float)uVar14);
                puVar5 = puVar5 + 8;
              } while (0 < (int)uVar8);
            }
          }
          uVar11 = uVar11 & (uVar2 ^ 0xffffffff);
          uVar1 = (ulong)((int)uVar1 + 1);
        }
        else {
          for (; (uVar2 & uVar11) != 0; uVar2 = uVar2 << 1) {
            if ((uVar2 >> 3 & 1) == 0) {
              fVar17 = fVar12;
              fVar16 = fVar12 * fVar15;
              if ((uVar2 >> 2 & 1) != 0) goto joined_r0x02e1fb08;
              goto LAB_02e1f8a4;
            }
          }
        }
        uVar2 = uVar2 << 1;
      } while (uVar11 != 0);
    }
  }
  else {
    if ((uVar6 & 0xf00) == 0x200) {
      memcpy(param_6,(void *)(*param_3 + (ulong)param_5 * 4),uVar10 << 2);
      return;
    }
    memset(param_6,0,-(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2);
    if (((char)param_3[1] != '\0') && (0 < (int)param_4)) {
      uVar1 = 0;
      uVar11 = (param_4 - 1 >> 2) + 1 & 3;
      fVar13 = 1.0 / SQRT((float)(uVar6 & 0xff));
      do {
        puVar4 = (undefined8 *)
                 (*param_3 + uVar1 * *(ushort *)(param_3 + 2) * 4 + (ulong)param_5 * 4);
        uVar7 = uVar10;
        if (uVar11 == 0) {
          puVar5 = param_6;
        }
        else {
          puVar3 = puVar4;
          puVar9 = param_6;
          uVar6 = uVar11;
          do {
            puVar5 = puVar9 + 2;
            uVar7 = (ulong)((int)uVar7 - 4);
            puVar4 = puVar3 + 2;
            uVar14 = *puVar3;
            puVar9[1] = CONCAT44((float)((ulong)puVar9[1] >> 0x20) +
                                 fVar13 * (float)((ulong)puVar3[1] >> 0x20),
                                 (float)puVar9[1] + fVar13 * (float)puVar3[1]);
            *puVar9 = CONCAT44((float)((ulong)*puVar9 >> 0x20) +
                               fVar13 * (float)((ulong)uVar14 >> 0x20),
                               (float)*puVar9 + fVar13 * (float)uVar14);
            uVar6 = uVar6 - 1;
            puVar3 = puVar4;
            puVar9 = puVar5;
          } while (uVar6 != 0);
        }
        if (0xb < param_4 - 1) {
          do {
            uVar6 = (int)uVar7 - 0x10;
            uVar7 = (ulong)uVar6;
            uVar14 = *puVar4;
            puVar5[1] = CONCAT44((float)((ulong)puVar5[1] >> 0x20) +
                                 fVar13 * (float)((ulong)puVar4[1] >> 0x20),
                                 (float)puVar5[1] + fVar13 * (float)puVar4[1]);
            *puVar5 = CONCAT44((float)((ulong)*puVar5 >> 0x20) +
                               fVar13 * (float)((ulong)uVar14 >> 0x20),
                               (float)*puVar5 + fVar13 * (float)uVar14);
            uVar14 = puVar4[2];
            puVar5[3] = CONCAT44((float)((ulong)puVar5[3] >> 0x20) +
                                 fVar13 * (float)((ulong)puVar4[3] >> 0x20),
                                 (float)puVar5[3] + fVar13 * (float)puVar4[3]);
            puVar5[2] = CONCAT44((float)((ulong)puVar5[2] >> 0x20) +
                                 fVar13 * (float)((ulong)uVar14 >> 0x20),
                                 (float)puVar5[2] + fVar13 * (float)uVar14);
            uVar14 = puVar4[4];
            puVar5[5] = CONCAT44((float)((ulong)puVar5[5] >> 0x20) +
                                 fVar13 * (float)((ulong)puVar4[5] >> 0x20),
                                 (float)puVar5[5] + fVar13 * (float)puVar4[5]);
            puVar5[4] = CONCAT44((float)((ulong)puVar5[4] >> 0x20) +
                                 fVar13 * (float)((ulong)uVar14 >> 0x20),
                                 (float)puVar5[4] + fVar13 * (float)uVar14);
            puVar3 = puVar4 + 7;
            uVar14 = puVar4[6];
            puVar4 = puVar4 + 8;
            puVar5[7] = CONCAT44((float)((ulong)puVar5[7] >> 0x20) +
                                 fVar13 * (float)((ulong)*puVar3 >> 0x20),
                                 (float)puVar5[7] + fVar13 * (float)*puVar3);
            puVar5[6] = CONCAT44((float)((ulong)puVar5[6] >> 0x20) +
                                 fVar13 * (float)((ulong)uVar14 >> 0x20),
                                 (float)puVar5[6] + fVar13 * (float)uVar14);
            puVar5 = puVar5 + 8;
          } while (0 < (int)uVar6);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(byte *)(param_3 + 1));
    }
  }
  return;
}


