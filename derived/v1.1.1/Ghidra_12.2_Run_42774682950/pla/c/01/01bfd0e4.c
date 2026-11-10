/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bfd0e4; name: FUN_01bfd0e4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_01bfd0e4(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined3 uVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float fVar13;
  float fVar16;
  float fVar17;
  float extraout_var_01;
  float fVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 uVar19;
  undefined1 uVar20;
  byte bVar21;
  undefined1 uVar22;
  byte bVar23;
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
  undefined7 uVar37;
  undefined1 auVar38 [12];
  byte bVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar44;
  int iVar45;
  float fVar46;
  float fVar55;
  int iVar57;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  int iVar56;
  int iVar58;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar65;
  undefined8 uVar59;
  int iVar66;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar67;
  float fVar75;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined8 uVar76;
  undefined8 uVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  long *local_20;
  long *local_18;
  
  uVar36 = param_2[0xf];
  uVar34 = param_2[0xe];
  uVar32 = param_2[0xd];
  uVar30 = param_2[0xc];
  uVar29 = param_2[0xb];
  uVar27 = param_2[10];
  uVar25 = param_2[9];
  uVar35 = param_2[8];
  uVar33 = param_2[7];
  uVar31 = param_2[6];
  uVar28 = param_2[5];
  uVar26 = param_2[4];
  uVar24 = param_2[3];
  uVar22 = param_2[2];
  uVar20 = param_2[1];
  uVar19 = param_2[0];
  if (*(long *)(param_4 + 0x270) == 0) {
    local_18 = (long *)0x0;
  }
  else {
    FUN_00cfac20(&local_18,*(long *)(param_4 + 0x270));
    if (local_18 != (long *)0x0) {
      auVar60 = (**(code **)(*local_18 + 0x148))(local_18);
      goto joined_r0x01bfd3d8;
    }
  }
  FUN_009c69bc(&local_20,param_4);
  (**(code **)(*local_20 + 0x40))();
  auVar47._0_4_ = extraout_s0 * extraout_s0;
  auVar47._4_4_ = extraout_var * extraout_var;
  auVar47._8_4_ = extraout_var_00 * extraout_var_00;
  auVar47._12_4_ = extraout_var_01 * extraout_var_01;
  auVar60 = NEON_ext(auVar47,auVar47,8,1);
  fVar44 = auVar60._0_4_ + auVar47._0_4_;
  fVar55 = auVar60._4_4_ + auVar47._4_4_;
  fVar12 = fVar44 + fVar55;
  fVar44 = fVar44 + fVar55;
  auVar48._8_8_ = CONCAT44(fVar44,fVar12);
  auVar48._0_8_ = CONCAT44(fVar44,fVar12);
  auVar60 = NEON_frsqrte(auVar48,4);
  auVar68._0_4_ = auVar60._0_4_ * fVar12;
  auVar68._4_4_ = auVar60._4_4_ * fVar44;
  auVar68._8_4_ = auVar60._8_4_ * fVar12;
  auVar68._12_4_ = auVar60._12_4_ * fVar44;
  auVar69 = NEON_frsqrts(auVar60,auVar68,4);
  auVar61._0_4_ = auVar60._0_4_ * auVar69._0_4_;
  auVar61._4_4_ = auVar60._4_4_ * auVar69._4_4_;
  auVar61._8_4_ = auVar60._8_4_ * auVar69._8_4_;
  auVar61._12_4_ = auVar60._12_4_ * auVar69._12_4_;
  auVar70._0_4_ = fVar12 * auVar61._0_4_;
  auVar70._4_4_ = fVar44 * auVar61._4_4_;
  auVar70._8_4_ = fVar12 * auVar61._8_4_;
  auVar70._12_4_ = fVar44 * auVar61._12_4_;
  iVar45 = -(uint)(fVar12 == 0.0);
  iVar56 = -(uint)(fVar44 == 0.0);
  iVar57 = -(uint)(fVar12 == 0.0);
  iVar58 = -(uint)(fVar44 == 0.0);
  auVar60 = NEON_frsqrts(auVar61,auVar70,4);
  fVar12 = extraout_s0 * auVar61._0_4_ * auVar60._0_4_;
  fVar44 = extraout_var * auVar61._4_4_ * auVar60._4_4_;
  fVar55 = extraout_var_00 * auVar61._8_4_ * auVar60._8_4_;
  fVar18 = extraout_var_01 * auVar61._12_4_ * auVar60._12_4_;
  fVar46 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                           CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10),
                                    CONCAT11((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar45 >> 8),
                                             SUB41(fVar12,0) & ~(byte)iVar45)));
  auVar49._0_8_ =
       CONCAT17((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18),
                CONCAT16((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10),
                         CONCAT15((byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar56 >> 8),
                                  CONCAT14(SUB41(fVar44,0) & ~(byte)iVar56,fVar46))));
  auVar49[8] = SUB41(fVar55,0) & ~(byte)iVar57;
  auVar49[9] = (byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar57 >> 8);
  auVar49[10] = (byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
  auVar49[0xb] = (byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
  auVar49[0xc] = SUB41(fVar18,0) & ~(byte)iVar58;
  auVar49[0xd] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar58 >> 8);
  auVar49[0xe] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
  auVar49[0xf] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
  auVar62._0_4_ =
       (float)CONCAT13(uVar24,CONCAT12(uVar22,CONCAT11(uVar20,uVar19))) *
       (float)CONCAT13(uVar24,CONCAT12(uVar22,CONCAT11(uVar20,uVar19)));
  auVar62._4_4_ =
       (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar28,uVar26))) *
       (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar28,uVar26)));
  auVar62._8_4_ =
       (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar25,uVar35))) *
       (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar25,uVar35)));
  auVar62._12_4_ =
       (float)CONCAT13(uVar36,CONCAT12(uVar34,CONCAT11(uVar32,uVar30))) *
       (float)CONCAT13(uVar36,CONCAT12(uVar34,CONCAT11(uVar32,uVar30)));
  auVar60 = NEON_ext(auVar62,auVar62,8,1);
  fVar44 = auVar60._0_4_ + auVar62._0_4_;
  fVar55 = auVar60._4_4_ + auVar62._4_4_;
  fVar12 = fVar44 + fVar55;
  fVar44 = fVar44 + fVar55;
  auVar63._8_8_ = CONCAT44(fVar44,fVar12);
  auVar63._0_8_ = CONCAT44(fVar44,fVar12);
  auVar60 = NEON_frsqrte(auVar63,4);
  auVar78._0_4_ = auVar60._0_4_ * fVar12;
  auVar78._4_4_ = auVar60._4_4_ * fVar44;
  auVar78._8_4_ = auVar60._8_4_ * fVar12;
  auVar78._12_4_ = auVar60._12_4_ * fVar44;
  auVar69 = NEON_frsqrts(auVar60,auVar78,4);
  auVar71._0_4_ = auVar60._0_4_ * auVar69._0_4_;
  auVar71._4_4_ = auVar60._4_4_ * auVar69._4_4_;
  auVar71._8_4_ = auVar60._8_4_ * auVar69._8_4_;
  auVar71._12_4_ = auVar60._12_4_ * auVar69._12_4_;
  auVar79._0_4_ = fVar12 * auVar71._0_4_;
  auVar79._4_4_ = fVar44 * auVar71._4_4_;
  auVar79._8_4_ = fVar12 * auVar71._8_4_;
  auVar79._12_4_ = fVar44 * auVar71._12_4_;
  iVar58 = -(uint)(fVar12 == 0.0);
  iVar65 = -(uint)(fVar44 == 0.0);
  iVar66 = -(uint)(fVar12 == 0.0);
  auVar60 = NEON_frsqrts(auVar71,auVar79,4);
  fVar44 = (float)CONCAT13(uVar24,CONCAT12(uVar22,CONCAT11(uVar20,uVar19))) *
           auVar71._0_4_ * auVar60._0_4_;
  fVar12 = (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar28,uVar26))) *
           auVar71._4_4_ * auVar60._4_4_;
  fVar55 = (float)CONCAT13(uVar29,CONCAT12(uVar27,CONCAT11(uVar25,uVar35))) *
           auVar71._8_4_ * auVar60._8_4_;
  bVar21 = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
  bVar23 = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
  fVar13 = param_3._0_4_;
  auVar72._0_4_ = fVar13 * fVar13;
  fVar16 = param_3._4_4_;
  auVar72._4_4_ = fVar16 * fVar16;
  fVar17 = param_3._8_4_;
  auVar72._8_4_ = fVar17 * fVar17;
  auVar72._12_4_ = param_3._12_4_ * param_3._12_4_;
  auVar60 = NEON_ext(auVar72,auVar72,8,1);
  fVar67 = auVar60._0_4_ + auVar72._0_4_;
  fVar75 = auVar60._4_4_ + auVar72._4_4_;
  fVar18 = fVar67 + fVar75;
  fVar67 = fVar67 + fVar75;
  auVar73._8_8_ = CONCAT44(fVar67,fVar18);
  auVar73._0_8_ = CONCAT44(fVar67,fVar18);
  auVar60 = NEON_frsqrte(auVar73,4);
  auVar83._0_4_ = auVar60._0_4_ * fVar18;
  auVar83._4_4_ = auVar60._4_4_ * fVar67;
  auVar83._8_4_ = auVar60._8_4_ * fVar18;
  auVar83._12_4_ = auVar60._12_4_ * fVar67;
  auVar69 = NEON_frsqrts(auVar60,auVar83,4);
  auVar80._0_4_ = auVar60._0_4_ * auVar69._0_4_;
  auVar80._4_4_ = auVar60._4_4_ * auVar69._4_4_;
  auVar80._8_4_ = auVar60._8_4_ * auVar69._8_4_;
  auVar80._12_4_ = auVar60._12_4_ * auVar69._12_4_;
  auVar84._0_4_ = fVar18 * auVar80._0_4_;
  auVar84._4_4_ = fVar67 * auVar80._4_4_;
  auVar84._8_4_ = fVar18 * auVar80._8_4_;
  auVar84._12_4_ = fVar67 * auVar80._12_4_;
  auVar60 = NEON_frsqrts(auVar80,auVar84,4);
  fVar13 = fVar13 * auVar80._0_4_ * auVar60._0_4_;
  fVar16 = fVar16 * auVar80._4_4_ * auVar60._4_4_;
  fVar17 = fVar17 * auVar80._8_4_ * auVar60._8_4_;
  iVar45 = -(uint)(fVar18 == 0.0);
  iVar56 = -(uint)(fVar67 == 0.0);
  iVar57 = -(uint)(fVar18 == 0.0);
  uVar37 = CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10),
                    CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar56 >> 8),
                             CONCAT14(SUB41(fVar16,0) & ~(byte)iVar56,
                                      CONCAT13((byte)((uint)fVar13 >> 0x18) &
                                               ~(byte)((uint)iVar45 >> 0x18),
                                               CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                        ~(byte)((uint)iVar45 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar13 >> 8) &
                                                                 ~(byte)((uint)iVar45 >> 8),
                                                                 SUB41(fVar13,0) & ~(byte)iVar45))))
                            ));
  bVar43 = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18);
  auVar38._0_8_ = CONCAT17(bVar43,uVar37);
  auVar38[8] = SUB41(fVar17,0) & ~(byte)iVar57;
  auVar38[9] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar57 >> 8);
  auVar38[10] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
  auVar38[0xb] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
  uVar76 = NEON_ext(auVar49._0_8_,auVar38._0_8_,4,1);
  auVar60 = NEON_ext(auVar49,auVar49,8,1);
  fVar12 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                           CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10),
                                    CONCAT11((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar65 >> 8),
                                             SUB41(fVar12,0) & ~(byte)iVar65)));
  fVar16 = auVar38._8_4_;
  auVar69 = NEON_fmov(0x3f800000,4);
  fVar18 = (float)_DAT_03889820 * fVar46 + (float)_DAT_0388a450 * fVar12 +
           (float)_DAT_03889eb0 * fVar16 + auVar69._0_4_;
  fVar67 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar46 +
           (float)((ulong)_DAT_0388a450 >> 0x20) * fVar12 +
           (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar16 + auVar69._4_4_;
  fVar13 = (float)_UNK_03889828 * fVar46 + (float)_UNK_0388a458 * fVar12 +
           (float)_UNK_03889eb8 * fVar16 + auVar69._8_4_;
  fVar16 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar46 +
           (float)((ulong)_UNK_0388a458 >> 0x20) * fVar12 +
           (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar16 + auVar69._12_4_;
  fVar12 = (float)CONCAT13((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                           CONCAT12((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                                    CONCAT11((byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar66 >> 8),
                                             SUB41(fVar55,0) & ~(byte)iVar66)));
  uVar4 = CONCAT11((byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar58 >> 8),
                   SUB41(fVar44,0) & ~(byte)iVar58);
  auVar39._0_4_ = (float)uVar76 + (float)CONCAT13(bVar23,CONCAT12(bVar21,uVar4));
  fVar44 = (float)((ulong)uVar76 >> 0x20);
  auVar39._4_4_ = fVar44 + auVar60._0_4_;
  uVar9 = (undefined3)((uint7)uVar37 >> 0x20);
  auVar39._8_4_ = fVar12 + (float)CONCAT13(bVar43,uVar9);
  auVar39._12_4_ = 0;
  auVar50._0_4_ = (float)uVar76 - (float)CONCAT13(bVar23,CONCAT12(bVar21,uVar4));
  auVar50._4_4_ = fVar44 - auVar60._0_4_;
  auVar50._8_4_ = fVar12 - (float)CONCAT13(bVar43,uVar9);
  auVar50._12_4_ = 0;
  uVar10 = a64_TBL(ZEXT816(0),auVar39,auVar50,DAT_0388a888);
  uVar76 = a64_TBL(ZEXT816(0),auVar39,auVar50,DAT_0388a710);
  auVar74._8_8_ = uVar76;
  auVar74._0_8_ = uVar10 & 0xffffffff00000000;
  uVar59 = a64_TBL(ZEXT816(0),auVar39,auVar50,DAT_0388a758);
  auVar86._4_12_ = auVar74._4_12_;
  auVar86._0_4_ = fVar18;
  auVar64._0_8_ = a64_TBL(ZEXT816(0),auVar39,auVar50,DAT_0388a880);
  uVar77 = a64_TBL(ZEXT816(0),auVar39,auVar50,DAT_0388a640);
  auVar81._0_8_ = a64_TBL(ZEXT816(0),auVar39,auVar50,DAT_0388a700);
  uVar76 = a64_TBL(ZEXT816(0),auVar39,auVar50,DAT_0388a590);
  auVar51._4_4_ = fVar67;
  auVar51._0_4_ = fVar67;
  auVar51._8_4_ = fVar67;
  auVar51._12_4_ = fVar67;
  auVar64._12_4_ = (undefined4)((ulong)uVar77 >> 0x20);
  auVar64._8_4_ = fVar13;
  auVar81._8_8_ = uVar76;
  auVar88._4_4_ = fVar18;
  auVar88._0_4_ = fVar18;
  auVar88._8_4_ = fVar18;
  auVar88._12_4_ = fVar18;
  auVar85._0_8_ = CONCAT44(-(uint)(fVar18 <= fVar67),-(uint)(fVar18 <= fVar67));
  auVar85._8_4_ = -(uint)(fVar18 <= fVar67);
  auVar85._12_4_ = -(uint)(fVar18 <= fVar67);
  auVar87._8_8_ = auVar85._8_8_;
  auVar87._0_8_ = auVar85._0_8_;
  auVar69[4] = SUB41(fVar67,0);
  auVar69._0_4_ = (int)uVar10;
  auVar69[5] = (char)((uint)fVar67 >> 8);
  auVar69[6] = (char)((uint)fVar67 >> 0x10);
  auVar69[7] = (char)((uint)fVar67 >> 0x18);
  auVar69[8] = (char)uVar59;
  auVar69[9] = (char)((ulong)uVar59 >> 8);
  auVar69[10] = (char)((ulong)uVar59 >> 0x10);
  auVar69[0xb] = (char)((ulong)uVar59 >> 0x18);
  auVar69[0xc] = (char)((ulong)uVar59 >> 0x20);
  auVar69[0xd] = (char)((ulong)uVar59 >> 0x28);
  auVar69[0xe] = (char)((ulong)uVar59 >> 0x30);
  auVar69[0xf] = (char)((ulong)uVar59 >> 0x38);
  auVar86 = auVar86 ^ (auVar86 ^ auVar69) & auVar85;
  uVar19 = SUB41(fVar13,0);
  uVar20 = (undefined1)((uint)fVar13 >> 8);
  uVar22 = (undefined1)((uint)fVar13 >> 0x10);
  uVar24 = (undefined1)((uint)fVar13 >> 0x18);
  auVar82._0_12_ = auVar81._0_12_;
  auVar82._12_4_ = fVar16;
  auVar88 = auVar88 ^ (auVar88 ^ auVar51) & auVar87;
  auVar40._0_8_ = CONCAT44(-(uint)(auVar88._4_4_ <= fVar13),-(uint)(auVar88._0_4_ <= fVar13));
  auVar40._8_4_ = -(uint)(auVar88._8_4_ <= fVar13);
  auVar40._12_4_ = -(uint)(auVar88._12_4_ <= fVar13);
  auVar52._8_8_ = auVar40._8_8_;
  auVar52._0_8_ = auVar40._0_8_;
  auVar86 = auVar86 ^ (auVar86 ^ auVar64) & auVar40;
  auVar5[4] = uVar19;
  auVar5._0_4_ = fVar13;
  auVar5[5] = uVar20;
  auVar5[6] = uVar22;
  auVar5[7] = uVar24;
  auVar5[8] = uVar19;
  auVar5[9] = uVar20;
  auVar5[10] = uVar22;
  auVar5[0xb] = uVar24;
  auVar5[0xc] = uVar19;
  auVar5[0xd] = uVar20;
  auVar5[0xe] = uVar22;
  auVar5[0xf] = uVar24;
  auVar88 = auVar88 ^ (auVar88 ^ auVar5) & auVar52;
  auVar14._0_4_ = -(uint)(auVar88._0_4_ <= fVar16);
  auVar14._4_4_ = -(uint)(auVar88._4_4_ <= fVar16);
  auVar14._8_4_ = -(uint)(auVar88._8_4_ <= fVar16);
  auVar14._12_4_ = -(uint)(auVar88._12_4_ <= fVar16);
  auVar86 = auVar86 ^ (auVar86 ^ auVar82) & auVar14;
  fVar67 = auVar86._0_4_;
  fVar12 = fVar67 * fVar67;
  fVar13 = auVar86._4_4_;
  fVar44 = fVar13 * fVar13;
  uVar19 = (undefined1)((uint)fVar44 >> 8);
  uVar20 = (undefined1)((uint)fVar44 >> 0x10);
  uVar22 = (undefined1)((uint)fVar44 >> 0x18);
  fVar16 = auVar86._8_4_;
  fVar55 = fVar16 * fVar16;
  uVar24 = (undefined1)((uint)fVar55 >> 8);
  uVar26 = (undefined1)((uint)fVar55 >> 0x10);
  uVar28 = (undefined1)((uint)fVar55 >> 0x18);
  fVar17 = auVar86._12_4_;
  fVar18 = fVar17 * fVar17;
  uVar31 = (undefined1)((uint)fVar18 >> 8);
  uVar33 = (undefined1)((uint)fVar18 >> 0x10);
  uVar35 = (undefined1)((uint)fVar18 >> 0x18);
  auVar6[4] = SUB41(fVar44,0);
  auVar6._0_4_ = fVar12;
  auVar6[5] = uVar19;
  auVar6[6] = uVar20;
  auVar6[7] = uVar22;
  auVar6[8] = SUB41(fVar55,0);
  auVar6[9] = uVar24;
  auVar6[10] = uVar26;
  auVar6[0xb] = uVar28;
  auVar6[0xc] = SUB41(fVar18,0);
  auVar6[0xd] = uVar31;
  auVar6[0xe] = uVar33;
  auVar6[0xf] = uVar35;
  auVar7[4] = SUB41(fVar44,0);
  auVar7._0_4_ = fVar12;
  auVar7[5] = uVar19;
  auVar7[6] = uVar20;
  auVar7[7] = uVar22;
  auVar7[8] = SUB41(fVar55,0);
  auVar7[9] = uVar24;
  auVar7[10] = uVar26;
  auVar7[0xb] = uVar28;
  auVar7[0xc] = SUB41(fVar18,0);
  auVar7[0xd] = uVar31;
  auVar7[0xe] = uVar33;
  auVar7[0xf] = uVar35;
  auVar60 = NEON_ext(auVar6,auVar7,8,1);
  fVar12 = auVar60._0_4_ + fVar12;
  fVar44 = auVar60._4_4_ + fVar44;
  fVar55 = fVar12 + fVar44;
  fVar12 = fVar12 + fVar44;
  uVar19 = SUB41(fVar12,0);
  uVar20 = (undefined1)((uint)fVar12 >> 8);
  uVar22 = (undefined1)((uint)fVar12 >> 0x10);
  uVar24 = (undefined1)((uint)fVar12 >> 0x18);
  auVar8[4] = uVar19;
  auVar8._0_4_ = fVar55;
  auVar8[5] = uVar20;
  auVar8[6] = uVar22;
  auVar8[7] = uVar24;
  auVar8[8] = SUB41(fVar55,0);
  auVar8[9] = (char)((uint)fVar55 >> 8);
  auVar8[10] = (char)((uint)fVar55 >> 0x10);
  auVar8[0xb] = (char)((uint)fVar55 >> 0x18);
  auVar8[0xc] = uVar19;
  auVar8[0xd] = uVar20;
  auVar8[0xe] = uVar22;
  auVar8[0xf] = uVar24;
  auVar60 = NEON_frsqrte(auVar8,4);
  auVar53._0_4_ = auVar60._0_4_ * fVar55;
  auVar53._4_4_ = auVar60._4_4_ * fVar12;
  auVar53._8_4_ = auVar60._8_4_ * fVar55;
  uVar4 = (undefined2)(CONCAT15(uVar20,CONCAT14(uVar19,fVar55)) >> 0x20);
  auVar53._12_4_ = auVar60._12_4_ * (float)CONCAT13(uVar24,CONCAT12(uVar22,uVar4));
  auVar69 = NEON_frsqrts(auVar60,auVar53,4);
  auVar41._0_4_ = auVar60._0_4_ * auVar69._0_4_;
  auVar41._4_4_ = auVar60._4_4_ * auVar69._4_4_;
  auVar41._8_4_ = auVar60._8_4_ * auVar69._8_4_;
  auVar41._12_4_ = auVar60._12_4_ * auVar69._12_4_;
  auVar54._0_4_ = fVar55 * auVar41._0_4_;
  auVar54._4_4_ = fVar12 * auVar41._4_4_;
  auVar54._8_4_ = fVar55 * auVar41._8_4_;
  auVar54._12_4_ = (float)CONCAT13(uVar24,CONCAT12(uVar22,uVar4)) * auVar41._12_4_;
  auVar60 = NEON_frsqrts(auVar41,auVar54,4);
  auVar42._0_8_ =
       CONCAT44(auVar41._4_4_ * auVar60._4_4_ * fVar13,auVar41._0_4_ * auVar60._0_4_ * fVar67);
  auVar42._8_4_ = auVar41._8_4_ * auVar60._8_4_ * fVar16;
  auVar42._12_4_ = auVar41._12_4_ * auVar60._12_4_ * fVar17;
  iVar45 = -(uint)(fVar55 == 0.0);
  iVar56 = -(uint)(fVar12 == 0.0);
  iVar57 = -(uint)(fVar55 == 0.0);
  iVar58 = -(uint)((float)CONCAT13(uVar24,CONCAT12(uVar22,uVar4)) == 0.0);
  auVar15._0_8_ =
       CONCAT17(~(byte)((uint)iVar56 >> 0x18),
                CONCAT16(~(byte)((uint)iVar56 >> 0x10),
                         CONCAT15(~(byte)((uint)iVar56 >> 8),
                                  CONCAT14(~(byte)iVar56,
                                           CONCAT13(~(byte)((uint)iVar45 >> 0x18),
                                                    CONCAT12(~(byte)((uint)iVar45 >> 0x10),
                                                             CONCAT11(~(byte)((uint)iVar45 >> 8),
                                                                      ~(byte)iVar45)))))));
  auVar15[8] = ~(byte)iVar57;
  auVar15[9] = ~(byte)((uint)iVar57 >> 8);
  auVar15[10] = ~(byte)((uint)iVar57 >> 0x10);
  auVar15[0xb] = ~(byte)((uint)iVar57 >> 0x18);
  auVar15[0xc] = ~(byte)iVar58;
  auVar15[0xd] = ~(byte)((uint)iVar58 >> 8);
  auVar15[0xe] = ~(byte)((uint)iVar58 >> 0x10);
  auVar15[0xf] = ~(byte)((uint)iVar58 >> 0x18);
  if (local_20 != (long *)0x0) {
    lVar11 = local_20[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar45 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar45 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar45 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_20 + 0x20))();
      auVar15._8_8_ = auVar15._8_8_;
      auVar42._8_8_ = auVar42._8_8_;
    }
  }
  auVar60[0] = auVar42[0] & auVar15[0];
  auVar60[1] = auVar42[1] & auVar15[1];
  auVar60[2] = auVar42[2] & auVar15[2];
  auVar60[3] = auVar42[3] & auVar15[3];
  auVar60[4] = auVar42[4] & auVar15[4];
  auVar60[5] = auVar42[5] & auVar15[5];
  auVar60[6] = auVar42[6] & auVar15[6];
  auVar60[7] = auVar42[7] & auVar15[7];
  auVar60[8] = auVar42[8] & auVar15[8];
  auVar60[9] = auVar42[9] & auVar15[9];
  auVar60[10] = auVar42[10] & auVar15[10];
  auVar60[0xb] = auVar42[0xb] & auVar15[0xb];
  auVar60[0xc] = auVar42[0xc] & auVar15[0xc];
  auVar60[0xd] = auVar42[0xd] & auVar15[0xd];
  auVar60[0xe] = auVar42[0xe] & auVar15[0xe];
  auVar60[0xf] = auVar42[0xf] & auVar15[0xf];
joined_r0x01bfd3d8:
  if (local_18 != (long *)0x0) {
    lVar11 = local_18[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar45 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar45 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar45 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return auVar60;
}


