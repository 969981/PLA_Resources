/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a36704; name: FUN_01a36704
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a36704(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long *param_4)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined3 uVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  float fVar16;
  float extraout_s0;
  float fVar17;
  long extraout_d0;
  undefined8 uVar18;
  float extraout_var_00;
  float extraout_var;
  float fVar21;
  float fVar22;
  float extraout_var_02;
  float fVar23;
  undefined1 auVar19 [16];
  long extraout_var_01;
  undefined1 auVar20 [16];
  undefined1 uVar24;
  undefined1 uVar25;
  byte bVar26;
  undefined1 uVar27;
  byte bVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined7 uVar42;
  undefined1 auVar43 [12];
  byte bVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar48;
  int iVar49;
  float fVar50;
  float fVar60;
  int iVar62;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  int iVar61;
  int iVar63;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  int iVar71;
  undefined8 uVar64;
  undefined8 uVar65;
  int iVar72;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar73;
  undefined8 uVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar82;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined8 uVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined8 uVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_38;
  
  uVar39 = param_2[0xf];
  uVar37 = param_2[0xe];
  uVar36 = param_2[0xd];
  uVar35 = param_2[0xc];
  uVar33 = param_2[0xb];
  uVar31 = param_2[10];
  uVar30 = param_2[9];
  uVar40 = param_2[8];
  uVar38 = param_2[7];
  uVar41 = param_2[6];
  uVar34 = param_2[5];
  uVar32 = param_2[4];
  uVar29 = param_2[3];
  uVar27 = param_2[2];
  uVar25 = param_2[1];
  uVar24 = param_2[0];
  FUN_00956dac(&local_38,param_4 + 0x60);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x40))();
    uVar18 = DAT_0388a880;
    auVar51._0_4_ = extraout_s0 * extraout_s0;
    auVar51._4_4_ = extraout_var * extraout_var;
    auVar51._8_4_ = extraout_var_00 * extraout_var_00;
    auVar51._12_4_ = extraout_var_02 * extraout_var_02;
    auVar66 = NEON_ext(auVar51,auVar51,8,1);
    fVar48 = auVar66._0_4_ + auVar51._0_4_;
    fVar60 = auVar66._4_4_ + auVar51._4_4_;
    fVar16 = fVar48 + fVar60;
    fVar48 = fVar48 + fVar60;
    auVar52._8_8_ = CONCAT44(fVar48,fVar16);
    auVar52._0_8_ = CONCAT44(fVar48,fVar16);
    auVar66 = NEON_frsqrte(auVar52,4);
    auVar75._0_4_ = auVar66._0_4_ * fVar16;
    auVar75._4_4_ = auVar66._4_4_ * fVar48;
    auVar75._8_4_ = auVar66._8_4_ * fVar16;
    auVar75._12_4_ = auVar66._12_4_ * fVar48;
    auVar76 = NEON_frsqrts(auVar66,auVar75,4);
    auVar67._0_4_ = auVar66._0_4_ * auVar76._0_4_;
    auVar67._4_4_ = auVar66._4_4_ * auVar76._4_4_;
    auVar67._8_4_ = auVar66._8_4_ * auVar76._8_4_;
    auVar67._12_4_ = auVar66._12_4_ * auVar76._12_4_;
    auVar77._0_4_ = fVar16 * auVar67._0_4_;
    auVar77._4_4_ = fVar48 * auVar67._4_4_;
    auVar77._8_4_ = fVar16 * auVar67._8_4_;
    auVar77._12_4_ = fVar48 * auVar67._12_4_;
    iVar49 = -(uint)(fVar16 == 0.0);
    iVar61 = -(uint)(fVar48 == 0.0);
    iVar62 = -(uint)(fVar16 == 0.0);
    iVar63 = -(uint)(fVar48 == 0.0);
    auVar66 = NEON_frsqrts(auVar67,auVar77,4);
    fVar16 = extraout_s0 * auVar67._0_4_ * auVar66._0_4_;
    fVar48 = extraout_var * auVar67._4_4_ * auVar66._4_4_;
    fVar60 = extraout_var_00 * auVar67._8_4_ * auVar66._8_4_;
    fVar23 = extraout_var_02 * auVar67._12_4_ * auVar66._12_4_;
    fVar50 = (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                             CONCAT12((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                                      CONCAT11((byte)((uint)fVar16 >> 8) &
                                               ~(byte)((uint)iVar49 >> 8),
                                               SUB41(fVar16,0) & ~(byte)iVar49)));
    auVar53._0_8_ =
         CONCAT17((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                  CONCAT16((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                           CONCAT15((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar61 >> 8),
                                    CONCAT14(SUB41(fVar48,0) & ~(byte)iVar61,fVar50))));
    auVar53[8] = SUB41(fVar60,0) & ~(byte)iVar62;
    auVar53[9] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar62 >> 8);
    auVar53[10] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10);
    auVar53[0xb] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18);
    auVar53[0xc] = SUB41(fVar23,0) & ~(byte)iVar63;
    auVar53[0xd] = (byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar63 >> 8);
    auVar53[0xe] = (byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10);
    auVar53[0xf] = (byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18);
    auVar68._0_4_ =
         (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar25,uVar24))) *
         (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar25,uVar24)));
    auVar68._4_4_ =
         (float)CONCAT13(uVar38,CONCAT12(uVar41,CONCAT11(uVar34,uVar32))) *
         (float)CONCAT13(uVar38,CONCAT12(uVar41,CONCAT11(uVar34,uVar32)));
    auVar68._8_4_ =
         (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar30,uVar40))) *
         (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar30,uVar40)));
    auVar68._12_4_ =
         (float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))) *
         (float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar36,uVar35)));
    auVar66 = NEON_ext(auVar68,auVar68,8,1);
    fVar48 = auVar66._0_4_ + auVar68._0_4_;
    fVar60 = auVar66._4_4_ + auVar68._4_4_;
    fVar16 = fVar48 + fVar60;
    fVar48 = fVar48 + fVar60;
    auVar69._8_8_ = CONCAT44(fVar48,fVar16);
    auVar69._0_8_ = CONCAT44(fVar48,fVar16);
    auVar66 = NEON_frsqrte(auVar69,4);
    auVar86._0_4_ = auVar66._0_4_ * fVar16;
    auVar86._4_4_ = auVar66._4_4_ * fVar48;
    auVar86._8_4_ = auVar66._8_4_ * fVar16;
    auVar86._12_4_ = auVar66._12_4_ * fVar48;
    auVar76 = NEON_frsqrts(auVar66,auVar86,4);
    auVar78._0_4_ = auVar66._0_4_ * auVar76._0_4_;
    auVar78._4_4_ = auVar66._4_4_ * auVar76._4_4_;
    auVar78._8_4_ = auVar66._8_4_ * auVar76._8_4_;
    auVar78._12_4_ = auVar66._12_4_ * auVar76._12_4_;
    auVar87._0_4_ = fVar16 * auVar78._0_4_;
    auVar87._4_4_ = fVar48 * auVar78._4_4_;
    auVar87._8_4_ = fVar16 * auVar78._8_4_;
    auVar87._12_4_ = fVar48 * auVar78._12_4_;
    iVar63 = -(uint)(fVar16 == 0.0);
    iVar71 = -(uint)(fVar48 == 0.0);
    iVar72 = -(uint)(fVar16 == 0.0);
    auVar66 = NEON_frsqrts(auVar78,auVar87,4);
    fVar48 = (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar25,uVar24))) *
             auVar78._0_4_ * auVar66._0_4_;
    fVar16 = (float)CONCAT13(uVar38,CONCAT12(uVar41,CONCAT11(uVar34,uVar32))) *
             auVar78._4_4_ * auVar66._4_4_;
    fVar60 = (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar30,uVar40))) *
             auVar78._8_4_ * auVar66._8_4_;
    bVar26 = (byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10);
    bVar28 = (byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18);
    fVar17 = param_3._0_4_;
    auVar79._0_4_ = fVar17 * fVar17;
    fVar21 = param_3._4_4_;
    auVar79._4_4_ = fVar21 * fVar21;
    fVar22 = param_3._8_4_;
    auVar79._8_4_ = fVar22 * fVar22;
    auVar79._12_4_ = param_3._12_4_ * param_3._12_4_;
    auVar66 = NEON_ext(auVar79,auVar79,8,1);
    fVar73 = auVar66._0_4_ + auVar79._0_4_;
    fVar82 = auVar66._4_4_ + auVar79._4_4_;
    fVar23 = fVar73 + fVar82;
    fVar73 = fVar73 + fVar82;
    auVar80._8_8_ = CONCAT44(fVar73,fVar23);
    auVar80._0_8_ = CONCAT44(fVar73,fVar23);
    auVar66 = NEON_frsqrte(auVar80,4);
    auVar92._0_4_ = auVar66._0_4_ * fVar23;
    auVar92._4_4_ = auVar66._4_4_ * fVar73;
    auVar92._8_4_ = auVar66._8_4_ * fVar23;
    auVar92._12_4_ = auVar66._12_4_ * fVar73;
    auVar76 = NEON_frsqrts(auVar66,auVar92,4);
    auVar88._0_4_ = auVar66._0_4_ * auVar76._0_4_;
    auVar88._4_4_ = auVar66._4_4_ * auVar76._4_4_;
    auVar88._8_4_ = auVar66._8_4_ * auVar76._8_4_;
    auVar88._12_4_ = auVar66._12_4_ * auVar76._12_4_;
    auVar93._0_4_ = fVar23 * auVar88._0_4_;
    auVar93._4_4_ = fVar73 * auVar88._4_4_;
    auVar93._8_4_ = fVar23 * auVar88._8_4_;
    auVar93._12_4_ = fVar73 * auVar88._12_4_;
    auVar66 = NEON_frsqrts(auVar88,auVar93,4);
    fVar17 = fVar17 * auVar88._0_4_ * auVar66._0_4_;
    fVar21 = fVar21 * auVar88._4_4_ * auVar66._4_4_;
    fVar22 = fVar22 * auVar88._8_4_ * auVar66._8_4_;
    iVar49 = -(uint)(fVar23 == 0.0);
    iVar61 = -(uint)(fVar73 == 0.0);
    iVar62 = -(uint)(fVar23 == 0.0);
    uVar42 = CONCAT16((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                      CONCAT15((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar61 >> 8),
                               CONCAT14(SUB41(fVar21,0) & ~(byte)iVar61,
                                        CONCAT13((byte)((uint)fVar17 >> 0x18) &
                                                 ~(byte)((uint)iVar49 >> 0x18),
                                                 CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                                          ~(byte)((uint)iVar49 >> 0x10),
                                                          CONCAT11((byte)((uint)fVar17 >> 8) &
                                                                   ~(byte)((uint)iVar49 >> 8),
                                                                   SUB41(fVar17,0) & ~(byte)iVar49))
                                                ))));
    bVar47 = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
    auVar43._0_8_ = CONCAT17(bVar47,uVar42);
    auVar43[8] = SUB41(fVar22,0) & ~(byte)iVar62;
    auVar43[9] = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar62 >> 8);
    auVar43[10] = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10);
    auVar43[0xb] = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18);
    uVar83 = NEON_ext(auVar53._0_8_,auVar43._0_8_,4,1);
    auVar66 = NEON_ext(auVar53,auVar53,8,1);
    fVar16 = (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18),
                             CONCAT12((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10),
                                      CONCAT11((byte)((uint)fVar16 >> 8) &
                                               ~(byte)((uint)iVar71 >> 8),
                                               SUB41(fVar16,0) & ~(byte)iVar71)));
    fVar21 = auVar43._8_4_;
    auVar76 = NEON_fmov(0x3f800000,4);
    fVar23 = (float)_DAT_03889820 * fVar50 + (float)_DAT_0388a450 * fVar16 +
             (float)_DAT_03889eb0 * fVar21 + auVar76._0_4_;
    fVar73 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar50 +
             (float)((ulong)_DAT_0388a450 >> 0x20) * fVar16 +
             (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar21 + auVar76._4_4_;
    fVar17 = (float)_UNK_03889828 * fVar50 + (float)_UNK_0388a458 * fVar16 +
             (float)_UNK_03889eb8 * fVar21 + auVar76._8_4_;
    fVar21 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar50 +
             (float)((ulong)_UNK_0388a458 >> 0x20) * fVar16 +
             (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar21 + auVar76._12_4_;
    fVar16 = (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18),
                             CONCAT12((byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10),
                                      CONCAT11((byte)((uint)fVar60 >> 8) &
                                               ~(byte)((uint)iVar72 >> 8),
                                               SUB41(fVar60,0) & ~(byte)iVar72)));
    uVar5 = CONCAT11((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar63 >> 8),
                     SUB41(fVar48,0) & ~(byte)iVar63);
    auVar44._0_4_ = (float)uVar83 + (float)CONCAT13(bVar28,CONCAT12(bVar26,uVar5));
    fVar48 = (float)((ulong)uVar83 >> 0x20);
    auVar44._4_4_ = fVar48 + auVar66._0_4_;
    uVar12 = (undefined3)((uint7)uVar42 >> 0x20);
    auVar44._8_4_ = fVar16 + (float)CONCAT13(bVar47,uVar12);
    auVar44._12_4_ = 0;
    auVar54._0_4_ = (float)uVar83 - (float)CONCAT13(bVar28,CONCAT12(bVar26,uVar5));
    auVar54._4_4_ = fVar48 - auVar66._0_4_;
    auVar54._8_4_ = fVar16 - (float)CONCAT13(bVar47,uVar12);
    auVar54._12_4_ = 0;
    uVar13 = a64_TBL(ZEXT816(0),auVar44,auVar54,DAT_0388a888);
    uVar83 = a64_TBL(ZEXT816(0),auVar44,auVar54,DAT_0388a710);
    auVar81._8_8_ = uVar83;
    auVar81._0_8_ = uVar13 & 0xffffffff00000000;
    uVar64 = a64_TBL(ZEXT816(0),auVar44,auVar54,DAT_0388a758);
    uVar84 = a64_TBL(ZEXT816(0),auVar44,auVar54,DAT_0388a640);
    auVar95._4_12_ = auVar81._4_12_;
    auVar95._0_4_ = fVar23;
    auVar70._0_8_ = a64_TBL(ZEXT816(0),auVar44,auVar54,DAT_0388a880);
    auVar89._0_8_ = a64_TBL(ZEXT816(0),auVar44,auVar54,DAT_0388a700);
    uVar83 = a64_TBL(ZEXT816(0),auVar44,auVar54,DAT_0388a590);
    auVar55._4_4_ = fVar73;
    auVar55._0_4_ = fVar73;
    auVar55._8_4_ = fVar73;
    auVar55._12_4_ = fVar73;
    auVar70._12_4_ = (undefined4)((ulong)uVar84 >> 0x20);
    auVar70._8_4_ = fVar17;
    auVar89._8_8_ = uVar83;
    auVar98._4_4_ = fVar23;
    auVar98._0_4_ = fVar23;
    auVar98._8_4_ = fVar23;
    auVar98._12_4_ = fVar23;
    auVar94._0_8_ = CONCAT44(-(uint)(fVar23 <= fVar73),-(uint)(fVar23 <= fVar73));
    auVar94._8_4_ = -(uint)(fVar23 <= fVar73);
    auVar94._12_4_ = -(uint)(fVar23 <= fVar73);
    auVar97._8_8_ = auVar94._8_8_;
    auVar97._0_8_ = auVar94._0_8_;
    auVar66[4] = SUB41(fVar73,0);
    auVar66._0_4_ = (int)uVar13;
    auVar66[5] = (char)((uint)fVar73 >> 8);
    auVar66[6] = (char)((uint)fVar73 >> 0x10);
    auVar66[7] = (char)((uint)fVar73 >> 0x18);
    auVar66[8] = (char)uVar64;
    auVar66[9] = (char)((ulong)uVar64 >> 8);
    auVar66[10] = (char)((ulong)uVar64 >> 0x10);
    auVar66[0xb] = (char)((ulong)uVar64 >> 0x18);
    auVar66[0xc] = (char)((ulong)uVar64 >> 0x20);
    auVar66[0xd] = (char)((ulong)uVar64 >> 0x28);
    auVar66[0xe] = (char)((ulong)uVar64 >> 0x30);
    auVar66[0xf] = (char)((ulong)uVar64 >> 0x38);
    auVar95 = auVar95 ^ (auVar95 ^ auVar66) & auVar94;
    uVar24 = SUB41(fVar17,0);
    uVar25 = (undefined1)((uint)fVar17 >> 8);
    uVar27 = (undefined1)((uint)fVar17 >> 0x10);
    uVar29 = (undefined1)((uint)fVar17 >> 0x18);
    auVar90._0_12_ = auVar89._0_12_;
    auVar90._12_4_ = fVar21;
    auVar98 = auVar98 ^ (auVar98 ^ auVar55) & auVar97;
    auVar45._0_8_ = CONCAT44(-(uint)(auVar98._4_4_ <= fVar17),-(uint)(auVar98._0_4_ <= fVar17));
    auVar45._8_4_ = -(uint)(auVar98._8_4_ <= fVar17);
    auVar45._12_4_ = -(uint)(auVar98._12_4_ <= fVar17);
    auVar56._8_8_ = auVar45._8_8_;
    auVar56._0_8_ = auVar45._0_8_;
    auVar95 = auVar95 ^ (auVar95 ^ auVar70) & auVar45;
    auVar76[4] = uVar24;
    auVar76._0_4_ = fVar17;
    auVar76[5] = uVar25;
    auVar76[6] = uVar27;
    auVar76[7] = uVar29;
    auVar76[8] = uVar24;
    auVar76[9] = uVar25;
    auVar76[10] = uVar27;
    auVar76[0xb] = uVar29;
    auVar76[0xc] = uVar24;
    auVar76[0xd] = uVar25;
    auVar76[0xe] = uVar27;
    auVar76[0xf] = uVar29;
    auVar98 = auVar98 ^ (auVar98 ^ auVar76) & auVar56;
    auVar19._0_4_ = -(uint)(auVar98._0_4_ <= fVar21);
    auVar19._4_4_ = -(uint)(auVar98._4_4_ <= fVar21);
    auVar19._8_4_ = -(uint)(auVar98._8_4_ <= fVar21);
    auVar19._12_4_ = -(uint)(auVar98._12_4_ <= fVar21);
    auVar95 = auVar95 ^ (auVar95 ^ auVar90) & auVar19;
    fVar73 = auVar95._0_4_;
    fVar16 = fVar73 * fVar73;
    fVar17 = auVar95._4_4_;
    fVar48 = fVar17 * fVar17;
    uVar24 = (undefined1)((uint)fVar48 >> 8);
    uVar25 = (undefined1)((uint)fVar48 >> 0x10);
    uVar27 = (undefined1)((uint)fVar48 >> 0x18);
    fVar21 = auVar95._8_4_;
    fVar60 = fVar21 * fVar21;
    uVar29 = (undefined1)((uint)fVar60 >> 8);
    uVar32 = (undefined1)((uint)fVar60 >> 0x10);
    uVar34 = (undefined1)((uint)fVar60 >> 0x18);
    fVar22 = auVar95._12_4_;
    fVar23 = fVar22 * fVar22;
    uVar41 = (undefined1)((uint)fVar23 >> 8);
    uVar38 = (undefined1)((uint)fVar23 >> 0x10);
    uVar40 = (undefined1)((uint)fVar23 >> 0x18);
    auVar6[4] = SUB41(fVar48,0);
    auVar6._0_4_ = fVar16;
    auVar6[5] = uVar24;
    auVar6[6] = uVar25;
    auVar6[7] = uVar27;
    auVar6[8] = SUB41(fVar60,0);
    auVar6[9] = uVar29;
    auVar6[10] = uVar32;
    auVar6[0xb] = uVar34;
    auVar6[0xc] = SUB41(fVar23,0);
    auVar6[0xd] = uVar41;
    auVar6[0xe] = uVar38;
    auVar6[0xf] = uVar40;
    auVar7[4] = SUB41(fVar48,0);
    auVar7._0_4_ = fVar16;
    auVar7[5] = uVar24;
    auVar7[6] = uVar25;
    auVar7[7] = uVar27;
    auVar7[8] = SUB41(fVar60,0);
    auVar7[9] = uVar29;
    auVar7[10] = uVar32;
    auVar7[0xb] = uVar34;
    auVar7[0xc] = SUB41(fVar23,0);
    auVar7[0xd] = uVar41;
    auVar7[0xe] = uVar38;
    auVar7[0xf] = uVar40;
    auVar66 = NEON_ext(auVar6,auVar7,8,1);
    fVar16 = auVar66._0_4_ + fVar16;
    fVar48 = auVar66._4_4_ + fVar48;
    fVar60 = fVar16 + fVar48;
    fVar16 = fVar16 + fVar48;
    uVar24 = SUB41(fVar16,0);
    uVar25 = (undefined1)((uint)fVar16 >> 8);
    uVar27 = (undefined1)((uint)fVar16 >> 0x10);
    uVar29 = (undefined1)((uint)fVar16 >> 0x18);
    auVar8[4] = uVar24;
    auVar8._0_4_ = fVar60;
    auVar8[5] = uVar25;
    auVar8[6] = uVar27;
    auVar8[7] = uVar29;
    auVar8[8] = SUB41(fVar60,0);
    auVar8[9] = (char)((uint)fVar60 >> 8);
    auVar8[10] = (char)((uint)fVar60 >> 0x10);
    auVar8[0xb] = (char)((uint)fVar60 >> 0x18);
    auVar8[0xc] = uVar24;
    auVar8[0xd] = uVar25;
    auVar8[0xe] = uVar27;
    auVar8[0xf] = uVar29;
    auVar66 = NEON_frsqrte(auVar8,4);
    auVar57._0_4_ = auVar66._0_4_ * fVar60;
    auVar57._4_4_ = auVar66._4_4_ * fVar16;
    auVar57._8_4_ = auVar66._8_4_ * fVar60;
    uVar5 = (undefined2)(CONCAT15(uVar25,CONCAT14(uVar24,fVar60)) >> 0x20);
    auVar57._12_4_ = auVar66._12_4_ * (float)CONCAT13(uVar29,CONCAT12(uVar27,uVar5));
    auVar76 = NEON_frsqrts(auVar66,auVar57,4);
    auVar46._0_4_ = auVar66._0_4_ * auVar76._0_4_;
    auVar46._4_4_ = auVar66._4_4_ * auVar76._4_4_;
    auVar46._8_4_ = auVar66._8_4_ * auVar76._8_4_;
    auVar46._12_4_ = auVar66._12_4_ * auVar76._12_4_;
    auVar58._0_4_ = fVar60 * auVar46._0_4_;
    auVar58._4_4_ = fVar16 * auVar46._4_4_;
    auVar58._8_4_ = fVar60 * auVar46._8_4_;
    auVar58._12_4_ = (float)CONCAT13(uVar29,CONCAT12(uVar27,uVar5)) * auVar46._12_4_;
    iVar49 = -(uint)(fVar60 == 0.0);
    iVar61 = -(uint)(fVar16 == 0.0);
    iVar62 = -(uint)(fVar60 == 0.0);
    iVar63 = -(uint)((float)CONCAT13(uVar29,CONCAT12(uVar27,uVar5)) == 0.0);
    auVar66 = NEON_frsqrts(auVar46,auVar58,4);
    fVar73 = auVar46._0_4_ * auVar66._0_4_ * fVar73;
    fVar17 = auVar46._4_4_ * auVar66._4_4_ * fVar17;
    fVar21 = auVar46._8_4_ * auVar66._8_4_ * fVar21;
    fVar22 = auVar46._12_4_ * auVar66._12_4_ * fVar22;
    uStack_48 = CONCAT17((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                         CONCAT16((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10),
                                  CONCAT15((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar63 >> 8),
                                           CONCAT14(SUB41(fVar22,0) & ~(byte)iVar63,
                                                    CONCAT13((byte)((uint)fVar21 >> 0x18) &
                                                             ~(byte)((uint)iVar62 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                                                      ~(byte)((uint)iVar62 >> 0x10),
                                                                      CONCAT11((byte)((uint)fVar21
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar62
                                                                                      >> 8),
                                                                               SUB41(fVar21,0) &
                                                                               ~(byte)iVar62)))))));
    local_50 = CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                        CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10),
                                 CONCAT15((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar61 >> 8),
                                          CONCAT14(SUB41(fVar17,0) & ~(byte)iVar61,
                                                   CONCAT13((byte)((uint)fVar73 >> 0x18) &
                                                            ~(byte)((uint)iVar49 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar73 >> 0x10) &
                                                                     ~(byte)((uint)iVar49 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar73 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar49
                                                                                     >> 8),
                                                                              SUB41(fVar73,0) &
                                                                              ~(byte)iVar49)))))));
    FUN_009c6b1c(param_4 + 0x1bbe,&local_50);
    puVar14 = PTR_FloatPi_04372cf0;
    param_4[0x1bbf] = extraout_var_01;
    param_4[0x1bbe] = extraout_d0;
    auVar66 = FUN_009a7ff4((*(float *)puVar14 / *(float *)PTR_FloatDegree180_04372ce0) * 180.0,
                           SUB41((*(float *)puVar14 / *(float *)PTR_FloatDegree180_04372ce0) *
                                 *(float *)(param_4 + 0x1bbc),0));
    plVar1 = param_4 + 0x1bbe;
    lVar15 = param_4[0x1bbf];
    uVar24 = (undefined1)((ulong)lVar15 >> 8);
    uVar25 = (undefined1)((ulong)lVar15 >> 0x10);
    uVar27 = (undefined1)((ulong)lVar15 >> 0x18);
    uVar29 = (undefined1)((ulong)lVar15 >> 0x20);
    uVar32 = (undefined1)((ulong)lVar15 >> 0x28);
    uVar34 = (undefined1)((ulong)lVar15 >> 0x30);
    uVar41 = (undefined1)((ulong)lVar15 >> 0x38);
    auVar9[9] = uVar24;
    auVar9._0_9_ = *(unkbyte9 *)plVar1;
    auVar9[10] = uVar25;
    auVar9[0xb] = uVar27;
    auVar9[0xc] = uVar29;
    auVar9[0xd] = uVar32;
    auVar9[0xe] = uVar34;
    auVar9[0xf] = uVar41;
    uVar84 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a580);
    uVar85 = a64_TBL(ZEXT816(0),auVar66,DAT_0388a6c8);
    auVar10[9] = uVar24;
    auVar10._0_9_ = *(unkbyte9 *)plVar1;
    auVar10[10] = uVar25;
    auVar10[0xb] = uVar27;
    auVar10[0xc] = uVar29;
    auVar10[0xd] = uVar32;
    auVar10[0xe] = uVar34;
    auVar10[0xf] = uVar41;
    uVar74 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a680);
    uVar83 = a64_TBL(ZEXT816(0),auVar66,DAT_0388a580);
    fVar73 = (float)((ulong)uVar74 >> 0x20);
    fVar16 = (float)*plVar1;
    fVar48 = (float)((ulong)*plVar1 >> 0x20);
    fVar23 = (float)((ulong)uVar84 >> 0x20);
    uVar65 = a64_TBL(ZEXT816(0),auVar66,DAT_0388a680);
    uVar91 = a64_TBL(ZEXT816(0),auVar66,uVar18);
    uVar96 = a64_TBL(ZEXT816(0),auVar66,DAT_0388a790);
    auVar20._0_8_ = auVar66._0_8_;
    auVar20._8_8_ = auVar20._0_8_;
    fVar17 = (float)((ulong)_DAT_03889ad0 >> 0x20);
    fVar21 = (float)((ulong)_UNK_03889ad8 >> 0x20);
    auVar11[9] = uVar24;
    auVar11._0_9_ = *(unkbyte9 *)plVar1;
    auVar11[10] = uVar25;
    auVar11[0xb] = uVar27;
    auVar11[0xc] = uVar29;
    auVar11[0xd] = uVar32;
    auVar11[0xe] = uVar34;
    auVar11[0xf] = uVar41;
    uVar64 = a64_TBL(ZEXT816(0),auVar11,uVar18);
    fVar60 = (float)((ulong)uVar64 >> 0x20);
    uVar18 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a648);
    auVar59._0_8_ =
         CONCAT44((auVar66._4_4_ * fVar23 + fVar17 * fVar48 * (float)((ulong)uVar83 >> 0x20) +
                  fVar17 * fVar60 * (float)((ulong)uVar65 >> 0x20)) -
                  fVar73 * (float)((ulong)uVar91 >> 0x20),
                  (auVar66._0_4_ * (float)uVar84 + (float)_DAT_03889ad0 * fVar16 * (float)uVar83 +
                  (float)_DAT_03889ad0 * (float)uVar64 * (float)uVar65) -
                  (float)uVar74 * (float)uVar91);
    auVar59._8_4_ =
         (auVar66._8_4_ * (float)uVar84 + (float)_UNK_03889ad8 * (float)uVar74 * (float)uVar85 +
         (float)_UNK_03889ad8 * fVar16 * (float)uVar18) - (float)uVar64 * (float)uVar96;
    auVar59._12_4_ =
         (auVar66._12_4_ * fVar23 + fVar21 * fVar73 * (float)((ulong)uVar85 >> 0x20) +
         fVar21 * fVar48 * (float)((ulong)uVar18 >> 0x20)) - fVar60 * (float)((ulong)uVar96 >> 0x20)
    ;
    uStack_48 = auVar59._8_8_;
    local_50 = auVar59._0_8_;
    auVar66 = FUN_0098fad4(&local_50);
    fVar16 = (float)FUN_01904460(param_4 + 0xb6);
    param_4[0xe0] = (long)(double)fVar16;
    FUN_01a3e7c0(auVar66._4_4_,param_4);
    *(int *)((long)param_4 + 0xdd84) = auVar66._0_4_;
    if ((char)param_4[0x6e] == '\0') {
      *(int *)((long)param_4 + 0x364) = auVar66._0_4_;
    }
    if (local_38 != (long *)0x0) {
      lVar15 = local_38[0xb];
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        iVar49 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar49 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar49 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  if (*(float *)((long)param_4 + 0x54c) < 1.0) {
    (**(code **)(*param_4 + 0x178))(param_4);
  }
  return;
}


