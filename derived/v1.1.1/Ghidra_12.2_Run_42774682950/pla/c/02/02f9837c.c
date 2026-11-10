/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f9837c; name: FUN_02f9837c
 */


void FUN_02f9837c(undefined1 param_1 [16],long param_2,long *param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  undefined4 *puVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  bool bVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  uint uVar23;
  undefined1 (*pauVar24) [16];
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar38;
  float fVar50;
  float fVar51;
  undefined1 auVar39 [16];
  float fVar48;
  float fVar49;
  float fVar52;
  undefined8 uVar53;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar54;
  float fVar66;
  int iVar67;
  undefined8 uVar56;
  undefined1 auVar58 [16];
  int iVar55;
  undefined1 auVar59 [16];
  undefined8 uVar68;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  ulong uVar57;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar69;
  undefined8 uVar70;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar72 [16];
  float fVar74;
  undefined8 uVar71;
  undefined1 auVar73 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar85;
  undefined8 uVar81;
  float fVar84;
  float fVar86;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined8 uVar93;
  float fVar96;
  float fVar99;
  undefined1 auVar94 [16];
  float fVar97;
  float fVar98;
  undefined1 auVar95 [16];
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined4 uVar104;
  ulong uVar105;
  float fVar107;
  float fVar108;
  float fVar109;
  ulong uVar106;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  undefined1 auVar115 [16];
  float fVar114;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined8 uVar118;
  undefined8 unaff_d9;
  undefined8 unaff_d13;
  ulong uVar119;
  float fVar120;
  float fVar121;
  float fVar126;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar127;
  float fVar130;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar131 [16];
  undefined8 uVar132;
  float fVar133;
  undefined8 uVar134;
  undefined8 uVar135;
  float local_1d0;
  float fStack_1cc;
  ulong local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  float local_150;
  float fStack_14c;
  float local_130;
  float fStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  auVar117._4_4_ = (int)param_3[0x23];
  auVar117._0_4_ = (int)param_3[0x23];
  uVar118 = CONCAT44(*(undefined4 *)((long)param_3 + 0x11c),*(undefined4 *)((long)param_3 + 0x11c));
  fVar113 = *(float *)((long)param_3 + 300);
  fVar30 = *(float *)(param_3 + 0x25);
  fVar120 = *(float *)(param_3 + 0x22);
  fVar127 = *(float *)(*param_3 + 0x20);
  fVar31 = *(float *)(param_3[1] + 0x20);
  pauVar24 = (undefined1 (*) [16])(param_3 + 10);
  auVar94 = *pauVar24;
  cVar4 = *(char *)((long)param_3 + 0x131);
  auVar72 = NEON_ext(auVar94,auVar94,8,1);
  fVar84 = auVar72._4_4_ * auVar72._4_4_;
  fVar78 = fVar84 + -0.5;
  fVar84 = fVar84 + -0.5;
  auVar58 = *(undefined1 (*) [16])(param_2 + 0x170);
  uVar70 = NEON_ext(auVar94._0_8_,auVar72._0_8_,4,1);
  fVar33 = auVar94._0_4_;
  fVar45 = auVar58._0_4_;
  fVar34 = auVar94._4_4_;
  fVar47 = auVar58._4_4_;
  fVar46 = auVar94._8_4_;
  fVar50 = auVar58._8_4_;
  fVar35 = auVar94._12_4_;
  fVar90 = fVar33 * fVar45 + fVar34 * fVar47 + fVar46 * fVar50;
  fVar96 = fVar33 * fVar45 + fVar34 * fVar47 + fVar46 * fVar50;
  uVar105 = CONCAT44(fVar120,fVar120);
  auVar94 = NEON_ext(auVar58,auVar58,8,1);
  uVar93 = NEON_ext(auVar58._0_8_,auVar94._0_8_,4,1);
  fVar32 = fVar127 + fVar31;
  auVar72._0_4_ = fVar33 * (float)uVar93 - fVar45 * (float)uVar70;
  auVar72._4_4_ = fVar34 * (float)((ulong)uVar93 >> 0x20) - fVar47 * (float)((ulong)uVar70 >> 0x20);
  auVar72._8_4_ = fVar46 * fVar45 - fVar50 * fVar33;
  auVar72._12_4_ = fVar35 * fVar47 - auVar58._12_4_ * fVar34;
  auVar94 = NEON_ext(auVar72,auVar72,4,1);
  fVar33 = fVar45 * fVar78 + fVar33 * fVar90 + auVar94._0_4_ * fVar35;
  fVar45 = fVar47 * fVar84 + fVar34 * fVar96 + auVar94._4_4_ * fVar35;
  fVar78 = fVar50 * fVar78 + fVar46 * fVar90 + auVar72._0_4_ * fVar35;
  fVar90 = auVar58._12_4_ * fVar84 + fVar35 * fVar96 + auVar72._4_4_ * fVar35;
  auVar94 = *(undefined1 (*) [16])(param_3 + 0x1e);
  fVar34 = (float)*(undefined8 *)(param_2 + 0x160) - fVar32;
  fVar46 = (float)((ulong)*(undefined8 *)(param_2 + 0x160) >> 0x20) - fVar32;
  fVar35 = *(float *)(param_3 + 2);
  fVar84 = auVar94._0_4_ * fVar35;
  fVar47 = auVar94._4_4_ * fVar35;
  fVar50 = auVar94._8_4_ * fVar35;
  fVar35 = auVar94._12_4_ * fVar35;
  iVar18 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*param_3 + 0x18) * 0x200 + 0x58))();
  auVar94._4_4_ = fVar47;
  auVar94._0_4_ = fVar84;
  auVar94._8_4_ = fVar50;
  auVar94._12_4_ = fVar35;
  local_190 = 0;
  uStack_128 = 0;
  auVar58._4_4_ = fVar45 + fVar45;
  auVar58._0_4_ = fVar33 + fVar33;
  auVar58._8_4_ = fVar78 + fVar78;
  auVar58._12_4_ = fVar90 + fVar90;
  *param_5 = 0;
  puVar25 = (undefined8 *)0x0;
  uVar20 = (ulong)(int)(iVar18 * 0xc + 0x7fU & 0xffffff80);
  auVar94 = NEON_ext(auVar94,auVar94,4,1);
  auVar117._8_8_ = param_1._8_8_;
  uVar11 = iVar18 * 3;
  uVar106 = 0;
  bVar17 = cVar4 != '\x01';
  puVar26 = (undefined8 *)0x0;
  uVar3 = uVar11 & 7;
  plVar2 = param_3 + 0xc;
  fVar33 = fVar34;
  fVar45 = fVar34;
  fVar78 = fVar46;
  do {
    auVar83._8_8_ = uStack_128;
    auVar83._0_8_ = local_190;
    auVar95 = auVar58;
    do {
      fVar96 = fVar46;
      fVar90 = fVar34;
      uVar119 = uVar106;
      auVar58 = NEON_ext(auVar95,auVar95,4,1);
      fVar97 = auVar95._0_4_;
      fVar34 = auVar95._4_4_;
      fVar46 = fVar34 * *(float *)((long)param_3 + 0xe4);
      fVar51 = auVar95._8_4_ * *(float *)(param_3 + 0x1d);
      local_1d0 = auVar94._0_4_;
      fStack_1cc = auVar94._4_4_;
      fVar87 = fVar97 * *(float *)(param_3 + 0x1c) + fVar46 + fVar51;
      auVar115._0_4_ = fVar84 * auVar58._0_4_ - local_1d0 * fVar97;
      auVar115._4_4_ = fVar47 * auVar58._4_4_ - fStack_1cc * fVar34;
      auVar115._8_4_ = fVar50 * fVar97 - fVar84 * auVar95._8_4_;
      auVar115._12_4_ = fVar35 * fVar34 - fVar47 * auVar95._12_4_;
      auVar58 = NEON_ext(auVar115,auVar115,4,1);
      fVar54 = auVar58._0_4_ * auVar58._0_4_;
      fVar66 = auVar58._4_4_ * auVar58._4_4_;
      fVar34 = fVar54 + fVar66 + auVar115._0_4_ * auVar115._0_4_;
      fVar54 = fVar54 + fVar66 + auVar115._0_4_ * auVar115._0_4_;
      uVar70 = CONCAT44(fVar54,fVar34);
      uVar93 = NEON_frsqrte(uVar70,4);
      fVar66 = (float)uVar93;
      fVar74 = (float)((ulong)uVar93 >> 0x20);
      uVar93 = NEON_frsqrts(uVar70,CONCAT44(fVar74 * fVar74,fVar66 * fVar66),4);
      fVar66 = fVar66 * (float)uVar93;
      fVar74 = fVar74 * (float)((ulong)uVar93 >> 0x20);
      uVar70 = NEON_frsqrts(uVar70,CONCAT44(fVar74 * fVar74,fVar66 * fVar66),4);
      iVar55 = -(uint)(fVar34 <= 0.0);
      iVar67 = -(uint)(fVar54 <= 0.0);
      fVar34 = fVar34 * (float)uVar70 * fVar66;
      fVar54 = fVar54 * (float)((ulong)uVar70 >> 0x20) * fVar74;
      fVar74 = (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                               CONCAT12((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar34 >> 8) &
                                                  ~(byte)((uint)iVar55 >> 8),
                                                  SUB41(fVar34,0) & ~(byte)iVar55)));
      fVar34 = fVar120 - auVar83._0_4_;
      fVar66 = fVar120 - auVar83._4_4_;
      fVar79 = fVar34 * (fVar74 - fVar87);
      uVar70 = CONCAT44(fVar66 * ((float)(CONCAT17((byte)((uint)fVar54 >> 0x18) &
                                                   ~(byte)((uint)iVar67 >> 0x18),
                                                   CONCAT16((byte)((uint)fVar54 >> 0x10) &
                                                            ~(byte)((uint)iVar67 >> 0x10),
                                                            CONCAT15((byte)((uint)fVar54 >> 8) &
                                                                     ~(byte)((uint)iVar67 >> 8),
                                                                     CONCAT14(SUB41(fVar54,0) &
                                                                              ~(byte)iVar67,fVar74))
                                                           )) >> 0x20) -
                                 (fVar97 * *(float *)(param_3 + 0x1c) + fVar46 + fVar51)),fVar79);
      fVar54 = auVar117._0_4_;
      if (fVar79 <= fVar45 - fVar54) goto joined_r0x02f990cc;
      fVar89 = (float)((ulong)uVar118 >> 0x20);
      uVar93 = NEON_frecpe(uVar70,4);
      uVar71 = NEON_frecps(uVar70,uVar93,4);
      fVar33 = (float)uVar93 * (float)uVar71;
      fVar46 = (float)((ulong)uVar93 >> 0x20) * (float)((ulong)uVar71 >> 0x20);
      uVar70 = NEON_frecps(uVar70,CONCAT44(fVar46,fVar33),4);
      uVar38 = NEON_fmax(CONCAT44(fVar66 * (fVar78 - fVar89) *
                                  fVar46 * (float)((ulong)uVar70 >> 0x20),
                                  fVar34 * (fVar45 - (float)uVar118) * fVar33 * (float)uVar70),
                         CONCAT44(fVar113,fVar113),4);
      uVar56 = NEON_fmin(CONCAT44(auVar83._4_4_ + (float)((ulong)uVar38 >> 0x20),
                                  auVar83._0_4_ + (float)uVar38),uVar105,4);
      local_130 = (float)uVar56;
      fStack_12c = (float)((ulong)uVar56 >> 0x20);
      local_c8 = CONCAT44(fStack_12c * *(float *)((long)param_3 + 0x114),
                          local_130 * *(float *)((long)param_3 + 0x114));
      uStack_128 = 0;
      FUN_032cae04(&local_c0,pauVar24,plVar2,&local_c8);
      fVar78 = (float)((ulong)local_c8 >> 0x20);
      auVar122._8_4_ = fStack_b8;
      auVar122._0_8_ = CONCAT44(fStack_bc,local_c0);
      auVar122._12_4_ = fStack_b4;
      auVar58 = NEON_ext(auVar122,auVar122,8,1);
      fVar45 = auVar58._4_4_ * auVar58._4_4_;
      uVar70 = NEON_ext(CONCAT44(fStack_bc,local_c0),auVar58._0_8_,4,1);
      fVar46 = fVar45 + -0.5;
      fVar45 = fVar45 + -0.5;
      auVar58 = *(undefined1 (*) [16])(param_3 + 8);
      fVar33 = auVar58._0_4_;
      fVar34 = auVar58._4_4_;
      fVar66 = auVar58._8_4_;
      fVar51 = local_c0 * fVar33 + fStack_bc * fVar34 + fStack_b8 * fVar66;
      fVar97 = local_c0 * fVar33 + fStack_bc * fVar34 + fStack_b8 * fVar66;
      auVar72 = NEON_ext(auVar58,auVar58,8,1);
      uVar93 = NEON_ext(auVar58._0_8_,auVar72._0_8_,4,1);
      auVar123._0_4_ = local_c0 * (float)uVar93 - (float)uVar70 * fVar33;
      auVar123._4_4_ =
           fStack_bc * (float)((ulong)uVar93 >> 0x20) - (float)((ulong)uVar70 >> 0x20) * fVar34;
      auVar123._8_4_ = fStack_b8 * fVar33 - local_c0 * fVar66;
      auVar123._12_4_ = fStack_b4 * fVar34 - fStack_bc * auVar58._12_4_;
      auVar72 = NEON_ext(auVar123,auVar123,4,1);
      fVar33 = fVar33 * fVar46 + local_c0 * fVar51 + auVar72._0_4_ * fStack_b4;
      fVar34 = fVar34 * fVar45 + fStack_bc * fVar97 + auVar72._4_4_ * fStack_b4;
      fVar46 = fVar66 * fVar46 + fStack_b8 * fVar51 + auVar123._0_4_ * fStack_b4;
      fVar45 = auVar58._12_4_ * fVar45 + fStack_b4 * fVar97 + auVar123._4_4_ * fStack_b4;
      auVar39._0_8_ =
           CONCAT44((*(float *)((long)param_3 + 0x24) +
                    fVar78 * (*(float *)((long)param_3 + 0x34) - *(float *)((long)param_3 + 0x24)))
                    - (fVar34 + fVar34),
                    (*(float *)(param_3 + 4) +
                    (float)local_c8 * (*(float *)(param_3 + 6) - *(float *)(param_3 + 4))) -
                    (fVar33 + fVar33));
      auVar39._8_4_ =
           (*(float *)(param_3 + 5) +
           (float)local_c8 * (*(float *)(param_3 + 7) - *(float *)(param_3 + 5))) -
           (fVar46 + fVar46);
      auVar39._12_4_ =
           (*(float *)((long)param_3 + 0x2c) +
           fVar78 * (*(float *)((long)param_3 + 0x3c) - *(float *)((long)param_3 + 0x2c))) -
           (fVar45 + fVar45);
      uVar53 = auVar39._8_8_;
      FUN_032c9fc0(&local_110,&local_c0);
      uVar135 = uStack_e8;
      uVar81 = local_f0;
      uVar93 = CONCAT44(fStack_104,fStack_108);
      uVar70 = CONCAT44(fStack_10c,local_110);
      auVar73._4_4_ = fStack_10c;
      auVar73._0_4_ = local_110;
      auVar73._8_4_ = fStack_108;
      auVar73._12_4_ = fStack_104;
      uVar68 = CONCAT44(fStack_f4,fStack_f8);
      uVar71 = CONCAT44(fStack_fc,local_100);
      auVar59._4_4_ = fStack_fc;
      auVar59._0_4_ = local_100;
      auVar59._8_4_ = fStack_f8;
      auVar59._12_4_ = fStack_f4;
      auVar82._8_8_ = uStack_e8;
      auVar82._0_8_ = local_f0;
      fVar33 = (float)local_f0;
      fVar34 = (float)((ulong)local_f0 >> 0x20);
      local_e0 = auVar39._0_8_;
      uStack_d8 = uVar53;
      if (bVar17) {
        bVar17 = true;
        if ((-fVar87 < fVar74) && (local_130 < fVar120)) {
          fVar78 = (float)uStack_178;
          fVar66 = (float)((ulong)uStack_178 >> 0x20);
          fVar46 = (float)local_180;
          fVar45 = (float)((ulong)local_180 >> 0x20);
          if (puVar26 == (undefined8 *)0x0) {
            lVar19 = tpidr_el0;
            lVar22 = *(long *)(lVar19 + 0x38d490);
            if (lVar22 == 0) {
              lVar22 = FUN_0333d16c(0,1);
              *(long *)(lVar19 + 0x38d490) = lVar22;
            }
            lVar19 = *(long *)(lVar22 + 8);
            if (*(ulong *)(lVar19 + 0x10) < uVar20) {
LAB_02f99278:
              puVar25 = (undefined8 *)FUN_032ce670();
            }
            else {
              puVar25 = *(undefined8 **)(lVar19 + 0x18);
              if (*(ulong *)(lVar19 + 0x20) < (long)puVar25 + uVar20) goto LAB_02f99278;
              *(ulong *)(lVar19 + 0x18) = (long)puVar25 + uVar20;
            }
            puVar26 = (undefined8 *)
                      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*param_3 + 0x18) * 0x200 + 0x60))
                                (*param_3,puVar25,(long)iVar18,&local_c0);
            if ((0 < (int)uVar11) && (puVar26 != puVar25)) {
              puVar27 = puVar25;
              if (6 < uVar11 - 1) {
                puVar21 = puVar25;
                iVar55 = uVar11 - uVar3;
                do {
                  *(undefined4 *)puVar21 = *(undefined4 *)puVar26;
                  *(undefined4 *)((long)puVar21 + 4) = *(undefined4 *)((long)puVar26 + 4);
                  *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar26 + 1);
                  *(undefined4 *)((long)puVar21 + 0xc) = *(undefined4 *)((long)puVar26 + 0xc);
                  *(undefined4 *)(puVar21 + 2) = *(undefined4 *)(puVar26 + 2);
                  *(undefined4 *)((long)puVar21 + 0x14) = *(undefined4 *)((long)puVar26 + 0x14);
                  *(undefined4 *)(puVar21 + 3) = *(undefined4 *)(puVar26 + 3);
                  puVar1 = (undefined4 *)((long)puVar26 + 0x1c);
                  puVar26 = puVar26 + 4;
                  puVar27 = puVar21 + 4;
                  iVar55 = iVar55 + -8;
                  *(undefined4 *)((long)puVar21 + 0x1c) = *puVar1;
                  puVar21 = puVar27;
                } while (iVar55 != 0);
              }
              if (uVar3 != 0) {
                uVar23 = uVar3;
                do {
                  uVar23 = uVar23 - 1;
                  *(undefined4 *)puVar27 = *(undefined4 *)puVar26;
                  puVar26 = (undefined8 *)((long)puVar26 + 4);
                  puVar27 = (undefined8 *)((long)puVar27 + 4);
                } while (uVar23 != 0);
              }
            }
            auVar73._4_4_ = fStack_10c;
            auVar73._0_4_ = local_110;
            auVar73._8_4_ = fStack_108;
            auVar73._12_4_ = fStack_104;
            auVar59._4_4_ = fStack_fc;
            auVar59._0_4_ = local_100;
            auVar59._8_4_ = fStack_f8;
            auVar59._12_4_ = fStack_f4;
            auVar72 = NEON_ext(auVar59,auVar59,8,1);
            auVar82._8_8_ = uStack_e8;
            auVar82._0_8_ = local_f0;
            auVar58 = NEON_ext(auVar73,auVar73,8,1);
            auVar83 = NEON_ext(auVar82,auVar82,8,1);
            fVar66 = (float)((ulong)local_f0 >> 0x20);
            fVar51 = *(float *)(param_3 + 0x1e);
            fVar74 = *(float *)((long)param_3 + 0xf4);
            fVar87 = *(float *)(param_3 + 0x1f);
            fVar46 = local_c0 + *(float *)(param_3[1] + 0x20);
            unaff_d13 = CONCAT44(fVar46,fVar46);
            fVar46 = auVar58._0_4_ * fVar87 + local_110 * fVar51 + fStack_10c * fVar74;
            fVar45 = auVar72._0_4_ * fVar87 + local_100 * fVar51 + fStack_fc * fVar74;
            fVar78 = auVar83._0_4_ * fVar87 + (float)local_f0 * fVar51 + fVar66 * fVar74;
            fVar66 = auVar83._4_4_ * fVar87 + fVar66 * fVar51 + auVar83._4_4_ * fVar74;
            unaff_d9 = CONCAT44(fVar51 * fVar51 + fVar74 * fVar74 + fVar87 * fVar87,
                                fVar51 * fVar51 + fVar74 * fVar74 + fVar87 * fVar87);
            puVar26 = puVar25;
          }
          uStack_128 = 0;
          uStack_178 = CONCAT44(fVar66,fVar78);
          local_180 = CONCAT44(fVar45,fVar46);
          puVar27 = (undefined8 *)((long)puVar26 + (long)iVar18 * 0xc + -0xc);
          if (puVar27 < puVar26) {
            auVar73._8_8_ = uVar93;
            auVar73._0_8_ = uVar70;
            auVar59._8_8_ = uVar68;
            auVar59._0_8_ = uVar71;
            auVar82._8_8_ = uVar135;
            auVar82._0_8_ = uVar81;
          }
          else {
            auVar124._4_4_ = fVar45;
            auVar124._0_4_ = fVar46;
            auVar124._8_4_ = fVar78;
            auVar124._12_4_ = fVar66;
            auVar131._4_4_ = fVar45;
            auVar131._0_4_ = fVar46;
            auVar131._8_4_ = fVar78;
            auVar131._12_4_ = fVar66;
            auVar72 = NEON_ext(auVar124,auVar131,4,1);
            fVar97 = (float)*(undefined8 *)(param_2 + 0x160) - fVar31;
            fVar51 = *(float *)(param_2 + 0x170);
            fVar74 = *(float *)(param_2 + 0x174);
            fVar87 = *(float *)(param_2 + 0x178);
            fVar36 = *(float *)(param_2 + 0x180) - fVar51 * fVar97;
            fVar48 = *(float *)(param_2 + 0x184) -
                     fVar74 * ((float)((ulong)*(undefined8 *)(param_2 + 0x160) >> 0x20) - fVar31);
            fVar52 = *(float *)(param_2 + 0x188) - fVar87 * fVar97;
            fVar97 = *(float *)(param_2 + 0x110);
            fVar92 = *(float *)(param_2 + 0x114);
            fVar99 = *(float *)(param_2 + 0x118);
            fVar100 = (float)*(undefined8 *)(param_2 + 0x120);
            fVar107 = (float)((ulong)*(undefined8 *)(param_2 + 0x120) >> 0x20);
            fVar110 = (float)*(undefined8 *)(param_2 + 0x128);
            auVar58 = *(undefined1 (*) [16])(param_2 + 0x140);
            local_150 = auVar72._0_4_;
            fStack_14c = auVar72._4_4_;
            fVar101 = (float)*(undefined8 *)(param_2 + 0x130);
            fVar108 = (float)((ulong)*(undefined8 *)(param_2 + 0x130) >> 0x20);
            fVar111 = (float)*(undefined8 *)(param_2 + 0x138);
            fVar37 = fVar101 * fVar87 + fVar97 * fVar51 + fVar100 * fVar74;
            fVar49 = fVar108 * fVar87 + fVar92 * fVar51 + fVar107 * fVar74;
            fVar51 = fVar111 * fVar87 + fVar99 * fVar51 + fVar110 * fVar74;
            do {
              fVar74 = fVar120 - (float)uVar56;
              fVar87 = (float)((ulong)uVar56 >> 0x20);
              uVar81 = CONCAT44(fVar120 - fVar87,fVar74);
              if (puVar26 <= puVar27) {
                auVar83 = NEON_ext(auVar73,auVar73,8,1);
                auVar95 = NEON_ext(auVar59,auVar59,8,1);
                auVar9._8_8_ = uVar93;
                auVar9._0_8_ = uVar70;
                auVar10._8_8_ = uVar93;
                auVar10._0_8_ = uVar70;
                auVar115 = NEON_ext(auVar9,auVar10,8,1);
                auVar7._8_8_ = uVar68;
                auVar7._0_8_ = uVar71;
                auVar8._8_8_ = uVar68;
                auVar8._0_8_ = uVar71;
                auVar122 = NEON_ext(auVar7,auVar8,8,1);
                auVar123 = NEON_ext(auVar82,auVar82,8,1);
                auVar5._4_4_ = fVar34;
                auVar5._0_4_ = fVar33;
                auVar5._8_8_ = uVar135;
                auVar6._4_4_ = fVar34;
                auVar6._0_4_ = fVar33;
                auVar6._8_8_ = uVar135;
                auVar72 = NEON_ext(auVar5,auVar6,8,1);
                fVar75 = *(float *)(param_3 + 0x1c);
                fVar88 = *(float *)((long)param_3 + 0xe4);
                fVar91 = *(float *)(param_3 + 0x1d);
                fVar98 = (float)((ulong)uVar70 >> 0x20);
                fVar29 = (float)((ulong)uVar71 >> 0x20);
                fVar80 = (auVar58._0_4_ + fVar101 * fVar52 + fVar97 * fVar36 + fVar100 * fVar48) -
                         (float)auVar39._0_8_;
                fVar85 = (auVar58._4_4_ + fVar108 * fVar52 + fVar92 * fVar36 + fVar107 * fVar48) -
                         (float)((ulong)auVar39._0_8_ >> 0x20);
                fVar86 = (auVar58._8_4_ + fVar111 * fVar52 + fVar99 * fVar36 + fVar110 * fVar48) -
                         (float)uVar53;
                fVar69 = fVar51 * auVar115._0_4_ + fVar37 * (float)uVar70 + fVar49 * fVar98;
                fVar76 = fVar51 * auVar122._0_4_ + fVar37 * (float)uVar71 + fVar49 * fVar29;
                fVar77 = fVar51 * auVar72._0_4_ + fVar37 * fVar33 + fVar49 * fVar34;
                puVar21 = puVar26;
                do {
                  while( true ) {
                    fVar121 = *(float *)(puVar21 + 1);
                    fVar126 = (float)*puVar21;
                    fVar130 = (float)((ulong)*puVar21 >> 0x20);
                    fVar102 = fVar69 * (fVar126 -
                                       (auVar115._0_4_ * fVar86 +
                                       (float)uVar70 * fVar80 + fVar98 * fVar85));
                    fVar109 = fVar76 * (fVar130 -
                                       (auVar122._0_4_ * fVar86 +
                                       (float)uVar71 * fVar80 + fVar29 * fVar85));
                    fVar112 = fVar77 * (fVar121 -
                                       (auVar72._0_4_ * fVar86 + fVar33 * fVar80 + fVar34 * fVar85))
                    ;
                    fVar114 = (fVar102 + fVar109 + fVar112) - (float)unaff_d13;
                    fVar103 = fVar114 - (float)uVar118;
                    fVar102 = ((fVar102 + fVar109 + fVar112) - (float)((ulong)unaff_d13 >> 0x20)) -
                              fVar89;
                    if (fVar103 <= fVar79) break;
LAB_02f98a48:
                    uVar134 = *puVar21;
                    fStack_b8 = *(float *)(puVar21 + 1);
                    local_c0 = (float)uVar134;
                    fStack_bc = (float)((ulong)uVar134 >> 0x20);
                    uVar132 = *puVar27;
                    *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar27 + 1);
                    *puVar21 = uVar132;
                    *(float *)(puVar27 + 1) = fStack_b8;
                    puVar28 = (undefined8 *)((long)puVar27 + -0xc);
                    *puVar27 = uVar134;
                    puVar27 = puVar28;
                    if (puVar28 < puVar21) goto LAB_02f9888c;
                  }
                  auVar128._0_4_ = fVar126 - *(float *)(param_3 + 8);
                  auVar128._4_4_ = fVar130 - *(float *)((long)param_3 + 0x44);
                  auVar128._8_4_ = fVar121 - *(float *)(param_3 + 9);
                  auVar128._12_4_ = fVar121 - *(float *)((long)param_3 + 0x4c);
                  auVar124 = NEON_ext(auVar128,auVar128,4,1);
                  auVar125._0_4_ = fVar46 * auVar124._0_4_ - local_150 * auVar128._0_4_;
                  auVar125._4_4_ = fVar45 * auVar124._4_4_ - fStack_14c * auVar128._4_4_;
                  auVar125._8_4_ = fVar78 * auVar128._0_4_ - fVar46 * auVar128._8_4_;
                  auVar125._12_4_ = fVar66 * auVar128._4_4_ - fVar45 * auVar128._12_4_;
                  auVar124 = NEON_ext(auVar125,auVar125,4,1);
                  fVar121 = fVar69 * (auVar83._0_4_ * fVar91 +
                                      auVar73._0_4_ * fVar75 + auVar73._4_4_ * fVar88 +
                                     auVar124._0_4_);
                  fVar112 = fVar76 * (auVar95._0_4_ * fVar91 +
                                      auVar59._0_4_ * fVar75 + auVar59._4_4_ * fVar88 +
                                     auVar124._4_4_);
                  fVar126 = fVar77 * (auVar123._0_4_ * fVar91 +
                                      auVar82._0_4_ * fVar75 + auVar82._4_4_ * fVar88 +
                                     auVar125._0_4_);
                  fVar109 = fVar121 + fVar112 + fVar126;
                  fVar126 = fVar121 + fVar112 + fVar126;
                  fVar121 = auVar128._0_4_ * auVar128._0_4_ + auVar128._4_4_ * auVar128._4_4_ +
                            auVar128._8_4_ * auVar128._8_4_;
                  fVar130 = auVar128._0_4_ * auVar128._0_4_ + auVar128._4_4_ * auVar128._4_4_ +
                            auVar128._8_4_ * auVar128._8_4_;
                  uVar134 = CONCAT44(fVar130,fVar121);
                  uVar132 = NEON_frsqrte(uVar134,4);
                  fVar112 = (float)uVar132;
                  fVar133 = (float)((ulong)uVar132 >> 0x20);
                  uVar132 = NEON_frsqrts(uVar134,CONCAT44(fVar133 * fVar133,fVar112 * fVar112),4);
                  fVar112 = fVar112 * (float)uVar132;
                  fVar133 = fVar133 * (float)((ulong)uVar132 >> 0x20);
                  uVar134 = NEON_frsqrts(uVar134,CONCAT44(fVar133 * fVar133,fVar112 * fVar112),4);
                  iVar55 = -(uint)(fVar121 <= 0.0);
                  iVar67 = -(uint)(fVar130 <= 0.0);
                  fVar121 = fVar121 * (float)uVar134 * fVar112;
                  fVar130 = fVar130 * (float)((ulong)uVar134 >> 0x20) * fVar133;
                  fVar121 = (float)CONCAT13((byte)((uint)fVar121 >> 0x18) &
                                            ~(byte)((uint)iVar55 >> 0x18),
                                            CONCAT12((byte)((uint)fVar121 >> 0x10) &
                                                     ~(byte)((uint)iVar55 >> 0x10),
                                                     CONCAT11((byte)((uint)fVar121 >> 8) &
                                                              ~(byte)((uint)iVar55 >> 8),
                                                              SUB41(fVar121,0) & ~(byte)iVar55)));
                  fVar112 = (float)unaff_d9 * fVar121;
                  if (fVar74 * 0.5 * fVar74 * fVar112 < fVar103 + fVar74 * fVar109)
                  goto LAB_02f98a48;
                  if (fVar114 < fVar54) {
                    auVar73._8_8_ = uVar93;
                    auVar73._0_8_ = uVar70;
                    auVar59._8_8_ = uVar68;
                    auVar59._0_8_ = uVar71;
                    auVar82._4_4_ = fVar34;
                    auVar82._0_4_ = fVar33;
                    auVar82._8_8_ = uVar135;
                    goto LAB_02f987e0;
                  }
                  uVar134 = NEON_fmov(0x40800000,4);
                  puVar21 = (undefined8 *)((long)puVar21 + 0xc);
                  fVar112 = fVar103 * fVar112 * (float)uVar134 + fVar109 * fVar109;
                  uVar134 = CONCAT44(fVar102 * (float)((ulong)unaff_d9 >> 0x20) *
                                               (float)(CONCAT17((byte)((uint)fVar130 >> 0x18) &
                                                                ~(byte)((uint)iVar67 >> 0x18),
                                                                CONCAT16((byte)((uint)fVar130 >>
                                                                               0x10) &
                                                                         ~(byte)((uint)iVar67 >>
                                                                                0x10),
                                                                         CONCAT15((byte)((uint)
                                                  fVar130 >> 8) & ~(byte)((uint)iVar67 >> 8),
                                                  CONCAT14(SUB41(fVar130,0) & ~(byte)iVar67,fVar121)
                                                  ))) >> 0x20) * (float)((ulong)uVar134 >> 0x20) +
                                     fVar126 * fVar126,fVar112);
                  uVar132 = NEON_frsqrte(uVar134,4);
                  fVar121 = (float)uVar132;
                  fVar114 = (float)((ulong)uVar132 >> 0x20);
                  uVar132 = NEON_frsqrts(uVar134,CONCAT44(fVar114 * fVar114,fVar121 * fVar121),4);
                  fVar121 = fVar121 * (float)uVar132;
                  fVar114 = fVar114 * (float)((ulong)uVar132 >> 0x20);
                  uVar134 = NEON_frsqrts(uVar134,CONCAT44(fVar114 * fVar114,fVar121 * fVar121),4);
                  fVar112 = fVar112 * (float)uVar134 * fVar121;
                  auVar116._0_4_ = fVar112 - fVar109;
                  auVar116._4_4_ = -fVar112 - fVar126;
                  auVar116._8_4_ = fVar112 - fVar109;
                  auVar116._12_4_ = fVar112 - fVar126;
                  auVar124 = NEON_frecpe(auVar116,4);
                  iVar55 = -(uint)(auVar116._0_4_ == 0.0);
                  iVar67 = -(uint)(auVar116._4_4_ == 0.0);
                  auVar131 = NEON_frecps(auVar116,auVar124,4);
                  auVar129._0_4_ = auVar124._0_4_ * auVar131._0_4_;
                  auVar129._4_4_ = auVar124._4_4_ * auVar131._4_4_;
                  auVar129._8_4_ = auVar124._8_4_ * auVar131._8_4_;
                  auVar129._12_4_ = auVar124._12_4_ * auVar131._12_4_;
                  auVar124 = NEON_frecps(auVar116,auVar129,4);
                  uVar106 = CONCAT44((fVar102 + fVar102) * auVar129._4_4_ * auVar124._4_4_,
                                     (fVar103 + fVar103) * auVar129._0_4_ * auVar124._0_4_) &
                            CONCAT17(~(byte)((uint)iVar67 >> 0x18),
                                     CONCAT16(~(byte)((uint)iVar67 >> 0x10),
                                              CONCAT15(~(byte)((uint)iVar67 >> 8),
                                                       CONCAT14(~(byte)iVar67,
                                                                CONCAT13(~(byte)((uint)iVar55 >>
                                                                                0x18),
                                                                         CONCAT12(~(byte)((uint)
                                                  iVar55 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar55 >> 8),~(byte)iVar55)
                                                  ))))));
                  uVar104 = (undefined4)uVar106;
                  uVar132 = CONCAT44(uVar104,uVar104);
                  uVar104 = (undefined4)(uVar106 >> 0x20);
                  uVar134 = CONCAT44(uVar104,uVar104);
                  uVar57 = NEON_fmax(uVar132,uVar134,4);
                  uVar106 = NEON_fmin(uVar132,uVar134,4);
                  uVar81 = NEON_fmin(uVar81,uVar57 ^ (uVar57 ^ uVar106) &
                                                     CONCAT44(-(uint)(0.0 < (float)(uVar106 >> 0x20)
                                                                     ),-(uint)(0.0 < (float)uVar106)
                                                             ),4);
                } while (puVar21 <= puVar27);
              }
LAB_02f9888c:
              fVar33 = (float)uVar56 + (float)uVar81;
              fVar87 = fVar87 + (float)((ulong)uVar81 >> 0x20);
              uVar56 = CONCAT44(fVar87,fVar33);
              uStack_128 = 0;
              local_c8 = CONCAT44(fVar87 * *(float *)((long)param_3 + 0x114),
                                  fVar33 * *(float *)((long)param_3 + 0x114));
              FUN_032cae04(&local_c0,pauVar24,plVar2,&local_c8);
              fVar75 = (float)((ulong)local_c8 >> 0x20);
              auVar14._8_4_ = fStack_b8;
              auVar14._0_8_ = CONCAT44(fStack_bc,local_c0);
              auVar14._12_4_ = fStack_b4;
              auVar72 = NEON_ext(auVar14,auVar14,8,1);
              fVar87 = auVar72._4_4_ * auVar72._4_4_;
              uVar70 = NEON_ext(CONCAT44(fStack_bc,local_c0),auVar72._0_8_,4,1);
              fVar74 = fVar87 + -0.5;
              fVar87 = fVar87 + -0.5;
              auVar72 = *(undefined1 (*) [16])(param_3 + 8);
              fVar33 = auVar72._0_4_;
              fVar34 = auVar72._4_4_;
              fVar88 = auVar72._8_4_;
              fVar91 = local_c0 * fVar33 + fStack_bc * fVar34 + fStack_b8 * fVar88;
              fVar98 = local_c0 * fVar33 + fStack_bc * fVar34 + fStack_b8 * fVar88;
              auVar83 = NEON_ext(auVar72,auVar72,8,1);
              uVar93 = NEON_ext(auVar72._0_8_,auVar83._0_8_,4,1);
              auVar60._0_4_ = local_c0 * (float)uVar93 - (float)uVar70 * fVar33;
              auVar60._4_4_ =
                   fStack_bc * (float)((ulong)uVar93 >> 0x20) -
                   (float)((ulong)uVar70 >> 0x20) * fVar34;
              auVar60._8_4_ = fStack_b8 * fVar33 - local_c0 * fVar88;
              auVar60._12_4_ = fStack_b4 * fVar34 - fStack_bc * auVar72._12_4_;
              auVar83 = NEON_ext(auVar60,auVar60,4,1);
              fVar33 = fVar33 * fVar74 + local_c0 * fVar91 + auVar83._0_4_ * fStack_b4;
              fVar34 = fVar34 * fVar87 + fStack_bc * fVar98 + auVar83._4_4_ * fStack_b4;
              fVar74 = fVar88 * fVar74 + fStack_b8 * fVar91 + auVar60._0_4_ * fStack_b4;
              fVar87 = auVar72._12_4_ * fVar87 + fStack_b4 * fVar98 + auVar60._4_4_ * fStack_b4;
              auVar40._0_8_ =
                   CONCAT44((*(float *)((long)param_3 + 0x24) +
                            fVar75 * (*(float *)((long)param_3 + 0x34) -
                                     *(float *)((long)param_3 + 0x24))) - (fVar34 + fVar34),
                            (*(float *)(param_3 + 4) +
                            (float)local_c8 * (*(float *)(param_3 + 6) - *(float *)(param_3 + 4))) -
                            (fVar33 + fVar33));
              auVar40._8_4_ =
                   (*(float *)(param_3 + 5) +
                   (float)local_c8 * (*(float *)(param_3 + 7) - *(float *)(param_3 + 5))) -
                   (fVar74 + fVar74);
              auVar40._12_4_ =
                   (*(float *)((long)param_3 + 0x2c) +
                   fVar75 * (*(float *)((long)param_3 + 0x3c) - *(float *)((long)param_3 + 0x2c))) -
                   (fVar87 + fVar87);
              uVar53 = auVar40._8_8_;
              FUN_032c9fc0(&local_110,&local_c0);
              uVar71 = CONCAT44(fStack_fc,local_100);
              auVar59._8_4_ = fStack_f8;
              auVar59._0_8_ = uVar71;
              auVar59._12_4_ = fStack_f4;
              auVar82._8_8_ = uStack_e8;
              auVar82._0_8_ = local_f0;
              fVar33 = (float)local_f0;
              fVar34 = (float)((ulong)local_f0 >> 0x20);
              uVar70 = CONCAT44(fStack_10c,local_110);
              auVar73._8_4_ = fStack_108;
              auVar73._0_8_ = uVar70;
              auVar73._12_4_ = fStack_104;
              uVar68 = auVar59._8_8_;
              uVar93 = auVar73._8_8_;
              auVar39._0_8_ = auVar40._0_8_;
              uVar135 = uStack_e8;
              local_e0 = auVar40._0_8_;
              uStack_d8 = uVar53;
            } while (puVar26 <= puVar27);
          }
LAB_02f987e0:
          uVar93 = auVar73._8_8_;
          uVar70 = auVar73._0_8_;
          uVar68 = auVar59._8_8_;
          uVar71 = auVar59._0_8_;
          fVar33 = auVar82._0_4_;
          fVar34 = auVar82._4_4_;
          bVar17 = (float)uVar38 < (float)uVar56 - local_130;
          fStack_12c = (float)((ulong)uVar56 >> 0x20);
          uVar135 = auVar82._8_8_;
          local_130 = (float)uVar56;
        }
      }
      else {
        bVar17 = false;
      }
      *(undefined8 *)(param_2 + 0x118) = uVar93;
      *(undefined8 *)(param_2 + 0x110) = uVar70;
      *(undefined8 *)(param_2 + 0x128) = uVar68;
      *(undefined8 *)(param_2 + 0x120) = uVar71;
      *(undefined8 *)(param_2 + 0x138) = uVar135;
      *(ulong *)(param_2 + 0x130) = CONCAT44(fVar34,fVar33);
      *(undefined8 *)(param_2 + 0x148) = uVar53;
      *(undefined8 *)(param_2 + 0x140) = auVar39._0_8_;
      FUN_0017f0d0(param_2,*param_3,param_3[1],param_2 + 0x110,1,param_4,param_2 + 0x160);
      fVar33 = *(float *)(param_2 + 0x170);
      fVar34 = *(float *)(param_2 + 0x174);
      fVar46 = *(float *)(param_2 + 0x178);
      uVar106 = CONCAT44(fStack_12c,local_130);
      auVar83._8_8_ = uStack_128;
      auVar83._0_8_ = uVar106;
      auVar95._0_4_ = (float)local_f0 * fVar46 + local_110 * fVar33 + local_100 * fVar34;
      auVar95._4_4_ =
           (float)((ulong)local_f0 >> 0x20) * fVar46 + fStack_10c * fVar33 + fStack_fc * fVar34;
      auVar95._8_4_ = (float)uStack_e8 * fVar46 + fStack_108 * fVar33 + fStack_f8 * fVar34;
      auVar95._12_4_ =
           (float)((ulong)uStack_e8 >> 0x20) * fVar46 + fStack_104 * fVar33 + fStack_f4 * fVar34;
      fVar45 = (float)*(undefined8 *)(param_2 + 0x160) - fVar32;
      fVar78 = (float)((ulong)*(undefined8 *)(param_2 + 0x160) >> 0x20) - fVar32;
      fVar34 = fVar45;
      fVar46 = fVar78;
      fVar33 = fVar45;
    } while (fVar54 <= fVar45);
    local_190 = uVar106;
    if (fVar30 < ABS(fVar45 - fVar54)) {
      iVar55 = 10;
      fVar66 = fVar45;
      fVar51 = fVar78;
      do {
        uVar70 = CONCAT44(fVar51 - fVar96,fVar66 - fVar90);
        uVar93 = NEON_frecpe(uVar70,4);
        uVar71 = NEON_frecps(uVar70,uVar93,4);
        fVar45 = (float)uVar93 * (float)uVar71;
        fVar78 = (float)((ulong)uVar93 >> 0x20) * (float)((ulong)uVar71 >> 0x20);
        uVar70 = NEON_frecps(uVar70,CONCAT44(fVar78,fVar45),4);
        uVar70 = NEON_fminnm(CONCAT44((auVar117._4_4_ - fVar96) *
                                      fVar78 * (float)((ulong)uVar70 >> 0x20),
                                      (fVar54 - fVar90) * fVar45 * (float)uVar70),0x3f6666663f666666
                             ,4);
        uVar70 = NEON_fmax(uVar70,0x3dcccccd3dcccccd,4);
        fVar45 = (float)(uVar119 >> 0x20);
        uVar57 = NEON_fmax(CONCAT44(fVar45 + (auVar83._4_4_ - fVar45) *
                                             (float)((ulong)uVar70 >> 0x20),
                                    (float)uVar119 +
                                    (auVar83._0_4_ - (float)uVar119) * (float)uVar70),
                           CONCAT44(fVar113,fVar113),4);
        fVar74 = (float)uVar57;
        local_c8 = CONCAT44((float)(uVar57 >> 0x20) * *(float *)((long)param_3 + 0x114),
                            fVar74 * *(float *)((long)param_3 + 0x114));
        uStack_118 = 0;
        FUN_032cae04(&local_c0,pauVar24,plVar2,&local_c8);
        fVar97 = (float)((ulong)local_c8 >> 0x20);
        auVar15._8_4_ = fStack_b8;
        auVar15._0_8_ = CONCAT44(fStack_bc,local_c0);
        auVar15._12_4_ = fStack_b4;
        auVar58 = NEON_ext(auVar15,auVar15,8,1);
        fVar87 = auVar58._4_4_ * auVar58._4_4_;
        uVar70 = NEON_ext(CONCAT44(fStack_bc,local_c0),auVar58._0_8_,4,1);
        fVar79 = fVar87 + -0.5;
        fVar87 = fVar87 + -0.5;
        auVar58 = *(undefined1 (*) [16])(param_3 + 8);
        fVar45 = auVar58._0_4_;
        fVar78 = auVar58._4_4_;
        fVar89 = auVar58._8_4_;
        fVar92 = local_c0 * fVar45 + fStack_bc * fVar78 + fStack_b8 * fVar89;
        fVar99 = local_c0 * fVar45 + fStack_bc * fVar78 + fStack_b8 * fVar89;
        auVar72 = NEON_ext(auVar58,auVar58,8,1);
        uVar93 = NEON_ext(auVar58._0_8_,auVar72._0_8_,4,1);
        auVar64._0_4_ = local_c0 * (float)uVar93 - (float)uVar70 * fVar45;
        auVar64._4_4_ =
             fStack_bc * (float)((ulong)uVar93 >> 0x20) - (float)((ulong)uVar70 >> 0x20) * fVar78;
        auVar64._8_4_ = fStack_b8 * fVar45 - local_c0 * fVar89;
        auVar64._12_4_ = fStack_b4 * fVar78 - fStack_bc * auVar58._12_4_;
        auVar72 = NEON_ext(auVar64,auVar64,4,1);
        fVar45 = fVar45 * fVar79 + local_c0 * fVar92 + auVar72._0_4_ * fStack_b4;
        fVar78 = fVar78 * fVar87 + fStack_bc * fVar99 + auVar72._4_4_ * fStack_b4;
        fVar79 = fVar89 * fVar79 + fStack_b8 * fVar92 + auVar64._0_4_ * fStack_b4;
        fVar87 = auVar58._12_4_ * fVar87 + fStack_b4 * fVar99 + auVar64._4_4_ * fStack_b4;
        auVar43._0_4_ =
             (*(float *)(param_3 + 4) +
             (float)local_c8 * (*(float *)(param_3 + 6) - *(float *)(param_3 + 4))) -
             (fVar45 + fVar45);
        auVar43._4_4_ =
             (*(float *)((long)param_3 + 0x24) +
             fVar97 * (*(float *)((long)param_3 + 0x34) - *(float *)((long)param_3 + 0x24))) -
             (fVar78 + fVar78);
        auVar43._8_4_ =
             (*(float *)(param_3 + 5) +
             (float)local_c8 * (*(float *)(param_3 + 7) - *(float *)(param_3 + 5))) -
             (fVar79 + fVar79);
        auVar43._12_4_ =
             (*(float *)((long)param_3 + 0x2c) +
             fVar97 * (*(float *)((long)param_3 + 0x3c) - *(float *)((long)param_3 + 0x2c))) -
             (fVar87 + fVar87);
        FUN_032c9fc0(&local_110,&local_c0);
        auVar12._8_4_ = fStack_108;
        auVar12._0_8_ = CONCAT44(fStack_10c,local_110);
        auVar12._12_4_ = fStack_104;
        auVar13._8_4_ = fStack_f8;
        auVar13._0_8_ = CONCAT44(fStack_fc,local_100);
        auVar13._12_4_ = fStack_f4;
        local_e0 = CONCAT44(auVar43._4_4_,auVar43._0_4_);
        *(long *)(param_2 + 0x118) = auVar12._8_8_;
        *(ulong *)(param_2 + 0x110) = CONCAT44(fStack_10c,local_110);
        *(long *)(param_2 + 0x128) = auVar13._8_8_;
        *(ulong *)(param_2 + 0x120) = CONCAT44(fStack_fc,local_100);
        *(undefined8 *)(param_2 + 0x138) = uStack_e8;
        *(undefined8 *)(param_2 + 0x130) = local_f0;
        *(long *)(param_2 + 0x148) = auVar43._8_8_;
        *(undefined8 *)(param_2 + 0x140) = local_e0;
        uStack_d8 = auVar43._8_8_;
        FUN_0017f0d0(param_2,*param_3,param_3[1],param_2 + 0x110,1,param_4,param_2 + 0x160);
        fVar45 = (float)*(undefined8 *)(param_2 + 0x160) - fVar32;
        fVar78 = (float)((ulong)*(undefined8 *)(param_2 + 0x160) >> 0x20) - fVar32;
        if (ABS(fVar45 - fVar54) < fVar30) {
          auVar58._4_4_ = auVar95._4_4_;
          auVar58._0_4_ = auVar95._0_4_;
          auVar58._8_4_ = auVar95._8_4_;
          auVar58._12_4_ = auVar95._12_4_;
LAB_02f990a0:
          uVar106 = uVar57;
          local_190 = uVar57;
          uStack_128 = uStack_118;
          fVar34 = fVar45;
          fVar46 = fVar78;
          fVar33 = fVar45;
          goto LAB_02f98db8;
        }
        if (fVar54 <= fVar45) {
          auVar58._4_4_ = auVar95._4_4_;
          auVar58._0_4_ = auVar95._0_4_;
          auVar58._8_4_ = auVar95._8_4_;
          auVar58._12_4_ = auVar95._12_4_;
          uVar119 = uVar57;
          fVar90 = fVar45;
          fVar96 = fVar78;
        }
        else {
          auVar83._8_8_ = 0;
          auVar83._0_8_ = uVar57;
          auVar58._4_4_ = auVar95._4_4_;
          auVar58._0_4_ = auVar95._0_4_;
          auVar58._8_4_ = auVar95._8_4_;
          auVar58._12_4_ = auVar95._12_4_;
          uVar106 = uVar57;
          fVar66 = fVar45;
          fVar51 = fVar78;
          fVar34 = fVar45;
          fVar46 = fVar78;
          fVar33 = fVar45;
          local_190 = uVar57;
          if (fVar74 == fVar113) goto LAB_02f990a0;
        }
        fVar78 = fVar51;
        fVar45 = fVar66;
        uVar57 = auVar83._0_8_;
        iVar55 = iVar55 + -1;
        fVar66 = fVar45;
        fVar51 = fVar78;
      } while (iVar55 != 0);
      if (auVar83._0_4_ != fVar74) {
        local_c8 = CONCAT44(auVar83._4_4_ * *(float *)((long)param_3 + 0x114),
                            auVar83._0_4_ * *(float *)((long)param_3 + 0x114));
        FUN_032cae04(&local_c0,pauVar24,plVar2,&local_c8);
        fVar51 = (float)((ulong)local_c8 >> 0x20);
        auVar16._8_4_ = fStack_b8;
        auVar16._0_8_ = CONCAT44(fStack_bc,local_c0);
        auVar16._12_4_ = fStack_b4;
        auVar58 = NEON_ext(auVar16,auVar16,8,1);
        fVar66 = auVar58._4_4_ * auVar58._4_4_;
        uVar70 = NEON_ext(CONCAT44(fStack_bc,local_c0),auVar58._0_8_,4,1);
        fVar54 = fVar66 + -0.5;
        fVar66 = fVar66 + -0.5;
        auVar58 = *(undefined1 (*) [16])(param_3 + 8);
        fVar90 = auVar58._0_4_;
        fVar96 = auVar58._4_4_;
        fVar74 = auVar58._8_4_;
        fVar79 = local_c0 * fVar90 + fStack_bc * fVar96 + fStack_b8 * fVar74;
        fVar87 = local_c0 * fVar90 + fStack_bc * fVar96 + fStack_b8 * fVar74;
        auVar72 = NEON_ext(auVar58,auVar58,8,1);
        uVar93 = NEON_ext(auVar58._0_8_,auVar72._0_8_,4,1);
        auVar65._0_4_ = local_c0 * (float)uVar93 - (float)uVar70 * fVar90;
        auVar65._4_4_ =
             fStack_bc * (float)((ulong)uVar93 >> 0x20) - (float)((ulong)uVar70 >> 0x20) * fVar96;
        auVar65._8_4_ = fStack_b8 * fVar90 - local_c0 * fVar74;
        auVar65._12_4_ = fStack_b4 * fVar96 - fStack_bc * auVar58._12_4_;
        auVar72 = NEON_ext(auVar65,auVar65,4,1);
        fVar90 = fVar90 * fVar54 + local_c0 * fVar79 + auVar72._0_4_ * fStack_b4;
        fVar96 = fVar96 * fVar66 + fStack_bc * fVar87 + auVar72._4_4_ * fStack_b4;
        fVar54 = fVar74 * fVar54 + fStack_b8 * fVar79 + auVar65._0_4_ * fStack_b4;
        fVar66 = auVar58._12_4_ * fVar66 + fStack_b4 * fVar87 + auVar65._4_4_ * fStack_b4;
        auVar44._0_8_ =
             CONCAT44((*(float *)((long)param_3 + 0x24) +
                      fVar51 * (*(float *)((long)param_3 + 0x34) - *(float *)((long)param_3 + 0x24))
                      ) - (fVar96 + fVar96),
                      (*(float *)(param_3 + 4) +
                      (float)local_c8 * (*(float *)(param_3 + 6) - *(float *)(param_3 + 4))) -
                      (fVar90 + fVar90));
        auVar44._8_4_ =
             (*(float *)(param_3 + 5) +
             (float)local_c8 * (*(float *)(param_3 + 7) - *(float *)(param_3 + 5))) -
             (fVar54 + fVar54);
        auVar44._12_4_ =
             (*(float *)((long)param_3 + 0x2c) +
             fVar51 * (*(float *)((long)param_3 + 0x3c) - *(float *)((long)param_3 + 0x2c))) -
             (fVar66 + fVar66);
        FUN_032c9fc0(&local_110,&local_c0);
        auVar58._4_4_ = auVar95._4_4_;
        auVar58._0_4_ = auVar95._0_4_;
        auVar58._8_4_ = auVar95._8_4_;
        auVar58._12_4_ = auVar95._12_4_;
        local_e0 = auVar44._0_8_;
        uStack_d8 = auVar44._8_8_;
      }
      uStack_128 = 0;
    }
    else {
      auVar58 = auVar95;
      uVar57 = uVar106;
    }
LAB_02f98db8:
    fVar90 = *(float *)(param_2 + 0x170);
    fVar96 = *(float *)(param_2 + 0x174);
    fVar54 = *(float *)(param_2 + 0x178);
    fVar74 = *(float *)(param_2 + 0x180) - fVar90 * fVar127;
    fVar79 = *(float *)(param_2 + 0x184) - fVar96 * fVar127;
    fVar87 = *(float *)(param_2 + 0x188) - fVar54 * fVar127;
    fVar97 = (float)((ulong)local_f0 >> 0x20);
    fVar89 = (float)((ulong)uStack_e8 >> 0x20);
    fVar66 = (float)local_f0 * fVar54 + local_110 * fVar90 + local_100 * fVar96;
    fVar51 = fVar97 * fVar54 + fStack_10c * fVar90 + fStack_fc * fVar96;
    auVar41._0_8_ = CONCAT44(fVar51,fVar66);
    auVar41._8_4_ = (float)uStack_e8 * fVar54 + fStack_108 * fVar90 + fStack_f8 * fVar96;
    auVar41._12_4_ = fVar89 * fVar54 + fStack_104 * fVar90 + fStack_f4 * fVar96;
    fVar90 = (float)local_e0 + (float)local_f0 * fVar87 + local_110 * fVar74 + local_100 * fVar79;
    fVar96 = (float)((ulong)local_e0 >> 0x20) +
             fVar97 * fVar87 + fStack_10c * fVar74 + fStack_fc * fVar79;
    auVar61._0_8_ = CONCAT44(fVar96,fVar90);
    auVar61._8_4_ =
         (float)uStack_d8 + (float)uStack_e8 * fVar87 + fStack_108 * fVar74 + fStack_f8 * fVar79;
    auVar61._12_4_ =
         (float)((ulong)uStack_d8 >> 0x20) +
         fVar89 * fVar87 + fStack_104 * fVar74 + fStack_f4 * fVar79;
    *(long *)(param_5 + 0x18) = auVar61._8_8_;
    *(undefined8 *)(param_5 + 0x10) = auVar61._0_8_;
    *(long *)(param_5 + 0x28) = auVar41._8_8_;
    *(undefined8 *)(param_5 + 0x20) = auVar41._0_8_;
    if ((char)param_3[0x26] != '\0') goto LAB_02f99248;
    fVar54 = (float)uVar57 * *(float *)((long)param_3 + 0x114);
    fVar74 = (float)(uVar57 >> 0x20) * *(float *)((long)param_3 + 0x114);
    auVar62._0_4_ =
         fVar90 - (*(float *)(param_3 + 4) +
                  (*(float *)(param_3 + 6) - *(float *)(param_3 + 4)) * fVar54);
    auVar62._4_4_ =
         fVar96 - (*(float *)((long)param_3 + 0x24) +
                  (*(float *)((long)param_3 + 0x34) - *(float *)((long)param_3 + 0x24)) * fVar74);
    auVar62._8_4_ =
         auVar61._8_4_ -
         (*(float *)(param_3 + 5) + (*(float *)(param_3 + 7) - *(float *)(param_3 + 5)) * fVar54);
    auVar62._12_4_ =
         auVar61._12_4_ -
         (*(float *)((long)param_3 + 0x2c) +
         (*(float *)((long)param_3 + 0x3c) - *(float *)((long)param_3 + 0x2c)) * fVar74);
    auVar72 = *(undefined1 (*) [16])(param_3 + 0x1e);
    auVar83 = NEON_ext(auVar72,auVar72,8,1);
    uVar70 = NEON_ext(auVar72._0_8_,auVar83._0_8_,4,1);
    auVar83 = NEON_ext(auVar62,auVar62,4,1);
    auVar63._0_4_ = auVar72._0_4_ * auVar83._0_4_ - (float)uVar70 * auVar62._0_4_;
    auVar63._4_4_ = auVar72._4_4_ * auVar83._4_4_ - (float)((ulong)uVar70 >> 0x20) * auVar62._4_4_;
    auVar63._8_4_ = auVar72._8_4_ * auVar62._0_4_ - auVar72._0_4_ * auVar62._8_4_;
    auVar63._12_4_ = auVar72._12_4_ * auVar62._4_4_ - auVar72._4_4_ * auVar62._12_4_;
    auVar72 = NEON_ext(auVar63,auVar63,4,1);
    auVar42._0_4_ = fVar66 * (*(float *)(param_3 + 0x1c) + auVar72._0_4_);
    auVar42._4_4_ = fVar51 * (*(float *)((long)param_3 + 0xe4) + auVar72._4_4_);
    auVar42._8_4_ = auVar41._8_4_ * (*(float *)(param_3 + 0x1d) + auVar63._0_4_);
    auVar42._12_4_ = auVar41._12_4_ * (*(float *)((long)param_3 + 0xec) + auVar63._4_4_);
    auVar72 = NEON_ext(auVar42,auVar42,8,1);
    if (auVar42._0_4_ + auVar42._4_4_ + auVar72._0_4_ < 0.0) {
LAB_02f99248:
      *param_5 = 1;
      uVar105 = uVar57;
joined_r0x02f990cc:
      if (puVar26 != (undefined8 *)0x0) {
        lVar19 = tpidr_el0;
        lVar22 = *(long *)(lVar19 + 0x38d490);
        if (lVar22 == 0) {
          lVar22 = FUN_0333d16c(0,1);
          *(long *)(lVar19 + 0x38d490) = lVar22;
        }
        lVar19 = *(long *)(lVar22 + 8);
        if (((*(ulong *)(lVar19 + 0x10) < uVar20) ||
            (*(long *)(lVar19 + 0x18) != (long)puVar26 + uVar20)) ||
           (*(undefined8 **)(lVar19 + 0x28) == puVar25)) {
          FUN_032cedf0(lVar19,puVar25,uVar20);
        }
        else {
          *(undefined8 **)(lVar19 + 0x18) = puVar25;
        }
      }
      *(ulong *)(param_5 + 4) = CONCAT44(fVar33,(int)uVar105);
      return;
    }
    auVar117._0_8_ =
         NEON_fmin(auVar117._0_8_,
                   CONCAT44(fVar78 + *(float *)(param_3 + 0x24),fVar45 + *(float *)(param_3 + 0x24))
                   ,4);
    uVar118 = NEON_fmin(uVar118,CONCAT44(fVar78 + *(float *)((long)param_3 + 0x124),
                                         fVar45 + *(float *)((long)param_3 + 0x124)),4);
  } while( true );
}


