/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7ae4c; name: FUN_02f7ae4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f7ae4c(long *param_1,undefined8 *param_2,ulong *param_3,long param_4,int param_5)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  float fVar22;
  ulong uVar20;
  ulong uVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  float fVar30;
  float fVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  byte bVar32;
  byte bVar43;
  byte bVar44;
  float fVar33;
  int iVar34;
  byte bVar46;
  byte bVar48;
  byte bVar49;
  ulong uVar35;
  undefined1 auVar36 [12];
  undefined1 auVar37 [12];
  uint uVar51;
  uint uVar52;
  uint uVar54;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  byte bVar45;
  int iVar47;
  byte bVar50;
  int iVar53;
  int iVar55;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar56;
  int iVar59;
  int iVar60;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  uint local_1060 [2];
  undefined8 auStack_1058 [255];
  undefined1 local_860 [8];
  ulong auStack_858 [255];
  int local_60;
  ulong local_48;
  
  uVar16 = _UNK_03889d78;
  uVar15 = _DAT_03889d70;
  uVar14 = _UNK_03889708;
  uVar13 = _DAT_03889700;
  uVar12 = _UNK_03889088;
  uVar11 = _DAT_03889080;
  if (((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) == 0) &&
     (*(char *)(*(long *)(param_4 + 0x88) + 0x18) == '\0')) {
    auVar27 = *(undefined1 (*) [16])(param_2 + 2);
    fVar25 = auVar27._0_4_;
    fVar30 = auVar27._4_4_;
    fVar31 = auVar27._8_4_;
    fVar19 = (float)*param_2;
    fVar22 = (float)((ulong)*param_2 >> 0x20);
    fVar23 = (float)param_2[1];
    uVar20 = *param_3;
    local_860._0_4_ = 0;
    local_1060[0] = param_5 << 1;
    local_60 = 1;
    uVar21 = uVar20;
    do {
      while( true ) {
        lVar17 = (long)local_60;
        *(ulong *)((long)auStack_858 + lVar17 * 4) = uVar20;
        *(ulong *)(local_860 + lVar17 * 4) = uVar21;
        uVar26 = local_60 + 3;
        uVar52 = uVar26 & 0xfffffffc;
        fVar33 = (float)uVar21;
        fVar24 = (float)(uVar20 >> 0x20);
        if ((int)uVar52 < 0x81) {
          uVar18 = CONCAT44(uVar26,uVar26) & 0xfffffffcfffffffc;
          uVar35 = uVar21 & 0xffffff00ffffff00;
          uVar51 = (uint)(float)uVar20 & 0xffffff00;
          uVar54 = (uint)fVar24 & 0xffffff00;
          auVar27[0] = (undefined1)uVar18;
          auVar27[1] = (byte)(uVar18 >> 8) | (byte)(uVar35 >> 8);
          auVar27[2] = (byte)(uVar18 >> 0x10) | (byte)(uVar35 >> 0x10);
          auVar27[3] = (byte)(uVar18 >> 0x18) | (byte)(uVar35 >> 0x18);
          auVar27[4] = (undefined1)(uVar18 >> 0x20);
          auVar27[5] = (byte)(uVar18 >> 0x28) | (byte)(uVar35 >> 0x28);
          auVar27[6] = (byte)(uVar18 >> 0x30) | (byte)(uVar35 >> 0x30);
          auVar27[7] = (byte)(uVar18 >> 0x38) | (byte)(uVar35 >> 0x38);
          auVar27[8] = (undefined1)uVar52;
          bVar32 = (byte)(uVar52 >> 8);
          auVar27[9] = bVar32 | (byte)(uVar51 >> 8);
          bVar43 = (byte)(uVar52 >> 0x10);
          auVar27[10] = bVar43 | (byte)(uVar51 >> 0x10);
          bVar44 = (byte)(uVar52 >> 0x18);
          auVar27[0xb] = bVar44 | (byte)(uVar51 >> 0x18);
          auVar27[0xc] = auVar27[8];
          auVar27[0xd] = bVar32 | (byte)(uVar54 >> 8);
          auVar27[0xe] = bVar43 | (byte)(uVar54 >> 0x10);
          auVar27[0xf] = bVar44 | (byte)(uVar54 >> 0x18);
          if (3 < (int)uVar52) {
            auVar58._4_12_ = stack0xfffffffffffff7a4;
            auVar58._0_4_ = local_860._0_4_;
            uVar18 = auVar58._0_8_ & 0xffffff00ffffff00;
            uVar52 = local_860._8_4_ & 0xffffff00;
            uVar51 = local_860._12_4_ & 0xffffff00;
            auVar63[1] = (byte)(uVar18 >> 8) | (byte)((ulong)uVar15 >> 8);
            auVar63[0] = (char)uVar15;
            auVar63[2] = (byte)(uVar18 >> 0x10) | (byte)((ulong)uVar15 >> 0x10);
            auVar63[3] = (byte)(uVar18 >> 0x18) | (byte)((ulong)uVar15 >> 0x18);
            auVar63[4] = (char)((ulong)uVar15 >> 0x20);
            auVar63[5] = (byte)(uVar18 >> 0x28) | (byte)((ulong)uVar15 >> 0x28);
            auVar63[6] = (byte)(uVar18 >> 0x30) | (byte)((ulong)uVar15 >> 0x30);
            auVar63[7] = (byte)(uVar18 >> 0x38) | (byte)((ulong)uVar15 >> 0x38);
            auVar63[8] = (char)uVar16;
            auVar63[9] = (byte)(uVar52 >> 8) | (byte)((ulong)uVar16 >> 8);
            auVar63[10] = (byte)(uVar52 >> 0x10) | (byte)((ulong)uVar16 >> 0x10);
            auVar63[0xb] = (byte)(uVar52 >> 0x18) | (byte)((ulong)uVar16 >> 0x18);
            auVar63[0xc] = (char)((ulong)uVar16 >> 0x20);
            auVar63[0xd] = (byte)(uVar51 >> 8) | (byte)((ulong)uVar16 >> 0x28);
            auVar63[0xe] = (byte)(uVar51 >> 0x10) | (byte)((ulong)uVar16 >> 0x30);
            auVar63[0xf] = (byte)(uVar51 >> 0x18) | (byte)((ulong)uVar16 >> 0x38);
            auVar27 = NEON_smin(auVar63,auVar27,4);
            if (7 < uVar26) {
              auVar38._8_8_ = uVar12;
              auVar38._0_8_ = uVar11;
              lVar17 = 0x81;
              do {
                uVar52 = (uint)*(undefined8 *)(local_1060 + lVar17 * 4) & 0xffffff00;
                uVar51 = (uint)((ulong)*(undefined8 *)(local_1060 + lVar17 * 4) >> 0x20) &
                         0xffffff00;
                uVar54 = (uint)auStack_1058[lVar17 * 2] & 0xffffff00;
                uVar7 = (uint)((ulong)auStack_1058[lVar17 * 2] >> 0x20) & 0xffffff00;
                auVar39._0_4_ = auVar38._0_4_ + 4;
                auVar39._4_4_ = auVar38._4_4_ + 4;
                auVar39._8_4_ = auVar38._8_4_ + 4;
                auVar39._12_4_ = auVar38._12_4_ + 4;
                auVar3[1] = (byte)(uVar52 >> 8) | auVar38[1];
                auVar3[0] = auVar38[0];
                auVar3[2] = (byte)(uVar52 >> 0x10) | auVar38[2];
                auVar3[3] = (byte)(uVar52 >> 0x18) | auVar38[3];
                auVar3[4] = auVar38[4];
                auVar3[5] = (byte)(uVar51 >> 8) | auVar38[5];
                auVar3[6] = (byte)(uVar51 >> 0x10) | auVar38[6];
                auVar3[7] = (byte)(uVar51 >> 0x18) | auVar38[7];
                auVar3[8] = auVar38[8];
                auVar3[9] = (byte)(uVar54 >> 8) | auVar38[9];
                auVar3[10] = (byte)(uVar54 >> 0x10) | auVar38[10];
                auVar3[0xb] = (byte)(uVar54 >> 0x18) | auVar38[0xb];
                auVar3[0xc] = auVar38[0xc];
                auVar3[0xd] = (byte)(uVar7 >> 8) | auVar38[0xd];
                auVar3[0xe] = (byte)(uVar7 >> 0x10) | auVar38[0xe];
                auVar3[0xf] = (byte)(uVar7 >> 0x18) | auVar38[0xf];
                auVar27 = NEON_smin(auVar3,auVar27,4);
                uVar18 = lVar17 - 0x7f;
                lVar17 = lVar17 + 1;
                auVar38 = auVar39;
              } while (uVar18 < uVar26 >> 2);
            }
          }
          uVar26 = NEON_sminv(auVar27,4);
          uVar26 = uVar26 & 0xff;
          if (local_60 <= (int)uVar26) {
            return;
          }
        }
        else {
          uVar26 = local_60 - 1;
        }
        local_60 = local_60 + -1;
        uVar18 = (ulong)uVar26;
        uVar26 = local_1060[uVar18];
        *(undefined4 *)(local_860 + uVar18 * 4) = *(undefined4 *)(local_860 + (long)local_60 * 4);
        local_1060[uVar18] = local_1060[local_60];
        if ((uVar26 & 1) == 0) break;
        local_48 = CONCAT44(fVar33,fVar33);
        FUN_02f7b344(param_4,uVar26 >> 1,&local_48);
        if ((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) != 0) {
          return;
        }
        if (*(char *)(*(long *)(param_4 + 0x88) + 0x18) != '\0') {
          return;
        }
        uVar20 = local_48;
LAB_02f7b130:
        uVar21 = local_48;
        if (local_60 == 0) {
          return;
        }
      }
      pfVar1 = (float *)((long)param_1 + (ulong)(uVar26 >> 1) * 0x80 + *param_1);
      fVar2 = (float)*(undefined8 *)(pfVar1 + 4);
      auVar28._0_4_ = fVar19 - fVar2;
      fVar4 = (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
      auVar28._4_4_ = fVar19 - fVar4;
      fVar5 = (float)*(undefined8 *)(pfVar1 + 6);
      auVar28._8_4_ = fVar19 - fVar5;
      fVar6 = (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20);
      auVar28._12_4_ = fVar19 - fVar6;
      auVar27 = NEON_smax(auVar28,ZEXT816(0),4);
      auVar57._0_4_ = fVar22 - pfVar1[0xc];
      auVar57._4_4_ = fVar22 - pfVar1[0xd];
      auVar57._8_4_ = fVar22 - pfVar1[0xe];
      auVar57._12_4_ = fVar22 - pfVar1[0xf];
      auVar58 = NEON_smax(auVar57,ZEXT816(0),4);
      auVar9._4_4_ = fVar25 - pfVar1[1];
      auVar9._0_4_ = fVar25 - *pfVar1;
      auVar9._8_4_ = fVar25 - pfVar1[2];
      auVar9._12_4_ = fVar25 - pfVar1[3];
      auVar27 = NEON_smin(auVar27,auVar9,4);
      auVar8._4_4_ = fVar30 - (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20);
      auVar8._0_4_ = fVar30 - (float)*(undefined8 *)(pfVar1 + 8);
      auVar8._8_4_ = fVar30 - (float)*(undefined8 *)(pfVar1 + 10);
      auVar8._12_4_ = fVar30 - (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20);
      auVar58 = NEON_smin(auVar58,auVar8,4);
      auVar62._0_4_ = fVar23 - pfVar1[0x14];
      auVar62._4_4_ = fVar23 - pfVar1[0x15];
      auVar62._8_4_ = fVar23 - pfVar1[0x16];
      auVar62._12_4_ = fVar23 - pfVar1[0x17];
      auVar63 = NEON_smax(auVar62,ZEXT816(0),4);
      auVar10._4_4_ = fVar31 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20);
      auVar10._0_4_ = fVar31 - (float)*(undefined8 *)(pfVar1 + 0x10);
      auVar10._8_4_ = fVar31 - (float)*(undefined8 *)(pfVar1 + 0x12);
      auVar10._12_4_ = fVar31 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20);
      auVar63 = NEON_smin(auVar63,auVar10,4);
      iVar34 = -(uint)(*pfVar1 <= fVar2);
      iVar47 = -(uint)(pfVar1[1] <= fVar4);
      iVar53 = -(uint)(pfVar1[2] <= fVar5);
      iVar55 = -(uint)(pfVar1[3] <= fVar6);
      auVar29._0_4_ =
           auVar27._0_4_ * auVar27._0_4_ + auVar58._0_4_ * auVar58._0_4_ +
           auVar63._0_4_ * auVar63._0_4_;
      auVar29._4_4_ =
           auVar27._4_4_ * auVar27._4_4_ + auVar58._4_4_ * auVar58._4_4_ +
           auVar63._4_4_ * auVar63._4_4_;
      auVar29._8_4_ =
           auVar27._8_4_ * auVar27._8_4_ + auVar58._8_4_ * auVar58._8_4_ +
           auVar63._8_4_ * auVar63._8_4_;
      auVar29._12_4_ =
           auVar27._12_4_ * auVar27._12_4_ + auVar58._12_4_ * auVar58._12_4_ +
           auVar63._12_4_ * auVar63._12_4_;
      iVar56 = -(uint)(auVar29._0_4_ <= fVar33);
      iVar59 = -(uint)(auVar29._4_4_ <= (float)(uVar21 >> 0x20));
      iVar60 = -(uint)(auVar29._8_4_ <= (float)uVar20);
      iVar61 = -(uint)(auVar29._12_4_ <= fVar24);
      bVar32 = (byte)iVar56 & (byte)iVar34;
      bVar43 = (byte)((uint)iVar56 >> 8) & (byte)((uint)iVar34 >> 8);
      bVar44 = (byte)((uint)iVar56 >> 0x10) & (byte)((uint)iVar34 >> 0x10);
      bVar45 = (byte)((uint)iVar56 >> 0x18) & (byte)((uint)iVar34 >> 0x18);
      iVar34 = CONCAT13(bVar45,CONCAT12(bVar44,CONCAT11(bVar43,bVar32)));
      bVar46 = (byte)iVar59 & (byte)iVar47;
      bVar48 = (byte)((uint)iVar59 >> 8) & (byte)((uint)iVar47 >> 8);
      bVar49 = (byte)((uint)iVar59 >> 0x10) & (byte)((uint)iVar47 >> 0x10);
      bVar50 = (byte)((uint)iVar59 >> 0x18) & (byte)((uint)iVar47 >> 0x18);
      auVar36._0_8_ = CONCAT17(bVar50,CONCAT16(bVar49,CONCAT15(bVar48,CONCAT14(bVar46,iVar34))));
      auVar36[8] = (byte)iVar60 & (byte)iVar53;
      auVar36[9] = (byte)((uint)iVar60 >> 8) & (byte)((uint)iVar53 >> 8);
      auVar36[10] = (byte)((uint)iVar60 >> 0x10) & (byte)((uint)iVar53 >> 0x10);
      auVar36[0xb] = (byte)((uint)iVar60 >> 0x18) & (byte)((uint)iVar53 >> 0x18);
      auVar40[0xc] = (byte)iVar61 & (byte)iVar55;
      auVar40._0_12_ = auVar36;
      auVar40[0xd] = (byte)((uint)iVar61 >> 8) & (byte)((uint)iVar55 >> 8);
      auVar40[0xe] = (byte)((uint)iVar61 >> 0x10) & (byte)((uint)iVar55 >> 0x10);
      auVar40[0xf] = (byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar55 >> 0x18);
      local_48 = uVar21;
      if (((iVar34 == 0 && (int)((ulong)auVar36._0_8_ >> 0x20) == 0) && auVar36._8_4_ == 0) &&
          auVar40._12_4_ == 0) goto LAB_02f7b130;
      iVar34 = CONCAT13(bVar45 & (byte)((ulong)uVar13 >> 0x18),
                        CONCAT12(bVar44 & (byte)((ulong)uVar13 >> 0x10),
                                 CONCAT11(bVar43 & (byte)((ulong)uVar13 >> 8),bVar32 & (byte)uVar13)
                                ));
      auVar37._0_8_ =
           CONCAT17(bVar50 & (byte)((ulong)uVar13 >> 0x38),
                    CONCAT16(bVar49 & (byte)((ulong)uVar13 >> 0x30),
                             CONCAT15(bVar48 & (byte)((ulong)uVar13 >> 0x28),
                                      CONCAT14(bVar46 & (byte)((ulong)uVar13 >> 0x20),iVar34))));
      auVar37[8] = auVar36[8] & (byte)uVar14;
      auVar37[9] = auVar36[9] & (byte)((ulong)uVar14 >> 8);
      auVar37[10] = auVar36[10] & (byte)((ulong)uVar14 >> 0x10);
      auVar37[0xb] = auVar36[0xb] & (byte)((ulong)uVar14 >> 0x18);
      auVar41[0xc] = auVar40[0xc] & (byte)((ulong)uVar14 >> 0x20);
      auVar41._0_12_ = auVar37;
      auVar41[0xd] = auVar40[0xd] & (byte)((ulong)uVar14 >> 0x28);
      auVar41[0xe] = auVar40[0xe] & (byte)((ulong)uVar14 >> 0x30);
      auVar41[0xf] = auVar40[0xf] & (byte)((ulong)uVar14 >> 0x38);
      uVar18 = (ulong)(uint)(iVar34 + (int)((ulong)auVar37._0_8_ >> 0x20) +
                            auVar37._8_4_ + auVar41._12_4_);
      auVar27 = a64_TBL(ZEXT816(0),auVar29,*(undefined1 (*) [16])(&DAT_03aae120 + uVar18 * 0x10));
      auVar58 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),
                        *(undefined1 (*) [16])(&DAT_03aae120 + uVar18 * 0x10));
      iVar47 = auVar58._0_4_ << 1;
      iVar53 = auVar58._4_4_ << 1;
      iVar55 = auVar58._8_4_ << 1;
      iVar56 = auVar58._12_4_ << 1;
      bVar32 = -(*(char *)(pfVar1 + 0x1c) == '\0');
      iVar34 = *(int *)(&DAT_03aadfe0 + uVar18 * 4);
      auVar42._0_8_ =
           CONCAT17((char)((uint)iVar53 >> 0x18),
                    CONCAT16((char)((uint)iVar53 >> 0x10),
                             CONCAT15((char)((uint)iVar53 >> 8),
                                      CONCAT14(~bVar32 & 1 | (byte)iVar53,
                                               CONCAT13((char)((uint)iVar47 >> 0x18),
                                                        CONCAT12((char)((uint)iVar47 >> 0x10),
                                                                 CONCAT11((char)((uint)iVar47 >> 8),
                                                                          ~bVar32 & 1 | (byte)iVar47
                                                                         )))))));
      auVar42[8] = ~bVar32 & 1 | (byte)iVar55;
      auVar42[9] = (undefined1)((uint)iVar55 >> 8);
      auVar42[10] = (undefined1)((uint)iVar55 >> 0x10);
      auVar42[0xb] = (undefined1)((uint)iVar55 >> 0x18);
      auVar42[0xc] = ~bVar32 & 1 | (byte)iVar56;
      auVar42[0xd] = (undefined1)((uint)iVar56 >> 8);
      auVar42[0xe] = (undefined1)((uint)iVar56 >> 0x10);
      auVar42[0xf] = (undefined1)((uint)iVar56 >> 0x18);
      *(undefined8 *)(local_1060 + local_60) = auVar42._0_8_;
      auVar58 = NEON_ext(auVar42,auVar42,8,1);
      *(long *)((long)auStack_1058 + (long)local_60 * 4) = auVar58._0_8_;
      lVar17 = (long)local_60;
      *(long *)((long)auStack_858 + lVar17 * 4) = auVar27._8_8_;
      *(long *)(local_860 + lVar17 * 4) = auVar27._0_8_;
      local_60 = local_60 + iVar34;
    } while (local_60 != 0);
  }
  return;
}


