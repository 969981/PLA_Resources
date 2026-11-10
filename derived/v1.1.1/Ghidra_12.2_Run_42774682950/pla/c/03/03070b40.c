/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03070b40; name: FUN_03070b40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_03070b40(undefined8 *param_1,undefined8 param_2,undefined1 (*param_3) [16],float *param_4,
                 undefined1 (*param_5) [16],uint param_6,long param_7,undefined1 (*param_8) [16],
                 undefined1 (*param_9) [16],undefined8 param_10,byte *param_11,undefined8 *param_12,
                 uint *param_13)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  bool bVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  byte bVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  byte bVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  byte bVar43;
  byte bVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  int iVar48;
  float fVar49;
  ulong uVar50;
  undefined1 auVar51 [16];
  int iVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar55;
  float fVar56;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  float fVar62;
  float fVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar67;
  float fVar68;
  undefined1 auVar69 [12];
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar75;
  float fVar76;
  float fVar77;
  undefined8 uVar78;
  float fVar87;
  undefined1 auVar79 [12];
  undefined1 auVar81 [16];
  float fVar88;
  float fVar89;
  undefined1 auVar82 [16];
  undefined1 auVar80 [12];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar103;
  float fVar104;
  undefined8 uVar105;
  float fVar117;
  undefined1 auVar106 [16];
  float fVar115;
  float fVar118;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar116;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  byte bVar119;
  float fVar120;
  byte bVar126;
  byte bVar127;
  byte bVar129;
  byte bVar131;
  byte bVar132;
  undefined8 uVar121;
  undefined1 auVar122 [12];
  byte bVar128;
  float fVar130;
  byte bVar133;
  byte bVar134;
  byte bVar136;
  byte bVar137;
  float fVar135;
  byte bVar138;
  byte bVar139;
  byte bVar141;
  byte bVar142;
  float fVar140;
  byte bVar143;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined8 uVar144;
  undefined8 uVar145;
  float fVar149;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  float fVar150;
  float fVar154;
  float fVar155;
  undefined1 auVar151 [16];
  float fVar156;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  float fVar157;
  float fVar161;
  float fVar162;
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar163 [12];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined8 uVar170;
  int iVar171;
  int iVar172;
  float fVar173;
  float fVar179;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  uint uVar180;
  float fVar181;
  undefined1 auVar182 [12];
  int iVar189;
  int iVar190;
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar191 [16];
  float fVar192;
  undefined1 auVar193 [12];
  float fVar196;
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  local_20._8_8_ = *(undefined8 *)(*param_8 + 8);
  local_20._0_8_ = *(undefined8 *)*param_8;
  auVar112 = *param_8;
  auVar160 = *param_8;
  auVar108 = *param_8;
  fVar94 = *param_4;
  fVar23 = param_4[1];
  fVar116 = param_4[2];
  fVar49 = local_20._0_4_;
  fVar24 = fVar49 * fVar94;
  fVar104 = local_20._4_4_;
  fVar25 = fVar104 * fVar23;
  fVar56 = local_20._8_4_;
  fVar63 = local_20._12_4_;
  fVar27 = fVar63 * param_4[3];
  auVar51._4_4_ = fVar25;
  auVar51._0_4_ = fVar24;
  auVar51._8_4_ = fVar56 * fVar116;
  auVar51._12_4_ = fVar27;
  auVar100._4_4_ = fVar25;
  auVar100._0_4_ = fVar24;
  auVar100._8_4_ = fVar56 * fVar116;
  auVar100._12_4_ = fVar27;
  auVar51 = NEON_ext(auVar51,auVar100,8,1);
  fVar27 = (float)*param_1;
  fVar26 = (float)((ulong)*param_1 >> 0x20);
  if (fVar27 < fVar24 + fVar25 + auVar51._0_4_ + fVar63) {
    return 0x80;
  }
  auVar51 = param_9[2];
  auVar151 = *param_9;
  auVar100 = param_9[1];
  fVar173 = auVar100._0_4_;
  fVar68 = auVar151._0_4_;
  auVar57._0_4_ = fVar173 - fVar68;
  fVar179 = auVar100._4_4_;
  fVar192 = auVar151._4_4_;
  auVar57._4_4_ = fVar179 - fVar192;
  fVar196 = auVar151._8_4_;
  auVar57._8_4_ = auVar100._8_4_ - fVar196;
  fVar181 = auVar151._12_4_;
  auVar57._12_4_ = auVar100._12_4_ - fVar181;
  auVar81 = NEON_ext(auVar57,auVar57,4,1);
  fVar162 = auVar51._0_4_;
  auVar107._0_4_ = fVar162 - fVar68;
  fVar155 = auVar51._4_4_;
  auVar107._4_4_ = fVar155 - fVar192;
  auVar107._8_4_ = auVar51._8_4_ - fVar196;
  auVar107._12_4_ = auVar51._12_4_ - fVar181;
  auVar106 = NEON_ext(auVar107,auVar107,4,1);
  auVar158._0_4_ = auVar57._0_4_ * auVar106._0_4_ - auVar107._0_4_ * auVar81._0_4_;
  auVar158._4_4_ = auVar57._4_4_ * auVar106._4_4_ - auVar107._4_4_ * auVar81._4_4_;
  auVar158._8_4_ = auVar57._8_4_ * auVar107._0_4_ - auVar107._8_4_ * auVar57._0_4_;
  auVar158._12_4_ = auVar57._12_4_ * auVar107._4_4_ - auVar107._12_4_ * auVar57._4_4_;
  auVar57 = NEON_ext(auVar158,auVar158,4,1);
  fVar55 = auVar57._0_4_;
  fVar62 = auVar57._4_4_;
  auVar81._0_4_ = fVar49 * fVar55;
  auVar81._4_4_ = fVar104 * fVar62;
  auVar81._8_4_ = fVar56 * auVar158._0_4_;
  auVar81._12_4_ = fVar63 * auVar158._4_4_;
  fVar24 = fVar55 * fVar55 + fVar62 * fVar62 + auVar158._0_4_ * auVar158._0_4_;
  fVar25 = fVar55 * fVar55 + fVar62 * fVar62 + auVar158._0_4_ * auVar158._0_4_;
  uVar144 = CONCAT44(fVar25,fVar24);
  auVar57 = NEON_ext(auVar81,auVar81,8,1);
  uVar78 = NEON_frsqrte(uVar144,4);
  fVar75 = (float)uVar78;
  fVar87 = (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frsqrts(uVar144,CONCAT44(fVar87 * fVar87,fVar75 * fVar75),4);
  fVar75 = fVar75 * (float)uVar78;
  fVar87 = fVar87 * (float)((ulong)uVar78 >> 0x20);
  uVar144 = NEON_frsqrts(uVar144,CONCAT44(fVar87 * fVar87,fVar75 * fVar75),4);
  iVar48 = -(uint)(fVar24 <= 0.0);
  iVar54 = -(uint)(fVar25 <= 0.0);
  fVar75 = (float)uVar144 * fVar75;
  fVar87 = (float)((ulong)uVar144 >> 0x20) * fVar87;
  fVar24 = (float)CONCAT13((byte)((uint)fVar75 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                           CONCAT12((byte)((uint)fVar75 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                                    CONCAT11((byte)((uint)fVar75 >> 8) & ~(byte)((uint)iVar48 >> 8),
                                             SUB41(fVar75,0) & ~(byte)iVar48)));
  fVar55 = fVar55 * fVar24;
  fVar62 = fVar62 * (float)(CONCAT17((byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                                     CONCAT16((byte)((uint)fVar87 >> 0x10) &
                                              ~(byte)((uint)iVar54 >> 0x10),
                                              CONCAT15((byte)((uint)fVar87 >> 8) &
                                                       ~(byte)((uint)iVar54 >> 8),
                                                       CONCAT14(SUB41(fVar87,0) & ~(byte)iVar54,
                                                                fVar24)))) >> 0x20);
  fVar24 = auVar158._0_4_ * fVar24;
  fVar25 = (fVar94 - fVar68) * fVar55;
  fVar75 = (fVar23 - fVar192) * fVar62;
  fVar87 = (fVar116 - fVar196) * fVar24;
  fVar76 = fVar25 + fVar75 + fVar87;
  fVar87 = fVar25 + fVar75 + fVar87;
  bVar28 = (byte)((uint)fVar76 >> 0x18);
  fVar25 = (float)CONCAT13((byte)((uint)(auVar81._0_4_ + auVar81._4_4_ + auVar57._0_4_) >> 0x18) &
                           0x80 ^ bVar28,SUB43(fVar76,0));
  if (fVar27 < fVar25) {
    return 0x80;
  }
  if (fVar25 <= -fVar27) {
    fVar25 = fVar55 * *(float *)*param_3;
    fVar149 = fVar62 * *(float *)(*param_3 + 4);
    fVar156 = fVar24 * *(float *)(*param_3 + 8);
    fVar75 = fVar25 + fVar149 + fVar156;
    auVar106._0_8_ = CONCAT44(fVar25 + fVar149 + fVar156,fVar75);
    if (-0.001 <= (float)CONCAT13(bVar28 & 0x80 ^ (byte)((uint)fVar75 >> 0x18),SUB43(fVar75,0))) {
      return 0x80;
    }
    auVar106._8_8_ = auVar106._0_8_;
    auVar57 = NEON_frecpe(auVar106,4);
    auVar158 = NEON_frecps(auVar106,auVar57,4);
    auVar175._0_4_ = auVar57._0_4_ * auVar158._0_4_;
    auVar175._4_4_ = auVar57._4_4_ * auVar158._4_4_;
    auVar175._8_4_ = auVar57._8_4_ * auVar158._8_4_;
    auVar175._12_4_ = auVar57._12_4_ * auVar158._12_4_;
    auVar57 = NEON_frecps(auVar106,auVar175,4);
    auVar79._0_4_ = fVar76 * *(float *)*param_3 * auVar175._0_4_ * auVar57._0_4_;
    auVar79._4_4_ = fVar87 * *(float *)(*param_3 + 4) * auVar175._4_4_ * auVar57._4_4_;
    auVar79._8_4_ = fVar76 * *(float *)(*param_3 + 8) * auVar175._8_4_ * auVar57._8_4_;
  }
  else {
    auVar79._0_4_ = fVar55 * fVar76;
    auVar79._4_4_ = fVar62 * fVar87;
    auVar79._8_4_ = fVar24 * fVar76;
  }
  auVar57 = param_9[3];
  auVar151 = NEON_ext(auVar151,auVar151,8,1);
  auVar158 = NEON_ext(auVar100,auVar100,8,1);
  fVar25 = auVar151._0_4_;
  fVar87 = auVar158._0_4_;
  fVar77 = fVar94 - auVar79._0_4_;
  fVar88 = fVar23 - auVar79._4_4_;
  fVar89 = fVar116 - auVar79._8_4_;
  fVar76 = auVar57._0_4_;
  fVar156 = auVar57._4_4_;
  auVar51 = NEON_ext(auVar51,auVar51,8,1);
  auVar151 = NEON_ext(auVar57,auVar57,8,1);
  fVar75 = auVar51._0_4_;
  fVar149 = auVar151._0_4_;
  uVar78 = NEON_ext(CONCAT44(fVar76,fVar162),CONCAT44(fVar173,fVar68),4,1);
  uVar170 = NEON_ext(CONCAT44(fVar173,fVar68),CONCAT44(fVar76,fVar162),4,1);
  uVar121 = NEON_ext(CONCAT44(fVar156,fVar155),CONCAT44(fVar179,fVar192),4,1);
  uVar145 = NEON_ext(CONCAT44(fVar179,fVar192),CONCAT44(fVar156,fVar155),4,1);
  uVar105 = NEON_ext(CONCAT44(fVar149,fVar75),CONCAT44(fVar87,fVar25),4,1);
  uVar144 = NEON_ext(CONCAT44(fVar87,fVar25),CONCAT44(fVar149,fVar75),4,1);
  fVar103 = (float)uVar145 - fVar192;
  fVar115 = (float)((ulong)uVar145 >> 0x20) - fVar179;
  fVar117 = (float)uVar121 - fVar155;
  fVar118 = (float)((ulong)uVar121 >> 0x20) - fVar156;
  fVar120 = (float)uVar170 - fVar68;
  fVar130 = (float)((ulong)uVar170 >> 0x20) - fVar173;
  fVar135 = (float)uVar78 - fVar162;
  fVar140 = (float)((ulong)uVar78 >> 0x20) - fVar76;
  fVar157 = fVar77 - fVar68;
  fVar161 = fVar77 - fVar173;
  fVar162 = fVar77 - fVar162;
  fVar76 = fVar77 - fVar76;
  fVar67 = (float)uVar144 - fVar25;
  fVar72 = (float)((ulong)uVar144 >> 0x20) - fVar87;
  fVar73 = (float)uVar105 - fVar75;
  fVar74 = (float)((ulong)uVar105 >> 0x20) - fVar149;
  fVar150 = fVar88 - fVar192;
  fVar154 = fVar88 - fVar179;
  fVar155 = fVar88 - fVar155;
  fVar156 = fVar88 - fVar156;
  fVar25 = fVar89 - fVar25;
  fVar87 = fVar89 - fVar87;
  fVar75 = fVar89 - fVar75;
  fVar149 = fVar89 - fVar149;
  if (((0.0 <= fVar67 * (fVar157 * fVar62 - fVar150 * fVar55) +
               fVar120 * (fVar150 * fVar24 - fVar25 * fVar62) +
               fVar103 * (fVar25 * fVar55 - fVar157 * fVar24) &&
       0.0 <= fVar72 * (fVar161 * fVar62 - fVar154 * fVar55) +
              fVar130 * (fVar154 * fVar24 - fVar87 * fVar62) +
              fVar115 * (fVar87 * fVar55 - fVar161 * fVar24)) &&
      0.0 <= fVar73 * (fVar162 * fVar62 - fVar155 * fVar55) +
             fVar135 * (fVar155 * fVar24 - fVar75 * fVar62) +
             fVar117 * (fVar75 * fVar55 - fVar162 * fVar24)) &&
      0.0 <= fVar74 * (fVar76 * fVar62 - fVar156 * fVar55) +
             fVar140 * (fVar156 * fVar24 - fVar149 * fVar62) +
             fVar118 * (fVar149 * fVar55 - fVar76 * fVar24)) {
    fVar24 = fVar24 * (fVar89 - fVar196) + fVar55 * (fVar77 - fVar68) + fVar62 * (fVar88 - fVar192);
    fVar24 = fVar24 * fVar24;
  }
  else {
    auVar151._0_4_ = fVar25 * fVar25 + fVar157 * fVar157 + fVar150 * fVar150;
    auVar151._4_4_ = fVar87 * fVar87 + fVar161 * fVar161 + fVar154 * fVar154;
    auVar151._8_4_ = fVar75 * fVar75 + fVar162 * fVar162 + fVar155 * fVar155;
    auVar151._12_4_ = fVar149 * fVar149 + fVar76 * fVar76 + fVar156 * fVar156;
    auVar82._0_4_ = fVar67 * fVar67 + fVar120 * fVar120 + fVar103 * fVar103;
    auVar82._4_4_ = fVar72 * fVar72 + fVar130 * fVar130 + fVar115 * fVar115;
    auVar82._8_4_ = fVar73 * fVar73 + fVar135 * fVar135 + fVar117 * fVar117;
    auVar82._12_4_ = fVar74 * fVar74 + fVar140 * fVar140 + fVar118 * fVar118;
    auVar51 = NEON_frecpe(auVar82,4);
    auVar57 = NEON_frecps(auVar82,auVar51,4);
    auVar174._0_4_ = auVar51._0_4_ * auVar57._0_4_;
    auVar174._4_4_ = auVar51._4_4_ * auVar57._4_4_;
    auVar174._8_4_ = auVar51._8_4_ * auVar57._8_4_;
    auVar174._12_4_ = auVar51._12_4_ * auVar57._12_4_;
    iVar48 = -(uint)(auVar82._0_4_ == 0.0);
    iVar54 = -(uint)(auVar82._4_4_ == 0.0);
    iVar171 = -(uint)(auVar82._8_4_ == 0.0);
    iVar172 = -(uint)(auVar82._12_4_ == 0.0);
    auVar51 = NEON_frecps(auVar82,auVar174,4);
    fVar24 = auVar174._0_4_ * auVar51._0_4_;
    fVar55 = auVar174._4_4_ * auVar51._4_4_;
    fVar62 = auVar174._8_4_ * auVar51._8_4_;
    fVar77 = auVar174._12_4_ * auVar51._12_4_;
    fVar24 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                             CONCAT12((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                                      CONCAT11((byte)((uint)fVar24 >> 8) &
                                               ~(byte)((uint)iVar48 >> 8),
                                               SUB41(fVar24,0) & ~(byte)iVar48)));
    auVar80._0_8_ =
         CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                  CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10),
                           CONCAT15((byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar54 >> 8),
                                    CONCAT14(SUB41(fVar55,0) & ~(byte)iVar54,fVar24))));
    auVar80[8] = SUB41(fVar62,0) & ~(byte)iVar171;
    auVar80[9] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar171 >> 8);
    auVar80[10] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar171 >> 0x10);
    auVar80[0xb] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar171 >> 0x18);
    auVar83[0xc] = SUB41(fVar77,0) & ~(byte)iVar172;
    auVar83._0_12_ = auVar80;
    auVar83[0xd] = (byte)((uint)fVar77 >> 8) & ~(byte)((uint)iVar172 >> 8);
    auVar83[0xe] = (byte)((uint)fVar77 >> 0x10) & ~(byte)((uint)iVar172 >> 0x10);
    auVar83[0xf] = (byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar172 >> 0x18);
    auVar84._0_4_ = (fVar67 * fVar25 + fVar157 * fVar120 + fVar103 * fVar150) * fVar24;
    auVar84._4_4_ =
         (fVar72 * fVar87 + fVar161 * fVar130 + fVar115 * fVar154) *
         (float)((ulong)auVar80._0_8_ >> 0x20);
    auVar84._8_4_ = (fVar73 * fVar75 + fVar162 * fVar135 + fVar117 * fVar155) * auVar80._8_4_;
    auVar84._12_4_ = (fVar74 * fVar149 + fVar76 * fVar140 + fVar118 * fVar156) * auVar83._12_4_;
    auVar51 = NEON_fmov(0x3f800000,4);
    auVar51 = NEON_fminnm(auVar84,auVar51,4);
    auVar51 = NEON_fmax(auVar51,ZEXT816(0),4);
    fVar24 = auVar51._0_4_;
    fVar55 = auVar51._4_4_;
    fVar62 = auVar51._8_4_;
    fVar77 = auVar51._12_4_;
    fVar157 = fVar157 - fVar120 * fVar24;
    fVar161 = fVar161 - fVar130 * fVar55;
    fVar162 = fVar162 - fVar135 * fVar62;
    fVar76 = fVar76 - fVar140 * fVar77;
    fVar150 = fVar150 - fVar103 * fVar24;
    fVar154 = fVar154 - fVar115 * fVar55;
    fVar155 = fVar155 - fVar117 * fVar62;
    fVar156 = fVar156 - fVar118 * fVar77;
    fVar25 = fVar25 - fVar67 * fVar24;
    fVar87 = fVar87 - fVar72 * fVar55;
    fVar75 = fVar75 - fVar73 * fVar62;
    fVar149 = fVar149 - fVar74 * fVar77;
    auVar70._0_4_ = fVar25 * fVar25 + fVar157 * fVar157 + fVar150 * fVar150;
    auVar70._4_4_ = fVar87 * fVar87 + fVar161 * fVar161 + fVar154 * fVar154;
    auVar70._8_4_ = fVar75 * fVar75 + fVar162 * fVar162 + fVar155 * fVar155;
    auVar70._12_4_ = fVar149 * fVar149 + fVar76 * fVar76 + fVar156 * fVar156;
    auVar51 = NEON_fmin(auVar151,auVar70,4);
    fVar24 = (float)NEON_fminnmv(auVar51,4);
  }
  if (fVar27 * fVar27 < fVar24) {
    return 0x80;
  }
  auVar51 = *param_5;
  auVar151 = param_5[1];
  auVar106 = NEON_ext(auVar151,auVar151,8,1);
  auVar81 = NEON_ext(auVar51,auVar51,8,1);
  fVar87 = auVar51._0_4_;
  auVar57 = param_5[2];
  auVar158 = param_5[3];
  auVar175 = NEON_ext(auVar57,auVar57,8,1);
  auVar107 = NEON_ext(auVar158,auVar158,8,1);
  fVar55 = auVar51._4_4_;
  bVar29 = *(byte *)(param_7 + 4);
  auVar164._0_4_ = fVar63 + fVar87 * fVar49 + fVar55 * fVar104 + auVar81._0_4_ * fVar56;
  auVar164._4_4_ =
       fVar63 + auVar151._0_4_ * fVar49 + auVar151._4_4_ * fVar104 + auVar106._0_4_ * fVar56;
  auVar164._8_4_ =
       fVar63 + auVar57._0_4_ * fVar49 + auVar57._4_4_ * fVar104 + auVar175._0_4_ * fVar56;
  auVar164._12_4_ =
       fVar63 + auVar158._0_4_ * fVar49 + auVar158._4_4_ * fVar104 + auVar107._0_4_ * fVar56;
  uVar78 = *(undefined8 *)(*param_3 + 8);
  fVar155 = (float)uVar78;
  fVar76 = SUB84(uVar78,4);
  uVar144 = *(undefined8 *)*param_3;
  auVar98 = *param_3;
  auVar153 = *param_3;
  auVar167 = *param_3;
  fVar24 = *(float *)*param_3;
  fVar25 = *(float *)(*param_3 + 4);
  fVar75 = *(float *)(*param_3 + 8);
  fVar62 = (float)uVar144;
  fVar162 = SUB84(uVar144,4);
  bVar28 = bVar29 & 3;
  if ((auVar164._8_4_ <= fVar27 && (auVar164._0_4_ <= fVar27 && auVar164._4_4_ <= fVar26)) &&
      auVar164._12_4_ <= fVar26) {
    if ((bVar28 == 3) && ((~*param_11 & 3) != 0)) {
      return 0x80;
    }
    uVar21 = (uint)*param_11;
    uVar180 = 0xff00;
    uVar22 = 0xff0000;
    uVar20 = 0xff;
    uVar19 = 1;
    goto LAB_03071300;
  }
  if (bVar28 == 3) {
    return 0x80;
  }
  uVar20 = *param_13;
  param_6 = param_6 & 0xff;
  if ((param_6 == 4) && (bVar28 == 2)) {
    pbVar1 = (byte *)(param_7 + (ulong)(bVar29 >> 6));
    iVar54 = (uint)*pbVar1 - (uint)pbVar1[1];
    iVar48 = -iVar54;
    if (-1 < iVar54) {
      iVar48 = iVar54;
    }
    if (iVar48 == 2) {
      return 0x80;
    }
  }
  auVar95._0_4_ = fVar94 * fVar62;
  auVar95._4_4_ = fVar23 * fVar162;
  auVar95._8_4_ = fVar116 * fVar155;
  auVar95._12_4_ = param_4[3] * fVar76;
  auVar108 = NEON_ext(auVar95,auVar95,8,1);
  fVar94 = -(auVar108._0_4_ + auVar95._0_4_ + auVar95._4_4_);
  auVar99._0_4_ = fVar24 * fVar68;
  auVar99._4_4_ = fVar25 * fVar192;
  auVar99._8_4_ = fVar75 * fVar196;
  auVar99._12_4_ = fVar94 * fVar181;
  auVar108 = NEON_ext(auVar99,auVar99,8,1);
  if (auVar99._0_4_ + auVar99._4_4_ + auVar108._0_4_ + fVar94 <= -0.0001) {
    auVar90._0_4_ = fVar24 * fVar173;
    auVar90._4_4_ = fVar25 * fVar179;
    auVar90._8_4_ = fVar75 * auVar100._8_4_;
    auVar90._12_4_ = fVar94 * auVar100._12_4_;
    auVar100 = NEON_ext(auVar90,auVar90,8,1);
    fVar23 = auVar90._0_4_ + auVar90._4_4_ + auVar100._0_4_ + fVar94;
    bVar17 = -0.0001 < fVar23;
    if (fVar23 <= -0.0001) {
      auVar91._0_4_ = fVar24 * *(float *)param_9[2];
      auVar91._4_4_ = fVar25 * *(float *)(param_9[2] + 4);
      auVar91._8_4_ = fVar75 * *(float *)(param_9[2] + 8);
      auVar91._12_4_ = fVar94 * *(float *)(param_9[2] + 0xc);
      auVar100 = NEON_ext(auVar91,auVar91,8,1);
      fVar23 = auVar91._0_4_ + auVar91._4_4_ + auVar100._0_4_ + fVar94;
      bVar17 = bVar17 || -0.0001 < fVar23;
      if (fVar23 <= -0.0001) {
        auVar92._0_4_ = fVar24 * *(float *)param_9[3];
        auVar92._4_4_ = fVar25 * *(float *)(param_9[3] + 4);
        auVar92._8_4_ = fVar75 * *(float *)(param_9[3] + 8);
        auVar92._12_4_ = fVar94 * *(float *)(param_9[3] + 0xc);
        auVar100 = NEON_ext(auVar92,auVar92,8,1);
        bVar17 = bVar17 || -0.0001 < auVar92._0_4_ + auVar92._4_4_ + auVar100._0_4_ + fVar94;
      }
    }
    if (!bVar17) {
      return 0x80;
    }
  }
  auVar5._12_4_ = fVar76;
  auVar5._0_12_ = *(undefined1 (*) [12])*param_3;
  auVar6._12_4_ = fVar76;
  auVar6._0_12_ = *(undefined1 (*) [12])*param_3;
  auVar108 = NEON_ext(auVar5,auVar6,4,1);
  auVar7[9] = local_20[9];
  auVar7._0_9_ = *(unkbyte9 *)*param_8;
  auVar7[10] = local_20[10];
  auVar7[0xb] = local_20[0xb];
  auVar7[0xc] = local_20[0xc];
  auVar7[0xd] = local_20[0xd];
  auVar7[0xe] = local_20[0xe];
  auVar7[0xf] = local_20[0xf];
  auVar8[9] = local_20[9];
  auVar8._0_9_ = *(unkbyte9 *)*param_8;
  auVar8[10] = local_20[10];
  auVar8[0xb] = local_20[0xb];
  auVar8[0xc] = local_20[0xc];
  auVar8[0xd] = local_20[0xd];
  auVar8[0xe] = local_20[0xe];
  auVar8[0xf] = local_20[0xf];
  auVar100 = NEON_ext(auVar7,auVar8,4,1);
  fVar94 = auVar100._0_4_;
  fVar23 = auVar100._4_4_;
  fVar116 = auVar108._0_4_;
  fVar24 = auVar108._4_4_;
  fVar173 = fVar94 * fVar62 - fVar49 * fVar116;
  fVar179 = fVar23 * fVar162 - fVar104 * fVar24;
  auVar176._0_8_ = CONCAT44(fVar179,fVar173);
  auVar176._8_4_ = fVar49 * fVar155 - fVar56 * fVar62;
  auVar176._12_4_ = fVar104 * fVar76 - fVar63 * fVar162;
  auVar100 = NEON_ext(auVar176,auVar176,4,1);
  fVar26 = auVar100._0_4_;
  fVar75 = auVar100._4_4_;
  fVar25 = fVar173 * fVar173 + fVar26 * fVar26 + fVar75 * fVar75;
  if (fVar25 < 1.0000001e-06) {
    return 0x80;
  }
  pbVar1 = (byte *)(param_7 + (ulong)(bVar29 >> 6));
  bVar29 = *pbVar1;
  uVar180 = (uint)bVar29;
  bVar119 = (byte)_DAT_03889700;
  bVar126 = (byte)((ulong)_DAT_03889700 >> 8);
  bVar127 = (byte)((ulong)_DAT_03889700 >> 0x10);
  bVar128 = (byte)((ulong)_DAT_03889700 >> 0x18);
  bVar129 = (byte)((ulong)_DAT_03889700 >> 0x20);
  bVar131 = (byte)((ulong)_DAT_03889700 >> 0x28);
  bVar132 = (byte)((ulong)_DAT_03889700 >> 0x30);
  bVar133 = (byte)((ulong)_DAT_03889700 >> 0x38);
  bVar134 = (byte)_UNK_03889708;
  bVar136 = (byte)((ulong)_UNK_03889708 >> 8);
  bVar137 = (byte)((ulong)_UNK_03889708 >> 0x10);
  bVar138 = (byte)((ulong)_UNK_03889708 >> 0x18);
  bVar139 = (byte)((ulong)_UNK_03889708 >> 0x20);
  bVar141 = (byte)((ulong)_UNK_03889708 >> 0x28);
  bVar142 = (byte)((ulong)_UNK_03889708 >> 0x30);
  bVar143 = (byte)((ulong)_UNK_03889708 >> 0x38);
  if (bVar28 == 1) {
    uVar22 = 0;
    if (param_6 != 0) {
      uVar22 = (uVar180 + 1) / param_6;
    }
    pauVar4 = param_5 + bVar29;
    iVar54 = param_6 + uVar180 + -1;
    iVar171 = -(uint)(0.0 <= auVar164._0_4_);
    iVar172 = -(uint)(0.0 <= auVar164._4_4_);
    iVar189 = -(uint)(0.0 <= auVar164._8_4_);
    iVar190 = -(uint)(0.0 <= auVar164._12_4_);
    pauVar2 = param_5 + ((uVar180 + 1) - uVar22 * param_6);
    iVar48 = 0;
    if (param_6 != 0) {
      iVar48 = iVar54 / (int)param_6;
    }
    auVar102._0_4_ = *(float *)*pauVar2 - *(float *)*pauVar4;
    auVar102._4_4_ = *(float *)(*pauVar2 + 4) - *(float *)(*pauVar4 + 4);
    auVar102._8_4_ = *(float *)(*pauVar2 + 8) - *(float *)(*pauVar4 + 8);
    auVar102._12_4_ = *(float *)(*pauVar2 + 0xc) - *(float *)(*pauVar4 + 0xc);
    pauVar2 = param_5 + (iVar54 - iVar48 * param_6 & 0xff);
    auVar97._0_4_ = *(float *)*pauVar4 - *(float *)*pauVar2;
    auVar97._4_4_ = *(float *)(*pauVar4 + 4) - *(float *)(*pauVar2 + 4);
    auVar97._8_4_ = *(float *)(*pauVar4 + 8) - *(float *)(*pauVar2 + 8);
    auVar97._12_4_ = *(float *)(*pauVar4 + 0xc) - *(float *)(*pauVar2 + 0xc);
    iVar48 = CONCAT13((byte)((uint)iVar171 >> 0x18) & bVar128,
                      CONCAT12((byte)((uint)iVar171 >> 0x10) & bVar127,
                               CONCAT11((byte)((uint)iVar171 >> 8) & bVar126,(byte)iVar171 & bVar119
                                       )));
    auVar182._0_8_ =
         CONCAT17((byte)((uint)iVar172 >> 0x18) & bVar133,
                  CONCAT16((byte)((uint)iVar172 >> 0x10) & bVar132,
                           CONCAT15((byte)((uint)iVar172 >> 8) & bVar131,
                                    CONCAT14((byte)iVar172 & bVar129,iVar48))));
    auVar182[8] = (byte)iVar189 & bVar134;
    auVar182[9] = (byte)((uint)iVar189 >> 8) & bVar136;
    auVar182[10] = (byte)((uint)iVar189 >> 0x10) & bVar137;
    auVar182[0xb] = (byte)((uint)iVar189 >> 0x18) & bVar138;
    auVar183[0xc] = (byte)iVar190 & bVar139;
    auVar183._0_12_ = auVar182;
    auVar183[0xd] = (byte)((uint)iVar190 >> 8) & bVar141;
    auVar183[0xe] = (byte)((uint)iVar190 >> 0x10) & bVar142;
    auVar183[0xf] = (byte)((uint)iVar190 >> 0x18) & bVar143;
    uVar180 = iVar48 + (int)((ulong)auVar182._0_8_ >> 0x20) + auVar182._8_4_ + auVar183._12_4_;
    if (uVar180 != 0xf) {
      auVar108 = NEON_ext(auVar164,auVar164,4,1);
      auVar185._0_4_ = auVar164._0_4_ - auVar108._0_4_;
      auVar185._4_4_ = auVar164._4_4_ - auVar108._4_4_;
      auVar185._8_4_ = auVar164._8_4_ - auVar108._8_4_;
      auVar185._12_4_ = auVar164._12_4_ - auVar108._12_4_;
      auVar108 = NEON_frecpe(auVar185,4);
      iVar48 = -(uint)(auVar185._0_4_ == 0.0);
      iVar54 = -(uint)(auVar185._4_4_ == 0.0);
      iVar171 = -(uint)(auVar185._8_4_ == 0.0);
      iVar172 = -(uint)(auVar185._12_4_ == 0.0);
      auVar158 = NEON_frecps(auVar185,auVar108,4);
      uVar22 = (uVar180 >> 1 | uVar180 * 8) & 0xf;
      uVar21 = uVar22 & (uVar180 ^ 0xffffffff);
      auVar194._0_4_ = auVar108._0_4_ * auVar158._0_4_;
      auVar194._4_4_ = auVar108._4_4_ * auVar158._4_4_;
      auVar194._8_4_ = auVar108._8_4_ * auVar158._8_4_;
      auVar194._12_4_ = auVar108._12_4_ * auVar158._12_4_;
      uVar21 = (uVar21 & -uVar21) - 1;
      uVar180 = uVar180 & (uVar22 ^ 0xffffffff);
      auVar108 = NEON_frecps(auVar185,auVar194,4);
      uVar21 = uVar21 - (uVar21 >> 1 & 0x55555555);
      uVar22 = (uVar180 & -uVar180) - 1;
      uVar180 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
      uVar22 = uVar22 - (uVar22 >> 1 & 0x55555555);
      uVar22 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333);
      uVar180 = (uVar180 + (uVar180 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
      fVar68 = auVar164._0_4_ * auVar194._0_4_ * auVar108._0_4_;
      fVar196 = auVar164._4_4_ * auVar194._4_4_ * auVar108._4_4_;
      fVar181 = auVar164._8_4_ * auVar194._8_4_ * auVar108._8_4_;
      fVar149 = auVar164._12_4_ * auVar194._12_4_ * auVar108._12_4_;
      pauVar2 = param_5 + uVar180;
      fVar192 = (float)CONCAT13((byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                                CONCAT12((byte)((uint)fVar68 >> 0x10) &
                                         ~(byte)((uint)iVar48 >> 0x10),
                                         CONCAT11((byte)((uint)fVar68 >> 8) &
                                                  ~(byte)((uint)iVar48 >> 8),
                                                  SUB41(fVar68,0) & ~(byte)iVar48)));
      auVar193._0_8_ =
           CONCAT17((byte)((uint)fVar196 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                    CONCAT16((byte)((uint)fVar196 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10),
                             CONCAT15((byte)((uint)fVar196 >> 8) & ~(byte)((uint)iVar54 >> 8),
                                      CONCAT14(SUB41(fVar196,0) & ~(byte)iVar54,fVar192))));
      auVar193[8] = SUB41(fVar181,0) & ~(byte)iVar171;
      auVar193[9] = (byte)((uint)fVar181 >> 8) & ~(byte)((uint)iVar171 >> 8);
      auVar193[10] = (byte)((uint)fVar181 >> 0x10) & ~(byte)((uint)iVar171 >> 0x10);
      auVar193[0xb] = (byte)((uint)fVar181 >> 0x18) & ~(byte)((uint)iVar171 >> 0x18);
      auVar195[0xc] = SUB41(fVar149,0) & ~(byte)iVar172;
      auVar195._0_12_ = auVar193;
      auVar195[0xd] = (byte)((uint)fVar149 >> 8) & ~(byte)((uint)iVar172 >> 8);
      auVar195[0xe] = (byte)((uint)fVar149 >> 0x10) & ~(byte)((uint)iVar172 >> 0x10);
      auVar195[0xf] = (byte)((uint)fVar149 >> 0x18) & ~(byte)((uint)iVar172 >> 0x18);
      pauVar4 = param_5 + (uVar180 + 1 & 3);
      pauVar3 = param_5 + uVar22;
      param_5 = param_5 + (uVar22 + 1 & 3);
      auVar168._0_4_ = *(float *)*pauVar4 - *(float *)*pauVar2;
      auVar168._4_4_ = *(float *)(*pauVar4 + 4) - *(float *)(*pauVar2 + 4);
      auVar168._8_4_ = *(float *)(*pauVar4 + 8) - *(float *)(*pauVar2 + 8);
      auVar168._12_4_ = *(float *)(*pauVar4 + 0xc) - *(float *)(*pauVar2 + 0xc);
      fVar68 = (float)((ulong)auVar193._0_8_ >> 0x20);
      if (uVar180 == 1) {
        fVar196 = fVar68;
      }
      else if (uVar180 == 3) {
        fVar196 = auVar195._12_4_;
      }
      else if (uVar180 == 2) {
        fVar196 = auVar193._8_4_;
      }
      else {
        fVar196 = fVar192;
      }
      auVar191._0_4_ = *(float *)*param_5 - *(float *)*pauVar3;
      auVar191._4_4_ = *(float *)(*param_5 + 4) - *(float *)(*pauVar3 + 4);
      auVar191._8_4_ = *(float *)(*param_5 + 8) - *(float *)(*pauVar3 + 8);
      auVar191._12_4_ = *(float *)(*param_5 + 0xc) - *(float *)(*pauVar3 + 0xc);
      fVar181 = *(float *)*pauVar2 + auVar168._0_4_ * fVar196;
      fVar149 = *(float *)(*pauVar2 + 4) + auVar168._4_4_ * fVar196;
      fVar156 = *(float *)(*pauVar2 + 8) + auVar168._8_4_ * fVar196;
      if (uVar22 != 1) {
        if (uVar22 == 3) {
          fVar68 = auVar195._12_4_;
        }
        else if (uVar22 == 2) {
          fVar68 = auVar193._8_4_;
        }
        else {
          fVar68 = fVar192;
        }
      }
      fVar192 = *(float *)*pauVar3 + auVar191._0_4_ * fVar68;
      fVar67 = *(float *)(*pauVar3 + 4) + auVar191._4_4_ * fVar68;
      fVar72 = *(float *)(*pauVar3 + 8) + auVar191._8_4_ * fVar68;
      auVar188._0_4_ = fVar181 - fVar192;
      auVar188._4_4_ = fVar149 - fVar67;
      auVar188._8_4_ = fVar156 - fVar72;
      auVar188._12_4_ =
           (*(float *)(*pauVar2 + 0xc) + auVar168._12_4_ * fVar196) -
           (*(float *)(*pauVar3 + 0xc) + auVar191._12_4_ * fVar68);
      fVar68 = auVar188._0_4_ * auVar188._0_4_;
      fVar196 = auVar188._4_4_ * auVar188._4_4_;
      auVar15._4_4_ = fVar196;
      auVar15._0_4_ = fVar68;
      auVar15._8_4_ = auVar188._8_4_ * auVar188._8_4_;
      auVar15._12_4_ = auVar188._12_4_ * auVar188._12_4_;
      auVar16._4_4_ = fVar196;
      auVar16._0_4_ = fVar68;
      auVar16._8_4_ = auVar188._8_4_ * auVar188._8_4_;
      auVar16._12_4_ = auVar188._12_4_ * auVar188._12_4_;
      auVar108 = NEON_ext(auVar15,auVar16,8,1);
      if (fVar27 * fVar27 < fVar68 + fVar196 + auVar108._0_4_) {
        fVar181 = fVar181 * fVar62;
        fVar149 = fVar149 * fVar162;
        fVar156 = fVar156 * fVar155;
        fVar192 = fVar192 * fVar62;
        fVar67 = fVar67 * fVar162;
        fVar72 = fVar72 * fVar155;
        auVar96._0_8_ =
             CONCAT44(-(uint)(fVar72 + fVar192 + fVar67 < fVar156 + fVar181 + fVar149),
                      -(uint)(fVar72 + fVar192 + fVar67 < fVar156 + fVar181 + fVar149));
        auVar96._8_8_ = auVar96._0_8_;
        auVar101._8_8_ = auVar96._0_8_;
        auVar101._0_8_ = auVar96._0_8_;
        auVar97 = auVar188 ^ (auVar188 ^ auVar168) & auVar96;
        auVar102 = auVar191 ^ (auVar191 ^ auVar188) & auVar101;
      }
    }
    auVar108 = NEON_ext(auVar102,auVar102,4,1);
    uVar105 = NEON_ext(auVar100._0_8_,auVar176._0_8_,4,1);
    auVar158 = NEON_ext(auVar97,auVar97,4,1);
    fVar181 = auVar102._0_4_;
    fVar149 = auVar102._4_4_;
    fVar72 = (float)((ulong)uVar105 >> 0x20);
    fVar156 = auVar102._8_4_;
    fVar67 = auVar102._12_4_;
    fVar27 = auVar97._0_4_;
    fVar68 = auVar97._4_4_;
    fVar192 = auVar97._8_4_;
    fVar196 = auVar97._12_4_;
    auVar184._0_4_ = (float)uVar105 * fVar181 - fVar26 * auVar108._0_4_;
    auVar184._4_4_ = fVar72 * fVar149 - fVar75 * auVar108._4_4_;
    auVar184._8_4_ = fVar26 * fVar156 - fVar173 * fVar181;
    auVar184._12_4_ = fVar75 * fVar67 - fVar179 * fVar149;
    auVar100 = NEON_ext(auVar184,auVar184,4,1);
    auVar165._0_4_ = (float)uVar105 * fVar27 - fVar26 * auVar158._0_4_;
    auVar165._4_4_ = fVar72 * fVar68 - fVar75 * auVar158._4_4_;
    auVar165._8_4_ = fVar26 * fVar192 - fVar173 * fVar27;
    auVar165._12_4_ = fVar75 * fVar196 - fVar179 * fVar68;
    fVar179 = auVar100._0_4_;
    fVar72 = auVar100._4_4_;
    auVar100 = NEON_ext(auVar165,auVar165,4,1);
    fVar73 = fVar179 * fVar179 + fVar72 * fVar72 + auVar184._0_4_ * auVar184._0_4_;
    fVar74 = fVar179 * fVar179 + fVar72 * fVar72 + auVar184._0_4_ * auVar184._0_4_;
    uVar105 = CONCAT44(fVar74,fVar73);
    auVar166._0_4_ = fVar181 * fVar181;
    auVar166._4_4_ = fVar149 * fVar149;
    auVar166._8_4_ = fVar156 * fVar156;
    auVar166._12_4_ = fVar67 * fVar67;
    auVar108 = NEON_ext(auVar166,auVar166,8,1);
    if (fVar25 * (auVar108._0_4_ + auVar166._0_4_ + auVar166._4_4_) * 1.0000001e-06 <= fVar73) {
      uVar121 = NEON_frsqrte(uVar105,4);
      fVar181 = (float)uVar121;
      fVar149 = (float)((ulong)uVar121 >> 0x20);
      uVar121 = NEON_frsqrts(uVar105,CONCAT44(fVar149 * fVar149,fVar181 * fVar181),4);
      fVar181 = fVar181 * (float)uVar121;
      fVar149 = fVar149 * (float)((ulong)uVar121 >> 0x20);
      iVar48 = -(uint)(fVar73 <= 0.0);
      iVar54 = -(uint)(fVar74 <= 0.0);
      uVar105 = NEON_frsqrts(uVar105,CONCAT44(fVar149 * fVar149,fVar181 * fVar181),4);
      fVar181 = (float)uVar105 * fVar181;
      fVar149 = (float)((ulong)uVar105 >> 0x20) * fVar149;
      fVar181 = (float)CONCAT13((byte)((uint)fVar181 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                                CONCAT12((byte)((uint)fVar181 >> 0x10) &
                                         ~(byte)((uint)iVar48 >> 0x10),
                                         CONCAT11((byte)((uint)fVar181 >> 8) &
                                                  ~(byte)((uint)iVar48 >> 8),
                                                  SUB41(fVar181,0) & ~(byte)iVar48)));
      auVar167._0_4_ = fVar179 * fVar181;
      fVar179 = (float)(CONCAT17((byte)((uint)fVar149 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                                 CONCAT16((byte)((uint)fVar149 >> 0x10) &
                                          ~(byte)((uint)iVar54 >> 0x10),
                                          CONCAT15((byte)((uint)fVar149 >> 8) &
                                                   ~(byte)((uint)iVar54 >> 8),
                                                   CONCAT14(SUB41(fVar149,0) & ~(byte)iVar54,fVar181
                                                           )))) >> 0x20);
      auVar167._4_4_ = fVar72 * fVar179;
      auVar167._8_4_ = auVar184._0_4_ * fVar181;
      auVar167._12_4_ = auVar184._4_4_ * fVar179;
    }
    fVar179 = auVar100._0_4_;
    fVar181 = auVar100._4_4_;
    fVar149 = auVar165._0_4_ * auVar165._0_4_ + fVar179 * fVar179 + fVar181 * fVar181;
    fVar156 = auVar165._0_4_ * auVar165._0_4_ + fVar179 * fVar179 + fVar181 * fVar181;
    uVar105 = CONCAT44(fVar156,fVar149);
    auVar152._0_4_ = fVar27 * fVar27;
    auVar152._4_4_ = fVar68 * fVar68;
    auVar152._8_4_ = fVar192 * fVar192;
    auVar152._12_4_ = fVar196 * fVar196;
    auVar100 = NEON_ext(auVar152,auVar152,8,1);
    if (fVar25 * (auVar100._0_4_ + auVar152._0_4_ + auVar152._4_4_) * 1.0000001e-06 <= fVar149) {
      uVar121 = NEON_frsqrte(uVar105,4);
      fVar27 = (float)uVar121;
      fVar25 = (float)((ulong)uVar121 >> 0x20);
      uVar121 = NEON_frsqrts(uVar105,CONCAT44(fVar25 * fVar25,fVar27 * fVar27),4);
      fVar27 = fVar27 * (float)uVar121;
      fVar25 = fVar25 * (float)((ulong)uVar121 >> 0x20);
      iVar48 = -(uint)(fVar149 <= 0.0);
      iVar54 = -(uint)(fVar156 <= 0.0);
      uVar105 = NEON_frsqrts(uVar105,CONCAT44(fVar25 * fVar25,fVar27 * fVar27),4);
      fVar27 = (float)uVar105 * fVar27;
      fVar25 = (float)((ulong)uVar105 >> 0x20) * fVar25;
      fVar27 = (float)CONCAT13((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                               CONCAT12((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar27 >> 8) &
                                                  ~(byte)((uint)iVar48 >> 8),
                                                  SUB41(fVar27,0) & ~(byte)iVar48)));
      auVar153._0_4_ = fVar179 * fVar27;
      fVar25 = (float)(CONCAT17((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                                CONCAT16((byte)((uint)fVar25 >> 0x10) &
                                         ~(byte)((uint)iVar54 >> 0x10),
                                         CONCAT15((byte)((uint)fVar25 >> 8) &
                                                  ~(byte)((uint)iVar54 >> 8),
                                                  CONCAT14(SUB41(fVar25,0) & ~(byte)iVar54,fVar27)))
                               ) >> 0x20);
      auVar153._4_4_ = fVar181 * fVar25;
      auVar153._8_4_ = auVar165._0_4_ * fVar27;
      auVar153._12_4_ = auVar165._4_4_ * fVar25;
    }
    auVar108 = NEON_ext(auVar167,auVar167,4,1);
    fVar27 = auVar167._0_4_;
    fVar25 = auVar167._4_4_;
    auVar159._0_4_ = auVar108._0_4_ * fVar62 - fVar116 * fVar27;
    auVar159._4_4_ = auVar108._4_4_ * fVar162 - fVar24 * fVar25;
    auVar159._8_4_ = fVar27 * fVar155 - fVar62 * auVar167._8_4_;
    auVar159._12_4_ = fVar25 * fVar76 - fVar162 * auVar167._12_4_;
    auVar100 = NEON_ext(auVar159,auVar159,4,1);
    fVar179 = auVar100._0_4_;
    fVar68 = auVar100._4_4_;
    if (1.0000001e-06 <= auVar159._0_4_ * auVar159._0_4_ + fVar179 * fVar179 + fVar68 * fVar68) {
      auVar186._0_4_ = fVar94 * fVar27 - fVar49 * auVar108._0_4_;
      auVar186._4_4_ = fVar23 * fVar25 - fVar104 * auVar108._4_4_;
      auVar186._8_4_ = fVar49 * auVar167._8_4_ - fVar56 * fVar27;
      auVar186._12_4_ = fVar104 * auVar167._12_4_ - fVar63 * fVar25;
      auVar100 = NEON_ext(auVar186,auVar186,4,1);
      fVar27 = auVar100._0_4_;
      auVar187._0_4_ = fVar27 * fVar27;
      fVar25 = auVar100._4_4_;
      auVar187._4_4_ = fVar25 * fVar25;
      auVar187._8_4_ = auVar186._0_4_ * auVar186._0_4_;
      auVar187._12_4_ = auVar186._4_4_ * auVar186._4_4_;
      auVar100 = NEON_ext(auVar187,auVar187,8,1);
      if (1.0000001e-06 <= auVar100._0_4_ + auVar187._0_4_ + auVar187._4_4_) {
        iVar54 = -(uint)(fVar173 * auVar159._0_4_ + fVar26 * fVar179 + fVar75 * fVar68 < 0.0);
        iVar171 = -(uint)(fVar173 * auVar159._0_4_ + fVar26 * fVar179 + fVar75 * fVar68 < 0.0);
        iVar172 = -(uint)(fVar173 * auVar186._0_4_ + fVar26 * fVar27 + fVar75 * fVar25 < 0.0);
        iVar189 = -(uint)(fVar173 * auVar186._0_4_ + fVar26 * fVar27 + fVar75 * fVar25 < 0.0);
        bVar28 = (byte)((uint)iVar54 >> 8);
        bVar40 = (byte)((uint)iVar172 >> 8);
        bVar29 = (byte)((uint)iVar54 >> 0x10);
        bVar43 = (byte)((uint)iVar172 >> 0x10);
        bVar30 = (byte)((uint)iVar54 >> 0x18);
        bVar44 = (byte)((uint)iVar172 >> 0x18);
        bVar31 = (byte)((uint)iVar171 >> 8);
        bVar59 = (byte)((uint)iVar189 >> 8);
        bVar34 = (byte)((uint)iVar171 >> 0x10);
        bVar60 = (byte)((uint)iVar189 >> 0x10);
        bVar37 = (byte)((uint)iVar171 >> 0x18);
        bVar61 = (byte)((uint)iVar189 >> 0x18);
        uVar50 = CONCAT17(bVar61 | bVar37,(uint7)((bVar44 | bVar30) & 0x80) << 0x18) &
                 0x80ffffffffffffff;
        local_10._0_3_ = auVar167._0_3_;
        local_10[3] = (byte)(uVar50 >> 0x18) ^ auVar167[3];
        local_10[4] = auVar167[4];
        local_10[5] = auVar167[5];
        local_10[6] = auVar167[6];
        local_10[7] = (byte)(uVar50 >> 0x38) ^ auVar167[7];
        auVar160[8] = auVar167[8];
        auVar160._0_8_ = local_10._0_8_;
        auVar160[9] = auVar167[9];
        auVar160[10] = auVar167[10];
        auVar160[0xb] = (bVar44 | bVar30) & 0x80 ^ auVar167[0xb];
        auVar160[0xc] = auVar167[0xc];
        auVar160[0xd] = auVar167[0xd];
        auVar160[0xe] = auVar167[0xe];
        auVar160[0xf] = (bVar61 | bVar37) & 0x80 ^ auVar167[0xf];
        iVar48 = CONCAT13((bVar44 ^ bVar30) & bVar128,
                          CONCAT12((bVar43 ^ bVar29) & bVar127,
                                   CONCAT11((bVar40 ^ bVar28) & bVar126,
                                            ((byte)iVar172 ^ (byte)iVar54) & bVar119)));
        auVar163._0_8_ =
             CONCAT17((bVar61 ^ bVar37) & bVar133,
                      CONCAT16((bVar60 ^ bVar34) & bVar132,
                               CONCAT15((bVar59 ^ bVar31) & bVar131,
                                        CONCAT14(((byte)iVar189 ^ (byte)iVar171) & bVar129,iVar48)))
                     );
        auVar163[8] = ((byte)iVar172 ^ (byte)iVar54) & bVar134;
        auVar163[9] = (bVar40 ^ bVar28) & bVar136;
        auVar163[10] = (bVar43 ^ bVar29) & bVar137;
        auVar163[0xb] = (bVar44 ^ bVar30) & bVar138;
        auVar169[0xc] = ((byte)iVar189 ^ (byte)iVar171) & bVar139;
        auVar169._0_12_ = auVar163;
        auVar169[0xd] = (bVar59 ^ bVar31) & bVar141;
        auVar169[0xe] = (bVar60 ^ bVar34) & bVar142;
        auVar169[0xf] = (bVar61 ^ bVar37) & bVar143;
        local_10._8_8_ = auVar160._8_8_;
        bVar17 = iVar48 + (int)((ulong)auVar163._0_8_ >> 0x20) + auVar163._8_4_ + auVar169._12_4_ ==
                 0;
      }
      else {
        bVar17 = true;
        local_10._8_8_ = local_20._8_8_;
        local_10._0_8_ = local_20._0_8_;
      }
    }
    else {
      bVar17 = true;
      local_10._8_8_ = uVar78;
      local_10._0_8_ = uVar144;
      auVar160 = *param_3;
    }
    auVar108 = NEON_ext(auVar153,auVar153,4,1);
    fVar27 = auVar153._0_4_;
    fVar25 = auVar153._4_4_;
    auVar146._0_4_ = auVar108._0_4_ * fVar62 - fVar116 * fVar27;
    auVar146._4_4_ = auVar108._4_4_ * fVar162 - fVar24 * fVar25;
    auVar146._8_4_ = fVar27 * fVar155 - fVar62 * auVar153._8_4_;
    auVar146._12_4_ = fVar25 * fVar76 - fVar162 * auVar153._12_4_;
    auVar100 = NEON_ext(auVar146,auVar146,4,1);
    fVar116 = auVar100._0_4_;
    fVar24 = auVar100._4_4_;
    if (1.0000001e-06 <= auVar146._0_4_ * auVar146._0_4_ + fVar116 * fVar116 + fVar24 * fVar24) {
      auVar177._0_4_ = fVar94 * fVar27 - fVar49 * auVar108._0_4_;
      auVar177._4_4_ = fVar23 * fVar25 - fVar104 * auVar108._4_4_;
      auVar177._8_4_ = fVar49 * auVar153._8_4_ - fVar56 * fVar27;
      auVar177._12_4_ = fVar104 * auVar153._12_4_ - fVar63 * fVar25;
      auVar100 = NEON_ext(auVar177,auVar177,4,1);
      fVar27 = auVar100._0_4_;
      auVar178._0_4_ = fVar27 * fVar27;
      fVar25 = auVar100._4_4_;
      auVar178._4_4_ = fVar25 * fVar25;
      auVar178._8_4_ = auVar177._0_4_ * auVar177._0_4_;
      auVar178._12_4_ = auVar177._4_4_ * auVar177._4_4_;
      auVar100 = NEON_ext(auVar178,auVar178,8,1);
      if (1.0000001e-06 <= auVar100._0_4_ + auVar178._0_4_ + auVar178._4_4_) {
        iVar54 = -(uint)(fVar173 * auVar146._0_4_ + fVar26 * fVar116 + fVar75 * fVar24 < 0.0);
        iVar171 = -(uint)(fVar173 * auVar146._0_4_ + fVar26 * fVar116 + fVar75 * fVar24 < 0.0);
        iVar172 = -(uint)(fVar173 * auVar177._0_4_ + fVar26 * fVar27 + fVar75 * fVar25 < 0.0);
        iVar189 = -(uint)(fVar173 * auVar177._0_4_ + fVar26 * fVar27 + fVar75 * fVar25 < 0.0);
        bVar28 = (byte)((uint)iVar54 >> 8);
        bVar40 = (byte)((uint)iVar172 >> 8);
        bVar29 = (byte)((uint)iVar54 >> 0x10);
        bVar43 = (byte)((uint)iVar172 >> 0x10);
        bVar30 = (byte)((uint)iVar54 >> 0x18);
        bVar44 = (byte)((uint)iVar172 >> 0x18);
        bVar31 = (byte)((uint)iVar171 >> 8);
        bVar59 = (byte)((uint)iVar189 >> 8);
        bVar34 = (byte)((uint)iVar171 >> 0x10);
        bVar60 = (byte)((uint)iVar189 >> 0x10);
        bVar37 = (byte)((uint)iVar171 >> 0x18);
        bVar61 = (byte)((uint)iVar189 >> 0x18);
        iVar48 = CONCAT13((bVar44 ^ bVar30) & bVar128,
                          CONCAT12((bVar43 ^ bVar29) & bVar127,
                                   CONCAT11((bVar40 ^ bVar28) & bVar126,
                                            ((byte)iVar172 ^ (byte)iVar54) & bVar119)));
        auVar122._0_8_ =
             CONCAT17((bVar61 ^ bVar37) & bVar133,
                      CONCAT16((bVar60 ^ bVar34) & bVar132,
                               CONCAT15((bVar59 ^ bVar31) & bVar131,
                                        CONCAT14(((byte)iVar189 ^ (byte)iVar171) & bVar129,iVar48)))
                     );
        auVar122[8] = ((byte)iVar172 ^ (byte)iVar54) & bVar134;
        auVar122[9] = (bVar40 ^ bVar28) & bVar136;
        auVar122[10] = (bVar43 ^ bVar29) & bVar137;
        auVar122[0xb] = (bVar44 ^ bVar30) & bVar138;
        auVar125[0xc] = ((byte)iVar189 ^ (byte)iVar171) & bVar139;
        auVar125._0_12_ = auVar122;
        auVar125[0xd] = (bVar59 ^ bVar31) & bVar141;
        auVar125[0xe] = (bVar60 ^ bVar34) & bVar142;
        auVar125[0xf] = (bVar61 ^ bVar37) & bVar143;
        uVar50 = CONCAT17(bVar61 | bVar37,(uint7)((bVar44 | bVar30) & 0x80) << 0x18) &
                 0x80ffffffffffffff;
        bVar18 = iVar48 + (int)((ulong)auVar122._0_8_ >> 0x20) + auVar122._8_4_ + auVar125._12_4_ ==
                 0;
        local_20._0_3_ = auVar153._0_3_;
        local_20[3] = (byte)(uVar50 >> 0x18) ^ auVar153[3];
        local_20[4] = auVar153[4];
        local_20[5] = auVar153[5];
        local_20[6] = auVar153[6];
        local_20[7] = (byte)(uVar50 >> 0x38) ^ auVar153[7];
        auVar112[8] = auVar153[8];
        auVar112._0_8_ = local_20._0_8_;
        auVar112[9] = auVar153[9];
        auVar112[10] = auVar153[10];
        auVar112[0xb] = (bVar44 | bVar30) & 0x80 ^ auVar153[0xb];
        auVar112[0xc] = auVar153[0xc];
        auVar112[0xd] = auVar153[0xd];
        auVar112[0xe] = auVar153[0xe];
        auVar112[0xf] = (bVar61 | bVar37) & 0x80 ^ auVar153[0xf];
        local_20._8_8_ = auVar112._8_8_;
        if (!(bool)(bVar17 | bVar18)) {
          return 0x80;
        }
      }
      else {
        bVar18 = true;
      }
    }
    else {
      bVar18 = true;
      local_20._8_8_ = uVar78;
      local_20._0_8_ = uVar144;
      auVar112 = *param_3;
    }
    if ((bool)(bVar17 & bVar18)) {
      auVar123._0_4_ = fVar49 * auVar160._0_4_;
      auVar123._4_4_ = fVar104 * auVar160._4_4_;
      auVar123._8_4_ = fVar56 * auVar160._8_4_;
      auVar123._12_4_ = fVar63 * auVar160._12_4_;
      auVar100 = NEON_ext(auVar123,auVar123,8,1);
      auVar109._0_4_ = fVar49 * auVar112._0_4_;
      auVar109._4_4_ = fVar104 * auVar112._4_4_;
      auVar109._8_4_ = fVar56 * auVar112._8_4_;
      auVar109._12_4_ = fVar63 * auVar112._12_4_;
      auVar108 = NEON_ext(auVar109,auVar109,8,1);
      bVar17 = auVar100._0_4_ + auVar123._0_4_ + auVar123._4_4_ <
               auVar108._0_4_ + auVar109._0_4_ + auVar109._4_4_;
    }
    iVar48 = -(uint)bVar17;
    auVar110._4_4_ = iVar48;
    auVar110._0_4_ = iVar48;
    auVar110._8_4_ = iVar48;
    auVar110._12_4_ = iVar48;
    pauVar2 = &local_10;
    if (!bVar17) {
      pauVar2 = &local_20;
    }
    uVar180 = 0xff00;
    uVar19 = 3;
    auVar111 = auVar97 ^ (auVar97 ^ auVar102) & auVar110;
    auVar98 = *pauVar2;
    uVar22 = 0xff0000;
    uVar21 = 0x42;
  }
  else {
    bVar28 = pbVar1[1];
    iVar54 = bVar28 - uVar180;
    iVar48 = -iVar54;
    if (-1 < iVar54) {
      iVar48 = iVar54;
    }
    uVar21 = uVar180;
    uVar22 = (uint)bVar28;
    if (bVar28 < uVar180 == (iVar48 != 1)) {
      uVar21 = (uint)bVar28;
      uVar22 = uVar180;
    }
    uVar180 = uVar20 & 0xffffff00;
    uVar19 = 0;
    pauVar2 = param_5 + uVar22;
    uVar22 = uVar20 & 0xffff0000;
    param_5 = param_5 + uVar21;
    auVar111._0_4_ = *(float *)*param_5 - *(float *)*pauVar2;
    auVar111._4_4_ = *(float *)(*param_5 + 4) - *(float *)(*pauVar2 + 4);
    auVar111._8_4_ = *(float *)(*param_5 + 8) - *(float *)(*pauVar2 + 8);
    auVar111._12_4_ = *(float *)(*param_5 + 0xc) - *(float *)(*pauVar2 + 0xc);
    uVar21 = uVar20;
  }
  auVar100 = NEON_ext(auVar111,auVar111,4,1);
  fVar116 = auVar100._0_4_;
  fVar24 = auVar100._4_4_;
  fVar27 = auVar111._0_4_;
  fVar25 = auVar111._4_4_;
  fVar26 = auVar111._8_4_;
  fVar75 = auVar111._12_4_;
  fVar94 = fVar49 * fVar116 - fVar94 * fVar27;
  fVar23 = fVar104 * fVar24 - fVar23 * fVar25;
  auVar124._0_8_ = CONCAT44(fVar23,fVar94);
  auVar124._8_4_ = fVar56 * fVar27 - fVar49 * fVar26;
  auVar124._12_4_ = fVar63 * fVar25 - fVar104 * fVar75;
  auVar100 = NEON_ext(auVar124,auVar124,4,1);
  fVar49 = auVar100._0_4_;
  fVar104 = auVar100._4_4_;
  auVar147._0_4_ = fVar27 * fVar27;
  auVar147._4_4_ = fVar25 * fVar25;
  auVar147._8_4_ = fVar26 * fVar26;
  auVar147._12_4_ = fVar75 * fVar75;
  auVar108 = NEON_ext(auVar147,auVar147,8,1);
  uVar20 = uVar20 >> 0x18;
  if ((auVar108._0_4_ + auVar147._0_4_ + auVar147._4_4_) * 0.000304586 <=
      fVar49 * fVar49 + fVar104 * fVar104 + fVar94 * fVar94) {
    fVar56 = auVar151._0_4_ - fVar87;
    fVar76 = auVar151._4_4_ - fVar55;
    uVar32 = SUB41(fVar76,0);
    uVar35 = (undefined1)((uint)fVar76 >> 8);
    uVar38 = (undefined1)((uint)fVar76 >> 0x10);
    uVar41 = (undefined1)((uint)fVar76 >> 0x18);
    fVar173 = auVar151._8_4_ - auVar51._8_4_;
    uVar33 = (undefined1)((uint)fVar173 >> 8);
    uVar36 = (undefined1)((uint)fVar173 >> 0x10);
    uVar39 = (undefined1)((uint)fVar173 >> 0x18);
    fVar179 = auVar151._12_4_ - auVar51._12_4_;
    uVar42 = (undefined1)((uint)fVar179 >> 8);
    uVar45 = (undefined1)((uint)fVar179 >> 0x10);
    uVar46 = (undefined1)((uint)fVar179 >> 0x18);
    auVar58._0_4_ = auVar57._0_4_ - fVar87;
    auVar58._4_4_ = auVar57._4_4_ - fVar55;
    auVar58._8_4_ = auVar57._8_4_ - auVar51._8_4_;
    auVar58._12_4_ = auVar57._12_4_ - auVar51._12_4_;
    auVar9[4] = uVar32;
    auVar9._0_4_ = fVar56;
    auVar9[5] = uVar35;
    auVar9[6] = uVar38;
    auVar9[7] = uVar41;
    auVar9[8] = SUB41(fVar173,0);
    auVar9[9] = uVar33;
    auVar9[10] = uVar36;
    auVar9[0xb] = uVar39;
    auVar9[0xc] = SUB41(fVar179,0);
    auVar9[0xd] = uVar42;
    auVar9[0xe] = uVar45;
    auVar9[0xf] = uVar46;
    auVar10[4] = uVar32;
    auVar10._0_4_ = fVar56;
    auVar10[5] = uVar35;
    auVar10[6] = uVar38;
    auVar10[7] = uVar41;
    auVar10[8] = SUB41(fVar173,0);
    auVar10[9] = uVar33;
    auVar10[10] = uVar36;
    auVar10[0xb] = uVar39;
    auVar10[0xc] = SUB41(fVar179,0);
    auVar10[0xd] = uVar42;
    auVar10[0xe] = uVar45;
    auVar10[0xf] = uVar46;
    auVar51 = NEON_ext(auVar9,auVar10,4,1);
    auVar108 = NEON_ext(auVar58,auVar58,4,1);
    fVar63 = fVar56 * auVar108._0_4_ - auVar58._0_4_ * auVar51._0_4_;
    fVar87 = fVar76 * auVar108._4_4_ - auVar58._4_4_ * auVar51._4_4_;
    uVar33 = SUB41(fVar87,0);
    uVar36 = (undefined1)((uint)fVar87 >> 8);
    uVar39 = (undefined1)((uint)fVar87 >> 0x10);
    uVar42 = (undefined1)((uint)fVar87 >> 0x18);
    fVar87 = fVar173 * auVar58._0_4_ - auVar58._8_4_ * fVar56;
    uVar45 = (undefined1)((uint)fVar87 >> 8);
    uVar46 = (undefined1)((uint)fVar87 >> 0x10);
    uVar47 = (undefined1)((uint)fVar87 >> 0x18);
    fVar56 = fVar179 * auVar58._4_4_ -
             auVar58._12_4_ *
             (float)(CONCAT17(uVar41,CONCAT16(uVar38,CONCAT15(uVar35,CONCAT14(uVar32,fVar56)))) >>
                    0x20);
    uVar32 = (undefined1)((uint)fVar56 >> 8);
    uVar35 = (undefined1)((uint)fVar56 >> 0x10);
    uVar38 = (undefined1)((uint)fVar56 >> 0x18);
    auVar11[4] = uVar33;
    auVar11._0_4_ = fVar63;
    auVar11[5] = uVar36;
    auVar11[6] = uVar39;
    auVar11[7] = uVar42;
    auVar11[8] = SUB41(fVar87,0);
    auVar11[9] = uVar45;
    auVar11[10] = uVar46;
    auVar11[0xb] = uVar47;
    auVar11[0xc] = SUB41(fVar56,0);
    auVar11[0xd] = uVar32;
    auVar11[0xe] = uVar35;
    auVar11[0xf] = uVar38;
    auVar12[4] = uVar33;
    auVar12._0_4_ = fVar63;
    auVar12[5] = uVar36;
    auVar12[6] = uVar39;
    auVar12[7] = uVar42;
    auVar12[8] = SUB41(fVar87,0);
    auVar12[9] = uVar45;
    auVar12[10] = uVar46;
    auVar12[0xb] = uVar47;
    auVar12[0xc] = SUB41(fVar56,0);
    auVar12[0xd] = uVar32;
    auVar12[0xe] = uVar35;
    auVar12[0xf] = uVar38;
    auVar51 = NEON_ext(auVar11,auVar12,4,1);
    fVar55 = auVar51._0_4_;
    fVar179 = auVar51._4_4_;
    fVar56 = fVar55 * fVar55 + fVar179 * fVar179 + fVar63 * fVar63;
    fVar76 = fVar55 * fVar55 + fVar179 * fVar179 + fVar63 * fVar63;
    uVar32 = SUB41(fVar76,0);
    uVar35 = (undefined1)((uint)fVar76 >> 8);
    uVar38 = (undefined1)((uint)fVar76 >> 0x10);
    uVar41 = (undefined1)((uint)fVar76 >> 0x18);
    uVar144 = NEON_frsqrte(CONCAT17(uVar41,CONCAT16(uVar38,CONCAT15(uVar35,CONCAT14(uVar32,fVar56)))
                                   ),4);
    fVar87 = (float)uVar144;
    fVar173 = (float)((ulong)uVar144 >> 0x20);
    uVar144 = NEON_frsqrts(CONCAT17(uVar41,CONCAT16(uVar38,CONCAT15(uVar35,CONCAT14(uVar32,fVar56)))
                                   ),CONCAT44(fVar173 * fVar173,fVar87 * fVar87),4);
    fVar87 = fVar87 * (float)uVar144;
    fVar173 = fVar173 * (float)((ulong)uVar144 >> 0x20);
    iVar48 = -(uint)(fVar56 <= 0.0);
    iVar54 = -(uint)(fVar76 <= 0.0);
    uVar144 = NEON_frsqrts(CONCAT17(uVar41,CONCAT16(uVar38,CONCAT15(uVar35,CONCAT14(uVar32,fVar56)))
                                   ),CONCAT44(fVar173 * fVar173,fVar87 * fVar87),4);
    fVar87 = (float)uVar144 * fVar87;
    fVar173 = (float)((ulong)uVar144 >> 0x20) * fVar173;
    bVar28 = SUB41(fVar87,0) & ~(byte)iVar48;
    bVar29 = (byte)((uint)fVar87 >> 8) & ~(byte)((uint)iVar48 >> 8);
    bVar30 = (byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
    bVar31 = (byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
    bVar34 = SUB41(fVar173,0) & ~(byte)iVar54;
    bVar37 = (byte)((uint)fVar173 >> 8) & ~(byte)((uint)iVar54 >> 8);
    bVar40 = (byte)((uint)fVar173 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10);
    bVar43 = (byte)((uint)fVar173 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
    fVar55 = fVar55 * (float)CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
    fVar179 = fVar179 * (float)CONCAT13(bVar43,CONCAT12(bVar40,CONCAT11(bVar37,bVar34)));
    uVar32 = SUB41(fVar179,0);
    uVar35 = (undefined1)((uint)fVar179 >> 8);
    uVar38 = (undefined1)((uint)fVar179 >> 0x10);
    bVar44 = (byte)((uint)fVar179 >> 0x18);
    fVar56 = fVar63 * (float)CONCAT13(bVar31,CONCAT12(bVar30,CONCAT11(bVar29,bVar28)));
    uVar41 = SUB41(fVar56,0);
    uVar45 = (undefined1)((uint)fVar56 >> 8);
    uVar46 = (undefined1)((uint)fVar56 >> 0x10);
    bVar28 = (byte)((uint)fVar56 >> 0x18);
    fVar63 = (float)(CONCAT17(uVar42,CONCAT16(uVar39,CONCAT15(uVar36,CONCAT14(uVar33,fVar63)))) >>
                    0x20) * (float)CONCAT13(bVar43,CONCAT12(bVar40,CONCAT11(bVar37,bVar34)));
    uVar33 = SUB41(fVar63,0);
    uVar36 = (undefined1)((uint)fVar63 >> 8);
    uVar39 = (undefined1)((uint)fVar63 >> 0x10);
    bVar29 = (byte)((uint)fVar63 >> 0x18);
    auVar13[4] = uVar32;
    auVar13._0_4_ = fVar55;
    auVar13[5] = uVar35;
    auVar13[6] = uVar38;
    auVar13[7] = bVar44;
    auVar13[8] = uVar41;
    auVar13[9] = uVar45;
    auVar13[10] = uVar46;
    auVar13[0xb] = bVar28;
    auVar13[0xc] = uVar33;
    auVar13[0xd] = uVar36;
    auVar13[0xe] = uVar39;
    auVar13[0xf] = bVar29;
    auVar14[4] = uVar32;
    auVar14._0_4_ = fVar55;
    auVar14[5] = uVar35;
    auVar14[6] = uVar38;
    auVar14[7] = bVar44;
    auVar14[8] = uVar41;
    auVar14[9] = uVar45;
    auVar14[10] = uVar46;
    auVar14[0xb] = bVar28;
    auVar14[0xc] = uVar33;
    auVar14[0xd] = uVar36;
    auVar14[0xe] = uVar39;
    auVar14[0xf] = bVar29;
    auVar51 = NEON_ext(auVar13,auVar14,4,1);
    fVar87 = auVar51._0_4_;
    fVar76 = auVar51._4_4_;
    fVar173 = (float)(CONCAT17(bVar44,CONCAT16(uVar38,CONCAT15(uVar35,CONCAT14(uVar32,fVar55)))) >>
                     0x20);
    auVar148._0_4_ = fVar55 * fVar116 - fVar87 * fVar27;
    auVar148._4_4_ = fVar179 * fVar24 - fVar76 * fVar25;
    auVar148._8_4_ = fVar56 * fVar27 - fVar55 * fVar26;
    auVar148._12_4_ = fVar63 * fVar25 - fVar173 * fVar75;
    auVar51 = NEON_ext(auVar148,auVar148,4,1);
    fVar192 = auVar51._0_4_;
    fVar196 = auVar51._4_4_;
    fVar181 = auVar98._0_4_;
    fVar149 = auVar98._4_4_;
    fVar156 = auVar98._8_4_;
    fVar68 = auVar148._0_4_ * fVar156 + fVar192 * fVar181 + fVar196 * fVar149;
    if ((float)CONCAT13((byte)((uint)fVar68 >> 0x18) & 0x80 ^
                        (byte)((uint)(fVar68 * fVar68) >> 0x18),SUB43(fVar68 * fVar68,0)) <=
        (auVar148._0_4_ * auVar148._0_4_ + fVar192 * fVar192 + fVar196 * fVar196) * -1e-08) {
      uVar144 = NEON_ext(auVar100._0_8_,auVar124._0_8_,4,1);
      auVar52._0_4_ = fVar27 * (float)uVar144 - fVar116 * fVar49;
      auVar52._4_4_ = fVar25 * (float)((ulong)uVar144 >> 0x20) - fVar24 * fVar104;
      auVar52._8_4_ = fVar26 * fVar49 - fVar27 * fVar94;
      auVar52._12_4_ = fVar75 * fVar104 - fVar25 * fVar23;
      auVar51 = NEON_ext(auVar52,auVar52,4,1);
      fVar94 = auVar51._0_4_;
      fVar24 = auVar51._4_4_;
      fVar49 = auVar52._0_4_ * auVar52._0_4_ + fVar94 * fVar94 + fVar24 * fVar24;
      fVar23 = auVar52._0_4_ * auVar52._0_4_ + fVar94 * fVar94 + fVar24 * fVar24;
      uVar144 = CONCAT44(fVar23,fVar49);
      uVar78 = NEON_frsqrte(uVar144,4);
      fVar104 = (float)uVar78;
      fVar116 = (float)((ulong)uVar78 >> 0x20);
      uVar78 = NEON_frsqrts(uVar144,CONCAT44(fVar116 * fVar116,fVar104 * fVar104),4);
      fVar104 = fVar104 * (float)uVar78;
      fVar116 = fVar116 * (float)((ulong)uVar78 >> 0x20);
      iVar48 = -(uint)(fVar49 <= 0.0);
      iVar54 = -(uint)(fVar23 <= 0.0);
      uVar144 = NEON_frsqrts(uVar144,CONCAT44(fVar116 * fVar116,fVar104 * fVar104),4);
      fVar104 = (float)uVar144 * fVar104;
      fVar116 = (float)((ulong)uVar144 >> 0x20) * fVar116;
      fVar49 = (float)CONCAT13((byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                               CONCAT12((byte)((uint)fVar104 >> 0x10) &
                                        ~(byte)((uint)iVar48 >> 0x10),
                                        CONCAT11((byte)((uint)fVar104 >> 8) &
                                                 ~(byte)((uint)iVar48 >> 8),
                                                 SUB41(fVar104,0) & ~(byte)iVar48)));
      fVar94 = fVar94 * fVar49;
      fVar104 = (float)(CONCAT17((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                                 CONCAT16((byte)((uint)fVar116 >> 0x10) &
                                          ~(byte)((uint)iVar54 >> 0x10),
                                          CONCAT15((byte)((uint)fVar116 >> 8) &
                                                   ~(byte)((uint)iVar54 >> 8),
                                                   CONCAT14(SUB41(fVar116,0) & ~(byte)iVar54,fVar49)
                                                  ))) >> 0x20);
      fVar24 = fVar24 * fVar104;
      auVar53._0_8_ = CONCAT44(fVar24,fVar94);
      auVar53._8_4_ = auVar52._0_4_ * fVar49;
      auVar53._12_4_ = auVar52._4_4_ * fVar104;
      auVar85._0_4_ = fVar192 * fVar94;
      auVar85._4_4_ = fVar196 * fVar24;
      auVar85._8_4_ = auVar148._0_4_ * auVar53._8_4_;
      auVar85._12_4_ = auVar148._4_4_ * auVar53._12_4_;
      auVar51 = NEON_ext(auVar85,auVar85,8,1);
      fVar49 = auVar51._0_4_ + auVar85._0_4_ + auVar85._4_4_;
      if (fVar68 <= fVar49) {
        if (fVar49 < 0.0) {
          uVar21 = 0x42;
          uVar180 = 0xff00;
          auVar108._8_8_ = auVar53._8_8_;
          auVar108._0_8_ = auVar53._0_8_;
          uVar22 = 0xff0000;
          uVar19 = 3;
          goto LAB_03071300;
        }
        auVar100 = NEON_ext(auVar98,auVar98,4,1);
        auVar108 = NEON_ext(auVar53,auVar53,4,1);
        auVar86._0_4_ = auVar108._0_4_ * fVar181 - auVar100._0_4_ * fVar94;
        auVar86._4_4_ = auVar108._4_4_ * fVar149 - auVar100._4_4_ * fVar24;
        auVar86._8_4_ = fVar94 * fVar156 - fVar181 * auVar53._8_4_;
        auVar86._12_4_ = fVar24 * auVar98._12_4_ - fVar149 * auVar53._12_4_;
        auVar51 = NEON_ext(auVar86,auVar86,4,1);
        fVar49 = auVar51._0_4_;
        fVar104 = auVar51._4_4_;
        if (1.0000001e-06 <= auVar86._0_4_ * auVar86._0_4_ + fVar49 * fVar49 + fVar104 * fVar104) {
          auVar93._0_4_ = fVar87 * fVar181 - fVar55 * auVar100._0_4_;
          auVar93._4_4_ = fVar76 * fVar149 - fVar179 * auVar100._4_4_;
          auVar93._8_4_ = fVar55 * fVar156 - fVar56 * fVar181;
          auVar93._12_4_ = fVar173 * auVar98._12_4_ - fVar63 * fVar149;
          auVar51 = NEON_ext(auVar93,auVar93,4,1);
          fVar23 = auVar51._0_4_;
          fVar116 = auVar51._4_4_;
          if (1.0000001e-06 <= auVar93._0_4_ * auVar93._0_4_ + fVar23 * fVar23 + fVar116 * fVar116)
          {
            auVar113._0_4_ = fVar55 * auVar108._0_4_ - fVar87 * fVar94;
            auVar113._4_4_ = fVar179 * auVar108._4_4_ - fVar76 * fVar24;
            auVar113._8_4_ = fVar56 * fVar94 - fVar55 * auVar53._8_4_;
            auVar113._12_4_ = fVar63 * fVar24 - fVar173 * auVar53._12_4_;
            auVar51 = NEON_ext(auVar113,auVar113,4,1);
            fVar56 = auVar51._0_4_;
            auVar114._0_4_ = fVar56 * fVar56;
            fVar63 = auVar51._4_4_;
            auVar114._4_4_ = fVar63 * fVar63;
            auVar114._8_4_ = auVar113._0_4_ * auVar113._0_4_;
            auVar114._12_4_ = auVar113._4_4_ * auVar113._4_4_;
            auVar51 = NEON_ext(auVar114,auVar114,8,1);
            if (1.0000001e-06 <= auVar51._0_4_ + auVar114._0_4_ + auVar114._4_4_) {
              iVar171 = -(uint)(auVar86._0_4_ * auVar113._0_4_ + fVar49 * fVar56 + fVar104 * fVar63
                               < 0.0);
              iVar172 = -(uint)(auVar86._0_4_ * auVar113._0_4_ + fVar49 * fVar56 + fVar104 * fVar63
                               < 0.0);
              iVar48 = -(uint)(auVar93._0_4_ * auVar86._0_4_ + fVar23 * fVar49 + fVar116 * fVar104 <
                              0.0);
              iVar54 = -(uint)(auVar93._0_4_ * auVar86._0_4_ + fVar23 * fVar49 + fVar116 * fVar104 <
                              0.0);
              bVar30 = (byte)((uint)iVar48 >> 8);
              bVar59 = (byte)((uint)iVar171 >> 8);
              bVar31 = (byte)((uint)iVar48 >> 0x10);
              bVar60 = (byte)((uint)iVar171 >> 0x10);
              bVar34 = (byte)((uint)iVar48 >> 0x18);
              bVar61 = (byte)((uint)iVar171 >> 0x18);
              bVar37 = (byte)((uint)iVar54 >> 8);
              bVar64 = (byte)((uint)iVar172 >> 8);
              bVar40 = (byte)((uint)iVar54 >> 0x10);
              bVar65 = (byte)((uint)iVar172 >> 0x10);
              bVar43 = (byte)((uint)iVar54 >> 0x18);
              bVar66 = (byte)((uint)iVar172 >> 0x18);
              iVar189 = CONCAT13((bVar61 ^ bVar34) & bVar128,
                                 CONCAT12((bVar60 ^ bVar31) & bVar127,
                                          CONCAT11((bVar59 ^ bVar30) & bVar126,
                                                   ((byte)iVar171 ^ (byte)iVar48) & bVar119)));
              auVar69._0_8_ =
                   CONCAT17((bVar66 ^ bVar43) & bVar133,
                            CONCAT16((bVar65 ^ bVar40) & bVar132,
                                     CONCAT15((bVar64 ^ bVar37) & bVar131,
                                              CONCAT14(((byte)iVar172 ^ (byte)iVar54) & bVar129,
                                                       iVar189))));
              auVar69[8] = ((byte)iVar171 ^ (byte)iVar48) & bVar134;
              auVar69[9] = (bVar59 ^ bVar30) & bVar136;
              auVar69[10] = (bVar60 ^ bVar31) & bVar137;
              auVar69[0xb] = (bVar61 ^ bVar34) & bVar138;
              auVar71[0xc] = ((byte)iVar172 ^ (byte)iVar54) & bVar139;
              auVar71._0_12_ = auVar69;
              auVar71[0xd] = (bVar64 ^ bVar37) & bVar141;
              auVar71[0xe] = (bVar65 ^ bVar40) & bVar142;
              auVar71[0xf] = (bVar66 ^ bVar43) & bVar143;
              if (iVar189 + (int)((ulong)auVar69._0_8_ >> 0x20) + auVar69._8_4_ + auVar71._12_4_ !=
                  0) goto LAB_03071540;
              uVar50 = CONCAT17(bVar66 | bVar43,(uint7)((bVar61 | bVar34) & 0x80) << 0x18) &
                       0x80ffffffffffffff;
              auVar98._0_3_ = SUB43(fVar55,0);
              auVar98[3] = (byte)(uVar50 >> 0x18) ^ (byte)((uint)fVar55 >> 0x18);
              auVar98[4] = uVar32;
              auVar98[5] = uVar35;
              auVar98[6] = uVar38;
              auVar98[7] = (byte)(uVar50 >> 0x38) ^ bVar44;
              auVar98[8] = uVar41;
              auVar98[9] = uVar45;
              auVar98[10] = uVar46;
              auVar98[0xb] = (bVar61 | bVar34) & 0x80 ^ bVar28;
              auVar98[0xc] = uVar33;
              auVar98[0xd] = uVar36;
              auVar98[0xe] = uVar39;
              auVar98[0xf] = (bVar66 | bVar43) & 0x80 ^ bVar29;
            }
            else {
              auVar98._8_8_ = auVar53._8_8_;
              auVar98._0_8_ = auVar53._0_8_;
            }
          }
          uVar21 = 0x43;
          uVar180 = 0xff00;
          uVar22 = 0xff0000;
          uVar19 = 2;
          auVar108 = auVar98;
          goto LAB_03071300;
        }
      }
    }
  }
LAB_03071540:
  auVar108 = auVar98;
  if (uVar19 == 0) {
    return 0x80;
  }
LAB_03071300:
  if (!(ABS(fVar155 - auVar108._8_4_) <= 0.000100016594 &&
       (ABS(fVar62 - auVar108._0_4_) <= 0.000100016594 &&
       ABS(fVar162 - auVar108._4_4_) <= 0.000100016594))) {
    param_12[1] = auVar108._8_8_;
    *param_12 = auVar108._0_8_;
    *param_13 = uVar22 & 0xff0000 | uVar20 << 0x18 | uVar180 & 0xffff | uVar21 & 0xff;
    return uVar19;
  }
  return uVar19 | 0x80;
}


