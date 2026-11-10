/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a46b00; name: FUN_01a46b00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a46b00(float *param_1,long param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long lVar15;
  float fVar16;
  float extraout_s0;
  undefined1 auVar17 [12];
  undefined8 extraout_d0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_02;
  undefined1 auVar19 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar18 [12];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 extraout_var_01;
  float fVar31;
  int iVar32;
  undefined8 uVar34;
  undefined1 auVar36 [12];
  float fVar45;
  int iVar46;
  float fVar47;
  int iVar48;
  float fVar49;
  int iVar50;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar33;
  undefined8 uVar35;
  undefined1 auVar40 [16];
  undefined1 auVar37 [12];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar51;
  undefined8 uVar52;
  undefined1 auVar53 [12];
  float fVar59;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar68;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar69;
  undefined1 auVar67 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  float fVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  float fVar83;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  auVar63 = ZEXT816(0);
  pcVar1 = (char *)(param_2 + 0xde02);
  if (((*(char *)(param_2 + 0xdf60) == '\0') || (*(long *)(param_2 + 0xdf70) == 0)) ||
     (*(int *)(*(long *)(param_2 + 0xdf70) + 0xc) == 0)) goto LAB_01a46b90;
  if (*(uint *)(param_2 + 0xe0e0) == 0) {
    lVar15 = 0xe0c0;
LAB_01a46b70:
    *(undefined8 *)(param_2 + 0xe0d8) = ((undefined8 *)(param_2 + lVar15))[1];
    *(undefined8 *)(param_2 + 0xe0d0) = *(undefined8 *)(param_2 + lVar15);
  }
  else {
    if (*(uint *)(param_2 + 0xe0e4) <= *(uint *)(param_2 + 0xe0e0)) {
      lVar15 = 0xdf90;
      goto LAB_01a46b70;
    }
    fVar59 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_2 + 0xe0e8) * 8))();
    fVar59 = fVar59 + 0.0;
    auVar63 = *(undefined1 (*) [16])(param_2 + 0xe0c0);
    *(float *)(param_2 + 0xe0d8) =
         auVar63._8_4_ + (*(float *)(param_2 + 0xdf98) - auVar63._8_4_) * fVar59;
    *(float *)(param_2 + 0xe0dc) =
         auVar63._12_4_ + (*(float *)(param_2 + 0xdf9c) - auVar63._12_4_) * fVar59;
    *(float *)(param_2 + 0xe0d0) =
         auVar63._0_4_ + (*(float *)(param_2 + 0xdf90) - auVar63._0_4_) * fVar59;
    *(float *)(param_2 + 0xe0d4) =
         auVar63._4_4_ + (*(float *)(param_2 + 0xdf94) - auVar63._4_4_) * fVar59;
  }
  auVar63 = *(undefined1 (*) [16])(param_2 + 0xe0d0);
LAB_01a46b90:
  uStack_58 = auVar63._8_8_;
  local_60 = auVar63._0_8_;
  FUN_01a4b7e0(param_2);
  auVar63._0_8_ =
       CONCAT44(extraout_var + (float)((ulong)_DAT_03889970 >> 0x20),
                extraout_s0 + (float)_DAT_03889970);
  auVar63._8_4_ = extraout_var_00 + (float)_UNK_03889978;
  auVar63._12_4_ = extraout_var_02 + (float)((ulong)_UNK_03889978 >> 0x20);
  uStack_68 = auVar63._8_8_;
  local_70 = auVar63._0_8_;
  if (*pcVar1 == '\0') {
    fVar59 = (float)FUN_01832ce8(&local_70);
    fVar16 = (float)FUN_01832ce8(&local_60);
    *(bool *)(param_2 + 0xde03) = fVar16 < fVar59;
    *pcVar1 = '\x01';
  }
  fVar31 = (float)local_70 - (float)local_60;
  fVar45 = local_70._4_4_ - local_60._4_4_;
  fVar47 = (float)uStack_68 - (float)uStack_58;
  fVar49 = uStack_68._4_4_ - uStack_58._4_4_;
  auVar65._0_4_ = fVar31 * fVar31;
  auVar65._4_4_ = 0;
  auVar65._8_4_ = fVar47 * fVar47;
  auVar65._12_4_ = fVar49 * fVar49;
  auVar63 = NEON_ext(auVar65,auVar65,8,1);
  fVar51 = auVar63._0_4_ + auVar65._0_4_;
  fVar59 = auVar63._4_4_ + 0.0;
  fVar16 = fVar51 + fVar59;
  fVar51 = fVar51 + fVar59;
  fVar59 = 0.0;
  if (fVar16 != 0.0) {
    auVar54._8_8_ = CONCAT44(fVar51,fVar16);
    auVar54._0_8_ = CONCAT44(fVar51,fVar16);
    auVar63 = NEON_frsqrte(auVar54,4);
    auVar64._0_4_ = auVar63._0_4_ * fVar16;
    auVar64._4_4_ = auVar63._4_4_ * fVar51;
    auVar64._8_4_ = auVar63._8_4_ * fVar16;
    auVar64._12_4_ = auVar63._12_4_ * fVar51;
    auVar65 = NEON_frsqrts(auVar63,auVar64,4);
    auVar19._0_4_ = auVar63._0_4_ * auVar65._0_4_;
    auVar19._4_4_ = auVar63._4_4_ * auVar65._4_4_;
    auVar19._8_4_ = auVar63._8_4_ * auVar65._8_4_;
    auVar19._12_4_ = auVar63._12_4_ * auVar65._12_4_;
    auVar66._0_4_ = fVar16 * auVar19._0_4_;
    auVar66._4_4_ = fVar51 * auVar19._4_4_;
    auVar66._8_4_ = fVar16 * auVar19._8_4_;
    auVar66._12_4_ = fVar51 * auVar19._12_4_;
    auVar63 = NEON_frsqrts(auVar19,auVar66,4);
    fVar59 = fVar31 * auVar19._0_4_ * auVar63._0_4_;
    fVar28 = auVar19._4_4_ * auVar63._4_4_ * 0.0;
    fVar29 = fVar47 * auVar19._8_4_ * auVar63._8_4_;
    fVar30 = fVar49 * auVar19._12_4_ * auVar63._12_4_;
    iVar32 = -(uint)(fVar16 == 0.0);
    iVar46 = -(uint)(fVar51 == 0.0);
    iVar48 = -(uint)(fVar16 == 0.0);
    iVar50 = -(uint)(fVar51 == 0.0);
    fVar51 = (float)CONCAT13((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                             CONCAT12((byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                                      CONCAT11((byte)((uint)fVar59 >> 8) &
                                               ~(byte)((uint)iVar32 >> 8),
                                               SUB41(fVar59,0) & ~(byte)iVar32)));
    auVar36._0_8_ =
         CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                  CONCAT16((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10),
                           CONCAT15((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar46 >> 8),
                                    CONCAT14(SUB41(fVar28,0) & ~(byte)iVar46,fVar51))));
    auVar36[8] = SUB41(fVar29,0) & ~(byte)iVar48;
    auVar36[9] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar48 >> 8);
    auVar36[10] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
    auVar36[0xb] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
    auVar38[0xc] = SUB41(fVar30,0) & ~(byte)iVar50;
    auVar38._0_12_ = auVar36;
    auVar38[0xd] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar50 >> 8);
    auVar38[0xe] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
    auVar38[0xf] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
    auVar20._0_4_ = fVar51 * (float)_DAT_03888d10;
    auVar20._4_4_ = (float)((ulong)auVar36._0_8_ >> 0x20) * (float)((ulong)_DAT_03888d10 >> 0x20);
    auVar20._8_4_ = auVar36._8_4_ * (float)_UNK_03888d18;
    auVar20._12_4_ = auVar38._12_4_ * (float)((ulong)_UNK_03888d18 >> 0x20);
    NEON_ext(auVar20,auVar20,8,1);
    fVar16 = (float)FUN_01009610();
    fVar59 = -fVar16;
    if (0.0 <= fVar51) {
      fVar59 = fVar16;
    }
  }
  auVar63 = FUN_009a7ff4(fVar59,ZEXT816(0),ZEXT816(0));
  fVar29 = (float)((ulong)local_60 >> 0x20);
  fVar83 = (float)((ulong)uStack_58 >> 0x20);
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 0.0;
  fVar28 = (float)local_60 + ((float)local_70 - (float)local_60) * 0.5;
  fVar29 = fVar29 + (local_70._4_4_ - fVar29) * 0.5;
  fVar30 = (float)uStack_58 + ((float)uStack_68 - (float)uStack_58) * 0.5;
  fVar83 = fVar83 + (uStack_68._4_4_ - fVar83) * 0.5;
  param_1[2] = fVar30 - extraout_var_00;
  param_1[3] = fVar83 - extraout_var_02;
  *param_1 = fVar28 - extraout_s0;
  param_1[1] = fVar29 - extraout_var;
  auVar39._0_4_ = fVar31 * fVar31;
  auVar39._4_4_ = fVar45 * fVar45;
  auVar39._8_4_ = fVar47 * fVar47;
  auVar39._12_4_ = fVar49 * fVar49;
  auVar65 = NEON_ext(auVar39,auVar39,8,1);
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  fVar31 = SQRT(auVar65._0_4_ + auVar39._0_4_ + auVar65._4_4_ + auVar39._4_4_);
  fVar16 = *(float *)(param_2 + 0xe020);
  fVar51 = *(float *)(param_2 + 0xe024);
  fVar59 = fVar51;
  if (fVar31 <= fVar51) {
    fVar59 = fVar31;
  }
  fVar45 = fVar16;
  if (fVar16 <= fVar31) {
    fVar45 = fVar59;
  }
  fVar59 = (fVar45 - fVar16) / (fVar51 - fVar16);
  auVar44._0_4_ =
       *(float *)(param_2 + 0xe000) +
       (*(float *)(param_2 + 0xe010) - *(float *)(param_2 + 0xe000)) * fVar59;
  auVar44._4_4_ =
       *(float *)(param_2 + 0xe004) +
       (*(float *)(param_2 + 0xe014) - *(float *)(param_2 + 0xe004)) * fVar59;
  auVar44._8_4_ =
       *(float *)(param_2 + 0xe008) +
       (*(float *)(param_2 + 0xe018) - *(float *)(param_2 + 0xe008)) * fVar59;
  auVar44._12_4_ =
       *(float *)(param_2 + 0xe00c) +
       (*(float *)(param_2 + 0xe01c) - *(float *)(param_2 + 0xe00c)) * fVar59;
  if ((*pcVar1 != '\0') && (*(char *)(param_2 + 0xde03) != '\0')) {
    auVar44._0_4_ = -auVar44._0_4_;
  }
  uVar52 = a64_TBL(ZEXT816(0),auVar44,DAT_0388a580);
  fVar33 = (float)((ulong)uVar52 >> 0x20);
  uVar76 = a64_TBL(ZEXT816(0),auVar44,DAT_0388a680);
  fVar59 = auVar63._0_4_;
  fVar31 = fVar59 * (float)_DAT_03889ac0;
  fVar16 = auVar63._4_4_;
  fVar47 = fVar16 * (float)((ulong)_DAT_03889ac0 >> 0x20);
  fVar74 = auVar63._8_4_ * (float)_UNK_03889ac8;
  fVar75 = auVar63._12_4_ * (float)((ulong)_UNK_03889ac8 >> 0x20);
  auVar2._4_4_ = fVar47;
  auVar2._0_4_ = fVar31;
  auVar2._8_4_ = fVar74;
  auVar2._12_4_ = fVar75;
  uVar77 = a64_TBL(ZEXT816(0),auVar2,DAT_0388a580);
  auVar3._4_4_ = fVar47;
  auVar3._0_4_ = fVar31;
  auVar3._8_4_ = fVar74;
  auVar3._12_4_ = fVar75;
  uVar79 = a64_TBL(ZEXT816(0),auVar3,DAT_0388a6c8);
  auVar4._4_4_ = fVar47;
  auVar4._0_4_ = fVar31;
  auVar4._8_4_ = fVar74;
  auVar4._12_4_ = fVar75;
  uVar80 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a880);
  auVar5._4_4_ = fVar47;
  auVar5._0_4_ = fVar31;
  auVar5._8_4_ = fVar74;
  auVar5._12_4_ = fVar75;
  uVar81 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a790);
  fVar60 = (float)((ulong)uVar76 >> 0x20);
  auVar6._4_4_ = fVar47;
  auVar6._0_4_ = fVar31;
  auVar6._8_4_ = fVar74;
  auVar6._12_4_ = fVar75;
  uVar82 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a680);
  auVar7._4_4_ = fVar47;
  auVar7._0_4_ = fVar31;
  auVar7._8_4_ = fVar31;
  auVar7._12_4_ = fVar47;
  uVar8 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a648);
  uVar34 = a64_TBL(ZEXT816(0),auVar44,DAT_0388a880);
  fVar51 = (float)((ulong)uVar34 >> 0x20);
  uVar35 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a680);
  fVar68 = (float)_UNK_03889ad8;
  fVar69 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  fVar45 = (float)_DAT_03889ad0;
  fVar49 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  uVar78 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a580);
  fVar31 = (fVar31 * (float)uVar52 + fVar45 * auVar44._0_4_ * (float)uVar77 +
           fVar45 * (float)uVar34 * (float)uVar82) - (float)uVar76 * (float)uVar80;
  fVar47 = (fVar47 * fVar33 + fVar49 * auVar44._4_4_ * (float)((ulong)uVar77 >> 0x20) +
           fVar49 * fVar51 * (float)((ulong)uVar82 >> 0x20)) -
           fVar60 * (float)((ulong)uVar80 >> 0x20);
  fVar74 = (fVar74 * (float)uVar52 + fVar68 * (float)uVar76 * (float)uVar79 +
           fVar68 * auVar44._0_4_ * (float)uVar8) - (float)uVar34 * (float)uVar81;
  fVar75 = (fVar75 * fVar33 + fVar69 * fVar60 * (float)((ulong)uVar79 >> 0x20) +
           fVar69 * auVar44._4_4_ * (float)((ulong)uVar8 >> 0x20)) -
           fVar51 * (float)((ulong)uVar81 >> 0x20);
  fVar33 = (float)((ulong)uVar78 >> 0x20);
  uVar80 = a64_TBL(ZEXT816(0),auVar63,DAT_0388a880);
  auVar9._4_4_ = fVar47;
  auVar9._0_4_ = fVar31;
  auVar9._8_4_ = fVar74;
  auVar9._12_4_ = fVar75;
  uVar52 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a580);
  auVar10._4_4_ = fVar47;
  auVar10._0_4_ = fVar31;
  auVar10._8_4_ = fVar74;
  auVar10._12_4_ = fVar75;
  uVar79 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a6c8);
  auVar11._4_4_ = fVar47;
  auVar11._0_4_ = fVar31;
  auVar11._8_4_ = fVar74;
  auVar11._12_4_ = fVar75;
  uVar34 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a680);
  auVar12._4_4_ = fVar47;
  auVar12._0_4_ = fVar31;
  auVar12._8_4_ = fVar74;
  auVar12._12_4_ = fVar75;
  uVar76 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a880);
  auVar13._4_4_ = fVar47;
  auVar13._0_4_ = fVar31;
  auVar13._8_4_ = fVar74;
  auVar13._12_4_ = fVar75;
  uVar77 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a790);
  fVar51 = (float)((ulong)uVar35 >> 0x20);
  auVar14._4_4_ = fVar47;
  auVar14._0_4_ = fVar31;
  auVar14._8_4_ = fVar31;
  auVar14._12_4_ = fVar47;
  uVar8 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a648);
  fVar60 = (float)((ulong)uVar80 >> 0x20);
  fVar31 = ((float)uVar78 * fVar31 + fVar45 * fVar59 * (float)uVar52 +
           fVar45 * (float)uVar80 * (float)uVar34) - (float)uVar35 * (float)uVar76;
  fVar45 = (fVar33 * fVar47 + fVar49 * fVar16 * (float)((ulong)uVar52 >> 0x20) +
           fVar49 * fVar60 * (float)((ulong)uVar34 >> 0x20)) -
           fVar51 * (float)((ulong)uVar76 >> 0x20);
  fVar59 = ((float)uVar78 * fVar74 + fVar68 * (float)uVar35 * (float)uVar79 +
           fVar68 * fVar59 * (float)uVar8) - (float)uVar80 * (float)uVar77;
  fVar16 = (fVar33 * fVar75 + fVar69 * fVar51 * (float)((ulong)uVar79 >> 0x20) +
           fVar69 * fVar16 * (float)((ulong)uVar8 >> 0x20)) -
           fVar60 * (float)((ulong)uVar77 >> 0x20);
  fVar31 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18),
                           CONCAT12((byte)((uint)fVar31 >> 0x10) &
                                    (byte)((ulong)_DAT_038897c0 >> 0x10),
                                    CONCAT11((byte)((uint)fVar31 >> 8) &
                                             (byte)((ulong)_DAT_038897c0 >> 8),
                                             SUB41(fVar31,0) & (byte)_DAT_038897c0)));
  auVar17._0_8_ =
       CONCAT17((byte)((uint)fVar45 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                CONCAT16((byte)((uint)fVar45 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x30),
                         CONCAT15((byte)((uint)fVar45 >> 8) & (byte)((ulong)_DAT_038897c0 >> 0x28),
                                  CONCAT14(SUB41(fVar45,0) & (byte)((ulong)_DAT_038897c0 >> 0x20),
                                           fVar31))));
  auVar17[8] = SUB41(fVar59,0) & (byte)_UNK_038897c8;
  auVar17[9] = (byte)((uint)fVar59 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
  auVar17[10] = (byte)((uint)fVar59 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
  auVar17[0xb] = (byte)((uint)fVar59 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
  auVar21[0xc] = SUB41(fVar16,0) & (byte)((ulong)_UNK_038897c8 >> 0x20);
  auVar21._0_12_ = auVar17;
  auVar21[0xd] = (byte)((uint)fVar16 >> 8) & (byte)((ulong)_UNK_038897c8 >> 0x28);
  auVar21[0xe] = (byte)((uint)fVar16 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30);
  auVar21[0xf] = (byte)((uint)fVar16 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38);
  fVar31 = extraout_s0 + fVar31;
  fVar45 = extraout_var + (float)((ulong)auVar17._0_8_ >> 0x20);
  fVar47 = extraout_var_00 + auVar17._8_4_;
  fVar49 = extraout_var_02 + auVar21._12_4_;
  uStack_88 = CONCAT44(fVar49,fVar47);
  local_90 = CONCAT44(fVar45,fVar31);
  fVar31 = fVar31 - fVar28;
  fVar45 = fVar45 - fVar29;
  fVar47 = fVar47 - fVar30;
  fVar49 = fVar49 - fVar83;
  auVar22._0_4_ = fVar31 * fVar31;
  auVar22._4_4_ = fVar45 * fVar45;
  auVar22._8_4_ = fVar47 * fVar47;
  auVar22._12_4_ = fVar49 * fVar49;
  auVar63 = NEON_ext(auVar22,auVar22,8,1);
  fVar51 = auVar63._0_4_ + auVar22._0_4_;
  fVar59 = auVar63._4_4_ + auVar22._4_4_;
  fVar16 = fVar51 + fVar59;
  fVar51 = fVar51 + fVar59;
  auVar23._8_8_ = CONCAT44(fVar51,fVar16);
  auVar23._0_8_ = CONCAT44(fVar51,fVar16);
  fVar59 = SQRT(fVar16);
  fVar74 = (float)_DAT_03888d10;
  fVar68 = (float)((ulong)_DAT_03888d10 >> 0x20);
  fVar75 = (float)_UNK_03888d18;
  fVar69 = (float)((ulong)_UNK_03888d18 >> 0x20);
  param_1[6] = fVar75 * fVar59;
  param_1[7] = fVar69 * fVar59;
  param_1[4] = fVar74 * fVar59;
  param_1[5] = fVar68 * fVar59;
  fVar59 = 0.0;
  if (fVar16 != 0.0) {
    fVar33 = fVar47 * fVar47 + fVar31 * fVar31;
    fVar59 = fVar33 + 0.0;
    fVar33 = fVar33 + 0.0;
    auVar40._8_8_ = CONCAT44(fVar33,fVar59);
    auVar40._0_8_ = CONCAT44(fVar33,fVar59);
    auVar63 = NEON_frsqrte(auVar40,4);
    auVar70._0_4_ = auVar63._0_4_ * fVar59;
    auVar70._4_4_ = auVar63._4_4_ * fVar33;
    auVar70._8_4_ = auVar63._8_4_ * fVar59;
    auVar70._12_4_ = auVar63._12_4_ * fVar33;
    auVar65 = NEON_frsqrts(auVar63,auVar70,4);
    auVar55._0_4_ = auVar63._0_4_ * auVar65._0_4_;
    auVar55._4_4_ = auVar63._4_4_ * auVar65._4_4_;
    auVar55._8_4_ = auVar63._8_4_ * auVar65._8_4_;
    auVar55._12_4_ = auVar63._12_4_ * auVar65._12_4_;
    auVar71._0_4_ = fVar59 * auVar55._0_4_;
    auVar71._4_4_ = fVar33 * auVar55._4_4_;
    auVar71._8_4_ = fVar59 * auVar55._8_4_;
    auVar71._12_4_ = fVar33 * auVar55._12_4_;
    iVar32 = -(uint)(fVar59 == 0.0);
    iVar46 = -(uint)(fVar33 == 0.0);
    iVar48 = -(uint)(fVar59 == 0.0);
    iVar50 = -(uint)(fVar33 == 0.0);
    auVar63 = NEON_frsqrts(auVar55,auVar71,4);
    fVar59 = fVar31 * auVar55._0_4_ * auVar63._0_4_;
    fVar60 = auVar55._4_4_ * auVar63._4_4_ * 0.0;
    fVar61 = fVar47 * auVar55._8_4_ * auVar63._8_4_;
    fVar62 = auVar55._12_4_ * auVar63._12_4_ * 0.0;
    fVar33 = (float)CONCAT13((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                             CONCAT12((byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                                      CONCAT11((byte)((uint)fVar59 >> 8) &
                                               ~(byte)((uint)iVar32 >> 8),
                                               SUB41(fVar59,0) & ~(byte)iVar32)));
    auVar37._0_8_ =
         CONCAT17((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                  CONCAT16((byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10),
                           CONCAT15((byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar46 >> 8),
                                    CONCAT14(SUB41(fVar60,0) & ~(byte)iVar46,fVar33))));
    auVar37[8] = SUB41(fVar61,0) & ~(byte)iVar48;
    auVar37[9] = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar48 >> 8);
    auVar37[10] = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
    auVar37[0xb] = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
    auVar41[0xc] = SUB41(fVar62,0) & ~(byte)iVar50;
    auVar41._0_12_ = auVar37;
    auVar41[0xd] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar50 >> 8);
    auVar41[0xe] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
    auVar41[0xf] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
    auVar63 = NEON_frsqrte(auVar23,4);
    auVar72._0_4_ = fVar16 * auVar63._0_4_;
    auVar72._4_4_ = fVar51 * auVar63._4_4_;
    auVar72._8_4_ = fVar16 * auVar63._8_4_;
    auVar72._12_4_ = fVar51 * auVar63._12_4_;
    auVar65 = NEON_frsqrts(auVar63,auVar72,4);
    auVar67._0_4_ = auVar63._0_4_ * auVar65._0_4_;
    auVar67._4_4_ = auVar63._4_4_ * auVar65._4_4_;
    auVar67._8_4_ = auVar63._8_4_ * auVar65._8_4_;
    auVar67._12_4_ = auVar63._12_4_ * auVar65._12_4_;
    auVar73._0_4_ = fVar16 * auVar67._0_4_;
    auVar73._4_4_ = fVar51 * auVar67._4_4_;
    auVar73._8_4_ = fVar16 * auVar67._8_4_;
    auVar73._12_4_ = fVar51 * auVar67._12_4_;
    iVar32 = -(uint)(fVar16 == 0.0);
    iVar46 = -(uint)(fVar51 == 0.0);
    iVar48 = -(uint)(fVar16 == 0.0);
    iVar50 = -(uint)(fVar51 == 0.0);
    auVar63 = NEON_frsqrts(auVar67,auVar73,4);
    fVar59 = fVar31 * auVar67._0_4_ * auVar63._0_4_;
    fVar16 = fVar45 * auVar67._4_4_ * auVar63._4_4_;
    fVar51 = fVar47 * auVar67._8_4_ * auVar63._8_4_;
    fVar60 = fVar49 * auVar67._12_4_ * auVar63._12_4_;
    fVar59 = (float)CONCAT13((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                             CONCAT12((byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                                      CONCAT11((byte)((uint)fVar59 >> 8) &
                                               ~(byte)((uint)iVar32 >> 8),
                                               SUB41(fVar59,0) & ~(byte)iVar32)));
    auVar18._0_8_ =
         CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                  CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10),
                           CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar46 >> 8),
                                    CONCAT14(SUB41(fVar16,0) & ~(byte)iVar46,fVar59))));
    auVar18[8] = SUB41(fVar51,0) & ~(byte)iVar48;
    auVar18[9] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar48 >> 8);
    auVar18[10] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
    auVar18[0xb] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
    auVar24[0xc] = SUB41(fVar60,0) & ~(byte)iVar50;
    auVar24._0_12_ = auVar18;
    auVar24[0xd] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar50 >> 8);
    auVar24[0xe] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
    auVar24[0xf] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
    auVar25._0_4_ = fVar33 * fVar59;
    auVar25._4_4_ = (float)((ulong)auVar37._0_8_ >> 0x20) * (float)((ulong)auVar18._0_8_ >> 0x20);
    auVar25._8_4_ = auVar37._8_4_ * auVar18._8_4_;
    auVar25._12_4_ = auVar41._12_4_ * auVar24._12_4_;
    NEON_ext(auVar25,auVar25,8,1);
    fVar16 = (float)FUN_01009610();
    fVar59 = -fVar16;
    if (0.0 <= fVar45) {
      fVar59 = fVar16;
    }
  }
  param_1[9] = -fVar59;
  auVar26._0_4_ = fVar31 * fVar31;
  auVar26._4_4_ = 0;
  auVar26._8_4_ = fVar47 * fVar47;
  auVar26._12_4_ = fVar49 * fVar49;
  auVar63 = NEON_ext(auVar26,auVar26,8,1);
  fVar45 = auVar63._0_4_ + auVar26._0_4_;
  fVar16 = auVar63._4_4_ + 0.0;
  fVar51 = fVar45 + fVar16;
  fVar45 = fVar45 + fVar16;
  fVar16 = 0.0;
  if (fVar51 != 0.0) {
    auVar27._8_8_ = CONCAT44(fVar45,fVar51);
    auVar27._0_8_ = CONCAT44(fVar45,fVar51);
    auVar63 = NEON_frsqrte(auVar27,4);
    auVar56._0_4_ = auVar63._0_4_ * fVar51;
    auVar56._4_4_ = auVar63._4_4_ * fVar45;
    auVar56._8_4_ = auVar63._8_4_ * fVar51;
    auVar56._12_4_ = auVar63._12_4_ * fVar45;
    auVar65 = NEON_frsqrts(auVar63,auVar56,4);
    auVar42._0_4_ = auVar63._0_4_ * auVar65._0_4_;
    auVar42._4_4_ = auVar63._4_4_ * auVar65._4_4_;
    auVar42._8_4_ = auVar63._8_4_ * auVar65._8_4_;
    auVar42._12_4_ = auVar63._12_4_ * auVar65._12_4_;
    auVar57._0_4_ = fVar51 * auVar42._0_4_;
    auVar57._4_4_ = fVar45 * auVar42._4_4_;
    auVar57._8_4_ = fVar51 * auVar42._8_4_;
    auVar57._12_4_ = fVar45 * auVar42._12_4_;
    auVar63 = NEON_frsqrts(auVar42,auVar57,4);
    iVar32 = -(uint)(fVar51 == 0.0);
    iVar46 = -(uint)(fVar45 == 0.0);
    iVar48 = -(uint)(fVar51 == 0.0);
    iVar50 = -(uint)(fVar45 == 0.0);
    fVar31 = fVar31 * auVar42._0_4_ * auVar63._0_4_;
    fVar16 = auVar42._4_4_ * auVar63._4_4_ * 0.0;
    fVar47 = fVar47 * auVar42._8_4_ * auVar63._8_4_;
    fVar49 = fVar49 * auVar42._12_4_ * auVar63._12_4_;
    fVar31 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                             CONCAT12((byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                                      CONCAT11((byte)((uint)fVar31 >> 8) &
                                               ~(byte)((uint)iVar32 >> 8),
                                               SUB41(fVar31,0) & ~(byte)iVar32)));
    auVar53._0_8_ =
         CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                  CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10),
                           CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar46 >> 8),
                                    CONCAT14(SUB41(fVar16,0) & ~(byte)iVar46,fVar31))));
    auVar53[8] = SUB41(fVar47,0) & ~(byte)iVar48;
    auVar53[9] = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar48 >> 8);
    auVar53[10] = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
    auVar53[0xb] = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
    auVar58[0xc] = SUB41(fVar49,0) & ~(byte)iVar50;
    auVar58._0_12_ = auVar53;
    auVar58[0xd] = (byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar50 >> 8);
    auVar58[0xe] = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
    auVar58[0xf] = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
    auVar43._0_4_ = fVar31 * fVar74;
    auVar43._4_4_ = (float)((ulong)auVar53._0_8_ >> 0x20) * fVar68;
    auVar43._8_4_ = auVar53._8_4_ * fVar75;
    auVar43._12_4_ = auVar58._12_4_ * fVar69;
    NEON_ext(auVar43,auVar43,8,1);
    fVar51 = (float)FUN_01009610();
    fVar16 = -fVar51;
    if (0.0 <= fVar31) {
      fVar16 = fVar51;
    }
  }
  param_1[8] = fVar16;
  param_1[10] = *(float *)(param_2 + 0x368);
  param_1[0xb] = *(float *)(param_2 + 0x36c);
  *(undefined8 *)(param_2 + 0xe078) = uStack_68;
  *(undefined8 *)(param_2 + 0xe070) = local_70;
  *(undefined8 *)(param_2 + 0xe088) = uStack_58;
  *(undefined8 *)(param_2 + 0xe080) = local_60;
  *(undefined8 *)(param_2 + 0xe098) = uStack_88;
  *(undefined8 *)(param_2 + 0xe090) = local_90;
  *(ulong *)(param_2 + 0xe0a8) = CONCAT44(fVar83,fVar30);
  *(ulong *)(param_2 + 0xe0a0) = CONCAT44(fVar29,fVar28);
  FUN_009a7ff4(fVar16,-fVar59);
  *(undefined8 *)(param_2 + 0xe0b8) = extraout_var_01;
  *(undefined8 *)(param_2 + 0xe0b0) = extraout_d0;
  return;
}


