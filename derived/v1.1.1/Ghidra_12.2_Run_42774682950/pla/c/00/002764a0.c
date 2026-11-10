/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002764a0; name: FUN_002764a0
 */


void FUN_002764a0(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,uint param_5)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined2 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined3 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar32;
  ulong uVar33;
  int iVar34;
  int iVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  byte *pbVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
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
  byte bVar90;
  byte bVar94;
  byte bVar95;
  undefined4 uVar91;
  int iVar92;
  byte bVar96;
  float fVar93;
  byte bVar97;
  byte bVar100;
  byte bVar101;
  int iVar98;
  byte bVar102;
  float fVar99;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  float fVar111;
  undefined4 uVar112;
  float fVar113;
  float fVar114;
  undefined8 uVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  undefined8 uVar120;
  float fVar121;
  float fVar122;
  undefined8 uVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar135;
  undefined8 uVar131;
  undefined8 uVar132;
  float fVar136;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar137;
  undefined8 uVar138;
  undefined8 uVar139;
  undefined8 uVar140;
  undefined8 uVar141;
  undefined8 uVar142;
  undefined1 auVar143 [16];
  undefined8 uVar144;
  undefined8 uVar145;
  float fVar146;
  float fVar147;
  undefined8 uVar148;
  undefined8 local_40;
  ulong uStack_38;
  
  uVar40 = (ulong)param_5;
  fVar147 = *(float *)(param_3 + 0x4c);
  fVar125 = *(float *)(param_3 + 0x44);
  pbVar41 = *(byte **)(*(long *)(param_3 + 0x238) + 0x280);
  uVar148 = *(undefined8 *)(pbVar41 + 0x10);
  fVar128 = *(float *)(pbVar41 + 0x1c);
  fVar111 = *(float *)(pbVar41 + 0x20);
  fVar3 = *(float *)(pbVar41 + 0x18);
  if ((pbVar41[1] & 1) != 0) {
    fVar111 = fVar111 * *(float *)(*(long *)(param_4 + 0x20) +
                                  (-(ulong)(param_5 >> 0x1f) & 0xfffffff000000000 | uVar40 << 4));
  }
  fVar117 = (float)param_1[1];
  uVar115 = *param_1;
  if (pbVar41[2] != 0) {
    uVar33 = -(ulong)(param_5 >> 0x1f) & 0xfffffff000000000 | uVar40 << 4;
    lVar36 = *(long *)(param_3 + 0x210);
    lVar38 = *(long *)(param_3 + 0x218);
    lVar37 = *(long *)(param_3 + 0x220);
    cVar4 = *(char *)(*(long *)(param_3 + 0xa0) + 0x753);
    if (cVar4 == '\x02') {
      lVar39 = (long)(int)param_5 * 0x10;
      uVar120 = CONCAT44(*(undefined4 *)(lVar38 + uVar33),*(undefined4 *)(lVar36 + uVar33));
      fVar122 = *(float *)(lVar37 + uVar33);
      fVar124 = *(float *)(lVar36 + lVar39 + 4);
      fVar127 = *(float *)(lVar38 + lVar39 + 4);
      fVar129 = *(float *)(lVar37 + lVar39 + 4);
      uVar123 = CONCAT44(*(undefined4 *)(lVar38 + lVar39 + 8),*(undefined4 *)(lVar36 + lVar39 + 8));
      fVar136 = *(float *)(lVar37 + lVar39 + 8);
      fVar130 = *(float *)(param_3 + 0x370);
      fVar135 = *(float *)(param_3 + 0x374);
      fVar137 = *(float *)(param_3 + 0x378);
    }
    else if (cVar4 == '\0') {
      fVar122 = (float)*(undefined8 *)(param_3 + 0x348);
      uVar120 = *(undefined8 *)(param_3 + 0x340);
      fVar129 = (float)*(undefined8 *)(param_3 + 0x358);
      fVar124 = (float)*(undefined8 *)(param_3 + 0x350);
      fVar127 = (float)((ulong)*(undefined8 *)(param_3 + 0x350) >> 0x20);
      fVar136 = (float)*(undefined8 *)(param_3 + 0x368);
      uVar123 = *(undefined8 *)(param_3 + 0x360);
      fVar130 = *(float *)(param_3 + 0x370);
      fVar135 = *(float *)(param_3 + 0x374);
      fVar137 = *(float *)(param_3 + 0x378);
    }
    else {
      lVar39 = (long)(int)param_5 * 0x10;
      uVar120 = CONCAT44(*(undefined4 *)(lVar38 + uVar33),*(undefined4 *)(lVar36 + uVar33));
      fVar122 = *(float *)(lVar37 + uVar33);
      lVar36 = lVar36 + lVar39;
      fVar124 = *(float *)(lVar36 + 4);
      lVar38 = lVar38 + lVar39;
      lVar37 = lVar37 + lVar39;
      fVar127 = *(float *)(lVar38 + 4);
      fVar129 = *(float *)(lVar37 + 4);
      uVar123 = CONCAT44(*(undefined4 *)(lVar38 + 8),*(undefined4 *)(lVar36 + 8));
      fVar136 = *(float *)(lVar37 + 8);
      fVar130 = *(float *)(lVar36 + 0xc);
      fVar135 = *(float *)(lVar38 + 0xc);
      fVar137 = *(float *)(lVar37 + 0xc);
    }
    fVar93 = (float)uVar115;
    fVar99 = (float)((ulong)uVar115 >> 0x20);
    uVar115 = CONCAT44(fVar135 + (float)((ulong)uVar120 >> 0x20) * fVar93 + fVar127 * fVar99 +
                                 (float)((ulong)uVar123 >> 0x20) * fVar117,
                       fVar130 + (float)uVar120 * fVar93 + fVar124 * fVar99 +
                                 (float)uVar123 * fVar117);
    fVar117 = fVar137 + fVar122 * fVar93 + fVar129 * fVar99 + fVar136 * fVar117;
  }
  fVar136 = fVar111 + (float)*(undefined8 *)(pbVar41 + 4) * fVar125 + (float)uVar115 * fVar128;
  fVar137 = fVar111 + (float)((ulong)*(undefined8 *)(pbVar41 + 4) >> 0x20) * fVar125 +
                      (float)((ulong)uVar115 >> 0x20) * fVar128;
  fVar111 = fVar111 + *(float *)(pbVar41 + 0xc) * fVar125 + fVar117 * fVar128;
  if ((*pbVar41 & 1) == 0) {
    iVar32 = (int)fVar136;
    iVar98 = *(int *)PTR_DAT_04372ec8;
    iVar92 = -iVar32;
    if (-1 < iVar32) {
      iVar92 = iVar32;
    }
    iVar34 = (int)fVar137;
    iVar32 = 0;
    if (iVar98 != 0) {
      iVar32 = iVar92 / iVar98;
    }
    iVar35 = (int)fVar111;
    iVar2 = -iVar34;
    if (-1 < iVar34) {
      iVar2 = iVar34;
    }
    iVar34 = -iVar35;
    if (-1 < iVar35) {
      iVar34 = iVar35;
    }
    iVar35 = 0;
    if (iVar98 != 0) {
      iVar35 = iVar2 / iVar98;
    }
    iVar5 = 0;
    if (iVar98 != 0) {
      iVar5 = iVar34 / iVar98;
    }
    iVar92 = (iVar34 - iVar5 * iVar98) +
             ((iVar2 - iVar35 * iVar98) + (iVar92 - iVar32 * iVar98) * iVar98) * iVar98;
    pcVar1 = (char *)(*(long *)(PTR_DAT_04372ec8 + 8) + (long)iVar92 + (long)iVar92 * 2);
    fVar125 = (float)(int)pcVar1[1] / 127.0;
    uStack_38 = (ulong)(uint)((float)(int)pcVar1[2] / 127.0);
    local_40 = CONCAT17((char)((uint)fVar125 >> 0x18),
                        CONCAT16((char)((uint)fVar125 >> 0x10),
                                 CONCAT15((char)((uint)fVar125 >> 8),
                                          CONCAT14(SUB41(fVar125,0),(float)(int)*pcVar1 / 127.0))));
    bVar90 = pbVar41[2];
  }
  else {
    FUN_00276978(SUB41(fVar136,0),SUB41(fVar137,0),SUB41(fVar111,0),PTR_DAT_04372ec8,&local_40);
    bVar90 = pbVar41[2];
  }
  if (bVar90 == 0) {
    uVar50 = (undefined1)uStack_38;
    uVar51 = (undefined1)(uStack_38 >> 8);
    uVar52 = (undefined1)(uStack_38 >> 0x10);
    uVar53 = (undefined1)(uStack_38 >> 0x18);
    uVar54 = (undefined1)(uStack_38 >> 0x20);
    uVar55 = (undefined1)(uStack_38 >> 0x28);
    uVar56 = (undefined1)(uStack_38 >> 0x30);
    uVar57 = (undefined1)(uStack_38 >> 0x38);
    uVar42 = (undefined1)local_40;
    uVar43 = (undefined1)((ulong)local_40 >> 8);
    uVar44 = (undefined1)((ulong)local_40 >> 0x10);
    uVar45 = (undefined1)((ulong)local_40 >> 0x18);
    uVar46 = (undefined1)((ulong)local_40 >> 0x20);
    uVar47 = (undefined1)((ulong)local_40 >> 0x28);
    uVar48 = (undefined1)((ulong)local_40 >> 0x30);
    uVar49 = (undefined1)((ulong)local_40 >> 0x38);
  }
  else {
    uVar40 = -(ulong)(param_5 >> 0x1f) & 0xfffffff000000000 | uVar40 << 4;
    cVar4 = *(char *)(*(long *)(param_3 + 0xa0) + 0x753);
    if ((cVar4 == '\x02') || (cVar4 != '\0')) {
      uVar91 = *(undefined4 *)(*(long *)(param_3 + 0x210) + uVar40);
      uVar42 = (undefined1)uVar91;
      uVar43 = (undefined1)((uint)uVar91 >> 8);
      uVar44 = (undefined1)((uint)uVar91 >> 0x10);
      uVar45 = (undefined1)((uint)uVar91 >> 0x18);
      lVar37 = (long)(int)param_5 * 0x10;
      uVar91 = *(undefined4 *)(*(long *)(param_3 + 0x218) + uVar40);
      uVar46 = (undefined1)uVar91;
      uVar47 = (undefined1)((uint)uVar91 >> 8);
      uVar48 = (undefined1)((uint)uVar91 >> 0x10);
      uVar49 = (undefined1)((uint)uVar91 >> 0x18);
      uVar91 = *(undefined4 *)(*(long *)(param_3 + 0x220) + uVar40);
      lVar36 = *(long *)(param_3 + 0x210) + lVar37;
      uVar50 = (undefined1)uVar91;
      uVar51 = (undefined1)((uint)uVar91 >> 8);
      uVar52 = (undefined1)((uint)uVar91 >> 0x10);
      uVar53 = (undefined1)((uint)uVar91 >> 0x18);
      uVar54 = 0;
      uVar55 = 0;
      uVar56 = 0;
      uVar57 = 0;
      lVar38 = *(long *)(param_3 + 0x218) + lVar37;
      uVar91 = *(undefined4 *)(lVar36 + 4);
      uVar58 = (undefined1)uVar91;
      uVar59 = (undefined1)((uint)uVar91 >> 8);
      uVar60 = (undefined1)((uint)uVar91 >> 0x10);
      uVar61 = (undefined1)((uint)uVar91 >> 0x18);
      uVar91 = *(undefined4 *)(lVar36 + 8);
      uVar74 = (undefined1)uVar91;
      uVar75 = (undefined1)((uint)uVar91 >> 8);
      uVar76 = (undefined1)((uint)uVar91 >> 0x10);
      uVar77 = (undefined1)((uint)uVar91 >> 0x18);
      lVar37 = *(long *)(param_3 + 0x220) + lVar37;
      uVar112 = *(undefined4 *)(lVar37 + 4);
      uVar91 = *(undefined4 *)(lVar38 + 8);
      uVar78 = (undefined1)uVar91;
      uVar79 = (undefined1)((uint)uVar91 >> 8);
      uVar80 = (undefined1)((uint)uVar91 >> 0x10);
      uVar81 = (undefined1)((uint)uVar91 >> 0x18);
      uVar91 = *(undefined4 *)(lVar38 + 4);
      uVar62 = (undefined1)uVar91;
      uVar63 = (undefined1)((uint)uVar91 >> 8);
      uVar64 = (undefined1)((uint)uVar91 >> 0x10);
      uVar65 = (undefined1)((uint)uVar91 >> 0x18);
      uVar91 = *(undefined4 *)(lVar37 + 8);
      uVar66 = (undefined1)uVar112;
      uVar67 = (undefined1)((uint)uVar112 >> 8);
      uVar68 = (undefined1)((uint)uVar112 >> 0x10);
      uVar69 = (undefined1)((uint)uVar112 >> 0x18);
      uVar70 = 0;
      uVar71 = 0;
      uVar72 = 0;
      uVar73 = 0;
      uVar82 = (undefined1)uVar91;
      uVar83 = (undefined1)((uint)uVar91 >> 8);
      uVar84 = (undefined1)((uint)uVar91 >> 0x10);
      uVar85 = (undefined1)((uint)uVar91 >> 0x18);
      uVar86 = 0;
      uVar87 = 0;
      uVar88 = 0;
      uVar89 = 0;
    }
    else {
      uVar115 = *(undefined8 *)(param_3 + 0x348);
      uVar50 = (undefined1)uVar115;
      uVar51 = (undefined1)((ulong)uVar115 >> 8);
      uVar52 = (undefined1)((ulong)uVar115 >> 0x10);
      uVar53 = (undefined1)((ulong)uVar115 >> 0x18);
      uVar54 = (undefined1)((ulong)uVar115 >> 0x20);
      uVar55 = (undefined1)((ulong)uVar115 >> 0x28);
      uVar56 = (undefined1)((ulong)uVar115 >> 0x30);
      uVar57 = (undefined1)((ulong)uVar115 >> 0x38);
      uVar115 = *(undefined8 *)(param_3 + 0x340);
      uVar42 = (undefined1)uVar115;
      uVar43 = (undefined1)((ulong)uVar115 >> 8);
      uVar44 = (undefined1)((ulong)uVar115 >> 0x10);
      uVar45 = (undefined1)((ulong)uVar115 >> 0x18);
      uVar46 = (undefined1)((ulong)uVar115 >> 0x20);
      uVar47 = (undefined1)((ulong)uVar115 >> 0x28);
      uVar48 = (undefined1)((ulong)uVar115 >> 0x30);
      uVar49 = (undefined1)((ulong)uVar115 >> 0x38);
      uVar115 = *(undefined8 *)(param_3 + 0x358);
      uVar66 = (undefined1)uVar115;
      uVar67 = (undefined1)((ulong)uVar115 >> 8);
      uVar68 = (undefined1)((ulong)uVar115 >> 0x10);
      uVar69 = (undefined1)((ulong)uVar115 >> 0x18);
      uVar70 = (undefined1)((ulong)uVar115 >> 0x20);
      uVar71 = (undefined1)((ulong)uVar115 >> 0x28);
      uVar72 = (undefined1)((ulong)uVar115 >> 0x30);
      uVar73 = (undefined1)((ulong)uVar115 >> 0x38);
      uVar115 = *(undefined8 *)(param_3 + 0x350);
      uVar58 = (undefined1)uVar115;
      uVar59 = (undefined1)((ulong)uVar115 >> 8);
      uVar60 = (undefined1)((ulong)uVar115 >> 0x10);
      uVar61 = (undefined1)((ulong)uVar115 >> 0x18);
      uVar62 = (undefined1)((ulong)uVar115 >> 0x20);
      uVar63 = (undefined1)((ulong)uVar115 >> 0x28);
      uVar64 = (undefined1)((ulong)uVar115 >> 0x30);
      uVar65 = (undefined1)((ulong)uVar115 >> 0x38);
      uVar115 = *(undefined8 *)(param_3 + 0x368);
      uVar82 = (undefined1)uVar115;
      uVar83 = (undefined1)((ulong)uVar115 >> 8);
      uVar84 = (undefined1)((ulong)uVar115 >> 0x10);
      uVar85 = (undefined1)((ulong)uVar115 >> 0x18);
      uVar86 = (undefined1)((ulong)uVar115 >> 0x20);
      uVar87 = (undefined1)((ulong)uVar115 >> 0x28);
      uVar88 = (undefined1)((ulong)uVar115 >> 0x30);
      uVar89 = (undefined1)((ulong)uVar115 >> 0x38);
      uVar115 = *(undefined8 *)(param_3 + 0x360);
      uVar74 = (undefined1)uVar115;
      uVar75 = (undefined1)((ulong)uVar115 >> 8);
      uVar76 = (undefined1)((ulong)uVar115 >> 0x10);
      uVar77 = (undefined1)((ulong)uVar115 >> 0x18);
      uVar78 = (undefined1)((ulong)uVar115 >> 0x20);
      uVar79 = (undefined1)((ulong)uVar115 >> 0x28);
      uVar80 = (undefined1)((ulong)uVar115 >> 0x30);
      uVar81 = (undefined1)((ulong)uVar115 >> 0x38);
    }
    auVar9[1] = uVar59;
    auVar9[0] = uVar58;
    auVar9[2] = uVar60;
    auVar9[3] = uVar61;
    auVar9[4] = uVar62;
    auVar9[5] = uVar63;
    auVar9[6] = uVar64;
    auVar9[7] = uVar65;
    auVar9[8] = uVar66;
    auVar9[9] = uVar67;
    auVar9[10] = uVar68;
    auVar9[0xb] = uVar69;
    auVar9[0xc] = uVar70;
    auVar9[0xd] = uVar71;
    auVar9[0xe] = uVar72;
    auVar9[0xf] = uVar73;
    uVar120 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a880);
    auVar10[1] = uVar59;
    auVar10[0] = uVar58;
    auVar10[2] = uVar60;
    auVar10[3] = uVar61;
    auVar10[4] = uVar62;
    auVar10[5] = uVar63;
    auVar10[6] = uVar64;
    auVar10[7] = uVar65;
    auVar10[8] = uVar66;
    auVar10[9] = uVar67;
    auVar10[10] = uVar68;
    auVar10[0xb] = uVar69;
    auVar10[0xc] = uVar70;
    auVar10[0xd] = uVar71;
    auVar10[0xe] = uVar72;
    auVar10[0xf] = uVar73;
    uVar123 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a6f0);
    auVar13[1] = uVar75;
    auVar13[0] = uVar74;
    auVar13[2] = uVar76;
    auVar13[3] = uVar77;
    auVar13[4] = uVar78;
    auVar13[5] = uVar79;
    auVar13[6] = uVar80;
    auVar13[7] = uVar81;
    auVar13[8] = uVar82;
    auVar13[9] = uVar83;
    auVar13[10] = uVar84;
    auVar13[0xb] = uVar85;
    auVar13[0xc] = uVar86;
    auVar13[0xd] = uVar87;
    auVar13[0xe] = uVar88;
    auVar13[0xf] = uVar89;
    uVar131 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a680);
    auVar14[1] = uVar75;
    auVar14[0] = uVar74;
    auVar14[2] = uVar76;
    auVar14[3] = uVar77;
    auVar14[4] = uVar78;
    auVar14[5] = uVar79;
    auVar14[6] = uVar80;
    auVar14[7] = uVar81;
    auVar14[8] = uVar82;
    auVar14[9] = uVar83;
    auVar14[10] = uVar84;
    auVar14[0xb] = uVar85;
    auVar14[0xc] = uVar86;
    auVar14[0xd] = uVar87;
    auVar14[0xe] = uVar88;
    auVar14[0xf] = uVar89;
    uVar138 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a6d8);
    auVar11[1] = uVar59;
    auVar11[0] = uVar58;
    auVar11[2] = uVar60;
    auVar11[3] = uVar61;
    auVar11[4] = uVar62;
    auVar11[5] = uVar63;
    auVar11[6] = uVar64;
    auVar11[7] = uVar65;
    auVar11[8] = uVar66;
    auVar11[9] = uVar67;
    auVar11[10] = uVar68;
    auVar11[0xb] = uVar69;
    auVar11[0xc] = uVar70;
    auVar11[0xd] = uVar71;
    auVar11[0xe] = uVar72;
    auVar11[0xf] = uVar73;
    uVar139 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a6d8);
    auVar12[1] = uVar59;
    auVar12[0] = uVar58;
    auVar12[2] = uVar60;
    auVar12[3] = uVar61;
    auVar12[4] = uVar62;
    auVar12[5] = uVar63;
    auVar12[6] = uVar64;
    auVar12[7] = uVar65;
    auVar12[8] = uVar66;
    auVar12[9] = uVar67;
    auVar12[10] = uVar68;
    auVar12[0xb] = uVar69;
    auVar12[0xc] = uVar70;
    auVar12[0xd] = uVar71;
    auVar12[0xe] = uVar72;
    auVar12[0xf] = uVar73;
    uVar132 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a680);
    auVar15[1] = uVar75;
    auVar15[0] = uVar74;
    auVar15[2] = uVar76;
    auVar15[3] = uVar77;
    auVar15[4] = uVar78;
    auVar15[5] = uVar79;
    auVar15[6] = uVar80;
    auVar15[7] = uVar81;
    auVar15[8] = uVar82;
    auVar15[9] = uVar83;
    auVar15[10] = uVar84;
    auVar15[0xb] = uVar85;
    auVar15[0xc] = uVar86;
    auVar15[0xd] = uVar87;
    auVar15[0xe] = uVar88;
    auVar15[0xf] = uVar89;
    uVar140 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a880);
    auVar16[1] = uVar75;
    auVar16[0] = uVar74;
    auVar16[2] = uVar76;
    auVar16[3] = uVar77;
    auVar16[4] = uVar78;
    auVar16[5] = uVar79;
    auVar16[6] = uVar80;
    auVar16[7] = uVar81;
    auVar16[8] = uVar82;
    auVar16[9] = uVar83;
    auVar16[10] = uVar84;
    auVar16[0xb] = uVar85;
    auVar16[0xc] = uVar86;
    auVar16[0xd] = uVar87;
    auVar16[0xe] = uVar88;
    auVar16[0xf] = uVar89;
    uVar115 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a6f0);
    fVar125 = (float)CONCAT13(uVar45,CONCAT12(uVar44,CONCAT11(uVar43,uVar42))) * (float)uVar120 *
              (float)uVar131 -
              (float)CONCAT13(uVar45,CONCAT12(uVar44,CONCAT11(uVar43,uVar42))) * (float)uVar132 *
              (float)uVar140;
    fVar111 = (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46))) *
              (float)((ulong)uVar120 >> 0x20) * (float)((ulong)uVar131 >> 0x20) -
              (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46))) *
              (float)((ulong)uVar132 >> 0x20) * (float)((ulong)uVar140 >> 0x20);
    fVar128 = (float)CONCAT13(uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50))) * (float)uVar123 *
              (float)uVar138 -
              (float)CONCAT13(uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50))) * (float)uVar139 *
              (float)uVar115;
    fVar117 = (float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54))) *
              (float)((ulong)uVar123 >> 0x20) * (float)((ulong)uVar138 >> 0x20) -
              (float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54))) *
              (float)((ulong)uVar139 >> 0x20) * (float)((ulong)uVar115 >> 0x20);
    auVar23._4_4_ = fVar111;
    auVar23._0_4_ = fVar125;
    auVar23._8_4_ = fVar128;
    auVar23._12_4_ = fVar117;
    auVar24._4_4_ = fVar111;
    auVar24._0_4_ = fVar125;
    auVar24._8_4_ = fVar128;
    auVar24._12_4_ = fVar117;
    auVar133 = NEON_ext(auVar23,auVar24,8,1);
    fVar126 = fVar125 + fVar111 + auVar133._0_4_ + auVar133._4_4_;
    auVar25._4_4_ = fVar126;
    auVar25._0_4_ = fVar126;
    auVar25._8_4_ = fVar126;
    auVar25._12_4_ = fVar126;
    auVar133 = NEON_frecpe(auVar25,4);
    auVar26._4_4_ = fVar126;
    auVar26._0_4_ = fVar126;
    auVar26._8_4_ = fVar126;
    auVar26._12_4_ = fVar126;
    auVar143 = NEON_frecps(auVar133,auVar26,4);
    auVar134._0_4_ = auVar133._0_4_ * auVar143._0_4_;
    auVar134._4_4_ = auVar133._4_4_ * auVar143._4_4_;
    auVar134._8_4_ = auVar133._8_4_ * auVar143._8_4_;
    auVar134._12_4_ = auVar133._12_4_ * auVar143._12_4_;
    auVar27._4_4_ = fVar126;
    auVar27._0_4_ = fVar126;
    auVar27._8_4_ = fVar126;
    auVar27._12_4_ = fVar126;
    auVar133 = NEON_frecps(auVar134,auVar27,4);
    fVar128 = auVar134._0_4_ * auVar133._0_4_;
    fVar117 = auVar134._4_4_ * auVar133._4_4_;
    fVar136 = auVar134._8_4_ * auVar133._8_4_;
    fVar137 = auVar134._12_4_ * auVar133._12_4_;
    uVar112 = CONCAT13(uVar77,CONCAT12(uVar76,CONCAT11(uVar75,uVar74)));
    uVar91 = CONCAT13(uVar45,CONCAT12(uVar44,CONCAT11(uVar43,uVar42)));
    uVar17 = CONCAT13(uVar61,CONCAT12(uVar60,CONCAT11(uVar59,uVar58)));
    uVar6 = (undefined2)(CONCAT12(uVar51,CONCAT11(uVar50,uVar49)) >> 8);
    uVar19 = (undefined3)(CONCAT16(uVar48,CONCAT15(uVar47,CONCAT14(uVar46,uVar91))) >> 0x20);
    auVar18[3] = uVar49;
    auVar18._0_3_ = uVar19;
    auVar18[4] = uVar62;
    auVar18[5] = uVar63;
    auVar18[6] = uVar64;
    auVar18[7] = uVar65;
    auVar18[8] = uVar78;
    auVar18[9] = uVar79;
    auVar18[10] = uVar80;
    auVar18[0xb] = uVar81;
    auVar18._12_4_ = 0;
    uVar123 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a880);
    auVar20[3] = uVar49;
    auVar20._0_3_ = uVar19;
    auVar20[4] = uVar62;
    auVar20[5] = uVar63;
    auVar20[6] = uVar64;
    auVar20[7] = uVar65;
    auVar20[8] = uVar78;
    auVar20[9] = uVar79;
    auVar20[10] = uVar80;
    auVar20[0xb] = uVar81;
    auVar20._12_4_ = 0;
    uVar141 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a6f0);
    auVar133[2] = uVar52;
    auVar133._0_2_ = uVar6;
    auVar133[3] = uVar53;
    auVar133[4] = uVar66;
    auVar133[5] = uVar67;
    auVar133[6] = uVar68;
    auVar133[7] = uVar69;
    auVar133[8] = uVar82;
    auVar133[9] = uVar83;
    auVar133[10] = uVar84;
    auVar133[0xb] = uVar85;
    auVar133._12_4_ = 0;
    uVar144 = a64_TBL(ZEXT816(0),auVar133,DAT_0388a6d8);
    auVar143[2] = uVar52;
    auVar143._0_2_ = uVar6;
    auVar143[3] = uVar53;
    auVar143[4] = uVar66;
    auVar143[5] = uVar67;
    auVar143[6] = uVar68;
    auVar143[7] = uVar69;
    auVar143[8] = uVar82;
    auVar143[9] = uVar83;
    auVar143[10] = uVar84;
    auVar143[0xb] = uVar85;
    auVar143._12_4_ = 0;
    uVar142 = a64_TBL(ZEXT816(0),auVar143,DAT_0388a680);
    auVar7[2] = uVar52;
    auVar7._0_2_ = uVar6;
    auVar7[3] = uVar53;
    auVar7[4] = uVar66;
    auVar7[5] = uVar67;
    auVar7[6] = uVar68;
    auVar7[7] = uVar69;
    auVar7[8] = uVar82;
    auVar7[9] = uVar83;
    auVar7[10] = uVar84;
    auVar7[0xb] = uVar85;
    auVar7._12_4_ = 0;
    uVar145 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a880);
    auVar8[2] = uVar52;
    auVar8._0_2_ = uVar6;
    auVar8[3] = uVar53;
    auVar8[4] = uVar66;
    auVar8[5] = uVar67;
    auVar8[6] = uVar68;
    auVar8[7] = uVar69;
    auVar8[8] = uVar82;
    auVar8[9] = uVar83;
    auVar8[10] = uVar84;
    auVar8[0xb] = uVar85;
    auVar8._12_4_ = 0;
    uVar115 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a6f0);
    auVar28._4_4_ = uVar17;
    auVar28._0_4_ = uVar91;
    auVar28._8_4_ = uVar112;
    auVar28._12_4_ = 0;
    uVar132 = a64_TBL(ZEXT816(0),auVar28,DAT_0388a880);
    auVar29._4_4_ = uVar17;
    auVar29._0_4_ = uVar91;
    auVar29._8_4_ = uVar112;
    auVar29._12_4_ = 0;
    uVar138 = a64_TBL(ZEXT816(0),auVar29,DAT_0388a6f0);
    auVar21[3] = uVar49;
    auVar21._0_3_ = uVar19;
    auVar21[4] = uVar62;
    auVar21[5] = uVar63;
    auVar21[6] = uVar64;
    auVar21[7] = uVar65;
    auVar21[8] = uVar78;
    auVar21[9] = uVar79;
    auVar21[10] = uVar80;
    auVar21[0xb] = uVar81;
    auVar21._12_4_ = 0;
    uVar120 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a680);
    auVar22[3] = uVar49;
    auVar22._0_3_ = uVar19;
    auVar22[4] = uVar62;
    auVar22[5] = uVar63;
    auVar22[6] = uVar64;
    auVar22[7] = uVar65;
    auVar22[8] = uVar78;
    auVar22[9] = uVar79;
    auVar22[10] = uVar80;
    auVar22[0xb] = uVar81;
    auVar22._12_4_ = 0;
    uVar131 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a6d8);
    auVar30._4_4_ = uVar17;
    auVar30._0_4_ = uVar91;
    auVar30._8_4_ = uVar112;
    auVar30._12_4_ = 0;
    uVar139 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a680);
    auVar31._4_4_ = uVar17;
    auVar31._0_4_ = uVar91;
    auVar31._8_4_ = uVar112;
    auVar31._12_4_ = 0;
    uVar140 = a64_TBL(ZEXT816(0),auVar31,DAT_0388a6d8);
    fVar130 = (float)((ulong)uVar123 >> 0x20);
    fVar116 = (float)((ulong)uVar142 >> 0x20);
    fVar135 = (float)((ulong)uVar141 >> 0x20);
    fVar119 = (float)((ulong)uVar144 >> 0x20);
    fVar125 = (float)((ulong)uVar120 >> 0x20);
    fVar118 = (float)((ulong)uVar145 >> 0x20);
    fVar111 = (float)((ulong)uVar131 >> 0x20);
    fVar146 = (float)((ulong)uVar115 >> 0x20);
    fVar114 = (float)((ulong)uVar139 >> 0x20);
    fVar121 = (float)((ulong)uVar140 >> 0x20);
    fVar93 = (float)((ulong)uVar132 >> 0x20);
    fVar99 = (float)((ulong)uVar138 >> 0x20);
    fVar122 = fVar128 * ((float)uVar123 * (float)uVar142 - (float)uVar145 * (float)uVar120);
    fVar124 = fVar117 * (fVar130 * fVar116 - fVar118 * fVar125);
    fVar127 = fVar136 * ((float)uVar141 * (float)uVar144 - (float)uVar115 * (float)uVar131);
    fVar129 = fVar137 * (fVar135 * fVar119 - fVar146 * fVar111);
    fVar113 = fVar128 * ((float)uVar145 * (float)uVar139 - (float)uVar132 * (float)uVar142);
    fVar116 = fVar117 * (fVar118 * fVar114 - fVar93 * fVar116);
    fVar118 = fVar136 * ((float)uVar115 * (float)uVar140 - (float)uVar138 * (float)uVar144);
    fVar119 = fVar137 * (fVar146 * fVar121 - fVar99 * fVar119);
    iVar92 = -(uint)(fVar126 == 0.0);
    iVar98 = -(uint)(fVar126 == 0.0);
    iVar32 = -(uint)(fVar126 == 0.0);
    iVar34 = -(uint)(fVar126 == 0.0);
    bVar90 = ~(byte)iVar92;
    bVar94 = ~(byte)((uint)iVar92 >> 8);
    bVar95 = ~(byte)((uint)iVar92 >> 0x10);
    bVar96 = ~(byte)((uint)iVar92 >> 0x18);
    bVar97 = ~(byte)iVar98;
    bVar100 = ~(byte)((uint)iVar98 >> 8);
    bVar101 = ~(byte)((uint)iVar98 >> 0x10);
    bVar102 = ~(byte)((uint)iVar98 >> 0x18);
    bVar103 = ~(byte)iVar32;
    bVar104 = ~(byte)((uint)iVar32 >> 8);
    bVar105 = ~(byte)((uint)iVar32 >> 0x10);
    bVar106 = ~(byte)((uint)iVar32 >> 0x18);
    bVar107 = ~(byte)iVar34;
    bVar108 = ~(byte)((uint)iVar34 >> 8);
    bVar109 = ~(byte)((uint)iVar34 >> 0x10);
    bVar110 = ~(byte)((uint)iVar34 >> 0x18);
    fVar128 = fVar128 * ((float)uVar120 * (float)uVar132 - (float)uVar123 * (float)uVar139);
    fVar117 = fVar117 * (fVar125 * fVar93 - fVar130 * fVar114);
    fVar136 = fVar136 * ((float)uVar131 * (float)uVar138 - (float)uVar141 * (float)uVar140);
    fVar137 = fVar137 * (fVar111 * fVar99 - fVar135 * fVar121);
    fVar125 = (fVar122 * -0.0 - fVar113 * 0.0) - fVar128 * 0.0;
    fVar111 = (fVar124 * -0.0 - fVar116 * 0.0) - fVar117 * 0.0;
    fVar130 = (fVar127 * -0.0 - fVar118 * 0.0) - fVar136 * 0.0;
    fVar135 = (fVar129 * -0.0 - fVar119 * 0.0) - fVar137 * 0.0;
    fVar114 = (float)CONCAT13((byte)((uint)fVar113 >> 0x18) & bVar96,
                              CONCAT12((byte)((uint)fVar113 >> 0x10) & bVar95,
                                       CONCAT11((byte)((uint)fVar113 >> 8) & bVar94,
                                                SUB41(fVar113,0) & bVar90)));
    fVar118 = (float)CONCAT13((byte)((uint)fVar118 >> 0x18) & bVar106,
                              CONCAT12((byte)((uint)fVar118 >> 0x10) & bVar105,
                                       CONCAT11((byte)((uint)fVar118 >> 8) & bVar104,
                                                SUB41(fVar118,0) & bVar103)));
    fVar93 = (float)local_40;
    fVar99 = (float)((ulong)local_40 >> 0x20);
    fVar113 = (float)uStack_38;
    fVar125 = (float)CONCAT13((byte)((uint)fVar122 >> 0x18) & bVar96,
                              CONCAT12((byte)((uint)fVar122 >> 0x10) & bVar95,
                                       CONCAT11((byte)((uint)fVar122 >> 8) & bVar94,
                                                SUB41(fVar122,0) & bVar90))) * fVar93 +
              fVar114 * fVar99 +
              (float)CONCAT13((byte)((uint)fVar128 >> 0x18) & bVar96,
                              CONCAT12((byte)((uint)fVar128 >> 0x10) & bVar95,
                                       CONCAT11((byte)((uint)fVar128 >> 8) & bVar94,
                                                SUB41(fVar128,0) & bVar90))) * fVar113 +
              (float)CONCAT13((byte)((uint)fVar125 >> 0x18) & bVar96,
                              CONCAT12((byte)((uint)fVar125 >> 0x10) & bVar95,
                                       CONCAT11((byte)((uint)fVar125 >> 8) & bVar94,
                                                SUB41(fVar125,0) & bVar90)));
    uVar42 = SUB41(fVar125,0);
    uVar43 = (undefined1)((uint)fVar125 >> 8);
    uVar44 = (undefined1)((uint)fVar125 >> 0x10);
    uVar45 = (undefined1)((uint)fVar125 >> 0x18);
    fVar125 = (float)CONCAT13((byte)((uint)fVar124 >> 0x18) & bVar102,
                              CONCAT12((byte)((uint)fVar124 >> 0x10) & bVar101,
                                       CONCAT11((byte)((uint)fVar124 >> 8) & bVar100,
                                                SUB41(fVar124,0) & bVar97))) * fVar93 +
              (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) & bVar102,
                               CONCAT16((byte)((uint)fVar116 >> 0x10) & bVar101,
                                        CONCAT15((byte)((uint)fVar116 >> 8) & bVar100,
                                                 CONCAT14(SUB41(fVar116,0) & bVar97,fVar114)))) >>
                     0x20) * fVar99 +
              (float)CONCAT13((byte)((uint)fVar117 >> 0x18) & bVar102,
                              CONCAT12((byte)((uint)fVar117 >> 0x10) & bVar101,
                                       CONCAT11((byte)((uint)fVar117 >> 8) & bVar100,
                                                SUB41(fVar117,0) & bVar97))) * fVar113 +
              (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & bVar102,
                              CONCAT12((byte)((uint)fVar111 >> 0x10) & bVar101,
                                       CONCAT11((byte)((uint)fVar111 >> 8) & bVar100,
                                                SUB41(fVar111,0) & bVar97)));
    uVar46 = SUB41(fVar125,0);
    uVar47 = (undefined1)((uint)fVar125 >> 8);
    uVar48 = (undefined1)((uint)fVar125 >> 0x10);
    uVar49 = (undefined1)((uint)fVar125 >> 0x18);
    fVar125 = (float)CONCAT13((byte)((uint)fVar127 >> 0x18) & bVar106,
                              CONCAT12((byte)((uint)fVar127 >> 0x10) & bVar105,
                                       CONCAT11((byte)((uint)fVar127 >> 8) & bVar104,
                                                SUB41(fVar127,0) & bVar103))) * fVar93 +
              fVar118 * fVar99 +
              (float)CONCAT13((byte)((uint)fVar136 >> 0x18) & bVar106,
                              CONCAT12((byte)((uint)fVar136 >> 0x10) & bVar105,
                                       CONCAT11((byte)((uint)fVar136 >> 8) & bVar104,
                                                SUB41(fVar136,0) & bVar103))) * fVar113 +
              (float)CONCAT13((byte)((uint)fVar130 >> 0x18) & bVar106,
                              CONCAT12((byte)((uint)fVar130 >> 0x10) & bVar105,
                                       CONCAT11((byte)((uint)fVar130 >> 8) & bVar104,
                                                SUB41(fVar130,0) & bVar103)));
    uVar50 = SUB41(fVar125,0);
    uVar51 = (undefined1)((uint)fVar125 >> 8);
    uVar52 = (undefined1)((uint)fVar125 >> 0x10);
    uVar53 = (undefined1)((uint)fVar125 >> 0x18);
    fVar125 = (float)CONCAT13((byte)((uint)fVar129 >> 0x18) & bVar110,
                              CONCAT12((byte)((uint)fVar129 >> 0x10) & bVar109,
                                       CONCAT11((byte)((uint)fVar129 >> 8) & bVar108,
                                                SUB41(fVar129,0) & bVar107))) * fVar93 +
              (float)(CONCAT17((byte)((uint)fVar119 >> 0x18) & bVar110,
                               CONCAT16((byte)((uint)fVar119 >> 0x10) & bVar109,
                                        CONCAT15((byte)((uint)fVar119 >> 8) & bVar108,
                                                 CONCAT14(SUB41(fVar119,0) & bVar107,fVar118)))) >>
                     0x20) * fVar99 +
              (float)CONCAT13((byte)((uint)fVar137 >> 0x18) & bVar110,
                              CONCAT12((byte)((uint)fVar137 >> 0x10) & bVar109,
                                       CONCAT11((byte)((uint)fVar137 >> 8) & bVar108,
                                                SUB41(fVar137,0) & bVar107))) * fVar113 +
              (float)CONCAT13((byte)((uint)fVar135 >> 0x18) & bVar110,
                              CONCAT12((byte)((uint)fVar135 >> 0x10) & bVar109,
                                       CONCAT11((byte)((uint)fVar135 >> 8) & bVar108,
                                                SUB41(fVar135,0) & bVar107)));
    uVar54 = SUB41(fVar125,0);
    uVar55 = (undefined1)((uint)fVar125 >> 8);
    uVar56 = (undefined1)((uint)fVar125 >> 0x10);
    uVar57 = (undefined1)((uint)fVar125 >> 0x18);
  }
  fVar125 = (float)((ulong)*param_2 >> 0x20) +
            (float)((ulong)uVar148 >> 0x20) *
            (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46))) * fVar147;
  fVar111 = (float)((ulong)param_2[1] >> 0x20) +
            (float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54))) * 0.0 * fVar147;
  param_2[1] = CONCAT17((char)((uint)fVar111 >> 0x18),
                        CONCAT16((char)((uint)fVar111 >> 0x10),
                                 CONCAT15((char)((uint)fVar111 >> 8),
                                          CONCAT14(SUB41(fVar111,0),
                                                   (float)param_2[1] +
                                                   fVar3 * (float)CONCAT13(uVar53,CONCAT12(uVar52,
                                                  CONCAT11(uVar51,uVar50))) * fVar147))));
  *param_2 = CONCAT17((char)((uint)fVar125 >> 0x18),
                      CONCAT16((char)((uint)fVar125 >> 0x10),
                               CONCAT15((char)((uint)fVar125 >> 8),
                                        CONCAT14(SUB41(fVar125,0),
                                                 (float)*param_2 +
                                                 (float)uVar148 *
                                                 (float)CONCAT13(uVar45,CONCAT12(uVar44,CONCAT11(
                                                  uVar43,uVar42))) * fVar147))));
  return;
}


