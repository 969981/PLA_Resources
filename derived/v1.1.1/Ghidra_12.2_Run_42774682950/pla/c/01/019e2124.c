/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019e2124; name: FUN_019e2124
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019e2124(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4)

{
  int *piVar1;
  char cVar2;
  undefined2 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined3 uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  bool bVar20;
  long lVar21;
  undefined8 *puVar22;
  float fVar23;
  float extraout_s0;
  undefined1 auVar25 [12];
  float extraout_var;
  float fVar24;
  float fVar31;
  float extraout_var_00;
  float fVar32;
  float extraout_var_01;
  float fVar33;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 uVar34;
  undefined1 uVar35;
  byte bVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined7 uVar52;
  byte bVar59;
  undefined1 auVar55 [12];
  undefined8 uVar53;
  undefined8 uVar54;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar60;
  int iVar61;
  float fVar71;
  int iVar73;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  int iVar72;
  int iVar74;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  int iVar87;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  int iVar89;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar88;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar90;
  undefined8 uVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar102;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined8 uVar103;
  undefined8 uVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar110;
  undefined8 uVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar119;
  float fVar120;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined8 uVar121;
  float fVar124;
  float fVar125;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined8 uVar126;
  float fVar129;
  undefined8 uVar127;
  undefined8 uVar128;
  float fVar130;
  undefined8 uVar131;
  undefined8 uVar132;
  undefined8 uVar133;
  undefined8 uVar134;
  undefined8 uVar135;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_18;
  
  uVar51 = param_2[0xf];
  uVar50 = param_2[0xe];
  uVar49 = param_2[0xd];
  uVar48 = param_2[0xc];
  uVar47 = param_2[0xb];
  uVar46 = param_2[10];
  uVar45 = param_2[9];
  uVar44 = param_2[8];
  uVar43 = param_2[7];
  uVar42 = param_2[6];
  uVar41 = param_2[5];
  uVar40 = param_2[4];
  uVar39 = param_2[3];
  uVar37 = param_2[2];
  uVar35 = param_2[1];
  uVar34 = param_2[0];
  if (*(int *)(param_4 + 0x3c0) == 0) {
    return;
  }
  FUN_009c69bc(&local_18);
  (**(code **)(*local_18 + 0x40))();
  uVar15 = DAT_0388a880;
  auVar62._0_4_ = extraout_s0 * extraout_s0;
  auVar62._4_4_ = extraout_var * extraout_var;
  auVar62._8_4_ = extraout_var_00 * extraout_var_00;
  auVar62._12_4_ = extraout_var_01 * extraout_var_01;
  auVar78 = NEON_ext(auVar62,auVar62,8,1);
  fVar60 = auVar78._0_4_ + auVar62._0_4_;
  fVar71 = auVar78._4_4_ + auVar62._4_4_;
  fVar23 = fVar60 + fVar71;
  fVar60 = fVar60 + fVar71;
  auVar63._8_8_ = CONCAT44(fVar60,fVar23);
  auVar63._0_8_ = CONCAT44(fVar60,fVar23);
  auVar78 = NEON_frsqrte(auVar63,4);
  auVar92._0_4_ = auVar78._0_4_ * fVar23;
  auVar92._4_4_ = auVar78._4_4_ * fVar60;
  auVar92._8_4_ = auVar78._8_4_ * fVar23;
  auVar92._12_4_ = auVar78._12_4_ * fVar60;
  auVar93 = NEON_frsqrts(auVar78,auVar92,4);
  auVar79._0_4_ = auVar78._0_4_ * auVar93._0_4_;
  auVar79._4_4_ = auVar78._4_4_ * auVar93._4_4_;
  auVar79._8_4_ = auVar78._8_4_ * auVar93._8_4_;
  auVar79._12_4_ = auVar78._12_4_ * auVar93._12_4_;
  auVar94._0_4_ = fVar23 * auVar79._0_4_;
  auVar94._4_4_ = fVar60 * auVar79._4_4_;
  auVar94._8_4_ = fVar23 * auVar79._8_4_;
  auVar94._12_4_ = fVar60 * auVar79._12_4_;
  iVar61 = -(uint)(fVar23 == 0.0);
  iVar72 = -(uint)(fVar60 == 0.0);
  iVar73 = -(uint)(fVar23 == 0.0);
  iVar74 = -(uint)(fVar60 == 0.0);
  auVar78 = NEON_frsqrts(auVar79,auVar94,4);
  fVar23 = extraout_s0 * auVar79._0_4_ * auVar78._0_4_;
  fVar60 = extraout_var * auVar79._4_4_ * auVar78._4_4_;
  fVar71 = extraout_var_00 * auVar79._8_4_ * auVar78._8_4_;
  fVar33 = extraout_var_01 * auVar79._12_4_ * auVar78._12_4_;
  fVar125 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                            CONCAT12((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                                     CONCAT11((byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar61 >> 8)
                                              ,SUB41(fVar23,0) & ~(byte)iVar61)));
  auVar64._0_8_ =
       CONCAT17((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18),
                CONCAT16((byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10),
                         CONCAT15((byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar72 >> 8),
                                  CONCAT14(SUB41(fVar60,0) & ~(byte)iVar72,fVar125))));
  auVar64[8] = SUB41(fVar71,0) & ~(byte)iVar73;
  auVar64[9] = (byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar73 >> 8);
  auVar64[10] = (byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10);
  auVar64[0xb] = (byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18);
  auVar64[0xc] = SUB41(fVar33,0) & ~(byte)iVar74;
  auVar64[0xd] = (byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar74 >> 8);
  auVar64[0xe] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10);
  auVar64[0xf] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18);
  auVar80._0_4_ =
       (float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar34))) *
       (float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar34)));
  auVar80._4_4_ =
       (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40))) *
       (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40)));
  auVar80._8_4_ =
       (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) *
       (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44)));
  auVar80._12_4_ =
       (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48))) *
       (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)));
  auVar78 = NEON_ext(auVar80,auVar80,8,1);
  fVar60 = auVar78._0_4_ + auVar80._0_4_;
  fVar71 = auVar78._4_4_ + auVar80._4_4_;
  fVar23 = fVar60 + fVar71;
  fVar60 = fVar60 + fVar71;
  auVar81._8_8_ = CONCAT44(fVar60,fVar23);
  auVar81._0_8_ = CONCAT44(fVar60,fVar23);
  auVar78 = NEON_frsqrte(auVar81,4);
  auVar105._0_4_ = auVar78._0_4_ * fVar23;
  auVar105._4_4_ = auVar78._4_4_ * fVar60;
  auVar105._8_4_ = auVar78._8_4_ * fVar23;
  auVar105._12_4_ = auVar78._12_4_ * fVar60;
  auVar93 = NEON_frsqrts(auVar78,auVar105,4);
  auVar95._0_4_ = auVar78._0_4_ * auVar93._0_4_;
  auVar95._4_4_ = auVar78._4_4_ * auVar93._4_4_;
  auVar95._8_4_ = auVar78._8_4_ * auVar93._8_4_;
  auVar95._12_4_ = auVar78._12_4_ * auVar93._12_4_;
  auVar106._0_4_ = fVar23 * auVar95._0_4_;
  auVar106._4_4_ = fVar60 * auVar95._4_4_;
  auVar106._8_4_ = fVar23 * auVar95._8_4_;
  auVar106._12_4_ = fVar60 * auVar95._12_4_;
  iVar74 = -(uint)(fVar23 == 0.0);
  iVar87 = -(uint)(fVar60 == 0.0);
  iVar89 = -(uint)(fVar23 == 0.0);
  auVar78 = NEON_frsqrts(auVar95,auVar106,4);
  fVar60 = (float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar34))) *
           auVar95._0_4_ * auVar78._0_4_;
  fVar23 = (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40))) *
           auVar95._4_4_ * auVar78._4_4_;
  fVar71 = (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) *
           auVar95._8_4_ * auVar78._8_4_;
  bVar36 = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10);
  bVar38 = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18);
  fVar24 = param_3._0_4_;
  auVar96._0_4_ = fVar24 * fVar24;
  fVar31 = param_3._4_4_;
  auVar96._4_4_ = fVar31 * fVar31;
  fVar32 = param_3._8_4_;
  auVar96._8_4_ = fVar32 * fVar32;
  auVar96._12_4_ = param_3._12_4_ * param_3._12_4_;
  auVar78 = NEON_ext(auVar96,auVar96,8,1);
  fVar90 = auVar78._0_4_ + auVar96._0_4_;
  fVar102 = auVar78._4_4_ + auVar96._4_4_;
  fVar33 = fVar90 + fVar102;
  fVar90 = fVar90 + fVar102;
  auVar97._8_8_ = CONCAT44(fVar90,fVar33);
  auVar97._0_8_ = CONCAT44(fVar90,fVar33);
  auVar78 = NEON_frsqrte(auVar97,4);
  auVar112._0_4_ = auVar78._0_4_ * fVar33;
  auVar112._4_4_ = auVar78._4_4_ * fVar90;
  auVar112._8_4_ = auVar78._8_4_ * fVar33;
  auVar112._12_4_ = auVar78._12_4_ * fVar90;
  auVar93 = NEON_frsqrts(auVar78,auVar112,4);
  auVar107._0_4_ = auVar78._0_4_ * auVar93._0_4_;
  auVar107._4_4_ = auVar78._4_4_ * auVar93._4_4_;
  auVar107._8_4_ = auVar78._8_4_ * auVar93._8_4_;
  auVar107._12_4_ = auVar78._12_4_ * auVar93._12_4_;
  auVar113._0_4_ = fVar33 * auVar107._0_4_;
  auVar113._4_4_ = fVar90 * auVar107._4_4_;
  auVar113._8_4_ = fVar33 * auVar107._8_4_;
  auVar113._12_4_ = fVar90 * auVar107._12_4_;
  auVar78 = NEON_frsqrts(auVar107,auVar113,4);
  fVar24 = fVar24 * auVar107._0_4_ * auVar78._0_4_;
  fVar31 = fVar31 * auVar107._4_4_ * auVar78._4_4_;
  fVar32 = fVar32 * auVar107._8_4_ * auVar78._8_4_;
  iVar61 = -(uint)(fVar33 == 0.0);
  iVar72 = -(uint)(fVar90 == 0.0);
  iVar73 = -(uint)(fVar33 == 0.0);
  uVar52 = CONCAT16((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10),
                    CONCAT15((byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar72 >> 8),
                             CONCAT14(SUB41(fVar31,0) & ~(byte)iVar72,
                                      CONCAT13((byte)((uint)fVar24 >> 0x18) &
                                               ~(byte)((uint)iVar61 >> 0x18),
                                               CONCAT12((byte)((uint)fVar24 >> 0x10) &
                                                        ~(byte)((uint)iVar61 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar24 >> 8) &
                                                                 ~(byte)((uint)iVar61 >> 8),
                                                                 SUB41(fVar24,0) & ~(byte)iVar61))))
                            ));
  bVar59 = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
  auVar55._0_8_ = CONCAT17(bVar59,uVar52);
  auVar55[8] = SUB41(fVar32,0) & ~(byte)iVar73;
  auVar55[9] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar73 >> 8);
  auVar55[10] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10);
  auVar55[0xb] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18);
  uVar103 = NEON_ext(auVar64._0_8_,auVar55._0_8_,4,1);
  auVar78 = NEON_ext(auVar64,auVar64,8,1);
  fVar23 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar87 >> 0x18),
                           CONCAT12((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar87 >> 0x10),
                                    CONCAT11((byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar87 >> 8),
                                             SUB41(fVar23,0) & ~(byte)iVar87)));
  fVar31 = auVar55._8_4_;
  auVar93 = NEON_fmov(0x3f800000,4);
  fVar33 = (float)_DAT_03889820 * fVar125 + (float)_DAT_0388a450 * fVar23 +
           (float)_DAT_03889eb0 * fVar31 + auVar93._0_4_;
  fVar90 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar125 +
           (float)((ulong)_DAT_0388a450 >> 0x20) * fVar23 +
           (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar31 + auVar93._4_4_;
  fVar24 = (float)_UNK_03889828 * fVar125 + (float)_UNK_0388a458 * fVar23 +
           (float)_UNK_03889eb8 * fVar31 + auVar93._8_4_;
  fVar31 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar125 +
           (float)((ulong)_UNK_0388a458 >> 0x20) * fVar23 +
           (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar31 + auVar93._12_4_;
  fVar23 = (float)CONCAT13((byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar89 >> 0x18),
                           CONCAT12((byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar89 >> 0x10),
                                    CONCAT11((byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar89 >> 8),
                                             SUB41(fVar71,0) & ~(byte)iVar89)));
  uVar3 = CONCAT11((byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar74 >> 8),
                   SUB41(fVar60,0) & ~(byte)iVar74);
  auVar56._0_4_ = (float)uVar103 + (float)CONCAT13(bVar38,CONCAT12(bVar36,uVar3));
  fVar60 = (float)((ulong)uVar103 >> 0x20);
  auVar56._4_4_ = fVar60 + auVar78._0_4_;
  uVar7 = (undefined3)((uint7)uVar52 >> 0x20);
  auVar56._8_4_ = fVar23 + (float)CONCAT13(bVar59,uVar7);
  auVar56._12_4_ = 0;
  auVar65._0_4_ = (float)uVar103 - (float)CONCAT13(bVar38,CONCAT12(bVar36,uVar3));
  auVar65._4_4_ = fVar60 - auVar78._0_4_;
  auVar65._8_4_ = fVar23 - (float)CONCAT13(bVar59,uVar7);
  auVar65._12_4_ = 0;
  uVar8 = a64_TBL(ZEXT816(0),auVar56,auVar65,DAT_0388a888);
  uVar103 = a64_TBL(ZEXT816(0),auVar56,auVar65,DAT_0388a710);
  auVar98._8_8_ = uVar103;
  auVar98._0_8_ = uVar8 & 0xffffffff00000000;
  uVar75 = a64_TBL(ZEXT816(0),auVar56,auVar65,DAT_0388a758);
  uVar104 = a64_TBL(ZEXT816(0),auVar56,auVar65,DAT_0388a640);
  auVar115._4_12_ = auVar98._4_12_;
  auVar115._0_4_ = fVar33;
  auVar82._0_8_ = a64_TBL(ZEXT816(0),auVar56,auVar65,DAT_0388a880);
  auVar108._0_8_ = a64_TBL(ZEXT816(0),auVar56,auVar65,DAT_0388a700);
  uVar103 = a64_TBL(ZEXT816(0),auVar56,auVar65,DAT_0388a590);
  auVar66._4_4_ = fVar90;
  auVar66._0_4_ = fVar90;
  auVar66._8_4_ = fVar90;
  auVar66._12_4_ = fVar90;
  auVar82._12_4_ = (undefined4)((ulong)uVar104 >> 0x20);
  auVar82._8_4_ = fVar24;
  auVar108._8_8_ = uVar103;
  auVar123._4_4_ = fVar33;
  auVar123._0_4_ = fVar33;
  auVar123._8_4_ = fVar33;
  auVar123._12_4_ = fVar33;
  auVar114._0_8_ = CONCAT44(-(uint)(fVar33 <= fVar90),-(uint)(fVar33 <= fVar90));
  auVar114._8_4_ = -(uint)(fVar33 <= fVar90);
  auVar114._12_4_ = -(uint)(fVar33 <= fVar90);
  auVar122._8_8_ = auVar114._8_8_;
  auVar122._0_8_ = auVar114._0_8_;
  auVar78[4] = SUB41(fVar90,0);
  auVar78._0_4_ = (int)uVar8;
  auVar78[5] = (char)((uint)fVar90 >> 8);
  auVar78[6] = (char)((uint)fVar90 >> 0x10);
  auVar78[7] = (char)((uint)fVar90 >> 0x18);
  auVar78[8] = (char)uVar75;
  auVar78[9] = (char)((ulong)uVar75 >> 8);
  auVar78[10] = (char)((ulong)uVar75 >> 0x10);
  auVar78[0xb] = (char)((ulong)uVar75 >> 0x18);
  auVar78[0xc] = (char)((ulong)uVar75 >> 0x20);
  auVar78[0xd] = (char)((ulong)uVar75 >> 0x28);
  auVar78[0xe] = (char)((ulong)uVar75 >> 0x30);
  auVar78[0xf] = (char)((ulong)uVar75 >> 0x38);
  auVar115 = auVar115 ^ (auVar115 ^ auVar78) & auVar114;
  uVar34 = SUB41(fVar24,0);
  uVar35 = (undefined1)((uint)fVar24 >> 8);
  uVar37 = (undefined1)((uint)fVar24 >> 0x10);
  uVar39 = (undefined1)((uint)fVar24 >> 0x18);
  auVar109._0_12_ = auVar108._0_12_;
  auVar109._12_4_ = fVar31;
  auVar123 = auVar123 ^ (auVar123 ^ auVar66) & auVar122;
  auVar57._0_8_ = CONCAT44(-(uint)(auVar123._4_4_ <= fVar24),-(uint)(auVar123._0_4_ <= fVar24));
  auVar57._8_4_ = -(uint)(auVar123._8_4_ <= fVar24);
  auVar57._12_4_ = -(uint)(auVar123._12_4_ <= fVar24);
  auVar67._8_8_ = auVar57._8_8_;
  auVar67._0_8_ = auVar57._0_8_;
  auVar115 = auVar115 ^ (auVar115 ^ auVar82) & auVar57;
  auVar93[4] = uVar34;
  auVar93._0_4_ = fVar24;
  auVar93[5] = uVar35;
  auVar93[6] = uVar37;
  auVar93[7] = uVar39;
  auVar93[8] = uVar34;
  auVar93[9] = uVar35;
  auVar93[10] = uVar37;
  auVar93[0xb] = uVar39;
  auVar93[0xc] = uVar34;
  auVar93[0xd] = uVar35;
  auVar93[0xe] = uVar37;
  auVar93[0xf] = uVar39;
  auVar123 = auVar123 ^ (auVar123 ^ auVar93) & auVar67;
  auVar26._0_4_ = -(uint)(auVar123._0_4_ <= fVar31);
  auVar26._4_4_ = -(uint)(auVar123._4_4_ <= fVar31);
  auVar26._8_4_ = -(uint)(auVar123._8_4_ <= fVar31);
  auVar26._12_4_ = -(uint)(auVar123._12_4_ <= fVar31);
  auVar115 = auVar115 ^ (auVar115 ^ auVar109) & auVar26;
  fVar90 = auVar115._0_4_;
  fVar23 = fVar90 * fVar90;
  fVar24 = auVar115._4_4_;
  fVar60 = fVar24 * fVar24;
  uVar34 = (undefined1)((uint)fVar60 >> 8);
  uVar35 = (undefined1)((uint)fVar60 >> 0x10);
  uVar37 = (undefined1)((uint)fVar60 >> 0x18);
  fVar31 = auVar115._8_4_;
  fVar71 = fVar31 * fVar31;
  uVar39 = (undefined1)((uint)fVar71 >> 8);
  uVar40 = (undefined1)((uint)fVar71 >> 0x10);
  uVar41 = (undefined1)((uint)fVar71 >> 0x18);
  fVar32 = auVar115._12_4_;
  fVar33 = fVar32 * fVar32;
  uVar42 = (undefined1)((uint)fVar33 >> 8);
  uVar43 = (undefined1)((uint)fVar33 >> 0x10);
  uVar44 = (undefined1)((uint)fVar33 >> 0x18);
  auVar4[4] = SUB41(fVar60,0);
  auVar4._0_4_ = fVar23;
  auVar4[5] = uVar34;
  auVar4[6] = uVar35;
  auVar4[7] = uVar37;
  auVar4[8] = SUB41(fVar71,0);
  auVar4[9] = uVar39;
  auVar4[10] = uVar40;
  auVar4[0xb] = uVar41;
  auVar4[0xc] = SUB41(fVar33,0);
  auVar4[0xd] = uVar42;
  auVar4[0xe] = uVar43;
  auVar4[0xf] = uVar44;
  auVar5[4] = SUB41(fVar60,0);
  auVar5._0_4_ = fVar23;
  auVar5[5] = uVar34;
  auVar5[6] = uVar35;
  auVar5[7] = uVar37;
  auVar5[8] = SUB41(fVar71,0);
  auVar5[9] = uVar39;
  auVar5[10] = uVar40;
  auVar5[0xb] = uVar41;
  auVar5[0xc] = SUB41(fVar33,0);
  auVar5[0xd] = uVar42;
  auVar5[0xe] = uVar43;
  auVar5[0xf] = uVar44;
  auVar78 = NEON_ext(auVar4,auVar5,8,1);
  fVar23 = auVar78._0_4_ + fVar23;
  fVar60 = auVar78._4_4_ + fVar60;
  fVar71 = fVar23 + fVar60;
  fVar23 = fVar23 + fVar60;
  uVar34 = SUB41(fVar23,0);
  uVar35 = (undefined1)((uint)fVar23 >> 8);
  uVar37 = (undefined1)((uint)fVar23 >> 0x10);
  uVar39 = (undefined1)((uint)fVar23 >> 0x18);
  auVar6[4] = uVar34;
  auVar6._0_4_ = fVar71;
  auVar6[5] = uVar35;
  auVar6[6] = uVar37;
  auVar6[7] = uVar39;
  auVar6[8] = SUB41(fVar71,0);
  auVar6[9] = (char)((uint)fVar71 >> 8);
  auVar6[10] = (char)((uint)fVar71 >> 0x10);
  auVar6[0xb] = (char)((uint)fVar71 >> 0x18);
  auVar6[0xc] = uVar34;
  auVar6[0xd] = uVar35;
  auVar6[0xe] = uVar37;
  auVar6[0xf] = uVar39;
  auVar78 = NEON_frsqrte(auVar6,4);
  auVar68._0_4_ = auVar78._0_4_ * fVar71;
  auVar68._4_4_ = auVar78._4_4_ * fVar23;
  auVar68._8_4_ = auVar78._8_4_ * fVar71;
  uVar3 = (undefined2)(CONCAT15(uVar35,CONCAT14(uVar34,fVar71)) >> 0x20);
  auVar68._12_4_ = auVar78._12_4_ * (float)CONCAT13(uVar39,CONCAT12(uVar37,uVar3));
  auVar93 = NEON_frsqrts(auVar78,auVar68,4);
  auVar58._0_4_ = auVar78._0_4_ * auVar93._0_4_;
  auVar58._4_4_ = auVar78._4_4_ * auVar93._4_4_;
  auVar58._8_4_ = auVar78._8_4_ * auVar93._8_4_;
  auVar58._12_4_ = auVar78._12_4_ * auVar93._12_4_;
  auVar69._0_4_ = fVar71 * auVar58._0_4_;
  auVar69._4_4_ = fVar23 * auVar58._4_4_;
  auVar69._8_4_ = fVar71 * auVar58._8_4_;
  auVar69._12_4_ = (float)CONCAT13(uVar39,CONCAT12(uVar37,uVar3)) * auVar58._12_4_;
  iVar61 = -(uint)(fVar71 == 0.0);
  iVar72 = -(uint)(fVar23 == 0.0);
  iVar73 = -(uint)(fVar71 == 0.0);
  iVar74 = -(uint)((float)CONCAT13(uVar39,CONCAT12(uVar37,uVar3)) == 0.0);
  auVar78 = NEON_frsqrts(auVar58,auVar69,4);
  fVar90 = auVar58._0_4_ * auVar78._0_4_ * fVar90;
  fVar24 = auVar58._4_4_ * auVar78._4_4_ * fVar24;
  fVar31 = auVar58._8_4_ * auVar78._8_4_ * fVar31;
  fVar32 = auVar58._12_4_ * auVar78._12_4_ * fVar32;
  auVar27._0_8_ =
       CONCAT17((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18),
                CONCAT16((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10),
                         CONCAT15((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar72 >> 8),
                                  CONCAT14(SUB41(fVar24,0) & ~(byte)iVar72,
                                           CONCAT13((byte)((uint)fVar90 >> 0x18) &
                                                    ~(byte)((uint)iVar61 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar90 >> 0x10) &
                                                             ~(byte)((uint)iVar61 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar90 >> 8) &
                                                                      ~(byte)((uint)iVar61 >> 8),
                                                                      SUB41(fVar90,0) &
                                                                      ~(byte)iVar61)))))));
  auVar27[8] = SUB41(fVar31,0) & ~(byte)iVar73;
  auVar27[9] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar73 >> 8);
  auVar27[10] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10);
  auVar27[0xb] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18);
  auVar27[0xc] = SUB41(fVar32,0) & ~(byte)iVar74;
  auVar27[0xd] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar74 >> 8);
  auVar27[0xe] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10);
  auVar27[0xf] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18);
  puStack_48 = auVar27._8_8_;
  local_50 = auVar27._0_8_;
  auVar78 = FUN_00cb8d18(&local_50);
  if (local_18 != (long *)0x0) {
    lVar21 = local_18[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar61 = *piVar1;
      cVar2 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar20) {
        *piVar1 = iVar61 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar61 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))();
    }
  }
  auVar93 = FUN_009a7ff4(auVar78._4_4_,0,ZEXT816(0));
  uVar53 = DAT_0388a790;
  uVar54 = DAT_0388a6c8;
  uVar104 = DAT_0388a680;
  uVar75 = DAT_0388a648;
  uVar103 = DAT_0388a580;
  iVar61 = *(int *)(param_4 + 0x3c0);
  fVar90 = auVar93._0_4_;
  fVar24 = auVar93._4_4_;
  fVar23 = _DAT_03889a80;
  fVar60 = _UNK_03889a84;
  fVar71 = _UNK_03889a88;
  fVar33 = _UNK_03889a8c;
  switch(iVar61) {
  case 1:
    break;
  case 2:
    fVar23 = (float)DAT_0388a140;
    fVar60 = DAT_0388a140._4_4_;
    fVar71 = (float)DAT_0388a148;
    fVar33 = DAT_0388a148._4_4_;
    break;
  case 3:
    fVar23 = _DAT_03888d10;
    fVar60 = _UNK_03888d14;
    fVar71 = _UNK_03888d18;
    fVar33 = _UNK_03888d1c;
    break;
  case 4:
  case 6:
    uVar44 = SUB41((float)DAT_0388a148,0);
    uVar45 = (undefined1)((uint)(float)DAT_0388a148 >> 8);
    uVar46 = (undefined1)((uint)(float)DAT_0388a148 >> 0x10);
    uVar47 = (undefined1)((uint)(float)DAT_0388a148 >> 0x18);
    uVar48 = SUB41(DAT_0388a148._4_4_,0);
    uVar49 = (undefined1)((uint)DAT_0388a148._4_4_ >> 8);
    uVar50 = (undefined1)((uint)DAT_0388a148._4_4_ >> 0x10);
    uVar51 = (undefined1)((uint)DAT_0388a148._4_4_ >> 0x18);
    uVar34 = SUB41((float)DAT_0388a140,0);
    uVar35 = (undefined1)((uint)(float)DAT_0388a140 >> 8);
    uVar37 = (undefined1)((uint)(float)DAT_0388a140 >> 0x10);
    uVar39 = (undefined1)((uint)(float)DAT_0388a140 >> 0x18);
    uVar40 = SUB41(DAT_0388a140._4_4_,0);
    uVar41 = (undefined1)((uint)DAT_0388a140._4_4_ >> 8);
    uVar42 = (undefined1)((uint)DAT_0388a140._4_4_ >> 0x10);
    uVar43 = (undefined1)((uint)DAT_0388a140._4_4_ >> 0x18);
    bVar20 = false;
    goto LAB_019e23e4;
  case 5:
    uVar44 = SUB41(_UNK_03888d18,0);
    uVar45 = (undefined1)((uint)_UNK_03888d18 >> 8);
    uVar46 = (undefined1)((uint)_UNK_03888d18 >> 0x10);
    uVar47 = (undefined1)((uint)_UNK_03888d18 >> 0x18);
    uVar48 = SUB41(_UNK_03888d1c,0);
    uVar49 = (undefined1)((uint)_UNK_03888d1c >> 8);
    uVar50 = (undefined1)((uint)_UNK_03888d1c >> 0x10);
    uVar51 = (undefined1)((uint)_UNK_03888d1c >> 0x18);
    uVar34 = SUB41(_DAT_03888d10,0);
    uVar35 = (undefined1)((uint)_DAT_03888d10 >> 8);
    uVar37 = (undefined1)((uint)_DAT_03888d10 >> 0x10);
    uVar39 = (undefined1)((uint)_DAT_03888d10 >> 0x18);
    uVar40 = SUB41(_UNK_03888d14,0);
    uVar41 = (undefined1)((uint)_UNK_03888d14 >> 8);
    uVar42 = (undefined1)((uint)_UNK_03888d14 >> 0x10);
    uVar43 = (undefined1)((uint)_UNK_03888d14 >> 0x18);
    bVar20 = true;
    goto LAB_019e23e4;
  default:
    bVar20 = false;
    uVar34 = 0;
    uVar35 = 0;
    uVar37 = 0;
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    uVar43 = 0;
    uVar44 = 0;
    uVar45 = 0;
    uVar46 = 0;
    uVar47 = 0;
    uVar48 = 0;
    uVar49 = 0;
    uVar50 = 0;
    uVar51 = 0;
LAB_019e23e4:
    *(float *)(param_4 + 0x434) = *(float *)(param_4 + 0x340) * 3.1415927;
    *(float *)(param_4 + 0x438) = *(float *)(param_4 + 0x344) / 30.0;
    fVar23 = *(float *)(param_4 + 0x340) * 0.5;
    fVar60 = (float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar34))) * fVar23;
    fVar71 = (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40))) * fVar23;
    fVar33 = (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) * fVar23;
    fVar23 = (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48))) * fVar23;
    *(undefined4 *)(param_4 + 0x43c) = 0;
    uVar54 = DAT_0388a790;
    uVar104 = DAT_0388a6c8;
    uVar75 = DAT_0388a680;
    uVar103 = DAT_0388a580;
    if (bVar20) {
      uVar103 = CONCAT44(fVar71,fVar60);
      if (*(char *)(param_4 + 0x338) == '\0') {
        fVar90 = *(float *)(param_4 + 0x33c);
      }
      else {
        fVar90 = (float)FUN_019e2920();
      }
      auVar78 = FUN_009a7ff4(auVar78._4_4_ +
                             fVar90 * (*(float *)PTR_FloatPi_04372cf0 /
                                      *(float *)PTR_FloatDegree180_04372ce0),0,ZEXT816(0));
      uVar126 = DAT_0388a790;
      uVar121 = DAT_0388a6c8;
      uVar111 = DAT_0388a680;
      uVar76 = DAT_0388a580;
      auVar19._8_4_ = fVar33;
      auVar19._0_8_ = uVar103;
      auVar18._8_4_ = fVar33;
      auVar18._0_8_ = uVar103;
      auVar17._8_4_ = fVar33;
      auVar17._0_8_ = uVar103;
      fVar33 = auVar78._0_4_;
      fVar24 = fVar33 * (float)_DAT_03889ac0;
      fVar90 = auVar78._4_4_;
      fVar32 = fVar90 * (float)((ulong)_DAT_03889ac0 >> 0x20);
      auVar85._0_8_ = CONCAT44(fVar32,fVar24);
      auVar85._8_4_ = auVar78._8_4_ * (float)_UNK_03889ac8;
      auVar85._12_4_ = auVar78._12_4_ * (float)((ulong)_UNK_03889ac8 >> 0x20);
      auVar17._12_4_ = fVar23;
      uVar131 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a580);
      auVar18._12_4_ = fVar23;
      uVar132 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a680);
      uVar133 = a64_TBL(ZEXT816(0),auVar85,DAT_0388a580);
      uVar128 = a64_TBL(ZEXT816(0),auVar85,DAT_0388a6c8);
      fVar110 = (float)((ulong)uVar132 >> 0x20);
      uVar103 = a64_TBL(ZEXT816(0),auVar85,DAT_0388a680);
      uVar104 = a64_TBL(ZEXT816(0),auVar85,uVar15);
      uVar134 = a64_TBL(ZEXT816(0),auVar85,DAT_0388a790);
      uVar135 = a64_TBL(ZEXT816(0),auVar78,uVar15);
      fVar88 = (float)((ulong)uVar131 >> 0x20);
      auVar86._8_8_ = auVar85._0_8_;
      auVar86._0_8_ = auVar85._0_8_;
      *(undefined4 *)(param_4 + 0x430) = 0;
      uVar77 = DAT_0388a648;
      uVar91 = _UNK_038897c8;
      uVar53 = _DAT_038897c0;
      uVar127 = a64_TBL(ZEXT816(0),auVar86,DAT_0388a648);
      auVar19._12_4_ = fVar23;
      uVar54 = a64_TBL(ZEXT816(0),auVar19,uVar15);
      fVar23 = (float)((ulong)uVar54 >> 0x20);
      fVar31 = (float)_DAT_03889ad0;
      fVar125 = (float)((ulong)_DAT_03889ad0 >> 0x20);
      fVar102 = (float)_UNK_03889ad8;
      fVar130 = (float)((ulong)_UNK_03889ad8 >> 0x20);
      *(undefined8 *)(param_4 + 0x400) = *(undefined8 *)(param_4 + 0x3d0);
      uVar75 = a64_TBL(ZEXT816(0),auVar78,uVar76);
      fVar119 = (float)((ulong)uVar75 >> 0x20);
      *(undefined8 *)(param_4 + 0x408) = *(undefined8 *)(param_4 + 0x3d8);
      iVar61 = *(int *)(param_4 + 0x3c0);
      fVar24 = (fVar24 * (float)uVar131 + fVar31 * fVar60 * (float)uVar133 +
               fVar31 * (float)uVar54 * (float)uVar103) - (float)uVar132 * (float)uVar104;
      fVar32 = (fVar32 * fVar88 + fVar125 * fVar71 * (float)((ulong)uVar133 >> 0x20) +
               fVar125 * fVar23 * (float)((ulong)uVar103 >> 0x20)) -
               fVar110 * (float)((ulong)uVar104 >> 0x20);
      auVar99._0_8_ = CONCAT44(fVar32,fVar24);
      auVar99._8_4_ =
           (auVar85._8_4_ * (float)uVar131 + fVar102 * (float)uVar132 * (float)uVar128 +
           fVar102 * fVar60 * (float)uVar127) - (float)uVar54 * (float)uVar134;
      auVar99._12_4_ =
           (auVar85._12_4_ * fVar88 + fVar130 * fVar110 * (float)((ulong)uVar128 >> 0x20) +
           fVar130 * fVar71 * (float)((ulong)uVar127 >> 0x20)) -
           fVar23 * (float)((ulong)uVar134 >> 0x20);
      uVar103 = a64_TBL(ZEXT816(0),auVar99,uVar76);
      uVar76 = a64_TBL(ZEXT816(0),auVar99,uVar121);
      uVar104 = a64_TBL(ZEXT816(0),auVar99,uVar111);
      uVar15 = a64_TBL(ZEXT816(0),auVar99,uVar15);
      uVar121 = a64_TBL(ZEXT816(0),auVar99,uVar126);
      uVar54 = a64_TBL(ZEXT816(0),auVar78,uVar111);
      auVar100._8_8_ = auVar99._0_8_;
      auVar100._0_8_ = auVar99._0_8_;
      fVar23 = (float)((ulong)uVar54 >> 0x20);
      uVar77 = a64_TBL(ZEXT816(0),auVar100,uVar77);
      fVar88 = (float)((ulong)uVar135 >> 0x20);
      fVar60 = ((float)uVar75 * fVar24 + fVar31 * fVar33 * (float)uVar103 +
               fVar31 * (float)uVar135 * (float)uVar104) - (float)uVar54 * (float)uVar15;
      fVar71 = (fVar119 * fVar32 + fVar125 * fVar90 * (float)((ulong)uVar103 >> 0x20) +
               fVar125 * fVar88 * (float)((ulong)uVar104 >> 0x20)) -
               fVar23 * (float)((ulong)uVar15 >> 0x20);
      fVar33 = ((float)uVar75 * auVar99._8_4_ + fVar102 * (float)uVar54 * (float)uVar76 +
               fVar102 * fVar33 * (float)uVar77) - (float)uVar135 * (float)uVar121;
      fVar23 = (fVar119 * auVar99._12_4_ + fVar130 * fVar23 * (float)((ulong)uVar76 >> 0x20) +
               fVar130 * fVar90 * (float)((ulong)uVar77 >> 0x20)) -
               fVar88 * (float)((ulong)uVar121 >> 0x20);
      auVar28[0] = SUB41(fVar60,0) & (byte)uVar53;
      auVar28[1] = (byte)((uint)fVar60 >> 8) & (byte)((ulong)uVar53 >> 8);
      auVar28[2] = (byte)((uint)fVar60 >> 0x10) & (byte)((ulong)uVar53 >> 0x10);
      auVar28[3] = (byte)((uint)fVar60 >> 0x18) & (byte)((ulong)uVar53 >> 0x18);
      auVar28[4] = SUB41(fVar71,0) & (byte)((ulong)uVar53 >> 0x20);
      auVar28[5] = (byte)((uint)fVar71 >> 8) & (byte)((ulong)uVar53 >> 0x28);
      auVar28[6] = (byte)((uint)fVar71 >> 0x10) & (byte)((ulong)uVar53 >> 0x30);
      auVar28[7] = (byte)((uint)fVar71 >> 0x18) & (byte)((ulong)uVar53 >> 0x38);
      auVar28[8] = SUB41(fVar33,0) & (byte)uVar91;
      auVar28[9] = (byte)((uint)fVar33 >> 8) & (byte)((ulong)uVar91 >> 8);
      auVar28[10] = (byte)((uint)fVar33 >> 0x10) & (byte)((ulong)uVar91 >> 0x10);
      auVar28[0xb] = (byte)((uint)fVar33 >> 0x18) & (byte)((ulong)uVar91 >> 0x18);
      auVar28[0xc] = SUB41(fVar23,0) & (byte)((ulong)uVar91 >> 0x20);
      auVar28[0xd] = (byte)((uint)fVar23 >> 8) & (byte)((ulong)uVar91 >> 0x28);
      auVar28[0xe] = (byte)((uint)fVar23 >> 0x10) & (byte)((ulong)uVar91 >> 0x30);
      auVar28[0xf] = (byte)((uint)fVar23 >> 0x18) & (byte)((ulong)uVar91 >> 0x38);
    }
    else {
      auVar70._0_4_ = 0.0 - fVar60;
      auVar70._4_4_ = 0.0 - fVar71;
      auVar70._8_4_ = 0.0 - fVar33;
      auVar70._12_4_ = 0.0 - fVar23;
      uVar111 = a64_TBL(ZEXT816(0),auVar70,DAT_0388a580);
      fVar31 = fVar90 * (float)_DAT_03889ac0;
      fVar88 = fVar24 * (float)((ulong)_DAT_03889ac0 >> 0x20);
      auVar83._0_8_ = CONCAT44(fVar88,fVar31);
      auVar83._8_4_ = auVar93._8_4_ * (float)_UNK_03889ac8;
      auVar83._12_4_ = auVar93._12_4_ * (float)((ulong)_UNK_03889ac8 >> 0x20);
      uVar91 = a64_TBL(ZEXT816(0),auVar83,uVar15);
      uVar131 = a64_TBL(ZEXT816(0),auVar83,DAT_0388a790);
      uVar121 = a64_TBL(ZEXT816(0),auVar70,DAT_0388a680);
      uVar53 = a64_TBL(ZEXT816(0),auVar83,DAT_0388a580);
      uVar132 = a64_TBL(ZEXT816(0),auVar83,DAT_0388a6c8);
      fVar124 = (float)((ulong)uVar121 >> 0x20);
      uVar126 = a64_TBL(ZEXT816(0),auVar70,uVar15);
      *(undefined4 *)(param_4 + 0x430) = 0;
      fVar119 = (float)((ulong)uVar111 >> 0x20);
      uVar133 = a64_TBL(ZEXT816(0),auVar83,uVar75);
      auVar84._8_8_ = auVar83._0_8_;
      auVar84._0_8_ = auVar83._0_8_;
      fVar129 = (float)((ulong)uVar126 >> 0x20);
      uVar76 = a64_TBL(ZEXT816(0),auVar84,DAT_0388a648);
      uVar77 = a64_TBL(ZEXT816(0),auVar93,uVar15);
      fVar32 = (float)_DAT_03889ad0;
      fVar125 = (float)((ulong)_DAT_03889ad0 >> 0x20);
      fVar102 = (float)_UNK_03889ad8;
      fVar130 = (float)((ulong)_UNK_03889ad8 >> 0x20);
      uVar127 = a64_TBL(ZEXT816(0),auVar93,uVar103);
      fVar110 = (fVar31 * (float)uVar111 + fVar32 * auVar70._0_4_ * (float)uVar53 +
                fVar32 * (float)uVar126 * (float)uVar133) - (float)uVar121 * (float)uVar91;
      fVar120 = (fVar88 * fVar119 + fVar125 * auVar70._4_4_ * (float)((ulong)uVar53 >> 0x20) +
                fVar125 * fVar129 * (float)((ulong)uVar133 >> 0x20)) -
                fVar124 * (float)((ulong)uVar91 >> 0x20);
      auVar116._0_8_ = CONCAT44(fVar120,fVar110);
      auVar116._8_4_ =
           (auVar83._8_4_ * (float)uVar111 + fVar102 * (float)uVar121 * (float)uVar132 +
           fVar102 * auVar70._0_4_ * (float)uVar76) - (float)uVar126 * (float)uVar131;
      auVar116._12_4_ =
           (auVar83._12_4_ * fVar119 + fVar130 * fVar124 * (float)((ulong)uVar132 >> 0x20) +
           fVar130 * auVar70._4_4_ * (float)((ulong)uVar76 >> 0x20)) -
           fVar129 * (float)((ulong)uVar131 >> 0x20);
      uVar53 = a64_TBL(ZEXT816(0),auVar116,uVar103);
      fVar119 = (float)((ulong)uVar127 >> 0x20);
      uVar91 = a64_TBL(ZEXT816(0),auVar116,uVar104);
      uVar76 = a64_TBL(ZEXT816(0),auVar116,uVar75);
      uVar103 = a64_TBL(ZEXT816(0),auVar93,uVar75);
      fVar31 = (float)((ulong)uVar103 >> 0x20);
      fVar88 = (float)((ulong)uVar77 >> 0x20);
      auVar16._8_4_ = fVar110;
      auVar16._0_8_ = auVar116._0_8_;
      auVar16._12_4_ = fVar120;
      uVar104 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a648);
      uVar15 = a64_TBL(ZEXT816(0),auVar116,uVar15);
      uVar75 = a64_TBL(ZEXT816(0),auVar116,uVar54);
      fVar32 = ((float)uVar127 * fVar110 + fVar32 * fVar90 * (float)uVar53 +
               fVar32 * (float)uVar77 * (float)uVar76) - (float)uVar103 * (float)uVar15;
      fVar125 = (fVar119 * fVar120 + fVar125 * fVar24 * (float)((ulong)uVar53 >> 0x20) +
                fVar125 * fVar88 * (float)((ulong)uVar76 >> 0x20)) -
                fVar31 * (float)((ulong)uVar15 >> 0x20);
      fVar90 = ((float)uVar127 * auVar116._8_4_ + fVar102 * (float)uVar103 * (float)uVar91 +
               fVar102 * fVar90 * (float)uVar104) - (float)uVar77 * (float)uVar75;
      fVar24 = (fVar119 * auVar116._12_4_ + fVar130 * fVar31 * (float)((ulong)uVar91 >> 0x20) +
               fVar130 * fVar24 * (float)((ulong)uVar104 >> 0x20)) -
               fVar88 * (float)((ulong)uVar75 >> 0x20);
      *(float *)(param_4 + 0x408) = fVar33 + *(float *)(param_4 + 0x3d8);
      *(float *)(param_4 + 0x40c) = fVar23 + *(float *)(param_4 + 0x3dc);
      *(float *)(param_4 + 0x400) = fVar60 + *(float *)(param_4 + 0x3d0);
      *(float *)(param_4 + 0x404) = fVar71 + *(float *)(param_4 + 0x3d4);
      auVar28[0] = SUB41(fVar32,0) & (byte)_DAT_038897c0;
      auVar28[1] = (byte)((uint)fVar32 >> 8) & (byte)((ulong)_DAT_038897c0 >> 8);
      auVar28[2] = (byte)((uint)fVar32 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x10);
      auVar28[3] = (byte)((uint)fVar32 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18);
      auVar28[4] = SUB41(fVar125,0) & (byte)((ulong)_DAT_038897c0 >> 0x20);
      auVar28[5] = (byte)((uint)fVar125 >> 8) & (byte)((ulong)_DAT_038897c0 >> 0x28);
      auVar28[6] = (byte)((uint)fVar125 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x30);
      auVar28[7] = (byte)((uint)fVar125 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38);
      auVar28[8] = SUB41(fVar90,0) & (byte)_UNK_038897c8;
      auVar28[9] = (byte)((uint)fVar90 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
      auVar28[10] = (byte)((uint)fVar90 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
      auVar28[0xb] = (byte)((uint)fVar90 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
      auVar28[0xc] = SUB41(fVar24,0) & (byte)((ulong)_UNK_038897c8 >> 0x20);
      auVar28[0xd] = (byte)((uint)fVar24 >> 8) & (byte)((ulong)_UNK_038897c8 >> 0x28);
      auVar28[0xe] = (byte)((uint)fVar24 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30);
      auVar28[0xf] = (byte)((uint)fVar24 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38);
    }
    *(long *)(param_4 + 0x418) = auVar28._8_8_;
    *(long *)(param_4 + 0x410) = auVar28._0_8_;
    if (iVar61 == 5) {
      puVar22 = (undefined8 *)PTR_DAT_0437a100;
LAB_019e26d4:
      uVar15 = *puVar22;
      *(undefined8 *)(param_4 + 0x428) = puVar22[1];
      *(undefined8 *)(param_4 + 0x420) = uVar15;
      iVar61 = *(int *)(param_4 + 0x34c);
      goto joined_r0x019e26e4;
    }
    if (iVar61 == 4) {
      puVar22 = (undefined8 *)PTR_DAT_0437a0f8;
      goto LAB_019e26d4;
    }
    if (iVar61 == 6) {
      puVar22 = (undefined8 *)PTR_DAT_04382320;
      goto LAB_019e26d4;
    }
    goto LAB_019e283c;
  }
  fVar31 = *(float *)(param_4 + 0x340);
  auVar101._0_4_ = fVar23 * fVar31 * 0.5;
  auVar101._4_4_ = fVar60 * fVar31 * 0.5;
  auVar101._8_4_ = fVar71 * fVar31 * 0.5;
  auVar101._12_4_ = fVar33 * fVar31 * 0.5;
  fVar60 = fVar90 * (float)_DAT_03889ac0;
  fVar33 = fVar24 * (float)((ulong)_DAT_03889ac0 >> 0x20);
  auVar117._0_8_ = CONCAT44(fVar33,fVar60);
  auVar117._8_4_ = auVar93._8_4_ * (float)_UNK_03889ac8;
  auVar117._12_4_ = auVar93._12_4_ * (float)((ulong)_UNK_03889ac8 >> 0x20);
  uVar128 = a64_TBL(ZEXT816(0),auVar117,uVar15);
  uVar111 = a64_TBL(ZEXT816(0),auVar117,DAT_0388a790);
  uVar127 = a64_TBL(ZEXT816(0),auVar117,DAT_0388a6c8);
  uVar76 = a64_TBL(ZEXT816(0),auVar117,DAT_0388a580);
  uVar132 = a64_TBL(ZEXT816(0),auVar117,DAT_0388a680);
  uVar91 = a64_TBL(ZEXT816(0),auVar101,DAT_0388a580);
  fVar130 = (float)((ulong)uVar91 >> 0x20);
  uVar121 = a64_TBL(ZEXT816(0),auVar101,DAT_0388a680);
  fVar120 = (float)((ulong)uVar121 >> 0x20);
  auVar118._8_8_ = auVar117._0_8_;
  auVar118._0_8_ = auVar117._0_8_;
  uVar131 = a64_TBL(ZEXT816(0),auVar118,DAT_0388a648);
  uVar126 = a64_TBL(ZEXT816(0),auVar101,uVar15);
  fVar23 = (float)((ulong)uVar126 >> 0x20);
  fVar71 = (float)_DAT_03889ad0;
  fVar32 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar125 = (float)_UNK_03889ad8;
  fVar102 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  uVar77 = a64_TBL(ZEXT816(0),auVar93,uVar15);
  fVar119 = (float)((ulong)uVar77 >> 0x20);
  uVar133 = a64_TBL(ZEXT816(0),auVar93,DAT_0388a580);
  fVar60 = (fVar60 * (float)uVar91 + fVar71 * auVar101._0_4_ * (float)uVar76 +
           fVar71 * (float)uVar126 * (float)uVar132) - (float)uVar121 * (float)uVar128;
  fVar88 = (fVar33 * fVar130 + fVar32 * auVar101._4_4_ * (float)((ulong)uVar76 >> 0x20) +
           fVar32 * fVar23 * (float)((ulong)uVar132 >> 0x20)) -
           fVar120 * (float)((ulong)uVar128 >> 0x20);
  fVar110 = (auVar117._8_4_ * (float)uVar91 + fVar125 * (float)uVar121 * (float)uVar127 +
            fVar125 * auVar101._0_4_ * (float)uVar131) - (float)uVar126 * (float)uVar111;
  fVar130 = (auVar117._12_4_ * fVar130 + fVar102 * fVar120 * (float)((ulong)uVar127 >> 0x20) +
            fVar102 * auVar101._4_4_ * (float)((ulong)uVar131 >> 0x20)) -
            fVar23 * (float)((ulong)uVar111 >> 0x20);
  *(float *)(param_4 + 0x434) = fVar31 + fVar31;
  auVar9._4_4_ = fVar88;
  auVar9._0_4_ = fVar60;
  auVar9._8_4_ = fVar110;
  auVar9._12_4_ = fVar130;
  uVar103 = a64_TBL(ZEXT816(0),auVar9,uVar103);
  fVar31 = (float)((ulong)uVar133 >> 0x20);
  auVar10._4_4_ = fVar88;
  auVar10._0_4_ = fVar60;
  auVar10._8_4_ = fVar110;
  auVar10._12_4_ = fVar130;
  uVar54 = a64_TBL(ZEXT816(0),auVar10,uVar54);
  auVar11._4_4_ = fVar88;
  auVar11._0_4_ = fVar60;
  auVar11._8_4_ = fVar110;
  auVar11._12_4_ = fVar130;
  uVar91 = a64_TBL(ZEXT816(0),auVar11,uVar104);
  auVar12._4_4_ = fVar88;
  auVar12._0_4_ = fVar60;
  auVar12._8_4_ = fVar110;
  auVar12._12_4_ = fVar130;
  uVar15 = a64_TBL(ZEXT816(0),auVar12,uVar15);
  auVar13._4_4_ = fVar88;
  auVar13._0_4_ = fVar60;
  auVar13._8_4_ = fVar110;
  auVar13._12_4_ = fVar130;
  uVar53 = a64_TBL(ZEXT816(0),auVar13,uVar53);
  uVar104 = a64_TBL(ZEXT816(0),auVar93,uVar104);
  fVar33 = (float)((ulong)uVar104 >> 0x20);
  *(float *)(param_4 + 0x438) = *(float *)(param_4 + 0x344) / 30.0;
  auVar14._4_4_ = fVar88;
  auVar14._0_4_ = fVar60;
  auVar14._8_4_ = fVar60;
  auVar14._12_4_ = fVar88;
  uVar75 = a64_TBL(ZEXT816(0),auVar14,uVar75);
  fVar23 = ((float)uVar133 * fVar60 + fVar71 * fVar90 * (float)uVar103 +
           fVar71 * (float)uVar77 * (float)uVar91) - (float)uVar104 * (float)uVar15;
  fVar60 = (fVar31 * fVar88 + fVar32 * fVar24 * (float)((ulong)uVar103 >> 0x20) +
           fVar32 * fVar119 * (float)((ulong)uVar91 >> 0x20)) -
           fVar33 * (float)((ulong)uVar15 >> 0x20);
  fVar71 = ((float)uVar133 * fVar110 + fVar125 * (float)uVar104 * (float)uVar54 +
           fVar125 * fVar90 * (float)uVar75) - (float)uVar77 * (float)uVar53;
  fVar33 = (fVar31 * fVar130 + fVar102 * fVar33 * (float)((ulong)uVar54 >> 0x20) +
           fVar102 * fVar24 * (float)((ulong)uVar75 >> 0x20)) -
           fVar119 * (float)((ulong)uVar53 >> 0x20);
  fVar90 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18),
                           CONCAT12((byte)((uint)fVar23 >> 0x10) &
                                    (byte)((ulong)_DAT_038897c0 >> 0x10),
                                    CONCAT11((byte)((uint)fVar23 >> 8) &
                                             (byte)((ulong)_DAT_038897c0 >> 8),
                                             SUB41(fVar23,0) & (byte)_DAT_038897c0)));
  auVar25._0_8_ =
       CONCAT17((byte)((uint)fVar60 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                CONCAT16((byte)((uint)fVar60 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x30),
                         CONCAT15((byte)((uint)fVar60 >> 8) & (byte)((ulong)_DAT_038897c0 >> 0x28),
                                  CONCAT14(SUB41(fVar60,0) & (byte)((ulong)_DAT_038897c0 >> 0x20),
                                           fVar90))));
  auVar25[8] = SUB41(fVar71,0) & (byte)_UNK_038897c8;
  auVar25[9] = (byte)((uint)fVar71 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
  auVar25[10] = (byte)((uint)fVar71 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
  auVar25[0xb] = (byte)((uint)fVar71 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
  auVar29[0xc] = SUB41(fVar33,0) & (byte)((ulong)_UNK_038897c8 >> 0x20);
  auVar29._0_12_ = auVar25;
  auVar29[0xd] = (byte)((uint)fVar33 >> 8) & (byte)((ulong)_UNK_038897c8 >> 0x28);
  auVar29[0xe] = (byte)((uint)fVar33 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30);
  auVar29[0xf] = (byte)((uint)fVar33 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38);
  *(undefined4 *)(param_4 + 0x430) = 0;
  fVar33 = (float)*(undefined8 *)(param_4 + 0x3d0);
  fVar71 = (float)((ulong)auVar25._0_8_ >> 0x20);
  fVar24 = (float)((ulong)*(undefined8 *)(param_4 + 0x3d0) >> 0x20);
  fVar23 = fVar24 - fVar71;
  fVar31 = (float)*(undefined8 *)(param_4 + 0x3d8);
  fVar32 = (float)((ulong)*(undefined8 *)(param_4 + 0x3d8) >> 0x20);
  fVar60 = fVar32 - auVar29._12_4_;
  auVar30._0_8_ = CONCAT44(fVar24 + fVar71,fVar33 + fVar90);
  auVar30._8_4_ = fVar31 + auVar25._8_4_;
  auVar30._12_4_ = fVar32 + auVar29._12_4_;
  *(ulong *)(param_4 + 1000) =
       CONCAT17((char)((uint)fVar60 >> 0x18),
                CONCAT16((char)((uint)fVar60 >> 0x10),
                         CONCAT15((char)((uint)fVar60 >> 8),
                                  CONCAT14(SUB41(fVar60,0),fVar31 - auVar25._8_4_))));
  *(ulong *)(param_4 + 0x3e0) =
       CONCAT17((char)((uint)fVar23 >> 0x18),
                CONCAT16((char)((uint)fVar23 >> 0x10),
                         CONCAT15((char)((uint)fVar23 >> 8),
                                  CONCAT14(SUB41(fVar23,0),fVar33 - fVar90))));
  *(long *)(param_4 + 0x3f8) = auVar30._8_8_;
  *(undefined8 *)(param_4 + 0x3f0) = auVar30._0_8_;
LAB_019e283c:
  iVar61 = *(int *)(param_4 + 0x34c);
joined_r0x019e26e4:
  if (iVar61 == 0) {
    iVar61 = FUN_019e1cf0(1);
    bVar20 = 0 < iVar61;
  }
  else {
    bVar20 = true;
    if (iVar61 != 1) {
      bVar20 = false;
    }
  }
  *(bool *)(param_4 + 0x440) = bVar20;
  if ((*(uint *)(param_4 + 0x3c0) < 7) &&
     ((1 << (ulong)(*(uint *)(param_4 + 0x3c0) & 0x1f) & 0x54U) != 0)) {
    local_50 = 0x74956a0fbd77fbe5;
    puStack_48 = &DAT_038aa1f7;
    local_40 = 4;
    local_38 = (long *)0x0;
    FUN_019e18f8(param_4,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


