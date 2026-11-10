/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f9729c; name: FUN_02f9729c
 */


void FUN_02f9729c(undefined1 param_1 [16],long param_2,long *param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  bool bVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar39;
  float fVar44;
  float fVar40;
  float fVar41;
  float fVar47;
  undefined1 auVar33 [16];
  float fVar42;
  float fVar43;
  float fVar45;
  undefined8 uVar46;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar48;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar73;
  undefined1 auVar57 [16];
  int iVar49;
  float fVar50;
  float fVar51;
  int iVar69;
  undefined8 uVar55;
  float fVar70;
  float fVar71;
  float fVar74;
  undefined1 auVar58 [16];
  float fVar72;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  ulong uVar56;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar75;
  float fVar81;
  undefined8 uVar77;
  undefined8 uVar78;
  float fVar84;
  undefined1 auVar79 [16];
  float fVar76;
  float fVar82;
  float fVar83;
  undefined1 auVar80 [16];
  float fVar85;
  float fVar94;
  undefined8 uVar86;
  float fVar95;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined8 uVar96;
  undefined1 auVar90 [16];
  undefined8 uVar87;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar97;
  float fVar98;
  float fVar99;
  ulong uVar100;
  undefined8 uVar101;
  float fVar103;
  undefined1 auVar102 [16];
  float fVar104;
  undefined1 auVar105 [16];
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined4 uVar111;
  float fVar113;
  float fVar114;
  float fVar115;
  ulong uVar112;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar124;
  undefined8 uVar123;
  undefined8 unaff_d9;
  float fVar125;
  float fVar126;
  float fVar127;
  undefined8 unaff_d13;
  ulong uVar128;
  float fVar129;
  ulong uVar130;
  float fVar135;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar138;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar139 [16];
  undefined8 uVar140;
  float fVar141;
  undefined8 uVar142;
  ulong local_1e0;
  float local_1c0;
  float fStack_1bc;
  float local_180;
  float fStack_17c;
  undefined8 local_170;
  undefined8 uStack_168;
  ulong local_160;
  float local_140;
  float fStack_13c;
  float local_120;
  float fStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  
  auVar122._4_4_ = (int)param_3[0x23];
  auVar122._0_4_ = (int)param_3[0x23];
  fVar97 = *(float *)(param_3 + 0x22);
  uVar100 = CONCAT44(fVar97,fVar97);
  uVar123 = CONCAT44(*(undefined4 *)((long)param_3 + 0x11c),*(undefined4 *)((long)param_3 + 0x11c));
  cVar3 = *(char *)((long)param_3 + 0x131);
  fVar27 = *(float *)(param_3 + 0x25);
  fVar28 = *(float *)((long)param_3 + 300);
  auVar102 = *(undefined1 (*) [16])(param_3 + 10);
  auVar57 = NEON_ext(auVar102,auVar102,8,1);
  fVar81 = auVar57._4_4_ * auVar57._4_4_;
  uVar54 = NEON_ext(auVar102._0_8_,auVar57._0_8_,4,1);
  fVar75 = fVar81 + -0.5;
  fVar81 = fVar81 + -0.5;
  auVar57 = *(undefined1 (*) [16])(param_2 + 0x170);
  fVar29 = auVar102._0_4_;
  fVar39 = auVar57._0_4_;
  fVar30 = auVar102._4_4_;
  fVar47 = auVar57._4_4_;
  fVar31 = auVar102._8_4_;
  fVar44 = auVar57._8_4_;
  fVar40 = auVar102._12_4_;
  fVar98 = fVar29 * fVar39 + fVar30 * fVar47 + fVar31 * fVar44;
  fVar103 = fVar29 * fVar39 + fVar30 * fVar47 + fVar31 * fVar44;
  fVar104 = *(float *)(param_3[1] + 0x20);
  fVar106 = *(float *)(*param_3 + 0x20);
  auVar102 = NEON_ext(auVar57,auVar57,8,1);
  uVar101 = NEON_ext(auVar57._0_8_,auVar102._0_8_,4,1);
  auVar80._0_4_ = fVar29 * (float)uVar101 - fVar39 * (float)uVar54;
  auVar80._4_4_ = fVar30 * (float)((ulong)uVar101 >> 0x20) - fVar47 * (float)((ulong)uVar54 >> 0x20)
  ;
  auVar80._8_4_ = fVar31 * fVar39 - fVar44 * fVar29;
  auVar80._12_4_ = fVar40 * fVar47 - auVar57._12_4_ * fVar30;
  auVar102 = NEON_ext(auVar80,auVar80,4,1);
  fVar48 = fVar106 + fVar104;
  fVar29 = fVar39 * fVar75 + fVar29 * fVar98 + auVar102._0_4_ * fVar40;
  fVar39 = fVar47 * fVar81 + fVar30 * fVar103 + auVar102._4_4_ * fVar40;
  fVar75 = fVar44 * fVar75 + fVar31 * fVar98 + auVar80._0_4_ * fVar40;
  fVar47 = auVar57._12_4_ * fVar81 + fVar40 * fVar103 + auVar80._4_4_ * fVar40;
  uVar54 = *(undefined8 *)(param_2 + 0x160);
  auVar102 = *(undefined1 (*) [16])(param_3 + 0x1e);
  fVar30 = *(float *)(param_3 + 2);
  fVar31 = auVar102._0_4_ * fVar30;
  fVar40 = auVar102._4_4_ * fVar30;
  fVar81 = auVar102._8_4_ * fVar30;
  fVar30 = auVar102._12_4_ * fVar30;
  iVar17 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*param_3 + 0x18) * 0x200 + 0x58))();
  auVar102._4_4_ = fVar40;
  auVar102._0_4_ = fVar31;
  auVar102._8_4_ = fVar81;
  auVar102._12_4_ = fVar30;
  auVar102 = NEON_ext(auVar102,auVar102,4,1);
  uVar112 = CONCAT44((float)((ulong)uVar54 >> 0x20) - fVar48,(float)uVar54 - fVar48);
  auVar105._8_8_ = 0;
  auVar105._0_8_ = uVar112;
  uVar19 = (ulong)(int)(iVar17 * 0xc + 0x7fU & 0xffffff80);
  uVar12 = iVar17 * 3;
  local_1e0 = 0;
  uStack_118 = 0;
  auVar57._4_4_ = fVar39 + fVar39;
  auVar57._0_4_ = fVar29 + fVar29;
  auVar57._8_4_ = fVar75 + fVar75;
  auVar57._12_4_ = fVar47 + fVar47;
  auVar122._8_8_ = param_1._8_8_;
  uVar130 = 0;
  uVar54 = NEON_fmov(0xbf800000,4);
  bVar16 = cVar3 != '\x01';
  *param_5 = 0;
  puVar26 = (undefined8 *)0x0;
  puVar25 = (undefined8 *)0x0;
  uVar2 = uVar12 & 7;
  lVar18 = tpidr_el0;
  uVar128 = uVar112;
  do {
    auVar91._8_8_ = uStack_118;
    auVar91._0_8_ = local_1e0;
    auVar131._0_8_ = uVar128;
    auVar120 = auVar57;
    do {
      local_160 = uVar130;
      uVar56 = uVar112;
      uVar111 = (undefined4)auVar131._0_8_;
      auVar57 = NEON_ext(auVar120,auVar120,4,1);
      fVar32 = auVar120._0_4_;
      fVar29 = auVar120._4_4_;
      fVar39 = fVar29 * *(float *)((long)param_3 + 0xe4);
      fVar44 = auVar120._8_4_ * *(float *)(param_3 + 0x1d);
      local_1c0 = auVar102._0_4_;
      fStack_1bc = auVar102._4_4_;
      fVar99 = fVar32 * *(float *)(param_3 + 0x1c) + fVar39 + fVar44;
      auVar132._0_4_ = fVar31 * auVar57._0_4_ - local_1c0 * fVar32;
      auVar132._4_4_ = fVar40 * auVar57._4_4_ - fStack_1bc * fVar29;
      auVar132._8_4_ = fVar81 * fVar32 - fVar31 * auVar120._8_4_;
      auVar132._12_4_ = fVar30 * fVar29 - fVar40 * auVar120._12_4_;
      auVar57 = NEON_ext(auVar132,auVar132,4,1);
      fVar75 = auVar57._0_4_ * auVar57._0_4_;
      fVar47 = auVar57._4_4_ * auVar57._4_4_;
      fVar29 = fVar75 + fVar47 + auVar132._0_4_ * auVar132._0_4_;
      fVar75 = fVar75 + fVar47 + auVar132._0_4_ * auVar132._0_4_;
      uVar101 = CONCAT44(fVar75,fVar29);
      uVar77 = NEON_frsqrte(uVar101,4);
      fVar47 = (float)uVar77;
      fVar98 = (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(uVar101,CONCAT44(fVar98 * fVar98,fVar47 * fVar47),4);
      fVar47 = fVar47 * (float)uVar77;
      fVar98 = fVar98 * (float)((ulong)uVar77 >> 0x20);
      uVar101 = NEON_frsqrts(uVar101,CONCAT44(fVar98 * fVar98,fVar47 * fVar47),4);
      iVar49 = -(uint)(fVar29 <= 0.0);
      iVar69 = -(uint)(fVar75 <= 0.0);
      fVar29 = fVar29 * (float)uVar101 * fVar47;
      fVar75 = fVar75 * (float)((ulong)uVar101 >> 0x20) * fVar98;
      fVar98 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                               CONCAT12((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar29 >> 8) &
                                                  ~(byte)((uint)iVar49 >> 8),
                                                  SUB41(fVar29,0) & ~(byte)iVar49)));
      fVar29 = fVar97 - auVar91._0_4_;
      fVar47 = fVar97 - auVar91._4_4_;
      fVar103 = fVar29 * (fVar98 - fVar99);
      uVar101 = CONCAT44(fVar47 * ((float)(CONCAT17((byte)((uint)fVar75 >> 0x18) &
                                                    ~(byte)((uint)iVar69 >> 0x18),
                                                    CONCAT16((byte)((uint)fVar75 >> 0x10) &
                                                             ~(byte)((uint)iVar69 >> 0x10),
                                                             CONCAT15((byte)((uint)fVar75 >> 8) &
                                                                      ~(byte)((uint)iVar69 >> 8),
                                                                      CONCAT14(SUB41(fVar75,0) &
                                                                               ~(byte)iVar69,fVar98)
                                                                     ))) >> 0x20) -
                                  (fVar32 * *(float *)(param_3 + 0x1c) + fVar39 + fVar44)),fVar103);
      fVar39 = auVar122._0_4_;
      if (fVar103 <= auVar105._0_4_ - fVar39) goto joined_r0x02f98114;
      fVar124 = (float)((ulong)uVar123 >> 0x20);
      uVar77 = NEON_frecpe(uVar101,4);
      uVar78 = NEON_frecps(uVar101,uVar77,4);
      fVar75 = (float)uVar77 * (float)uVar78;
      fVar44 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar78 >> 0x20);
      uVar101 = NEON_frecps(uVar101,CONCAT44(fVar44,fVar75),4);
      uVar101 = NEON_fmax(CONCAT44(fVar47 * (auVar105._4_4_ - fVar124) *
                                   fVar44 * (float)((ulong)uVar101 >> 0x20),
                                   fVar29 * (auVar105._0_4_ - (float)uVar123) *
                                   fVar75 * (float)uVar101),CONCAT44(fVar28,fVar28),4);
      local_180 = (float)uVar101;
      fStack_17c = (float)((ulong)uVar101 >> 0x20);
      uVar55 = NEON_fmin(CONCAT44(auVar91._4_4_ + fStack_17c,auVar91._0_4_ + local_180),uVar100,4);
      local_120 = (float)uVar55;
      fVar32 = local_120 * *(float *)((long)param_3 + 0x114);
      fStack_11c = (float)((ulong)uVar55 >> 0x20);
      fVar41 = fStack_11c * *(float *)((long)param_3 + 0x114);
      uStack_118 = 0;
      fVar29 = *(float *)(param_3 + 0xe);
      fVar75 = *(float *)((long)param_3 + 0x74);
      fVar47 = *(float *)(param_3 + 0xf);
      fVar44 = *(float *)((long)param_3 + 0x7c);
      fVar50 = fVar32 + fVar32;
      fVar70 = fVar41 + fVar41;
      fVar125 = (float)uVar54;
      fVar126 = (float)((ulong)uVar54 >> 0x20);
      fVar51 = fVar29 + (*(float *)(param_3 + 0xc) - fVar29) * (fVar50 + fVar125);
      fVar71 = fVar75 + (*(float *)((long)param_3 + 100) - fVar75) * (fVar70 + fVar126);
      fVar73 = fVar47 + (*(float *)(param_3 + 0xd) - fVar47) * (fVar50 + fVar125);
      fVar74 = fVar44 + (*(float *)((long)param_3 + 0x6c) - fVar44) * (fVar70 + fVar126);
      fVar51 = (float)((uint)fVar51 ^
                      ((uint)fVar51 ^
                      (uint)(*(float *)(param_3 + 10) + (fVar29 - *(float *)(param_3 + 10)) * fVar50
                            )) & -(uint)(fVar32 < 0.5));
      fVar71 = (float)((uint)fVar71 ^
                      ((uint)fVar71 ^
                      (uint)(*(float *)((long)param_3 + 0x54) +
                            (fVar75 - *(float *)((long)param_3 + 0x54)) * fVar70)) &
                      -(uint)(fVar41 < 0.5));
      fVar73 = (float)((uint)fVar73 ^
                      ((uint)fVar73 ^
                      (uint)(*(float *)(param_3 + 0xb) +
                            (fVar47 - *(float *)(param_3 + 0xb)) * fVar50)) & -(uint)(fVar32 < 0.5))
      ;
      fVar74 = (float)((uint)fVar74 ^
                      ((uint)fVar74 ^
                      (uint)(*(float *)((long)param_3 + 0x5c) +
                            (fVar44 - *(float *)((long)param_3 + 0x5c)) * fVar70)) &
                      -(uint)(fVar41 < 0.5));
      auVar133._0_4_ = fVar51 * fVar51;
      auVar133._4_4_ = fVar71 * fVar71;
      auVar133._8_4_ = fVar73 * fVar73;
      auVar133._12_4_ = fVar74 * fVar74;
      auVar57 = NEON_ext(auVar133,auVar133,8,1);
      fVar29 = auVar57._0_4_ + auVar57._4_4_;
      uVar101 = CONCAT44(auVar133._0_4_ + auVar133._4_4_ + fVar29,
                         auVar133._0_4_ + auVar133._4_4_ + fVar29);
      uVar77 = NEON_frsqrte(uVar101,4);
      fVar29 = (float)uVar77;
      fVar75 = (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(uVar101,CONCAT44(fVar75 * fVar75,fVar29 * fVar29),4);
      fVar29 = fVar29 * (float)uVar77;
      fVar75 = fVar75 * (float)((ulong)uVar77 >> 0x20);
      uVar101 = NEON_frsqrts(uVar101,CONCAT44(fVar75 * fVar75,fVar29 * fVar29),4);
      fVar29 = (float)uVar101 * fVar29;
      fVar75 = (float)((ulong)uVar101 >> 0x20) * fVar75;
      fVar51 = fVar51 * fVar29;
      fVar71 = fVar71 * fVar75;
      auVar139._0_8_ = CONCAT44(fVar71,fVar51);
      auVar139._8_4_ = fVar73 * fVar29;
      auVar139._12_4_ = fVar74 * fVar75;
      uStack_b8 = auVar139._8_8_;
      auVar57 = NEON_ext(auVar139,auVar139,8,1);
      fVar44 = auVar57._4_4_ * auVar57._4_4_;
      fVar47 = fVar44 + -0.5;
      fVar44 = fVar44 + -0.5;
      auVar57 = *(undefined1 (*) [16])(param_3 + 8);
      fVar29 = auVar57._0_4_;
      fVar75 = auVar57._4_4_;
      fVar50 = auVar57._8_4_;
      fVar70 = fVar51 * fVar29 + fVar71 * fVar75 + auVar139._8_4_ * fVar50;
      fVar73 = fVar51 * fVar29 + fVar71 * fVar75 + auVar139._8_4_ * fVar50;
      auVar105 = NEON_ext(auVar57,auVar57,8,1);
      uVar101 = NEON_ext(auVar57._0_8_,auVar105._0_8_,4,1);
      auVar105 = NEON_ext(auVar139,auVar139,4,1);
      auVar88._0_4_ = fVar51 * (float)uVar101 - fVar29 * auVar105._0_4_;
      auVar88._4_4_ = fVar71 * (float)((ulong)uVar101 >> 0x20) - fVar75 * auVar105._4_4_;
      auVar88._8_4_ = auVar139._8_4_ * fVar29 - fVar50 * fVar51;
      auVar88._12_4_ = auVar139._12_4_ * fVar75 - auVar57._12_4_ * fVar71;
      auVar105 = NEON_ext(auVar88,auVar88,4,1);
      fVar29 = fVar29 * fVar47 + fVar51 * fVar70 + auVar105._0_4_ * auVar139._12_4_;
      fVar75 = fVar75 * fVar44 + fVar71 * fVar73 + auVar105._4_4_ * auVar139._12_4_;
      fVar47 = fVar50 * fVar47 + auVar139._8_4_ * fVar70 + auVar88._0_4_ * auVar139._12_4_;
      fVar44 = auVar57._12_4_ * fVar44 + auVar139._12_4_ * fVar73 + auVar88._4_4_ * auVar139._12_4_;
      auVar33._0_8_ =
           CONCAT44((*(float *)((long)param_3 + 0x24) +
                    fVar41 * (*(float *)((long)param_3 + 0x34) - *(float *)((long)param_3 + 0x24)))
                    - (fVar75 + fVar75),
                    (*(float *)(param_3 + 4) +
                    fVar32 * (*(float *)(param_3 + 6) - *(float *)(param_3 + 4))) -
                    (fVar29 + fVar29));
      auVar33._8_4_ =
           (*(float *)(param_3 + 5) + fVar32 * (*(float *)(param_3 + 7) - *(float *)(param_3 + 5)))
           - (fVar47 + fVar47);
      auVar33._12_4_ =
           (*(float *)((long)param_3 + 0x2c) +
           fVar41 * (*(float *)((long)param_3 + 0x3c) - *(float *)((long)param_3 + 0x2c))) -
           (fVar44 + fVar44);
      uVar46 = auVar33._8_8_;
      local_c0 = auVar139._0_8_;
      FUN_032c9fc0(&local_100,&local_c0);
      fVar41 = fStack_dc;
      fVar32 = local_e0;
      fVar44 = fStack_e4;
      fVar47 = fStack_e8;
      fVar75 = fStack_ec;
      fVar29 = local_f0;
      uVar77 = CONCAT44(fStack_f4,fStack_f8);
      uVar101 = CONCAT44(fStack_fc,local_100);
      auVar79._4_4_ = fStack_fc;
      auVar79._0_4_ = local_100;
      auVar79._8_4_ = fStack_f8;
      auVar79._12_4_ = fStack_f4;
      uVar87 = CONCAT44(fStack_e4,fStack_e8);
      uVar78 = CONCAT44(fStack_ec,local_f0);
      auVar58._4_4_ = fStack_ec;
      auVar58._0_4_ = local_f0;
      auVar58._8_4_ = fStack_e8;
      auVar58._12_4_ = fStack_e4;
      uVar96 = CONCAT44(fStack_d4,fStack_d8);
      auVar89._4_4_ = fStack_dc;
      auVar89._0_4_ = local_e0;
      auVar89._8_4_ = fStack_d8;
      auVar89._12_4_ = fStack_d4;
      local_d0 = auVar33._0_8_;
      uStack_c8 = uVar46;
      if (bVar16) {
        bVar16 = true;
        if ((-fVar99 < fVar98) && (local_120 < fVar97)) {
          fVar50 = (float)uStack_168;
          fVar51 = (float)((ulong)uStack_168 >> 0x20);
          fVar98 = (float)local_170;
          fVar99 = (float)((ulong)local_170 >> 0x20);
          if (puVar25 == (undefined8 *)0x0) {
            lVar21 = *(long *)(lVar18 + 0x38d490);
            if (lVar21 == 0) {
              lVar21 = FUN_0333d16c(0,1);
              *(long *)(lVar18 + 0x38d490) = lVar21;
            }
            lVar21 = *(long *)(lVar21 + 8);
            if (*(ulong *)(lVar21 + 0x10) < uVar19) {
LAB_02f98314:
              puVar25 = (undefined8 *)FUN_032ce670();
            }
            else {
              puVar25 = *(undefined8 **)(lVar21 + 0x18);
              if (*(ulong *)(lVar21 + 0x20) < (long)puVar25 + uVar19) goto LAB_02f98314;
              *(ulong *)(lVar21 + 0x18) = (long)puVar25 + uVar19;
            }
            puVar26 = (undefined8 *)
                      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*param_3 + 0x18) * 0x200 + 0x60))
                                (*param_3,puVar25,iVar17,&local_c0);
            if ((0 < (int)uVar12) && (puVar26 != puVar25)) {
              puVar23 = puVar25;
              if (6 < uVar12 - 1) {
                puVar20 = puVar25;
                iVar49 = uVar12 - uVar2;
                do {
                  *(undefined4 *)puVar20 = *(undefined4 *)puVar26;
                  *(undefined4 *)((long)puVar20 + 4) = *(undefined4 *)((long)puVar26 + 4);
                  *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar26 + 1);
                  *(undefined4 *)((long)puVar20 + 0xc) = *(undefined4 *)((long)puVar26 + 0xc);
                  *(undefined4 *)(puVar20 + 2) = *(undefined4 *)(puVar26 + 2);
                  *(undefined4 *)((long)puVar20 + 0x14) = *(undefined4 *)((long)puVar26 + 0x14);
                  *(undefined4 *)(puVar20 + 3) = *(undefined4 *)(puVar26 + 3);
                  puVar1 = (undefined4 *)((long)puVar26 + 0x1c);
                  puVar26 = puVar26 + 4;
                  puVar23 = puVar20 + 4;
                  iVar49 = iVar49 + -8;
                  *(undefined4 *)((long)puVar20 + 0x1c) = *puVar1;
                  puVar20 = puVar23;
                } while (iVar49 != 0);
              }
              if (uVar2 != 0) {
                uVar22 = uVar2;
                do {
                  uVar22 = uVar22 - 1;
                  *(undefined4 *)puVar23 = *(undefined4 *)puVar26;
                  puVar26 = (undefined8 *)((long)puVar26 + 4);
                  puVar23 = (undefined8 *)((long)puVar23 + 4);
                } while (uVar22 != 0);
              }
            }
            auVar79._4_4_ = fStack_fc;
            auVar79._0_4_ = local_100;
            auVar79._8_4_ = fStack_f8;
            auVar79._12_4_ = fStack_f4;
            auVar58._4_4_ = fStack_ec;
            auVar58._0_4_ = local_f0;
            auVar58._8_4_ = fStack_e8;
            auVar58._12_4_ = fStack_e4;
            auVar105 = NEON_ext(auVar58,auVar58,8,1);
            auVar89._4_4_ = fStack_dc;
            auVar89._0_4_ = local_e0;
            auVar89._8_4_ = fStack_d8;
            auVar89._12_4_ = fStack_d4;
            auVar57 = NEON_ext(auVar79,auVar79,8,1);
            auVar80 = NEON_ext(auVar89,auVar89,8,1);
            fVar70 = *(float *)(param_3 + 0x1e);
            fVar71 = *(float *)((long)param_3 + 0xf4);
            fVar73 = *(float *)(param_3 + 0x1f);
            fVar98 = (float)local_c0 + *(float *)(param_3[1] + 0x20);
            unaff_d9 = CONCAT44(fVar98,fVar98);
            fVar98 = auVar57._0_4_ * fVar73 + local_100 * fVar70 + fStack_fc * fVar71;
            fVar99 = auVar105._0_4_ * fVar73 + local_f0 * fVar70 + fStack_ec * fVar71;
            fVar50 = auVar80._0_4_ * fVar73 + local_e0 * fVar70 + fStack_dc * fVar71;
            fVar51 = auVar80._4_4_ * fVar73 + fStack_dc * fVar70 + auVar80._4_4_ * fVar71;
            unaff_d13 = CONCAT44(fVar70 * fVar70 + fVar71 * fVar71 + fVar73 * fVar73,
                                 fVar70 * fVar70 + fVar71 * fVar71 + fVar73 * fVar73);
            puVar26 = puVar25;
          }
          uVar87 = CONCAT44(fVar44,fVar47);
          uVar78 = CONCAT44(fVar75,fVar29);
          uStack_118 = 0;
          puVar23 = (undefined8 *)((long)puVar25 + (long)iVar17 * 0xc + -0xc);
          uStack_168 = CONCAT44(fVar51,fVar50);
          local_170 = CONCAT44(fVar99,fVar98);
          if (puVar23 < puVar25) {
            auVar79._8_8_ = uVar77;
            auVar79._0_8_ = uVar101;
            auVar58._8_8_ = uVar87;
            auVar58._0_8_ = uVar78;
            auVar89._4_4_ = fVar41;
            auVar89._0_4_ = fVar32;
            auVar89._8_8_ = uVar96;
          }
          else {
            auVar4._4_4_ = fVar99;
            auVar4._0_4_ = fVar98;
            auVar4._8_4_ = fVar50;
            auVar4._12_4_ = fVar51;
            auVar5._4_4_ = fVar99;
            auVar5._0_4_ = fVar98;
            auVar5._8_4_ = fVar50;
            auVar5._12_4_ = fVar51;
            auVar105 = NEON_ext(auVar4,auVar5,4,1);
            fVar44 = (float)*(undefined8 *)(param_2 + 0x160) - fVar104;
            fVar29 = *(float *)(param_2 + 0x170);
            fVar75 = *(float *)(param_2 + 0x174);
            fVar47 = *(float *)(param_2 + 0x178);
            fVar73 = *(float *)(param_2 + 0x180) - fVar29 * fVar44;
            fVar42 = *(float *)(param_2 + 0x184) -
                     fVar75 * ((float)((ulong)*(undefined8 *)(param_2 + 0x160) >> 0x20) - fVar104);
            fVar45 = *(float *)(param_2 + 0x188) - fVar47 * fVar44;
            fVar44 = *(float *)(param_2 + 0x110);
            fVar70 = *(float *)(param_2 + 0x114);
            fVar71 = *(float *)(param_2 + 0x118);
            fVar107 = (float)*(undefined8 *)(param_2 + 0x120);
            fVar113 = (float)((ulong)*(undefined8 *)(param_2 + 0x120) >> 0x20);
            fVar116 = (float)*(undefined8 *)(param_2 + 0x128);
            auVar57 = *(undefined1 (*) [16])(param_2 + 0x140);
            local_140 = auVar105._0_4_;
            fStack_13c = auVar105._4_4_;
            fVar108 = (float)*(undefined8 *)(param_2 + 0x130);
            fVar114 = (float)((ulong)*(undefined8 *)(param_2 + 0x130) >> 0x20);
            fVar117 = (float)*(undefined8 *)(param_2 + 0x138);
            fVar74 = fVar108 * fVar47 + fVar44 * fVar29 + fVar107 * fVar75;
            fVar43 = fVar114 * fVar47 + fVar70 * fVar29 + fVar113 * fVar75;
            fVar29 = fVar117 * fVar47 + fVar71 * fVar29 + fVar116 * fVar75;
            do {
              fVar75 = fVar97 - (float)uVar55;
              fVar47 = (float)((ulong)uVar55 >> 0x20);
              uVar86 = CONCAT44(fVar97 - fVar47,fVar75);
              if (puVar25 <= puVar23) {
                auVar80 = NEON_ext(auVar79,auVar79,8,1);
                auVar91 = NEON_ext(auVar58,auVar58,8,1);
                auVar10._8_8_ = uVar77;
                auVar10._0_8_ = uVar101;
                auVar11._8_8_ = uVar77;
                auVar11._0_8_ = uVar101;
                auVar120 = NEON_ext(auVar10,auVar11,8,1);
                auVar8._8_8_ = uVar87;
                auVar8._0_8_ = uVar78;
                auVar9._8_8_ = uVar87;
                auVar9._0_8_ = uVar78;
                auVar131 = NEON_ext(auVar8,auVar9,8,1);
                auVar132 = NEON_ext(auVar89,auVar89,8,1);
                auVar6._4_4_ = fVar41;
                auVar6._0_4_ = fVar32;
                auVar6._8_8_ = uVar96;
                auVar7._4_4_ = fVar41;
                auVar7._0_4_ = fVar32;
                auVar7._8_8_ = uVar96;
                auVar105 = NEON_ext(auVar6,auVar7,8,1);
                fVar82 = *(float *)(param_3 + 0x1c);
                fVar127 = *(float *)((long)param_3 + 0xe4);
                fVar52 = *(float *)(param_3 + 0x1d);
                fVar53 = (float)((ulong)uVar101 >> 0x20);
                fVar72 = (float)((ulong)uVar78 >> 0x20);
                fVar85 = (auVar57._0_4_ + fVar108 * fVar45 + fVar44 * fVar73 + fVar107 * fVar42) -
                         (float)auVar33._0_8_;
                fVar94 = (auVar57._4_4_ + fVar114 * fVar45 + fVar70 * fVar73 + fVar113 * fVar42) -
                         (float)((ulong)auVar33._0_8_ >> 0x20);
                fVar95 = (auVar57._8_4_ + fVar117 * fVar45 + fVar71 * fVar73 + fVar116 * fVar42) -
                         (float)uVar46;
                fVar76 = fVar29 * auVar120._0_4_ + fVar74 * (float)uVar101 + fVar43 * fVar53;
                fVar83 = fVar29 * auVar131._0_4_ + fVar74 * (float)uVar78 + fVar43 * fVar72;
                fVar84 = fVar29 * auVar105._0_4_ + fVar74 * fVar32 + fVar43 * fVar41;
                puVar20 = puVar25;
                do {
                  while( true ) {
                    fVar129 = *(float *)(puVar20 + 1);
                    fVar135 = (float)*puVar20;
                    fVar138 = (float)((ulong)*puVar20 >> 0x20);
                    fVar109 = fVar76 * (fVar135 -
                                       (auVar120._0_4_ * fVar95 +
                                       (float)uVar101 * fVar85 + fVar53 * fVar94));
                    fVar115 = fVar83 * (fVar138 -
                                       (auVar131._0_4_ * fVar95 +
                                       (float)uVar78 * fVar85 + fVar72 * fVar94));
                    fVar118 = fVar84 * (fVar129 -
                                       (auVar105._0_4_ * fVar95 + fVar32 * fVar85 + fVar41 * fVar94)
                                       );
                    fVar119 = (fVar109 + fVar115 + fVar118) - (float)unaff_d9;
                    fVar110 = fVar119 - (float)uVar123;
                    fVar109 = ((fVar109 + fVar115 + fVar118) - (float)((ulong)unaff_d9 >> 0x20)) -
                              fVar124;
                    if (fVar110 <= fVar103) break;
LAB_02f97a10:
                    local_c0 = *puVar20;
                    uVar111 = *(undefined4 *)(puVar20 + 1);
                    uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar111);
                    uVar142 = *puVar23;
                    *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar23 + 1);
                    *puVar20 = uVar142;
                    *(undefined4 *)(puVar23 + 1) = uVar111;
                    puVar24 = (undefined8 *)((long)puVar23 + -0xc);
                    *puVar23 = local_c0;
                    puVar23 = puVar24;
                    if (puVar24 < puVar20) goto LAB_02f977fc;
                  }
                  auVar136._0_4_ = fVar135 - *(float *)(param_3 + 8);
                  auVar136._4_4_ = fVar138 - *(float *)((long)param_3 + 0x44);
                  auVar136._8_4_ = fVar129 - *(float *)(param_3 + 9);
                  auVar136._12_4_ = fVar129 - *(float *)((long)param_3 + 0x4c);
                  auVar133 = NEON_ext(auVar136,auVar136,4,1);
                  auVar134._0_4_ = fVar98 * auVar133._0_4_ - local_140 * auVar136._0_4_;
                  auVar134._4_4_ = fVar99 * auVar133._4_4_ - fStack_13c * auVar136._4_4_;
                  auVar134._8_4_ = fVar50 * auVar136._0_4_ - fVar98 * auVar136._8_4_;
                  auVar134._12_4_ = fVar51 * auVar136._4_4_ - fVar99 * auVar136._12_4_;
                  auVar133 = NEON_ext(auVar134,auVar134,4,1);
                  fVar129 = fVar76 * (auVar80._0_4_ * fVar52 +
                                      auVar79._0_4_ * fVar82 + auVar79._4_4_ * fVar127 +
                                     auVar133._0_4_);
                  fVar118 = fVar83 * (auVar91._0_4_ * fVar52 +
                                      auVar58._0_4_ * fVar82 + auVar58._4_4_ * fVar127 +
                                     auVar133._4_4_);
                  fVar135 = fVar84 * (auVar132._0_4_ * fVar52 +
                                      auVar89._0_4_ * fVar82 + auVar89._4_4_ * fVar127 +
                                     auVar134._0_4_);
                  fVar115 = fVar129 + fVar118 + fVar135;
                  fVar135 = fVar129 + fVar118 + fVar135;
                  fVar129 = auVar136._0_4_ * auVar136._0_4_ + auVar136._4_4_ * auVar136._4_4_ +
                            auVar136._8_4_ * auVar136._8_4_;
                  fVar138 = auVar136._0_4_ * auVar136._0_4_ + auVar136._4_4_ * auVar136._4_4_ +
                            auVar136._8_4_ * auVar136._8_4_;
                  uVar142 = CONCAT44(fVar138,fVar129);
                  uVar140 = NEON_frsqrte(uVar142,4);
                  fVar118 = (float)uVar140;
                  fVar141 = (float)((ulong)uVar140 >> 0x20);
                  uVar140 = NEON_frsqrts(uVar142,CONCAT44(fVar141 * fVar141,fVar118 * fVar118),4);
                  fVar118 = fVar118 * (float)uVar140;
                  fVar141 = fVar141 * (float)((ulong)uVar140 >> 0x20);
                  uVar142 = NEON_frsqrts(uVar142,CONCAT44(fVar141 * fVar141,fVar118 * fVar118),4);
                  iVar49 = -(uint)(fVar129 <= 0.0);
                  iVar69 = -(uint)(fVar138 <= 0.0);
                  fVar129 = fVar129 * (float)uVar142 * fVar118;
                  fVar138 = fVar138 * (float)((ulong)uVar142 >> 0x20) * fVar141;
                  fVar129 = (float)CONCAT13((byte)((uint)fVar129 >> 0x18) &
                                            ~(byte)((uint)iVar49 >> 0x18),
                                            CONCAT12((byte)((uint)fVar129 >> 0x10) &
                                                     ~(byte)((uint)iVar49 >> 0x10),
                                                     CONCAT11((byte)((uint)fVar129 >> 8) &
                                                              ~(byte)((uint)iVar49 >> 8),
                                                              SUB41(fVar129,0) & ~(byte)iVar49)));
                  fVar118 = (float)unaff_d13 * fVar129;
                  if (fVar75 * 0.5 * fVar75 * fVar118 < fVar110 + fVar75 * fVar115)
                  goto LAB_02f97a10;
                  if (fVar119 < fVar39) {
                    auVar79._8_8_ = uVar77;
                    auVar79._0_8_ = uVar101;
                    auVar58._8_8_ = uVar87;
                    auVar58._0_8_ = uVar78;
                    auVar89._4_4_ = fVar41;
                    auVar89._0_4_ = fVar32;
                    auVar89._8_8_ = uVar96;
                    goto LAB_02f97750;
                  }
                  uVar142 = NEON_fmov(0x40800000,4);
                  puVar20 = (undefined8 *)((long)puVar20 + 0xc);
                  fVar118 = fVar110 * fVar118 * (float)uVar142 + fVar115 * fVar115;
                  uVar142 = CONCAT44(fVar109 * (float)((ulong)unaff_d13 >> 0x20) *
                                               (float)(CONCAT17((byte)((uint)fVar138 >> 0x18) &
                                                                ~(byte)((uint)iVar69 >> 0x18),
                                                                CONCAT16((byte)((uint)fVar138 >>
                                                                               0x10) &
                                                                         ~(byte)((uint)iVar69 >>
                                                                                0x10),
                                                                         CONCAT15((byte)((uint)
                                                  fVar138 >> 8) & ~(byte)((uint)iVar69 >> 8),
                                                  CONCAT14(SUB41(fVar138,0) & ~(byte)iVar69,fVar129)
                                                  ))) >> 0x20) * (float)((ulong)uVar142 >> 0x20) +
                                     fVar135 * fVar135,fVar118);
                  uVar140 = NEON_frsqrte(uVar142,4);
                  fVar129 = (float)uVar140;
                  fVar119 = (float)((ulong)uVar140 >> 0x20);
                  uVar140 = NEON_frsqrts(uVar142,CONCAT44(fVar119 * fVar119,fVar129 * fVar129),4);
                  fVar129 = fVar129 * (float)uVar140;
                  fVar119 = fVar119 * (float)((ulong)uVar140 >> 0x20);
                  uVar142 = NEON_frsqrts(uVar142,CONCAT44(fVar119 * fVar119,fVar129 * fVar129),4);
                  fVar118 = fVar118 * (float)uVar142 * fVar129;
                  auVar121._0_4_ = fVar118 - fVar115;
                  auVar121._4_4_ = -fVar118 - fVar135;
                  auVar121._8_4_ = fVar118 - fVar115;
                  auVar121._12_4_ = fVar118 - fVar135;
                  auVar133 = NEON_frecpe(auVar121,4);
                  iVar49 = -(uint)(auVar121._0_4_ == 0.0);
                  iVar69 = -(uint)(auVar121._4_4_ == 0.0);
                  auVar139 = NEON_frecps(auVar121,auVar133,4);
                  auVar137._0_4_ = auVar133._0_4_ * auVar139._0_4_;
                  auVar137._4_4_ = auVar133._4_4_ * auVar139._4_4_;
                  auVar137._8_4_ = auVar133._8_4_ * auVar139._8_4_;
                  auVar137._12_4_ = auVar133._12_4_ * auVar139._12_4_;
                  auVar133 = NEON_frecps(auVar121,auVar137,4);
                  uVar112 = CONCAT44((fVar109 + fVar109) * auVar137._4_4_ * auVar133._4_4_,
                                     (fVar110 + fVar110) * auVar137._0_4_ * auVar133._0_4_) &
                            CONCAT17(~(byte)((uint)iVar69 >> 0x18),
                                     CONCAT16(~(byte)((uint)iVar69 >> 0x10),
                                              CONCAT15(~(byte)((uint)iVar69 >> 8),
                                                       CONCAT14(~(byte)iVar69,
                                                                CONCAT13(~(byte)((uint)iVar49 >>
                                                                                0x18),
                                                                         CONCAT12(~(byte)((uint)
                                                  iVar49 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar49 >> 8),~(byte)iVar49)
                                                  ))))));
                  uVar111 = (undefined4)uVar112;
                  uVar140 = CONCAT44(uVar111,uVar111);
                  uVar111 = (undefined4)(uVar112 >> 0x20);
                  uVar142 = CONCAT44(uVar111,uVar111);
                  uVar130 = NEON_fmax(uVar140,uVar142,4);
                  uVar112 = NEON_fmin(uVar140,uVar142,4);
                  uVar86 = NEON_fmin(uVar86,uVar130 ^ (uVar130 ^ uVar112) &
                                                      CONCAT44(-(uint)(0.0 < (float)(uVar112 >> 0x20
                                                                                    )),
                                                               -(uint)(0.0 < (float)uVar112)),4);
                } while (puVar20 <= puVar23);
              }
LAB_02f977fc:
              fVar127 = (float)uVar55 + (float)uVar86;
              fVar47 = fVar47 + (float)((ulong)uVar86 >> 0x20);
              uVar55 = CONCAT44(fVar47,fVar127);
              uStack_118 = 0;
              fVar127 = fVar127 * *(float *)((long)param_3 + 0x114);
              fVar47 = fVar47 * *(float *)((long)param_3 + 0x114);
              fVar75 = *(float *)(param_3 + 0xe);
              fVar32 = *(float *)((long)param_3 + 0x74);
              fVar41 = *(float *)(param_3 + 0xf);
              fVar82 = *(float *)((long)param_3 + 0x7c);
              fVar52 = fVar127 + fVar127;
              fVar72 = fVar47 + fVar47;
              fVar53 = fVar75 + (*(float *)(param_3 + 0xc) - fVar75) * (fVar52 + fVar125);
              fVar76 = fVar32 + (*(float *)((long)param_3 + 100) - fVar32) * (fVar72 + fVar126);
              fVar83 = fVar41 + (*(float *)(param_3 + 0xd) - fVar41) * (fVar52 + fVar125);
              fVar84 = fVar82 + (*(float *)((long)param_3 + 0x6c) - fVar82) * (fVar72 + fVar126);
              fVar53 = (float)((uint)fVar53 ^
                              ((uint)fVar53 ^
                              (uint)(*(float *)(param_3 + 10) +
                                    (fVar75 - *(float *)(param_3 + 10)) * fVar52)) &
                              -(uint)(fVar127 < 0.5));
              fVar76 = (float)((uint)fVar76 ^
                              ((uint)fVar76 ^
                              (uint)(*(float *)((long)param_3 + 0x54) +
                                    (fVar32 - *(float *)((long)param_3 + 0x54)) * fVar72)) &
                              -(uint)(fVar47 < 0.5));
              fVar83 = (float)((uint)fVar83 ^
                              ((uint)fVar83 ^
                              (uint)(*(float *)(param_3 + 0xb) +
                                    (fVar41 - *(float *)(param_3 + 0xb)) * fVar52)) &
                              -(uint)(fVar127 < 0.5));
              fVar84 = (float)((uint)fVar84 ^
                              ((uint)fVar84 ^
                              (uint)(*(float *)((long)param_3 + 0x5c) +
                                    (fVar82 - *(float *)((long)param_3 + 0x5c)) * fVar72)) &
                              -(uint)(fVar47 < 0.5));
              auVar59._0_4_ = fVar53 * fVar53;
              auVar59._4_4_ = fVar76 * fVar76;
              auVar59._8_4_ = fVar83 * fVar83;
              auVar59._12_4_ = fVar84 * fVar84;
              auVar105 = NEON_ext(auVar59,auVar59,8,1);
              fVar75 = auVar105._0_4_ + auVar105._4_4_;
              uVar101 = CONCAT44(auVar59._0_4_ + auVar59._4_4_ + fVar75,
                                 auVar59._0_4_ + auVar59._4_4_ + fVar75);
              uVar77 = NEON_frsqrte(uVar101,4);
              fVar75 = (float)uVar77;
              fVar32 = (float)((ulong)uVar77 >> 0x20);
              uVar77 = NEON_frsqrts(uVar101,CONCAT44(fVar32 * fVar32,fVar75 * fVar75),4);
              fVar75 = fVar75 * (float)uVar77;
              fVar32 = fVar32 * (float)((ulong)uVar77 >> 0x20);
              uVar101 = NEON_frsqrts(uVar101,CONCAT44(fVar32 * fVar32,fVar75 * fVar75),4);
              fVar75 = (float)uVar101 * fVar75;
              fVar32 = (float)((ulong)uVar101 >> 0x20) * fVar32;
              fVar53 = fVar53 * fVar75;
              fVar76 = fVar76 * fVar32;
              auVar60._0_8_ = CONCAT44(fVar76,fVar53);
              auVar60._8_4_ = fVar83 * fVar75;
              auVar60._12_4_ = fVar84 * fVar32;
              uStack_b8 = auVar60._8_8_;
              auVar105 = NEON_ext(auVar60,auVar60,8,1);
              fVar82 = auVar105._4_4_ * auVar105._4_4_;
              fVar41 = fVar82 + -0.5;
              fVar82 = fVar82 + -0.5;
              auVar105 = *(undefined1 (*) [16])(param_3 + 8);
              fVar75 = auVar105._0_4_;
              fVar32 = auVar105._4_4_;
              fVar52 = auVar105._8_4_;
              fVar72 = fVar53 * fVar75 + fVar76 * fVar32 + auVar60._8_4_ * fVar52;
              fVar83 = fVar53 * fVar75 + fVar76 * fVar32 + auVar60._8_4_ * fVar52;
              auVar80 = NEON_ext(auVar105,auVar105,8,1);
              uVar101 = NEON_ext(auVar105._0_8_,auVar80._0_8_,4,1);
              auVar80 = NEON_ext(auVar60,auVar60,4,1);
              auVar90._0_4_ = fVar53 * (float)uVar101 - fVar75 * auVar80._0_4_;
              auVar90._4_4_ = fVar76 * (float)((ulong)uVar101 >> 0x20) - fVar32 * auVar80._4_4_;
              auVar90._8_4_ = auVar60._8_4_ * fVar75 - fVar52 * fVar53;
              auVar90._12_4_ = auVar60._12_4_ * fVar32 - auVar105._12_4_ * fVar76;
              auVar80 = NEON_ext(auVar90,auVar90,4,1);
              fVar75 = fVar75 * fVar41 + fVar53 * fVar72 + auVar80._0_4_ * auVar60._12_4_;
              fVar32 = fVar32 * fVar82 + fVar76 * fVar83 + auVar80._4_4_ * auVar60._12_4_;
              fVar41 = fVar52 * fVar41 + auVar60._8_4_ * fVar72 + auVar90._0_4_ * auVar60._12_4_;
              fVar82 = auVar105._12_4_ * fVar82 + auVar60._12_4_ * fVar83 +
                       auVar90._4_4_ * auVar60._12_4_;
              auVar34._0_8_ =
                   CONCAT44((*(float *)((long)param_3 + 0x24) +
                            fVar47 * (*(float *)((long)param_3 + 0x34) -
                                     *(float *)((long)param_3 + 0x24))) - (fVar32 + fVar32),
                            (*(float *)(param_3 + 4) +
                            fVar127 * (*(float *)(param_3 + 6) - *(float *)(param_3 + 4))) -
                            (fVar75 + fVar75));
              auVar34._8_4_ =
                   (*(float *)(param_3 + 5) +
                   fVar127 * (*(float *)(param_3 + 7) - *(float *)(param_3 + 5))) -
                   (fVar41 + fVar41);
              auVar34._12_4_ =
                   (*(float *)((long)param_3 + 0x2c) +
                   fVar47 * (*(float *)((long)param_3 + 0x3c) - *(float *)((long)param_3 + 0x2c))) -
                   (fVar82 + fVar82);
              uVar46 = auVar34._8_8_;
              local_c0 = auVar60._0_8_;
              FUN_032c9fc0(&local_100,&local_c0);
              uVar78 = CONCAT44(fStack_ec,local_f0);
              auVar58._8_4_ = fStack_e8;
              auVar58._0_8_ = uVar78;
              auVar58._12_4_ = fStack_e4;
              auVar89._4_4_ = fStack_dc;
              auVar89._0_4_ = local_e0;
              auVar89._8_4_ = fStack_d8;
              auVar89._12_4_ = fStack_d4;
              uVar96 = auVar89._8_8_;
              uVar101 = CONCAT44(fStack_fc,local_100);
              auVar79._8_4_ = fStack_f8;
              auVar79._0_8_ = uVar101;
              auVar79._12_4_ = fStack_f4;
              uVar77 = auVar79._8_8_;
              uVar87 = auVar58._8_8_;
              auVar33._0_8_ = auVar34._0_8_;
              fVar32 = local_e0;
              fVar41 = fStack_dc;
              local_d0 = auVar34._0_8_;
              uStack_c8 = uVar46;
            } while (puVar25 <= puVar23);
          }
LAB_02f97750:
          uVar77 = auVar79._8_8_;
          uVar101 = auVar79._0_8_;
          uVar87 = auVar58._8_8_;
          uVar78 = auVar58._0_8_;
          uVar96 = auVar89._8_8_;
          bVar16 = local_180 < (float)uVar55 - local_120;
          fStack_11c = (float)((ulong)uVar55 >> 0x20);
          fVar32 = auVar89._0_4_;
          fVar41 = auVar89._4_4_;
          local_120 = (float)uVar55;
        }
      }
      else {
        bVar16 = false;
      }
      *(undefined8 *)(param_2 + 0x118) = uVar77;
      *(undefined8 *)(param_2 + 0x110) = uVar101;
      *(undefined8 *)(param_2 + 0x128) = uVar87;
      *(undefined8 *)(param_2 + 0x120) = uVar78;
      *(undefined8 *)(param_2 + 0x138) = uVar96;
      *(ulong *)(param_2 + 0x130) = CONCAT44(fVar41,fVar32);
      *(undefined8 *)(param_2 + 0x148) = uVar46;
      *(undefined8 *)(param_2 + 0x140) = auVar33._0_8_;
      FUN_0017f0d0(param_2,*param_3,param_3[1],param_2 + 0x110,1,param_4,param_2 + 0x160);
      fVar29 = *(float *)(param_2 + 0x170);
      fVar75 = *(float *)(param_2 + 0x174);
      fVar47 = *(float *)(param_2 + 0x178);
      uVar130 = CONCAT44(fStack_11c,local_120);
      auVar91._8_8_ = uStack_118;
      auVar91._0_8_ = uVar130;
      auVar120._0_4_ = local_e0 * fVar47 + local_100 * fVar29 + local_f0 * fVar75;
      auVar120._4_4_ = fStack_dc * fVar47 + fStack_fc * fVar29 + fStack_ec * fVar75;
      auVar120._8_4_ = fStack_d8 * fVar47 + fStack_f8 * fVar29 + fStack_e8 * fVar75;
      auVar120._12_4_ = fStack_d4 * fVar47 + fStack_f4 * fVar29 + fStack_e4 * fVar75;
      fVar29 = (float)*(undefined8 *)(param_2 + 0x160) - fVar48;
      auVar131._0_8_ =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x160) >> 0x20) - fVar48,fVar29);
      auVar131._8_8_ = 0;
      uVar112 = auVar131._0_8_;
      auVar105 = auVar131;
    } while (fVar39 <= fVar29);
    uVar128 = auVar131._0_8_;
    local_1e0 = uVar130;
    if (fVar27 < ABS(fVar29 - fVar39)) {
      auVar64._8_8_ = 0;
      auVar64._0_8_ = uVar56;
      iVar49 = 10;
      do {
        uVar101 = CONCAT44(auVar105._4_4_ - auVar64._4_4_,auVar105._0_4_ - auVar64._0_4_);
        uVar77 = auVar64._8_8_;
        local_120 = auVar91._0_4_;
        fStack_11c = auVar91._4_4_;
        uVar78 = NEON_frecpe(uVar101,4);
        uVar87 = NEON_frecps(uVar101,uVar78,4);
        fVar29 = (float)uVar78 * (float)uVar87;
        fVar75 = (float)((ulong)uVar78 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
        uVar101 = NEON_frecps(uVar101,CONCAT44(fVar75,fVar29),4);
        uVar101 = NEON_fminnm(CONCAT44((auVar122._4_4_ - auVar64._4_4_) *
                                       fVar75 * (float)((ulong)uVar101 >> 0x20),
                                       (fVar39 - auVar64._0_4_) * fVar29 * (float)uVar101),
                              0x3f6666663f666666,4);
        uVar101 = NEON_fmax(uVar101,0x3dcccccd3dcccccd,4);
        fVar29 = (float)(local_160 >> 0x20);
        uVar56 = NEON_fmax(CONCAT44(fVar29 + (fStack_11c - fVar29) * (float)((ulong)uVar101 >> 0x20)
                                    ,(float)local_160 +
                                     (local_120 - (float)local_160) * (float)uVar101),
                           CONCAT44(fVar28,fVar28),4);
        fVar99 = (float)uVar56;
        fVar98 = fVar99 * *(float *)((long)param_3 + 0x114);
        fVar103 = (float)(uVar56 >> 0x20) * *(float *)((long)param_3 + 0x114);
        uStack_108 = 0;
        fVar29 = *(float *)(param_3 + 0xe);
        fVar75 = *(float *)((long)param_3 + 0x74);
        fVar47 = *(float *)(param_3 + 0xf);
        fVar44 = *(float *)((long)param_3 + 0x7c);
        fVar32 = fVar98 + fVar98;
        fVar50 = fVar103 + fVar103;
        fVar41 = fVar29 + (*(float *)(param_3 + 0xc) - fVar29) * (fVar32 + fVar125);
        fVar51 = fVar75 + (*(float *)((long)param_3 + 100) - fVar75) * (fVar50 + fVar126);
        fVar70 = fVar47 + (*(float *)(param_3 + 0xd) - fVar47) * (fVar32 + fVar125);
        fVar71 = fVar44 + (*(float *)((long)param_3 + 0x6c) - fVar44) * (fVar50 + fVar126);
        fVar41 = (float)((uint)fVar41 ^
                        ((uint)fVar41 ^
                        (uint)(*(float *)(param_3 + 10) +
                              (fVar29 - *(float *)(param_3 + 10)) * fVar32)) & -(uint)(fVar98 < 0.5)
                        );
        fVar51 = (float)((uint)fVar51 ^
                        ((uint)fVar51 ^
                        (uint)(*(float *)((long)param_3 + 0x54) +
                              (fVar75 - *(float *)((long)param_3 + 0x54)) * fVar50)) &
                        -(uint)(fVar103 < 0.5));
        fVar70 = (float)((uint)fVar70 ^
                        ((uint)fVar70 ^
                        (uint)(*(float *)(param_3 + 0xb) +
                              (fVar47 - *(float *)(param_3 + 0xb)) * fVar32)) &
                        -(uint)(fVar98 < 0.5));
        fVar71 = (float)((uint)fVar71 ^
                        ((uint)fVar71 ^
                        (uint)(*(float *)((long)param_3 + 0x5c) +
                              (fVar44 - *(float *)((long)param_3 + 0x5c)) * fVar50)) &
                        -(uint)(fVar103 < 0.5));
        auVar65._0_4_ = fVar41 * fVar41;
        auVar65._4_4_ = fVar51 * fVar51;
        auVar65._8_4_ = fVar70 * fVar70;
        auVar65._12_4_ = fVar71 * fVar71;
        auVar57 = NEON_ext(auVar65,auVar65,8,1);
        fVar29 = auVar57._0_4_ + auVar57._4_4_;
        uVar101 = CONCAT44(auVar65._0_4_ + auVar65._4_4_ + fVar29,
                           auVar65._0_4_ + auVar65._4_4_ + fVar29);
        uVar78 = NEON_frsqrte(uVar101,4);
        fVar29 = (float)uVar78;
        fVar75 = (float)((ulong)uVar78 >> 0x20);
        uVar78 = NEON_frsqrts(uVar101,CONCAT44(fVar75 * fVar75,fVar29 * fVar29),4);
        fVar29 = fVar29 * (float)uVar78;
        fVar75 = fVar75 * (float)((ulong)uVar78 >> 0x20);
        uVar101 = NEON_frsqrts(uVar101,CONCAT44(fVar75 * fVar75,fVar29 * fVar29),4);
        fVar29 = (float)uVar101 * fVar29;
        fVar75 = (float)((ulong)uVar101 >> 0x20) * fVar75;
        fVar41 = fVar41 * fVar29;
        fVar51 = fVar51 * fVar75;
        auVar66._0_8_ = CONCAT44(fVar51,fVar41);
        auVar66._8_4_ = fVar70 * fVar29;
        auVar66._12_4_ = fVar71 * fVar75;
        uStack_b8 = auVar66._8_8_;
        auVar57 = NEON_ext(auVar66,auVar66,8,1);
        fVar44 = auVar57._4_4_ * auVar57._4_4_;
        fVar47 = fVar44 + -0.5;
        fVar44 = fVar44 + -0.5;
        auVar57 = *(undefined1 (*) [16])(param_3 + 8);
        fVar29 = auVar57._0_4_;
        fVar75 = auVar57._4_4_;
        fVar32 = auVar57._8_4_;
        fVar50 = fVar41 * fVar29 + fVar51 * fVar75 + auVar66._8_4_ * fVar32;
        fVar70 = fVar41 * fVar29 + fVar51 * fVar75 + auVar66._8_4_ * fVar32;
        auVar80 = NEON_ext(auVar57,auVar57,8,1);
        uVar101 = NEON_ext(auVar57._0_8_,auVar80._0_8_,4,1);
        auVar80 = NEON_ext(auVar66,auVar66,4,1);
        auVar92._0_4_ = fVar41 * (float)uVar101 - fVar29 * auVar80._0_4_;
        auVar92._4_4_ = fVar51 * (float)((ulong)uVar101 >> 0x20) - fVar75 * auVar80._4_4_;
        auVar92._8_4_ = auVar66._8_4_ * fVar29 - fVar32 * fVar41;
        auVar92._12_4_ = auVar66._12_4_ * fVar75 - auVar57._12_4_ * fVar51;
        auVar80 = NEON_ext(auVar92,auVar92,4,1);
        fVar29 = fVar29 * fVar47 + fVar41 * fVar50 + auVar80._0_4_ * auVar66._12_4_;
        fVar75 = fVar75 * fVar44 + fVar51 * fVar70 + auVar80._4_4_ * auVar66._12_4_;
        fVar47 = fVar32 * fVar47 + auVar66._8_4_ * fVar50 + auVar92._0_4_ * auVar66._12_4_;
        fVar44 = auVar57._12_4_ * fVar44 + auVar66._12_4_ * fVar70 + auVar92._4_4_ * auVar66._12_4_;
        auVar37._0_4_ =
             (*(float *)(param_3 + 4) + fVar98 * (*(float *)(param_3 + 6) - *(float *)(param_3 + 4))
             ) - (fVar29 + fVar29);
        auVar37._4_4_ =
             (*(float *)((long)param_3 + 0x24) +
             fVar103 * (*(float *)((long)param_3 + 0x34) - *(float *)((long)param_3 + 0x24))) -
             (fVar75 + fVar75);
        auVar37._8_4_ =
             (*(float *)(param_3 + 5) + fVar98 * (*(float *)(param_3 + 7) - *(float *)(param_3 + 5))
             ) - (fVar47 + fVar47);
        auVar37._12_4_ =
             (*(float *)((long)param_3 + 0x2c) +
             fVar103 * (*(float *)((long)param_3 + 0x3c) - *(float *)((long)param_3 + 0x2c))) -
             (fVar44 + fVar44);
        local_c0 = auVar66._0_8_;
        FUN_032c9fc0(&local_100,&local_c0);
        auVar13._8_4_ = fStack_f8;
        auVar13._0_8_ = CONCAT44(fStack_fc,local_100);
        auVar13._12_4_ = fStack_f4;
        auVar14._8_4_ = fStack_e8;
        auVar14._0_8_ = CONCAT44(fStack_ec,local_f0);
        auVar14._12_4_ = fStack_e4;
        local_d0 = CONCAT44(auVar37._4_4_,auVar37._0_4_);
        auVar15._8_4_ = fStack_d8;
        auVar15._0_8_ = CONCAT44(fStack_dc,local_e0);
        auVar15._12_4_ = fStack_d4;
        *(long *)(param_2 + 0x118) = auVar13._8_8_;
        *(ulong *)(param_2 + 0x110) = CONCAT44(fStack_fc,local_100);
        *(long *)(param_2 + 0x128) = auVar14._8_8_;
        *(ulong *)(param_2 + 0x120) = CONCAT44(fStack_ec,local_f0);
        *(long *)(param_2 + 0x138) = auVar15._8_8_;
        *(ulong *)(param_2 + 0x130) = CONCAT44(fStack_dc,local_e0);
        *(long *)(param_2 + 0x148) = auVar37._8_8_;
        *(undefined8 *)(param_2 + 0x140) = local_d0;
        uStack_c8 = auVar37._8_8_;
        FUN_0017f0d0(param_2,*param_3,param_3[1],param_2 + 0x110,1,param_4,param_2 + 0x160);
        fVar29 = (float)*(undefined8 *)(param_2 + 0x160) - fVar48;
        uVar112 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x160) >> 0x20) - fVar48,fVar29)
        ;
        if (ABS(fVar29 - fVar39) < fVar27) {
          auVar57._4_4_ = auVar120._4_4_;
          auVar57._0_4_ = auVar120._0_4_;
          auVar57._8_4_ = auVar120._8_4_;
          auVar57._12_4_ = auVar120._12_4_;
LAB_02f980e8:
          auVar105._8_8_ = 0;
          auVar105._0_8_ = uVar112;
          uVar128 = uVar112;
          uVar130 = uVar56;
          local_1e0 = uVar56;
          uStack_118 = uStack_108;
          goto LAB_02f97d84;
        }
        if (fVar39 <= fVar29) {
          auVar64._8_8_ = 0;
          auVar64._0_8_ = uVar112;
          auVar57._4_4_ = auVar120._4_4_;
          auVar57._0_4_ = auVar120._0_4_;
          auVar57._8_4_ = auVar120._8_4_;
          auVar57._12_4_ = auVar120._12_4_;
          local_160 = uVar56;
        }
        else {
          auVar91._8_8_ = 0;
          auVar91._0_8_ = uVar56;
          auVar57._4_4_ = auVar120._4_4_;
          auVar57._0_4_ = auVar120._0_4_;
          auVar57._8_4_ = auVar120._8_4_;
          auVar57._12_4_ = auVar120._12_4_;
          auVar105._8_8_ = 0;
          auVar105._0_8_ = uVar112;
          auVar64._8_8_ = uVar77;
          auVar131._0_8_ = uVar112;
          uVar128 = uVar112;
          uVar130 = uVar56;
          local_1e0 = uVar56;
          if (fVar99 == fVar28) goto LAB_02f980e8;
        }
        uVar56 = auVar91._0_8_;
        iVar49 = iVar49 + -1;
      } while (iVar49 != 0);
      if (auVar91._0_4_ != fVar99) {
        fVar44 = auVar91._0_4_ * *(float *)((long)param_3 + 0x114);
        fVar98 = auVar91._4_4_ * *(float *)((long)param_3 + 0x114);
        fVar29 = *(float *)(param_3 + 0xe);
        fVar39 = *(float *)((long)param_3 + 0x74);
        fVar75 = *(float *)(param_3 + 0xf);
        fVar47 = *(float *)((long)param_3 + 0x7c);
        fVar103 = fVar44 + fVar44;
        fVar32 = fVar98 + fVar98;
        fVar99 = fVar29 + (*(float *)(param_3 + 0xc) - fVar29) * (fVar103 + fVar125);
        fVar41 = fVar39 + (*(float *)((long)param_3 + 100) - fVar39) * (fVar32 + fVar126);
        fVar50 = fVar75 + (*(float *)(param_3 + 0xd) - fVar75) * (fVar103 + fVar125);
        fVar51 = fVar47 + (*(float *)((long)param_3 + 0x6c) - fVar47) * (fVar32 + fVar126);
        fVar99 = (float)((uint)fVar99 ^
                        ((uint)fVar99 ^
                        (uint)(*(float *)(param_3 + 10) +
                              (fVar29 - *(float *)(param_3 + 10)) * fVar103)) &
                        -(uint)(fVar44 < 0.5));
        fVar41 = (float)((uint)fVar41 ^
                        ((uint)fVar41 ^
                        (uint)(*(float *)((long)param_3 + 0x54) +
                              (fVar39 - *(float *)((long)param_3 + 0x54)) * fVar32)) &
                        -(uint)(fVar98 < 0.5));
        fVar50 = (float)((uint)fVar50 ^
                        ((uint)fVar50 ^
                        (uint)(*(float *)(param_3 + 0xb) +
                              (fVar75 - *(float *)(param_3 + 0xb)) * fVar103)) &
                        -(uint)(fVar44 < 0.5));
        fVar51 = (float)((uint)fVar51 ^
                        ((uint)fVar51 ^
                        (uint)(*(float *)((long)param_3 + 0x5c) +
                              (fVar47 - *(float *)((long)param_3 + 0x5c)) * fVar32)) &
                        -(uint)(fVar98 < 0.5));
        auVar67._0_4_ = fVar99 * fVar99;
        auVar67._4_4_ = fVar41 * fVar41;
        auVar67._8_4_ = fVar50 * fVar50;
        auVar67._12_4_ = fVar51 * fVar51;
        auVar57 = NEON_ext(auVar67,auVar67,8,1);
        fVar29 = auVar57._0_4_ + auVar57._4_4_;
        uVar101 = CONCAT44(auVar67._0_4_ + auVar67._4_4_ + fVar29,
                           auVar67._0_4_ + auVar67._4_4_ + fVar29);
        uVar77 = NEON_frsqrte(uVar101,4);
        fVar29 = (float)uVar77;
        fVar39 = (float)((ulong)uVar77 >> 0x20);
        uVar77 = NEON_frsqrts(uVar101,CONCAT44(fVar39 * fVar39,fVar29 * fVar29),4);
        fVar29 = fVar29 * (float)uVar77;
        fVar39 = fVar39 * (float)((ulong)uVar77 >> 0x20);
        uVar101 = NEON_frsqrts(uVar101,CONCAT44(fVar39 * fVar39,fVar29 * fVar29),4);
        fVar29 = (float)uVar101 * fVar29;
        fVar39 = (float)((ulong)uVar101 >> 0x20) * fVar39;
        fVar99 = fVar99 * fVar29;
        fVar41 = fVar41 * fVar39;
        auVar68._0_8_ = CONCAT44(fVar41,fVar99);
        auVar68._8_4_ = fVar50 * fVar29;
        auVar68._12_4_ = fVar51 * fVar39;
        uStack_b8 = auVar68._8_8_;
        auVar57 = NEON_ext(auVar68,auVar68,8,1);
        fVar47 = auVar57._4_4_ * auVar57._4_4_;
        fVar75 = fVar47 + -0.5;
        fVar47 = fVar47 + -0.5;
        auVar57 = *(undefined1 (*) [16])(param_3 + 8);
        fVar29 = auVar57._0_4_;
        fVar39 = auVar57._4_4_;
        fVar103 = auVar57._8_4_;
        fVar32 = fVar99 * fVar29 + fVar41 * fVar39 + auVar68._8_4_ * fVar103;
        fVar50 = fVar99 * fVar29 + fVar41 * fVar39 + auVar68._8_4_ * fVar103;
        auVar80 = NEON_ext(auVar57,auVar57,8,1);
        uVar101 = NEON_ext(auVar57._0_8_,auVar80._0_8_,4,1);
        auVar80 = NEON_ext(auVar68,auVar68,4,1);
        auVar93._0_4_ = fVar99 * (float)uVar101 - fVar29 * auVar80._0_4_;
        auVar93._4_4_ = fVar41 * (float)((ulong)uVar101 >> 0x20) - fVar39 * auVar80._4_4_;
        auVar93._8_4_ = auVar68._8_4_ * fVar29 - fVar103 * fVar99;
        auVar93._12_4_ = auVar68._12_4_ * fVar39 - auVar57._12_4_ * fVar41;
        auVar80 = NEON_ext(auVar93,auVar93,4,1);
        fVar29 = fVar29 * fVar75 + fVar99 * fVar32 + auVar80._0_4_ * auVar68._12_4_;
        fVar39 = fVar39 * fVar47 + fVar41 * fVar50 + auVar80._4_4_ * auVar68._12_4_;
        fVar75 = fVar103 * fVar75 + auVar68._8_4_ * fVar32 + auVar93._0_4_ * auVar68._12_4_;
        fVar47 = auVar57._12_4_ * fVar47 + auVar68._12_4_ * fVar50 + auVar93._4_4_ * auVar68._12_4_;
        auVar38._0_8_ =
             CONCAT44((*(float *)((long)param_3 + 0x24) +
                      fVar98 * (*(float *)((long)param_3 + 0x34) - *(float *)((long)param_3 + 0x24))
                      ) - (fVar39 + fVar39),
                      (*(float *)(param_3 + 4) +
                      fVar44 * (*(float *)(param_3 + 6) - *(float *)(param_3 + 4))) -
                      (fVar29 + fVar29));
        auVar38._8_4_ =
             (*(float *)(param_3 + 5) + fVar44 * (*(float *)(param_3 + 7) - *(float *)(param_3 + 5))
             ) - (fVar75 + fVar75);
        auVar38._12_4_ =
             (*(float *)((long)param_3 + 0x2c) +
             fVar98 * (*(float *)((long)param_3 + 0x3c) - *(float *)((long)param_3 + 0x2c))) -
             (fVar47 + fVar47);
        local_c0 = auVar68._0_8_;
        FUN_032c9fc0(&local_100,&local_c0);
        auVar57._4_4_ = auVar120._4_4_;
        auVar57._0_4_ = auVar120._0_4_;
        auVar57._8_4_ = auVar120._8_4_;
        auVar57._12_4_ = auVar120._12_4_;
        local_d0 = auVar38._0_8_;
        uStack_c8 = auVar38._8_8_;
      }
      uStack_118 = 0;
      uVar112 = auVar131._0_8_;
    }
    else {
      auVar57 = auVar120;
      uVar56 = uVar130;
    }
LAB_02f97d84:
    uVar111 = (undefined4)uVar128;
    fVar29 = *(float *)(param_2 + 0x170);
    fVar39 = *(float *)(param_2 + 0x174);
    fVar75 = *(float *)(param_2 + 0x178);
    fVar98 = *(float *)(param_2 + 0x180) - fVar29 * fVar106;
    fVar103 = *(float *)(param_2 + 0x184) - fVar39 * fVar106;
    fVar99 = *(float *)(param_2 + 0x188) - fVar75 * fVar106;
    fVar47 = local_e0 * fVar75 + local_100 * fVar29 + local_f0 * fVar39;
    fVar44 = fStack_dc * fVar75 + fStack_fc * fVar29 + fStack_ec * fVar39;
    auVar35._0_8_ = CONCAT44(fVar44,fVar47);
    auVar35._8_4_ = fStack_d8 * fVar75 + fStack_f8 * fVar29 + fStack_e8 * fVar39;
    auVar35._12_4_ = fStack_d4 * fVar75 + fStack_f4 * fVar29 + fStack_e4 * fVar39;
    fVar29 = (float)local_d0 + local_e0 * fVar99 + local_100 * fVar98 + local_f0 * fVar103;
    fVar39 = (float)((ulong)local_d0 >> 0x20) +
             fStack_dc * fVar99 + fStack_fc * fVar98 + fStack_ec * fVar103;
    auVar61._0_8_ = CONCAT44(fVar39,fVar29);
    auVar61._8_4_ = (float)uStack_c8 + fStack_d8 * fVar99 + fStack_f8 * fVar98 + fStack_e8 * fVar103
    ;
    auVar61._12_4_ =
         (float)((ulong)uStack_c8 >> 0x20) +
         fStack_d4 * fVar99 + fStack_f4 * fVar98 + fStack_e4 * fVar103;
    *(long *)(param_5 + 0x18) = auVar61._8_8_;
    *(undefined8 *)(param_5 + 0x10) = auVar61._0_8_;
    *(long *)(param_5 + 0x28) = auVar35._8_8_;
    *(undefined8 *)(param_5 + 0x20) = auVar35._0_8_;
    if ((char)param_3[0x26] != '\0') goto LAB_02f982e8;
    fVar75 = (float)uVar56 * *(float *)((long)param_3 + 0x114);
    fVar98 = (float)(uVar56 >> 0x20) * *(float *)((long)param_3 + 0x114);
    auVar62._0_4_ =
         fVar29 - (*(float *)(param_3 + 4) +
                  (*(float *)(param_3 + 6) - *(float *)(param_3 + 4)) * fVar75);
    auVar62._4_4_ =
         fVar39 - (*(float *)((long)param_3 + 0x24) +
                  (*(float *)((long)param_3 + 0x34) - *(float *)((long)param_3 + 0x24)) * fVar98);
    auVar62._8_4_ =
         auVar61._8_4_ -
         (*(float *)(param_3 + 5) + (*(float *)(param_3 + 7) - *(float *)(param_3 + 5)) * fVar75);
    auVar62._12_4_ =
         auVar61._12_4_ -
         (*(float *)((long)param_3 + 0x2c) +
         (*(float *)((long)param_3 + 0x3c) - *(float *)((long)param_3 + 0x2c)) * fVar98);
    auVar80 = *(undefined1 (*) [16])(param_3 + 0x1e);
    auVar91 = NEON_ext(auVar80,auVar80,8,1);
    uVar101 = NEON_ext(auVar80._0_8_,auVar91._0_8_,4,1);
    auVar91 = NEON_ext(auVar62,auVar62,4,1);
    auVar63._0_4_ = auVar80._0_4_ * auVar91._0_4_ - (float)uVar101 * auVar62._0_4_;
    auVar63._4_4_ = auVar80._4_4_ * auVar91._4_4_ - (float)((ulong)uVar101 >> 0x20) * auVar62._4_4_;
    auVar63._8_4_ = auVar80._8_4_ * auVar62._0_4_ - auVar80._0_4_ * auVar62._8_4_;
    auVar63._12_4_ = auVar80._12_4_ * auVar62._4_4_ - auVar80._4_4_ * auVar62._12_4_;
    auVar80 = NEON_ext(auVar63,auVar63,4,1);
    auVar36._0_4_ = fVar47 * (*(float *)(param_3 + 0x1c) + auVar80._0_4_);
    auVar36._4_4_ = fVar44 * (*(float *)((long)param_3 + 0xe4) + auVar80._4_4_);
    auVar36._8_4_ = auVar35._8_4_ * (*(float *)(param_3 + 0x1d) + auVar63._0_4_);
    auVar36._12_4_ = auVar35._12_4_ * (*(float *)((long)param_3 + 0xec) + auVar63._4_4_);
    auVar80 = NEON_ext(auVar36,auVar36,8,1);
    if (auVar36._0_4_ + auVar36._4_4_ + auVar80._0_4_ < 0.0) {
LAB_02f982e8:
      *param_5 = 1;
      uVar100 = uVar56;
joined_r0x02f98114:
      if (puVar25 != (undefined8 *)0x0) {
        lVar21 = *(long *)(lVar18 + 0x38d490);
        if (lVar21 == 0) {
          lVar21 = FUN_0333d16c(0,1);
          *(long *)(lVar18 + 0x38d490) = lVar21;
        }
        lVar18 = *(long *)(lVar21 + 8);
        if (((*(ulong *)(lVar18 + 0x10) < uVar19) ||
            (*(long *)(lVar18 + 0x18) != (long)puVar25 + uVar19)) ||
           (*(undefined8 **)(lVar18 + 0x28) == puVar26)) {
          FUN_032cedf0(lVar18,puVar26,uVar19);
        }
        else {
          *(undefined8 **)(lVar18 + 0x18) = puVar26;
        }
      }
      *(ulong *)(param_5 + 4) = CONCAT44(uVar111,(int)uVar100);
      return;
    }
    auVar122._0_8_ =
         NEON_fmin(auVar122._0_8_,
                   CONCAT44(auVar105._4_4_ + *(float *)(param_3 + 0x24),
                            auVar105._0_4_ + *(float *)(param_3 + 0x24)),4);
    uVar123 = NEON_fmin(uVar123,CONCAT44(auVar105._4_4_ + *(float *)((long)param_3 + 0x124),
                                         auVar105._0_4_ + *(float *)((long)param_3 + 0x124)),4);
  } while( true );
}


