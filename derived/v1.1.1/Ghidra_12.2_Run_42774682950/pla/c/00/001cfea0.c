/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001cfea0; name: FUN_001cfea0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001cfea0(long *param_1,long param_2,undefined8 *param_3,float *param_4)

{
  char cVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar25;
  undefined8 uVar17;
  undefined1 auVar24 [16];
  float fVar26;
  int iVar27;
  undefined8 uVar28;
  float fVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  float fVar38;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar37;
  undefined1 auVar32 [16];
  undefined8 uVar39;
  int iVar41;
  undefined1 auVar40 [16];
  float fVar42;
  undefined8 uVar43;
  float fVar45;
  undefined1 auVar44 [16];
  float fVar46;
  float fVar47;
  float fVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar52;
  float fVar59;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar60;
  undefined8 uVar61;
  float fVar62;
  undefined8 uVar63;
  float fVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined8 uVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  uint uVar75;
  undefined1 auVar76 [12];
  undefined1 auVar77 [16];
  undefined1 auVar80 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar87 [16];
  undefined1 auVar86 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar88 [16];
  float fVar89;
  undefined1 auVar90 [12];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  int iVar105;
  undefined1 auVar98 [16];
  undefined1 auVar102 [16];
  undefined1 auVar101 [16];
  undefined1 auVar100 [16];
  undefined1 auVar99 [16];
  int iVar106;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar116;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar117;
  float fVar118;
  float fVar119;
  float afStackY_9a0 [444];
  undefined4 uVar120;
  undefined8 local_260;
  float local_250;
  float fStack_24c;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  float local_210 [4];
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 local_160;
  undefined8 uStack_158;
  uint local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 *local_120 [2];
  undefined8 local_110 [6];
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined8 local_90 [2];
  uint local_78;
  int local_74;
  
  puVar6 = PTR_DAT_04372370;
  local_120[0] = (undefined8 *)(PTR_DAT_04372698 + 0x10);
  param_4[0xc] = 0.0;
  uVar70 = SUB168(*(undefined1 (*) [16])(puVar6 + 0x50),0);
  *(undefined8 *)(param_4 + 2) = uVar70;
  fVar12 = (float)param_3[1];
  fVar10 = (float)*param_3;
  fVar11 = (float)((ulong)*param_3 >> 0x20);
  fVar13 = fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
  uVar15 = CONCAT44(fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12,fVar13);
  if (fVar13 < *(float *)(puVar6 + 0x270)) {
    return;
  }
  uVar28 = NEON_frsqrte(uVar15,4);
  fVar14 = (float)uVar28;
  fVar26 = (float)((ulong)uVar28 >> 0x20);
  uVar15 = NEON_frsqrts(uVar15,CONCAT44(fVar26 * fVar26,fVar14 * fVar14),4);
  fVar42 = *param_4;
  uVar63 = NEON_fmax(CONCAT44((float)((ulong)param_3[10] >> 0x20) *
                              (float)((ulong)*(undefined8 *)(puVar6 + 0x150) >> 0x20) -
                              (float)((ulong)param_3[0xc] >> 0x20),
                              (float)param_3[10] * (float)*(undefined8 *)(puVar6 + 0x150) -
                              (float)param_3[0xc]),uVar70,4);
  fVar14 = fVar14 * (float)uVar15;
  fVar64 = (float)((ulong)uVar63 >> 0x20);
  fVar13 = *(float *)((undefined8 *)*param_1 + 1);
  local_220 = *(undefined8 *)*param_1;
  auVar24 = *(undefined1 (*) [16])(puVar6 + 0x40);
  uVar61 = NEON_fmax(uVar70,CONCAT44((float)((ulong)param_3[0xb] >> 0x20) -
                                     fVar64 * fVar26 * (float)((ulong)uVar15 >> 0x20),
                                     (float)param_3[0xb] - (float)uVar63 * fVar14),4);
  auVar53 = NEON_ext(auVar24,auVar24,8,1);
  uStack_218 = CONCAT44(0x3f000000,fVar13);
  local_90[0] = 0x3727c5ac3727c5ac;
  fVar38 = (float)((ulong)uVar61 >> 0x20);
  auVar53 = NEON_ext(auVar53,auVar24,8,1);
  fVar46 = *(float *)(puVar6 + 0x260);
  fVar26 = *(float *)(param_3 + 8) + fVar10 * (float)uVar61;
  fVar33 = *(float *)((long)param_3 + 0x44) + fVar11 * fVar38;
  fVar35 = *(float *)(param_3 + 9) + fVar12 * (float)uVar61;
  fVar38 = *(float *)((long)param_3 + 0x4c) + (float)((ulong)param_3[1] >> 0x20) * fVar38;
  fVar10 = fVar26 - (float)local_220;
  fVar11 = fVar33 - (float)((ulong)local_220 >> 0x20);
  fVar13 = fVar35 - fVar13;
  fVar12 = fVar38 - 0.5;
  uStack_228 = CONCAT44(fVar38,fVar35);
  local_230 = CONCAT44(fVar33,fVar26);
  uStack_138 = CONCAT44(fVar12,fVar13);
  local_140 = CONCAT44(fVar11,fVar10);
  fVar26 = fVar10 * fVar10 + fVar11 * fVar11 + fVar13 * fVar13;
  fVar38 = fVar10 * fVar10 + fVar11 * fVar11 + fVar13 * fVar13;
  uVar15 = CONCAT44(fVar38,fVar26);
  uVar28 = NEON_frsqrte(uVar15,4);
  fVar33 = (float)uVar28;
  fVar35 = (float)((ulong)uVar28 >> 0x20);
  uVar28 = NEON_frsqrts(uVar15,CONCAT44(fVar35 * fVar35,fVar33 * fVar33),4);
  fVar33 = fVar33 * (float)uVar28;
  fVar35 = fVar35 * (float)((ulong)uVar28 >> 0x20);
  uVar15 = NEON_frsqrts(uVar15,CONCAT44(fVar35 * fVar35,fVar33 * fVar33),4);
  iVar27 = -(uint)(fVar26 <= 0.0);
  iVar34 = -(uint)(fVar38 <= 0.0);
  fVar33 = (float)uVar15 * fVar33;
  fVar35 = (float)((ulong)uVar15 >> 0x20) * fVar35;
  auVar24 = *(undefined1 (*) [16])(puVar6 + 0x240);
  fVar26 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                           CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                    CONCAT11((byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar27 >> 8),
                                             SUB41(fVar33,0) & ~(byte)iVar27)));
  fVar38 = (float)(CONCAT17((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                            CONCAT16((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                                     CONCAT15((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar34 >> 8)
                                              ,CONCAT14(SUB41(fVar35,0) & ~(byte)iVar34,fVar26))))
                  >> 0x20);
  uStack_238 = CONCAT44(fVar12 * fVar38,fVar13 * fVar26);
  local_240 = CONCAT44(fVar11 * fVar38,fVar10 * fVar26);
  local_250 = 1e+07;
  fStack_24c = 1e+07;
  uVar28 = *(undefined8 *)(puVar6 + 0x298);
  uVar15 = *(undefined8 *)(puVar6 + 0x290);
  iVar27 = 0;
  uVar75 = 1;
  local_78 = 1;
  local_74 = 0;
  local_260 = uVar61;
  do {
    uVar17 = local_90[0];
    (*(code *)*local_120[0])(local_120,param_1,&local_140,param_2,param_3 + 2,&local_d0);
    uVar120 = uStack_c4;
    fVar11 = fStack_cc;
    fVar10 = local_d0;
    fVar26 = (float)local_240;
    fVar12 = fVar26 * ((float)local_230 - local_d0);
    fVar33 = (float)((ulong)local_240 >> 0x20);
    fVar38 = fVar33 * ((float)((ulong)local_230 >> 0x20) - fStack_cc);
    fVar36 = (float)uStack_238;
    fVar35 = fVar36 * ((float)uStack_228 - fStack_c8);
    fVar13 = fVar12 + fVar38 + fVar35;
    if (local_250 - (float)uVar17 <= fVar13) {
      if (param_2 == 0) {
        bVar5 = 1;
        goto LAB_001d0100;
      }
      uVar17 = NEON_fmax(uVar17,param_3[10],4);
      if (local_250 - (float)param_3[0xc] <= (float)uVar17) {
        fVar26 = fVar26 * (float)*param_3;
        fVar33 = fVar33 * (float)((ulong)*param_3 >> 0x20);
        fVar36 = fVar36 * (float)param_3[1];
        fVar10 = (float)((ulong)uStack_238 >> 0x20) * (float)((ulong)param_3[1] >> 0x20);
        auVar24._4_4_ = fVar33;
        auVar24._0_4_ = fVar26;
        auVar24._8_4_ = fVar36;
        auVar24._12_4_ = fVar10;
        auVar53._4_4_ = fVar33;
        auVar53._0_4_ = fVar26;
        auVar53._8_4_ = fVar36;
        auVar53._12_4_ = fVar10;
        auVar24 = NEON_ext(auVar24,auVar53,8,1);
        if (0.0 < fVar26 + fVar33 + auVar24._0_4_) {
          return;
        }
        *(undefined8 *)(param_4 + 10) = uStack_238;
        *(undefined8 *)(param_4 + 8) = local_240;
LAB_001d09cc:
        *(undefined8 *)param_4 = uVar61;
        param_4[0xc] = 1.4013e-45;
        return;
      }
      bVar5 = 1;
      local_250 = local_250 - (float)param_3[0xc];
      fStack_24c = fStack_24c - (float)((ulong)param_3[0xc] >> 0x20);
      uVar17 = local_1f0;
    }
    else {
      bVar5 = 0;
      lVar7 = (long)iVar27;
      local_74 = iVar27 + 1;
      *(float *)(&uStack_218 + lVar7 * 2) = fStack_c8;
      *(undefined4 *)((long)&uStack_218 + lVar7 * 0x10 + 4) = uVar120;
      *(float *)(&local_220 + lVar7 * 2) = fVar10;
      *(float *)((long)&local_220 + lVar7 * 0x10 + 4) = fVar11;
      local_250 = fVar13;
      fStack_24c = fVar12 + fVar38 + fVar35;
      iVar27 = iVar27 + 1;
LAB_001d0100:
      local_250 = local_250 - (float)param_3[0xc];
      fStack_24c = fStack_24c - (float)((ulong)param_3[0xc] >> 0x20);
      uVar17 = local_1f0;
    }
    if (0.0 < local_250) {
      fVar12 = (float)param_3[1];
      fVar10 = (float)*param_3;
      fVar11 = (float)((ulong)*param_3 >> 0x20);
      fVar26 = fVar26 * fVar10;
      fVar33 = fVar33 * fVar11;
      fVar36 = fVar36 * fVar12;
      fVar13 = fVar26 + fVar33 + fVar36;
      uVar61 = CONCAT44(fVar26 + fVar33 + fVar36,fVar13);
      if (0.0 <= fVar13) {
        return;
      }
      uVar16 = NEON_fmax(CONCAT44(fStack_24c - fVar64,local_250 - (float)uVar63),uVar70,4);
      uVar39 = NEON_frecpe(uVar61,4);
      uVar43 = NEON_frecps(uVar61,uVar39,4);
      fVar13 = (float)uVar39 * (float)uVar43;
      fVar26 = (float)((ulong)uVar39 >> 0x20) * (float)((ulong)uVar43 >> 0x20);
      uVar61 = NEON_frecps(uVar61,CONCAT44(fVar26,fVar13),4);
      fVar13 = (float)local_260 - (float)uVar16 * fVar13 * (float)uVar61;
      fVar26 = (float)((ulong)local_260 >> 0x20) -
               (float)((ulong)uVar16 >> 0x20) * fVar26 * (float)((ulong)uVar61 >> 0x20);
      uVar61 = CONCAT44(fVar26,fVar13);
      if (fVar42 - fVar14 * fVar46 <= fVar13) {
        return;
      }
      auVar77 = *(undefined1 (*) [16])(param_3 + 8);
      local_230 = CONCAT44(fVar11 * fVar26 + auVar77._4_4_,fVar10 * fVar13 + auVar77._0_4_);
      uStack_228 = CONCAT44((float)((ulong)param_3[1] >> 0x20) * fVar26 + auVar77._12_4_,
                            fVar12 * fVar13 + auVar77._8_4_);
      *(undefined8 *)(param_4 + 10) = uStack_238;
      *(undefined8 *)(param_4 + 8) = local_240;
      local_260 = uVar61;
    }
    uVar75 = uVar75 | iVar27 << 3;
    fStack_1b8 = (float)uStack_228;
    fVar12 = fStack_1b8;
    fStack_1b4 = (float)((ulong)uStack_228 >> 0x20);
    local_1c0 = (float)local_230;
    fVar10 = local_1c0;
    fStack_1bc = (float)((ulong)local_230 >> 0x20);
    fVar11 = fStack_1bc;
    if (0x18 < uVar75 - 9) goto switchD_001d01a8_caseD_d;
    auVar77._8_8_ = uStack_228;
    auVar77._0_8_ = local_230;
    local_1f0 = uVar17;
    switch(uVar75) {
    case 9:
switchD_001d01a8_caseD_9:
      fVar116 = (float)uStack_218;
      fVar25 = (float)((ulong)uStack_218 >> 0x20);
      fVar35 = (float)local_220;
      fVar36 = (float)((ulong)local_220 >> 0x20);
      fVar26 = fVar35 - auVar77._0_4_;
      fVar33 = fVar36 - auVar77._4_4_;
      fVar13 = fVar116 - auVar77._8_4_;
      fVar38 = fVar25 - auVar77._12_4_;
      break;
    case 10:
      goto switchD_001d01a8_caseD_a;
    case 0xb:
      goto switchD_001d01a8_caseD_b;
    case 0xc:
      goto switchD_001d01a8_caseD_c;
    default:
      goto switchD_001d01a8_caseD_d;
    case 0x11:
switchD_001d01a8_caseD_11:
      fVar116 = (float)uStack_218;
      fVar25 = (float)((ulong)uStack_218 >> 0x20);
      auVar22._0_4_ = local_210[0] - (float)local_220;
      auVar22._4_4_ = local_210[1] - local_220._4_4_;
      auVar22._8_4_ = local_210[2] - fVar116;
      auVar22._12_4_ = local_210[3] - fVar25;
      fVar13 = auVar22._0_4_ * (local_210[0] - local_1c0);
      fVar26 = auVar22._4_4_ * (local_210[1] - fStack_1bc);
      fVar33 = auVar22._8_4_ * (local_210[2] - fStack_1b8);
      fVar35 = auVar22._0_4_ * ((float)local_220 - local_1c0);
      fVar36 = auVar22._4_4_ * (local_220._4_4_ - fStack_1bc);
      fVar38 = auVar22._8_4_ * (fVar116 - fStack_1b8);
      fVar45 = fVar13 + fVar26 + fVar33;
      fVar33 = fVar13 + fVar26 + fVar33;
      fVar13 = fVar35 + fVar36 + fVar38;
      fVar38 = fVar35 + fVar36 + fVar38;
      if (fVar45 * fVar13 < 0.0) {
        iVar27 = 2;
        auVar30._0_4_ =
             ((float)local_220 - local_1c0) * fVar45 - (local_210[0] - local_1c0) * fVar13;
        auVar30._4_4_ =
             (local_220._4_4_ - fStack_1bc) * fVar33 - (local_210[1] - fStack_1bc) * fVar38;
        auVar30._8_4_ = (fVar116 - fStack_1b8) * fVar45 - (local_210[2] - fStack_1b8) * fVar13;
        auVar30._12_4_ = (fVar25 - fStack_1b4) * fVar33 - (local_210[3] - fStack_1b4) * fVar38;
        auVar77 = NEON_ext(auVar22,auVar22,4,1);
        auVar55 = NEON_ext(auVar30,auVar30,4,1);
        uVar16 = CONCAT44(auVar22._8_4_ * auVar22._8_4_ +
                          auVar22._0_4_ * auVar22._0_4_ + auVar22._4_4_ * auVar22._4_4_,
                          auVar22._8_4_ * auVar22._8_4_ +
                          auVar22._0_4_ * auVar22._0_4_ + auVar22._4_4_ * auVar22._4_4_);
        fVar26 = auVar22._0_4_ * auVar55._0_4_ - auVar77._0_4_ * auVar30._0_4_;
        fVar33 = auVar22._4_4_ * auVar55._4_4_ - auVar77._4_4_ * auVar30._4_4_;
        auVar31._0_8_ = CONCAT44(fVar33,fVar26);
        auVar31._8_4_ = auVar22._8_4_ * auVar30._0_4_ - auVar22._0_4_ * auVar30._8_4_;
        auVar31._12_4_ = auVar22._12_4_ * auVar30._4_4_ - auVar22._4_4_ * auVar30._12_4_;
        auVar55 = NEON_ext(auVar31,auVar31,4,1);
        uVar39 = NEON_ext(auVar55._0_8_,auVar31._0_8_,4,1);
        uVar17 = NEON_frecpe(uVar16,4);
        uVar16 = NEON_frecps(uVar16,uVar17,4);
        fVar13 = (float)uVar17 * (float)uVar16;
        fVar38 = (float)((ulong)uVar17 >> 0x20) * (float)((ulong)uVar16 >> 0x20);
        auVar23._0_4_ = auVar77._0_4_ * auVar55._0_4_ - auVar22._0_4_ * (float)uVar39;
        auVar23._4_4_ =
             auVar77._4_4_ * auVar55._4_4_ - auVar22._4_4_ * (float)((ulong)uVar39 >> 0x20);
        auVar23._8_4_ = auVar22._0_4_ * fVar26 - auVar22._8_4_ * auVar55._0_4_;
        auVar23._12_4_ = auVar22._4_4_ * fVar33 - auVar22._12_4_ * auVar55._4_4_;
        auVar77 = NEON_ext(auVar23,auVar23,4,1);
        fVar13 = fVar13 * fVar13;
        fVar38 = fVar38 * fVar38;
        fVar26 = auVar77._0_4_ * fVar13;
        fVar33 = auVar77._4_4_ * fVar38;
        fVar13 = auVar23._0_4_ * fVar13;
        fVar38 = auVar23._4_4_ * fVar38;
        fVar35 = (float)local_220;
        fVar36 = local_220._4_4_;
      }
      else {
        fVar35 = (float)((uint)(float)local_220 ^
                        ((uint)(float)local_220 ^ (uint)local_210[0]) & -(uint)(fVar45 <= 0.0));
        fVar36 = (float)((uint)local_220._4_4_ ^
                        ((uint)local_220._4_4_ ^ (uint)local_210[1]) & -(uint)(fVar33 <= 0.0));
        fVar116 = (float)((uint)fVar116 ^
                         ((uint)fVar116 ^ (uint)local_210[2]) & -(uint)(fVar45 <= 0.0));
        fVar25 = (float)((uint)fVar25 ^ ((uint)fVar25 ^ (uint)local_210[3]) & -(uint)(fVar33 <= 0.0)
                        );
        fVar26 = fVar35 - local_1c0;
        fVar33 = fVar36 - fStack_1bc;
        fVar13 = fVar116 - fStack_1b8;
        fVar38 = fVar25 - fStack_1b4;
        iVar27 = 1;
        uStack_218 = CONCAT44(fVar25,fVar116);
        local_220 = CONCAT44(fVar36,fVar35);
      }
      local_74 = iVar27;
      break;
    case 0x12:
      goto switchD_001d01a8_caseD_12;
    case 0x13:
      goto switchD_001d01a8_caseD_13;
    case 0x19:
switchD_001d01a8_caseD_19:
      fVar116 = fStack_1f4;
      fVar36 = fStack_1fc;
      fVar35 = fStack_200;
      fVar33 = local_210[3];
      fVar38 = local_210[2];
      fVar26 = local_210[1];
      fVar13 = local_210[0];
      uVar16 = CONCAT44(local_210[3],local_210[2]);
      uVar17 = CONCAT44(local_210[1],local_210[0]);
      fVar25 = auVar77._0_4_;
      auVar112._0_4_ = fVar25 - fStack_200;
      fVar45 = auVar77._4_4_;
      auVar112._4_4_ = fVar45 - fStack_1fc;
      fVar37 = auVar77._8_4_;
      auVar112._8_4_ = fVar37 - fStack_1f8;
      fVar117 = auVar77._12_4_;
      auVar112._12_4_ = fVar117 - fStack_1f4;
      auVar72._0_4_ = (float)local_220 - fStack_200;
      auVar72._4_4_ = local_220._4_4_ - fStack_1fc;
      auVar72._8_4_ = (float)uStack_218 - fStack_1f8;
      auVar72._12_4_ = uStack_218._4_4_ - fStack_1f4;
      auVar91 = NEON_ext(auVar72,auVar72,4,1);
      auVar66._0_4_ = fStack_200 - local_210[0];
      auVar66._4_4_ = fStack_1fc - local_210[1];
      auVar66._8_4_ = fStack_1f8 - local_210[2];
      auVar66._12_4_ = fStack_1f4 - local_210[3];
      auVar55 = NEON_ext(auVar66,auVar66,4,1);
      auVar104._0_4_ = fVar25 - local_210[0];
      auVar104._4_4_ = fVar45 - local_210[1];
      auVar104._8_4_ = fVar37 - local_210[2];
      auVar104._12_4_ = fVar117 - local_210[3];
      auVar54 = NEON_ext(auVar104,auVar104,4,1);
      auVar56._0_4_ = local_210[0] - (float)local_220;
      auVar56._4_4_ = local_210[1] - local_220._4_4_;
      auVar56._8_4_ = local_210[2] - (float)uStack_218;
      auVar56._12_4_ = local_210[3] - uStack_218._4_4_;
      auVar113._0_4_ = fVar25 - (float)local_220;
      auVar113._4_4_ = fVar45 - local_220._4_4_;
      auVar113._8_4_ = fVar37 - (float)uStack_218;
      auVar113._12_4_ = fVar117 - uStack_218._4_4_;
      auVar67._0_4_ = auVar104._0_4_ * auVar55._0_4_ - auVar66._0_4_ * auVar54._0_4_;
      auVar67._4_4_ = auVar104._4_4_ * auVar55._4_4_ - auVar66._4_4_ * auVar54._4_4_;
      auVar67._8_4_ = auVar104._8_4_ * auVar66._0_4_ - auVar66._8_4_ * auVar104._0_4_;
      auVar67._12_4_ = auVar104._12_4_ * auVar66._4_4_ - auVar66._12_4_ * auVar104._4_4_;
      auVar82 = NEON_ext(auVar67,auVar67,4,1);
      fVar47 = auVar66._0_4_ * auVar91._0_4_ - auVar72._0_4_ * auVar55._0_4_;
      fVar51 = auVar66._4_4_ * auVar91._4_4_ - auVar72._4_4_ * auVar55._4_4_;
      auVar49._0_8_ = CONCAT44(fVar51,fVar47);
      auVar49._8_4_ = auVar66._8_4_ * auVar72._0_4_ - auVar72._8_4_ * auVar66._0_4_;
      auVar49._12_4_ = auVar66._12_4_ * auVar72._4_4_ - auVar72._12_4_ * auVar66._4_4_;
      auVar55 = NEON_ext(auVar49,auVar49,4,1);
      auVar54 = NEON_ext(auVar112,auVar112,4,1);
      auVar111 = NEON_ext(auVar56,auVar56,4,1);
      auVar68._0_4_ = auVar112._0_4_ * auVar91._0_4_ - auVar72._0_4_ * auVar54._0_4_;
      auVar68._4_4_ = auVar112._4_4_ * auVar91._4_4_ - auVar72._4_4_ * auVar54._4_4_;
      auVar68._8_4_ = auVar112._8_4_ * auVar72._0_4_ - auVar72._8_4_ * auVar112._0_4_;
      auVar68._12_4_ = auVar112._12_4_ * auVar72._4_4_ - auVar72._12_4_ * auVar112._4_4_;
      auVar91 = NEON_ext(auVar68,auVar68,4,1);
      auVar44._8_8_ = auVar49._0_8_;
      auVar44._0_8_ = auVar55._0_8_;
      auVar54 = NEON_ext(auVar113,auVar113,4,1);
      fVar118 = auVar55._0_4_;
      fVar89 = fVar118 * auVar91._0_4_;
      fVar119 = auVar55._4_4_;
      auVar73._0_4_ = auVar113._0_4_ * auVar111._0_4_ - auVar56._0_4_ * auVar54._0_4_;
      auVar73._4_4_ = auVar113._4_4_ * auVar111._4_4_ - auVar56._4_4_ * auVar54._4_4_;
      auVar73._8_4_ = auVar113._8_4_ * auVar56._0_4_ - auVar56._8_4_ * auVar113._0_4_;
      auVar73._12_4_ = auVar113._12_4_ * auVar56._4_4_ - auVar56._12_4_ * auVar113._4_4_;
      auVar83._0_4_ = auVar82._0_4_ * fVar118;
      auVar83._4_4_ = auVar82._4_4_ * fVar119;
      auVar83._8_4_ = auVar67._0_4_ * fVar47;
      auVar83._12_4_ = auVar67._4_4_ * fVar51;
      auVar54 = NEON_ext(auVar73,auVar73,4,1);
      fVar60 = fVar118 * auVar54._0_4_;
      fVar62 = fVar119 * auVar54._4_4_;
      auVar84._4_12_ = auVar83._4_12_;
      auVar84._0_4_ = auVar83._0_4_;
      auVar86._0_8_ = auVar84._0_8_;
      auVar86._8_4_ = auVar83._8_4_;
      auVar86._12_4_ = auVar83._12_4_;
      auVar85._8_8_ = auVar86._8_8_;
      auVar85._4_4_ = fVar89;
      auVar85._0_4_ = auVar83._0_4_;
      auVar87._0_12_ = auVar85._0_12_;
      auVar87._12_4_ = fVar47 * auVar68._0_4_;
      auVar54 = NEON_ext(auVar87,auVar87,8,1);
      fVar52 = auVar54._0_4_ + auVar82._4_4_ * fVar119 + auVar83._0_4_;
      fVar59 = auVar54._4_4_ + fVar119 * auVar91._4_4_ + fVar89;
      auVar58._0_8_ = CONCAT44(fVar59,fVar52);
      fVar89 = fVar60 + fVar62 + fVar47 * auVar73._0_4_;
      uStack_158 = CONCAT44(fVar60 + fVar62 + fVar47 * auVar73._0_4_,fVar89);
      auVar58._8_8_ = uStack_158;
      uVar75 = (-(uint)(fVar59 < 0.0) & 2) + (uint)(fVar52 < 0.0) | -(uint)(fVar89 < 0.0) & 4;
      if (uVar75 != 7) {
        local_74 = 2;
        cVar1 = PTR_DAT_043723e0[uVar75];
        uStack_138 = auVar49._0_8_;
        local_140 = auVar55._0_8_;
        local_160 = auVar58._0_8_;
        if (cVar1 < 0) {
          iVar27 = cVar1 + 8;
          if (2 < iVar27) {
            iVar27 = 1;
            local_78 = 1;
            local_74 = 1;
            goto switchD_001d01a8_caseD_9;
          }
          lVar7 = (long)iVar27;
          *(float *)(&uStack_218 + lVar7 * 2) = fStack_1f8;
          *(float *)((long)&uStack_218 + lVar7 * 0x10 + 4) = fVar116;
          *(float *)(&local_220 + lVar7 * 2) = fVar35;
          *(float *)((long)&local_220 + lVar7 * 0x10 + 4) = fVar36;
        }
        else {
          iVar27 = (int)cVar1;
          lVar7 = (long)iVar27;
          fVar13 = *(float *)(&local_220 + lVar7 * 2);
          fVar26 = *(float *)((long)&local_220 + lVar7 * 0x10 + 4);
          fVar38 = *(float *)(&uStack_218 + lVar7 * 2);
          fVar33 = *(float *)((long)&uStack_218 + lVar7 * 0x10 + 4);
          cVar2 = PTR_DAT_043723e8[iVar27];
          lVar7 = (long)cVar2;
          cVar1 = PTR_DAT_043723e8[(long)iVar27 + 2];
          lVar9 = (long)cVar1;
          auVar20._0_4_ = (fVar25 - fVar13) * (*(float *)(&local_220 + lVar7 * 2) - fVar13);
          auVar20._4_4_ =
               (fVar45 - fVar26) * (*(float *)((long)&local_220 + lVar7 * 0x10 + 4) - fVar26);
          auVar20._8_4_ = (fVar37 - fVar38) * (*(float *)(&uStack_218 + lVar7 * 2) - fVar38);
          auVar20._12_4_ =
               (fVar117 - fVar33) * (*(float *)((long)&uStack_218 + lVar7 * 0x10 + 4) - fVar33);
          auVar77 = NEON_ext(auVar20,auVar20,8,1);
          if (auVar20._0_4_ + auVar20._4_4_ + auVar77._0_4_ < 0.0) {
            fVar118 = *(float *)(&local_220 + lVar9 * 2);
            fVar119 = *(float *)((long)&local_220 + lVar9 * 0x10 + 4);
            fVar47 = *(float *)(&uStack_218 + lVar9 * 2);
            fVar89 = *(float *)((long)&uStack_218 + lVar9 * 0x10 + 4);
            *(float *)(&uStack_218 + lVar7 * 2) = fStack_1f8;
            *(float *)((long)&uStack_218 + lVar7 * 0x10 + 4) = fVar116;
            *(float *)(&local_220 + lVar7 * 2) = fVar35;
            *(float *)((long)&local_220 + lVar7 * 0x10 + 4) = fVar36;
            fVar13 = (fVar25 - fVar13) * (fVar118 - fVar13);
            fVar26 = (fVar45 - fVar26) * (fVar119 - fVar26);
            fVar38 = (fVar37 - fVar38) * (fVar47 - fVar38);
            fVar33 = (fVar117 - fVar33) * (fVar89 - fVar33);
            auVar3._4_4_ = fVar26;
            auVar3._0_4_ = fVar13;
            auVar3._8_4_ = fVar38;
            auVar3._12_4_ = fVar33;
            auVar4._4_4_ = fVar26;
            auVar4._0_4_ = fVar13;
            auVar4._8_4_ = fVar38;
            auVar4._12_4_ = fVar33;
            auVar77 = NEON_ext(auVar3,auVar4,8,1);
            if (fVar13 + fVar26 + auVar77._0_4_ < 0.0) {
              uVar17 = CONCAT44(local_210[1],local_210[0]);
              iVar27 = (int)cVar2;
              if (cVar1 != 2) {
                iVar27 = (int)cVar1;
              }
              (&uStack_218)[(long)iVar27 * 2] = CONCAT44(local_210[3],local_210[2]);
              (&local_220)[(long)iVar27 * 2] = uVar17;
              auVar77._4_4_ = fStack_1bc;
              auVar77._0_4_ = local_1c0;
              auVar77._8_4_ = fStack_1b8;
              auVar77._12_4_ = fStack_1b4;
              iVar27 = 1;
              local_74 = 1;
              goto switchD_001d01a8_caseD_9;
            }
          }
          else {
            *(float *)(&uStack_218 + lVar9 * 2) = fStack_1f8;
            *(float *)((long)&uStack_218 + lVar9 * 0x10 + 4) = fVar116;
            *(float *)(&local_220 + lVar9 * 2) = fVar35;
            *(float *)((long)&local_220 + lVar9 * 0x10 + 4) = fVar36;
          }
        }
        goto switchD_001d01a8_caseD_11;
      }
      auVar19._0_4_ = ((float)local_220 - fVar25) * fVar118;
      auVar19._4_4_ = (local_220._4_4_ - fVar45) * fVar119;
      auVar19._8_4_ = ((float)uStack_218 - fVar37) * fVar47;
      auVar19._12_4_ = (uStack_218._4_4_ - fVar117) * fVar51;
      auVar77 = NEON_ext(auVar19,auVar19,8,1);
      fVar35 = (float)local_220;
      fVar36 = local_220._4_4_;
      fVar116 = (float)uStack_218;
      fVar25 = uStack_218._4_4_;
      if (auVar77._0_4_ + auVar19._0_4_ + auVar19._4_4_ < 0.0) {
        auVar44._0_4_ = -fVar118;
        auVar44._4_4_ = -fVar119;
        auVar44._8_4_ = -fVar47;
        auVar44._12_4_ = -fVar51;
        auVar21._8_8_ = _UNK_03888fb8;
        auVar21._0_8_ = _DAT_03888fb0;
        local_210[2] = (float)uStack_218;
        local_210[3] = uStack_218._4_4_;
        local_210[0] = (float)local_220;
        local_210[1] = local_220._4_4_;
        auVar58 = a64_TBL(ZEXT816(0),auVar58,auVar21);
        fVar35 = fVar13;
        fVar36 = fVar26;
        fVar116 = fVar38;
        fVar25 = fVar33;
        local_220 = uVar17;
        uStack_218 = uVar16;
      }
      uStack_138 = auVar44._8_8_;
      local_140 = auVar44._0_8_;
      uStack_158 = auVar58._8_8_;
      local_160 = auVar58._0_8_;
      goto LAB_001d0870;
    case 0x1a:
      goto switchD_001d01a8_caseD_1a;
    case 0x21:
      auVar54._0_4_ = fStack_200 - local_210[0];
      auVar54._4_4_ = fStack_1fc - local_210[1];
      auVar54._8_4_ = fStack_1f8 - local_210[2];
      auVar54._12_4_ = fStack_1f4 - local_210[3];
      fVar38 = (float)uStack_1e8;
      fVar33 = (float)((ulong)uStack_1e8 >> 0x20);
      fVar13 = (float)uVar17;
      fVar26 = (float)((ulong)uVar17 >> 0x20);
      auVar55._0_4_ = fVar13 - local_210[0];
      auVar55._4_4_ = fVar26 - local_210[1];
      auVar55._8_4_ = fVar38 - local_210[2];
      auVar55._12_4_ = fVar33 - local_210[3];
      auVar91 = NEON_ext(auVar55,auVar55,4,1);
      auVar77 = NEON_ext(auVar54,auVar54,4,1);
      local_220._4_4_ = (float)((ulong)local_220 >> 0x20);
      uStack_218._4_4_ = (float)((ulong)uStack_218 >> 0x20);
      auVar111._0_4_ = fVar13 - fStack_200;
      auVar111._4_4_ = fVar26 - fStack_1fc;
      auVar111._8_4_ = fVar38 - fStack_1f8;
      auVar111._12_4_ = fVar33 - fStack_1f4;
      auVar107 = NEON_ext(auVar111,auVar111,4,1);
      auVar82._0_4_ = local_210[0] - (float)local_220;
      auVar82._4_4_ = local_210[1] - local_220._4_4_;
      auVar82._8_4_ = local_210[2] - (float)uStack_218;
      auVar82._12_4_ = local_210[3] - uStack_218._4_4_;
      auVar88._0_4_ = (float)local_220 - fStack_200;
      auVar88._4_4_ = local_220._4_4_ - fStack_1fc;
      auVar88._8_4_ = (float)uStack_218 - fStack_1f8;
      auVar88._12_4_ = uStack_218._4_4_ - fStack_1f4;
      auVar108._0_4_ = auVar54._0_4_ * auVar91._0_4_ - auVar55._0_4_ * auVar77._0_4_;
      auVar108._4_4_ = auVar54._4_4_ * auVar91._4_4_ - auVar55._4_4_ * auVar77._4_4_;
      auVar108._8_4_ = auVar54._8_4_ * auVar55._0_4_ - auVar55._8_4_ * auVar54._0_4_;
      auVar108._12_4_ = auVar54._12_4_ * auVar55._4_4_ - auVar55._12_4_ * auVar54._4_4_;
      auVar92 = NEON_ext(auVar108,auVar108,4,1);
      auVar91._0_4_ = fVar13 - (float)local_220;
      auVar91._4_4_ = fVar26 - local_220._4_4_;
      auVar91._8_4_ = fVar38 - (float)uStack_218;
      auVar91._12_4_ = fVar33 - uStack_218._4_4_;
      auVar114 = NEON_ext(auVar91,auVar91,4,1);
      fVar37 = auVar53._0_4_ * (local_1c0 - fVar13);
      fVar117 = auVar53._4_4_ * (fStack_1bc - fVar26);
      fVar118 = auVar53._8_4_ * (fStack_1b8 - fVar38);
      fVar13 = auVar92._4_4_;
      auVar77 = NEON_ext(auVar88,auVar88,4,1);
      fVar26 = auVar92._0_4_;
      fVar119 = fVar37 * fVar26;
      auVar98._0_4_ = fVar26 * fVar26;
      auVar98._4_4_ = fVar13 * fVar13;
      auVar98._8_4_ = auVar108._0_4_ * auVar108._0_4_;
      auVar98._12_4_ = auVar108._4_4_ * auVar108._4_4_;
      auVar92._0_4_ = auVar88._0_4_ * auVar107._0_4_ - auVar111._0_4_ * auVar77._0_4_;
      auVar92._4_4_ = auVar88._4_4_ * auVar107._4_4_ - auVar111._4_4_ * auVar77._4_4_;
      auVar92._8_4_ = auVar88._8_4_ * auVar111._0_4_ - auVar111._8_4_ * auVar88._0_4_;
      auVar92._12_4_ = auVar88._12_4_ * auVar111._4_4_ - auVar111._12_4_ * auVar88._4_4_;
      auVar107 = NEON_ext(auVar92,auVar92,4,1);
      fVar33 = auVar107._4_4_;
      auVar77 = NEON_ext(auVar82,auVar82,4,1);
      fVar35 = auVar107._0_4_;
      auVar99._4_12_ = auVar98._4_12_;
      auVar99._0_4_ = auVar98._0_4_;
      auVar101._0_8_ = auVar99._0_8_;
      auVar101._8_4_ = auVar98._8_4_;
      auVar101._12_4_ = auVar98._12_4_;
      auVar100._8_8_ = auVar101._8_8_;
      auVar100._4_4_ = fVar35 * fVar35;
      auVar100._0_4_ = auVar98._0_4_;
      auVar102._0_12_ = auVar100._0_12_;
      auVar102._12_4_ = auVar92._0_4_ * auVar92._0_4_;
      fVar36 = auVar82._0_4_ * auVar114._0_4_ - auVar91._0_4_ * auVar77._0_4_;
      fVar116 = auVar82._4_4_ * auVar114._4_4_ - auVar91._4_4_ * auVar77._4_4_;
      auVar115._0_8_ = CONCAT44(fVar116,fVar36);
      auVar115._8_4_ = auVar82._8_4_ * auVar91._0_4_ - auVar91._8_4_ * auVar82._0_4_;
      auVar115._12_4_ = auVar82._12_4_ * auVar91._4_4_ - auVar91._12_4_ * auVar82._4_4_;
      auVar114 = NEON_ext(auVar115,auVar115,4,1);
      fVar25 = auVar114._0_4_;
      fVar45 = auVar114._4_4_;
      auVar77 = NEON_ext(auVar102,auVar102,8,1);
      auVar93._0_4_ = auVar77._0_4_ + fVar13 * fVar13 + auVar98._0_4_;
      auVar93._4_4_ = auVar77._4_4_ + fVar33 * fVar33 + fVar35 * fVar35;
      auVar107._8_8_ = auVar115._0_8_;
      auVar107._0_8_ = auVar114._0_8_;
      fVar26 = fVar25 * fVar25 + fVar45 * fVar45 + fVar36 * fVar36;
      fVar38 = fVar25 * fVar25 + fVar45 * fVar45 + fVar36 * fVar36;
      auVar93._12_4_ = fVar38;
      auVar93._8_4_ = fVar26;
      auVar114._4_12_ = auVar107._4_12_;
      auVar114._0_4_ = fVar119;
      auVar79._0_8_ = auVar114._0_8_;
      auVar79._8_4_ = fVar118 * auVar108._0_4_;
      auVar79._12_4_ = fVar116;
      auVar78._8_8_ = auVar79._8_8_;
      auVar78._4_4_ = fVar37 * fVar35;
      auVar78._0_4_ = fVar119;
      auVar80._0_12_ = auVar78._0_12_;
      auVar80._12_4_ = fVar118 * auVar92._0_4_;
      auVar108 = NEON_frecpe(auVar93,4);
      iVar34 = -(uint)(auVar93._0_4_ == 0.0);
      iVar41 = -(uint)(auVar93._4_4_ == 0.0);
      iVar105 = -(uint)(fVar26 == 0.0);
      iVar106 = -(uint)(fVar38 == 0.0);
      auVar77 = NEON_ext(auVar80,auVar80,8,1);
      auVar92 = NEON_frecps(auVar93,auVar108,4);
      fVar13 = auVar77._0_4_ + fVar117 * fVar13 + fVar119;
      fVar26 = auVar77._4_4_ + fVar117 * fVar33 + fVar37 * fVar35;
      fVar33 = fVar37 * fVar25 + fVar117 * fVar45 + fVar118 * fVar36;
      fVar35 = fVar37 * fVar25 + fVar117 * fVar45 + fVar118 * fVar36;
      auVar109._0_4_ = auVar108._0_4_ * auVar92._0_4_;
      auVar109._4_4_ = auVar108._4_4_ * auVar92._4_4_;
      auVar109._8_4_ = auVar108._8_4_ * auVar92._8_4_;
      auVar109._12_4_ = auVar108._12_4_ * auVar92._12_4_;
      auVar77 = NEON_frecps(auVar93,auVar109,4);
      auVar110._0_4_ = auVar109._0_4_ * auVar77._0_4_ * fVar13 * ABS(fVar13);
      auVar110._4_4_ = auVar109._4_4_ * auVar77._4_4_ * fVar26 * ABS(fVar26);
      auVar110._8_4_ = auVar109._8_4_ * auVar77._8_4_ * fVar33 * ABS(fVar33);
      auVar110._12_4_ = auVar109._12_4_ * auVar77._12_4_ * fVar35 * ABS(fVar35);
      auVar94[0] = ~(byte)iVar34;
      auVar94[1] = ~(byte)((uint)iVar34 >> 8);
      auVar94[2] = ~(byte)((uint)iVar34 >> 0x10);
      auVar94[3] = ~(byte)((uint)iVar34 >> 0x18);
      auVar94[4] = ~(byte)iVar41;
      auVar94[5] = ~(byte)((uint)iVar41 >> 8);
      auVar94[6] = ~(byte)((uint)iVar41 >> 0x10);
      auVar94[7] = ~(byte)((uint)iVar41 >> 0x18);
      auVar94[8] = ~(byte)iVar105;
      auVar94[9] = ~(byte)((uint)iVar105 >> 8);
      auVar94[10] = ~(byte)((uint)iVar105 >> 0x10);
      auVar94[0xb] = ~(byte)((uint)iVar105 >> 0x18);
      auVar94[0xc] = ~(byte)iVar106;
      auVar94[0xd] = ~(byte)((uint)iVar106 >> 8);
      auVar94[0xe] = ~(byte)((uint)iVar106 >> 0x10);
      auVar94[0xf] = ~(byte)((uint)iVar106 >> 0x18);
      auVar77 = auVar24 ^ (auVar24 ^ auVar110) & auVar94;
      auVar108 = NEON_ext(auVar77,auVar77,8,1);
      auVar90._0_8_ = auVar77._0_8_;
      uVar16 = NEON_fmaxp(auVar90._0_8_,auVar90._0_8_,4);
      uVar16 = NEON_fmax(CONCAT44(auVar108._0_4_,auVar108._0_4_),uVar16,4);
      fVar38 = (float)uVar16;
      if (9.9999994e-11 <= fVar38) {
        auVar95._0_4_ = auVar77._0_4_;
        cVar1 = PTR_DAT_043723d0
                [(-(uint)((float)((ulong)uVar16 >> 0x20) <= auVar77._4_4_) & 2) +
                 (uint)(fVar38 <= auVar95._0_4_) | -(uint)(fVar38 <= auVar77._8_4_) & 4];
        if (cVar1 == '\x03') {
          auVar90 = auVar77._0_12_;
        }
        else {
          uVar120 = (undefined4)uVar15;
          if (cVar1 == '\x02') {
            auVar90._8_4_ = uVar120;
          }
          else if (cVar1 == '\x01') {
            auVar95._8_8_ = auVar77._8_8_;
            auVar95._4_4_ = uVar120;
            auVar90 = auVar95._0_12_;
          }
          else {
            auVar96._4_12_ = auVar77._4_12_;
            auVar96._0_4_ = uVar120;
            auVar90 = auVar96._0_12_;
          }
        }
        uVar16 = NEON_fmaxp(auVar90._0_8_,auVar90._0_8_,4);
        uVar16 = NEON_fmax(CONCAT44(auVar90._8_4_,auVar90._8_4_),uVar16,4);
        if (fVar38 <= (float)uVar16 * 1.1) {
          iVar34 = -(uint)(0.0 <= fVar33);
          iVar41 = -(uint)(0.0 <= fVar35);
          uVar75 = (uint)(byte)(-(0.0 <= fVar13) & (byte)_DAT_03889700);
          auVar76._0_8_ =
               CONCAT17((byte)(-(uint)(0.0 <= fVar26) >> 0x18) &
                        (byte)((ulong)_DAT_03889700 >> 0x38),
                        (uint7)CONCAT14((byte)-(uint)(0.0 <= fVar26) &
                                        (byte)((ulong)_DAT_03889700 >> 0x20),uVar75));
          auVar76[8] = (byte)iVar34 & (byte)_UNK_03889708;
          auVar76[9] = (byte)((uint)iVar34 >> 8) & (byte)((ulong)_UNK_03889708 >> 8);
          auVar76[10] = (byte)((uint)iVar34 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x10);
          auVar76[0xb] = (byte)((uint)iVar34 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x18);
          auVar81[0xc] = (byte)iVar41 & (byte)((ulong)_UNK_03889708 >> 0x20);
          auVar81._0_12_ = auVar76;
          auVar81[0xd] = (byte)((uint)iVar41 >> 8) & (byte)((ulong)_UNK_03889708 >> 0x28);
          auVar81[0xe] = (byte)((uint)iVar41 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x30);
          auVar81[0xf] = (byte)((uint)iVar41 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x38);
          uVar75 = uVar75 + (int)((ulong)auVar76._0_8_ >> 0x20) + auVar76._8_4_ + auVar81._12_4_;
          if ((~uVar75 & 3) == 0) {
            auVar103._0_4_ = (local_1c0 - fStack_200) * auVar88._0_4_;
            auVar103._4_4_ = (fStack_1bc - fStack_1fc) * auVar88._4_4_;
            auVar103._8_4_ = (fStack_1b8 - fStack_1f8) * auVar88._8_4_;
            auVar103._12_4_ = (fStack_1b4 - fStack_1f4) * auVar88._12_4_;
            auVar108 = NEON_ext(auVar103,auVar103,8,1);
            auVar97._0_4_ = (local_1c0 - fStack_200) * (local_210[0] - fStack_200);
            auVar97._4_4_ = (fStack_1bc - fStack_1fc) * (local_210[1] - fStack_1fc);
            auVar97._8_4_ = (fStack_1b8 - fStack_1f8) * (local_210[2] - fStack_1f8);
            auVar97._12_4_ = (fStack_1b4 - fStack_1f4) * (local_210[3] - fStack_1f4);
            auVar92 = NEON_ext(auVar97,auVar97,8,1);
            auVar71._0_4_ = auVar88._0_4_ * auVar111._0_4_;
            auVar71._4_4_ = auVar88._4_4_ * auVar111._4_4_;
            auVar71._8_4_ = auVar88._8_4_ * auVar111._8_4_;
            auVar71._12_4_ = auVar88._12_4_ * auVar111._12_4_;
            auVar65._0_4_ = (local_210[0] - fStack_200) * auVar111._0_4_;
            auVar65._4_4_ = (local_210[1] - fStack_1fc) * auVar111._4_4_;
            auVar65._8_4_ = (local_210[2] - fStack_1f8) * auVar111._8_4_;
            auVar65._12_4_ = (local_210[3] - fStack_1f4) * auVar111._12_4_;
            auVar111 = NEON_ext(auVar71,auVar71,8,1);
            auVar77 = NEON_ext(auVar65,auVar65,8,1);
            uVar8 = 0xfffffffd;
            if ((auVar92._0_4_ + auVar97._0_4_ + auVar97._4_4_) *
                (auVar111._0_4_ + auVar71._0_4_ + auVar71._4_4_) <=
                (auVar108._0_4_ + auVar103._0_4_ + auVar103._4_4_) *
                (auVar77._0_4_ + auVar65._0_4_ + auVar65._4_4_)) {
              uVar8 = 0xfffffffe;
            }
            uVar75 = uVar8 & uVar75;
          }
          if ((~uVar75 & 6) == 0) {
            auVar74._0_4_ = (local_1c0 - (float)local_220) * auVar82._0_4_;
            auVar74._4_4_ = (fStack_1bc - local_220._4_4_) * auVar82._4_4_;
            auVar74._8_4_ = (fStack_1b8 - (float)uStack_218) * auVar82._8_4_;
            auVar74._12_4_ = (fStack_1b4 - uStack_218._4_4_) * auVar82._12_4_;
            auVar111 = NEON_ext(auVar74,auVar74,8,1);
            auVar69._0_4_ = (local_1c0 - (float)local_220) * (fStack_200 - (float)local_220);
            auVar69._4_4_ = (fStack_1bc - local_220._4_4_) * (fStack_1fc - local_220._4_4_);
            auVar69._8_4_ = (fStack_1b8 - (float)uStack_218) * (fStack_1f8 - (float)uStack_218);
            auVar69._12_4_ = (fStack_1b4 - uStack_218._4_4_) * (fStack_1f4 - uStack_218._4_4_);
            auVar88 = NEON_ext(auVar69,auVar69,8,1);
            auVar57._0_4_ = auVar82._0_4_ * auVar91._0_4_;
            auVar57._4_4_ = auVar82._4_4_ * auVar91._4_4_;
            auVar57._8_4_ = auVar82._8_4_ * auVar91._8_4_;
            auVar57._12_4_ = auVar82._12_4_ * auVar91._12_4_;
            auVar50._0_4_ = (fStack_200 - (float)local_220) * auVar91._0_4_;
            auVar50._4_4_ = (fStack_1fc - local_220._4_4_) * auVar91._4_4_;
            auVar50._8_4_ = (fStack_1f8 - (float)uStack_218) * auVar91._8_4_;
            auVar50._12_4_ = (fStack_1f4 - uStack_218._4_4_) * auVar91._12_4_;
            auVar91 = NEON_ext(auVar57,auVar57,8,1);
            auVar77 = NEON_ext(auVar50,auVar50,8,1);
            uVar8 = 0xfffffffb;
            if ((auVar88._0_4_ + auVar69._0_4_ + auVar69._4_4_) *
                (auVar91._0_4_ + auVar57._0_4_ + auVar57._4_4_) <=
                (auVar111._0_4_ + auVar74._0_4_ + auVar74._4_4_) *
                (auVar77._0_4_ + auVar50._0_4_ + auVar50._4_4_)) {
              uVar8 = 0xfffffffd;
            }
            uVar75 = uVar8 & uVar75;
          }
          if (((uVar75 ^ 0xffffffff) & 5) == 0) {
            auVar48._0_4_ = auVar54._0_4_ * (local_1c0 - local_210[0]);
            auVar48._4_4_ = auVar54._4_4_ * (fStack_1bc - local_210[1]);
            auVar48._8_4_ = auVar54._8_4_ * (fStack_1b8 - local_210[2]);
            auVar48._12_4_ = auVar54._12_4_ * (fStack_1b4 - local_210[3]);
            auVar91 = NEON_ext(auVar48,auVar48,8,1);
            auVar40._0_4_ = (local_1c0 - local_210[0]) * ((float)local_220 - local_210[0]);
            auVar40._4_4_ = (fStack_1bc - local_210[1]) * (local_220._4_4_ - local_210[1]);
            auVar40._8_4_ = (fStack_1b8 - local_210[2]) * ((float)uStack_218 - local_210[2]);
            auVar40._12_4_ = (fStack_1b4 - local_210[3]) * (uStack_218._4_4_ - local_210[3]);
            auVar29._0_4_ = auVar54._0_4_ * auVar55._0_4_;
            auVar29._4_4_ = auVar54._4_4_ * auVar55._4_4_;
            auVar29._8_4_ = auVar54._8_4_ * auVar55._8_4_;
            auVar29._12_4_ = auVar54._12_4_ * auVar55._12_4_;
            auVar54 = NEON_ext(auVar40,auVar40,8,1);
            auVar18._0_4_ = ((float)local_220 - local_210[0]) * auVar55._0_4_;
            auVar18._4_4_ = (local_220._4_4_ - local_210[1]) * auVar55._4_4_;
            auVar18._8_4_ = ((float)uStack_218 - local_210[2]) * auVar55._8_4_;
            auVar18._12_4_ = (uStack_218._4_4_ - local_210[3]) * auVar55._12_4_;
            auVar55 = NEON_ext(auVar29,auVar29,8,1);
            auVar77 = NEON_ext(auVar18,auVar18,8,1);
            uVar8 = 0xfffffffe;
            if ((auVar54._0_4_ + auVar40._0_4_ + auVar40._4_4_) *
                (auVar55._0_4_ + auVar29._0_4_ + auVar29._4_4_) <=
                (auVar91._0_4_ + auVar48._0_4_ + auVar48._4_4_) *
                (auVar77._0_4_ + auVar18._0_4_ + auVar18._4_4_)) {
              uVar8 = 0xfffffffb;
            }
            uVar75 = uVar8 & uVar75;
          }
          cVar1 = PTR_DAT_043723d8[(ulong)uVar75 & 7];
        }
        iVar34 = (int)cVar1;
        if (-1 < iVar34) {
          (&uStack_218)[(long)iVar34 * 2] = uStack_1e8;
          (&local_220)[(long)iVar34 * 2] = uVar17;
          if (iVar27 == 4) {
            auVar77._4_4_ = fStack_1bc;
            auVar77._0_4_ = local_1c0;
            auVar77._8_4_ = fStack_1b8;
            auVar77._12_4_ = fStack_1b4;
            iVar27 = 3;
            local_74 = 3;
            goto switchD_001d01a8_caseD_19;
          }
switchD_001d01a8_caseD_b:
          do {
          } while( true );
        }
      }
switchD_001d01a8_caseD_d:
      if (param_2 != 0) {
        FUN_032ca3b4(&local_d0,param_3 + 2);
        FUN_001d109c(&local_220,local_120,param_1,param_2,&local_d0,local_90,&local_74,&local_78,
                     local_110,&local_e0,uVar15,uVar28);
        *(ulong *)(param_4 + 10) =
             CONCAT44(0.0 - (float)((ulong)uStack_d8 >> 0x20),0.0 - (float)uStack_d8);
        *(ulong *)(param_4 + 8) =
             CONCAT44(0.0 - (float)((ulong)local_e0 >> 0x20),0.0 - (float)local_e0);
        *(ulong *)(param_4 + 2) =
             CONCAT44((float)((ulong)local_110[0] >> 0x20) - (float)((ulong)param_3[0xc] >> 0x20),
                      (float)local_110[0] - (float)param_3[0xc]);
      }
      goto LAB_001d09cc;
    }
    uStack_138 = CONCAT44(fVar38,fVar13);
    local_140 = CONCAT44(fVar33,fVar26);
LAB_001d0870:
    uVar75 = local_78;
    local_150 = local_78;
    if ((bool)(bVar5 & local_78 + iVar27 == 4)) goto LAB_001d09cc;
    lVar7 = (long)iVar27;
    (&uStack_218)[lVar7 * 2] = CONCAT44(fVar25,fVar116);
    (&local_220)[lVar7 * 2] = CONCAT44(fVar36,fVar35);
    *(ulong *)(local_210 + lVar7 * 4 + 2) = CONCAT44(fVar25,fVar116);
    *(ulong *)(local_210 + lVar7 * 4) = CONCAT44(fVar36,fVar35);
    fVar13 = -(float)local_140;
    fVar26 = -local_140._4_4_;
    fVar37 = -(float)uStack_138;
    uStack_138._4_4_ = -uStack_138._4_4_;
    fVar38 = (float)local_140 * (float)local_140 + local_140._4_4_ * local_140._4_4_ +
             (float)uStack_138 * (float)uStack_138;
    fVar25 = (float)local_140 * (float)local_140 + local_140._4_4_ * local_140._4_4_ +
             (float)uStack_138 * (float)uStack_138;
    uVar17 = CONCAT44(fVar25,fVar38);
    uVar16 = NEON_frsqrte(uVar17,4);
    uStack_138 = CONCAT44(uStack_138._4_4_,fVar37);
    local_140 = CONCAT44(fVar26,fVar13);
    fVar33 = (float)uVar16;
    fVar45 = (float)((ulong)uVar16 >> 0x20);
    uVar16 = NEON_frsqrts(uVar17,CONCAT44(fVar45 * fVar45,fVar33 * fVar33),4);
    fVar33 = fVar33 * (float)uVar16;
    fVar45 = fVar45 * (float)((ulong)uVar16 >> 0x20);
    iVar34 = -(uint)(fVar38 <= 0.0);
    iVar41 = -(uint)(fVar25 <= 0.0);
    uVar17 = NEON_frsqrts(uVar17,CONCAT44(fVar45 * fVar45,fVar33 * fVar33),4);
    fVar33 = (float)uVar17 * fVar33;
    fVar45 = (float)((ulong)uVar17 >> 0x20) * fVar45;
    fVar38 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                             CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                                      CONCAT11((byte)((uint)fVar33 >> 8) &
                                               ~(byte)((uint)iVar34 >> 8),
                                               SUB41(fVar33,0) & ~(byte)iVar34)));
    fVar13 = fVar38 * fVar13;
    fVar33 = (float)(CONCAT17((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                              CONCAT16((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10),
                                       CONCAT15((byte)((uint)fVar45 >> 8) &
                                                ~(byte)((uint)iVar41 >> 8),
                                                CONCAT14(SUB41(fVar45,0) & ~(byte)iVar41,fVar38))))
                    >> 0x20);
    fVar26 = fVar33 * fVar26;
    auVar32._0_8_ = CONCAT44(fVar26,fVar13);
    auVar32._8_4_ = fVar38 * fVar37;
    auVar32._12_4_ = fVar33 * uStack_138._4_4_;
    fVar13 = (fVar10 - fVar35) * fVar13;
    fVar26 = (fVar11 - fVar36) * fVar26;
    fStack_24c = (fVar12 - fVar116) * auVar32._8_4_;
    local_250 = fVar13 + fVar26 + fStack_24c;
    fStack_24c = fVar13 + fVar26 + fStack_24c;
    local_90[0] = CONCAT44((float)((ulong)local_90[0] >> 0x20) * 1.3,(float)local_90[0] * 1.3);
    if ((param_2 == 0) &&
       (uVar17 = NEON_fmax(local_90[0],param_3[10],4),
       local_250 - (float)param_3[0xc] <= (float)uVar17)) goto LAB_001d09cc;
    uStack_238 = auVar32._8_8_;
    local_240 = auVar32._0_8_;
  } while( true );
switchD_001d01a8_caseD_1a:
  do {
  } while( true );
switchD_001d01a8_caseD_13:
  do {
  } while( true );
switchD_001d01a8_caseD_12:
  do {
  } while( true );
switchD_001d01a8_caseD_c:
  do {
  } while( true );
switchD_001d01a8_caseD_a:
  do {
  } while( true );
}


