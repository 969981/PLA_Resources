/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183cc14; name: FUN_0183cc14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0183cc14(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4,float *param_5,undefined4 *param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined3 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long lVar20;
  float fVar21;
  float extraout_s0;
  float fVar22;
  undefined1 auVar23 [12];
  float extraout_var;
  float fVar26;
  float extraout_var_00;
  float fVar27;
  float extraout_var_01;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 uVar29;
  undefined1 uVar30;
  byte bVar31;
  undefined1 uVar32;
  byte bVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined7 uVar47;
  undefined1 auVar48 [12];
  byte bVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar54;
  int iVar55;
  undefined4 uVar56;
  float fVar65;
  int iVar67;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar66;
  int iVar68;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  int iVar76;
  undefined8 uVar69;
  undefined8 uVar70;
  int iVar77;
  float fVar78;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar79;
  float fVar90;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined4 uVar91;
  undefined8 uVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined8 uVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined8 uVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined8 uVar106;
  float fVar107;
  float fVar108;
  undefined8 uVar109;
  float fVar110;
  undefined8 uVar111;
  float fVar112;
  undefined8 uVar113;
  float fVar114;
  undefined8 uVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  undefined8 uVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  undefined8 uVar125;
  undefined8 uVar126;
  undefined8 uVar127;
  undefined8 uVar128;
  float fVar129;
  undefined1 auVar130 [16];
  float fStack_48;
  float fStack_44;
  long *local_28;
  
  uVar45 = param_2[0xf];
  uVar43 = param_2[0xe];
  uVar41 = param_2[0xd];
  uVar40 = param_2[0xc];
  uVar38 = param_2[0xb];
  uVar36 = param_2[10];
  uVar35 = param_2[9];
  uVar46 = param_2[8];
  uVar44 = param_2[7];
  uVar42 = param_2[6];
  uVar39 = param_2[5];
  uVar37 = param_2[4];
  uVar34 = param_2[3];
  uVar32 = param_2[2];
  uVar30 = param_2[1];
  uVar29 = param_2[0];
  FUN_009c69bc(&local_28);
  (**(code **)(*local_28 + 0x40))();
  uVar98 = DAT_0388a880;
  auVar57._0_4_ = extraout_s0 * extraout_s0;
  auVar57._4_4_ = extraout_var * extraout_var;
  auVar57._8_4_ = extraout_var_00 * extraout_var_00;
  auVar57._12_4_ = extraout_var_01 * extraout_var_01;
  auVar71 = NEON_ext(auVar57,auVar57,8,1);
  fVar54 = auVar71._0_4_ + auVar57._0_4_;
  fVar65 = auVar71._4_4_ + auVar57._4_4_;
  fVar21 = fVar54 + fVar65;
  fVar54 = fVar54 + fVar65;
  auVar58._8_8_ = CONCAT44(fVar54,fVar21);
  auVar58._0_8_ = CONCAT44(fVar54,fVar21);
  auVar71 = NEON_frsqrte(auVar58,4);
  auVar80._0_4_ = auVar71._0_4_ * fVar21;
  auVar80._4_4_ = auVar71._4_4_ * fVar54;
  auVar80._8_4_ = auVar71._8_4_ * fVar21;
  auVar80._12_4_ = auVar71._12_4_ * fVar54;
  auVar81 = NEON_frsqrts(auVar71,auVar80,4);
  auVar72._0_4_ = auVar71._0_4_ * auVar81._0_4_;
  auVar72._4_4_ = auVar71._4_4_ * auVar81._4_4_;
  auVar72._8_4_ = auVar71._8_4_ * auVar81._8_4_;
  auVar72._12_4_ = auVar71._12_4_ * auVar81._12_4_;
  auVar82._0_4_ = fVar21 * auVar72._0_4_;
  auVar82._4_4_ = fVar54 * auVar72._4_4_;
  auVar82._8_4_ = fVar21 * auVar72._8_4_;
  auVar82._12_4_ = fVar54 * auVar72._12_4_;
  iVar55 = -(uint)(fVar21 == 0.0);
  iVar66 = -(uint)(fVar54 == 0.0);
  iVar67 = -(uint)(fVar21 == 0.0);
  iVar68 = -(uint)(fVar54 == 0.0);
  auVar71 = NEON_frsqrts(auVar72,auVar82,4);
  fVar21 = extraout_s0 * auVar72._0_4_ * auVar71._0_4_;
  fVar54 = extraout_var * auVar72._4_4_ * auVar71._4_4_;
  fVar65 = extraout_var_00 * auVar72._8_4_ * auVar71._8_4_;
  fVar28 = extraout_var_01 * auVar72._12_4_ * auVar71._12_4_;
  fVar120 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                            CONCAT12((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                                     CONCAT11((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar55 >> 8)
                                              ,SUB41(fVar21,0) & ~(byte)iVar55)));
  auVar59._0_8_ =
       CONCAT17((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                CONCAT16((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                         CONCAT15((byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar66 >> 8),
                                  CONCAT14(SUB41(fVar54,0) & ~(byte)iVar66,fVar120))));
  auVar59[8] = SUB41(fVar65,0) & ~(byte)iVar67;
  auVar59[9] = (byte)((uint)fVar65 >> 8) & ~(byte)((uint)iVar67 >> 8);
  auVar59[10] = (byte)((uint)fVar65 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
  auVar59[0xb] = (byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
  auVar59[0xc] = SUB41(fVar28,0) & ~(byte)iVar68;
  auVar59[0xd] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar68 >> 8);
  auVar59[0xe] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
  auVar59[0xf] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
  auVar73._0_4_ =
       (float)CONCAT13(uVar34,CONCAT12(uVar32,CONCAT11(uVar30,uVar29))) *
       (float)CONCAT13(uVar34,CONCAT12(uVar32,CONCAT11(uVar30,uVar29)));
  auVar73._4_4_ =
       (float)CONCAT13(uVar44,CONCAT12(uVar42,CONCAT11(uVar39,uVar37))) *
       (float)CONCAT13(uVar44,CONCAT12(uVar42,CONCAT11(uVar39,uVar37)));
  auVar73._8_4_ =
       (float)CONCAT13(uVar38,CONCAT12(uVar36,CONCAT11(uVar35,uVar46))) *
       (float)CONCAT13(uVar38,CONCAT12(uVar36,CONCAT11(uVar35,uVar46)));
  auVar73._12_4_ =
       (float)CONCAT13(uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar40))) *
       (float)CONCAT13(uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar40)));
  auVar71 = NEON_ext(auVar73,auVar73,8,1);
  fVar54 = auVar71._0_4_ + auVar73._0_4_;
  fVar65 = auVar71._4_4_ + auVar73._4_4_;
  fVar21 = fVar54 + fVar65;
  fVar54 = fVar54 + fVar65;
  auVar74._8_8_ = CONCAT44(fVar54,fVar21);
  auVar74._0_8_ = CONCAT44(fVar54,fVar21);
  auVar71 = NEON_frsqrte(auVar74,4);
  auVar93._0_4_ = auVar71._0_4_ * fVar21;
  auVar93._4_4_ = auVar71._4_4_ * fVar54;
  auVar93._8_4_ = auVar71._8_4_ * fVar21;
  auVar93._12_4_ = auVar71._12_4_ * fVar54;
  auVar81 = NEON_frsqrts(auVar71,auVar93,4);
  auVar83._0_4_ = auVar71._0_4_ * auVar81._0_4_;
  auVar83._4_4_ = auVar71._4_4_ * auVar81._4_4_;
  auVar83._8_4_ = auVar71._8_4_ * auVar81._8_4_;
  auVar83._12_4_ = auVar71._12_4_ * auVar81._12_4_;
  auVar94._0_4_ = fVar21 * auVar83._0_4_;
  auVar94._4_4_ = fVar54 * auVar83._4_4_;
  auVar94._8_4_ = fVar21 * auVar83._8_4_;
  auVar94._12_4_ = fVar54 * auVar83._12_4_;
  iVar68 = -(uint)(fVar21 == 0.0);
  iVar76 = -(uint)(fVar54 == 0.0);
  iVar77 = -(uint)(fVar21 == 0.0);
  auVar71 = NEON_frsqrts(auVar83,auVar94,4);
  fVar65 = (float)CONCAT13(uVar34,CONCAT12(uVar32,CONCAT11(uVar30,uVar29))) *
           auVar83._0_4_ * auVar71._0_4_;
  fVar21 = (float)CONCAT13(uVar44,CONCAT12(uVar42,CONCAT11(uVar39,uVar37))) *
           auVar83._4_4_ * auVar71._4_4_;
  fVar54 = (float)CONCAT13(uVar38,CONCAT12(uVar36,CONCAT11(uVar35,uVar46))) *
           auVar83._8_4_ * auVar71._8_4_;
  bVar31 = (byte)((uint)fVar65 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
  bVar33 = (byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
  fVar22 = param_3._0_4_;
  auVar84._0_4_ = fVar22 * fVar22;
  fVar26 = param_3._4_4_;
  auVar84._4_4_ = fVar26 * fVar26;
  fVar27 = param_3._8_4_;
  auVar84._8_4_ = fVar27 * fVar27;
  auVar84._12_4_ = param_3._12_4_ * param_3._12_4_;
  auVar71 = NEON_ext(auVar84,auVar84,8,1);
  fVar79 = auVar71._0_4_ + auVar84._0_4_;
  fVar90 = auVar71._4_4_ + auVar84._4_4_;
  fVar28 = fVar79 + fVar90;
  fVar79 = fVar79 + fVar90;
  auVar85._8_8_ = CONCAT44(fVar79,fVar28);
  auVar85._0_8_ = CONCAT44(fVar79,fVar28);
  auVar71 = NEON_frsqrte(auVar85,4);
  auVar99._0_4_ = auVar71._0_4_ * fVar28;
  auVar99._4_4_ = auVar71._4_4_ * fVar79;
  auVar99._8_4_ = auVar71._8_4_ * fVar28;
  auVar99._12_4_ = auVar71._12_4_ * fVar79;
  auVar81 = NEON_frsqrts(auVar71,auVar99,4);
  auVar95._0_4_ = auVar71._0_4_ * auVar81._0_4_;
  auVar95._4_4_ = auVar71._4_4_ * auVar81._4_4_;
  auVar95._8_4_ = auVar71._8_4_ * auVar81._8_4_;
  auVar95._12_4_ = auVar71._12_4_ * auVar81._12_4_;
  auVar100._0_4_ = fVar28 * auVar95._0_4_;
  auVar100._4_4_ = fVar79 * auVar95._4_4_;
  auVar100._8_4_ = fVar28 * auVar95._8_4_;
  auVar100._12_4_ = fVar79 * auVar95._12_4_;
  auVar71 = NEON_frsqrts(auVar95,auVar100,4);
  fVar22 = fVar22 * auVar95._0_4_ * auVar71._0_4_;
  fVar26 = fVar26 * auVar95._4_4_ * auVar71._4_4_;
  fVar27 = fVar27 * auVar95._8_4_ * auVar71._8_4_;
  iVar55 = -(uint)(fVar28 == 0.0);
  iVar66 = -(uint)(fVar79 == 0.0);
  iVar67 = -(uint)(fVar28 == 0.0);
  fVar54 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18),
                           CONCAT12((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10),
                                    CONCAT11((byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar77 >> 8),
                                             SUB41(fVar54,0) & ~(byte)iVar77)));
  uVar47 = CONCAT16((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                    CONCAT15((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar66 >> 8),
                             CONCAT14(SUB41(fVar26,0) & ~(byte)iVar66,
                                      CONCAT13((byte)((uint)fVar22 >> 0x18) &
                                               ~(byte)((uint)iVar55 >> 0x18),
                                               CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                                        ~(byte)((uint)iVar55 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar22 >> 8) &
                                                                 ~(byte)((uint)iVar55 >> 8),
                                                                 SUB41(fVar22,0) & ~(byte)iVar55))))
                            ));
  bVar53 = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
  auVar48._0_8_ = CONCAT17(bVar53,uVar47);
  auVar48[8] = SUB41(fVar27,0) & ~(byte)iVar67;
  auVar48[9] = (byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar67 >> 8);
  auVar48[10] = (byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
  auVar48[0xb] = (byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
  fVar21 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18),
                           CONCAT12((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10),
                                    CONCAT11((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar76 >> 8),
                                             SUB41(fVar21,0) & ~(byte)iVar76)));
  fVar26 = auVar48._8_4_;
  auVar71 = NEON_fmov(0x3f800000,4);
  fVar28 = (float)_DAT_03889820 * fVar120 + (float)_DAT_0388a450 * fVar21 +
           (float)_DAT_03889eb0 * fVar26 + auVar71._0_4_;
  fVar79 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar120 +
           (float)((ulong)_DAT_0388a450 >> 0x20) * fVar21 +
           (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar26 + auVar71._4_4_;
  fVar22 = (float)_UNK_03889828 * fVar120 + (float)_UNK_0388a458 * fVar21 +
           (float)_UNK_03889eb8 * fVar26 + auVar71._8_4_;
  fVar21 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar120 +
           (float)((ulong)_UNK_0388a458 >> 0x20) * fVar21 +
           (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar26 + auVar71._12_4_;
  uVar69 = NEON_ext(auVar59._0_8_,auVar48._0_8_,4,1);
  auVar71 = NEON_ext(auVar59,auVar59,8,1);
  uVar4 = CONCAT11((byte)((uint)fVar65 >> 8) & ~(byte)((uint)iVar68 >> 8),
                   SUB41(fVar65,0) & ~(byte)iVar68);
  auVar49._0_4_ = (float)uVar69 + (float)CONCAT13(bVar33,CONCAT12(bVar31,uVar4));
  fVar65 = (float)((ulong)uVar69 >> 0x20);
  auVar49._4_4_ = fVar65 + auVar71._0_4_;
  uVar8 = (undefined3)((uint7)uVar47 >> 0x20);
  auVar49._8_4_ = fVar54 + (float)CONCAT13(bVar53,uVar8);
  auVar49._12_4_ = 0;
  auVar60._0_4_ = (float)uVar69 - (float)CONCAT13(bVar33,CONCAT12(bVar31,uVar4));
  auVar60._4_4_ = fVar65 - auVar71._0_4_;
  auVar60._8_4_ = fVar54 - (float)CONCAT13(bVar53,uVar8);
  auVar60._12_4_ = 0;
  uVar9 = a64_TBL(ZEXT816(0),auVar49,auVar60,DAT_0388a888);
  uVar69 = a64_TBL(ZEXT816(0),auVar49,auVar60,DAT_0388a710);
  auVar86._8_8_ = uVar69;
  auVar86._0_8_ = uVar9 & 0xffffffff00000000;
  uVar70 = a64_TBL(ZEXT816(0),auVar49,auVar60,DAT_0388a758);
  uVar92 = a64_TBL(ZEXT816(0),auVar49,auVar60,DAT_0388a640);
  auVar102._4_12_ = auVar86._4_12_;
  auVar102._0_4_ = fVar28;
  auVar75._0_8_ = a64_TBL(ZEXT816(0),auVar49,auVar60,DAT_0388a880);
  auVar96._0_8_ = a64_TBL(ZEXT816(0),auVar49,auVar60,DAT_0388a700);
  uVar69 = a64_TBL(ZEXT816(0),auVar49,auVar60,DAT_0388a590);
  auVar61._4_4_ = fVar79;
  auVar61._0_4_ = fVar79;
  auVar61._8_4_ = fVar79;
  auVar61._12_4_ = fVar79;
  auVar75._12_4_ = (undefined4)((ulong)uVar92 >> 0x20);
  auVar75._8_4_ = fVar22;
  auVar96._8_8_ = uVar69;
  auVar105._4_4_ = fVar28;
  auVar105._0_4_ = fVar28;
  auVar105._8_4_ = fVar28;
  auVar105._12_4_ = fVar28;
  auVar101._0_8_ = CONCAT44(-(uint)(fVar28 <= fVar79),-(uint)(fVar28 <= fVar79));
  auVar101._8_4_ = -(uint)(fVar28 <= fVar79);
  auVar101._12_4_ = -(uint)(fVar28 <= fVar79);
  auVar104._8_8_ = auVar101._8_8_;
  auVar104._0_8_ = auVar101._0_8_;
  auVar71[4] = SUB41(fVar79,0);
  auVar71._0_4_ = (int)uVar9;
  auVar71[5] = (char)((uint)fVar79 >> 8);
  auVar71[6] = (char)((uint)fVar79 >> 0x10);
  auVar71[7] = (char)((uint)fVar79 >> 0x18);
  auVar71[8] = (char)uVar70;
  auVar71[9] = (char)((ulong)uVar70 >> 8);
  auVar71[10] = (char)((ulong)uVar70 >> 0x10);
  auVar71[0xb] = (char)((ulong)uVar70 >> 0x18);
  auVar71[0xc] = (char)((ulong)uVar70 >> 0x20);
  auVar71[0xd] = (char)((ulong)uVar70 >> 0x28);
  auVar71[0xe] = (char)((ulong)uVar70 >> 0x30);
  auVar71[0xf] = (char)((ulong)uVar70 >> 0x38);
  auVar102 = auVar102 ^ (auVar102 ^ auVar71) & auVar101;
  uVar29 = SUB41(fVar22,0);
  uVar30 = (undefined1)((uint)fVar22 >> 8);
  uVar32 = (undefined1)((uint)fVar22 >> 0x10);
  uVar34 = (undefined1)((uint)fVar22 >> 0x18);
  auVar97._0_12_ = auVar96._0_12_;
  auVar97._12_4_ = fVar21;
  auVar105 = auVar105 ^ (auVar105 ^ auVar61) & auVar104;
  auVar50._0_8_ = CONCAT44(-(uint)(auVar105._4_4_ <= fVar22),-(uint)(auVar105._0_4_ <= fVar22));
  auVar50._8_4_ = -(uint)(auVar105._8_4_ <= fVar22);
  auVar50._12_4_ = -(uint)(auVar105._12_4_ <= fVar22);
  auVar62._8_8_ = auVar50._8_8_;
  auVar62._0_8_ = auVar50._0_8_;
  auVar102 = auVar102 ^ (auVar102 ^ auVar75) & auVar50;
  auVar81[4] = uVar29;
  auVar81._0_4_ = fVar22;
  auVar81[5] = uVar30;
  auVar81[6] = uVar32;
  auVar81[7] = uVar34;
  auVar81[8] = uVar29;
  auVar81[9] = uVar30;
  auVar81[10] = uVar32;
  auVar81[0xb] = uVar34;
  auVar81[0xc] = uVar29;
  auVar81[0xd] = uVar30;
  auVar81[0xe] = uVar32;
  auVar81[0xf] = uVar34;
  auVar105 = auVar105 ^ (auVar105 ^ auVar81) & auVar62;
  auVar24._0_4_ = -(uint)(auVar105._0_4_ <= fVar21);
  auVar24._4_4_ = -(uint)(auVar105._4_4_ <= fVar21);
  auVar24._8_4_ = -(uint)(auVar105._8_4_ <= fVar21);
  auVar24._12_4_ = -(uint)(auVar105._12_4_ <= fVar21);
  auVar102 = auVar102 ^ (auVar102 ^ auVar97) & auVar24;
  fVar79 = auVar102._0_4_;
  fVar21 = fVar79 * fVar79;
  fVar22 = auVar102._4_4_;
  fVar54 = fVar22 * fVar22;
  uVar29 = (undefined1)((uint)fVar54 >> 8);
  uVar30 = (undefined1)((uint)fVar54 >> 0x10);
  uVar32 = (undefined1)((uint)fVar54 >> 0x18);
  fVar26 = auVar102._8_4_;
  fVar65 = fVar26 * fVar26;
  uVar34 = (undefined1)((uint)fVar65 >> 8);
  uVar37 = (undefined1)((uint)fVar65 >> 0x10);
  uVar39 = (undefined1)((uint)fVar65 >> 0x18);
  fVar27 = auVar102._12_4_;
  fVar28 = fVar27 * fVar27;
  uVar42 = (undefined1)((uint)fVar28 >> 8);
  uVar44 = (undefined1)((uint)fVar28 >> 0x10);
  uVar46 = (undefined1)((uint)fVar28 >> 0x18);
  auVar5[4] = SUB41(fVar54,0);
  auVar5._0_4_ = fVar21;
  auVar5[5] = uVar29;
  auVar5[6] = uVar30;
  auVar5[7] = uVar32;
  auVar5[8] = SUB41(fVar65,0);
  auVar5[9] = uVar34;
  auVar5[10] = uVar37;
  auVar5[0xb] = uVar39;
  auVar5[0xc] = SUB41(fVar28,0);
  auVar5[0xd] = uVar42;
  auVar5[0xe] = uVar44;
  auVar5[0xf] = uVar46;
  auVar6[4] = SUB41(fVar54,0);
  auVar6._0_4_ = fVar21;
  auVar6[5] = uVar29;
  auVar6[6] = uVar30;
  auVar6[7] = uVar32;
  auVar6[8] = SUB41(fVar65,0);
  auVar6[9] = uVar34;
  auVar6[10] = uVar37;
  auVar6[0xb] = uVar39;
  auVar6[0xc] = SUB41(fVar28,0);
  auVar6[0xd] = uVar42;
  auVar6[0xe] = uVar44;
  auVar6[0xf] = uVar46;
  auVar71 = NEON_ext(auVar5,auVar6,8,1);
  fVar21 = auVar71._0_4_ + fVar21;
  fVar54 = auVar71._4_4_ + fVar54;
  fVar65 = fVar21 + fVar54;
  fVar21 = fVar21 + fVar54;
  uVar29 = SUB41(fVar21,0);
  uVar30 = (undefined1)((uint)fVar21 >> 8);
  uVar32 = (undefined1)((uint)fVar21 >> 0x10);
  uVar34 = (undefined1)((uint)fVar21 >> 0x18);
  auVar7[4] = uVar29;
  auVar7._0_4_ = fVar65;
  auVar7[5] = uVar30;
  auVar7[6] = uVar32;
  auVar7[7] = uVar34;
  auVar7[8] = SUB41(fVar65,0);
  auVar7[9] = (char)((uint)fVar65 >> 8);
  auVar7[10] = (char)((uint)fVar65 >> 0x10);
  auVar7[0xb] = (char)((uint)fVar65 >> 0x18);
  auVar7[0xc] = uVar29;
  auVar7[0xd] = uVar30;
  auVar7[0xe] = uVar32;
  auVar7[0xf] = uVar34;
  auVar71 = NEON_frsqrte(auVar7,4);
  auVar63._0_4_ = auVar71._0_4_ * fVar65;
  auVar63._4_4_ = auVar71._4_4_ * fVar21;
  auVar63._8_4_ = auVar71._8_4_ * fVar65;
  uVar4 = (undefined2)(CONCAT15(uVar30,CONCAT14(uVar29,fVar65)) >> 0x20);
  auVar63._12_4_ = auVar71._12_4_ * (float)CONCAT13(uVar34,CONCAT12(uVar32,uVar4));
  auVar81 = NEON_frsqrts(auVar71,auVar63,4);
  auVar51._0_4_ = auVar71._0_4_ * auVar81._0_4_;
  auVar51._4_4_ = auVar71._4_4_ * auVar81._4_4_;
  auVar51._8_4_ = auVar71._8_4_ * auVar81._8_4_;
  auVar51._12_4_ = auVar71._12_4_ * auVar81._12_4_;
  auVar64._0_4_ = fVar65 * auVar51._0_4_;
  auVar64._4_4_ = fVar21 * auVar51._4_4_;
  auVar64._8_4_ = fVar65 * auVar51._8_4_;
  auVar64._12_4_ = (float)CONCAT13(uVar34,CONCAT12(uVar32,uVar4)) * auVar51._12_4_;
  iVar55 = -(uint)(fVar65 == 0.0);
  iVar66 = -(uint)(fVar21 == 0.0);
  iVar67 = -(uint)(fVar65 == 0.0);
  iVar68 = -(uint)((float)CONCAT13(uVar34,CONCAT12(uVar32,uVar4)) == 0.0);
  auVar71 = NEON_frsqrts(auVar51,auVar64,4);
  fVar79 = auVar51._0_4_ * auVar71._0_4_ * fVar79;
  fVar22 = auVar51._4_4_ * auVar71._4_4_ * fVar22;
  fVar26 = auVar51._8_4_ * auVar71._8_4_ * fVar26;
  fVar27 = auVar51._12_4_ * auVar71._12_4_ * fVar27;
  fVar65 = (float)CONCAT13((byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                           CONCAT12((byte)((uint)fVar79 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                                    CONCAT11((byte)((uint)fVar79 >> 8) & ~(byte)((uint)iVar55 >> 8),
                                             SUB41(fVar79,0) & ~(byte)iVar55)));
  auVar23._0_8_ =
       CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                CONCAT16((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                         CONCAT15((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar66 >> 8),
                                  CONCAT14(SUB41(fVar22,0) & ~(byte)iVar66,fVar65))));
  auVar23[8] = SUB41(fVar26,0) & ~(byte)iVar67;
  auVar23[9] = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar67 >> 8);
  auVar23[10] = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
  auVar23[0xb] = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
  auVar25[0xc] = SUB41(fVar27,0) & ~(byte)iVar68;
  auVar25._0_12_ = auVar23;
  auVar25[0xd] = (byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar68 >> 8);
  auVar25[0xe] = (byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10);
  auVar25[0xf] = (byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18);
  fStack_48 = auVar23._8_4_;
  fStack_44 = auVar25._12_4_;
  (**(code **)(*local_28 + 0x40))();
  fVar21 = *param_5;
  auVar12._8_4_ = fStack_48;
  auVar12._0_8_ = auVar23._0_8_;
  auVar11._8_4_ = fStack_48;
  auVar11._0_8_ = auVar23._0_8_;
  auVar10._8_4_ = fStack_48;
  auVar10._0_8_ = auVar23._0_8_;
  fVar26 = fVar65 * (float)_DAT_03889ac0;
  fVar27 = (float)((ulong)auVar23._0_8_ >> 0x20) * (float)((ulong)_DAT_03889ac0 >> 0x20);
  auVar87._0_8_ = CONCAT44(fVar27,fVar26);
  auVar87._8_4_ = fStack_48 * (float)_UNK_03889ac8;
  auVar87._12_4_ = fStack_44 * (float)((ulong)_UNK_03889ac8 >> 0x20);
  uVar92 = a64_TBL(ZEXT816(0),ZEXT416((uint)fVar21),DAT_0388a580);
  fVar90 = (float)((ulong)uVar92 >> 0x20);
  auVar13._8_8_ = auVar87._0_8_;
  auVar13._0_8_ = auVar87._0_8_;
  uVar106 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a648);
  uVar103 = a64_TBL(ZEXT816(0),auVar87,DAT_0388a580);
  fVar78 = (float)((ulong)uVar103 >> 0x20);
  uVar115 = a64_TBL(ZEXT816(0),auVar87,DAT_0388a6c8);
  uVar113 = a64_TBL(ZEXT816(0),ZEXT416((uint)fVar21),DAT_0388a680);
  fVar107 = (float)((ulong)uVar106 >> 0x20);
  fVar114 = (float)((ulong)uVar113 >> 0x20);
  fVar116 = (float)((ulong)uVar115 >> 0x20);
  fVar28 = (float)_DAT_03889ad0;
  fVar54 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar79 = (float)_UNK_03889ad8;
  fVar22 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  uVar70 = a64_TBL(ZEXT816(0),ZEXT416((uint)fVar21),uVar98);
  uVar111 = a64_TBL(ZEXT816(0),auVar87,DAT_0388a680);
  fVar120 = (float)((ulong)uVar70 >> 0x20);
  fVar112 = (float)((ulong)uVar111 >> 0x20);
  auVar130._4_12_ = SUB1612(ZEXT816(0),4);
  auVar130._0_4_ = *param_6;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = auVar130._0_8_;
  auVar52 = auVar52 << 0x40;
  uVar109 = a64_TBL(ZEXT816(0),auVar87,uVar98);
  uVar69 = a64_TBL(ZEXT816(0),auVar87,DAT_0388a790);
  fVar108 = (float)((ulong)uVar69 >> 0x20);
  fVar110 = (float)((ulong)uVar109 >> 0x20);
  fVar117 = (fVar26 * (float)uVar92 + fVar28 * fVar21 * (float)uVar103 +
            fVar28 * (float)uVar70 * (float)uVar111) - (float)uVar113 * (float)uVar109;
  fVar118 = (fVar27 * fVar90 + fVar54 * fVar78 * 0.0 + fVar54 * fVar120 * fVar112) -
            fVar114 * fVar110;
  fVar119 = (auVar87._8_4_ * (float)uVar92 + fVar79 * (float)uVar113 * (float)uVar115 +
            fVar79 * fVar21 * (float)uVar106) - (float)uVar70 * (float)uVar69;
  fVar120 = (auVar87._12_4_ * fVar90 + fVar22 * fVar114 * fVar116 + fVar22 * fVar107 * 0.0) -
            fVar120 * fVar108;
  auVar10._12_4_ = fStack_44;
  uVar70 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a580);
  auVar14._4_4_ = fVar118;
  auVar14._0_4_ = fVar117;
  auVar14._8_4_ = fVar119;
  auVar14._12_4_ = fVar120;
  uVar125 = a64_TBL(ZEXT816(0),auVar14,uVar98);
  auVar15._4_4_ = fVar118;
  auVar15._0_4_ = fVar117;
  auVar15._8_4_ = fVar119;
  auVar15._12_4_ = fVar120;
  uVar126 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a790);
  fVar90 = (float)uVar70;
  auVar11._12_4_ = fStack_44;
  uVar113 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a680);
  uVar127 = a64_TBL(ZEXT816(0),auVar52,DAT_0388a580);
  auVar16._4_4_ = fVar118;
  auVar16._0_4_ = fVar117;
  auVar16._8_4_ = fVar119;
  auVar16._12_4_ = fVar120;
  uVar70 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a580);
  fVar114 = (float)((ulong)uVar127 >> 0x20);
  uVar128 = a64_TBL(ZEXT816(0),auVar52,DAT_0388a680);
  uVar92 = a64_TBL(ZEXT816(0),auVar52,uVar98);
  fVar129 = (float)((ulong)uVar128 >> 0x20);
  auVar17._4_4_ = fVar118;
  auVar17._0_4_ = fVar117;
  auVar17._8_4_ = fVar119;
  auVar17._12_4_ = fVar120;
  uVar121 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a6c8);
  fVar21 = (float)((ulong)uVar92 >> 0x20);
  fVar26 = (fVar26 * (float)uVar127 + fVar28 * (float)uVar103 * 0.0 +
           fVar28 * (float)uVar111 * (float)uVar92) - (float)uVar128 * (float)uVar109;
  auVar88._0_8_ =
       CONCAT44((fVar27 * fVar114 + fVar54 * fVar78 * 0.0 + fVar54 * fVar112 * fVar21) -
                fVar129 * fVar110,fVar26);
  auVar88._8_4_ =
       (auVar87._8_4_ * (float)uVar127 + fVar79 * (float)uVar115 * (float)uVar128 +
       fVar79 * (float)uVar106 * 0.0) - (float)uVar92 * (float)uVar69;
  auVar88._12_4_ =
       (auVar87._12_4_ * fVar114 + fVar22 * fVar116 * fVar129 + fVar22 * fVar107 * 0.0) -
       fVar21 * fVar108;
  uVar109 = a64_TBL(ZEXT816(0),auVar88,DAT_0388a6c8);
  uVar92 = a64_TBL(ZEXT816(0),auVar88,DAT_0388a580);
  fVar78 = (float)uVar113;
  auVar18._4_4_ = fVar118;
  auVar18._0_4_ = fVar117;
  auVar18._8_4_ = fVar119;
  auVar18._12_4_ = fVar120;
  uVar111 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a680);
  auVar12._12_4_ = fStack_44;
  uVar69 = a64_TBL(ZEXT816(0),auVar12,uVar98);
  fVar27 = (float)uVar69;
  uVar106 = a64_TBL(ZEXT816(0),auVar88,DAT_0388a790);
  auVar19._4_4_ = fVar118;
  auVar19._0_4_ = fVar117;
  auVar19._8_4_ = fVar117;
  auVar19._12_4_ = fVar118;
  uVar69 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a648);
  uVar103 = a64_TBL(ZEXT816(0),auVar88,DAT_0388a680);
  uVar98 = a64_TBL(ZEXT816(0),auVar88,uVar98);
  auVar89._8_8_ = auVar88._0_8_;
  auVar89._0_8_ = auVar88._0_8_;
  fVar21 = (fVar90 * fVar117 + fVar28 * fVar65 * (float)uVar70 + fVar28 * fVar27 * (float)uVar111) -
           fVar78 * (float)uVar125;
  fVar54 = (fVar90 * fVar119 + fVar79 * fVar78 * (float)uVar121 + fVar79 * fVar65 * (float)uVar69) -
           fVar27 * (float)uVar126;
  uVar69 = a64_TBL(ZEXT816(0),auVar89,DAT_0388a648);
  bVar31 = (byte)((ulong)_DAT_038897c0 >> 8);
  bVar33 = (byte)((ulong)_DAT_038897c0 >> 0x10);
  bVar53 = (byte)((ulong)_DAT_038897c0 >> 0x18);
  bVar122 = (byte)((ulong)_UNK_038897c8 >> 8);
  bVar123 = (byte)((ulong)_UNK_038897c8 >> 0x10);
  bVar124 = (byte)((ulong)_UNK_038897c8 >> 0x18);
  fVar22 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & bVar53,
                           CONCAT12((byte)((uint)fVar21 >> 0x10) & bVar33,
                                    CONCAT11((byte)((uint)fVar21 >> 8) & bVar31,
                                             SUB41(fVar21,0) & (byte)_DAT_038897c0))) * 0.5;
  fVar120 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & bVar124,
                            CONCAT12((byte)((uint)fVar54 >> 0x10) & bVar123,
                                     CONCAT11((byte)((uint)fVar54 >> 8) & bVar122,
                                              SUB41(fVar54,0) & (byte)_UNK_038897c8))) * 0.5;
  fVar21 = auVar71._0_4_ - fVar22;
  fVar54 = auVar71._8_4_ - fVar120;
  fVar22 = auVar71._0_4_ + fVar22;
  fVar120 = auVar71._8_4_ + fVar120;
  fVar28 = (fVar90 * fVar26 + fVar28 * fVar65 * (float)uVar92 + fVar28 * fVar27 * (float)uVar103) -
           fVar78 * (float)uVar98;
  fVar65 = (fVar90 * auVar88._8_4_ + fVar79 * fVar78 * (float)uVar109 +
           fVar79 * fVar65 * (float)uVar69) - fVar27 * (float)uVar106;
  fVar79 = (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & bVar53,
                           CONCAT12((byte)((uint)fVar28 >> 0x10) & bVar33,
                                    CONCAT11((byte)((uint)fVar28 >> 8) & bVar31,
                                             SUB41(fVar28,0) & (byte)_DAT_038897c0))) * 0.5;
  fVar26 = (float)CONCAT13((byte)((uint)fVar65 >> 0x18) & bVar124,
                           CONCAT12((byte)((uint)fVar65 >> 0x10) & bVar123,
                                    CONCAT11((byte)((uint)fVar65 >> 8) & bVar122,
                                             SUB41(fVar65,0) & (byte)_UNK_038897c8))) * 0.5;
  fVar27 = fVar21 - fVar79;
  fVar28 = fVar54 - fVar26;
  fVar90 = fVar22 - fVar79;
  fVar78 = fVar120 - fVar26;
  fVar65 = fVar27;
  if (fVar27 <= fVar90) {
    fVar65 = fVar90;
  }
  fVar21 = fVar21 + fVar79;
  if (fVar65 <= fVar21) {
    fVar65 = fVar21;
  }
  fVar22 = fVar22 + fVar79;
  uVar56 = NEON_fminnm(fVar27,fVar90);
  uVar56 = NEON_fminnm(uVar56,fVar21);
  uVar91 = NEON_fminnm(fVar28,fVar78);
  if (fVar28 <= fVar78) {
    fVar28 = fVar78;
  }
  fVar21 = (float)NEON_fminnm(uVar56,fVar22);
  if (fVar65 <= fVar22) {
    fVar65 = fVar22;
  }
  uVar56 = NEON_fminnm(uVar91,fVar54 + fVar26);
  fVar79 = (float)NEON_fminnm(uVar56,fVar120 + fVar26);
  fVar54 = (fVar65 - fVar21) * (fVar65 - fVar21);
  *(float *)(param_4 + 0x3b8) = ABS(fVar65 - fVar21) * 0.5;
  fVar21 = SQRT(fVar54);
  *(float *)(param_4 + 0x3bc) = ABS(fVar28 - fVar79) * 0.5;
  if (NAN(fVar21)) {
    fVar21 = sqrtf(fVar54);
  }
  *(float *)(param_4 + 0x3c0) = fVar21 + (fVar28 - fVar79) * (fVar28 - fVar79) * 0.5;
  if (local_28 != (long *)0x0) {
    lVar20 = local_28[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar55 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar55 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar55 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


