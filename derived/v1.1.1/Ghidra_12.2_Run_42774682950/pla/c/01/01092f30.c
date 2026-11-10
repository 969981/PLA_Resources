/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01092f30; name: FUN_01092f30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01092f30(undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined8 param_5,long *param_6,uint param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  undefined3 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar16;
  undefined8 uVar14;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  float fVar19;
  byte bVar20;
  byte bVar21;
  undefined1 uVar22;
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
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 auVar38 [12];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  int iVar43;
  float fVar44;
  float fVar56;
  int iVar58;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar57;
  int iVar59;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined7 uVar60;
  int iVar70;
  byte bVar71;
  int iVar72;
  undefined1 auVar62 [12];
  undefined8 uVar61;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined8 uVar73;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar85;
  undefined1 auVar80 [16];
  undefined8 uVar74;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined8 uVar86;
  undefined8 uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined4 uVar97;
  undefined4 uVar98;
  undefined8 uVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined8 uVar104;
  undefined8 uVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_38;
  
  uVar37 = param_3[0xf];
  uVar36 = param_3[0xe];
  uVar35 = param_3[0xd];
  uVar34 = param_3[0xc];
  uVar33 = param_3[0xb];
  uVar32 = param_3[10];
  uVar31 = param_3[9];
  uVar30 = param_3[8];
  uVar28 = param_3[7];
  uVar26 = param_3[6];
  uVar24 = param_3[5];
  uVar22 = param_3[4];
  uVar29 = param_3[3];
  uVar27 = param_3[2];
  uVar25 = param_3[1];
  uVar23 = param_3[0];
  lVar11 = FUN_0095934c(*param_6 + 0xf0,&local_50);
  if (lVar11 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_01b39678(&local_38);
    auVar15 = (**(code **)(*(long *)*param_6 + 0x40))();
    fVar13 = auVar15._0_4_;
    auVar45._0_4_ = fVar13 * fVar13;
    fVar16 = auVar15._4_4_;
    auVar45._4_4_ = fVar16 * fVar16;
    fVar17 = auVar15._8_4_;
    auVar45._8_4_ = fVar17 * fVar17;
    fVar19 = auVar15._12_4_;
    auVar45._12_4_ = fVar19 * fVar19;
    auVar15 = NEON_ext(auVar45,auVar45,8,1);
    fVar42 = auVar15._0_4_ + auVar45._0_4_;
    fVar56 = auVar15._4_4_ + auVar45._4_4_;
    fVar12 = fVar42 + fVar56;
    fVar42 = fVar42 + fVar56;
    auVar46._8_8_ = CONCAT44(fVar42,fVar12);
    auVar46._0_8_ = CONCAT44(fVar42,fVar12);
    auVar15 = NEON_frsqrte(auVar46,4);
    auVar75._0_4_ = auVar15._0_4_ * fVar12;
    auVar75._4_4_ = auVar15._4_4_ * fVar42;
    auVar75._8_4_ = auVar15._8_4_ * fVar12;
    auVar75._12_4_ = auVar15._12_4_ * fVar42;
    auVar76 = NEON_frsqrts(auVar15,auVar75,4);
    auVar63._0_4_ = auVar15._0_4_ * auVar76._0_4_;
    auVar63._4_4_ = auVar15._4_4_ * auVar76._4_4_;
    auVar63._8_4_ = auVar15._8_4_ * auVar76._8_4_;
    auVar63._12_4_ = auVar15._12_4_ * auVar76._12_4_;
    auVar77._0_4_ = fVar12 * auVar63._0_4_;
    auVar77._4_4_ = fVar42 * auVar63._4_4_;
    auVar77._8_4_ = fVar12 * auVar63._8_4_;
    auVar77._12_4_ = fVar42 * auVar63._12_4_;
    iVar43 = -(uint)(fVar12 == 0.0);
    iVar57 = -(uint)(fVar42 == 0.0);
    iVar58 = -(uint)(fVar12 == 0.0);
    iVar59 = -(uint)(fVar42 == 0.0);
    auVar15 = NEON_frsqrts(auVar63,auVar77,4);
    fVar13 = fVar13 * auVar63._0_4_ * auVar15._0_4_;
    fVar16 = fVar16 * auVar63._4_4_ * auVar15._4_4_;
    fVar17 = fVar17 * auVar63._8_4_ * auVar15._8_4_;
    fVar19 = fVar19 * auVar63._12_4_ * auVar15._12_4_;
    fVar44 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                             CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                      CONCAT11((byte)((uint)fVar13 >> 8) &
                                               ~(byte)((uint)iVar43 >> 8),
                                               SUB41(fVar13,0) & ~(byte)iVar43)));
    auVar47._0_8_ =
         CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18),
                  CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10),
                           CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar57 >> 8),
                                    CONCAT14(SUB41(fVar16,0) & ~(byte)iVar57,fVar44))));
    auVar47[8] = SUB41(fVar17,0) & ~(byte)iVar58;
    auVar47[9] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar58 >> 8);
    auVar47[10] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
    auVar47[0xb] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
    auVar47[0xc] = SUB41(fVar19,0) & ~(byte)iVar59;
    auVar47[0xd] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar59 >> 8);
    auVar47[0xe] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
    auVar47[0xf] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
    auVar64._0_4_ =
         (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar25,uVar23))) *
         (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar25,uVar23)));
    auVar64._4_4_ =
         (float)CONCAT13(uVar28,CONCAT12(uVar26,CONCAT11(uVar24,uVar22))) *
         (float)CONCAT13(uVar28,CONCAT12(uVar26,CONCAT11(uVar24,uVar22)));
    auVar64._8_4_ =
         (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))) *
         (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
    auVar64._12_4_ =
         (float)CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34))) *
         (float)CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34)));
    auVar15 = NEON_ext(auVar64,auVar64,8,1);
    fVar42 = auVar15._0_4_ + auVar64._0_4_;
    fVar13 = auVar15._4_4_ + auVar64._4_4_;
    fVar12 = fVar42 + fVar13;
    fVar42 = fVar42 + fVar13;
    auVar65._8_8_ = CONCAT44(fVar42,fVar12);
    auVar65._0_8_ = CONCAT44(fVar42,fVar12);
    auVar15 = NEON_frsqrte(auVar65,4);
    auVar88._0_4_ = auVar15._0_4_ * fVar12;
    auVar88._4_4_ = auVar15._4_4_ * fVar42;
    auVar88._8_4_ = auVar15._8_4_ * fVar12;
    auVar88._12_4_ = auVar15._12_4_ * fVar42;
    auVar76 = NEON_frsqrts(auVar15,auVar88,4);
    auVar78._0_4_ = auVar15._0_4_ * auVar76._0_4_;
    auVar78._4_4_ = auVar15._4_4_ * auVar76._4_4_;
    auVar78._8_4_ = auVar15._8_4_ * auVar76._8_4_;
    auVar78._12_4_ = auVar15._12_4_ * auVar76._12_4_;
    auVar89._0_4_ = fVar12 * auVar78._0_4_;
    auVar89._4_4_ = fVar42 * auVar78._4_4_;
    auVar89._8_4_ = fVar12 * auVar78._8_4_;
    auVar89._12_4_ = fVar42 * auVar78._12_4_;
    iVar59 = -(uint)(fVar12 == 0.0);
    iVar70 = -(uint)(fVar42 == 0.0);
    iVar72 = -(uint)(fVar12 == 0.0);
    auVar15 = NEON_frsqrts(auVar78,auVar89,4);
    fVar42 = (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar25,uVar23))) *
             auVar78._0_4_ * auVar15._0_4_;
    fVar12 = (float)CONCAT13(uVar28,CONCAT12(uVar26,CONCAT11(uVar24,uVar22))) *
             auVar78._4_4_ * auVar15._4_4_;
    fVar13 = (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))) *
             auVar78._8_4_ * auVar15._8_4_;
    bVar20 = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
    bVar21 = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
    fVar19 = param_4._0_4_;
    auVar79._0_4_ = fVar19 * fVar19;
    fVar56 = param_4._4_4_;
    auVar79._4_4_ = fVar56 * fVar56;
    fVar18 = param_4._8_4_;
    auVar79._8_4_ = fVar18 * fVar18;
    auVar79._12_4_ = param_4._12_4_ * param_4._12_4_;
    auVar15 = NEON_ext(auVar79,auVar79,8,1);
    fVar17 = auVar15._0_4_ + auVar79._0_4_;
    fVar85 = auVar15._4_4_ + auVar79._4_4_;
    fVar16 = fVar17 + fVar85;
    fVar17 = fVar17 + fVar85;
    auVar80._8_8_ = CONCAT44(fVar17,fVar16);
    auVar80._0_8_ = CONCAT44(fVar17,fVar16);
    auVar15 = NEON_frsqrte(auVar80,4);
    auVar94._0_4_ = auVar15._0_4_ * fVar16;
    auVar94._4_4_ = auVar15._4_4_ * fVar17;
    auVar94._8_4_ = auVar15._8_4_ * fVar16;
    auVar94._12_4_ = auVar15._12_4_ * fVar17;
    auVar76 = NEON_frsqrts(auVar15,auVar94,4);
    auVar90._0_4_ = auVar15._0_4_ * auVar76._0_4_;
    auVar90._4_4_ = auVar15._4_4_ * auVar76._4_4_;
    auVar90._8_4_ = auVar15._8_4_ * auVar76._8_4_;
    auVar90._12_4_ = auVar15._12_4_ * auVar76._12_4_;
    auVar95._0_4_ = fVar16 * auVar90._0_4_;
    auVar95._4_4_ = fVar17 * auVar90._4_4_;
    auVar95._8_4_ = fVar16 * auVar90._8_4_;
    auVar95._12_4_ = fVar17 * auVar90._12_4_;
    auVar15 = NEON_frsqrts(auVar90,auVar95,4);
    fVar19 = fVar19 * auVar90._0_4_ * auVar15._0_4_;
    fVar56 = fVar56 * auVar90._4_4_ * auVar15._4_4_;
    fVar18 = fVar18 * auVar90._8_4_ * auVar15._8_4_;
    iVar43 = -(uint)(fVar16 == 0.0);
    iVar57 = -(uint)(fVar17 == 0.0);
    iVar58 = -(uint)(fVar16 == 0.0);
    uVar60 = CONCAT16((byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10),
                      CONCAT15((byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar57 >> 8),
                               CONCAT14(SUB41(fVar56,0) & ~(byte)iVar57,
                                        CONCAT13((byte)((uint)fVar19 >> 0x18) &
                                                 ~(byte)((uint)iVar43 >> 0x18),
                                                 CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                                          ~(byte)((uint)iVar43 >> 0x10),
                                                          CONCAT11((byte)((uint)fVar19 >> 8) &
                                                                   ~(byte)((uint)iVar43 >> 8),
                                                                   SUB41(fVar19,0) & ~(byte)iVar43))
                                                ))));
    bVar71 = (byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
    auVar62._0_8_ = CONCAT17(bVar71,uVar60);
    auVar62[8] = SUB41(fVar18,0) & ~(byte)iVar58;
    auVar62[9] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar58 >> 8);
    auVar62[10] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
    auVar62[0xb] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
    uVar73 = NEON_ext(auVar47._0_8_,auVar62._0_8_,4,1);
    auVar76 = NEON_ext(auVar47,auVar47,8,1);
    fVar12 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                             CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                                      CONCAT11((byte)((uint)fVar12 >> 8) &
                                               ~(byte)((uint)iVar70 >> 8),
                                               SUB41(fVar12,0) & ~(byte)iVar70)));
    fVar56 = auVar62._8_4_;
    auVar15 = NEON_fmov(0x3f800000,4);
    fVar16 = (float)_DAT_03889820 * fVar44 + (float)_DAT_0388a450 * fVar12 +
             (float)_DAT_03889eb0 * fVar56 + auVar15._0_4_;
    fVar17 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar44 +
             (float)((ulong)_DAT_0388a450 >> 0x20) * fVar12 +
             (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar56 + auVar15._4_4_;
    fVar19 = (float)_UNK_03889828 * fVar44 + (float)_UNK_0388a458 * fVar12 +
             (float)_UNK_03889eb8 * fVar56 + auVar15._8_4_;
    fVar56 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar44 +
             (float)((ulong)_UNK_0388a458 >> 0x20) * fVar12 +
             (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar56 + auVar15._12_4_;
    fVar12 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18),
                             CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10),
                                      CONCAT11((byte)((uint)fVar13 >> 8) &
                                               ~(byte)((uint)iVar72 >> 8),
                                               SUB41(fVar13,0) & ~(byte)iVar72)));
    uVar4 = CONCAT11((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar59 >> 8),
                     SUB41(fVar42,0) & ~(byte)iVar59);
    auVar48._0_4_ = (float)uVar73 + (float)CONCAT13(bVar21,CONCAT12(bVar20,uVar4));
    fVar42 = (float)((ulong)uVar73 >> 0x20);
    auVar48._4_4_ = fVar42 + auVar76._0_4_;
    uVar6 = (undefined3)((uint7)uVar60 >> 0x20);
    auVar48._8_4_ = fVar12 + (float)CONCAT13(bVar71,uVar6);
    auVar48._12_4_ = 0;
    auVar66._0_4_ = (float)uVar73 - (float)CONCAT13(bVar21,CONCAT12(bVar20,uVar4));
    auVar66._4_4_ = fVar42 - auVar76._0_4_;
    auVar66._8_4_ = fVar12 - (float)CONCAT13(bVar71,uVar6);
    auVar66._12_4_ = 0;
    uVar74 = a64_TBL(ZEXT816(0),auVar48,auVar66,DAT_0388a888);
    uVar73 = a64_TBL(ZEXT816(0),auVar48,auVar66,DAT_0388a710);
    auVar91._8_8_ = uVar73;
    auVar91._0_8_ = uVar74;
    uVar73 = a64_TBL(ZEXT816(0),auVar48,auVar66,DAT_0388a758);
    auVar101._4_12_ = auVar91._4_12_;
    auVar101._0_4_ = fVar16;
    auVar96._0_8_ = a64_TBL(ZEXT816(0),auVar48,auVar66,DAT_0388a880);
    uVar61 = a64_TBL(ZEXT816(0),auVar48,auVar66,DAT_0388a640);
    auVar81._0_4_ = (undefined4)uVar74;
    auVar81._4_4_ = fVar17;
    auVar81._8_8_ = uVar73;
    uVar73 = a64_TBL(ZEXT816(0),auVar48,auVar66,DAT_0388a700);
    uVar74 = a64_TBL(ZEXT816(0),auVar48,auVar66,DAT_0388a590);
    auVar67._4_4_ = fVar17;
    auVar67._0_4_ = fVar17;
    auVar67._8_4_ = fVar17;
    auVar67._12_4_ = fVar17;
    auVar96._12_4_ = (undefined4)((ulong)uVar61 >> 0x20);
    auVar96._8_4_ = fVar19;
    auVar103._4_4_ = fVar16;
    auVar103._0_4_ = fVar16;
    auVar103._8_4_ = fVar16;
    auVar103._12_4_ = fVar16;
    auVar100._0_8_ = CONCAT44(-(uint)(fVar16 <= fVar17),-(uint)(fVar16 <= fVar17));
    auVar100._8_4_ = -(uint)(fVar16 <= fVar17);
    auVar100._12_4_ = -(uint)(fVar16 <= fVar17);
    auVar102._8_8_ = auVar100._8_8_;
    auVar102._0_8_ = auVar100._0_8_;
    auVar101 = auVar101 ^ (auVar101 ^ auVar81) & auVar100;
    auVar103 = auVar103 ^ (auVar103 ^ auVar67) & auVar102;
    auVar49._4_4_ = fVar19;
    auVar49._0_4_ = fVar19;
    auVar49._8_4_ = fVar19;
    auVar49._12_4_ = fVar19;
    auVar68._0_8_ = CONCAT44(-(uint)(auVar103._4_4_ <= fVar19),-(uint)(auVar103._0_4_ <= fVar19));
    auVar68._8_4_ = -(uint)(auVar103._8_4_ <= fVar19);
    auVar68._12_4_ = -(uint)(auVar103._12_4_ <= fVar19);
    auVar82._8_8_ = auVar68._8_8_;
    auVar82._0_8_ = auVar68._0_8_;
    auVar101 = auVar101 ^ (auVar101 ^ auVar96) & auVar68;
    auVar103 = auVar103 ^ (auVar103 ^ auVar49) & auVar82;
    auVar39._0_4_ = -(uint)(auVar103._0_4_ <= fVar56);
    auVar39._4_4_ = -(uint)(auVar103._4_4_ <= fVar56);
    auVar39._8_4_ = -(uint)(auVar103._8_4_ <= fVar56);
    auVar39._12_4_ = -(uint)(auVar103._12_4_ <= fVar56);
    auVar7._8_4_ = (int)uVar74;
    auVar7._0_8_ = uVar73;
    auVar7._12_4_ = fVar56;
    auVar101 = auVar101 ^ (auVar101 ^ auVar7) & auVar39;
    fVar13 = auVar101._0_4_;
    auVar50._0_4_ = fVar13 * fVar13;
    fVar16 = auVar101._4_4_;
    auVar50._4_4_ = fVar16 * fVar16;
    fVar17 = auVar101._8_4_;
    auVar50._8_4_ = fVar17 * fVar17;
    fVar19 = auVar101._12_4_;
    auVar50._12_4_ = fVar19 * fVar19;
    auVar15 = NEON_ext(auVar50,auVar50,8,1);
    fVar42 = auVar15._0_4_ + auVar50._0_4_;
    fVar56 = auVar15._4_4_ + auVar50._4_4_;
    fVar12 = fVar42 + fVar56;
    fVar42 = fVar42 + fVar56;
    auVar51._8_8_ = CONCAT44(fVar42,fVar12);
    auVar51._0_8_ = CONCAT44(fVar42,fVar12);
    auVar15 = NEON_frsqrte(auVar51,4);
    auVar83._0_4_ = auVar15._0_4_ * fVar12;
    auVar83._4_4_ = auVar15._4_4_ * fVar42;
    auVar83._8_4_ = auVar15._8_4_ * fVar12;
    auVar83._12_4_ = auVar15._12_4_ * fVar42;
    auVar76 = NEON_frsqrts(auVar15,auVar83,4);
    auVar69._0_4_ = auVar15._0_4_ * auVar76._0_4_;
    auVar69._4_4_ = auVar15._4_4_ * auVar76._4_4_;
    auVar69._8_4_ = auVar15._8_4_ * auVar76._8_4_;
    auVar69._12_4_ = auVar15._12_4_ * auVar76._12_4_;
    auVar84._0_4_ = fVar12 * auVar69._0_4_;
    auVar84._4_4_ = fVar42 * auVar69._4_4_;
    auVar84._8_4_ = fVar12 * auVar69._8_4_;
    auVar84._12_4_ = fVar42 * auVar69._12_4_;
    iVar43 = -(uint)(fVar12 == 0.0);
    iVar57 = -(uint)(fVar42 == 0.0);
    iVar58 = -(uint)(fVar12 == 0.0);
    iVar59 = -(uint)(fVar42 == 0.0);
    auVar15 = NEON_frsqrts(auVar69,auVar84,4);
    fVar13 = auVar69._0_4_ * auVar15._0_4_ * fVar13;
    fVar16 = auVar69._4_4_ * auVar15._4_4_ * fVar16;
    fVar17 = auVar69._8_4_ * auVar15._8_4_ * fVar17;
    fVar19 = auVar69._12_4_ * auVar15._12_4_ * fVar19;
    fVar12 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                             CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                      CONCAT11((byte)((uint)fVar13 >> 8) &
                                               ~(byte)((uint)iVar43 >> 8),
                                               SUB41(fVar13,0) & ~(byte)iVar43)));
    auVar38._0_8_ =
         CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18),
                  CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10),
                           CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar57 >> 8),
                                    CONCAT14(SUB41(fVar16,0) & ~(byte)iVar57,fVar12))));
    auVar38[8] = SUB41(fVar17,0) & ~(byte)iVar58;
    auVar38[9] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar58 >> 8);
    auVar38[10] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
    auVar38[0xb] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
    auVar40[0xc] = SUB41(fVar19,0) & ~(byte)iVar59;
    auVar40._0_12_ = auVar38;
    auVar40[0xd] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar59 >> 8);
    auVar40[0xe] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
    auVar40[0xf] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
    uVar97 = (undefined4)_UNK_03888d18;
    uVar98 = (undefined4)((ulong)_UNK_03888d18 >> 0x20);
    fVar42 = fVar12 * (float)_DAT_03889ac0;
    fVar18 = (float)((ulong)auVar38._0_8_ >> 0x20) * (float)((ulong)_DAT_03889ac0 >> 0x20);
    auVar92._0_8_ = CONCAT44(fVar18,fVar42);
    auVar92._8_4_ = auVar38._8_4_ * (float)_UNK_03889ac8;
    auVar92._12_4_ = auVar40._12_4_ * (float)((ulong)_UNK_03889ac8 >> 0x20);
    auVar8._8_4_ = uVar97;
    auVar8._0_8_ = _DAT_03888d10;
    auVar8._12_4_ = uVar98;
    uVar73 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a580);
    uVar61 = a64_TBL(ZEXT816(0),auVar92,DAT_0388a580);
    auVar9._8_4_ = uVar97;
    auVar9._0_8_ = _DAT_03888d10;
    auVar9._12_4_ = uVar98;
    uVar99 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a680);
    uVar104 = a64_TBL(ZEXT816(0),auVar92,DAT_0388a6c8);
    fVar13 = (float)((ulong)uVar73 >> 0x20);
    fVar85 = (float)((ulong)uVar99 >> 0x20);
    uVar105 = a64_TBL(ZEXT816(0),auVar92,DAT_0388a680);
    uVar106 = a64_TBL(ZEXT816(0),auVar92,DAT_0388a880);
    uVar107 = a64_TBL(ZEXT816(0),auVar92,DAT_0388a790);
    auVar93._8_8_ = auVar92._0_8_;
    auVar93._0_8_ = auVar92._0_8_;
    fVar16 = (float)_DAT_03889ad0;
    fVar17 = (float)((ulong)_DAT_03889ad0 >> 0x20);
    fVar19 = (float)_UNK_03889ad8;
    fVar56 = (float)((ulong)_UNK_03889ad8 >> 0x20);
    uVar74 = a64_TBL(ZEXT816(0),auVar93,DAT_0388a648);
    auVar10._8_4_ = uVar97;
    auVar10._0_8_ = _DAT_03888d10;
    auVar10._12_4_ = uVar98;
    uVar86 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a880);
    fVar44 = (float)((ulong)uVar86 >> 0x20);
    uVar87 = a64_TBL(ZEXT816(0),auVar40,DAT_0388a680);
    uVar14 = a64_TBL(ZEXT816(0),auVar40,DAT_0388a580);
    fVar42 = ((float)uVar73 * fVar42 + fVar16 * (float)uVar61 * 0.0 +
             fVar16 * (float)uVar86 * (float)uVar105) - (float)uVar99 * (float)uVar106;
    auVar52._0_8_ =
         CONCAT44((fVar13 * fVar18 + fVar17 * (float)((ulong)uVar61 >> 0x20) * 0.0 +
                  fVar17 * fVar44 * (float)((ulong)uVar105 >> 0x20)) -
                  fVar85 * (float)((ulong)uVar106 >> 0x20),fVar42);
    auVar52._8_4_ =
         ((float)uVar73 * auVar92._8_4_ + fVar19 * (float)uVar99 * (float)uVar104 +
         fVar19 * (float)uVar74 * 0.0) - (float)uVar86 * (float)uVar107;
    auVar52._12_4_ =
         (fVar13 * auVar92._12_4_ + fVar56 * fVar85 * (float)((ulong)uVar104 >> 0x20) +
         fVar56 * (float)((ulong)uVar74 >> 0x20) * 0.0) - fVar44 * (float)((ulong)uVar107 >> 0x20);
    uVar104 = a64_TBL(ZEXT816(0),auVar52,DAT_0388a580);
    uVar61 = a64_TBL(ZEXT816(0),auVar52,DAT_0388a6c8);
    uVar99 = a64_TBL(ZEXT816(0),auVar52,DAT_0388a680);
    uVar74 = a64_TBL(ZEXT816(0),auVar52,DAT_0388a880);
    uVar105 = a64_TBL(ZEXT816(0),auVar52,DAT_0388a790);
    auVar53._8_8_ = auVar52._0_8_;
    auVar53._0_8_ = auVar52._0_8_;
    uVar73 = a64_TBL(ZEXT816(0),auVar40,DAT_0388a880);
    uVar86 = a64_TBL(ZEXT816(0),auVar53,DAT_0388a648);
    fVar16 = ((float)uVar14 * fVar42 + fVar16 * fVar12 * (float)uVar104 +
             fVar16 * (float)uVar73 * (float)uVar99) - (float)uVar87 * (float)uVar74;
    fVar17 = ((float)uVar14 * auVar52._8_4_ + fVar19 * (float)uVar87 * (float)uVar61 +
             fVar19 * fVar12 * (float)uVar86) - (float)uVar73 * (float)uVar105;
    fVar12 = fVar16 * fVar16;
    fVar42 = fVar17 * fVar17;
    uVar23 = (undefined1)((uint)fVar42 >> 8);
    uVar25 = (undefined1)((uint)fVar42 >> 0x10);
    uVar27 = (undefined1)((uint)fVar42 >> 0x18);
    auVar15._4_4_ = 0;
    auVar15._0_4_ = fVar12;
    auVar15[8] = SUB41(fVar42,0);
    auVar15[9] = uVar23;
    auVar15[10] = uVar25;
    auVar15[0xb] = uVar27;
    auVar15._12_4_ = 0;
    auVar76._4_4_ = 0;
    auVar76._0_4_ = fVar12;
    auVar76[8] = SUB41(fVar42,0);
    auVar76[9] = uVar23;
    auVar76[10] = uVar25;
    auVar76[0xb] = uVar27;
    auVar76._12_4_ = 0;
    auVar15 = NEON_ext(auVar15,auVar76,8,1);
    fVar12 = auVar15._0_4_ + fVar12;
    fVar42 = auVar15._4_4_ + 0.0;
    fVar13 = fVar12 + fVar42;
    fVar12 = fVar12 + fVar42;
    uVar23 = SUB41(fVar12,0);
    uVar25 = (undefined1)((uint)fVar12 >> 8);
    uVar27 = (undefined1)((uint)fVar12 >> 0x10);
    uVar29 = (undefined1)((uint)fVar12 >> 0x18);
    auVar5[4] = uVar23;
    auVar5._0_4_ = fVar13;
    auVar5[5] = uVar25;
    auVar5[6] = uVar27;
    auVar5[7] = uVar29;
    auVar5[8] = SUB41(fVar13,0);
    auVar5[9] = (char)((uint)fVar13 >> 8);
    auVar5[10] = (char)((uint)fVar13 >> 0x10);
    auVar5[0xb] = (char)((uint)fVar13 >> 0x18);
    auVar5[0xc] = uVar23;
    auVar5[0xd] = uVar25;
    auVar5[0xe] = uVar27;
    auVar5[0xf] = uVar29;
    auVar15 = NEON_frsqrte(auVar5,4);
    auVar54._0_4_ = auVar15._0_4_ * fVar13;
    auVar54._4_4_ = auVar15._4_4_ * fVar12;
    auVar54._8_4_ = auVar15._8_4_ * fVar13;
    uVar4 = (undefined2)(CONCAT15(uVar25,CONCAT14(uVar23,fVar13)) >> 0x20);
    auVar54._12_4_ = auVar15._12_4_ * (float)CONCAT13(uVar29,CONCAT12(uVar27,uVar4));
    auVar76 = NEON_frsqrts(auVar15,auVar54,4);
    auVar41._0_4_ = auVar15._0_4_ * auVar76._0_4_;
    auVar41._4_4_ = auVar15._4_4_ * auVar76._4_4_;
    auVar41._8_4_ = auVar15._8_4_ * auVar76._8_4_;
    auVar41._12_4_ = auVar15._12_4_ * auVar76._12_4_;
    auVar55._0_4_ = fVar13 * auVar41._0_4_;
    auVar55._4_4_ = fVar12 * auVar41._4_4_;
    auVar55._8_4_ = fVar13 * auVar41._8_4_;
    auVar55._12_4_ = (float)CONCAT13(uVar29,CONCAT12(uVar27,uVar4)) * auVar41._12_4_;
    auVar15 = NEON_frsqrts(auVar41,auVar55,4);
    fVar42 = auVar15._0_4_;
    fVar19 = auVar15._4_4_;
    fVar56 = auVar15._8_4_;
    fVar18 = auVar15._12_4_;
    iVar43 = -(uint)(fVar13 == 0.0);
    iVar57 = -(uint)(fVar12 == 0.0);
    iVar58 = -(uint)(fVar13 == 0.0);
    iVar59 = -(uint)((float)CONCAT13(uVar29,CONCAT12(uVar27,uVar4)) == 0.0);
    (**(code **)(*(long *)*param_6 + 0x40))();
    fVar12 = auVar41._0_4_ * fVar42 * fVar16 * 0.5;
    fVar42 = auVar41._4_4_ * fVar19 * 0.0 * 0.5;
    fVar13 = auVar41._8_4_ * fVar56 * fVar17 * 0.5;
    fVar16 = auVar41._12_4_ * fVar18 * 0.0 * 0.5;
    fVar12 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                             CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                      CONCAT11((byte)((uint)fVar12 >> 8) &
                                               ~(byte)((uint)iVar43 >> 8),
                                               SUB41(fVar12,0) & ~(byte)iVar43)));
    fVar13 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18),
                             CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10),
                                      CONCAT11((byte)((uint)fVar13 >> 8) &
                                               ~(byte)((uint)iVar58 >> 8),
                                               SUB41(fVar13,0) & ~(byte)iVar58)));
    local_50 = CONCAT44(auVar15._4_4_ + (float)((ulong)_DAT_03889de0 >> 0x20) +
                        (float)(CONCAT17((byte)((uint)fVar42 >> 0x18) &
                                         ~(byte)((uint)iVar57 >> 0x18),
                                         CONCAT16((byte)((uint)fVar42 >> 0x10) &
                                                  ~(byte)((uint)iVar57 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar42 >> 8) &
                                                           ~(byte)((uint)iVar57 >> 8),
                                                           CONCAT14(SUB41(fVar42,0) & ~(byte)iVar57,
                                                                    fVar12)))) >> 0x20),
                        auVar15._0_4_ + (float)_DAT_03889de0 + fVar12);
    uStack_48 = CONCAT44(auVar15._12_4_ + (float)((ulong)_UNK_03889de8 >> 0x20) +
                         (float)(CONCAT17((byte)((uint)fVar16 >> 0x18) &
                                          ~(byte)((uint)iVar59 >> 0x18),
                                          CONCAT16((byte)((uint)fVar16 >> 0x10) &
                                                   ~(byte)((uint)iVar59 >> 0x10),
                                                   CONCAT15((byte)((uint)fVar16 >> 8) &
                                                            ~(byte)((uint)iVar59 >> 8),
                                                            CONCAT14(SUB41(fVar16,0) & ~(byte)iVar59
                                                                     ,fVar13)))) >> 0x20),
                         auVar15._8_4_ + (float)_UNK_03889de8 + fVar13);
    uStack_58 = _UNK_03888fc8;
    local_60 = _DAT_03888fc0;
    FUN_01093390(param_1,param_5,&local_38,&local_50,&local_60,param_7 & 1);
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 10;
      do {
        iVar43 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar43;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar43 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
  }
  return;
}


