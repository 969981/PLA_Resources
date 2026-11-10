/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a44c64; name: FUN_01a44c64
 */


/* WARNING: Removing unreachable block (ram,0x01a4523c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a44c64(float param_1,undefined1 param_2 [16],undefined1 param_3 [16],long param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long *plVar14;
  float fVar15;
  float extraout_s0;
  undefined4 uVar16;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float fVar18;
  undefined1 auVar17 [16];
  float fVar28;
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  float fVar27;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [12];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar48;
  int iVar50;
  undefined1 auVar37 [16];
  int iVar36;
  undefined1 auVar38 [16];
  int iVar49;
  int iVar51;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar58;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar66;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 uVar67;
  undefined8 uVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  long *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_4 + 0x300) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_4 + 0x300) + 0xc) == 0) {
    return;
  }
  FUN_00956dac(&local_48,param_4 + 0x300);
  (**(code **)(*local_48 + 0x40))();
  auVar37._0_4_ = extraout_s0 * extraout_s0;
  auVar37._4_4_ = extraout_var * extraout_var;
  auVar37._8_4_ = extraout_var_00 * extraout_var_00;
  auVar37._12_4_ = extraout_var_01 * extraout_var_01;
  auVar53 = NEON_ext(auVar37,auVar37,8,1);
  fVar35 = auVar53._0_4_ + auVar37._0_4_;
  fVar48 = auVar53._4_4_ + auVar37._4_4_;
  fVar15 = fVar35 + fVar48;
  fVar35 = fVar35 + fVar48;
  auVar38._8_8_ = CONCAT44(fVar35,fVar15);
  auVar38._0_8_ = CONCAT44(fVar35,fVar15);
  auVar53 = NEON_frsqrte(auVar38,4);
  auVar59._0_4_ = auVar53._0_4_ * fVar15;
  auVar59._4_4_ = auVar53._4_4_ * fVar35;
  auVar59._8_4_ = auVar53._8_4_ * fVar15;
  auVar59._12_4_ = auVar53._12_4_ * fVar35;
  auVar60 = NEON_frsqrts(auVar53,auVar59,4);
  auVar54._0_4_ = auVar53._0_4_ * auVar60._0_4_;
  auVar54._4_4_ = auVar53._4_4_ * auVar60._4_4_;
  auVar54._8_4_ = auVar53._8_4_ * auVar60._8_4_;
  auVar54._12_4_ = auVar53._12_4_ * auVar60._12_4_;
  auVar61._0_4_ = fVar15 * auVar54._0_4_;
  auVar61._4_4_ = fVar35 * auVar54._4_4_;
  auVar61._8_4_ = fVar15 * auVar54._8_4_;
  auVar61._12_4_ = fVar35 * auVar54._12_4_;
  iVar36 = -(uint)(fVar15 == 0.0);
  iVar49 = -(uint)(fVar35 == 0.0);
  iVar50 = -(uint)(fVar15 == 0.0);
  iVar51 = -(uint)(fVar35 == 0.0);
  auVar53 = NEON_frsqrts(auVar54,auVar61,4);
  fVar15 = extraout_s0 * auVar54._0_4_ * auVar53._0_4_;
  fVar35 = extraout_var * auVar54._4_4_ * auVar53._4_4_;
  fVar48 = extraout_var_00 * auVar54._8_4_ * auVar53._8_4_;
  fVar18 = extraout_var_01 * auVar54._12_4_ * auVar53._12_4_;
  fVar27 = (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                           CONCAT12((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                    CONCAT11((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar36 >> 8),
                                             SUB41(fVar15,0) & ~(byte)iVar36)));
  auVar39._0_8_ =
       CONCAT17((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                CONCAT16((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                         CONCAT15((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar49 >> 8),
                                  CONCAT14(SUB41(fVar35,0) & ~(byte)iVar49,fVar27))));
  auVar39[8] = SUB41(fVar48,0) & ~(byte)iVar50;
  auVar39[9] = (byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar50 >> 8);
  auVar39[10] = (byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  auVar39[0xb] = (byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  auVar39[0xc] = SUB41(fVar18,0) & ~(byte)iVar51;
  auVar39[0xd] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar51 >> 8);
  auVar39[0xe] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
  auVar39[0xf] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
  fVar48 = param_2._0_4_;
  auVar55._0_4_ = fVar48 * fVar48;
  fVar18 = param_2._4_4_;
  auVar55._4_4_ = fVar18 * fVar18;
  fVar28 = param_2._8_4_;
  auVar55._8_4_ = fVar28 * fVar28;
  auVar55._12_4_ = param_2._12_4_ * param_2._12_4_;
  auVar53 = NEON_ext(auVar55,auVar55,8,1);
  fVar35 = auVar53._0_4_ + auVar55._0_4_;
  fVar58 = auVar53._4_4_ + auVar55._4_4_;
  fVar15 = fVar35 + fVar58;
  fVar35 = fVar35 + fVar58;
  auVar56._8_8_ = CONCAT44(fVar35,fVar15);
  auVar56._0_8_ = CONCAT44(fVar35,fVar15);
  auVar53 = NEON_frsqrte(auVar56,4);
  auVar69._0_4_ = auVar53._0_4_ * fVar15;
  auVar69._4_4_ = auVar53._4_4_ * fVar35;
  auVar69._8_4_ = auVar53._8_4_ * fVar15;
  auVar69._12_4_ = auVar53._12_4_ * fVar35;
  auVar60 = NEON_frsqrts(auVar53,auVar69,4);
  auVar62._0_4_ = auVar53._0_4_ * auVar60._0_4_;
  auVar62._4_4_ = auVar53._4_4_ * auVar60._4_4_;
  auVar62._8_4_ = auVar53._8_4_ * auVar60._8_4_;
  auVar62._12_4_ = auVar53._12_4_ * auVar60._12_4_;
  auVar70._0_4_ = fVar15 * auVar62._0_4_;
  auVar70._4_4_ = fVar35 * auVar62._4_4_;
  auVar70._8_4_ = fVar15 * auVar62._8_4_;
  auVar70._12_4_ = fVar35 * auVar62._12_4_;
  iVar36 = -(uint)(fVar15 == 0.0);
  iVar49 = -(uint)(fVar35 == 0.0);
  iVar50 = -(uint)(fVar15 == 0.0);
  auVar53 = NEON_frsqrts(auVar62,auVar70,4);
  fVar48 = fVar48 * auVar62._0_4_ * auVar53._0_4_;
  fVar18 = fVar18 * auVar62._4_4_ * auVar53._4_4_;
  fVar28 = fVar28 * auVar62._8_4_ * auVar53._8_4_;
  fVar58 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                           CONCAT12((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                    CONCAT11((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar36 >> 8),
                                             SUB41(fVar48,0) & ~(byte)iVar36)));
  auVar19._0_8_ =
       CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                         CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar49 >> 8),
                                  CONCAT14(SUB41(fVar18,0) & ~(byte)iVar49,fVar58))));
  auVar19[8] = SUB41(fVar28,0) & ~(byte)iVar50;
  auVar19[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar50 >> 8);
  auVar19[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  auVar19[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  fVar48 = param_3._0_4_;
  auVar63._0_4_ = fVar48 * fVar48;
  fVar18 = param_3._4_4_;
  auVar63._4_4_ = fVar18 * fVar18;
  fVar28 = param_3._8_4_;
  auVar63._8_4_ = fVar28 * fVar28;
  auVar63._12_4_ = param_3._12_4_ * param_3._12_4_;
  auVar53 = NEON_ext(auVar63,auVar63,8,1);
  fVar35 = auVar53._0_4_ + auVar63._0_4_;
  fVar66 = auVar53._4_4_ + auVar63._4_4_;
  fVar15 = fVar35 + fVar66;
  fVar35 = fVar35 + fVar66;
  auVar64._8_8_ = CONCAT44(fVar35,fVar15);
  auVar64._0_8_ = CONCAT44(fVar35,fVar15);
  auVar53 = NEON_frsqrte(auVar64,4);
  auVar74._0_4_ = auVar53._0_4_ * fVar15;
  auVar74._4_4_ = auVar53._4_4_ * fVar35;
  auVar74._8_4_ = auVar53._8_4_ * fVar15;
  auVar74._12_4_ = auVar53._12_4_ * fVar35;
  auVar60 = NEON_frsqrts(auVar53,auVar74,4);
  auVar71._0_4_ = auVar53._0_4_ * auVar60._0_4_;
  auVar71._4_4_ = auVar53._4_4_ * auVar60._4_4_;
  auVar71._8_4_ = auVar53._8_4_ * auVar60._8_4_;
  auVar71._12_4_ = auVar53._12_4_ * auVar60._12_4_;
  auVar75._0_4_ = fVar15 * auVar71._0_4_;
  auVar75._4_4_ = fVar35 * auVar71._4_4_;
  auVar75._8_4_ = fVar15 * auVar71._8_4_;
  auVar75._12_4_ = fVar35 * auVar71._12_4_;
  auVar53 = NEON_frsqrts(auVar71,auVar75,4);
  fVar48 = fVar48 * auVar71._0_4_ * auVar53._0_4_;
  fVar18 = fVar18 * auVar71._4_4_ * auVar53._4_4_;
  fVar28 = fVar28 * auVar71._8_4_ * auVar53._8_4_;
  iVar36 = -(uint)(fVar15 == 0.0);
  iVar49 = -(uint)(fVar35 == 0.0);
  iVar50 = -(uint)(fVar15 == 0.0);
  auVar29._0_8_ =
       CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                         CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar49 >> 8),
                                  CONCAT14(SUB41(fVar18,0) & ~(byte)iVar49,
                                           CONCAT13((byte)((uint)fVar48 >> 0x18) &
                                                    ~(byte)((uint)iVar36 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar48 >> 0x10) &
                                                             ~(byte)((uint)iVar36 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar48 >> 8) &
                                                                      ~(byte)((uint)iVar36 >> 8),
                                                                      SUB41(fVar48,0) &
                                                                      ~(byte)iVar36)))))));
  auVar29[8] = SUB41(fVar28,0) & ~(byte)iVar50;
  auVar29[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar50 >> 8);
  auVar29[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  auVar29[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  uVar67 = NEON_ext(auVar39._0_8_,auVar29._0_8_,4,1);
  auVar53 = NEON_ext(auVar39,auVar39,8,1);
  fVar18 = (float)((ulong)auVar19._0_8_ >> 0x20);
  fVar28 = auVar29._8_4_;
  auVar60 = NEON_fmov(0x3f800000,4);
  fVar15 = (float)_DAT_03889820 * fVar27 + (float)_DAT_0388a450 * fVar18 +
           (float)_DAT_03889eb0 * fVar28 + auVar60._0_4_;
  fVar35 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar27 +
           (float)((ulong)_DAT_0388a450 >> 0x20) * fVar18 +
           (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar28 + auVar60._4_4_;
  fVar48 = (float)_UNK_03889828 * fVar27 + (float)_UNK_0388a458 * fVar18 +
           (float)_UNK_03889eb8 * fVar28 + auVar60._8_4_;
  fVar18 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar27 +
           (float)((ulong)_UNK_0388a458 >> 0x20) * fVar18 +
           (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar28 + auVar60._12_4_;
  fVar28 = (float)((ulong)auVar29._0_8_ >> 0x20);
  auVar30._0_4_ = (float)uVar67 + fVar58;
  fVar27 = (float)((ulong)uVar67 >> 0x20);
  auVar30._4_4_ = fVar27 + auVar53._0_4_;
  auVar30._8_4_ = auVar19._8_4_ + fVar28;
  auVar30._12_4_ = 0;
  auVar40._0_4_ = (float)uVar67 - fVar58;
  auVar40._4_4_ = fVar27 - auVar53._0_4_;
  auVar40._8_4_ = auVar19._8_4_ - fVar28;
  auVar40._12_4_ = 0;
  uVar67 = a64_TBL(ZEXT816(0),auVar30,auVar40,DAT_0388a888);
  uVar52 = a64_TBL(ZEXT816(0),auVar30,auVar40,DAT_0388a710);
  auVar65._8_8_ = uVar52;
  auVar65._0_8_ = uVar67;
  uVar52 = a64_TBL(ZEXT816(0),auVar30,auVar40,DAT_0388a758);
  auVar60._4_12_ = auVar65._4_12_;
  auVar60._0_4_ = fVar15;
  auVar57._0_8_ = a64_TBL(ZEXT816(0),auVar30,auVar40,DAT_0388a880);
  uVar68 = a64_TBL(ZEXT816(0),auVar30,auVar40,DAT_0388a640);
  auVar21._0_4_ = (undefined4)uVar67;
  auVar21._4_4_ = fVar35;
  auVar21._8_8_ = uVar52;
  auVar72._0_8_ = a64_TBL(ZEXT816(0),auVar30,auVar40,DAT_0388a700);
  uVar67 = a64_TBL(ZEXT816(0),auVar30,auVar40,DAT_0388a590);
  auVar41._4_4_ = fVar35;
  auVar41._0_4_ = fVar35;
  auVar41._8_4_ = fVar35;
  auVar41._12_4_ = fVar35;
  auVar57._12_4_ = (undefined4)((ulong)uVar68 >> 0x20);
  auVar57._8_4_ = fVar48;
  auVar72._8_8_ = uVar67;
  auVar78._4_4_ = fVar15;
  auVar78._0_4_ = fVar15;
  auVar78._8_4_ = fVar15;
  auVar78._12_4_ = fVar15;
  auVar76._0_8_ = CONCAT44(-(uint)(fVar15 <= fVar35),-(uint)(fVar15 <= fVar35));
  auVar76._8_4_ = -(uint)(fVar15 <= fVar35);
  auVar76._12_4_ = -(uint)(fVar15 <= fVar35);
  auVar77._8_8_ = auVar76._8_8_;
  auVar77._0_8_ = auVar76._0_8_;
  auVar60 = auVar60 ^ (auVar60 ^ auVar21) & auVar76;
  auVar22._4_4_ = fVar48;
  auVar22._0_4_ = fVar48;
  auVar22._8_4_ = fVar48;
  auVar22._12_4_ = fVar48;
  auVar73._0_12_ = auVar72._0_12_;
  auVar73._12_4_ = fVar18;
  auVar78 = auVar78 ^ (auVar78 ^ auVar41) & auVar77;
  auVar31._0_8_ = CONCAT44(-(uint)(auVar78._4_4_ <= fVar48),-(uint)(auVar78._0_4_ <= fVar48));
  auVar31._8_4_ = -(uint)(auVar78._8_4_ <= fVar48);
  auVar31._12_4_ = -(uint)(auVar78._12_4_ <= fVar48);
  auVar42._8_8_ = auVar31._8_8_;
  auVar42._0_8_ = auVar31._0_8_;
  auVar60 = auVar60 ^ (auVar60 ^ auVar57) & auVar31;
  auVar78 = auVar78 ^ (auVar78 ^ auVar22) & auVar42;
  auVar53._0_4_ = -(uint)(auVar78._0_4_ <= fVar18);
  auVar53._4_4_ = -(uint)(auVar78._4_4_ <= fVar18);
  auVar53._8_4_ = -(uint)(auVar78._8_4_ <= fVar18);
  auVar53._12_4_ = -(uint)(auVar78._12_4_ <= fVar18);
  auVar60 = auVar60 ^ (auVar60 ^ auVar73) & auVar53;
  fVar48 = auVar60._0_4_;
  auVar23._0_4_ = fVar48 * fVar48;
  fVar18 = auVar60._4_4_;
  auVar23._4_4_ = fVar18 * fVar18;
  fVar28 = auVar60._8_4_;
  auVar23._8_4_ = fVar28 * fVar28;
  fVar58 = auVar60._12_4_;
  auVar23._12_4_ = fVar58 * fVar58;
  auVar53 = NEON_ext(auVar23,auVar23,8,1);
  fVar35 = auVar53._0_4_ + auVar23._0_4_;
  fVar27 = auVar53._4_4_ + auVar23._4_4_;
  fVar15 = fVar35 + fVar27;
  fVar35 = fVar35 + fVar27;
  auVar24._8_8_ = CONCAT44(fVar35,fVar15);
  auVar24._0_8_ = CONCAT44(fVar35,fVar15);
  auVar53 = NEON_frsqrte(auVar24,4);
  auVar43._0_4_ = auVar53._0_4_ * fVar15;
  auVar43._4_4_ = auVar53._4_4_ * fVar35;
  auVar43._8_4_ = auVar53._8_4_ * fVar15;
  auVar43._12_4_ = auVar53._12_4_ * fVar35;
  auVar60 = NEON_frsqrts(auVar53,auVar43,4);
  auVar32._0_4_ = auVar53._0_4_ * auVar60._0_4_;
  auVar32._4_4_ = auVar53._4_4_ * auVar60._4_4_;
  auVar32._8_4_ = auVar53._8_4_ * auVar60._8_4_;
  auVar32._12_4_ = auVar53._12_4_ * auVar60._12_4_;
  auVar44._0_4_ = fVar15 * auVar32._0_4_;
  auVar44._4_4_ = fVar35 * auVar32._4_4_;
  auVar44._8_4_ = fVar15 * auVar32._8_4_;
  auVar44._12_4_ = fVar35 * auVar32._12_4_;
  iVar36 = -(uint)(fVar15 == 0.0);
  iVar49 = -(uint)(fVar35 == 0.0);
  iVar50 = -(uint)(fVar15 == 0.0);
  iVar51 = -(uint)(fVar35 == 0.0);
  auVar53 = NEON_frsqrts(auVar32,auVar44,4);
  fVar48 = auVar32._0_4_ * auVar53._0_4_ * fVar48;
  fVar18 = auVar32._4_4_ * auVar53._4_4_ * fVar18;
  fVar28 = auVar32._8_4_ * auVar53._8_4_ * fVar28;
  fVar58 = auVar32._12_4_ * auVar53._12_4_ * fVar58;
  auVar46._0_8_ =
       CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                         CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar49 >> 8),
                                  CONCAT14(SUB41(fVar18,0) & ~(byte)iVar49,
                                           CONCAT13((byte)((uint)fVar48 >> 0x18) &
                                                    ~(byte)((uint)iVar36 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar48 >> 0x10) &
                                                             ~(byte)((uint)iVar36 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar48 >> 8) &
                                                                      ~(byte)((uint)iVar36 >> 8),
                                                                      SUB41(fVar48,0) &
                                                                      ~(byte)iVar36)))))));
  auVar46[8] = SUB41(fVar28,0) & ~(byte)iVar50;
  auVar46[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar50 >> 8);
  auVar46[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
  auVar46[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
  auVar46[0xc] = SUB41(fVar58,0) & ~(byte)iVar51;
  auVar46[0xd] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar51 >> 8);
  auVar46[0xe] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
  auVar46[0xf] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
  uStack_38 = auVar46._8_8_;
  local_40 = auVar46._0_8_;
  auVar53 = FUN_00cb8d18(&local_40);
  if (local_48 == (long *)0x0) {
LAB_01a44ee8:
    if (*(char *)(param_4 + 0x370) == '\0') goto LAB_01a44ef0;
LAB_01a451b4:
    fVar18 = *(float *)(param_4 + 0x350) - *(float *)(param_4 + 0x340);
    fVar28 = *(float *)(param_4 + 0x358) - *(float *)(param_4 + 0x348);
    fVar58 = *(float *)(param_4 + 0x35c) - *(float *)(param_4 + 0x34c);
    fVar15 = 0.0;
    auVar33._0_4_ = fVar18 * fVar18;
    auVar33._4_4_ = 0;
    auVar33._8_4_ = fVar28 * fVar28;
    auVar33._12_4_ = fVar58 * fVar58;
    auVar60 = NEON_ext(auVar33,auVar33,8,1);
    fVar48 = auVar60._0_4_ + auVar33._0_4_;
    fVar27 = auVar60._4_4_ + 0.0;
    fVar35 = fVar48 + fVar27;
    fVar48 = fVar48 + fVar27;
    if (fVar35 != 0.0) {
      auVar34._8_8_ = CONCAT44(fVar48,fVar35);
      auVar34._0_8_ = CONCAT44(fVar48,fVar35);
      auVar60 = NEON_frsqrte(auVar34,4);
      auVar45._0_4_ = auVar60._0_4_ * fVar35;
      auVar45._4_4_ = auVar60._4_4_ * fVar48;
      auVar45._8_4_ = auVar60._8_4_ * fVar35;
      auVar45._12_4_ = auVar60._12_4_ * fVar48;
      auVar46 = NEON_frsqrts(auVar60,auVar45,4);
      auVar25._0_4_ = auVar60._0_4_ * auVar46._0_4_;
      auVar25._4_4_ = auVar60._4_4_ * auVar46._4_4_;
      auVar25._8_4_ = auVar60._8_4_ * auVar46._8_4_;
      auVar25._12_4_ = auVar60._12_4_ * auVar46._12_4_;
      auVar47._0_4_ = fVar35 * auVar25._0_4_;
      auVar47._4_4_ = fVar48 * auVar25._4_4_;
      auVar47._8_4_ = fVar35 * auVar25._8_4_;
      auVar47._12_4_ = fVar48 * auVar25._12_4_;
      auVar60 = NEON_frsqrts(auVar25,auVar47,4);
      fVar18 = fVar18 * auVar25._0_4_ * auVar60._0_4_;
      fVar15 = auVar25._4_4_ * auVar60._4_4_ * 0.0;
      fVar28 = fVar28 * auVar25._8_4_ * auVar60._8_4_;
      fVar58 = fVar58 * auVar25._12_4_ * auVar60._12_4_;
      iVar36 = -(uint)(fVar35 == 0.0);
      iVar49 = -(uint)(fVar48 == 0.0);
      iVar50 = -(uint)(fVar35 == 0.0);
      iVar51 = -(uint)(fVar48 == 0.0);
      fVar48 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                               CONCAT12((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar18 >> 8) &
                                                  ~(byte)((uint)iVar36 >> 8),
                                                  SUB41(fVar18,0) & ~(byte)iVar36)));
      auVar20._0_8_ =
           CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                    CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                             CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar49 >> 8),
                                      CONCAT14(SUB41(fVar15,0) & ~(byte)iVar49,fVar48))));
      auVar20[8] = SUB41(fVar28,0) & ~(byte)iVar50;
      auVar20[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar50 >> 8);
      auVar20[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
      auVar20[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
      auVar26[0xc] = SUB41(fVar58,0) & ~(byte)iVar51;
      auVar26._0_12_ = auVar20;
      auVar26[0xd] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar51 >> 8);
      auVar26[0xe] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
      auVar26[0xf] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
      auVar17._0_4_ = fVar48 * (float)_DAT_03888d10;
      auVar17._4_4_ = (float)((ulong)auVar20._0_8_ >> 0x20) * (float)((ulong)_DAT_03888d10 >> 0x20);
      auVar17._8_4_ = auVar20._8_4_ * (float)_UNK_03888d18;
      auVar17._12_4_ = auVar26._12_4_ * (float)((ulong)_UNK_03888d18 >> 0x20);
      NEON_ext(auVar17,auVar17,8,1);
      fVar35 = (float)FUN_01009610();
      fVar15 = -fVar35;
      if (0.0 <= fVar48) {
        fVar15 = fVar35;
      }
    }
  }
  else {
    lVar6 = local_48[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar36 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar36 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar36 + -1 != 0) goto LAB_01a44ee8;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*local_48 + 0x20))();
    if (*(char *)(param_4 + 0x370) != '\0') goto LAB_01a451b4;
LAB_01a44ef0:
    fVar15 = *(float *)(param_4 + 0x360);
  }
  *(float *)(param_4 + 0x400) = fVar15;
  fVar15 = *(float *)PTR_FloatPi_04372cf0;
  fVar35 = *(float *)PTR_FloatDegree180_04372ce0;
  *(float *)(param_4 + 0x408) = param_1;
  *(float *)(param_4 + 0x404) = auVar53._4_4_ + (fVar15 / fVar35) * param_1;
  *(float *)(param_4 + 0x40c) = (float)*(double *)(param_4 + 0x700);
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar36 = __cxa_guard_acquire(PTR_DAT_04379660), iVar36 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar6 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar6;
  puVar7 = *(undefined1 **)(lVar6 + 0x60);
  if (puVar7 != (undefined1 *)0x0) {
    uVar8 = (long)puVar7 - ((ulong)puVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      puVar9 = (undefined1 *)((ulong)(puVar7 + -1) & 0xf976cfc5b993016e);
    }
    else if (&DAT_f976cfc5b993016e < puVar7) {
      puVar9 = &DAT_f976cfc5b993016e;
    }
    else {
      uVar11 = 0;
      if (puVar7 != (undefined1 *)0x0) {
        uVar11 = 0xf976cfc5b993016e / (ulong)puVar7;
      }
      puVar9 = &DAT_f976cfc5b993016e + -(uVar11 * (long)puVar7);
    }
    plVar10 = *(long **)(*(long *)(lVar6 + 0x58) + (long)puVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if ((undefined1 *)plVar10[1] == &DAT_f976cfc5b993016e) {
            if ((undefined1 *)plVar10[2] == &DAT_f976cfc5b993016e) goto LAB_01a44ff8;
          }
          else if ((undefined1 *)((ulong)plVar10[1] & (ulong)(puVar7 + -1)) != puVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          puVar13 = (undefined1 *)plVar10[1];
          if (puVar13 == &DAT_f976cfc5b993016e) {
            if ((undefined1 *)plVar10[2] == &DAT_f976cfc5b993016e) goto LAB_01a44ff8;
          }
          else {
            if (puVar7 <= puVar13) {
              uVar8 = 0;
              if (puVar7 != (undefined1 *)0x0) {
                uVar8 = (ulong)puVar13 / (ulong)puVar7;
              }
              puVar13 = puVar13 + -(uVar8 * (long)puVar7);
            }
            if (puVar13 != puVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_01a45154:
  uVar16 = FUN_01904460(param_4 + 0x5b0);
  *(undefined4 *)(param_4 + 0x410) = uVar16;
  *(undefined4 *)(param_4 + 0x414) = 0;
  *(undefined1 *)(param_4 + 0x3f9) = 1;
  return;
LAB_01a44ff8:
  plVar10 = (long *)plVar10[3];
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar8 = plVar10[0x21];
    if (uVar8 != 0) {
      uVar11 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar8 - 1 & 0xc7d86084c93a15ef;
      }
      else if (uVar8 < 0xc7d86084c93a15f0) {
        uVar12 = 0;
        if (uVar8 != 0) {
          uVar12 = 0xc7d86084c93a15ef / uVar8;
        }
        uVar12 = 0xc7d86084c93a15ef - uVar12 * uVar8;
      }
      else {
        uVar12 = 0xc7d86084c93a15ef;
      }
      plVar14 = *(long **)(plVar10[0x20] + uVar12 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar14[1] == 0xc7d86084c93a15ef) {
              if (plVar14[2] == -0x38279f7b36c5ea11) break;
            }
            else if ((plVar14[1] & uVar8 - 1) != uVar12) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar14[1];
            if (uVar11 == 0xc7d86084c93a15ef) {
              if (plVar14[2] == -0x38279f7b36c5ea11) break;
            }
            else {
              if (uVar8 <= uVar11) {
                uVar5 = 0;
                if (uVar8 != 0) {
                  uVar5 = uVar11 / uVar8;
                }
                uVar11 = uVar11 - uVar5 * uVar8;
              }
              if (uVar11 != uVar12) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    do {
      iVar36 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar36;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar36 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  goto LAB_01a45154;
}


