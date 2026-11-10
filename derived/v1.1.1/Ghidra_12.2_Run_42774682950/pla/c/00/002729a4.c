/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002729a4; name: FUN_002729a4
 */


void FUN_002729a4(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 *param_5,long param_6,long param_7,ulong param_8,long param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined2 uVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  char *pcVar29;
  ulong uVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  undefined1 uVar56;
  byte bVar57;
  undefined1 uVar58;
  byte bVar59;
  undefined1 uVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  byte bVar67;
  undefined1 uVar68;
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  undefined1 uVar72;
  byte bVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined4 uVar102;
  undefined4 uVar103;
  undefined8 uVar104;
  float fVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined8 uVar111;
  undefined8 uVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar115;
  undefined8 uVar116;
  undefined8 uVar117;
  undefined8 uVar118;
  undefined8 uVar119;
  float fVar122;
  float fVar123;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined8 uVar124;
  undefined8 uVar125;
  
  pcVar29 = *(char **)(*(long *)(param_6 + 0x238) + 0x268);
  if ((*(int *)(pcVar29 + 0xc) != -1) && (*(int *)(pcVar29 + 0xc) <= *(int *)(param_9 + 4))) {
    return;
  }
  fVar94 = *(float *)(pcVar29 + 4);
  if (pcVar29[1] == '\0') {
    if (*pcVar29 != '\0') {
      if (*pcVar29 != '\x01') {
        return;
      }
      if (fVar94 <= (float)((ulong)*param_3 >> 0x20)) {
        return;
      }
      param_3[1] = param_3[1];
      *param_3 = CONCAT17((char)((uint)fVar94 >> 0x18),
                          CONCAT16((char)((uint)fVar94 >> 0x10),
                                   CONCAT15((char)((uint)fVar94 >> 8),
                                            CONCAT14(SUB41(fVar94,0),(int)*param_3))));
      *param_5 = param_1;
      return;
    }
    if (fVar94 <= (float)((ulong)*param_3 >> 0x20)) {
      return;
    }
    param_3[1] = param_3[1];
    *param_3 = CONCAT44(fVar94,(int)*param_3);
    uVar33 = param_4[1];
    fVar94 = -(*(float *)(pcVar29 + 8) * (float)((ulong)*param_4 >> 0x20));
    uVar34 = (undefined1)((uint)fVar94 >> 8);
    uVar35 = (undefined1)((uint)fVar94 >> 0x10);
    uVar36 = (undefined1)((uint)fVar94 >> 0x18);
    param_4[1] = uVar33;
    fVar98 = (float)*param_4;
    *param_4 = CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(SUB41(fVar94,0),fVar98))));
    fVar98 = *(float *)(pcVar29 + 0x10) * fVar98;
    param_4[1] = uVar33;
    *param_4 = CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(SUB41(fVar94,0),fVar98))));
    fVar94 = *(float *)(pcVar29 + 0x10) * fVar94;
    uVar34 = (undefined1)((uint)fVar94 >> 8);
    uVar35 = (undefined1)((uint)fVar94 >> 0x10);
    uVar36 = (undefined1)((uint)fVar94 >> 0x18);
    param_4[1] = uVar33;
    *param_4 = CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(SUB41(fVar94,0),fVar98))));
    param_4[1] = (ulong)(uint)(*(float *)(pcVar29 + 0x10) * (float)uVar33);
    *param_4 = CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(SUB41(fVar94,0),fVar98))));
  }
  else {
    if (*(char *)(*(long *)(param_6 + 0xa0) + 0x753) == '\0') {
      uVar33 = *(undefined8 *)(param_6 + 0x348);
      uVar66 = (undefined1)uVar33;
      uVar68 = (undefined1)((ulong)uVar33 >> 8);
      uVar70 = (undefined1)((ulong)uVar33 >> 0x10);
      uVar72 = (undefined1)((ulong)uVar33 >> 0x18);
      uVar74 = (undefined1)((ulong)uVar33 >> 0x20);
      uVar75 = (undefined1)((ulong)uVar33 >> 0x28);
      uVar76 = (undefined1)((ulong)uVar33 >> 0x30);
      uVar77 = (undefined1)((ulong)uVar33 >> 0x38);
      uVar33 = *(undefined8 *)(param_6 + 0x340);
      uVar50 = (undefined1)uVar33;
      uVar52 = (undefined1)((ulong)uVar33 >> 8);
      uVar54 = (undefined1)((ulong)uVar33 >> 0x10);
      uVar56 = (undefined1)((ulong)uVar33 >> 0x18);
      uVar58 = (undefined1)((ulong)uVar33 >> 0x20);
      uVar60 = (undefined1)((ulong)uVar33 >> 0x28);
      uVar62 = (undefined1)((ulong)uVar33 >> 0x30);
      uVar64 = (undefined1)((ulong)uVar33 >> 0x38);
      uVar33 = *(undefined8 *)(param_6 + 0x358);
      uVar42 = (undefined1)uVar33;
      uVar43 = (undefined1)((ulong)uVar33 >> 8);
      uVar44 = (undefined1)((ulong)uVar33 >> 0x10);
      uVar45 = (undefined1)((ulong)uVar33 >> 0x18);
      uVar46 = (undefined1)((ulong)uVar33 >> 0x20);
      uVar47 = (undefined1)((ulong)uVar33 >> 0x28);
      uVar48 = (undefined1)((ulong)uVar33 >> 0x30);
      uVar49 = (undefined1)((ulong)uVar33 >> 0x38);
      uVar33 = *(undefined8 *)(param_6 + 0x350);
      uVar34 = (undefined1)uVar33;
      uVar35 = (undefined1)((ulong)uVar33 >> 8);
      uVar36 = (undefined1)((ulong)uVar33 >> 0x10);
      uVar37 = (undefined1)((ulong)uVar33 >> 0x18);
      uVar38 = (undefined1)((ulong)uVar33 >> 0x20);
      uVar39 = (undefined1)((ulong)uVar33 >> 0x28);
      uVar40 = (undefined1)((ulong)uVar33 >> 0x30);
      uVar41 = (undefined1)((ulong)uVar33 >> 0x38);
      uVar33 = *(undefined8 *)(param_6 + 0x368);
      uVar86 = (undefined1)uVar33;
      uVar87 = (undefined1)((ulong)uVar33 >> 8);
      uVar88 = (undefined1)((ulong)uVar33 >> 0x10);
      uVar89 = (undefined1)((ulong)uVar33 >> 0x18);
      uVar90 = (undefined1)((ulong)uVar33 >> 0x20);
      uVar91 = (undefined1)((ulong)uVar33 >> 0x28);
      uVar92 = (undefined1)((ulong)uVar33 >> 0x30);
      uVar93 = (undefined1)((ulong)uVar33 >> 0x38);
      uVar33 = *(undefined8 *)(param_6 + 0x360);
      uVar78 = (undefined1)uVar33;
      uVar79 = (undefined1)((ulong)uVar33 >> 8);
      uVar80 = (undefined1)((ulong)uVar33 >> 0x10);
      uVar81 = (undefined1)((ulong)uVar33 >> 0x18);
      uVar82 = (undefined1)((ulong)uVar33 >> 0x20);
      uVar83 = (undefined1)((ulong)uVar33 >> 0x28);
      uVar84 = (undefined1)((ulong)uVar33 >> 0x30);
      uVar85 = (undefined1)((ulong)uVar33 >> 0x38);
      fVar98 = (float)((ulong)*(undefined8 *)(param_6 + 0x370) >> 0x20);
    }
    else {
      uVar30 = -(param_8 >> 0x1f & 1) & 0xfffffff000000000 | (param_8 & 0xffffffff) << 4;
      puVar1 = (undefined4 *)(*(long *)(param_7 + 0x40) + uVar30);
      uVar103 = *puVar1;
      uVar50 = (undefined1)uVar103;
      uVar52 = (undefined1)((uint)uVar103 >> 8);
      uVar54 = (undefined1)((uint)uVar103 >> 0x10);
      uVar56 = (undefined1)((uint)uVar103 >> 0x18);
      uVar103 = puVar1[1];
      uVar34 = (undefined1)uVar103;
      uVar35 = (undefined1)((uint)uVar103 >> 8);
      uVar36 = (undefined1)((uint)uVar103 >> 0x10);
      uVar37 = (undefined1)((uint)uVar103 >> 0x18);
      puVar2 = (undefined4 *)(*(long *)(param_7 + 0x48) + uVar30);
      puVar3 = (undefined4 *)(*(long *)(param_7 + 0x50) + uVar30);
      uVar103 = puVar1[2];
      uVar78 = (undefined1)uVar103;
      uVar79 = (undefined1)((uint)uVar103 >> 8);
      uVar80 = (undefined1)((uint)uVar103 >> 0x10);
      uVar81 = (undefined1)((uint)uVar103 >> 0x18);
      uVar103 = *puVar2;
      uVar58 = (undefined1)uVar103;
      uVar60 = (undefined1)((uint)uVar103 >> 8);
      uVar62 = (undefined1)((uint)uVar103 >> 0x10);
      uVar64 = (undefined1)((uint)uVar103 >> 0x18);
      uVar102 = *puVar3;
      uVar103 = puVar2[1];
      uVar38 = (undefined1)uVar103;
      uVar39 = (undefined1)((uint)uVar103 >> 8);
      uVar40 = (undefined1)((uint)uVar103 >> 0x10);
      uVar41 = (undefined1)((uint)uVar103 >> 0x18);
      uVar66 = (undefined1)uVar102;
      uVar68 = (undefined1)((uint)uVar102 >> 8);
      uVar70 = (undefined1)((uint)uVar102 >> 0x10);
      uVar72 = (undefined1)((uint)uVar102 >> 0x18);
      uVar74 = 0;
      uVar75 = 0;
      uVar76 = 0;
      uVar77 = 0;
      uVar102 = puVar3[1];
      uVar103 = puVar2[2];
      uVar82 = (undefined1)uVar103;
      uVar83 = (undefined1)((uint)uVar103 >> 8);
      uVar84 = (undefined1)((uint)uVar103 >> 0x10);
      uVar85 = (undefined1)((uint)uVar103 >> 0x18);
      fVar98 = (float)puVar2[3];
      uVar42 = (undefined1)uVar102;
      uVar43 = (undefined1)((uint)uVar102 >> 8);
      uVar44 = (undefined1)((uint)uVar102 >> 0x10);
      uVar45 = (undefined1)((uint)uVar102 >> 0x18);
      uVar46 = 0;
      uVar47 = 0;
      uVar48 = 0;
      uVar49 = 0;
      uVar103 = puVar3[2];
      uVar86 = (undefined1)uVar103;
      uVar87 = (undefined1)((uint)uVar103 >> 8);
      uVar88 = (undefined1)((uint)uVar103 >> 0x10);
      uVar89 = (undefined1)((uint)uVar103 >> 0x18);
      uVar90 = 0;
      uVar91 = 0;
      uVar92 = 0;
      uVar93 = 0;
    }
    fVar98 = fVar98 + (float)CONCAT13(uVar64,CONCAT12(uVar62,CONCAT11(uVar60,uVar58))) *
                      (float)*param_3 +
                      (float)CONCAT13(uVar41,CONCAT12(uVar40,CONCAT11(uVar39,uVar38))) *
                      (float)((ulong)*param_3 >> 0x20) +
                      (float)CONCAT13(uVar85,CONCAT12(uVar84,CONCAT11(uVar83,uVar82))) *
                      (float)param_3[1];
    if (*pcVar29 != '\0') {
      if (*pcVar29 != '\x01') {
        return;
      }
      if (fVar94 <= fVar98) {
        return;
      }
      *param_5 = param_1;
      return;
    }
    if (fVar94 <= fVar98) {
      return;
    }
    uVar32 = param_4[1];
    fVar94 = (float)*param_4;
    fVar31 = (float)((ulong)*param_4 >> 0x20);
    fVar98 = (float)uVar32;
    fVar95 = (float)CONCAT13(uVar56,CONCAT12(uVar54,CONCAT11(uVar52,uVar50))) * fVar94 +
             (float)CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34))) * fVar31 +
             (float)CONCAT13(uVar81,CONCAT12(uVar80,CONCAT11(uVar79,uVar78))) * fVar98;
    fVar96 = (float)CONCAT13(uVar72,CONCAT12(uVar70,CONCAT11(uVar68,uVar66))) * fVar94 +
             (float)CONCAT13(uVar45,CONCAT12(uVar44,CONCAT11(uVar43,uVar42))) * fVar31 +
             (float)CONCAT13(uVar89,CONCAT12(uVar88,CONCAT11(uVar87,uVar86))) * fVar98;
    fVar97 = -(*(float *)(pcVar29 + 8) *
              ((float)CONCAT13(uVar64,CONCAT12(uVar62,CONCAT11(uVar60,uVar58))) * fVar94 +
               (float)CONCAT13(uVar41,CONCAT12(uVar40,CONCAT11(uVar39,uVar38))) * fVar31 +
              (float)CONCAT13(uVar85,CONCAT12(uVar84,CONCAT11(uVar83,uVar82))) * fVar98));
    auVar113[1] = uVar35;
    auVar113[0] = uVar34;
    auVar113[2] = uVar36;
    auVar113[3] = uVar37;
    auVar113[4] = uVar38;
    auVar113[5] = uVar39;
    auVar113[6] = uVar40;
    auVar113[7] = uVar41;
    auVar113[8] = uVar42;
    auVar113[9] = uVar43;
    auVar113[10] = uVar44;
    auVar113[0xb] = uVar45;
    auVar113[0xc] = uVar46;
    auVar113[0xd] = uVar47;
    auVar113[0xe] = uVar48;
    auVar113[0xf] = uVar49;
    uVar104 = a64_TBL(ZEXT816(0),auVar113,DAT_0388a880);
    auVar120[1] = uVar35;
    auVar120[0] = uVar34;
    auVar120[2] = uVar36;
    auVar120[3] = uVar37;
    auVar120[4] = uVar38;
    auVar120[5] = uVar39;
    auVar120[6] = uVar40;
    auVar120[7] = uVar41;
    auVar120[8] = uVar42;
    auVar120[9] = uVar43;
    auVar120[10] = uVar44;
    auVar120[0xb] = uVar45;
    auVar120[0xc] = uVar46;
    auVar120[0xd] = uVar47;
    auVar120[0xe] = uVar48;
    auVar120[0xf] = uVar49;
    uVar106 = a64_TBL(ZEXT816(0),auVar120,DAT_0388a6f0);
    auVar15[1] = uVar79;
    auVar15[0] = uVar78;
    auVar15[2] = uVar80;
    auVar15[3] = uVar81;
    auVar15[4] = uVar82;
    auVar15[5] = uVar83;
    auVar15[6] = uVar84;
    auVar15[7] = uVar85;
    auVar15[8] = uVar86;
    auVar15[9] = uVar87;
    auVar15[10] = uVar88;
    auVar15[0xb] = uVar89;
    auVar15[0xc] = uVar90;
    auVar15[0xd] = uVar91;
    auVar15[0xe] = uVar92;
    auVar15[0xf] = uVar93;
    uVar33 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a6f0);
    auVar16[1] = uVar79;
    auVar16[0] = uVar78;
    auVar16[2] = uVar80;
    auVar16[3] = uVar81;
    auVar16[4] = uVar82;
    auVar16[5] = uVar83;
    auVar16[6] = uVar84;
    auVar16[7] = uVar85;
    auVar16[8] = uVar86;
    auVar16[9] = uVar87;
    auVar16[10] = uVar88;
    auVar16[0xb] = uVar89;
    auVar16[0xc] = uVar90;
    auVar16[0xd] = uVar91;
    auVar16[0xe] = uVar92;
    auVar16[0xf] = uVar93;
    uVar111 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a680);
    auVar17[1] = uVar79;
    auVar17[0] = uVar78;
    auVar17[2] = uVar80;
    auVar17[3] = uVar81;
    auVar17[4] = uVar82;
    auVar17[5] = uVar83;
    auVar17[6] = uVar84;
    auVar17[7] = uVar85;
    auVar17[8] = uVar86;
    auVar17[9] = uVar87;
    auVar17[10] = uVar88;
    auVar17[0xb] = uVar89;
    auVar17[0xc] = uVar90;
    auVar17[0xd] = uVar91;
    auVar17[0xe] = uVar92;
    auVar17[0xf] = uVar93;
    uVar116 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a6d8);
    auVar4[1] = uVar35;
    auVar4[0] = uVar34;
    auVar4[2] = uVar36;
    auVar4[3] = uVar37;
    auVar4[4] = uVar38;
    auVar4[5] = uVar39;
    auVar4[6] = uVar40;
    auVar4[7] = uVar41;
    auVar4[8] = uVar42;
    auVar4[9] = uVar43;
    auVar4[10] = uVar44;
    auVar4[0xb] = uVar45;
    auVar4[0xc] = uVar46;
    auVar4[0xd] = uVar47;
    auVar4[0xe] = uVar48;
    auVar4[0xf] = uVar49;
    uVar117 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a6d8);
    auVar5[1] = uVar35;
    auVar5[0] = uVar34;
    auVar5[2] = uVar36;
    auVar5[3] = uVar37;
    auVar5[4] = uVar38;
    auVar5[5] = uVar39;
    auVar5[6] = uVar40;
    auVar5[7] = uVar41;
    auVar5[8] = uVar42;
    auVar5[9] = uVar43;
    auVar5[10] = uVar44;
    auVar5[0xb] = uVar45;
    auVar5[0xc] = uVar46;
    auVar5[0xd] = uVar47;
    auVar5[0xe] = uVar48;
    auVar5[0xf] = uVar49;
    uVar112 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a680);
    auVar18[1] = uVar79;
    auVar18[0] = uVar78;
    auVar18[2] = uVar80;
    auVar18[3] = uVar81;
    auVar18[4] = uVar82;
    auVar18[5] = uVar83;
    auVar18[6] = uVar84;
    auVar18[7] = uVar85;
    auVar18[8] = uVar86;
    auVar18[9] = uVar87;
    auVar18[10] = uVar88;
    auVar18[0xb] = uVar89;
    auVar18[0xc] = uVar90;
    auVar18[0xd] = uVar91;
    auVar18[0xe] = uVar92;
    auVar18[0xf] = uVar93;
    uVar118 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a880);
    uVar19 = CONCAT13(uVar81,CONCAT12(uVar80,CONCAT11(uVar79,uVar78)));
    uVar102 = CONCAT13(uVar56,CONCAT12(uVar54,CONCAT11(uVar52,uVar50)));
    fVar94 = (float)CONCAT13(uVar56,CONCAT12(uVar54,CONCAT11(uVar52,uVar50))) * (float)uVar104 *
             (float)uVar111 -
             (float)CONCAT13(uVar56,CONCAT12(uVar54,CONCAT11(uVar52,uVar50))) * (float)uVar112 *
             (float)uVar118;
    fVar98 = (float)CONCAT13(uVar64,CONCAT12(uVar62,CONCAT11(uVar60,uVar58))) *
             (float)((ulong)uVar104 >> 0x20) * (float)((ulong)uVar111 >> 0x20) -
             (float)CONCAT13(uVar64,CONCAT12(uVar62,CONCAT11(uVar60,uVar58))) *
             (float)((ulong)uVar112 >> 0x20) * (float)((ulong)uVar118 >> 0x20);
    fVar109 = (float)CONCAT13(uVar72,CONCAT12(uVar70,CONCAT11(uVar68,uVar66))) * (float)uVar106 *
              (float)uVar116 -
              (float)CONCAT13(uVar72,CONCAT12(uVar70,CONCAT11(uVar68,uVar66))) * (float)uVar117 *
              (float)uVar33;
    fVar110 = (float)CONCAT13(uVar77,CONCAT12(uVar76,CONCAT11(uVar75,uVar74))) *
              (float)((ulong)uVar106 >> 0x20) * (float)((ulong)uVar116 >> 0x20) -
              (float)CONCAT13(uVar77,CONCAT12(uVar76,CONCAT11(uVar75,uVar74))) *
              (float)((ulong)uVar117 >> 0x20) * (float)((ulong)uVar33 >> 0x20);
    auVar20._4_4_ = fVar98;
    auVar20._0_4_ = fVar94;
    auVar20._8_4_ = fVar109;
    auVar20._12_4_ = fVar110;
    auVar21._4_4_ = fVar98;
    auVar21._0_4_ = fVar94;
    auVar21._8_4_ = fVar109;
    auVar21._12_4_ = fVar110;
    auVar113 = NEON_ext(auVar20,auVar21,8,1);
    fVar108 = fVar94 + fVar98 + auVar113._0_4_ + auVar113._4_4_;
    auVar22._4_4_ = fVar108;
    auVar22._0_4_ = fVar108;
    auVar22._8_4_ = fVar108;
    auVar22._12_4_ = fVar108;
    auVar113 = NEON_frecpe(auVar22,4);
    auVar23._4_4_ = fVar108;
    auVar23._0_4_ = fVar108;
    auVar23._8_4_ = fVar108;
    auVar23._12_4_ = fVar108;
    auVar120 = NEON_frecps(auVar113,auVar23,4);
    auVar114._0_4_ = auVar113._0_4_ * auVar120._0_4_;
    auVar114._4_4_ = auVar113._4_4_ * auVar120._4_4_;
    auVar114._8_4_ = auVar113._8_4_ * auVar120._8_4_;
    auVar114._12_4_ = auVar113._12_4_ * auVar120._12_4_;
    auVar24._4_4_ = fVar108;
    auVar24._0_4_ = fVar108;
    auVar24._8_4_ = fVar108;
    auVar24._12_4_ = fVar108;
    auVar113 = NEON_frecps(auVar114,auVar24,4);
    fVar98 = auVar114._0_4_ * auVar113._0_4_;
    fVar109 = auVar114._4_4_ * auVar113._4_4_;
    fVar110 = auVar114._8_4_ * auVar113._8_4_;
    uVar103 = CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34)));
    auVar121._4_4_ =
         (int)(CONCAT17(uVar41,CONCAT16(uVar40,CONCAT15(uVar39,CONCAT14(uVar38,uVar103)))) >> 0x20);
    auVar121._0_4_ =
         (int)(CONCAT17(uVar64,CONCAT16(uVar62,CONCAT15(uVar60,CONCAT14(uVar58,uVar102)))) >> 0x20);
    auVar121._8_4_ =
         (int)(CONCAT17(uVar85,CONCAT16(uVar84,CONCAT15(uVar83,CONCAT14(uVar82,uVar19)))) >> 0x20);
    auVar121._12_4_ = 0;
    uVar10 = (undefined2)(CONCAT12(uVar68,CONCAT11(uVar66,uVar64)) >> 8);
    uVar106 = a64_TBL(ZEXT816(0),auVar121,DAT_0388a880);
    uVar111 = a64_TBL(ZEXT816(0),auVar121,DAT_0388a6f0);
    auVar6[2] = uVar70;
    auVar6._0_2_ = uVar10;
    auVar6[3] = uVar72;
    auVar6[4] = uVar42;
    auVar6[5] = uVar43;
    auVar6[6] = uVar44;
    auVar6[7] = uVar45;
    auVar6[8] = uVar86;
    auVar6[9] = uVar87;
    auVar6[10] = uVar88;
    auVar6[0xb] = uVar89;
    auVar6._12_4_ = 0;
    uVar124 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a6d8);
    auVar7[2] = uVar70;
    auVar7._0_2_ = uVar10;
    auVar7[3] = uVar72;
    auVar7[4] = uVar42;
    auVar7[5] = uVar43;
    auVar7[6] = uVar44;
    auVar7[7] = uVar45;
    auVar7[8] = uVar86;
    auVar7[9] = uVar87;
    auVar7[10] = uVar88;
    auVar7[0xb] = uVar89;
    auVar7._12_4_ = 0;
    uVar112 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
    fVar100 = (float)((ulong)uVar112 >> 0x20);
    auVar8[2] = uVar70;
    auVar8._0_2_ = uVar10;
    auVar8[3] = uVar72;
    auVar8[4] = uVar42;
    auVar8[5] = uVar43;
    auVar8[6] = uVar44;
    auVar8[7] = uVar45;
    auVar8[8] = uVar86;
    auVar8[9] = uVar87;
    auVar8[10] = uVar88;
    auVar8[0xb] = uVar89;
    auVar8._12_4_ = 0;
    uVar125 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a880);
    auVar9[2] = uVar70;
    auVar9._0_2_ = uVar10;
    auVar9[3] = uVar72;
    auVar9[4] = uVar42;
    auVar9[5] = uVar43;
    auVar9[6] = uVar44;
    auVar9[7] = uVar45;
    auVar9[8] = uVar86;
    auVar9[9] = uVar87;
    auVar9[10] = uVar88;
    auVar9[0xb] = uVar89;
    auVar9._12_4_ = 0;
    uVar33 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a6f0);
    auVar25._4_4_ = uVar103;
    auVar25._0_4_ = uVar102;
    auVar25._8_4_ = uVar19;
    auVar25._12_4_ = 0;
    uVar116 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a880);
    auVar26._4_4_ = uVar103;
    auVar26._0_4_ = uVar102;
    auVar26._8_4_ = uVar19;
    auVar26._12_4_ = 0;
    uVar117 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a6f0);
    uVar104 = a64_TBL(ZEXT816(0),auVar121,DAT_0388a680);
    uVar119 = a64_TBL(ZEXT816(0),auVar121,DAT_0388a6d8);
    auVar27._4_4_ = uVar103;
    auVar27._0_4_ = uVar102;
    auVar27._8_4_ = uVar19;
    auVar27._12_4_ = 0;
    uVar118 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a680);
    auVar28._4_4_ = uVar103;
    auVar28._0_4_ = uVar102;
    auVar28._8_4_ = uVar19;
    auVar28._12_4_ = 0;
    uVar107 = a64_TBL(ZEXT816(0),auVar28,DAT_0388a6d8);
    fVar11 = (float)((ulong)uVar106 >> 0x20);
    fVar94 = (float)((ulong)uVar104 >> 0x20);
    fVar101 = (float)((ulong)uVar125 >> 0x20);
    fVar105 = (float)((ulong)uVar118 >> 0x20);
    fVar99 = (float)((ulong)uVar116 >> 0x20);
    iVar12 = -(uint)(fVar108 == 0.0);
    iVar13 = -(uint)(fVar108 == 0.0);
    iVar14 = -(uint)(fVar108 == 0.0);
    bVar51 = ~(byte)iVar12;
    bVar53 = ~(byte)((uint)iVar12 >> 8);
    bVar55 = ~(byte)((uint)iVar12 >> 0x10);
    bVar57 = ~(byte)((uint)iVar12 >> 0x18);
    bVar59 = ~(byte)iVar13;
    bVar61 = ~(byte)((uint)iVar13 >> 8);
    bVar63 = ~(byte)((uint)iVar13 >> 0x10);
    bVar65 = ~(byte)((uint)iVar13 >> 0x18);
    bVar67 = ~(byte)iVar14;
    bVar69 = ~(byte)((uint)iVar14 >> 8);
    bVar71 = ~(byte)((uint)iVar14 >> 0x10);
    bVar73 = ~(byte)((uint)iVar14 >> 0x18);
    fVar115 = fVar98 * ((float)uVar106 * (float)uVar112 - (float)uVar125 * (float)uVar104);
    fVar122 = fVar109 * (fVar11 * fVar100 - fVar101 * fVar94);
    fVar123 = fVar110 * ((float)uVar111 * (float)uVar124 - (float)uVar33 * (float)uVar119);
    fVar108 = fVar98 * ((float)uVar125 * (float)uVar118 - (float)uVar116 * (float)uVar112);
    fVar100 = fVar109 * (fVar101 * fVar105 - fVar99 * fVar100);
    fVar101 = fVar110 * ((float)uVar33 * (float)uVar107 - (float)uVar117 * (float)uVar124);
    fVar108 = (float)CONCAT13((byte)((uint)fVar108 >> 0x18) & bVar57,
                              CONCAT12((byte)((uint)fVar108 >> 0x10) & bVar55,
                                       CONCAT11((byte)((uint)fVar108 >> 8) & bVar53,
                                                SUB41(fVar108,0) & bVar51)));
    fVar98 = fVar98 * ((float)uVar104 * (float)uVar116 - (float)uVar106 * (float)uVar118);
    fVar109 = fVar109 * (fVar94 * fVar99 - fVar11 * fVar105);
    fVar110 = fVar110 * ((float)uVar119 * (float)uVar117 - (float)uVar111 * (float)uVar107);
    fVar94 = *(float *)(pcVar29 + 0x10) *
             ((float)CONCAT13((byte)((uint)fVar115 >> 0x18) & bVar57,
                              CONCAT12((byte)((uint)fVar115 >> 0x10) & bVar55,
                                       CONCAT11((byte)((uint)fVar115 >> 8) & bVar53,
                                                SUB41(fVar115,0) & bVar51))) * fVar95 +
              fVar108 * fVar97 +
              (float)CONCAT13((byte)((uint)fVar98 >> 0x18) & bVar57,
                              CONCAT12((byte)((uint)fVar98 >> 0x10) & bVar55,
                                       CONCAT11((byte)((uint)fVar98 >> 8) & bVar53,
                                                SUB41(fVar98,0) & bVar51))) * fVar96 + 0.0);
    param_4[1] = uVar32;
    *param_4 = CONCAT44(fVar31,fVar94);
    uVar33 = CONCAT44(*(float *)(pcVar29 + 0x10) *
                      ((float)CONCAT13((byte)((uint)fVar122 >> 0x18) & bVar65,
                                       CONCAT12((byte)((uint)fVar122 >> 0x10) & bVar63,
                                                CONCAT11((byte)((uint)fVar122 >> 8) & bVar61,
                                                         SUB41(fVar122,0) & bVar59))) * fVar95 +
                       (float)(CONCAT17((byte)((uint)fVar100 >> 0x18) & bVar65,
                                        CONCAT16((byte)((uint)fVar100 >> 0x10) & bVar63,
                                                 CONCAT15((byte)((uint)fVar100 >> 8) & bVar61,
                                                          CONCAT14(SUB41(fVar100,0) & bVar59,fVar108
                                                                  )))) >> 0x20) * fVar97 +
                       (float)CONCAT13((byte)((uint)fVar109 >> 0x18) & bVar65,
                                       CONCAT12((byte)((uint)fVar109 >> 0x10) & bVar63,
                                                CONCAT11((byte)((uint)fVar109 >> 8) & bVar61,
                                                         SUB41(fVar109,0) & bVar59))) * fVar96 + 0.0
                      ),fVar94);
    param_4[1] = uVar32;
    *param_4 = uVar33;
    param_4[1] = (ulong)(uint)(*(float *)(pcVar29 + 0x10) *
                              ((float)CONCAT13((byte)((uint)fVar123 >> 0x18) & bVar73,
                                               CONCAT12((byte)((uint)fVar123 >> 0x10) & bVar71,
                                                        CONCAT11((byte)((uint)fVar123 >> 8) & bVar69
                                                                 ,SUB41(fVar123,0) & bVar67))) *
                               fVar95 + (float)CONCAT13((byte)((uint)fVar101 >> 0x18) & bVar73,
                                                        CONCAT12((byte)((uint)fVar101 >> 0x10) &
                                                                 bVar71,CONCAT11((byte)((uint)
                                                  fVar101 >> 8) & bVar69,SUB41(fVar101,0) & bVar67))
                                                  ) * fVar97 +
                               (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & bVar73,
                                               CONCAT12((byte)((uint)fVar110 >> 0x10) & bVar71,
                                                        CONCAT11((byte)((uint)fVar110 >> 8) & bVar69
                                                                 ,SUB41(fVar110,0) & bVar67))) *
                               fVar96 + 0.0));
    *param_4 = uVar33;
  }
  *(int *)(param_9 + 4) = *(int *)(param_9 + 4) + 1;
  return;
}


