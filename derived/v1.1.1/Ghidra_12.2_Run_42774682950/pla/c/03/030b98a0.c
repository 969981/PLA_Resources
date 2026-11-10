/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030b98a0; name: FUN_030b98a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030b98a0(float *param_1,byte *param_2,undefined8 *param_3,undefined1 (*param_4) [16],
                 undefined8 *param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar17;
  byte bVar18;
  float fVar13;
  float fVar14;
  int iVar15;
  byte bVar19;
  int iVar16;
  byte bVar24;
  byte bVar25;
  float fVar20;
  undefined4 uVar21;
  int iVar22;
  byte bVar26;
  float fVar23;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  undefined8 uVar30;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  uVar2 = _UNK_03889708;
  uVar1 = _DAT_03889700;
  bVar5 = param_2[4];
  uVar3 = 0;
  bVar17 = bVar5;
  do {
    if (bVar17 == 0) {
      bVar17 = 0;
      uVar7 = 0;
    }
    else {
      auVar8 = *param_4;
      uVar7 = 0;
      uVar4 = 0;
      uVar11 = param_3[5];
      uVar9 = param_3[4];
      pbVar6 = param_2 + 0x40;
      do {
        fVar14 = (float)((ulong)uVar9 >> 0x20);
        if ((*param_2 >> 6 & 1) == 0) {
          uVar12 = *(undefined8 *)(pbVar6 + 8);
          fVar13 = (float)uVar9 * (float)*(undefined8 *)(param_2 + 0x10) +
                   (float)*param_3 * (float)*(undefined8 *)pbVar6;
          fVar20 = fVar14 * (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) +
                   (float)((ulong)*param_3 >> 0x20) * (float)((ulong)*(undefined8 *)pbVar6 >> 0x20);
          fVar27 = (float)uVar11 * (float)*(undefined8 *)(param_2 + 0x18) +
                   (float)param_3[1] * (float)uVar12;
          fVar14 = fVar13 + fVar20 + fVar27;
          fVar27 = fVar13 + fVar20 + fVar27;
          uVar21 = (undefined4)((ulong)*(undefined8 *)(pbVar6 + 0x18) >> 0x20);
          uVar30 = CONCAT44(uVar21,uVar21);
        }
        else {
          fVar23 = (float)param_3[8];
          fVar28 = (float)((ulong)param_3[8] >> 0x20);
          fVar29 = (float)param_3[10];
          fVar31 = (float)((ulong)param_3[10] >> 0x20);
          fVar34 = (float)*(undefined8 *)(param_2 + 0x10);
          fVar35 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
          uVar12 = *(undefined8 *)(pbVar6 + 8);
          fVar13 = (float)*(undefined8 *)pbVar6;
          fVar20 = (float)((ulong)*(undefined8 *)pbVar6 >> 0x20);
          fVar32 = ((float)uVar9 - fVar23) * fVar34 + ((float)*param_3 - fVar29) * fVar13;
          fVar33 = (fVar14 - fVar28) * fVar35 + ((float)((ulong)*param_3 >> 0x20) - fVar31) * fVar20
          ;
          fVar27 = ((float)uVar11 - (float)param_3[9]) * (float)*(undefined8 *)(param_2 + 0x18) +
                   ((float)param_3[1] - (float)param_3[0xb]) * (float)uVar12;
          fVar13 = fVar23 * fVar34 + fVar29 * fVar13;
          fVar23 = fVar28 * fVar35 + fVar31 * fVar20;
          fVar28 = (float)param_3[9] * (float)*(undefined8 *)(param_2 + 0x18) +
                   (float)param_3[0xb] * (float)uVar12;
          fVar14 = fVar32 + fVar33 + fVar27;
          fVar27 = fVar32 + fVar33 + fVar27;
          fVar29 = (float)((ulong)*(undefined8 *)(pbVar6 + 0x18) >> 0x20);
          fVar20 = (fVar29 - (fVar28 + fVar13 + fVar23)) * (float)*(undefined8 *)(param_1 + 0x30);
          fVar13 = (fVar29 - (fVar28 + fVar13 + fVar23)) * (float)*(undefined8 *)(param_1 + 0x30);
          uVar30 = NEON_fmin(CONCAT44(fVar13,fVar20),CONCAT44(fVar13 * *param_1,fVar20 * *param_1),4
                            );
        }
        fVar27 = auVar8._0_4_ + fVar27;
        fVar14 = auVar8._0_4_ + fVar14;
        iVar15 = -(uint)((float)uVar30 <= fVar14);
        fVar13 = (float)((ulong)uVar30 >> 0x20);
        iVar22 = -(uint)(fVar13 <= fVar27);
        fVar14 = (float)uVar30 - fVar14;
        fVar13 = fVar13 - fVar27;
        bVar17 = (byte)((uint)iVar15 >> 8);
        bVar18 = (byte)((uint)iVar15 >> 0x10);
        bVar19 = (byte)((uint)iVar15 >> 0x18);
        iVar16 = CONCAT13(bVar19 & (byte)((ulong)uVar1 >> 0x18),
                          CONCAT12(bVar18 & (byte)((ulong)uVar1 >> 0x10),
                                   CONCAT11(bVar17 & (byte)((ulong)uVar1 >> 8),
                                            (byte)iVar15 & (byte)uVar1)));
        bVar24 = (byte)((uint)iVar22 >> 8);
        bVar25 = (byte)((uint)iVar22 >> 0x10);
        bVar26 = (byte)((uint)iVar22 >> 0x18);
        iVar15 = CONCAT13(bVar19 & (byte)((ulong)uVar2 >> 0x18),
                          CONCAT12(bVar18 & (byte)((ulong)uVar2 >> 0x10),
                                   CONCAT11(bVar17 & (byte)((ulong)uVar2 >> 8),
                                            (byte)iVar15 & (byte)uVar2)));
        fVar27 = *(float *)(param_6 + 4 + uVar4 * 4);
        if ((iVar16 + (int)(CONCAT17(bVar26 & (byte)((ulong)uVar1 >> 0x38),
                                     CONCAT16(bVar25 & (byte)((ulong)uVar1 >> 0x30),
                                              CONCAT15(bVar24 & (byte)((ulong)uVar1 >> 0x28),
                                                       CONCAT14((byte)iVar22 &
                                                                (byte)((ulong)uVar1 >> 0x20),iVar16)
                                                      ))) >> 0x20) +
             iVar15 + (int)(CONCAT17(bVar26 & (byte)((ulong)uVar2 >> 0x38),
                                     CONCAT16(bVar25 & (byte)((ulong)uVar2 >> 0x30),
                                              CONCAT15(bVar24 & (byte)((ulong)uVar2 >> 0x28),
                                                       CONCAT14((byte)iVar22 &
                                                                (byte)((ulong)uVar2 >> 0x20),iVar15)
                                                      ))) >> 0x20) == 0) || (fVar27 != 0.0)) {
          fVar20 = (float)((ulong)uVar12 >> 0x20);
          uVar10 = NEON_fmax(CONCAT44((float)((ulong)param_5[4] >> 0x20) * fVar27,
                                      (float)param_5[4] * fVar27),
                             CONCAT44(fVar13 * fVar20,fVar14 * fVar20),4);
          fVar20 = (float)uVar10;
          fVar23 = (float)*param_5;
          uVar10 = uVar10 ^ (uVar10 ^ param_5[1]) &
                            CONCAT44(-(uint)((float)((ulong)*param_5 >> 0x20) <
                                            (float)(uVar10 >> 0x20)),-(uint)(fVar23 < fVar20));
          *(float *)(param_5 + 2) = fVar20 + *(float *)(param_5 + 2);
          fVar28 = (float)uVar10;
          uVar21 = *(undefined4 *)(param_5 + 3);
          if (fVar23 < fVar20) {
            uVar21 = 0xffffffff;
          }
          *(undefined4 *)(param_5 + 3) = uVar21;
          *(float *)((long)param_5 + 0x14) = *(float *)((long)param_5 + 0x14) + fVar28;
          *(float *)(param_6 + 4 + uVar4 * 4) = fVar27 + fVar28;
          fVar27 = (float)(uVar10 >> 0x20);
          fVar20 = fVar27 * (float)((ulong)param_3[0xf] >> 0x20);
          uVar9 = CONCAT44((float)((ulong)param_3[4] >> 0x20) +
                           (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fVar20,
                           (float)param_3[4] + (float)*(undefined8 *)(param_2 + 0x10) * fVar20);
          uVar11 = CONCAT44((float)((ulong)param_3[5] >> 0x20) +
                            (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) * fVar20,
                            (float)param_3[5] + (float)*(undefined8 *)(param_2 + 0x18) * fVar20);
          param_3[5] = uVar11;
          param_3[4] = uVar9;
          uVar12 = *(undefined8 *)pbVar6;
          param_3[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                fVar20 * (float)((ulong)*(undefined8 *)(pbVar6 + 8) >> 0x20),
                                (float)param_3[1] +
                                fVar28 * (float)param_3[0xf] * (float)*(undefined8 *)(pbVar6 + 8));
          *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) +
                              fVar27 * (float)((ulong)param_3[0xe] >> 0x20) *
                              (float)((ulong)uVar12 >> 0x20),
                              (float)*param_3 + fVar28 * (float)param_3[0xe] * (float)uVar12);
          param_3[0x14] =
               CONCAT44(fVar27 + (float)((ulong)param_3[0x14] >> 0x20),fVar28 + (float)param_3[0x14]
                       );
          bVar5 = param_2[4];
        }
        uVar7 = NEON_fmax(uVar7,CONCAT44(fVar13,fVar14),4);
        auVar8 = NEON_ext(auVar8,auVar8,4,1);
        uVar4 = uVar4 + 1;
        pbVar6 = pbVar6 + 0x20;
        bVar17 = bVar5;
      } while (uVar4 < bVar5);
    }
  } while ((uVar3 < 0xf) && (uVar3 = uVar3 + 1, 1.0 <= (float)uVar7));
  return;
}


