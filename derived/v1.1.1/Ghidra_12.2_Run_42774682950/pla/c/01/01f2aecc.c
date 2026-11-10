/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f2aecc; name: FUN_01f2aecc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f2aecc(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,long param_6)

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
  long lVar10;
  float fVar11;
  float extraout_s0;
  float fVar12;
  float extraout_var;
  float extraout_var_00;
  float fVar15;
  float fVar16;
  float extraout_var_01;
  float fVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 uVar18;
  undefined1 uVar19;
  byte bVar20;
  undefined1 uVar21;
  byte bVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined7 uVar36;
  undefined1 auVar37 [12];
  byte bVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar42;
  int iVar43;
  float fVar44;
  float fVar53;
  int iVar55;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar54;
  int iVar56;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  int iVar63;
  undefined8 uVar57;
  int iVar64;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar65;
  float fVar73;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined8 uVar74;
  undefined8 uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  long *local_28;
  
  uVar34 = param_2[0xf];
  uVar32 = param_2[0xe];
  uVar30 = param_2[0xd];
  uVar29 = param_2[0xc];
  uVar27 = param_2[0xb];
  uVar25 = param_2[10];
  uVar24 = param_2[9];
  uVar35 = param_2[8];
  uVar33 = param_2[7];
  uVar31 = param_2[6];
  uVar28 = param_2[5];
  uVar26 = param_2[4];
  uVar23 = param_2[3];
  uVar21 = param_2[2];
  uVar19 = param_2[1];
  uVar18 = param_2[0];
  FUN_009c69bc(&local_28,param_6);
  if (local_28 == (long *)0x0) {
    uVar57 = _DAT_0388a130;
    uVar74 = _UNK_0388a138;
  }
  else {
    (**(code **)(*local_28 + 0x40))();
    auVar45._0_4_ = extraout_s0 * extraout_s0;
    auVar45._4_4_ = extraout_var * extraout_var;
    auVar45._8_4_ = extraout_var_00 * extraout_var_00;
    auVar45._12_4_ = extraout_var_01 * extraout_var_01;
    auVar58 = NEON_ext(auVar45,auVar45,8,1);
    fVar42 = auVar58._0_4_ + auVar45._0_4_;
    fVar53 = auVar58._4_4_ + auVar45._4_4_;
    fVar11 = fVar42 + fVar53;
    fVar42 = fVar42 + fVar53;
    auVar46._8_8_ = CONCAT44(fVar42,fVar11);
    auVar46._0_8_ = CONCAT44(fVar42,fVar11);
    auVar58 = NEON_frsqrte(auVar46,4);
    auVar66._0_4_ = auVar58._0_4_ * fVar11;
    auVar66._4_4_ = auVar58._4_4_ * fVar42;
    auVar66._8_4_ = auVar58._8_4_ * fVar11;
    auVar66._12_4_ = auVar58._12_4_ * fVar42;
    auVar67 = NEON_frsqrts(auVar58,auVar66,4);
    auVar59._0_4_ = auVar58._0_4_ * auVar67._0_4_;
    auVar59._4_4_ = auVar58._4_4_ * auVar67._4_4_;
    auVar59._8_4_ = auVar58._8_4_ * auVar67._8_4_;
    auVar59._12_4_ = auVar58._12_4_ * auVar67._12_4_;
    auVar68._0_4_ = fVar11 * auVar59._0_4_;
    auVar68._4_4_ = fVar42 * auVar59._4_4_;
    auVar68._8_4_ = fVar11 * auVar59._8_4_;
    auVar68._12_4_ = fVar42 * auVar59._12_4_;
    iVar43 = -(uint)(fVar11 == 0.0);
    iVar54 = -(uint)(fVar42 == 0.0);
    iVar55 = -(uint)(fVar11 == 0.0);
    iVar56 = -(uint)(fVar42 == 0.0);
    auVar58 = NEON_frsqrts(auVar59,auVar68,4);
    fVar11 = extraout_s0 * auVar59._0_4_ * auVar58._0_4_;
    fVar42 = extraout_var * auVar59._4_4_ * auVar58._4_4_;
    fVar53 = extraout_var_00 * auVar59._8_4_ * auVar58._8_4_;
    fVar17 = extraout_var_01 * auVar59._12_4_ * auVar58._12_4_;
    fVar44 = (float)CONCAT13((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                             CONCAT12((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                      CONCAT11((byte)((uint)fVar11 >> 8) &
                                               ~(byte)((uint)iVar43 >> 8),
                                               SUB41(fVar11,0) & ~(byte)iVar43)));
    auVar47._0_8_ =
         CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                  CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10),
                           CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar54 >> 8),
                                    CONCAT14(SUB41(fVar42,0) & ~(byte)iVar54,fVar44))));
    auVar47[8] = SUB41(fVar53,0) & ~(byte)iVar55;
    auVar47[9] = (byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar55 >> 8);
    auVar47[10] = (byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
    auVar47[0xb] = (byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
    auVar47[0xc] = SUB41(fVar17,0) & ~(byte)iVar56;
    auVar47[0xd] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar56 >> 8);
    auVar47[0xe] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10);
    auVar47[0xf] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18);
    auVar60._0_4_ =
         (float)CONCAT13(uVar23,CONCAT12(uVar21,CONCAT11(uVar19,uVar18))) *
         (float)CONCAT13(uVar23,CONCAT12(uVar21,CONCAT11(uVar19,uVar18)));
    auVar60._4_4_ =
         (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar28,uVar26))) *
         (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar28,uVar26)));
    auVar60._8_4_ =
         (float)CONCAT13(uVar27,CONCAT12(uVar25,CONCAT11(uVar24,uVar35))) *
         (float)CONCAT13(uVar27,CONCAT12(uVar25,CONCAT11(uVar24,uVar35)));
    auVar60._12_4_ =
         (float)CONCAT13(uVar34,CONCAT12(uVar32,CONCAT11(uVar30,uVar29))) *
         (float)CONCAT13(uVar34,CONCAT12(uVar32,CONCAT11(uVar30,uVar29)));
    auVar58 = NEON_ext(auVar60,auVar60,8,1);
    fVar42 = auVar58._0_4_ + auVar60._0_4_;
    fVar53 = auVar58._4_4_ + auVar60._4_4_;
    fVar11 = fVar42 + fVar53;
    fVar42 = fVar42 + fVar53;
    auVar61._8_8_ = CONCAT44(fVar42,fVar11);
    auVar61._0_8_ = CONCAT44(fVar42,fVar11);
    auVar58 = NEON_frsqrte(auVar61,4);
    auVar76._0_4_ = auVar58._0_4_ * fVar11;
    auVar76._4_4_ = auVar58._4_4_ * fVar42;
    auVar76._8_4_ = auVar58._8_4_ * fVar11;
    auVar76._12_4_ = auVar58._12_4_ * fVar42;
    auVar67 = NEON_frsqrts(auVar58,auVar76,4);
    auVar69._0_4_ = auVar58._0_4_ * auVar67._0_4_;
    auVar69._4_4_ = auVar58._4_4_ * auVar67._4_4_;
    auVar69._8_4_ = auVar58._8_4_ * auVar67._8_4_;
    auVar69._12_4_ = auVar58._12_4_ * auVar67._12_4_;
    auVar77._0_4_ = fVar11 * auVar69._0_4_;
    auVar77._4_4_ = fVar42 * auVar69._4_4_;
    auVar77._8_4_ = fVar11 * auVar69._8_4_;
    auVar77._12_4_ = fVar42 * auVar69._12_4_;
    iVar56 = -(uint)(fVar11 == 0.0);
    iVar63 = -(uint)(fVar42 == 0.0);
    iVar64 = -(uint)(fVar11 == 0.0);
    auVar58 = NEON_frsqrts(auVar69,auVar77,4);
    fVar42 = (float)CONCAT13(uVar23,CONCAT12(uVar21,CONCAT11(uVar19,uVar18))) *
             auVar69._0_4_ * auVar58._0_4_;
    fVar11 = (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar28,uVar26))) *
             auVar69._4_4_ * auVar58._4_4_;
    fVar53 = (float)CONCAT13(uVar27,CONCAT12(uVar25,CONCAT11(uVar24,uVar35))) *
             auVar69._8_4_ * auVar58._8_4_;
    bVar20 = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10);
    bVar22 = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18);
    fVar12 = param_3._0_4_;
    auVar70._0_4_ = fVar12 * fVar12;
    fVar15 = param_3._4_4_;
    auVar70._4_4_ = fVar15 * fVar15;
    fVar16 = param_3._8_4_;
    auVar70._8_4_ = fVar16 * fVar16;
    auVar70._12_4_ = param_3._12_4_ * param_3._12_4_;
    auVar58 = NEON_ext(auVar70,auVar70,8,1);
    fVar65 = auVar58._0_4_ + auVar70._0_4_;
    fVar73 = auVar58._4_4_ + auVar70._4_4_;
    fVar17 = fVar65 + fVar73;
    fVar65 = fVar65 + fVar73;
    auVar71._8_8_ = CONCAT44(fVar65,fVar17);
    auVar71._0_8_ = CONCAT44(fVar65,fVar17);
    auVar58 = NEON_frsqrte(auVar71,4);
    auVar81._0_4_ = auVar58._0_4_ * fVar17;
    auVar81._4_4_ = auVar58._4_4_ * fVar65;
    auVar81._8_4_ = auVar58._8_4_ * fVar17;
    auVar81._12_4_ = auVar58._12_4_ * fVar65;
    auVar67 = NEON_frsqrts(auVar58,auVar81,4);
    auVar78._0_4_ = auVar58._0_4_ * auVar67._0_4_;
    auVar78._4_4_ = auVar58._4_4_ * auVar67._4_4_;
    auVar78._8_4_ = auVar58._8_4_ * auVar67._8_4_;
    auVar78._12_4_ = auVar58._12_4_ * auVar67._12_4_;
    auVar82._0_4_ = fVar17 * auVar78._0_4_;
    auVar82._4_4_ = fVar65 * auVar78._4_4_;
    auVar82._8_4_ = fVar17 * auVar78._8_4_;
    auVar82._12_4_ = fVar65 * auVar78._12_4_;
    auVar58 = NEON_frsqrts(auVar78,auVar82,4);
    fVar12 = fVar12 * auVar78._0_4_ * auVar58._0_4_;
    fVar15 = fVar15 * auVar78._4_4_ * auVar58._4_4_;
    fVar16 = fVar16 * auVar78._8_4_ * auVar58._8_4_;
    iVar43 = -(uint)(fVar17 == 0.0);
    iVar54 = -(uint)(fVar65 == 0.0);
    iVar55 = -(uint)(fVar17 == 0.0);
    uVar36 = CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10),
                      CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar54 >> 8),
                               CONCAT14(SUB41(fVar15,0) & ~(byte)iVar54,
                                        CONCAT13((byte)((uint)fVar12 >> 0x18) &
                                                 ~(byte)((uint)iVar43 >> 0x18),
                                                 CONCAT12((byte)((uint)fVar12 >> 0x10) &
                                                          ~(byte)((uint)iVar43 >> 0x10),
                                                          CONCAT11((byte)((uint)fVar12 >> 8) &
                                                                   ~(byte)((uint)iVar43 >> 8),
                                                                   SUB41(fVar12,0) & ~(byte)iVar43))
                                                ))));
    bVar41 = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
    auVar37._0_8_ = CONCAT17(bVar41,uVar36);
    auVar37[8] = SUB41(fVar16,0) & ~(byte)iVar55;
    auVar37[9] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar55 >> 8);
    auVar37[10] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
    auVar37[0xb] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
    uVar74 = NEON_ext(auVar47._0_8_,auVar37._0_8_,4,1);
    auVar58 = NEON_ext(auVar47,auVar47,8,1);
    fVar11 = (float)CONCAT13((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                             CONCAT12((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10),
                                      CONCAT11((byte)((uint)fVar11 >> 8) &
                                               ~(byte)((uint)iVar63 >> 8),
                                               SUB41(fVar11,0) & ~(byte)iVar63)));
    fVar15 = auVar37._8_4_;
    auVar67 = NEON_fmov(0x3f800000,4);
    fVar17 = (float)_DAT_03889820 * fVar44 + (float)_DAT_0388a450 * fVar11 +
             (float)_DAT_03889eb0 * fVar15 + auVar67._0_4_;
    fVar65 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar44 +
             (float)((ulong)_DAT_0388a450 >> 0x20) * fVar11 +
             (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar15 + auVar67._4_4_;
    fVar12 = (float)_UNK_03889828 * fVar44 + (float)_UNK_0388a458 * fVar11 +
             (float)_UNK_03889eb8 * fVar15 + auVar67._8_4_;
    fVar15 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar44 +
             (float)((ulong)_UNK_0388a458 >> 0x20) * fVar11 +
             (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar15 + auVar67._12_4_;
    fVar11 = (float)CONCAT13((byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                             CONCAT12((byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                                      CONCAT11((byte)((uint)fVar53 >> 8) &
                                               ~(byte)((uint)iVar64 >> 8),
                                               SUB41(fVar53,0) & ~(byte)iVar64)));
    uVar4 = CONCAT11((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar56 >> 8),
                     SUB41(fVar42,0) & ~(byte)iVar56);
    auVar38._0_4_ = (float)uVar74 + (float)CONCAT13(bVar22,CONCAT12(bVar20,uVar4));
    fVar42 = (float)((ulong)uVar74 >> 0x20);
    auVar38._4_4_ = fVar42 + auVar58._0_4_;
    uVar8 = (undefined3)((uint7)uVar36 >> 0x20);
    auVar38._8_4_ = fVar11 + (float)CONCAT13(bVar41,uVar8);
    auVar38._12_4_ = 0;
    auVar48._0_4_ = (float)uVar74 - (float)CONCAT13(bVar22,CONCAT12(bVar20,uVar4));
    auVar48._4_4_ = fVar42 - auVar58._0_4_;
    auVar48._8_4_ = fVar11 - (float)CONCAT13(bVar41,uVar8);
    auVar48._12_4_ = 0;
    uVar9 = a64_TBL(ZEXT816(0),auVar38,auVar48,DAT_0388a888);
    uVar74 = a64_TBL(ZEXT816(0),auVar38,auVar48,DAT_0388a710);
    auVar72._8_8_ = uVar74;
    auVar72._0_8_ = uVar9 & 0xffffffff00000000;
    uVar57 = a64_TBL(ZEXT816(0),auVar38,auVar48,DAT_0388a758);
    auVar84._4_12_ = auVar72._4_12_;
    auVar84._0_4_ = fVar17;
    auVar62._0_8_ = a64_TBL(ZEXT816(0),auVar38,auVar48,DAT_0388a880);
    uVar75 = a64_TBL(ZEXT816(0),auVar38,auVar48,DAT_0388a640);
    auVar79._0_8_ = a64_TBL(ZEXT816(0),auVar38,auVar48,DAT_0388a700);
    uVar74 = a64_TBL(ZEXT816(0),auVar38,auVar48,DAT_0388a590);
    auVar49._4_4_ = fVar65;
    auVar49._0_4_ = fVar65;
    auVar49._8_4_ = fVar65;
    auVar49._12_4_ = fVar65;
    auVar62._12_4_ = (undefined4)((ulong)uVar75 >> 0x20);
    auVar62._8_4_ = fVar12;
    auVar79._8_8_ = uVar74;
    auVar86._4_4_ = fVar17;
    auVar86._0_4_ = fVar17;
    auVar86._8_4_ = fVar17;
    auVar86._12_4_ = fVar17;
    auVar83._0_8_ = CONCAT44(-(uint)(fVar17 <= fVar65),-(uint)(fVar17 <= fVar65));
    auVar83._8_4_ = -(uint)(fVar17 <= fVar65);
    auVar83._12_4_ = -(uint)(fVar17 <= fVar65);
    auVar85._8_8_ = auVar83._8_8_;
    auVar85._0_8_ = auVar83._0_8_;
    auVar58[4] = SUB41(fVar65,0);
    auVar58._0_4_ = (int)uVar9;
    auVar58[5] = (char)((uint)fVar65 >> 8);
    auVar58[6] = (char)((uint)fVar65 >> 0x10);
    auVar58[7] = (char)((uint)fVar65 >> 0x18);
    auVar58[8] = (char)uVar57;
    auVar58[9] = (char)((ulong)uVar57 >> 8);
    auVar58[10] = (char)((ulong)uVar57 >> 0x10);
    auVar58[0xb] = (char)((ulong)uVar57 >> 0x18);
    auVar58[0xc] = (char)((ulong)uVar57 >> 0x20);
    auVar58[0xd] = (char)((ulong)uVar57 >> 0x28);
    auVar58[0xe] = (char)((ulong)uVar57 >> 0x30);
    auVar58[0xf] = (char)((ulong)uVar57 >> 0x38);
    auVar84 = auVar84 ^ (auVar84 ^ auVar58) & auVar83;
    uVar18 = SUB41(fVar12,0);
    uVar19 = (undefined1)((uint)fVar12 >> 8);
    uVar21 = (undefined1)((uint)fVar12 >> 0x10);
    uVar23 = (undefined1)((uint)fVar12 >> 0x18);
    auVar80._0_12_ = auVar79._0_12_;
    auVar80._12_4_ = fVar15;
    auVar86 = auVar86 ^ (auVar86 ^ auVar49) & auVar85;
    auVar39._0_8_ = CONCAT44(-(uint)(auVar86._4_4_ <= fVar12),-(uint)(auVar86._0_4_ <= fVar12));
    auVar39._8_4_ = -(uint)(auVar86._8_4_ <= fVar12);
    auVar39._12_4_ = -(uint)(auVar86._12_4_ <= fVar12);
    auVar50._8_8_ = auVar39._8_8_;
    auVar50._0_8_ = auVar39._0_8_;
    auVar84 = auVar84 ^ (auVar84 ^ auVar62) & auVar39;
    auVar67[4] = uVar18;
    auVar67._0_4_ = fVar12;
    auVar67[5] = uVar19;
    auVar67[6] = uVar21;
    auVar67[7] = uVar23;
    auVar67[8] = uVar18;
    auVar67[9] = uVar19;
    auVar67[10] = uVar21;
    auVar67[0xb] = uVar23;
    auVar67[0xc] = uVar18;
    auVar67[0xd] = uVar19;
    auVar67[0xe] = uVar21;
    auVar67[0xf] = uVar23;
    auVar86 = auVar86 ^ (auVar86 ^ auVar67) & auVar50;
    auVar13._0_4_ = -(uint)(auVar86._0_4_ <= fVar15);
    auVar13._4_4_ = -(uint)(auVar86._4_4_ <= fVar15);
    auVar13._8_4_ = -(uint)(auVar86._8_4_ <= fVar15);
    auVar13._12_4_ = -(uint)(auVar86._12_4_ <= fVar15);
    auVar84 = auVar84 ^ (auVar84 ^ auVar80) & auVar13;
    fVar65 = auVar84._0_4_;
    fVar11 = fVar65 * fVar65;
    fVar12 = auVar84._4_4_;
    fVar42 = fVar12 * fVar12;
    uVar18 = (undefined1)((uint)fVar42 >> 8);
    uVar19 = (undefined1)((uint)fVar42 >> 0x10);
    uVar21 = (undefined1)((uint)fVar42 >> 0x18);
    fVar15 = auVar84._8_4_;
    fVar53 = fVar15 * fVar15;
    uVar23 = (undefined1)((uint)fVar53 >> 8);
    uVar26 = (undefined1)((uint)fVar53 >> 0x10);
    uVar28 = (undefined1)((uint)fVar53 >> 0x18);
    fVar16 = auVar84._12_4_;
    fVar17 = fVar16 * fVar16;
    uVar31 = (undefined1)((uint)fVar17 >> 8);
    uVar33 = (undefined1)((uint)fVar17 >> 0x10);
    uVar35 = (undefined1)((uint)fVar17 >> 0x18);
    auVar5[4] = SUB41(fVar42,0);
    auVar5._0_4_ = fVar11;
    auVar5[5] = uVar18;
    auVar5[6] = uVar19;
    auVar5[7] = uVar21;
    auVar5[8] = SUB41(fVar53,0);
    auVar5[9] = uVar23;
    auVar5[10] = uVar26;
    auVar5[0xb] = uVar28;
    auVar5[0xc] = SUB41(fVar17,0);
    auVar5[0xd] = uVar31;
    auVar5[0xe] = uVar33;
    auVar5[0xf] = uVar35;
    auVar6[4] = SUB41(fVar42,0);
    auVar6._0_4_ = fVar11;
    auVar6[5] = uVar18;
    auVar6[6] = uVar19;
    auVar6[7] = uVar21;
    auVar6[8] = SUB41(fVar53,0);
    auVar6[9] = uVar23;
    auVar6[10] = uVar26;
    auVar6[0xb] = uVar28;
    auVar6[0xc] = SUB41(fVar17,0);
    auVar6[0xd] = uVar31;
    auVar6[0xe] = uVar33;
    auVar6[0xf] = uVar35;
    auVar58 = NEON_ext(auVar5,auVar6,8,1);
    fVar11 = auVar58._0_4_ + fVar11;
    fVar42 = auVar58._4_4_ + fVar42;
    fVar53 = fVar11 + fVar42;
    fVar11 = fVar11 + fVar42;
    uVar18 = SUB41(fVar11,0);
    uVar19 = (undefined1)((uint)fVar11 >> 8);
    uVar21 = (undefined1)((uint)fVar11 >> 0x10);
    uVar23 = (undefined1)((uint)fVar11 >> 0x18);
    auVar7[4] = uVar18;
    auVar7._0_4_ = fVar53;
    auVar7[5] = uVar19;
    auVar7[6] = uVar21;
    auVar7[7] = uVar23;
    auVar7[8] = SUB41(fVar53,0);
    auVar7[9] = (char)((uint)fVar53 >> 8);
    auVar7[10] = (char)((uint)fVar53 >> 0x10);
    auVar7[0xb] = (char)((uint)fVar53 >> 0x18);
    auVar7[0xc] = uVar18;
    auVar7[0xd] = uVar19;
    auVar7[0xe] = uVar21;
    auVar7[0xf] = uVar23;
    auVar58 = NEON_frsqrte(auVar7,4);
    auVar51._0_4_ = auVar58._0_4_ * fVar53;
    auVar51._4_4_ = auVar58._4_4_ * fVar11;
    auVar51._8_4_ = auVar58._8_4_ * fVar53;
    uVar4 = (undefined2)(CONCAT15(uVar19,CONCAT14(uVar18,fVar53)) >> 0x20);
    auVar51._12_4_ = auVar58._12_4_ * (float)CONCAT13(uVar23,CONCAT12(uVar21,uVar4));
    auVar67 = NEON_frsqrts(auVar58,auVar51,4);
    auVar40._0_4_ = auVar58._0_4_ * auVar67._0_4_;
    auVar40._4_4_ = auVar58._4_4_ * auVar67._4_4_;
    auVar40._8_4_ = auVar58._8_4_ * auVar67._8_4_;
    auVar40._12_4_ = auVar58._12_4_ * auVar67._12_4_;
    auVar52._0_4_ = fVar53 * auVar40._0_4_;
    auVar52._4_4_ = fVar11 * auVar40._4_4_;
    auVar52._8_4_ = fVar53 * auVar40._8_4_;
    auVar52._12_4_ = (float)CONCAT13(uVar23,CONCAT12(uVar21,uVar4)) * auVar40._12_4_;
    iVar43 = -(uint)(fVar53 == 0.0);
    iVar54 = -(uint)(fVar11 == 0.0);
    iVar55 = -(uint)(fVar53 == 0.0);
    iVar56 = -(uint)((float)CONCAT13(uVar23,CONCAT12(uVar21,uVar4)) == 0.0);
    param_4 = NEON_frsqrts(auVar40,auVar52,4);
    fVar65 = auVar40._0_4_ * param_4._0_4_ * fVar65;
    fVar12 = auVar40._4_4_ * param_4._4_4_ * fVar12;
    fVar15 = auVar40._8_4_ * param_4._8_4_ * fVar15;
    fVar16 = auVar40._12_4_ * param_4._12_4_ * fVar16;
    auVar14._0_8_ =
         CONCAT17((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                  CONCAT16((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10),
                           CONCAT15((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar54 >> 8),
                                    CONCAT14(SUB41(fVar12,0) & ~(byte)iVar54,
                                             CONCAT13((byte)((uint)fVar65 >> 0x18) &
                                                      ~(byte)((uint)iVar43 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar65 >> 0x10) &
                                                               ~(byte)((uint)iVar43 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar65 >> 8) &
                                                                        ~(byte)((uint)iVar43 >> 8),
                                                                        SUB41(fVar65,0) &
                                                                        ~(byte)iVar43)))))));
    auVar14[8] = SUB41(fVar15,0) & ~(byte)iVar55;
    auVar14[9] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar55 >> 8);
    auVar14[10] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
    auVar14[0xb] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
    auVar14[0xc] = SUB41(fVar16,0) & ~(byte)iVar56;
    auVar14[0xd] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar56 >> 8);
    auVar14[0xe] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10);
    auVar14[0xf] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18);
    uVar74 = auVar14._8_8_;
    if (local_28 != (long *)0x0) {
      lVar10 = local_28[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar43 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar43 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar43 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
    uVar57 = auVar14._0_8_;
  }
  *(undefined8 *)(param_5 + 0x18) = uVar74;
  *(undefined8 *)(param_5 + 0x10) = uVar57;
  FUN_009c69bc(&local_28,param_6);
  if (local_28 == (long *)0x0) {
    uVar74 = 0;
    uVar57 = 0;
  }
  else {
    (**(code **)(*local_28 + 0x40))();
    uVar57 = param_4._8_8_;
    uVar74 = param_4._0_8_;
    if (local_28 != (long *)0x0) {
      lVar10 = local_28[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar43 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar43 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar43 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  *(undefined8 *)(param_5 + 0x28) = uVar57;
  *(undefined8 *)(param_5 + 0x20) = uVar74;
  *(undefined4 *)(param_5 + 0x30) = *(undefined4 *)(param_6 + 0x23c);
  *(undefined4 *)(param_5 + 0x34) = *(undefined4 *)(param_6 + 0x240);
  return;
}


