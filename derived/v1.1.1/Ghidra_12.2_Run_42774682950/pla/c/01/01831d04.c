/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01831d04; name: FUN_01831d04
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01831d04(undefined8 *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float extraout_var;
  float extraout_var_00;
  float fVar18;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float extraout_s0;
  float extraout_var_01;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar19;
  int iVar20;
  float fVar21;
  undefined1 auVar23 [12];
  undefined8 uVar22;
  float fVar32;
  undefined1 auVar25 [16];
  int iVar33;
  int iVar35;
  int iVar37;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar24 [12];
  float fVar34;
  float fVar36;
  float fVar38;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar40 [12];
  undefined8 uVar39;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar55;
  float fVar56;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar57;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  undefined8 uVar63;
  float fVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  float fVar70;
  undefined2 local_44;
  undefined1 local_42;
  
  if (*(char *)(param_2 + 0xc) == '\0') {
    uVar7 = *(undefined8 *)(param_2 + 0xe);
    param_1[5] = *(undefined8 *)(param_2 + 10);
    param_1[7] = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 6);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    param_1[3] = uVar7;
    uVar7 = *(undefined8 *)param_2;
    param_1[2] = *(undefined8 *)(param_2 + 4);
    *param_1 = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 8);
    param_1[6] = *(undefined8 *)(param_2 + 0xc);
    param_1[4] = uVar7;
  }
  else {
    auVar59._0_4_ = param_2[4] - *param_2;
    auVar59._4_4_ = param_2[5] - param_2[1];
    auVar59._8_4_ = param_2[6] - param_2[2];
    auVar59._12_4_ = param_2[7] - param_2[3];
    fVar1 = param_2[10];
    fVar2 = param_2[0xb];
    auVar47._0_4_ = auVar59._0_4_ * auVar59._0_4_;
    auVar47._4_4_ = 0;
    auVar47._8_4_ = auVar59._8_4_ * auVar59._8_4_;
    auVar47._12_4_ = auVar59._12_4_ * auVar59._12_4_;
    auVar41 = NEON_ext(auVar47,auVar47,8,1);
    fVar19 = auVar41._0_4_ + auVar47._0_4_;
    fVar32 = auVar41._4_4_ + 0.0;
    fVar8 = fVar19 + fVar32;
    fVar19 = fVar19 + fVar32;
    auVar41 = auVar59;
    fVar32 = 0.0;
    if (fVar8 != 0.0) {
      auVar25._8_8_ = CONCAT44(fVar19,fVar8);
      auVar25._0_8_ = CONCAT44(fVar19,fVar8);
      auVar41 = NEON_frsqrte(auVar25,4);
      auVar46._0_4_ = auVar41._0_4_ * fVar8;
      auVar46._4_4_ = auVar41._4_4_ * fVar19;
      auVar46._8_4_ = auVar41._8_4_ * fVar8;
      auVar46._12_4_ = auVar41._12_4_ * fVar19;
      auVar47 = NEON_frsqrts(auVar41,auVar46,4);
      auVar42._0_4_ = auVar41._0_4_ * auVar47._0_4_;
      auVar42._4_4_ = auVar41._4_4_ * auVar47._4_4_;
      auVar42._8_4_ = auVar41._8_4_ * auVar47._8_4_;
      auVar42._12_4_ = auVar41._12_4_ * auVar47._12_4_;
      auVar48._0_4_ = fVar8 * auVar42._0_4_;
      auVar48._4_4_ = fVar19 * auVar42._4_4_;
      auVar48._8_4_ = fVar8 * auVar42._8_4_;
      auVar48._12_4_ = fVar19 * auVar42._12_4_;
      iVar20 = -(uint)(fVar8 == 0.0);
      iVar33 = -(uint)(fVar19 == 0.0);
      iVar35 = -(uint)(fVar8 == 0.0);
      iVar37 = -(uint)(fVar19 == 0.0);
      auVar41 = NEON_frsqrts(auVar42,auVar48,4);
      fVar32 = auVar59._0_4_ * auVar42._0_4_ * auVar41._0_4_;
      fVar8 = auVar42._4_4_ * auVar41._4_4_ * 0.0;
      fVar19 = auVar59._8_4_ * auVar42._8_4_ * auVar41._8_4_;
      fVar18 = auVar59._12_4_ * auVar42._12_4_ * auVar41._12_4_;
      fVar45 = (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                               CONCAT12((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar32 >> 8) &
                                                  ~(byte)((uint)iVar20 >> 8),
                                                  SUB41(fVar32,0) & ~(byte)iVar20)));
      auVar23._0_8_ =
           CONCAT17((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                    CONCAT16((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                             CONCAT15((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                      CONCAT14(SUB41(fVar8,0) & ~(byte)iVar33,fVar45))));
      auVar23[8] = SUB41(fVar19,0) & ~(byte)iVar35;
      auVar23[9] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar35 >> 8);
      auVar23[10] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
      auVar23[0xb] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
      auVar26[0xc] = SUB41(fVar18,0) & ~(byte)iVar37;
      auVar26._0_12_ = auVar23;
      auVar26[0xd] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar37 >> 8);
      auVar26[0xe] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
      auVar26[0xf] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
      auVar10._0_4_ = fVar45 * (float)_DAT_03888d10;
      auVar10._4_4_ = (float)((ulong)auVar23._0_8_ >> 0x20) * (float)((ulong)_DAT_03888d10 >> 0x20);
      auVar10._8_4_ = auVar23._8_4_ * (float)_UNK_03888d18;
      auVar10._12_4_ = auVar26._12_4_ * (float)((ulong)_UNK_03888d18 >> 0x20);
      NEON_ext(auVar10,auVar10,8,1);
      fVar8 = (float)FUN_01009610();
      auVar41._4_4_ = auVar59._4_4_;
      auVar41._0_4_ = auVar59._0_4_;
      auVar41._8_8_ = auVar59._8_8_;
      fVar32 = -fVar8;
      if (0.0 <= fVar45) {
        fVar32 = fVar8;
      }
    }
    fVar45 = auVar41._0_4_;
    auVar11._0_4_ = fVar45 * fVar45;
    fVar55 = auVar41._4_4_;
    auVar11._4_4_ = fVar55 * fVar55;
    fVar56 = auVar41._8_4_;
    auVar11._8_4_ = fVar56 * fVar56;
    fVar57 = auVar41._12_4_;
    auVar11._12_4_ = fVar57 * fVar57;
    auVar41 = NEON_ext(auVar11,auVar11,8,1);
    fVar19 = auVar41._0_4_ + auVar11._0_4_;
    fVar18 = auVar41._4_4_ + auVar11._4_4_;
    fVar8 = fVar19 + fVar18;
    fVar19 = fVar19 + fVar18;
    if (fVar8 == 0.0) {
      fVar19 = 0.0;
    }
    else {
      fVar9 = fVar56 * fVar56 + fVar45 * fVar45;
      fVar18 = fVar9 + 0.0;
      fVar9 = fVar9 + 0.0;
      auVar12._8_8_ = CONCAT44(fVar9,fVar18);
      auVar12._0_8_ = CONCAT44(fVar9,fVar18);
      auVar41 = NEON_frsqrte(auVar12,4);
      auVar49._0_4_ = auVar41._0_4_ * fVar18;
      auVar49._4_4_ = auVar41._4_4_ * fVar9;
      auVar49._8_4_ = auVar41._8_4_ * fVar18;
      auVar49._12_4_ = auVar41._12_4_ * fVar9;
      auVar47 = NEON_frsqrts(auVar41,auVar49,4);
      auVar27._0_4_ = auVar41._0_4_ * auVar47._0_4_;
      auVar27._4_4_ = auVar41._4_4_ * auVar47._4_4_;
      auVar27._8_4_ = auVar41._8_4_ * auVar47._8_4_;
      auVar27._12_4_ = auVar41._12_4_ * auVar47._12_4_;
      auVar50._0_4_ = fVar18 * auVar27._0_4_;
      auVar50._4_4_ = fVar9 * auVar27._4_4_;
      auVar50._8_4_ = fVar18 * auVar27._8_4_;
      auVar50._12_4_ = fVar9 * auVar27._12_4_;
      auVar41 = NEON_frsqrts(auVar27,auVar50,4);
      fVar21 = fVar45 * auVar27._0_4_ * auVar41._0_4_;
      fVar34 = auVar27._4_4_ * auVar41._4_4_ * 0.0;
      fVar36 = fVar56 * auVar27._8_4_ * auVar41._8_4_;
      fVar38 = auVar27._12_4_ * auVar41._12_4_ * 0.0;
      iVar20 = -(uint)(fVar18 == 0.0);
      iVar33 = -(uint)(fVar9 == 0.0);
      iVar35 = -(uint)(fVar18 == 0.0);
      iVar37 = -(uint)(fVar9 == 0.0);
      auVar3._4_4_ = fVar19;
      auVar3._0_4_ = fVar8;
      auVar3._8_4_ = fVar8;
      auVar3._12_4_ = fVar19;
      auVar41 = NEON_frsqrte(auVar3,4);
      fVar18 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                               CONCAT12((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar21 >> 8) &
                                                  ~(byte)((uint)iVar20 >> 8),
                                                  SUB41(fVar21,0) & ~(byte)iVar20)));
      auVar24._0_8_ =
           CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                    CONCAT16((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                             CONCAT15((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                      CONCAT14(SUB41(fVar34,0) & ~(byte)iVar33,fVar18))));
      auVar24[8] = SUB41(fVar36,0) & ~(byte)iVar35;
      auVar24[9] = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar35 >> 8);
      auVar24[10] = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
      auVar24[0xb] = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
      auVar28[0xc] = SUB41(fVar38,0) & ~(byte)iVar37;
      auVar28._0_12_ = auVar24;
      auVar28[0xd] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar37 >> 8);
      auVar28[0xe] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
      auVar28[0xf] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
      auVar51._0_4_ = fVar8 * auVar41._0_4_;
      auVar51._4_4_ = fVar19 * auVar41._4_4_;
      auVar51._8_4_ = fVar8 * auVar41._8_4_;
      auVar51._12_4_ = fVar19 * auVar41._12_4_;
      auVar47 = NEON_frsqrts(auVar41,auVar51,4);
      auVar13._0_4_ = auVar41._0_4_ * auVar47._0_4_;
      auVar13._4_4_ = auVar41._4_4_ * auVar47._4_4_;
      auVar13._8_4_ = auVar41._8_4_ * auVar47._8_4_;
      auVar13._12_4_ = auVar41._12_4_ * auVar47._12_4_;
      auVar52._0_4_ = fVar8 * auVar13._0_4_;
      auVar52._4_4_ = fVar19 * auVar13._4_4_;
      auVar52._8_4_ = fVar8 * auVar13._8_4_;
      auVar52._12_4_ = fVar19 * auVar13._12_4_;
      auVar41 = NEON_frsqrts(auVar13,auVar52,4);
      fVar45 = fVar45 * auVar13._0_4_ * auVar41._0_4_;
      fVar55 = fVar55 * auVar13._4_4_ * auVar41._4_4_;
      fVar56 = fVar56 * auVar13._8_4_ * auVar41._8_4_;
      fVar57 = fVar57 * auVar13._12_4_ * auVar41._12_4_;
      iVar20 = -(uint)(fVar8 == 0.0);
      iVar33 = -(uint)(fVar19 == 0.0);
      iVar35 = -(uint)(fVar8 == 0.0);
      iVar37 = -(uint)(fVar19 == 0.0);
      fVar19 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                               CONCAT12((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar45 >> 8) &
                                                  ~(byte)((uint)iVar20 >> 8),
                                                  SUB41(fVar45,0) & ~(byte)iVar20)));
      auVar40._0_8_ =
           CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                    CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                             CONCAT15((byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                      CONCAT14(SUB41(fVar55,0) & ~(byte)iVar33,fVar19))));
      auVar40[8] = SUB41(fVar56,0) & ~(byte)iVar35;
      auVar40[9] = (byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar35 >> 8);
      auVar40[10] = (byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
      auVar40[0xb] = (byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
      auVar43[0xc] = SUB41(fVar57,0) & ~(byte)iVar37;
      auVar43._0_12_ = auVar40;
      auVar43[0xd] = (byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar37 >> 8);
      auVar43[0xe] = (byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10);
      auVar43[0xf] = (byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18);
      auVar29._0_4_ = fVar18 * fVar19;
      auVar29._4_4_ = (float)((ulong)auVar24._0_8_ >> 0x20) * (float)((ulong)auVar40._0_8_ >> 0x20);
      auVar29._8_4_ = auVar24._8_4_ * auVar40._8_4_;
      auVar29._12_4_ = auVar28._12_4_ * auVar43._12_4_;
      NEON_ext(auVar29,auVar29,8,1);
      fVar18 = (float)FUN_01009610();
      fVar19 = -fVar18;
      if (0.0 <= auVar59._4_4_) {
        fVar19 = fVar18;
      }
    }
    auVar44 = ZEXT816(0);
    auVar41 = ZEXT416((uint)SQRT(fVar8)) << 0x40;
    if (param_4 == 0) {
      auVar44._0_4_ = *param_2 - *param_3;
      auVar44._4_4_ = param_2[1] - param_3[1];
      auVar44._8_4_ = param_2[2] - param_3[2];
      auVar44._12_4_ = param_2[3] - param_3[3];
    }
    else if (param_4 == 1) {
      fVar56 = *param_2 - *param_3;
      fVar57 = param_2[1] - param_3[1];
      fVar18 = param_2[2] - param_3[2];
      fVar45 = param_2[3] - param_3[3];
      FUN_009a7ff4(fVar32,ZEXT816(0),ZEXT816(0));
      auVar6._4_4_ = fVar57;
      auVar6._0_4_ = fVar56;
      auVar6._8_4_ = fVar18;
      auVar6._12_4_ = fVar45;
      auVar5._4_4_ = fVar57;
      auVar5._0_4_ = fVar56;
      auVar5._8_4_ = fVar18;
      auVar5._12_4_ = fVar45;
      auVar4._4_4_ = fVar57;
      auVar4._0_4_ = fVar56;
      auVar4._8_4_ = fVar18;
      auVar4._12_4_ = fVar45;
      auVar17._0_4_ = extraout_s0 * (float)_DAT_03889ac0;
      fVar9 = (float)((ulong)_DAT_03889ac0 >> 0x20);
      auVar17._4_4_ = extraout_var * fVar9;
      auVar17._8_4_ = extraout_var_00 * (float)_UNK_03889ac8;
      fVar21 = (float)((ulong)_UNK_03889ac8 >> 0x20);
      auVar17._12_4_ = extraout_var_01 * fVar21;
      auVar14._0_4_ = extraout_s0 * extraout_s0;
      auVar14._4_4_ = extraout_var * extraout_var;
      auVar14._8_4_ = extraout_var_00 * extraout_var_00;
      auVar14._12_4_ = extraout_var_01 * extraout_var_01;
      auVar41 = NEON_ext(auVar14,auVar14,8,1);
      fVar45 = auVar41._0_4_ + auVar14._0_4_;
      fVar55 = auVar41._4_4_ + auVar14._4_4_;
      fVar18 = fVar45 + fVar55;
      fVar45 = fVar45 + fVar55;
      auVar15._8_8_ = CONCAT44(fVar45,fVar18);
      auVar15._0_8_ = CONCAT44(fVar45,fVar18);
      auVar41 = NEON_frecpe(auVar15,4);
      auVar47 = NEON_frecps(auVar41,auVar15,4);
      auVar53._0_4_ = auVar41._0_4_ * auVar47._0_4_;
      auVar53._4_4_ = auVar41._4_4_ * auVar47._4_4_;
      auVar53._8_4_ = auVar41._8_4_ * auVar47._8_4_;
      auVar53._12_4_ = auVar41._12_4_ * auVar47._12_4_;
      auVar41 = NEON_frecps(auVar53,auVar15,4);
      iVar20 = -(uint)(fVar18 == 0.0);
      iVar33 = -(uint)(fVar45 == 0.0);
      iVar35 = -(uint)(fVar18 == 0.0);
      iVar37 = -(uint)(fVar45 == 0.0);
      auVar16[0] = ~(byte)iVar20;
      auVar16[1] = ~(byte)((uint)iVar20 >> 8);
      auVar16[2] = ~(byte)((uint)iVar20 >> 0x10);
      auVar16[3] = ~(byte)((uint)iVar20 >> 0x18);
      auVar16[4] = ~(byte)iVar33;
      auVar16[5] = ~(byte)((uint)iVar33 >> 8);
      auVar16[6] = ~(byte)((uint)iVar33 >> 0x10);
      auVar16[7] = ~(byte)((uint)iVar33 >> 0x18);
      auVar16[8] = ~(byte)iVar35;
      auVar16[9] = ~(byte)((uint)iVar35 >> 8);
      auVar16[10] = ~(byte)((uint)iVar35 >> 0x10);
      auVar16[0xb] = ~(byte)((uint)iVar35 >> 0x18);
      auVar16[0xc] = ~(byte)iVar37;
      auVar16[0xd] = ~(byte)((uint)iVar37 >> 8);
      auVar16[0xe] = ~(byte)((uint)iVar37 >> 0x10);
      auVar16[0xf] = ~(byte)((uint)iVar37 >> 0x18);
      auVar54._0_4_ = auVar17._0_4_ * auVar53._0_4_ * auVar41._0_4_;
      auVar54._4_4_ = auVar17._4_4_ * auVar53._4_4_ * auVar41._4_4_;
      auVar54._8_4_ = auVar17._8_4_ * auVar53._8_4_ * auVar41._8_4_;
      auVar54._12_4_ = auVar17._12_4_ * auVar53._12_4_ * auVar41._12_4_;
      auVar17 = auVar17 ^ (auVar17 ^ auVar54) & auVar16;
      fVar18 = auVar17._0_4_;
      fVar55 = fVar18 * (float)_DAT_03889ac0;
      fVar45 = auVar17._4_4_;
      fVar9 = fVar45 * fVar9;
      auVar60._0_8_ = CONCAT44(fVar9,fVar55);
      auVar60._8_4_ = auVar17._8_4_ * (float)_UNK_03889ac8;
      auVar60._12_4_ = auVar17._12_4_ * fVar21;
      uVar22 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a580);
      uVar63 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a680);
      uVar39 = a64_TBL(ZEXT816(0),auVar60,DAT_0388a580);
      uVar65 = a64_TBL(ZEXT816(0),auVar60,DAT_0388a6c8);
      uVar67 = a64_TBL(ZEXT816(0),auVar60,DAT_0388a680);
      fVar64 = (float)((ulong)uVar63 >> 0x20);
      fVar21 = (float)((ulong)uVar22 >> 0x20);
      uVar68 = a64_TBL(ZEXT816(0),auVar60,DAT_0388a880);
      uVar69 = a64_TBL(ZEXT816(0),auVar60,DAT_0388a790);
      auVar61._8_8_ = auVar60._0_8_;
      auVar61._0_8_ = auVar60._0_8_;
      uVar58 = a64_TBL(ZEXT816(0),auVar61,DAT_0388a648);
      uVar7 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a880);
      fVar70 = (float)((ulong)uVar7 >> 0x20);
      fVar34 = (float)_DAT_03889ad0;
      fVar36 = (float)((ulong)_DAT_03889ad0 >> 0x20);
      fVar38 = (float)_UNK_03889ad8;
      fVar62 = (float)((ulong)_UNK_03889ad8 >> 0x20);
      uVar66 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a580);
      fVar55 = ((float)uVar22 * fVar55 + fVar34 * fVar56 * (float)uVar39 +
               fVar34 * (float)uVar7 * (float)uVar67) - (float)uVar63 * (float)uVar68;
      fVar9 = (fVar21 * fVar9 + fVar36 * fVar57 * (float)((ulong)uVar39 >> 0x20) +
              fVar36 * fVar70 * (float)((ulong)uVar67 >> 0x20)) -
              fVar64 * (float)((ulong)uVar68 >> 0x20);
      auVar30._0_8_ = CONCAT44(fVar9,fVar55);
      auVar30._8_4_ =
           ((float)uVar22 * auVar60._8_4_ + fVar38 * (float)uVar63 * (float)uVar65 +
           fVar38 * fVar56 * (float)uVar58) - (float)uVar7 * (float)uVar69;
      auVar30._12_4_ =
           (fVar21 * auVar60._12_4_ + fVar62 * fVar64 * (float)((ulong)uVar65 >> 0x20) +
           fVar62 * fVar57 * (float)((ulong)uVar58 >> 0x20)) -
           fVar70 * (float)((ulong)uVar69 >> 0x20);
      fVar21 = (float)((ulong)uVar66 >> 0x20);
      uVar68 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a680);
      uVar7 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a580);
      uVar65 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a6c8);
      fVar64 = (float)((ulong)uVar68 >> 0x20);
      uVar63 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a680);
      uVar67 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a790);
      uVar22 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a880);
      uVar58 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a880);
      auVar31._8_8_ = auVar30._0_8_;
      auVar31._0_8_ = auVar30._0_8_;
      fVar56 = (float)((ulong)uVar58 >> 0x20);
      uVar39 = a64_TBL(ZEXT816(0),auVar31,DAT_0388a648);
      fVar55 = ((float)uVar66 * fVar55 + fVar34 * fVar18 * (float)uVar7 +
               fVar34 * (float)uVar58 * (float)uVar63) - (float)uVar68 * (float)uVar22;
      fVar57 = (fVar21 * fVar9 + fVar36 * fVar45 * (float)((ulong)uVar7 >> 0x20) +
               fVar36 * fVar56 * (float)((ulong)uVar63 >> 0x20)) -
               fVar64 * (float)((ulong)uVar22 >> 0x20);
      fVar18 = ((float)uVar66 * auVar30._8_4_ + fVar38 * (float)uVar68 * (float)uVar65 +
               fVar38 * fVar18 * (float)uVar39) - (float)uVar58 * (float)uVar67;
      fVar45 = (fVar21 * auVar30._12_4_ + fVar62 * fVar64 * (float)((ulong)uVar65 >> 0x20) +
               fVar62 * fVar45 * (float)((ulong)uVar39 >> 0x20)) -
               fVar56 * (float)((ulong)uVar67 >> 0x20);
      auVar44[0] = SUB41(fVar55,0) & (byte)_DAT_038897c0;
      auVar44[1] = (byte)((uint)fVar55 >> 8) & (byte)((ulong)_DAT_038897c0 >> 8);
      auVar44[2] = (byte)((uint)fVar55 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x10);
      auVar44[3] = (byte)((uint)fVar55 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18);
      auVar44[4] = SUB41(fVar57,0) & (byte)((ulong)_DAT_038897c0 >> 0x20);
      auVar44[5] = (byte)((uint)fVar57 >> 8) & (byte)((ulong)_DAT_038897c0 >> 0x28);
      auVar44[6] = (byte)((uint)fVar57 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x30);
      auVar44[7] = (byte)((uint)fVar57 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38);
      auVar44[8] = SUB41(fVar18,0) & (byte)_UNK_038897c8;
      auVar44[9] = (byte)((uint)fVar18 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
      auVar44[10] = (byte)((uint)fVar18 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
      auVar44[0xb] = (byte)((uint)fVar18 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
      auVar44[0xc] = SUB41(fVar45,0) & (byte)((ulong)_UNK_038897c8 >> 0x20);
      auVar44[0xd] = (byte)((uint)fVar45 >> 8) & (byte)((ulong)_UNK_038897c8 >> 0x28);
      auVar44[0xe] = (byte)((uint)fVar45 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30);
      auVar44[0xf] = (byte)((uint)fVar45 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38);
      auVar41 = ZEXT416((uint)SQRT(fVar8)) << 0x40;
    }
    *(float *)(param_1 + 4) = fVar32;
    *(float *)((long)param_1 + 0x24) = -fVar19;
    *(float *)(param_1 + 5) = fVar1;
    *(float *)((long)param_1 + 0x2c) = fVar2;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)((long)param_1 + 0x33) = local_42;
    *(undefined2 *)((long)param_1 + 0x31) = local_44;
    *(int *)((long)param_1 + 0x34) = param_4;
    param_1[1] = auVar44._8_8_;
    *param_1 = auVar44._0_8_;
    param_1[3] = auVar41._8_8_;
    param_1[2] = 0;
  }
  return;
}


