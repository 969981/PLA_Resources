/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030d80c0; name: FUN_030d80c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030d80c0(undefined1 (*param_1) [12],undefined1 (*param_2) [12],float *param_3,
                 float *param_4,float *param_5,undefined8 *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar23;
  float fVar24;
  float fVar25;
  ulong uVar17;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar29;
  undefined1 auVar30 [12];
  float fVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar34;
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar39;
  float fVar40;
  undefined1 auVar37 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  float fVar52;
  undefined1 auVar51 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  int iVar59;
  int iVar65;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar66;
  float fVar67;
  float fVar70;
  ulong uVar68;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar69 [16];
  float fVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  undefined4 uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar106;
  float fVar107;
  undefined1 auVar108 [16];
  float fVar109;
  float fVar110;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined1 auVar111 [16];
  float fVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  int iVar119;
  int iVar120;
  undefined1 auVar121 [16];
  undefined1 local_110 [16];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 local_70;
  float fStack_68;
  float fStack_64;
  undefined8 local_60;
  float fStack_58;
  float fStack_54;
  
  fStack_58 = (float)*(undefined8 *)(*param_1 + 8);
  fVar56 = fStack_58;
  fStack_54 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  fVar91 = fStack_54;
  local_60 = *(undefined8 *)*param_1;
  fStack_68 = (float)*(undefined8 *)(*param_2 + 8);
  fVar96 = fStack_68;
  fStack_64 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  fVar97 = fStack_64;
  local_70 = *(undefined8 *)*param_2;
  fVar95 = (float)local_60;
  fVar54 = (float)((ulong)local_60 >> 0x20);
  auVar31._12_4_ = fStack_54;
  auVar31._0_12_ = *param_1;
  auVar43._12_4_ = fStack_54;
  auVar43._0_12_ = *param_1;
  auVar31 = NEON_ext(auVar31,auVar43,8,1);
  fVar38 = auVar31._4_4_ * auVar31._4_4_;
  uVar48 = NEON_ext(local_60,auVar31._0_8_,4,1);
  auVar31 = *(undefined1 (*) [16])(param_3 + 0x10);
  auVar43 = NEON_ext(auVar31,auVar31,8,1);
  uVar41 = NEON_ext(auVar31._0_8_,auVar43._0_8_,4,1);
  fVar16 = auVar31._0_4_;
  fVar25 = auVar31._4_4_;
  fVar11 = auVar31._8_4_;
  fVar57 = fVar38 + -0.5;
  fVar38 = fVar38 + -0.5;
  fVar66 = (float)((ulong)uVar48 >> 0x20);
  fVar29 = fVar95 * fVar16 + fVar54 * fVar25 + fStack_58 * fVar11;
  fVar33 = fVar95 * fVar16 + fVar54 * fVar25 + fStack_58 * fVar11;
  auVar44._0_4_ = fVar95 * (float)uVar41 - fVar16 * (float)uVar48;
  auVar44._4_4_ = fVar54 * (float)((ulong)uVar41 >> 0x20) - fVar25 * fVar66;
  auVar44._8_4_ = fStack_58 * fVar16 - fVar11 * fVar95;
  auVar44._12_4_ = fStack_54 * fVar25 - auVar31._12_4_ * fVar54;
  auVar43 = NEON_ext(auVar44,auVar44,4,1);
  fVar53 = (float)local_70;
  fVar55 = (float)((ulong)local_70 >> 0x20);
  fVar15 = fVar16 * fVar57 + fVar95 * fVar29 + auVar43._0_4_ * fStack_54;
  fVar23 = fVar25 * fVar38 + fVar54 * fVar33 + auVar43._4_4_ * fStack_54;
  fVar27 = fVar11 * fVar57 + fStack_58 * fVar29 + auVar44._0_4_ * fStack_54;
  fVar28 = auVar31._12_4_ * fVar38 + fStack_54 * fVar33 + auVar44._4_4_ * fStack_54;
  fVar15 = fVar15 + fVar15;
  fVar23 = fVar23 + fVar23;
  fVar27 = fVar27 + fVar27;
  fVar28 = fVar28 + fVar28;
  auVar31 = *(undefined1 (*) [16])(param_3 + 0x14);
  auVar35._12_4_ = fStack_64;
  auVar35._0_12_ = *param_2;
  auVar60._12_4_ = fStack_64;
  auVar60._0_12_ = *param_2;
  auVar43 = NEON_ext(auVar35,auVar60,8,1);
  uVar49 = NEON_ext(local_70,auVar43._0_8_,4,1);
  auVar35 = NEON_ext(auVar31,auVar31,8,1);
  uVar41 = NEON_ext(auVar31._0_8_,auVar35._0_8_,4,1);
  fVar24 = auVar43._4_4_ * auVar43._4_4_;
  fVar58 = fVar24 + -0.5;
  fVar24 = fVar24 + -0.5;
  fVar11 = auVar31._0_4_;
  fVar29 = auVar31._4_4_;
  fVar33 = auVar31._8_4_;
  fVar87 = (float)((ulong)uVar49 >> 0x20);
  fVar16 = fVar53 * fVar11 + fVar55 * fVar29 + fStack_68 * fVar33;
  fVar25 = fVar53 * fVar11 + fVar55 * fVar29 + fStack_68 * fVar33;
  auVar12._0_4_ = fVar53 * (float)uVar41 - fVar11 * (float)uVar49;
  auVar12._4_4_ = fVar55 * (float)((ulong)uVar41 >> 0x20) - fVar29 * fVar87;
  auVar12._8_4_ = fStack_68 * fVar11 - fVar33 * fVar53;
  auVar12._12_4_ = fStack_64 * fVar29 - auVar31._12_4_ * fVar55;
  auVar43 = NEON_ext(auVar12,auVar12,4,1);
  fVar11 = fVar11 * fVar58 + fVar53 * fVar16 + auVar43._0_4_ * fStack_64;
  fVar29 = fVar29 * fVar24 + fVar55 * fVar25 + auVar43._4_4_ * fStack_64;
  fVar16 = fVar33 * fVar58 + fStack_68 * fVar16 + auVar12._0_4_ * fStack_64;
  fVar25 = auVar31._12_4_ * fVar24 + fStack_64 * fVar25 + auVar12._4_4_ * fStack_64;
  fVar11 = fVar11 + fVar11;
  fVar29 = fVar29 + fVar29;
  auVar13._0_8_ = CONCAT44(fVar29,fVar11);
  auVar13._8_4_ = fVar16 + fVar16;
  auVar13._12_4_ = fVar25 + fVar25;
  uStack_88 = auVar13._8_8_;
  local_90 = auVar13._0_8_;
  local_80 = fVar15;
  fStack_7c = fVar23;
  fStack_78 = fVar27;
  fStack_74 = fVar28;
  FUN_030d68f0(&local_60,&local_70,&local_80,&local_90,param_4 + 8,param_5 + 8,local_110,&local_c0,
               &local_f0);
  auVar45._0_4_ = ABS(fStack_100);
  auVar45._4_4_ = ABS(fStack_fc);
  auVar45._8_4_ = ABS(fStack_f8);
  auVar45._12_4_ = ABS(fStack_f4);
  fVar71 = local_110._0_4_;
  auVar36._0_4_ = ABS(fVar71);
  fVar73 = local_110._4_4_;
  auVar36._4_4_ = ABS(fVar73);
  fVar75 = local_110._8_4_;
  auVar36._8_4_ = ABS(fVar75);
  fVar85 = local_110._12_4_;
  auVar36._12_4_ = ABS(fVar85);
  auVar31 = NEON_fmax(auVar36,auVar45,4);
  uVar41 = NEON_fmaxp(auVar31._0_8_,auVar31._0_8_,4);
  uVar41 = NEON_fmax(CONCAT44(auVar31._8_4_,auVar31._8_4_),uVar41,4);
  uVar42 = NEON_frecpe(uVar41,4);
  uVar50 = NEON_frecps(uVar41,uVar42,4);
  fVar16 = (float)uVar42 * (float)uVar50;
  fVar25 = (float)((ulong)uVar42 >> 0x20) * (float)((ulong)uVar50 >> 0x20);
  uVar42 = NEON_frecps(uVar41,CONCAT44(fVar25,fVar16),4);
  iVar59 = -(uint)((float)uVar41 == 0.0);
  iVar65 = -(uint)((float)((ulong)uVar41 >> 0x20) == 0.0);
  auVar31 = *(undefined1 (*) [16])(param_3 + 0x18);
  auVar43 = *(undefined1 (*) [16])(param_3 + 0x1c);
  fVar67 = auVar43._0_4_;
  fVar70 = auVar43._4_4_;
  fVar72 = auVar43._8_4_;
  fVar74 = auVar43._12_4_;
  auVar35 = NEON_ext(auVar31,auVar31,8,1);
  fVar34 = auVar31._0_4_;
  fVar39 = auVar31._4_4_;
  fVar94 = auVar31._8_4_;
  fVar40 = auVar31._12_4_;
  auVar60 = NEON_frecpe(local_110,4);
  uVar17 = CONCAT44(fVar25 * (float)((ulong)uVar42 >> 0x20),fVar16 * (float)uVar42) &
           CONCAT17(~(byte)((uint)iVar65 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar65 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar65 >> 8),
                                      CONCAT14(~(byte)iVar65,
                                               CONCAT13(~(byte)((uint)iVar59 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar59 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar59 >> 8)
                                                                          ,~(byte)iVar59)))))));
  uVar41 = NEON_ext(auVar31._0_8_,auVar35._0_8_,4,1);
  auVar31 = NEON_frecps(local_110,auVar60,4);
  auVar35 = NEON_ext(auVar43,auVar43,8,1);
  auVar61._0_4_ = auVar60._0_4_ * auVar31._0_4_;
  auVar61._4_4_ = auVar60._4_4_ * auVar31._4_4_;
  auVar61._8_4_ = auVar60._8_4_ * auVar31._8_4_;
  auVar61._12_4_ = auVar60._12_4_ * auVar31._12_4_;
  fVar47 = fVar96 * fVar72 + fVar53 * fVar67 + fVar55 * fVar70;
  fVar52 = fVar96 * fVar72 + fVar53 * fVar67 + fVar55 * fVar70;
  uVar50 = NEON_ext(auVar43._0_8_,auVar35._0_8_,4,1);
  fVar33 = (float)uVar17;
  fVar26 = (float)(uVar17 >> 0x20);
  uVar42 = CONCAT44(fVar74,fVar74);
  auVar46._8_8_ = _UNK_03889f38;
  auVar46._0_8_ = _DAT_03889f30;
  fVar16 = fVar56 * fVar94 + fVar95 * fVar34 + fVar54 * fVar39;
  fVar25 = fVar56 * fVar94 + fVar95 * fVar34 + fVar54 * fVar39;
  fVar86 = fVar95 * (float)uVar41 - (float)uVar48 * fVar34;
  fVar88 = fVar54 * (float)((ulong)uVar41 >> 0x20) - fVar66 * fVar39;
  fVar89 = fVar56 * fVar34 - fVar95 * fVar94;
  fVar90 = fVar91 * fVar39 - fVar54 * fVar40;
  auVar51._8_8_ = _UNK_03889f28;
  auVar51._0_8_ = _DAT_03889f20;
  fVar15 = (*(float *)(param_2[1] + 4) + (fVar11 - fVar15)) - *(float *)(param_1[1] + 4);
  fVar66 = (*(float *)(param_2[1] + 8) + (fVar29 - fVar23)) - *(float *)(param_1[1] + 8);
  fVar27 = (*(float *)param_2[2] + (auVar13._8_4_ - fVar27)) - *(float *)param_1[2];
  fVar28 = (*(float *)(param_2[2] + 4) + (auVar13._12_4_ - fVar28)) - *(float *)(param_1[2] + 4);
  uVar41 = NEON_frecpe(uVar42,4);
  uVar48 = NEON_frecps(uVar42,uVar41,4);
  auVar105._0_4_ = fVar53 * (float)uVar50 - (float)uVar49 * fVar67;
  auVar105._4_4_ = fVar55 * (float)((ulong)uVar50 >> 0x20) - fVar87 * fVar70;
  auVar105._8_4_ = fVar96 * fVar67 - fVar53 * fVar72;
  auVar105._12_4_ = fVar97 * fVar70 - fVar55 * fVar74;
  fVar102 = (float)uVar41 * (float)uVar48;
  fVar11 = (float)((ulong)uVar41 >> 0x20) * (float)((ulong)uVar48 >> 0x20);
  auVar35 = NEON_ext(auVar105,auVar105,4,1);
  auVar5._4_4_ = fVar88;
  auVar5._0_4_ = fVar86;
  auVar5._8_4_ = fVar89;
  auVar5._12_4_ = fVar90;
  auVar6._4_4_ = fVar88;
  auVar6._0_4_ = fVar86;
  auVar6._8_4_ = fVar89;
  auVar6._12_4_ = fVar90;
  auVar31 = NEON_ext(auVar5,auVar6,4,1);
  fVar87 = fVar15 * fVar15 + fVar66 * fVar66 + fVar27 * fVar27;
  fVar89 = fVar15 * fVar15 + fVar66 * fVar66 + fVar27 * fVar27;
  fVar98 = fStack_100 * fVar33;
  fVar99 = fStack_fc * fVar26;
  fVar100 = fStack_f8 * fVar33;
  fVar101 = fStack_f4 * fVar26;
  uVar41 = NEON_frecps(uVar42,CONCAT44(fVar11,fVar102),4);
  auVar9._4_4_ = fVar99;
  auVar9._0_4_ = fVar98;
  auVar9._8_4_ = fVar100;
  auVar9._12_4_ = fVar101;
  auVar43 = a64_TBL(ZEXT816(0),auVar9,auVar46);
  iVar59 = -(uint)(fVar74 == 0.0);
  iVar65 = -(uint)(fVar74 == 0.0);
  uVar42 = NEON_frsqrte(CONCAT44(fVar89,fVar87),4);
  fVar106 = (float)uVar42;
  fVar107 = (float)((ulong)uVar42 >> 0x20);
  auVar10._4_4_ = fVar99;
  auVar10._0_4_ = fVar98;
  auVar10._8_4_ = fVar100;
  auVar10._12_4_ = fVar101;
  auVar116 = a64_TBL(ZEXT816(0),auVar10,auVar51);
  fVar90 = fVar71 * fVar33;
  fVar92 = fVar73 * fVar26;
  fVar93 = fVar75 * fVar33;
  fVar11 = fVar11 * (float)((ulong)uVar41 >> 0x20);
  fVar109 = auVar43._0_4_;
  fVar103 = fVar109 * auVar116._0_4_;
  fVar112 = auVar43._4_4_;
  fVar113 = auVar43._8_4_;
  fVar114 = auVar43._12_4_;
  uVar42 = NEON_frsqrts(CONCAT44(fVar89,fVar87),CONCAT44(fVar107 * fVar107,fVar106 * fVar106),4);
  auVar7._4_4_ = fVar92;
  auVar7._0_4_ = fVar90;
  auVar7._8_4_ = fVar93;
  auVar7._12_4_ = fVar85 * fVar26;
  auVar108 = a64_TBL(ZEXT816(0),auVar7,auVar51);
  fVar106 = fVar106 * (float)uVar42;
  fVar107 = fVar107 * (float)((ulong)uVar42 >> 0x20);
  auVar8._4_4_ = fVar92;
  auVar8._0_4_ = fVar90;
  auVar8._8_4_ = fVar93;
  auVar8._12_4_ = fVar85 * fVar26;
  auVar111 = a64_TBL(ZEXT816(0),auVar8,auVar46);
  fVar110 = auVar111._0_4_ * auVar108._0_4_;
  fVar115 = fVar98 * fVar103;
  fVar29 = auVar31._0_4_ * fVar91 + fVar57 * fVar34 + fVar95 * fVar16;
  fVar23 = auVar31._4_4_ * fVar91 + fVar38 * fVar39 + fVar54 * fVar25;
  fVar56 = fVar86 * fVar91 + fVar57 * fVar94 + fVar56 * fVar16;
  fVar25 = fVar88 * fVar91 +
           fVar38 * fVar40 +
           fVar91 * (float)(CONCAT17((char)((uint)fVar25 >> 0x18),
                                     CONCAT16((char)((uint)fVar25 >> 0x10),
                                              CONCAT15((char)((uint)fVar25 >> 8),
                                                       CONCAT14(SUB41(fVar25,0),fVar16)))) >> 0x20);
  fVar16 = fVar90 * fVar109 * fVar109;
  fVar92 = fVar92 * fVar112 * fVar112;
  fVar93 = fVar93 * fVar113 * fVar113;
  fVar91 = fVar16 + fVar92 + fVar93;
  fVar93 = fVar16 + fVar92 + fVar93;
  fVar94 = auVar35._0_4_ * fVar97 + fVar58 * fVar67 + fVar53 * fVar47;
  fVar95 = auVar35._4_4_ * fVar97 + fVar24 * fVar70 + fVar55 * fVar52;
  fVar96 = auVar105._0_4_ * fVar97 + fVar58 * fVar72 + fVar96 * fVar47;
  fVar97 = auVar105._4_4_ * fVar97 + fVar24 * fVar74 + fVar97 * fVar52;
  fVar47 = fVar90 * fVar110 + fVar115 + fVar115;
  auVar117._0_8_ = CONCAT44(-(uint)(1.4210855e-14 < fVar89),-(uint)(1.4210855e-14 < fVar87));
  uVar48 = CONCAT44(fVar47 - fVar93,fVar47 - fVar91);
  uVar42 = NEON_frsqrts(CONCAT44(fVar89,fVar87),CONCAT44(fVar107 * fVar107,fVar106 * fVar106),4);
  uVar17 = CONCAT17((char)((uint)fVar11 >> 0x18),
                    CONCAT16((char)((uint)fVar11 >> 0x10),
                             CONCAT15((char)((uint)fVar11 >> 8),
                                      CONCAT14(SUB41(fVar11,0),fVar102 * (float)uVar41)))) &
           CONCAT17(~(byte)((uint)iVar65 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar65 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar65 >> 8),
                                      CONCAT14(~(byte)iVar65,
                                               CONCAT13(~(byte)((uint)iVar59 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar59 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar59 >> 8)
                                                                          ,~(byte)iVar59)))))));
  iVar59 = -(uint)(fVar87 <= 0.0);
  iVar65 = -(uint)(fVar89 <= 0.0);
  uVar49 = NEON_frecpe(uVar48,4);
  auVar117._8_8_ = auVar117._0_8_;
  fVar106 = (float)uVar42 * fVar106;
  fVar107 = (float)((ulong)uVar42 >> 0x20) * fVar107;
  bVar76 = SUB41(fVar106,0) & ~(byte)iVar59;
  bVar77 = (byte)((uint)fVar106 >> 8) & ~(byte)((uint)iVar59 >> 8);
  bVar78 = (byte)((uint)fVar106 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
  bVar79 = (byte)((uint)fVar106 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
  bVar80 = SUB41(fVar107,0) & ~(byte)iVar65;
  bVar81 = (byte)((uint)fVar107 >> 8) & ~(byte)((uint)iVar65 >> 8);
  bVar82 = (byte)((uint)fVar107 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
  bVar83 = (byte)((uint)fVar107 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
  fVar87 = fVar87 * (float)CONCAT13(bVar79,CONCAT12(bVar78,CONCAT11(bVar77,bVar76)));
  fVar89 = fVar89 * (float)CONCAT13(bVar83,CONCAT12(bVar82,CONCAT11(bVar81,bVar80)));
  fVar16 = (float)CONCAT13(bVar79,CONCAT12(bVar78,CONCAT11(bVar77,bVar76)));
  uVar84 = (undefined4)((ulong)_UNK_03889a88 >> 0x20);
  uVar41 = NEON_frecps(uVar48,uVar49,4);
  auVar1._4_4_ = fVar66 * (float)CONCAT13(bVar83,CONCAT12(bVar82,CONCAT11(bVar81,bVar80)));
  auVar1._0_4_ = fVar15 * (float)CONCAT13(bVar79,CONCAT12(bVar78,CONCAT11(bVar77,bVar76)));
  auVar1._8_4_ = fVar27 * fVar16;
  auVar1._12_4_ =
       fVar28 * (float)(CONCAT17(bVar83,CONCAT16(bVar82,CONCAT15(bVar81,CONCAT14(bVar80,fVar16))))
                       >> 0x20);
  auVar3._8_4_ = (int)_UNK_03889a88;
  auVar3._0_8_ = _DAT_03889a80;
  auVar3._12_4_ = uVar84;
  auVar118._8_4_ = (int)_UNK_03889a88;
  auVar118._0_8_ = _DAT_03889a80;
  auVar118._12_4_ = uVar84;
  auVar118 = auVar118 ^ (auVar3 ^ auVar1) & auVar117;
  fVar34 = (float)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20);
  fVar38 = (float)*(undefined8 *)(param_3 + 0xe);
  fVar39 = (float)((ulong)*(undefined8 *)(param_3 + 0xe) >> 0x20);
  fVar15 = ((fVar15 - (fVar29 + fVar29)) - (fVar94 + fVar94)) * fVar39;
  fVar23 = ((fVar66 - (fVar23 + fVar23)) - (fVar95 + fVar95)) * fVar39;
  fVar24 = ((fVar27 - (fVar56 + fVar56)) - (fVar96 + fVar96)) * fVar39;
  fVar27 = ((fVar28 - (fVar25 + fVar25)) - (fVar97 + fVar97)) * fVar39;
  fVar53 = auVar118._0_4_;
  fVar54 = auVar118._4_4_;
  fVar55 = auVar118._8_4_;
  fVar57 = auVar118._12_4_;
  fVar11 = (float)uVar49 * (float)uVar41;
  fVar96 = (float)((ulong)uVar49 >> 0x20) * (float)((ulong)uVar41 >> 0x20);
  auVar60 = a64_TBL(ZEXT816(0),auVar118,auVar46);
  fVar94 = (float)*(undefined8 *)(param_3 + 4);
  auVar104._0_4_ = fVar94 * fVar53;
  fVar66 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
  auVar104._4_4_ = fVar66 * fVar54;
  fVar52 = (float)*(undefined8 *)(param_3 + 6);
  auVar104._8_4_ = fVar52 * fVar55;
  fVar95 = (float)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20);
  auVar104._12_4_ = fVar95 * fVar57;
  uVar17 = NEON_fmax(CONCAT44(fVar89 * (float)(uVar17 >> 0x20) - fVar34,
                              fVar87 * (float)uVar17 - fVar34),0,4);
  fVar16 = (float)*(undefined8 *)(param_3 + 0xc);
  fVar25 = (float)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
  uVar17 = uVar17 & CONCAT44(-(uint)(0.0 < fVar89 - fVar40),-(uint)(0.0 < fVar87 - fVar40));
  uVar41 = NEON_frecps(uVar48,CONCAT44(fVar96,fVar11),4);
  iVar59 = -(uint)(fVar71 == 0.0);
  iVar65 = -(uint)(fVar73 == 0.0);
  iVar119 = -(uint)(fVar75 == 0.0);
  iVar120 = -(uint)(fVar85 == 0.0);
  auVar121._4_4_ = fVar23;
  auVar121._0_4_ = fVar15;
  auVar121._8_4_ = fVar24;
  auVar121._12_4_ = fVar27;
  auVar121 = a64_TBL(ZEXT816(0),auVar121,auVar46);
  auVar35 = a64_TBL(ZEXT816(0),auVar104,auVar51);
  auVar31 = NEON_frecps(local_110,auVar61,4);
  uVar68 = CONCAT44(fVar96 * (float)((ulong)uVar41 >> 0x20),fVar11 * (float)uVar41) &
           CONCAT44(-(uint)(1.1920929e-07 < ABS(fVar47 - fVar93)),
                    -(uint)(1.1920929e-07 < ABS(fVar47 - fVar91)));
  fVar33 = fVar33 * (float)uVar68;
  fVar26 = fVar26 * (float)(uVar68 >> 0x20);
  auVar69._0_4_ = fVar16 * fVar53;
  auVar69._4_4_ = fVar25 * fVar54;
  auVar69._8_4_ = fVar38 * fVar55;
  auVar69._12_4_ = fVar39 * fVar57;
  auVar43 = a64_TBL(ZEXT816(0),auVar69,auVar51);
  fVar28 = (fVar103 - fVar98 * auVar108._0_4_) * fVar33;
  fVar71 = (fVar112 * auVar116._4_4_ - fVar99 * auVar108._4_4_) * fVar26;
  fVar73 = (fVar113 * auVar116._8_4_ - fVar100 * auVar108._8_4_) * fVar33;
  fVar75 = (fVar114 * auVar116._12_4_ - fVar101 * auVar108._12_4_) * fVar26;
  fVar11 = fVar23 * fVar71;
  fVar96 = auVar61._0_4_ * auVar31._0_4_;
  fVar56 = auVar61._4_4_ * auVar31._4_4_;
  fVar91 = auVar61._8_4_ * auVar31._8_4_;
  fVar29 = auVar61._12_4_ * auVar31._12_4_;
  fVar97 = (float)CONCAT13((byte)((uint)fVar96 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                           CONCAT12((byte)((uint)fVar96 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10),
                                    CONCAT11((byte)((uint)fVar96 >> 8) & ~(byte)((uint)iVar59 >> 8),
                                             SUB41(fVar96,0) & ~(byte)iVar59)));
  auVar30._0_8_ =
       CONCAT17((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                CONCAT16((byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10),
                         CONCAT15((byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar65 >> 8),
                                  CONCAT14(SUB41(fVar56,0) & ~(byte)iVar65,fVar97))));
  auVar30[8] = SUB41(fVar91,0) & ~(byte)iVar119;
  auVar30[9] = (byte)((uint)fVar91 >> 8) & ~(byte)((uint)iVar119 >> 8);
  auVar30[10] = (byte)((uint)fVar91 >> 0x10) & ~(byte)((uint)iVar119 >> 0x10);
  auVar30[0xb] = (byte)((uint)fVar91 >> 0x18) & ~(byte)((uint)iVar119 >> 0x18);
  auVar32[0xc] = SUB41(fVar29,0) & ~(byte)iVar120;
  auVar32._0_12_ = auVar30;
  auVar32[0xd] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar120 >> 8);
  auVar32[0xe] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar120 >> 0x10);
  auVar32[0xf] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar120 >> 0x18);
  auVar4[4] = SUB41(fVar11,0);
  auVar4._0_4_ = fVar15 * fVar28;
  auVar4[5] = (char)((uint)fVar11 >> 8);
  auVar4[6] = (char)((uint)fVar11 >> 0x10);
  auVar4[7] = (char)((uint)fVar11 >> 0x18);
  auVar4._8_4_ = fVar24 * fVar73;
  auVar4._12_4_ = fVar27 * fVar75;
  auVar31 = a64_TBL(ZEXT816(0),auVar4,auVar51);
  fVar11 = ABS(fVar94 * auVar60._0_4_ + *param_3 * fVar53 + auVar35._0_4_);
  fVar96 = ABS(fVar66 * auVar60._4_4_ + param_3[1] * fVar54 + auVar35._4_4_);
  fVar29 = ABS(fVar52 * auVar60._8_4_ + param_3[2] * fVar55 + auVar35._8_4_);
  fVar85 = ABS(fVar95 * auVar60._12_4_ + param_3[3] * fVar57 + auVar35._12_4_);
  auVar18._0_4_ =
       fVar15 * (fVar110 - fVar109 * fVar109) * fVar33 + fVar28 * auVar121._0_4_ + auVar31._0_4_;
  auVar18._4_4_ =
       fVar23 * (auVar111._4_4_ * auVar108._4_4_ - fVar112 * fVar112) * fVar26 +
       fVar71 * auVar121._4_4_ + auVar31._4_4_;
  auVar18._8_4_ =
       fVar24 * (auVar111._8_4_ * auVar108._8_4_ - fVar113 * fVar113) * fVar33 +
       fVar73 * auVar121._8_4_ + auVar31._8_4_;
  auVar18._12_4_ =
       fVar27 * (auVar111._12_4_ * auVar108._12_4_ - fVar114 * fVar114) * fVar26 +
       fVar75 * auVar121._12_4_ + auVar31._12_4_;
  fVar56 = (float)uVar17;
  fVar91 = (float)(uVar17 >> 0x20);
  auVar35 = a64_TBL(ZEXT816(0),auVar18,auVar46);
  auVar19._0_4_ = fStack_100 * auVar18._0_4_;
  auVar19._4_4_ = fStack_fc * auVar18._4_4_;
  auVar19._8_4_ = fStack_f8 * auVar18._8_4_;
  auVar19._12_4_ = fStack_f4 * auVar18._12_4_;
  auVar37._0_4_ =
       fVar11 + (ABS(fVar16 * auVar60._0_4_ + (float)*(undefined8 *)(param_3 + 8) * fVar53 +
                     auVar43._0_4_) - fVar11) * fVar56;
  auVar37._4_4_ =
       fVar96 + (ABS(fVar25 * auVar60._4_4_ +
                     (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20) * fVar54 + auVar43._4_4_)
                - fVar96) * fVar91;
  auVar37._8_4_ =
       fVar29 + (ABS(fVar38 * auVar60._8_4_ + (float)*(undefined8 *)(param_3 + 10) * fVar55 +
                     auVar43._8_4_) - fVar29) * fVar56;
  auVar37._12_4_ =
       fVar85 + (ABS(fVar39 * auVar60._12_4_ + fVar34 * fVar57 + auVar43._12_4_) - fVar85) * fVar91;
  auVar31 = a64_TBL(ZEXT816(0),auVar19,auVar51);
  fVar33 = -auVar37._0_4_;
  fVar26 = -auVar37._4_4_;
  fVar28 = -auVar37._8_4_;
  fVar16 = *param_4;
  fVar25 = param_4[1];
  fVar11 = param_4[2];
  fVar96 = param_4[3];
  auVar20._0_4_ = fVar97 * (fVar15 - (fStack_100 * auVar35._0_4_ + auVar31._0_4_));
  fVar56 = (float)((ulong)auVar30._0_8_ >> 0x20);
  auVar20._4_4_ = fVar56 * (fVar23 - (fStack_fc * auVar35._4_4_ + auVar31._4_4_));
  fVar91 = auVar30._8_4_;
  auVar20._8_4_ = fVar91 * (fVar24 - (fStack_f8 * auVar35._8_4_ + auVar31._8_4_));
  fVar29 = auVar32._12_4_;
  auVar20._12_4_ = fVar29 * (fVar27 - (fStack_f4 * auVar35._12_4_ + auVar31._12_4_));
  auVar31 = NEON_fmin(auVar20,auVar37,4);
  auVar108._4_4_ = fVar26;
  auVar108._0_4_ = fVar33;
  auVar108._8_4_ = fVar28;
  auVar108._12_4_ = auVar37._12_4_;
  auVar31 = NEON_fmax(auVar31,auVar108,4);
  auVar62._0_4_ = fStack_100 * auVar31._0_4_;
  auVar62._4_4_ = fStack_fc * auVar31._4_4_;
  auVar62._8_4_ = fStack_f8 * auVar31._8_4_;
  auVar62._12_4_ = fStack_f4 * auVar31._12_4_;
  auVar31 = a64_TBL(ZEXT816(0),auVar31,auVar46);
  auVar43 = a64_TBL(ZEXT816(0),auVar62,auVar51);
  auVar21._0_4_ = fVar97 * (fVar15 - (fStack_100 * auVar31._0_4_ + auVar43._0_4_));
  auVar21._4_4_ = fVar56 * (fVar23 - (fStack_fc * auVar31._4_4_ + auVar43._4_4_));
  auVar21._8_4_ = fVar91 * (fVar24 - (fStack_f8 * auVar31._8_4_ + auVar43._8_4_));
  auVar21._12_4_ = fVar29 * (fVar27 - (fStack_f4 * auVar31._12_4_ + auVar43._12_4_));
  auVar31 = NEON_fmin(auVar21,auVar37,4);
  auVar111._4_4_ = fVar26;
  auVar111._0_4_ = fVar33;
  auVar111._8_4_ = fVar28;
  auVar111._12_4_ = auVar37._12_4_;
  auVar31 = NEON_fmax(auVar31,auVar111,4);
  auVar63._0_4_ = fStack_100 * auVar31._0_4_;
  auVar63._4_4_ = fStack_fc * auVar31._4_4_;
  auVar63._8_4_ = fStack_f8 * auVar31._8_4_;
  auVar63._12_4_ = fStack_f4 * auVar31._12_4_;
  auVar31 = a64_TBL(ZEXT816(0),auVar31,auVar46);
  auVar43 = a64_TBL(ZEXT816(0),auVar63,auVar51);
  auVar22._0_4_ = fVar97 * (fVar15 - (fStack_100 * auVar31._0_4_ + auVar43._0_4_));
  auVar22._4_4_ = fVar56 * (fVar23 - (fStack_fc * auVar31._4_4_ + auVar43._4_4_));
  auVar22._8_4_ = fVar91 * (fVar24 - (fStack_f8 * auVar31._8_4_ + auVar43._8_4_));
  auVar22._12_4_ = fVar29 * (fVar27 - (fStack_f4 * auVar31._12_4_ + auVar43._12_4_));
  auVar31 = NEON_fmin(auVar22,auVar37,4);
  auVar116._4_4_ = fVar26;
  auVar116._0_4_ = fVar33;
  auVar116._8_4_ = fVar28;
  auVar116._12_4_ = auVar37._12_4_;
  auVar31 = NEON_fmax(auVar31,auVar116,4);
  auVar64._0_4_ = fStack_100 * auVar31._0_4_;
  auVar64._4_4_ = fStack_fc * auVar31._4_4_;
  auVar64._8_4_ = fStack_f8 * auVar31._8_4_;
  auVar64._12_4_ = fStack_f4 * auVar31._12_4_;
  auVar31 = a64_TBL(ZEXT816(0),auVar31,auVar46);
  auVar43 = a64_TBL(ZEXT816(0),auVar64,auVar51);
  auVar14._0_4_ = fVar97 * (fVar15 - (fStack_100 * auVar31._0_4_ + auVar43._0_4_));
  auVar14._4_4_ = fVar56 * (fVar23 - (fStack_fc * auVar31._4_4_ + auVar43._4_4_));
  auVar14._8_4_ = fVar91 * (fVar24 - (fStack_f8 * auVar31._8_4_ + auVar43._8_4_));
  auVar14._12_4_ = fVar29 * (fVar27 - (fStack_f4 * auVar31._12_4_ + auVar43._12_4_));
  auVar31 = NEON_fmin(auVar14,auVar37,4);
  auVar2._4_4_ = fVar26;
  auVar2._0_4_ = fVar33;
  auVar2._8_4_ = fVar28;
  auVar2._12_4_ = auVar37._12_4_;
  auVar31 = NEON_fmax(auVar31,auVar2,4);
  fVar73 = auVar31._0_4_;
  fVar75 = auVar31._4_4_;
  uVar49 = *(undefined8 *)(param_4 + 6);
  uVar48 = *(undefined8 *)(param_4 + 4);
  uVar42 = *(undefined8 *)(param_4 + 10);
  fVar34 = (float)((ulong)uVar42 >> 0x20);
  uVar41 = *(undefined8 *)(param_4 + 8);
  fVar85 = auVar31._8_4_;
  fVar97 = param_5[8];
  fVar56 = param_5[9];
  fVar91 = param_5[10];
  fVar29 = param_5[0xb];
  fVar38 = (float)((ulong)*(undefined8 *)(param_3 + 0x12) >> 0x20);
  fVar39 = (float)((ulong)*(undefined8 *)(param_3 + 0x16) >> 0x20);
  fVar15 = *param_5;
  fVar33 = param_5[1];
  fVar23 = param_5[2];
  fVar24 = param_5[3];
  fVar26 = param_5[4];
  fVar27 = param_5[5];
  fVar28 = param_5[6];
  fVar71 = param_5[7];
  *param_6 = CONCAT44(fVar75 + (float)((ulong)*param_6 >> 0x20),fVar73 + (float)*param_6);
  *(float *)(param_6 + 1) = fVar85 + *(float *)(param_6 + 1);
  param_5[2] = fVar23 - fVar85 * fVar29;
  param_5[3] = fVar24 - auVar31._12_4_ * fVar29;
  *param_5 = fVar15 - fVar73 * fVar29;
  param_5[1] = fVar33 - fVar75 * fVar29;
  param_4[2] = fVar85 * fVar34 + fVar11;
  param_4[3] = auVar31._12_4_ * fVar34 + fVar96;
  *param_4 = fVar73 * fVar34 + fVar16;
  param_4[1] = fVar75 * fVar34 + fVar25;
  param_4[6] = (fStack_98 * fVar85 + fStack_b8 * fVar73 + fStack_a8 * fVar75) * fVar38 *
               (float)uVar42 + (float)uVar49;
  param_4[7] = (fStack_94 * fVar85 + fStack_b4 * fVar73 + fStack_a4 * fVar75) * fVar38 * fVar34 +
               (float)((ulong)uVar49 >> 0x20);
  param_4[4] = (local_a0 * fVar85 + local_c0 * fVar73 + fStack_b0 * fVar75) * fVar38 * (float)uVar41
               + (float)uVar48;
  param_4[5] = (fStack_9c * fVar85 + fStack_bc * fVar73 + fStack_ac * fVar75) * fVar38 *
               (float)((ulong)uVar41 >> 0x20) + (float)((ulong)uVar48 >> 0x20);
  param_5[6] = fVar28 - (fStack_c8 * fVar85 + fStack_e8 * fVar73 + (float)uStack_d8 * fVar75) *
                        fVar39 * fVar91;
  param_5[7] = fVar71 - (fStack_c4 * fVar85 +
                        fStack_e4 * fVar73 + (float)((ulong)uStack_d8 >> 0x20) * fVar75) * fVar39 *
                        fVar29;
  param_5[4] = fVar26 - (local_d0 * fVar85 + local_f0 * fVar73 + (float)uStack_e0 * fVar75) * fVar39
                        * fVar97;
  param_5[5] = fVar27 - (fStack_cc * fVar85 +
                        fStack_ec * fVar73 + (float)((ulong)uStack_e0 >> 0x20) * fVar75) * fVar39 *
                        fVar56;
  return;
}


