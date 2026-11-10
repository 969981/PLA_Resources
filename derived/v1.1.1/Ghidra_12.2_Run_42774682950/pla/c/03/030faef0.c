/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030faef0; name: FUN_030faef0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030faef0(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  unkbyte9 *pVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar31;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar32;
  float fVar33;
  float fVar34;
  uint uVar35;
  float fVar36;
  float fVar40;
  float fVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar42;
  undefined1 auVar39 [16];
  undefined1 uVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  undefined1 uVar49;
  byte bVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  undefined1 uVar56;
  byte bVar57;
  byte bVar58;
  undefined1 uVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  byte bVar64;
  byte bVar65;
  undefined1 uVar66;
  byte bVar67;
  undefined1 uVar68;
  byte bVar69;
  undefined1 uVar70;
  uint5 uVar71;
  uint uVar73;
  uint uVar74;
  undefined1 auVar72 [16];
  float fVar75;
  int iVar76;
  float fVar77;
  int iVar78;
  float fVar79;
  int iVar80;
  float fVar81;
  int iVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  uint local_1060 [2];
  undefined8 auStack_1058 [255];
  uint local_860 [2];
  undefined8 auStack_858 [255];
  int local_60;
  undefined8 local_48;
  
  uVar24 = _UNK_03889d78;
  uVar23 = _DAT_03889d70;
  uVar22 = _UNK_03889708;
  uVar21 = _DAT_03889700;
  uVar20 = _UNK_03889088;
  uVar19 = _DAT_03889080;
  if (((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) == 0) &&
     (*(char *)(*(long *)(param_4 + 0x88) + 0x18) == '\0')) {
    fVar27 = (float)*param_2;
    fVar31 = (float)((ulong)*param_2 >> 0x20);
    fVar33 = (float)param_2[1];
    auVar17._4_4_ = fVar33;
    auVar17._0_4_ = fVar33;
    uVar29 = *param_3;
    local_1060[0] = 2;
    local_860[0] = 0;
    local_60 = 1;
    uVar30 = uVar29;
    do {
      while( true ) {
        lVar25 = (long)local_60;
        *(undefined8 *)((long)auStack_858 + lVar25 * 4) = uVar29;
        *(undefined8 *)(local_860 + lVar25) = uVar30;
        uVar35 = local_60 + 3;
        uVar73 = uVar35 & 0xfffffffc;
        fVar28 = (float)uVar30;
        fVar32 = (float)((ulong)uVar30 >> 0x20);
        fVar34 = (float)((ulong)uVar29 >> 0x20);
        if ((int)uVar73 < 0x81) {
          uVar26 = CONCAT44(uVar35,uVar35) & 0xfffffffcfffffffc;
          uVar74 = (uint)fVar28 & 0xffffff00;
          uVar8 = (uint)fVar32 & 0xffffff00;
          uVar10 = (uint)(float)uVar29 & 0xffffff00;
          uVar13 = (uint)fVar34 & 0xffffff00;
          auVar37[0] = (undefined1)uVar26;
          auVar37[1] = (byte)(uVar26 >> 8) | (byte)(uVar74 >> 8);
          auVar37[2] = (byte)(uVar26 >> 0x10) | (byte)(uVar74 >> 0x10);
          auVar37[3] = (byte)(uVar26 >> 0x18) | (byte)(uVar74 >> 0x18);
          auVar37[4] = (undefined1)(uVar26 >> 0x20);
          auVar37[5] = (byte)(uVar26 >> 0x28) | (byte)(uVar8 >> 8);
          auVar37[6] = (byte)(uVar26 >> 0x30) | (byte)(uVar8 >> 0x10);
          auVar37[7] = (byte)(uVar26 >> 0x38) | (byte)(uVar8 >> 0x18);
          auVar37[8] = (undefined1)uVar73;
          bVar44 = (byte)(uVar73 >> 8);
          auVar37[9] = bVar44 | (byte)(uVar10 >> 8);
          bVar45 = (byte)(uVar73 >> 0x10);
          auVar37[10] = bVar45 | (byte)(uVar10 >> 0x10);
          bVar46 = (byte)(uVar73 >> 0x18);
          auVar37[0xb] = bVar46 | (byte)(uVar10 >> 0x18);
          auVar37[0xc] = auVar37[8];
          auVar37[0xd] = bVar44 | (byte)(uVar13 >> 8);
          auVar37[0xe] = bVar45 | (byte)(uVar13 >> 0x10);
          auVar37[0xf] = bVar46 | (byte)(uVar13 >> 0x18);
          if (3 < (int)uVar73) {
            uVar73 = local_860[0] & 0xffffff00;
            uVar74 = local_860[1] & 0xffffff00;
            uVar8 = (uint)auStack_858[0] & 0xffffff00;
            uVar10 = (uint)((ulong)auStack_858[0] >> 0x20) & 0xffffff00;
            auVar38[1] = (byte)(uVar73 >> 8) | (byte)((ulong)uVar23 >> 8);
            auVar38[0] = (char)uVar23;
            auVar38[2] = (byte)(uVar73 >> 0x10) | (byte)((ulong)uVar23 >> 0x10);
            auVar38[3] = (byte)(uVar73 >> 0x18) | (byte)((ulong)uVar23 >> 0x18);
            auVar38[4] = (char)((ulong)uVar23 >> 0x20);
            auVar38[5] = (byte)(uVar74 >> 8) | (byte)((ulong)uVar23 >> 0x28);
            auVar38[6] = (byte)(uVar74 >> 0x10) | (byte)((ulong)uVar23 >> 0x30);
            auVar38[7] = (byte)(uVar74 >> 0x18) | (byte)((ulong)uVar23 >> 0x38);
            auVar38[8] = (char)uVar24;
            auVar38[9] = (byte)(uVar8 >> 8) | (byte)((ulong)uVar24 >> 8);
            auVar38[10] = (byte)(uVar8 >> 0x10) | (byte)((ulong)uVar24 >> 0x10);
            auVar38[0xb] = (byte)(uVar8 >> 0x18) | (byte)((ulong)uVar24 >> 0x18);
            auVar38[0xc] = (char)((ulong)uVar24 >> 0x20);
            auVar38[0xd] = (byte)(uVar10 >> 8) | (byte)((ulong)uVar24 >> 0x28);
            auVar38[0xe] = (byte)(uVar10 >> 0x10) | (byte)((ulong)uVar24 >> 0x30);
            auVar38[0xf] = (byte)(uVar10 >> 0x18) | (byte)((ulong)uVar24 >> 0x38);
            auVar37 = NEON_smin(auVar38,auVar37,4);
            if (7 < uVar35) {
              uVar49 = (undefined1)uVar20;
              bVar53 = (byte)((ulong)uVar20 >> 8);
              bVar55 = (byte)((ulong)uVar20 >> 0x10);
              bVar57 = (byte)((ulong)uVar20 >> 0x18);
              uVar52 = (undefined1)((ulong)uVar20 >> 0x20);
              bVar58 = (byte)((ulong)uVar20 >> 0x28);
              bVar60 = (byte)((ulong)uVar20 >> 0x30);
              bVar62 = (byte)((ulong)uVar20 >> 0x38);
              uVar43 = (undefined1)uVar19;
              bVar44 = (byte)((ulong)uVar19 >> 8);
              bVar45 = (byte)((ulong)uVar19 >> 0x10);
              bVar46 = (byte)((ulong)uVar19 >> 0x18);
              uVar47 = (undefined1)((ulong)uVar19 >> 0x20);
              bVar48 = (byte)((ulong)uVar19 >> 0x28);
              bVar50 = (byte)((ulong)uVar19 >> 0x30);
              bVar51 = (byte)((ulong)uVar19 >> 0x38);
              lVar25 = 0x81;
              do {
                auVar38 = *(undefined1 (*) [16])(local_1060 + lVar25 * 4);
                uVar26 = auVar38._0_8_ & 0xffffff00ffffff00;
                uVar73 = auVar38._8_4_ & 0xffffff00;
                uVar74 = auVar38._12_4_ & 0xffffff00;
                auVar72[1] = (byte)(uVar26 >> 8) | bVar44;
                auVar72[0] = uVar43;
                auVar72[2] = (byte)(uVar26 >> 0x10) | bVar45;
                auVar72[3] = (byte)(uVar26 >> 0x18) | bVar46;
                auVar72[4] = uVar47;
                auVar72[5] = (byte)(uVar26 >> 0x28) | bVar48;
                auVar72[6] = (byte)(uVar26 >> 0x30) | bVar50;
                auVar72[7] = (byte)(uVar26 >> 0x38) | bVar51;
                auVar72[8] = uVar49;
                auVar72[9] = (byte)(uVar73 >> 8) | bVar53;
                auVar72[10] = (byte)(uVar73 >> 0x10) | bVar55;
                auVar72[0xb] = (byte)(uVar73 >> 0x18) | bVar57;
                auVar72[0xc] = uVar52;
                auVar72[0xd] = (byte)(uVar74 >> 8) | bVar58;
                auVar72[0xe] = (byte)(uVar74 >> 0x10) | bVar60;
                auVar72[0xf] = (byte)(uVar74 >> 0x18) | bVar62;
                auVar37 = NEON_smin(auVar72,auVar37,4);
                iVar7 = CONCAT13(bVar46,CONCAT12(bVar45,CONCAT11(bVar44,uVar43))) + 4;
                uVar43 = (undefined1)iVar7;
                bVar44 = (byte)((uint)iVar7 >> 8);
                bVar45 = (byte)((uint)iVar7 >> 0x10);
                bVar46 = (byte)((uint)iVar7 >> 0x18);
                iVar7 = CONCAT13(bVar51,CONCAT12(bVar50,CONCAT11(bVar48,uVar47))) + 4;
                uVar47 = (undefined1)iVar7;
                bVar48 = (byte)((uint)iVar7 >> 8);
                bVar50 = (byte)((uint)iVar7 >> 0x10);
                bVar51 = (byte)((uint)iVar7 >> 0x18);
                iVar7 = CONCAT13(bVar57,CONCAT12(bVar55,CONCAT11(bVar53,uVar49))) + 4;
                uVar49 = (undefined1)iVar7;
                bVar53 = (byte)((uint)iVar7 >> 8);
                bVar55 = (byte)((uint)iVar7 >> 0x10);
                bVar57 = (byte)((uint)iVar7 >> 0x18);
                iVar7 = CONCAT13(bVar62,CONCAT12(bVar60,CONCAT11(bVar58,uVar52))) + 4;
                uVar52 = (undefined1)iVar7;
                bVar58 = (byte)((uint)iVar7 >> 8);
                bVar60 = (byte)((uint)iVar7 >> 0x10);
                bVar62 = (byte)((uint)iVar7 >> 0x18);
                uVar26 = lVar25 - 0x7f;
                lVar25 = lVar25 + 1;
              } while (uVar26 < uVar35 >> 2);
            }
          }
          uVar35 = NEON_sminv(auVar37,4);
          uVar35 = uVar35 & 0xff;
          if (local_60 <= (int)uVar35) {
            return;
          }
        }
        else {
          uVar35 = local_60 - 1;
        }
        local_60 = local_60 + -1;
        uVar73 = local_1060[uVar35];
        local_860[uVar35] = local_860[local_60];
        local_1060[uVar35] = local_1060[local_60];
        if ((uVar73 & 1) == 0) break;
        local_48 = CONCAT44(fVar28,fVar28);
        FUN_02f7e564(param_4,uVar73 >> 1,&local_48);
        if ((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) != 0) {
          return;
        }
        if (*(char *)(*(long *)(param_4 + 0x88) + 0x18) != '\0') {
          return;
        }
        uVar29 = local_48;
LAB_030fafc8:
        uVar30 = local_48;
        if (local_60 == 0) {
          return;
        }
      }
      auVar15._4_4_ = fVar31;
      auVar15._0_4_ = fVar31;
      auVar15._8_4_ = fVar31;
      auVar18._4_4_ = fVar27;
      auVar18._0_4_ = fVar27;
      auVar18._8_4_ = fVar27;
      auVar18._12_4_ = fVar27;
      pVar1 = (unkbyte9 *)((long)param_1 + (ulong)(uVar73 >> 1) * 0x80 + *param_1);
      auVar17._8_4_ = fVar33;
      uVar12 = *(undefined8 *)((long)pVar1 + 8);
      auVar37 = *(undefined1 (*) [16])(pVar1 + 1);
      auVar2[9] = (char)((ulong)uVar12 >> 8);
      auVar2._0_9_ = *pVar1;
      auVar2[10] = (char)((ulong)uVar12 >> 0x10);
      auVar2[0xb] = (char)((ulong)uVar12 >> 0x18);
      auVar2[0xc] = (char)((ulong)uVar12 >> 0x20);
      auVar2[0xd] = (char)((ulong)uVar12 >> 0x28);
      auVar2[0xe] = (char)((ulong)uVar12 >> 0x30);
      auVar2[0xf] = (char)((ulong)uVar12 >> 0x38);
      auVar38 = NEON_fmax(auVar18,auVar2,4);
      iVar7 = -(uint)((float)*(undefined8 *)pVar1 <= auVar37._0_4_);
      iVar9 = -(uint)((float)((ulong)*(undefined8 *)pVar1 >> 0x20) <= auVar37._4_4_);
      iVar11 = -(uint)((float)uVar12 <= auVar37._8_4_);
      iVar14 = -(uint)((float)((ulong)uVar12 >> 0x20) <= auVar37._12_4_);
      auVar37 = NEON_fmin(auVar38,auVar37,4);
      fVar36 = auVar37._0_4_ - fVar27;
      fVar40 = auVar37._4_4_ - fVar27;
      fVar41 = auVar37._8_4_ - fVar27;
      fVar42 = auVar37._12_4_ - fVar27;
      auVar15._12_4_ = fVar31;
      auVar37 = NEON_fmax(auVar15,*(undefined1 (*) [16])(pVar1 + 2),4);
      auVar37 = NEON_fmin(auVar37,*(undefined1 (*) [16])(pVar1 + 3),4);
      fVar75 = auVar37._0_4_ - fVar31;
      fVar77 = auVar37._4_4_ - fVar31;
      fVar79 = auVar37._8_4_ - fVar31;
      fVar81 = auVar37._12_4_ - fVar31;
      auVar17._12_4_ = fVar33;
      auVar37 = NEON_fmax(auVar17,*(undefined1 (*) [16])(pVar1 + 4),4);
      auVar16._12_4_ = (int)((ulong)*(undefined8 *)((long)pVar1 + 0x58) >> 0x20);
      auVar16._0_12_ = *(undefined1 (*) [12])(pVar1 + 5);
      auVar37 = NEON_fmin(auVar37,auVar16,4);
      fVar83 = auVar37._0_4_ - fVar33;
      fVar84 = auVar37._4_4_ - fVar33;
      fVar85 = auVar37._8_4_ - fVar33;
      fVar86 = auVar37._12_4_ - fVar33;
      auVar39._0_4_ = fVar36 * fVar36 + fVar75 * fVar75 + fVar83 * fVar83;
      auVar39._4_4_ = fVar40 * fVar40 + fVar77 * fVar77 + fVar84 * fVar84;
      auVar39._8_4_ = fVar41 * fVar41 + fVar79 * fVar79 + fVar85 * fVar85;
      auVar39._12_4_ = fVar42 * fVar42 + fVar81 * fVar81 + fVar86 * fVar86;
      iVar76 = -(uint)(auVar39._0_4_ <= fVar28);
      iVar78 = -(uint)(auVar39._4_4_ <= fVar32);
      iVar80 = -(uint)(auVar39._8_4_ <= (float)uVar29);
      iVar82 = -(uint)(auVar39._12_4_ <= fVar34);
      bVar44 = (byte)iVar76 & (byte)iVar7;
      bVar45 = (byte)((uint)iVar76 >> 8) & (byte)((uint)iVar7 >> 8);
      bVar46 = (byte)((uint)iVar76 >> 0x10) & (byte)((uint)iVar7 >> 0x10);
      bVar48 = (byte)((uint)iVar76 >> 0x18) & (byte)((uint)iVar7 >> 0x18);
      bVar50 = (byte)iVar78 & (byte)iVar9;
      bVar51 = (byte)((uint)iVar78 >> 8) & (byte)((uint)iVar9 >> 8);
      bVar53 = (byte)((uint)iVar78 >> 0x10) & (byte)((uint)iVar9 >> 0x10);
      bVar55 = (byte)((uint)iVar78 >> 0x18) & (byte)((uint)iVar9 >> 0x18);
      bVar57 = (byte)iVar80 & (byte)iVar11;
      bVar58 = (byte)((uint)iVar80 >> 8) & (byte)((uint)iVar11 >> 8);
      bVar60 = (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar11 >> 0x10);
      bVar62 = (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar11 >> 0x18);
      bVar64 = (byte)iVar82 & (byte)iVar14;
      bVar65 = (byte)((uint)iVar82 >> 8) & (byte)((uint)iVar14 >> 8);
      bVar67 = (byte)((uint)iVar82 >> 0x10) & (byte)((uint)iVar14 >> 0x10);
      bVar69 = (byte)((uint)iVar82 >> 0x18) & (byte)((uint)iVar14 >> 0x18);
      local_48 = uVar30;
      if (((CONCAT13(bVar48,CONCAT12(bVar46,CONCAT11(bVar45,bVar44))) == 0 &&
           CONCAT13(bVar55,CONCAT12(bVar53,CONCAT11(bVar51,bVar50))) == 0) &&
          CONCAT13(bVar62,CONCAT12(bVar60,CONCAT11(bVar58,bVar57))) == 0) &&
          CONCAT13(bVar69,CONCAT12(bVar67,CONCAT11(bVar65,bVar64))) == 0) goto LAB_030fafc8;
      uVar26 = (ulong)(uint)(CONCAT13(bVar48 & (byte)((ulong)uVar21 >> 0x18),
                                      CONCAT12(bVar46 & (byte)((ulong)uVar21 >> 0x10),
                                               CONCAT11(bVar45 & (byte)((ulong)uVar21 >> 8),
                                                        bVar44 & (byte)uVar21))) +
                             CONCAT13(bVar55 & (byte)((ulong)uVar21 >> 0x38),
                                      CONCAT12(bVar53 & (byte)((ulong)uVar21 >> 0x30),
                                               CONCAT11(bVar51 & (byte)((ulong)uVar21 >> 0x28),
                                                        bVar50 & (byte)((ulong)uVar21 >> 0x20)))) +
                            CONCAT13(bVar62 & (byte)((ulong)uVar22 >> 0x18),
                                     CONCAT12(bVar60 & (byte)((ulong)uVar22 >> 0x10),
                                              CONCAT11(bVar58 & (byte)((ulong)uVar22 >> 8),
                                                       bVar57 & (byte)uVar22))) +
                            CONCAT13(bVar69 & (byte)((ulong)uVar22 >> 0x38),
                                     CONCAT12(bVar67 & (byte)((ulong)uVar22 >> 0x30),
                                              CONCAT11(bVar65 & (byte)((ulong)uVar22 >> 0x28),
                                                       bVar64 & (byte)((ulong)uVar22 >> 0x20)))));
      lVar25 = uVar26 * 0x10;
      uVar12 = *(undefined8 *)(&UNK_03aae128 + lVar25);
      uVar43 = (undefined1)((ulong)uVar12 >> 8);
      uVar47 = (undefined1)((ulong)uVar12 >> 0x10);
      uVar49 = (undefined1)((ulong)uVar12 >> 0x18);
      uVar52 = (undefined1)((ulong)uVar12 >> 0x20);
      uVar54 = (undefined1)((ulong)uVar12 >> 0x28);
      uVar56 = (undefined1)((ulong)uVar12 >> 0x30);
      uVar59 = (undefined1)((ulong)uVar12 >> 0x38);
      auVar3[9] = uVar43;
      auVar3._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar25);
      auVar3[10] = uVar47;
      auVar3[0xb] = uVar49;
      auVar3[0xc] = uVar52;
      auVar3[0xd] = uVar54;
      auVar3[0xe] = uVar56;
      auVar3[0xf] = uVar59;
      auVar38 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pVar1 + 6),auVar3);
      auVar4[9] = uVar43;
      auVar4._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar25);
      auVar4[10] = uVar47;
      auVar4[0xb] = uVar49;
      auVar4[0xc] = uVar52;
      auVar4[0xd] = uVar54;
      auVar4[0xe] = uVar56;
      auVar4[0xf] = uVar59;
      auVar37 = a64_TBL(ZEXT816(0),auVar39,auVar4);
      iVar9 = auVar38._0_4_ << 1;
      uVar43 = (undefined1)((uint)iVar9 >> 8);
      uVar47 = (undefined1)((uint)iVar9 >> 0x10);
      uVar49 = (undefined1)((uint)iVar9 >> 0x18);
      iVar11 = auVar38._4_4_ << 1;
      uVar52 = (undefined1)((uint)iVar11 >> 8);
      uVar54 = (undefined1)((uint)iVar11 >> 0x10);
      uVar56 = (undefined1)((uint)iVar11 >> 0x18);
      iVar14 = auVar38._8_4_ << 1;
      uVar59 = (undefined1)((uint)iVar14 >> 8);
      uVar61 = (undefined1)((uint)iVar14 >> 0x10);
      uVar63 = (undefined1)((uint)iVar14 >> 0x18);
      iVar76 = auVar38._12_4_ << 1;
      uVar66 = (undefined1)((uint)iVar76 >> 8);
      uVar68 = (undefined1)((uint)iVar76 >> 0x10);
      uVar70 = (undefined1)((uint)iVar76 >> 0x18);
      bVar48 = -(*(char *)(pVar1 + 7) == '\0');
      iVar7 = *(int *)(&DAT_03aadfe0 + uVar26 * 4);
      uVar71 = CONCAT14(~bVar48,(uint)(~bVar48 & 1)) & 0x1ffffffff;
      bVar44 = (byte)uVar71 | (byte)iVar9;
      bVar45 = (byte)(uVar71 >> 0x20) | (byte)iVar11;
      bVar46 = ~bVar48 & 1 | (byte)iVar14;
      bVar48 = ~bVar48 & 1 | (byte)iVar76;
      auVar5[1] = uVar43;
      auVar5[0] = bVar44;
      auVar5[2] = uVar47;
      auVar5[3] = uVar49;
      auVar5[4] = bVar45;
      auVar5[5] = uVar52;
      auVar5[6] = uVar54;
      auVar5[7] = uVar56;
      auVar5[8] = bVar46;
      auVar5[9] = uVar59;
      auVar5[10] = uVar61;
      auVar5[0xb] = uVar63;
      auVar5[0xc] = bVar48;
      auVar5[0xd] = uVar66;
      auVar5[0xe] = uVar68;
      auVar5[0xf] = uVar70;
      auVar6[1] = uVar43;
      auVar6[0] = bVar44;
      auVar6[2] = uVar47;
      auVar6[3] = uVar49;
      auVar6[4] = bVar45;
      auVar6[5] = uVar52;
      auVar6[6] = uVar54;
      auVar6[7] = uVar56;
      auVar6[8] = bVar46;
      auVar6[9] = uVar59;
      auVar6[10] = uVar61;
      auVar6[0xb] = uVar63;
      auVar6[0xc] = bVar48;
      auVar6[0xd] = uVar66;
      auVar6[0xe] = uVar68;
      auVar6[0xf] = uVar70;
      auVar38 = NEON_ext(auVar5,auVar6,8,1);
      *(ulong *)(local_1060 + local_60) =
           CONCAT17(uVar56,CONCAT16(uVar54,CONCAT15(uVar52,CONCAT14(bVar45,CONCAT13(uVar49,CONCAT12(
                                                  uVar47,CONCAT11(uVar43,bVar44)))))));
      *(long *)((long)auStack_1058 + (long)local_60 * 4) = auVar38._0_8_;
      lVar25 = (long)local_60;
      *(long *)((long)auStack_858 + lVar25 * 4) = auVar37._8_8_;
      *(long *)(local_860 + lVar25) = auVar37._0_8_;
      local_60 = local_60 + iVar7;
    } while (local_60 != 0);
  }
  return;
}


