/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03167130; name: FUN_03167130
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03167130(float *param_1,float *param_2,float *param_3,float *param_4,
                 undefined1 (*param_5) [16],long *param_6,undefined4 *param_7,float *param_8,
                 long param_9)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [12];
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  float *pfVar17;
  float *pfVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined1 (*pauVar30) [12];
  uint uVar31;
  long lVar32;
  float *pfVar33;
  int iVar34;
  undefined1 (*pauVar35) [16];
  undefined8 *puVar36;
  ulong uVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar50;
  float fVar52;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar53;
  undefined8 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar64;
  int iVar65;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar66;
  int iVar67;
  float fVar68;
  float fVar69;
  int iVar72;
  undefined8 uVar70;
  undefined1 auVar71 [16];
  float fVar73;
  float fVar74;
  ulong uVar75;
  undefined1 auVar76 [16];
  undefined8 uVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar87;
  float fVar89;
  undefined8 uVar88;
  float fVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  float fVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [12];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  int iVar114;
  int iVar119;
  float fVar120;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar121;
  float fVar122;
  float fVar125;
  undefined1 auVar123 [16];
  float fVar126;
  undefined1 auVar124 [16];
  float fVar127;
  float fVar131;
  float fVar132;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar133;
  ulong uVar134;
  float fVar137;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  float fVar138;
  float fVar139;
  float fVar140;
  undefined4 uVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  undefined8 uVar146;
  undefined1 auVar147 [16];
  undefined1 auVar151 [16];
  undefined1 auVar150 [16];
  undefined1 auVar149 [16];
  undefined1 auVar148 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined8 uVar154;
  float fVar155;
  int iVar156;
  undefined8 uVar157;
  float fVar161;
  int iVar162;
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar163 [12];
  undefined1 in_q30 [16];
  undefined1 auVar167 [16];
  undefined1 auVar166 [16];
  undefined1 auVar165 [16];
  undefined1 auVar164 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  
  lVar26 = nn::os::GetSystemTick();
  puVar21 = PTR_DAT_04388ce0;
  puVar20 = PTR_DAT_04388890;
  puVar19 = PTR_DAT_04388880;
  uVar54 = *(undefined8 *)(param_1 + 2);
  fVar61 = *param_2;
  fVar43 = param_2[1];
  fVar50 = param_2[2];
  fVar69 = param_2[3];
  fVar52 = (float)*(undefined8 *)param_1;
  fVar53 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar90 = (float)uVar54;
  fVar66 = (float)*(undefined8 *)param_3;
  fVar68 = (float)*(undefined8 *)param_4;
  fVar87 = fVar66 - fVar68;
  fVar89 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) -
           (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  uVar3 = *(uint *)(param_6 + 1);
  uVar37 = (ulong)uVar3;
  uVar77 = NEON_fmov(0x3f800000,4);
  if (ABS(fVar50 - fVar90) <= 1.1920929e-07 &&
      (ABS(fVar61 - fVar52) <= 1.1920929e-07 && ABS(fVar43 - fVar53) <= 1.1920929e-07)) {
    uVar54 = CONCAT44(fVar89 * fVar89,fVar87 * fVar87);
    if (0 < (int)uVar3) {
      pfVar33 = (float *)(*param_6 + 0x10);
      do {
        pfVar1 = pfVar33 + -4;
        pfVar6 = pfVar33 + -2;
        fVar50 = *pfVar33;
        pfVar17 = pfVar33 + 1;
        pfVar18 = pfVar33 + 2;
        pfVar33 = pfVar33 + 8;
        fVar61 = (float)*(undefined8 *)pfVar1;
        fVar50 = fVar61 - fVar50;
        fVar43 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20);
        fVar87 = fVar43 - *pfVar17;
        fVar89 = (float)*(undefined8 *)pfVar6 - *pfVar18;
        fVar61 = fVar61 - *param_1;
        fVar43 = fVar43 - param_1[1];
        fVar69 = (float)*(undefined8 *)pfVar6 - param_1[2];
        uVar37 = uVar37 - 1;
        fVar52 = fVar61 * fVar50;
        fVar53 = fVar43 * fVar87;
        fVar90 = fVar69 * fVar89;
        uVar146 = CONCAT44(fVar50 * fVar50 + fVar87 * fVar87 + fVar89 * fVar89,
                           fVar50 * fVar50 + fVar87 * fVar87 + fVar89 * fVar89);
        uVar157 = NEON_frecpe(uVar146,4);
        uVar70 = NEON_frecps(uVar146,uVar157,4);
        fVar60 = (float)uVar157 * (float)uVar70;
        fVar64 = (float)((ulong)uVar157 >> 0x20) * (float)((ulong)uVar70 >> 0x20);
        uVar70 = NEON_frecps(uVar146,CONCAT44(fVar64,fVar60),4);
        uVar70 = NEON_fminnm(CONCAT44((fVar52 + fVar53 + fVar90) *
                                      fVar64 * (float)((ulong)uVar70 >> 0x20),
                                      (fVar52 + fVar53 + fVar90) * fVar60 * (float)uVar70),uVar77,4)
        ;
        uVar70 = NEON_fmax(uVar70,0,4);
        fVar61 = fVar61 - fVar50 * (float)uVar70;
        fVar43 = fVar43 - fVar87 * (float)((ulong)uVar70 >> 0x20);
        fVar69 = fVar69 - fVar89 * (float)uVar70;
        fVar61 = fVar61 * fVar61;
        fVar43 = fVar43 * fVar43;
        fVar69 = fVar69 * fVar69;
        fVar50 = fVar61 + fVar43 + fVar69;
        uVar54 = NEON_fmin(uVar54,CONCAT17((char)((uint)fVar50 >> 0x18),
                                           CONCAT16((char)((uint)fVar50 >> 0x10),
                                                    CONCAT15((char)((uint)fVar50 >> 8),
                                                             CONCAT14(SUB41(fVar50,0),
                                                                      fVar61 + fVar43 + fVar69)))),4
                          );
      } while (uVar37 != 0);
    }
    uVar77 = NEON_frsqrte(uVar54,4);
    fVar61 = (float)uVar77;
    fVar43 = (float)((ulong)uVar77 >> 0x20);
    uVar77 = NEON_frsqrts(uVar54,CONCAT44(fVar43 * fVar43,fVar61 * fVar61),4);
    fVar61 = fVar61 * (float)uVar77;
    fVar43 = fVar43 * (float)((ulong)uVar77 >> 0x20);
    uVar77 = NEON_frsqrts(uVar54,CONCAT44(fVar43 * fVar43,fVar61 * fVar61),4);
    iVar67 = -(uint)((float)uVar54 <= 0.0);
    fVar61 = (float)uVar54 * (float)uVar77 * fVar61;
    fVar61 = fVar68 + (float)CONCAT13((byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                                      CONCAT12((byte)((uint)fVar61 >> 0x10) &
                                               ~(byte)((uint)iVar67 >> 0x10),
                                               CONCAT11((byte)((uint)fVar61 >> 8) &
                                                        ~(byte)((uint)iVar67 >> 8),
                                                        SUB41(fVar61,0) & ~(byte)iVar67)));
    fVar68 = fVar68 * 1.0000001;
    *param_7 = 0;
    if (fVar68 <= 1.1754944e-38) {
      fVar68 = 1.1754944e-38;
    }
    if (fVar61 <= fVar66) {
      fVar66 = fVar61;
    }
    if (fVar68 <= fVar61) {
      fVar68 = fVar66;
    }
    param_7[1] = fVar68;
    if (param_8 != (float *)0x0) {
      *param_8 = fVar68;
    }
    goto LAB_031680d0;
  }
  uVar38 = 0x5f7ffff05f7ffff0;
  lVar28 = tpidr_el0;
  if (uVar3 == 0) {
    lVar32 = 0;
LAB_03168268:
    auVar63 = ZEXT816(0x5f7ffff05f7ffff0);
    uVar54 = 0x5f7ffff05f7ffff0;
    iVar34 = 0;
    iVar67 = -1;
  }
  else {
    auVar63 = *param_5;
    lVar32 = *(long *)(lVar28 + 0x38d490);
    if (lVar32 == 0) {
      lVar32 = FUN_0333d16c(0,1);
      *(long *)(lVar28 + 0x38d490) = lVar32;
    }
    lVar27 = *(long *)(lVar32 + 8);
    uVar29 = (long)(int)uVar3 * 0x30 + 0x7fU & 0xffffffffffffff80;
    if (*(ulong *)(lVar27 + 0x10) < uVar29) {
LAB_031682dc:
      lVar32 = FUN_032ce670();
    }
    else {
      lVar32 = *(long *)(lVar27 + 0x18);
      uVar29 = lVar32 + uVar29;
      if (*(ulong *)(lVar27 + 0x20) < uVar29) goto LAB_031682dc;
      *(ulong *)(lVar27 + 0x18) = uVar29;
    }
    if ((int)uVar3 < 1) goto LAB_03168268;
    auVar44._0_4_ = fVar61 - fVar52;
    auVar44._4_4_ = fVar43 - fVar53;
    auVar44._8_4_ = fVar50 - fVar90;
    fVar51 = (float)((ulong)uVar54 >> 0x20);
    auVar44._12_4_ = fVar69 - fVar51;
    uVar29 = 0;
    auVar55 = NEON_ext(auVar63,auVar63,8,1);
    uVar54 = NEON_ext(auVar63._0_8_,auVar55._0_8_,4,1);
    auVar62 = NEON_ext(auVar44,auVar44,4,1);
    iVar34 = 0;
    auVar55._0_4_ = auVar44._0_4_ * (float)uVar54 - auVar62._0_4_ * auVar63._0_4_;
    auVar55._4_4_ = auVar44._4_4_ * (float)((ulong)uVar54 >> 0x20) - auVar62._4_4_ * auVar63._4_4_;
    auVar55._8_4_ = auVar44._8_4_ * auVar63._0_4_ - auVar44._0_4_ * auVar63._8_4_;
    auVar55._12_4_ = auVar44._12_4_ * auVar63._4_4_ - auVar44._4_4_ * auVar63._12_4_;
    auVar63 = NEON_ext(auVar55,auVar55,4,1);
    fVar60 = auVar63._0_4_;
    fVar64 = auVar63._4_4_;
    fVar66 = fVar60 * fVar60 + fVar64 * fVar64 + auVar55._0_4_ * auVar55._0_4_;
    fVar89 = fVar60 * fVar60 + fVar64 * fVar64 + auVar55._0_4_ * auVar55._0_4_;
    uVar70 = CONCAT44(fVar89,fVar66);
    uVar54 = NEON_frsqrte(uVar70,4);
    fVar69 = (float)uVar54;
    fVar68 = (float)((ulong)uVar54 >> 0x20);
    uVar54 = NEON_frsqrts(uVar70,CONCAT44(fVar68 * fVar68,fVar69 * fVar69),4);
    fVar69 = fVar69 * (float)uVar54;
    fVar68 = fVar68 * (float)((ulong)uVar54 >> 0x20);
    uVar54 = NEON_frsqrts(uVar70,CONCAT44(fVar68 * fVar68,fVar69 * fVar69),4);
    iVar67 = -(uint)(fVar66 <= 0.0);
    iVar72 = -(uint)(fVar89 <= 0.0);
    fVar69 = (float)uVar54 * fVar69;
    fVar68 = (float)((ulong)uVar54 >> 0x20) * fVar68;
    fVar74 = -fVar87;
    fVar89 = (float)CONCAT13((byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                             CONCAT12((byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10),
                                      CONCAT11((byte)((uint)fVar69 >> 8) &
                                               ~(byte)((uint)iVar67 >> 8),
                                               SUB41(fVar69,0) & ~(byte)iVar67)));
    iVar67 = -1;
    fVar69 = auVar44._0_4_ * auVar44._0_4_;
    fVar66 = auVar44._4_4_ * auVar44._4_4_;
    fVar73 = auVar44._8_4_ * auVar44._8_4_;
    fVar60 = fVar60 * fVar89;
    fVar68 = (float)(CONCAT17((byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18),
                              CONCAT16((byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10),
                                       CONCAT15((byte)((uint)fVar68 >> 8) &
                                                ~(byte)((uint)iVar72 >> 8),
                                                CONCAT14(SUB41(fVar68,0) & ~(byte)iVar72,fVar89))))
                    >> 0x20);
    fVar64 = fVar64 * fVar68;
    fVar89 = auVar55._0_4_ * fVar89;
    auVar62._0_4_ = fVar52 * fVar60;
    auVar62._4_4_ = fVar53 * fVar64;
    auVar62._8_4_ = fVar90 * fVar89;
    auVar62._12_4_ = fVar51 * auVar55._4_4_ * fVar68;
    auVar63 = NEON_ext(auVar62,auVar62,8,1);
    fVar68 = -(auVar62._0_4_ + auVar62._4_4_ + auVar63._0_4_);
    auVar48 = ZEXT816(0x5f7ffff05f7ffff0);
    auVar63 = ZEXT816(0x5f7ffff05f7ffff0);
    uVar75 = uVar38;
    do {
      pauVar35 = (undefined1 (*) [16])(*param_6 + uVar29 * 0x20);
      auVar55 = *pauVar35;
      pauVar4 = pauVar35 + 1;
      fVar104 = (float)*(undefined8 *)(pauVar35[1] + 8);
      fVar127 = (float)((ulong)*(undefined8 *)(pauVar35[1] + 8) >> 0x20);
      uVar54 = *(undefined8 *)*pauVar4;
      uVar96 = (undefined1)uVar54;
      uVar97 = (undefined1)((ulong)uVar54 >> 8);
      uVar98 = (undefined1)((ulong)uVar54 >> 0x10);
      uVar99 = (undefined1)((ulong)uVar54 >> 0x18);
      uVar100 = (undefined1)((ulong)uVar54 >> 0x20);
      uVar101 = (undefined1)((ulong)uVar54 >> 0x28);
      uVar102 = (undefined1)((ulong)uVar54 >> 0x30);
      uVar103 = (undefined1)((ulong)uVar54 >> 0x38);
      fVar131 = auVar55._0_4_;
      auVar129._0_4_ = fVar60 * fVar131;
      fVar132 = auVar55._4_4_;
      auVar129._4_4_ = fVar64 * fVar132;
      fVar80 = auVar55._8_4_;
      auVar129._8_4_ = fVar89 * fVar80;
      fVar125 = auVar55._12_4_;
      auVar129._12_4_ = fVar68 * fVar125;
      auVar62 = NEON_ext(auVar129,auVar129,8,1);
      fVar41 = auVar62._0_4_ + fVar68;
      fVar39 = auVar129._0_4_ + auVar129._4_4_ + fVar41;
      fVar41 = auVar129._0_4_ + auVar129._4_4_ + fVar41;
      fVar133 = (float)uVar54;
      auVar153._0_4_ = fVar60 * fVar133;
      fVar137 = (float)((ulong)uVar54 >> 0x20);
      auVar153._4_4_ = fVar64 * fVar137;
      auVar153._8_4_ = fVar89 * fVar104;
      auVar153._12_4_ = fVar68 * fVar127;
      auVar62 = NEON_ext(auVar153,auVar153,8,1);
      fVar42 = auVar62._0_4_ + fVar68;
      fVar40 = auVar153._0_4_ + auVar153._4_4_ + fVar42;
      fVar42 = auVar153._0_4_ + auVar153._4_4_ + fVar42;
      bVar22 = false;
      bVar23 = false;
      if (fVar39 < fVar74) {
        bVar22 = false;
        bVar23 = true;
        if (!NAN(fVar40) && !NAN(fVar74)) {
          bVar22 = fVar40 < fVar74;
          bVar23 = false;
        }
      }
      uVar38 = uVar75;
      iVar72 = iVar34;
      if (bVar22 == bVar23) {
        auVar84._0_4_ = fVar133 - fVar131;
        auVar84._4_4_ = fVar137 - fVar132;
        auVar84._8_4_ = fVar104 - fVar80;
        auVar84._12_4_ = fVar127 - fVar125;
        puVar36 = (undefined8 *)(lVar32 + (long)iVar34 * 0x30);
        auVar128._0_4_ = auVar44._0_4_ * auVar84._0_4_;
        auVar128._4_4_ = auVar44._4_4_ * auVar84._4_4_;
        auVar128._8_4_ = auVar44._8_4_ * auVar84._8_4_;
        auVar128._12_4_ = auVar44._12_4_ * auVar84._12_4_;
        auVar123._0_4_ = (fVar131 - fVar52) * auVar84._0_4_;
        auVar123._4_4_ = (fVar132 - fVar53) * auVar84._4_4_;
        auVar123._8_4_ = (fVar80 - fVar90) * auVar84._8_4_;
        auVar123._12_4_ = (fVar125 - fVar51) * auVar84._12_4_;
        auVar129 = NEON_ext(auVar128,auVar128,8,1);
        auVar62 = NEON_ext(auVar123,auVar123,8,1);
        fVar121 = auVar129._0_4_ + auVar128._0_4_ + auVar128._4_4_;
        fVar125 = auVar62._0_4_ + auVar123._0_4_ + auVar123._4_4_;
        uVar141 = 0;
        if (fVar121 == 0.0) {
code_r0x0316814c:
          if (fVar39 <= 0.0 == 0.0 < fVar40) {
            auVar107._0_4_ = fVar131 - fVar60 * fVar39;
            auVar107._4_4_ = fVar132 - fVar64 * fVar41;
            auVar107._8_4_ = fVar80 - fVar89 * fVar39;
          }
          else {
            fVar42 = fVar42 * fVar42;
            auVar110._0_8_ =
                 CONCAT44(-(uint)(fVar41 * fVar41 < fVar42),
                          -(uint)(fVar39 * fVar39 < fVar40 * fVar40));
            auVar110._8_8_ = auVar110._0_8_;
            auVar107 = *(undefined1 (*) [12])*pauVar4 ^
                       (*(undefined1 (*) [12])*pauVar4 ^ auVar55._0_12_) & auVar110._0_12_;
            uVar54 = NEON_fmin(CONCAT44(fVar41 * fVar41,fVar39 * fVar39),
                               CONCAT44(fVar42,fVar40 * fVar40),4);
            uVar141 = (undefined4)uVar54;
          }
          fVar133 = fVar52 - auVar107._0_4_;
          fVar137 = fVar53 - auVar107._4_4_;
          fVar104 = fVar90 - auVar107._8_4_;
          lVar27 = lVar32 + (long)iVar34 * 0x30;
          auVar117._4_4_ = auVar44._0_4_ * fVar133;
          auVar117._0_4_ = fVar69;
          auVar117._8_4_ = fVar73;
          auVar117._12_4_ = auVar44._8_4_ * fVar104;
          auVar55 = NEON_ext(auVar117,auVar117,8,1);
          fVar42 = fVar133 * fVar133 + fVar137 * fVar137 + fVar104 * fVar104;
          uVar70 = CONCAT44(fVar133 * fVar133 + fVar137 * fVar137 + fVar104 * fVar104,fVar42);
          fVar40 = auVar55._0_4_ + fVar66 + fVar69;
          fVar41 = auVar55._4_4_ + auVar44._4_4_ * fVar137 + auVar44._0_4_ * fVar133;
          uVar54 = CONCAT44(fVar41,fVar40);
          fVar133 = fVar61 - auVar107._0_4_;
          fVar104 = fVar43 - auVar107._4_4_;
          fVar39 = fVar50 - auVar107._8_4_;
          fVar133 = fVar133 * fVar133;
          fVar104 = fVar104 * fVar104;
          fVar39 = fVar39 * fVar39;
          fVar137 = fVar39 + fVar133 + fVar104;
          uVar96 = SUB41(fVar137,0);
          uVar97 = (undefined1)((uint)fVar137 >> 8);
          uVar98 = (undefined1)((uint)fVar137 >> 0x10);
          uVar99 = (undefined1)((uint)fVar137 >> 0x18);
          fVar39 = fVar39 + fVar133 + fVar104;
          uVar100 = SUB41(fVar39,0);
          uVar101 = (undefined1)((uint)fVar39 >> 8);
          uVar102 = (undefined1)((uint)fVar39 >> 0x10);
          uVar103 = (undefined1)((uint)fVar39 >> 0x18);
          uVar38 = CONCAT44(fVar42,fVar42);
          auVar118._8_8_ = uVar70;
          auVar118._0_8_ = uVar54;
          fVar40 = fVar40 * (float)_DAT_038899d0;
          fVar41 = fVar41 * (float)((ulong)_DAT_038899d0 >> 0x20);
          fVar137 = fVar42 * (float)_UNK_038899d8;
          auVar111._8_8_ = uVar70;
          auVar111._0_8_ = uVar54;
          auVar106._0_12_ = auVar111._0_12_;
          auVar106._12_4_ = 0;
          auVar116._0_12_ = auVar118._0_12_;
          auVar116._12_4_ = uVar141;
          fVar133 = fVar40 + fVar41;
          fVar40 = fVar40 + fVar41;
          puVar36[1] = (ulong)(uint)fVar42;
          *puVar36 = uVar54;
          *(ulong *)(lVar27 + 0x18) = (ulong)(uint)fVar42;
          *(undefined8 *)(lVar27 + 0x10) = uVar54;
          *(long *)(lVar27 + 0x28) = auVar116._8_8_;
          *(undefined8 *)(lVar27 + 0x20) = uVar54;
          auVar108 = auVar106;
        }
        else {
          auVar130._0_4_ = auVar84._0_4_ * (fVar133 - fVar52);
          auVar130._4_4_ = auVar84._4_4_ * (fVar137 - fVar53);
          auVar130._8_4_ = auVar84._8_4_ * (fVar104 - fVar90);
          auVar130._12_4_ = auVar84._12_4_ * (fVar127 - fVar51);
          auVar62 = NEON_ext(auVar130,auVar130,8,1);
          fVar127 = auVar62._0_4_ + auVar130._0_4_ + auVar130._4_4_;
          uVar70 = CONCAT44(fVar121,fVar121);
          uVar54 = NEON_frecpe(uVar70,4);
          uVar146 = NEON_frecps(uVar70,uVar54,4);
          fVar133 = (float)uVar54 * (float)uVar146;
          fVar137 = (float)((ulong)uVar54 >> 0x20) * (float)((ulong)uVar146 >> 0x20);
          uVar54 = NEON_frecps(uVar70,CONCAT17((char)((uint)fVar137 >> 0x18),
                                               CONCAT16((char)((uint)fVar137 >> 0x10),
                                                        CONCAT15((char)((uint)fVar137 >> 8),
                                                                 CONCAT14(SUB41(fVar137,0),fVar133))
                                                       )),4);
          fVar133 = fVar133 * (float)uVar54;
          fVar137 = fVar137 * (float)((ulong)uVar54 >> 0x20);
          fVar121 = fVar125 * fVar137;
          fVar140 = fVar127 * fVar133;
          if (fVar121 == fVar140) goto code_r0x0316814c;
          fVar125 = fVar125 * fVar137;
          fVar127 = fVar127 * fVar133;
          uVar54 = CONCAT44(fVar127,fVar127);
          if (fVar140 <= fVar121) {
            auVar84._0_4_ = -auVar84._0_4_;
            auVar84._4_4_ = -auVar84._4_4_;
            auVar84._8_4_ = -auVar84._8_4_;
            auVar84._12_4_ = -auVar84._12_4_;
            uVar70 = CONCAT44(fVar125,fVar125);
            uVar146 = uVar54;
          }
          else {
            uVar96 = auVar55[0];
            uVar97 = auVar55[1];
            uVar98 = auVar55[2];
            uVar99 = auVar55[3];
            uVar100 = auVar55[4];
            uVar101 = auVar55[5];
            uVar102 = auVar55[6];
            uVar103 = auVar55[7];
            fVar104 = fVar80;
            auVar55 = *pauVar4;
            uVar146 = CONCAT44(fVar125,fVar125);
            uVar70 = uVar54;
          }
          auVar62 = *param_5;
          auVar129 = NEON_ext(auVar62,auVar62,8,1);
          uVar54 = NEON_ext(auVar62._0_8_,auVar129._0_8_,4,1);
          auVar129 = NEON_ext(auVar84,auVar84,4,1);
          lVar27 = lVar32 + (long)iVar34 * 0x30;
          auVar147._0_4_ = fVar52 - auVar55._0_4_;
          auVar147._4_4_ = fVar53 - auVar55._4_4_;
          auVar147._8_4_ = fVar90 - auVar55._8_4_;
          auVar147._12_4_ = fVar51 - auVar55._12_4_;
          fVar121 = fVar61 - auVar55._0_4_;
          fVar140 = fVar43 - auVar55._4_4_;
          fVar120 = fVar50 - auVar55._8_4_;
          fVar127 = fVar52 - (float)CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96)));
          fVar131 = fVar53 - (float)CONCAT13(uVar103,CONCAT12(uVar102,CONCAT11(uVar101,uVar100)));
          fVar132 = fVar90 - fVar104;
          auVar135._0_4_ = auVar62._0_4_ * auVar129._0_4_ - auVar84._0_4_ * (float)uVar54;
          auVar135._4_4_ =
               auVar62._4_4_ * auVar129._4_4_ - auVar84._4_4_ * (float)((ulong)uVar54 >> 0x20);
          auVar135._8_4_ = auVar62._8_4_ * auVar84._0_4_ - auVar84._8_4_ * auVar62._0_4_;
          auVar135._12_4_ = auVar62._12_4_ * auVar84._4_4_ - auVar84._12_4_ * auVar62._4_4_;
          auVar55 = NEON_ext(auVar135,auVar135,4,1);
          fVar133 = fVar61 - (float)CONCAT13(uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96)));
          fVar39 = fVar43 - (float)CONCAT13(uVar103,CONCAT12(uVar102,CONCAT11(uVar101,uVar100)));
          fVar137 = auVar55._0_4_;
          fVar40 = auVar55._4_4_;
          fVar133 = fVar133 * fVar133;
          fVar39 = fVar39 * fVar39;
          fVar42 = (fVar50 - fVar104) * (fVar50 - fVar104);
          uVar157 = CONCAT44(fVar132 * fVar132 + fVar127 * fVar127 + fVar131 * fVar131,
                             fVar132 * fVar132 + fVar127 * fVar127 + fVar131 * fVar131);
          fVar138 = auVar147._8_4_ * auVar147._8_4_ +
                    auVar147._0_4_ * auVar147._0_4_ + auVar147._4_4_ * auVar147._4_4_;
          fVar139 = auVar147._8_4_ * auVar147._8_4_ +
                    auVar147._0_4_ * auVar147._0_4_ + auVar147._4_4_ * auVar147._4_4_;
          fVar104 = fVar42 + fVar133 + fVar39;
          auVar164._4_12_ = in_q30._4_12_;
          auVar164._0_4_ = fVar69;
          auVar166._12_4_ = in_q30._12_4_;
          auVar166._0_8_ = auVar164._0_8_;
          auVar166._8_4_ = fVar73;
          auVar165._8_8_ = auVar166._8_8_;
          auVar165._4_4_ = auVar44._0_4_ * fVar127;
          auVar165._0_4_ = fVar69;
          auVar167._0_12_ = auVar165._0_12_;
          auVar167._12_4_ = auVar44._8_4_ * fVar132;
          auVar55 = NEON_ext(auVar167,auVar167,8,1);
          fVar121 = fVar121 * fVar121;
          fVar140 = fVar140 * fVar140;
          fVar120 = fVar120 * fVar120;
          auVar105._0_8_ =
               CONCAT44(auVar55._4_4_ + auVar44._4_4_ * fVar131 + auVar44._0_4_ * fVar127,
                        auVar55._0_4_ + fVar66 + fVar69);
          fVar41 = fVar137 * fVar137 + fVar40 * fVar40 + auVar135._0_4_ * auVar135._0_4_;
          fVar125 = fVar137 * fVar137 + fVar40 * fVar40 + auVar135._0_4_ * auVar135._0_4_;
          uVar54 = CONCAT44(fVar125,fVar41);
          uVar38 = NEON_fmin(uVar157,CONCAT44(fVar139,fVar138),4);
          auVar105._8_8_ = uVar157;
          uVar157 = NEON_frsqrte(uVar54,4);
          fVar155 = (float)uVar157;
          fVar161 = (float)((ulong)uVar157 >> 0x20);
          uVar157 = NEON_frsqrts(uVar54,CONCAT44(fVar161 * fVar161,fVar155 * fVar155),4);
          fVar155 = fVar155 * (float)uVar157;
          fVar161 = fVar161 * (float)((ulong)uVar157 >> 0x20);
          auVar106._0_12_ = auVar105._0_12_;
          fVar80 = (float)uVar146;
          auVar106._12_4_ = fVar80;
          iVar72 = -(uint)(fVar41 <= 0.0);
          iVar65 = -(uint)(fVar125 <= 0.0);
          uVar54 = NEON_frsqrts(uVar54,CONCAT44(fVar161 * fVar161,fVar155 * fVar155),4);
          fVar122 = (float)uVar70;
          in_q30._0_4_ = (float)-(uint)((float)uVar77 < fVar122);
          fVar41 = (float)((ulong)uVar77 >> 0x20);
          fVar126 = (float)((ulong)uVar70 >> 0x20);
          in_q30._4_4_ = (float)-(uint)(fVar41 < fVar126);
          in_q30._8_8_ = 0;
          puVar36[1] = auVar106._8_8_;
          *puVar36 = auVar105._0_8_;
          fVar155 = (float)uVar54 * fVar155;
          fVar161 = (float)((ulong)uVar54 >> 0x20) * fVar161;
          iVar156 = -(uint)(fVar80 < (float)uVar77);
          fVar125 = (float)((ulong)uVar146 >> 0x20);
          iVar162 = -(uint)(fVar125 < fVar41);
          bVar142 = SUB41(fVar155,0) & ~(byte)iVar72;
          bVar143 = (byte)((uint)fVar155 >> 8) & ~(byte)((uint)iVar72 >> 8);
          bVar144 = (byte)((uint)fVar155 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
          bVar145 = (byte)((uint)fVar155 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
          uVar134 = NEON_fmin(CONCAT17((char)((uint)fVar104 >> 0x18),
                                       CONCAT16((char)((uint)fVar104 >> 0x10),
                                                CONCAT15((char)((uint)fVar104 >> 8),
                                                         CONCAT14(SUB41(fVar104,0),
                                                                  fVar42 + fVar133 + fVar39)))),
                              CONCAT44(fVar120 + fVar121 + fVar140,fVar120 + fVar121 + fVar140),4);
          fVar137 = fVar137 * (float)CONCAT13(bVar145,CONCAT12(bVar144,CONCAT11(bVar143,bVar142)));
          fVar40 = fVar40 * (float)CONCAT13((byte)((uint)fVar161 >> 0x18) &
                                            ~(byte)((uint)iVar65 >> 0x18),
                                            CONCAT12((byte)((uint)fVar161 >> 0x10) &
                                                     ~(byte)((uint)iVar65 >> 0x10),
                                                     CONCAT11((byte)((uint)fVar161 >> 8) &
                                                              ~(byte)((uint)iVar65 >> 8),
                                                              SUB41(fVar161,0) & ~(byte)iVar65)));
          fVar104 = auVar135._0_4_ *
                    (float)CONCAT13(bVar145,CONCAT12(bVar144,CONCAT11(bVar143,bVar142)));
          fVar127 = fVar127 * fVar137;
          fVar131 = fVar131 * fVar40;
          fVar132 = fVar132 * fVar104;
          fVar137 = auVar44._0_4_ * fVar137;
          fVar40 = auVar44._4_4_ * fVar40;
          fVar104 = auVar44._8_4_ * fVar104;
          fVar39 = fVar127 + fVar131 + fVar132;
          fVar132 = fVar127 + fVar131 + fVar132;
          fVar133 = fVar137 + fVar40 + fVar104;
          fVar137 = fVar132 + fVar137 + fVar40 + fVar104;
          fVar40 = fVar39 * fVar39;
          uVar146 = NEON_fmin(CONCAT44(fVar132 * fVar132,fVar40),
                              CONCAT44(fVar137 * fVar137,(fVar39 + fVar133) * (fVar39 + fVar133)),4)
          ;
          auVar108._0_8_ = CONCAT44(fVar39 * fVar133,fVar133 * fVar133);
          uVar54 = CONCAT17((char)((ulong)uVar70 >> 0x18),
                            CONCAT16((char)((ulong)uVar70 >> 0x10),
                                     CONCAT15((char)((ulong)uVar70 >> 8),
                                              CONCAT14((char)uVar70,fVar40))));
          auVar108._8_8_ = uVar54;
          iVar72 = -(uint)(fVar80 < 0.0);
          iVar65 = -(uint)(fVar125 < 0.0);
          iVar114 = -(uint)(0.0 < fVar122);
          iVar119 = -(uint)(0.0 < fVar126);
          auVar148._4_12_ = auVar147._4_12_;
          auVar148._0_4_ = fVar69;
          auVar150._0_8_ = auVar148._0_8_;
          auVar150._8_4_ = fVar73;
          auVar150._12_4_ = auVar147._12_4_;
          auVar149._8_8_ = auVar150._8_8_;
          auVar149._4_4_ = auVar44._0_4_ * auVar147._0_4_;
          auVar149._0_4_ = fVar69;
          auVar151._0_12_ = auVar149._0_12_;
          auVar151._12_4_ = auVar44._8_4_ * auVar147._8_4_;
          fVar137 = fVar133 * fVar133 * (float)_DAT_038896e0;
          fVar133 = fVar39 * fVar133 * (float)((ulong)_DAT_038896e0 >> 0x20);
          fVar104 = fVar40 * (float)_UNK_038896e8;
          auVar55 = NEON_ext(auVar151,auVar151,8,1);
          auVar115._0_8_ =
               CONCAT44(auVar55._4_4_ +
                        auVar44._4_4_ * auVar147._4_4_ + auVar44._0_4_ * auVar147._0_4_,
                        auVar55._0_4_ + fVar66 + fVar69);
          uVar38 = CONCAT44(fVar40,fVar40) ^
                   (CONCAT44(fVar40,fVar40) ^ uVar38) &
                   CONCAT17(~(byte)((uint)iVar65 >> 0x18) | ~(byte)((uint)iVar119 >> 0x18),
                            CONCAT16(~(byte)((uint)iVar65 >> 0x10) | ~(byte)((uint)iVar119 >> 0x10),
                                     CONCAT15(~(byte)((uint)iVar65 >> 8) |
                                              ~(byte)((uint)iVar119 >> 8),
                                              CONCAT14(~(byte)iVar65 | ~(byte)iVar119,
                                                       CONCAT13(~(byte)((uint)iVar72 >> 0x18) |
                                                                ~(byte)((uint)iVar114 >> 0x18),
                                                                CONCAT12(~(byte)((uint)iVar72 >>
                                                                                0x10) |
                                                                         ~(byte)((uint)iVar114 >>
                                                                                0x10),
                                                                         CONCAT11(~(byte)((uint)
                                                  iVar72 >> 8) | ~(byte)((uint)iVar114 >> 8),
                                                  ~(byte)iVar72 | ~(byte)iVar114)))))));
          auVar115._12_4_ = fVar139;
          auVar115._8_4_ = fVar138;
          fVar39 = fVar137 + fVar133 + fVar104;
          fVar104 = fVar137 + fVar133 + fVar104;
          auVar112._0_8_ = CONCAT44(-(uint)(fVar80 <= 0.5),-(uint)(fVar80 <= 0.5));
          auVar124._0_8_ = CONCAT44(-(uint)(fVar122 <= 0.5),-(uint)(fVar122 <= 0.5));
          auVar112._8_8_ = auVar112._0_8_;
          auVar116._0_12_ = auVar115._0_12_;
          auVar116._12_4_ = (int)uVar146;
          uVar134 = CONCAT44(fVar104,fVar39) ^
                    (CONCAT44(fVar104,fVar39) ^ uVar134) &
                    CONCAT17(~(byte)((uint)iVar162 >> 0x18) | ~(byte)((uint)in_q30._4_4_ >> 0x18),
                             CONCAT16(~(byte)((uint)iVar162 >> 0x10) |
                                      ~(byte)((uint)in_q30._4_4_ >> 0x10),
                                      CONCAT15(~(byte)((uint)iVar162 >> 8) |
                                               ~(byte)((uint)in_q30._4_4_ >> 8),
                                               CONCAT14(~(byte)iVar162 | ~SUB41(in_q30._4_4_,0),
                                                        CONCAT13(~(byte)((uint)iVar156 >> 0x18) |
                                                                 ~(byte)((uint)in_q30._0_4_ >> 0x18)
                                                                 ,CONCAT12(~(byte)((uint)iVar156 >>
                                                                                  0x10) |
                                                                           ~(byte)((uint)in_q30.
                                                  _0_4_ >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar156 >> 8) |
                                                           ~(byte)((uint)in_q30._0_4_ >> 8),
                                                           ~(byte)iVar156 | ~SUB41(in_q30._0_4_,0)))
                                                  )))));
          uVar96 = (undefined1)uVar134;
          uVar97 = (undefined1)(uVar134 >> 8);
          uVar98 = (undefined1)(uVar134 >> 0x10);
          uVar99 = (undefined1)(uVar134 >> 0x18);
          uVar100 = (undefined1)(uVar134 >> 0x20);
          uVar101 = (undefined1)(uVar134 >> 0x28);
          uVar102 = (undefined1)(uVar134 >> 0x30);
          uVar103 = (undefined1)(uVar134 >> 0x38);
          auVar124._8_8_ = auVar124._0_8_;
          auVar55 = auVar106 ^ (auVar106 ^ auVar108) & auVar112;
          *(undefined8 *)(lVar27 + 0x18) = uVar54;
          *(undefined8 *)(lVar27 + 0x10) = auVar108._0_8_;
          *(long *)(lVar27 + 0x28) = auVar116._8_8_;
          *(undefined8 *)(lVar27 + 0x20) = auVar115._0_8_;
          auVar55 = auVar55 ^ (auVar55 ^ auVar116) & auVar124;
          fVar40 = auVar55._0_4_ * (float)_DAT_038899d0;
          fVar104 = auVar55._4_4_ * (float)((ulong)_DAT_038899d0 >> 0x20);
          fVar137 = auVar55._8_4_ * (float)_UNK_038899d8;
          fVar133 = fVar40 + fVar104;
          fVar40 = fVar40 + fVar104;
        }
        iVar72 = iVar34 + 1;
        if ((float)uVar75 <= (float)uVar38) {
          if ((float)uVar38 == (float)uVar75) {
            pauVar35 = (undefined1 (*) [16])(lVar32 + (long)iVar67 * 0x30);
            uVar141 = (undefined4)((ulong)*(undefined8 *)(pauVar35[2] + 8) >> 0x20);
            fVar39 = auVar108._12_4_;
            auVar55 = *pauVar35;
            auVar62 = pauVar35[1];
            auVar129 = NEON_ext(auVar62,auVar62,8,1);
            fVar41 = auVar55._12_4_;
            fVar42 = auVar129._4_4_;
            auVar152._0_8_ = CONCAT44(-(uint)(fVar41 <= 0.0),-(uint)(fVar41 <= 0.0));
            auVar168._0_8_ = CONCAT44(-(uint)(fVar42 <= 0.0),-(uint)(fVar42 <= 0.0));
            auVar78._0_8_ = CONCAT44(-(uint)(fVar39 <= 0.0),-(uint)(fVar39 <= 0.0));
            auVar152._8_8_ = auVar152._0_8_;
            auVar78._8_8_ = auVar78._0_8_;
            auVar168._8_8_ = auVar168._0_8_;
            auVar153 = auVar55 ^ (auVar55 ^ auVar62) & auVar152;
            auVar14._12_4_ = uVar141;
            auVar14._0_12_ = *(undefined1 (*) [12])pauVar35[2];
            auVar153 = auVar153 ^ (auVar153 ^ auVar14) & auVar168;
            fVar104 = auVar106._12_4_;
            auVar170._0_8_ = CONCAT44(-(uint)(fVar104 <= 0.0),-(uint)(fVar104 <= 0.0));
            auVar170._8_8_ = auVar170._0_8_;
            auVar129 = auVar106 ^ (auVar106 ^ auVar108) & auVar170;
            auVar129 = auVar129 ^ (auVar129 ^ auVar116) & auVar78;
            in_q30._0_4_ = auVar153._0_4_ - auVar129._0_4_;
            in_q30._4_4_ = auVar153._4_4_ - auVar129._4_4_;
            in_q30._8_4_ = auVar153._8_4_ - auVar129._8_4_;
            in_q30._12_4_ = auVar153._12_4_ - auVar129._12_4_;
            iVar65 = -(uint)(in_q30._0_4_ == 0.0);
            iVar114 = -(uint)(in_q30._4_4_ == 0.0);
            iVar65 = CONCAT13(~(byte)((uint)iVar65 >> 0x18),
                              CONCAT12(~(byte)((uint)iVar65 >> 0x10),
                                       CONCAT11(~(byte)((uint)iVar65 >> 8),~(byte)iVar65)));
            if (iVar65 == 0 &&
                (int)(CONCAT17(~(byte)((uint)iVar114 >> 0x18),
                               CONCAT16(~(byte)((uint)iVar114 >> 0x10),
                                        CONCAT15(~(byte)((uint)iVar114 >> 8),
                                                 CONCAT14(~(byte)iVar114,iVar65)))) >> 0x20) == 0) {
              in_q30 = ZEXT416((uint)fVar41);
              if (0.0 < fVar41) {
                bVar22 = true;
                if ((0.0 < fVar104) && (bVar22 = false, !NAN(fVar41) && !NAN(fVar104))) {
                  bVar22 = fVar41 == fVar104;
                }
                if (!bVar22) {
                  uVar25 = (uint)(fVar104 < fVar41);
                  goto LAB_0316783c;
                }
              }
              auVar129 = NEON_ext(auVar55,auVar55,8,1);
              fVar127 = auVar129._4_4_;
              auVar129 = NEON_ext(auVar106,auVar106,8,1);
              auVar153 = NEON_ext(auVar108,auVar108,8,1);
              fVar131 = auVar129._4_4_;
              fVar132 = auVar153._4_4_;
              auVar159._0_8_ = CONCAT44(fVar132,fVar131);
              auVar171._8_8_ = auVar159._0_8_;
              auVar171._0_8_ = CONCAT44(fVar42,fVar127);
              auVar159._8_8_ = CONCAT44(fVar42,fVar127);
              iVar65 = -(uint)(fVar127 < fVar131);
              iVar114 = -(uint)(fVar42 < fVar132);
              iVar119 = -(uint)(fVar131 < fVar127);
              iVar156 = -(uint)(fVar132 < fVar42);
              auVar158[0] = puVar19[0xc0] ^ (byte)iVar65;
              auVar158[1] = puVar19[0xc1] ^ (byte)((uint)iVar65 >> 8);
              auVar158[2] = puVar19[0xc2] ^ (byte)((uint)iVar65 >> 0x10);
              auVar158[3] = puVar19[0xc3] ^ (byte)((uint)iVar65 >> 0x18);
              auVar158[4] = puVar19[0xc4] ^ (byte)iVar114;
              auVar158[5] = puVar19[0xc5] ^ (byte)((uint)iVar114 >> 8);
              auVar158[6] = puVar19[0xc6] ^ (byte)((uint)iVar114 >> 0x10);
              auVar158[7] = puVar19[199] ^ (byte)((uint)iVar114 >> 0x18);
              auVar158[8] = puVar19[200] ^ (byte)iVar119;
              auVar158[9] = puVar19[0xc9] ^ (byte)((uint)iVar119 >> 8);
              auVar158[10] = puVar19[0xca] ^ (byte)((uint)iVar119 >> 0x10);
              auVar158[0xb] = puVar19[0xcb] ^ (byte)((uint)iVar119 >> 0x18);
              auVar158[0xc] = puVar19[0xcc] ^ (byte)iVar156;
              auVar158[0xd] = puVar19[0xcd] ^ (byte)((uint)iVar156 >> 8);
              auVar158[0xe] = puVar19[0xce] ^ (byte)((uint)iVar156 >> 0x10);
              auVar158[0xf] = puVar19[0xcf] ^ (byte)((uint)iVar156 >> 0x18);
              auVar159 = auVar159 ^ (auVar159 ^ auVar171) & auVar158;
              auVar153 = NEON_rev64(auVar159,4);
              iVar65 = -(uint)(auVar159._0_4_ < auVar153._0_4_);
              iVar114 = -(uint)(auVar159._4_4_ < auVar153._4_4_);
              iVar119 = -(uint)(auVar159._8_4_ < auVar153._8_4_);
              iVar156 = -(uint)(auVar159._12_4_ < auVar153._12_4_);
              auVar172[0] = puVar20[0xa0] ^ (byte)iVar65;
              auVar172[1] = puVar20[0xa1] ^ (byte)((uint)iVar65 >> 8);
              auVar172[2] = puVar20[0xa2] ^ (byte)((uint)iVar65 >> 0x10);
              auVar172[3] = puVar20[0xa3] ^ (byte)((uint)iVar65 >> 0x18);
              auVar172[4] = puVar20[0xa4] ^ (byte)iVar114;
              auVar172[5] = puVar20[0xa5] ^ (byte)((uint)iVar114 >> 8);
              auVar172[6] = puVar20[0xa6] ^ (byte)((uint)iVar114 >> 0x10);
              auVar172[7] = puVar20[0xa7] ^ (byte)((uint)iVar114 >> 0x18);
              auVar172[8] = puVar20[0xa8] ^ (byte)iVar119;
              auVar172[9] = puVar20[0xa9] ^ (byte)((uint)iVar119 >> 8);
              auVar172[10] = puVar20[0xaa] ^ (byte)((uint)iVar119 >> 0x10);
              auVar172[0xb] = puVar20[0xab] ^ (byte)((uint)iVar119 >> 0x18);
              auVar172[0xc] = puVar20[0xac] ^ (byte)iVar156;
              auVar172[0xd] = puVar20[0xad] ^ (byte)((uint)iVar156 >> 8);
              auVar172[0xe] = puVar20[0xae] ^ (byte)((uint)iVar156 >> 0x10);
              auVar172[0xf] = puVar20[0xaf] ^ (byte)((uint)iVar156 >> 0x18);
              auVar153 = auVar153 ^ (auVar153 ^ auVar159) & auVar172;
              auVar160._8_8_ = _UNK_03889898;
              auVar160._0_8_ = _DAT_03889890;
              auVar129 = a64_TBL(ZEXT816(0),auVar153,auVar160);
              in_q30._0_4_ = (float)-(uint)(auVar153._0_4_ < auVar129._0_4_);
              in_q30._4_4_ = (float)-(uint)(auVar153._4_4_ < auVar129._4_4_);
              in_q30._8_4_ = (float)-(uint)(auVar153._8_4_ < auVar129._8_4_);
              in_q30._12_4_ = (float)-(uint)(auVar153._12_4_ < auVar129._12_4_);
              auVar79[0] = puVar21[0x40] ^ SUB41(in_q30._0_4_,0);
              auVar79[1] = puVar21[0x41] ^ (byte)((uint)in_q30._0_4_ >> 8);
              auVar79[2] = puVar21[0x42] ^ (byte)((uint)in_q30._0_4_ >> 0x10);
              auVar79[3] = puVar21[0x43] ^ (byte)((uint)in_q30._0_4_ >> 0x18);
              auVar79[4] = puVar21[0x44] ^ SUB41(in_q30._4_4_,0);
              auVar79[5] = puVar21[0x45] ^ (byte)((uint)in_q30._4_4_ >> 8);
              auVar79[6] = puVar21[0x46] ^ (byte)((uint)in_q30._4_4_ >> 0x10);
              auVar79[7] = puVar21[0x47] ^ (byte)((uint)in_q30._4_4_ >> 0x18);
              auVar79[8] = puVar21[0x48] ^ SUB41(in_q30._8_4_,0);
              auVar79[9] = puVar21[0x49] ^ (byte)((uint)in_q30._8_4_ >> 8);
              auVar79[10] = puVar21[0x4a] ^ (byte)((uint)in_q30._8_4_ >> 0x10);
              auVar79[0xb] = puVar21[0x4b] ^ (byte)((uint)in_q30._8_4_ >> 0x18);
              auVar79[0xc] = puVar21[0x4c] ^ SUB41(in_q30._12_4_,0);
              auVar79[0xd] = puVar21[0x4d] ^ (byte)((uint)in_q30._12_4_ >> 8);
              auVar79[0xe] = puVar21[0x4e] ^ (byte)((uint)in_q30._12_4_ >> 0x10);
              auVar79[0xf] = puVar21[0x4f] ^ (byte)((uint)in_q30._12_4_ >> 0x18);
              auVar129 = auVar129 ^ (auVar129 ^ auVar153) & auVar79;
              if (auVar129._12_4_ <= 0.0) goto LAB_03167614;
              fVar127 = auVar129._0_4_;
              iVar65 = -(uint)(0.0 < fVar127);
              fVar131 = auVar129._4_4_;
              iVar114 = -(uint)(0.0 < fVar131);
              fVar132 = auVar129._8_4_;
              iVar119 = -(uint)(0.0 < fVar132);
              iVar156 = -(uint)(0.0 < auVar129._12_4_);
              iVar65 = CONCAT13((byte)((uint)iVar65 >> 0x18) & UNK_03889703,
                                CONCAT12((byte)((uint)iVar65 >> 0x10) & UNK_03889702,
                                         CONCAT11((byte)((uint)iVar65 >> 8) & UNK_03889701,
                                                  (byte)iVar65 & DAT_03889700)));
              auVar163._0_8_ =
                   CONCAT17((byte)((uint)iVar114 >> 0x18) & UNK_03889707,
                            CONCAT16((byte)((uint)iVar114 >> 0x10) & UNK_03889706,
                                     CONCAT15((byte)((uint)iVar114 >> 8) & UNK_03889705,
                                              CONCAT14((byte)iVar114 & UNK_03889704,iVar65))));
              auVar163[8] = (byte)iVar119 & UNK_03889708;
              auVar163[9] = (byte)((uint)iVar119 >> 8) & UNK_03889709;
              auVar163[10] = (byte)((uint)iVar119 >> 0x10) & UNK_0388970a;
              auVar163[0xb] = (byte)((uint)iVar119 >> 0x18) & UNK_0388970b;
              auVar169[0xc] = (byte)iVar156 & UNK_0388970c;
              auVar169._0_12_ = auVar163;
              auVar169[0xd] = (byte)((uint)iVar156 >> 8) & UNK_0388970d;
              auVar169[0xe] = (byte)((uint)iVar156 >> 0x10) & UNK_0388970e;
              auVar169[0xf] = (byte)((uint)iVar156 >> 0x18) & UNK_0388970f;
              auVar129 = NEON_ext(auVar129,auVar129,8,1);
              in_q30._0_8_ = CONCAT44(fVar132,fVar132);
              in_q30._8_8_ = 0;
              iVar65 = (int)(char)(&DAT_03aadfc0)
                                  [(uint)(iVar65 + (int)((ulong)auVar163._0_8_ >> 0x20) +
                                         auVar163._8_4_ + auVar169._12_4_)];
              do {
                uVar134 = CONCAT44(fVar131,fVar131);
                if (((iVar65 != 1) &&
                    (uVar134 = CONCAT44(auVar129._4_4_,auVar129._4_4_), iVar65 != 3)) &&
                   (uVar134 = in_q30._0_8_, iVar65 != 2)) {
                  uVar134 = CONCAT44(fVar127,fVar127);
                }
                fVar80 = (float)uVar134;
                fVar132 = (float)(uVar134 >> 0x20);
                auVar82._0_8_ = CONCAT44(-(uint)(fVar41 <= fVar132),-(uint)(fVar41 <= fVar80));
                auVar85._0_8_ = CONCAT44(-(uint)(fVar42 <= fVar132),-(uint)(fVar42 <= fVar80));
                auVar86._0_8_ = CONCAT44(-(uint)(fVar39 <= fVar132),-(uint)(fVar39 <= fVar80));
                auVar82._8_8_ = auVar82._0_8_;
                auVar85._8_8_ = auVar85._0_8_;
                auVar86._8_8_ = auVar86._0_8_;
                auVar153 = auVar55 ^ (auVar55 ^ auVar62) & auVar82;
                auVar15._12_4_ = uVar141;
                auVar15._0_12_ = *(undefined1 (*) [12])pauVar35[2];
                auVar153 = auVar153 ^ (auVar153 ^ auVar15) & auVar85;
                auVar83._0_8_ = CONCAT44(-(uint)(fVar104 <= fVar132),-(uint)(fVar104 <= fVar80));
                auVar83._8_8_ = auVar83._0_8_;
                auVar84 = auVar106 ^ (auVar106 ^ auVar108) & auVar83;
                auVar84 = auVar84 ^ (auVar84 ^ auVar116) & auVar86;
                fVar132 = auVar153._0_4_ - auVar84._0_4_;
                fVar125 = auVar153._4_4_ - auVar84._4_4_;
                iVar114 = -(uint)(fVar132 == 0.0);
                iVar119 = -(uint)(fVar125 == 0.0);
                iVar114 = CONCAT13(~(byte)((uint)iVar114 >> 0x18),
                                   CONCAT12(~(byte)((uint)iVar114 >> 0x10),
                                            CONCAT11(~(byte)((uint)iVar114 >> 8),~(byte)iVar114)));
                if (iVar114 != 0 ||
                    (int)(CONCAT17(~(byte)((uint)iVar119 >> 0x18),
                                   CONCAT16(~(byte)((uint)iVar119 >> 0x10),
                                            CONCAT15(~(byte)((uint)iVar119 >> 8),
                                                     CONCAT14(~(byte)iVar119,iVar114)))) >> 0x20) !=
                    0) {
                  fVar125 = fVar125 + fVar80 * fVar132;
                  if (fVar125 != 0.0) {
                    fVar132 = fVar125;
                  }
                  uVar25 = -(uint)(0.0 < fVar132);
                  goto LAB_0316783c;
                }
                iVar65 = iVar65 + 1;
              } while (iVar65 != 4);
              uVar38 = uVar75;
              iVar34 = iVar67;
            }
            else {
              fVar104 = in_q30._4_4_ + in_q30._0_4_ * 0.0;
              bVar22 = NAN(fVar104);
              bVar24 = fVar104 < 0.0;
              bVar23 = false;
              if (fVar104 == 0.0) {
                bVar24 = false;
                bVar23 = false;
                bVar22 = true;
                if (!NAN(in_q30._0_4_)) {
                  bVar24 = in_q30._0_4_ < 0.0;
                  bVar23 = in_q30._0_4_ == 0.0;
                  bVar22 = false;
                }
              }
              uVar25 = -(uint)(!bVar23 && bVar24 == bVar22);
LAB_0316783c:
              if (uVar25 != 0) {
                iVar67 = iVar34;
                uVar75 = uVar38;
              }
              uVar38 = uVar75;
              iVar34 = iVar67;
            }
          }
          else {
LAB_03167614:
            uVar38 = uVar75;
            iVar34 = iVar67;
          }
        }
        auVar48._0_8_ =
             NEON_fmin(auVar48._0_8_,
                       CONCAT17(uVar103,CONCAT16(uVar102,CONCAT15(uVar101,CONCAT14(uVar100,CONCAT13(
                                                  uVar99,CONCAT12(uVar98,CONCAT11(uVar97,uVar96)))))
                                                )),4);
        auVar63._0_8_ = NEON_fmin(auVar63._0_8_,CONCAT44(fVar40 + fVar137,fVar133 + fVar137),4);
        iVar67 = iVar34;
      }
      iVar34 = iVar72;
      uVar54 = auVar48._0_8_;
      uVar29 = uVar29 + 1;
      uVar75 = uVar38;
    } while (uVar29 != uVar37);
  }
  fVar61 = (float)uVar38;
  if (param_8 != (float *)0x0) {
    uVar70 = NEON_frsqrte(uVar38,4);
    fVar69 = (float)uVar70;
    fVar68 = (float)((ulong)uVar70 >> 0x20);
    fVar43 = fVar68 * fVar68;
    uVar70 = NEON_frsqrts(uVar38,CONCAT17((char)((uint)fVar43 >> 0x18),
                                          CONCAT16((char)((uint)fVar43 >> 0x10),
                                                   CONCAT15((char)((uint)fVar43 >> 8),
                                                            CONCAT14(SUB41(fVar43,0),fVar69 * fVar69
                                                                    )))),4);
    fVar69 = fVar69 * (float)uVar70;
    fVar68 = fVar68 * (float)((ulong)uVar70 >> 0x20);
    fVar43 = fVar68 * fVar68;
    uVar70 = NEON_frsqrts(uVar38,CONCAT17((char)((uint)fVar43 >> 0x18),
                                          CONCAT16((char)((uint)fVar43 >> 0x10),
                                                   CONCAT15((char)((uint)fVar43 >> 8),
                                                            CONCAT14(SUB41(fVar43,0),fVar69 * fVar69
                                                                    )))),4);
    iVar72 = -(uint)(fVar61 <= 0.0);
    fVar50 = (float)(uVar38 >> 0x20);
    iVar65 = -(uint)(fVar50 <= 0.0);
    fVar43 = (float)uVar70 * fVar69 * fVar61;
    fVar50 = (float)((ulong)uVar70 >> 0x20) * fVar68 * fVar50;
    fVar43 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18),
                             CONCAT12((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10),
                                      CONCAT11((byte)((uint)fVar43 >> 8) &
                                               ~(byte)((uint)iVar72 >> 8),
                                               SUB41(fVar43,0) & ~(byte)iVar72)));
    uVar70 = NEON_fmin(CONCAT44((float)((ulong)*(undefined8 *)param_4 >> 0x20) +
                                (float)(CONCAT17((byte)((uint)fVar50 >> 0x18) &
                                                 ~(byte)((uint)iVar65 >> 0x18),
                                                 CONCAT16((byte)((uint)fVar50 >> 0x10) &
                                                          ~(byte)((uint)iVar65 >> 0x10),
                                                          CONCAT15((byte)((uint)fVar50 >> 8) &
                                                                   ~(byte)((uint)iVar65 >> 8),
                                                                   CONCAT14(SUB41(fVar50,0) &
                                                                            ~(byte)iVar65,fVar43))))
                                       >> 0x20),(float)*(undefined8 *)param_4 + fVar43),
                       *(undefined8 *)param_3,4);
    *param_8 = (float)uVar70;
  }
  if (iVar34 == 0) {
LAB_0316824c:
    *param_7 = 0;
    fVar61 = (float)*(undefined8 *)param_3;
  }
  else {
    fVar87 = fVar87 * fVar87;
    if (fVar87 <= auVar63._0_4_) {
      uVar141 = 0x3f000000;
LAB_031681f8:
      *param_7 = uVar141;
      fVar61 = (float)*(undefined8 *)param_3;
    }
    else {
      if (fVar87 <= fVar61) goto LAB_0316824c;
      if (fVar87 <= (float)uVar54) {
        uVar141 = 0x3f800000;
        goto LAB_031681f8;
      }
      iVar72 = -(uint)((float)uVar54 < fVar61);
      pauVar35 = (undefined1 (*) [16])(lVar32 + (long)iVar67 * 0x30);
      auVar63 = *pauVar35;
      auVar44 = pauVar35[1];
      fVar50 = (float)*(undefined8 *)(pauVar35[2] + 8);
      uVar141 = (undefined4)((ulong)*(undefined8 *)(pauVar35[2] + 8) >> 0x20);
      fVar61 = (float)*(undefined8 *)pauVar35[2];
      fVar43 = (float)((ulong)*(undefined8 *)pauVar35[2] >> 0x20);
      uVar37 = (ulong)CONCAT13((byte)((ulong)uVar77 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18),
                               CONCAT12((byte)((ulong)uVar77 >> 0x10) &
                                        ~(byte)((uint)iVar72 >> 0x10),
                                        CONCAT11((byte)((ulong)uVar77 >> 8) &
                                                 ~(byte)((uint)iVar72 >> 8),
                                                 (byte)uVar77 & ~(byte)iVar72)));
      iVar34 = iVar34 + -1;
      if (iVar34 != iVar67) {
        puVar36 = (undefined8 *)(lVar32 + (long)iVar34 * 0x30);
        uVar70 = puVar36[5];
        *(undefined8 *)(pauVar35[1] + 8) = puVar36[3];
        *(undefined8 *)(pauVar35[2] + 8) = uVar70;
        *(undefined8 *)(*pauVar35 + 8) = puVar36[1];
        *(undefined8 *)*pauVar35 = *puVar36;
        uVar70 = puVar36[2];
        *(undefined8 *)pauVar35[2] = puVar36[4];
        *(undefined8 *)pauVar35[1] = uVar70;
      }
      local_c8 = NEON_fmax(uVar38,uVar54,4);
      if (iVar34 < 1) {
        uVar25 = 0;
      }
      else {
        auVar113 = ZEXT816(0);
        auVar71._8_8_ = _UNK_03889898;
        auVar71._0_8_ = _DAT_03889890;
        fVar69 = 1.1920929e-07;
        fVar68 = 1.1920929e-07;
        uVar25 = 0;
        local_c0 = local_c8;
        do {
          fVar52 = auVar63._12_4_;
          auVar55 = NEON_ext(auVar63,auVar63,8,1);
          iVar67 = 0;
          auVar62 = NEON_ext(auVar44,auVar44,8,1);
          uVar70 = CONCAT44(uVar141,fVar50);
          uVar54 = CONCAT44(fVar43,fVar61);
          auVar109._8_8_ = uVar70;
          auVar109._0_8_ = uVar54;
          fVar66 = auVar55._4_4_;
          fVar89 = auVar62._4_4_;
          uVar38 = 0x7f7fffee7f7fffee;
          iVar72 = -1;
LAB_03167d3c:
          do {
            pauVar30 = (undefined1 (*) [12])(lVar32 + (long)iVar67 * 0x30);
            fVar60 = (float)((ulong)*(undefined8 *)(*pauVar30 + 8) >> 0x20);
            auVar163 = *pauVar30;
            auVar107 = *pauVar30;
            pauVar5 = (undefined1 (*) [12])(pauVar30[1] + 4);
            fVar64 = (float)((ulong)*(undefined8 *)pauVar30[2] >> 0x20);
            auVar16 = *pauVar5;
            auVar11._12_4_ = fVar64;
            auVar11._0_12_ = *pauVar5;
            auVar12._12_4_ = fVar64;
            auVar12._0_12_ = *pauVar5;
            auVar62 = NEON_ext(auVar11,auVar12,8,1);
            auVar7._12_4_ = fVar60;
            auVar7._0_12_ = *pauVar30;
            auVar8._12_4_ = fVar60;
            auVar8._0_12_ = *pauVar30;
            auVar55 = NEON_ext(auVar7,auVar8,8,1);
            fVar53 = auVar55._4_4_;
            fVar90 = auVar62._4_4_;
            auVar93._0_8_ = CONCAT44(fVar90,fVar53);
            auVar57._8_8_ = auVar93._0_8_;
            auVar57._0_8_ = CONCAT44(fVar89,fVar66);
            iVar65 = 0;
            auVar93._8_8_ = CONCAT44(fVar89,fVar66);
            iVar114 = -(uint)(fVar66 < fVar53);
            iVar119 = -(uint)(fVar89 < fVar90);
            iVar156 = -(uint)(fVar53 < fVar66);
            iVar162 = -(uint)(fVar90 < fVar89);
            auVar92[0] = puVar19[0xc0] ^ (byte)iVar114;
            auVar92[1] = puVar19[0xc1] ^ (byte)((uint)iVar114 >> 8);
            auVar92[2] = puVar19[0xc2] ^ (byte)((uint)iVar114 >> 0x10);
            auVar92[3] = puVar19[0xc3] ^ (byte)((uint)iVar114 >> 0x18);
            auVar92[4] = puVar19[0xc4] ^ (byte)iVar119;
            auVar92[5] = puVar19[0xc5] ^ (byte)((uint)iVar119 >> 8);
            auVar92[6] = puVar19[0xc6] ^ (byte)((uint)iVar119 >> 0x10);
            auVar92[7] = puVar19[199] ^ (byte)((uint)iVar119 >> 0x18);
            auVar92[8] = puVar19[200] ^ (byte)iVar156;
            auVar92[9] = puVar19[0xc9] ^ (byte)((uint)iVar156 >> 8);
            auVar92[10] = puVar19[0xca] ^ (byte)((uint)iVar156 >> 0x10);
            auVar92[0xb] = puVar19[0xcb] ^ (byte)((uint)iVar156 >> 0x18);
            auVar92[0xc] = puVar19[0xcc] ^ (byte)iVar162;
            auVar92[0xd] = puVar19[0xcd] ^ (byte)((uint)iVar162 >> 8);
            auVar92[0xe] = puVar19[0xce] ^ (byte)((uint)iVar162 >> 0x10);
            auVar92[0xf] = puVar19[0xcf] ^ (byte)((uint)iVar162 >> 0x18);
            auVar93 = auVar93 ^ (auVar93 ^ auVar57) & auVar92;
            auVar62 = NEON_rev64(auVar93,4);
            iVar114 = -(uint)(auVar93._0_4_ < auVar62._0_4_);
            iVar119 = -(uint)(auVar93._4_4_ < auVar62._4_4_);
            iVar156 = -(uint)(auVar93._8_4_ < auVar62._8_4_);
            iVar162 = -(uint)(auVar93._12_4_ < auVar62._12_4_);
            auVar58[0] = puVar20[0xa0] ^ (byte)iVar114;
            auVar58[1] = puVar20[0xa1] ^ (byte)((uint)iVar114 >> 8);
            auVar58[2] = puVar20[0xa2] ^ (byte)((uint)iVar114 >> 0x10);
            auVar58[3] = puVar20[0xa3] ^ (byte)((uint)iVar114 >> 0x18);
            auVar58[4] = puVar20[0xa4] ^ (byte)iVar119;
            auVar58[5] = puVar20[0xa5] ^ (byte)((uint)iVar119 >> 8);
            auVar58[6] = puVar20[0xa6] ^ (byte)((uint)iVar119 >> 0x10);
            auVar58[7] = puVar20[0xa7] ^ (byte)((uint)iVar119 >> 0x18);
            auVar58[8] = puVar20[0xa8] ^ (byte)iVar156;
            auVar58[9] = puVar20[0xa9] ^ (byte)((uint)iVar156 >> 8);
            auVar58[10] = puVar20[0xaa] ^ (byte)((uint)iVar156 >> 0x10);
            auVar58[0xb] = puVar20[0xab] ^ (byte)((uint)iVar156 >> 0x18);
            auVar58[0xc] = puVar20[0xac] ^ (byte)iVar162;
            auVar58[0xd] = puVar20[0xad] ^ (byte)((uint)iVar162 >> 8);
            auVar58[0xe] = puVar20[0xae] ^ (byte)((uint)iVar162 >> 0x10);
            auVar58[0xf] = puVar20[0xaf] ^ (byte)((uint)iVar162 >> 0x18);
            auVar55 = *(undefined1 (*) [16])(puVar21 + 0x40);
            auVar62 = auVar62 ^ (auVar62 ^ auVar93) & auVar58;
            auVar48 = a64_TBL(ZEXT816(0),auVar62,auVar71);
            iVar114 = -(uint)(auVar62._0_4_ < auVar48._0_4_);
            iVar119 = -(uint)(auVar62._4_4_ < auVar48._4_4_);
            iVar156 = -(uint)(auVar62._8_4_ < auVar48._8_4_);
            iVar162 = -(uint)(auVar62._12_4_ < auVar48._12_4_);
            auVar94[0] = auVar55[0] ^ (byte)iVar114;
            auVar94[1] = auVar55[1] ^ (byte)((uint)iVar114 >> 8);
            auVar94[2] = auVar55[2] ^ (byte)((uint)iVar114 >> 0x10);
            auVar94[3] = auVar55[3] ^ (byte)((uint)iVar114 >> 0x18);
            auVar94[4] = auVar55[4] ^ (byte)iVar119;
            auVar94[5] = auVar55[5] ^ (byte)((uint)iVar119 >> 8);
            auVar94[6] = auVar55[6] ^ (byte)((uint)iVar119 >> 0x10);
            auVar94[7] = auVar55[7] ^ (byte)((uint)iVar119 >> 0x18);
            auVar94[8] = auVar55[8] ^ (byte)iVar156;
            auVar94[9] = auVar55[9] ^ (byte)((uint)iVar156 >> 8);
            auVar94[10] = auVar55[10] ^ (byte)((uint)iVar156 >> 0x10);
            auVar94[0xb] = auVar55[0xb] ^ (byte)((uint)iVar156 >> 0x18);
            auVar94[0xc] = auVar55[0xc] ^ (byte)iVar162;
            auVar94[0xd] = auVar55[0xd] ^ (byte)((uint)iVar162 >> 8);
            auVar94[0xe] = auVar55[0xe] ^ (byte)((uint)iVar162 >> 0x10);
            auVar94[0xf] = auVar55[0xf] ^ (byte)((uint)iVar162 >> 0x18);
            auVar48 = auVar48 ^ (auVar48 ^ auVar62) & auVar94;
            auVar62 = NEON_ext(auVar48,auVar48,8,1);
            auVar81 = auVar113;
            do {
              uVar29 = auVar81._0_8_;
              uVar146 = CONCAT44(auVar48._4_4_,auVar48._4_4_);
              if (((iVar65 != 1) && (uVar146 = CONCAT44(auVar62._4_4_,auVar62._4_4_), iVar65 != 3))
                 && (uVar146 = CONCAT44(auVar62._0_4_,auVar62._0_4_), iVar65 != 2)) {
                uVar146 = CONCAT44(auVar48._0_4_,auVar48._0_4_);
              }
              auVar136._8_8_ = auVar55._8_8_;
              auVar136._0_8_ = NEON_fmin(uVar146,uVar77,4);
              fVar53 = auVar81._0_4_;
              fVar90 = (float)auVar136._0_8_;
              iVar114 = iVar72;
              if (fVar53 < fVar90) {
                fVar73 = auVar81._4_4_;
                auVar45._0_8_ = CONCAT44(-(uint)(fVar52 <= fVar73),-(uint)(fVar52 <= fVar53));
                auVar56._0_8_ = CONCAT44(-(uint)(fVar89 <= fVar73),-(uint)(fVar89 <= fVar53));
                auVar45._8_8_ = auVar45._0_8_;
                auVar91._0_8_ = CONCAT44(-(uint)(fVar64 <= fVar73),-(uint)(fVar64 <= fVar53));
                auVar56._8_8_ = auVar56._0_8_;
                auVar55 = auVar63 ^ (auVar63 ^ auVar44) & auVar45;
                auVar91._8_8_ = auVar91._0_8_;
                auVar55 = auVar55 ^ (auVar55 ^ auVar109) & auVar56;
                auVar46._0_8_ = CONCAT44(-(uint)(fVar60 <= fVar73),-(uint)(fVar60 <= fVar53));
                auVar46._8_8_ = auVar46._0_8_;
                auVar10._12_4_ = fVar60;
                auVar10._0_12_ = auVar107;
                auVar13._12_4_ = fVar64;
                auVar13._0_12_ = auVar16;
                auVar47._12_4_ = fVar60;
                auVar47._0_12_ = auVar163;
                auVar47 = auVar47 ^ (auVar10 ^ auVar13) & auVar46;
                auVar47 = auVar47 ^ (auVar47 ^ *(undefined1 (*) [16])(pauVar30[2] + 8)) & auVar91;
                fVar74 = auVar55._0_4_ - auVar47._0_4_;
                fVar51 = auVar55._4_4_ - auVar47._4_4_;
                fVar133 = auVar55._8_4_ - auVar47._8_4_;
                if (fVar133 == 0.0 && (fVar74 == 0.0 && fVar51 == 0.0)) goto joined_r0x0316821c;
                fVar137 = fVar133 + fVar53 * (fVar53 * fVar74 + fVar51 + fVar51);
                if (0.0 < fVar137) {
LAB_03167c0c:
                  fVar53 = auVar81._0_4_;
                  goto joined_r0x03167c14;
                }
                uVar157 = CONCAT44(fVar74,fVar74);
                fVar104 = fVar51 * fVar51 - fVar74 * fVar133;
                fVar39 = fVar51 * fVar51 - fVar74 * fVar133;
                uVar146 = CONCAT44(fVar39,fVar104);
                if (fVar104 <= 0.0) {
LAB_03167afc:
                  fVar104 = fVar133 + fVar90 * (fVar51 + fVar51 + fVar90 * fVar74);
                  fVar137 = -fVar137;
                  bVar22 = false;
                  bVar23 = true;
                  bVar24 = false;
                  if (0.0 < fVar104) {
                    bVar22 = false;
                    bVar23 = false;
                    bVar24 = true;
                    if (!NAN(fVar104) && !NAN(fVar137)) {
                      bVar22 = fVar104 < fVar137;
                      bVar23 = fVar104 == fVar137;
                      bVar24 = false;
                    }
                  }
                  if (!bVar23 && bVar22 == bVar24) {
                    uVar146 = NEON_frsqrte(uVar157,4);
                    fVar137 = (float)uVar146;
                    fVar104 = (float)((ulong)uVar146 >> 0x20);
                    uVar146 = NEON_frsqrts(uVar157,CONCAT44(fVar104 * fVar104,fVar137 * fVar137),4);
                    iVar119 = -(uint)(fVar74 <= 0.0);
                    iVar156 = -(uint)(fVar74 <= 0.0);
                    fVar137 = fVar137 * (float)uVar146 * 0.00034526698;
                    fVar104 = fVar104 * (float)((ulong)uVar146 >> 0x20) * 0.00034526698;
                    fVar137 = (float)CONCAT13((byte)((uint)fVar137 >> 0x18) &
                                              ~(byte)((uint)iVar119 >> 0x18),
                                              CONCAT12((byte)((uint)fVar137 >> 0x10) &
                                                       ~(byte)((uint)iVar119 >> 0x10),
                                                       CONCAT11((byte)((uint)fVar137 >> 8) &
                                                                ~(byte)((uint)iVar119 >> 8),
                                                                SUB41(fVar137,0) & ~(byte)iVar119)))
                    ;
                    uVar75 = CONCAT44(fVar73 + (float)(CONCAT17((byte)((uint)fVar104 >> 0x18) &
                                                                ~(byte)((uint)iVar156 >> 0x18),
                                                                CONCAT16((byte)((uint)fVar104 >>
                                                                               0x10) &
                                                                         ~(byte)((uint)iVar156 >>
                                                                                0x10),
                                                                         CONCAT15((byte)((uint)
                                                  fVar104 >> 8) & ~(byte)((uint)iVar156 >> 8),
                                                  CONCAT14(SUB41(fVar104,0) & ~(byte)iVar156,fVar137
                                                          )))) >> 0x20),fVar53 + fVar137);
                    uVar146 = 0;
LAB_03167b4c:
                    fVar53 = (float)(uVar75 >> 0x20);
                    fVar53 = fVar53 * (fVar51 + fVar51 + fVar74 * fVar53);
                    fVar73 = fVar133 + (float)uVar75 * (fVar51 + fVar51 + fVar74 * (float)uVar75);
                    if (fVar73 <= 0.0) {
                      uVar2 = 1;
                      do {
                        uVar31 = uVar2;
                        fVar39 = (float)(uVar75 >> 0x20);
                        fVar137 = fVar51 + fVar74 * (float)uVar75;
                        fVar104 = fVar51 + fVar74 * fVar39;
                        if (fVar137 < 0.0) {
                          uVar2 = *(uint *)(param_9 + 0x1c);
                          if (*(uint *)(param_9 + 0x1c) <= uVar31) {
                            uVar2 = uVar31;
                          }
                          *(uint *)(param_9 + 0x1c) = uVar2;
                          goto joined_r0x0316821c;
                        }
                        fVar104 = fVar104 + fVar104;
                        uVar146 = CONCAT44(fVar104,fVar137 + fVar137);
                        uVar157 = NEON_frecpe(uVar146,4);
                        iVar119 = -(uint)(fVar137 + fVar137 == 0.0);
                        iVar156 = -(uint)(fVar104 == 0.0);
                        uVar146 = NEON_frecps(uVar146,uVar157,4);
                        uVar29 = CONCAT44((float)((ulong)uVar157 >> 0x20) *
                                          (float)((ulong)uVar146 >> 0x20),
                                          (float)uVar157 * (float)uVar146) &
                                 CONCAT17(~(byte)((uint)iVar156 >> 0x18),
                                          CONCAT16(~(byte)((uint)iVar156 >> 0x10),
                                                   CONCAT15(~(byte)((uint)iVar156 >> 8),
                                                            CONCAT14(~(byte)iVar156,
                                                                     CONCAT13(~(byte)((uint)iVar119
                                                                                     >> 0x18),
                                                                              CONCAT12(~(byte)((uint
                                                  )iVar119 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar119 >> 8),
                                                           ~(byte)iVar119)))))));
                        fVar73 = (float)uVar75 +
                                 (ABS(fVar133 * 1.1920929e-07) - fVar73) * (float)uVar29 +
                                 SUB164(ZEXT816(0x3500000035000000),0);
                        fVar39 = fVar39 + (ABS(fVar133 * 1.1920929e-07) - (fVar133 + fVar53)) *
                                          (float)(uVar29 >> 0x20) +
                                          SUB164(ZEXT816(0x3500000035000000),4);
                        uVar75 = CONCAT44(fVar39,fVar73);
                        uVar146 = 0;
                        fVar53 = fVar39 * (fVar51 + fVar51 + fVar74 * fVar39);
                        fVar73 = fVar133 + fVar73 * (fVar51 + fVar51 + fVar74 * fVar73);
                        uVar2 = uVar31 + 1;
                      } while (fVar73 <= 0.0);
                      uVar2 = *(uint *)(param_9 + 0x1c);
                      if (*(uint *)(param_9 + 0x1c) <= uVar31) {
                        uVar2 = uVar31;
                      }
                      *(uint *)(param_9 + 0x1c) = uVar2;
                    }
                    auVar81._8_8_ = uVar146;
                    auVar81._0_8_ = uVar75;
                    uVar29 = uVar75;
                    if ((float)uVar75 < fVar90) goto LAB_03167c0c;
                  }
                }
                else {
                  uVar154 = NEON_frsqrte(uVar146,4);
                  fVar40 = (float)uVar154;
                  fVar41 = (float)((ulong)uVar154 >> 0x20);
                  uVar154 = NEON_frsqrts(uVar146,CONCAT44(fVar41 * fVar41,fVar40 * fVar40),4);
                  fVar40 = fVar40 * (float)uVar154;
                  fVar41 = fVar41 * (float)((ulong)uVar154 >> 0x20);
                  uVar146 = NEON_frsqrts(uVar146,CONCAT44(fVar41 * fVar41,fVar40 * fVar40),4);
                  fVar104 = fVar104 * (float)uVar146 * fVar40;
                  fVar39 = fVar39 * (float)((ulong)uVar146 >> 0x20) * fVar41;
                  uVar75 = CONCAT44(fVar51,fVar51) & 0x8000000080000000;
                  fVar104 = (float)CONCAT13((byte)(uVar75 >> 0x18) ^ (byte)((uint)fVar104 >> 0x18),
                                            SUB43(fVar104,0));
                  fVar40 = -(fVar51 + fVar104);
                  fVar104 = -(fVar51 + (float)(CONCAT17((byte)(uVar75 >> 0x38) ^
                                                        (byte)((uint)fVar39 >> 0x18),
                                                        CONCAT16((char)((uint)fVar39 >> 0x10),
                                                                 CONCAT15((char)((uint)fVar39 >> 8),
                                                                          CONCAT14(SUB41(fVar39,0),
                                                                                   fVar104)))) >>
                                              0x20));
                  uVar146 = CONCAT44(fVar104,fVar40);
                  if (fVar40 == 0.0) goto LAB_03167afc;
                  uVar154 = NEON_frecpe(uVar146,4);
                  uVar88 = NEON_frecps(uVar146,uVar154,4);
                  fVar39 = (float)uVar154 * (float)uVar88;
                  fVar41 = (float)((ulong)uVar154 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
                  uVar146 = NEON_frecps(uVar146,CONCAT44(fVar41,fVar39),4);
                  fVar39 = fVar133 * fVar39 * (float)uVar146;
                  uVar75 = CONCAT44(fVar133 * fVar41 * (float)((ulong)uVar146 >> 0x20),fVar39);
                  if (0.0 <= fVar51 + fVar74 * fVar39) {
                    if (fVar90 <= fVar39) goto joined_r0x0316821c;
LAB_03167b44:
                    uVar146 = 0;
                    if ((float)uVar75 < fVar53) {
                      uVar75 = uVar29;
                      uVar146 = auVar81._8_8_;
                      if (fVar51 + fVar53 * fVar74 <= 0.0) goto joined_r0x0316821c;
                    }
                    goto LAB_03167b4c;
                  }
                  if (fVar74 == 0.0) goto LAB_03167afc;
                  uVar146 = NEON_frecpe(uVar157,4);
                  uVar154 = NEON_frecps(uVar157,uVar146,4);
                  fVar73 = (float)uVar146 * (float)uVar154;
                  fVar137 = (float)((ulong)uVar146 >> 0x20) * (float)((ulong)uVar154 >> 0x20);
                  uVar146 = NEON_frecps(uVar157,CONCAT44(fVar137,fVar73),4);
                  fVar40 = fVar73 * (float)uVar146 * fVar40;
                  uVar75 = CONCAT44(fVar137 * (float)((ulong)uVar146 >> 0x20) * fVar104,fVar40);
                  if (fVar40 < fVar90) goto LAB_03167b44;
                }
joined_r0x0316821c:
                auVar81 = auVar136;
                if (1.0 <= fVar90) goto LAB_03167cf4;
              }
              else {
              }
              uVar29 = auVar81._0_8_;
              iVar65 = iVar65 + 1;
              auVar55 = auVar81;
            } while (iVar65 != 4);
            lVar27 = lVar32 + (long)iVar67 * 0x30;
            fVar53 = fVar61 - *(float *)(lVar27 + 0x20);
            fVar60 = fVar43 - *(float *)(lVar27 + 0x24);
            fVar64 = fVar50 - *(float *)(lVar27 + 0x28);
            fVar73 = auVar81._0_4_;
            fVar90 = fVar64 + fVar73 * (fVar73 * fVar53 + fVar60 + fVar60);
            if (0.0 < fVar90) {
LAB_03167c18:
              iVar114 = iVar67;
              if ((float)uVar38 <= (float)uVar29) {
                iVar114 = iVar72;
                uVar29 = uVar38;
              }
              uVar38 = uVar29;
              iVar67 = iVar67 + 1;
              iVar72 = iVar114;
              if (iVar34 <= iVar67) break;
              goto LAB_03167d3c;
            }
            uVar96 = SUB41(fVar53,0);
            uVar97 = (undefined1)((uint)fVar53 >> 8);
            uVar98 = (undefined1)((uint)fVar53 >> 0x10);
            uVar99 = (undefined1)((uint)fVar53 >> 0x18);
            fVar74 = fVar60 * fVar60 - fVar53 * fVar64;
            fVar51 = fVar60 * fVar60 - fVar53 * fVar64;
            uVar146 = CONCAT44(fVar51,fVar74);
            if (fVar74 <= 0.0) {
LAB_03167dcc:
              fVar74 = fVar64 + fVar60 + fVar60 + fVar53;
              fVar90 = -fVar90;
              bVar22 = false;
              bVar23 = true;
              bVar24 = false;
              if (0.0 < fVar74) {
                bVar22 = false;
                bVar23 = false;
                bVar24 = true;
                if (!NAN(fVar74) && !NAN(fVar90)) {
                  bVar22 = fVar74 < fVar90;
                  bVar23 = fVar74 == fVar90;
                  bVar24 = false;
                }
              }
              if (!bVar23 && bVar22 == bVar24) {
                uVar146 = NEON_frsqrte(CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(
                                                  uVar96,fVar53)))),4);
                fVar90 = (float)uVar146;
                fVar74 = (float)((ulong)uVar146 >> 0x20);
                uVar146 = NEON_frsqrts(CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(
                                                  uVar96,fVar53)))),
                                       CONCAT44(fVar74 * fVar74,fVar90 * fVar90),4);
                iVar65 = -(uint)(fVar53 <= 0.0);
                iVar119 = -(uint)(fVar53 <= 0.0);
                fVar90 = fVar90 * (float)uVar146 * 0.00034526698;
                fVar74 = fVar74 * (float)((ulong)uVar146 >> 0x20) * 0.00034526698;
                fVar90 = (float)CONCAT13((byte)((uint)fVar90 >> 0x18) &
                                         ~(byte)((uint)iVar65 >> 0x18),
                                         CONCAT12((byte)((uint)fVar90 >> 0x10) &
                                                  ~(byte)((uint)iVar65 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar90 >> 8) &
                                                           ~(byte)((uint)iVar65 >> 8),
                                                           SUB41(fVar90,0) & ~(byte)iVar65)));
                uVar75 = CONCAT44(auVar81._4_4_ +
                                  (float)(CONCAT17((byte)((uint)fVar74 >> 0x18) &
                                                   ~(byte)((uint)iVar119 >> 0x18),
                                                   CONCAT16((byte)((uint)fVar74 >> 0x10) &
                                                            ~(byte)((uint)iVar119 >> 0x10),
                                                            CONCAT15((byte)((uint)fVar74 >> 8) &
                                                                     ~(byte)((uint)iVar119 >> 8),
                                                                     CONCAT14(SUB41(fVar74,0) &
                                                                              ~(byte)iVar119,fVar90)
                                                                    ))) >> 0x20),fVar73 + fVar90);
LAB_03167e14:
                fVar90 = (float)(uVar75 >> 0x20);
                fVar90 = fVar90 * (fVar60 + fVar60 + fVar53 * fVar90);
                fVar73 = fVar64 + (float)uVar75 * (fVar60 + fVar60 + fVar53 * (float)uVar75);
                if (fVar73 <= 0.0) {
                  uVar2 = 1;
                  do {
                    uVar31 = uVar2;
                    fVar133 = (float)(uVar75 >> 0x20);
                    fVar74 = fVar60 + fVar53 * (float)uVar75;
                    fVar51 = fVar60 + fVar53 * fVar133;
                    if (fVar74 < 0.0) {
                      uVar2 = *(uint *)(param_9 + 0x1c);
                      if (*(uint *)(param_9 + 0x1c) <= uVar31) {
                        uVar2 = uVar31;
                      }
                      *(uint *)(param_9 + 0x1c) = uVar2;
                      goto LAB_03167cf4;
                    }
                    fVar51 = fVar51 + fVar51;
                    uVar146 = CONCAT44(fVar51,fVar74 + fVar74);
                    uVar157 = NEON_frecpe(uVar146,4);
                    iVar65 = -(uint)(fVar74 + fVar74 == 0.0);
                    iVar119 = -(uint)(fVar51 == 0.0);
                    uVar146 = NEON_frecps(uVar146,uVar157,4);
                    uVar29 = CONCAT44((float)((ulong)uVar157 >> 0x20) *
                                      (float)((ulong)uVar146 >> 0x20),
                                      (float)uVar157 * (float)uVar146) &
                             CONCAT17(~(byte)((uint)iVar119 >> 0x18),
                                      CONCAT16(~(byte)((uint)iVar119 >> 0x10),
                                               CONCAT15(~(byte)((uint)iVar119 >> 8),
                                                        CONCAT14(~(byte)iVar119,
                                                                 CONCAT13(~(byte)((uint)iVar65 >>
                                                                                 0x18),
                                                                          CONCAT12(~(byte)((uint)
                                                  iVar65 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar65 >> 8),~(byte)iVar65)
                                                  ))))));
                    fVar73 = (float)uVar75 +
                             (ABS(fVar64 * 1.1920929e-07) - fVar73) * (float)uVar29 +
                             SUB164(ZEXT816(0x3500000035000000),0);
                    fVar133 = fVar133 + (ABS(fVar64 * 1.1920929e-07) - (fVar64 + fVar90)) *
                                        (float)(uVar29 >> 0x20) +
                                        SUB164(ZEXT816(0x3500000035000000),4);
                    uVar75 = CONCAT44(fVar133,fVar73);
                    fVar90 = fVar133 * (fVar60 + fVar60 + fVar53 * fVar133);
                    fVar73 = fVar64 + fVar73 * (fVar60 + fVar60 + fVar53 * fVar73);
                    uVar2 = uVar31 + 1;
                  } while (fVar73 <= 0.0);
                  uVar2 = *(uint *)(param_9 + 0x1c);
                  if (*(uint *)(param_9 + 0x1c) <= uVar31) {
                    uVar2 = uVar31;
                  }
                  *(uint *)(param_9 + 0x1c) = uVar2;
                }
                fVar53 = (float)uVar75;
                uVar29 = uVar75;
joined_r0x03167c14:
                if (fVar53 < 1.0) goto LAB_03167c18;
              }
            }
            else {
              uVar157 = NEON_frsqrte(uVar146,4);
              fVar133 = (float)uVar157;
              fVar137 = (float)((ulong)uVar157 >> 0x20);
              uVar157 = NEON_frsqrts(uVar146,CONCAT44(fVar137 * fVar137,fVar133 * fVar133),4);
              fVar133 = fVar133 * (float)uVar157;
              fVar137 = fVar137 * (float)((ulong)uVar157 >> 0x20);
              uVar146 = NEON_frsqrts(uVar146,CONCAT44(fVar137 * fVar137,fVar133 * fVar133),4);
              fVar74 = fVar74 * (float)uVar146 * fVar133;
              fVar51 = fVar51 * (float)((ulong)uVar146 >> 0x20) * fVar137;
              uVar75 = CONCAT44(fVar60,fVar60) & 0x8000000080000000;
              fVar74 = (float)CONCAT13((byte)(uVar75 >> 0x18) ^ (byte)((uint)fVar74 >> 0x18),
                                       SUB43(fVar74,0));
              fVar133 = -(fVar60 + fVar74);
              fVar74 = -(fVar60 + (float)(CONCAT17((byte)(uVar75 >> 0x38) ^
                                                   (byte)((uint)fVar51 >> 0x18),
                                                   CONCAT16((char)((uint)fVar51 >> 0x10),
                                                            CONCAT15((char)((uint)fVar51 >> 8),
                                                                     CONCAT14(SUB41(fVar51,0),fVar74
                                                                             )))) >> 0x20));
              uVar146 = CONCAT44(fVar74,fVar133);
              if (fVar133 == 0.0) goto LAB_03167dcc;
              uVar157 = NEON_frecpe(uVar146,4);
              uVar154 = NEON_frecps(uVar146,uVar157,4);
              fVar51 = (float)uVar157 * (float)uVar154;
              fVar137 = (float)((ulong)uVar157 >> 0x20) * (float)((ulong)uVar154 >> 0x20);
              uVar146 = NEON_frecps(uVar146,CONCAT44(fVar137,fVar51),4);
              fVar51 = fVar64 * fVar51 * (float)uVar146;
              uVar75 = CONCAT44(fVar64 * fVar137 * (float)((ulong)uVar146 >> 0x20),fVar51);
              if (0.0 <= fVar60 + fVar53 * fVar51) {
                if (1.0 <= fVar51) goto LAB_03167cf4;
LAB_03167e0c:
                if (((float)uVar75 < fVar73) && (uVar75 = uVar29, fVar60 + fVar73 * fVar53 <= 0.0))
                goto LAB_03167cf4;
                goto LAB_03167e14;
              }
              if (fVar53 == 0.0) goto LAB_03167dcc;
              uVar146 = NEON_frecpe(CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(uVar96,
                                                  fVar53)))),4);
              uVar157 = NEON_frecps(CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(uVar96,
                                                  fVar53)))),uVar146,4);
              fVar90 = (float)uVar146 * (float)uVar157;
              fVar51 = (float)((ulong)uVar146 >> 0x20) * (float)((ulong)uVar157 >> 0x20);
              uVar146 = NEON_frecps(CONCAT17(uVar99,CONCAT16(uVar98,CONCAT15(uVar97,CONCAT14(uVar96,
                                                  fVar53)))),CONCAT44(fVar51,fVar90),4);
              fVar133 = fVar90 * (float)uVar146 * fVar133;
              uVar75 = CONCAT44(fVar51 * (float)((ulong)uVar146 >> 0x20) * fVar74,fVar133);
              if (fVar133 < 1.0) goto LAB_03167e0c;
            }
LAB_03167cf4:
            iVar34 = iVar34 + -1;
            if (iVar34 == iVar67) {
              iVar34 = iVar67;
              break;
            }
            puVar36 = (undefined8 *)(lVar32 + (long)iVar34 * 0x30);
            uVar146 = puVar36[5];
            *(undefined8 *)pauVar30[2] = puVar36[3];
            *(undefined8 *)(pauVar30[3] + 4) = uVar146;
            *(undefined8 *)(*pauVar30 + 8) = puVar36[1];
            *(undefined8 *)*pauVar30 = *puVar36;
            uVar146 = puVar36[2];
            *(undefined8 *)(pauVar30[2] + 8) = puVar36[4];
            *(undefined8 *)(pauVar30[1] + 4) = uVar146;
          } while (iVar67 < iVar34);
          if (iVar114 == -1) break;
          pauVar35 = (undefined1 (*) [16])(lVar32 + (long)iVar114 * 0x30);
          fVar50 = (float)*(undefined8 *)(pauVar35[2] + 8);
          uVar141 = (undefined4)((ulong)*(undefined8 *)(pauVar35[2] + 8) >> 0x20);
          uVar146 = *(undefined8 *)pauVar35[2];
          fVar61 = (float)uVar146;
          fVar43 = (float)((ulong)uVar146 >> 0x20);
          auVar55 = *pauVar35;
          auVar62 = pauVar35[1];
          fVar64 = (float)uVar38;
          fVar73 = (float)(uVar38 >> 0x20);
          auVar48 = NEON_ext(auVar62,auVar62,8,1);
          auVar59._0_8_ =
               CONCAT44(-(uint)(auVar48._4_4_ <= fVar73),-(uint)(auVar48._4_4_ <= fVar64));
          auVar49._0_8_ =
               CONCAT44(-(uint)(auVar55._12_4_ <= fVar73),-(uint)(auVar55._12_4_ <= fVar64));
          auVar49._8_8_ = auVar49._0_8_;
          auVar95._0_8_ = CONCAT44(-(uint)(fVar89 <= fVar73),-(uint)(fVar89 <= fVar64));
          auVar59._8_8_ = auVar59._0_8_;
          auVar48 = auVar55 ^ (auVar55 ^ auVar62) & auVar49;
          auVar95._8_8_ = auVar95._0_8_;
          auVar9._12_4_ = uVar141;
          auVar9._0_12_ = *(undefined1 (*) [12])pauVar35[2];
          auVar48 = auVar48 ^ (auVar48 ^ auVar9) & auVar59;
          auVar76._0_8_ = CONCAT44(-(uint)(fVar52 <= fVar73),-(uint)(fVar52 <= fVar64));
          auVar76._8_8_ = auVar76._0_8_;
          fVar53 = fVar64 * fVar64 * auVar48._0_4_;
          fVar90 = (fVar64 + fVar64) * auVar48._4_4_;
          fVar60 = (float)DAT_0388a618 * auVar48._8_4_;
          auVar48 = auVar63 ^ (auVar63 ^ auVar44) & auVar76;
          auVar48 = auVar48 ^ (auVar48 ^ auVar109) & auVar95;
          fVar66 = fVar64 * fVar64 * auVar48._0_4_;
          fVar89 = (fVar64 + fVar64) * auVar48._4_4_;
          fVar52 = (float)DAT_0388a618 * auVar48._8_4_;
          uVar146 = NEON_fmin(CONCAT44(fVar53 + fVar90 + fVar60,fVar53 + fVar90 + fVar60),
                              CONCAT44(fVar52 + fVar66 + fVar89,fVar52 + fVar66 + fVar89),4);
          bVar22 = (float)local_c0 < (float)uVar146;
          if (bVar22) {
            uVar37 = uVar38;
            local_c8 = uVar146;
            if (fVar87 <= (float)uVar146) break;
            local_c0 = uVar146;
          }
          auVar113._0_4_ = fVar69 + fVar64;
          auVar113._4_4_ = fVar68 + fVar73;
          auVar113._8_8_ = 0;
          fVar69 = fVar69 + fVar69;
          fVar68 = fVar68 + fVar68;
          lVar27 = lVar32 + (long)iVar114 * 0x30;
          uVar25 = uVar25 + 1;
          *(long *)(*pauVar35 + 8) = auVar63._8_8_;
          *(long *)*pauVar35 = auVar63._0_8_;
          *(long *)(lVar27 + 0x18) = auVar44._8_8_;
          *(long *)(lVar27 + 0x10) = auVar44._0_8_;
          *(undefined8 *)(lVar27 + 0x28) = uVar70;
          *(undefined8 *)(lVar27 + 0x20) = uVar54;
          auVar63 = auVar55;
          auVar44 = auVar62;
        } while (0 < iVar34);
      }
      uVar77 = NEON_frsqrte(local_c8,4);
      fVar61 = (float)uVar77;
      fVar43 = (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(local_c8,CONCAT44(fVar43 * fVar43,fVar61 * fVar61),4);
      fVar61 = fVar61 * (float)uVar77;
      fVar43 = fVar43 * (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(local_c8,CONCAT44(fVar43 * fVar43,fVar61 * fVar61),4);
      uVar2 = *(uint *)(param_9 + 0x18);
      if (*(uint *)(param_9 + 0x18) <= uVar25) {
        uVar2 = uVar25;
      }
      iVar67 = -(uint)((float)local_c8 <= 0.0);
      *(uint *)(param_9 + 0x18) = uVar2;
      *param_7 = (int)uVar37;
      fVar61 = (float)local_c8 * (float)uVar77 * fVar61;
      fVar43 = *param_4 +
               (float)CONCAT13((byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                               CONCAT12((byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar61 >> 8) &
                                                  ~(byte)((uint)iVar67 >> 8),
                                                  SUB41(fVar61,0) & ~(byte)iVar67)));
      fVar61 = *param_4 * 1.0000001;
      if (fVar61 <= 1.1754944e-38) {
        fVar61 = 1.1754944e-38;
      }
      fVar50 = *param_3;
      if (fVar43 <= *param_3) {
        fVar50 = fVar43;
      }
      if (fVar61 <= fVar43) {
        fVar61 = fVar50;
      }
    }
  }
  param_7[1] = fVar61;
  lVar27 = *(long *)(lVar28 + 0x38d490);
  if (lVar27 == 0) {
    lVar27 = FUN_0333d16c(0,1);
    *(long *)(lVar28 + 0x38d490) = lVar27;
  }
  lVar28 = *(long *)(lVar27 + 8);
  uVar37 = (long)(int)uVar3 * 0x30 + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar28 + 0x10) < uVar37) || (*(long *)(lVar28 + 0x18) != lVar32 + uVar37)) ||
     (*(long *)(lVar28 + 0x28) == lVar32)) {
    if (lVar32 != 0) {
      if (*(ulong *)(lVar28 + 0x10) < uVar37) {
        *(int *)(*(long *)(lVar28 + 8) + 0x20) = *(int *)(*(long *)(lVar28 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar28 + 0x40) + 0x18))(*(long **)(lVar28 + 0x40),lVar32);
      }
      else if (*(long *)(lVar28 + 0x18) == lVar32 + uVar37) {
        *(long *)(lVar28 + 0x18) = lVar32;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar28,lVar32);
      }
    }
  }
  else {
    *(long *)(lVar28 + 0x18) = lVar32;
  }
LAB_031680d0:
  lVar28 = nn::os::GetSystemTick();
  *(long *)(param_9 + 8) = (lVar28 - lVar26) + *(long *)(param_9 + 8);
  *(int *)(param_9 + 0x10) = *(int *)(param_9 + 0x10) + 1;
  return;
}


