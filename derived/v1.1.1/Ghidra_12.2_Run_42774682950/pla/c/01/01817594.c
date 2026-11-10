/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01817594; name: FUN_01817594
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01817594(float param_1,long param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined2 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined1 uVar15;
  byte bVar16;
  undefined1 uVar17;
  byte bVar18;
  undefined1 uVar19;
  byte bVar20;
  undefined1 uVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined1 uVar25;
  byte bVar26;
  undefined1 uVar27;
  byte bVar28;
  byte bVar29;
  undefined1 uVar30;
  byte bVar31;
  undefined1 uVar32;
  byte bVar33;
  undefined1 uVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  undefined1 auVar38 [12];
  int iVar46;
  undefined1 auVar39 [16];
  int iVar47;
  int iVar48;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uVar49;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uVar50;
  undefined8 uVar51;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar72;
  undefined4 uVar73;
  float fVar74;
  undefined4 uVar75;
  undefined8 uVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined8 uVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined8 uVar82;
  undefined8 uVar83;
  byte local_30;
  byte bStack_2f;
  byte bStack_2e;
  byte bStack_2d;
  byte bStack_2c;
  byte bStack_2b;
  byte bStack_2a;
  byte bStack_29;
  byte bStack_28;
  byte bStack_27;
  byte bStack_26;
  byte bStack_25;
  byte bStack_24;
  byte bStack_23;
  byte bStack_22;
  byte bStack_21;
  undefined8 local_20;
  undefined8 local_18;
  
  if (1.1920929e-07 <= param_1) {
    fVar6 = *param_3;
    fVar37 = param_3[2];
    fVar35 = fVar37 * fVar37 + fVar6 * fVar6;
    fVar5 = fVar35 + 0.0;
    fVar35 = fVar35 + 0.0;
    if (fVar5 != 0.0) {
      auVar39._8_8_ = CONCAT44(fVar35,fVar5);
      auVar39._0_8_ = CONCAT44(fVar35,fVar5);
      auVar52 = NEON_frsqrte(auVar39,4);
      auVar60._0_4_ = auVar52._0_4_ * fVar5;
      auVar60._4_4_ = auVar52._4_4_ * fVar35;
      auVar60._8_4_ = auVar52._8_4_ * fVar5;
      auVar60._12_4_ = auVar52._12_4_ * fVar35;
      auVar61 = NEON_frsqrts(auVar52,auVar60,4);
      auVar53._0_4_ = auVar52._0_4_ * auVar61._0_4_;
      auVar53._4_4_ = auVar52._4_4_ * auVar61._4_4_;
      auVar53._8_4_ = auVar52._8_4_ * auVar61._8_4_;
      auVar53._12_4_ = auVar52._12_4_ * auVar61._12_4_;
      auVar62._0_4_ = fVar5 * auVar53._0_4_;
      auVar62._4_4_ = fVar35 * auVar53._4_4_;
      auVar62._8_4_ = fVar5 * auVar53._8_4_;
      auVar62._12_4_ = fVar35 * auVar53._12_4_;
      iVar36 = -(uint)(fVar5 == 0.0);
      iVar46 = -(uint)(fVar35 == 0.0);
      iVar47 = -(uint)(fVar5 == 0.0);
      iVar48 = -(uint)(fVar35 == 0.0);
      auVar52 = NEON_frsqrts(auVar53,auVar62,4);
      fVar6 = fVar6 * auVar53._0_4_ * auVar52._0_4_;
      fVar5 = auVar53._4_4_ * auVar52._4_4_ * 0.0;
      fVar37 = fVar37 * auVar53._8_4_ * auVar52._8_4_;
      fVar35 = auVar53._12_4_ * auVar52._12_4_ * 0.0;
      bVar10 = SUB41(fVar6,0) & ~(byte)iVar36;
      bVar11 = (byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar36 >> 8);
      bVar12 = (byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
      bVar13 = (byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
      bVar14 = SUB41(fVar5,0) & ~(byte)iVar46;
      bVar16 = (byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar46 >> 8);
      bVar18 = (byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
      bVar20 = (byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
      bVar22 = SUB41(fVar37,0) & ~(byte)iVar47;
      bVar23 = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar47 >> 8);
      bVar24 = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
      bVar26 = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
      bVar28 = SUB41(fVar35,0) & ~(byte)iVar48;
      bVar29 = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar48 >> 8);
      bVar31 = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
      bVar33 = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
      auVar40._0_4_ =
           (float)CONCAT13(bVar13,CONCAT12(bVar12,CONCAT11(bVar11,bVar10))) *
           (float)CONCAT13(bVar13,CONCAT12(bVar12,CONCAT11(bVar11,bVar10)));
      auVar40._4_4_ =
           (float)CONCAT13(bVar20,CONCAT12(bVar18,CONCAT11(bVar16,bVar14))) *
           (float)CONCAT13(bVar20,CONCAT12(bVar18,CONCAT11(bVar16,bVar14)));
      auVar40._8_4_ =
           (float)CONCAT13(bVar26,CONCAT12(bVar24,CONCAT11(bVar23,bVar22))) *
           (float)CONCAT13(bVar26,CONCAT12(bVar24,CONCAT11(bVar23,bVar22)));
      auVar40._12_4_ =
           (float)CONCAT13(bVar33,CONCAT12(bVar31,CONCAT11(bVar29,bVar28))) *
           (float)CONCAT13(bVar33,CONCAT12(bVar31,CONCAT11(bVar29,bVar28)));
      auVar52 = NEON_ext(auVar40,auVar40,8,1);
      fVar37 = auVar52._0_4_ + auVar40._0_4_;
      fVar5 = auVar52._4_4_ + auVar40._4_4_;
      fVar6 = fVar37 + fVar5;
      fVar37 = fVar37 + fVar5;
      auVar41._8_8_ = CONCAT44(fVar37,fVar6);
      auVar41._0_8_ = CONCAT44(fVar37,fVar6);
      auVar52 = NEON_frsqrte(auVar41,4);
      auVar63._0_4_ = auVar52._0_4_ * fVar6;
      auVar63._4_4_ = auVar52._4_4_ * fVar37;
      auVar63._8_4_ = auVar52._8_4_ * fVar6;
      auVar63._12_4_ = auVar52._12_4_ * fVar37;
      auVar61 = NEON_frsqrts(auVar52,auVar63,4);
      auVar54._0_4_ = auVar52._0_4_ * auVar61._0_4_;
      auVar54._4_4_ = auVar52._4_4_ * auVar61._4_4_;
      auVar54._8_4_ = auVar52._8_4_ * auVar61._8_4_;
      auVar54._12_4_ = auVar52._12_4_ * auVar61._12_4_;
      auVar64._0_4_ = fVar6 * auVar54._0_4_;
      auVar64._4_4_ = fVar37 * auVar54._4_4_;
      auVar64._8_4_ = fVar6 * auVar54._8_4_;
      auVar64._12_4_ = fVar37 * auVar54._12_4_;
      iVar36 = -(uint)(fVar6 == 0.0);
      iVar46 = -(uint)(fVar37 == 0.0);
      iVar47 = -(uint)(fVar6 == 0.0);
      iVar48 = -(uint)(fVar37 == 0.0);
      auVar52 = NEON_frsqrts(auVar54,auVar64,4);
      fVar6 = (float)CONCAT13(bVar13,CONCAT12(bVar12,CONCAT11(bVar11,bVar10))) *
              auVar54._0_4_ * auVar52._0_4_;
      fVar37 = (float)CONCAT13(bVar20,CONCAT12(bVar18,CONCAT11(bVar16,bVar14))) *
               auVar54._4_4_ * auVar52._4_4_;
      fVar5 = (float)CONCAT13(bVar26,CONCAT12(bVar24,CONCAT11(bVar23,bVar22))) *
              auVar54._8_4_ * auVar52._8_4_;
      fVar35 = (float)CONCAT13(bVar33,CONCAT12(bVar31,CONCAT11(bVar29,bVar28))) *
               auVar54._12_4_ * auVar52._12_4_;
      auVar38._0_8_ =
           CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                    CONCAT16((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10),
                             CONCAT15((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar46 >> 8),
                                      CONCAT14(SUB41(fVar37,0) & ~(byte)iVar46,
                                               CONCAT13((byte)((uint)fVar6 >> 0x18) &
                                                        ~(byte)((uint)iVar36 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar6 >> 0x10) &
                                                                 ~(byte)((uint)iVar36 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar6 >> 8) &
                                                                          ~(byte)((uint)iVar36 >> 8)
                                                                          ,SUB41(fVar6,0) &
                                                                           ~(byte)iVar36)))))));
      auVar38[8] = SUB41(fVar5,0) & ~(byte)iVar47;
      auVar38[9] = (byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar47 >> 8);
      auVar38[10] = (byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
      auVar38[0xb] = (byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
      auVar42[0xc] = SUB41(fVar35,0) & ~(byte)iVar48;
      auVar42._0_12_ = auVar38;
      auVar42[0xd] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar48 >> 8);
      auVar42[0xe] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
      auVar42[0xf] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
      auVar55._8_8_ = DAT_0388a148;
      auVar55._0_8_ = DAT_0388a140;
      uVar59 = a64_TBL(ZEXT816(0),auVar55,DAT_0388a880);
      uVar76 = a64_TBL(ZEXT816(0),auVar55,DAT_0388a6f0);
      uVar79 = a64_TBL(ZEXT816(0),auVar42,DAT_0388a680);
      fVar6 = (float)((ulong)uVar79 >> 0x20);
      uVar82 = a64_TBL(ZEXT816(0),auVar42,DAT_0388a6d8);
      uVar51 = a64_TBL(ZEXT816(0),auVar55,DAT_0388a680);
      uVar49 = a64_TBL(ZEXT816(0),auVar55,DAT_0388a6d8);
      uVar83 = a64_TBL(ZEXT816(0),auVar42,DAT_0388a6f0);
      uVar50 = a64_TBL(ZEXT816(0),auVar42,DAT_0388a880);
      fVar37 = (float)((ulong)uVar50 >> 0x20);
      fVar58 = (float)uVar59 * (float)uVar79 - (float)uVar51 * (float)uVar50;
      auVar65._0_8_ =
           CONCAT44((float)((ulong)uVar59 >> 0x20) * fVar6 - (float)((ulong)uVar51 >> 0x20) * fVar37
                    ,fVar58);
      auVar65._8_4_ = (float)uVar76 * (float)uVar82 - (float)uVar49 * (float)uVar83;
      auVar65._12_4_ =
           (float)((ulong)uVar76 >> 0x20) * (float)((ulong)uVar82 >> 0x20) -
           (float)((ulong)uVar49 >> 0x20) * (float)((ulong)uVar83 >> 0x20);
      uVar76 = a64_TBL(ZEXT816(0),auVar65,DAT_0388a680);
      uVar59 = a64_TBL(ZEXT816(0),auVar65,DAT_0388a6d8);
      uVar49 = a64_TBL(ZEXT816(0),auVar65,DAT_0388a6f0);
      uVar51 = a64_TBL(ZEXT816(0),auVar65,DAT_0388a880);
      fVar71 = (float)uVar50 * (float)uVar76 - (float)uVar79 * (float)uVar51;
      fVar72 = fVar37 * (float)((ulong)uVar76 >> 0x20) - fVar6 * (float)((ulong)uVar51 >> 0x20);
      fVar74 = (float)uVar83 * (float)uVar59 - (float)uVar82 * (float)uVar49;
      fVar6 = auVar38._8_4_;
      auVar52 = NEON_fmov(0x3f800000,4);
      uVar76 = NEON_ext(auVar65._0_8_,auVar38._0_8_,4,1);
      fVar37 = (float)_DAT_03889820 * fVar58 + (float)_DAT_0388a450 * fVar72 +
               (float)_DAT_03889eb0 * fVar6 + auVar52._0_4_;
      fVar5 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar58 +
              (float)((ulong)_DAT_0388a450 >> 0x20) * fVar72 +
              (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar6 + auVar52._4_4_;
      fVar35 = (float)_UNK_03889828 * fVar58 + (float)_UNK_0388a458 * fVar72 +
               (float)_UNK_03889eb8 * fVar6 + auVar52._8_4_;
      fVar58 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar58 +
               (float)((ulong)_UNK_0388a458 >> 0x20) * fVar72 +
               (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar6 + auVar52._12_4_;
      fVar6 = (float)((ulong)auVar38._0_8_ >> 0x20);
      auVar52 = NEON_ext(auVar65,auVar65,8,1);
      auVar66._0_4_ = fVar71 + (float)uVar76;
      fVar72 = (float)((ulong)uVar76 >> 0x20);
      auVar66._4_4_ = auVar52._0_4_ + fVar72;
      auVar66._8_4_ = fVar6 + fVar74;
      auVar66._12_4_ = 0;
      auVar68._0_4_ = (float)uVar76 - fVar71;
      auVar68._4_4_ = fVar72 - auVar52._0_4_;
      auVar68._8_4_ = fVar74 - fVar6;
      auVar68._12_4_ = 0;
      uVar51 = a64_TBL(ZEXT816(0),auVar66,auVar68,DAT_0388a888);
      uVar49 = a64_TBL(ZEXT816(0),auVar66,auVar68,DAT_0388a710);
      uVar73 = (undefined4)((ulong)uVar51 >> 0x20);
      uVar76 = a64_TBL(ZEXT816(0),auVar66,auVar68,DAT_0388a880);
      uVar75 = (undefined4)((ulong)uVar49 >> 0x20);
      uVar50 = a64_TBL(ZEXT816(0),auVar66,auVar68,DAT_0388a758);
      uVar59 = a64_TBL(ZEXT816(0),auVar66,auVar68,DAT_0388a640);
      auVar7._0_4_ = (undefined4)uVar51;
      auVar7._4_4_ = fVar5;
      auVar7._8_8_ = uVar50;
      local_18 = *(undefined8 *)(param_2 + 0x268);
      auVar43._0_8_ = a64_TBL(ZEXT816(0),auVar66,auVar68,DAT_0388a700);
      uVar51 = a64_TBL(ZEXT816(0),auVar66,auVar68,DAT_0388a590);
      auVar69._4_4_ = fVar5;
      auVar69._0_4_ = fVar5;
      auVar69._8_4_ = fVar5;
      auVar69._12_4_ = fVar5;
      local_20 = *(undefined8 *)(param_2 + 0x260);
      auVar43._8_8_ = uVar51;
      auVar81._4_4_ = fVar37;
      auVar81._0_4_ = fVar37;
      auVar81._8_4_ = fVar37;
      auVar81._12_4_ = fVar37;
      auVar77._0_8_ = CONCAT44(-(uint)(fVar37 <= fVar5),-(uint)(fVar37 <= fVar5));
      auVar77._8_4_ = -(uint)(fVar37 <= fVar5);
      auVar77._12_4_ = -(uint)(fVar37 <= fVar5);
      auVar80._8_8_ = auVar77._8_8_;
      auVar80._0_8_ = auVar77._0_8_;
      auVar4._4_4_ = uVar73;
      auVar4._0_4_ = fVar37;
      auVar4._8_4_ = (int)uVar49;
      auVar4._12_4_ = uVar75;
      auVar78._4_4_ = uVar73;
      auVar78._0_4_ = fVar37;
      auVar78._8_4_ = (int)uVar49;
      auVar78._12_4_ = uVar75;
      auVar78 = auVar78 ^ (auVar4 ^ auVar7) & auVar77;
      auVar8._4_4_ = fVar35;
      auVar8._0_4_ = fVar35;
      auVar8._8_4_ = fVar35;
      auVar8._12_4_ = fVar35;
      auVar44._0_12_ = auVar43._0_12_;
      auVar44._12_4_ = fVar58;
      auVar81 = auVar81 ^ (auVar81 ^ auVar69) & auVar80;
      auVar67._0_8_ = CONCAT44(-(uint)(auVar81._4_4_ <= fVar35),-(uint)(auVar81._0_4_ <= fVar35));
      auVar67._8_4_ = -(uint)(auVar81._8_4_ <= fVar35);
      auVar67._12_4_ = -(uint)(auVar81._12_4_ <= fVar35);
      auVar70._8_8_ = auVar67._8_8_;
      auVar70._0_8_ = auVar67._0_8_;
      auVar52[8] = SUB41(fVar35,0);
      auVar52._0_8_ = uVar76;
      auVar52[9] = (char)((uint)fVar35 >> 8);
      auVar52[10] = (char)((uint)fVar35 >> 0x10);
      auVar52[0xb] = (char)((uint)fVar35 >> 0x18);
      auVar52[0xc] = (char)((ulong)uVar59 >> 0x20);
      auVar52[0xd] = (char)((ulong)uVar59 >> 0x28);
      auVar52[0xe] = (char)((ulong)uVar59 >> 0x30);
      auVar52[0xf] = (char)((ulong)uVar59 >> 0x38);
      auVar78 = auVar78 ^ (auVar78 ^ auVar52) & auVar67;
      auVar81 = auVar81 ^ (auVar81 ^ auVar8) & auVar70;
      auVar9._0_4_ = -(uint)(auVar81._0_4_ <= fVar58);
      auVar9._4_4_ = -(uint)(auVar81._4_4_ <= fVar58);
      auVar9._8_4_ = -(uint)(auVar81._8_4_ <= fVar58);
      auVar9._12_4_ = -(uint)(auVar81._12_4_ <= fVar58);
      auVar78 = auVar78 ^ (auVar78 ^ auVar44) & auVar9;
      fVar58 = auVar78._0_4_;
      fVar6 = fVar58 * fVar58;
      fVar71 = auVar78._4_4_;
      fVar37 = fVar71 * fVar71;
      uVar15 = (undefined1)((uint)fVar37 >> 8);
      uVar17 = (undefined1)((uint)fVar37 >> 0x10);
      uVar19 = (undefined1)((uint)fVar37 >> 0x18);
      fVar72 = auVar78._8_4_;
      fVar5 = fVar72 * fVar72;
      uVar21 = (undefined1)((uint)fVar5 >> 8);
      uVar25 = (undefined1)((uint)fVar5 >> 0x10);
      uVar27 = (undefined1)((uint)fVar5 >> 0x18);
      fVar74 = auVar78._12_4_;
      fVar35 = fVar74 * fVar74;
      uVar30 = (undefined1)((uint)fVar35 >> 8);
      uVar32 = (undefined1)((uint)fVar35 >> 0x10);
      uVar34 = (undefined1)((uint)fVar35 >> 0x18);
      auVar61[4] = SUB41(fVar37,0);
      auVar61._0_4_ = fVar6;
      auVar61[5] = uVar15;
      auVar61[6] = uVar17;
      auVar61[7] = uVar19;
      auVar61[8] = SUB41(fVar5,0);
      auVar61[9] = uVar21;
      auVar61[10] = uVar25;
      auVar61[0xb] = uVar27;
      auVar61[0xc] = SUB41(fVar35,0);
      auVar61[0xd] = uVar30;
      auVar61[0xe] = uVar32;
      auVar61[0xf] = uVar34;
      auVar1[4] = SUB41(fVar37,0);
      auVar1._0_4_ = fVar6;
      auVar1[5] = uVar15;
      auVar1[6] = uVar17;
      auVar1[7] = uVar19;
      auVar1[8] = SUB41(fVar5,0);
      auVar1[9] = uVar21;
      auVar1[10] = uVar25;
      auVar1[0xb] = uVar27;
      auVar1[0xc] = SUB41(fVar35,0);
      auVar1[0xd] = uVar30;
      auVar1[0xe] = uVar32;
      auVar1[0xf] = uVar34;
      auVar52 = NEON_ext(auVar61,auVar1,8,1);
      fVar6 = auVar52._0_4_ + fVar6;
      fVar37 = auVar52._4_4_ + fVar37;
      fVar5 = fVar6 + fVar37;
      fVar6 = fVar6 + fVar37;
      uVar15 = SUB41(fVar6,0);
      uVar17 = (undefined1)((uint)fVar6 >> 8);
      uVar19 = (undefined1)((uint)fVar6 >> 0x10);
      uVar21 = (undefined1)((uint)fVar6 >> 0x18);
      auVar2[4] = uVar15;
      auVar2._0_4_ = fVar5;
      auVar2[5] = uVar17;
      auVar2[6] = uVar19;
      auVar2[7] = uVar21;
      auVar2[8] = SUB41(fVar5,0);
      auVar2[9] = (char)((uint)fVar5 >> 8);
      auVar2[10] = (char)((uint)fVar5 >> 0x10);
      auVar2[0xb] = (char)((uint)fVar5 >> 0x18);
      auVar2[0xc] = uVar15;
      auVar2[0xd] = uVar17;
      auVar2[0xe] = uVar19;
      auVar2[0xf] = uVar21;
      auVar52 = NEON_frsqrte(auVar2,4);
      auVar56._0_4_ = auVar52._0_4_ * fVar5;
      auVar56._4_4_ = auVar52._4_4_ * fVar6;
      auVar56._8_4_ = auVar52._8_4_ * fVar5;
      uVar3 = (undefined2)(CONCAT15(uVar17,CONCAT14(uVar15,fVar5)) >> 0x20);
      auVar56._12_4_ = auVar52._12_4_ * (float)CONCAT13(uVar21,CONCAT12(uVar19,uVar3));
      auVar61 = NEON_frsqrts(auVar52,auVar56,4);
      auVar45._0_4_ = auVar52._0_4_ * auVar61._0_4_;
      auVar45._4_4_ = auVar52._4_4_ * auVar61._4_4_;
      auVar45._8_4_ = auVar52._8_4_ * auVar61._8_4_;
      auVar45._12_4_ = auVar52._12_4_ * auVar61._12_4_;
      auVar57._0_4_ = fVar5 * auVar45._0_4_;
      auVar57._4_4_ = fVar6 * auVar45._4_4_;
      auVar57._8_4_ = fVar5 * auVar45._8_4_;
      auVar57._12_4_ = (float)CONCAT13(uVar21,CONCAT12(uVar19,uVar3)) * auVar45._12_4_;
      iVar36 = -(uint)(fVar5 == 0.0);
      iVar46 = -(uint)(fVar6 == 0.0);
      iVar47 = -(uint)(fVar5 == 0.0);
      iVar48 = -(uint)((float)CONCAT13(uVar21,CONCAT12(uVar19,uVar3)) == 0.0);
      auVar52 = NEON_frsqrts(auVar45,auVar57,4);
      fVar58 = auVar45._0_4_ * auVar52._0_4_ * fVar58;
      fVar71 = auVar45._4_4_ * auVar52._4_4_ * fVar71;
      fVar72 = auVar45._8_4_ * auVar52._8_4_ * fVar72;
      fVar74 = auVar45._12_4_ * auVar52._12_4_ * fVar74;
      local_30 = SUB41(fVar58,0) & ~(byte)iVar36;
      bStack_2f = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar36 >> 8);
      bStack_2e = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
      bStack_2d = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
      bStack_2c = SUB41(fVar71,0) & ~(byte)iVar46;
      bStack_2b = (byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar46 >> 8);
      bStack_2a = (byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
      bStack_29 = (byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
      bStack_28 = SUB41(fVar72,0) & ~(byte)iVar47;
      bStack_27 = (byte)((uint)fVar72 >> 8) & ~(byte)((uint)iVar47 >> 8);
      bStack_26 = (byte)((uint)fVar72 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
      bStack_25 = (byte)((uint)fVar72 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
      bStack_24 = SUB41(fVar74,0) & ~(byte)iVar48;
      bStack_23 = (byte)((uint)fVar74 >> 8) & ~(byte)((uint)iVar48 >> 8);
      bStack_22 = (byte)((uint)fVar74 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
      bStack_21 = (byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
      auVar52 = FUN_009c6b1c((*(float *)(param_2 + 0x270) * 0.033333335) / param_1,&local_20,
                             &local_30);
      return auVar52;
    }
  }
  return *(undefined1 (*) [16])(param_2 + 0x260);
}


