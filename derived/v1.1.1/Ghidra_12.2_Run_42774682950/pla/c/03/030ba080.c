/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ba080; name: FUN_030ba080
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030ba080(float *param_1,byte *param_2,undefined8 *param_3,undefined1 (*param_4) [16],
                 undefined8 *param_5,long param_6)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  byte bVar28;
  int iVar26;
  byte bVar29;
  byte bVar31;
  byte bVar32;
  int iVar30;
  byte bVar33;
  undefined8 uVar27;
  undefined8 uVar34;
  float fVar36;
  undefined8 uVar35;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar46;
  undefined8 uVar45;
  byte bVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  int iVar60;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  float fVar66;
  undefined1 auVar65 [16];
  
  uVar3 = _UNK_03889708;
  uVar2 = _DAT_03889700;
  uVar7 = (ulong)param_2[4];
  uVar4 = 0;
  do {
    if ((int)uVar7 == 0) {
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      uVar12 = param_3[5];
      uVar10 = param_3[4];
      uVar17 = param_3[7];
      uVar63 = param_3[6];
      uVar8 = 0;
      uVar5 = 0;
      auVar9 = *param_4;
      pfVar6 = (float *)(param_2 + 0x50);
      do {
        fVar19 = (float)uVar10 - (float)uVar63;
        fVar21 = (float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar63 >> 0x20);
        fVar23 = (float)uVar12 - (float)uVar17;
        fVar24 = auVar9._0_4_;
        if ((*param_2 >> 6 & 1) == 0) {
          uVar25 = *(undefined8 *)(pfVar6 + -2);
          uVar40 = (undefined4)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20);
          uVar35 = CONCAT44(uVar40,uVar40);
          fVar20 = fVar19 * (float)*(undefined8 *)(param_2 + 0x10) +
                   (float)*param_3 * (float)*(undefined8 *)(pfVar6 + -4) +
                   (float)param_3[2] * (float)*(undefined8 *)pfVar6;
          fVar22 = fVar21 * (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) +
                   (float)((ulong)*param_3 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(pfVar6 + -4) >> 0x20) +
                   (float)((ulong)param_3[2] >> 0x20) *
                   (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
          fVar21 = fVar23 * (float)*(undefined8 *)(param_2 + 0x18) +
                   (float)param_3[1] * (float)uVar25 +
                   (float)param_3[3] * (float)*(undefined8 *)(pfVar6 + 2);
          fVar19 = fVar20 + fVar22 + fVar21;
          fVar21 = fVar20 + fVar22 + fVar21;
        }
        else {
          fVar16 = (float)param_3[0xc];
          fVar18 = (float)((ulong)param_3[0xc] >> 0x20);
          fVar14 = (float)param_3[10];
          fVar15 = (float)((ulong)param_3[10] >> 0x20);
          uVar25 = *(undefined8 *)(pfVar6 + -2);
          fVar11 = (float)param_3[8];
          fVar13 = (float)((ulong)param_3[8] >> 0x20);
          fVar38 = (float)*(undefined8 *)(param_2 + 0x10);
          fVar36 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
          fVar37 = (float)*(undefined8 *)pfVar6;
          fVar41 = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
          fVar39 = (float)*(undefined8 *)(pfVar6 + 2);
          fVar48 = (float)*(undefined8 *)(pfVar6 + -4);
          fVar66 = (float)((ulong)*(undefined8 *)(pfVar6 + -4) >> 0x20);
          fVar42 = (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20);
          fVar20 = (fVar19 - fVar11) * fVar38 +
                   ((float)*param_3 - fVar14) * fVar48 + ((float)param_3[2] - fVar16) * fVar37;
          fVar22 = (fVar21 - fVar13) * fVar36 +
                   ((float)((ulong)*param_3 >> 0x20) - fVar15) * fVar66 +
                   ((float)((ulong)param_3[2] >> 0x20) - fVar18) * fVar41;
          fVar21 = (fVar23 - (float)param_3[9]) * (float)*(undefined8 *)(param_2 + 0x18) +
                   ((float)param_3[1] - (float)param_3[0xb]) * (float)uVar25 +
                   ((float)param_3[3] - (float)param_3[0xd]) * fVar39;
          fVar19 = fVar20 + fVar22 + fVar21;
          fVar21 = fVar20 + fVar22 + fVar21;
          fVar23 = fVar11 * fVar38 + fVar14 * fVar48 + fVar16 * fVar37;
          fVar22 = fVar13 * fVar36 + fVar15 * fVar66 + fVar18 * fVar41;
          fVar48 = (float)param_3[9] * (float)*(undefined8 *)(param_2 + 0x18) +
                   (float)param_3[0xb] * (float)uVar25 + (float)param_3[0xd] * fVar39;
          fVar20 = (fVar42 - (fVar23 + fVar22 + fVar48)) * (float)*(undefined8 *)(param_1 + 0x30);
          fVar23 = (fVar42 - (fVar23 + fVar22 + fVar48)) * (float)*(undefined8 *)(param_1 + 0x30);
          uVar35 = NEON_fmin(CONCAT44(fVar23,fVar20),CONCAT44(fVar23 * *param_1,fVar20 * *param_1),4
                            );
        }
        iVar26 = -(uint)((float)uVar35 <= fVar24 + fVar19);
        fVar23 = (float)((ulong)uVar35 >> 0x20);
        iVar30 = -(uint)(fVar23 <= fVar24 + fVar21);
        fVar19 = (float)uVar35 - (fVar24 + fVar19);
        fVar23 = fVar23 - (fVar24 + fVar21);
        bVar47 = (byte)((uint)iVar26 >> 8);
        bVar28 = (byte)((uint)iVar26 >> 0x10);
        bVar29 = (byte)((uint)iVar26 >> 0x18);
        iVar60 = CONCAT13(bVar29 & (byte)((ulong)uVar2 >> 0x18),
                          CONCAT12(bVar28 & (byte)((ulong)uVar2 >> 0x10),
                                   CONCAT11(bVar47 & (byte)((ulong)uVar2 >> 8),
                                            (byte)iVar26 & (byte)uVar2)));
        bVar31 = (byte)((uint)iVar30 >> 8);
        bVar32 = (byte)((uint)iVar30 >> 0x10);
        bVar33 = (byte)((uint)iVar30 >> 0x18);
        iVar26 = CONCAT13(bVar29 & (byte)((ulong)uVar3 >> 0x18),
                          CONCAT12(bVar28 & (byte)((ulong)uVar3 >> 0x10),
                                   CONCAT11(bVar47 & (byte)((ulong)uVar3 >> 8),
                                            (byte)iVar26 & (byte)uVar3)));
        fVar21 = *(float *)(param_6 + 4 + uVar5 * 4);
        if ((iVar60 + (int)(CONCAT17(bVar33 & (byte)((ulong)uVar2 >> 0x38),
                                     CONCAT16(bVar32 & (byte)((ulong)uVar2 >> 0x30),
                                              CONCAT15(bVar31 & (byte)((ulong)uVar2 >> 0x28),
                                                       CONCAT14((byte)iVar30 &
                                                                (byte)((ulong)uVar2 >> 0x20),iVar60)
                                                      ))) >> 0x20) +
             iVar26 + (int)(CONCAT17(bVar33 & (byte)((ulong)uVar3 >> 0x38),
                                     CONCAT16(bVar32 & (byte)((ulong)uVar3 >> 0x30),
                                              CONCAT15(bVar31 & (byte)((ulong)uVar3 >> 0x28),
                                                       CONCAT14((byte)iVar30 &
                                                                (byte)((ulong)uVar3 >> 0x20),iVar26)
                                                      ))) >> 0x20) == 0) || (fVar21 != 0.0)) {
          fVar20 = (float)((ulong)uVar25 >> 0x20);
          fVar48 = fVar19 * fVar20;
          uVar7 = NEON_fmax(CONCAT44((float)((ulong)param_5[4] >> 0x20) * fVar21,
                                     (float)param_5[4] * fVar21),CONCAT44(fVar23 * fVar20,fVar48),4)
          ;
          fVar20 = (float)uVar7;
          fVar22 = (float)*param_5;
          uVar7 = uVar7 ^ (uVar7 ^ param_5[1]) &
                          CONCAT44(-(uint)((float)((ulong)*param_5 >> 0x20) < (float)(uVar7 >> 0x20)
                                          ),-(uint)(fVar22 < fVar20));
          *(float *)(param_5 + 2) = fVar20 + *(float *)(param_5 + 2);
          fVar66 = (float)uVar7;
          uVar40 = *(undefined4 *)(param_5 + 3);
          if (fVar22 < fVar20) {
            uVar40 = 0xffffffff;
          }
          *(undefined4 *)(param_5 + 3) = uVar40;
          *(float *)((long)param_5 + 0x14) = *(float *)((long)param_5 + 0x14) + fVar66;
          *(float *)(param_6 + 4 + uVar5 * 4) = fVar21 + fVar66;
          uVar35 = param_3[0xf];
          uVar25 = param_3[0xe];
          uVar34 = param_3[0x11];
          uVar27 = param_3[0x10];
          fVar20 = (float)(uVar7 >> 0x20);
          fVar38 = fVar20 * (float)((ulong)uVar35 >> 0x20);
          fVar41 = fVar20 * (float)((ulong)uVar34 >> 0x20);
          fVar21 = (float)param_3[4] + (float)*(undefined8 *)(param_2 + 0x10) * fVar38;
          fVar22 = (float)((ulong)param_3[4] >> 0x20) +
                   (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fVar38;
          uVar10 = CONCAT44(fVar22,fVar21);
          fVar11 = (float)param_3[5] + (float)*(undefined8 *)(param_2 + 0x18) * fVar38;
          fVar13 = (float)((ulong)param_3[5] >> 0x20) +
                   (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) * fVar38;
          uVar12 = CONCAT44(fVar13,fVar11);
          param_3[5] = uVar12;
          param_3[4] = uVar10;
          fVar14 = (float)param_3[6] - (float)*(undefined8 *)(param_2 + 0x10) * fVar41;
          fVar15 = (float)((ulong)param_3[6] >> 0x20) -
                   (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fVar41;
          uVar63 = CONCAT44(fVar15,fVar14);
          fVar16 = (float)param_3[7] - (float)*(undefined8 *)(param_2 + 0x18) * fVar41;
          fVar18 = (float)((ulong)param_3[7] >> 0x20) -
                   (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) * fVar41;
          uVar17 = CONCAT44(fVar18,fVar16);
          param_3[7] = uVar17;
          param_3[6] = uVar63;
          fVar42 = (float)*param_3 + fVar66 * (float)uVar25 * (float)*(undefined8 *)(pfVar6 + -4);
          fVar43 = (float)((ulong)*param_3 >> 0x20) +
                   fVar20 * (float)((ulong)uVar25 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(pfVar6 + -4) >> 0x20);
          fVar44 = (float)param_3[1] + fVar66 * (float)uVar35 * (float)*(undefined8 *)(pfVar6 + -2);
          fVar46 = (float)((ulong)param_3[1] >> 0x20) +
                   fVar38 * (float)((ulong)*(undefined8 *)(pfVar6 + -2) >> 0x20);
          param_3[1] = CONCAT44(fVar46,fVar44);
          *param_3 = CONCAT44(fVar43,fVar42);
          fVar38 = (float)param_3[2] + fVar66 * (float)uVar27 * (float)*(undefined8 *)pfVar6;
          fVar36 = (float)((ulong)param_3[2] >> 0x20) +
                   fVar20 * (float)((ulong)uVar27 >> 0x20) *
                   (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
          fVar37 = (float)param_3[3] + fVar66 * (float)uVar34 * (float)*(undefined8 *)(pfVar6 + 2);
          fVar41 = (float)((ulong)param_3[3] >> 0x20) +
                   fVar41 * (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20);
          fVar39 = fVar66 + (float)param_3[0x14];
          fVar20 = fVar20 + (float)((ulong)param_3[0x14] >> 0x20);
          param_3[0x14] = CONCAT44(fVar20,fVar39);
          param_3[3] = CONCAT44(fVar41,fVar37);
          param_3[2] = CONCAT44(fVar36,fVar38);
          if ((*param_2 >> 6 & 1) == 0) {
            uVar40 = (undefined4)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20);
            fVar54 = (fVar21 - fVar14) * *(float *)(param_2 + 0x10) +
                     fVar42 * pfVar6[-4] + fVar38 * (float)*(undefined8 *)pfVar6;
            fVar58 = (fVar22 - fVar15) * *(float *)(param_2 + 0x14) +
                     fVar43 * pfVar6[-3] + fVar36 * (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
            fVar61 = (fVar11 - fVar16) * *(float *)(param_2 + 0x18) +
                     fVar44 * pfVar6[-2] + fVar37 * (float)*(undefined8 *)(pfVar6 + 2);
            fVar55 = fVar54 + fVar58 + fVar61;
            fVar61 = fVar54 + fVar58 + fVar61;
            uVar64 = CONCAT44(uVar40,uVar40);
          }
          else {
            fVar52 = (float)param_3[0xc];
            fVar53 = (float)((ulong)param_3[0xc] >> 0x20);
            fVar50 = (float)param_3[10];
            fVar51 = (float)((ulong)param_3[10] >> 0x20);
            fVar56 = (float)*(undefined8 *)(param_2 + 0x10);
            fVar59 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
            fVar54 = (float)*(undefined8 *)pfVar6;
            fVar58 = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
            fVar62 = (float)*(undefined8 *)(pfVar6 + 2);
            fVar57 = ((fVar21 - fVar14) - *(float *)(param_3 + 8)) * fVar56 +
                     (fVar42 - fVar50) * pfVar6[-4] + (fVar38 - fVar52) * fVar54;
            fVar49 = ((fVar22 - fVar15) - *(float *)((long)param_3 + 0x44)) * fVar59 +
                     (fVar43 - fVar51) * pfVar6[-3] + (fVar36 - fVar53) * fVar58;
            fVar61 = ((fVar11 - fVar16) - *(float *)(param_3 + 9)) *
                     (float)*(undefined8 *)(param_2 + 0x18) +
                     (fVar44 - (float)param_3[0xb]) * pfVar6[-2] +
                     (fVar37 - (float)param_3[0xd]) * fVar62;
            fVar55 = fVar57 + fVar49 + fVar61;
            fVar61 = fVar57 + fVar49 + fVar61;
            fVar57 = (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20);
            fVar54 = *(float *)(param_3 + 8) * fVar56 + fVar50 * pfVar6[-4] + fVar52 * fVar54;
            fVar49 = *(float *)((long)param_3 + 0x44) * fVar59 +
                     fVar51 * pfVar6[-3] + fVar53 * fVar58;
            fVar62 = *(float *)(param_3 + 9) * (float)*(undefined8 *)(param_2 + 0x18) +
                     (float)param_3[0xb] * pfVar6[-2] + (float)param_3[0xd] * fVar62;
            fVar58 = (fVar57 - (fVar54 + fVar49 + fVar62)) * (float)*(undefined8 *)(param_1 + 0x30);
            fVar54 = (fVar57 - (fVar54 + fVar49 + fVar62)) * (float)*(undefined8 *)(param_1 + 0x30);
            uVar64 = NEON_fmin(CONCAT44(fVar54,fVar58),CONCAT44(fVar54 * *param_1,fVar58 * *param_1)
                               ,4);
          }
          fVar61 = fVar24 + fVar61;
          fVar24 = fVar24 + fVar55;
          fVar54 = (float)uVar64;
          fVar58 = (float)((ulong)uVar64 >> 0x20);
          if ((fVar66 < fVar48) &&
             (((fVar24 < fVar54 && fVar61 < fVar58) && fVar24 < fVar54) && fVar61 < fVar58)) {
            bVar47 = -(param_2[2] == 2);
            fVar50 = (float)CONCAT13((byte)((ulong)uVar27 >> 0x18) & bVar47,
                                     CONCAT12((byte)((ulong)uVar27 >> 0x10) & bVar47,
                                              CONCAT11((byte)((ulong)uVar27 >> 8) & bVar47,
                                                       (byte)uVar27 & bVar47)));
            uVar63 = CONCAT17((byte)((ulong)uVar27 >> 0x38) & bVar47,
                              CONCAT16((byte)((ulong)uVar27 >> 0x30) & bVar47,
                                       CONCAT15((byte)((ulong)uVar27 >> 0x28) & bVar47,
                                                CONCAT14((byte)((ulong)uVar27 >> 0x20) & bVar47,
                                                         fVar50))));
            fVar52 = (float)CONCAT13((byte)((ulong)uVar34 >> 0x18) & bVar47,
                                     CONCAT12((byte)((ulong)uVar34 >> 0x10) & bVar47,
                                              CONCAT11((byte)((ulong)uVar34 >> 8) & bVar47,
                                                       (byte)uVar34 & bVar47)));
            uVar17 = CONCAT17((byte)((ulong)uVar34 >> 0x38) & bVar47,
                              CONCAT16((byte)((ulong)uVar34 >> 0x30) & bVar47,
                                       CONCAT15((byte)((ulong)uVar34 >> 0x28) & bVar47,
                                                CONCAT14((byte)((ulong)uVar34 >> 0x20) & bVar47,
                                                         fVar52))));
            fVar62 = (float)CONCAT13((byte)((ulong)uVar25 >> 0x18) & ~bVar47,
                                     CONCAT12((byte)((ulong)uVar25 >> 0x10) & ~bVar47,
                                              CONCAT11((byte)((ulong)uVar25 >> 8) & ~bVar47,
                                                       (byte)uVar25 & ~bVar47)));
            uVar10 = CONCAT17((byte)((ulong)uVar25 >> 0x38) & ~bVar47,
                              CONCAT16((byte)((ulong)uVar25 >> 0x30) & ~bVar47,
                                       CONCAT15((byte)((ulong)uVar25 >> 0x28) & ~bVar47,
                                                CONCAT14((byte)((ulong)uVar25 >> 0x20) & ~bVar47,
                                                         fVar62))));
            fVar55 = (float)CONCAT13((byte)((ulong)uVar35 >> 0x18) & ~bVar47,
                                     CONCAT12((byte)((ulong)uVar35 >> 0x10) & ~bVar47,
                                              CONCAT11((byte)((ulong)uVar35 >> 8) & ~bVar47,
                                                       (byte)uVar35 & ~bVar47)));
            uVar12 = CONCAT17((byte)((ulong)uVar35 >> 0x38) & ~bVar47,
                              CONCAT16((byte)((ulong)uVar35 >> 0x30) & ~bVar47,
                                       CONCAT15((byte)((ulong)uVar35 >> 0x28) & ~bVar47,
                                                CONCAT14((byte)((ulong)uVar35 >> 0x20) & ~bVar47,
                                                         fVar55))));
            param_3[0xf] = uVar12;
            param_3[0xe] = uVar10;
            param_3[0x11] = uVar17;
            param_3[0x10] = uVar63;
            fVar48 = (float)*(undefined8 *)(pfVar6 + -4);
            fVar66 = (float)((ulong)*(undefined8 *)(pfVar6 + -4) >> 0x20);
            fVar51 = (float)((ulong)uVar63 >> 0x20);
            fVar53 = (float)((ulong)uVar17 >> 0x20);
            fVar57 = (float)((ulong)uVar10 >> 0x20);
            fVar56 = fVar62 * fVar48 * fVar48 + fVar50 * *pfVar6 * *pfVar6;
            fVar59 = fVar57 * fVar66 * fVar66 + fVar51 * pfVar6[1] * pfVar6[1];
            fVar48 = fVar55 * (float)*(undefined8 *)(pfVar6 + -2) *
                              (float)*(undefined8 *)(pfVar6 + -2) + fVar52 * pfVar6[2] * pfVar6[2];
            fVar49 = (float)((ulong)uVar12 >> 0x20);
            fVar66 = fVar53 + fVar49;
            auVar65._4_4_ = fVar59;
            auVar65._0_4_ = fVar56;
            auVar65._8_4_ = fVar48;
            auVar65._12_4_ = fVar66;
            auVar1._4_4_ = fVar59;
            auVar1._0_4_ = fVar56;
            auVar1._8_4_ = fVar48;
            auVar1._12_4_ = fVar66;
            auVar65 = NEON_ext(auVar65,auVar1,8,1);
            fVar66 = auVar65._0_4_ + auVar65._4_4_;
            fVar48 = fVar56 + fVar59 + fVar66;
            fVar66 = fVar56 + fVar59 + fVar66;
            uVar12 = CONCAT44(fVar66,fVar48);
            uVar63 = NEON_frecpe(uVar12,4);
            uVar10 = NEON_frecps(uVar12,uVar63,4);
            fVar56 = (float)uVar63 * (float)uVar10;
            fVar59 = (float)((ulong)uVar63 >> 0x20) * (float)((ulong)uVar10 >> 0x20);
            uVar10 = NEON_frecps(uVar12,CONCAT44(fVar59,fVar56),4);
            iVar26 = -(uint)(fVar48 == 0.0);
            iVar60 = -(uint)(fVar66 == 0.0);
            uVar7 = CONCAT44(fVar59 * (float)((ulong)uVar10 >> 0x20),fVar56 * (float)uVar10) &
                    CONCAT17(~(byte)((uint)iVar60 >> 0x18),
                             CONCAT16(~(byte)((uint)iVar60 >> 0x10),
                                      CONCAT15(~(byte)((uint)iVar60 >> 8),
                                               CONCAT14(~(byte)iVar60,
                                                        CONCAT13(~(byte)((uint)iVar26 >> 0x18),
                                                                 CONCAT12(~(byte)((uint)iVar26 >>
                                                                                 0x10),
                                                                          CONCAT11(~(byte)((uint)
                                                  iVar26 >> 8),~(byte)iVar26)))))));
            fVar24 = (fVar54 - fVar24) * (float)uVar7;
            fVar48 = (fVar58 - fVar61) * (float)(uVar7 >> 0x20);
            fVar49 = fVar49 * fVar48;
            fVar53 = fVar53 * fVar48;
            uVar10 = CONCAT44(fVar22 + (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) *
                                       fVar49,
                              fVar21 + (float)*(undefined8 *)(param_2 + 0x10) * fVar49);
            uVar12 = CONCAT44(fVar13 + (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) *
                                       fVar49,
                              fVar11 + (float)*(undefined8 *)(param_2 + 0x18) * fVar49);
            param_3[5] = uVar12;
            param_3[4] = uVar10;
            uVar63 = CONCAT44(fVar15 - (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) *
                                       fVar53,
                              fVar14 - (float)*(undefined8 *)(param_2 + 0x10) * fVar53);
            uVar17 = CONCAT44(fVar18 - (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) *
                                       fVar53,
                              fVar16 - (float)*(undefined8 *)(param_2 + 0x18) * fVar53);
            param_3[7] = uVar17;
            param_3[6] = uVar63;
            uVar64 = *(undefined8 *)(pfVar6 + -4);
            param_3[1] = CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(pfVar6 + -2) >> 0x20) *
                                           fVar49,
                                  fVar44 + (float)*(undefined8 *)(pfVar6 + -2) * fVar55 * fVar24);
            *param_3 = CONCAT44(fVar43 + (float)((ulong)uVar64 >> 0x20) * fVar57 * fVar48,
                                fVar42 + (float)uVar64 * fVar62 * fVar24);
            uVar45 = *(undefined8 *)(pfVar6 + 2);
            uVar64 = *(undefined8 *)pfVar6;
            param_3[0x14] = CONCAT44(fVar20 + fVar48,fVar39 + fVar24);
            param_3[0xf] = uVar35;
            param_3[0xe] = uVar25;
            param_3[0x11] = uVar34;
            param_3[0x10] = uVar27;
            param_3[3] = CONCAT44(fVar41 + fVar53 * (float)((ulong)uVar45 >> 0x20),
                                  fVar37 + fVar52 * fVar24 * (float)uVar45);
            param_3[2] = CONCAT44(fVar36 + fVar51 * fVar48 * (float)((ulong)uVar64 >> 0x20),
                                  fVar38 + fVar50 * fVar24 * (float)uVar64);
          }
        }
        uVar8 = NEON_fmax(uVar8,CONCAT44(fVar23,fVar19),4);
        uVar7 = (ulong)param_2[4];
        auVar9 = NEON_ext(auVar9,auVar9,4,1);
        uVar5 = uVar5 + 1;
        pfVar6 = pfVar6 + 8;
      } while (uVar5 < uVar7);
    }
  } while ((uVar4 < 0xf) && (uVar4 = uVar4 + 1, 1.0 <= (float)uVar8));
  return;
}


