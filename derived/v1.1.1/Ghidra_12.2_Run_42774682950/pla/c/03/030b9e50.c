/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030b9e50; name: FUN_030b9e50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030b9e50(float *param_1,byte *param_2,undefined8 *param_3,undefined1 (*param_4) [16],
                 undefined8 *param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  byte bVar21;
  byte bVar22;
  float fVar18;
  int iVar19;
  byte bVar23;
  int iVar20;
  byte bVar27;
  byte bVar28;
  float fVar24;
  int iVar25;
  byte bVar29;
  float fVar26;
  float fVar30;
  float fVar31;
  float fVar33;
  undefined8 uVar32;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  
  uVar2 = _UNK_03889708;
  uVar1 = _DAT_03889700;
  bVar6 = param_2[4];
  uVar3 = 0;
  bVar21 = bVar6;
  do {
    if (bVar21 == 0) {
      bVar21 = 0;
      uVar7 = 0;
    }
    else {
      uVar11 = param_3[5];
      uVar9 = param_3[4];
      uVar13 = param_3[7];
      uVar12 = param_3[6];
      uVar7 = 0;
      uVar4 = 0;
      auVar8 = *param_4;
      pbVar5 = param_2 + 0x50;
      do {
        fVar14 = (float)uVar9 - (float)uVar12;
        fVar15 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar12 >> 0x20);
        fVar16 = (float)uVar11 - (float)uVar13;
        if ((*param_2 >> 6 & 1) == 0) {
          uVar17 = *(undefined8 *)(pbVar5 + -8);
          fVar18 = fVar14 * (float)*(undefined8 *)(param_2 + 0x10) +
                   (float)*param_3 * (float)*(undefined8 *)(pbVar5 + -0x10) +
                   (float)param_3[2] * (float)*(undefined8 *)pbVar5;
          fVar24 = fVar15 * (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) +
                   (float)((ulong)*param_3 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(pbVar5 + -0x10) >> 0x20) +
                   (float)((ulong)param_3[2] >> 0x20) *
                   (float)((ulong)*(undefined8 *)pbVar5 >> 0x20);
          fVar15 = fVar16 * (float)*(undefined8 *)(param_2 + 0x18) +
                   (float)param_3[1] * (float)uVar17 +
                   (float)param_3[3] * (float)*(undefined8 *)(pbVar5 + 8);
          fVar14 = fVar18 + fVar24 + fVar15;
          fVar15 = fVar18 + fVar24 + fVar15;
          uVar36 = (undefined4)((ulong)*(undefined8 *)(pbVar5 + 8) >> 0x20);
          uVar32 = CONCAT44(uVar36,uVar36);
        }
        else {
          fVar30 = (float)param_3[8];
          fVar26 = (float)((ulong)param_3[8] >> 0x20);
          fVar37 = (float)param_3[0xc];
          fVar38 = (float)((ulong)param_3[0xc] >> 0x20);
          fVar39 = (float)*(undefined8 *)(param_2 + 0x10);
          fVar40 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
          uVar17 = *(undefined8 *)(pbVar5 + -8);
          fVar31 = (float)param_3[10];
          fVar33 = (float)((ulong)param_3[10] >> 0x20);
          fVar41 = (float)*(undefined8 *)pbVar5;
          fVar42 = (float)((ulong)*(undefined8 *)pbVar5 >> 0x20);
          fVar43 = (float)*(undefined8 *)(pbVar5 + 8);
          fVar18 = (float)*(undefined8 *)(pbVar5 + -0x10);
          fVar24 = (float)((ulong)*(undefined8 *)(pbVar5 + -0x10) >> 0x20);
          fVar34 = (fVar14 - fVar30) * fVar39 +
                   ((float)*param_3 - fVar31) * fVar18 + ((float)param_3[2] - fVar37) * fVar41;
          fVar35 = (fVar15 - fVar26) * fVar40 +
                   ((float)((ulong)*param_3 >> 0x20) - fVar33) * fVar24 +
                   ((float)((ulong)param_3[2] >> 0x20) - fVar38) * fVar42;
          fVar15 = (fVar16 - (float)param_3[9]) * (float)*(undefined8 *)(param_2 + 0x18) +
                   ((float)param_3[1] - (float)param_3[0xb]) * (float)uVar17 +
                   ((float)param_3[3] - (float)param_3[0xd]) * fVar43;
          fVar14 = fVar34 + fVar35 + fVar15;
          fVar15 = fVar34 + fVar35 + fVar15;
          fVar34 = (float)((ulong)*(undefined8 *)(pbVar5 + 8) >> 0x20);
          fVar16 = fVar30 * fVar39 + fVar31 * fVar18 + fVar37 * fVar41;
          fVar24 = fVar26 * fVar40 + fVar33 * fVar24 + fVar38 * fVar42;
          fVar30 = (float)param_3[9] * (float)*(undefined8 *)(param_2 + 0x18) +
                   (float)param_3[0xb] * (float)uVar17 + (float)param_3[0xd] * fVar43;
          fVar18 = (fVar34 - (fVar16 + fVar24 + fVar30)) * (float)*(undefined8 *)(param_1 + 0x30);
          fVar16 = (fVar34 - (fVar16 + fVar24 + fVar30)) * (float)*(undefined8 *)(param_1 + 0x30);
          uVar32 = NEON_fmin(CONCAT44(fVar16,fVar18),CONCAT44(fVar16 * *param_1,fVar18 * *param_1),4
                            );
        }
        fVar15 = auVar8._0_4_ + fVar15;
        fVar14 = auVar8._0_4_ + fVar14;
        iVar19 = -(uint)((float)uVar32 <= fVar14);
        fVar16 = (float)((ulong)uVar32 >> 0x20);
        iVar25 = -(uint)(fVar16 <= fVar15);
        fVar14 = (float)uVar32 - fVar14;
        fVar16 = fVar16 - fVar15;
        bVar21 = (byte)((uint)iVar19 >> 8);
        bVar22 = (byte)((uint)iVar19 >> 0x10);
        bVar23 = (byte)((uint)iVar19 >> 0x18);
        iVar20 = CONCAT13(bVar23 & (byte)((ulong)uVar1 >> 0x18),
                          CONCAT12(bVar22 & (byte)((ulong)uVar1 >> 0x10),
                                   CONCAT11(bVar21 & (byte)((ulong)uVar1 >> 8),
                                            (byte)iVar19 & (byte)uVar1)));
        bVar27 = (byte)((uint)iVar25 >> 8);
        bVar28 = (byte)((uint)iVar25 >> 0x10);
        bVar29 = (byte)((uint)iVar25 >> 0x18);
        iVar19 = CONCAT13(bVar23 & (byte)((ulong)uVar2 >> 0x18),
                          CONCAT12(bVar22 & (byte)((ulong)uVar2 >> 0x10),
                                   CONCAT11(bVar21 & (byte)((ulong)uVar2 >> 8),
                                            (byte)iVar19 & (byte)uVar2)));
        fVar15 = *(float *)(param_6 + 4 + uVar4 * 4);
        if ((iVar20 + (int)(CONCAT17(bVar29 & (byte)((ulong)uVar1 >> 0x38),
                                     CONCAT16(bVar28 & (byte)((ulong)uVar1 >> 0x30),
                                              CONCAT15(bVar27 & (byte)((ulong)uVar1 >> 0x28),
                                                       CONCAT14((byte)iVar25 &
                                                                (byte)((ulong)uVar1 >> 0x20),iVar20)
                                                      ))) >> 0x20) +
             iVar19 + (int)(CONCAT17(bVar29 & (byte)((ulong)uVar2 >> 0x38),
                                     CONCAT16(bVar28 & (byte)((ulong)uVar2 >> 0x30),
                                              CONCAT15(bVar27 & (byte)((ulong)uVar2 >> 0x28),
                                                       CONCAT14((byte)iVar25 &
                                                                (byte)((ulong)uVar2 >> 0x20),iVar19)
                                                      ))) >> 0x20) == 0) || (fVar15 != 0.0)) {
          fVar18 = (float)((ulong)uVar17 >> 0x20);
          uVar10 = NEON_fmax(CONCAT44((float)((ulong)param_5[4] >> 0x20) * fVar15,
                                      (float)param_5[4] * fVar15),
                             CONCAT44(fVar16 * fVar18,fVar14 * fVar18),4);
          fVar18 = (float)uVar10;
          fVar24 = (float)*param_5;
          uVar10 = uVar10 ^ (uVar10 ^ param_5[1]) &
                            CONCAT44(-(uint)((float)((ulong)*param_5 >> 0x20) <
                                            (float)(uVar10 >> 0x20)),-(uint)(fVar24 < fVar18));
          *(float *)(param_5 + 2) = fVar18 + *(float *)(param_5 + 2);
          fVar30 = (float)uVar10;
          uVar36 = *(undefined4 *)(param_5 + 3);
          if (fVar24 < fVar18) {
            uVar36 = 0xffffffff;
          }
          *(undefined4 *)(param_5 + 3) = uVar36;
          *(float *)((long)param_5 + 0x14) = *(float *)((long)param_5 + 0x14) + fVar30;
          *(float *)(param_6 + 4 + uVar4 * 4) = fVar15 + fVar30;
          fVar15 = (float)(uVar10 >> 0x20);
          fVar24 = fVar15 * (float)((ulong)param_3[0xf] >> 0x20);
          fVar18 = fVar15 * (float)((ulong)param_3[0x11] >> 0x20);
          uVar9 = CONCAT44((float)((ulong)param_3[4] >> 0x20) +
                           (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fVar24,
                           (float)param_3[4] + (float)*(undefined8 *)(param_2 + 0x10) * fVar24);
          uVar11 = CONCAT44((float)((ulong)param_3[5] >> 0x20) +
                            (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) * fVar24,
                            (float)param_3[5] + (float)*(undefined8 *)(param_2 + 0x18) * fVar24);
          param_3[5] = uVar11;
          param_3[4] = uVar9;
          uVar12 = CONCAT44((float)((ulong)param_3[6] >> 0x20) -
                            (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fVar18,
                            (float)param_3[6] - (float)*(undefined8 *)(param_2 + 0x10) * fVar18);
          uVar13 = CONCAT44((float)((ulong)param_3[7] >> 0x20) -
                            (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) * fVar18,
                            (float)param_3[7] - (float)*(undefined8 *)(param_2 + 0x18) * fVar18);
          param_3[7] = uVar13;
          param_3[6] = uVar12;
          uVar17 = *(undefined8 *)(pbVar5 + -0x10);
          param_3[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                fVar24 * (float)((ulong)*(undefined8 *)(pbVar5 + -8) >> 0x20),
                                (float)param_3[1] +
                                fVar30 * (float)param_3[0xf] * (float)*(undefined8 *)(pbVar5 + -8));
          *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) +
                              fVar15 * (float)((ulong)param_3[0xe] >> 0x20) *
                              (float)((ulong)uVar17 >> 0x20),
                              (float)*param_3 + fVar30 * (float)param_3[0xe] * (float)uVar17);
          uVar17 = *(undefined8 *)pbVar5;
          param_3[3] = CONCAT44((float)((ulong)param_3[3] >> 0x20) +
                                fVar18 * (float)((ulong)*(undefined8 *)(pbVar5 + 8) >> 0x20),
                                (float)param_3[3] +
                                fVar30 * (float)param_3[0x11] * (float)*(undefined8 *)(pbVar5 + 8));
          param_3[2] = CONCAT44((float)((ulong)param_3[2] >> 0x20) +
                                fVar15 * (float)((ulong)param_3[0x10] >> 0x20) *
                                (float)((ulong)uVar17 >> 0x20),
                                (float)param_3[2] + fVar30 * (float)param_3[0x10] * (float)uVar17);
          param_3[0x14] =
               CONCAT44(fVar15 + (float)((ulong)param_3[0x14] >> 0x20),fVar30 + (float)param_3[0x14]
                       );
          bVar6 = param_2[4];
        }
        uVar7 = NEON_fmax(uVar7,CONCAT44(fVar16,fVar14),4);
        auVar8 = NEON_ext(auVar8,auVar8,4,1);
        uVar4 = uVar4 + 1;
        pbVar5 = pbVar5 + 0x20;
        bVar21 = bVar6;
      } while (uVar4 < bVar6);
    }
  } while ((uVar3 < 0xf) && (uVar3 = uVar3 + 1, 1.0 <= (float)uVar7));
  return;
}


