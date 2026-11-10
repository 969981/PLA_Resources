/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030b9c50; name: FUN_030b9c50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030b9c50(float *param_1,byte *param_2,undefined8 *param_3,undefined1 (*param_4) [16],
                 long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  byte bVar20;
  byte bVar21;
  float fVar17;
  int iVar18;
  byte bVar22;
  int iVar19;
  byte bVar26;
  byte bVar27;
  float fVar23;
  int iVar24;
  byte bVar28;
  float fVar25;
  float fVar29;
  float fVar31;
  undefined8 uVar30;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  uVar2 = _UNK_03889708;
  uVar1 = _DAT_03889700;
  bVar4 = param_2[4];
  uVar3 = 0;
  bVar20 = bVar4;
  do {
    if (bVar20 == 0) {
      bVar20 = 0;
      uVar7 = 0;
    }
    else {
      uVar9 = param_3[5];
      uVar13 = param_3[4];
      uVar11 = param_3[7];
      uVar10 = param_3[6];
      uVar7 = 0;
      uVar5 = 0;
      auVar8 = *param_4;
      pbVar6 = param_2 + 0x50;
      do {
        fVar12 = (float)uVar13 - (float)uVar10;
        fVar14 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar10 >> 0x20);
        fVar15 = (float)uVar9 - (float)uVar11;
        if ((*param_2 >> 6 & 1) == 0) {
          uVar16 = *(undefined8 *)(pbVar6 + -8);
          fVar17 = fVar12 * (float)*(undefined8 *)(param_2 + 0x10) +
                   (float)*param_3 * (float)*(undefined8 *)(pbVar6 + -0x10) +
                   (float)param_3[2] * (float)*(undefined8 *)pbVar6;
          fVar23 = fVar14 * (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) +
                   (float)((ulong)*param_3 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(pbVar6 + -0x10) >> 0x20) +
                   (float)((ulong)param_3[2] >> 0x20) *
                   (float)((ulong)*(undefined8 *)pbVar6 >> 0x20);
          fVar14 = fVar15 * (float)*(undefined8 *)(param_2 + 0x18) +
                   (float)param_3[1] * (float)uVar16 +
                   (float)param_3[3] * (float)*(undefined8 *)(pbVar6 + 8);
          fVar12 = fVar17 + fVar23 + fVar14;
          fVar14 = fVar17 + fVar23 + fVar14;
          uVar35 = (undefined4)((ulong)*(undefined8 *)(pbVar6 + 8) >> 0x20);
          uVar30 = CONCAT44(uVar35,uVar35);
        }
        else {
          fVar32 = (float)param_3[8];
          fVar25 = (float)((ulong)param_3[8] >> 0x20);
          fVar36 = (float)param_3[0xc];
          fVar37 = (float)((ulong)param_3[0xc] >> 0x20);
          fVar38 = (float)*(undefined8 *)(param_2 + 0x10);
          fVar39 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
          uVar16 = *(undefined8 *)(pbVar6 + -8);
          fVar29 = (float)param_3[10];
          fVar31 = (float)((ulong)param_3[10] >> 0x20);
          fVar40 = (float)*(undefined8 *)pbVar6;
          fVar41 = (float)((ulong)*(undefined8 *)pbVar6 >> 0x20);
          fVar42 = (float)*(undefined8 *)(pbVar6 + 8);
          fVar17 = (float)*(undefined8 *)(pbVar6 + -0x10);
          fVar23 = (float)((ulong)*(undefined8 *)(pbVar6 + -0x10) >> 0x20);
          fVar33 = (fVar12 - fVar32) * fVar38 +
                   ((float)*param_3 - fVar29) * fVar17 + ((float)param_3[2] - fVar36) * fVar40;
          fVar34 = (fVar14 - fVar25) * fVar39 +
                   ((float)((ulong)*param_3 >> 0x20) - fVar31) * fVar23 +
                   ((float)((ulong)param_3[2] >> 0x20) - fVar37) * fVar41;
          fVar14 = (fVar15 - (float)param_3[9]) * (float)*(undefined8 *)(param_2 + 0x18) +
                   ((float)param_3[1] - (float)param_3[0xb]) * (float)uVar16 +
                   ((float)param_3[3] - (float)param_3[0xd]) * fVar42;
          fVar12 = fVar33 + fVar34 + fVar14;
          fVar14 = fVar33 + fVar34 + fVar14;
          fVar33 = (float)((ulong)*(undefined8 *)(pbVar6 + 8) >> 0x20);
          fVar15 = fVar32 * fVar38 + fVar29 * fVar17 + fVar36 * fVar40;
          fVar23 = fVar25 * fVar39 + fVar31 * fVar23 + fVar37 * fVar41;
          fVar32 = (float)param_3[9] * (float)*(undefined8 *)(param_2 + 0x18) +
                   (float)param_3[0xb] * (float)uVar16 + (float)param_3[0xd] * fVar42;
          fVar17 = (fVar33 - (fVar15 + fVar23 + fVar32)) * (float)*(undefined8 *)(param_1 + 0x30);
          fVar15 = (fVar33 - (fVar15 + fVar23 + fVar32)) * (float)*(undefined8 *)(param_1 + 0x30);
          uVar30 = NEON_fmin(CONCAT44(fVar15,fVar17),CONCAT44(fVar15 * *param_1,fVar17 * *param_1),4
                            );
        }
        fVar14 = auVar8._0_4_ + fVar14;
        fVar12 = auVar8._0_4_ + fVar12;
        iVar18 = -(uint)((float)uVar30 <= fVar12);
        fVar15 = (float)((ulong)uVar30 >> 0x20);
        iVar24 = -(uint)(fVar15 <= fVar14);
        fVar12 = (float)uVar30 - fVar12;
        fVar15 = fVar15 - fVar14;
        bVar20 = (byte)((uint)iVar18 >> 8);
        bVar21 = (byte)((uint)iVar18 >> 0x10);
        bVar22 = (byte)((uint)iVar18 >> 0x18);
        iVar19 = CONCAT13(bVar22 & (byte)((ulong)uVar1 >> 0x18),
                          CONCAT12(bVar21 & (byte)((ulong)uVar1 >> 0x10),
                                   CONCAT11(bVar20 & (byte)((ulong)uVar1 >> 8),
                                            (byte)iVar18 & (byte)uVar1)));
        bVar26 = (byte)((uint)iVar24 >> 8);
        bVar27 = (byte)((uint)iVar24 >> 0x10);
        bVar28 = (byte)((uint)iVar24 >> 0x18);
        iVar18 = CONCAT13(bVar22 & (byte)((ulong)uVar2 >> 0x18),
                          CONCAT12(bVar21 & (byte)((ulong)uVar2 >> 0x10),
                                   CONCAT11(bVar20 & (byte)((ulong)uVar2 >> 8),
                                            (byte)iVar18 & (byte)uVar2)));
        fVar14 = *(float *)(param_6 + 4 + uVar5 * 4);
        if ((iVar19 + (int)(CONCAT17(bVar28 & (byte)((ulong)uVar1 >> 0x38),
                                     CONCAT16(bVar27 & (byte)((ulong)uVar1 >> 0x30),
                                              CONCAT15(bVar26 & (byte)((ulong)uVar1 >> 0x28),
                                                       CONCAT14((byte)iVar24 &
                                                                (byte)((ulong)uVar1 >> 0x20),iVar19)
                                                      ))) >> 0x20) +
             iVar18 + (int)(CONCAT17(bVar28 & (byte)((ulong)uVar2 >> 0x38),
                                     CONCAT16(bVar27 & (byte)((ulong)uVar2 >> 0x30),
                                              CONCAT15(bVar26 & (byte)((ulong)uVar2 >> 0x28),
                                                       CONCAT14((byte)iVar24 &
                                                                (byte)((ulong)uVar2 >> 0x20),iVar18)
                                                      ))) >> 0x20) == 0) || (fVar14 != 0.0)) {
          fVar17 = (float)((ulong)uVar16 >> 0x20);
          uVar13 = NEON_fmax(CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x20) >> 0x20) *
                                      fVar14,(float)*(undefined8 *)(param_5 + 0x20) * fVar14),
                             CONCAT44(fVar15 * fVar17,fVar12 * fVar17),4);
          fVar17 = (float)uVar13;
          *(float *)(param_6 + 4 + uVar5 * 4) = fVar14 + fVar17;
          fVar14 = (float)((ulong)uVar13 >> 0x20);
          fVar32 = fVar14 * (float)((ulong)param_3[0xf] >> 0x20);
          fVar23 = fVar14 * (float)((ulong)param_3[0x11] >> 0x20);
          uVar13 = CONCAT44((float)((ulong)param_3[4] >> 0x20) +
                            (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fVar32,
                            (float)param_3[4] + (float)*(undefined8 *)(param_2 + 0x10) * fVar32);
          uVar9 = CONCAT44((float)((ulong)param_3[5] >> 0x20) +
                           (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) * fVar32,
                           (float)param_3[5] + (float)*(undefined8 *)(param_2 + 0x18) * fVar32);
          param_3[5] = uVar9;
          param_3[4] = uVar13;
          uVar10 = CONCAT44((float)((ulong)param_3[6] >> 0x20) -
                            (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fVar23,
                            (float)param_3[6] - (float)*(undefined8 *)(param_2 + 0x10) * fVar23);
          uVar11 = CONCAT44((float)((ulong)param_3[7] >> 0x20) -
                            (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) * fVar23,
                            (float)param_3[7] - (float)*(undefined8 *)(param_2 + 0x18) * fVar23);
          param_3[7] = uVar11;
          param_3[6] = uVar10;
          uVar16 = *(undefined8 *)(pbVar6 + -0x10);
          param_3[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                fVar32 * (float)((ulong)*(undefined8 *)(pbVar6 + -8) >> 0x20),
                                (float)param_3[1] +
                                fVar17 * (float)param_3[0xf] * (float)*(undefined8 *)(pbVar6 + -8));
          *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) +
                              fVar14 * (float)((ulong)param_3[0xe] >> 0x20) *
                              (float)((ulong)uVar16 >> 0x20),
                              (float)*param_3 + fVar17 * (float)param_3[0xe] * (float)uVar16);
          uVar16 = *(undefined8 *)pbVar6;
          param_3[3] = CONCAT44((float)((ulong)param_3[3] >> 0x20) +
                                fVar23 * (float)((ulong)*(undefined8 *)(pbVar6 + 8) >> 0x20),
                                (float)param_3[3] +
                                fVar17 * (float)param_3[0x11] * (float)*(undefined8 *)(pbVar6 + 8));
          param_3[2] = CONCAT44((float)((ulong)param_3[2] >> 0x20) +
                                fVar14 * (float)((ulong)param_3[0x10] >> 0x20) *
                                (float)((ulong)uVar16 >> 0x20),
                                (float)param_3[2] + fVar17 * (float)param_3[0x10] * (float)uVar16);
          param_3[0x14] =
               CONCAT44(fVar14 + (float)((ulong)param_3[0x14] >> 0x20),fVar17 + (float)param_3[0x14]
                       );
          bVar4 = param_2[4];
        }
        uVar7 = NEON_fmax(uVar7,CONCAT44(fVar15,fVar12),4);
        auVar8 = NEON_ext(auVar8,auVar8,4,1);
        uVar5 = uVar5 + 1;
        pbVar6 = pbVar6 + 0x20;
        bVar20 = bVar4;
      } while (uVar5 < bVar4);
    }
  } while ((uVar3 < 0xf) && (uVar3 = uVar3 + 1, 1.0 <= (float)uVar7));
  return;
}


