/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c3964; name: FUN_001c3964
 */


/* WARNING: Removing unreachable block (ram,0x001c4190) */
/* WARNING: Removing unreachable block (ram,0x001c4168) */
/* WARNING: Removing unreachable block (ram,0x001c41e4) */
/* WARNING: Removing unreachable block (ram,0x001c4da8) */
/* WARNING: Removing unreachable block (ram,0x001c43fc) */
/* WARNING: Removing unreachable block (ram,0x001c4420) */
/* WARNING: Removing unreachable block (ram,0x001c4a88) */
/* WARNING: Removing unreachable block (ram,0x001c4a5c) */
/* WARNING: Removing unreachable block (ram,0x001c4d84) */
/* WARNING: Removing unreachable block (ram,0x001c5334) */

undefined4 FUN_001c3964(char *param_1,float *param_2,ulong param_3,uint param_4,long param_5)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  uint uVar28;
  bool bVar29;
  bool bVar30;
  undefined4 uVar31;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  uint uVar39;
  long lVar40;
  long *plVar41;
  ulong uVar42;
  long lVar43;
  undefined8 *puVar44;
  uint uVar45;
  long lVar46;
  ulong uVar47;
  float *pfVar48;
  undefined8 *puVar49;
  ulong uVar50;
  long lVar51;
  ulong uVar52;
  uint uVar53;
  int *piVar54;
  undefined1 (*pauVar55) [16];
  ulong uVar56;
  long lVar57;
  ulong uVar58;
  undefined8 uVar59;
  undefined *puVar60;
  ulong uVar61;
  ulong uVar62;
  uint *puVar63;
  ulong uVar64;
  float fVar71;
  float fVar72;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar73;
  undefined1 auVar70 [16];
  float fVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  undefined8 uVar91;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  int iVar92;
  undefined8 uVar93;
  undefined8 uVar101;
  undefined1 auVar95 [16];
  int iVar100;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined8 uVar94;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar102;
  float fVar103;
  float fVar109;
  undefined8 uVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  ulong local_90;
  undefined8 uStack_88;
  ulong local_78;
  undefined8 local_70;
  
  uVar58 = param_3 & 0xffffffff;
  uVar64 = param_3 & 0xffffffff;
  uVar33 = (uint)param_3;
  if ((uVar33 == 0) || (((ulong)param_2 & 0xf) == 0)) {
    FUN_001c108c(param_1 + 0x38);
    puVar63 = (uint *)(param_1 + 0x88);
    *puVar63 = 0;
    puVar60 = PTR_DAT_04372370;
    fVar72 = *(float *)(PTR_DAT_04372370 + 0x240);
    fVar71 = *(float *)(PTR_DAT_04372370 + 0x244);
    fVar81 = *(float *)(PTR_DAT_04372370 + 0x248);
    fVar73 = *(float *)(PTR_DAT_04372370 + 0x24c);
    *(float *)(param_1 + 0xd8) = fVar81;
    *(float *)(param_1 + 0xdc) = fVar73;
    *(float *)(param_1 + 0xd0) = fVar72;
    *(float *)(param_1 + 0xd4) = fVar71;
    *(float *)(param_1 + 0xf8) = fVar81;
    *(float *)(param_1 + 0xfc) = fVar73;
    *(float *)(param_1 + 0xf0) = fVar72;
    *(float *)(param_1 + 0xf4) = fVar71;
    auVar15 = *(undefined1 (*) [16])(puVar60 + 0x200);
    auVar67 = *(undefined1 (*) [16])(puVar60 + 0x210);
    *(float *)(param_1 + 0xe8) = -fVar81;
    *(float *)(param_1 + 0xec) = -fVar73;
    *(float *)(param_1 + 0xe0) = -fVar72;
    *(float *)(param_1 + 0xe4) = -fVar71;
    param_1[0x98] = '\0';
    param_1[0x99] = '\0';
    param_1[0x9a] = '\0';
    param_1[0x9b] = '\0';
    uVar101 = auVar15._8_8_;
    *(undefined8 *)(param_1 + 0x168) = uVar101;
    uVar93 = auVar15._0_8_;
    *(undefined8 *)(param_1 + 0x160) = uVar93;
    param_1[0xa8] = '\0';
    param_1[0xa9] = '\0';
    param_1[0xaa] = '\0';
    param_1[0xab] = '\0';
    *(float *)(param_1 + 0x108) = -fVar81;
    *(float *)(param_1 + 0x10c) = -fVar73;
    *(float *)(param_1 + 0x100) = -fVar72;
    *(float *)(param_1 + 0x104) = -fVar71;
    param_1[0x1fc] = '\0';
    param_1[0x1fd] = '\0';
    uVar91 = auVar67._8_8_;
    *(undefined8 *)(param_1 + 0x178) = uVar91;
    uVar94 = auVar67._0_8_;
    *(undefined8 *)(param_1 + 0x170) = uVar94;
    param_1[0x1fe] = '\0';
    param_1[0xb8] = '\0';
    param_1[0xb9] = '\0';
    param_1[0xba] = '\0';
    param_1[0xbb] = '\0';
    *(float *)(param_1 + 0xbc) = fVar72;
    param_1[0xb0] = '\0';
    param_1[0xb1] = '\0';
    param_1[0xb2] = '\0';
    param_1[0xb3] = '\0';
    param_1[0xb4] = '\0';
    param_1[0xb5] = '\0';
    param_1[0xb6] = '\0';
    param_1[0xb7] = '\0';
    param_1[500] = '\0';
    param_1[0x1f5] = '\0';
    param_1[0x1f6] = '\0';
    param_1[0x1f7] = '\0';
    param_1[200] = '\0';
    param_1[0xc9] = '\0';
    param_1[0xca] = '\0';
    param_1[0xcb] = '\0';
    *(float *)(param_1 + 0xcc) = fVar72;
    param_1[0xc0] = '\0';
    param_1[0xc1] = '\0';
    param_1[0xc2] = '\0';
    param_1[0xc3] = '\0';
    param_1[0xc4] = '\0';
    param_1[0xc5] = '\0';
    param_1[0xc6] = '\0';
    param_1[199] = '\0';
    auVar67 = *(undefined1 (*) [16])(puVar60 + 0x220);
    auVar77 = *(undefined1 (*) [16])(puVar60 + 0x230);
    uVar104 = auVar67._8_8_;
    *(undefined8 *)(param_1 + 0x188) = uVar104;
    uVar59 = auVar67._0_8_;
    *(undefined8 *)(param_1 + 0x180) = uVar59;
    *(long *)(param_1 + 0x198) = auVar77._8_8_;
    *(long *)(param_1 + 400) = auVar77._0_8_;
    param_1[0x1a8] = '\0';
    param_1[0x1a9] = '\0';
    param_1[0x1aa] = '\0';
    param_1[0x1ab] = '\0';
    param_1[0x1ac] = '\0';
    param_1[0x1ad] = '\0';
    param_1[0x1ae] = '\0';
    param_1[0x1af] = '\0';
    param_1[0x1a0] = '\0';
    param_1[0x1a1] = '\0';
    param_1[0x1a2] = '\0';
    param_1[0x1a3] = '\0';
    param_1[0x1a4] = '\0';
    param_1[0x1a5] = '\0';
    param_1[0x1a6] = '\0';
    param_1[0x1a7] = '\0';
    *(undefined8 *)(param_1 + 0x1b8) = uVar101;
    *(undefined8 *)(param_1 + 0x1b0) = uVar93;
    *(undefined8 *)(param_1 + 0x1c8) = uVar91;
    *(undefined8 *)(param_1 + 0x1c0) = uVar94;
    *(undefined8 *)(param_1 + 0x1d8) = uVar104;
    *(undefined8 *)(param_1 + 0x1d0) = uVar59;
    param_1[0x1f0] = -1;
    param_1[0x1f1] = -1;
    param_1[0x1f2] = -1;
    param_1[499] = -1;
    param_1[0x1e0] = '\0';
    param_1[0x1e1] = '\0';
    param_1[0x1e2] = '\0';
    param_1[0x1e3] = '\0';
    param_1[0x1e4] = '\0';
    param_1[0x1e5] = '\0';
    param_1[0x1e6] = '\0';
    param_1[0x1e7] = '\0';
    param_1[0x1e8] = '\0';
    param_1[0x1e9] = '\0';
    param_1[0x1ea] = '\0';
    param_1[0x1eb] = '\0';
    param_1[0x1ec] = '\0';
    param_1[0x1ed] = '\0';
    param_1[0x1ee] = '\0';
    param_1[0x1ef] = '\0';
    param_1[0x130] = '\0';
    param_1[0x131] = '\0';
    param_1[0x132] = '\0';
    param_1[0x133] = '\0';
    param_1[0x134] = '\0';
    param_1[0x135] = '\0';
    param_1[0x136] = '\0';
    param_1[0x137] = '\0';
    param_1[0x138] = '\0';
    param_1[0x139] = '\0';
    param_1[0x13a] = '\0';
    param_1[0x13b] = '\0';
    param_1[0x13c] = '\0';
    param_1[0x13d] = '\0';
    param_1[0x13e] = '\0';
    param_1[0x13f] = '\0';
    param_1[0x140] = '\0';
    param_1[0x141] = '\0';
    param_1[0x142] = '\0';
    param_1[0x143] = '\0';
    param_1[0x144] = '\0';
    param_1[0x145] = '\0';
    param_1[0x146] = '\0';
    param_1[0x147] = '\0';
    param_1[0x148] = '\0';
    param_1[0x149] = '\0';
    param_1[0x14a] = '\0';
    param_1[0x14b] = '\0';
    param_1[0x14c] = '\0';
    param_1[0x14d] = '\0';
    param_1[0x14e] = '\0';
    param_1[0x14f] = '\0';
    param_1[0x150] = '\0';
    param_1[0x151] = '\0';
    param_1[0x152] = '\0';
    param_1[0x153] = '\0';
    param_1[0x154] = '\0';
    param_1[0x155] = '\0';
    param_1[0x156] = '\0';
    param_1[0x157] = '\0';
    param_1[0x158] = '\0';
    param_1[0x159] = '\0';
    param_1[0x15a] = '\0';
    param_1[0x15b] = '\0';
    param_1[0x15c] = '\0';
    param_1[0x15d] = '\0';
    param_1[0x15e] = '\0';
    param_1[0x15f] = '\0';
    param_1[0x118] = '\0';
    param_1[0x119] = '\0';
    param_1[0x11a] = '\0';
    param_1[0x11b] = '\0';
    param_1[0x11c] = '\0';
    param_1[0x11d] = '\0';
    param_1[0x11e] = '\0';
    param_1[0x11f] = '\0';
    param_1[0x110] = '\0';
    param_1[0x111] = '\0';
    param_1[0x112] = '\0';
    param_1[0x113] = '\0';
    param_1[0x114] = '\0';
    param_1[0x115] = '\0';
    param_1[0x116] = '\0';
    param_1[0x117] = '\0';
    if ((param_4 & 1) == 0) {
      param_1[0x120] = '\0';
      param_1[0x121] = '\0';
      param_1[0x122] = '\0';
      param_1[0x123] = '\0';
      param_1[0x124] = '\0';
      param_1[0x125] = '\0';
      param_1[0x126] = '\0';
      param_1[0x127] = '\0';
      param_1[0x128] = '\0';
      param_1[0x129] = '\0';
      param_1[0x12a] = '\0';
      param_1[299] = '\0';
      param_1[300] = '\0';
      param_1[0x12d] = '\0';
      param_1[0x12e] = '\0';
      param_1[0x12f] = '\0';
    }
    if ((int)uVar33 < 1) {
LAB_001c5798:
      if (*(int *)(param_1 + 0x1f0) != -1) {
        if (param_1[9] != '\0') {
          FUN_001c1544(param_1);
        }
        if (param_1[10] != '\0') {
          FUN_001c27b4(param_1);
        }
      }
LAB_001c57c4:
      return *(undefined4 *)(param_1 + 0x1f0);
    }
    if (param_5 == 0) {
      if (param_1[0xc] == '\0') {
        FUN_001c120c(param_1,param_2,uVar58);
      }
      else {
        param_1[0x130] = '\0';
        param_1[0x131] = '\0';
        param_1[0x132] = '\0';
        param_1[0x133] = '\0';
        param_1[0x134] = '\0';
        param_1[0x135] = '\0';
        param_1[0x136] = '\0';
        param_1[0x137] = '\0';
        param_1[0x138] = '\0';
        param_1[0x139] = '\0';
        param_1[0x13a] = '\0';
        param_1[0x13b] = '\0';
        param_1[0x13c] = '\0';
        param_1[0x13d] = '\0';
        param_1[0x13e] = '\0';
        param_1[0x13f] = '\0';
        uVar36 = *(ulong *)(puVar60 + 0x60);
        *(ulong *)(param_1 + 0x148) = uVar36 & 0xffffffff;
        *(ulong *)(param_1 + 0x140) = uVar36;
        *(ulong *)(param_1 + 0x158) = uVar36 & 0xffffffff;
        *(ulong *)(param_1 + 0x150) = uVar36;
      }
    }
    else {
      uVar59 = *(undefined8 *)(param_5 + 0x130);
      *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_5 + 0x138);
      *(undefined8 *)(param_1 + 0x130) = uVar59;
      uVar59 = *(undefined8 *)(param_5 + 0x140);
      *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_5 + 0x148);
      *(undefined8 *)(param_1 + 0x140) = uVar59;
      auVar67 = *(undefined1 (*) [16])(param_5 + 0x150);
      *(long *)(param_1 + 0x158) = auVar67._8_8_;
      *(long *)(param_1 + 0x150) = auVar67._0_8_;
    }
    fVar73 = 0.0;
    fVar81 = 0.0;
    fVar71 = 0.0;
    fVar72 = 0.0;
    uVar34 = uVar33;
    if (3 < (int)uVar33) {
      uVar34 = 4;
    }
    param_1[0x110] = '\0';
    param_1[0x111] = '\0';
    param_1[0x112] = '\0';
    param_1[0x113] = '\0';
    param_1[0x114] = '\0';
    param_1[0x115] = '\0';
    param_1[0x116] = '\0';
    param_1[0x117] = '\0';
    param_1[0x118] = '\0';
    param_1[0x119] = '\0';
    param_1[0x11a] = '\0';
    param_1[0x11b] = '\0';
    param_1[0x11c] = '\0';
    param_1[0x11d] = '\0';
    param_1[0x11e] = '\0';
    param_1[0x11f] = '\0';
    *(uint *)(param_1 + 0x1f0) = uVar34 - 1;
    if ((param_4 & 1) == 0) {
      bVar30 = false;
      param_1[0x120] = '\0';
      param_1[0x121] = '\0';
      param_1[0x122] = '\0';
      param_1[0x123] = '\0';
      param_1[0x124] = '\0';
      param_1[0x125] = '\0';
      param_1[0x126] = '\0';
      param_1[0x127] = '\0';
      param_1[0x128] = '\0';
      param_1[0x129] = '\0';
      param_1[0x12a] = '\0';
      param_1[299] = '\0';
      param_1[300] = '\0';
      param_1[0x12d] = '\0';
      param_1[0x12e] = '\0';
      param_1[0x12f] = '\0';
      if (1 < (int)uVar33) {
        auVar67._0_8_ = CONCAT44(param_2[5] - param_2[1],param_2[4] - *param_2);
        auVar67._8_4_ = param_2[6] - param_2[2];
        auVar67._12_4_ = param_2[7] - param_2[3];
        *(long *)(param_1 + 0x118) = auVar67._8_8_;
        *(undefined8 *)(param_1 + 0x110) = auVar67._0_8_;
        if (uVar33 == 2) {
          bVar30 = false;
        }
        else {
          *(undefined8 *)(param_1 + 0x128) = uVar101;
          *(undefined8 *)(param_1 + 0x120) = uVar93;
          auVar77._0_12_ = auVar15._0_12_;
          auVar77._12_4_ = -*param_2;
          *(long *)(param_1 + 0x128) = auVar77._8_8_;
          *(undefined8 *)(param_1 + 0x120) = uVar93;
          bVar30 = false;
          if (param_1[1] != '\0') {
            param_1[0x128] = '\0';
            param_1[0x129] = '\0';
            param_1[0x12a] = '\0';
            param_1[299] = '\0';
            param_1[300] = '\0';
            param_1[0x12d] = '\0';
            param_1[0x12e] = '\0';
            param_1[0x12f] = '\0';
            param_1[0x120] = '\0';
            param_1[0x121] = '\0';
            param_1[0x122] = '\0';
            param_1[0x123] = '\0';
            param_1[0x124] = '\0';
            param_1[0x125] = '\0';
            param_1[0x126] = '\0';
            param_1[0x127] = '\0';
            uVar36 = *(ulong *)(puVar60 + 0x50);
            uVar35 = 0;
            uVar34 = 1;
            if ((int)uVar33 < 2) goto LAB_001c3c94;
            do {
              auVar67 = *(undefined1 (*) [16])(param_2 + (long)(int)uVar35 * 4);
              uVar53 = uVar35;
              do {
                uVar45 = uVar34;
                uVar53 = uVar53 + 2;
                if ((int)uVar53 < (int)uVar33) {
                  pfVar48 = param_2 + (long)(int)uVar45 * 4;
                  auVar115._0_4_ = *pfVar48 - auVar67._0_4_;
                  auVar115._4_4_ = pfVar48[1] - auVar67._4_4_;
                  auVar115._8_4_ = pfVar48[2] - auVar67._8_4_;
                  auVar115._12_4_ = pfVar48[3] - auVar67._12_4_;
                  auVar77 = NEON_ext(auVar115,auVar115,4,1);
                  do {
                    pfVar48 = param_2 + (long)(int)uVar53 * 4;
                    auVar95._0_4_ = *pfVar48 - auVar67._0_4_;
                    auVar95._4_4_ = pfVar48[1] - auVar67._4_4_;
                    auVar95._8_4_ = pfVar48[2] - auVar67._8_4_;
                    auVar95._12_4_ = pfVar48[3] - auVar67._12_4_;
                    auVar105 = NEON_ext(auVar95,auVar95,4,1);
                    fVar102 = auVar115._0_4_ * auVar105._0_4_ - auVar77._0_4_ * auVar95._0_4_;
                    fVar109 = auVar115._4_4_ * auVar105._4_4_ - auVar77._4_4_ * auVar95._4_4_;
                    auVar105._0_8_ = CONCAT44(fVar109,fVar102);
                    auVar105._8_4_ = auVar115._8_4_ * auVar95._0_4_ - auVar115._0_4_ * auVar95._8_4_
                    ;
                    auVar105._12_4_ =
                         auVar115._12_4_ * auVar95._4_4_ - auVar115._4_4_ * auVar95._12_4_;
                    auVar95 = NEON_ext(auVar105,auVar105,4,1);
                    fVar74 = auVar95._0_4_;
                    fVar103 = auVar95._4_4_;
                    fVar110 = fVar74 * fVar74 + fVar103 * fVar103 + fVar102 * fVar102;
                    uVar34 = uVar53;
                    if ((float)uVar36 < fVar110) {
                      uVar34 = uVar33;
                      uVar39 = uVar33;
                      uVar10 = uVar33;
                      if (fVar110 <= 1e-05) {
                        uVar34 = uVar53;
                        uVar39 = uVar45;
                        uVar10 = uVar35;
                      }
                      uVar35 = uVar10;
                      uVar45 = uVar39;
                      *(undefined8 *)(param_1 + 0x128) = auVar105._0_8_;
                      *(long *)(param_1 + 0x120) = auVar95._0_8_;
                      uVar36 = (ulong)(uint)fVar110;
                      fVar72 = fVar74;
                      fVar71 = fVar103;
                      fVar81 = fVar102;
                      fVar73 = fVar109;
                    }
                    uVar53 = uVar34 + 1;
                  } while ((int)uVar53 < (int)uVar33);
                }
                uVar34 = uVar45 + 1;
                uVar53 = uVar45;
              } while ((int)(uVar45 + 1) < (int)uVar33);
              uVar34 = uVar35 + 1;
LAB_001c3c94:
              do {
                uVar35 = uVar34;
                if ((int)uVar33 <= (int)uVar35) {
                  fVar74 = fVar81 * fVar81 + fVar72 * fVar72 + fVar71 * fVar71;
                  fVar102 = fVar81 * fVar81 + fVar72 * fVar72 + fVar71 * fVar71;
                  uVar59 = CONCAT44(fVar102,fVar74);
                  uVar104 = NEON_frsqrte(uVar59,4);
                  fVar103 = (float)uVar104;
                  fVar109 = (float)((ulong)uVar104 >> 0x20);
                  uVar104 = NEON_frsqrts(uVar59,CONCAT44(fVar109 * fVar109,fVar103 * fVar103),4);
                  fVar103 = fVar103 * (float)uVar104;
                  fVar109 = fVar109 * (float)((ulong)uVar104 >> 0x20);
                  auVar82._0_8_ = CONCAT44(-(uint)(0.0 < fVar102),-(uint)(0.0 < fVar74));
                  iVar92 = -(uint)(fVar74 <= 0.0);
                  iVar100 = -(uint)(fVar102 <= 0.0);
                  uVar59 = NEON_frsqrts(uVar59,CONCAT44(fVar109 * fVar109,fVar103 * fVar103),4);
                  auVar82._8_8_ = auVar82._0_8_;
                  fVar103 = (float)uVar59 * fVar103;
                  fVar109 = (float)((ulong)uVar59 >> 0x20) * fVar109;
                  fVar103 = (float)CONCAT13((byte)((uint)fVar103 >> 0x18) &
                                            ~(byte)((uint)iVar92 >> 0x18),
                                            CONCAT12((byte)((uint)fVar103 >> 0x10) &
                                                     ~(byte)((uint)iVar92 >> 0x10),
                                                     CONCAT11((byte)((uint)fVar103 >> 8) &
                                                              ~(byte)((uint)iVar92 >> 8),
                                                              SUB41(fVar103,0) & ~(byte)iVar92)));
                  auVar65._0_4_ = -(uint)(-(uint)(0.0 < fVar74) == 0 && -(uint)(0.0 < fVar102) == 0)
                  ;
                  auVar65._4_4_ = auVar65._0_4_;
                  auVar65._8_4_ = auVar65._0_4_;
                  auVar65._12_4_ = auVar65._0_4_;
                  auVar75._0_4_ = fVar72 * fVar103;
                  fVar74 = (float)(CONCAT17((byte)((uint)fVar109 >> 0x18) &
                                            ~(byte)((uint)iVar100 >> 0x18),
                                            CONCAT16((byte)((uint)fVar109 >> 0x10) &
                                                     ~(byte)((uint)iVar100 >> 0x10),
                                                     CONCAT15((byte)((uint)fVar109 >> 8) &
                                                              ~(byte)((uint)iVar100 >> 8),
                                                              CONCAT14(SUB41(fVar109,0) &
                                                                       ~(byte)iVar100,fVar103)))) >>
                                  0x20);
                  auVar75._4_4_ = fVar71 * fVar74;
                  auVar75._8_4_ = fVar81 * fVar103;
                  auVar75._12_4_ = fVar73 * fVar74;
                  bVar30 = true;
                  auVar14._4_4_ = fVar71;
                  auVar14._0_4_ = fVar72;
                  auVar14._8_4_ = fVar81;
                  auVar14._12_4_ = fVar73;
                  auVar83._4_4_ = fVar71;
                  auVar83._0_4_ = fVar72;
                  auVar83._8_4_ = fVar81;
                  auVar83._12_4_ = fVar73;
                  auVar83 = auVar83 ^ (auVar14 ^ auVar75) & auVar82;
                  auVar83 = auVar83 ^ (auVar83 ^ auVar15) & auVar65;
                  *(long *)(param_1 + 0x128) = auVar83._8_8_;
                  *(long *)(param_1 + 0x120) = auVar83._0_8_;
                  auVar76._0_4_ = *param_2 * auVar83._0_4_;
                  auVar76._4_4_ = param_2[1] * auVar83._4_4_;
                  auVar76._8_4_ = param_2[2] * auVar83._8_4_;
                  auVar76._12_4_ = param_2[3] * auVar83._12_4_;
                  auVar67 = NEON_ext(auVar76,auVar76,8,1);
                  auVar66._0_12_ = auVar83._0_12_;
                  auVar66._12_4_ = -(auVar76._0_4_ + auVar76._4_4_ + auVar67._0_4_);
                  *(long *)(param_1 + 0x128) = auVar66._8_8_;
                  *(long *)(param_1 + 0x120) = auVar83._0_8_;
                  goto LAB_001c3df8;
                }
                uVar34 = uVar35 + 1;
              } while ((int)uVar33 <= (int)uVar34);
            } while( true );
          }
        }
      }
    }
    else {
      param_1[0x1f0] = '\x02';
      param_1[0x1f1] = '\0';
      param_1[0x1f2] = '\0';
      param_1[499] = '\0';
      bVar30 = true;
    }
LAB_001c3df8:
    uVar36 = 0;
    param_1[0x88] = '\0';
    param_1[0x89] = '\0';
    param_1[0x8a] = '\0';
    param_1[0x8b] = '\0';
    plVar41 = *(long **)PTR_PTR_04372408;
    uVar34 = *(uint *)(param_1 + 0x8c);
    puVar6 = (ulong *)(param_1 + 0x80);
    if ((int)(uVar34 & 0x3fffffff) < (int)uVar33) {
      uVar36 = *puVar6;
      if (0x3fffffff < (int)uVar33) {
        FUN_032bd0a8(uVar58);
        uVar34 = *(uint *)(param_1 + 0x8c);
      }
      uVar35 = (uVar34 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar35) {
        uVar35 = 0x3fffffff;
      }
      uVar53 = uVar33;
      if ((int)uVar33 <= (int)uVar35) {
        uVar53 = uVar35;
      }
      FUN_032bd100(uVar53,0x40,uVar34,&local_78);
      uVar34 = *(uint *)(param_1 + 0x8c);
      uVar59 = (**(code **)(*plVar41 + 0x10))(plVar41,local_78,&local_78);
      if (-1 < (int)uVar34) {
        (**(code **)(*plVar41 + 0x18))(plVar41,uVar36,((ulong)uVar34 & 0x3fffffff) << 6);
      }
      puVar60 = PTR_DAT_04372370;
      if (local_78 < 0xfffffffc0) {
        uVar31 = (undefined4)(local_78 >> 6);
      }
      else {
        uVar31 = 0x3fffffff;
      }
      *(undefined4 *)(param_1 + 0x8c) = uVar31;
      uVar36 = (ulong)*(uint *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x80) = uVar59;
    }
    if ((int)uVar36 < (int)uVar33) {
      uVar42 = *puVar6;
      uVar50 = -(uVar36 >> 0x1f) & 0xffffffc000000000 | uVar36 << 6;
      uVar36 = -(uVar58 >> 0x1f) & 0xffffffc000000000 | uVar58 << 6;
      *puVar63 = uVar33;
      lVar43 = uVar42 + uVar50;
      uVar50 = (uVar36 - uVar50) - 0x40;
      uVar34 = ((uint)(uVar50 >> 6) & 0x3ffffff) + 1;
      if ((uVar34 & 3) != 0) {
        lVar40 = -((ulong)uVar34 & 3);
        do {
          *(undefined4 *)(lVar43 + 0x2c) = 0;
          bVar29 = lVar40 != -1;
          lVar40 = lVar40 + 1;
          *(undefined4 *)(lVar43 + 0x34) = 0xffffffff;
          lVar43 = lVar43 + 0x40;
        } while (bVar29);
      }
      if (0xbf < uVar50) {
        do {
          *(undefined4 *)(lVar43 + 0x2c) = 0;
          *(undefined4 *)(lVar43 + 0x34) = 0xffffffff;
          *(undefined4 *)(lVar43 + 0x6c) = 0;
          *(undefined4 *)(lVar43 + 0x74) = 0xffffffff;
          *(undefined4 *)(lVar43 + 0xac) = 0;
          *(undefined4 *)(lVar43 + 0xb4) = 0xffffffff;
          *(undefined4 *)(lVar43 + 0xec) = 0;
          *(undefined4 *)(lVar43 + 0xf4) = 0xffffffff;
          lVar43 = lVar43 + 0x100;
        } while (uVar42 + uVar36 != lVar43);
      }
    }
    else if ((int)uVar33 < (int)uVar36) {
      *puVar63 = uVar33;
    }
    auVar67 = *(undefined1 (*) [16])(puVar60 + 0x150);
    auVar77 = NEON_ext(auVar67,auVar67,8,1);
    auVar84._8_4_ = 0x45fff800;
    auVar84._0_8_ = 0x45fff80045fff800;
    auVar84._12_4_ = 0x45fff800;
    auVar67 = NEON_ext(auVar77,auVar67,8,1);
    auVar78._0_4_ = -auVar67._0_4_;
    auVar78._4_4_ = -auVar67._4_4_;
    auVar78._8_4_ = -auVar67._8_4_;
    auVar78._12_4_ = -auVar67._12_4_;
    auVar96._8_4_ = 0xc6000000;
    auVar96._0_8_ = 0xc6000000c6000000;
    auVar96._12_4_ = 0xc6000000;
    uVar36 = 0;
    lVar43 = 0x34;
    do {
      auVar77 = *(undefined1 (*) [16])(param_2 + uVar36 * 4);
      puVar8 = (undefined4 *)(*(long *)(param_1 + 0x80) + lVar43);
      fVar72 = *(float *)(param_1 + 0x130);
      fVar71 = *(float *)(param_1 + 0x134);
      fVar81 = *(float *)(param_1 + 0x138);
      fVar73 = *(float *)(param_1 + 0x13c);
      fVar74 = *(float *)(param_1 + 0x140);
      fVar103 = *(float *)(param_1 + 0x144);
      fVar102 = *(float *)(param_1 + 0x148);
      fVar109 = *(float *)(param_1 + 0x14c);
      *(long *)(puVar8 + -7) = auVar77._8_8_;
      *(long *)(puVar8 + -9) = auVar77._0_8_;
      auVar111._0_4_ = (auVar77._0_4_ - fVar72) * fVar74;
      auVar111._4_4_ = (auVar77._4_4_ - fVar71) * fVar103;
      auVar111._8_4_ = (auVar77._8_4_ - fVar81) * fVar102;
      auVar111._12_4_ = (auVar77._12_4_ - fVar73) * fVar109;
      auVar77 = NEON_fminnm(auVar111,auVar84,4);
      auVar77 = NEON_fmax(auVar77,auVar96,4);
      auVar114._0_4_ = -(uint)(auVar77._0_4_ < 0.0);
      auVar114._4_4_ = -(uint)(auVar77._4_4_ < 0.0);
      auVar114._8_4_ = -(uint)(auVar77._8_4_ < 0.0);
      auVar114._12_4_ = -(uint)(auVar77._12_4_ < 0.0);
      auVar115 = auVar67 ^ (auVar67 ^ auVar78) & auVar114;
      *(ulong *)(puVar8 + -5) =
           CONCAT44((int)(auVar77._4_4_ + auVar115._4_4_),(int)(auVar77._0_4_ + auVar115._0_4_));
      puVar8[-3] = (int)(auVar77._8_4_ + auVar115._8_4_);
      puVar8[-2] = 0;
      *puVar8 = 0xffffffff;
      if (param_1[8] != '\0') {
        *(uint *)(*puVar6 + lVar43 + -0x18) = (uint)uVar36 | 0x3f000000;
      }
      uVar36 = uVar36 + 1;
      lVar43 = lVar43 + 0x40;
    } while (uVar64 != uVar36);
    if ((((param_4 & 1) == 0) && (param_1[0xb] != '\0')) && (1 < (int)*puVar63)) {
      FUN_001c6db0(*puVar6,0,*puVar63 - 1);
    }
    uVar36 = *(ulong *)(puVar60 + 0x50);
    uVar42 = -(uVar58 >> 0x1f) & 0xfffffffe00000000 | uVar58 << 1;
    pcVar7 = param_1 + 0x50;
LAB_001c4058:
    uVar35 = (uint)(uVar58 << 1);
    uVar34 = *(uint *)(param_1 + 0x1f0);
    if ((int)uVar33 < 2) {
LAB_001c419c:
      if (uVar34 < 4) {
        do {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar34) {
          case 0:
            goto switchD_001c4084_caseD_1c5724;
          case 1:
            goto switchD_001c41bc_caseD_1;
          case 2:
            goto switchD_001c4084_caseD_1c41e8;
          default:
            uVar50 = FUN_001c5a14(param_1);
            if ((uVar50 & 1) != 0) goto LAB_001c5798;
            if (*param_1 == '\0') goto LAB_001c5718;
            param_1[0x1f0] = '\x02';
            param_1[0x1f1] = '\0';
            param_1[0x1f2] = '\0';
            param_1[499] = '\0';
          }
        } while( true );
      }
      goto LAB_001c5798;
    }
    if (uVar34 < 4) {
      do {
        switch((ulong)(&switchD_001c4084::switchdataD_039c6c12)[uVar34] * 4 + 0x1c4088) {
        case 0x1c4088:
          lVar43 = *(long *)(param_1 + 0x80);
          fVar72 = *(float *)(param_1 + 0x110);
          fVar71 = *(float *)(param_1 + 0x114);
          fVar81 = *(float *)(param_1 + 0x118);
          fVar73 = *(float *)(param_1 + 0x11c);
          iVar100 = 0;
          iVar92 = 0;
          uVar50 = 1;
          pfVar48 = (float *)(lVar43 + 0x50);
          do {
            lVar40 = lVar43 + (long)iVar92 * 0x40;
            auVar79._0_4_ = fVar72 * *pfVar48;
            auVar79._4_4_ = fVar71 * pfVar48[1];
            auVar79._8_4_ = fVar81 * pfVar48[2];
            auVar79._12_4_ = fVar73 * pfVar48[3];
            lVar46 = lVar43 + (long)iVar100 * 0x40;
            auVar67 = NEON_ext(auVar79,auVar79,8,1);
            auVar97._0_4_ = fVar72 * *(float *)(lVar40 + 0x10);
            auVar97._4_4_ = fVar71 * *(float *)(lVar40 + 0x14);
            auVar97._8_4_ = fVar81 * *(float *)(lVar40 + 0x18);
            auVar97._12_4_ = fVar73 * *(float *)(lVar40 + 0x1c);
            fVar74 = auVar79._0_4_ + auVar79._4_4_ + auVar67._0_4_;
            auVar67 = NEON_ext(auVar97,auVar97,8,1);
            if (fVar74 < auVar97._0_4_ + auVar97._4_4_ + auVar67._0_4_) {
              iVar92 = (int)uVar50;
            }
            auVar85._0_4_ = fVar72 * *(float *)(lVar46 + 0x10);
            auVar85._4_4_ = fVar71 * *(float *)(lVar46 + 0x14);
            auVar85._8_4_ = fVar81 * *(float *)(lVar46 + 0x18);
            auVar85._12_4_ = fVar73 * *(float *)(lVar46 + 0x1c);
            auVar67 = NEON_ext(auVar85,auVar85,8,1);
            if (auVar85._0_4_ + auVar85._4_4_ + auVar67._0_4_ < fVar74) {
              iVar100 = (int)uVar50;
            }
            uVar50 = uVar50 + 1;
            pfVar48 = pfVar48 + 0x10;
          } while (uVar64 != uVar50);
          lVar40 = lVar43 + (long)iVar92 * 0x40;
          auVar67 = *(undefined1 (*) [16])(lVar40 + 0x10);
          iVar92 = *(int *)(lVar40 + 0x20);
          iVar12 = *(int *)(lVar40 + 0x24);
          local_78 = *(ulong *)(lVar40 + 0x28);
          local_70 = *(long *)(lVar40 + 0x30);
          lVar43 = lVar43 + (long)iVar100 * 0x40;
          auVar77 = *(undefined1 (*) [16])(lVar43 + 0x10);
          iVar100 = *(int *)(lVar43 + 0x20);
          iVar13 = *(int *)(lVar43 + 0x24);
          local_90 = *(ulong *)(lVar43 + 0x28);
          uStack_88 = *(undefined8 *)(lVar43 + 0x30);
          if (iVar92 != iVar100 || iVar12 != iVar13) {
            lVar43 = FUN_001c5824(pcVar7);
            lVar40 = FUN_001c5824(pcVar7);
            *(int *)(lVar43 + 0x20) = iVar92;
            *(int *)(lVar43 + 0x24) = iVar12;
            *(long *)(lVar43 + 0x18) = auVar67._8_8_;
            *(long *)(lVar43 + 0x10) = auVar67._0_8_;
            *(ulong *)(lVar43 + 0x28) = local_78;
            *(ulong *)(lVar43 + 0x30) = local_70;
            *(undefined4 *)(lVar43 + 0x30) = 0;
            *(int *)(lVar40 + 0x20) = iVar100;
            *(int *)(lVar40 + 0x24) = iVar13;
            *(long *)(lVar40 + 0x18) = auVar77._8_8_;
            *(long *)(lVar40 + 0x10) = auVar77._0_8_;
            *(ulong *)(lVar40 + 0x28) = local_90;
            *(undefined8 *)(lVar40 + 0x30) = uStack_88;
            goto LAB_001c5794;
          }
          uVar34 = 0;
          param_1[0x1f0] = '\0';
          param_1[0x1f1] = '\0';
          param_1[0x1f2] = '\0';
          param_1[499] = '\0';
          break;
        case 0x1c416c:
          uVar50 = FUN_001c5a14(param_1);
          if ((uVar50 & 1) != 0) goto LAB_001c5798;
          if (*param_1 == '\0') goto LAB_001c5718;
          uVar34 = 2;
          param_1[0x1f0] = '\x02';
          param_1[0x1f1] = '\0';
          param_1[0x1f2] = '\0';
          param_1[499] = '\0';
          break;
        case 0x1c41e8:
          goto switchD_001c4084_caseD_1c41e8;
        case 0x1c5724:
          goto switchD_001c4084_caseD_1c5724;
        }
      } while( true );
    }
    goto LAB_001c5798;
  }
  uVar59 = *(undefined8 *)PTR_PTR_04372408;
  local_78 = 0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0x80000000;
  if ((int)uVar33 < 1) {
    if (uVar33 == 0) goto LAB_001c3a0c;
  }
  else {
    if (0x3fffffff < (int)uVar33) {
      FUN_032bd0a8(uVar58);
    }
    local_78 = FUN_032bd1d4(uVar59,uVar58,0x10,0,0,(long)&local_70 + 4);
    if ((uint)local_70 == uVar33) goto LAB_001c3a0c;
  }
  local_70._0_4_ = uVar33;
LAB_001c3a0c:
  if (0 < (int)uVar33) {
    if (uVar33 == 1) {
      lVar40 = 0;
    }
    else {
      lVar43 = 0;
      do {
        lVar40 = lVar43 + 2;
        pfVar48 = param_2 + lVar43 * 4;
        uVar104 = *(undefined8 *)pfVar48;
        puVar44 = (undefined8 *)(local_78 + lVar43 * 0x10);
        puVar44[1] = *(undefined8 *)(pfVar48 + 2);
        *puVar44 = uVar104;
        auVar67 = *(undefined1 (*) [16])(pfVar48 + 4);
        lVar43 = local_78 + lVar43 * 0x10;
        *(long *)(lVar43 + 0x18) = auVar67._8_8_;
        *(long *)(lVar43 + 0x10) = auVar67._0_8_;
        lVar43 = lVar40;
      } while (uVar64 - (param_3 & 1) != lVar40);
    }
    if ((param_3 & 1) != 0) {
      auVar67 = *(undefined1 (*) [16])(param_2 + lVar40 * 4);
      puVar44 = (undefined8 *)(local_78 + lVar40 * 0x10);
      puVar44[1] = auVar67._8_8_;
      *puVar44 = auVar67._0_8_;
    }
  }
  uVar31 = FUN_001c3964(param_1,local_78,uVar58,param_4 & 1,param_5);
  uVar33 = local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < (int)uVar33) && (local_78 != 0)) {
    FUN_032cf244(uVar59,local_78,0x10,uVar33 & 0x3fffffff);
  }
  return uVar31;
switchD_001c41bc_caseD_1:
  uVar34 = 0;
  param_1[0x1f0] = '\0';
  param_1[0x1f1] = '\0';
  param_1[0x1f2] = '\0';
  param_1[499] = '\0';
  goto LAB_001c419c;
LAB_001c5718:
  param_1[0x1f0] = -1;
  param_1[0x1f1] = -1;
  param_1[0x1f2] = -1;
  param_1[499] = -1;
  goto LAB_001c57c4;
switchD_001c4084_caseD_1c41e8:
  if (!bVar30) {
    auVar108 = ZEXT816(0);
    uVar53 = 0;
    param_1[0x128] = '\0';
    param_1[0x129] = '\0';
    param_1[0x12a] = '\0';
    param_1[299] = '\0';
    param_1[300] = '\0';
    param_1[0x12d] = '\0';
    param_1[0x12e] = '\0';
    param_1[0x12f] = '\0';
    param_1[0x120] = '\0';
    param_1[0x121] = '\0';
    param_1[0x122] = '\0';
    param_1[0x123] = '\0';
    param_1[0x124] = '\0';
    param_1[0x125] = '\0';
    param_1[0x126] = '\0';
    param_1[0x127] = '\0';
    uVar34 = 1;
    uVar50 = uVar36;
    if ((int)uVar33 < 2) goto LAB_001c4224;
    do {
      auVar67 = *(undefined1 (*) [16])(param_2 + (long)(int)uVar53 * 4);
      uVar45 = uVar53;
      do {
        uVar39 = uVar34;
        uVar45 = uVar45 + 2;
        if ((int)uVar45 < (int)uVar33) {
          pfVar48 = param_2 + (long)(int)uVar39 * 4;
          auVar86._0_4_ = *pfVar48 - auVar67._0_4_;
          auVar86._4_4_ = pfVar48[1] - auVar67._4_4_;
          auVar86._8_4_ = pfVar48[2] - auVar67._8_4_;
          auVar86._12_4_ = pfVar48[3] - auVar67._12_4_;
          auVar77 = NEON_ext(auVar86,auVar86,4,1);
          do {
            pfVar48 = param_2 + (long)(int)uVar45 * 4;
            auVar106._0_4_ = *pfVar48 - auVar67._0_4_;
            auVar106._4_4_ = pfVar48[1] - auVar67._4_4_;
            auVar106._8_4_ = pfVar48[2] - auVar67._8_4_;
            auVar106._12_4_ = pfVar48[3] - auVar67._12_4_;
            auVar115 = NEON_ext(auVar106,auVar106,4,1);
            fVar72 = auVar86._0_4_ * auVar115._0_4_ - auVar77._0_4_ * auVar106._0_4_;
            auVar112._0_8_ =
                 CONCAT44(auVar86._4_4_ * auVar115._4_4_ - auVar77._4_4_ * auVar106._4_4_,fVar72);
            auVar112._8_4_ = auVar86._8_4_ * auVar106._0_4_ - auVar86._0_4_ * auVar106._8_4_;
            auVar112._12_4_ = auVar86._12_4_ * auVar106._4_4_ - auVar86._4_4_ * auVar106._12_4_;
            auVar115 = NEON_ext(auVar112,auVar112,4,1);
            fVar72 = auVar115._0_4_ * auVar115._0_4_ + auVar115._4_4_ * auVar115._4_4_ +
                     fVar72 * fVar72;
            uVar34 = uVar45;
            if ((float)uVar50 < fVar72) {
              auVar108._0_8_ = auVar115._0_8_;
              auVar108._8_8_ = auVar112._0_8_;
              uVar34 = uVar33;
              uVar10 = uVar33;
              uVar28 = uVar33;
              if (fVar72 <= 1e-05) {
                uVar34 = uVar45;
                uVar10 = uVar39;
                uVar28 = uVar53;
              }
              uVar53 = uVar28;
              uVar39 = uVar10;
              *(undefined8 *)(param_1 + 0x128) = auVar112._0_8_;
              *(undefined8 *)(param_1 + 0x120) = auVar108._0_8_;
              uVar50 = (ulong)(uint)fVar72;
            }
            uVar45 = uVar34 + 1;
          } while ((int)uVar45 < (int)uVar33);
        }
        uVar34 = uVar39 + 1;
        uVar45 = uVar39;
      } while ((int)(uVar39 + 1) < (int)uVar33);
      uVar34 = uVar53 + 1;
LAB_001c4224:
      do {
        uVar53 = uVar34;
        if ((int)uVar33 <= (int)uVar53) {
          fVar72 = auVar108._0_4_;
          fVar71 = auVar108._4_4_;
          fVar81 = auVar108._8_4_;
          fVar73 = fVar81 * fVar81 + fVar72 * fVar72 + fVar71 * fVar71;
          fVar103 = fVar81 * fVar81 + fVar72 * fVar72 + fVar71 * fVar71;
          uVar59 = CONCAT44(fVar103,fVar73);
          uVar104 = NEON_frsqrte(uVar59,4);
          fVar74 = (float)uVar104;
          fVar102 = (float)((ulong)uVar104 >> 0x20);
          uVar104 = NEON_frsqrts(uVar59,CONCAT44(fVar102 * fVar102,fVar74 * fVar74),4);
          fVar74 = fVar74 * (float)uVar104;
          fVar102 = fVar102 * (float)((ulong)uVar104 >> 0x20);
          uVar104 = NEON_frsqrts(uVar59,CONCAT44(fVar102 * fVar102,fVar74 * fVar74),4);
          uVar59 = CONCAT44(-(uint)(0.0 < fVar103),-(uint)(0.0 < fVar73));
          iVar92 = -(uint)(fVar73 <= 0.0);
          iVar100 = -(uint)(fVar103 <= 0.0);
          auVar107._8_8_ = uVar59;
          auVar107._0_8_ = uVar59;
          fVar74 = (float)uVar104 * fVar74;
          fVar102 = (float)((ulong)uVar104 >> 0x20) * fVar102;
          fVar74 = (float)CONCAT13((byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                                   CONCAT12((byte)((uint)fVar74 >> 0x10) &
                                            ~(byte)((uint)iVar92 >> 0x10),
                                            CONCAT11((byte)((uint)fVar74 >> 8) &
                                                     ~(byte)((uint)iVar92 >> 8),
                                                     SUB41(fVar74,0) & ~(byte)iVar92)));
          auVar87._0_4_ = fVar72 * fVar74;
          fVar72 = (float)(CONCAT17((byte)((uint)fVar102 >> 0x18) & ~(byte)((uint)iVar100 >> 0x18),
                                    CONCAT16((byte)((uint)fVar102 >> 0x10) &
                                             ~(byte)((uint)iVar100 >> 0x10),
                                             CONCAT15((byte)((uint)fVar102 >> 8) &
                                                      ~(byte)((uint)iVar100 >> 8),
                                                      CONCAT14(SUB41(fVar102,0) & ~(byte)iVar100,
                                                               fVar74)))) >> 0x20);
          auVar87._4_4_ = fVar71 * fVar72;
          auVar87._8_4_ = fVar81 * fVar74;
          auVar87._12_4_ = auVar108._12_4_ * fVar72;
          auVar108 = auVar108 ^ (auVar108 ^ auVar87) & auVar107;
          auVar68._0_4_ = -(uint)(-(uint)(0.0 < fVar73) == 0 && -(uint)(0.0 < fVar103) == 0);
          auVar68._4_4_ = auVar68._0_4_;
          auVar68._8_4_ = auVar68._0_4_;
          auVar68._12_4_ = auVar68._0_4_;
          auVar108 = auVar108 ^ (auVar108 ^ auVar15) & auVar68;
          *(long *)(param_1 + 0x128) = auVar108._8_8_;
          *(long *)(param_1 + 0x120) = auVar108._0_8_;
          auVar80._0_4_ = *param_2 * auVar108._0_4_;
          auVar80._4_4_ = param_2[1] * auVar108._4_4_;
          auVar80._8_4_ = param_2[2] * auVar108._8_4_;
          auVar80._12_4_ = param_2[3] * auVar108._12_4_;
          auVar67 = NEON_ext(auVar80,auVar80,8,1);
          auVar69._0_12_ = auVar108._0_12_;
          auVar69._12_4_ = -(auVar80._0_4_ + auVar80._4_4_ + auVar67._0_4_);
          *(long *)(param_1 + 0x128) = auVar69._8_8_;
          *(long *)(param_1 + 0x120) = auVar108._0_8_;
          goto LAB_001c4388;
        }
        uVar34 = uVar53 + 1;
      } while ((int)uVar33 <= (int)uVar34);
    } while( true );
  }
  auVar69._0_12_ = SUB1612(*(undefined1 (*) [16])(param_1 + 0x120),0);
LAB_001c4388:
  uVar59 = CONCAT44(ABS(auVar69._4_4_),ABS(auVar69._0_4_));
  fVar72 = ABS(auVar69._8_4_);
  uVar59 = NEON_fmaxp(uVar59,uVar59,4);
  uVar59 = NEON_fmax(CONCAT44(fVar72,fVar72),uVar59,4);
  local_78 = 0;
  local_70 = 0x8000000000000000;
  if (PTR_DAT_043723d0
      [(-(uint)((float)((ulong)uVar59 >> 0x20) <= ABS(auVar69._4_4_)) & 2) +
       (uint)((float)uVar59 <= ABS(auVar69._0_4_)) | -(uint)((float)uVar59 <= fVar72) & 4] == '\x01'
     ) {
    uVar34 = *puVar63;
    if (0 < (int)uVar34) {
      if (uVar34 == 1) {
        lVar43 = 0;
      }
      else {
        lVar40 = 0;
        lVar43 = 0;
        do {
          lVar46 = *(long *)(param_1 + 0x80) + lVar40;
          lVar43 = lVar43 + 2;
          uVar31 = *(undefined4 *)(lVar46 + 0x24);
          *(undefined4 *)(lVar46 + 0x24) = *(undefined4 *)(lVar46 + 0x28);
          *(undefined4 *)(lVar46 + 0x28) = uVar31;
          lVar46 = *(long *)(param_1 + 0x80) + lVar40;
          lVar40 = lVar40 + 0x80;
          uVar31 = *(undefined4 *)(lVar46 + 100);
          *(undefined4 *)(lVar46 + 100) = *(undefined4 *)(lVar46 + 0x68);
          *(undefined4 *)(lVar46 + 0x68) = uVar31;
        } while ((ulong)uVar34 - ((ulong)uVar34 & 1) != lVar43);
        if ((uVar34 & 1) == 0) goto LAB_001c44e0;
      }
      lVar43 = *(long *)(param_1 + 0x80) + lVar43 * 0x40;
      uVar31 = *(undefined4 *)(lVar43 + 0x24);
      *(undefined4 *)(lVar43 + 0x24) = *(undefined4 *)(lVar43 + 0x28);
LAB_001c44dc:
      *(undefined4 *)(lVar43 + 0x28) = uVar31;
      goto LAB_001c44e0;
    }
  }
  else if (PTR_DAT_043723d0
           [(-(uint)((float)((ulong)uVar59 >> 0x20) <= ABS(auVar69._4_4_)) & 2) +
            (uint)((float)uVar59 <= ABS(auVar69._0_4_)) | -(uint)((float)uVar59 <= fVar72) & 4] ==
           '\0') {
    uVar34 = *puVar63;
    if (0 < (int)uVar34) {
      if (uVar34 == 1) {
        lVar40 = 0;
      }
      else {
        lVar43 = 0;
        lVar40 = 0;
        do {
          lVar46 = *(long *)(param_1 + 0x80) + lVar43;
          uVar31 = *(undefined4 *)(lVar46 + 0x20);
          *(undefined4 *)(lVar46 + 0x20) = *(undefined4 *)(lVar46 + 0x28);
          *(undefined4 *)(lVar46 + 0x28) = uVar31;
          lVar46 = *(long *)(param_1 + 0x80) + lVar43;
          lVar43 = lVar43 + 0x80;
          uVar31 = *(undefined4 *)(lVar46 + 0x60);
          lVar40 = lVar40 + 2;
          *(undefined4 *)(lVar46 + 0x60) = *(undefined4 *)(lVar46 + 0x68);
          *(undefined4 *)(lVar46 + 0x68) = uVar31;
        } while ((ulong)uVar34 - ((ulong)uVar34 & 1) != lVar40);
        if ((uVar34 & 1) == 0) goto LAB_001c44e0;
      }
      lVar43 = *(long *)(param_1 + 0x80) + lVar40 * 0x40;
      uVar31 = *(undefined4 *)(lVar43 + 0x20);
      *(undefined4 *)(lVar43 + 0x20) = *(undefined4 *)(lVar43 + 0x28);
      goto LAB_001c44dc;
    }
  }
  else {
LAB_001c44e0:
    if (1 < (int)*puVar63) {
      FUN_001c6db0(*puVar6,0,*puVar63 - 1);
    }
  }
  uVar56 = local_70;
  uVar50 = local_78;
  if ((int)(local_70._4_4_ & 0x3fffffff) < (int)uVar35) {
    iVar92 = (uint)local_70;
    uVar62 = local_70 & 0xffffffff;
    if (0x1fffffff < (int)uVar33) {
      FUN_032bd0a8(uVar42);
    }
    uVar34 = (local_70._4_4_ & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar34) {
      uVar34 = 0x3fffffff;
    }
    uVar53 = uVar35;
    if ((int)uVar35 <= (int)uVar34) {
      uVar53 = uVar34;
    }
    FUN_032bd100(uVar53,0x40,local_70._4_4_,&local_90);
    uVar52 = local_70;
    uVar47 = local_70 >> 0x20;
    uVar32 = (**(code **)(*plVar41 + 0x10))(plVar41,local_90,&local_90);
    if (0 < iVar92) {
      uVar37 = uVar56 & 3;
      if (uVar62 - 1 < 3) {
        lVar43 = 0;
      }
      else {
        lVar43 = 0;
        puVar44 = (undefined8 *)(uVar32 + 0x90);
        puVar49 = (undefined8 *)(uVar50 + 0x90);
        do {
          puVar44[-0x10] = puVar49[-0x10];
          lVar43 = lVar43 + 4;
          uVar59 = puVar49[-0xf];
          uVar104 = puVar49[-0xe];
          uVar94 = puVar49[-0xc];
          puVar44[-0xd] = puVar49[-0xd];
          puVar44[-0xc] = uVar94;
          puVar44[-0xf] = uVar59;
          puVar44[-0xe] = uVar104;
          uVar59 = puVar49[-7];
          uVar94 = puVar49[-6];
          uVar104 = puVar49[-5];
          puVar44[-4] = puVar49[-4];
          puVar44[-6] = uVar94;
          uVar94 = puVar49[-8];
          puVar44[-5] = uVar104;
          puVar44[-8] = uVar94;
          puVar44[-7] = uVar59;
          *puVar44 = *puVar49;
          uVar59 = puVar49[1];
          uVar104 = puVar49[2];
          uVar94 = puVar49[4];
          puVar44[3] = puVar49[3];
          puVar44[4] = uVar94;
          puVar44[1] = uVar59;
          puVar44[2] = uVar104;
          puVar44[8] = puVar49[8];
          uVar59 = puVar49[9];
          uVar104 = puVar49[10];
          puVar5 = puVar49 + 0xb;
          uVar94 = puVar49[0xc];
          puVar49 = puVar49 + 0x20;
          puVar44[0xb] = *puVar5;
          puVar44[0xc] = uVar94;
          puVar44[9] = uVar59;
          puVar44[10] = uVar104;
          puVar44 = puVar44 + 0x20;
        } while (uVar62 - uVar37 != lVar43);
      }
      if ((uVar56 & 3) != 0) {
        puVar44 = (undefined8 *)(uVar50 + lVar43 * 0x40 + 0x10);
        puVar49 = (undefined8 *)(uVar32 + lVar43 * 0x40 + 0x10);
        do {
          uVar59 = puVar44[3];
          uVar37 = uVar37 - 1;
          puVar49[1] = puVar44[1];
          puVar49[3] = uVar59;
          *puVar49 = *puVar44;
          uVar59 = puVar44[2];
          puVar49[4] = puVar44[4];
          puVar49[2] = uVar59;
          puVar44 = puVar44 + 8;
          puVar49 = puVar49 + 8;
        } while (uVar37 != 0);
      }
    }
    if (-1 < (long)uVar52) {
      (**(code **)(*plVar41 + 0x18))(plVar41,uVar50,(uVar47 & 0x3fffffff) << 6);
    }
    if (local_90 < 0xfffffffc0) {
      uVar31 = (undefined4)(local_90 >> 6);
    }
    else {
      uVar31 = 0x3fffffff;
    }
    local_70 = CONCAT44(uVar31,(uint)local_70);
    local_78 = uVar32;
  }
  if ((int)(uint)local_70 < (int)uVar35) {
    lVar43 = local_78 + (long)(int)(uint)local_70 * 0x40;
    uVar50 = ((-(uVar58 >> 0x1f) & 0xffffff8000000000 | uVar58 << 7) - 0x40) +
             (long)(int)(uint)local_70 * -0x40;
    local_70 = CONCAT44(local_70._4_4_,uVar35);
    uVar34 = ((uint)(uVar50 >> 6) & 0x3ffffff) + 1;
    if ((uVar34 & 7) != 0) {
      lVar40 = -((ulong)uVar34 & 7);
      do {
        *(undefined4 *)(lVar43 + 0x2c) = 0;
        bVar30 = lVar40 != -1;
        lVar40 = lVar40 + 1;
        *(undefined4 *)(lVar43 + 0x34) = 0xffffffff;
        lVar43 = lVar43 + 0x40;
      } while (bVar30);
    }
    if (0x1bf < uVar50) {
      do {
        *(undefined4 *)(lVar43 + 0x2c) = 0;
        *(undefined4 *)(lVar43 + 0x34) = 0xffffffff;
        *(undefined4 *)(lVar43 + 0x6c) = 0;
        *(undefined4 *)(lVar43 + 0x74) = 0xffffffff;
        *(undefined4 *)(lVar43 + 0xac) = 0;
        *(undefined4 *)(lVar43 + 0xb4) = 0xffffffff;
        *(undefined4 *)(lVar43 + 0xec) = 0;
        *(undefined4 *)(lVar43 + 0xf4) = 0xffffffff;
        *(undefined4 *)(lVar43 + 300) = 0;
        *(undefined4 *)(lVar43 + 0x134) = 0xffffffff;
        *(undefined4 *)(lVar43 + 0x16c) = 0;
        *(undefined4 *)(lVar43 + 0x174) = 0xffffffff;
        *(undefined4 *)(lVar43 + 0x1ac) = 0;
        *(undefined4 *)(lVar43 + 0x1b4) = 0xffffffff;
        *(undefined4 *)(lVar43 + 0x1ec) = 0;
        *(undefined4 *)(lVar43 + 500) = 0xffffffff;
        lVar43 = lVar43 + 0x200;
      } while (local_78 + uVar42 * 0x40 != lVar43);
    }
  }
  else if ((int)uVar35 < (int)(uint)local_70) {
    local_70 = CONCAT44(local_70._4_4_,uVar35);
  }
  uVar50 = 0;
  uVar34 = 0;
  do {
    lVar43 = (long)(int)uVar34;
    piVar54 = (int *)(local_78 + (long)(int)uVar34 * 0x40 + -0x20);
    lVar40 = (ulong)uVar34 << 0x20;
    uVar35 = uVar34 + 1;
    do {
      uVar34 = uVar35;
      lVar46 = lVar40;
      if (lVar43 + -1 == 0 || lVar43 < 1) {
        uVar56 = *puVar6;
        break;
      }
      uVar56 = *puVar6;
      lVar51 = uVar56 + uVar50 * 0x40;
      iVar100 = piVar54[-0x10];
      piVar2 = piVar54 + -0xf;
      iVar92 = *piVar54;
      piVar11 = piVar54 + 1;
      lVar43 = lVar43 + -1;
      piVar54 = piVar54 + -0x10;
      lVar40 = lVar46 + -0x100000000;
      uVar35 = uVar34 - 1;
    } while ((*(int *)(lVar51 + 0x24) - *piVar2) * (iVar92 - iVar100) <=
             (*(int *)(lVar51 + 0x20) - iVar100) * (*piVar11 - *piVar2));
    lVar43 = uVar56 + uVar50 * 0x40;
    uVar50 = uVar50 + 1;
    auVar67 = *(undefined1 (*) [16])(lVar43 + 0x10);
    lVar40 = local_78 + (lVar46 >> 0x1a);
    *(long *)(lVar40 + 0x18) = auVar67._8_8_;
    *(long *)(lVar40 + 0x10) = auVar67._0_8_;
    *(undefined8 *)(lVar40 + 0x28) = *(undefined8 *)(lVar43 + 0x28);
    uVar59 = *(undefined8 *)(lVar43 + 0x20);
    *(undefined8 *)(lVar40 + 0x30) = *(undefined8 *)(lVar43 + 0x30);
    *(undefined8 *)(lVar40 + 0x20) = uVar59;
  } while (uVar50 != uVar64);
  if (-1 < (int)(uVar33 - 2)) {
    lVar40 = (long)(int)uVar34;
    lVar43 = (long)(int)(uVar33 - 2);
    do {
      lVar51 = (long)(int)uVar34;
      piVar54 = (int *)(local_78 + lVar51 * 0x40 + -0x20);
      lVar46 = (ulong)uVar34 << 0x20;
      uVar35 = uVar34 + 1;
      do {
        uVar34 = uVar35;
        lVar57 = lVar46;
        if (lVar51 <= lVar40) {
          uVar50 = *puVar6;
          break;
        }
        uVar50 = *puVar6;
        lVar9 = uVar50 + lVar43 * 0x40;
        iVar100 = piVar54[-0x10];
        piVar2 = piVar54 + -0xf;
        iVar92 = *piVar54;
        piVar11 = piVar54 + 1;
        lVar51 = lVar51 + -1;
        piVar54 = piVar54 + -0x10;
        lVar46 = lVar57 + -0x100000000;
        uVar35 = uVar34 - 1;
      } while ((*(int *)(lVar9 + 0x24) - *piVar2) * (iVar92 - iVar100) <=
               (*(int *)(lVar9 + 0x20) - iVar100) * (*piVar11 - *piVar2));
      lVar46 = uVar50 + lVar43 * 0x40;
      auVar67 = *(undefined1 (*) [16])(lVar46 + 0x10);
      lVar51 = local_78 + (lVar57 >> 0x1a);
      *(long *)(lVar51 + 0x18) = auVar67._8_8_;
      *(long *)(lVar51 + 0x10) = auVar67._0_8_;
      *(undefined8 *)(lVar51 + 0x28) = *(undefined8 *)(lVar46 + 0x28);
      uVar59 = *(undefined8 *)(lVar46 + 0x20);
      *(undefined8 *)(lVar51 + 0x30) = *(undefined8 *)(lVar46 + 0x30);
      *(undefined8 *)(lVar51 + 0x20) = uVar59;
      bVar30 = 0 < lVar43;
      lVar43 = lVar43 + -1;
    } while (bVar30);
  }
  if ((int)uVar34 < 4) {
    uVar59 = CONCAT44(ABS(*(float *)(param_1 + 0x124)),ABS(*(float *)(param_1 + 0x120)));
    fVar72 = ABS(*(float *)(param_1 + 0x128));
    uVar59 = NEON_fmaxp(uVar59,uVar59,4);
    uVar59 = NEON_fmax(CONCAT44(fVar72,fVar72),uVar59,4);
    if (PTR_DAT_043723d0
        [(-(uint)((float)((ulong)uVar59 >> 0x20) <= ABS(*(float *)(param_1 + 0x124))) & 2) +
         (uint)((float)uVar59 <= ABS(*(float *)(param_1 + 0x120))) |
         -(uint)((float)uVar59 <= fVar72) & 4] == '\x01') {
      uVar34 = *puVar63;
      if (0 < (int)uVar34) {
        if (uVar34 == 1) {
          lVar43 = 0;
        }
        else {
          lVar40 = 0;
          lVar43 = 0;
          do {
            lVar46 = *(long *)(param_1 + 0x80) + lVar40;
            lVar43 = lVar43 + 2;
            uVar31 = *(undefined4 *)(lVar46 + 0x24);
            *(undefined4 *)(lVar46 + 0x24) = *(undefined4 *)(lVar46 + 0x28);
            *(undefined4 *)(lVar46 + 0x28) = uVar31;
            lVar46 = *(long *)(param_1 + 0x80) + lVar40;
            lVar40 = lVar40 + 0x80;
            uVar31 = *(undefined4 *)(lVar46 + 100);
            *(undefined4 *)(lVar46 + 100) = *(undefined4 *)(lVar46 + 0x68);
            *(undefined4 *)(lVar46 + 0x68) = uVar31;
          } while ((ulong)uVar34 - ((ulong)uVar34 & 1) != lVar43);
          if ((uVar34 & 1) == 0) goto LAB_001c4e68;
        }
        lVar43 = *(long *)(param_1 + 0x80) + lVar43 * 0x40;
        uVar31 = *(undefined4 *)(lVar43 + 0x24);
        *(undefined4 *)(lVar43 + 0x24) = *(undefined4 *)(lVar43 + 0x28);
LAB_001c4e64:
        *(undefined4 *)(lVar43 + 0x28) = uVar31;
      }
    }
    else if (PTR_DAT_043723d0
             [(-(uint)((float)((ulong)uVar59 >> 0x20) <= ABS(*(float *)(param_1 + 0x124))) & 2) +
              (uint)((float)uVar59 <= ABS(*(float *)(param_1 + 0x120))) |
              -(uint)((float)uVar59 <= fVar72) & 4] == '\0') {
      uVar34 = *puVar63;
      if (0 < (int)uVar34) {
        if (uVar34 == 1) {
          lVar40 = 0;
        }
        else {
          lVar43 = 0;
          lVar40 = 0;
          do {
            lVar46 = *(long *)(param_1 + 0x80) + lVar43;
            uVar31 = *(undefined4 *)(lVar46 + 0x20);
            *(undefined4 *)(lVar46 + 0x20) = *(undefined4 *)(lVar46 + 0x28);
            *(undefined4 *)(lVar46 + 0x28) = uVar31;
            lVar46 = *(long *)(param_1 + 0x80) + lVar43;
            lVar43 = lVar43 + 0x80;
            uVar31 = *(undefined4 *)(lVar46 + 0x60);
            lVar40 = lVar40 + 2;
            *(undefined4 *)(lVar46 + 0x60) = *(undefined4 *)(lVar46 + 0x68);
            *(undefined4 *)(lVar46 + 0x68) = uVar31;
          } while ((ulong)uVar34 - ((ulong)uVar34 & 1) != lVar40);
          if ((uVar34 & 1) == 0) goto LAB_001c4e68;
        }
        lVar43 = *(long *)(param_1 + 0x80) + lVar40 * 0x40;
        uVar31 = *(undefined4 *)(lVar43 + 0x20);
        *(undefined4 *)(lVar43 + 0x20) = *(undefined4 *)(lVar43 + 0x28);
        goto LAB_001c4e64;
      }
    }
LAB_001c4e68:
    bVar29 = true;
    param_1[0x1f0] = '\x01';
    param_1[0x1f1] = '\0';
    param_1[0x1f2] = '\0';
    param_1[499] = '\0';
    uVar34 = local_70._4_4_;
    uVar50 = local_70;
    goto joined_r0x001c4e78;
  }
  uVar35 = *(uint *)(param_1 + 0x8c);
  if (&local_78 != puVar6) {
    if ((int)uVar35 < 0) {
      FUN_032bcf10(puVar6,0x40,&local_90);
      if (*puVar63 == 0) {
        param_1[0x8c] = '\0';
        param_1[0x8d] = '\0';
        param_1[0x8e] = '\0';
        param_1[0x8f] = '\0';
        param_1[0x80] = '\0';
        param_1[0x81] = '\0';
        param_1[0x82] = '\0';
        param_1[0x83] = '\0';
        param_1[0x84] = '\0';
        param_1[0x85] = '\0';
        param_1[0x86] = '\0';
        param_1[0x87] = '\0';
      }
      else {
        lVar43 = (**(code **)(*plVar41 + 0x10))(plVar41,local_90,&local_90);
        if (lVar43 == 0) goto LAB_001c4918;
        iVar92 = (int)(local_90 >> 6);
        if (0x3ffffffe < iVar92) {
          iVar92 = 0x3fffffff;
        }
        if (0 < (int)*puVar63) {
          lVar40 = 0;
          lVar46 = 0x10;
          do {
            puVar44 = (undefined8 *)(*puVar6 + lVar46);
            puVar49 = (undefined8 *)(lVar43 + lVar46);
            uVar59 = puVar44[1];
            puVar49[3] = puVar44[3];
            uVar104 = puVar44[2];
            puVar49[4] = puVar44[4];
            puVar49[1] = uVar59;
            puVar49[2] = uVar104;
            *puVar49 = *puVar44;
            lVar40 = lVar40 + 1;
            lVar46 = lVar46 + 0x40;
          } while (lVar40 < (int)*puVar63);
        }
        *(long *)(param_1 + 0x80) = lVar43;
        *(int *)(param_1 + 0x8c) = iVar92;
      }
    }
    else {
LAB_001c4918:
    }
    uVar35 = local_70._4_4_;
    if ((long)local_70 < 0) {
      FUN_032bcf10(&local_78,0x40,&local_90);
      if ((uint)local_70 == 0) {
        uVar35 = 0;
        local_70 = local_70 & 0xffffffff;
        local_78 = 0;
      }
      else {
        uVar50 = (**(code **)(*plVar41 + 0x10))(plVar41,local_90,&local_90);
        if (uVar50 == 0) {
          uVar35 = local_70._4_4_;
        }
        else {
          uVar56 = (ulong)(int)(uint)local_70;
          uVar35 = (uint)(local_90 >> 6);
          if (0x3ffffffe < (int)uVar35) {
            uVar35 = 0x3fffffff;
          }
          if (0 < (int)(uint)local_70) {
            uVar62 = uVar56 & 3;
            if (uVar56 - 1 < 3) {
              lVar43 = 0;
            }
            else {
              lVar43 = 0;
              puVar44 = (undefined8 *)(uVar50 + 0x90);
              puVar49 = (undefined8 *)(local_78 + 0x90);
              do {
                puVar44[-0x10] = puVar49[-0x10];
                lVar43 = lVar43 + 4;
                uVar59 = puVar49[-0xf];
                uVar104 = puVar49[-0xe];
                uVar94 = puVar49[-0xc];
                puVar44[-0xd] = puVar49[-0xd];
                puVar44[-0xc] = uVar94;
                puVar44[-0xf] = uVar59;
                puVar44[-0xe] = uVar104;
                uVar59 = puVar49[-7];
                uVar94 = puVar49[-6];
                uVar104 = puVar49[-5];
                puVar44[-4] = puVar49[-4];
                puVar44[-6] = uVar94;
                uVar94 = puVar49[-8];
                puVar44[-5] = uVar104;
                puVar44[-8] = uVar94;
                puVar44[-7] = uVar59;
                *puVar44 = *puVar49;
                uVar59 = puVar49[1];
                uVar104 = puVar49[2];
                uVar94 = puVar49[4];
                puVar44[3] = puVar49[3];
                puVar44[4] = uVar94;
                puVar44[1] = uVar59;
                puVar44[2] = uVar104;
                puVar44[8] = puVar49[8];
                uVar59 = puVar49[9];
                uVar104 = puVar49[10];
                puVar5 = puVar49 + 0xb;
                uVar94 = puVar49[0xc];
                puVar49 = puVar49 + 0x20;
                puVar44[0xb] = *puVar5;
                puVar44[0xc] = uVar94;
                puVar44[9] = uVar59;
                puVar44[10] = uVar104;
                puVar44 = puVar44 + 0x20;
              } while (uVar56 - uVar62 != lVar43);
            }
            if (uVar62 != 0) {
              puVar44 = (undefined8 *)(local_78 + lVar43 * 0x40 + 0x10);
              puVar49 = (undefined8 *)(uVar50 + lVar43 * 0x40 + 0x10);
              do {
                uVar59 = puVar44[3];
                uVar62 = uVar62 - 1;
                puVar49[1] = puVar44[1];
                puVar49[3] = uVar59;
                *puVar49 = *puVar44;
                uVar59 = puVar44[2];
                puVar49[4] = puVar44[4];
                puVar49[2] = uVar59;
                puVar44 = puVar44 + 8;
                puVar49 = puVar49 + 8;
              } while (uVar62 != 0);
            }
          }
          local_70 = local_70 & 0xffffffff;
          local_78 = uVar50;
        }
      }
    }
    uVar56 = *(ulong *)(param_1 + 0x80);
    *(ulong *)(param_1 + 0x80) = local_78;
    uVar50 = *(ulong *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = (uint)local_70;
    *(uint *)(param_1 + 0x8c) = uVar35;
    local_78 = uVar56;
    local_70 = uVar50;
  }
  uVar53 = uVar34 - 1;
  if ((int)(uVar35 & 0x3fffffff) < (int)uVar53) {
    uVar50 = *puVar6;
    uVar45 = *puVar63;
    uVar56 = (ulong)uVar45;
    if (0x3fffffff < (int)uVar53) {
      FUN_032bd0a8((ulong)uVar53);
      uVar35 = *(uint *)(param_1 + 0x8c);
    }
    uVar39 = (uVar35 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar39) {
      uVar39 = 0x3fffffff;
    }
    uVar10 = uVar53;
    if ((int)uVar53 <= (int)uVar39) {
      uVar10 = uVar39;
    }
    FUN_032bd100(uVar10,0x40,uVar35,&local_90);
    uVar35 = *(uint *)(param_1 + 0x8c);
    lVar43 = (**(code **)(*plVar41 + 0x10))(plVar41,local_90,&local_90);
    if (0 < (int)uVar45) {
      uVar62 = uVar56 & 3;
      if (uVar56 - 1 < 3) {
        lVar40 = 0;
      }
      else {
        lVar40 = 0;
        puVar44 = (undefined8 *)(lVar43 + 0x90);
        puVar49 = (undefined8 *)(uVar50 + 0x90);
        do {
          puVar44[-0x10] = puVar49[-0x10];
          lVar40 = lVar40 + 4;
          uVar59 = puVar49[-0xf];
          uVar104 = puVar49[-0xe];
          uVar94 = puVar49[-0xc];
          puVar44[-0xd] = puVar49[-0xd];
          puVar44[-0xc] = uVar94;
          puVar44[-0xf] = uVar59;
          puVar44[-0xe] = uVar104;
          uVar59 = puVar49[-7];
          uVar94 = puVar49[-6];
          uVar104 = puVar49[-5];
          puVar44[-4] = puVar49[-4];
          puVar44[-6] = uVar94;
          uVar94 = puVar49[-8];
          puVar44[-5] = uVar104;
          puVar44[-8] = uVar94;
          puVar44[-7] = uVar59;
          *puVar44 = *puVar49;
          uVar59 = puVar49[1];
          uVar104 = puVar49[2];
          uVar94 = puVar49[4];
          puVar44[3] = puVar49[3];
          puVar44[4] = uVar94;
          puVar44[1] = uVar59;
          puVar44[2] = uVar104;
          puVar44[8] = puVar49[8];
          uVar59 = puVar49[9];
          uVar104 = puVar49[10];
          puVar5 = puVar49 + 0xb;
          uVar94 = puVar49[0xc];
          puVar49 = puVar49 + 0x20;
          puVar44[0xb] = *puVar5;
          puVar44[0xc] = uVar94;
          puVar44[9] = uVar59;
          puVar44[10] = uVar104;
          puVar44 = puVar44 + 0x20;
        } while (uVar56 - uVar62 != lVar40);
      }
      if ((uVar45 & 3) != 0) {
        puVar44 = (undefined8 *)(uVar50 + lVar40 * 0x40 + 0x10);
        puVar49 = (undefined8 *)(lVar43 + lVar40 * 0x40 + 0x10);
        do {
          uVar59 = puVar44[3];
          uVar62 = uVar62 - 1;
          puVar49[1] = puVar44[1];
          puVar49[3] = uVar59;
          *puVar49 = *puVar44;
          uVar59 = puVar44[2];
          puVar49[4] = puVar44[4];
          puVar49[2] = uVar59;
          puVar44 = puVar44 + 8;
          puVar49 = puVar49 + 8;
        } while (uVar62 != 0);
      }
    }
    if (-1 < (int)uVar35) {
      (**(code **)(*plVar41 + 0x18))(plVar41,uVar50,((ulong)uVar35 & 0x3fffffff) << 6);
    }
    if (local_90 < 0xfffffffc0) {
      uVar31 = (undefined4)(local_90 >> 6);
    }
    else {
      uVar31 = 0x3fffffff;
    }
    *(undefined4 *)(param_1 + 0x8c) = uVar31;
    *(long *)(param_1 + 0x80) = lVar43;
  }
  uVar56 = local_70;
  uVar50 = local_78;
  uVar35 = *puVar63;
  if ((int)uVar35 < (int)uVar53) {
    uVar62 = *puVar6;
    uVar47 = -(ulong)(uVar53 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar53 << 6;
    *puVar63 = uVar53;
    lVar43 = uVar62 + (long)(int)uVar35 * 0x40;
    uVar52 = (uVar47 + (long)(int)uVar35 * -0x40) - 0x40;
    uVar34 = ((uint)(uVar52 >> 6) & 0x3ffffff) + 1;
    if ((uVar34 & 7) != 0) {
      lVar40 = -((ulong)uVar34 & 7);
      do {
        *(undefined4 *)(lVar43 + 0x2c) = 0;
        bVar30 = lVar40 != -1;
        lVar40 = lVar40 + 1;
        *(undefined4 *)(lVar43 + 0x34) = 0xffffffff;
        lVar43 = lVar43 + 0x40;
      } while (bVar30);
    }
    if (0x1bf < uVar52) {
      do {
        *(undefined4 *)(lVar43 + 0x2c) = 0;
        *(undefined4 *)(lVar43 + 0x34) = 0xffffffff;
        *(undefined4 *)(lVar43 + 0x6c) = 0;
        *(undefined4 *)(lVar43 + 0x74) = 0xffffffff;
        *(undefined4 *)(lVar43 + 0xac) = 0;
        *(undefined4 *)(lVar43 + 0xb4) = 0xffffffff;
        *(undefined4 *)(lVar43 + 0xec) = 0;
        *(undefined4 *)(lVar43 + 0xf4) = 0xffffffff;
        *(undefined4 *)(lVar43 + 300) = 0;
        *(undefined4 *)(lVar43 + 0x134) = 0xffffffff;
        *(undefined4 *)(lVar43 + 0x16c) = 0;
        *(undefined4 *)(lVar43 + 0x174) = 0xffffffff;
        *(undefined4 *)(lVar43 + 0x1ac) = 0;
        *(undefined4 *)(lVar43 + 0x1b4) = 0xffffffff;
        *(undefined4 *)(lVar43 + 0x1ec) = 0;
        *(undefined4 *)(lVar43 + 500) = 0xffffffff;
        lVar43 = lVar43 + 0x200;
      } while (uVar62 + uVar47 != lVar43);
    }
  }
  else if ((int)uVar34 <= (int)uVar35) {
    *puVar63 = uVar53;
  }
  uVar59 = CONCAT44(ABS(*(float *)(param_1 + 0x124)),ABS(*(float *)(param_1 + 0x120)));
  fVar72 = ABS(*(float *)(param_1 + 0x128));
  uVar59 = NEON_fmaxp(uVar59,uVar59,4);
  uVar59 = NEON_fmax(CONCAT44(fVar72,fVar72),uVar59,4);
  if (PTR_DAT_043723d0
      [(-(uint)((float)((ulong)uVar59 >> 0x20) <= ABS(*(float *)(param_1 + 0x124))) & 2) +
       (uint)((float)uVar59 <= ABS(*(float *)(param_1 + 0x120))) |
       -(uint)((float)uVar59 <= fVar72) & 4] == '\x01') {
    uVar34 = *puVar63;
    uVar62 = (ulong)uVar34;
    if (0 < (int)uVar34) {
      if (uVar34 == 1) {
        lVar43 = 0;
      }
      else {
        lVar40 = 0;
        lVar43 = 0;
        do {
          lVar46 = *(long *)(param_1 + 0x80) + lVar40;
          lVar43 = lVar43 + 2;
          uVar31 = *(undefined4 *)(lVar46 + 0x24);
          *(undefined4 *)(lVar46 + 0x24) = *(undefined4 *)(lVar46 + 0x28);
          *(undefined4 *)(lVar46 + 0x28) = uVar31;
          lVar46 = *(long *)(param_1 + 0x80) + lVar40;
          lVar40 = lVar40 + 0x80;
          uVar31 = *(undefined4 *)(lVar46 + 100);
          *(undefined4 *)(lVar46 + 100) = *(undefined4 *)(lVar46 + 0x68);
          *(undefined4 *)(lVar46 + 0x68) = uVar31;
        } while (uVar62 - (uVar62 & 1) != lVar43);
        if ((uVar34 & 1) == 0) goto LAB_001c4f3c;
      }
      lVar43 = *(long *)(param_1 + 0x80) + lVar43 * 0x40;
      uVar31 = *(undefined4 *)(lVar43 + 0x24);
      *(undefined4 *)(lVar43 + 0x24) = *(undefined4 *)(lVar43 + 0x28);
LAB_001c4f38:
      *(undefined4 *)(lVar43 + 0x28) = uVar31;
      goto LAB_001c4f3c;
    }
  }
  else if (PTR_DAT_043723d0
           [(-(uint)((float)((ulong)uVar59 >> 0x20) <= ABS(*(float *)(param_1 + 0x124))) & 2) +
            (uint)((float)uVar59 <= ABS(*(float *)(param_1 + 0x120))) |
            -(uint)((float)uVar59 <= fVar72) & 4] == '\0') {
    uVar34 = *puVar63;
    uVar62 = (ulong)uVar34;
    if (0 < (int)uVar34) {
      if (uVar34 == 1) {
        lVar40 = 0;
      }
      else {
        lVar43 = 0;
        lVar40 = 0;
        do {
          lVar46 = *(long *)(param_1 + 0x80) + lVar43;
          uVar31 = *(undefined4 *)(lVar46 + 0x20);
          *(undefined4 *)(lVar46 + 0x20) = *(undefined4 *)(lVar46 + 0x28);
          *(undefined4 *)(lVar46 + 0x28) = uVar31;
          lVar46 = *(long *)(param_1 + 0x80) + lVar43;
          lVar43 = lVar43 + 0x80;
          uVar31 = *(undefined4 *)(lVar46 + 0x60);
          lVar40 = lVar40 + 2;
          *(undefined4 *)(lVar46 + 0x60) = *(undefined4 *)(lVar46 + 0x68);
          *(undefined4 *)(lVar46 + 0x68) = uVar31;
        } while (uVar62 - (uVar62 & 1) != lVar40);
        if ((uVar34 & 1) == 0) goto LAB_001c4f3c;
      }
      lVar43 = *(long *)(param_1 + 0x80) + lVar40 * 0x40;
      uVar31 = *(undefined4 *)(lVar43 + 0x20);
      *(undefined4 *)(lVar43 + 0x20) = *(undefined4 *)(lVar43 + 0x28);
      goto LAB_001c4f38;
    }
  }
  else {
LAB_001c4f3c:
    uVar62 = (ulong)*puVar63;
  }
  auVar67 = ZEXT816(0);
  uVar34 = (uint)uVar62;
  if (0 < (int)uVar34) {
    uVar47 = uVar62 & 3;
    if (uVar62 - 1 < 3) {
      fVar72 = 0.0;
      fVar71 = 0.0;
      fVar81 = 0.0;
      fVar73 = 0.0;
      lVar43 = 0;
    }
    else {
      fVar72 = 0.0;
      fVar71 = 0.0;
      fVar81 = 0.0;
      fVar73 = 0.0;
      lVar43 = 0;
      pfVar48 = (float *)(*puVar6 + 0x90);
      do {
        pfVar3 = pfVar48 + -0x20;
        pfVar16 = pfVar48 + -0x1f;
        pfVar17 = pfVar48 + -0x1e;
        pfVar18 = pfVar48 + -0x1d;
        pfVar4 = pfVar48 + -0x10;
        pfVar19 = pfVar48 + -0xf;
        pfVar20 = pfVar48 + -0xe;
        pfVar21 = pfVar48 + -0xd;
        fVar74 = *pfVar48;
        pfVar22 = pfVar48 + 1;
        pfVar23 = pfVar48 + 2;
        pfVar24 = pfVar48 + 3;
        pfVar1 = pfVar48 + 0x10;
        pfVar25 = pfVar48 + 0x11;
        pfVar26 = pfVar48 + 0x12;
        pfVar27 = pfVar48 + 0x13;
        pfVar48 = pfVar48 + 0x40;
        lVar43 = lVar43 + 4;
        fVar72 = fVar72 + *pfVar3 + *pfVar4 + fVar74 + *pfVar1;
        fVar71 = fVar71 + *pfVar16 + *pfVar19 + *pfVar22 + *pfVar25;
        fVar81 = fVar81 + *pfVar17 + *pfVar20 + *pfVar23 + *pfVar26;
        fVar73 = fVar73 + *pfVar18 + *pfVar21 + *pfVar24 + *pfVar27;
      } while (uVar62 - uVar47 != lVar43);
    }
    if (uVar47 != 0) {
      pfVar48 = (float *)(*puVar6 + lVar43 * 0x40 + 0x10);
      do {
        uVar47 = uVar47 - 1;
        fVar72 = fVar72 + *pfVar48;
        fVar71 = fVar71 + pfVar48[1];
        fVar81 = fVar81 + pfVar48[2];
        fVar73 = fVar73 + pfVar48[3];
        pfVar48 = pfVar48 + 0x10;
      } while (uVar47 != 0);
    }
    auVar67 = ZEXT816(0);
    iVar92 = uVar34 - 1;
    if (0 < (int)uVar34) {
      uVar47 = 0;
      uVar59 = NEON_scvtf(CONCAT44(uVar34,uVar34),4);
      uVar104 = NEON_frecpe(uVar59,4);
      uVar94 = NEON_frecps(uVar59,uVar104,4);
      fVar74 = (float)uVar104 * (float)uVar94;
      fVar103 = (float)((ulong)uVar104 >> 0x20) * (float)((ulong)uVar94 >> 0x20);
      uVar59 = NEON_frecps(uVar59,CONCAT44(fVar103,fVar74),4);
      fVar74 = fVar74 * (float)uVar59;
      fVar103 = fVar103 * (float)((ulong)uVar59 >> 0x20);
      fVar72 = fVar74 * fVar72;
      fVar71 = fVar103 * fVar71;
      fVar74 = fVar74 * fVar81;
      fVar103 = fVar103 * fVar73;
      auVar67 = ZEXT816(0);
      pfVar48 = (float *)(*puVar6 + 0x10);
      do {
        lVar43 = *puVar6 + (long)iVar92 * 0x40;
        iVar92 = (int)uVar47;
        auVar98._0_4_ = *pfVar48 - fVar72;
        auVar98._4_4_ = pfVar48[1] - fVar71;
        auVar98._8_4_ = pfVar48[2] - fVar74;
        auVar98._12_4_ = pfVar48[3] - fVar103;
        auVar115 = NEON_ext(auVar98,auVar98,4,1);
        auVar88._0_4_ = *(float *)(lVar43 + 0x10) - fVar72;
        auVar88._4_4_ = *(float *)(lVar43 + 0x14) - fVar71;
        auVar88._8_4_ = *(float *)(lVar43 + 0x18) - fVar74;
        auVar88._12_4_ = *(float *)(lVar43 + 0x1c) - fVar103;
        auVar77 = NEON_ext(auVar88,auVar88,4,1);
        uVar47 = uVar47 + 1;
        auVar113._0_4_ = auVar67._0_4_ * auVar67._0_4_;
        auVar113._4_4_ = auVar67._4_4_ * auVar67._4_4_;
        auVar113._8_4_ = auVar67._8_4_ * auVar67._8_4_;
        auVar113._12_4_ = auVar67._12_4_ * auVar67._12_4_;
        fVar81 = auVar88._0_4_ * auVar115._0_4_ - auVar98._0_4_ * auVar77._0_4_;
        auVar89._0_8_ =
             CONCAT44(auVar88._4_4_ * auVar115._4_4_ - auVar98._4_4_ * auVar77._4_4_,fVar81);
        auVar89._8_4_ = auVar88._8_4_ * auVar98._0_4_ - auVar98._8_4_ * auVar88._0_4_;
        auVar89._12_4_ = auVar88._12_4_ * auVar98._4_4_ - auVar98._12_4_ * auVar88._4_4_;
        auVar77 = NEON_ext(auVar89,auVar89,4,1);
        auVar99._0_8_ = auVar77._0_8_;
        auVar99._8_8_ = auVar89._0_8_;
        auVar115 = NEON_ext(auVar113,auVar113,8,1);
        auVar90._0_4_ =
             -(uint)(auVar115._0_4_ + auVar113._0_4_ + auVar113._4_4_ <
                    auVar77._0_4_ * auVar77._0_4_ + auVar77._4_4_ * auVar77._4_4_ + fVar81 * fVar81)
        ;
        auVar90._4_4_ = auVar90._0_4_;
        auVar90._8_4_ = auVar90._0_4_;
        auVar90._12_4_ = auVar90._0_4_;
        auVar67 = auVar67 ^ (auVar67 ^ auVar99) & auVar90;
        pfVar48 = pfVar48 + 0x10;
      } while (uVar62 != uVar47);
    }
  }
  auVar70._0_4_ = auVar67._0_4_ * *(float *)(param_1 + 0x120);
  auVar70._4_4_ = auVar67._4_4_ * *(float *)(param_1 + 0x124);
  auVar70._8_4_ = auVar67._8_4_ * *(float *)(param_1 + 0x128);
  auVar70._12_4_ = auVar67._12_4_ * *(float *)(param_1 + 300);
  auVar67 = NEON_ext(auVar70,auVar70,8,1);
  if (auVar70._0_4_ + auVar70._4_4_ + auVar67._0_4_ < 0.0) {
    uVar35 = (uint)local_70;
    if (&local_78 == puVar6) {
      uVar62 = local_70 & 0xffffffff;
      uVar34 = (uint)local_70;
    }
    else {
      uVar47 = *puVar6;
      if ((int)(local_70._4_4_ & 0x3fffffff) < (int)uVar34) {
        uVar61 = local_70 & 0xffffffff;
        FUN_032bd100(uVar62,0x40,local_70._4_4_,&local_90);
        uVar32 = local_70;
        uVar52 = local_70 >> 0x20;
        uVar37 = (**(code **)(*plVar41 + 0x10))(plVar41,local_90,&local_90);
        if (0 < (int)uVar35) {
          uVar38 = uVar56 & 3;
          if (uVar61 - 1 < 3) {
            lVar43 = 0;
          }
          else {
            lVar43 = 0;
            puVar44 = (undefined8 *)(uVar37 + 0x90);
            puVar49 = (undefined8 *)(uVar50 + 0x90);
            do {
              puVar44[-0x10] = puVar49[-0x10];
              lVar43 = lVar43 + 4;
              uVar59 = puVar49[-0xf];
              uVar104 = puVar49[-0xe];
              uVar94 = puVar49[-0xc];
              puVar44[-0xd] = puVar49[-0xd];
              puVar44[-0xc] = uVar94;
              puVar44[-0xf] = uVar59;
              puVar44[-0xe] = uVar104;
              uVar59 = puVar49[-7];
              uVar94 = puVar49[-6];
              uVar104 = puVar49[-5];
              puVar44[-4] = puVar49[-4];
              puVar44[-6] = uVar94;
              uVar94 = puVar49[-8];
              puVar44[-5] = uVar104;
              puVar44[-8] = uVar94;
              puVar44[-7] = uVar59;
              *puVar44 = *puVar49;
              uVar59 = puVar49[1];
              uVar104 = puVar49[2];
              uVar94 = puVar49[4];
              puVar44[3] = puVar49[3];
              puVar44[4] = uVar94;
              puVar44[1] = uVar59;
              puVar44[2] = uVar104;
              puVar44[8] = puVar49[8];
              uVar59 = puVar49[9];
              uVar104 = puVar49[10];
              puVar5 = puVar49 + 0xb;
              uVar94 = puVar49[0xc];
              puVar49 = puVar49 + 0x20;
              puVar44[0xb] = *puVar5;
              puVar44[0xc] = uVar94;
              puVar44[9] = uVar59;
              puVar44[10] = uVar104;
              puVar44 = puVar44 + 0x20;
            } while (uVar61 - uVar38 != lVar43);
          }
          if ((uVar56 & 3) != 0) {
            puVar44 = (undefined8 *)(uVar50 + lVar43 * 0x40 + 0x10);
            puVar49 = (undefined8 *)(uVar37 + lVar43 * 0x40 + 0x10);
            do {
              uVar59 = puVar44[3];
              uVar38 = uVar38 - 1;
              puVar49[1] = puVar44[1];
              puVar49[3] = uVar59;
              *puVar49 = *puVar44;
              uVar59 = puVar44[2];
              puVar49[4] = puVar44[4];
              puVar49[2] = uVar59;
              puVar44 = puVar44 + 8;
              puVar49 = puVar49 + 8;
            } while (uVar38 != 0);
          }
        }
        if (-1 < (long)uVar32) {
          (**(code **)(*plVar41 + 0x18))(plVar41,uVar50,(uVar52 & 0x3fffffff) << 6);
        }
        if (local_90 < 0xfffffffc0) {
          uVar31 = (undefined4)(local_90 >> 6);
        }
        else {
          uVar31 = 0x3fffffff;
        }
        local_70 = CONCAT44(uVar31,(uint)local_70);
        local_78 = uVar37;
      }
      uVar35 = (uint)local_70;
      if ((int)uVar34 <= (int)(uint)local_70) {
        uVar35 = uVar34;
      }
      if ((local_78 != uVar47) && (0 < (int)uVar35)) {
        if (uVar35 == 1) {
          lVar43 = 0;
        }
        else {
          lVar43 = 0;
          pauVar55 = (undefined1 (*) [16])(uVar47 + 0x50);
          puVar44 = (undefined8 *)(local_78 + 0x50);
          do {
            uVar59 = *(undefined8 *)pauVar55[-4];
            puVar44[-7] = *(undefined8 *)(pauVar55[-4] + 8);
            puVar44[-8] = uVar59;
            puVar44[-5] = *(undefined8 *)(pauVar55[-3] + 8);
            uVar59 = *(undefined8 *)pauVar55[-3];
            puVar44[-4] = *(undefined8 *)pauVar55[-2];
            puVar44[-6] = uVar59;
            auVar67 = *pauVar55;
            lVar43 = lVar43 + 2;
            puVar44[1] = auVar67._8_8_;
            *puVar44 = auVar67._0_8_;
            puVar44[3] = *(undefined8 *)(pauVar55[1] + 8);
            uVar59 = *(undefined8 *)pauVar55[1];
            puVar44[4] = *(undefined8 *)pauVar55[2];
            puVar44[2] = uVar59;
            pauVar55 = pauVar55 + 8;
            puVar44 = puVar44 + 0x10;
          } while ((ulong)uVar35 - ((ulong)uVar35 & 1) != lVar43);
          if ((uVar35 & 1) == 0) goto LAB_001c53d0;
        }
        lVar40 = uVar47 + lVar43 * 0x40;
        lVar43 = local_78 + lVar43 * 0x40;
        auVar67 = *(undefined1 (*) [16])(lVar40 + 0x10);
        *(long *)(lVar43 + 0x18) = auVar67._8_8_;
        *(long *)(lVar43 + 0x10) = auVar67._0_8_;
        *(undefined8 *)(lVar43 + 0x28) = *(undefined8 *)(lVar40 + 0x28);
        uVar59 = *(undefined8 *)(lVar40 + 0x20);
        *(undefined8 *)(lVar43 + 0x30) = *(undefined8 *)(lVar40 + 0x30);
        *(undefined8 *)(lVar43 + 0x20) = uVar59;
      }
LAB_001c53d0:
      if ((int)(uint)local_70 < (int)uVar34) {
        uVar53 = uVar34 - uVar35 & 3;
        lVar40 = uVar47 + (long)(int)uVar35 * 0x40;
        lVar43 = local_78 + (long)(int)uVar35 * 0x40;
        if (2 < uVar34 + ~uVar35) {
          iVar92 = (uVar34 - uVar35) - uVar53;
          lVar46 = lVar43;
          do {
            *(undefined8 *)(lVar46 + 0x10) = *(undefined8 *)(lVar40 + 0x10);
            lVar43 = lVar46 + 0x100;
            uVar59 = *(undefined8 *)(lVar40 + 0x18);
            uVar104 = *(undefined8 *)(lVar40 + 0x20);
            iVar92 = iVar92 + -4;
            uVar94 = *(undefined8 *)(lVar40 + 0x30);
            *(undefined8 *)(lVar46 + 0x28) = *(undefined8 *)(lVar40 + 0x28);
            *(undefined8 *)(lVar46 + 0x30) = uVar94;
            *(undefined8 *)(lVar46 + 0x18) = uVar59;
            *(undefined8 *)(lVar46 + 0x20) = uVar104;
            uVar59 = *(undefined8 *)(lVar40 + 0x58);
            uVar94 = *(undefined8 *)(lVar40 + 0x60);
            uVar104 = *(undefined8 *)(lVar40 + 0x68);
            *(undefined8 *)(lVar46 + 0x70) = *(undefined8 *)(lVar40 + 0x70);
            *(undefined8 *)(lVar46 + 0x60) = uVar94;
            uVar94 = *(undefined8 *)(lVar40 + 0x50);
            *(undefined8 *)(lVar46 + 0x68) = uVar104;
            *(undefined8 *)(lVar46 + 0x50) = uVar94;
            *(undefined8 *)(lVar46 + 0x58) = uVar59;
            *(undefined8 *)(lVar46 + 0x90) = *(undefined8 *)(lVar40 + 0x90);
            uVar59 = *(undefined8 *)(lVar40 + 0x98);
            uVar104 = *(undefined8 *)(lVar40 + 0xa0);
            uVar94 = *(undefined8 *)(lVar40 + 0xb0);
            *(undefined8 *)(lVar46 + 0xa8) = *(undefined8 *)(lVar40 + 0xa8);
            *(undefined8 *)(lVar46 + 0xb0) = uVar94;
            *(undefined8 *)(lVar46 + 0x98) = uVar59;
            *(undefined8 *)(lVar46 + 0xa0) = uVar104;
            *(undefined8 *)(lVar46 + 0xd0) = *(undefined8 *)(lVar40 + 0xd0);
            uVar104 = *(undefined8 *)(lVar40 + 0xf0);
            uVar59 = *(undefined8 *)(lVar40 + 0xd8);
            uVar94 = *(undefined8 *)(lVar40 + 0xe0);
            *(undefined8 *)(lVar46 + 0xe8) = *(undefined8 *)(lVar40 + 0xe8);
            *(undefined8 *)(lVar46 + 0xf0) = uVar104;
            lVar40 = lVar40 + 0x100;
            *(undefined8 *)(lVar46 + 0xd8) = uVar59;
            *(undefined8 *)(lVar46 + 0xe0) = uVar94;
            lVar46 = lVar43;
          } while (iVar92 != 0);
        }
        if (uVar53 != 0) {
          puVar44 = (undefined8 *)(lVar40 + 0x10);
          puVar49 = (undefined8 *)(lVar43 + 0x10);
          do {
            uVar59 = puVar44[3];
            uVar53 = uVar53 - 1;
            puVar49[1] = puVar44[1];
            puVar49[3] = uVar59;
            *puVar49 = *puVar44;
            uVar59 = puVar44[2];
            puVar49[4] = puVar44[4];
            puVar49[2] = uVar59;
            puVar44 = puVar44 + 8;
            puVar49 = puVar49 + 8;
          } while (uVar53 != 0);
        }
      }
      local_70 = CONCAT44(local_70._4_4_,uVar34);
    }
    if (0 < (int)uVar34) {
      lVar40 = 0;
      lVar43 = 0;
      iVar92 = -1;
      do {
        iVar100 = (int)uVar62 + iVar92;
        iVar92 = iVar92 + -1;
        lVar46 = local_78 + (long)iVar100 * 0x40;
        lVar51 = *puVar6 + lVar40;
        lVar43 = lVar43 + 1;
        lVar40 = lVar40 + 0x40;
        auVar67 = *(undefined1 (*) [16])(lVar46 + 0x10);
        *(long *)(lVar51 + 0x18) = auVar67._8_8_;
        *(long *)(lVar51 + 0x10) = auVar67._0_8_;
        *(undefined8 *)(lVar51 + 0x28) = *(undefined8 *)(lVar46 + 0x28);
        uVar59 = *(undefined8 *)(lVar46 + 0x20);
        *(undefined8 *)(lVar51 + 0x30) = *(undefined8 *)(lVar46 + 0x30);
        *(undefined8 *)(lVar51 + 0x20) = uVar59;
        uVar62 = (ulong)(int)(uint)local_70;
      } while (lVar43 < (long)uVar62);
    }
  }
  if (0 < (int)*puVar63) {
    lVar43 = 0;
    lVar40 = 0;
    do {
      lVar51 = FUN_001c5824(pcVar7);
      lVar46 = *puVar6 + lVar43;
      lVar43 = lVar43 + 0x40;
      auVar67 = *(undefined1 (*) [16])(lVar46 + 0x10);
      lVar40 = lVar40 + 1;
      *(long *)(lVar51 + 0x18) = auVar67._8_8_;
      *(long *)(lVar51 + 0x10) = auVar67._0_8_;
      uVar59 = *(undefined8 *)(lVar46 + 0x20);
      uVar104 = *(undefined8 *)(lVar46 + 0x30);
      *(undefined8 *)(lVar51 + 0x28) = *(undefined8 *)(lVar46 + 0x28);
      *(undefined8 *)(lVar51 + 0x30) = uVar104;
      *(undefined8 *)(lVar51 + 0x20) = uVar59;
      *(undefined4 *)(lVar51 + 0x30) = 0;
    } while (lVar40 < (int)*puVar63);
  }
  bVar29 = false;
  *puVar63 = 0;
  uVar34 = local_70._4_4_;
  uVar50 = local_70;
joined_r0x001c4e78:
  local_70 = (ulong)uVar34 << 0x20;
  if ((-1 < (long)uVar50) && (local_78 != 0)) {
    FUN_032cf244(plVar41,local_78,0x40,uVar34 & 0x3fffffff);
  }
  bVar30 = true;
  if (!bVar29) goto LAB_001c5798;
  goto LAB_001c4058;
switchD_001c4084_caseD_1c5724:
  lVar40 = FUN_001c5824(pcVar7);
  uVar58 = *puVar6;
  auVar67 = *(undefined1 (*) [16])(uVar58 + 0x10);
  *(long *)(lVar40 + 0x18) = auVar67._8_8_;
  *(long *)(lVar40 + 0x10) = auVar67._0_8_;
  uVar59 = *(undefined8 *)(uVar58 + 0x20);
  uVar104 = *(undefined8 *)(uVar58 + 0x30);
  *(undefined8 *)(lVar40 + 0x28) = *(undefined8 *)(uVar58 + 0x28);
  *(undefined8 *)(lVar40 + 0x30) = uVar104;
  *(undefined8 *)(lVar40 + 0x20) = uVar59;
LAB_001c5794:
  *(undefined4 *)(lVar40 + 0x30) = 0;
  goto LAB_001c5798;
}


