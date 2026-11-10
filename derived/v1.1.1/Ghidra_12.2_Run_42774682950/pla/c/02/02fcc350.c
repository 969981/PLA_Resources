/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fcc350; name: FUN_02fcc350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fcc350(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  uint uVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  ulong uVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  uint uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 uVar45;
  undefined1 uVar46;
  byte bVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  byte bVar57;
  undefined1 uVar58;
  byte bVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  byte bVar64;
  undefined1 uVar65;
  byte bVar66;
  byte bVar67;
  undefined1 uVar68;
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  undefined1 uVar72;
  byte bVar73;
  byte bVar74;
  undefined1 uVar75;
  byte bVar76;
  undefined1 uVar77;
  byte bVar78;
  undefined1 uVar79;
  uint5 uVar80;
  uint uVar81;
  uint uVar82;
  int iVar83;
  int iVar86;
  int iVar87;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  int iVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fStack_109c;
  float fStack_1094;
  float fStack_108c;
  float fStack_1084;
  uint local_1060 [2];
  undefined8 auStack_1058 [255];
  uint local_860 [2];
  undefined8 auStack_858 [255];
  int local_60;
  undefined8 local_48;
  
  uVar31 = _UNK_03889d78;
  uVar30 = _DAT_03889d70;
  uVar29 = _UNK_03889708;
  uVar28 = _DAT_03889700;
  uVar27 = _UNK_03889088;
  uVar26 = _DAT_03889080;
  if (*(char *)(*(long *)(param_4 + 0x90) + 0x18) == '\0') {
    uVar35 = *param_2;
    fVar23 = *(float *)(param_2 + 2);
    fVar24 = *(float *)((long)param_2 + 0x14);
    fVar25 = *(float *)(param_2 + 3);
    uVar48 = (undefined1)((ulong)uVar35 >> 8);
    uVar51 = (undefined1)((ulong)uVar35 >> 0x10);
    uVar55 = (undefined1)((ulong)uVar35 >> 0x18);
    fVar9 = (float)uVar35;
    uVar45 = (undefined1)((ulong)uVar35 >> 0x20);
    uVar49 = (undefined1)((ulong)uVar35 >> 0x28);
    uVar52 = (undefined1)((ulong)uVar35 >> 0x30);
    uVar56 = (undefined1)((ulong)uVar35 >> 0x38);
    fVar39 = (float)param_2[1];
    fVar10 = (float)((ulong)uVar35 >> 0x20);
    uVar36 = *param_3;
    local_860[0] = 0;
    local_1060[0] = 2;
    local_60 = 1;
    uVar37 = uVar36;
    do {
      while( true ) {
        lVar32 = (long)local_60;
        *(undefined8 *)((long)auStack_858 + lVar32 * 4) = uVar36;
        *(undefined8 *)(local_860 + lVar32) = uVar37;
        uVar41 = local_60 + 3;
        uVar81 = uVar41 & 0xfffffffc;
        fVar38 = (float)((ulong)uVar37 >> 0x20);
        fVar34 = (float)uVar37;
        fVar40 = (float)((ulong)uVar36 >> 0x20);
        if ((int)uVar81 < 0x81) {
          uVar33 = CONCAT44(uVar41,uVar41) & 0xfffffffcfffffffc;
          uVar82 = (uint)fVar34 & 0xffffff00;
          uVar13 = (uint)fVar38 & 0xffffff00;
          uVar15 = (uint)(float)uVar36 & 0xffffff00;
          uVar18 = (uint)fVar40 & 0xffffff00;
          auVar42[0] = (undefined1)uVar33;
          auVar42[1] = (byte)(uVar33 >> 8) | (byte)(uVar82 >> 8);
          auVar42[2] = (byte)(uVar33 >> 0x10) | (byte)(uVar82 >> 0x10);
          auVar42[3] = (byte)(uVar33 >> 0x18) | (byte)(uVar82 >> 0x18);
          auVar42[4] = (undefined1)(uVar33 >> 0x20);
          auVar42[5] = (byte)(uVar33 >> 0x28) | (byte)(uVar13 >> 8);
          auVar42[6] = (byte)(uVar33 >> 0x30) | (byte)(uVar13 >> 0x10);
          auVar42[7] = (byte)(uVar33 >> 0x38) | (byte)(uVar13 >> 0x18);
          auVar42[8] = (undefined1)uVar81;
          bVar47 = (byte)(uVar81 >> 8);
          auVar42[9] = bVar47 | (byte)(uVar15 >> 8);
          bVar50 = (byte)(uVar81 >> 0x10);
          auVar42[10] = bVar50 | (byte)(uVar15 >> 0x10);
          bVar53 = (byte)(uVar81 >> 0x18);
          auVar42[0xb] = bVar53 | (byte)(uVar15 >> 0x18);
          auVar42[0xc] = auVar42[8];
          auVar42[0xd] = bVar47 | (byte)(uVar18 >> 8);
          auVar42[0xe] = bVar50 | (byte)(uVar18 >> 0x10);
          auVar42[0xf] = bVar53 | (byte)(uVar18 >> 0x18);
          if (3 < (int)uVar81) {
            uVar81 = local_860[0] & 0xffffff00;
            uVar82 = local_860[1] & 0xffffff00;
            uVar13 = (uint)auStack_858[0] & 0xffffff00;
            uVar15 = (uint)((ulong)auStack_858[0] >> 0x20) & 0xffffff00;
            auVar85[1] = (byte)(uVar81 >> 8) | (byte)((ulong)uVar30 >> 8);
            auVar85[0] = (char)uVar30;
            auVar85[2] = (byte)(uVar81 >> 0x10) | (byte)((ulong)uVar30 >> 0x10);
            auVar85[3] = (byte)(uVar81 >> 0x18) | (byte)((ulong)uVar30 >> 0x18);
            auVar85[4] = (char)((ulong)uVar30 >> 0x20);
            auVar85[5] = (byte)(uVar82 >> 8) | (byte)((ulong)uVar30 >> 0x28);
            auVar85[6] = (byte)(uVar82 >> 0x10) | (byte)((ulong)uVar30 >> 0x30);
            auVar85[7] = (byte)(uVar82 >> 0x18) | (byte)((ulong)uVar30 >> 0x38);
            auVar85[8] = (char)uVar31;
            auVar85[9] = (byte)(uVar13 >> 8) | (byte)((ulong)uVar31 >> 8);
            auVar85[10] = (byte)(uVar13 >> 0x10) | (byte)((ulong)uVar31 >> 0x10);
            auVar85[0xb] = (byte)(uVar13 >> 0x18) | (byte)((ulong)uVar31 >> 0x18);
            auVar85[0xc] = (char)((ulong)uVar31 >> 0x20);
            auVar85[0xd] = (byte)(uVar15 >> 8) | (byte)((ulong)uVar31 >> 0x28);
            auVar85[0xe] = (byte)(uVar15 >> 0x10) | (byte)((ulong)uVar31 >> 0x30);
            auVar85[0xf] = (byte)(uVar15 >> 0x18) | (byte)((ulong)uVar31 >> 0x38);
            auVar42 = NEON_smin(auVar85,auVar42,4);
            if (7 < uVar41) {
              uVar58 = (undefined1)uVar27;
              bVar62 = (byte)((ulong)uVar27 >> 8);
              bVar64 = (byte)((ulong)uVar27 >> 0x10);
              bVar66 = (byte)((ulong)uVar27 >> 0x18);
              uVar61 = (undefined1)((ulong)uVar27 >> 0x20);
              bVar67 = (byte)((ulong)uVar27 >> 0x28);
              bVar69 = (byte)((ulong)uVar27 >> 0x30);
              bVar71 = (byte)((ulong)uVar27 >> 0x38);
              uVar46 = (undefined1)uVar26;
              bVar47 = (byte)((ulong)uVar26 >> 8);
              bVar50 = (byte)((ulong)uVar26 >> 0x10);
              bVar53 = (byte)((ulong)uVar26 >> 0x18);
              uVar54 = (undefined1)((ulong)uVar26 >> 0x20);
              bVar57 = (byte)((ulong)uVar26 >> 0x28);
              bVar59 = (byte)((ulong)uVar26 >> 0x30);
              bVar60 = (byte)((ulong)uVar26 >> 0x38);
              lVar32 = 0x81;
              do {
                auVar85 = *(undefined1 (*) [16])(local_1060 + lVar32 * 4);
                uVar33 = auVar85._0_8_ & 0xffffff00ffffff00;
                uVar81 = auVar85._8_4_ & 0xffffff00;
                uVar82 = auVar85._12_4_ & 0xffffff00;
                auVar90[1] = (byte)(uVar33 >> 8) | bVar47;
                auVar90[0] = uVar46;
                auVar90[2] = (byte)(uVar33 >> 0x10) | bVar50;
                auVar90[3] = (byte)(uVar33 >> 0x18) | bVar53;
                auVar90[4] = uVar54;
                auVar90[5] = (byte)(uVar33 >> 0x28) | bVar57;
                auVar90[6] = (byte)(uVar33 >> 0x30) | bVar59;
                auVar90[7] = (byte)(uVar33 >> 0x38) | bVar60;
                auVar90[8] = uVar58;
                auVar90[9] = (byte)(uVar81 >> 8) | bVar62;
                auVar90[10] = (byte)(uVar81 >> 0x10) | bVar64;
                auVar90[0xb] = (byte)(uVar81 >> 0x18) | bVar66;
                auVar90[0xc] = uVar61;
                auVar90[0xd] = (byte)(uVar82 >> 8) | bVar67;
                auVar90[0xe] = (byte)(uVar82 >> 0x10) | bVar69;
                auVar90[0xf] = (byte)(uVar82 >> 0x18) | bVar71;
                auVar42 = NEON_smin(auVar90,auVar42,4);
                iVar12 = CONCAT13(bVar53,CONCAT12(bVar50,CONCAT11(bVar47,uVar46))) + 4;
                uVar46 = (undefined1)iVar12;
                bVar47 = (byte)((uint)iVar12 >> 8);
                bVar50 = (byte)((uint)iVar12 >> 0x10);
                bVar53 = (byte)((uint)iVar12 >> 0x18);
                iVar12 = CONCAT13(bVar60,CONCAT12(bVar59,CONCAT11(bVar57,uVar54))) + 4;
                uVar54 = (undefined1)iVar12;
                bVar57 = (byte)((uint)iVar12 >> 8);
                bVar59 = (byte)((uint)iVar12 >> 0x10);
                bVar60 = (byte)((uint)iVar12 >> 0x18);
                iVar12 = CONCAT13(bVar66,CONCAT12(bVar64,CONCAT11(bVar62,uVar58))) + 4;
                uVar58 = (undefined1)iVar12;
                bVar62 = (byte)((uint)iVar12 >> 8);
                bVar64 = (byte)((uint)iVar12 >> 0x10);
                bVar66 = (byte)((uint)iVar12 >> 0x18);
                iVar12 = CONCAT13(bVar71,CONCAT12(bVar69,CONCAT11(bVar67,uVar61))) + 4;
                uVar61 = (undefined1)iVar12;
                bVar67 = (byte)((uint)iVar12 >> 8);
                bVar69 = (byte)((uint)iVar12 >> 0x10);
                bVar71 = (byte)((uint)iVar12 >> 0x18);
                uVar33 = lVar32 - 0x7f;
                lVar32 = lVar32 + 1;
              } while (uVar33 < uVar41 >> 2);
            }
          }
          uVar41 = NEON_sminv(auVar42,4);
          uVar41 = uVar41 & 0xff;
          if (local_60 <= (int)uVar41) {
            return;
          }
        }
        else {
          uVar41 = local_60 - 1;
        }
        local_60 = local_60 + -1;
        uVar81 = local_1060[uVar41];
        local_860[uVar41] = local_860[local_60];
        local_1060[uVar41] = local_1060[local_60];
        if ((uVar81 & 1) == 0) break;
        local_48 = CONCAT44(fVar34,fVar34);
        FUN_02fcb5a4(param_4,uVar81 >> 1,&local_48);
        uVar36 = local_48;
        if (*(char *)(*(long *)(param_4 + 0x90) + 0x18) != '\0') {
          return;
        }
LAB_02fcc45c:
        uVar37 = local_48;
        if (local_60 == 0) {
          return;
        }
      }
      fStack_109c = (float)(CONCAT17(uVar56,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar45,fVar10))
                                                    )) >> 0x20);
      fStack_1094 = (float)(CONCAT17(uVar56,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar45,fVar10))
                                                    )) >> 0x20);
      fStack_108c = (float)(CONCAT17(uVar55,CONCAT16(uVar51,CONCAT15(uVar48,CONCAT14((char)uVar35,
                                                                                     fVar9)))) >>
                           0x20);
      fStack_1084 = (float)(CONCAT17(uVar55,CONCAT16(uVar51,CONCAT15(uVar48,CONCAT14((char)uVar35,
                                                                                     fVar9)))) >>
                           0x20);
      puVar1 = (undefined8 *)((long)param_1 + (ulong)(uVar81 >> 1) * 0x80 + *param_1);
      auVar84._0_4_ = fVar10 - *(float *)(puVar1 + 6);
      auVar84._4_4_ = fStack_109c - *(float *)((long)puVar1 + 0x34);
      auVar84._8_4_ = fVar10 - *(float *)(puVar1 + 7);
      auVar84._12_4_ = fStack_1094 - *(float *)((long)puVar1 + 0x3c);
      auVar42 = *(undefined1 (*) [16])(puVar1 + 2);
      auVar43._0_4_ = fVar9 - auVar42._0_4_;
      auVar43._4_4_ = fStack_108c - auVar42._4_4_;
      auVar43._8_4_ = fVar9 - auVar42._8_4_;
      auVar43._12_4_ = fStack_1084 - auVar42._12_4_;
      fVar2 = (float)*puVar1;
      fVar7 = (float)((ulong)*puVar1 >> 0x20);
      fVar8 = (float)puVar1[1];
      fVar11 = (float)((ulong)puVar1[1] >> 0x20);
      auVar89._0_4_ = fVar39 - *(float *)(puVar1 + 10);
      auVar89._4_4_ = fVar39 - *(float *)((long)puVar1 + 0x54);
      auVar89._8_4_ = fVar39 - *(float *)(puVar1 + 0xb);
      auVar89._12_4_ = fVar39 - *(float *)((long)puVar1 + 0x5c);
      iVar12 = -(uint)(fVar2 <= auVar42._0_4_);
      iVar14 = -(uint)(fVar7 <= auVar42._4_4_);
      iVar16 = -(uint)(fVar8 <= auVar42._8_4_);
      iVar19 = -(uint)(fVar11 <= auVar42._12_4_);
      auVar42 = NEON_smax(auVar43,ZEXT816(0),4);
      auVar85 = NEON_smax(auVar84,ZEXT816(0),4);
      auVar21._4_4_ = fVar23 - fVar7;
      auVar21._0_4_ = fVar23 - fVar2;
      auVar21._8_4_ = fVar23 - fVar8;
      auVar21._12_4_ = fVar23 - fVar11;
      auVar42 = NEON_smin(auVar42,auVar21,4);
      auVar20._4_4_ = fVar24 - (float)((ulong)puVar1[4] >> 0x20);
      auVar20._0_4_ = fVar24 - (float)puVar1[4];
      auVar20._8_4_ = fVar24 - (float)puVar1[5];
      auVar20._12_4_ = fVar24 - (float)((ulong)puVar1[5] >> 0x20);
      auVar85 = NEON_smin(auVar85,auVar20,4);
      auVar90 = NEON_smax(auVar89,ZEXT816(0),4);
      auVar22._4_4_ = fVar25 - (float)((ulong)puVar1[8] >> 0x20);
      auVar22._0_4_ = fVar25 - (float)puVar1[8];
      auVar22._8_4_ = fVar25 - (float)puVar1[9];
      auVar22._12_4_ = fVar25 - (float)((ulong)puVar1[9] >> 0x20);
      auVar90 = NEON_smin(auVar90,auVar22,4);
      auVar44._0_4_ =
           auVar42._0_4_ * auVar42._0_4_ + auVar85._0_4_ * auVar85._0_4_ +
           auVar90._0_4_ * auVar90._0_4_;
      auVar44._4_4_ =
           auVar42._4_4_ * auVar42._4_4_ + auVar85._4_4_ * auVar85._4_4_ +
           auVar90._4_4_ * auVar90._4_4_;
      auVar44._8_4_ =
           auVar42._8_4_ * auVar42._8_4_ + auVar85._8_4_ * auVar85._8_4_ +
           auVar90._8_4_ * auVar90._8_4_;
      auVar44._12_4_ =
           auVar42._12_4_ * auVar42._12_4_ + auVar85._12_4_ * auVar85._12_4_ +
           auVar90._12_4_ * auVar90._12_4_;
      iVar83 = -(uint)(auVar44._0_4_ <= fVar34);
      iVar86 = -(uint)(auVar44._4_4_ <= fVar38);
      iVar87 = -(uint)(auVar44._8_4_ <= (float)uVar36);
      iVar88 = -(uint)(auVar44._12_4_ <= fVar40);
      bVar47 = (byte)iVar83 & (byte)iVar12;
      bVar50 = (byte)((uint)iVar83 >> 8) & (byte)((uint)iVar12 >> 8);
      bVar53 = (byte)((uint)iVar83 >> 0x10) & (byte)((uint)iVar12 >> 0x10);
      bVar57 = (byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar12 >> 0x18);
      bVar59 = (byte)iVar86 & (byte)iVar14;
      bVar60 = (byte)((uint)iVar86 >> 8) & (byte)((uint)iVar14 >> 8);
      bVar62 = (byte)((uint)iVar86 >> 0x10) & (byte)((uint)iVar14 >> 0x10);
      bVar64 = (byte)((uint)iVar86 >> 0x18) & (byte)((uint)iVar14 >> 0x18);
      bVar66 = (byte)iVar87 & (byte)iVar16;
      bVar67 = (byte)((uint)iVar87 >> 8) & (byte)((uint)iVar16 >> 8);
      bVar69 = (byte)((uint)iVar87 >> 0x10) & (byte)((uint)iVar16 >> 0x10);
      bVar71 = (byte)((uint)iVar87 >> 0x18) & (byte)((uint)iVar16 >> 0x18);
      bVar73 = (byte)iVar88 & (byte)iVar19;
      bVar74 = (byte)((uint)iVar88 >> 8) & (byte)((uint)iVar19 >> 8);
      bVar76 = (byte)((uint)iVar88 >> 0x10) & (byte)((uint)iVar19 >> 0x10);
      bVar78 = (byte)((uint)iVar88 >> 0x18) & (byte)((uint)iVar19 >> 0x18);
      local_48 = uVar37;
      if (((CONCAT13(bVar57,CONCAT12(bVar53,CONCAT11(bVar50,bVar47))) == 0 &&
           CONCAT13(bVar64,CONCAT12(bVar62,CONCAT11(bVar60,bVar59))) == 0) &&
          CONCAT13(bVar71,CONCAT12(bVar69,CONCAT11(bVar67,bVar66))) == 0) &&
          CONCAT13(bVar78,CONCAT12(bVar76,CONCAT11(bVar74,bVar73))) == 0) goto LAB_02fcc45c;
      uVar33 = (ulong)(uint)(CONCAT13(bVar57 & (byte)((ulong)uVar28 >> 0x18),
                                      CONCAT12(bVar53 & (byte)((ulong)uVar28 >> 0x10),
                                               CONCAT11(bVar50 & (byte)((ulong)uVar28 >> 8),
                                                        bVar47 & (byte)uVar28))) +
                             CONCAT13(bVar64 & (byte)((ulong)uVar28 >> 0x38),
                                      CONCAT12(bVar62 & (byte)((ulong)uVar28 >> 0x30),
                                               CONCAT11(bVar60 & (byte)((ulong)uVar28 >> 0x28),
                                                        bVar59 & (byte)((ulong)uVar28 >> 0x20)))) +
                            CONCAT13(bVar71 & (byte)((ulong)uVar29 >> 0x18),
                                     CONCAT12(bVar69 & (byte)((ulong)uVar29 >> 0x10),
                                              CONCAT11(bVar67 & (byte)((ulong)uVar29 >> 8),
                                                       bVar66 & (byte)uVar29))) +
                            CONCAT13(bVar78 & (byte)((ulong)uVar29 >> 0x38),
                                     CONCAT12(bVar76 & (byte)((ulong)uVar29 >> 0x30),
                                              CONCAT11(bVar74 & (byte)((ulong)uVar29 >> 0x28),
                                                       bVar73 & (byte)((ulong)uVar29 >> 0x20)))));
      lVar32 = uVar33 * 0x10;
      uVar17 = *(undefined8 *)(&UNK_03aae128 + lVar32);
      uVar46 = (undefined1)((ulong)uVar17 >> 8);
      uVar54 = (undefined1)((ulong)uVar17 >> 0x10);
      uVar58 = (undefined1)((ulong)uVar17 >> 0x18);
      uVar61 = (undefined1)((ulong)uVar17 >> 0x20);
      uVar63 = (undefined1)((ulong)uVar17 >> 0x28);
      uVar65 = (undefined1)((ulong)uVar17 >> 0x30);
      uVar68 = (undefined1)((ulong)uVar17 >> 0x38);
      auVar3[9] = uVar46;
      auVar3._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar32);
      auVar3[10] = uVar54;
      auVar3[0xb] = uVar58;
      auVar3[0xc] = uVar61;
      auVar3[0xd] = uVar63;
      auVar3[0xe] = uVar65;
      auVar3[0xf] = uVar68;
      auVar85 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(puVar1 + 0xc),auVar3);
      auVar4[9] = uVar46;
      auVar4._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar32);
      auVar4[10] = uVar54;
      auVar4[0xb] = uVar58;
      auVar4[0xc] = uVar61;
      auVar4[0xd] = uVar63;
      auVar4[0xe] = uVar65;
      auVar4[0xf] = uVar68;
      auVar42 = a64_TBL(ZEXT816(0),auVar44,auVar4);
      iVar14 = auVar85._0_4_ << 1;
      uVar46 = (undefined1)((uint)iVar14 >> 8);
      uVar54 = (undefined1)((uint)iVar14 >> 0x10);
      uVar58 = (undefined1)((uint)iVar14 >> 0x18);
      iVar16 = auVar85._4_4_ << 1;
      uVar61 = (undefined1)((uint)iVar16 >> 8);
      uVar63 = (undefined1)((uint)iVar16 >> 0x10);
      uVar65 = (undefined1)((uint)iVar16 >> 0x18);
      iVar19 = auVar85._8_4_ << 1;
      uVar68 = (undefined1)((uint)iVar19 >> 8);
      uVar70 = (undefined1)((uint)iVar19 >> 0x10);
      uVar72 = (undefined1)((uint)iVar19 >> 0x18);
      iVar83 = auVar85._12_4_ << 1;
      uVar75 = (undefined1)((uint)iVar83 >> 8);
      uVar77 = (undefined1)((uint)iVar83 >> 0x10);
      uVar79 = (undefined1)((uint)iVar83 >> 0x18);
      bVar57 = -(*(char *)(puVar1 + 0xe) == '\0');
      iVar12 = *(int *)(&DAT_03aadfe0 + uVar33 * 4);
      uVar80 = CONCAT14(~bVar57,(uint)(~bVar57 & 1)) & 0x1ffffffff;
      bVar47 = (byte)uVar80 | (byte)iVar14;
      bVar50 = (byte)(uVar80 >> 0x20) | (byte)iVar16;
      bVar53 = ~bVar57 & 1 | (byte)iVar19;
      bVar57 = ~bVar57 & 1 | (byte)iVar83;
      auVar5[1] = uVar46;
      auVar5[0] = bVar47;
      auVar5[2] = uVar54;
      auVar5[3] = uVar58;
      auVar5[4] = bVar50;
      auVar5[5] = uVar61;
      auVar5[6] = uVar63;
      auVar5[7] = uVar65;
      auVar5[8] = bVar53;
      auVar5[9] = uVar68;
      auVar5[10] = uVar70;
      auVar5[0xb] = uVar72;
      auVar5[0xc] = bVar57;
      auVar5[0xd] = uVar75;
      auVar5[0xe] = uVar77;
      auVar5[0xf] = uVar79;
      auVar6[1] = uVar46;
      auVar6[0] = bVar47;
      auVar6[2] = uVar54;
      auVar6[3] = uVar58;
      auVar6[4] = bVar50;
      auVar6[5] = uVar61;
      auVar6[6] = uVar63;
      auVar6[7] = uVar65;
      auVar6[8] = bVar53;
      auVar6[9] = uVar68;
      auVar6[10] = uVar70;
      auVar6[0xb] = uVar72;
      auVar6[0xc] = bVar57;
      auVar6[0xd] = uVar75;
      auVar6[0xe] = uVar77;
      auVar6[0xf] = uVar79;
      auVar85 = NEON_ext(auVar5,auVar6,8,1);
      *(ulong *)(local_1060 + local_60) =
           CONCAT17(uVar65,CONCAT16(uVar63,CONCAT15(uVar61,CONCAT14(bVar50,CONCAT13(uVar58,CONCAT12(
                                                  uVar54,CONCAT11(uVar46,bVar47)))))));
      *(long *)((long)auStack_1058 + (long)local_60 * 4) = auVar85._0_8_;
      lVar32 = (long)local_60;
      *(long *)((long)auStack_858 + lVar32 * 4) = auVar42._8_8_;
      *(long *)(local_860 + lVar32) = auVar42._0_8_;
      local_60 = local_60 + iVar12;
    } while (local_60 != 0);
  }
  return;
}


