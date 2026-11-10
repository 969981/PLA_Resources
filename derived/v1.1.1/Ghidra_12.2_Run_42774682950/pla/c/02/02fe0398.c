/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe0398; name: FUN_02fe0398
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_02fe0398(int *param_1,uint param_2,float *param_3,undefined1 (*param_4) [16],byte *param_5
                  ,ulong param_6,ulong param_7,undefined8 *param_8,short *param_9)

{
  ushort *puVar1;
  int *piVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  short sVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  long lVar21;
  float *pfVar22;
  undefined1 *puVar23;
  uint uVar24;
  uint uVar25;
  undefined8 *puVar26;
  float *pfVar27;
  undefined8 *puVar28;
  ulong uVar29;
  undefined8 *puVar30;
  byte bVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  int *piVar36;
  byte bVar37;
  float *pfVar38;
  byte bVar39;
  float fVar40;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  undefined1 auVar59 [12];
  undefined8 uVar58;
  undefined1 auVar60 [16];
  float fVar71;
  float fVar73;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar83;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar84;
  undefined8 uVar87;
  float fVar92;
  undefined1 auVar88 [16];
  float fVar85;
  undefined1 auVar89 [16];
  int iVar86;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  int iVar93;
  float fVar97;
  int iVar98;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar105;
  float fVar113;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar116;
  float fVar119;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar120;
  float fVar122;
  undefined1 auVar121 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  undefined1 uVar130;
  undefined1 uVar131;
  byte bVar132;
  undefined1 uVar133;
  undefined1 uVar134;
  byte bVar135;
  undefined1 uVar136;
  undefined1 uVar137;
  byte bVar138;
  undefined1 uVar139;
  undefined1 uVar140;
  byte bVar141;
  float fVar142;
  float fVar146;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined8 uVar153;
  float fVar154;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined1 auStack_458 [8];
  undefined4 uStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  undefined8 local_430;
  undefined8 uStack_428;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  undefined1 auStack_50 [16];
  
  iVar86 = param_1[5];
  piVar2 = param_1 + 4;
  uVar11 = (uint)param_7;
  if (iVar86 == 0) {
    if (uVar11 == 0xffffffff) {
LAB_02fe0ef0:
      if ((param_6 & 1) == 0) {
        bVar37 = param_5[4] >> 6;
        iVar86 = *param_1;
        if (iVar86 != 0) goto LAB_02fe0f20;
LAB_02fe0f08:
        lVar35 = 0;
      }
      else {
        pbVar13 = param_5 + 4;
        param_5 = param_5 + (*pbVar13 >> 6);
        bVar37 = *pbVar13 & 3;
        iVar86 = *param_1;
        if (iVar86 == 0) goto LAB_02fe0f08;
LAB_02fe0f20:
        lVar35 = (long)iVar86 + (long)param_1;
      }
      fVar40 = *param_3;
      fVar45 = param_3[1];
      fVar46 = param_3[2];
      fVar47 = param_3[3];
      iVar86 = param_1[1];
      bVar39 = *param_5;
      uVar33 = (ulong)bVar39;
      if (bVar37 == 1) {
        if (iVar86 < 1) {
          uVar34 = 0xff;
        }
        else {
          puVar20 = (undefined8 *)(lVar35 + uVar33 * 0xc);
          uVar48 = *puVar20;
          uVar12 = 0;
          fVar85 = 3.40282e+38;
          uVar34 = 0xff;
          fVar56 = 1.0;
          do {
            puVar26 = (undefined8 *)(lVar35 + (uVar12 & 0xff) * 0xc);
            uVar58 = *puVar26;
            fVar99 = fVar40 * 0.01 + ((float)uVar58 - (float)uVar48);
            fVar83 = fVar45 * 0.01 +
                     ((float)((ulong)uVar58 >> 0x20) - (float)((ulong)uVar48 >> 0x20));
            fVar71 = fVar46 * 0.01 + (*(float *)(puVar26 + 1) - *(float *)(puVar20 + 1));
            fVar73 = fVar40 * fVar99 + fVar45 * fVar83 + fVar46 * fVar71;
            fVar99 = fVar99 * fVar99 + fVar83 * fVar83 + fVar71 * fVar71;
            fVar83 = (float)CONCAT13((byte)((uint)fVar73 >> 0x18) & 0x80 ^
                                     (byte)((uint)(fVar73 * fVar73) >> 0x18),
                                     SUB43(fVar73 * fVar73,0));
            bVar10 = fVar99 * fVar85 <= fVar56 * fVar83;
            uVar11 = (uint)uVar12;
            if (bVar10) {
              uVar11 = (uint)uVar34;
            }
            uVar34 = (ulong)uVar11;
            uVar11 = (uint)uVar12 + 1;
            uVar12 = (ulong)uVar11;
            if (bVar10) {
              fVar99 = fVar56;
              fVar83 = fVar85;
            }
            fVar85 = fVar83;
            fVar56 = fVar99;
          } while ((int)(uVar11 & 0xff) < iVar86);
        }
LAB_02fe1164:
        pfVar22 = (float *)(lVar35 + (uVar34 & 0xff) * 0xc);
        pfVar27 = (float *)(lVar35 + uVar33 * 0xc);
        fVar99 = *pfVar27;
        fVar83 = pfVar27[1];
        fVar85 = pfVar27[2];
        fVar71 = *pfVar22;
        fVar73 = pfVar22[1];
        fVar56 = pfVar22[2];
        auVar91._0_4_ = fVar71 - fVar99;
        auVar91._4_4_ = fVar73 - fVar83;
        auVar91._8_4_ = fVar56 - fVar85;
        auVar91._12_4_ = fVar56 - fVar85;
        uVar12 = uVar33;
        if (0 < iVar86) {
          uVar48 = CONCAT44(auVar91._0_4_ * auVar91._0_4_ + auVar91._4_4_ * auVar91._4_4_ +
                            auVar91._8_4_ * auVar91._8_4_,
                            auVar91._0_4_ * auVar91._0_4_ + auVar91._4_4_ * auVar91._4_4_ +
                            auVar91._8_4_ * auVar91._8_4_);
          uVar58 = NEON_frsqrte(uVar48,4);
          fVar84 = (float)uVar58;
          fVar92 = (float)((ulong)uVar58 >> 0x20);
          uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar92 * fVar92,fVar84 * fVar84),4);
          fVar84 = fVar84 * (float)uVar48;
          fVar92 = fVar92 * (float)((ulong)uVar48 >> 0x20);
          uVar29 = 0;
          auVar109._0_4_ = auVar91._0_4_ * fVar84;
          auVar109._4_4_ = auVar91._4_4_ * fVar92;
          auVar109._8_4_ = auVar91._8_4_ * fVar84;
          auVar109._12_4_ = auVar91._12_4_ * fVar92;
          auVar64 = NEON_ext(auVar109,auVar109,4,1);
          fVar84 = fVar40 * auVar109._0_4_ + fVar45 * auVar109._4_4_ + fVar46 * auVar109._8_4_;
          fVar92 = fVar40 * auVar109._0_4_ + fVar45 * auVar109._4_4_ + fVar46 * auVar109._8_4_;
          auVar94._0_4_ = fVar40 - auVar109._0_4_ * fVar84;
          auVar94._4_4_ = fVar45 - auVar109._4_4_ * fVar92;
          auVar94._8_4_ = fVar46 - auVar109._8_4_ * fVar84;
          auVar94._12_4_ = fVar47 - auVar109._12_4_ * fVar92;
          auVar67._0_4_ = fVar99 * auVar94._0_4_;
          auVar67._4_4_ = fVar83 * auVar94._4_4_;
          auVar67._8_4_ = fVar85 * auVar94._8_4_;
          auVar67._12_4_ = fVar85 * auVar94._12_4_;
          auVar74 = NEON_ext(auVar67,auVar67,8,1);
          fVar92 = 0.01 - (auVar67._0_4_ + auVar67._4_4_ + auVar74._0_4_);
          auVar74 = NEON_ext(auVar94,auVar94,4,1);
          auVar110._0_4_ = auVar64._0_4_ * auVar94._0_4_ - auVar109._0_4_ * auVar74._0_4_;
          auVar110._4_4_ = auVar64._4_4_ * auVar94._4_4_ - auVar109._4_4_ * auVar74._4_4_;
          auVar110._8_4_ = auVar109._0_4_ * auVar94._8_4_ - auVar109._8_4_ * auVar94._0_4_;
          auVar110._12_4_ = auVar109._4_4_ * fVar92 - auVar109._12_4_ * auVar94._4_4_;
          auVar74 = NEON_ext(auVar110,auVar110,4,1);
          fVar84 = -3.40282e+38;
          fVar97 = -(fVar99 * auVar74._0_4_ + fVar83 * auVar74._4_4_ + auVar110._0_4_ * fVar85);
          auVar111._0_8_ = NEON_fmov(0x3f800000,4);
          auVar111._8_8_ = 0;
          if (bVar39 != 0) goto LAB_02fe1284;
          while( true ) {
            uVar11 = (int)uVar29 + 1;
            uVar29 = (ulong)uVar11;
            if (iVar86 <= (int)(uVar11 & 0xff)) break;
            if ((uint)bVar39 != (uVar11 & 0xff)) {
LAB_02fe1284:
              if (((uint)uVar29 & 0xff) != ((uint)uVar34 & 0xff)) {
                puVar20 = (undefined8 *)(lVar35 + (uVar29 & 0xff) * 0xc);
                fVar57 = *(float *)(puVar20 + 1);
                uVar48 = *puVar20;
                fVar120 = (float)uVar48;
                auVar117._0_4_ = auVar94._0_4_ * fVar120;
                fVar122 = (float)((ulong)uVar48 >> 0x20);
                auVar117._4_4_ = auVar94._4_4_ * fVar122;
                auVar117._8_4_ = auVar94._8_4_ * fVar57;
                auVar117._12_4_ = fVar92 * fVar57;
                auVar64 = NEON_ext(auVar117,auVar117,8,1);
                fVar72 = auVar117._0_4_ + auVar117._4_4_ + auVar64._0_4_ + fVar92;
                auVar118._0_4_ = auVar74._0_4_ * fVar120;
                auVar118._4_4_ = auVar74._4_4_ * fVar122;
                auVar118._8_4_ = auVar110._0_4_ * fVar57;
                auVar118._12_4_ = fVar97 * fVar57;
                auVar64 = NEON_ext(auVar118,auVar118,8,1);
                fVar72 = fVar72 * fVar72;
                fVar57 = auVar118._0_4_ + auVar118._4_4_ + auVar64._0_4_ + fVar97;
                fVar57 = fVar57 * fVar57;
                if (fVar84 * fVar72 < auVar111._0_4_ * fVar57) {
                  uVar12 = uVar29;
                  auVar111 = ZEXT416((uint)fVar72);
                  fVar84 = fVar57;
                }
              }
            }
          }
        }
LAB_02fe12fc:
        pfVar22 = (float *)(lVar35 + (uVar12 & 0xff) * 0xc);
        fVar84 = pfVar22[2];
        fVar92 = *pfVar22;
        fVar97 = pfVar22[1];
        auVar82._0_4_ = fVar92 - fVar71;
        auVar82._4_4_ = fVar97 - fVar73;
        auVar82._8_4_ = fVar84 - fVar56;
        auVar82._12_4_ = fVar84 - fVar56;
        auVar74 = NEON_ext(auVar82,auVar82,4,1);
        auVar64 = NEON_ext(auVar91,auVar91,4,1);
        fVar57 = auVar64._0_4_ * auVar82._0_4_ - auVar91._0_4_ * auVar74._0_4_;
        fVar72 = auVar64._4_4_ * auVar82._4_4_ - auVar91._4_4_ * auVar74._4_4_;
        auVar68._0_8_ = CONCAT44(fVar72,fVar57);
        auVar68._8_4_ = auVar91._0_4_ * auVar82._8_4_ - auVar91._8_4_ * auVar82._0_4_;
        auVar68._12_4_ = auVar91._4_4_ * auVar82._12_4_ - auVar91._12_4_ * auVar82._4_4_;
        auVar74 = NEON_ext(auVar68,auVar68,4,1);
        fVar120 = auVar74._0_4_;
        fVar122 = auVar74._4_4_;
        auVar70._0_8_ = auVar74._0_8_;
        auVar70._8_8_ = auVar68._0_8_;
        fVar105 = fVar120 * fVar120 + fVar122 * fVar122 + fVar57 * fVar57;
        fVar113 = fVar120 * fVar120 + fVar122 * fVar122 + fVar57 * fVar57;
        uVar48 = CONCAT44(fVar113,fVar105);
        uVar58 = NEON_frsqrte(uVar48,4);
        fVar116 = (float)uVar58;
        fVar119 = (float)((ulong)uVar58 >> 0x20);
        uVar58 = NEON_frsqrts(uVar48,CONCAT44(fVar119 * fVar119,fVar116 * fVar116),4);
        fVar116 = fVar116 * (float)uVar58;
        fVar119 = fVar119 * (float)((ulong)uVar58 >> 0x20);
        auVar69._0_8_ = CONCAT44(-(uint)(0.0 < fVar113),-(uint)(0.0 < fVar105));
        iVar93 = -(uint)(fVar105 <= 0.0);
        iVar98 = -(uint)(fVar113 <= 0.0);
        uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar119 * fVar119,fVar116 * fVar116),4);
        auVar69._8_8_ = auVar69._0_8_;
        fVar116 = (float)uVar48 * fVar116;
        fVar119 = (float)((ulong)uVar48 >> 0x20) * fVar119;
        fVar105 = (float)CONCAT13((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18),
                                  CONCAT12((byte)((uint)fVar116 >> 0x10) &
                                           ~(byte)((uint)iVar93 >> 0x10),
                                           CONCAT11((byte)((uint)fVar116 >> 8) &
                                                    ~(byte)((uint)iVar93 >> 8),
                                                    SUB41(fVar116,0) & ~(byte)iVar93)));
        auVar112._0_4_ = fVar120 * fVar105;
        fVar120 = (float)(CONCAT17((byte)((uint)fVar119 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18),
                                   CONCAT16((byte)((uint)fVar119 >> 0x10) &
                                            ~(byte)((uint)iVar98 >> 0x10),
                                            CONCAT15((byte)((uint)fVar119 >> 8) &
                                                     ~(byte)((uint)iVar98 >> 8),
                                                     CONCAT14(SUB41(fVar119,0) & ~(byte)iVar98,
                                                              fVar105)))) >> 0x20);
        auVar112._4_4_ = fVar122 * fVar120;
        auVar112._8_4_ = fVar57 * fVar105;
        auVar112._12_4_ = fVar72 * fVar120;
        auVar70 = auVar70 ^ (auVar70 ^ auVar112) & auVar69;
        auVar59 = auVar70._0_12_;
        auVar104._0_4_ = fVar40 * auVar70._0_4_;
        auVar104._4_4_ = fVar45 * auVar70._4_4_;
        auVar104._8_4_ = fVar46 * auVar70._8_4_;
        auVar104._12_4_ = fVar47 * auVar70._12_4_;
        auVar74 = NEON_ext(auVar104,auVar104,8,1);
        if (auVar104._0_4_ + auVar104._4_4_ + auVar74._0_4_ < 0.0) {
          uVar29 = uVar34;
        }
        else {
          auVar91._0_4_ = fVar92 - fVar99;
          auVar91._4_4_ = fVar97 - fVar83;
          auVar91._8_4_ = fVar84 - fVar85;
          auVar91._12_4_ = fVar84 - fVar85;
          auVar82._0_4_ = fVar71 - fVar92;
          auVar82._4_4_ = fVar73 - fVar97;
          auVar82._8_4_ = fVar56 - fVar84;
          auVar82._12_4_ = fVar56 - fVar84;
          auVar59._0_4_ = -auVar70._0_4_;
          auVar59._4_4_ = -auVar70._4_4_;
          auVar59._8_4_ = -auVar70._8_4_;
          uVar29 = uVar12;
          uVar12 = uVar34;
          fVar92 = fVar71;
          fVar97 = fVar73;
          fVar84 = fVar56;
        }
        uVar11 = (uint)uVar12;
        uVar25 = (uint)uVar29;
        if (iVar86 < 1) {
          fVar56 = -3.40282e+38;
          uVar19 = 0;
          bVar37 = 0xff;
        }
        else {
          auVar96._0_4_ = fVar99 - fVar92;
          auVar96._4_4_ = fVar83 - fVar97;
          auVar96._8_4_ = fVar85 - fVar84;
          auVar96._12_4_ = fVar85 - fVar84;
          fVar56 = auVar91._0_4_;
          fVar71 = auVar91._4_4_;
          fVar73 = auVar91._8_4_;
          fVar120 = fVar73 * fVar73 + fVar56 * fVar56 + fVar71 * fVar71;
          fVar122 = fVar73 * fVar73 + fVar56 * fVar56 + fVar71 * fVar71;
          uVar58 = CONCAT44(fVar122,fVar120);
          fVar97 = auVar82._0_4_;
          fVar57 = auVar82._4_4_;
          fVar72 = auVar82._8_4_;
          uVar48 = NEON_frsqrte(uVar58,4);
          fVar40 = fVar40 * 0.01;
          fVar45 = fVar45 * 0.01;
          fVar46 = fVar46 * 0.01;
          fVar47 = fVar47 * 0.01;
          fVar84 = (float)uVar48;
          fVar92 = (float)((ulong)uVar48 >> 0x20);
          uVar48 = NEON_frsqrts(uVar58,CONCAT44(fVar92 * fVar92,fVar84 * fVar84),4);
          fVar84 = fVar84 * (float)uVar48;
          fVar92 = fVar92 * (float)((ulong)uVar48 >> 0x20);
          uVar48 = NEON_frsqrts(uVar58,CONCAT44(fVar92 * fVar92,fVar84 * fVar84),4);
          fVar84 = (float)uVar48 * fVar84;
          fVar92 = (float)((ulong)uVar48 >> 0x20) * fVar92;
          auVar90._0_8_ = CONCAT44(-(uint)(0.0 < fVar122),-(uint)(0.0 < fVar120));
          iVar93 = -(uint)(fVar120 <= 0.0);
          iVar98 = -(uint)(fVar122 <= 0.0);
          fVar84 = (float)CONCAT13((byte)((uint)fVar84 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18),
                                   CONCAT12((byte)((uint)fVar84 >> 0x10) &
                                            ~(byte)((uint)iVar93 >> 0x10),
                                            CONCAT11((byte)((uint)fVar84 >> 8) &
                                                     ~(byte)((uint)iVar93 >> 8),
                                                     SUB41(fVar84,0) & ~(byte)iVar93)));
          auVar90._8_8_ = auVar90._0_8_;
          puVar26 = (undefined8 *)(lVar35 + (uVar29 & 0xff) * 0xc);
          auVar121._0_4_ = fVar56 * fVar84;
          fVar56 = (float)(CONCAT17((byte)((uint)fVar92 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18),
                                    CONCAT16((byte)((uint)fVar92 >> 0x10) &
                                             ~(byte)((uint)iVar98 >> 0x10),
                                             CONCAT15((byte)((uint)fVar92 >> 8) &
                                                      ~(byte)((uint)iVar98 >> 8),
                                                      CONCAT14(SUB41(fVar92,0) & ~(byte)iVar98,
                                                               fVar84)))) >> 0x20);
          auVar121._4_4_ = fVar71 * fVar56;
          auVar121._8_4_ = fVar73 * fVar84;
          auVar121._12_4_ = auVar91._12_4_ * fVar56;
          puVar20 = (undefined8 *)(lVar35 + (uVar12 & 0xff) * 0xc);
          auVar91 = auVar91 ^ (auVar91 ^ auVar121) & auVar90;
          fVar71 = fVar72 * fVar72 + fVar97 * fVar97 + fVar57 * fVar57;
          fVar84 = fVar72 * fVar72 + fVar97 * fVar97 + fVar57 * fVar57;
          uVar58 = CONCAT44(fVar84,fVar71);
          uVar48 = NEON_frsqrte(uVar58,4);
          fVar56 = (float)uVar48;
          fVar73 = (float)((ulong)uVar48 >> 0x20);
          uVar48 = NEON_frsqrts(uVar58,CONCAT44(fVar73 * fVar73,fVar56 * fVar56),4);
          fVar56 = fVar56 * (float)uVar48;
          fVar73 = fVar73 * (float)((ulong)uVar48 >> 0x20);
          uVar48 = NEON_frsqrts(uVar58,CONCAT44(fVar73 * fVar73,fVar56 * fVar56),4);
          fVar56 = (float)uVar48 * fVar56;
          fVar73 = (float)((ulong)uVar48 >> 0x20) * fVar73;
          auVar81._0_8_ = CONCAT44(-(uint)(0.0 < fVar84),-(uint)(0.0 < fVar71));
          iVar93 = -(uint)(fVar71 <= 0.0);
          iVar98 = -(uint)(fVar84 <= 0.0);
          fVar56 = (float)CONCAT13((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18),
                                   CONCAT12((byte)((uint)fVar56 >> 0x10) &
                                            ~(byte)((uint)iVar93 >> 0x10),
                                            CONCAT11((byte)((uint)fVar56 >> 8) &
                                                     ~(byte)((uint)iVar93 >> 8),
                                                     SUB41(fVar56,0) & ~(byte)iVar93)));
          auVar81._8_8_ = auVar81._0_8_;
          auVar74 = NEON_ext(auVar91,auVar91,4,1);
          fVar71 = *(float *)(puVar26 + 1);
          auVar114._0_4_ = fVar97 * fVar56;
          fVar73 = (float)(CONCAT17((byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18),
                                    CONCAT16((byte)((uint)fVar73 >> 0x10) &
                                             ~(byte)((uint)iVar98 >> 0x10),
                                             CONCAT15((byte)((uint)fVar73 >> 8) &
                                                      ~(byte)((uint)iVar98 >> 8),
                                                      CONCAT14(SUB41(fVar73,0) & ~(byte)iVar98,
                                                               fVar56)))) >> 0x20);
          auVar114._4_4_ = fVar57 * fVar73;
          auVar114._8_4_ = fVar72 * fVar56;
          auVar114._12_4_ = auVar82._12_4_ * fVar73;
          bVar31 = 0;
          fVar73 = *(float *)(puVar20 + 1);
          uVar19 = 0;
          auVar82 = auVar82 ^ (auVar82 ^ auVar114) & auVar81;
          fVar92 = auVar96._8_4_ * auVar96._8_4_ +
                   auVar96._0_4_ * auVar96._0_4_ + auVar96._4_4_ * auVar96._4_4_;
          fVar97 = auVar96._8_4_ * auVar96._8_4_ +
                   auVar96._0_4_ * auVar96._0_4_ + auVar96._4_4_ * auVar96._4_4_;
          uVar58 = CONCAT44(fVar97,fVar92);
          uVar48 = NEON_frsqrte(uVar58,4);
          fVar56 = (float)uVar48;
          fVar84 = (float)((ulong)uVar48 >> 0x20);
          uVar48 = NEON_frsqrts(uVar58,CONCAT44(fVar84 * fVar84,fVar56 * fVar56),4);
          fVar56 = fVar56 * (float)uVar48;
          fVar84 = fVar84 * (float)((ulong)uVar48 >> 0x20);
          uVar48 = NEON_frsqrts(uVar58,CONCAT44(fVar84 * fVar84,fVar56 * fVar56),4);
          fVar56 = (float)uVar48 * fVar56;
          fVar84 = (float)((ulong)uVar48 >> 0x20) * fVar84;
          auVar95._0_8_ = CONCAT44(-(uint)(0.0 < fVar97),-(uint)(0.0 < fVar92));
          iVar93 = -(uint)(fVar92 <= 0.0);
          iVar98 = -(uint)(fVar97 <= 0.0);
          fVar92 = (float)CONCAT13((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18),
                                   CONCAT12((byte)((uint)fVar56 >> 0x10) &
                                            ~(byte)((uint)iVar93 >> 0x10),
                                            CONCAT11((byte)((uint)fVar56 >> 8) &
                                                     ~(byte)((uint)iVar93 >> 8),
                                                     SUB41(fVar56,0) & ~(byte)iVar93)));
          auVar95._8_8_ = auVar95._0_8_;
          fVar56 = -3.40282e+38;
          bVar37 = 0xff;
          auVar115._0_4_ = auVar96._0_4_ * fVar92;
          fVar84 = (float)(CONCAT17((byte)((uint)fVar84 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18),
                                    CONCAT16((byte)((uint)fVar84 >> 0x10) &
                                             ~(byte)((uint)iVar98 >> 0x10),
                                             CONCAT15((byte)((uint)fVar84 >> 8) &
                                                      ~(byte)((uint)iVar98 >> 8),
                                                      CONCAT14(SUB41(fVar84,0) & ~(byte)iVar98,
                                                               fVar92)))) >> 0x20);
          auVar115._4_4_ = auVar96._4_4_ * fVar84;
          auVar115._8_4_ = auVar96._8_4_ * fVar92;
          auVar115._12_4_ = auVar96._12_4_ * fVar84;
          auVar96 = auVar96 ^ (auVar96 ^ auVar115) & auVar95;
          uVar48 = *puVar26;
          uVar58 = *puVar20;
          auVar64 = NEON_ext(auVar82,auVar82,4,1);
          auVar101 = NEON_ext(auVar96,auVar96,4,1);
          do {
            puVar20 = (undefined8 *)(lVar35 + (ulong)bVar31 * 0xc);
            fVar84 = *(float *)(puVar20 + 1);
            uVar87 = *puVar20;
            fVar92 = (float)uVar87;
            fVar97 = (float)((ulong)uVar87 >> 0x20);
            auVar123._0_4_ = fVar40 + (fVar92 - fVar99);
            auVar123._4_4_ = fVar45 + (fVar97 - fVar83);
            auVar123._8_4_ = fVar46 + (fVar84 - fVar85);
            auVar123._12_4_ = fVar47 + (fVar84 - fVar85);
            auVar103 = NEON_ext(auVar123,auVar123,4,1);
            fVar57 = auVar59._0_4_;
            fVar72 = auVar59._4_4_;
            fVar120 = auVar59._8_4_;
            fVar122 = auVar91._0_4_ * auVar103._0_4_ - auVar74._0_4_ * auVar123._0_4_;
            fVar113 = auVar91._4_4_ * auVar103._4_4_ - auVar74._4_4_ * auVar123._4_4_;
            auVar124._0_8_ = CONCAT44(fVar113,fVar122);
            auVar124._8_4_ = auVar91._8_4_ * auVar123._0_4_ - auVar91._0_4_ * auVar123._8_4_;
            auVar124._12_4_ = auVar91._12_4_ * auVar123._4_4_ - auVar91._4_4_ * auVar123._12_4_;
            auVar103 = NEON_ext(auVar124,auVar124,4,1);
            fVar142 = auVar103._0_4_;
            fVar146 = auVar103._4_4_;
            auVar148._0_8_ = auVar103._0_8_;
            auVar148._8_8_ = auVar124._0_8_;
            fVar105 = fVar142 * fVar142 + fVar146 * fVar146 + fVar122 * fVar122;
            fVar119 = fVar142 * fVar142 + fVar146 * fVar146 + fVar122 * fVar122;
            uVar87 = CONCAT44(fVar119,fVar105);
            uVar153 = NEON_frsqrte(uVar87,4);
            fVar116 = (float)uVar153;
            fVar154 = (float)((ulong)uVar153 >> 0x20);
            uVar153 = NEON_frsqrts(uVar87,CONCAT44(fVar154 * fVar154,fVar116 * fVar116),4);
            fVar116 = fVar116 * (float)uVar153;
            fVar154 = fVar154 * (float)((ulong)uVar153 >> 0x20);
            auVar147._0_8_ = CONCAT44(-(uint)(0.0 < fVar119),-(uint)(0.0 < fVar105));
            iVar93 = -(uint)(fVar105 <= 0.0);
            iVar98 = -(uint)(fVar119 <= 0.0);
            uVar87 = NEON_frsqrts(uVar87,CONCAT44(fVar154 * fVar154,fVar116 * fVar116),4);
            auVar147._8_8_ = auVar147._0_8_;
            fVar116 = (float)uVar87 * fVar116;
            fVar154 = (float)((ulong)uVar87 >> 0x20) * fVar154;
            fVar105 = (float)CONCAT13((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18),
                                      CONCAT12((byte)((uint)fVar116 >> 0x10) &
                                               ~(byte)((uint)iVar93 >> 0x10),
                                               CONCAT11((byte)((uint)fVar116 >> 8) &
                                                        ~(byte)((uint)iVar93 >> 8),
                                                        SUB41(fVar116,0) & ~(byte)iVar93)));
            auVar125._0_4_ = fVar142 * fVar105;
            fVar116 = (float)(CONCAT17((byte)((uint)fVar154 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18)
                                       ,CONCAT16((byte)((uint)fVar154 >> 0x10) &
                                                 ~(byte)((uint)iVar98 >> 0x10),
                                                 CONCAT15((byte)((uint)fVar154 >> 8) &
                                                          ~(byte)((uint)iVar98 >> 8),
                                                          CONCAT14(SUB41(fVar154,0) & ~(byte)iVar98,
                                                                   fVar105)))) >> 0x20);
            auVar125._4_4_ = fVar146 * fVar116;
            auVar125._8_4_ = fVar122 * fVar105;
            auVar125._12_4_ = fVar113 * fVar116;
            auVar148 = auVar148 ^ (auVar148 ^ auVar125) & auVar147;
            fVar105 = fVar57 * auVar148._0_4_ + fVar72 * auVar148._4_4_ + fVar120 * auVar148._8_4_;
            fVar122 = ABS(fVar120 * auVar123._8_4_ +
                          fVar57 * auVar123._0_4_ + fVar72 * auVar123._4_4_);
            bVar10 = false;
            if ((fVar56 < fVar105) && (bVar10 = false, !NAN(fVar122))) {
              bVar10 = fVar122 < 0.06666667;
            }
            if (bVar10) {
              uVar19 = 1;
              fVar56 = fVar105;
              bVar37 = bVar31;
            }
            auVar143._0_4_ = fVar40 + (fVar92 - (float)uVar48);
            auVar143._4_4_ = fVar45 + (fVar97 - (float)((ulong)uVar48 >> 0x20));
            auVar143._8_4_ = fVar46 + (fVar84 - fVar71);
            auVar143._12_4_ = fVar47 + (fVar84 - fVar71);
            auVar103 = NEON_ext(auVar143,auVar143,4,1);
            fVar122 = auVar82._0_4_ * auVar103._0_4_ - auVar64._0_4_ * auVar143._0_4_;
            fVar113 = auVar82._4_4_ * auVar103._4_4_ - auVar64._4_4_ * auVar143._4_4_;
            auVar144._0_8_ = CONCAT44(fVar113,fVar122);
            auVar144._8_4_ = auVar82._8_4_ * auVar143._0_4_ - auVar82._0_4_ * auVar143._8_4_;
            auVar144._12_4_ = auVar82._12_4_ * auVar143._4_4_ - auVar82._4_4_ * auVar143._12_4_;
            auVar103 = NEON_ext(auVar144,auVar144,4,1);
            fVar142 = auVar103._0_4_;
            fVar146 = auVar103._4_4_;
            auVar152._0_8_ = auVar103._0_8_;
            auVar152._8_8_ = auVar144._0_8_;
            fVar105 = fVar122 * fVar122 + fVar142 * fVar142 + fVar146 * fVar146;
            fVar119 = fVar122 * fVar122 + fVar142 * fVar142 + fVar146 * fVar146;
            uVar87 = CONCAT44(fVar119,fVar105);
            uVar153 = NEON_frsqrte(uVar87,4);
            fVar116 = (float)uVar153;
            fVar154 = (float)((ulong)uVar153 >> 0x20);
            uVar153 = NEON_frsqrts(uVar87,CONCAT44(fVar154 * fVar154,fVar116 * fVar116),4);
            fVar116 = fVar116 * (float)uVar153;
            fVar154 = fVar154 * (float)((ulong)uVar153 >> 0x20);
            auVar151._0_8_ = CONCAT44(-(uint)(0.0 < fVar119),-(uint)(0.0 < fVar105));
            iVar93 = -(uint)(fVar105 <= 0.0);
            iVar98 = -(uint)(fVar119 <= 0.0);
            uVar87 = NEON_frsqrts(uVar87,CONCAT44(fVar154 * fVar154,fVar116 * fVar116),4);
            auVar151._8_8_ = auVar151._0_8_;
            fVar116 = (float)uVar87 * fVar116;
            fVar154 = (float)((ulong)uVar87 >> 0x20) * fVar154;
            fVar105 = (float)CONCAT13((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18),
                                      CONCAT12((byte)((uint)fVar116 >> 0x10) &
                                               ~(byte)((uint)iVar93 >> 0x10),
                                               CONCAT11((byte)((uint)fVar116 >> 8) &
                                                        ~(byte)((uint)iVar93 >> 8),
                                                        SUB41(fVar116,0) & ~(byte)iVar93)));
            auVar145._0_4_ = fVar142 * fVar105;
            fVar116 = (float)(CONCAT17((byte)((uint)fVar154 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18)
                                       ,CONCAT16((byte)((uint)fVar154 >> 0x10) &
                                                 ~(byte)((uint)iVar98 >> 0x10),
                                                 CONCAT15((byte)((uint)fVar154 >> 8) &
                                                          ~(byte)((uint)iVar98 >> 8),
                                                          CONCAT14(SUB41(fVar154,0) & ~(byte)iVar98,
                                                                   fVar105)))) >> 0x20);
            auVar145._4_4_ = fVar146 * fVar116;
            auVar145._8_4_ = fVar122 * fVar105;
            auVar145._12_4_ = fVar113 * fVar116;
            auVar152 = auVar152 ^ (auVar152 ^ auVar145) & auVar151;
            fVar122 = fVar57 * auVar152._0_4_ + fVar72 * auVar152._4_4_ + fVar120 * auVar152._8_4_;
            fVar105 = ABS(fVar120 * auVar143._8_4_ +
                          fVar57 * auVar143._0_4_ + fVar72 * auVar143._4_4_);
            bVar10 = false;
            if ((fVar56 < fVar122) && (bVar10 = false, !NAN(fVar105))) {
              bVar10 = fVar105 < 0.06666667;
            }
            if (bVar10) {
              uVar19 = 2;
              fVar56 = fVar122;
              bVar37 = bVar31;
            }
            fVar92 = fVar40 + (fVar92 - (float)uVar58);
            fVar105 = fVar45 + (fVar97 - (float)((ulong)uVar58 >> 0x20));
            uVar130 = SUB41(fVar105,0);
            uVar133 = (undefined1)((uint)fVar105 >> 8);
            uVar136 = (undefined1)((uint)fVar105 >> 0x10);
            uVar139 = (undefined1)((uint)fVar105 >> 0x18);
            fVar154 = fVar46 + (fVar84 - fVar73);
            fVar122 = fVar47 + (fVar84 - fVar73);
            auVar4[4] = uVar130;
            auVar4._0_4_ = fVar92;
            auVar4[5] = uVar133;
            auVar4[6] = uVar136;
            auVar4[7] = uVar139;
            auVar4._8_4_ = fVar154;
            auVar4._12_4_ = fVar122;
            auVar5[4] = uVar130;
            auVar5._0_4_ = fVar92;
            auVar5[5] = uVar133;
            auVar5[6] = uVar136;
            auVar5[7] = uVar139;
            auVar5._8_4_ = fVar154;
            auVar5._12_4_ = fVar122;
            auVar103 = NEON_ext(auVar4,auVar5,4,1);
            fVar97 = auVar96._0_4_ * auVar103._0_4_ - auVar101._0_4_ * fVar92;
            fVar84 = auVar96._4_4_ * auVar103._4_4_ - auVar101._4_4_ * fVar105;
            uVar131 = SUB41(fVar84,0);
            uVar134 = (undefined1)((uint)fVar84 >> 8);
            uVar137 = (undefined1)((uint)fVar84 >> 0x10);
            uVar140 = (undefined1)((uint)fVar84 >> 0x18);
            fVar84 = auVar96._8_4_ * fVar92 - auVar96._0_4_ * fVar154;
            fVar122 = auVar96._12_4_ *
                      (float)(CONCAT17(uVar139,CONCAT16(uVar136,CONCAT15(uVar133,CONCAT14(uVar130,
                                                  fVar92)))) >> 0x20) - auVar96._4_4_ * fVar122;
            auVar6[4] = uVar131;
            auVar6._0_4_ = fVar97;
            auVar6[5] = uVar134;
            auVar6[6] = uVar137;
            auVar6[7] = uVar140;
            auVar6._8_4_ = fVar84;
            auVar6._12_4_ = fVar122;
            auVar7[4] = uVar131;
            auVar7._0_4_ = fVar97;
            auVar7[5] = uVar134;
            auVar7[6] = uVar137;
            auVar7[7] = uVar140;
            auVar7._8_4_ = fVar84;
            auVar7._12_4_ = fVar122;
            auVar103 = NEON_ext(auVar6,auVar7,4,1);
            fVar142 = auVar103._0_4_;
            fVar119 = auVar103._4_4_;
            uVar87 = CONCAT17(uVar140,CONCAT16(uVar137,CONCAT15(uVar134,CONCAT14(uVar131,fVar97))));
            auVar150._0_8_ = auVar103._0_8_;
            auVar150._8_8_ = uVar87;
            fVar84 = fVar97 * fVar97 + fVar142 * fVar142 + fVar119 * fVar119;
            fVar116 = fVar97 * fVar97 + fVar142 * fVar142 + fVar119 * fVar119;
            uVar130 = SUB41(fVar116,0);
            uVar131 = (undefined1)((uint)fVar116 >> 8);
            uVar133 = (undefined1)((uint)fVar116 >> 0x10);
            uVar134 = (undefined1)((uint)fVar116 >> 0x18);
            uVar153 = NEON_frsqrte(CONCAT17(uVar134,CONCAT16(uVar133,CONCAT15(uVar131,CONCAT14(
                                                  uVar130,fVar84)))),4);
            fVar122 = (float)uVar153;
            fVar113 = (float)((ulong)uVar153 >> 0x20);
            uVar153 = NEON_frsqrts(CONCAT17(uVar134,CONCAT16(uVar133,CONCAT15(uVar131,CONCAT14(
                                                  uVar130,fVar84)))),
                                   CONCAT44(fVar113 * fVar113,fVar122 * fVar122),4);
            fVar122 = fVar122 * (float)uVar153;
            fVar113 = fVar113 * (float)((ulong)uVar153 >> 0x20);
            auVar149._0_8_ = CONCAT44(-(uint)(0.0 < fVar116),-(uint)(0.0 < fVar84));
            iVar93 = -(uint)(fVar84 <= 0.0);
            iVar98 = -(uint)(fVar116 <= 0.0);
            uVar153 = NEON_frsqrts(CONCAT17(uVar134,CONCAT16(uVar133,CONCAT15(uVar131,CONCAT14(
                                                  uVar130,fVar84)))),
                                   CONCAT44(fVar113 * fVar113,fVar122 * fVar122),4);
            auVar149._8_8_ = auVar149._0_8_;
            fVar122 = (float)uVar153 * fVar122;
            fVar113 = (float)((ulong)uVar153 >> 0x20) * fVar113;
            bVar126 = SUB41(fVar122,0) & ~(byte)iVar93;
            bVar127 = (byte)((uint)fVar122 >> 8) & ~(byte)((uint)iVar93 >> 8);
            bVar128 = (byte)((uint)fVar122 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
            bVar129 = (byte)((uint)fVar122 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
            bVar132 = SUB41(fVar113,0) & ~(byte)iVar98;
            bVar135 = (byte)((uint)fVar113 >> 8) & ~(byte)((uint)iVar98 >> 8);
            bVar138 = (byte)((uint)fVar113 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10);
            bVar141 = (byte)((uint)fVar113 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
            fVar84 = (float)CONCAT13(bVar129,CONCAT12(bVar128,CONCAT11(bVar127,bVar126)));
            fVar119 = fVar119 * (float)CONCAT13(bVar141,CONCAT12(bVar138,CONCAT11(bVar135,bVar132)))
            ;
            auVar8[4] = SUB41(fVar119,0);
            auVar8._0_4_ = fVar142 * (float)CONCAT13(bVar129,CONCAT12(bVar128,CONCAT11(bVar127,
                                                  bVar126)));
            auVar8[5] = (char)((uint)fVar119 >> 8);
            auVar8[6] = (char)((uint)fVar119 >> 0x10);
            auVar8[7] = (char)((uint)fVar119 >> 0x18);
            auVar8._8_4_ = fVar97 * fVar84;
            auVar8._12_4_ =
                 (float)((ulong)uVar87 >> 0x20) *
                 (float)(CONCAT17(bVar141,CONCAT16(bVar138,CONCAT15(bVar135,CONCAT14(bVar132,fVar84)
                                                                   ))) >> 0x20);
            auVar150 = auVar150 ^ (auVar150 ^ auVar8) & auVar149;
            fVar84 = fVar57 * auVar150._0_4_ + fVar72 * auVar150._4_4_ + fVar120 * auVar150._8_4_;
            fVar92 = ABS(fVar120 * fVar154 + fVar57 * fVar92 + fVar72 * fVar105);
            bVar10 = false;
            if ((fVar56 < fVar84) && (bVar10 = false, !NAN(fVar92))) {
              bVar10 = fVar92 < 0.06666667;
            }
            if (bVar10) {
              uVar19 = 3;
              fVar56 = fVar84;
              bVar37 = bVar31;
            }
            bVar31 = bVar31 + 1;
          } while ((int)(uint)bVar31 < iVar86);
        }
        uStack_450 = (float)CONCAT13((char)uVar12,
                                     CONCAT12((char)uVar12,CONCAT11((char)uVar29,bVar39)));
        uVar24 = uVar11;
        if (0.9 < fVar56) {
          lVar35 = (long)(int)uVar19;
          if (uVar19 < 3) {
            lVar21 = 3;
            uVar33 = (ulong)(3 - uVar19) & 3;
            if (2 < 2U - lVar35) {
              lVar32 = 0;
              do {
                lVar21 = lVar32;
                *(undefined4 *)(auStack_458 + lVar21 + 8) =
                     *(undefined4 *)(auStack_458 + lVar21 + 7);
                lVar32 = lVar21 + -4;
              } while (lVar35 + uVar33 + -3 != lVar21 + -4);
              lVar21 = lVar21 + -1;
            }
            if ((3 - uVar19 & 3) != 0) {
              puVar23 = auStack_458 + lVar21 + 8;
              do {
                *puVar23 = puVar23[-1];
                uVar33 = uVar33 - 1;
                puVar23 = puVar23 + -1;
              } while (uVar33 != 0);
            }
          }
          auStack_458[lVar35 + 8] = bVar37;
          uVar33 = (ulong)(byte)uStack_450;
          uVar25 = (uint)uStack_450 >> 8 & 0xff;
          uVar11 = (uint)uStack_450 >> 0x10 & 0xff;
          uVar24 = (uint)uStack_450 >> 0x18;
        }
        uVar15 = (uint)uVar33;
        uVar19 = uVar25;
        if (uVar15 <= (uVar25 & 0xff)) {
          uVar19 = uVar15;
        }
        uVar16 = uVar11;
        if ((uVar19 & 0xff) <= (uVar11 & 0xff)) {
          uVar16 = uVar19;
        }
        uVar18 = 2;
        if ((uVar19 & 0xff) <= (uVar11 & 0xff)) {
          uVar18 = (uint)((uVar25 & 0xff) < uVar15);
        }
        uVar11 = 3;
        if ((uVar16 & 0xff) <= (uVar24 & 0xff)) {
          uVar11 = uVar18;
        }
        bVar37 = *(byte *)((ulong)&uStack_450 | (ulong)uVar11);
        uVar16 = (uint)bVar37;
        bVar39 = *(byte *)((ulong)&uStack_450 | (ulong)(uVar11 + 1) & 3);
        uVar19 = (uint)bVar39;
        bVar31 = *(byte *)((ulong)&uStack_450 | (ulong)(uVar11 - 1) & 3);
        uVar25 = (uint)bVar31;
        bVar126 = *(byte *)((ulong)&uStack_450 | (ulong)(uVar11 + 2) & 3);
        uVar11 = (uint)bVar126;
        uVar24 = (uint)bVar126;
        uVar18 = (uint)bVar39;
        uVar15 = (uint)bVar37;
        if ((((bVar31 == 0xff) && (uVar25 = (uint)bVar126, bVar126 == 0xff)) &&
            (uVar25 = uVar18, bVar39 == 0xff)) && (uVar25 = uVar15, bVar37 == 0xff)) {
          uVar19 = 0xff;
          uVar11 = 0xff;
        }
        else {
          if (bVar126 == 0xff) {
            uVar24 = uVar25;
            uVar11 = uVar18;
            if (uVar15 != 0xff) {
              uVar24 = uVar15;
            }
          }
          if (uVar18 == 0xff) {
            uVar19 = uVar25;
            uVar11 = uVar24;
            if (uVar15 != 0xff) {
              uVar19 = uVar16;
            }
          }
          uVar15 = uVar25;
          if (bVar37 == 0xff) {
            uVar16 = uVar25;
          }
        }
        uVar33 = (ulong)(uVar19 << 8 | uVar11 << 0x10 | uVar15 << 0x18 | uVar16);
        iVar86 = param_1[5];
      }
      else {
        uVar34 = (ulong)param_5[1];
        if (bVar37 == 2) goto LAB_02fe1164;
        if (bVar37 == 3) {
          pfVar27 = (float *)(lVar35 + uVar33 * 0xc);
          pfVar22 = (float *)(lVar35 + uVar34 * 0xc);
          fVar99 = *pfVar27;
          fVar83 = pfVar27[1];
          fVar71 = *pfVar22;
          fVar73 = pfVar22[1];
          fVar85 = pfVar27[2];
          fVar56 = pfVar22[2];
          auVar91._0_4_ = fVar71 - fVar99;
          auVar91._4_4_ = fVar73 - fVar83;
          auVar91._8_4_ = fVar56 - fVar85;
          auVar91._12_4_ = fVar56 - fVar85;
          uVar12 = (ulong)param_5[2];
          goto LAB_02fe12fc;
        }
        uVar33 = 0;
        iVar86 = param_1[5];
      }
      sVar14 = (short)iVar86;
      if (iVar86 == 0) {
LAB_02fe1058:
        lVar35 = 0;
        if (*param_1 != 0) {
          lVar35 = (long)*param_1 + (long)param_1;
        }
        puVar26 = (undefined8 *)(lVar35 + (uVar33 >> 0x18) * 0xc);
        uVar48 = *puVar26;
        uVar11 = (uint)uVar33;
        puVar30 = (undefined8 *)(lVar35 + (ulong)(uVar11 >> 8 & 0xff) * 0xc);
        puVar28 = (undefined8 *)(lVar35 + (ulong)(uVar11 >> 0x10 & 0xff) * 0xc);
        puVar20 = (undefined8 *)(lVar35 + (ulong)(uVar11 & 0xff) * 0xc);
        fVar40 = *(float *)(puVar26 + 1);
        fVar45 = *(float *)(puVar30 + 1);
        uVar87 = *puVar28;
        uVar153 = *puVar20;
        uVar58 = *puVar30;
        fVar73 = (float)uVar153 - (float)uVar87;
        fVar84 = (float)((ulong)uVar153 >> 0x20) - (float)((ulong)uVar87 >> 0x20);
        fVar92 = *(float *)(puVar20 + 1) - *(float *)(puVar28 + 1);
        fVar46 = (float)uVar48;
        fVar85 = (float)uVar58;
        fVar83 = fVar85 - fVar46;
        fVar47 = (float)((ulong)uVar48 >> 0x20);
        fVar56 = (float)((ulong)uVar58 >> 0x20);
        fVar71 = fVar56 - fVar47;
        uVar58 = NEON_ext(CONCAT44(fVar84,fVar73),(ulong)(uint)fVar92,4,1);
        uVar48 = NEON_ext(CONCAT44(fVar71,fVar83),CONCAT44(fVar45 - fVar40,fVar45 - fVar40),4,1);
        fVar85 = (fVar85 - fVar46) * (float)uVar58 - fVar73 * (float)uVar48;
        fVar99 = (fVar56 - fVar47) * (float)((ulong)uVar58 >> 0x20) -
                 fVar84 * (float)((ulong)uVar48 >> 0x20);
        auVar54._0_8_ = CONCAT44(fVar99,fVar85);
        auVar54._8_4_ = (fVar45 - fVar40) * fVar73 - fVar83 * fVar92;
        auVar54._12_4_ = (fVar45 - fVar40) * fVar84 - fVar71 * fVar92;
        auVar74 = NEON_ext(auVar54,auVar54,4,1);
        fVar73 = auVar74._0_4_;
        fVar84 = auVar74._4_4_;
        auVar79._0_8_ = auVar74._0_8_;
        auVar79._8_8_ = auVar54._0_8_;
        fVar45 = fVar73 * fVar73 + fVar84 * fVar84 + fVar85 * fVar85;
        fVar83 = fVar73 * fVar73 + fVar84 * fVar84 + fVar85 * fVar85;
        uVar48 = CONCAT44(fVar83,fVar45);
        uVar58 = NEON_frsqrte(uVar48,4);
        fVar56 = (float)uVar58;
        fVar71 = (float)((ulong)uVar58 >> 0x20);
        uVar58 = NEON_frsqrts(uVar48,CONCAT44(fVar71 * fVar71,fVar56 * fVar56),4);
        fVar56 = fVar56 * (float)uVar58;
        fVar71 = fVar71 * (float)((ulong)uVar58 >> 0x20);
        auVar78._0_8_ = CONCAT44(-(uint)(0.0 < fVar83),-(uint)(0.0 < fVar45));
        iVar86 = -(uint)(fVar45 <= 0.0);
        iVar93 = -(uint)(fVar83 <= 0.0);
        uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar71 * fVar71,fVar56 * fVar56),4);
        auVar78._8_8_ = auVar78._0_8_;
        fVar56 = (float)uVar48 * fVar56;
        fVar71 = (float)((ulong)uVar48 >> 0x20) * fVar71;
        fVar45 = (float)CONCAT13((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18),
                                 CONCAT12((byte)((uint)fVar56 >> 0x10) &
                                          ~(byte)((uint)iVar86 >> 0x10),
                                          CONCAT11((byte)((uint)fVar56 >> 8) &
                                                   ~(byte)((uint)iVar86 >> 8),
                                                   SUB41(fVar56,0) & ~(byte)iVar86)));
        auVar55._0_4_ = fVar73 * fVar45;
        fVar56 = (float)(CONCAT17((byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18),
                                  CONCAT16((byte)((uint)fVar71 >> 0x10) &
                                           ~(byte)((uint)iVar93 >> 0x10),
                                           CONCAT15((byte)((uint)fVar71 >> 8) &
                                                    ~(byte)((uint)iVar93 >> 8),
                                                    CONCAT14(SUB41(fVar71,0) & ~(byte)iVar93,fVar45)
                                                   ))) >> 0x20);
        auVar55._4_4_ = fVar84 * fVar56;
        auVar55._8_4_ = fVar85 * fVar45;
        auVar55._12_4_ = fVar99 * fVar56;
        auVar79 = auVar79 ^ (auVar79 ^ auVar55) & auVar78;
        auVar44._0_4_ = fVar46 * auVar79._0_4_;
        auVar44._4_4_ = fVar47 * auVar79._4_4_;
        auVar44._8_4_ = fVar40 * auVar79._8_4_;
        auVar44._12_4_ = fVar40 * auVar79._12_4_;
        auVar74 = NEON_ext(auVar44,auVar44,8,1);
        auVar80._0_12_ = auVar79._0_12_;
        auVar80._12_4_ = -(auVar44._0_4_ + auVar44._4_4_ + auVar74._0_4_);
        param_8[1] = auVar80._8_8_;
        *param_8 = auVar79._0_8_;
        goto LAB_02fe0600;
      }
    }
    else {
      lVar35 = 0;
      if (*param_1 != 0) {
        lVar35 = (long)*param_1 + (long)param_1;
      }
      puVar20 = (undefined8 *)(lVar35 + (ulong)(uVar11 >> 0x18) * 0xc);
      uVar48 = *puVar20;
      fVar40 = *(float *)(puVar20 + 1);
      puVar26 = (undefined8 *)(lVar35 + (ulong)(uVar11 >> 0x10 & 0xff) * 0xc);
      uVar58 = *puVar26;
      puVar20 = (undefined8 *)(lVar35 + (ulong)(uVar11 >> 8 & 0xff) * 0xc);
      uVar87 = *puVar20;
      fVar46 = (float)uVar48;
      fVar85 = (float)uVar87;
      fVar73 = fVar85 - fVar46;
      fVar47 = (float)((ulong)uVar48 >> 0x20);
      fVar99 = (float)((ulong)uVar87 >> 0x20);
      fVar84 = fVar99 - fVar47;
      fVar45 = *(float *)(puVar20 + 1);
      puVar20 = (undefined8 *)(lVar35 + (ulong)(uVar11 & 0xff) * 0xc);
      uVar48 = *puVar20;
      fVar71 = *(float *)(puVar20 + 1) - *(float *)(puVar26 + 1);
      fVar56 = (float)uVar48 - (float)uVar58;
      fVar83 = (float)((ulong)uVar48 >> 0x20) - (float)((ulong)uVar58 >> 0x20);
      uVar48 = NEON_ext(CONCAT44(fVar84,fVar73),CONCAT44(fVar45 - fVar40,fVar45 - fVar40),4,1);
      uVar58 = NEON_ext(CONCAT44(fVar83,fVar56),(ulong)(uint)fVar71,4,1);
      fVar85 = (fVar85 - fVar46) * (float)uVar58 - fVar56 * (float)uVar48;
      fVar99 = (fVar99 - fVar47) * (float)((ulong)uVar58 >> 0x20) -
               fVar83 * (float)((ulong)uVar48 >> 0x20);
      auVar101._0_8_ = CONCAT44(fVar99,fVar85);
      auVar101._8_4_ = (fVar45 - fVar40) * fVar56 - fVar73 * fVar71;
      auVar101._12_4_ = (fVar45 - fVar40) * fVar83 - fVar84 * fVar71;
      auVar74 = NEON_ext(auVar101,auVar101,4,1);
      fVar73 = auVar74._0_4_;
      fVar84 = auVar74._4_4_;
      auVar107._0_8_ = auVar74._0_8_;
      auVar107._8_8_ = auVar101._0_8_;
      fVar45 = fVar73 * fVar73 + fVar84 * fVar84 + fVar85 * fVar85;
      fVar83 = fVar73 * fVar73 + fVar84 * fVar84 + fVar85 * fVar85;
      uVar48 = CONCAT44(fVar83,fVar45);
      uVar58 = NEON_frsqrte(uVar48,4);
      fVar56 = (float)uVar58;
      fVar71 = (float)((ulong)uVar58 >> 0x20);
      uVar58 = NEON_frsqrts(uVar48,CONCAT44(fVar71 * fVar71,fVar56 * fVar56),4);
      fVar56 = fVar56 * (float)uVar58;
      fVar71 = fVar71 * (float)((ulong)uVar58 >> 0x20);
      auVar76._0_8_ = CONCAT44(-(uint)(0.0 < fVar83),-(uint)(0.0 < fVar45));
      iVar86 = -(uint)(fVar45 <= 0.0);
      iVar93 = -(uint)(fVar83 <= 0.0);
      uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar71 * fVar71,fVar56 * fVar56),4);
      auVar76._8_8_ = auVar76._0_8_;
      fVar56 = (float)uVar48 * fVar56;
      fVar71 = (float)((ulong)uVar48 >> 0x20) * fVar71;
      fVar45 = (float)CONCAT13((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18),
                               CONCAT12((byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar86 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar56 >> 8) &
                                                  ~(byte)((uint)iVar86 >> 8),
                                                  SUB41(fVar56,0) & ~(byte)iVar86)));
      auVar103._0_4_ = fVar73 * fVar45;
      fVar56 = (float)(CONCAT17((byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18),
                                CONCAT16((byte)((uint)fVar71 >> 0x10) &
                                         ~(byte)((uint)iVar93 >> 0x10),
                                         CONCAT15((byte)((uint)fVar71 >> 8) &
                                                  ~(byte)((uint)iVar93 >> 8),
                                                  CONCAT14(SUB41(fVar71,0) & ~(byte)iVar93,fVar45)))
                               ) >> 0x20);
      auVar103._4_4_ = fVar84 * fVar56;
      auVar103._8_4_ = fVar85 * fVar45;
      auVar103._12_4_ = fVar99 * fVar56;
      auVar107 = auVar107 ^ (auVar107 ^ auVar103) & auVar76;
      auVar74._0_4_ = fVar46 * auVar107._0_4_;
      auVar74._4_4_ = fVar47 * auVar107._4_4_;
      auVar74._8_4_ = fVar40 * auVar107._8_4_;
      auVar74._12_4_ = fVar40 * auVar107._12_4_;
      auVar101 = NEON_ext(auVar74,auVar74,8,1);
      auVar64._0_4_ = -(*param_3 * auVar107._0_4_);
      auVar64._4_4_ = -(param_3[1] * auVar107._4_4_);
      auVar64._8_4_ = -(param_3[2] * auVar107._8_4_);
      auVar64._12_4_ = -(param_3[3] * -(auVar74._0_4_ + auVar74._4_4_ + auVar101._0_4_));
      auVar74 = NEON_ext(auVar64,auVar64,8,1);
      if (auVar64._0_4_ + auVar64._4_4_ + auVar74._0_4_ <= 0.99) goto LAB_02fe0ef0;
      FUN_02fe19c8(param_1,param_7 & 0xffffffff,auStack_50,&uStack_450);
      fVar40 = fStack_440 - uStack_450;
      fVar45 = fStack_43c - fStack_44c;
      auVar52._0_8_ = CONCAT44(fVar45,fVar40);
      auVar52._8_4_ = fStack_438 - fStack_448;
      auVar52._12_4_ = fStack_434 - fStack_444;
      fVar46 = fStack_420 - uStack_450;
      fVar47 = fStack_41c - fStack_44c;
      auVar65._0_8_ = CONCAT44(fVar47,fVar46);
      auVar65._8_4_ = fStack_418 - fStack_448;
      auVar65._12_4_ = fStack_414 - fStack_444;
      auVar74 = NEON_ext(auVar52,auVar52,4,1);
      auVar64 = NEON_ext(auVar65,auVar65,4,1);
      auVar77._0_8_ =
           CONCAT44(fVar45 * auVar64._4_4_ - fVar47 * auVar74._4_4_,
                    fVar40 * auVar64._0_4_ - fVar46 * auVar74._0_4_);
      auVar77._8_4_ = auVar52._8_4_ * fVar46 - auVar65._8_4_ * fVar40;
      auVar77._12_4_ = auVar52._12_4_ * fVar47 - auVar65._12_4_ * fVar45;
      auVar74 = *param_4;
      uStack_478 = auVar52._8_8_;
      uStack_468 = auVar65._8_8_;
      auVar64 = NEON_ext(auVar77,auVar77,4,1);
      fVar40 = auVar74._0_4_ - uStack_450;
      fVar46 = auVar74._4_4_ - fStack_44c;
      fVar47 = auVar74._8_4_ - fStack_448;
      local_460 = auVar64._0_8_;
      local_480 = auVar52._0_8_;
      local_470 = auVar65._0_8_;
      auStack_458 = (undefined1  [8])auVar77._0_8_;
      FUN_032c9090(&local_480,&local_480);
      fVar45 = (float)local_480 * fVar40 + (float)local_470 * fVar46 + (float)local_460 * fVar47;
      fVar40 = local_480._4_4_ * fVar40 + local_470._4_4_ * fVar46 + local_460._4_4_ * fVar47;
      if (((fVar45 < -0.001) || (fVar40 < -0.001)) || (1.001 < fVar45 + fVar40)) {
        fVar45 = (float)local_430;
        fStack_440 = fStack_440 - fVar45;
        fVar46 = (float)((ulong)local_430 >> 0x20);
        fStack_43c = fStack_43c - fVar46;
        auVar43._0_8_ = CONCAT44(fStack_43c,fStack_440);
        fVar47 = (float)uStack_428;
        auVar43._8_4_ = fStack_438 - fVar47;
        fVar40 = (float)((ulong)uStack_428 >> 0x20);
        auVar43._12_4_ = fStack_434 - fVar40;
        auVar64 = NEON_ext(auVar43,auVar43,4,1);
        fStack_420 = fStack_420 - fVar45;
        fStack_41c = fStack_41c - fVar46;
        auVar53._0_8_ = CONCAT44(fStack_41c,fStack_420);
        auVar53._8_4_ = fStack_418 - fVar47;
        auVar53._12_4_ = fStack_414 - fVar40;
        auVar101 = NEON_ext(auVar53,auVar53,4,1);
        uStack_478 = auVar43._8_8_;
        uStack_468 = auVar53._8_8_;
        auVar66._0_8_ =
             CONCAT44(fStack_43c * auVar101._4_4_ - fStack_41c * auVar64._4_4_,
                      fStack_440 * auVar101._0_4_ - fStack_420 * auVar64._0_4_);
        auVar66._8_4_ = auVar43._8_4_ * fStack_420 - auVar53._8_4_ * fStack_440;
        auVar66._12_4_ = auVar43._12_4_ * fStack_41c - auVar53._12_4_ * fStack_43c;
        auVar64 = NEON_ext(auVar66,auVar66,4,1);
        local_460 = auVar64._0_8_;
        fVar45 = auVar74._0_4_ - fVar45;
        fVar46 = auVar74._4_4_ - fVar46;
        fVar47 = auVar74._8_4_ - fVar47;
        local_480 = auVar43._0_8_;
        local_470 = auVar53._0_8_;
        auStack_458 = (undefined1  [8])auVar66._0_8_;
        FUN_032c9090(&local_480,&local_480);
        fVar40 = (float)local_480 * fVar45 + (float)local_470 * fVar46 + (float)local_460 * fVar47;
        fVar45 = local_480._4_4_ * fVar45 + local_470._4_4_ * fVar46 + local_460._4_4_ * fVar47;
        if (((fVar40 < -0.001) || (fVar45 < -0.001)) || (1.001 < fVar40 + fVar45)) {
          param_6 = param_6 & 0xffffffff;
          goto LAB_02fe0ef0;
        }
      }
      uVar33 = param_7 & 0xffffffff;
      if (param_1[5] == 0) {
        sVar14 = 0;
        goto LAB_02fe1058;
      }
    }
    puVar20 = (undefined8 *)((long)(param_1 + 2) + (long)(int)uVar33 * 0x10 + (long)param_1[2]);
    uVar48 = *puVar20;
    param_8[1] = puVar20[1];
    *param_8 = uVar48;
    lVar35 = (long)(int)uVar33 * 4 + (long)param_1[4];
  }
  else {
    fVar40 = -*param_3;
    fVar45 = -param_3[1];
    fVar46 = -param_3[2];
    fVar47 = -param_3[3];
    lVar35 = (long)*piVar2 + (long)piVar2;
    lVar21 = 0;
    if (*piVar2 != 0) {
      lVar21 = lVar35;
    }
    if (uVar11 == 0xffffffff) {
LAB_02fe0424:
      if (param_1[9] == 0) {
        bVar10 = false;
      }
      else {
        if ((param_6 & 1) == 0) {
          bVar37 = param_5[4] >> 6;
          pbVar13 = param_5;
          if (bVar37 == 2) goto LAB_02fe0948;
LAB_02fe0444:
          if (bVar37 == 1) {
            uVar25 = *(uint *)((long)(param_1 + 10) + (ulong)*pbVar13 * 4 + (long)param_1[10]);
            uVar33 = (ulong)uVar25;
            puVar1 = (ushort *)(lVar35 + (ulong)(ushort)uVar25 * 4);
            bVar37 = (byte)puVar1[1];
            uVar11 = (uVar25 >> 0x10 & 0xff) + 1;
            uVar19 = 0;
            if (bVar37 != 0) {
              uVar19 = uVar11 / bVar37;
            }
            uVar25 = uVar25 >> 0x10;
            piVar17 = param_1 + 6;
            iVar86 = *param_1;
            bVar37 = *(byte *)((long)piVar17 +
                              (ulong)*puVar1 + (ulong)(uVar11 - uVar19 * bVar37) + (long)*piVar17);
            puVar26 = (undefined8 *)((long)param_1 + (ulong)bVar37 * 0xc + (long)iVar86);
            puVar20 = (undefined8 *)((long)param_1 + (ulong)*pbVar13 * 0xc + (long)iVar86);
            uVar58 = *puVar26;
            fVar85 = *(float *)(puVar20 + 1);
            uVar48 = *puVar20;
            lVar21 = (long)param_1[8] + (long)(param_1 + 8);
            fVar99 = (float)uVar48;
            fVar56 = fVar99 - (float)uVar58;
            fVar83 = (float)((ulong)uVar48 >> 0x20);
            fVar71 = fVar83 - (float)((ulong)uVar58 >> 0x20);
            fVar73 = fVar85 - *(float *)(puVar26 + 1);
            uVar48 = CONCAT44(fVar56 * fVar56 + fVar71 * fVar71 + fVar73 * fVar73,
                              fVar56 * fVar56 + fVar71 * fVar71 + fVar73 * fVar73);
            uVar58 = NEON_frsqrte(uVar48,4);
            fVar84 = (float)uVar58;
            fVar92 = (float)((ulong)uVar58 >> 0x20);
            uVar58 = NEON_frsqrts(uVar48,CONCAT44(fVar92 * fVar92,fVar84 * fVar84),4);
            fVar84 = fVar84 * (float)uVar58;
            fVar92 = fVar92 * (float)((ulong)uVar58 >> 0x20);
            uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar92 * fVar92,fVar84 * fVar84),4);
            fVar84 = (float)uVar48 * fVar84;
            uVar34 = uVar33;
            fVar56 = fVar56 * fVar84 * fVar40 +
                     fVar71 * (float)((ulong)uVar48 >> 0x20) * fVar92 * fVar45 +
                     fVar73 * fVar84 * fVar46;
            uVar11 = uVar25;
            do {
              puVar1 = (ushort *)(lVar35 + (ulong)((uint)uVar34 & 0xffff) * 4);
              bVar39 = (byte)puVar1[1];
              iVar98 = (uint)bVar39 + (uVar25 & 0xff) + -1;
              iVar93 = 0;
              if (bVar39 != 0) {
                iVar93 = iVar98 / (int)(uint)bVar39;
              }
              lVar32 = (ulong)(iVar98 - iVar93 * (uint)bVar39 & 0xff) + (ulong)*puVar1;
              bVar39 = *(byte *)((long)piVar17 + lVar32 + *piVar17);
              uVar19 = *(uint *)(lVar21 + lVar32 * 4);
              uVar34 = (ulong)uVar19;
              puVar20 = (undefined8 *)((long)param_1 + (ulong)bVar39 * 0xc + (long)iVar86);
              uVar48 = *puVar20;
              uVar25 = uVar19 >> 0x10;
              fVar71 = fVar99 - (float)uVar48;
              fVar73 = fVar83 - (float)((ulong)uVar48 >> 0x20);
              fVar84 = fVar85 - *(float *)(puVar20 + 1);
              uVar48 = CONCAT44(fVar71 * fVar71 + fVar73 * fVar73 + fVar84 * fVar84,
                                fVar71 * fVar71 + fVar73 * fVar73 + fVar84 * fVar84);
              uVar58 = NEON_frsqrte(uVar48,4);
              fVar92 = (float)uVar58;
              fVar97 = (float)((ulong)uVar58 >> 0x20);
              uVar58 = NEON_frsqrts(uVar48,CONCAT44(fVar97 * fVar97,fVar92 * fVar92),4);
              fVar92 = fVar92 * (float)uVar58;
              fVar97 = fVar97 * (float)((ulong)uVar58 >> 0x20);
              uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar97 * fVar97,fVar92 * fVar92),4);
              fVar92 = (float)uVar48 * fVar92;
              fVar71 = fVar71 * fVar92 * fVar40 +
                       fVar73 * (float)((ulong)uVar48 >> 0x20) * fVar97 * fVar45 +
                       fVar84 * fVar92 * fVar46;
              if (fVar56 <= fVar71) {
                uVar19 = (uint)uVar33;
              }
              uVar33 = (ulong)uVar19;
              uVar19 = uVar25;
              if (fVar56 <= fVar71) {
                uVar19 = uVar11;
              }
              bVar31 = (byte)uVar19;
              fVar56 = (float)((uint)fVar56 ^
                              ((uint)fVar56 ^ (uint)fVar71) & -(uint)(fVar71 < fVar56));
              uVar11 = uVar19;
            } while (bVar39 != bVar37);
LAB_02fe0a08:
            uVar25 = *(uint *)(lVar21 + ((ulong)*(ushort *)(lVar35 + (uVar33 & 0xffff) * 4) +
                                        (ulong)bVar31) * 4);
            pfVar22 = (float *)((long)param_1[2] + (long)(param_1 + 2));
            pfVar27 = pfVar22 + (uVar33 & 0xffff) * 4;
            pfVar38 = pfVar22 + ((ulong)uVar25 & 0xffff) * 4;
            auVar50._0_4_ = *pfVar27 * fVar40;
            auVar50._4_4_ = pfVar27[1] * fVar45;
            auVar50._8_4_ = pfVar27[2] * fVar46;
            auVar50._12_4_ = pfVar27[3] * fVar47;
            auVar74 = NEON_ext(auVar50,auVar50,8,1);
            auVar41._0_4_ = *pfVar38 * fVar40;
            auVar41._4_4_ = pfVar38[1] * fVar45;
            auVar41._8_4_ = pfVar38[2] * fVar46;
            auVar41._12_4_ = pfVar38[3] * fVar47;
            auVar64 = NEON_ext(auVar41,auVar41,8,1);
            uVar11 = (uint)uVar33;
            if (auVar50._0_4_ + auVar50._4_4_ + auVar74._0_4_ <=
                auVar41._0_4_ + auVar41._4_4_ + auVar64._0_4_) {
              uVar11 = uVar25;
            }
            param_7 = (ulong)(uVar11 & 0xffff);
            goto LAB_02fe05e0;
          }
        }
        else {
          bVar37 = param_5[4] & 3;
          pbVar13 = param_5 + (param_5[4] >> 6);
          if (bVar37 != 2) goto LAB_02fe0444;
LAB_02fe0948:
          uVar19 = *(uint *)((long)(param_1 + 10) + (ulong)*pbVar13 * 4 + (long)param_1[10]);
          puVar1 = (ushort *)(lVar35 + (ulong)(ushort)uVar19 * 4);
          bVar37 = (byte)puVar1[1];
          uVar25 = (uVar19 >> 0x10 & 0xff) + 1;
          uVar24 = 0;
          if (bVar37 != 0) {
            uVar24 = uVar25 / bVar37;
          }
          piVar17 = param_1 + 8;
          piVar36 = param_1 + 6;
          bVar37 = *(byte *)((long)piVar36 +
                            (ulong)*puVar1 + (ulong)(uVar25 - uVar24 * bVar37) + (long)*piVar36);
          uVar25 = uVar19 >> 0x10;
          bVar39 = bVar37;
          do {
            bVar31 = (byte)uVar25;
            uVar33 = (ulong)uVar19;
            if (pbVar13[1] == bVar39) {
              lVar21 = (long)*piVar17 + (long)piVar17;
              goto LAB_02fe0a08;
            }
            puVar1 = (ushort *)(lVar35 + (ulong)(uVar19 & 0xffff) * 4);
            bVar39 = (byte)puVar1[1];
            iVar98 = (uint)bVar39 + (uVar25 & 0xff) + -1;
            iVar93 = 0;
            if (bVar39 != 0) {
              iVar93 = iVar98 / (int)(uint)bVar39;
            }
            lVar32 = (ulong)(iVar98 - iVar93 * (uint)bVar39 & 0xff) + (ulong)*puVar1;
            bVar39 = *(byte *)((long)piVar36 + lVar32 + *piVar36);
            uVar19 = *(uint *)((long)piVar17 + lVar32 * 4 + (long)*piVar17);
            uVar25 = uVar19 >> 0x10;
          } while (bVar39 != bVar37);
        }
        bVar10 = true;
      }
      iVar93 = param_1[2];
      uVar25 = param_1[3];
      pfVar22 = (float *)((long)iVar93 + (long)(param_1 + 2));
      pfVar27 = (float *)0x0;
      if (iVar93 != 0) {
        pfVar27 = pfVar22;
      }
      if ((int)(uVar25 - 4) < 1) {
        uVar19 = 0;
        auVar49._8_4_ = 0xff7fffee;
        auVar49._0_8_ = 0xff7fffeeff7fffee;
        auVar49._12_4_ = 0xff7fffee;
        auVar74 = ZEXT816(0);
        pfVar38 = pfVar27;
      }
      else {
        auVar49._8_4_ = 0xff7fffee;
        auVar49._0_8_ = 0xff7fffeeff7fffee;
        auVar49._12_4_ = 0xff7fffee;
        auVar61._8_8_ = _UNK_03889d78;
        auVar61._0_8_ = _DAT_03889d70;
        auVar74 = ZEXT816(0);
        lVar35 = 0;
        do {
          pfVar38 = pfVar27 + lVar35 * 4;
          lVar35 = lVar35 + 4;
          auVar100._0_4_ = pfVar38[4] * fVar40;
          auVar100._4_4_ = pfVar38[5] * fVar45;
          auVar100._8_4_ = pfVar38[6] * fVar46;
          auVar100._12_4_ = pfVar38[7] * fVar47;
          auVar88._0_4_ = *pfVar38 * fVar40;
          auVar88._4_4_ = pfVar38[1] * fVar45;
          auVar88._8_4_ = pfVar38[2] * fVar46;
          auVar88._12_4_ = pfVar38[3] * fVar47;
          auVar102._0_4_ = pfVar38[8] * fVar40;
          auVar102._4_4_ = pfVar38[9] * fVar45;
          auVar102._8_4_ = pfVar38[10] * fVar46;
          auVar102._12_4_ = pfVar38[0xb] * fVar47;
          auVar106._0_4_ = pfVar38[0xc] * fVar40;
          auVar106._4_4_ = pfVar38[0xd] * fVar45;
          auVar106._8_4_ = pfVar38[0xe] * fVar46;
          auVar106._12_4_ = pfVar38[0xf] * fVar47;
          auVar64 = NEON_ext(auVar88,auVar88,8,1);
          auVar101 = NEON_ext(auVar100,auVar100,8,1);
          auVar103 = NEON_ext(auVar102,auVar102,8,1);
          auVar107 = NEON_ext(auVar106,auVar106,8,1);
          auVar108._0_4_ = auVar64._0_4_ + auVar88._0_4_ + auVar88._4_4_;
          auVar108._4_4_ = auVar101._0_4_ + auVar100._0_4_ + auVar100._4_4_;
          fVar85 = auVar103._0_4_ + auVar102._0_4_ + auVar102._4_4_;
          fVar56 = auVar107._0_4_ + auVar106._0_4_ + auVar106._4_4_;
          auVar108._12_4_ = fVar56;
          auVar108._8_4_ = fVar85;
          auVar89._0_4_ = -(uint)(auVar49._0_4_ < auVar108._0_4_);
          auVar89._4_4_ = -(uint)(auVar49._4_4_ < auVar108._4_4_);
          auVar89._8_4_ = -(uint)(auVar49._8_4_ < fVar85);
          auVar89._12_4_ = -(uint)(auVar49._12_4_ < fVar56);
          auVar74 = auVar74 ^ (auVar74 ^ auVar61) & auVar89;
          auVar62._0_4_ = auVar61._0_4_ + 4;
          auVar62._4_4_ = auVar61._4_4_ + 4;
          auVar62._8_4_ = auVar61._8_4_ + 4;
          auVar62._12_4_ = auVar61._12_4_ + 4;
          auVar49 = auVar49 ^ (auVar49 ^ auVar108) & auVar89;
          auVar61 = auVar62;
        } while ((int)lVar35 < (int)(uVar25 - 4));
        uVar19 = uVar25 - 1 & 0xfffffffc;
        pfVar38 = pfVar27 + (ulong)(uVar25 - 5 & 0xfffffffc) * 4 + 0x10;
      }
      auVar64 = NEON_rev64(auVar49,4);
      auVar75._0_4_ = -(uint)(auVar64._0_4_ <= auVar49._0_4_);
      auVar75._4_4_ = -(uint)(auVar64._4_4_ <= auVar49._4_4_);
      auVar75._8_4_ = -(uint)(auVar64._8_4_ <= auVar49._8_4_);
      auVar75._12_4_ = -(uint)(auVar64._12_4_ <= auVar49._12_4_);
      auVar64 = NEON_fmax(auVar49,auVar64,4);
      auVar101 = NEON_rev64(auVar74,4);
      auVar101 = auVar101 ^ (auVar101 ^ auVar74) & auVar75;
      auVar74 = NEON_ext(auVar64,auVar64,8,1);
      auVar103 = NEON_ext(auVar101,auVar101,8,1);
      param_7 = (auVar103._0_8_ ^
                (auVar103._0_8_ ^ auVar101._0_8_) & (ulong)-(uint)(auVar74._0_4_ <= auVar64._0_4_))
                & 0xffffffff;
      if ((int)uVar19 < (int)uVar25) {
        fVar85 = (float)NEON_fmaxnmv(auVar49,4);
        do {
          fVar56 = *pfVar38 * fVar40 + pfVar38[1] * fVar45 + pfVar38[2] * fVar46;
          uVar24 = uVar19;
          if (fVar56 <= fVar85) {
            uVar24 = (uint)param_7;
          }
          param_7 = (ulong)uVar24;
          uVar19 = uVar19 + 1;
          if (fVar56 <= fVar85) {
            fVar56 = fVar85;
          }
          pfVar38 = pfVar38 + 4;
          fVar85 = fVar56;
        } while (uVar25 != uVar19);
      }
      if (!bVar10 && (param_2 & 0x80) == 0) {
        uVar25 = (uint)param_7;
        if (uVar25 != uVar11) {
          pfVar38 = pfVar22 + (long)(int)uVar25 * 4;
          auVar63._0_4_ = *pfVar38 * fVar40;
          auVar63._4_4_ = pfVar38[1] * fVar45;
          auVar63._8_4_ = pfVar38[2] * fVar46;
          auVar63._12_4_ = pfVar38[3] * fVar47;
          auVar74 = NEON_ext(auVar63,auVar63,8,1);
          if (*(float *)(&DAT_03aa2580 + (ulong)*(byte *)(lVar21 + (long)(int)uVar25 * 4 + 3) * 4)
              <= auVar63._0_4_ + auVar63._4_4_ + auVar74._0_4_) goto LAB_02fe05e0;
        }
        if ((param_6 & 1) == 0) {
          bVar37 = param_5[4] >> 6;
        }
        else {
          pbVar13 = param_5 + 4;
          param_5 = param_5 + (*pbVar13 >> 6);
          bVar37 = *pbVar13 & 3;
        }
        if (bVar37 == 2) {
          iVar93 = param_1[6];
          if (iVar93 == 0) {
            lVar35 = 0;
          }
          else {
            lVar35 = (long)iVar93 + (long)(param_1 + 6);
          }
          if (0 < iVar86) {
            bVar37 = *param_5;
            uVar33 = 0;
            iVar93 = 0;
            bVar39 = param_5[1];
            do {
              puVar1 = (ushort *)(lVar21 + uVar33 * 4);
              bVar31 = (byte)puVar1[1];
              uVar3 = *puVar1;
              uVar34 = (ulong)uVar3;
              if ((uint)uVar3 < (uint)bVar31) {
                uVar11 = (uint)bVar31 - (uint)uVar3;
                uVar12 = (ulong)uVar11 & 3;
                if (~uVar34 + (ulong)bVar31 < 3) {
                  bVar9 = false;
                  bVar10 = false;
                }
                else {
                  bVar9 = false;
                  bVar10 = false;
                  do {
                    pbVar13 = (byte *)(lVar35 + 1 + uVar34);
                    uVar34 = uVar34 + 4;
                    bVar10 = (bool)(bVar10 | pbVar13[-1] == bVar37 | *pbVar13 == bVar37 |
                                    pbVar13[1] == bVar37 | pbVar13[2] == bVar37);
                    bVar9 = (bool)(bVar9 | pbVar13[-1] == bVar39 | *pbVar13 == bVar39 |
                                   pbVar13[1] == bVar39 | pbVar13[2] == bVar39);
                  } while (bVar31 - uVar12 != uVar34);
                }
                if ((uVar11 & 3) != 0) {
                  pbVar13 = (byte *)(lVar35 + uVar34);
                  do {
                    bVar10 = (bool)(bVar10 | *pbVar13 == bVar37);
                    bVar9 = (bool)(bVar9 | *pbVar13 == bVar39);
                    uVar12 = uVar12 - 1;
                    pbVar13 = pbVar13 + 1;
                  } while (uVar12 != 0);
                }
                if ((bVar10) && (bVar9)) {
                  *(int *)(auStack_458 + (long)iVar93 * 4 + 8) = (int)uVar33;
                  iVar93 = iVar93 + 1;
                  if (iVar93 == 2) goto LAB_02fe0bc8;
                }
              }
              uVar33 = uVar33 + 1;
            } while (uVar33 != (long)iVar86);
            if (iVar93 != 0) {
              if (iVar93 == 2) {
LAB_02fe0bc8:
                uVar33 = (ulong)(int)uStack_450;
                param_7 = (ulong)(int)fStack_44c;
                pfVar38 = pfVar27 + param_7 * 4;
                auVar51._0_4_ = *pfVar38 * fVar40;
                auVar51._4_4_ = pfVar38[1] * fVar45;
                auVar51._8_4_ = pfVar38[2] * fVar46;
                auVar51._12_4_ = pfVar38[3] * fVar47;
                auVar74 = NEON_ext(auVar51,auVar51,8,1);
                pfVar27 = pfVar27 + uVar33 * 4;
                auVar42._0_4_ = *pfVar27 * fVar40;
                auVar42._4_4_ = pfVar27[1] * fVar45;
                auVar42._8_4_ = pfVar27[2] * fVar46;
                auVar42._12_4_ = pfVar27[3] * fVar47;
                auVar64 = NEON_ext(auVar42,auVar42,8,1);
                if (auVar42._0_4_ + auVar42._4_4_ + auVar64._0_4_ <
                    auVar51._0_4_ + auVar51._4_4_ + auVar74._0_4_) goto LAB_02fe05e0;
              }
              else {
                uVar33 = (ulong)(uint)uStack_450;
              }
              param_7 = uVar33 & 0xffffffff;
            }
          }
        }
        else if (bVar37 == 1) {
          iVar93 = param_1[6];
          if (iVar93 == 0) {
            lVar35 = 0;
            iVar93 = *param_1;
            if (iVar93 == 0) goto LAB_02fe19a8;
LAB_02fe07e8:
            lVar32 = (long)iVar93 + (long)param_1;
          }
          else {
            lVar35 = (long)iVar93 + (long)(param_1 + 6);
            iVar93 = *param_1;
            if (iVar93 != 0) goto LAB_02fe07e8;
LAB_02fe19a8:
            lVar32 = 0;
          }
          if (0 < iVar86) {
            bVar37 = *param_5;
            puVar20 = (undefined8 *)(lVar32 + (ulong)bVar37 * 0xc);
            fVar47 = 0.0;
            uVar34 = NEON_fmov(0x3f800000,4);
            uVar33 = 0;
            do {
              puVar1 = (ushort *)(lVar21 + uVar33 * 4);
              bVar39 = (byte)puVar1[1];
              uVar3 = *puVar1;
              uVar12 = (ulong)uVar3;
              if ((uint)uVar3 < (uint)bVar39) {
                iVar93 = (uint)bVar39 + (uint)uVar3 + -1;
                do {
                  bVar31 = *(byte *)(lVar35 + iVar93);
                  if (bVar31 == bVar37) {
                    fVar85 = *(float *)(puVar20 + 1);
                    bVar31 = *(byte *)(lVar35 + uVar12);
LAB_02fe0864:
                    puVar26 = (undefined8 *)(lVar32 + (ulong)bVar31 * 0xc);
                    uVar48 = *puVar26;
                    fVar73 = (float)*puVar20 - (float)uVar48;
                    fVar84 = (float)((ulong)*puVar20 >> 0x20) - (float)((ulong)uVar48 >> 0x20);
                    fVar85 = fVar85 - *(float *)(puVar26 + 1);
                    fVar56 = fVar73 * fVar73 + fVar84 * fVar84 + fVar85 * fVar85;
                    fVar83 = fVar73 * fVar73 + fVar84 * fVar84 + fVar85 * fVar85;
                    uVar48 = CONCAT44(fVar83,fVar56);
                    uVar58 = NEON_frsqrte(uVar48,4);
                    fVar99 = (float)uVar58;
                    fVar71 = (float)((ulong)uVar58 >> 0x20);
                    uVar58 = NEON_frsqrts(uVar48,CONCAT44(fVar71 * fVar71,fVar99 * fVar99),4);
                    fVar99 = fVar99 * (float)uVar58;
                    fVar71 = fVar71 * (float)((ulong)uVar58 >> 0x20);
                    iVar93 = -(uint)(fVar56 <= 0.0);
                    iVar98 = -(uint)(fVar83 <= 0.0);
                    uVar48 = NEON_frsqrts(uVar48,CONCAT44(fVar71 * fVar71,fVar99 * fVar99),4);
                    fVar99 = (float)uVar48 * fVar99;
                    fVar71 = (float)((ulong)uVar48 >> 0x20) * fVar71;
                    fVar56 = (float)CONCAT13((byte)((uint)fVar99 >> 0x18) &
                                             ~(byte)((uint)iVar93 >> 0x18),
                                             CONCAT12((byte)((uint)fVar99 >> 0x10) &
                                                      ~(byte)((uint)iVar93 >> 0x10),
                                                      CONCAT11((byte)((uint)fVar99 >> 8) &
                                                               ~(byte)((uint)iVar93 >> 8),
                                                               SUB41(fVar99,0) & ~(byte)iVar93)));
                    fVar85 = fVar73 * fVar56 * fVar40 +
                             fVar84 * (float)(CONCAT17((byte)((uint)fVar71 >> 0x18) &
                                                       ~(byte)((uint)iVar98 >> 0x18),
                                                       CONCAT16((byte)((uint)fVar71 >> 0x10) &
                                                                ~(byte)((uint)iVar98 >> 0x10),
                                                                CONCAT15((byte)((uint)fVar71 >> 8) &
                                                                         ~(byte)((uint)iVar98 >> 8),
                                                                         CONCAT14(SUB41(fVar71,0) &
                                                                                  ~(byte)iVar98,
                                                                                  fVar56)))) >> 0x20
                                             ) * fVar45 + fVar85 * fVar56 * fVar46;
                    uVar29 = (ulong)(uint)fVar85;
                    if (fVar85 == (float)uVar34) {
                      pfVar38 = pfVar27 + uVar33 * 4;
                      fVar85 = *pfVar38 * fVar40 + pfVar38[1] * fVar45 + pfVar38[2] * fVar46;
                      if (fVar47 < fVar85) {
                        uVar29 = uVar34;
                        goto LAB_02fe083c;
                      }
                    }
                    else if (fVar85 < (float)uVar34) {
                      pfVar38 = pfVar27 + uVar33 * 4;
                      fVar85 = *pfVar38 * fVar40 + pfVar38[1] * fVar45 + pfVar38[2] * fVar46;
LAB_02fe083c:
                      param_7 = uVar33 & 0xffffffff;
                      uVar34 = uVar29;
                      fVar47 = fVar85;
                    }
                  }
                  else if (*(byte *)(lVar35 + uVar12) == bVar37) {
                    fVar85 = *(float *)(puVar20 + 1);
                    goto LAB_02fe0864;
                  }
                  iVar93 = (int)uVar12;
                  uVar12 = uVar12 + 1;
                } while (bVar39 != uVar12);
              }
              uVar33 = uVar33 + 1;
            } while (uVar33 != (long)iVar86);
          }
        }
      }
    }
    else {
      pfVar22 = (float *)((long)param_1[2] + (long)(param_1 + 2));
      pfVar27 = pfVar22 + (long)(int)uVar11 * 4;
      auVar60._0_4_ = *pfVar27 * fVar40;
      auVar60._4_4_ = pfVar27[1] * fVar45;
      auVar60._8_4_ = pfVar27[2] * fVar46;
      auVar60._12_4_ = pfVar27[3] * fVar47;
      auVar74 = NEON_ext(auVar60,auVar60,8,1);
      if (auVar60._0_4_ + auVar60._4_4_ + auVar74._0_4_ <
          *(float *)(&DAT_03aa2580 + (ulong)*(byte *)(lVar21 + (param_7 & 0xffffffff) * 4 + 3) * 4))
      goto LAB_02fe0424;
      param_7 = param_7 & 0xffffffff;
    }
LAB_02fe05e0:
    uVar48 = *(undefined8 *)(pfVar22 + (long)(int)param_7 * 4);
    uVar33 = param_7 & 0xffffffff;
    param_8[1] = *(undefined8 *)(pfVar22 + (long)(int)param_7 * 4 + 2);
    *param_8 = uVar48;
    lVar35 = (long)(int)param_7 * 4 + (long)*piVar2;
  }
  sVar14 = (ushort)*(byte *)((long)piVar2 + lVar35 + 3) << 8;
LAB_02fe0600:
  *param_9 = sVar14;
  return uVar33;
}


