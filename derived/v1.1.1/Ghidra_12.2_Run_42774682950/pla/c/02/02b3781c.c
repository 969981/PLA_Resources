/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3781c; name: FUN_02b3781c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b3781c(long param_1,float *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [12];
  float fVar29;
  undefined1 auVar26 [16];
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar42 [16];
  undefined8 uVar41;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  byte bVar48;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  undefined8 uVar49;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 uVar63;
  undefined1 auVar64 [16];
  undefined8 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar86;
  float fVar87;
  
  uVar7 = DAT_0388a700;
  fVar39 = *param_2;
  fVar45 = param_2[1];
  fVar46 = param_2[2];
  fVar47 = param_2[3];
  fVar86 = (float)*(undefined8 *)(param_2 + 4);
  fVar69 = fVar86 * fVar86;
  fVar29 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar70 = fVar29 * fVar29;
  fVar87 = (float)*(undefined8 *)(param_2 + 6);
  fVar71 = (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
  fVar71 = fVar71 * fVar71;
  fVar24 = param_2[8];
  fVar27 = param_2[9];
  fVar28 = param_2[10];
  fVar74 = fVar24 * fVar24;
  fVar75 = fVar27 * fVar27;
  fVar76 = param_2[0xb] * param_2[0xb];
  auVar15._4_4_ = fVar75;
  auVar15._0_4_ = fVar74;
  auVar15._8_4_ = fVar28 * fVar28;
  auVar15._12_4_ = fVar76;
  auVar16._4_4_ = fVar75;
  auVar16._0_4_ = fVar74;
  auVar16._8_4_ = fVar28 * fVar28;
  auVar16._12_4_ = fVar76;
  auVar83 = NEON_ext(auVar15,auVar16,8,1);
  fVar76 = fVar39 * fVar39;
  fVar68 = fVar45 * fVar45;
  auVar11._4_4_ = fVar68;
  auVar11._0_4_ = fVar76;
  auVar11._8_4_ = fVar46 * fVar46;
  auVar11._12_4_ = fVar47 * fVar47;
  auVar12._4_4_ = fVar68;
  auVar12._0_4_ = fVar76;
  auVar12._8_4_ = fVar46 * fVar46;
  auVar12._12_4_ = fVar47 * fVar47;
  auVar77 = NEON_ext(auVar11,auVar12,8,1);
  auVar13._4_4_ = fVar70;
  auVar13._0_4_ = fVar69;
  auVar13._8_4_ = fVar87 * fVar87;
  auVar13._12_4_ = fVar71;
  auVar14._4_4_ = fVar70;
  auVar14._0_4_ = fVar69;
  auVar14._8_4_ = fVar87 * fVar87;
  auVar14._12_4_ = fVar71;
  auVar80 = NEON_ext(auVar13,auVar14,8,1);
  fVar68 = SQRT(auVar77._0_4_ + fVar76 + auVar77._4_4_ + fVar68);
  auVar77 = NEON_fmov(0x3f800000,4);
  fVar71 = 1.0 / fVar68;
  fVar69 = SQRT(auVar80._0_4_ + fVar69 + auVar80._4_4_ + fVar70);
  fVar39 = fVar39 * fVar71;
  fVar45 = fVar45 * fVar71;
  fVar46 = fVar46 * fVar71;
  fVar47 = fVar47 * fVar71;
  bVar48 = (byte)_DAT_038897c0;
  bVar52 = (byte)((ulong)_DAT_038897c0 >> 8);
  bVar53 = (byte)((ulong)_DAT_038897c0 >> 0x10);
  bVar54 = (byte)((ulong)_DAT_038897c0 >> 0x18);
  fVar76 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & bVar54,
                           CONCAT12((byte)((uint)fVar39 >> 0x10) & bVar53,
                                    CONCAT11((byte)((uint)fVar39 >> 8) & bVar52,
                                             SUB41(fVar39,0) & bVar48)));
  bVar55 = (byte)((ulong)_DAT_038897c0 >> 0x20);
  bVar56 = (byte)((ulong)_DAT_038897c0 >> 0x28);
  bVar57 = (byte)((ulong)_DAT_038897c0 >> 0x30);
  bVar58 = (byte)((ulong)_DAT_038897c0 >> 0x38);
  auVar42._0_8_ =
       CONCAT17((byte)((uint)fVar45 >> 0x18) & bVar58,
                CONCAT16((byte)((uint)fVar45 >> 0x10) & bVar57,
                         CONCAT15((byte)((uint)fVar45 >> 8) & bVar56,
                                  CONCAT14(SUB41(fVar45,0) & bVar55,fVar76))));
  bVar59 = (byte)_UNK_038897c8;
  auVar42[8] = SUB41(fVar46,0) & bVar59;
  bVar60 = (byte)((ulong)_UNK_038897c8 >> 8);
  auVar42[9] = (byte)((uint)fVar46 >> 8) & bVar60;
  bVar61 = (byte)((ulong)_UNK_038897c8 >> 0x10);
  auVar42[10] = (byte)((uint)fVar46 >> 0x10) & bVar61;
  bVar62 = (byte)((ulong)_UNK_038897c8 >> 0x18);
  auVar42[0xb] = (byte)((uint)fVar46 >> 0x18) & bVar62;
  auVar42[0xc] = SUB41(fVar47,0) & (byte)((ulong)_UNK_038897c8 >> 0x20);
  auVar42[0xd] = (byte)((uint)fVar47 >> 8) & (byte)((ulong)_UNK_038897c8 >> 0x28);
  auVar42[0xe] = (byte)((uint)fVar47 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30);
  auVar42[0xf] = (byte)((uint)fVar47 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38);
  fVar70 = SQRT(auVar83._0_4_ + fVar74 + auVar83._4_4_ + fVar75);
  fVar71 = 1.0 / fVar69;
  fVar86 = fVar86 * fVar71;
  fVar29 = fVar29 * fVar71;
  fVar87 = fVar87 * fVar71;
  auVar80 = NEON_ext(auVar42,auVar42,8,1);
  fVar71 = 1.0 / fVar70;
  fVar24 = fVar24 * fVar71;
  fVar27 = fVar27 * fVar71;
  fVar28 = fVar28 * fVar71;
  auVar25._0_8_ =
       CONCAT17((byte)((uint)fVar27 >> 0x18) & bVar58,
                CONCAT16((byte)((uint)fVar27 >> 0x10) & bVar57,
                         CONCAT15((byte)((uint)fVar27 >> 8) & bVar56,
                                  CONCAT14(SUB41(fVar27,0) & bVar55,
                                           CONCAT13((byte)((uint)fVar24 >> 0x18) & bVar54,
                                                    CONCAT12((byte)((uint)fVar24 >> 0x10) & bVar53,
                                                             CONCAT11((byte)((uint)fVar24 >> 8) &
                                                                      bVar52,SUB41(fVar24,0) &
                                                                             bVar48)))))));
  auVar25[8] = SUB41(fVar28,0) & bVar59;
  auVar25[9] = (byte)((uint)fVar28 >> 8) & bVar60;
  auVar25[10] = (byte)((uint)fVar28 >> 0x10) & bVar61;
  auVar25[0xb] = (byte)((uint)fVar28 >> 0x18) & bVar62;
  fVar87 = (float)CONCAT13((byte)((uint)fVar87 >> 0x18) & bVar62,
                           CONCAT12((byte)((uint)fVar87 >> 0x10) & bVar61,
                                    CONCAT11((byte)((uint)fVar87 >> 8) & bVar60,
                                             SUB41(fVar87,0) & bVar59)));
  fVar39 = (float)((ulong)auVar25._0_8_ >> 0x20);
  fVar29 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & bVar58,
                           CONCAT12((byte)((uint)fVar29 >> 0x10) & bVar57,
                                    CONCAT11((byte)((uint)fVar29 >> 8) & bVar56,
                                             SUB41(fVar29,0) & bVar55)));
  uVar40 = NEON_ext(auVar42._0_8_,auVar25._0_8_,4,1);
  fVar46 = auVar25._8_4_;
  fVar86 = (float)CONCAT13((byte)((uint)fVar86 >> 0x18) & bVar54,
                           CONCAT12((byte)((uint)fVar86 >> 0x10) & bVar53,
                                    CONCAT11((byte)((uint)fVar86 >> 8) & bVar52,
                                             SUB41(fVar86,0) & bVar48)));
  fVar71 = (float)_DAT_03889820 * fVar76 + (float)_DAT_0388a450 * fVar29 +
           (float)_DAT_03889eb0 * fVar46 + auVar77._0_4_;
  fVar45 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar76 +
           (float)((ulong)_DAT_0388a450 >> 0x20) * fVar29 +
           (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar46 + auVar77._4_4_;
  fVar47 = (float)_UNK_03889828 * fVar76 + (float)_UNK_0388a458 * fVar29 +
           (float)_UNK_03889eb8 * fVar46 + auVar77._8_4_;
  fVar29 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar76 +
           (float)((ulong)_UNK_0388a458 >> 0x20) * fVar29 +
           (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar46 + auVar77._12_4_;
  auVar84._0_4_ = (float)uVar40 + fVar86;
  fVar46 = (float)((ulong)uVar40 >> 0x20);
  auVar84._4_4_ = fVar46 + auVar80._0_4_;
  auVar84._8_4_ = fVar87 + fVar39;
  auVar84._12_4_ = 0;
  fVar86 = (float)uVar40 - fVar86;
  fVar46 = fVar46 - auVar80._0_4_;
  fVar87 = fVar87 - fVar39;
  auVar17._4_4_ = fVar46;
  auVar17._0_4_ = fVar86;
  auVar17._8_4_ = fVar87;
  auVar17._12_4_ = 0;
  uVar41 = a64_TBL(ZEXT816(0),auVar84,auVar17,DAT_0388a888);
  auVar18._4_4_ = fVar46;
  auVar18._0_4_ = fVar86;
  auVar18._8_4_ = fVar87;
  auVar18._12_4_ = 0;
  uVar49 = a64_TBL(ZEXT816(0),auVar84,auVar18,DAT_0388a710);
  auVar72._4_4_ = fVar45;
  auVar72._0_4_ = fVar45;
  auVar72._8_4_ = fVar45;
  auVar72._12_4_ = fVar45;
  auVar19._4_4_ = fVar46;
  auVar19._0_4_ = fVar86;
  auVar19._8_4_ = fVar87;
  auVar19._12_4_ = 0;
  auVar64._0_8_ = a64_TBL(ZEXT816(0),auVar84,auVar19,DAT_0388a880);
  auVar20._4_4_ = fVar46;
  auVar20._0_4_ = fVar86;
  auVar20._8_4_ = fVar87;
  auVar20._12_4_ = 0;
  uVar63 = a64_TBL(ZEXT816(0),auVar84,auVar20,DAT_0388a758);
  auVar21._4_4_ = fVar46;
  auVar21._0_4_ = fVar86;
  auVar21._8_4_ = fVar87;
  auVar21._12_4_ = 0;
  uVar40 = a64_TBL(ZEXT816(0),auVar84,auVar21,DAT_0388a640);
  auVar22._4_4_ = fVar46;
  auVar22._0_4_ = fVar86;
  auVar22._8_4_ = fVar87;
  auVar22._12_4_ = 0;
  uVar65 = a64_TBL(ZEXT816(0),auVar84,auVar22,DAT_0388a590);
  *(undefined1 *)(param_1 + 0x22b) = 1;
  auVar78._0_8_ = CONCAT44(-(uint)(fVar71 <= fVar45),-(uint)(fVar71 <= fVar45));
  auVar78._8_4_ = -(uint)(fVar71 <= fVar45);
  auVar78._12_4_ = -(uint)(fVar71 <= fVar45);
  auVar81._8_8_ = auVar78._8_8_;
  auVar81._0_8_ = auVar78._0_8_;
  auVar23._4_4_ = fVar46;
  auVar23._0_4_ = fVar86;
  auVar23._8_4_ = fVar87;
  auVar23._12_4_ = 0;
  uVar7 = a64_TBL(ZEXT816(0),auVar84,auVar23,uVar7);
  auVar8._4_4_ = fVar71;
  auVar8._0_4_ = fVar71;
  auVar8._8_4_ = fVar71;
  auVar8._12_4_ = fVar71;
  auVar82._4_4_ = fVar71;
  auVar82._0_4_ = fVar71;
  auVar82._8_4_ = fVar71;
  auVar82._12_4_ = fVar71;
  auVar82 = auVar82 ^ (auVar8 ^ auVar72) & auVar81;
  auVar73._0_8_ = CONCAT44(-(uint)(auVar82._4_4_ <= fVar47),-(uint)(auVar82._0_4_ <= fVar47));
  auVar73._8_4_ = -(uint)(auVar82._8_4_ <= fVar47);
  auVar73._12_4_ = -(uint)(auVar82._12_4_ <= fVar47);
  auVar85._8_8_ = auVar73._8_8_;
  auVar85._0_8_ = auVar73._0_8_;
  auVar9._4_4_ = fVar47;
  auVar9._0_4_ = fVar47;
  auVar9._8_4_ = fVar47;
  auVar9._12_4_ = fVar47;
  auVar82 = auVar82 ^ (auVar82 ^ auVar9) & auVar85;
  uVar66 = (undefined4)((ulong)uVar41 >> 0x20);
  uVar67 = (undefined4)((ulong)uVar49 >> 0x20);
  auVar64._12_4_ = (undefined4)((ulong)uVar40 >> 0x20);
  auVar64._8_4_ = fVar47;
  auVar43._0_4_ = (undefined4)uVar41;
  auVar43._4_4_ = fVar45;
  auVar43._8_8_ = uVar63;
  auVar26._0_4_ = -(uint)(auVar82._0_4_ <= fVar29);
  auVar26._4_4_ = -(uint)(auVar82._4_4_ <= fVar29);
  auVar26._8_4_ = -(uint)(auVar82._8_4_ <= fVar29);
  auVar26._12_4_ = -(uint)(auVar82._12_4_ <= fVar29);
  auVar10._4_4_ = uVar66;
  auVar10._0_4_ = fVar71;
  auVar10._8_4_ = (int)uVar49;
  auVar10._12_4_ = uVar67;
  auVar79._4_4_ = uVar66;
  auVar79._0_4_ = fVar71;
  auVar79._8_4_ = (int)uVar49;
  auVar79._12_4_ = uVar67;
  auVar79 = auVar79 ^ (auVar10 ^ auVar43) & auVar78;
  auVar79 = auVar79 ^ (auVar79 ^ auVar64) & auVar73;
  auVar6._8_4_ = (int)uVar65;
  auVar6._0_8_ = uVar7;
  auVar6._12_4_ = fVar29;
  auVar79 = auVar79 ^ (auVar79 ^ auVar6) & auVar26;
  fVar39 = auVar79._0_4_;
  fVar86 = fVar39 * fVar39;
  fVar45 = auVar79._4_4_;
  fVar29 = fVar45 * fVar45;
  uVar30 = (undefined1)((uint)fVar29 >> 8);
  uVar31 = (undefined1)((uint)fVar29 >> 0x10);
  uVar32 = (undefined1)((uint)fVar29 >> 0x18);
  fVar46 = auVar79._8_4_;
  fVar87 = fVar46 * fVar46;
  uVar33 = (undefined1)((uint)fVar87 >> 8);
  uVar34 = (undefined1)((uint)fVar87 >> 0x10);
  uVar35 = (undefined1)((uint)fVar87 >> 0x18);
  fVar47 = auVar79._12_4_;
  fVar71 = fVar47 * fVar47;
  uVar36 = (undefined1)((uint)fVar71 >> 8);
  uVar37 = (undefined1)((uint)fVar71 >> 0x10);
  uVar38 = (undefined1)((uint)fVar71 >> 0x18);
  auVar77[4] = SUB41(fVar29,0);
  auVar77._0_4_ = fVar86;
  auVar77[5] = uVar30;
  auVar77[6] = uVar31;
  auVar77[7] = uVar32;
  auVar77[8] = SUB41(fVar87,0);
  auVar77[9] = uVar33;
  auVar77[10] = uVar34;
  auVar77[0xb] = uVar35;
  auVar77[0xc] = SUB41(fVar71,0);
  auVar77[0xd] = uVar36;
  auVar77[0xe] = uVar37;
  auVar77[0xf] = uVar38;
  auVar80[4] = SUB41(fVar29,0);
  auVar80._0_4_ = fVar86;
  auVar80[5] = uVar30;
  auVar80[6] = uVar31;
  auVar80[7] = uVar32;
  auVar80[8] = SUB41(fVar87,0);
  auVar80[9] = uVar33;
  auVar80[10] = uVar34;
  auVar80[0xb] = uVar35;
  auVar80[0xc] = SUB41(fVar71,0);
  auVar80[0xd] = uVar36;
  auVar80[0xe] = uVar37;
  auVar80[0xf] = uVar38;
  auVar77 = NEON_ext(auVar77,auVar80,8,1);
  fVar86 = auVar77._0_4_ + fVar86;
  fVar29 = auVar77._4_4_ + fVar29;
  fVar87 = fVar86 + fVar29;
  fVar86 = fVar86 + fVar29;
  uVar30 = SUB41(fVar86,0);
  uVar31 = (undefined1)((uint)fVar86 >> 8);
  uVar32 = (undefined1)((uint)fVar86 >> 0x10);
  uVar33 = (undefined1)((uint)fVar86 >> 0x18);
  auVar83[4] = uVar30;
  auVar83._0_4_ = fVar87;
  auVar83[5] = uVar31;
  auVar83[6] = uVar32;
  auVar83[7] = uVar33;
  auVar83[8] = SUB41(fVar87,0);
  auVar83[9] = (char)((uint)fVar87 >> 8);
  auVar83[10] = (char)((uint)fVar87 >> 0x10);
  auVar83[0xb] = (char)((uint)fVar87 >> 0x18);
  auVar83[0xc] = uVar30;
  auVar83[0xd] = uVar31;
  auVar83[0xe] = uVar32;
  auVar83[0xf] = uVar33;
  auVar77 = NEON_frsqrte(auVar83,4);
  auVar50._0_4_ = auVar77._0_4_ * fVar87;
  auVar50._4_4_ = auVar77._4_4_ * fVar86;
  auVar50._8_4_ = auVar77._8_4_ * fVar87;
  uVar1 = (undefined2)(CONCAT15(uVar31,CONCAT14(uVar30,fVar87)) >> 0x20);
  auVar50._12_4_ = auVar77._12_4_ * (float)CONCAT13(uVar33,CONCAT12(uVar32,uVar1));
  auVar80 = NEON_frsqrts(auVar77,auVar50,4);
  auVar44._0_4_ = auVar77._0_4_ * auVar80._0_4_;
  auVar44._4_4_ = auVar77._4_4_ * auVar80._4_4_;
  auVar44._8_4_ = auVar77._8_4_ * auVar80._8_4_;
  auVar44._12_4_ = auVar77._12_4_ * auVar80._12_4_;
  auVar51._0_4_ = fVar87 * auVar44._0_4_;
  auVar51._4_4_ = fVar86 * auVar44._4_4_;
  auVar51._8_4_ = fVar87 * auVar44._8_4_;
  auVar51._12_4_ = (float)CONCAT13(uVar33,CONCAT12(uVar32,uVar1)) * auVar44._12_4_;
  iVar2 = -(uint)(fVar87 == 0.0);
  iVar3 = -(uint)(fVar86 == 0.0);
  iVar4 = -(uint)(fVar87 == 0.0);
  iVar5 = -(uint)((float)CONCAT13(uVar33,CONCAT12(uVar32,uVar1)) == 0.0);
  auVar77 = NEON_frsqrts(auVar44,auVar51,4);
  fVar39 = auVar44._0_4_ * auVar77._0_4_ * fVar39;
  fVar45 = auVar44._4_4_ * auVar77._4_4_ * fVar45;
  fVar46 = auVar44._8_4_ * auVar77._8_4_ * fVar46;
  fVar47 = auVar44._12_4_ * auVar77._12_4_ * fVar47;
  *(ulong *)(param_1 + 0xf8) = (ulong)(uint)fVar70;
  *(ulong *)(param_1 + 0xf0) = CONCAT44(fVar69,fVar68);
  *(byte *)(param_1 + 0x108) = SUB41(fVar46,0) & ~(byte)iVar4;
  *(byte *)(param_1 + 0x109) = (byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar4 >> 8);
  *(byte *)(param_1 + 0x10a) = (byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10);
  *(byte *)(param_1 + 0x10b) = (byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18);
  *(byte *)(param_1 + 0x10c) = SUB41(fVar47,0) & ~(byte)iVar5;
  *(byte *)(param_1 + 0x10d) = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar5 >> 8);
  *(byte *)(param_1 + 0x10e) = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10);
  *(byte *)(param_1 + 0x10f) = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18);
  *(byte *)(param_1 + 0x100) = SUB41(fVar39,0) & ~(byte)iVar2;
  *(byte *)(param_1 + 0x101) = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar2 >> 8);
  *(byte *)(param_1 + 0x102) = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar2 >> 0x10);
  *(byte *)(param_1 + 0x103) = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar2 >> 0x18);
  *(byte *)(param_1 + 0x104) = SUB41(fVar45,0) & ~(byte)iVar3;
  *(byte *)(param_1 + 0x105) = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar3 >> 8);
  *(byte *)(param_1 + 0x106) = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10);
  *(byte *)(param_1 + 0x107) = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18);
  fVar86 = param_2[0xc];
  fVar29 = param_2[0xd];
  fVar87 = param_2[0xe];
  *(undefined1 *)(param_1 + 0x22b) = 1;
  *(ulong *)(param_1 + 0x118) = (ulong)(uint)fVar87;
  *(float *)(param_1 + 0x110) = fVar86;
  *(float *)(param_1 + 0x114) = fVar29;
  return;
}


