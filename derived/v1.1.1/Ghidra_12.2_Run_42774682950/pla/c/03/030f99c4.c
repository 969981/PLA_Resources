/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f99c4; name: FUN_030f99c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030f99c4(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

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
  long *plVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  uint uVar36;
  float fVar37;
  float fVar41;
  float fVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar43;
  undefined1 auVar40 [16];
  undefined1 uVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  byte bVar52;
  undefined1 uVar53;
  byte bVar54;
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  byte bVar58;
  byte bVar59;
  undefined1 uVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  byte bVar66;
  undefined1 uVar67;
  byte bVar68;
  undefined1 uVar69;
  byte bVar70;
  undefined1 uVar71;
  uint5 uVar72;
  uint uVar74;
  uint uVar75;
  undefined1 auVar73 [16];
  float fVar76;
  int iVar77;
  float fVar78;
  int iVar79;
  float fVar80;
  int iVar81;
  float fVar82;
  int iVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined8 local_1068;
  uint local_1060 [2];
  undefined8 auStack_1058 [255];
  uint local_860 [2];
  undefined8 auStack_858 [255];
  int local_60;
  
  uVar24 = _UNK_03889d78;
  uVar23 = _DAT_03889d70;
  uVar22 = _UNK_03889708;
  uVar21 = _DAT_03889700;
  uVar20 = _UNK_03889088;
  uVar19 = _DAT_03889080;
  if (((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) == 0) &&
     (*(char *)(*(long *)(param_4 + 0x88) + 0x18) == '\0')) {
    fVar29 = (float)*param_2;
    fVar31 = (float)((ulong)*param_2 >> 0x20);
    fVar33 = (float)param_2[1];
    auVar17._4_4_ = fVar33;
    auVar17._0_4_ = fVar33;
    local_1068 = *param_3;
    local_1060[0] = 2;
    local_860[0] = 0;
    local_60 = 1;
    uVar34 = local_1068;
    do {
      while( true ) {
        lVar27 = (long)local_60;
        *(undefined8 *)((long)auStack_858 + lVar27 * 4) = uVar34;
        *(undefined8 *)(local_860 + lVar27) = local_1068;
        uVar36 = local_60 + 3;
        uVar74 = uVar36 & 0xfffffffc;
        fVar30 = (float)local_1068;
        fVar32 = (float)((ulong)local_1068 >> 0x20);
        fVar35 = (float)((ulong)uVar34 >> 0x20);
        if ((int)uVar74 < 0x81) {
          uVar28 = CONCAT44(uVar36,uVar36) & 0xfffffffcfffffffc;
          uVar75 = (uint)fVar30 & 0xffffff00;
          uVar8 = (uint)fVar32 & 0xffffff00;
          uVar10 = (uint)(float)uVar34 & 0xffffff00;
          uVar13 = (uint)fVar35 & 0xffffff00;
          auVar38[0] = (undefined1)uVar28;
          auVar38[1] = (byte)(uVar28 >> 8) | (byte)(uVar75 >> 8);
          auVar38[2] = (byte)(uVar28 >> 0x10) | (byte)(uVar75 >> 0x10);
          auVar38[3] = (byte)(uVar28 >> 0x18) | (byte)(uVar75 >> 0x18);
          auVar38[4] = (undefined1)(uVar28 >> 0x20);
          auVar38[5] = (byte)(uVar28 >> 0x28) | (byte)(uVar8 >> 8);
          auVar38[6] = (byte)(uVar28 >> 0x30) | (byte)(uVar8 >> 0x10);
          auVar38[7] = (byte)(uVar28 >> 0x38) | (byte)(uVar8 >> 0x18);
          auVar38[8] = (undefined1)uVar74;
          bVar45 = (byte)(uVar74 >> 8);
          auVar38[9] = bVar45 | (byte)(uVar10 >> 8);
          bVar46 = (byte)(uVar74 >> 0x10);
          auVar38[10] = bVar46 | (byte)(uVar10 >> 0x10);
          bVar47 = (byte)(uVar74 >> 0x18);
          auVar38[0xb] = bVar47 | (byte)(uVar10 >> 0x18);
          auVar38[0xc] = auVar38[8];
          auVar38[0xd] = bVar45 | (byte)(uVar13 >> 8);
          auVar38[0xe] = bVar46 | (byte)(uVar13 >> 0x10);
          auVar38[0xf] = bVar47 | (byte)(uVar13 >> 0x18);
          if (3 < (int)uVar74) {
            uVar74 = local_860[0] & 0xffffff00;
            uVar75 = local_860[1] & 0xffffff00;
            uVar8 = (uint)auStack_858[0] & 0xffffff00;
            uVar10 = (uint)((ulong)auStack_858[0] >> 0x20) & 0xffffff00;
            auVar39[1] = (byte)(uVar74 >> 8) | (byte)((ulong)uVar23 >> 8);
            auVar39[0] = (char)uVar23;
            auVar39[2] = (byte)(uVar74 >> 0x10) | (byte)((ulong)uVar23 >> 0x10);
            auVar39[3] = (byte)(uVar74 >> 0x18) | (byte)((ulong)uVar23 >> 0x18);
            auVar39[4] = (char)((ulong)uVar23 >> 0x20);
            auVar39[5] = (byte)(uVar75 >> 8) | (byte)((ulong)uVar23 >> 0x28);
            auVar39[6] = (byte)(uVar75 >> 0x10) | (byte)((ulong)uVar23 >> 0x30);
            auVar39[7] = (byte)(uVar75 >> 0x18) | (byte)((ulong)uVar23 >> 0x38);
            auVar39[8] = (char)uVar24;
            auVar39[9] = (byte)(uVar8 >> 8) | (byte)((ulong)uVar24 >> 8);
            auVar39[10] = (byte)(uVar8 >> 0x10) | (byte)((ulong)uVar24 >> 0x10);
            auVar39[0xb] = (byte)(uVar8 >> 0x18) | (byte)((ulong)uVar24 >> 0x18);
            auVar39[0xc] = (char)((ulong)uVar24 >> 0x20);
            auVar39[0xd] = (byte)(uVar10 >> 8) | (byte)((ulong)uVar24 >> 0x28);
            auVar39[0xe] = (byte)(uVar10 >> 0x10) | (byte)((ulong)uVar24 >> 0x30);
            auVar39[0xf] = (byte)(uVar10 >> 0x18) | (byte)((ulong)uVar24 >> 0x38);
            auVar38 = NEON_smin(auVar39,auVar38,4);
            if (7 < uVar36) {
              uVar50 = (undefined1)uVar20;
              bVar54 = (byte)((ulong)uVar20 >> 8);
              bVar56 = (byte)((ulong)uVar20 >> 0x10);
              bVar58 = (byte)((ulong)uVar20 >> 0x18);
              uVar53 = (undefined1)((ulong)uVar20 >> 0x20);
              bVar59 = (byte)((ulong)uVar20 >> 0x28);
              bVar61 = (byte)((ulong)uVar20 >> 0x30);
              bVar63 = (byte)((ulong)uVar20 >> 0x38);
              uVar44 = (undefined1)uVar19;
              bVar45 = (byte)((ulong)uVar19 >> 8);
              bVar46 = (byte)((ulong)uVar19 >> 0x10);
              bVar47 = (byte)((ulong)uVar19 >> 0x18);
              uVar48 = (undefined1)((ulong)uVar19 >> 0x20);
              bVar49 = (byte)((ulong)uVar19 >> 0x28);
              bVar51 = (byte)((ulong)uVar19 >> 0x30);
              bVar52 = (byte)((ulong)uVar19 >> 0x38);
              lVar27 = 0x81;
              do {
                auVar39 = *(undefined1 (*) [16])(local_1060 + lVar27 * 4);
                uVar28 = auVar39._0_8_ & 0xffffff00ffffff00;
                uVar74 = auVar39._8_4_ & 0xffffff00;
                uVar75 = auVar39._12_4_ & 0xffffff00;
                auVar73[1] = (byte)(uVar28 >> 8) | bVar45;
                auVar73[0] = uVar44;
                auVar73[2] = (byte)(uVar28 >> 0x10) | bVar46;
                auVar73[3] = (byte)(uVar28 >> 0x18) | bVar47;
                auVar73[4] = uVar48;
                auVar73[5] = (byte)(uVar28 >> 0x28) | bVar49;
                auVar73[6] = (byte)(uVar28 >> 0x30) | bVar51;
                auVar73[7] = (byte)(uVar28 >> 0x38) | bVar52;
                auVar73[8] = uVar50;
                auVar73[9] = (byte)(uVar74 >> 8) | bVar54;
                auVar73[10] = (byte)(uVar74 >> 0x10) | bVar56;
                auVar73[0xb] = (byte)(uVar74 >> 0x18) | bVar58;
                auVar73[0xc] = uVar53;
                auVar73[0xd] = (byte)(uVar75 >> 8) | bVar59;
                auVar73[0xe] = (byte)(uVar75 >> 0x10) | bVar61;
                auVar73[0xf] = (byte)(uVar75 >> 0x18) | bVar63;
                auVar38 = NEON_smin(auVar73,auVar38,4);
                iVar7 = CONCAT13(bVar47,CONCAT12(bVar46,CONCAT11(bVar45,uVar44))) + 4;
                uVar44 = (undefined1)iVar7;
                bVar45 = (byte)((uint)iVar7 >> 8);
                bVar46 = (byte)((uint)iVar7 >> 0x10);
                bVar47 = (byte)((uint)iVar7 >> 0x18);
                iVar7 = CONCAT13(bVar52,CONCAT12(bVar51,CONCAT11(bVar49,uVar48))) + 4;
                uVar48 = (undefined1)iVar7;
                bVar49 = (byte)((uint)iVar7 >> 8);
                bVar51 = (byte)((uint)iVar7 >> 0x10);
                bVar52 = (byte)((uint)iVar7 >> 0x18);
                iVar7 = CONCAT13(bVar58,CONCAT12(bVar56,CONCAT11(bVar54,uVar50))) + 4;
                uVar50 = (undefined1)iVar7;
                bVar54 = (byte)((uint)iVar7 >> 8);
                bVar56 = (byte)((uint)iVar7 >> 0x10);
                bVar58 = (byte)((uint)iVar7 >> 0x18);
                iVar7 = CONCAT13(bVar63,CONCAT12(bVar61,CONCAT11(bVar59,uVar53))) + 4;
                uVar53 = (undefined1)iVar7;
                bVar59 = (byte)((uint)iVar7 >> 8);
                bVar61 = (byte)((uint)iVar7 >> 0x10);
                bVar63 = (byte)((uint)iVar7 >> 0x18);
                uVar28 = lVar27 - 0x7f;
                lVar27 = lVar27 + 1;
              } while (uVar28 < uVar36 >> 2);
            }
          }
          uVar36 = NEON_sminv(auVar38,4);
          uVar36 = uVar36 & 0xff;
          if (local_60 <= (int)uVar36) {
            return;
          }
        }
        else {
          uVar36 = local_60 - 1;
        }
        local_60 = local_60 + -1;
        uVar74 = local_1060[uVar36];
        local_860[uVar36] = local_860[local_60];
        local_1060[uVar36] = local_1060[local_60];
        if ((uVar74 & 1) == 0) break;
        local_1068 = CONCAT44(fVar30,fVar30);
        plVar25 = (long *)(*(long *)(param_4 + 8) + 0x28);
        lVar26 = *plVar25;
        lVar27 = 0;
        if (lVar26 != 0) {
          lVar27 = lVar26 + (long)plVar25;
        }
        uVar28 = FUN_02f89744(lVar27,uVar74 >> 1 & 0xffff);
        if ((uVar28 & 1) != 0) {
          FUN_02f7c40c(param_4,uVar74 >> 1,&local_1068);
        }
        if ((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) != 0) {
          return;
        }
        if (*(char *)(*(long *)(param_4 + 0x88) + 0x18) != '\0') {
          return;
        }
        uVar34 = local_1068;
LAB_030f9a9c:
        if (local_60 == 0) {
          return;
        }
      }
      auVar15._4_4_ = fVar31;
      auVar15._0_4_ = fVar31;
      auVar15._8_4_ = fVar31;
      auVar18._4_4_ = fVar29;
      auVar18._0_4_ = fVar29;
      auVar18._8_4_ = fVar29;
      auVar18._12_4_ = fVar29;
      pVar1 = (unkbyte9 *)((long)param_1 + (ulong)(uVar74 >> 1) * 0x80 + *param_1);
      auVar17._8_4_ = fVar33;
      uVar12 = *(undefined8 *)((long)pVar1 + 8);
      auVar38 = *(undefined1 (*) [16])(pVar1 + 1);
      auVar2[9] = (char)((ulong)uVar12 >> 8);
      auVar2._0_9_ = *pVar1;
      auVar2[10] = (char)((ulong)uVar12 >> 0x10);
      auVar2[0xb] = (char)((ulong)uVar12 >> 0x18);
      auVar2[0xc] = (char)((ulong)uVar12 >> 0x20);
      auVar2[0xd] = (char)((ulong)uVar12 >> 0x28);
      auVar2[0xe] = (char)((ulong)uVar12 >> 0x30);
      auVar2[0xf] = (char)((ulong)uVar12 >> 0x38);
      auVar39 = NEON_fmax(auVar18,auVar2,4);
      iVar7 = -(uint)((float)*(undefined8 *)pVar1 <= auVar38._0_4_);
      iVar9 = -(uint)((float)((ulong)*(undefined8 *)pVar1 >> 0x20) <= auVar38._4_4_);
      iVar11 = -(uint)((float)uVar12 <= auVar38._8_4_);
      iVar14 = -(uint)((float)((ulong)uVar12 >> 0x20) <= auVar38._12_4_);
      auVar38 = NEON_fmin(auVar39,auVar38,4);
      fVar37 = auVar38._0_4_ - fVar29;
      fVar41 = auVar38._4_4_ - fVar29;
      fVar42 = auVar38._8_4_ - fVar29;
      fVar43 = auVar38._12_4_ - fVar29;
      auVar15._12_4_ = fVar31;
      auVar38 = NEON_fmax(auVar15,*(undefined1 (*) [16])(pVar1 + 2),4);
      auVar38 = NEON_fmin(auVar38,*(undefined1 (*) [16])(pVar1 + 3),4);
      fVar76 = auVar38._0_4_ - fVar31;
      fVar78 = auVar38._4_4_ - fVar31;
      fVar80 = auVar38._8_4_ - fVar31;
      fVar82 = auVar38._12_4_ - fVar31;
      auVar17._12_4_ = fVar33;
      auVar38 = NEON_fmax(auVar17,*(undefined1 (*) [16])(pVar1 + 4),4);
      auVar16._12_4_ = (int)((ulong)*(undefined8 *)((long)pVar1 + 0x58) >> 0x20);
      auVar16._0_12_ = *(undefined1 (*) [12])(pVar1 + 5);
      auVar38 = NEON_fmin(auVar38,auVar16,4);
      fVar84 = auVar38._0_4_ - fVar33;
      fVar85 = auVar38._4_4_ - fVar33;
      fVar86 = auVar38._8_4_ - fVar33;
      fVar87 = auVar38._12_4_ - fVar33;
      auVar40._0_4_ = fVar37 * fVar37 + fVar76 * fVar76 + fVar84 * fVar84;
      auVar40._4_4_ = fVar41 * fVar41 + fVar78 * fVar78 + fVar85 * fVar85;
      auVar40._8_4_ = fVar42 * fVar42 + fVar80 * fVar80 + fVar86 * fVar86;
      auVar40._12_4_ = fVar43 * fVar43 + fVar82 * fVar82 + fVar87 * fVar87;
      iVar77 = -(uint)(auVar40._0_4_ <= fVar30);
      iVar79 = -(uint)(auVar40._4_4_ <= fVar32);
      iVar81 = -(uint)(auVar40._8_4_ <= (float)uVar34);
      iVar83 = -(uint)(auVar40._12_4_ <= fVar35);
      bVar45 = (byte)iVar77 & (byte)iVar7;
      bVar46 = (byte)((uint)iVar77 >> 8) & (byte)((uint)iVar7 >> 8);
      bVar47 = (byte)((uint)iVar77 >> 0x10) & (byte)((uint)iVar7 >> 0x10);
      bVar49 = (byte)((uint)iVar77 >> 0x18) & (byte)((uint)iVar7 >> 0x18);
      bVar51 = (byte)iVar79 & (byte)iVar9;
      bVar52 = (byte)((uint)iVar79 >> 8) & (byte)((uint)iVar9 >> 8);
      bVar54 = (byte)((uint)iVar79 >> 0x10) & (byte)((uint)iVar9 >> 0x10);
      bVar56 = (byte)((uint)iVar79 >> 0x18) & (byte)((uint)iVar9 >> 0x18);
      bVar58 = (byte)iVar81 & (byte)iVar11;
      bVar59 = (byte)((uint)iVar81 >> 8) & (byte)((uint)iVar11 >> 8);
      bVar61 = (byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar11 >> 0x10);
      bVar63 = (byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar11 >> 0x18);
      bVar65 = (byte)iVar83 & (byte)iVar14;
      bVar66 = (byte)((uint)iVar83 >> 8) & (byte)((uint)iVar14 >> 8);
      bVar68 = (byte)((uint)iVar83 >> 0x10) & (byte)((uint)iVar14 >> 0x10);
      bVar70 = (byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar14 >> 0x18);
      if (((CONCAT13(bVar49,CONCAT12(bVar47,CONCAT11(bVar46,bVar45))) == 0 &&
           CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar51))) == 0) &&
          CONCAT13(bVar63,CONCAT12(bVar61,CONCAT11(bVar59,bVar58))) == 0) &&
          CONCAT13(bVar70,CONCAT12(bVar68,CONCAT11(bVar66,bVar65))) == 0) goto LAB_030f9a9c;
      uVar28 = (ulong)(uint)(CONCAT13(bVar49 & (byte)((ulong)uVar21 >> 0x18),
                                      CONCAT12(bVar47 & (byte)((ulong)uVar21 >> 0x10),
                                               CONCAT11(bVar46 & (byte)((ulong)uVar21 >> 8),
                                                        bVar45 & (byte)uVar21))) +
                             CONCAT13(bVar56 & (byte)((ulong)uVar21 >> 0x38),
                                      CONCAT12(bVar54 & (byte)((ulong)uVar21 >> 0x30),
                                               CONCAT11(bVar52 & (byte)((ulong)uVar21 >> 0x28),
                                                        bVar51 & (byte)((ulong)uVar21 >> 0x20)))) +
                            CONCAT13(bVar63 & (byte)((ulong)uVar22 >> 0x18),
                                     CONCAT12(bVar61 & (byte)((ulong)uVar22 >> 0x10),
                                              CONCAT11(bVar59 & (byte)((ulong)uVar22 >> 8),
                                                       bVar58 & (byte)uVar22))) +
                            CONCAT13(bVar70 & (byte)((ulong)uVar22 >> 0x38),
                                     CONCAT12(bVar68 & (byte)((ulong)uVar22 >> 0x30),
                                              CONCAT11(bVar66 & (byte)((ulong)uVar22 >> 0x28),
                                                       bVar65 & (byte)((ulong)uVar22 >> 0x20)))));
      lVar27 = uVar28 * 0x10;
      uVar12 = *(undefined8 *)(&UNK_03aae128 + lVar27);
      uVar44 = (undefined1)((ulong)uVar12 >> 8);
      uVar48 = (undefined1)((ulong)uVar12 >> 0x10);
      uVar50 = (undefined1)((ulong)uVar12 >> 0x18);
      uVar53 = (undefined1)((ulong)uVar12 >> 0x20);
      uVar55 = (undefined1)((ulong)uVar12 >> 0x28);
      uVar57 = (undefined1)((ulong)uVar12 >> 0x30);
      uVar60 = (undefined1)((ulong)uVar12 >> 0x38);
      auVar3[9] = uVar44;
      auVar3._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar27);
      auVar3[10] = uVar48;
      auVar3[0xb] = uVar50;
      auVar3[0xc] = uVar53;
      auVar3[0xd] = uVar55;
      auVar3[0xe] = uVar57;
      auVar3[0xf] = uVar60;
      auVar39 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pVar1 + 6),auVar3);
      auVar4[9] = uVar44;
      auVar4._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar27);
      auVar4[10] = uVar48;
      auVar4[0xb] = uVar50;
      auVar4[0xc] = uVar53;
      auVar4[0xd] = uVar55;
      auVar4[0xe] = uVar57;
      auVar4[0xf] = uVar60;
      auVar38 = a64_TBL(ZEXT816(0),auVar40,auVar4);
      iVar9 = auVar39._0_4_ << 1;
      uVar44 = (undefined1)((uint)iVar9 >> 8);
      uVar48 = (undefined1)((uint)iVar9 >> 0x10);
      uVar50 = (undefined1)((uint)iVar9 >> 0x18);
      iVar11 = auVar39._4_4_ << 1;
      uVar53 = (undefined1)((uint)iVar11 >> 8);
      uVar55 = (undefined1)((uint)iVar11 >> 0x10);
      uVar57 = (undefined1)((uint)iVar11 >> 0x18);
      iVar14 = auVar39._8_4_ << 1;
      uVar60 = (undefined1)((uint)iVar14 >> 8);
      uVar62 = (undefined1)((uint)iVar14 >> 0x10);
      uVar64 = (undefined1)((uint)iVar14 >> 0x18);
      iVar77 = auVar39._12_4_ << 1;
      uVar67 = (undefined1)((uint)iVar77 >> 8);
      uVar69 = (undefined1)((uint)iVar77 >> 0x10);
      uVar71 = (undefined1)((uint)iVar77 >> 0x18);
      bVar49 = -(*(char *)(pVar1 + 7) == '\0');
      iVar7 = *(int *)(&DAT_03aadfe0 + uVar28 * 4);
      uVar72 = CONCAT14(~bVar49,(uint)(~bVar49 & 1)) & 0x1ffffffff;
      bVar45 = (byte)uVar72 | (byte)iVar9;
      bVar46 = (byte)(uVar72 >> 0x20) | (byte)iVar11;
      bVar47 = ~bVar49 & 1 | (byte)iVar14;
      bVar49 = ~bVar49 & 1 | (byte)iVar77;
      auVar5[1] = uVar44;
      auVar5[0] = bVar45;
      auVar5[2] = uVar48;
      auVar5[3] = uVar50;
      auVar5[4] = bVar46;
      auVar5[5] = uVar53;
      auVar5[6] = uVar55;
      auVar5[7] = uVar57;
      auVar5[8] = bVar47;
      auVar5[9] = uVar60;
      auVar5[10] = uVar62;
      auVar5[0xb] = uVar64;
      auVar5[0xc] = bVar49;
      auVar5[0xd] = uVar67;
      auVar5[0xe] = uVar69;
      auVar5[0xf] = uVar71;
      auVar6[1] = uVar44;
      auVar6[0] = bVar45;
      auVar6[2] = uVar48;
      auVar6[3] = uVar50;
      auVar6[4] = bVar46;
      auVar6[5] = uVar53;
      auVar6[6] = uVar55;
      auVar6[7] = uVar57;
      auVar6[8] = bVar47;
      auVar6[9] = uVar60;
      auVar6[10] = uVar62;
      auVar6[0xb] = uVar64;
      auVar6[0xc] = bVar49;
      auVar6[0xd] = uVar67;
      auVar6[0xe] = uVar69;
      auVar6[0xf] = uVar71;
      auVar39 = NEON_ext(auVar5,auVar6,8,1);
      *(ulong *)(local_1060 + local_60) =
           CONCAT17(uVar57,CONCAT16(uVar55,CONCAT15(uVar53,CONCAT14(bVar46,CONCAT13(uVar50,CONCAT12(
                                                  uVar48,CONCAT11(uVar44,bVar45)))))));
      *(long *)((long)auStack_1058 + (long)local_60 * 4) = auVar39._0_8_;
      lVar27 = (long)local_60;
      *(long *)((long)auStack_858 + lVar27 * 4) = auVar38._8_8_;
      *(long *)(local_860 + lVar27) = auVar38._0_8_;
      local_60 = local_60 + iVar7;
    } while (local_60 != 0);
  }
  return;
}


