/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7cfa8; name: FUN_02f7cfa8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f7cfa8(long *param_1,undefined8 *param_2,ulong *param_3,long param_4)

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte bVar20;
  byte bVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulong uVar28;
  float fVar29;
  uint uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  byte bVar34;
  byte bVar45;
  byte bVar46;
  float fVar35;
  int iVar36;
  byte bVar48;
  byte bVar50;
  byte bVar51;
  ulong uVar37;
  undefined1 auVar38 [12];
  undefined1 auVar39 [12];
  uint uVar53;
  uint uVar54;
  uint uVar56;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  byte bVar47;
  int iVar49;
  byte bVar52;
  int iVar55;
  int iVar57;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  int iVar58;
  int iVar61;
  int iVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  ulong local_1068;
  uint local_1060 [2];
  undefined8 auStack_1058 [255];
  undefined1 local_860 [8];
  ulong auStack_858 [255];
  int local_60;
  
  uVar19 = _UNK_03889d78;
  uVar18 = _DAT_03889d70;
  uVar17 = _UNK_03889708;
  uVar16 = _DAT_03889700;
  uVar15 = _UNK_03889088;
  uVar14 = _DAT_03889080;
  bVar20 = *(byte *)(param_4 + 0x10);
  bVar21 = *(byte *)(param_4 + 0x11);
  if (((bVar21 & bVar20) == 0) && (*(char *)(*(long *)(param_4 + 0x88) + 0x18) == '\0')) {
    fVar11 = *(float *)(param_2 + 2);
    fVar12 = *(float *)((long)param_2 + 0x14);
    fVar13 = *(float *)(param_2 + 3);
    fVar25 = (float)*param_2;
    fVar26 = (float)((ulong)*param_2 >> 0x20);
    fVar27 = (float)param_2[1];
    local_1068 = *param_3;
    local_1060[0] = 2;
    local_860._0_4_ = 0;
    local_60 = 1;
    uVar28 = local_1068;
    do {
      while( true ) {
        lVar23 = (long)local_60;
        *(ulong *)((long)auStack_858 + lVar23 * 4) = uVar28;
        *(ulong *)(local_860 + lVar23 * 4) = local_1068;
        uVar30 = local_60 + 3;
        uVar54 = uVar30 & 0xfffffffc;
        fVar35 = (float)local_1068;
        fVar29 = (float)(uVar28 >> 0x20);
        if ((int)uVar54 < 0x81) {
          uVar24 = CONCAT44(uVar30,uVar30) & 0xfffffffcfffffffc;
          uVar37 = local_1068 & 0xffffff00ffffff00;
          uVar53 = (uint)(float)uVar28 & 0xffffff00;
          uVar56 = (uint)fVar29 & 0xffffff00;
          auVar31[0] = (undefined1)uVar24;
          auVar31[1] = (byte)(uVar24 >> 8) | (byte)(uVar37 >> 8);
          auVar31[2] = (byte)(uVar24 >> 0x10) | (byte)(uVar37 >> 0x10);
          auVar31[3] = (byte)(uVar24 >> 0x18) | (byte)(uVar37 >> 0x18);
          auVar31[4] = (undefined1)(uVar24 >> 0x20);
          auVar31[5] = (byte)(uVar24 >> 0x28) | (byte)(uVar37 >> 0x28);
          auVar31[6] = (byte)(uVar24 >> 0x30) | (byte)(uVar37 >> 0x30);
          auVar31[7] = (byte)(uVar24 >> 0x38) | (byte)(uVar37 >> 0x38);
          auVar31[8] = (undefined1)uVar54;
          bVar34 = (byte)(uVar54 >> 8);
          auVar31[9] = bVar34 | (byte)(uVar53 >> 8);
          bVar45 = (byte)(uVar54 >> 0x10);
          auVar31[10] = bVar45 | (byte)(uVar53 >> 0x10);
          bVar46 = (byte)(uVar54 >> 0x18);
          auVar31[0xb] = bVar46 | (byte)(uVar53 >> 0x18);
          auVar31[0xc] = auVar31[8];
          auVar31[0xd] = bVar34 | (byte)(uVar56 >> 8);
          auVar31[0xe] = bVar45 | (byte)(uVar56 >> 0x10);
          auVar31[0xf] = bVar46 | (byte)(uVar56 >> 0x18);
          if (3 < (int)uVar54) {
            auVar60._4_12_ = stack0xfffffffffffff7a4;
            auVar60._0_4_ = local_860._0_4_;
            uVar24 = auVar60._0_8_ & 0xffffff00ffffff00;
            uVar54 = local_860._8_4_ & 0xffffff00;
            uVar53 = local_860._12_4_ & 0xffffff00;
            auVar65[1] = (byte)(uVar24 >> 8) | (byte)((ulong)uVar18 >> 8);
            auVar65[0] = (char)uVar18;
            auVar65[2] = (byte)(uVar24 >> 0x10) | (byte)((ulong)uVar18 >> 0x10);
            auVar65[3] = (byte)(uVar24 >> 0x18) | (byte)((ulong)uVar18 >> 0x18);
            auVar65[4] = (char)((ulong)uVar18 >> 0x20);
            auVar65[5] = (byte)(uVar24 >> 0x28) | (byte)((ulong)uVar18 >> 0x28);
            auVar65[6] = (byte)(uVar24 >> 0x30) | (byte)((ulong)uVar18 >> 0x30);
            auVar65[7] = (byte)(uVar24 >> 0x38) | (byte)((ulong)uVar18 >> 0x38);
            auVar65[8] = (char)uVar19;
            auVar65[9] = (byte)(uVar54 >> 8) | (byte)((ulong)uVar19 >> 8);
            auVar65[10] = (byte)(uVar54 >> 0x10) | (byte)((ulong)uVar19 >> 0x10);
            auVar65[0xb] = (byte)(uVar54 >> 0x18) | (byte)((ulong)uVar19 >> 0x18);
            auVar65[0xc] = (char)((ulong)uVar19 >> 0x20);
            auVar65[0xd] = (byte)(uVar53 >> 8) | (byte)((ulong)uVar19 >> 0x28);
            auVar65[0xe] = (byte)(uVar53 >> 0x10) | (byte)((ulong)uVar19 >> 0x30);
            auVar65[0xf] = (byte)(uVar53 >> 0x18) | (byte)((ulong)uVar19 >> 0x38);
            auVar31 = NEON_smin(auVar65,auVar31,4);
            if (7 < uVar30) {
              auVar40._8_8_ = uVar15;
              auVar40._0_8_ = uVar14;
              lVar23 = 0x81;
              do {
                uVar54 = (uint)*(undefined8 *)(local_1060 + lVar23 * 4) & 0xffffff00;
                uVar53 = (uint)((ulong)*(undefined8 *)(local_1060 + lVar23 * 4) >> 0x20) &
                         0xffffff00;
                uVar56 = (uint)auStack_1058[lVar23 * 2] & 0xffffff00;
                uVar7 = (uint)((ulong)auStack_1058[lVar23 * 2] >> 0x20) & 0xffffff00;
                auVar41._0_4_ = auVar40._0_4_ + 4;
                auVar41._4_4_ = auVar40._4_4_ + 4;
                auVar41._8_4_ = auVar40._8_4_ + 4;
                auVar41._12_4_ = auVar40._12_4_ + 4;
                auVar3[1] = (byte)(uVar54 >> 8) | auVar40[1];
                auVar3[0] = auVar40[0];
                auVar3[2] = (byte)(uVar54 >> 0x10) | auVar40[2];
                auVar3[3] = (byte)(uVar54 >> 0x18) | auVar40[3];
                auVar3[4] = auVar40[4];
                auVar3[5] = (byte)(uVar53 >> 8) | auVar40[5];
                auVar3[6] = (byte)(uVar53 >> 0x10) | auVar40[6];
                auVar3[7] = (byte)(uVar53 >> 0x18) | auVar40[7];
                auVar3[8] = auVar40[8];
                auVar3[9] = (byte)(uVar56 >> 8) | auVar40[9];
                auVar3[10] = (byte)(uVar56 >> 0x10) | auVar40[10];
                auVar3[0xb] = (byte)(uVar56 >> 0x18) | auVar40[0xb];
                auVar3[0xc] = auVar40[0xc];
                auVar3[0xd] = (byte)(uVar7 >> 8) | auVar40[0xd];
                auVar3[0xe] = (byte)(uVar7 >> 0x10) | auVar40[0xe];
                auVar3[0xf] = (byte)(uVar7 >> 0x18) | auVar40[0xf];
                auVar31 = NEON_smin(auVar3,auVar31,4);
                uVar24 = lVar23 - 0x7f;
                lVar23 = lVar23 + 1;
                auVar40 = auVar41;
              } while (uVar24 < uVar30 >> 2);
            }
          }
          uVar30 = NEON_sminv(auVar31,4);
          uVar30 = uVar30 & 0xff;
          if (local_60 <= (int)uVar30) {
            return;
          }
        }
        else {
          uVar30 = local_60 - 1;
        }
        local_60 = local_60 + -1;
        uVar24 = (ulong)uVar30;
        uVar30 = local_1060[uVar24];
        *(undefined4 *)(local_860 + uVar24 * 4) = *(undefined4 *)(local_860 + (long)local_60 * 4);
        local_1060[uVar24] = local_1060[local_60];
        if ((uVar30 & 1) == 0) break;
        local_1068 = CONCAT44(fVar35,fVar35);
        plVar22 = (long *)(*(long *)(param_4 + 8) + 0x38);
        if ((*(uint *)((long)plVar22 + (ulong)(uVar30 >> 6) * 4 + *plVar22) &
            1 << (ulong)(uVar30 >> 1 & 0x1f)) != 0) {
          FUN_02f7d4d4(param_4,uVar30 >> 1,&local_1068);
          bVar20 = *(byte *)(param_4 + 0x10);
          bVar21 = *(byte *)(param_4 + 0x11);
        }
        if ((bVar20 & bVar21) != 0) {
          return;
        }
        if (*(char *)(*(long *)(param_4 + 0x88) + 0x18) != '\0') {
          return;
        }
        uVar28 = local_1068;
LAB_02f7d09c:
        if (local_60 == 0) {
          return;
        }
      }
      pfVar1 = (float *)((long)param_1 + (ulong)(uVar30 >> 1) * 0x80 + *param_1);
      auVar59._0_4_ = fVar26 - pfVar1[0xc];
      auVar59._4_4_ = fVar26 - pfVar1[0xd];
      auVar59._8_4_ = fVar26 - pfVar1[0xe];
      auVar59._12_4_ = fVar26 - pfVar1[0xf];
      fVar2 = (float)*(undefined8 *)(pfVar1 + 4);
      auVar32._0_4_ = fVar25 - fVar2;
      fVar4 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
      auVar32._4_4_ = fVar25 - fVar4;
      fVar5 = (float)*(undefined8 *)(pfVar1 + 6);
      auVar32._8_4_ = fVar25 - fVar5;
      fVar6 = (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20);
      auVar32._12_4_ = fVar25 - fVar6;
      auVar64._0_4_ = fVar27 - pfVar1[0x14];
      auVar64._4_4_ = fVar27 - pfVar1[0x15];
      auVar64._8_4_ = fVar27 - pfVar1[0x16];
      auVar64._12_4_ = fVar27 - pfVar1[0x17];
      iVar36 = -(uint)(*pfVar1 <= fVar2);
      iVar49 = -(uint)(pfVar1[1] <= fVar4);
      iVar55 = -(uint)(pfVar1[2] <= fVar5);
      iVar57 = -(uint)(pfVar1[3] <= fVar6);
      auVar31 = NEON_smax(auVar32,ZEXT816(0),4);
      auVar60 = NEON_smax(auVar59,ZEXT816(0),4);
      auVar9._4_4_ = fVar11 - pfVar1[1];
      auVar9._0_4_ = fVar11 - *pfVar1;
      auVar9._8_4_ = fVar11 - pfVar1[2];
      auVar9._12_4_ = fVar11 - pfVar1[3];
      auVar31 = NEON_smin(auVar31,auVar9,4);
      auVar8._4_4_ = fVar12 - (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20);
      auVar8._0_4_ = fVar12 - (float)*(undefined8 *)(pfVar1 + 8);
      auVar8._8_4_ = fVar12 - (float)*(undefined8 *)(pfVar1 + 10);
      auVar8._12_4_ = fVar12 - (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20);
      auVar60 = NEON_smin(auVar60,auVar8,4);
      auVar65 = NEON_smax(auVar64,ZEXT816(0),4);
      auVar10._4_4_ = fVar13 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20);
      auVar10._0_4_ = fVar13 - (float)*(undefined8 *)(pfVar1 + 0x10);
      auVar10._8_4_ = fVar13 - (float)*(undefined8 *)(pfVar1 + 0x12);
      auVar10._12_4_ = fVar13 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20);
      auVar65 = NEON_smin(auVar65,auVar10,4);
      auVar33._0_4_ =
           auVar31._0_4_ * auVar31._0_4_ + auVar60._0_4_ * auVar60._0_4_ +
           auVar65._0_4_ * auVar65._0_4_;
      auVar33._4_4_ =
           auVar31._4_4_ * auVar31._4_4_ + auVar60._4_4_ * auVar60._4_4_ +
           auVar65._4_4_ * auVar65._4_4_;
      auVar33._8_4_ =
           auVar31._8_4_ * auVar31._8_4_ + auVar60._8_4_ * auVar60._8_4_ +
           auVar65._8_4_ * auVar65._8_4_;
      auVar33._12_4_ =
           auVar31._12_4_ * auVar31._12_4_ + auVar60._12_4_ * auVar60._12_4_ +
           auVar65._12_4_ * auVar65._12_4_;
      iVar58 = -(uint)(auVar33._0_4_ <= fVar35);
      iVar61 = -(uint)(auVar33._4_4_ <= (float)(local_1068 >> 0x20));
      iVar62 = -(uint)(auVar33._8_4_ <= (float)uVar28);
      iVar63 = -(uint)(auVar33._12_4_ <= fVar29);
      bVar34 = (byte)iVar58 & (byte)iVar36;
      bVar45 = (byte)((uint)iVar58 >> 8) & (byte)((uint)iVar36 >> 8);
      bVar46 = (byte)((uint)iVar58 >> 0x10) & (byte)((uint)iVar36 >> 0x10);
      bVar47 = (byte)((uint)iVar58 >> 0x18) & (byte)((uint)iVar36 >> 0x18);
      iVar36 = CONCAT13(bVar47,CONCAT12(bVar46,CONCAT11(bVar45,bVar34)));
      bVar48 = (byte)iVar61 & (byte)iVar49;
      bVar50 = (byte)((uint)iVar61 >> 8) & (byte)((uint)iVar49 >> 8);
      bVar51 = (byte)((uint)iVar61 >> 0x10) & (byte)((uint)iVar49 >> 0x10);
      bVar52 = (byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar49 >> 0x18);
      auVar38._0_8_ = CONCAT17(bVar52,CONCAT16(bVar51,CONCAT15(bVar50,CONCAT14(bVar48,iVar36))));
      auVar38[8] = (byte)iVar62 & (byte)iVar55;
      auVar38[9] = (byte)((uint)iVar62 >> 8) & (byte)((uint)iVar55 >> 8);
      auVar38[10] = (byte)((uint)iVar62 >> 0x10) & (byte)((uint)iVar55 >> 0x10);
      auVar38[0xb] = (byte)((uint)iVar62 >> 0x18) & (byte)((uint)iVar55 >> 0x18);
      auVar42[0xc] = (byte)iVar63 & (byte)iVar57;
      auVar42._0_12_ = auVar38;
      auVar42[0xd] = (byte)((uint)iVar63 >> 8) & (byte)((uint)iVar57 >> 8);
      auVar42[0xe] = (byte)((uint)iVar63 >> 0x10) & (byte)((uint)iVar57 >> 0x10);
      auVar42[0xf] = (byte)((uint)iVar63 >> 0x18) & (byte)((uint)iVar57 >> 0x18);
      if (((iVar36 == 0 && (int)((ulong)auVar38._0_8_ >> 0x20) == 0) && auVar38._8_4_ == 0) &&
          auVar42._12_4_ == 0) goto LAB_02f7d09c;
      iVar36 = CONCAT13(bVar47 & (byte)((ulong)uVar16 >> 0x18),
                        CONCAT12(bVar46 & (byte)((ulong)uVar16 >> 0x10),
                                 CONCAT11(bVar45 & (byte)((ulong)uVar16 >> 8),bVar34 & (byte)uVar16)
                                ));
      auVar39._0_8_ =
           CONCAT17(bVar52 & (byte)((ulong)uVar16 >> 0x38),
                    CONCAT16(bVar51 & (byte)((ulong)uVar16 >> 0x30),
                             CONCAT15(bVar50 & (byte)((ulong)uVar16 >> 0x28),
                                      CONCAT14(bVar48 & (byte)((ulong)uVar16 >> 0x20),iVar36))));
      auVar39[8] = auVar38[8] & (byte)uVar17;
      auVar39[9] = auVar38[9] & (byte)((ulong)uVar17 >> 8);
      auVar39[10] = auVar38[10] & (byte)((ulong)uVar17 >> 0x10);
      auVar39[0xb] = auVar38[0xb] & (byte)((ulong)uVar17 >> 0x18);
      auVar43[0xc] = auVar42[0xc] & (byte)((ulong)uVar17 >> 0x20);
      auVar43._0_12_ = auVar39;
      auVar43[0xd] = auVar42[0xd] & (byte)((ulong)uVar17 >> 0x28);
      auVar43[0xe] = auVar42[0xe] & (byte)((ulong)uVar17 >> 0x30);
      auVar43[0xf] = auVar42[0xf] & (byte)((ulong)uVar17 >> 0x38);
      uVar24 = (ulong)(uint)(iVar36 + (int)((ulong)auVar39._0_8_ >> 0x20) +
                            auVar39._8_4_ + auVar43._12_4_);
      auVar60 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + uVar24 * 0x10));
      auVar31 = a64_TBL(ZEXT816(0),auVar33,*(undefined1 (*) [16])(&DAT_03aae120 + uVar24 * 0x10));
      iVar49 = auVar60._0_4_ << 1;
      iVar55 = auVar60._4_4_ << 1;
      iVar57 = auVar60._8_4_ << 1;
      iVar58 = auVar60._12_4_ << 1;
      bVar34 = -(*(char *)(pfVar1 + 0x1c) == '\0');
      iVar36 = *(int *)(&DAT_03aadfe0 + uVar24 * 4);
      auVar44._0_8_ =
           CONCAT17((char)((uint)iVar55 >> 0x18),
                    CONCAT16((char)((uint)iVar55 >> 0x10),
                             CONCAT15((char)((uint)iVar55 >> 8),
                                      CONCAT14(~bVar34 & 1 | (byte)iVar55,
                                               CONCAT13((char)((uint)iVar49 >> 0x18),
                                                        CONCAT12((char)((uint)iVar49 >> 0x10),
                                                                 CONCAT11((char)((uint)iVar49 >> 8),
                                                                          ~bVar34 & 1 | (byte)iVar49
                                                                         )))))));
      auVar44[8] = ~bVar34 & 1 | (byte)iVar57;
      auVar44[9] = (undefined1)((uint)iVar57 >> 8);
      auVar44[10] = (undefined1)((uint)iVar57 >> 0x10);
      auVar44[0xb] = (undefined1)((uint)iVar57 >> 0x18);
      auVar44[0xc] = ~bVar34 & 1 | (byte)iVar58;
      auVar44[0xd] = (undefined1)((uint)iVar58 >> 8);
      auVar44[0xe] = (undefined1)((uint)iVar58 >> 0x10);
      auVar44[0xf] = (undefined1)((uint)iVar58 >> 0x18);
      *(undefined8 *)(local_1060 + local_60) = auVar44._0_8_;
      auVar60 = NEON_ext(auVar44,auVar44,8,1);
      *(long *)((long)auStack_1058 + (long)local_60 * 4) = auVar60._0_8_;
      lVar23 = (long)local_60;
      *(long *)((long)auStack_858 + lVar23 * 4) = auVar31._8_8_;
      *(long *)(local_860 + lVar23 * 4) = auVar31._0_8_;
      local_60 = local_60 + iVar36;
    } while (local_60 != 0);
  }
  return;
}


