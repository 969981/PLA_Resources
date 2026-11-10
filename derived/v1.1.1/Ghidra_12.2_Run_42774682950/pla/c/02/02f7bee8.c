/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7bee8; name: FUN_02f7bee8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f7bee8(long *param_1,undefined8 *param_2,ulong *param_3,long param_4)

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
  ulong uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  byte bVar33;
  byte bVar44;
  byte bVar45;
  float fVar34;
  int iVar35;
  byte bVar47;
  byte bVar49;
  byte bVar50;
  ulong uVar36;
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  uint uVar52;
  uint uVar53;
  uint uVar55;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  byte bVar46;
  int iVar48;
  byte bVar51;
  int iVar54;
  int iVar56;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  int iVar57;
  int iVar60;
  int iVar61;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  int iVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
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
  if (((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) == 0) &&
     (*(char *)(*(long *)(param_4 + 0x88) + 0x18) == '\0')) {
    fVar11 = *(float *)(param_2 + 2);
    fVar12 = *(float *)((long)param_2 + 0x14);
    fVar13 = *(float *)(param_2 + 3);
    fVar25 = (float)*param_2;
    fVar26 = (float)((ulong)*param_2 >> 0x20);
    fVar27 = (float)param_2[1];
    local_1068 = *param_3;
    local_860._0_4_ = 0;
    local_1060[0] = 2;
    local_60 = 1;
    uVar20 = local_1068;
    do {
      while( true ) {
        lVar23 = (long)local_60;
        *(ulong *)((long)auStack_858 + lVar23 * 4) = uVar20;
        *(ulong *)(local_860 + lVar23 * 4) = local_1068;
        uVar29 = local_60 + 3;
        uVar53 = uVar29 & 0xfffffffc;
        fVar34 = (float)local_1068;
        fVar28 = (float)(uVar20 >> 0x20);
        if ((int)uVar53 < 0x81) {
          uVar24 = CONCAT44(uVar29,uVar29) & 0xfffffffcfffffffc;
          uVar36 = local_1068 & 0xffffff00ffffff00;
          uVar52 = (uint)(float)uVar20 & 0xffffff00;
          uVar55 = (uint)fVar28 & 0xffffff00;
          auVar30[0] = (undefined1)uVar24;
          auVar30[1] = (byte)(uVar24 >> 8) | (byte)(uVar36 >> 8);
          auVar30[2] = (byte)(uVar24 >> 0x10) | (byte)(uVar36 >> 0x10);
          auVar30[3] = (byte)(uVar24 >> 0x18) | (byte)(uVar36 >> 0x18);
          auVar30[4] = (undefined1)(uVar24 >> 0x20);
          auVar30[5] = (byte)(uVar24 >> 0x28) | (byte)(uVar36 >> 0x28);
          auVar30[6] = (byte)(uVar24 >> 0x30) | (byte)(uVar36 >> 0x30);
          auVar30[7] = (byte)(uVar24 >> 0x38) | (byte)(uVar36 >> 0x38);
          auVar30[8] = (undefined1)uVar53;
          bVar33 = (byte)(uVar53 >> 8);
          auVar30[9] = bVar33 | (byte)(uVar52 >> 8);
          bVar44 = (byte)(uVar53 >> 0x10);
          auVar30[10] = bVar44 | (byte)(uVar52 >> 0x10);
          bVar45 = (byte)(uVar53 >> 0x18);
          auVar30[0xb] = bVar45 | (byte)(uVar52 >> 0x18);
          auVar30[0xc] = auVar30[8];
          auVar30[0xd] = bVar33 | (byte)(uVar55 >> 8);
          auVar30[0xe] = bVar44 | (byte)(uVar55 >> 0x10);
          auVar30[0xf] = bVar45 | (byte)(uVar55 >> 0x18);
          if (3 < (int)uVar53) {
            auVar59._4_12_ = stack0xfffffffffffff7a4;
            auVar59._0_4_ = local_860._0_4_;
            uVar24 = auVar59._0_8_ & 0xffffff00ffffff00;
            uVar53 = local_860._8_4_ & 0xffffff00;
            uVar52 = local_860._12_4_ & 0xffffff00;
            auVar64[1] = (byte)(uVar24 >> 8) | (byte)((ulong)uVar18 >> 8);
            auVar64[0] = (char)uVar18;
            auVar64[2] = (byte)(uVar24 >> 0x10) | (byte)((ulong)uVar18 >> 0x10);
            auVar64[3] = (byte)(uVar24 >> 0x18) | (byte)((ulong)uVar18 >> 0x18);
            auVar64[4] = (char)((ulong)uVar18 >> 0x20);
            auVar64[5] = (byte)(uVar24 >> 0x28) | (byte)((ulong)uVar18 >> 0x28);
            auVar64[6] = (byte)(uVar24 >> 0x30) | (byte)((ulong)uVar18 >> 0x30);
            auVar64[7] = (byte)(uVar24 >> 0x38) | (byte)((ulong)uVar18 >> 0x38);
            auVar64[8] = (char)uVar19;
            auVar64[9] = (byte)(uVar53 >> 8) | (byte)((ulong)uVar19 >> 8);
            auVar64[10] = (byte)(uVar53 >> 0x10) | (byte)((ulong)uVar19 >> 0x10);
            auVar64[0xb] = (byte)(uVar53 >> 0x18) | (byte)((ulong)uVar19 >> 0x18);
            auVar64[0xc] = (char)((ulong)uVar19 >> 0x20);
            auVar64[0xd] = (byte)(uVar52 >> 8) | (byte)((ulong)uVar19 >> 0x28);
            auVar64[0xe] = (byte)(uVar52 >> 0x10) | (byte)((ulong)uVar19 >> 0x30);
            auVar64[0xf] = (byte)(uVar52 >> 0x18) | (byte)((ulong)uVar19 >> 0x38);
            auVar30 = NEON_smin(auVar64,auVar30,4);
            if (7 < uVar29) {
              auVar39._8_8_ = uVar15;
              auVar39._0_8_ = uVar14;
              lVar23 = 0x81;
              do {
                uVar53 = (uint)*(undefined8 *)(local_1060 + lVar23 * 4) & 0xffffff00;
                uVar52 = (uint)((ulong)*(undefined8 *)(local_1060 + lVar23 * 4) >> 0x20) &
                         0xffffff00;
                uVar55 = (uint)auStack_1058[lVar23 * 2] & 0xffffff00;
                uVar7 = (uint)((ulong)auStack_1058[lVar23 * 2] >> 0x20) & 0xffffff00;
                auVar3[1] = (byte)(uVar53 >> 8) | auVar39[1];
                auVar3[0] = auVar39[0];
                auVar3[2] = (byte)(uVar53 >> 0x10) | auVar39[2];
                auVar3[3] = (byte)(uVar53 >> 0x18) | auVar39[3];
                auVar3[4] = auVar39[4];
                auVar3[5] = (byte)(uVar52 >> 8) | auVar39[5];
                auVar3[6] = (byte)(uVar52 >> 0x10) | auVar39[6];
                auVar3[7] = (byte)(uVar52 >> 0x18) | auVar39[7];
                auVar3[8] = auVar39[8];
                auVar3[9] = (byte)(uVar55 >> 8) | auVar39[9];
                auVar3[10] = (byte)(uVar55 >> 0x10) | auVar39[10];
                auVar3[0xb] = (byte)(uVar55 >> 0x18) | auVar39[0xb];
                auVar3[0xc] = auVar39[0xc];
                auVar3[0xd] = (byte)(uVar7 >> 8) | auVar39[0xd];
                auVar3[0xe] = (byte)(uVar7 >> 0x10) | auVar39[0xe];
                auVar3[0xf] = (byte)(uVar7 >> 0x18) | auVar39[0xf];
                auVar30 = NEON_smin(auVar3,auVar30,4);
                auVar40._0_4_ = auVar39._0_4_ + 4;
                auVar40._4_4_ = auVar39._4_4_ + 4;
                auVar40._8_4_ = auVar39._8_4_ + 4;
                auVar40._12_4_ = auVar39._12_4_ + 4;
                uVar24 = lVar23 - 0x7f;
                lVar23 = lVar23 + 1;
                auVar39 = auVar40;
              } while (uVar24 < uVar29 >> 2);
            }
          }
          uVar29 = NEON_sminv(auVar30,4);
          uVar29 = uVar29 & 0xff;
          if (local_60 <= (int)uVar29) {
            return;
          }
        }
        else {
          uVar29 = local_60 - 1;
        }
        local_60 = local_60 + -1;
        uVar24 = (ulong)uVar29;
        uVar29 = local_1060[uVar24];
        *(undefined4 *)(local_860 + uVar24 * 4) = *(undefined4 *)(local_860 + (long)local_60 * 4);
        local_1060[uVar24] = local_1060[local_60];
        if ((uVar29 & 1) == 0) break;
        local_1068 = CONCAT44(fVar34,fVar34);
        plVar21 = (long *)(*(long *)(param_4 + 8) + 0x28);
        lVar22 = *plVar21;
        lVar23 = 0;
        if (lVar22 != 0) {
          lVar23 = lVar22 + (long)plVar21;
        }
        uVar20 = FUN_02f89744(lVar23,uVar29 >> 1 & 0xffff);
        if ((uVar20 & 1) != 0) {
          FUN_02f7c40c(param_4,uVar29 >> 1,&local_1068);
        }
        if ((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) != 0) {
          return;
        }
        if (*(char *)(*(long *)(param_4 + 0x88) + 0x18) != '\0') {
          return;
        }
        uVar20 = local_1068;
LAB_02f7bfd8:
        if (local_60 == 0) {
          return;
        }
      }
      pfVar1 = (float *)((long)param_1 + (ulong)(uVar29 >> 1) * 0x80 + *param_1);
      auVar58._0_4_ = fVar26 - pfVar1[0xc];
      auVar58._4_4_ = fVar26 - pfVar1[0xd];
      auVar58._8_4_ = fVar26 - pfVar1[0xe];
      auVar58._12_4_ = fVar26 - pfVar1[0xf];
      fVar2 = (float)*(undefined8 *)(pfVar1 + 4);
      auVar31._0_4_ = fVar25 - fVar2;
      fVar4 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
      auVar31._4_4_ = fVar25 - fVar4;
      fVar5 = (float)*(undefined8 *)(pfVar1 + 6);
      auVar31._8_4_ = fVar25 - fVar5;
      fVar6 = (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20);
      auVar31._12_4_ = fVar25 - fVar6;
      auVar63._0_4_ = fVar27 - pfVar1[0x14];
      auVar63._4_4_ = fVar27 - pfVar1[0x15];
      auVar63._8_4_ = fVar27 - pfVar1[0x16];
      auVar63._12_4_ = fVar27 - pfVar1[0x17];
      iVar35 = -(uint)(*pfVar1 <= fVar2);
      iVar48 = -(uint)(pfVar1[1] <= fVar4);
      iVar54 = -(uint)(pfVar1[2] <= fVar5);
      iVar56 = -(uint)(pfVar1[3] <= fVar6);
      auVar30 = NEON_smax(auVar31,ZEXT816(0),4);
      auVar59 = NEON_smax(auVar58,ZEXT816(0),4);
      auVar9._4_4_ = fVar11 - pfVar1[1];
      auVar9._0_4_ = fVar11 - *pfVar1;
      auVar9._8_4_ = fVar11 - pfVar1[2];
      auVar9._12_4_ = fVar11 - pfVar1[3];
      auVar30 = NEON_smin(auVar30,auVar9,4);
      auVar8._4_4_ = fVar12 - (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20);
      auVar8._0_4_ = fVar12 - (float)*(undefined8 *)(pfVar1 + 8);
      auVar8._8_4_ = fVar12 - (float)*(undefined8 *)(pfVar1 + 10);
      auVar8._12_4_ = fVar12 - (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20);
      auVar59 = NEON_smin(auVar59,auVar8,4);
      auVar64 = NEON_smax(auVar63,ZEXT816(0),4);
      auVar10._4_4_ = fVar13 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20);
      auVar10._0_4_ = fVar13 - (float)*(undefined8 *)(pfVar1 + 0x10);
      auVar10._8_4_ = fVar13 - (float)*(undefined8 *)(pfVar1 + 0x12);
      auVar10._12_4_ = fVar13 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20);
      auVar64 = NEON_smin(auVar64,auVar10,4);
      auVar32._0_4_ =
           auVar30._0_4_ * auVar30._0_4_ + auVar59._0_4_ * auVar59._0_4_ +
           auVar64._0_4_ * auVar64._0_4_;
      auVar32._4_4_ =
           auVar30._4_4_ * auVar30._4_4_ + auVar59._4_4_ * auVar59._4_4_ +
           auVar64._4_4_ * auVar64._4_4_;
      auVar32._8_4_ =
           auVar30._8_4_ * auVar30._8_4_ + auVar59._8_4_ * auVar59._8_4_ +
           auVar64._8_4_ * auVar64._8_4_;
      auVar32._12_4_ =
           auVar30._12_4_ * auVar30._12_4_ + auVar59._12_4_ * auVar59._12_4_ +
           auVar64._12_4_ * auVar64._12_4_;
      iVar57 = -(uint)(auVar32._0_4_ <= fVar34);
      iVar60 = -(uint)(auVar32._4_4_ <= (float)(local_1068 >> 0x20));
      iVar61 = -(uint)(auVar32._8_4_ <= (float)uVar20);
      iVar62 = -(uint)(auVar32._12_4_ <= fVar28);
      bVar33 = (byte)iVar57 & (byte)iVar35;
      bVar44 = (byte)((uint)iVar57 >> 8) & (byte)((uint)iVar35 >> 8);
      bVar45 = (byte)((uint)iVar57 >> 0x10) & (byte)((uint)iVar35 >> 0x10);
      bVar46 = (byte)((uint)iVar57 >> 0x18) & (byte)((uint)iVar35 >> 0x18);
      iVar35 = CONCAT13(bVar46,CONCAT12(bVar45,CONCAT11(bVar44,bVar33)));
      bVar47 = (byte)iVar60 & (byte)iVar48;
      bVar49 = (byte)((uint)iVar60 >> 8) & (byte)((uint)iVar48 >> 8);
      bVar50 = (byte)((uint)iVar60 >> 0x10) & (byte)((uint)iVar48 >> 0x10);
      bVar51 = (byte)((uint)iVar60 >> 0x18) & (byte)((uint)iVar48 >> 0x18);
      auVar37._0_8_ = CONCAT17(bVar51,CONCAT16(bVar50,CONCAT15(bVar49,CONCAT14(bVar47,iVar35))));
      auVar37[8] = (byte)iVar61 & (byte)iVar54;
      auVar37[9] = (byte)((uint)iVar61 >> 8) & (byte)((uint)iVar54 >> 8);
      auVar37[10] = (byte)((uint)iVar61 >> 0x10) & (byte)((uint)iVar54 >> 0x10);
      auVar37[0xb] = (byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar54 >> 0x18);
      auVar41[0xc] = (byte)iVar62 & (byte)iVar56;
      auVar41._0_12_ = auVar37;
      auVar41[0xd] = (byte)((uint)iVar62 >> 8) & (byte)((uint)iVar56 >> 8);
      auVar41[0xe] = (byte)((uint)iVar62 >> 0x10) & (byte)((uint)iVar56 >> 0x10);
      auVar41[0xf] = (byte)((uint)iVar62 >> 0x18) & (byte)((uint)iVar56 >> 0x18);
      if (((iVar35 == 0 && (int)((ulong)auVar37._0_8_ >> 0x20) == 0) && auVar37._8_4_ == 0) &&
          auVar41._12_4_ == 0) goto LAB_02f7bfd8;
      iVar35 = CONCAT13(bVar46 & (byte)((ulong)uVar16 >> 0x18),
                        CONCAT12(bVar45 & (byte)((ulong)uVar16 >> 0x10),
                                 CONCAT11(bVar44 & (byte)((ulong)uVar16 >> 8),bVar33 & (byte)uVar16)
                                ));
      auVar38._0_8_ =
           CONCAT17(bVar51 & (byte)((ulong)uVar16 >> 0x38),
                    CONCAT16(bVar50 & (byte)((ulong)uVar16 >> 0x30),
                             CONCAT15(bVar49 & (byte)((ulong)uVar16 >> 0x28),
                                      CONCAT14(bVar47 & (byte)((ulong)uVar16 >> 0x20),iVar35))));
      auVar38[8] = auVar37[8] & (byte)uVar17;
      auVar38[9] = auVar37[9] & (byte)((ulong)uVar17 >> 8);
      auVar38[10] = auVar37[10] & (byte)((ulong)uVar17 >> 0x10);
      auVar38[0xb] = auVar37[0xb] & (byte)((ulong)uVar17 >> 0x18);
      auVar42[0xc] = auVar41[0xc] & (byte)((ulong)uVar17 >> 0x20);
      auVar42._0_12_ = auVar38;
      auVar42[0xd] = auVar41[0xd] & (byte)((ulong)uVar17 >> 0x28);
      auVar42[0xe] = auVar41[0xe] & (byte)((ulong)uVar17 >> 0x30);
      auVar42[0xf] = auVar41[0xf] & (byte)((ulong)uVar17 >> 0x38);
      uVar24 = (ulong)(uint)(iVar35 + (int)((ulong)auVar38._0_8_ >> 0x20) +
                            auVar38._8_4_ + auVar42._12_4_);
      auVar59 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + uVar24 * 0x10));
      auVar30 = a64_TBL(ZEXT816(0),auVar32,*(undefined1 (*) [16])(&DAT_03aae120 + uVar24 * 0x10));
      iVar48 = auVar59._0_4_ << 1;
      iVar54 = auVar59._4_4_ << 1;
      iVar56 = auVar59._8_4_ << 1;
      iVar57 = auVar59._12_4_ << 1;
      bVar33 = -(*(char *)(pfVar1 + 0x1c) == '\0');
      iVar35 = *(int *)(&DAT_03aadfe0 + uVar24 * 4);
      auVar43._0_8_ =
           CONCAT17((char)((uint)iVar54 >> 0x18),
                    CONCAT16((char)((uint)iVar54 >> 0x10),
                             CONCAT15((char)((uint)iVar54 >> 8),
                                      CONCAT14(~bVar33 & 1 | (byte)iVar54,
                                               CONCAT13((char)((uint)iVar48 >> 0x18),
                                                        CONCAT12((char)((uint)iVar48 >> 0x10),
                                                                 CONCAT11((char)((uint)iVar48 >> 8),
                                                                          ~bVar33 & 1 | (byte)iVar48
                                                                         )))))));
      auVar43[8] = ~bVar33 & 1 | (byte)iVar56;
      auVar43[9] = (undefined1)((uint)iVar56 >> 8);
      auVar43[10] = (undefined1)((uint)iVar56 >> 0x10);
      auVar43[0xb] = (undefined1)((uint)iVar56 >> 0x18);
      auVar43[0xc] = ~bVar33 & 1 | (byte)iVar57;
      auVar43[0xd] = (undefined1)((uint)iVar57 >> 8);
      auVar43[0xe] = (undefined1)((uint)iVar57 >> 0x10);
      auVar43[0xf] = (undefined1)((uint)iVar57 >> 0x18);
      *(undefined8 *)(local_1060 + local_60) = auVar43._0_8_;
      auVar59 = NEON_ext(auVar43,auVar43,8,1);
      *(long *)((long)auStack_1058 + (long)local_60 * 4) = auVar59._0_8_;
      lVar23 = (long)local_60;
      *(long *)((long)auStack_858 + lVar23 * 4) = auVar30._8_8_;
      *(long *)(local_860 + lVar23 * 4) = auVar30._0_8_;
      local_60 = local_60 + iVar35;
    } while (local_60 != 0);
  }
  return;
}


