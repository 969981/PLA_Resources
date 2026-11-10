/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030b9a90; name: FUN_030b9a90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030b9a90(float *param_1,byte *param_2,undefined8 *param_3,undefined1 (*param_4) [16],
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
  float fVar11;
  float fVar12;
  int iVar13;
  byte bVar18;
  int iVar14;
  byte bVar16;
  byte bVar17;
  byte bVar23;
  byte bVar24;
  undefined8 uVar15;
  float fVar19;
  undefined4 uVar20;
  int iVar21;
  byte bVar25;
  float fVar22;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  undefined8 uVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  uVar2 = _UNK_03889708;
  uVar1 = _DAT_03889700;
  bVar4 = param_2[4];
  uVar3 = 0;
  bVar16 = bVar4;
  do {
    if (bVar16 == 0) {
      bVar16 = 0;
      uVar7 = 0;
    }
    else {
      auVar8 = *param_4;
      uVar7 = 0;
      uVar5 = 0;
      uVar9 = param_3[5];
      uVar15 = param_3[4];
      pbVar6 = param_2 + 0x40;
      do {
        fVar12 = (float)((ulong)uVar15 >> 0x20);
        if ((*param_2 >> 6 & 1) == 0) {
          uVar10 = *(undefined8 *)(pbVar6 + 8);
          fVar11 = (float)uVar15 * (float)*(undefined8 *)(param_2 + 0x10) +
                   (float)*param_3 * (float)*(undefined8 *)pbVar6;
          fVar19 = fVar12 * (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) +
                   (float)((ulong)*param_3 >> 0x20) * (float)((ulong)*(undefined8 *)pbVar6 >> 0x20);
          fVar26 = (float)uVar9 * (float)*(undefined8 *)(param_2 + 0x18) +
                   (float)param_3[1] * (float)uVar10;
          fVar12 = fVar11 + fVar19 + fVar26;
          fVar26 = fVar11 + fVar19 + fVar26;
          uVar20 = (undefined4)((ulong)*(undefined8 *)(pbVar6 + 0x18) >> 0x20);
          uVar29 = CONCAT44(uVar20,uVar20);
        }
        else {
          fVar22 = (float)param_3[8];
          fVar27 = (float)((ulong)param_3[8] >> 0x20);
          fVar28 = (float)param_3[10];
          fVar30 = (float)((ulong)param_3[10] >> 0x20);
          fVar33 = (float)*(undefined8 *)(param_2 + 0x10);
          fVar34 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
          uVar10 = *(undefined8 *)(pbVar6 + 8);
          fVar11 = (float)*(undefined8 *)pbVar6;
          fVar19 = (float)((ulong)*(undefined8 *)pbVar6 >> 0x20);
          fVar31 = ((float)uVar15 - fVar22) * fVar33 + ((float)*param_3 - fVar28) * fVar11;
          fVar32 = (fVar12 - fVar27) * fVar34 + ((float)((ulong)*param_3 >> 0x20) - fVar30) * fVar19
          ;
          fVar26 = ((float)uVar9 - (float)param_3[9]) * (float)*(undefined8 *)(param_2 + 0x18) +
                   ((float)param_3[1] - (float)param_3[0xb]) * (float)uVar10;
          fVar11 = fVar22 * fVar33 + fVar28 * fVar11;
          fVar22 = fVar27 * fVar34 + fVar30 * fVar19;
          fVar27 = (float)param_3[9] * (float)*(undefined8 *)(param_2 + 0x18) +
                   (float)param_3[0xb] * (float)uVar10;
          fVar12 = fVar31 + fVar32 + fVar26;
          fVar26 = fVar31 + fVar32 + fVar26;
          fVar28 = (float)((ulong)*(undefined8 *)(pbVar6 + 0x18) >> 0x20);
          fVar19 = (fVar28 - (fVar27 + fVar11 + fVar22)) * (float)*(undefined8 *)(param_1 + 0x30);
          fVar11 = (fVar28 - (fVar27 + fVar11 + fVar22)) * (float)*(undefined8 *)(param_1 + 0x30);
          uVar29 = NEON_fmin(CONCAT44(fVar11,fVar19),CONCAT44(fVar11 * *param_1,fVar19 * *param_1),4
                            );
        }
        fVar26 = auVar8._0_4_ + fVar26;
        fVar12 = auVar8._0_4_ + fVar12;
        iVar13 = -(uint)((float)uVar29 <= fVar12);
        fVar11 = (float)((ulong)uVar29 >> 0x20);
        iVar21 = -(uint)(fVar11 <= fVar26);
        fVar12 = (float)uVar29 - fVar12;
        fVar11 = fVar11 - fVar26;
        bVar16 = (byte)((uint)iVar13 >> 8);
        bVar17 = (byte)((uint)iVar13 >> 0x10);
        bVar18 = (byte)((uint)iVar13 >> 0x18);
        iVar14 = CONCAT13(bVar18 & (byte)((ulong)uVar1 >> 0x18),
                          CONCAT12(bVar17 & (byte)((ulong)uVar1 >> 0x10),
                                   CONCAT11(bVar16 & (byte)((ulong)uVar1 >> 8),
                                            (byte)iVar13 & (byte)uVar1)));
        bVar23 = (byte)((uint)iVar21 >> 8);
        bVar24 = (byte)((uint)iVar21 >> 0x10);
        bVar25 = (byte)((uint)iVar21 >> 0x18);
        iVar13 = CONCAT13(bVar18 & (byte)((ulong)uVar2 >> 0x18),
                          CONCAT12(bVar17 & (byte)((ulong)uVar2 >> 0x10),
                                   CONCAT11(bVar16 & (byte)((ulong)uVar2 >> 8),
                                            (byte)iVar13 & (byte)uVar2)));
        fVar26 = *(float *)(param_6 + 4 + uVar5 * 4);
        if ((iVar14 + (int)(CONCAT17(bVar25 & (byte)((ulong)uVar1 >> 0x38),
                                     CONCAT16(bVar24 & (byte)((ulong)uVar1 >> 0x30),
                                              CONCAT15(bVar23 & (byte)((ulong)uVar1 >> 0x28),
                                                       CONCAT14((byte)iVar21 &
                                                                (byte)((ulong)uVar1 >> 0x20),iVar14)
                                                      ))) >> 0x20) +
             iVar13 + (int)(CONCAT17(bVar25 & (byte)((ulong)uVar2 >> 0x38),
                                     CONCAT16(bVar24 & (byte)((ulong)uVar2 >> 0x30),
                                              CONCAT15(bVar23 & (byte)((ulong)uVar2 >> 0x28),
                                                       CONCAT14((byte)iVar21 &
                                                                (byte)((ulong)uVar2 >> 0x20),iVar13)
                                                      ))) >> 0x20) == 0) || (fVar26 != 0.0)) {
          fVar19 = (float)((ulong)uVar10 >> 0x20);
          uVar15 = NEON_fmax(CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x20) >> 0x20) *
                                      fVar26,(float)*(undefined8 *)(param_5 + 0x20) * fVar26),
                             CONCAT44(fVar11 * fVar19,fVar12 * fVar19),4);
          fVar22 = (float)uVar15;
          *(float *)(param_6 + 4 + uVar5 * 4) = fVar26 + fVar22;
          fVar26 = (float)((ulong)uVar15 >> 0x20);
          fVar19 = fVar26 * (float)((ulong)param_3[0xf] >> 0x20);
          uVar15 = CONCAT44((float)((ulong)param_3[4] >> 0x20) +
                            (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fVar19,
                            (float)param_3[4] + (float)*(undefined8 *)(param_2 + 0x10) * fVar19);
          uVar9 = CONCAT44((float)((ulong)param_3[5] >> 0x20) +
                           (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) * fVar19,
                           (float)param_3[5] + (float)*(undefined8 *)(param_2 + 0x18) * fVar19);
          param_3[5] = uVar9;
          param_3[4] = uVar15;
          uVar10 = *(undefined8 *)pbVar6;
          param_3[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                fVar19 * (float)((ulong)*(undefined8 *)(pbVar6 + 8) >> 0x20),
                                (float)param_3[1] +
                                fVar22 * (float)param_3[0xf] * (float)*(undefined8 *)(pbVar6 + 8));
          *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) +
                              fVar26 * (float)((ulong)param_3[0xe] >> 0x20) *
                              (float)((ulong)uVar10 >> 0x20),
                              (float)*param_3 + fVar22 * (float)param_3[0xe] * (float)uVar10);
          param_3[0x14] =
               CONCAT44(fVar26 + (float)((ulong)param_3[0x14] >> 0x20),fVar22 + (float)param_3[0x14]
                       );
          bVar4 = param_2[4];
        }
        uVar7 = NEON_fmax(uVar7,CONCAT44(fVar11,fVar12),4);
        auVar8 = NEON_ext(auVar8,auVar8,4,1);
        uVar5 = uVar5 + 1;
        pbVar6 = pbVar6 + 0x20;
        bVar16 = bVar4;
      } while (uVar5 < bVar4);
    }
  } while ((uVar3 < 0xf) && (uVar3 = uVar3 + 1, 1.0 <= (float)uVar7));
  return;
}


