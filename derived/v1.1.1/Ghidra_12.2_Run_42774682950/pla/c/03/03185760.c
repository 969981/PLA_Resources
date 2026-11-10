/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03185760; name: FUN_03185760
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03185760(float param_1,undefined8 *param_2,long param_3,long param_4,long *param_5)

{
  undefined *puVar1;
  long *plVar2;
  float *pfVar3;
  float *pfVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar27;
  int iVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar38;
  float fVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  undefined8 uVar41;
  float fVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uVar42;
  float fVar47;
  float fVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar56;
  float fVar57;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined4 uVar58;
  float fVar62;
  undefined1 auVar59 [16];
  float fVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar64;
  ulong uVar65;
  undefined1 auVar66 [16];
  float fVar69;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  ulong uVar71;
  long **pplVar72;
  long **pplVar73;
  undefined1 auVar74 [16];
  float fVar77;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float local_300;
  float fStack_2fc;
  float local_2f0;
  float fStack_2ec;
  float fStack_2e8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  float local_2b0;
  float fStack_2ac;
  float local_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  undefined *local_270;
  ulong uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  long **local_230;
  undefined8 local_228;
  long *aplStack_220 [2];
  undefined1 *local_210;
  undefined4 local_208;
  int local_204;
  undefined1 auStack_200 [16];
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined8 local_1a0;
  float fStack_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  long *local_98;
  
  local_b8 = 0;
  local_b0 = -0x8000000000000000;
  local_c8 = 0;
  local_c0 = -0x8000000000000000;
  fStack_e8 = (float)param_2[0x1f];
  fStack_e4 = (float)((ulong)param_2[0x1f] >> 0x20);
  local_f0 = (float)param_2[0x1e];
  fStack_ec = (float)((ulong)param_2[0x1e] >> 0x20);
  fStack_d8 = (float)param_2[0x21];
  fStack_d4 = (float)((ulong)param_2[0x21] >> 0x20);
  local_e0 = (float)param_2[0x20];
  fStack_dc = (float)((ulong)param_2[0x20] >> 0x20);
  local_228 = param_2[9];
  uStack_238 = param_2[7];
  uStack_248 = param_2[5];
  uStack_258 = param_2[3];
  uStack_268 = param_2[1];
  local_270 = (undefined *)*param_2;
  local_260 = param_2[2];
  local_250 = param_2[4];
  local_240 = param_2[6];
  local_230 = (long **)param_2[8];
  if (*(char *)((long)param_2 + 0x111) == '\x01') {
    FUN_032ca410(&local_1a0,param_3 + 0x60,&local_270);
    local_250 = CONCAT44(fStack_17c,local_180);
    auVar74._8_4_ = fStack_178;
    auVar74._0_8_ = local_250;
    auVar74._12_4_ = fStack_174;
    local_240 = CONCAT44(fStack_16c,local_170);
    auVar7._8_4_ = fStack_168;
    auVar7._0_8_ = local_240;
    auVar7._12_4_ = fStack_164;
    uStack_238 = auVar7._8_8_;
    local_270 = (undefined *)CONCAT44(local_1a0._4_4_,(float)local_1a0);
    auVar66._8_4_ = fStack_198;
    auVar66._0_8_ = local_270;
    auVar66._12_4_ = fStack_194;
    local_260 = CONCAT44(fStack_18c,local_190);
    uStack_258 = CONCAT44(fStack_184,local_188);
    uStack_248 = auVar74._8_8_;
    uStack_268 = auVar66._8_8_;
  }
  FUN_031854a4(&local_270,&local_f0,&local_130,&fStack_120,&local_1e0,&local_1d0);
  uStack_2b8 = uStack_1c8;
  local_2c0 = local_1d0;
  uVar42 = local_1e0;
  local_290 = (float)local_1e0;
  fStack_28c = local_1e0._4_4_;
  fStack_288 = (float)uStack_1d8;
  fStack_284 = uStack_1d8._4_4_;
  fVar21 = (float)local_1d0;
  fVar22 = local_1d0._4_4_;
  fVar62 = (float)uStack_1c8;
  fVar63 = uStack_1c8._4_4_;
  local_228 = param_2[0x13];
  fVar19 = ((float)local_1e0 - (float)local_1d0) * ((float)local_1e0 - (float)local_1d0);
  fVar25 = (local_1e0._4_4_ - local_1d0._4_4_) * (local_1e0._4_4_ - local_1d0._4_4_);
  fVar26 = ((float)uStack_1d8 - (float)uStack_1c8) * ((float)uStack_1d8 - (float)uStack_1c8);
  fVar20 = fVar19 + fVar25 + fVar26;
  fVar26 = fVar19 + fVar25 + fVar26;
  uVar41 = CONCAT44(fVar26,fVar20);
  uVar33 = NEON_frsqrte(uVar41,4);
  fVar19 = (float)uVar33;
  fVar25 = (float)((ulong)uVar33 >> 0x20);
  uVar33 = NEON_frsqrts(uVar41,CONCAT44(fVar25 * fVar25,fVar19 * fVar19),4);
  fVar19 = fVar19 * (float)uVar33;
  fVar25 = fVar25 * (float)((ulong)uVar33 >> 0x20);
  uVar41 = NEON_frsqrts(uVar41,CONCAT44(fVar25 * fVar25,fVar19 * fVar19),4);
  iVar27 = -(uint)(fVar20 <= 0.0);
  iVar30 = -(uint)(fVar26 <= 0.0);
  fVar20 = fVar20 * (float)uVar41 * fVar19;
  fVar26 = fVar26 * (float)((ulong)uVar41 >> 0x20) * fVar25;
  uVar41 = CONCAT17((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                    CONCAT16((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                             CONCAT15((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar30 >> 8),
                                      CONCAT14(SUB41(fVar26,0) & ~(byte)iVar30,
                                               CONCAT13((byte)((uint)fVar20 >> 0x18) &
                                                        ~(byte)((uint)iVar27 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar20 >> 0x10) &
                                                                 ~(byte)((uint)iVar27 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar20 >> 8)
                                                                          & ~(byte)((uint)iVar27 >>
                                                                                   8),
                                                                          SUB41(fVar20,0) &
                                                                          ~(byte)iVar27)))))));
  uStack_238 = param_2[0x11];
  uStack_248 = param_2[0xf];
  uStack_258 = param_2[0xd];
  uStack_268 = param_2[0xb];
  local_270 = (undefined *)param_2[10];
  local_260 = param_2[0xc];
  local_250 = param_2[0xe];
  local_240 = param_2[0x10];
  local_230 = (long **)param_2[0x12];
  uVar33 = NEON_frecpe(uVar41,4);
  uVar34 = NEON_frecps(uVar41,uVar33,4);
  fVar19 = (float)uVar33 * (float)uVar34;
  fVar20 = (float)((ulong)uVar33 >> 0x20) * (float)((ulong)uVar34 >> 0x20);
  uVar41 = NEON_frecps(uVar41,CONCAT44(fVar20,fVar19),4);
  if (*(char *)((long)param_2 + 0x111) == '\x01') {
    FUN_032ca410(&local_1a0,param_4 + 0x60,&local_270);
    local_270 = (undefined *)CONCAT44(local_1a0._4_4_,(float)local_1a0);
    auVar43._8_4_ = fStack_198;
    auVar43._0_8_ = local_270;
    auVar43._12_4_ = fStack_194;
    local_260 = CONCAT44(fStack_18c,local_190);
    auVar61._8_4_ = local_188;
    auVar61._0_8_ = local_260;
    auVar61._12_4_ = fStack_184;
    uStack_268 = auVar43._8_8_;
    local_250 = CONCAT44(fStack_17c,local_180);
    auVar75._8_4_ = fStack_178;
    auVar75._0_8_ = local_250;
    auVar75._12_4_ = fStack_174;
    local_240 = CONCAT44(fStack_16c,local_170);
    auVar9._8_4_ = fStack_168;
    auVar9._0_8_ = local_240;
    auVar9._12_4_ = fStack_164;
    uStack_258 = auVar61._8_8_;
    uStack_248 = auVar75._8_8_;
    uStack_238 = auVar9._8_8_;
  }
  pplVar72 = (long **)CONCAT44(param_1 * fVar20 * (float)((ulong)uVar41 >> 0x20),
                               param_1 * fVar19 * (float)uVar41);
  FUN_031854a4(&local_270,&local_e0,&local_150,&local_140,&local_110,&local_100);
  uVar41 = local_110;
  fVar20 = (float)local_110;
  fVar31 = fVar20 - (float)local_100;
  fVar19 = (float)((ulong)local_100 >> 0x20);
  fVar25 = (float)((ulong)local_110 >> 0x20);
  fVar38 = fVar25 - fVar19;
  fVar26 = (float)uStack_108;
  fVar39 = fVar26 - (float)uStack_f8;
  fVar18 = (float)((ulong)uStack_108 >> 0x20);
  fVar31 = fVar31 * fVar31;
  fVar38 = fVar38 * fVar38;
  fVar39 = fVar39 * fVar39;
  fVar32 = fVar31 + fVar38 + fVar39;
  fVar39 = fVar31 + fVar38 + fVar39;
  uVar33 = CONCAT44(fVar39,fVar32);
  uVar34 = NEON_frsqrte(uVar33,4);
  fVar31 = (float)uVar34;
  fVar38 = (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frsqrts(uVar33,CONCAT44(fVar38 * fVar38,fVar31 * fVar31),4);
  fVar31 = fVar31 * (float)uVar34;
  fVar38 = fVar38 * (float)((ulong)uVar34 >> 0x20);
  uVar33 = NEON_frsqrts(uVar33,CONCAT44(fVar38 * fVar38,fVar31 * fVar31),4);
  iVar27 = -(uint)(fVar32 <= 0.0);
  iVar30 = -(uint)(fVar39 <= 0.0);
  fVar32 = fVar32 * (float)uVar33 * fVar31;
  fVar39 = fVar39 * (float)((ulong)uVar33 >> 0x20) * fVar38;
  uVar33 = CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                    CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                             CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar30 >> 8),
                                      CONCAT14(SUB41(fVar39,0) & ~(byte)iVar30,
                                               CONCAT13((byte)((uint)fVar32 >> 0x18) &
                                                        ~(byte)((uint)iVar27 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar32 >> 0x10) &
                                                                 ~(byte)((uint)iVar27 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar32 >> 8)
                                                                          & ~(byte)((uint)iVar27 >>
                                                                                   8),
                                                                          SUB41(fVar32,0) &
                                                                          ~(byte)iVar27)))))));
  uVar34 = NEON_frecpe(uVar33,4);
  uVar52 = NEON_frecps(uVar33,uVar34,4);
  fVar31 = (float)uVar34 * (float)uVar52;
  fVar32 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar52 >> 0x20);
  uVar33 = NEON_frecps(uVar33,CONCAT44(fVar32,fVar31),4);
  uVar71 = NEON_fmov(0x3f800000,4);
  if (*(char *)((long)param_2 + 0x112) == '\0') {
  }
  else {
    auVar59._0_4_ = local_f0 * local_e0;
    auVar59._4_4_ = fStack_ec * fStack_dc;
    auVar59._8_4_ = fStack_e8 * fStack_d8;
    auVar59._12_4_ = fStack_e4 * fStack_d4;
    auVar66 = NEON_ext(auVar59,auVar59,8,1);
    iVar27 = -(uint)(auVar59._0_4_ + auVar59._4_4_ + auVar66._0_4_ < 0.0);
    uVar58 = CONCAT13(~(byte)((uint)iVar27 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar27 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar27 >> 8),~(byte)iVar27)));
    uVar65 = NEON_fmov(0xbf800000,4);
    uVar65 = uVar65 ^ (uVar65 ^ uVar71) & CONCAT44(uVar58,uVar58);
    auVar76._8_4_ = fVar62;
    auVar76._0_8_ = local_2c0;
    auVar76._12_4_ = fVar63;
    auVar8._8_4_ = fStack_288;
    auVar8._0_8_ = uVar42;
    auVar8._12_4_ = fStack_284;
    fVar48 = (float)uVar65;
    fVar77 = (float)(uVar65 >> 0x20);
    fVar38 = local_f0 + local_e0 * fVar48;
    fVar39 = fStack_ec + fStack_dc * fVar77;
    fVar48 = fStack_e8 + fStack_d8 * fVar48;
    fVar50 = fVar38 * fVar38 + fVar39 * fVar39 + fVar48 * fVar48;
    fVar56 = fVar38 * fVar38 + fVar39 * fVar39 + fVar48 * fVar48;
    uVar34 = CONCAT44(fVar56,fVar50);
    uVar52 = NEON_frsqrte(uVar34,4);
    fVar64 = (float)uVar52;
    fVar69 = (float)((ulong)uVar52 >> 0x20);
    uVar52 = NEON_frsqrts(uVar34,CONCAT44(fVar69 * fVar69,fVar64 * fVar64),4);
    fVar64 = fVar64 * (float)uVar52;
    fVar69 = fVar69 * (float)((ulong)uVar52 >> 0x20);
    iVar27 = -(uint)(fVar50 <= 0.0);
    iVar30 = -(uint)(fVar56 <= 0.0);
    uVar34 = NEON_frsqrts(uVar34,CONCAT44(fVar69 * fVar69,fVar64 * fVar64),4);
    fVar64 = (float)uVar34 * fVar64;
    fVar69 = (float)((ulong)uVar34 >> 0x20) * fVar69;
    fVar50 = (float)CONCAT13((byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                             CONCAT12((byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                      CONCAT11((byte)((uint)fVar64 >> 8) &
                                               ~(byte)((uint)iVar27 >> 8),
                                               SUB41(fVar64,0) & ~(byte)iVar27)));
    fVar62 = fVar62 - fStack_288;
    fVar63 = fVar63 - fStack_284;
    auVar53._0_4_ = fVar38 * fVar50;
    fVar38 = (float)(CONCAT17((byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                              CONCAT16((byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                                       CONCAT15((byte)((uint)fVar69 >> 8) &
                                                ~(byte)((uint)iVar30 >> 8),
                                                CONCAT14(SUB41(fVar69,0) & ~(byte)iVar30,fVar50))))
                    >> 0x20);
    auVar53._4_4_ = fVar39 * fVar38;
    auVar53._8_4_ = fVar48 * fVar50;
    auVar53._12_4_ = (fStack_e4 + fStack_d4 * fVar77) * fVar38;
    fVar38 = (float)local_100 - fVar20;
    fVar19 = fVar19 - fVar25;
    fVar39 = (float)uStack_f8 - fVar26;
    fVar48 = (float)((ulong)uStack_f8 >> 0x20) - fVar18;
    auVar67._0_4_ = (fVar20 + fVar38 * 0.5) - (local_290 + (fVar21 - local_290) * 0.5);
    auVar67._4_4_ = (fVar25 + fVar19 * 0.5) - (fStack_28c + (fVar22 - fStack_28c) * 0.5);
    auVar67._8_4_ = (fVar26 + fVar39 * 0.5) - (fStack_288 + fVar62 * 0.5);
    auVar67._12_4_ = (fVar18 + fVar48 * 0.5) - (fStack_284 + fVar63 * 0.5);
    auVar66 = NEON_ext(auVar53,auVar53,4,1);
    auVar74 = NEON_ext(auVar67,auVar67,4,1);
    auVar68._0_4_ = auVar74._0_4_ * auVar53._0_4_ - auVar67._0_4_ * auVar66._0_4_;
    auVar68._4_4_ = auVar74._4_4_ * auVar53._4_4_ - auVar67._4_4_ * auVar66._4_4_;
    auVar68._8_4_ = auVar67._0_4_ * auVar53._8_4_ - auVar67._8_4_ * auVar53._0_4_;
    auVar68._12_4_ = auVar67._4_4_ * auVar53._12_4_ - auVar67._12_4_ * auVar53._4_4_;
    auVar66 = NEON_ext(auVar68,auVar68,4,1);
    auVar60._0_4_ = (fVar21 - local_290) * auVar66._0_4_;
    auVar60._4_4_ = (fVar22 - fStack_28c) * auVar66._4_4_;
    auVar60._8_4_ = fVar62 * auVar68._0_4_;
    auVar60._12_4_ = fVar63 * auVar68._4_4_;
    auVar74 = NEON_ext(auVar60,auVar60,8,1);
    if (auVar60._0_4_ + auVar60._4_4_ + auVar74._0_4_ < 0.0) {
      auVar74 = auVar8;
      local_1e0 = local_2c0;
      uStack_1d8 = auVar76._8_8_;
      local_1d0 = uVar42;
      uStack_1c8 = auVar8._8_8_;
    }
    else {
      auVar74 = auVar76;
      auVar76 = auVar8;
    }
    auVar46._0_4_ = fVar38 * auVar66._0_4_;
    auVar46._4_4_ = fVar19 * auVar66._4_4_;
    auVar46._8_4_ = fVar39 * auVar68._0_4_;
    auVar46._12_4_ = fVar48 * auVar68._4_4_;
    auVar66 = NEON_ext(auVar46,auVar46,8,1);
    fStack_288 = auVar76._8_4_;
    fStack_284 = auVar76._12_4_;
    local_290 = auVar76._0_4_;
    fStack_28c = auVar76._4_4_;
    uStack_2b8 = auVar74._8_8_;
    local_2c0 = auVar74._0_8_;
    if (0.0 < auVar66._0_4_ + auVar46._0_4_ + auVar46._4_4_) {
      uVar42 = uStack_f8;
      local_110 = local_100;
      uStack_f8 = uStack_108;
      local_100 = uVar41;
      uStack_108 = uVar42;
    }
  }
  pplVar73 = (long **)CONCAT44(param_1 * fVar32 * (float)((ulong)uVar33 >> 0x20),
                               param_1 * fVar31 * (float)uVar33);
  FUN_03187ca0(&local_98,*(undefined8 *)(param_3 + 0xc0));
  auVar66 = *(undefined1 (*) [16])(param_3 + 0x60);
  auVar74 = *(undefined1 (*) [16])(param_3 + 0x70);
  auVar7 = *(undefined1 (*) [16])(param_3 + 0x80);
  auVar43 = NEON_ext(auVar66,auVar66,8,1);
  auVar75 = NEON_ext(auVar7,auVar7,8,1);
  fVar21 = *(float *)(param_3 + 0x90);
  fVar22 = *(float *)(param_3 + 0x94);
  fVar62 = *(float *)(param_3 + 0x98);
  uStack_248 = CONCAT44(fStack_284,fStack_288);
  local_250 = CONCAT44(fStack_28c,local_290);
  local_190 = 0.0;
  fStack_18c = 0.0;
  local_188 = 0.0;
  local_180 = 0.0;
  fStack_17c = 0.0;
  auVar61 = NEON_ext(auVar74,auVar74,8,1);
  fStack_120 = fStack_120 - fVar21;
  fStack_11c = fStack_11c - fVar22;
  fStack_118 = fStack_118 - fVar62;
  fVar63 = auVar43._0_4_;
  fVar25 = auVar61._0_4_;
  fVar32 = (float)local_2c0 - fVar21;
  fVar38 = (float)((ulong)local_2c0 >> 0x20) - fVar22;
  fVar39 = (float)uStack_2b8 - fVar62;
  fVar19 = auVar66._0_4_;
  fVar26 = auVar74._0_4_;
  fVar20 = auVar66._4_4_;
  fVar18 = auVar74._4_4_;
  fVar31 = auVar7._4_4_;
  local_290 = local_290 - fVar21;
  fStack_28c = fStack_28c - fVar22;
  fStack_288 = fStack_288 - fVar62;
  local_130 = local_130 - fVar21;
  fStack_12c = fStack_12c - fVar22;
  fStack_128 = fStack_128 - fVar62;
  fStack_198 = -NAN;
  fVar62 = auVar7._0_4_;
  fVar21 = auVar75._0_4_;
  fVar22 = auVar75._4_4_;
  auVar28._0_4_ = fVar63 * fStack_288 + fVar19 * local_290 + fVar20 * fStack_28c;
  auVar28._4_4_ = fVar25 * fStack_288 + fVar26 * local_290 + fVar18 * fStack_28c;
  auVar28._8_4_ = fVar21 * fStack_288 + fVar62 * local_290 + fVar31 * fStack_28c;
  auVar28._12_4_ = fVar22 * fStack_288 + fVar31 * local_290 + fVar22 * fStack_28c;
  auVar35._0_4_ = fVar63 * fVar39 + fVar19 * fVar32 + fVar20 * fVar38;
  auVar35._4_4_ = fVar25 * fVar39 + fVar26 * fVar32 + fVar18 * fVar38;
  auVar35._8_4_ = fVar21 * fVar39 + fVar62 * fVar32 + fVar31 * fVar38;
  auVar35._12_4_ = fVar22 * fVar39 + fVar31 * fVar32 + fVar22 * fVar38;
  auVar54._0_4_ = fVar63 * fStack_128 + fVar19 * local_130 + fVar20 * fStack_12c;
  auVar54._4_4_ = fVar25 * fStack_128 + fVar26 * local_130 + fVar18 * fStack_12c;
  auVar54._8_4_ = fVar21 * fStack_128 + fVar62 * local_130 + fVar31 * fStack_12c;
  auVar54._12_4_ = fVar22 * fStack_128 + fVar31 * local_130 + fVar22 * fStack_12c;
  auVar23._0_4_ = fVar63 * fStack_118 + fVar19 * fStack_120 + fVar20 * fStack_11c;
  auVar23._4_4_ = fVar25 * fStack_118 + fVar26 * fStack_120 + fVar18 * fStack_11c;
  auVar23._8_4_ = fVar21 * fStack_118 + fVar62 * fStack_120 + fVar31 * fStack_11c;
  auVar23._12_4_ = fVar22 * fStack_118 + fVar31 * fStack_120 + fVar22 * fStack_11c;
  auVar74 = NEON_fmin(auVar28,auVar35,4);
  auVar66 = NEON_fmax(auVar28,auVar35,4);
  auVar74 = NEON_fmin(auVar74,auVar54,4);
  auVar66 = NEON_fmax(auVar66,auVar54,4);
  auVar74 = NEON_fmin(auVar74,auVar23,4);
  auVar66 = NEON_fmax(auVar66,auVar23,4);
  local_270 = &DAT_042eff10;
  fStack_160 = auVar66._0_4_ + 0.05;
  fStack_15c = auVar66._4_4_ + 0.05;
  fStack_158 = auVar66._8_4_ + 0.05;
  fStack_154 = auVar66._12_4_ + 0.05;
  puVar1 = PTR_DAT_04388cf0 + 0x10;
  local_170 = auVar74._0_4_ + -0.05;
  fStack_16c = auVar74._4_4_ + -0.05;
  fStack_168 = auVar74._8_4_ + -0.05;
  fStack_164 = auVar74._12_4_ + -0.05;
  aplStack_220[0] = &local_b8;
  uStack_238 = uStack_2b8;
  local_240 = local_2c0;
  local_260 = CONCAT44(fStack_ec,local_f0);
  auVar10._8_4_ = fStack_e8;
  auVar10._0_8_ = local_260;
  auVar10._12_4_ = fStack_e4;
  uStack_268 = uStack_268 & 0xffffffffffffff00;
  uStack_258 = auVar10._8_8_;
  local_230 = pplVar72;
  local_228 = param_3;
  local_1a0 = puVar1;
  (**(code **)(*local_98 + 0x48))(local_98,&local_1a0,&local_270);
  if ((local_98 != (long *)0x0) && (local_98[1] != 0)) {
    plVar2 = local_98 + 2;
    do {
      lVar14 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*local_98 + 0x18))();
    }
  }
  FUN_03187ca0(&local_98,*(undefined8 *)(param_4 + 0xc0));
  aplStack_220[0] = &local_c8;
  auVar66 = *(undefined1 (*) [16])(param_4 + 0x60);
  auVar43 = NEON_ext(auVar66,auVar66,8,1);
  auVar74 = *(undefined1 (*) [16])(param_4 + 0x70);
  auVar7 = *(undefined1 (*) [16])(param_4 + 0x80);
  auVar75 = NEON_ext(auVar7,auVar7,8,1);
  auVar61 = NEON_ext(auVar74,auVar74,8,1);
  fVar63 = auVar43._0_4_;
  fVar25 = auVar61._0_4_;
  fVar19 = auVar66._0_4_;
  fVar26 = auVar74._0_4_;
  fVar32 = auVar7._4_4_;
  fVar20 = auVar66._4_4_;
  fVar18 = auVar74._4_4_;
  fVar21 = *(float *)(param_4 + 0x90);
  fVar22 = *(float *)(param_4 + 0x94);
  fVar62 = *(float *)(param_4 + 0x98);
  fVar31 = (float)local_110 - fVar21;
  fVar38 = (float)((ulong)local_110 >> 0x20) - fVar22;
  fVar39 = (float)uStack_108 - fVar62;
  fVar64 = auVar7._0_4_;
  fStack_198 = -NAN;
  local_190 = 0.0;
  fStack_18c = 0.0;
  fVar48 = auVar75._0_4_;
  fVar50 = auVar75._4_4_;
  local_188 = 0.0;
  fVar56 = (float)local_100 - fVar21;
  fVar69 = (float)((ulong)local_100 >> 0x20) - fVar22;
  fVar77 = (float)uStack_f8 - fVar62;
  local_180 = 0.0;
  fStack_17c = 0.0;
  uStack_238 = uStack_f8;
  local_240 = local_100;
  uStack_268 = uStack_268 & 0xffffffffffffff00;
  local_270 = &DAT_042eff10;
  auVar44._0_4_ = fVar63 * fVar39 + fVar19 * fVar31 + fVar20 * fVar38;
  auVar44._4_4_ = fVar25 * fVar39 + fVar26 * fVar31 + fVar18 * fVar38;
  auVar44._8_4_ = fVar48 * fVar39 + fVar64 * fVar31 + fVar32 * fVar38;
  auVar44._12_4_ = fVar50 * fVar39 + fVar32 * fVar31 + fVar50 * fVar38;
  local_150 = local_150 - fVar21;
  fStack_14c = fStack_14c - fVar22;
  fStack_148 = fStack_148 - fVar62;
  auVar55._0_4_ = fVar63 * fVar77 + fVar19 * fVar56 + fVar20 * fVar69;
  auVar55._4_4_ = fVar25 * fVar77 + fVar26 * fVar56 + fVar18 * fVar69;
  auVar55._8_4_ = fVar48 * fVar77 + fVar64 * fVar56 + fVar32 * fVar69;
  auVar55._12_4_ = fVar50 * fVar77 + fVar32 * fVar56 + fVar50 * fVar69;
  auVar70._0_4_ = fVar63 * fStack_148 + fVar19 * local_150 + fVar20 * fStack_14c;
  auVar70._4_4_ = fVar25 * fStack_148 + fVar26 * local_150 + fVar18 * fStack_14c;
  auVar70._8_4_ = fVar48 * fStack_148 + fVar64 * local_150 + fVar32 * fStack_14c;
  auVar70._12_4_ = fVar50 * fStack_148 + fVar32 * local_150 + fVar50 * fStack_14c;
  local_140 = local_140 - fVar21;
  fStack_13c = fStack_13c - fVar22;
  fStack_138 = fStack_138 - fVar62;
  auVar36._0_4_ = fVar63 * fStack_138 + fVar19 * local_140 + fVar20 * fStack_13c;
  auVar36._4_4_ = fVar25 * fStack_138 + fVar26 * local_140 + fVar18 * fStack_13c;
  auVar36._8_4_ = fVar48 * fStack_138 + fVar64 * local_140 + fVar32 * fStack_13c;
  auVar36._12_4_ = fVar50 * fStack_138 + fVar32 * local_140 + fVar50 * fStack_13c;
  auVar74 = NEON_fmin(auVar44,auVar55,4);
  auVar66 = NEON_fmax(auVar44,auVar55,4);
  auVar74 = NEON_fmin(auVar74,auVar70,4);
  auVar66 = NEON_fmax(auVar66,auVar70,4);
  auVar74 = NEON_fmin(auVar74,auVar36,4);
  auVar66 = NEON_fmax(auVar66,auVar36,4);
  fStack_160 = auVar66._0_4_ + 0.05;
  fStack_15c = auVar66._4_4_ + 0.05;
  fStack_158 = auVar66._8_4_ + 0.05;
  fStack_154 = auVar66._12_4_ + 0.05;
  local_170 = auVar74._0_4_ + -0.05;
  fStack_16c = auVar74._4_4_ + -0.05;
  fStack_168 = auVar74._8_4_ + -0.05;
  fStack_164 = auVar74._12_4_ + -0.05;
  local_260 = CONCAT44(fStack_dc,local_e0);
  auVar11._8_4_ = fStack_d8;
  auVar11._0_8_ = local_260;
  auVar11._12_4_ = fStack_d4;
  uStack_258 = auVar11._8_8_;
  uStack_248 = uStack_108;
  local_250 = local_110;
  local_230 = pplVar73;
  local_228 = param_4;
  local_1a0 = puVar1;
  (**(code **)(*local_98 + 0x48))(local_98,&local_1a0,&local_270);
  if ((local_98 != (long *)0x0) && (local_98[1] != 0)) {
    plVar2 = local_98 + 2;
    do {
      lVar14 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*local_98 + 0x18))();
    }
  }
  uVar34 = uStack_1c8;
  uVar33 = local_1d0;
  uVar41 = uStack_1d8;
  uVar42 = local_1e0;
  local_2b0 = (float)local_100;
  fStack_2ac = (float)((ulong)local_100 >> 0x20);
  local_300 = (float)local_110;
  fStack_2fc = (float)((ulong)local_110 >> 0x20);
  FUN_032ca3b4(&local_1a0,(undefined1 (*) [16])(param_3 + 0x60));
  FUN_032ca3b4(&local_1e0,(undefined1 (*) [16])(param_4 + 0x60));
  puVar1 = PTR_PTR_0434a080;
  if (0 < (int)local_b0) {
    local_2f0 = (float)uVar42;
    fStack_2ec = (float)((ulong)uVar42 >> 0x20);
    fStack_2e8 = (float)uVar41;
    local_2c0._0_4_ = (float)uVar33;
    local_2c0._4_4_ = (float)((ulong)uVar33 >> 0x20);
    uStack_2b8._0_4_ = (float)uVar34;
    fVar21 = (local_2f0 + ((float)local_2c0 - local_2f0) * 0.5) -
             (local_300 + (local_2b0 - local_300) * 0.5);
    fVar62 = (fStack_2ec + (local_2c0._4_4_ - fStack_2ec) * 0.5) -
             (fStack_2fc + (fStack_2ac - fStack_2fc) * 0.5);
    fVar63 = (fStack_2e8 + ((float)uStack_2b8 - fStack_2e8) * 0.5) -
             ((float)uStack_108 + ((float)uStack_f8 - (float)uStack_108) * 0.5);
    fVar21 = fVar21 * fVar21;
    fVar62 = fVar62 * fVar62;
    fVar63 = fVar63 * fVar63;
    fVar22 = fVar21 + fVar62 + fVar63;
    uVar42 = CONCAT44(fVar21 + fVar62 + fVar63,fVar22);
    uVar41 = NEON_frsqrte(uVar42,4);
    fVar21 = (float)uVar41;
    fVar62 = (float)((ulong)uVar41 >> 0x20);
    uVar41 = NEON_frsqrts(uVar42,CONCAT44(fVar62 * fVar62,fVar21 * fVar21),4);
    fVar21 = fVar21 * (float)uVar41;
    fVar62 = fVar62 * (float)((ulong)uVar41 >> 0x20);
    uVar42 = NEON_frsqrts(uVar42,CONCAT44(fVar62 * fVar62,fVar21 * fVar21),4);
    iVar27 = -(uint)(fVar22 <= 0.0);
    fVar22 = (float)uVar42 * fVar21 * fVar22;
    uVar42 = NEON_fmax(pplVar72,pplVar73,4);
    fVar21 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                             CONCAT12((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                      CONCAT11((byte)((uint)fVar22 >> 8) &
                                               ~(byte)((uint)iVar27 >> 8),
                                               SUB41(fVar22,0) & ~(byte)iVar27)));
    lVar14 = 0;
    iVar27 = (int)local_b0;
    iVar30 = (int)local_c0;
    do {
      if (0 < iVar30) {
        lVar15 = 0;
        lVar17 = 0;
        do {
          lVar13 = local_b8;
          pfVar3 = (float *)(local_b8 + lVar14 * 0x40);
          fVar22 = *pfVar3;
          pfVar4 = (float *)(local_c8 + lVar15);
          fVar20 = (float)uVar71;
          fVar19 = fVar20 - pfVar4[1];
          fVar25 = (float)(uVar71 >> 0x20);
          fVar63 = fVar20 - *pfVar4;
          fVar62 = pfVar3[1];
          uVar41 = NEON_fmax(CONCAT44(fVar22,fVar22),CONCAT44(fVar19,fVar19),4);
          uVar33 = NEON_fmin(CONCAT44(fVar62,fVar62),CONCAT44(fVar63,fVar63),4);
          fVar26 = (float)uVar41;
          fVar31 = (float)uVar33;
          fVar18 = (float)((ulong)uVar41 >> 0x20);
          fVar32 = (float)((ulong)uVar33 >> 0x20);
          if ((float)uVar42 < fVar31 - fVar26) {
            local_250 = 0;
            uStack_248 = 0;
            local_260 = 0;
            uStack_258 = 0;
            local_270 = (undefined *)0x0;
            uStack_268 = 0;
            local_240 = 0xffffffffffffffff;
            uStack_238 = 0xffffffffffffffff;
            local_228 = -0x7ffffffc00000000;
            local_204 = -0x7ffffffc;
            local_208 = 0;
            local_1f0 = 0xbf80bf80;
            local_1ec = *(undefined1 *)(param_2 + 0x22);
            local_230 = aplStack_220;
            local_210 = auStack_200;
            FUN_031863bc(&local_230,param_2 + 0x14);
            FUN_031863bc(&local_210,param_2 + 0x18);
            uVar41 = CONCAT44(fVar62 - fVar22,fVar62 - fVar22);
            uVar33 = NEON_frecpe(uVar41,4);
            uVar34 = NEON_frecps(uVar41,uVar33,4);
            fVar69 = (float)uVar33 * (float)uVar34;
            fVar77 = (float)((ulong)uVar33 >> 0x20) * (float)((ulong)uVar34 >> 0x20);
            uVar41 = NEON_frecps(uVar41,CONCAT44(fVar77,fVar69),4);
            lVar13 = lVar13 + lVar14 * 0x40;
            fVar69 = fVar69 * (float)uVar41;
            fVar77 = fVar77 * (float)((ulong)uVar41 >> 0x20);
            fVar62 = *(float *)(lVar13 + 0x10);
            fVar38 = *(float *)(lVar13 + 0x14);
            fVar39 = *(float *)(lVar13 + 0x18);
            fVar48 = (fVar26 - fVar22) * fVar69;
            fVar69 = (fVar31 - fVar22) * fVar69;
            fVar40 = *(float *)(lVar13 + 0x20) - fVar62;
            fVar47 = *(float *)(lVar13 + 0x24) - fVar38;
            fVar49 = *(float *)(lVar13 + 0x28) - fVar39;
            uVar41 = CONCAT44(fVar63 - fVar19,fVar63 - fVar19);
            uVar33 = NEON_frecpe(uVar41,4);
            uVar34 = NEON_frecps(uVar41,uVar33,4);
            fVar51 = (float)uVar33 * (float)uVar34;
            fVar57 = (float)((ulong)uVar33 >> 0x20) * (float)((ulong)uVar34 >> 0x20);
            fVar50 = fVar62 + fVar40 * fVar48;
            fVar64 = fVar38 + fVar47 * (fVar18 - fVar22) * fVar77;
            fVar56 = fVar39 + fVar49 * fVar48;
            uVar41 = NEON_frecps(uVar41,CONCAT44(fVar57,fVar51),4);
            fVar62 = fVar62 + fVar40 * fVar69;
            fVar38 = fVar38 + fVar47 * (fVar32 - fVar22) * fVar77;
            fVar39 = fVar39 + fVar49 * fVar69;
            fVar51 = fVar51 * (float)uVar41;
            fVar57 = fVar57 * (float)((ulong)uVar41 >> 0x20);
            fVar22 = pfVar4[4];
            fVar63 = pfVar4[5];
            fVar48 = pfVar4[6];
            fVar31 = fVar20 - (fVar31 - fVar19) * fVar51;
            fVar20 = fVar20 - (fVar26 - fVar19) * fVar51;
            fVar26 = fVar22 + (pfVar4[8] - fVar22) * fVar31;
            fVar32 = fVar63 + (pfVar4[9] - fVar63) * (fVar25 - (fVar32 - fVar19) * fVar57);
            fVar31 = fVar48 + (pfVar4[10] - fVar48) * fVar31;
            fVar22 = fVar22 + (pfVar4[8] - fVar22) * fVar20;
            fVar63 = fVar63 + (pfVar4[9] - fVar63) * (fVar25 - (fVar18 - fVar19) * fVar57);
            fVar48 = fVar48 + (pfVar4[10] - fVar48) * fVar20;
            auVar24._0_4_ =
                 local_170 + local_180 * fVar56 + (float)local_1a0 * fVar50 + local_190 * fVar64;
            auVar24._4_4_ =
                 fStack_16c + fStack_17c * fVar56 + local_1a0._4_4_ * fVar50 + fStack_18c * fVar64;
            auVar24._8_4_ =
                 fStack_168 + fStack_178 * fVar56 + fStack_198 * fVar50 + local_188 * fVar64;
            auVar24._12_4_ =
                 fStack_164 + fStack_174 * fVar56 + fStack_194 * fVar50 + fStack_184 * fVar64;
            auVar29._0_4_ =
                 local_170 + local_180 * fVar39 + (float)local_1a0 * fVar62 + local_190 * fVar38;
            auVar29._4_4_ =
                 fStack_16c + fStack_17c * fVar39 + local_1a0._4_4_ * fVar62 + fStack_18c * fVar38;
            auVar29._8_4_ =
                 fStack_168 + fStack_178 * fVar39 + fStack_198 * fVar62 + local_188 * fVar38;
            auVar29._12_4_ =
                 fStack_164 + fStack_174 * fVar39 + fStack_194 * fVar62 + fStack_184 * fVar38;
            local_270 = (undefined *)CONCAT44(auVar29._0_4_,auVar24._0_4_);
            auVar37._0_4_ =
                 local_1b0 +
                 local_1c0 * fVar31 + (float)local_1e0 * fVar26 + (float)local_1d0 * fVar32;
            auVar37._4_4_ =
                 fStack_1ac +
                 fStack_1bc * fVar31 + local_1e0._4_4_ * fVar26 + local_1d0._4_4_ * fVar32;
            auVar37._8_4_ =
                 fStack_1a8 +
                 fStack_1b8 * fVar31 + (float)uStack_1d8 * fVar26 + (float)uStack_1c8 * fVar32;
            auVar37._12_4_ =
                 fStack_1a4 +
                 fStack_1b4 * fVar31 + uStack_1d8._4_4_ * fVar26 + uStack_1c8._4_4_ * fVar32;
            auVar45._0_4_ =
                 local_1b0 +
                 local_1c0 * fVar48 + (float)local_1e0 * fVar22 + (float)local_1d0 * fVar63;
            auVar45._4_4_ =
                 fStack_1ac +
                 fStack_1bc * fVar48 + local_1e0._4_4_ * fVar22 + local_1d0._4_4_ * fVar63;
            auVar45._8_4_ =
                 fStack_1a8 +
                 fStack_1b8 * fVar48 + (float)uStack_1d8 * fVar22 + (float)uStack_1c8 * fVar63;
            auVar45._12_4_ =
                 fStack_1a4 +
                 fStack_1b4 * fVar48 + uStack_1d8._4_4_ * fVar22 + uStack_1c8._4_4_ * fVar63;
            local_260 = CONCAT44(auVar29._4_4_,auVar24._4_4_);
            auVar66 = NEON_ext(auVar24,auVar24,8,1);
            auVar74 = NEON_ext(auVar29,auVar29,8,1);
            local_250 = CONCAT44(auVar74._0_4_,auVar66._0_4_);
            uStack_268 = CONCAT44(auVar45._0_4_,auVar37._0_4_);
            uStack_258 = CONCAT44(auVar45._4_4_,auVar37._4_4_);
            auVar74 = NEON_ext(auVar37,auVar37,8,1);
            auVar66 = NEON_ext(auVar45,auVar45,8,1);
            uStack_248 = CONCAT44(auVar66._0_4_,auVar74._0_4_);
            uStack_238 = CONCAT44(*(undefined4 *)(local_c8 + lVar15 + 0x30),
                                  *(undefined4 *)(local_b8 + lVar14 * 0x40 + 0x30));
            fVar22 = fVar21;
            if (0.0 <= *(float *)(param_2 + 0x1c)) {
              fVar22 = *(float *)(param_2 + 0x1c);
            }
            fVar62 = fVar21;
            if (0.0 <= *(float *)((long)param_2 + 0xe4)) {
              fVar62 = *(float *)((long)param_2 + 0xe4);
            }
            local_1f0 = CONCAT22((short)((uint)(fVar62 * 1.0039062) >> 0x10),
                                 (short)((uint)(fVar22 * 1.0039062) >> 0x10));
            local_1ec = *(undefined1 *)(param_2 + 0x22);
            local_240 = CONCAT44(*(undefined4 *)(*(long *)(param_4 + 0x20) + 0x178),
                                 *(undefined4 *)(*(long *)(param_3 + 0x20) + 0x178));
            iVar30 = (int)param_5[1];
            lVar13 = *param_5;
            iVar27 = iVar30 + 1;
            if ((int)(*(uint *)((long)param_5 + 0xc) & 0x3fffffff) <= iVar30) {
              lVar13 = FUN_03186c5c(puVar1,iVar27,lVar13,iVar30,(long)param_5 + 0xc);
              iVar30 = (int)param_5[1];
              *param_5 = lVar13;
            }
            puVar16 = (undefined8 *)(lVar13 + (long)iVar30 * 0x90);
            puVar16[3] = uStack_258;
            puVar16[5] = uStack_248;
            puVar16[1] = uStack_268;
            puVar16[2] = local_260;
            *puVar16 = local_270;
            puVar16[6] = local_240;
            puVar16[4] = local_250;
            *(undefined4 *)(puVar16 + 7) = (undefined4)uStack_238;
            *(undefined4 *)((long)puVar16 + 0x3c) = uStack_238._4_4_;
            puVar16[8] = puVar16 + 10;
            *(undefined4 *)(puVar16 + 9) = 0;
            *(undefined4 *)((long)puVar16 + 0x4c) = 0x80000004;
            FUN_031863bc(puVar16 + 8,&local_230);
            puVar16[0xc] = puVar16 + 0xe;
            *(undefined4 *)(puVar16 + 0xd) = 0;
            *(undefined4 *)((long)puVar16 + 0x6c) = 0x80000004;
            FUN_031863bc(puVar16 + 0xc,&local_210);
            *(undefined4 *)(puVar16 + 0x10) = local_1f0;
            *(undefined1 *)((long)puVar16 + 0x84) = local_1ec;
            *(int *)(param_5 + 1) = iVar27;
            local_208 = 0;
            if ((-1 < local_204) && (local_210 != (undefined1 *)0x0)) {
              (**(code **)(*(long *)puVar1 + 0x18))(puVar1,local_210,local_204 << 2);
            }
            lVar13 = local_228;
            local_204 = 0x80000000;
            uVar12 = local_228._4_4_;
            local_210 = (undefined1 *)0x0;
            local_228 = (ulong)local_228._4_4_ << 0x20;
            if ((-1 < lVar13) && (local_230 != (long **)0x0)) {
              (**(code **)(*(long *)puVar1 + 0x18))(puVar1,local_230,uVar12 << 2);
            }
            iVar30 = (int)local_c0;
          }
          lVar17 = lVar17 + 1;
          lVar15 = lVar15 + 0x40;
        } while (lVar17 < iVar30);
        iVar27 = (int)local_b0;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar27);
  }
  lVar14 = local_c0;
  puVar1 = PTR_PTR_0434a090;
  uVar71 = (ulong)local_c0._4_4_;
  local_c0 = (ulong)local_c0._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_c8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
              (PTR_PTR_0434a090,local_c8,(uVar71 & 0x3fffffff) << 6);
  }
  lVar14 = local_b0;
  uVar71 = (ulong)local_b0._4_4_;
  local_b0 = (ulong)local_b0._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_b8 != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1,local_b8,(uVar71 & 0x3fffffff) << 6);
  }
  return;
}


