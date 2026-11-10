/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fa1a08; name: FUN_00fa1a08
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fa1a08(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long *param_4)

{
  undefined2 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined3 uVar5;
  ulong uVar6;
  float fVar7;
  float extraout_s0;
  float fVar8;
  float extraout_var;
  float extraout_var_00;
  float fVar10;
  float fVar11;
  float extraout_var_01;
  float fVar12;
  undefined1 auVar9 [16];
  undefined1 uVar13;
  undefined1 uVar14;
  byte bVar15;
  undefined1 uVar16;
  byte bVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined7 uVar31;
  undefined1 auVar32 [12];
  byte bVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar37;
  int iVar38;
  float fVar39;
  float fVar48;
  int iVar50;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar49;
  int iVar51;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  int iVar58;
  undefined8 uVar52;
  int iVar59;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar60;
  float fVar68;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined8 uVar69;
  undefined8 uVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  
  uVar29 = param_2[0xf];
  uVar27 = param_2[0xe];
  uVar25 = param_2[0xd];
  uVar24 = param_2[0xc];
  uVar22 = param_2[0xb];
  uVar20 = param_2[10];
  uVar19 = param_2[9];
  uVar30 = param_2[8];
  uVar28 = param_2[7];
  uVar26 = param_2[6];
  uVar23 = param_2[5];
  uVar21 = param_2[4];
  uVar18 = param_2[3];
  uVar16 = param_2[2];
  uVar14 = param_2[1];
  uVar13 = param_2[0];
  (**(code **)(*param_4 + 0x40))();
  auVar40._0_4_ = extraout_s0 * extraout_s0;
  auVar40._4_4_ = extraout_var * extraout_var;
  auVar40._8_4_ = extraout_var_00 * extraout_var_00;
  auVar40._12_4_ = extraout_var_01 * extraout_var_01;
  auVar53 = NEON_ext(auVar40,auVar40,8,1);
  fVar37 = auVar53._0_4_ + auVar40._0_4_;
  fVar48 = auVar53._4_4_ + auVar40._4_4_;
  fVar7 = fVar37 + fVar48;
  fVar37 = fVar37 + fVar48;
  auVar41._8_8_ = CONCAT44(fVar37,fVar7);
  auVar41._0_8_ = CONCAT44(fVar37,fVar7);
  auVar53 = NEON_frsqrte(auVar41,4);
  auVar61._0_4_ = auVar53._0_4_ * fVar7;
  auVar61._4_4_ = auVar53._4_4_ * fVar37;
  auVar61._8_4_ = auVar53._8_4_ * fVar7;
  auVar61._12_4_ = auVar53._12_4_ * fVar37;
  auVar62 = NEON_frsqrts(auVar53,auVar61,4);
  auVar54._0_4_ = auVar53._0_4_ * auVar62._0_4_;
  auVar54._4_4_ = auVar53._4_4_ * auVar62._4_4_;
  auVar54._8_4_ = auVar53._8_4_ * auVar62._8_4_;
  auVar54._12_4_ = auVar53._12_4_ * auVar62._12_4_;
  auVar63._0_4_ = fVar7 * auVar54._0_4_;
  auVar63._4_4_ = fVar37 * auVar54._4_4_;
  auVar63._8_4_ = fVar7 * auVar54._8_4_;
  auVar63._12_4_ = fVar37 * auVar54._12_4_;
  iVar38 = -(uint)(fVar7 == 0.0);
  iVar49 = -(uint)(fVar37 == 0.0);
  iVar50 = -(uint)(fVar7 == 0.0);
  iVar51 = -(uint)(fVar37 == 0.0);
  auVar53 = NEON_frsqrts(auVar54,auVar63,4);
  fVar7 = extraout_s0 * auVar54._0_4_ * auVar53._0_4_;
  fVar37 = extraout_var * auVar54._4_4_ * auVar53._4_4_;
  fVar48 = extraout_var_00 * auVar54._8_4_ * auVar53._8_4_;
  fVar12 = extraout_var_01 * auVar54._12_4_ * auVar53._12_4_;
  fVar39 = (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                           CONCAT12((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                    CONCAT11((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                             SUB41(fVar7,0) & ~(byte)iVar38)));
  auVar42._0_8_ =
       CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                CONCAT16((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                         CONCAT15((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar49 >> 8),
                                  CONCAT14(SUB41(fVar37,0) & ~(byte)iVar49,fVar39))));
  auVar42[8] = SUB41(fVar48,0) & ~(byte)iVar50;
  auVar42[9] = (byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar50 >> 8);
  auVar42[10] = (byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  auVar42[0xb] = (byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  auVar42[0xc] = SUB41(fVar12,0) & ~(byte)iVar51;
  auVar42[0xd] = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar51 >> 8);
  auVar42[0xe] = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
  auVar42[0xf] = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
  auVar55._0_4_ =
       (float)CONCAT13(uVar18,CONCAT12(uVar16,CONCAT11(uVar14,uVar13))) *
       (float)CONCAT13(uVar18,CONCAT12(uVar16,CONCAT11(uVar14,uVar13)));
  auVar55._4_4_ =
       (float)CONCAT13(uVar28,CONCAT12(uVar26,CONCAT11(uVar23,uVar21))) *
       (float)CONCAT13(uVar28,CONCAT12(uVar26,CONCAT11(uVar23,uVar21)));
  auVar55._8_4_ =
       (float)CONCAT13(uVar22,CONCAT12(uVar20,CONCAT11(uVar19,uVar30))) *
       (float)CONCAT13(uVar22,CONCAT12(uVar20,CONCAT11(uVar19,uVar30)));
  auVar55._12_4_ =
       (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar25,uVar24))) *
       (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar25,uVar24)));
  auVar53 = NEON_ext(auVar55,auVar55,8,1);
  fVar37 = auVar53._0_4_ + auVar55._0_4_;
  fVar48 = auVar53._4_4_ + auVar55._4_4_;
  fVar7 = fVar37 + fVar48;
  fVar37 = fVar37 + fVar48;
  auVar56._8_8_ = CONCAT44(fVar37,fVar7);
  auVar56._0_8_ = CONCAT44(fVar37,fVar7);
  auVar53 = NEON_frsqrte(auVar56,4);
  auVar71._0_4_ = auVar53._0_4_ * fVar7;
  auVar71._4_4_ = auVar53._4_4_ * fVar37;
  auVar71._8_4_ = auVar53._8_4_ * fVar7;
  auVar71._12_4_ = auVar53._12_4_ * fVar37;
  auVar62 = NEON_frsqrts(auVar53,auVar71,4);
  auVar64._0_4_ = auVar53._0_4_ * auVar62._0_4_;
  auVar64._4_4_ = auVar53._4_4_ * auVar62._4_4_;
  auVar64._8_4_ = auVar53._8_4_ * auVar62._8_4_;
  auVar64._12_4_ = auVar53._12_4_ * auVar62._12_4_;
  auVar72._0_4_ = fVar7 * auVar64._0_4_;
  auVar72._4_4_ = fVar37 * auVar64._4_4_;
  auVar72._8_4_ = fVar7 * auVar64._8_4_;
  auVar72._12_4_ = fVar37 * auVar64._12_4_;
  iVar51 = -(uint)(fVar7 == 0.0);
  iVar58 = -(uint)(fVar37 == 0.0);
  iVar59 = -(uint)(fVar7 == 0.0);
  auVar53 = NEON_frsqrts(auVar64,auVar72,4);
  fVar37 = (float)CONCAT13(uVar18,CONCAT12(uVar16,CONCAT11(uVar14,uVar13))) *
           auVar64._0_4_ * auVar53._0_4_;
  fVar7 = (float)CONCAT13(uVar28,CONCAT12(uVar26,CONCAT11(uVar23,uVar21))) *
          auVar64._4_4_ * auVar53._4_4_;
  fVar48 = (float)CONCAT13(uVar22,CONCAT12(uVar20,CONCAT11(uVar19,uVar30))) *
           auVar64._8_4_ * auVar53._8_4_;
  bVar15 = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
  bVar17 = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
  fVar8 = param_3._0_4_;
  auVar65._0_4_ = fVar8 * fVar8;
  fVar10 = param_3._4_4_;
  auVar65._4_4_ = fVar10 * fVar10;
  fVar11 = param_3._8_4_;
  auVar65._8_4_ = fVar11 * fVar11;
  auVar65._12_4_ = param_3._12_4_ * param_3._12_4_;
  auVar53 = NEON_ext(auVar65,auVar65,8,1);
  fVar60 = auVar53._0_4_ + auVar65._0_4_;
  fVar68 = auVar53._4_4_ + auVar65._4_4_;
  fVar12 = fVar60 + fVar68;
  fVar60 = fVar60 + fVar68;
  auVar66._8_8_ = CONCAT44(fVar60,fVar12);
  auVar66._0_8_ = CONCAT44(fVar60,fVar12);
  auVar53 = NEON_frsqrte(auVar66,4);
  auVar76._0_4_ = auVar53._0_4_ * fVar12;
  auVar76._4_4_ = auVar53._4_4_ * fVar60;
  auVar76._8_4_ = auVar53._8_4_ * fVar12;
  auVar76._12_4_ = auVar53._12_4_ * fVar60;
  auVar62 = NEON_frsqrts(auVar53,auVar76,4);
  auVar73._0_4_ = auVar53._0_4_ * auVar62._0_4_;
  auVar73._4_4_ = auVar53._4_4_ * auVar62._4_4_;
  auVar73._8_4_ = auVar53._8_4_ * auVar62._8_4_;
  auVar73._12_4_ = auVar53._12_4_ * auVar62._12_4_;
  auVar77._0_4_ = fVar12 * auVar73._0_4_;
  auVar77._4_4_ = fVar60 * auVar73._4_4_;
  auVar77._8_4_ = fVar12 * auVar73._8_4_;
  auVar77._12_4_ = fVar60 * auVar73._12_4_;
  auVar53 = NEON_frsqrts(auVar73,auVar77,4);
  fVar8 = fVar8 * auVar73._0_4_ * auVar53._0_4_;
  fVar10 = fVar10 * auVar73._4_4_ * auVar53._4_4_;
  fVar11 = fVar11 * auVar73._8_4_ * auVar53._8_4_;
  iVar38 = -(uint)(fVar12 == 0.0);
  iVar49 = -(uint)(fVar60 == 0.0);
  iVar50 = -(uint)(fVar12 == 0.0);
  uVar31 = CONCAT16((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                    CONCAT15((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar49 >> 8),
                             CONCAT14(SUB41(fVar10,0) & ~(byte)iVar49,
                                      CONCAT13((byte)((uint)fVar8 >> 0x18) &
                                               ~(byte)((uint)iVar38 >> 0x18),
                                               CONCAT12((byte)((uint)fVar8 >> 0x10) &
                                                        ~(byte)((uint)iVar38 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar8 >> 8) &
                                                                 ~(byte)((uint)iVar38 >> 8),
                                                                 SUB41(fVar8,0) & ~(byte)iVar38)))))
                   );
  bVar36 = (byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18);
  auVar32._0_8_ = CONCAT17(bVar36,uVar31);
  auVar32[8] = SUB41(fVar11,0) & ~(byte)iVar50;
  auVar32[9] = (byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar50 >> 8);
  auVar32[10] = (byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  auVar32[0xb] = (byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  uVar69 = NEON_ext(auVar42._0_8_,auVar32._0_8_,4,1);
  auVar53 = NEON_ext(auVar42,auVar42,8,1);
  fVar7 = (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18),
                          CONCAT12((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10),
                                   CONCAT11((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar58 >> 8),
                                            SUB41(fVar7,0) & ~(byte)iVar58)));
  fVar10 = auVar32._8_4_;
  auVar62 = NEON_fmov(0x3f800000,4);
  fVar12 = (float)_DAT_03889820 * fVar39 + (float)_DAT_0388a450 * fVar7 +
           (float)_DAT_03889eb0 * fVar10 + auVar62._0_4_;
  fVar60 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar39 +
           (float)((ulong)_DAT_0388a450 >> 0x20) * fVar7 +
           (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar10 + auVar62._4_4_;
  fVar8 = (float)_UNK_03889828 * fVar39 + (float)_UNK_0388a458 * fVar7 +
          (float)_UNK_03889eb8 * fVar10 + auVar62._8_4_;
  fVar10 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar39 +
           (float)((ulong)_UNK_0388a458 >> 0x20) * fVar7 +
           (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar10 + auVar62._12_4_;
  fVar7 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18),
                          CONCAT12((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10),
                                   CONCAT11((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar59 >> 8),
                                            SUB41(fVar48,0) & ~(byte)iVar59)));
  uVar1 = CONCAT11((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar51 >> 8),
                   SUB41(fVar37,0) & ~(byte)iVar51);
  auVar33._0_4_ = (float)uVar69 + (float)CONCAT13(bVar17,CONCAT12(bVar15,uVar1));
  fVar37 = (float)((ulong)uVar69 >> 0x20);
  auVar33._4_4_ = fVar37 + auVar53._0_4_;
  uVar5 = (undefined3)((uint7)uVar31 >> 0x20);
  auVar33._8_4_ = fVar7 + (float)CONCAT13(bVar36,uVar5);
  auVar33._12_4_ = 0;
  auVar43._0_4_ = (float)uVar69 - (float)CONCAT13(bVar17,CONCAT12(bVar15,uVar1));
  auVar43._4_4_ = fVar37 - auVar53._0_4_;
  auVar43._8_4_ = fVar7 - (float)CONCAT13(bVar36,uVar5);
  auVar43._12_4_ = 0;
  uVar6 = a64_TBL(ZEXT816(0),auVar33,auVar43,DAT_0388a888);
  uVar69 = a64_TBL(ZEXT816(0),auVar33,auVar43,DAT_0388a710);
  auVar67._8_8_ = uVar69;
  auVar67._0_8_ = uVar6 & 0xffffffff00000000;
  uVar52 = a64_TBL(ZEXT816(0),auVar33,auVar43,DAT_0388a758);
  auVar79._4_12_ = auVar67._4_12_;
  auVar79._0_4_ = fVar12;
  auVar57._0_8_ = a64_TBL(ZEXT816(0),auVar33,auVar43,DAT_0388a880);
  uVar70 = a64_TBL(ZEXT816(0),auVar33,auVar43,DAT_0388a640);
  auVar74._0_8_ = a64_TBL(ZEXT816(0),auVar33,auVar43,DAT_0388a700);
  uVar69 = a64_TBL(ZEXT816(0),auVar33,auVar43,DAT_0388a590);
  auVar44._4_4_ = fVar60;
  auVar44._0_4_ = fVar60;
  auVar44._8_4_ = fVar60;
  auVar44._12_4_ = fVar60;
  auVar57._12_4_ = (undefined4)((ulong)uVar70 >> 0x20);
  auVar57._8_4_ = fVar8;
  auVar74._8_8_ = uVar69;
  auVar81._4_4_ = fVar12;
  auVar81._0_4_ = fVar12;
  auVar81._8_4_ = fVar12;
  auVar81._12_4_ = fVar12;
  auVar78._0_8_ = CONCAT44(-(uint)(fVar12 <= fVar60),-(uint)(fVar12 <= fVar60));
  auVar78._8_4_ = -(uint)(fVar12 <= fVar60);
  auVar78._12_4_ = -(uint)(fVar12 <= fVar60);
  auVar80._8_8_ = auVar78._8_8_;
  auVar80._0_8_ = auVar78._0_8_;
  auVar53[4] = SUB41(fVar60,0);
  auVar53._0_4_ = (int)uVar6;
  auVar53[5] = (char)((uint)fVar60 >> 8);
  auVar53[6] = (char)((uint)fVar60 >> 0x10);
  auVar53[7] = (char)((uint)fVar60 >> 0x18);
  auVar53[8] = (char)uVar52;
  auVar53[9] = (char)((ulong)uVar52 >> 8);
  auVar53[10] = (char)((ulong)uVar52 >> 0x10);
  auVar53[0xb] = (char)((ulong)uVar52 >> 0x18);
  auVar53[0xc] = (char)((ulong)uVar52 >> 0x20);
  auVar53[0xd] = (char)((ulong)uVar52 >> 0x28);
  auVar53[0xe] = (char)((ulong)uVar52 >> 0x30);
  auVar53[0xf] = (char)((ulong)uVar52 >> 0x38);
  auVar79 = auVar79 ^ (auVar79 ^ auVar53) & auVar78;
  uVar13 = SUB41(fVar8,0);
  uVar14 = (undefined1)((uint)fVar8 >> 8);
  uVar16 = (undefined1)((uint)fVar8 >> 0x10);
  uVar18 = (undefined1)((uint)fVar8 >> 0x18);
  auVar75._0_12_ = auVar74._0_12_;
  auVar75._12_4_ = fVar10;
  auVar81 = auVar81 ^ (auVar81 ^ auVar44) & auVar80;
  auVar34._0_8_ = CONCAT44(-(uint)(auVar81._4_4_ <= fVar8),-(uint)(auVar81._0_4_ <= fVar8));
  auVar34._8_4_ = -(uint)(auVar81._8_4_ <= fVar8);
  auVar34._12_4_ = -(uint)(auVar81._12_4_ <= fVar8);
  auVar45._8_8_ = auVar34._8_8_;
  auVar45._0_8_ = auVar34._0_8_;
  auVar79 = auVar79 ^ (auVar79 ^ auVar57) & auVar34;
  auVar62[4] = uVar13;
  auVar62._0_4_ = fVar8;
  auVar62[5] = uVar14;
  auVar62[6] = uVar16;
  auVar62[7] = uVar18;
  auVar62[8] = uVar13;
  auVar62[9] = uVar14;
  auVar62[10] = uVar16;
  auVar62[0xb] = uVar18;
  auVar62[0xc] = uVar13;
  auVar62[0xd] = uVar14;
  auVar62[0xe] = uVar16;
  auVar62[0xf] = uVar18;
  auVar81 = auVar81 ^ (auVar81 ^ auVar62) & auVar45;
  auVar9._0_4_ = -(uint)(auVar81._0_4_ <= fVar10);
  auVar9._4_4_ = -(uint)(auVar81._4_4_ <= fVar10);
  auVar9._8_4_ = -(uint)(auVar81._8_4_ <= fVar10);
  auVar9._12_4_ = -(uint)(auVar81._12_4_ <= fVar10);
  auVar79 = auVar79 ^ (auVar79 ^ auVar75) & auVar9;
  fVar7 = auVar79._0_4_ * auVar79._0_4_;
  fVar37 = auVar79._4_4_ * auVar79._4_4_;
  uVar13 = (undefined1)((uint)fVar37 >> 8);
  uVar14 = (undefined1)((uint)fVar37 >> 0x10);
  uVar16 = (undefined1)((uint)fVar37 >> 0x18);
  fVar48 = auVar79._8_4_ * auVar79._8_4_;
  uVar18 = (undefined1)((uint)fVar48 >> 8);
  uVar21 = (undefined1)((uint)fVar48 >> 0x10);
  uVar23 = (undefined1)((uint)fVar48 >> 0x18);
  fVar12 = auVar79._12_4_ * auVar79._12_4_;
  uVar26 = (undefined1)((uint)fVar12 >> 8);
  uVar28 = (undefined1)((uint)fVar12 >> 0x10);
  uVar30 = (undefined1)((uint)fVar12 >> 0x18);
  auVar2[4] = SUB41(fVar37,0);
  auVar2._0_4_ = fVar7;
  auVar2[5] = uVar13;
  auVar2[6] = uVar14;
  auVar2[7] = uVar16;
  auVar2[8] = SUB41(fVar48,0);
  auVar2[9] = uVar18;
  auVar2[10] = uVar21;
  auVar2[0xb] = uVar23;
  auVar2[0xc] = SUB41(fVar12,0);
  auVar2[0xd] = uVar26;
  auVar2[0xe] = uVar28;
  auVar2[0xf] = uVar30;
  auVar3[4] = SUB41(fVar37,0);
  auVar3._0_4_ = fVar7;
  auVar3[5] = uVar13;
  auVar3[6] = uVar14;
  auVar3[7] = uVar16;
  auVar3[8] = SUB41(fVar48,0);
  auVar3[9] = uVar18;
  auVar3[10] = uVar21;
  auVar3[0xb] = uVar23;
  auVar3[0xc] = SUB41(fVar12,0);
  auVar3[0xd] = uVar26;
  auVar3[0xe] = uVar28;
  auVar3[0xf] = uVar30;
  auVar53 = NEON_ext(auVar2,auVar3,8,1);
  fVar7 = auVar53._0_4_ + fVar7;
  fVar37 = auVar53._4_4_ + fVar37;
  fVar48 = fVar7 + fVar37;
  fVar7 = fVar7 + fVar37;
  uVar13 = SUB41(fVar7,0);
  uVar14 = (undefined1)((uint)fVar7 >> 8);
  uVar16 = (undefined1)((uint)fVar7 >> 0x10);
  uVar18 = (undefined1)((uint)fVar7 >> 0x18);
  auVar4[4] = uVar13;
  auVar4._0_4_ = fVar48;
  auVar4[5] = uVar14;
  auVar4[6] = uVar16;
  auVar4[7] = uVar18;
  auVar4[8] = SUB41(fVar48,0);
  auVar4[9] = (char)((uint)fVar48 >> 8);
  auVar4[10] = (char)((uint)fVar48 >> 0x10);
  auVar4[0xb] = (char)((uint)fVar48 >> 0x18);
  auVar4[0xc] = uVar13;
  auVar4[0xd] = uVar14;
  auVar4[0xe] = uVar16;
  auVar4[0xf] = uVar18;
  auVar53 = NEON_frsqrte(auVar4,4);
  auVar46._0_4_ = auVar53._0_4_ * fVar48;
  auVar46._4_4_ = auVar53._4_4_ * fVar7;
  auVar46._8_4_ = auVar53._8_4_ * fVar48;
  uVar1 = (undefined2)(CONCAT15(uVar14,CONCAT14(uVar13,fVar48)) >> 0x20);
  auVar46._12_4_ = auVar53._12_4_ * (float)CONCAT13(uVar18,CONCAT12(uVar16,uVar1));
  auVar62 = NEON_frsqrts(auVar53,auVar46,4);
  auVar35._0_4_ = auVar53._0_4_ * auVar62._0_4_;
  auVar35._4_4_ = auVar53._4_4_ * auVar62._4_4_;
  auVar35._8_4_ = auVar53._8_4_ * auVar62._8_4_;
  auVar35._12_4_ = auVar53._12_4_ * auVar62._12_4_;
  auVar47._0_4_ = fVar48 * auVar35._0_4_;
  auVar47._4_4_ = fVar7 * auVar35._4_4_;
  auVar47._8_4_ = fVar48 * auVar35._8_4_;
  auVar47._12_4_ = (float)CONCAT13(uVar18,CONCAT12(uVar16,uVar1)) * auVar35._12_4_;
  NEON_frsqrts(auVar35,auVar47,4);
  return;
}


