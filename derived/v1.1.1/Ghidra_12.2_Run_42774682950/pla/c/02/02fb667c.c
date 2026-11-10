/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fb667c; name: FUN_02fb667c
 */


void FUN_02fb667c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  long lVar19;
  undefined *puVar20;
  int iVar21;
  long lVar22;
  undefined8 *puVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  byte *pbVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar37;
  float fVar38;
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  float fVar51;
  undefined1 auVar52 [16];
  uint uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  
  if ((int)param_1[1] != 0) {
    fVar56 = (float)param_1[3];
    fVar32 = (float)((ulong)param_1[3] >> 0x20);
    uVar11 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 2);
    fVar55 = (float)uVar11;
    fVar63 = (float)((ulong)uVar11 >> 0x20);
    fVar61 = (float)param_1[5];
    fVar35 = (float)((ulong)param_1[5] >> 0x20);
    uVar11 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 4);
    fVar57 = (float)uVar11;
    fVar60 = (float)((ulong)uVar11 >> 0x20);
    auVar52._0_4_ = -(uint)(*(float *)(param_3 + 2) <= fVar57);
    auVar52._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar60);
    auVar52._8_4_ = -(uint)(*(float *)(param_3 + 3) <= fVar61);
    auVar52._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= fVar35);
    lVar19 = param_2[1];
    auVar43._0_4_ = -(uint)(fVar55 <= *(float *)(param_3 + 4));
    auVar43._4_4_ = -(uint)(fVar63 <= *(float *)((long)param_3 + 0x24));
    auVar43._8_4_ = -(uint)(fVar56 <= *(float *)(param_3 + 5));
    auVar43._12_4_ = -(uint)(fVar32 <= *(float *)((long)param_3 + 0x2c));
    auVar41._12_4_ = fVar32;
    auVar41._0_12_ = *(undefined1 (*) [12])(param_1 + 2);
    auVar41 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar41,4);
    auVar42._12_4_ = fVar35;
    auVar42._0_12_ = *(undefined1 (*) [12])(param_1 + 4);
    auVar42 = NEON_fmax(*(undefined1 (*) [16])(param_3 + 6),auVar42,4);
    lVar22 = *param_1;
    auVar42 = auVar42 ^ (auVar42 ^ *(undefined1 (*) [16])(param_3 + 6)) & auVar52;
    auVar41 = auVar41 ^ (auVar41 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar43;
    param_3[7] = auVar42._8_8_;
    param_3[6] = auVar42._0_8_;
    param_3[9] = auVar41._8_8_;
    param_3[8] = auVar41._0_8_;
    puVar20 = PTR_PTR_0434a080;
    if ((CONCAT13((byte)((uint)auVar43._0_4_ >> 0x18) & (byte)((uint)auVar52._0_4_ >> 0x18),
                  CONCAT12((byte)((uint)auVar43._0_4_ >> 0x10) & (byte)((uint)auVar52._0_4_ >> 0x10)
                           ,CONCAT11((byte)((uint)auVar43._0_4_ >> 8) &
                                     (byte)((uint)auVar52._0_4_ >> 8),
                                     (byte)auVar43._0_4_ & (byte)auVar52._0_4_))) &
         CONCAT13((byte)((uint)auVar43._4_4_ >> 0x18) & (byte)((uint)auVar52._4_4_ >> 0x18),
                  CONCAT12((byte)((uint)auVar43._4_4_ >> 0x10) & (byte)((uint)auVar52._4_4_ >> 0x10)
                           ,CONCAT11((byte)((uint)auVar43._4_4_ >> 8) &
                                     (byte)((uint)auVar52._4_4_ >> 8),
                                     (byte)auVar43._4_4_ & (byte)auVar52._4_4_))) &
        CONCAT13((byte)((uint)auVar43._8_4_ >> 0x18) & (byte)((uint)auVar52._8_4_ >> 0x18),
                 CONCAT12((byte)((uint)auVar43._8_4_ >> 0x10) & (byte)((uint)auVar52._8_4_ >> 0x10),
                          CONCAT11((byte)((uint)auVar43._8_4_ >> 8) &
                                   (byte)((uint)auVar52._8_4_ >> 8),
                                   (byte)auVar43._8_4_ & (byte)auVar52._8_4_)))) != 0) {
      uVar30 = 0;
      pbVar31 = (byte *)(lVar22 + (long)param_1);
LAB_02fb674c:
      bVar6 = pbVar31[3];
      uVar53 = (uint)uVar30;
      if ((char)bVar6 < '\0') goto LAB_02fb6930;
      lVar22 = *param_3;
      lVar25 = *(long *)(lVar22 + 0xa8);
      if (lVar25 == 0) {
LAB_02fb67c4:
        lVar29 = *(long *)(lVar22 + 0x50);
        lVar26 = (long)(param_1 + 8) + (ulong)CONCAT11(bVar6,pbVar31[4]) * 0x60 + param_1[8];
        lVar27 = *(long *)(lVar29 + 0x40);
        lVar25 = lVar27 + lVar29 + 0x40;
        lVar2 = 0;
        if (lVar27 != 0) {
          lVar2 = lVar25;
        }
        iVar24 = (int)(lVar26 - lVar2 >> 5) * -0x55555555;
        if ((*(int *)(lVar22 + 0x94) != iVar24) || (*(int *)(lVar22 + 0x98) != iVar24)) {
          lVar25 = lVar25 + (long)iVar24 * 0x60;
          *(long *)(lVar22 + 0x60) = lVar25;
          *(int *)(lVar22 + 0x94) = iVar24;
          *(int *)(lVar22 + 0x98) = iVar24;
          lVar27 = *(long *)(lVar29 + 0x70);
          lVar2 = 0;
          if (lVar27 != 0) {
            lVar2 = lVar27 + lVar29 + 0x70;
          }
          *(ulong *)(lVar22 + 0x70) = lVar2 + (ulong)*(uint *)(lVar25 + 0x48) * 4;
          lVar27 = *(long *)(lVar29 + 0x80);
          lVar2 = 0;
          if (lVar27 != 0) {
            lVar2 = lVar27 + lVar29 + 0x80;
          }
          *(ulong *)(lVar22 + 0x78) = lVar2 + (ulong)*(byte *)(lVar25 + 0x5b) * 0x80000;
          lVar27 = *(long *)(lVar29 + 0x60);
          lVar2 = 0;
          if (lVar27 != 0) {
            lVar2 = lVar27 + lVar29 + 0x60;
          }
          lVar2 = lVar2 + (ulong)*(uint *)(lVar25 + 0x4c) * 2;
          *(long *)(lVar22 + 0x80) = lVar2;
          lVar28 = *(long *)(lVar29 + 0x90);
          lVar27 = 0;
          if (lVar28 != 0) {
            lVar27 = lVar28 + lVar29 + 0x90;
          }
          *(ulong *)(lVar22 + 0x88) = lVar27 + (ulong)*(uint *)(lVar25 + 0x54) * 4;
          *(uint *)(lVar22 + 0x90) = (uint)*(byte *)(lVar25 + 0x58);
          lVar28 = *(long *)(lVar29 + 0x50);
          lVar27 = 0;
          if (lVar28 != 0) {
            lVar27 = lVar28 + lVar29 + 0x50;
          }
          *(ulong *)(lVar22 + 0x68) = lVar27 + (ulong)*(uint *)(lVar25 + 0x50) * 4;
          uVar11 = *(undefined8 *)(lVar25 + 0x30);
          *(undefined8 *)(lVar22 + 0x38) = *(undefined8 *)(lVar25 + 0x38);
          *(undefined8 *)(lVar22 + 0x30) = uVar11;
          auVar14 = *(undefined1 (*) [12])(lVar25 + 0x3c);
          *(ulong *)(lVar22 + 0x48) = (ulong)auVar14._8_4_;
          *(long *)(lVar22 + 0x40) = auVar14._0_8_;
          *(ulong *)(lVar22 + 0x80) = lVar2 + (ulong)*(byte *)(lVar25 + 0x58) * -2;
        }
        FUN_02fb6bec(lVar26,param_2,param_3);
      }
      else {
        lVar26 = *(long *)(lVar25 + 0x20);
        lVar2 = 0;
        if (lVar26 != 0) {
          lVar2 = lVar26 + lVar25 + 0x20;
        }
        lVar29 = *(long *)(lVar2 + 0x48);
        lVar26 = 0;
        if (lVar29 != 0) {
          lVar26 = lVar29 + lVar2 + 0x48;
        }
        uVar5 = uVar53 + 0x1f;
        if (-1 < (int)uVar53) {
          uVar5 = uVar53;
        }
        if ((*(uint *)(lVar25 + 0x28 +
                      (long)((int)uVar5 >> 5) * 4 +
                      (long)(*(int *)(lVar26 + 0x68) << 3) * 4 + *(long *)(lVar25 + 0x28)) &
            1 << (ulong)(uVar53 & 0x1f)) != 0) goto LAB_02fb67c4;
      }
      goto LAB_02fb68f4;
    }
  }
  return;
LAB_02fb6930:
  uVar30 = (long)(int)uVar53 + 1;
  uVar1 = (long)(int)uVar53 + (ulong)((uint)pbVar31[4] | (bVar6 & 0x7f) << 8) * 2;
  pbVar31 = (byte *)((long)param_1 + uVar30 * 5 + *param_1);
  pbVar3 = (byte *)((long)param_1 + uVar1 * 5 + *param_1);
  bVar15 = *pbVar31 >> 4;
  bVar6 = *pbVar31 & 0xf;
  fVar35 = (fVar57 - fVar55) * 0.0044247787;
  fVar37 = (fVar60 - fVar63) * 0.0044247787;
  fVar38 = (fVar61 - fVar56) * 0.0044247787;
  bVar16 = pbVar31[2] >> 4;
  bVar17 = *pbVar3 >> 4;
  bVar4 = pbVar31[2] & 0xf;
  fVar58 = fVar57 - (float)(byte)(bVar6 * bVar6) * fVar35;
  fVar54 = fVar55 + (float)(byte)(bVar15 * bVar15) * fVar35;
  bVar6 = *pbVar3 & 0xf;
  bVar18 = pbVar31[1] >> 4;
  bVar15 = pbVar31[1] & 0xf;
  fVar40 = fVar55 + (float)(byte)(bVar17 * bVar17) * fVar35;
  fVar51 = fVar57 - (float)(byte)(bVar6 * bVar6) * fVar35;
  fVar59 = fVar60 - (float)(byte)(bVar15 * bVar15) * fVar37;
  fVar55 = fVar61 - (float)(byte)(bVar4 * bVar4) * fVar38;
  bVar6 = pbVar3[1] >> 4;
  fVar62 = fVar63 + (float)(byte)(bVar18 * bVar18) * fVar37;
  fVar35 = fVar63 + (float)(byte)(bVar6 * bVar6) * fVar37;
  bVar15 = pbVar3[2] >> 4;
  bVar6 = pbVar3[1] & 0xf;
  bVar4 = pbVar3[2] & 0xf;
  fVar32 = fVar56 + (float)(byte)(bVar15 * bVar15) * fVar38;
  fVar56 = fVar56 + (float)(byte)(bVar16 * bVar16) * fVar38;
  fVar37 = fVar60 - (float)(byte)(bVar6 * bVar6) * fVar37;
  fVar38 = fVar61 - (float)(byte)(bVar4 * bVar4) * fVar38;
  auVar39._0_4_ = -(uint)(fVar54 <= *(float *)(param_3 + 4));
  auVar39._4_4_ = -(uint)(fVar62 <= *(float *)((long)param_3 + 0x24));
  auVar39._8_4_ = -(uint)(fVar56 <= *(float *)(param_3 + 5));
  auVar39._12_4_ = -(uint)(0.0 <= *(float *)((long)param_3 + 0x2c));
  lVar22 = param_3[7];
  uVar44 = (undefined1)((ulong)lVar22 >> 8);
  uVar45 = (undefined1)((ulong)lVar22 >> 0x10);
  uVar46 = (undefined1)((ulong)lVar22 >> 0x18);
  uVar47 = (undefined1)((ulong)lVar22 >> 0x20);
  uVar48 = (undefined1)((ulong)lVar22 >> 0x28);
  uVar49 = (undefined1)((ulong)lVar22 >> 0x30);
  uVar50 = (undefined1)((ulong)lVar22 >> 0x38);
  auVar7[9] = uVar44;
  auVar7._0_9_ = *(unkbyte9 *)(param_3 + 6);
  auVar7[10] = uVar45;
  auVar7[0xb] = uVar46;
  auVar7[0xc] = uVar47;
  auVar7[0xd] = uVar48;
  auVar7[0xe] = uVar49;
  auVar7[0xf] = uVar50;
  auVar10._4_4_ = fVar59;
  auVar10._0_4_ = fVar58;
  auVar10._8_4_ = fVar55;
  auVar10._12_4_ = 0;
  auVar52 = NEON_fmax(auVar7,auVar10,4);
  auVar12._4_4_ = fVar62;
  auVar12._0_4_ = fVar54;
  auVar12._8_4_ = fVar56;
  auVar12._12_4_ = 0;
  auVar43 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar12,4);
  auVar36._0_4_ = -(uint)(*(float *)(param_3 + 2) <= fVar58);
  auVar36._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar59);
  auVar36._8_4_ = -(uint)(*(float *)(param_3 + 3) <= fVar55);
  auVar36._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
  uVar53 = CONCAT13((byte)((uint)auVar39._0_4_ >> 0x18) & (byte)((uint)auVar36._0_4_ >> 0x18),
                    CONCAT12((byte)((uint)auVar39._0_4_ >> 0x10) &
                             (byte)((uint)auVar36._0_4_ >> 0x10),
                             CONCAT11((byte)((uint)auVar39._0_4_ >> 8) &
                                      (byte)((uint)auVar36._0_4_ >> 8),
                                      (byte)auVar39._0_4_ & (byte)auVar36._0_4_)));
  auVar33._0_4_ = -(uint)(*(float *)(param_3 + 2) <= fVar51);
  auVar33._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar37);
  auVar33._8_4_ = -(uint)(*(float *)(param_3 + 3) <= fVar38);
  auVar33._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
  auVar34._0_4_ = -(uint)(fVar40 <= *(float *)(param_3 + 4));
  auVar34._4_4_ = -(uint)(fVar35 <= *(float *)((long)param_3 + 0x24));
  auVar34._8_4_ = -(uint)(fVar32 <= *(float *)(param_3 + 5));
  auVar34._12_4_ = -(uint)(0.0 <= *(float *)((long)param_3 + 0x2c));
  auVar8[9] = uVar44;
  auVar8._0_9_ = *(unkbyte9 *)(param_3 + 6);
  auVar8[10] = uVar45;
  auVar8[0xb] = uVar46;
  auVar8[0xc] = uVar47;
  auVar8[0xd] = uVar48;
  auVar8[0xe] = uVar49;
  auVar8[0xf] = uVar50;
  auVar52 = auVar52 ^ (auVar52 ^ auVar8) & auVar36;
  auVar43 = auVar43 ^ (auVar43 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar39;
  auVar9._4_4_ = fVar35;
  auVar9._0_4_ = fVar40;
  auVar9._8_4_ = fVar32;
  auVar9._12_4_ = 0;
  auVar41 = NEON_fmin(auVar43,auVar9,4);
  auVar13._4_4_ = fVar37;
  auVar13._0_4_ = fVar51;
  auVar13._8_4_ = fVar38;
  auVar13._12_4_ = 0;
  auVar42 = NEON_fmax(auVar52,auVar13,4);
  auVar42 = auVar42 ^ (auVar42 ^ auVar52) & auVar33;
  bVar6 = (uVar53 & (uint)(CONCAT17((byte)((uint)auVar39._4_4_ >> 0x18) &
                                    (byte)((uint)auVar36._4_4_ >> 0x18),
                                    CONCAT16((byte)((uint)auVar39._4_4_ >> 0x10) &
                                             (byte)((uint)auVar36._4_4_ >> 0x10),
                                             CONCAT15((byte)((uint)auVar39._4_4_ >> 8) &
                                                      (byte)((uint)auVar36._4_4_ >> 8),
                                                      CONCAT14((byte)auVar39._4_4_ &
                                                               (byte)auVar36._4_4_,uVar53)))) >>
                          0x20) &
          CONCAT13((byte)((uint)auVar39._8_4_ >> 0x18) & (byte)((uint)auVar36._8_4_ >> 0x18),
                   CONCAT12((byte)((uint)auVar39._8_4_ >> 0x10) &
                            (byte)((uint)auVar36._8_4_ >> 0x10),
                            CONCAT11((byte)((uint)auVar39._8_4_ >> 8) &
                                     (byte)((uint)auVar36._8_4_ >> 8),
                                     (byte)auVar39._8_4_ & (byte)auVar36._8_4_)))) != 0 |
          ((CONCAT13((byte)((uint)auVar34._0_4_ >> 0x18) & (byte)((uint)auVar33._0_4_ >> 0x18),
                     CONCAT12((byte)((uint)auVar34._0_4_ >> 0x10) &
                              (byte)((uint)auVar33._0_4_ >> 0x10),
                              CONCAT11((byte)((uint)auVar34._0_4_ >> 8) &
                                       (byte)((uint)auVar33._0_4_ >> 8),
                                       (byte)auVar34._0_4_ & (byte)auVar33._0_4_))) &
            CONCAT13((byte)((uint)auVar34._4_4_ >> 0x18) & (byte)((uint)auVar33._4_4_ >> 0x18),
                     CONCAT12((byte)((uint)auVar34._4_4_ >> 0x10) &
                              (byte)((uint)auVar33._4_4_ >> 0x10),
                              CONCAT11((byte)((uint)auVar34._4_4_ >> 8) &
                                       (byte)((uint)auVar33._4_4_ >> 8),
                                       (byte)auVar34._4_4_ & (byte)auVar33._4_4_))) &
           CONCAT13((byte)((uint)auVar34._8_4_ >> 0x18) & (byte)((uint)auVar33._8_4_ >> 0x18),
                    CONCAT12((byte)((uint)auVar34._8_4_ >> 0x10) &
                             (byte)((uint)auVar33._8_4_ >> 0x10),
                             CONCAT11((byte)((uint)auVar34._8_4_ >> 8) &
                                      (byte)((uint)auVar33._8_4_ >> 8),
                                      (byte)auVar34._8_4_ & (byte)auVar33._8_4_)))) != 0) << 1;
  auVar41 = auVar41 ^ (auVar41 ^ auVar43) & auVar34;
  param_3[7] = auVar42._8_8_;
  param_3[6] = auVar42._0_8_;
  param_3[9] = auVar41._8_8_;
  param_3[8] = auVar41._0_8_;
  fVar57 = fVar58;
  fVar60 = fVar59;
  fVar61 = fVar55;
  fVar55 = fVar54;
  fVar63 = fVar62;
  if (bVar6 != 1) {
    if (bVar6 == 3) {
      iVar21 = (int)param_2[1];
      lVar22 = *param_2;
      iVar24 = iVar21 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar21) {
        lVar22 = FUN_02fb5338(puVar20,iVar24,lVar22,iVar21,(long)param_2 + 0xc);
        iVar21 = (int)param_2[1];
        *param_2 = lVar22;
      }
      puVar23 = (undefined8 *)(lVar22 + (long)iVar21 * 0x30);
      *(int *)(param_2 + 1) = iVar24;
      *(int *)(puVar23 + 4) = (int)uVar1;
      puVar23[1] = (ulong)(uint)fVar32;
      *puVar23 = CONCAT44(fVar35,fVar40);
      puVar23[3] = (ulong)(uint)fVar38;
      puVar23[2] = CONCAT44(fVar37,fVar51);
    }
    else if (bVar6 == 2) {
      uVar30 = uVar1 & 0xffffffff;
      pbVar31 = pbVar3;
      fVar57 = fVar51;
      fVar60 = fVar37;
      fVar61 = fVar38;
      fVar55 = fVar40;
      fVar63 = fVar35;
      fVar56 = fVar32;
    }
    else {
LAB_02fb68f4:
      if ((int)param_2[1] <= (int)lVar19) {
        return;
      }
      iVar24 = (int)param_2[1] + -1;
      *(int *)(param_2 + 1) = iVar24;
      puVar23 = (undefined8 *)(*param_2 + (long)iVar24 * 0x30);
      uVar30 = (ulong)*(int *)(puVar23 + 4);
      pbVar31 = (byte *)((long)param_1 + uVar30 * 5 + *param_1);
      fVar57 = (float)puVar23[2];
      fVar60 = (float)((ulong)puVar23[2] >> 0x20);
      fVar61 = (float)puVar23[3];
      fVar55 = (float)*puVar23;
      fVar63 = (float)((ulong)*puVar23 >> 0x20);
      fVar56 = (float)puVar23[1];
    }
  }
  goto LAB_02fb674c;
}


