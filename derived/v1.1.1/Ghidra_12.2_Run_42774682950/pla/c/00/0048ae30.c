/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0048ae30; name: FUN_0048ae30
 */


void FUN_0048ae30(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar21;
  undefined1 auVar20 [16];
  ulong uVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  ulong uVar25;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulong uVar36;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  ulong uVar54;
  ulong uVar55;
  undefined1 auVar56 [16];
  ulong uVar57;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  undefined1 auVar58 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  ulong uVar70;
  uint uVar74;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  ulong uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar86 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  
  lVar16 = (long)param_2 * 0x3c0;
  uVar18 = param_3 + (param_3 & (int)(char)param_3 >> 7) * -2;
  iVar17 = ((uVar18 ^ 1) & 0xff) - 1;
  uVar1 = iVar17 >> 0x1f;
  auVar58._0_8_ = CONCAT44(uVar1,uVar1);
  auVar58._8_4_ = uVar1;
  auVar58._12_4_ = uVar1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  auVar66._8_8_ = auVar58._8_8_;
  auVar66._0_8_ = auVar58._0_8_;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uVar5 = *(uint *)(&DAT_03a0dcbc + lVar16);
  uVar3 = *(uint *)(&DAT_03a0dc9c + lVar16);
  bVar29 = (byte)(iVar17 >> 0x1f);
  auVar77._0_8_ =
       CONCAT17((&UNK_03a0dc83)[lVar16] & bVar29,
                CONCAT16((&UNK_03a0dc82)[lVar16] & bVar29,
                         CONCAT15((&UNK_03a0dc81)[lVar16] & bVar29,
                                  CONCAT14((&UNK_03a0dc80)[lVar16] & bVar29,
                                           CONCAT13((&UNK_03a0dc7f)[lVar16] & bVar29,
                                                    CONCAT12((&UNK_03a0dc7e)[lVar16] & bVar29,
                                                             CONCAT11((&UNK_03a0dc7d)[lVar16] &
                                                                      bVar29,(&DAT_03a0dc7c)[lVar16]
                                                                             & bVar29)))))));
  auVar77[8] = (&UNK_03a0dc84)[lVar16] & bVar29;
  auVar77[9] = (&UNK_03a0dc85)[lVar16] & bVar29;
  auVar77[10] = (&UNK_03a0dc86)[lVar16] & bVar29;
  auVar77[0xb] = (&UNK_03a0dc87)[lVar16] & bVar29;
  auVar77[0xc] = (&UNK_03a0dc88)[lVar16] & bVar29;
  auVar77[0xd] = (&UNK_03a0dc89)[lVar16] & bVar29;
  auVar77[0xe] = (&UNK_03a0dc8a)[lVar16] & bVar29;
  auVar77[0xf] = (&UNK_03a0dc8b)[lVar16] & bVar29;
  uVar74 = *(uint *)(&DAT_03a0dcb4 + lVar16);
  uVar4 = *(uint *)(&DAT_03a0dcb8 + lVar16);
  auVar81._0_8_ =
       CONCAT17((&UNK_03a0dc93)[lVar16] & bVar29,
                CONCAT16((&UNK_03a0dc92)[lVar16] & bVar29,
                         CONCAT15((&UNK_03a0dc91)[lVar16] & bVar29,
                                  CONCAT14((&UNK_03a0dc90)[lVar16] & bVar29,
                                           CONCAT13((&UNK_03a0dc8f)[lVar16] & bVar29,
                                                    CONCAT12((&UNK_03a0dc8e)[lVar16] & bVar29,
                                                             CONCAT11((&UNK_03a0dc8d)[lVar16] &
                                                                      bVar29,(&DAT_03a0dc8c)[lVar16]
                                                                             & bVar29)))))));
  auVar81[8] = (&UNK_03a0dc94)[lVar16] & bVar29;
  auVar81[9] = (&UNK_03a0dc95)[lVar16] & bVar29;
  auVar81[10] = (&UNK_03a0dc96)[lVar16] & bVar29;
  auVar81[0xb] = (&UNK_03a0dc97)[lVar16] & bVar29;
  auVar81[0xc] = (&UNK_03a0dc98)[lVar16] & bVar29;
  auVar81[0xd] = (&UNK_03a0dc99)[lVar16] & bVar29;
  auVar81[0xe] = (&UNK_03a0dc9a)[lVar16] & bVar29;
  auVar81[0xf] = (&UNK_03a0dc9b)[lVar16] & bVar29;
  auVar67 = *(undefined1 (*) [16])(param_1 + 0x12) ^
            (*(undefined1 (*) [16])(param_1 + 0x12) ^ *(undefined1 (*) [16])(&DAT_03a0dcc0 + lVar16)
            ) & auVar66;
  auVar91._0_8_ =
       CONCAT17((&UNK_03a0dcab)[lVar16] & bVar29,
                CONCAT16((&UNK_03a0dcaa)[lVar16] & bVar29,
                         CONCAT15((&UNK_03a0dca9)[lVar16] & bVar29,
                                  CONCAT14((&UNK_03a0dca8)[lVar16] & bVar29,
                                           CONCAT13((&UNK_03a0dca7)[lVar16] & bVar29,
                                                    CONCAT12((&UNK_03a0dca6)[lVar16] & bVar29,
                                                             CONCAT11((&UNK_03a0dca5)[lVar16] &
                                                                      bVar29,(&DAT_03a0dca4)[lVar16]
                                                                             & bVar29)))))));
  auVar91[8] = (&UNK_03a0dcac)[lVar16] & bVar29;
  auVar91[9] = (&UNK_03a0dcad)[lVar16] & bVar29;
  auVar91[10] = (&UNK_03a0dcae)[lVar16] & bVar29;
  auVar91[0xb] = (&UNK_03a0dcaf)[lVar16] & bVar29;
  auVar91[0xc] = (&UNK_03a0dcb0)[lVar16] & bVar29;
  auVar91[0xd] = (&UNK_03a0dcb1)[lVar16] & bVar29;
  auVar91[0xe] = (&UNK_03a0dcb2)[lVar16] & bVar29;
  auVar91[0xf] = (&UNK_03a0dcb3)[lVar16] & bVar29;
  uVar7 = *(uint *)(&DAT_03a0dc78 + lVar16) & uVar1 | ~uVar1 & 1;
  uVar8 = *(uint *)(&DAT_03a0dca0 + lVar16) & uVar1 | ~uVar1 & 1;
  param_1[0xf] = uVar74 & uVar1;
  param_1[0x10] = uVar4 & uVar1;
  param_1[0x11] = uVar5 & uVar1;
  *param_1 = uVar7;
  *(long *)(param_1 + 3) = auVar77._8_8_;
  *(undefined8 *)(param_1 + 1) = auVar77._0_8_;
  param_1[9] = uVar3 & uVar1;
  param_1[10] = uVar8;
  *(long *)(param_1 + 7) = auVar81._8_8_;
  *(undefined8 *)(param_1 + 5) = auVar81._0_8_;
  *(long *)(param_1 + 0xd) = auVar91._8_8_;
  *(undefined8 *)(param_1 + 0xb) = auVar91._0_8_;
  auVar71._8_8_ = auVar58._8_8_;
  auVar71._0_8_ = auVar58._0_8_;
  *(long *)(param_1 + 0x14) = auVar67._8_8_;
  *(long *)(param_1 + 0x12) = auVar67._0_8_;
  auVar72 = *(undefined1 (*) [16])(param_1 + 0x16) ^
            (*(undefined1 (*) [16])(param_1 + 0x16) ^ *(undefined1 (*) [16])(&DAT_03a0dcd0 + lVar16)
            ) & auVar71;
  *(long *)(param_1 + 0x18) = auVar72._8_8_;
  *(long *)(param_1 + 0x16) = auVar72._0_8_;
  uVar2 = (int)(((uVar18 ^ 2) & 0xff) - 1) >> 0x1f;
  auVar58 = *(undefined1 (*) [16])(param_1 + 0x1a) ^
            (*(undefined1 (*) [16])(param_1 + 0x1a) ^ *(undefined1 (*) [16])(&DAT_03a0dce0 + lVar16)
            ) & auVar58;
  auVar68._0_8_ = CONCAT44(uVar2,uVar2);
  auVar68._8_4_ = uVar2;
  auVar68._12_4_ = uVar2;
  uVar21 = auVar68._8_8_;
  auVar76._8_8_ = uVar21;
  auVar76._0_8_ = auVar68._0_8_;
  *(long *)(param_1 + 0x1c) = auVar58._8_8_;
  *(long *)(param_1 + 0x1a) = auVar58._0_8_;
  auVar77 = auVar77 ^ (auVar77 ^ *(undefined1 (*) [16])(&DAT_03a0dcf4 + lVar16)) & auVar76;
  uVar6 = *(uint *)(&DAT_03a0dcf0 + lVar16);
  *(long *)(param_1 + 3) = auVar77._8_8_;
  uVar57 = auVar77._0_8_;
  *(ulong *)(param_1 + 1) = uVar57;
  auVar80._8_8_ = uVar21;
  auVar80._0_8_ = auVar68._0_8_;
  auVar81 = auVar81 ^ (auVar81 ^ *(undefined1 (*) [16])(&DAT_03a0dd04 + lVar16)) & auVar80;
  uVar6 = uVar6 & uVar2 | uVar7 & (uVar2 ^ 0xffffffff);
  *param_1 = uVar6;
  *(long *)(param_1 + 7) = auVar81._8_8_;
  *(long *)(param_1 + 5) = auVar81._0_8_;
  auVar90._8_8_ = uVar21;
  auVar90._0_8_ = auVar68._0_8_;
  uVar3 = *(uint *)(&DAT_03a0dd14 + lVar16) & uVar2 | uVar3 & uVar1 & (uVar2 ^ 0xffffffff);
  uVar7 = *(uint *)(&DAT_03a0dd18 + lVar16) & uVar2 | uVar8 & (uVar2 ^ 0xffffffff);
  param_1[9] = uVar3;
  param_1[10] = uVar7;
  auVar91 = auVar91 ^ (auVar91 ^ *(undefined1 (*) [16])(&DAT_03a0dd1c + lVar16)) & auVar90;
  auVar37._8_8_ = uVar21;
  auVar37._0_8_ = auVar68._0_8_;
  *(long *)(param_1 + 0xd) = auVar91._8_8_;
  *(long *)(param_1 + 0xb) = auVar91._0_8_;
  uVar74 = *(uint *)(&DAT_03a0dd2c + lVar16) & uVar2 | uVar74 & uVar1 & (uVar2 ^ 0xffffffff);
  uVar4 = *(uint *)(&DAT_03a0dd30 + lVar16) & uVar2 | uVar4 & uVar1 & (uVar2 ^ 0xffffffff);
  param_1[0xf] = uVar74;
  param_1[0x10] = uVar4;
  uVar5 = *(uint *)(&DAT_03a0dd34 + lVar16) & uVar2 | uVar5 & uVar1 & (uVar2 ^ 0xffffffff);
  auVar67 = auVar67 ^ (auVar67 ^ *(undefined1 (*) [16])(&DAT_03a0dd38 + lVar16)) & auVar37;
  auVar39._8_8_ = uVar21;
  auVar39._0_8_ = auVar68._0_8_;
  auVar72 = auVar72 ^ (auVar72 ^ *(undefined1 (*) [16])(&DAT_03a0dd48 + lVar16)) & auVar39;
  param_1[0x11] = uVar5;
  *(long *)(param_1 + 0x18) = auVar72._8_8_;
  *(long *)(param_1 + 0x16) = auVar72._0_8_;
  auVar58 = auVar58 ^ (auVar58 ^ *(undefined1 (*) [16])(&DAT_03a0dd58 + lVar16)) & auVar68;
  uVar1 = (int)(((uVar18 ^ 3) & 0xff) - 1) >> 0x1f;
  *(long *)(param_1 + 0x1c) = auVar58._8_8_;
  *(long *)(param_1 + 0x1a) = auVar58._0_8_;
  uVar6 = *(uint *)(&DAT_03a0dd68 + lVar16) & uVar1 | uVar6 & (uVar1 ^ 0xffffffff);
  *param_1 = uVar6;
  uVar57 = uVar57 ^ (uVar57 ^ *(ulong *)(&DAT_03a0dd6c + lVar16)) & CONCAT44(uVar1,uVar1);
  *(ulong *)(param_1 + 1) = uVar57;
  auVar68 = NEON_ext(auVar77,auVar77,8,1);
  uVar54 = auVar68._0_8_ ^
           (auVar68._0_8_ ^ *(ulong *)(&DAT_03a0dd74 + lVar16)) & CONCAT44(uVar1,uVar1);
  auVar26._0_8_ = CONCAT44(uVar1,uVar1);
  auVar26._8_4_ = uVar1;
  auVar26._12_4_ = uVar1;
  auVar68 = *(undefined1 (*) [16])(&DAT_03a0dd7c + lVar16);
  *(ulong *)(param_1 + 3) = uVar54;
  uVar21 = auVar26._8_8_;
  auVar69._8_8_ = uVar21;
  auVar69._0_8_ = auVar26._0_8_;
  auVar81 = auVar81 ^ (auVar81 ^ auVar68) & auVar69;
  auVar73._8_8_ = uVar21;
  auVar73._0_8_ = auVar26._0_8_;
  *(long *)(param_1 + 7) = auVar81._8_8_;
  *(long *)(param_1 + 5) = auVar81._0_8_;
  uVar8 = *(uint *)(&DAT_03a0dd8c + lVar16) & uVar1 | uVar3 & (uVar1 ^ 0xffffffff);
  param_1[9] = uVar8;
  uVar7 = *(uint *)(&DAT_03a0dd90 + lVar16) & uVar1 | uVar7 & (uVar1 ^ 0xffffffff);
  param_1[10] = uVar7;
  auVar91 = auVar91 ^ (auVar91 ^ *(undefined1 (*) [16])(&DAT_03a0dd94 + lVar16)) & auVar73;
  auVar82._8_8_ = uVar21;
  auVar82._0_8_ = auVar26._0_8_;
  *(long *)(param_1 + 0xd) = auVar91._8_8_;
  *(long *)(param_1 + 0xb) = auVar91._0_8_;
  uVar74 = *(uint *)(&DAT_03a0dda4 + lVar16) & uVar1 | uVar74 & (uVar1 ^ 0xffffffff);
  param_1[0xf] = uVar74;
  uVar4 = *(uint *)(&DAT_03a0dda8 + lVar16) & uVar1 | uVar4 & (uVar1 ^ 0xffffffff);
  param_1[0x10] = uVar4;
  uVar3 = *(uint *)(&DAT_03a0ddac + lVar16);
  auVar67 = auVar67 ^ (auVar67 ^ *(undefined1 (*) [16])(&DAT_03a0ddb0 + lVar16)) & auVar82;
  auVar78._8_8_ = uVar21;
  auVar78._0_8_ = auVar26._0_8_;
  auVar72 = auVar72 ^ (auVar72 ^ *(undefined1 (*) [16])(&DAT_03a0ddc0 + lVar16)) & auVar78;
  uVar2 = (int)(((uVar18 ^ 4) & 0xff) - 1) >> 0x1f;
  auVar24._0_8_ = CONCAT44(uVar2,uVar2);
  auVar24._8_4_ = uVar2;
  auVar24._12_4_ = uVar2;
  auVar68 = *(undefined1 (*) [16])(&DAT_03a0de28 + lVar16);
  auVar45 = *(undefined1 (*) [16])(&DAT_03a0de38 + lVar16);
  *(long *)(param_1 + 0x18) = auVar72._8_8_;
  *(long *)(param_1 + 0x16) = auVar72._0_8_;
  uVar21 = auVar24._8_8_;
  auVar38._8_8_ = uVar21;
  auVar38._0_8_ = auVar24._0_8_;
  auVar39 = auVar67 ^ (auVar67 ^ auVar68) & auVar38;
  auVar83._4_12_ = auVar67._4_12_;
  auVar83._0_4_ = auVar67._8_4_;
  auVar85._0_8_ = auVar83._0_8_;
  auVar85._8_4_ = auVar67._12_4_;
  auVar85._12_4_ = auVar67._12_4_;
  auVar84._8_8_ = auVar85._8_8_;
  auVar84._4_4_ = auVar39._8_4_;
  auVar84._0_4_ = auVar67._8_4_;
  auVar86._0_12_ = auVar84._0_12_;
  auVar86._12_4_ = auVar39._12_4_;
  auVar68 = NEON_ext(auVar86,auVar39,4,1);
  uVar1 = uVar3 & uVar1 | uVar5 & (uVar1 ^ 0xffffffff);
  *(long *)(param_1 + 0x14) = auVar68._0_8_;
  *(ulong *)(param_1 + 0x12) = CONCAT44(auVar67._4_4_,auVar39._0_4_);
  auVar68 = *(undefined1 (*) [16])(&DAT_03a0ddd0 + lVar16);
  param_1[0x11] = uVar1;
  auVar95._8_8_ = uVar21;
  auVar95._0_8_ = auVar24._0_8_;
  auVar58 = auVar58 ^ (auVar58 ^ auVar68) & auVar26;
  *(long *)(param_1 + 0x1c) = auVar58._8_8_;
  *(long *)(param_1 + 0x1a) = auVar58._0_8_;
  uVar3 = *(uint *)(&DAT_03a0dde0 + lVar16) & uVar2 | uVar6 & (uVar2 ^ 0xffffffff);
  *param_1 = uVar3;
  uVar57 = uVar57 ^ (uVar57 ^ *(ulong *)(&DAT_03a0dde4 + lVar16)) & CONCAT44(uVar2,uVar2);
  *(ulong *)(param_1 + 1) = uVar57;
  uVar54 = uVar54 ^ (uVar54 ^ *(ulong *)(&DAT_03a0ddec + lVar16)) & CONCAT44(uVar2,uVar2);
  *(ulong *)(param_1 + 3) = uVar54;
  auVar81 = auVar81 ^ (auVar81 ^ *(undefined1 (*) [16])(&DAT_03a0ddf4 + lVar16)) & auVar95;
  *(long *)(param_1 + 7) = auVar81._8_8_;
  uVar70 = auVar81._0_8_;
  *(ulong *)(param_1 + 5) = uVar70;
  uVar5 = *(uint *)(&DAT_03a0de04 + lVar16) & uVar2 | uVar8 & (uVar2 ^ 0xffffffff);
  param_1[9] = uVar5;
  auVar96._8_8_ = uVar21;
  auVar96._0_8_ = auVar24._0_8_;
  auVar91 = auVar91 ^ (auVar91 ^ *(undefined1 (*) [16])(&DAT_03a0de0c + lVar16)) & auVar96;
  uVar6 = *(uint *)(&DAT_03a0de08 + lVar16) & uVar2 | uVar7 & (uVar2 ^ 0xffffffff);
  param_1[10] = uVar6;
  *(long *)(param_1 + 0xd) = auVar91._8_8_;
  *(long *)(param_1 + 0xb) = auVar91._0_8_;
  auVar67._8_8_ = uVar21;
  auVar67._0_8_ = auVar24._0_8_;
  auVar72 = auVar72 ^ (auVar72 ^ auVar45) & auVar67;
  auVar68 = NEON_ext(auVar81,auVar81,8,1);
  uVar74 = *(uint *)(&DAT_03a0de1c + lVar16) & uVar2 | uVar74 & (uVar2 ^ 0xffffffff);
  param_1[0xf] = uVar74;
  uVar4 = *(uint *)(&DAT_03a0de20 + lVar16) & uVar2 | uVar4 & (uVar2 ^ 0xffffffff);
  param_1[0x10] = uVar4;
  uVar7 = *(uint *)(&DAT_03a0de24 + lVar16) & uVar2 | uVar1 & (uVar2 ^ 0xffffffff);
  param_1[0x11] = uVar7;
  param_1[0x13] = auVar39._4_4_;
  param_1[0x15] = auVar39._12_4_;
  auVar58 = auVar58 ^ (auVar58 ^ *(undefined1 (*) [16])(&DAT_03a0de48 + lVar16)) & auVar24;
  *(long *)(param_1 + 0x1c) = auVar58._8_8_;
  *(long *)(param_1 + 0x1a) = auVar58._0_8_;
  uVar1 = (int)(((uVar18 ^ 5) & 0xff) - 1) >> 0x1f;
  uVar22 = CONCAT44(uVar1,uVar1);
  uVar8 = *(uint *)(&DAT_03a0de58 + lVar16) & uVar1 | uVar3 & (uVar1 ^ 0xffffffff);
  *param_1 = uVar8;
  uVar57 = uVar57 ^ (uVar57 ^ *(ulong *)(&DAT_03a0de5c + lVar16)) & uVar22;
  *(ulong *)(param_1 + 1) = uVar57;
  uVar54 = uVar54 ^ (uVar54 ^ *(ulong *)(&DAT_03a0de64 + lVar16)) & uVar22;
  *(ulong *)(param_1 + 3) = uVar54;
  uVar70 = uVar70 ^ (uVar70 ^ *(ulong *)(&DAT_03a0de6c + lVar16)) & uVar22;
  *(ulong *)(param_1 + 5) = uVar70;
  uVar55 = auVar68._0_8_ ^ (auVar68._0_8_ ^ *(ulong *)(&DAT_03a0de74 + lVar16)) & uVar22;
  auVar27._0_8_ = CONCAT44(uVar1,uVar1);
  auVar27._8_4_ = uVar1;
  auVar27._12_4_ = uVar1;
  *(ulong *)(param_1 + 7) = uVar55;
  uVar5 = *(uint *)(&DAT_03a0de7c + lVar16) & uVar1 | uVar5 & (uVar1 ^ 0xffffffff);
  uVar6 = *(uint *)(&DAT_03a0de80 + lVar16) & uVar1 | uVar6 & (uVar1 ^ 0xffffffff);
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  uVar21 = auVar27._8_8_;
  auVar79._8_8_ = uVar21;
  auVar79._0_8_ = auVar27._0_8_;
  auVar91 = auVar91 ^ (auVar91 ^ *(undefined1 (*) [16])(&DAT_03a0de84 + lVar16)) & auVar79;
  auVar87._8_8_ = uVar21;
  auVar87._0_8_ = auVar27._0_8_;
  *(long *)(param_1 + 0xd) = auVar91._8_8_;
  *(long *)(param_1 + 0xb) = auVar91._0_8_;
  uVar74 = *(uint *)(&DAT_03a0de94 + lVar16) & uVar1 | uVar74 & (uVar1 ^ 0xffffffff);
  uVar4 = *(uint *)(&DAT_03a0de98 + lVar16) & uVar1 | uVar4 & (uVar1 ^ 0xffffffff);
  param_1[0xf] = uVar74;
  param_1[0x10] = uVar4;
  auVar39 = auVar39 ^ (auVar39 ^ *(undefined1 (*) [16])(&DAT_03a0dea0 + lVar16)) & auVar87;
  uVar3 = *(uint *)(&DAT_03a0de9c + lVar16);
  *(long *)(param_1 + 0x14) = auVar39._8_8_;
  *(long *)(param_1 + 0x12) = auVar39._0_8_;
  auVar40._8_8_ = uVar21;
  auVar40._0_8_ = auVar27._0_8_;
  auVar72 = auVar72 ^ (auVar72 ^ *(undefined1 (*) [16])(&DAT_03a0deb0 + lVar16)) & auVar40;
  uVar2 = (int)(((uVar18 ^ 6) & 0xff) - 1) >> 0x1f;
  auVar58 = auVar58 ^ (auVar58 ^ *(undefined1 (*) [16])(&DAT_03a0dec0 + lVar16)) & auVar27;
  uVar3 = uVar3 & uVar1 | uVar7 & (uVar1 ^ 0xffffffff);
  auVar20._0_8_ = CONCAT44(uVar2,uVar2);
  auVar20._8_4_ = uVar2;
  auVar20._12_4_ = uVar2;
  uVar21 = auVar20._8_8_;
  auVar93._8_8_ = uVar21;
  auVar93._0_8_ = auVar20._0_8_;
  auVar68 = *(undefined1 (*) [16])(&DAT_03a0df18 + lVar16);
  auVar45 = *(undefined1 (*) [16])(&DAT_03a0df28 + lVar16);
  param_1[0x11] = uVar3;
  *(long *)(param_1 + 0x1c) = auVar58._8_8_;
  *(long *)(param_1 + 0x1a) = auVar58._0_8_;
  auVar77 = auVar72 ^ (auVar72 ^ auVar45) & auVar93;
  auVar41._4_12_ = auVar72._4_12_;
  auVar41._0_4_ = auVar72._8_4_;
  auVar43._0_8_ = auVar41._0_8_;
  auVar43._8_4_ = auVar72._12_4_;
  auVar43._12_4_ = auVar72._12_4_;
  auVar42._8_8_ = auVar43._8_8_;
  auVar42._4_4_ = auVar77._8_4_;
  auVar42._0_4_ = auVar72._8_4_;
  auVar44._0_12_ = auVar42._0_12_;
  auVar44._12_4_ = auVar77._12_4_;
  auVar45 = NEON_ext(auVar44,auVar77,4,1);
  *(long *)(param_1 + 0x18) = auVar45._0_8_;
  *(ulong *)(param_1 + 0x16) = CONCAT44(auVar72._4_4_,auVar77._0_4_);
  uVar22 = CONCAT44(uVar2,uVar2);
  uVar8 = *(uint *)(&DAT_03a0ded0 + lVar16) & uVar2 | uVar8 & (uVar2 ^ 0xffffffff);
  *param_1 = uVar8;
  uVar57 = uVar57 ^ (uVar57 ^ *(ulong *)(&DAT_03a0ded4 + lVar16)) & uVar22;
  *(ulong *)(param_1 + 1) = uVar57;
  uVar54 = uVar54 ^ (uVar54 ^ *(ulong *)(&DAT_03a0dedc + lVar16)) & uVar22;
  *(ulong *)(param_1 + 3) = uVar54;
  uVar70 = uVar70 ^ (uVar70 ^ *(ulong *)(&DAT_03a0dee4 + lVar16)) & uVar22;
  *(ulong *)(param_1 + 5) = uVar70;
  uVar55 = uVar55 ^ (uVar55 ^ *(ulong *)(&DAT_03a0deec + lVar16)) & uVar22;
  auVar56._8_8_ = uVar21;
  auVar56._0_8_ = auVar20._0_8_;
  *(ulong *)(param_1 + 7) = uVar55;
  uVar5 = *(uint *)(&DAT_03a0def4 + lVar16) & uVar2 | uVar5 & (uVar2 ^ 0xffffffff);
  param_1[9] = uVar5;
  auVar91 = auVar91 ^ (auVar91 ^ *(undefined1 (*) [16])(&DAT_03a0defc + lVar16)) & auVar56;
  uVar6 = *(uint *)(&DAT_03a0def8 + lVar16) & uVar2 | uVar6 & (uVar2 ^ 0xffffffff);
  param_1[10] = uVar6;
  auVar46._8_8_ = uVar21;
  auVar46._0_8_ = auVar20._0_8_;
  *(long *)(param_1 + 0xd) = auVar91._8_8_;
  *(long *)(param_1 + 0xb) = auVar91._0_8_;
  auVar39 = auVar39 ^ (auVar39 ^ auVar68) & auVar46;
  uVar74 = *(uint *)(&DAT_03a0df0c + lVar16) & uVar2 | uVar74 & (uVar2 ^ 0xffffffff);
  param_1[0xf] = uVar74;
  uVar9 = *(uint *)(&DAT_03a0df10 + lVar16) & uVar2 | uVar4 & (uVar2 ^ 0xffffffff);
  param_1[0x10] = uVar9;
  uVar1 = *(uint *)(&DAT_03a0df14 + lVar16);
  *(long *)(param_1 + 0x14) = auVar39._8_8_;
  *(long *)(param_1 + 0x12) = auVar39._0_8_;
  uVar3 = uVar1 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff);
  param_1[0x11] = uVar3;
  param_1[0x17] = auVar77._4_4_;
  param_1[0x19] = auVar77._12_4_;
  auVar58 = auVar58 ^ (auVar58 ^ *(undefined1 (*) [16])(&DAT_03a0df38 + lVar16)) & auVar20;
  uVar1 = (int)(((uVar18 ^ 7) & 0xff) - 1) >> 0x1f;
  uVar22 = CONCAT44(uVar1,uVar1);
  uVar57 = uVar57 ^ (uVar57 ^ *(ulong *)(&DAT_03a0df4c + lVar16)) & uVar22;
  *(ulong *)(param_1 + 1) = uVar57;
  uVar54 = uVar54 ^ (uVar54 ^ *(ulong *)(&DAT_03a0df54 + lVar16)) & uVar22;
  *(ulong *)(param_1 + 3) = uVar54;
  uVar70 = uVar70 ^ (uVar70 ^ *(ulong *)(&DAT_03a0df5c + lVar16)) & uVar22;
  *(ulong *)(param_1 + 5) = uVar70;
  auVar28._0_8_ = CONCAT44(uVar1,uVar1);
  auVar28._8_4_ = uVar1;
  auVar28._12_4_ = uVar1;
  auVar88._8_8_ = auVar28._8_8_;
  auVar88._0_8_ = auVar28._0_8_;
  auVar91 = auVar91 ^ (auVar91 ^ *(undefined1 (*) [16])(&DAT_03a0df74 + lVar16)) & auVar88;
  uVar55 = uVar55 ^ (uVar55 ^ *(ulong *)(&DAT_03a0df64 + lVar16)) & uVar22;
  auVar92._8_8_ = auVar28._8_8_;
  auVar92._0_8_ = auVar28._0_8_;
  *(long *)(param_1 + 0xd) = auVar91._8_8_;
  uVar75 = auVar91._0_8_;
  *(ulong *)(param_1 + 0xb) = uVar75;
  auVar39 = auVar39 ^ (auVar39 ^ *(undefined1 (*) [16])(&DAT_03a0df90 + lVar16)) & auVar92;
  auVar68 = *(undefined1 (*) [16])(&DAT_03a0dfa0 + lVar16);
  *(ulong *)(param_1 + 7) = uVar55;
  auVar77 = auVar77 ^ (auVar77 ^ auVar68) & auVar28;
  auVar68 = NEON_ext(auVar58,auVar58,4,1);
  uVar4 = (int)(((uVar18 ^ 8) & 0xff) - 1) >> 0x1f;
  uVar22 = auVar68._0_8_ ^ (auVar68._0_8_ ^ *(ulong *)(&DAT_03a0dfb4 + lVar16)) & uVar22;
  auVar68 = NEON_ext(auVar91,auVar91,8,1);
  uVar23 = CONCAT44(uVar4,uVar4);
  uVar57 = uVar57 ^ (uVar57 ^ *(ulong *)(&DAT_03a0dfc4 + lVar16)) & uVar23;
  uVar54 = uVar54 ^ (uVar54 ^ *(ulong *)(&DAT_03a0dfcc + lVar16)) & uVar23;
  uVar70 = uVar70 ^ (uVar70 ^ *(ulong *)(&DAT_03a0dfd4 + lVar16)) & uVar23;
  uVar55 = uVar55 ^ (uVar55 ^ *(ulong *)(&DAT_03a0dfdc + lVar16)) & uVar23;
  uVar75 = uVar75 ^ (uVar75 ^ *(ulong *)(&DAT_03a0dfec + lVar16)) & uVar23;
  uVar19 = param_3 >> 7 & 1;
  uVar7 = -uVar19;
  auVar89._0_8_ = CONCAT44(uVar4,uVar4);
  auVar89._8_4_ = uVar4;
  auVar89._12_4_ = uVar4;
  uVar19 = uVar19 - 1;
  uVar36 = auVar68._0_8_ ^ (auVar68._0_8_ ^ *(ulong *)(&DAT_03a0dff4 + lVar16)) & uVar23;
  auVar68 = *(undefined1 (*) [16])(&DAT_03a0e008 + lVar16);
  auVar45 = *(undefined1 (*) [16])(&DAT_03a0e018 + lVar16);
  *(long *)(param_1 + 0x14) = auVar39._8_8_;
  *(long *)(param_1 + 0x12) = auVar39._0_8_;
  auVar94._8_8_ = auVar89._8_8_;
  auVar94._0_8_ = auVar89._0_8_;
  *(long *)(param_1 + 0x1c) = auVar58._8_8_;
  *(long *)(param_1 + 0x1a) = auVar58._0_8_;
  auVar67 = auVar77 ^ (auVar77 ^ auVar45) & auVar89;
  uVar8 = *(uint *)(&DAT_03a0df48 + lVar16) & uVar1 | uVar8 & (uVar1 ^ 0xffffffff);
  *param_1 = uVar8;
  auVar39 = auVar39 ^ (auVar39 ^ auVar68) & auVar94;
  uVar5 = *(uint *)(&DAT_03a0df6c + lVar16) & uVar1 | uVar5 & (uVar1 ^ 0xffffffff);
  uVar6 = *(uint *)(&DAT_03a0df70 + lVar16) & uVar1 | uVar6 & (uVar1 ^ 0xffffffff);
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  uVar74 = *(uint *)(&DAT_03a0df84 + lVar16) & uVar1 | uVar74 & (uVar1 ^ 0xffffffff);
  uVar9 = *(uint *)(&DAT_03a0df88 + lVar16) & uVar1 | uVar9 & (uVar1 ^ 0xffffffff);
  param_1[0xf] = uVar74;
  param_1[0x10] = uVar9;
  uVar2 = *(uint *)(&DAT_03a0df8c + lVar16);
  *(long *)(param_1 + 0x18) = auVar77._8_8_;
  *(long *)(param_1 + 0x16) = auVar77._0_8_;
  uVar3 = uVar2 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff);
  param_1[0x11] = uVar3;
  auVar45._0_4_ = -auVar67._0_4_;
  auVar45._4_4_ = -auVar67._4_4_;
  auVar45._8_4_ = -auVar67._8_4_;
  auVar45._12_4_ = -auVar67._12_4_;
  uVar2 = *(uint *)(&DAT_03a0dfb0 + lVar16);
  *(ulong *)(param_1 + 0x1b) = uVar22;
  uVar2 = uVar2 & uVar1 | auVar58._0_4_ & (uVar1 ^ 0xffffffff);
  param_1[0x1a] = uVar2;
  uVar18 = *(uint *)(&DAT_03a0dfbc + lVar16) & uVar1 | auVar58._12_4_ & (uVar1 ^ 0xffffffff);
  param_1[0x1d] = uVar18;
  uVar23 = CONCAT44(uVar7,uVar7);
  uVar1 = *(uint *)(&DAT_03a0dfc0 + lVar16);
  *(ulong *)(param_1 + 1) = uVar57;
  *(ulong *)(param_1 + 3) = uVar54;
  *(ulong *)(param_1 + 5) = uVar70;
  *(ulong *)(param_1 + 7) = uVar55;
  uVar8 = uVar1 & uVar4 | uVar8 & (uVar4 ^ 0xffffffff);
  *param_1 = uVar8;
  uVar10 = *(uint *)(&DAT_03a0dfe4 + lVar16) & uVar4 | uVar5 & (uVar4 ^ 0xffffffff);
  param_1[9] = uVar10;
  uVar1 = *(uint *)(&DAT_03a0dfe8 + lVar16);
  *(ulong *)(param_1 + 0xb) = uVar75;
  *(ulong *)(param_1 + 0xd) = uVar36;
  uVar11 = uVar1 & uVar4 | uVar6 & (uVar4 ^ 0xffffffff);
  param_1[10] = uVar11;
  uVar12 = *(uint *)(&DAT_03a0dffc + lVar16) & uVar4 | uVar74 & (uVar4 ^ 0xffffffff);
  param_1[0xf] = uVar12;
  uVar9 = *(uint *)(&DAT_03a0e000 + lVar16) & uVar4 | uVar9 & (uVar4 ^ 0xffffffff);
  param_1[0x10] = uVar9;
  uVar1 = *(uint *)(&DAT_03a0e004 + lVar16);
  *(long *)(param_1 + 0x14) = auVar39._8_8_;
  *(long *)(param_1 + 0x12) = auVar39._0_8_;
  uVar13 = uVar1 & uVar4 | uVar3 & (uVar4 ^ 0xffffffff);
  param_1[0x11] = uVar13;
  uVar14 = *(uint *)(&DAT_03a0e028 + lVar16) & uVar4 | uVar2 & (uVar4 ^ 0xffffffff);
  uVar1 = (uVar11 ^ uVar8) & uVar7;
  uVar2 = (uVar12 ^ (uint)uVar70) & uVar7;
  uVar15 = *(uint *)(&DAT_03a0e02c + lVar16) & uVar4 | (uint)uVar22 & (uVar4 ^ 0xffffffff);
  uVar5 = *(uint *)(&DAT_03a0e030 + lVar16);
  uVar6 = *(uint *)(&DAT_03a0e034 + lVar16);
  *(ulong *)(param_1 + 1) = uVar57 ^ (uVar57 ^ uVar75) & uVar23;
  bVar47 = (byte)(uVar36 >> 8);
  bVar59 = (byte)(uVar54 >> 8);
  bVar48 = (byte)(uVar36 >> 0x10);
  bVar60 = (byte)(uVar54 >> 0x10);
  bVar49 = (byte)(uVar36 >> 0x18);
  bVar61 = (byte)(uVar54 >> 0x18);
  bVar50 = (byte)(uVar36 >> 0x20);
  bVar62 = (byte)(uVar54 >> 0x20);
  bVar51 = (byte)(uVar36 >> 0x28);
  bVar63 = (byte)(uVar54 >> 0x28);
  bVar52 = (byte)(uVar36 >> 0x30);
  bVar64 = (byte)(uVar54 >> 0x30);
  bVar53 = (byte)(uVar36 >> 0x38);
  bVar65 = (byte)(uVar54 >> 0x38);
  uVar25 = CONCAT17(bVar53 ^ bVar65,
                    CONCAT16(bVar52 ^ bVar64,
                             CONCAT15(bVar51 ^ bVar63,
                                      CONCAT14(bVar50 ^ bVar62,
                                               CONCAT13(bVar49 ^ bVar61,
                                                        CONCAT12(bVar48 ^ bVar60,
                                                                 CONCAT11(bVar47 ^ bVar59,
                                                                          (byte)uVar36 ^
                                                                          (byte)uVar54))))))) &
           uVar23;
  bVar29 = (byte)(uVar25 >> 8);
  bVar30 = (byte)(uVar25 >> 0x10);
  bVar31 = (byte)(uVar25 >> 0x18);
  bVar32 = (byte)(uVar25 >> 0x20);
  bVar33 = (byte)(uVar25 >> 0x28);
  bVar34 = (byte)(uVar25 >> 0x30);
  bVar35 = (byte)(uVar25 >> 0x38);
  *(ulong *)(param_1 + 3) =
       CONCAT17(bVar35 ^ bVar65,
                CONCAT16(bVar34 ^ bVar64,
                         CONCAT15(bVar33 ^ bVar63,
                                  CONCAT14(bVar32 ^ bVar62,
                                           CONCAT13(bVar31 ^ bVar61,
                                                    CONCAT12(bVar30 ^ bVar60,
                                                             CONCAT11(bVar29 ^ bVar59,
                                                                      (byte)uVar25 ^ (byte)uVar54)))
                                          ))));
  *param_1 = uVar1 ^ uVar8;
  uVar74 = (uint)(uVar70 >> 0x20);
  uVar3 = (uVar9 ^ uVar74) & uVar7;
  param_1[5] = uVar2 ^ (uint)uVar70;
  param_1[6] = uVar3 ^ uVar74;
  uVar74 = (auVar39._4_4_ ^ uVar10) & uVar7;
  param_1[9] = uVar74 ^ uVar10;
  param_1[10] = uVar1 ^ uVar11;
  param_1[0xf] = uVar2 ^ uVar12;
  param_1[0x10] = uVar3 ^ uVar9;
  bVar59 = (byte)(uVar55 >> 8);
  bVar60 = (byte)(uVar55 >> 0x10);
  bVar61 = (byte)(uVar55 >> 0x18);
  bVar62 = (byte)(uVar55 >> 0x20);
  bVar63 = (byte)(uVar55 >> 0x28);
  bVar64 = (byte)(uVar55 >> 0x30);
  bVar65 = (byte)(uVar55 >> 0x38);
  uVar54 = CONCAT17(auVar39[3] ^ bVar65,
                    CONCAT16(auVar39[2] ^ bVar64,
                             CONCAT15(auVar39[1] ^ bVar63,
                                      CONCAT14(auVar39[0] ^ bVar62,
                                               CONCAT13((byte)(uVar13 >> 0x18) ^ bVar61,
                                                        CONCAT12((byte)(uVar13 >> 0x10) ^ bVar60,
                                                                 CONCAT11((byte)(uVar13 >> 8) ^
                                                                          bVar59,(byte)uVar13 ^
                                                                                 (byte)uVar55)))))))
           & uVar23;
  uVar1 = uVar6 & uVar4 | uVar18 & (uVar4 ^ 0xffffffff);
  *(ulong *)(param_1 + 0xb) = uVar75 ^ (uVar75 ^ uVar57) & uVar23;
  *(ulong *)(param_1 + 0xd) =
       CONCAT17(bVar35 ^ bVar53,
                CONCAT16(bVar34 ^ bVar52,
                         CONCAT15(bVar33 ^ bVar51,
                                  CONCAT14(bVar32 ^ bVar50,
                                           CONCAT13(bVar31 ^ bVar49,
                                                    CONCAT12(bVar30 ^ bVar48,
                                                             CONCAT11(bVar29 ^ bVar47,
                                                                      (byte)uVar25 ^ (byte)uVar36)))
                                          ))));
  auVar72._4_4_ = uVar7;
  auVar72._0_4_ = uVar7;
  auVar72._8_4_ = uVar7;
  auVar72._12_4_ = uVar7;
  uVar2 = uVar5 & uVar4 | (uint)(uVar22 >> 0x20) & (uVar4 ^ 0xffffffff);
  auVar67 = auVar67 ^ (auVar67 ^ auVar45) & auVar72;
  param_1[0x11] = (uint)uVar54 ^ uVar13;
  param_1[0x12] = (uint)(uVar54 >> 0x20) ^ auVar39._0_4_;
  param_1[0x13] = uVar74 ^ auVar39._4_4_;
  param_1[0x14] = -auVar39._8_4_ & uVar7 | auVar39._8_4_ & uVar19;
  param_1[0x15] = -auVar39._12_4_ & uVar7 | auVar39._12_4_ & uVar19;
  param_1[0x1a] = -uVar14 & uVar7 | uVar14 & uVar19;
  *(ulong *)(param_1 + 7) =
       CONCAT17((byte)(uVar54 >> 0x38) ^ bVar65,
                CONCAT16((byte)(uVar54 >> 0x30) ^ bVar64,
                         CONCAT15((byte)(uVar54 >> 0x28) ^ bVar63,
                                  CONCAT14((byte)(uVar54 >> 0x20) ^ bVar62,
                                           CONCAT13((byte)(uVar54 >> 0x18) ^ bVar61,
                                                    CONCAT12((byte)(uVar54 >> 0x10) ^ bVar60,
                                                             CONCAT11((byte)(uVar54 >> 8) ^ bVar59,
                                                                      (byte)uVar54 ^ (byte)uVar55)))
                                          ))));
  param_1[0x1b] = -uVar15 & uVar7 | uVar15 & uVar19;
  param_1[0x1c] = -uVar2 & uVar7 | uVar2 & uVar19;
  *(long *)(param_1 + 0x18) = auVar67._8_8_;
  *(long *)(param_1 + 0x16) = auVar67._0_8_;
  param_1[0x1d] = -uVar1 & uVar7 | uVar1 & uVar19;
  return;
}


