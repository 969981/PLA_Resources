/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00183080; name: FUN_00183080
 */


bool FUN_00183080(int *param_1,float *param_2,undefined8 *param_3,byte *param_4,float *param_5)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined *puVar28;
  bool bVar29;
  bool bVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  float *pfVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  uint uVar40;
  undefined8 uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  ulong uVar46;
  ulong uVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined8 uVar64;
  undefined1 auVar65 [16];
  ulong uVar66;
  float fVar67;
  ulong uVar68;
  float fVar70;
  undefined1 auVar69 [16];
  float fVar71;
  float fVar72;
  undefined8 uVar73;
  float fVar80;
  int iVar81;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar79;
  undefined1 auVar77 [16];
  int iVar82;
  undefined1 auVar78 [16];
  float fVar83;
  float fVar92;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar93;
  float fVar94;
  float fVar101;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar102;
  int iVar103;
  undefined8 uVar104;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar111;
  float fVar112;
  int iVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  int iVar117;
  float fVar118;
  undefined8 uVar119;
  int iVar124;
  ulong uVar120;
  float fVar125;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar129;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  ulong local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  ulong local_130;
  undefined8 uStack_128;
  ulong local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  ulong local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  ulong local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  ulong local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ulong local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  ulong local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulong local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulong local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulong local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulong local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulong local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulong local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulong local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulong local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar28 = PTR_DAT_04372370;
  uVar54 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
  bVar4 = *param_4;
  uVar50 = NEON_fmax(param_3[1],uVar54,4);
  fVar49 = (float)uVar50;
  fVar51 = (float)((ulong)uVar50 >> 0x20);
  if (bVar4 - 1 < 2) {
    iVar103 = param_1[2];
    lVar39 = 0;
    if (iVar103 != 0) {
      lVar39 = (long)iVar103 + (long)(param_1 + 2);
    }
    pfVar33 = (float *)(lVar39 + (ulong)param_4[1] * 0x10);
    fVar55 = *pfVar33;
    fVar56 = pfVar33[1];
    fVar57 = pfVar33[2];
    fVar52 = pfVar33[3];
    fVar72 = (float)*(undefined8 *)(param_2 + 2);
    fVar48 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
    fVar71 = (float)*(undefined8 *)param_2;
    fVar79 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    auVar60._0_4_ = fVar55 * fVar71;
    auVar60._4_4_ = fVar56 * fVar79;
    auVar60._8_4_ = fVar57 * fVar72;
    auVar60._12_4_ = fVar52 * fVar48;
    auVar61 = NEON_ext(auVar60,auVar60,8,1);
    fVar59 = auVar61._0_4_ + fVar52;
    fVar49 = (auVar60._0_4_ + auVar60._4_4_ + fVar59) - fVar49;
    fVar51 = (auVar60._0_4_ + auVar60._4_4_ + fVar59) - fVar51;
    *(ulong *)(param_5 + 8) = CONCAT44(fVar51,fVar49);
    *(ulong *)(param_5 + 2) = CONCAT44(fVar48 - fVar52 * fVar51,fVar72 - fVar57 * fVar49);
    *(ulong *)param_5 = CONCAT44(fVar79 - fVar56 * fVar51,fVar71 - fVar55 * fVar49);
    param_5[6] = fVar57;
    param_5[7] = fVar52;
    param_5[4] = fVar55;
    param_5[5] = fVar56;
    if (fVar49 < (float)param_3[2]) {
      return true;
    }
LAB_00183478:
    *param_4 = 4;
    return false;
  }
  if (bVar4 == 3) {
    lVar39 = 0;
    if (*param_1 != 0) {
      lVar39 = (long)*param_1 + (long)param_1;
    }
    puVar31 = (undefined8 *)(lVar39 + (ulong)param_4[1] * 0xc);
    uVar50 = *puVar31;
    fVar55 = *(float *)(puVar31 + 1);
    puVar31 = (undefined8 *)(lVar39 + (ulong)param_4[2] * 0xc);
    uVar64 = *puVar31;
    fVar56 = *(float *)(puVar31 + 1);
    fVar52 = (float)uVar50;
    fVar79 = (float)uVar64 - fVar52;
    fVar71 = (float)((ulong)uVar50 >> 0x20);
    fVar72 = (float)((ulong)uVar64 >> 0x20) - fVar71;
    fVar48 = fVar56 - fVar55;
    fVar57 = param_2[3];
    fVar93 = fVar79 * fVar79 + fVar72 * fVar72 + fVar48 * fVar48;
    fVar94 = fVar79 * fVar79 + fVar72 * fVar72 + fVar48 * fVar48;
    uVar50 = CONCAT44(fVar94,fVar93);
    uVar64 = NEON_frecpe(uVar50,4);
    uVar73 = NEON_frecps(uVar50,uVar64,4);
    fVar59 = (*param_2 - fVar52) * fVar79;
    fVar58 = (param_2[1] - fVar71) * fVar72;
    fVar63 = (param_2[2] - fVar55) * fVar48;
    fVar101 = (float)uVar64 * (float)uVar73;
    fVar70 = (float)((ulong)uVar64 >> 0x20) * (float)((ulong)uVar73 >> 0x20);
    uVar64 = NEON_frecps(uVar50,CONCAT44(fVar70,fVar101),4);
    iVar103 = -(uint)(fVar93 == 0.0);
    iVar113 = -(uint)(fVar94 == 0.0);
    uVar66 = CONCAT44(fVar70 * (float)((ulong)uVar64 >> 0x20),fVar101 * (float)uVar64) &
             CONCAT17(~(byte)((uint)iVar113 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar113 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar113 >> 8),
                                        CONCAT14(~(byte)iVar113,
                                                 CONCAT13(~(byte)((uint)iVar103 >> 0x18),
                                                          CONCAT12(~(byte)((uint)iVar103 >> 0x10),
                                                                   CONCAT11(~(byte)((uint)iVar103 >>
                                                                                   8),~(byte)iVar103
                                                                           )))))));
    uVar54 = NEON_fmax(uVar54,CONCAT44(fVar59 + fVar58 + fVar63,fVar59 + fVar58 + fVar63),4);
    uVar54 = NEON_fmin(uVar50,uVar54,4);
    fVar58 = (float)uVar66;
    fVar63 = (float)(uVar66 >> 0x20);
    fVar59 = (float)((ulong)uVar54 >> 0x20);
    fVar52 = fVar52 + (float)uVar54 * fVar79 * fVar58;
    fVar71 = fVar71 + fVar59 * fVar72 * fVar63;
    fVar79 = fVar55 + (float)uVar54 * fVar48 * fVar58;
    fVar55 = fVar55 + fVar59 * (fVar56 - fVar55) * fVar63;
    fVar56 = *param_2 - fVar52;
    fVar59 = param_2[1] - fVar71;
    fVar72 = param_2[2] - fVar79;
    fVar48 = fVar56 * fVar56 + fVar59 * fVar59 + fVar72 * fVar72;
    fVar58 = fVar56 * fVar56 + fVar59 * fVar59 + fVar72 * fVar72;
    uVar54 = CONCAT44(fVar58,fVar48);
    uVar50 = NEON_frsqrte(uVar54,4);
    fVar63 = (float)uVar50;
    fVar93 = (float)((ulong)uVar50 >> 0x20);
    uVar50 = NEON_frsqrts(uVar54,CONCAT44(fVar93 * fVar93,fVar63 * fVar63),4);
    fVar63 = fVar63 * (float)uVar50;
    fVar93 = fVar93 * (float)((ulong)uVar50 >> 0x20);
    uVar54 = NEON_frsqrts(uVar54,CONCAT44(fVar93 * fVar93,fVar63 * fVar63),4);
    iVar103 = -(uint)(fVar48 <= 0.0);
    iVar113 = -(uint)(fVar58 <= 0.0);
    fVar63 = (float)uVar54 * fVar63;
    fVar93 = (float)((ulong)uVar54 >> 0x20) * fVar93;
    fVar63 = (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar103 >> 0x18),
                             CONCAT12((byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar103 >> 0x10),
                                      CONCAT11((byte)((uint)fVar63 >> 8) &
                                               ~(byte)((uint)iVar103 >> 8),
                                               SUB41(fVar63,0) & ~(byte)iVar103)));
    fVar93 = (float)(CONCAT17((byte)((uint)fVar93 >> 0x18) & ~(byte)((uint)iVar113 >> 0x18),
                              CONCAT16((byte)((uint)fVar93 >> 0x10) & ~(byte)((uint)iVar113 >> 0x10)
                                       ,CONCAT15((byte)((uint)fVar93 >> 8) &
                                                 ~(byte)((uint)iVar113 >> 8),
                                                 CONCAT14(SUB41(fVar93,0) & ~(byte)iVar113,fVar63)))
                             ) >> 0x20);
    fVar48 = fVar48 * fVar63 - fVar49;
    *(ulong *)(param_5 + 8) = CONCAT44(fVar58 * fVar93 - fVar51,fVar48);
    fVar57 = (fVar57 - fVar55) * fVar93;
    *(ulong *)(param_5 + 2) = CONCAT44(fVar55 + fVar51 * fVar57,fVar79 + fVar49 * fVar72 * fVar63);
    *(ulong *)param_5 =
         CONCAT44(fVar71 + fVar51 * fVar59 * fVar93,fVar52 + fVar49 * fVar56 * fVar63);
    *(ulong *)(param_5 + 6) = CONCAT44(fVar57,fVar72 * fVar63);
    *(ulong *)(param_5 + 4) = CONCAT44(fVar59 * fVar93,fVar56 * fVar63);
    fVar49 = *(float *)(param_3 + 2);
    bVar30 = false;
    bVar29 = true;
    if (!NAN(fVar48) && !NAN(fVar49)) {
      bVar30 = fVar48 == fVar49;
      bVar29 = fVar49 <= fVar48;
    }
LAB_001832a8:
    bVar30 = !bVar29 || bVar30;
  }
  else {
    if (bVar4 == 4) {
      iVar103 = param_1[2];
      lVar39 = (long)iVar103 + (long)(param_1 + 2);
      lVar3 = 0;
      if (iVar103 != 0) {
        lVar3 = lVar39;
      }
      pfVar33 = (float *)(lVar3 + (ulong)param_4[1] * 0x10);
      fVar59 = *pfVar33;
      fVar71 = pfVar33[1];
      fVar79 = pfVar33[2];
      fVar72 = pfVar33[3];
      fVar57 = (float)*(undefined8 *)(param_2 + 2);
      fVar52 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
      fVar55 = (float)*(undefined8 *)param_2;
      fVar56 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      auVar61._0_4_ = fVar59 * fVar55;
      auVar61._4_4_ = fVar71 * fVar56;
      auVar61._8_4_ = fVar79 * fVar57;
      auVar61._12_4_ = fVar72 * fVar52;
      auVar60 = NEON_ext(auVar61,auVar61,8,1);
      fVar48 = auVar60._0_4_ + fVar72;
      fVar58 = (auVar61._0_4_ + auVar61._4_4_ + fVar48) - fVar49;
      fVar48 = (auVar61._0_4_ + auVar61._4_4_ + fVar48) - fVar51;
      *(ulong *)(param_5 + 8) = CONCAT44(fVar48,fVar58);
      param_5[2] = fVar57 - fVar79 * fVar58;
      param_5[3] = fVar52 - fVar72 * fVar48;
      *param_5 = fVar55 - fVar59 * fVar58;
      param_5[1] = fVar56 - fVar71 * fVar48;
      param_5[6] = fVar79;
      param_5[7] = fVar72;
      param_5[4] = fVar59;
      param_5[5] = fVar71;
      fVar59 = (float)param_3[2];
      if (fVar59 < fVar58) {
        *(ulong *)(param_5 + 10) =
             CONCAT44(fVar48 - (float)((ulong)param_3[2] >> 0x20),fVar58 - fVar59);
        return false;
      }
    }
    else {
      iVar103 = param_1[2];
      lVar39 = (long)iVar103 + (long)(param_1 + 2);
      fVar57 = (float)*(undefined8 *)(param_2 + 2);
      fVar52 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
      fVar55 = (float)*(undefined8 *)param_2;
      fVar56 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    }
    auVar60 = *(undefined1 (*) [16])(puVar28 + 0x60);
    lVar38 = (long)param_1[3];
    lVar37 = lVar38 + -4;
    lVar3 = 0;
    if (iVar103 != 0) {
      lVar3 = lVar39;
    }
    fVar59 = auVar60._0_4_;
    pfVar33 = (float *)(lVar3 + lVar37 * 0x10);
    pfVar7 = (float *)(lVar3 + (lVar38 + -3) * 0x10);
    pfVar8 = (float *)(lVar3 + (lVar38 + -2) * 0x10);
    pfVar9 = (float *)(lVar3 + (lVar38 + -1) * 0x10);
    iVar103 = (int)lVar37;
    auVar85._0_4_ = fVar55 * *pfVar7;
    auVar85._4_4_ = fVar56 * pfVar7[1];
    auVar85._8_4_ = fVar57 * pfVar7[2];
    auVar85._12_4_ = fVar59 * pfVar7[3];
    auVar76._0_4_ = *pfVar33 * fVar55;
    auVar76._4_4_ = pfVar33[1] * fVar56;
    auVar76._8_4_ = pfVar33[2] * fVar57;
    auVar76._12_4_ = pfVar33[3] * fVar59;
    auVar86._0_4_ = fVar55 * *pfVar8;
    auVar86._4_4_ = fVar56 * pfVar8[1];
    auVar86._8_4_ = fVar57 * pfVar8[2];
    auVar86._12_4_ = fVar59 * pfVar8[3];
    auVar96._0_4_ = fVar55 * *pfVar9;
    auVar96._4_4_ = fVar56 * pfVar9[1];
    auVar96._8_4_ = fVar57 * pfVar9[2];
    auVar96._12_4_ = fVar59 * pfVar9[3];
    auVar61 = NEON_ext(auVar76,auVar76,8,1);
    auVar65 = NEON_ext(auVar85,auVar85,8,1);
    auVar69 = NEON_ext(auVar86,auVar86,8,1);
    auVar74 = NEON_ext(auVar96,auVar96,8,1);
    auVar65._0_8_ =
         CONCAT44(auVar85._0_4_ + auVar85._4_4_ + auVar65._0_4_ + auVar65._4_4_,
                  auVar76._0_4_ + auVar76._4_4_ + auVar61._0_4_ + auVar61._4_4_);
    uVar50 = CONCAT44(auVar96._0_4_ + auVar96._4_4_ + auVar74._0_4_ + auVar74._4_4_,
                      auVar86._0_4_ + auVar86._4_4_ + auVar69._0_4_ + auVar69._4_4_);
    auVar65._8_8_ = uVar50;
    auVar61 = *(undefined1 (*) [16])(PTR_DAT_04372388 + 0x50);
    auVar69._0_8_ = CONCAT44(auVar61._4_4_ + iVar103,auVar61._0_4_ + iVar103);
    auVar69._8_4_ = auVar61._8_4_ + iVar103;
    auVar69._12_4_ = auVar61._12_4_ + iVar103;
    if (iVar103 < 1) {
      auVar69._8_8_ = auVar69._8_8_;
    }
    else {
      lVar39 = 0;
      do {
        pfVar33 = (float *)(lVar3 + lVar39 * 0x10);
        lVar39 = lVar39 + 4;
        auVar84._0_4_ = fVar55 * pfVar33[4];
        auVar84._4_4_ = fVar56 * pfVar33[5];
        auVar84._8_4_ = fVar57 * pfVar33[6];
        auVar84._12_4_ = fVar59 * pfVar33[7];
        auVar75._0_4_ = fVar55 * *pfVar33;
        auVar75._4_4_ = fVar56 * pfVar33[1];
        auVar75._8_4_ = fVar57 * pfVar33[2];
        auVar75._12_4_ = fVar59 * pfVar33[3];
        auVar95._0_4_ = fVar55 * pfVar33[8];
        auVar95._4_4_ = fVar56 * pfVar33[9];
        auVar95._8_4_ = fVar57 * pfVar33[10];
        auVar95._12_4_ = fVar59 * pfVar33[0xb];
        auVar105._0_4_ = fVar55 * pfVar33[0xc];
        auVar105._4_4_ = fVar56 * pfVar33[0xd];
        auVar105._8_4_ = fVar57 * pfVar33[0xe];
        auVar105._12_4_ = fVar59 * pfVar33[0xf];
        auVar76 = NEON_ext(auVar75,auVar75,8,1);
        auVar85 = NEON_ext(auVar84,auVar84,8,1);
        auVar86 = NEON_ext(auVar95,auVar95,8,1);
        auVar96 = NEON_ext(auVar105,auVar105,8,1);
        auVar97._0_4_ = auVar75._0_4_ + auVar75._4_4_ + auVar76._0_4_ + auVar76._4_4_;
        auVar97._4_4_ = auVar84._0_4_ + auVar84._4_4_ + auVar85._0_4_ + auVar85._4_4_;
        fVar71 = auVar95._0_4_ + auVar95._4_4_ + auVar86._0_4_ + auVar86._4_4_;
        fVar79 = auVar105._0_4_ + auVar105._4_4_ + auVar96._0_4_ + auVar96._4_4_;
        auVar97._12_4_ = fVar79;
        auVar97._8_4_ = fVar71;
        auVar87._0_4_ = -(uint)(auVar65._0_4_ < auVar97._0_4_);
        auVar87._4_4_ = -(uint)(auVar65._4_4_ < auVar97._4_4_);
        auVar87._8_4_ = -(uint)(auVar65._8_4_ < fVar71);
        auVar87._12_4_ = -(uint)(auVar65._12_4_ < fVar79);
        auVar69 = auVar69 ^ (auVar69 ^ auVar61) & auVar87;
        auVar74._0_4_ = auVar61._0_4_ + *(int *)(PTR_DAT_04372388 + 0x40);
        auVar74._4_4_ = auVar61._4_4_ + *(int *)(PTR_DAT_04372388 + 0x44);
        auVar74._8_4_ = auVar61._8_4_ + *(int *)(PTR_DAT_04372388 + 0x48);
        auVar74._12_4_ = auVar61._12_4_ + *(int *)(PTR_DAT_04372388 + 0x4c);
        auVar65 = auVar65 ^ (auVar65 ^ auVar97) & auVar87;
        auVar61 = auVar74;
      } while (lVar39 < lVar37);
    }
    auVar61 = NEON_rev64(auVar65,4);
    auVar62._0_4_ = -(uint)(auVar61._0_4_ <= auVar65._0_4_);
    auVar62._4_4_ = -(uint)(auVar61._4_4_ <= auVar65._4_4_);
    auVar62._8_4_ = -(uint)(auVar61._8_4_ <= auVar65._8_4_);
    auVar62._12_4_ = -(uint)(auVar61._12_4_ <= auVar65._12_4_);
    auVar61 = NEON_fmax(auVar65,auVar61,4);
    auVar76 = NEON_rev64(auVar69,4);
    auVar76 = auVar76 ^ (auVar76 ^ auVar69) & auVar62;
    auVar85 = NEON_ext(auVar61,auVar61,8,1);
    auVar86 = NEON_ext(auVar76,auVar76,8,1);
    uVar66 = auVar86._0_8_ ^
             (auVar86._0_8_ ^ auVar76._0_8_) & (ulong)-(uint)(auVar85._0_4_ <= auVar61._0_4_);
    fVar71 = (float)NEON_fmaxnmv(auVar65,4);
    iVar113 = (int)uVar66;
    auVar61 = *(undefined1 (*) [16])(lVar3 + (long)iVar113 * 0x10);
    param_4[1] = (byte)uVar66;
    uVar50 = param_3[2];
    fVar79 = (float)uVar50;
    uVar64 = auVar61._0_8_;
    uVar73 = auVar61._8_8_;
    if (fVar49 + fVar79 < fVar71) {
      *(undefined8 *)(param_5 + 6) = uVar73;
      *(undefined8 *)(param_5 + 4) = uVar64;
      *(ulong *)(param_5 + 10) = CONCAT44(fVar71 - (float)((ulong)uVar50 >> 0x20),fVar71 - fVar79);
      *(ulong *)(param_5 + 8) = CONCAT44(fVar71 - fVar51,fVar71 - fVar49);
      goto LAB_00183478;
    }
    cVar5 = *(char *)(param_3 + 3);
    fVar72 = auVar61._0_4_;
    fVar48 = auVar61._4_4_;
    fVar58 = auVar61._8_4_;
    fVar63 = auVar61._12_4_;
    if (cVar5 == '\0') {
      pfVar33 = (float *)(lVar3 + lVar37 * 0x10);
      pfVar7 = (float *)(lVar3 + (lVar38 + -3) * 0x10);
      pfVar8 = (float *)(lVar3 + (lVar38 + -2) * 0x10);
      pfVar9 = (float *)(lVar3 + (lVar38 + -1) * 0x10);
      auVar77._0_4_ = fVar72 - *pfVar33;
      auVar77._4_4_ = fVar48 - pfVar33[1];
      auVar77._8_4_ = fVar58 - pfVar33[2];
      auVar77._12_4_ = fVar63 - pfVar33[3];
      auVar88._0_4_ = fVar72 - *pfVar7;
      auVar88._4_4_ = fVar48 - pfVar7[1];
      auVar88._8_4_ = fVar58 - pfVar7[2];
      auVar88._12_4_ = fVar63 - pfVar7[3];
      auVar98._0_4_ = fVar72 - *pfVar8;
      auVar98._4_4_ = fVar48 - pfVar8[1];
      auVar98._8_4_ = fVar58 - pfVar8[2];
      auVar98._12_4_ = fVar63 - pfVar8[3];
      auVar106._0_4_ = fVar72 - *pfVar9;
      auVar106._4_4_ = fVar48 - pfVar9[1];
      auVar106._8_4_ = fVar58 - pfVar9[2];
      auVar106._12_4_ = fVar63 - pfVar9[3];
      auVar65 = NEON_ext(auVar77,auVar77,8,1);
      auVar85 = NEON_ext(auVar88,auVar88,8,1);
      fVar93 = auVar65._0_4_;
      fVar101 = auVar85._0_4_;
      auVar69 = NEON_ext(auVar98,auVar98,8,1);
      auVar86 = NEON_ext(auVar106,auVar106,8,1);
      fVar94 = auVar69._0_4_;
      fVar70 = auVar86._0_4_;
      auVar89._0_4_ =
           fVar93 * fVar93 + auVar77._0_4_ * auVar77._0_4_ + auVar77._4_4_ * auVar77._4_4_;
      auVar89._4_4_ =
           fVar101 * fVar101 + auVar88._0_4_ * auVar88._0_4_ + auVar88._4_4_ * auVar88._4_4_;
      auVar89._8_4_ =
           fVar94 * fVar94 + auVar98._0_4_ * auVar98._0_4_ + auVar98._4_4_ * auVar98._4_4_;
      auVar89._12_4_ =
           fVar70 * fVar70 + auVar106._0_4_ * auVar106._0_4_ + auVar106._4_4_ * auVar106._4_4_;
      auVar76 = NEON_frsqrte(auVar89,4);
      fVar67 = auVar76._0_4_;
      auVar107._0_4_ = fVar67 * fVar67;
      fVar80 = auVar76._4_4_;
      auVar107._4_4_ = fVar80 * fVar80;
      fVar83 = auVar76._8_4_;
      auVar107._8_4_ = fVar83 * fVar83;
      fVar92 = auVar76._12_4_;
      auVar107._12_4_ = fVar92 * fVar92;
      auVar96 = NEON_frsqrts(auVar89,auVar107,4);
      iVar117 = -(uint)(auVar89._0_4_ == 0.0);
      iVar124 = -(uint)(auVar89._4_4_ == 0.0);
      iVar81 = -(uint)(auVar89._8_4_ == 0.0);
      iVar82 = -(uint)(auVar89._12_4_ == 0.0);
      auVar76 = *(undefined1 (*) [16])(puVar28 + 0x240);
      auVar99._0_4_ =
           fVar67 * auVar96._0_4_ *
           (auVar77._0_4_ * fVar55 + auVar77._4_4_ * fVar56 + auVar65._4_4_ + fVar93 * fVar57);
      auVar99._4_4_ =
           fVar80 * auVar96._4_4_ *
           (auVar88._0_4_ * fVar55 + auVar88._4_4_ * fVar56 + auVar85._4_4_ + fVar101 * fVar57);
      auVar99._8_4_ =
           fVar83 * auVar96._8_4_ *
           (auVar98._0_4_ * fVar55 + auVar98._4_4_ * fVar56 + auVar69._4_4_ + fVar94 * fVar57);
      auVar99._12_4_ =
           fVar92 * auVar96._12_4_ *
           (auVar106._0_4_ * fVar55 + auVar106._4_4_ * fVar56 + auVar86._4_4_ + fVar70 * fVar57);
      auVar78[0] = ~(byte)iVar117;
      auVar78[1] = ~(byte)((uint)iVar117 >> 8);
      auVar78[2] = ~(byte)((uint)iVar117 >> 0x10);
      auVar78[3] = ~(byte)((uint)iVar117 >> 0x18);
      auVar78[4] = ~(byte)iVar124;
      auVar78[5] = ~(byte)((uint)iVar124 >> 8);
      auVar78[6] = ~(byte)((uint)iVar124 >> 0x10);
      auVar78[7] = ~(byte)((uint)iVar124 >> 0x18);
      auVar78[8] = ~(byte)iVar81;
      auVar78[9] = ~(byte)((uint)iVar81 >> 8);
      auVar78[10] = ~(byte)((uint)iVar81 >> 0x10);
      auVar78[0xb] = ~(byte)((uint)iVar81 >> 0x18);
      auVar78[0xc] = ~(byte)iVar82;
      auVar78[0xd] = ~(byte)((uint)iVar82 >> 8);
      auVar78[0xe] = ~(byte)((uint)iVar82 >> 0x10);
      auVar78[0xf] = ~(byte)((uint)iVar82 >> 0x18);
      auVar65 = auVar76 ^ (auVar76 ^ auVar99) & auVar78;
      if (0 < iVar103) {
        lVar39 = 0;
        do {
          pfVar33 = (float *)(lVar3 + lVar39 * 0x10);
          lVar39 = lVar39 + 4;
          auVar126._0_4_ = fVar72 - pfVar33[4];
          auVar126._4_4_ = fVar48 - pfVar33[5];
          auVar126._8_4_ = fVar58 - pfVar33[6];
          auVar126._12_4_ = fVar63 - pfVar33[7];
          auVar121._0_4_ = fVar72 - *pfVar33;
          auVar121._4_4_ = fVar48 - pfVar33[1];
          auVar121._8_4_ = fVar58 - pfVar33[2];
          auVar121._12_4_ = fVar63 - pfVar33[3];
          auVar130._0_4_ = fVar72 - pfVar33[8];
          auVar130._4_4_ = fVar48 - pfVar33[9];
          auVar130._8_4_ = fVar58 - pfVar33[10];
          auVar130._12_4_ = fVar63 - pfVar33[0xb];
          auVar131._0_4_ = fVar72 - pfVar33[0xc];
          auVar131._4_4_ = fVar48 - pfVar33[0xd];
          auVar131._8_4_ = fVar58 - pfVar33[0xe];
          auVar131._12_4_ = fVar63 - pfVar33[0xf];
          auVar85 = NEON_ext(auVar121,auVar121,8,1);
          auVar86 = NEON_ext(auVar126,auVar126,8,1);
          auVar96 = NEON_ext(auVar130,auVar130,8,1);
          auVar74 = NEON_ext(auVar131,auVar131,8,1);
          fVar93 = auVar85._0_4_;
          fVar101 = auVar86._0_4_;
          fVar94 = auVar96._0_4_;
          fVar70 = auVar74._0_4_;
          fVar67 = fVar93 * fVar93 +
                   auVar121._0_4_ * auVar121._0_4_ + auVar121._4_4_ * auVar121._4_4_;
          fVar80 = fVar101 * fVar101 +
                   auVar126._0_4_ * auVar126._0_4_ + auVar126._4_4_ * auVar126._4_4_;
          fVar83 = fVar94 * fVar94 +
                   auVar130._0_4_ * auVar130._0_4_ + auVar130._4_4_ * auVar130._4_4_;
          fVar92 = fVar70 * fVar70 +
                   auVar131._0_4_ * auVar131._0_4_ + auVar131._4_4_ * auVar131._4_4_;
          auVar25._4_4_ = fVar80;
          auVar25._0_4_ = fVar67;
          auVar25._8_4_ = fVar83;
          auVar25._12_4_ = fVar92;
          auVar69 = NEON_frsqrte(auVar25,4);
          fVar102 = auVar69._0_4_;
          auVar127._0_4_ = fVar102 * fVar102;
          fVar108 = auVar69._4_4_;
          auVar127._4_4_ = fVar108 * fVar108;
          fVar111 = auVar69._8_4_;
          auVar127._8_4_ = fVar111 * fVar111;
          fVar112 = auVar69._12_4_;
          auVar127._12_4_ = fVar112 * fVar112;
          auVar26._4_4_ = fVar80;
          auVar26._0_4_ = fVar67;
          auVar26._8_4_ = fVar83;
          auVar26._12_4_ = fVar92;
          auVar69 = NEON_frsqrts(auVar26,auVar127,4);
          iVar103 = -(uint)(fVar67 == 0.0);
          iVar117 = -(uint)(fVar80 == 0.0);
          iVar124 = -(uint)(fVar83 == 0.0);
          iVar81 = -(uint)(fVar92 == 0.0);
          auVar122._0_4_ =
               fVar102 * auVar69._0_4_ *
               (fVar55 * auVar121._0_4_ + fVar56 * auVar121._4_4_ + auVar85._4_4_ + fVar57 * fVar93)
          ;
          auVar122._4_4_ =
               fVar108 * auVar69._4_4_ *
               (fVar55 * auVar126._0_4_ + fVar56 * auVar126._4_4_ + auVar86._4_4_ + fVar57 * fVar101
               );
          auVar122._8_4_ =
               fVar111 * auVar69._8_4_ *
               (fVar55 * auVar130._0_4_ + fVar56 * auVar130._4_4_ + auVar96._4_4_ + fVar57 * fVar94)
          ;
          auVar122._12_4_ =
               fVar112 * auVar69._12_4_ *
               (fVar55 * auVar131._0_4_ + fVar56 * auVar131._4_4_ + auVar74._4_4_ + fVar57 * fVar70)
          ;
          auVar128[0] = ~(byte)iVar103;
          auVar128[1] = ~(byte)((uint)iVar103 >> 8);
          auVar128[2] = ~(byte)((uint)iVar103 >> 0x10);
          auVar128[3] = ~(byte)((uint)iVar103 >> 0x18);
          auVar128[4] = ~(byte)iVar117;
          auVar128[5] = ~(byte)((uint)iVar117 >> 8);
          auVar128[6] = ~(byte)((uint)iVar117 >> 0x10);
          auVar128[7] = ~(byte)((uint)iVar117 >> 0x18);
          auVar128[8] = ~(byte)iVar124;
          auVar128[9] = ~(byte)((uint)iVar124 >> 8);
          auVar128[10] = ~(byte)((uint)iVar124 >> 0x10);
          auVar128[0xb] = ~(byte)((uint)iVar124 >> 0x18);
          auVar128[0xc] = ~(byte)iVar81;
          auVar128[0xd] = ~(byte)((uint)iVar81 >> 8);
          auVar128[0xe] = ~(byte)((uint)iVar81 >> 0x10);
          auVar128[0xf] = ~(byte)((uint)iVar81 >> 0x18);
          auVar65 = NEON_fmin(auVar76 ^ (auVar76 ^ auVar122) & auVar128,auVar65,4);
        } while (lVar39 < lVar37);
      }
      uVar53 = NEON_fminnmv(auVar65,4);
      fVar93 = (float)*param_3;
      uVar50 = CONCAT44(uVar53,uVar53);
    }
    else {
      fVar93 = (float)*param_3;
      uVar50 = uVar54;
    }
    if (fVar71 < fVar93) {
      fVar49 = fVar71 - fVar49;
      fVar71 = fVar71 - fVar51;
      *(ulong *)(param_5 + 8) = CONCAT44(fVar71,fVar49);
      *(undefined8 *)(param_5 + 10) = uVar50;
      *param_4 = 1;
      *(ulong *)(param_5 + 2) = CONCAT44(fVar52 - fVar63 * fVar71,fVar57 - fVar58 * fVar49);
      *(ulong *)param_5 = CONCAT44(fVar56 - fVar48 * fVar71,fVar55 - fVar72 * fVar49);
      *(undefined8 *)(param_5 + 6) = uVar73;
      *(undefined8 *)(param_5 + 4) = uVar64;
      return true;
    }
    auVar76 = *(undefined1 (*) [16])(puVar28 + 0x250);
    iVar103 = param_1[4];
    lVar39 = 0;
    if (*param_1 != 0) {
      lVar39 = (long)*param_1 + (long)param_1;
    }
    lVar37 = (long)iVar103 + (long)(param_1 + 4);
    iVar117 = param_1[6];
    lVar38 = (long)iVar117 + (long)(param_1 + 6);
    lVar2 = 0;
    if (iVar103 != 0) {
      lVar2 = lVar37;
    }
    puVar1 = (ushort *)(lVar2 + (long)iVar113 * 4);
    uVar41 = *(undefined8 *)(puVar28 + 0x240);
    uVar66 = (ulong)(byte)puVar1[1];
    auVar65 = NEON_ext(auVar76,auVar76,8,1);
    lVar2 = 0;
    if (iVar117 != 0) {
      lVar2 = lVar38;
    }
    uVar34 = auVar76._0_8_;
    uStack_128 = auVar65._0_8_;
    uStack_138 = auVar65._0_4_;
    uStack_134 = auVar65._4_4_;
    if (uVar66 != 0) {
      lVar2 = lVar2 + (ulong)*puVar1;
      pfVar33 = (float *)(lVar39 + (ulong)*(byte *)(lVar2 + (uVar66 - 1)) * 0xc);
      auVar61 = NEON_ext(auVar61,auVar61,4,1);
      uVar35 = 0;
      uVar46 = 0xffffffff;
      uVar36 = uVar34;
      uVar47 = uVar34;
      fVar93 = *pfVar33;
      fVar94 = pfVar33[1];
      fVar101 = pfVar33[2];
      local_140 = uVar34;
      local_130 = uVar34;
      local_120 = uVar34;
      uStack_118 = uStack_138;
      uStack_114 = uStack_134;
      local_110 = uVar34;
      uStack_108 = uStack_138;
      uStack_104 = uStack_134;
      local_100 = uVar34;
      uStack_f8 = uStack_138;
      uStack_f4 = uStack_134;
      local_f0 = uVar34;
      uStack_e8 = uStack_138;
      uStack_e4 = uStack_134;
      local_e0 = uVar34;
      uStack_d8 = uStack_138;
      uStack_d4 = uStack_134;
      local_d0 = uVar34;
      uStack_c8 = uStack_138;
      uStack_c4 = uStack_134;
      local_c0 = uVar34;
      uStack_b8 = uStack_138;
      uStack_b4 = uStack_134;
      local_b0 = uVar34;
      uStack_a8 = uStack_138;
      uStack_a4 = uStack_134;
      local_a0 = uVar34;
      uStack_98 = uStack_138;
      uStack_94 = uStack_134;
      local_90 = uVar34;
      uStack_88 = uStack_138;
      uStack_84 = uStack_134;
      local_80 = uVar34;
      uStack_78 = uStack_138;
      uStack_74 = uStack_134;
      local_70 = uVar34;
      uStack_68 = uStack_138;
      uStack_64 = uStack_134;
      local_60 = uVar34;
      uStack_58 = uStack_138;
      uStack_54 = uStack_134;
      local_50 = uVar34;
      uStack_48 = uStack_138;
      uStack_44 = uStack_134;
      do {
        while( true ) {
          uVar68 = auVar76._0_8_;
          iVar103 = (int)uVar46;
          pfVar33 = (float *)(lVar39 + (ulong)*(byte *)(lVar2 + uVar35) * 0xc);
          fVar70 = pfVar33[2];
          fVar67 = *pfVar33;
          fVar80 = pfVar33[1];
          auVar100._0_4_ = fVar67 - fVar93;
          auVar100._4_4_ = fVar80 - fVar94;
          auVar100._8_4_ = fVar70 - fVar101;
          auVar100._12_4_ = fVar70 - fVar101;
          auVar65 = NEON_ext(auVar100,auVar100,4,1);
          fVar83 = auVar100._0_4_ * auVar100._0_4_ + auVar100._4_4_ * auVar100._4_4_ +
                   auVar100._8_4_ * auVar100._8_4_;
          fVar92 = auVar100._0_4_ * auVar100._0_4_ + auVar100._4_4_ * auVar100._4_4_ +
                   auVar100._8_4_ * auVar100._8_4_;
          uVar119 = CONCAT44(fVar92,fVar83);
          uVar104 = NEON_frsqrte(uVar119,4);
          fVar102 = (float)uVar104;
          fVar108 = (float)((ulong)uVar104 >> 0x20);
          uVar104 = NEON_frsqrts(uVar119,CONCAT44(fVar108 * fVar108,fVar102 * fVar102),4);
          fVar102 = fVar102 * (float)uVar104;
          fVar108 = fVar108 * (float)((ulong)uVar104 >> 0x20);
          uVar119 = NEON_frsqrts(uVar119,CONCAT44(fVar108 * fVar108,fVar102 * fVar102),4);
          fVar102 = (float)uVar119 * fVar102;
          fVar108 = (float)((ulong)uVar119 >> 0x20) * fVar108;
          auVar123._0_4_ = fVar72 * auVar65._0_4_ - auVar61._0_4_ * auVar100._0_4_;
          auVar123._4_4_ = fVar48 * auVar65._4_4_ - auVar61._4_4_ * auVar100._4_4_;
          auVar123._8_4_ = fVar58 * auVar100._0_4_ - fVar72 * auVar100._8_4_;
          auVar123._12_4_ = fVar63 * auVar100._4_4_ - fVar48 * auVar100._12_4_;
          auVar65 = NEON_ext(auVar123,auVar123,4,1);
          iVar117 = -(uint)(fVar83 <= 0.0);
          iVar124 = -(uint)(fVar92 <= 0.0);
          fVar102 = (float)CONCAT13((byte)((uint)fVar102 >> 0x18) & ~(byte)((uint)iVar117 >> 0x18),
                                    CONCAT12((byte)((uint)fVar102 >> 0x10) &
                                             ~(byte)((uint)iVar117 >> 0x10),
                                             CONCAT11((byte)((uint)fVar102 >> 8) &
                                                      ~(byte)((uint)iVar117 >> 8),
                                                      SUB41(fVar102,0) & ~(byte)iVar117)));
          fVar111 = (fVar55 - fVar93) * auVar65._0_4_;
          fVar114 = (fVar56 - fVar94) * auVar65._4_4_;
          fVar116 = (fVar57 - fVar101) * auVar123._0_4_;
          fVar112 = fVar111 + fVar114 + fVar116;
          fVar116 = fVar111 + fVar114 + fVar116;
          fVar108 = (float)(CONCAT17((byte)((uint)fVar108 >> 0x18) & ~(byte)((uint)iVar124 >> 0x18),
                                     CONCAT16((byte)((uint)fVar108 >> 0x10) &
                                              ~(byte)((uint)iVar124 >> 0x10),
                                              CONCAT15((byte)((uint)fVar108 >> 8) &
                                                       ~(byte)((uint)iVar124 >> 8),
                                                       CONCAT14(SUB41(fVar108,0) & ~(byte)iVar124,
                                                                fVar102)))) >> 0x20);
          if (fVar112 < 0.0) break;
          uVar41 = NEON_fmin(uVar41,CONCAT44(fVar108 * fVar116,fVar102 * fVar112),4);
LAB_00183764:
          uVar35 = uVar35 + 1;
          fVar93 = fVar67;
          fVar94 = fVar80;
          fVar101 = fVar70;
          if (uVar66 == uVar35) goto LAB_00183858;
        }
        fVar93 = (fVar55 - fVar93) * auVar100._0_4_;
        fVar111 = (fVar56 - fVar94) * auVar100._4_4_;
        fVar101 = (fVar57 - fVar101) * auVar100._8_4_;
        fVar94 = fVar102 * (fVar101 + fVar93 + fVar111);
        fVar93 = fVar108 * (fVar101 + fVar93 + fVar111);
        auVar90._0_8_ = CONCAT44(fVar92 * fVar108,fVar83 * fVar102);
        auVar90._8_8_ = 0;
        uVar120 = NEON_fmax(CONCAT44(-fVar93,-fVar94),
                            CONCAT44(fVar93 - fVar92 * fVar108,fVar94 - fVar83 * fVar102),4);
        *(float *)((long)&local_140 + uVar35 * 4) = (float)uVar120;
        if ((float)uVar47 <= (float)uVar120) goto LAB_00183764;
        uVar36 = CONCAT44(fVar108 * fVar93,fVar102 * fVar94);
        uVar34 = CONCAT44(fVar108 * fVar116,fVar102 * fVar112);
        uVar46 = uVar35 & 0xffffffff;
        iVar103 = (int)uVar35;
        uVar35 = uVar35 + 1;
        uVar47 = uVar120;
        auVar76 = auVar90;
        uVar68 = auVar90._0_8_;
        fVar93 = fVar67;
        fVar94 = fVar80;
        fVar101 = fVar70;
      } while (uVar66 != uVar35);
LAB_00183858:
      if (-1 < iVar103) {
        *(undefined4 *)((long)&local_140 + (long)iVar103 * 4) = 0x7f7fffee;
        bVar4 = *(byte *)(lVar2 + iVar103);
        uVar35 = (ulong)bVar4;
        fVar71 = auVar60._4_4_;
        iVar117 = (int)(uVar66 - 1);
        if (iVar103 != 0) {
          iVar117 = iVar103 + -1;
        }
        bVar6 = *(byte *)(lVar2 + iVar117);
        uVar66 = (ulong)bVar6;
        puVar32 = (undefined8 *)(lVar39 + uVar35 * 0xc);
        puVar31 = (undefined8 *)(lVar39 + uVar66 * 0xc);
        uVar47 = auVar60._0_8_;
        uVar64 = *puVar32;
        uVar73 = *puVar31;
        uVar41 = NEON_fmax(uVar54,uVar47 ^ (uVar47 ^ uVar36) &
                                           CONCAT44(-(uint)((float)(uVar36 >> 0x20) < fVar71),
                                                    -(uint)((float)uVar36 < fVar59)),4);
        fVar72 = *(float *)(puVar32 + 1);
        fVar48 = *(float *)(puVar31 + 1);
        param_4[1] = bVar6;
        param_4[2] = bVar4;
        fVar58 = (float)uVar73;
        fVar63 = (float)((ulong)uVar73 >> 0x20);
        fVar94 = (float)uVar41;
        fVar70 = (float)((ulong)uVar41 >> 0x20);
        fVar58 = fVar58 + fVar94 * ((float)uVar64 - fVar58);
        fVar63 = fVar63 + fVar70 * ((float)((ulong)uVar64 >> 0x20) - fVar63);
        fVar93 = fVar48 + fVar94 * (fVar72 - fVar48);
        fVar48 = fVar48 + fVar70 * (fVar72 - fVar48);
        fVar101 = fVar55 - fVar58;
        fVar67 = fVar56 - fVar63;
        fVar83 = fVar57 - fVar93;
        fVar72 = fVar101 * fVar101 + fVar67 * fVar67 + fVar83 * fVar83;
        fVar80 = fVar101 * fVar101 + fVar67 * fVar67 + fVar83 * fVar83;
        uVar64 = CONCAT44(fVar80,fVar72);
        uVar73 = NEON_frsqrte(uVar64,4);
        fVar92 = (float)uVar73;
        fVar108 = (float)((ulong)uVar73 >> 0x20);
        uVar73 = NEON_frsqrts(uVar64,CONCAT44(fVar108 * fVar108,fVar92 * fVar92),4);
        fVar92 = fVar92 * (float)uVar73;
        fVar108 = fVar108 * (float)((ulong)uVar73 >> 0x20);
        uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar108 * fVar108,fVar92 * fVar92),4);
        iVar103 = -(uint)(fVar72 <= 0.0);
        iVar117 = -(uint)(fVar80 <= 0.0);
        fVar92 = (float)uVar64 * fVar92;
        fVar108 = (float)((ulong)uVar64 >> 0x20) * fVar108;
        fVar102 = (float)CONCAT13((byte)((uint)fVar92 >> 0x18) & ~(byte)((uint)iVar103 >> 0x18),
                                  CONCAT12((byte)((uint)fVar92 >> 0x10) &
                                           ~(byte)((uint)iVar103 >> 0x10),
                                           CONCAT11((byte)((uint)fVar92 >> 8) &
                                                    ~(byte)((uint)iVar103 >> 8),
                                                    SUB41(fVar92,0) & ~(byte)iVar103)));
        fVar108 = (float)(CONCAT17((byte)((uint)fVar108 >> 0x18) & ~(byte)((uint)iVar117 >> 0x18),
                                   CONCAT16((byte)((uint)fVar108 >> 0x10) &
                                            ~(byte)((uint)iVar117 >> 0x10),
                                            CONCAT15((byte)((uint)fVar108 >> 8) &
                                                     ~(byte)((uint)iVar117 >> 8),
                                                     CONCAT14(SUB41(fVar108,0) & ~(byte)iVar117,
                                                              fVar102)))) >> 0x20);
        *param_4 = 3;
        fVar101 = fVar101 * fVar102;
        fVar67 = fVar67 * fVar108;
        fVar83 = fVar83 * fVar102;
        fVar92 = (fVar52 - fVar48) * fVar108;
        uVar43 = (uint)*(byte *)((long)puVar1 + 3) << 1;
        uVar50 = NEON_fmin(uVar50,uVar34 ^ 0x8000000080000000,4);
        fVar72 = fVar72 * fVar102 - fVar49;
        fVar80 = fVar80 * fVar108 - fVar51;
        if (0xfe < uVar43) {
          uVar43 = 0xff;
        }
        if (param_1[9] == 0) {
LAB_0018396c:
          auVar10._8_4_ = uStack_138;
          auVar10._0_8_ = local_140;
          auVar27._8_8_ = uStack_128;
          auVar27._0_8_ = local_130;
          auVar10._12_4_ = uStack_134;
          auVar60 = NEON_fmin(auVar10,auVar27,4);
          auVar11._8_4_ = uStack_118;
          auVar11._0_8_ = local_120;
          auVar11._12_4_ = uStack_114;
          auVar60 = NEON_fmin(auVar60,auVar11,4);
          auVar12._8_4_ = uStack_108;
          auVar12._0_8_ = local_110;
          auVar12._12_4_ = uStack_104;
          auVar60 = NEON_fmin(auVar60,auVar12,4);
          auVar13._8_4_ = uStack_f8;
          auVar13._0_8_ = local_100;
          auVar13._12_4_ = uStack_f4;
          auVar60 = NEON_fmin(auVar60,auVar13,4);
          auVar14._8_4_ = uStack_e8;
          auVar14._0_8_ = local_f0;
          auVar14._12_4_ = uStack_e4;
          auVar60 = NEON_fmin(auVar60,auVar14,4);
          auVar15._8_4_ = uStack_d8;
          auVar15._0_8_ = local_e0;
          auVar15._12_4_ = uStack_d4;
          auVar60 = NEON_fmin(auVar60,auVar15,4);
          auVar16._8_4_ = uStack_c8;
          auVar16._0_8_ = local_d0;
          auVar16._12_4_ = uStack_c4;
          auVar60 = NEON_fmin(auVar60,auVar16,4);
          auVar17._8_4_ = uStack_b8;
          auVar17._0_8_ = local_c0;
          auVar17._12_4_ = uStack_b4;
          auVar60 = NEON_fmin(auVar60,auVar17,4);
          auVar18._8_4_ = uStack_a8;
          auVar18._0_8_ = local_b0;
          auVar18._12_4_ = uStack_a4;
          auVar60 = NEON_fmin(auVar60,auVar18,4);
          auVar19._8_4_ = uStack_98;
          auVar19._0_8_ = local_a0;
          auVar19._12_4_ = uStack_94;
          auVar60 = NEON_fmin(auVar60,auVar19,4);
          auVar20._8_4_ = uStack_88;
          auVar20._0_8_ = local_90;
          auVar20._12_4_ = uStack_84;
          auVar60 = NEON_fmin(auVar60,auVar20,4);
          auVar21._8_4_ = uStack_78;
          auVar21._0_8_ = local_80;
          auVar21._12_4_ = uStack_74;
          auVar60 = NEON_fmin(auVar60,auVar21,4);
          auVar22._8_4_ = uStack_68;
          auVar22._0_8_ = local_70;
          auVar22._12_4_ = uStack_64;
          auVar60 = NEON_fmin(auVar60,auVar22,4);
          auVar23._8_4_ = uStack_58;
          auVar23._0_8_ = local_60;
          auVar23._12_4_ = uStack_54;
          auVar60 = NEON_fmin(auVar60,auVar23,4);
          auVar24._8_4_ = uStack_48;
          auVar24._0_8_ = local_50;
          auVar24._12_4_ = uStack_44;
          auVar60 = NEON_fmin(auVar60,auVar24,4);
          uVar53 = NEON_fminnmv(auVar60,4);
          uVar54 = CONCAT44(uVar53,uVar53);
LAB_001839ec:
          uVar50 = NEON_fmin(uVar50,uVar54,4);
LAB_001839f0:
          param_5[8] = fVar72;
          param_5[9] = fVar80;
          *(undefined8 *)(param_5 + 10) = uVar50;
          *(ulong *)(param_5 + 2) = CONCAT44(fVar48 + fVar51 * fVar92,fVar93 + fVar49 * fVar83);
          *(ulong *)param_5 = CONCAT44(fVar63 + fVar51 * fVar67,fVar58 + fVar49 * fVar101);
          param_5[6] = fVar83;
          param_5[7] = fVar92;
          param_5[4] = fVar101;
          param_5[5] = fVar67;
        }
        else {
          if ((float)uVar36 == fVar94) {
            uVar54 = NEON_fmin(uVar41,CONCAT44(fVar71 - fVar70,fVar59 - fVar94),4);
            uVar50 = NEON_fmin(uVar50,CONCAT44((float)(uVar68 >> 0x20) *
                                               (float)((ulong)uVar54 >> 0x20),
                                               (float)uVar68 * (float)uVar54),4);
            goto LAB_0018396c;
          }
          pfVar33 = (float *)(lVar3 + (long)iVar113 * 0x10);
          auVar91._0_4_ = *pfVar33 * fVar101;
          auVar91._4_4_ = pfVar33[1] * fVar67;
          auVar91._8_4_ = pfVar33[2] * fVar83;
          auVar91._12_4_ = pfVar33[3] * fVar92;
          auVar60 = NEON_ext(auVar91,auVar91,8,1);
          if (*(float *)(PTR_DAT_043723f0 + (ulong)uVar43 * 4) <
              auVar91._0_4_ + auVar91._4_4_ + auVar60._0_4_) {
            if (cVar5 == '\0') {
              if (fVar94 <= *(float *)(puVar28 + 0x150)) {
                bVar4 = bVar6;
              }
              uVar42 = *(uint *)((long)(param_1 + 10) + (ulong)(uint)bVar4 * 4 + (long)param_1[10]);
              puVar1 = (ushort *)(lVar37 + (ulong)(ushort)uVar42 * 4);
              bVar6 = (byte)puVar1[1];
              uVar43 = (uVar42 >> 0x10 & 0xff) + 1;
              uVar40 = 0;
              if (bVar6 != 0) {
                uVar40 = uVar43 / bVar6;
              }
              puVar31 = (undefined8 *)(lVar39 + (ulong)(uint)bVar4 * 0xc);
              bVar4 = *(byte *)(lVar38 + (ulong)*puVar1 + (ulong)(uVar43 - uVar40 * bVar6));
              fVar52 = *(float *)(puVar31 + 1);
              uVar64 = *puVar31;
              puVar31 = (undefined8 *)(lVar39 + (ulong)bVar4 * 0xc);
              uVar73 = *puVar31;
              uVar43 = uVar42 >> 0x10;
              fVar59 = (float)uVar64;
              fVar71 = (float)((ulong)uVar64 >> 0x20);
              fVar94 = fVar59 - (float)uVar73;
              fVar70 = fVar71 - (float)((ulong)uVar73 >> 0x20);
              fVar102 = fVar52 - *(float *)(puVar31 + 1);
              uVar64 = CONCAT44(fVar94 * fVar94 + fVar70 * fVar70 + fVar102 * fVar102,
                                fVar94 * fVar94 + fVar70 * fVar70 + fVar102 * fVar102);
              uVar73 = NEON_frsqrte(uVar64,4);
              fVar94 = (fVar55 - fVar59) * fVar94;
              fVar70 = (fVar56 - fVar71) * fVar70;
              fVar102 = (fVar57 - fVar52) * fVar102;
              fVar108 = (float)uVar73;
              fVar111 = (float)((ulong)uVar73 >> 0x20);
              uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar111 * fVar111,fVar108 * fVar108),4);
              uVar64 = CONCAT44(fVar111 * (float)((ulong)uVar64 >> 0x20) *
                                (fVar94 + fVar70 + fVar102),
                                fVar108 * (float)uVar64 * (fVar94 + fVar70 + fVar102));
              do {
                puVar1 = (ushort *)(lVar37 + (ulong)(uVar42 & 0xffff) * 4);
                bVar6 = (byte)puVar1[1];
                iVar113 = (uint)bVar6 + (uVar43 & 0xff) + -1;
                iVar103 = 0;
                if (bVar6 != 0) {
                  iVar103 = iVar113 / (int)(uint)bVar6;
                }
                lVar3 = (ulong)(iVar113 - iVar103 * (uint)bVar6 & 0xff) + (ulong)*puVar1;
                bVar6 = *(byte *)(lVar38 + lVar3);
                uVar42 = *(uint *)((long)(param_1 + 8) + lVar3 * 4 + (long)param_1[8]);
                puVar31 = (undefined8 *)(lVar39 + (ulong)bVar6 * 0xc);
                uVar73 = *puVar31;
                uVar43 = uVar42 >> 0x10;
                fVar94 = fVar59 - (float)uVar73;
                fVar70 = fVar71 - (float)((ulong)uVar73 >> 0x20);
                fVar102 = fVar52 - *(float *)(puVar31 + 1);
                uVar73 = CONCAT44(fVar94 * fVar94 + fVar70 * fVar70 + fVar102 * fVar102,
                                  fVar94 * fVar94 + fVar70 * fVar70 + fVar102 * fVar102);
                uVar41 = NEON_frsqrte(uVar73,4);
                fVar94 = (fVar55 - fVar59) * fVar94;
                fVar70 = (fVar56 - fVar71) * fVar70;
                fVar102 = (fVar57 - fVar52) * fVar102;
                fVar108 = (float)uVar41;
                fVar111 = (float)((ulong)uVar41 >> 0x20);
                uVar73 = NEON_frsqrts(uVar73,CONCAT44(fVar111 * fVar111,fVar108 * fVar108),4);
                uVar64 = NEON_fmin(uVar64,CONCAT44(fVar111 * (float)((ulong)uVar73 >> 0x20) *
                                                   (fVar94 + fVar70 + fVar102),
                                                   fVar108 * (float)uVar73 *
                                                   (fVar94 + fVar70 + fVar102)),4);
              } while (bVar6 != bVar4);
              uVar54 = NEON_fmax(uVar54,uVar64,4);
              goto LAB_001839ec;
            }
            goto LAB_001839f0;
          }
          if (fVar94 <= *(float *)(puVar28 + 0x150)) {
            bVar4 = bVar6;
          }
          puVar31 = (undefined8 *)(lVar39 + (ulong)(uint)bVar4 * 0xc);
          uVar50 = *puVar31;
          iVar103 = 10;
          uVar43 = (uint)bVar4;
          fVar94 = *(float *)(puVar31 + 1);
          do {
            uVar44 = uVar43;
            uVar42 = *(uint *)((long)(param_1 + 10) + (long)(int)uVar44 * 4 + (long)param_1[10]);
            puVar1 = (ushort *)(lVar37 + (ulong)(ushort)uVar42 * 4);
            bVar4 = (byte)puVar1[1];
            uVar43 = (uVar42 >> 0x10 & 0xff) + 1;
            uVar40 = 0;
            if (bVar4 != 0) {
              uVar40 = uVar43 / bVar4;
            }
            bVar4 = *(byte *)(lVar38 + (ulong)*puVar1 + (ulong)(uVar43 - uVar40 * bVar4));
            puVar31 = (undefined8 *)(lVar39 + (ulong)bVar4 * 0xc);
            uVar64 = *puVar31;
            uVar40 = uVar42 >> 0x10;
            fVar102 = (float)uVar50;
            fVar111 = fVar102 - (float)uVar64;
            fVar108 = (float)((ulong)uVar50 >> 0x20);
            fVar112 = fVar108 - (float)((ulong)uVar64 >> 0x20);
            fVar114 = fVar94 - *(float *)(puVar31 + 1);
            fVar70 = fVar111 * fVar111 + fVar112 * fVar112 + fVar114 * fVar114;
            fVar115 = fVar111 * fVar111 + fVar112 * fVar112 + fVar114 * fVar114;
            uVar50 = CONCAT44(fVar115,fVar70);
            uVar64 = NEON_frsqrte(uVar50,4);
            fVar118 = (float)uVar64;
            fVar125 = (float)((ulong)uVar64 >> 0x20);
            uVar50 = NEON_frsqrts(uVar50,CONCAT44(fVar125 * fVar125,fVar118 * fVar118),4);
            fVar116 = fVar55 - fVar102;
            fVar109 = fVar56 - fVar108;
            fVar110 = fVar57 - fVar94;
            fVar118 = fVar118 * (float)uVar50;
            fVar125 = fVar125 * (float)((ulong)uVar50 >> 0x20);
            iVar113 = -(uint)(fVar70 <= 0.0);
            iVar117 = -(uint)(fVar115 <= 0.0);
            fVar115 = (float)CONCAT13((byte)((uint)fVar118 >> 0x18) & ~(byte)((uint)iVar113 >> 0x18)
                                      ,CONCAT12((byte)((uint)fVar118 >> 0x10) &
                                                ~(byte)((uint)iVar113 >> 0x10),
                                                CONCAT11((byte)((uint)fVar118 >> 8) &
                                                         ~(byte)((uint)iVar113 >> 8),
                                                         SUB41(fVar118,0) & ~(byte)iVar113)));
            fVar70 = (fVar101 * fVar111 + fVar67 * fVar112 + fVar83 * fVar114) * fVar115;
            uVar50 = CONCAT44((fVar116 * fVar111 + fVar109 * fVar112 + fVar110 * fVar114) *
                              (float)(CONCAT17((byte)((uint)fVar125 >> 0x18) &
                                               ~(byte)((uint)iVar117 >> 0x18),
                                               CONCAT16((byte)((uint)fVar125 >> 0x10) &
                                                        ~(byte)((uint)iVar117 >> 0x10),
                                                        CONCAT15((byte)((uint)fVar125 >> 8) &
                                                                 ~(byte)((uint)iVar117 >> 8),
                                                                 CONCAT14(SUB41(fVar125,0) &
                                                                          ~(byte)iVar117,fVar115))))
                                     >> 0x20),
                              (fVar116 * fVar111 + fVar109 * fVar112 + fVar110 * fVar114) * fVar115)
            ;
            uVar45 = (uint)bVar4;
            do {
              puVar1 = (ushort *)(lVar37 + (ulong)(uVar42 & 0xffff) * 4);
              bVar6 = (byte)puVar1[1];
              iVar117 = (uint)bVar6 + (uVar40 & 0xff) + -1;
              iVar113 = 0;
              if (bVar6 != 0) {
                iVar113 = iVar117 / (int)(uint)bVar6;
              }
              lVar3 = (ulong)(iVar117 - iVar113 * (uint)bVar6 & 0xff) + (ulong)*puVar1;
              bVar6 = *(byte *)(lVar38 + lVar3);
              uVar42 = *(uint *)((long)(param_1 + 8) + lVar3 * 4 + (long)param_1[8]);
              puVar31 = (undefined8 *)(lVar39 + (ulong)bVar6 * 0xc);
              uVar64 = *puVar31;
              uVar40 = uVar42 >> 0x10;
              fVar112 = fVar102 - (float)uVar64;
              fVar114 = fVar108 - (float)((ulong)uVar64 >> 0x20);
              fVar115 = fVar94 - *(float *)(puVar31 + 1);
              fVar111 = fVar112 * fVar112 + fVar114 * fVar114 + fVar115 * fVar115;
              fVar118 = fVar112 * fVar112 + fVar114 * fVar114 + fVar115 * fVar115;
              uVar64 = CONCAT44(fVar118,fVar111);
              uVar73 = NEON_frsqrte(uVar64,4);
              fVar125 = (float)uVar73;
              fVar129 = (float)((ulong)uVar73 >> 0x20);
              uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar129 * fVar129,fVar125 * fVar125),4);
              iVar113 = -(uint)(fVar111 <= 0.0);
              iVar117 = -(uint)(fVar118 <= 0.0);
              fVar125 = fVar125 * (float)uVar64;
              fVar129 = fVar129 * (float)((ulong)uVar64 >> 0x20);
              fVar118 = (float)CONCAT13((byte)((uint)fVar125 >> 0x18) &
                                        ~(byte)((uint)iVar113 >> 0x18),
                                        CONCAT12((byte)((uint)fVar125 >> 0x10) &
                                                 ~(byte)((uint)iVar113 >> 0x10),
                                                 CONCAT11((byte)((uint)fVar125 >> 8) &
                                                          ~(byte)((uint)iVar113 >> 8),
                                                          SUB41(fVar125,0) & ~(byte)iVar113)));
              fVar111 = (fVar101 * fVar112 + fVar67 * fVar114 + fVar83 * fVar115) * fVar118;
              uVar50 = NEON_fmin(uVar50,CONCAT44((fVar116 * fVar112 + fVar109 * fVar114 +
                                                 fVar110 * fVar115) *
                                                 (float)(CONCAT17((byte)((uint)fVar129 >> 0x18) &
                                                                  ~(byte)((uint)iVar117 >> 0x18),
                                                                  CONCAT16((byte)((uint)fVar129 >>
                                                                                 0x10) &
                                                                           ~(byte)((uint)iVar117 >>
                                                                                  0x10),
                                                                           CONCAT15((byte)((uint)
                                                  fVar129 >> 8) & ~(byte)((uint)iVar117 >> 8),
                                                  CONCAT14(SUB41(fVar129,0) & ~(byte)iVar117,fVar118
                                                          )))) >> 0x20),
                                                 (fVar116 * fVar112 + fVar109 * fVar114 +
                                                 fVar110 * fVar115) * fVar118),4);
              bVar30 = fVar70 <= fVar111;
              if (bVar30) {
                fVar111 = fVar70;
              }
              fVar70 = fVar111;
              uVar43 = (uint)bVar6;
              if (bVar30) {
                uVar43 = uVar45;
              }
              uVar45 = uVar43;
            } while ((uint)bVar6 != (uint)bVar4);
            uVar42 = (uint)uVar66;
            uVar40 = (uint)uVar35;
            if (*(float *)(puVar28 + 0x260) <= fVar70) goto LAB_00183e48;
            puVar31 = (undefined8 *)(lVar39 + (long)(int)uVar43 * 0xc);
            uVar50 = *puVar31;
            fVar111 = *(float *)(puVar31 + 1);
            bVar30 = iVar103 == 0;
            iVar103 = iVar103 + -1;
            fVar72 = (float)uVar50 - fVar102;
            fVar48 = (float)((ulong)uVar50 >> 0x20) - fVar108;
            fVar93 = fVar111 - fVar94;
            uVar64 = CONCAT44(fVar72 * fVar72 + fVar48 * fVar48 + fVar93 * fVar93,
                              fVar72 * fVar72 + fVar48 * fVar48 + fVar93 * fVar93);
            uVar73 = NEON_frecpe(uVar64,4);
            uVar41 = NEON_frecps(uVar64,uVar73,4);
            fVar58 = (float)uVar73 * (float)uVar41;
            fVar63 = (float)((ulong)uVar73 >> 0x20) * (float)((ulong)uVar41 >> 0x20);
            uVar64 = NEON_frecps(uVar64,CONCAT44(fVar63,fVar58),4);
            fVar58 = fVar58 * (float)uVar64 *
                     (fVar116 * fVar72 + fVar109 * fVar48 + fVar110 * fVar93);
            fVar63 = fVar63 * (float)((ulong)uVar64 >> 0x20) *
                     (fVar116 * fVar72 + fVar109 * fVar48 + fVar110 * fVar93);
            uVar64 = NEON_fmax(uVar54,uVar47 ^ (uVar47 ^ CONCAT44(fVar63,fVar58)) &
                                               CONCAT44(-(uint)(fVar63 < fVar71),
                                                        -(uint)(fVar58 < fVar59)),4);
            fVar70 = (float)uVar64;
            fVar101 = (float)((ulong)uVar64 >> 0x20);
            fVar58 = fVar102 + fVar72 * fVar70;
            fVar63 = fVar108 + fVar48 * fVar101;
            fVar93 = fVar94 + fVar93 * fVar70;
            fVar48 = fVar94 + (fVar111 - fVar94) * fVar101;
            fVar101 = fVar55 - fVar58;
            fVar67 = fVar56 - fVar63;
            fVar83 = fVar57 - fVar93;
            fVar72 = fVar101 * fVar101 + fVar67 * fVar67 + fVar83 * fVar83;
            fVar80 = fVar101 * fVar101 + fVar67 * fVar67 + fVar83 * fVar83;
            uVar64 = CONCAT44(fVar80,fVar72);
            uVar73 = NEON_frsqrte(uVar64,4);
            fVar94 = (float)uVar73;
            fVar92 = (float)((ulong)uVar73 >> 0x20);
            uVar73 = NEON_frsqrts(uVar64,CONCAT44(fVar92 * fVar92,fVar94 * fVar94),4);
            fVar94 = fVar94 * (float)uVar73;
            fVar92 = fVar92 * (float)((ulong)uVar73 >> 0x20);
            uVar64 = NEON_frsqrts(uVar64,CONCAT44(fVar92 * fVar92,fVar94 * fVar94),4);
            iVar113 = -(uint)(fVar72 <= 0.0);
            iVar117 = -(uint)(fVar80 <= 0.0);
            fVar94 = (float)uVar64 * fVar94;
            fVar92 = (float)((ulong)uVar64 >> 0x20) * fVar92;
            fVar102 = (float)CONCAT13((byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar113 >> 0x18),
                                      CONCAT12((byte)((uint)fVar94 >> 0x10) &
                                               ~(byte)((uint)iVar113 >> 0x10),
                                               CONCAT11((byte)((uint)fVar94 >> 8) &
                                                        ~(byte)((uint)iVar113 >> 8),
                                                        SUB41(fVar94,0) & ~(byte)iVar113)));
            fVar101 = fVar101 * fVar102;
            fVar94 = (float)(CONCAT17((byte)((uint)fVar92 >> 0x18) & ~(byte)((uint)iVar117 >> 0x18),
                                      CONCAT16((byte)((uint)fVar92 >> 0x10) &
                                               ~(byte)((uint)iVar117 >> 0x10),
                                               CONCAT15((byte)((uint)fVar92 >> 8) &
                                                        ~(byte)((uint)iVar117 >> 8),
                                                        CONCAT14(SUB41(fVar92,0) & ~(byte)iVar117,
                                                                 fVar102)))) >> 0x20);
            fVar67 = fVar67 * fVar94;
            fVar83 = fVar83 * fVar102;
            fVar92 = (fVar52 - fVar48) * fVar94;
            fVar72 = fVar72 * fVar102 - fVar49;
            fVar80 = fVar80 * fVar94 - fVar51;
            if (bVar30) break;
            uVar66 = (ulong)uVar44;
            uVar35 = (ulong)uVar43;
            fVar94 = fVar111;
          } while (fVar59 <= fVar70);
          uVar50 = 0;
          uVar42 = uVar44;
          uVar40 = uVar43;
LAB_00183e48:
          param_4[1] = (byte)uVar42;
          param_4[2] = (byte)uVar40;
          *(ulong *)(param_5 + 2) = CONCAT44(fVar48 + fVar51 * fVar92,fVar93 + fVar49 * fVar83);
          *(ulong *)param_5 = CONCAT44(fVar63 + fVar51 * fVar67,fVar58 + fVar49 * fVar101);
          param_5[6] = fVar83;
          param_5[7] = fVar92;
          param_5[4] = fVar101;
          param_5[5] = fVar67;
          uVar54 = NEON_fmax(uVar54,uVar50,4);
          param_5[8] = fVar72;
          param_5[9] = fVar80;
          *(undefined8 *)(param_5 + 10) = uVar54;
        }
        bVar29 = fVar79 <= fVar72;
        bVar30 = fVar72 == fVar79;
        goto LAB_001832a8;
      }
    }
    fVar49 = fVar71 - fVar49;
    fVar71 = fVar71 - fVar51;
    uVar54 = NEON_fmin(uVar50,uVar41,4);
    *param_4 = 2;
    *(ulong *)(param_5 + 8) = CONCAT44(fVar71,fVar49);
    *(undefined8 *)(param_5 + 10) = uVar54;
    *(undefined8 *)(param_5 + 0xc) = uVar41;
    bVar30 = true;
    param_5[2] = fVar57 - fVar58 * fVar49;
    param_5[3] = fVar52 - fVar63 * fVar71;
    *param_5 = fVar55 - fVar72 * fVar49;
    param_5[1] = fVar56 - fVar48 * fVar71;
    *(undefined8 *)(param_5 + 6) = uVar73;
    *(undefined8 *)(param_5 + 4) = uVar64;
  }
  return bVar30;
}


