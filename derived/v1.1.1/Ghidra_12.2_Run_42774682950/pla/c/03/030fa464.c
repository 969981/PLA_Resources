/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fa464; name: FUN_030fa464
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030fa464(long *param_1,float *param_2,undefined8 *param_3,long param_4)

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
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  byte bVar28;
  byte bVar29;
  long *plVar30;
  long lVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  uint uVar37;
  float fVar38;
  float fVar42;
  float fVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar44;
  undefined1 auVar41 [16];
  undefined1 uVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
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
  uint5 uVar73;
  uint uVar75;
  uint uVar76;
  undefined1 auVar74 [16];
  float fVar77;
  int iVar78;
  float fVar79;
  int iVar80;
  float fVar81;
  int iVar82;
  float fVar83;
  int iVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined8 local_1068;
  uint local_1060 [2];
  undefined8 auStack_1058 [255];
  uint local_860 [2];
  undefined8 auStack_858 [255];
  int local_60;
  
  uVar27 = _UNK_03889d78;
  uVar26 = _DAT_03889d70;
  uVar25 = _UNK_03889708;
  uVar24 = _DAT_03889700;
  uVar23 = _UNK_03889088;
  uVar22 = _DAT_03889080;
  bVar28 = *(byte *)(param_4 + 0x10);
  bVar29 = *(byte *)(param_4 + 0x11);
  if (((bVar29 & bVar28) == 0) && (*(char *)(*(long *)(param_4 + 0x88) + 0x18) == '\0')) {
    fVar18 = *param_2;
    fVar19 = param_2[1];
    fVar20 = param_2[2];
    auVar21._4_4_ = fVar18;
    auVar21._0_4_ = fVar18;
    auVar21._12_4_ = fVar18;
    auVar21._8_4_ = fVar18;
    auVar15._4_4_ = fVar19;
    auVar15._0_4_ = fVar19;
    local_1068 = *param_3;
    local_860[0] = 0;
    local_1060[0] = 2;
    local_60 = 1;
    uVar35 = local_1068;
    do {
      while( true ) {
        lVar31 = (long)local_60;
        *(undefined8 *)((long)auStack_858 + lVar31 * 4) = uVar35;
        *(undefined8 *)(local_860 + lVar31) = local_1068;
        uVar37 = local_60 + 3;
        uVar75 = uVar37 & 0xfffffffc;
        fVar33 = (float)local_1068;
        fVar34 = (float)((ulong)local_1068 >> 0x20);
        fVar36 = (float)((ulong)uVar35 >> 0x20);
        if ((int)uVar75 < 0x81) {
          uVar32 = CONCAT44(uVar37,uVar37) & 0xfffffffcfffffffc;
          uVar76 = (uint)fVar33 & 0xffffff00;
          uVar8 = (uint)fVar34 & 0xffffff00;
          uVar10 = (uint)(float)uVar35 & 0xffffff00;
          uVar13 = (uint)fVar36 & 0xffffff00;
          auVar39[0] = (undefined1)uVar32;
          auVar39[1] = (byte)(uVar32 >> 8) | (byte)(uVar76 >> 8);
          auVar39[2] = (byte)(uVar32 >> 0x10) | (byte)(uVar76 >> 0x10);
          auVar39[3] = (byte)(uVar32 >> 0x18) | (byte)(uVar76 >> 0x18);
          auVar39[4] = (undefined1)(uVar32 >> 0x20);
          auVar39[5] = (byte)(uVar32 >> 0x28) | (byte)(uVar8 >> 8);
          auVar39[6] = (byte)(uVar32 >> 0x30) | (byte)(uVar8 >> 0x10);
          auVar39[7] = (byte)(uVar32 >> 0x38) | (byte)(uVar8 >> 0x18);
          auVar39[8] = (undefined1)uVar75;
          bVar46 = (byte)(uVar75 >> 8);
          auVar39[9] = bVar46 | (byte)(uVar10 >> 8);
          bVar47 = (byte)(uVar75 >> 0x10);
          auVar39[10] = bVar47 | (byte)(uVar10 >> 0x10);
          bVar48 = (byte)(uVar75 >> 0x18);
          auVar39[0xb] = bVar48 | (byte)(uVar10 >> 0x18);
          auVar39[0xc] = auVar39[8];
          auVar39[0xd] = bVar46 | (byte)(uVar13 >> 8);
          auVar39[0xe] = bVar47 | (byte)(uVar13 >> 0x10);
          auVar39[0xf] = bVar48 | (byte)(uVar13 >> 0x18);
          if (3 < (int)uVar75) {
            uVar75 = local_860[0] & 0xffffff00;
            uVar76 = local_860[1] & 0xffffff00;
            uVar8 = (uint)auStack_858[0] & 0xffffff00;
            uVar10 = (uint)((ulong)auStack_858[0] >> 0x20) & 0xffffff00;
            auVar40[1] = (byte)(uVar75 >> 8) | (byte)((ulong)uVar26 >> 8);
            auVar40[0] = (char)uVar26;
            auVar40[2] = (byte)(uVar75 >> 0x10) | (byte)((ulong)uVar26 >> 0x10);
            auVar40[3] = (byte)(uVar75 >> 0x18) | (byte)((ulong)uVar26 >> 0x18);
            auVar40[4] = (char)((ulong)uVar26 >> 0x20);
            auVar40[5] = (byte)(uVar76 >> 8) | (byte)((ulong)uVar26 >> 0x28);
            auVar40[6] = (byte)(uVar76 >> 0x10) | (byte)((ulong)uVar26 >> 0x30);
            auVar40[7] = (byte)(uVar76 >> 0x18) | (byte)((ulong)uVar26 >> 0x38);
            auVar40[8] = (char)uVar27;
            auVar40[9] = (byte)(uVar8 >> 8) | (byte)((ulong)uVar27 >> 8);
            auVar40[10] = (byte)(uVar8 >> 0x10) | (byte)((ulong)uVar27 >> 0x10);
            auVar40[0xb] = (byte)(uVar8 >> 0x18) | (byte)((ulong)uVar27 >> 0x18);
            auVar40[0xc] = (char)((ulong)uVar27 >> 0x20);
            auVar40[0xd] = (byte)(uVar10 >> 8) | (byte)((ulong)uVar27 >> 0x28);
            auVar40[0xe] = (byte)(uVar10 >> 0x10) | (byte)((ulong)uVar27 >> 0x30);
            auVar40[0xf] = (byte)(uVar10 >> 0x18) | (byte)((ulong)uVar27 >> 0x38);
            auVar39 = NEON_smin(auVar40,auVar39,4);
            if (7 < uVar37) {
              uVar51 = (undefined1)uVar23;
              bVar55 = (byte)((ulong)uVar23 >> 8);
              bVar57 = (byte)((ulong)uVar23 >> 0x10);
              bVar59 = (byte)((ulong)uVar23 >> 0x18);
              uVar54 = (undefined1)((ulong)uVar23 >> 0x20);
              bVar60 = (byte)((ulong)uVar23 >> 0x28);
              bVar62 = (byte)((ulong)uVar23 >> 0x30);
              bVar64 = (byte)((ulong)uVar23 >> 0x38);
              uVar45 = (undefined1)uVar22;
              bVar46 = (byte)((ulong)uVar22 >> 8);
              bVar47 = (byte)((ulong)uVar22 >> 0x10);
              bVar48 = (byte)((ulong)uVar22 >> 0x18);
              uVar49 = (undefined1)((ulong)uVar22 >> 0x20);
              bVar50 = (byte)((ulong)uVar22 >> 0x28);
              bVar52 = (byte)((ulong)uVar22 >> 0x30);
              bVar53 = (byte)((ulong)uVar22 >> 0x38);
              lVar31 = 0x81;
              do {
                auVar40 = *(undefined1 (*) [16])(local_1060 + lVar31 * 4);
                uVar32 = auVar40._0_8_ & 0xffffff00ffffff00;
                uVar75 = auVar40._8_4_ & 0xffffff00;
                uVar76 = auVar40._12_4_ & 0xffffff00;
                auVar74[1] = (byte)(uVar32 >> 8) | bVar46;
                auVar74[0] = uVar45;
                auVar74[2] = (byte)(uVar32 >> 0x10) | bVar47;
                auVar74[3] = (byte)(uVar32 >> 0x18) | bVar48;
                auVar74[4] = uVar49;
                auVar74[5] = (byte)(uVar32 >> 0x28) | bVar50;
                auVar74[6] = (byte)(uVar32 >> 0x30) | bVar52;
                auVar74[7] = (byte)(uVar32 >> 0x38) | bVar53;
                auVar74[8] = uVar51;
                auVar74[9] = (byte)(uVar75 >> 8) | bVar55;
                auVar74[10] = (byte)(uVar75 >> 0x10) | bVar57;
                auVar74[0xb] = (byte)(uVar75 >> 0x18) | bVar59;
                auVar74[0xc] = uVar54;
                auVar74[0xd] = (byte)(uVar76 >> 8) | bVar60;
                auVar74[0xe] = (byte)(uVar76 >> 0x10) | bVar62;
                auVar74[0xf] = (byte)(uVar76 >> 0x18) | bVar64;
                iVar7 = CONCAT13(bVar48,CONCAT12(bVar47,CONCAT11(bVar46,uVar45))) + 4;
                uVar45 = (undefined1)iVar7;
                bVar46 = (byte)((uint)iVar7 >> 8);
                bVar47 = (byte)((uint)iVar7 >> 0x10);
                bVar48 = (byte)((uint)iVar7 >> 0x18);
                iVar7 = CONCAT13(bVar53,CONCAT12(bVar52,CONCAT11(bVar50,uVar49))) + 4;
                uVar49 = (undefined1)iVar7;
                bVar50 = (byte)((uint)iVar7 >> 8);
                bVar52 = (byte)((uint)iVar7 >> 0x10);
                bVar53 = (byte)((uint)iVar7 >> 0x18);
                iVar7 = CONCAT13(bVar59,CONCAT12(bVar57,CONCAT11(bVar55,uVar51))) + 4;
                uVar51 = (undefined1)iVar7;
                bVar55 = (byte)((uint)iVar7 >> 8);
                bVar57 = (byte)((uint)iVar7 >> 0x10);
                bVar59 = (byte)((uint)iVar7 >> 0x18);
                iVar7 = CONCAT13(bVar64,CONCAT12(bVar62,CONCAT11(bVar60,uVar54))) + 4;
                uVar54 = (undefined1)iVar7;
                bVar60 = (byte)((uint)iVar7 >> 8);
                bVar62 = (byte)((uint)iVar7 >> 0x10);
                bVar64 = (byte)((uint)iVar7 >> 0x18);
                auVar39 = NEON_smin(auVar74,auVar39,4);
                uVar32 = lVar31 - 0x7f;
                lVar31 = lVar31 + 1;
              } while (uVar32 < uVar37 >> 2);
            }
          }
          uVar37 = NEON_sminv(auVar39,4);
          uVar37 = uVar37 & 0xff;
          if (local_60 <= (int)uVar37) {
            return;
          }
        }
        else {
          uVar37 = local_60 - 1;
        }
        local_60 = local_60 + -1;
        uVar75 = local_1060[uVar37];
        local_860[uVar37] = local_860[local_60];
        local_1060[uVar37] = local_1060[local_60];
        if ((uVar75 & 1) == 0) break;
        local_1068 = CONCAT44(fVar33,fVar33);
        plVar30 = (long *)(*(long *)(param_4 + 8) + 0x38);
        if ((*(uint *)((long)plVar30 + (ulong)(uVar75 >> 6) * 4 + *plVar30) &
            1 << (ulong)(uVar75 >> 1 & 0x1f)) != 0) {
          FUN_02f7d4d4(param_4,uVar75 >> 1,&local_1068);
          bVar28 = *(byte *)(param_4 + 0x10);
          bVar29 = *(byte *)(param_4 + 0x11);
        }
        if ((bVar28 & bVar29) != 0) {
          return;
        }
        if (*(char *)(*(long *)(param_4 + 0x88) + 0x18) != '\0') {
          return;
        }
        uVar35 = local_1068;
LAB_030fa544:
        if (local_60 == 0) {
          return;
        }
      }
      auVar15._8_4_ = fVar19;
      pVar1 = (unkbyte9 *)((long)param_1 + (ulong)(uVar75 >> 1) * 0x80 + *param_1);
      auVar17._4_4_ = fVar20;
      auVar17._0_4_ = fVar20;
      auVar17._8_4_ = fVar20;
      uVar12 = *(undefined8 *)((long)pVar1 + 8);
      auVar39 = *(undefined1 (*) [16])(pVar1 + 1);
      auVar2[9] = (char)((ulong)uVar12 >> 8);
      auVar2._0_9_ = *pVar1;
      auVar2[10] = (char)((ulong)uVar12 >> 0x10);
      auVar2[0xb] = (char)((ulong)uVar12 >> 0x18);
      auVar2[0xc] = (char)((ulong)uVar12 >> 0x20);
      auVar2[0xd] = (char)((ulong)uVar12 >> 0x28);
      auVar2[0xe] = (char)((ulong)uVar12 >> 0x30);
      auVar2[0xf] = (char)((ulong)uVar12 >> 0x38);
      auVar40 = NEON_fmax(auVar21,auVar2,4);
      iVar7 = -(uint)((float)*(undefined8 *)pVar1 <= auVar39._0_4_);
      iVar9 = -(uint)((float)((ulong)*(undefined8 *)pVar1 >> 0x20) <= auVar39._4_4_);
      iVar11 = -(uint)((float)uVar12 <= auVar39._8_4_);
      iVar14 = -(uint)((float)((ulong)uVar12 >> 0x20) <= auVar39._12_4_);
      auVar39 = NEON_fmin(auVar40,auVar39,4);
      fVar38 = auVar39._0_4_ - fVar18;
      fVar42 = auVar39._4_4_ - fVar18;
      fVar43 = auVar39._8_4_ - fVar18;
      fVar44 = auVar39._12_4_ - fVar18;
      auVar15._12_4_ = fVar19;
      auVar39 = NEON_fmax(auVar15,*(undefined1 (*) [16])(pVar1 + 2),4);
      auVar39 = NEON_fmin(auVar39,*(undefined1 (*) [16])(pVar1 + 3),4);
      fVar77 = auVar39._0_4_ - fVar19;
      fVar79 = auVar39._4_4_ - fVar19;
      fVar81 = auVar39._8_4_ - fVar19;
      fVar83 = auVar39._12_4_ - fVar19;
      auVar17._12_4_ = fVar20;
      auVar39 = NEON_fmax(auVar17,*(undefined1 (*) [16])(pVar1 + 4),4);
      auVar16._12_4_ = (int)((ulong)*(undefined8 *)((long)pVar1 + 0x58) >> 0x20);
      auVar16._0_12_ = *(undefined1 (*) [12])(pVar1 + 5);
      auVar39 = NEON_fmin(auVar39,auVar16,4);
      fVar85 = auVar39._0_4_ - fVar20;
      fVar86 = auVar39._4_4_ - fVar20;
      fVar87 = auVar39._8_4_ - fVar20;
      fVar88 = auVar39._12_4_ - fVar20;
      auVar41._0_4_ = fVar38 * fVar38 + fVar77 * fVar77 + fVar85 * fVar85;
      auVar41._4_4_ = fVar42 * fVar42 + fVar79 * fVar79 + fVar86 * fVar86;
      auVar41._8_4_ = fVar43 * fVar43 + fVar81 * fVar81 + fVar87 * fVar87;
      auVar41._12_4_ = fVar44 * fVar44 + fVar83 * fVar83 + fVar88 * fVar88;
      iVar78 = -(uint)(auVar41._0_4_ <= fVar33);
      iVar80 = -(uint)(auVar41._4_4_ <= fVar34);
      iVar82 = -(uint)(auVar41._8_4_ <= (float)uVar35);
      iVar84 = -(uint)(auVar41._12_4_ <= fVar36);
      bVar46 = (byte)iVar78 & (byte)iVar7;
      bVar47 = (byte)((uint)iVar78 >> 8) & (byte)((uint)iVar7 >> 8);
      bVar48 = (byte)((uint)iVar78 >> 0x10) & (byte)((uint)iVar7 >> 0x10);
      bVar50 = (byte)((uint)iVar78 >> 0x18) & (byte)((uint)iVar7 >> 0x18);
      bVar52 = (byte)iVar80 & (byte)iVar9;
      bVar53 = (byte)((uint)iVar80 >> 8) & (byte)((uint)iVar9 >> 8);
      bVar55 = (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar9 >> 0x10);
      bVar57 = (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar9 >> 0x18);
      bVar59 = (byte)iVar82 & (byte)iVar11;
      bVar60 = (byte)((uint)iVar82 >> 8) & (byte)((uint)iVar11 >> 8);
      bVar62 = (byte)((uint)iVar82 >> 0x10) & (byte)((uint)iVar11 >> 0x10);
      bVar64 = (byte)((uint)iVar82 >> 0x18) & (byte)((uint)iVar11 >> 0x18);
      bVar66 = (byte)iVar84 & (byte)iVar14;
      bVar67 = (byte)((uint)iVar84 >> 8) & (byte)((uint)iVar14 >> 8);
      bVar69 = (byte)((uint)iVar84 >> 0x10) & (byte)((uint)iVar14 >> 0x10);
      bVar71 = (byte)((uint)iVar84 >> 0x18) & (byte)((uint)iVar14 >> 0x18);
      if (((CONCAT13(bVar50,CONCAT12(bVar48,CONCAT11(bVar47,bVar46))) == 0 &&
           CONCAT13(bVar57,CONCAT12(bVar55,CONCAT11(bVar53,bVar52))) == 0) &&
          CONCAT13(bVar64,CONCAT12(bVar62,CONCAT11(bVar60,bVar59))) == 0) &&
          CONCAT13(bVar71,CONCAT12(bVar69,CONCAT11(bVar67,bVar66))) == 0) goto LAB_030fa544;
      uVar32 = (ulong)(uint)(CONCAT13(bVar50 & (byte)((ulong)uVar24 >> 0x18),
                                      CONCAT12(bVar48 & (byte)((ulong)uVar24 >> 0x10),
                                               CONCAT11(bVar47 & (byte)((ulong)uVar24 >> 8),
                                                        bVar46 & (byte)uVar24))) +
                             CONCAT13(bVar57 & (byte)((ulong)uVar24 >> 0x38),
                                      CONCAT12(bVar55 & (byte)((ulong)uVar24 >> 0x30),
                                               CONCAT11(bVar53 & (byte)((ulong)uVar24 >> 0x28),
                                                        bVar52 & (byte)((ulong)uVar24 >> 0x20)))) +
                            CONCAT13(bVar64 & (byte)((ulong)uVar25 >> 0x18),
                                     CONCAT12(bVar62 & (byte)((ulong)uVar25 >> 0x10),
                                              CONCAT11(bVar60 & (byte)((ulong)uVar25 >> 8),
                                                       bVar59 & (byte)uVar25))) +
                            CONCAT13(bVar71 & (byte)((ulong)uVar25 >> 0x38),
                                     CONCAT12(bVar69 & (byte)((ulong)uVar25 >> 0x30),
                                              CONCAT11(bVar67 & (byte)((ulong)uVar25 >> 0x28),
                                                       bVar66 & (byte)((ulong)uVar25 >> 0x20)))));
      lVar31 = uVar32 * 0x10;
      uVar12 = *(undefined8 *)(&UNK_03aae128 + lVar31);
      uVar45 = (undefined1)((ulong)uVar12 >> 8);
      uVar49 = (undefined1)((ulong)uVar12 >> 0x10);
      uVar51 = (undefined1)((ulong)uVar12 >> 0x18);
      uVar54 = (undefined1)((ulong)uVar12 >> 0x20);
      uVar56 = (undefined1)((ulong)uVar12 >> 0x28);
      uVar58 = (undefined1)((ulong)uVar12 >> 0x30);
      uVar61 = (undefined1)((ulong)uVar12 >> 0x38);
      auVar3[9] = uVar45;
      auVar3._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar31);
      auVar3[10] = uVar49;
      auVar3[0xb] = uVar51;
      auVar3[0xc] = uVar54;
      auVar3[0xd] = uVar56;
      auVar3[0xe] = uVar58;
      auVar3[0xf] = uVar61;
      auVar40 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pVar1 + 6),auVar3);
      auVar4[9] = uVar45;
      auVar4._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar31);
      auVar4[10] = uVar49;
      auVar4[0xb] = uVar51;
      auVar4[0xc] = uVar54;
      auVar4[0xd] = uVar56;
      auVar4[0xe] = uVar58;
      auVar4[0xf] = uVar61;
      auVar39 = a64_TBL(ZEXT816(0),auVar41,auVar4);
      iVar9 = auVar40._0_4_ << 1;
      uVar45 = (undefined1)((uint)iVar9 >> 8);
      uVar49 = (undefined1)((uint)iVar9 >> 0x10);
      uVar51 = (undefined1)((uint)iVar9 >> 0x18);
      iVar11 = auVar40._4_4_ << 1;
      uVar54 = (undefined1)((uint)iVar11 >> 8);
      uVar56 = (undefined1)((uint)iVar11 >> 0x10);
      uVar58 = (undefined1)((uint)iVar11 >> 0x18);
      iVar14 = auVar40._8_4_ << 1;
      uVar61 = (undefined1)((uint)iVar14 >> 8);
      uVar63 = (undefined1)((uint)iVar14 >> 0x10);
      uVar65 = (undefined1)((uint)iVar14 >> 0x18);
      iVar78 = auVar40._12_4_ << 1;
      uVar68 = (undefined1)((uint)iVar78 >> 8);
      uVar70 = (undefined1)((uint)iVar78 >> 0x10);
      uVar72 = (undefined1)((uint)iVar78 >> 0x18);
      bVar50 = -(*(char *)(pVar1 + 7) == '\0');
      iVar7 = *(int *)(&DAT_03aadfe0 + uVar32 * 4);
      uVar73 = CONCAT14(~bVar50,(uint)(~bVar50 & 1)) & 0x1ffffffff;
      bVar46 = (byte)uVar73 | (byte)iVar9;
      bVar47 = (byte)(uVar73 >> 0x20) | (byte)iVar11;
      bVar48 = ~bVar50 & 1 | (byte)iVar14;
      bVar50 = ~bVar50 & 1 | (byte)iVar78;
      auVar5[1] = uVar45;
      auVar5[0] = bVar46;
      auVar5[2] = uVar49;
      auVar5[3] = uVar51;
      auVar5[4] = bVar47;
      auVar5[5] = uVar54;
      auVar5[6] = uVar56;
      auVar5[7] = uVar58;
      auVar5[8] = bVar48;
      auVar5[9] = uVar61;
      auVar5[10] = uVar63;
      auVar5[0xb] = uVar65;
      auVar5[0xc] = bVar50;
      auVar5[0xd] = uVar68;
      auVar5[0xe] = uVar70;
      auVar5[0xf] = uVar72;
      auVar6[1] = uVar45;
      auVar6[0] = bVar46;
      auVar6[2] = uVar49;
      auVar6[3] = uVar51;
      auVar6[4] = bVar47;
      auVar6[5] = uVar54;
      auVar6[6] = uVar56;
      auVar6[7] = uVar58;
      auVar6[8] = bVar48;
      auVar6[9] = uVar61;
      auVar6[10] = uVar63;
      auVar6[0xb] = uVar65;
      auVar6[0xc] = bVar50;
      auVar6[0xd] = uVar68;
      auVar6[0xe] = uVar70;
      auVar6[0xf] = uVar72;
      auVar40 = NEON_ext(auVar5,auVar6,8,1);
      *(ulong *)(local_1060 + local_60) =
           CONCAT17(uVar58,CONCAT16(uVar56,CONCAT15(uVar54,CONCAT14(bVar47,CONCAT13(uVar51,CONCAT12(
                                                  uVar49,CONCAT11(uVar45,bVar46)))))));
      *(long *)((long)auStack_1058 + (long)local_60 * 4) = auVar40._0_8_;
      lVar31 = (long)local_60;
      *(long *)((long)auStack_858 + lVar31 * 4) = auVar39._8_8_;
      *(long *)(local_860 + lVar31) = auVar39._0_8_;
      local_60 = local_60 + iVar7;
    } while (local_60 != 0);
  }
  return;
}


