/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e98400; name: FUN_01e98400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e98400(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long *param_5)

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
  long *plVar10;
  long lVar11;
  float fVar12;
  float extraout_s0;
  float fVar13;
  float extraout_var;
  float extraout_var_00;
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
  byte bVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar43;
  int iVar44;
  float fVar45;
  float fVar54;
  int iVar56;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  int iVar55;
  int iVar57;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  int iVar64;
  undefined8 uVar58;
  int iVar65;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar66;
  float fVar74;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 uVar75;
  undefined8 uVar76;
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
  undefined1 auVar87 [16];
  long *local_40;
  long *local_38;
  
  uVar35 = param_2[0xf];
  uVar33 = param_2[0xe];
  uVar31 = param_2[0xd];
  uVar30 = param_2[0xc];
  uVar28 = param_2[0xb];
  uVar26 = param_2[10];
  uVar25 = param_2[9];
  uVar36 = param_2[8];
  uVar34 = param_2[7];
  uVar32 = param_2[6];
  uVar29 = param_2[5];
  uVar27 = param_2[4];
  uVar24 = param_2[3];
  uVar22 = param_2[2];
  uVar20 = param_2[1];
  uVar19 = param_2[0];
  if ((*(char *)((long)param_5 + 0x4ec) == '\0') &&
     (FUN_01e98c2c(&local_38,param_5), local_38 != (long *)0x0)) {
    FUN_00956dac(&local_40,param_5 + 0x35);
    plVar10 = local_40;
    (**(code **)(*local_38 + 0x40))();
    *(undefined1 *)(plVar10 + 0x1c) = 1;
    plVar10[0x1b] = param_4._8_8_;
    plVar10[0x1a] = param_4._0_8_;
    if (local_40 != (long *)0x0) {
      lVar11 = local_40[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar44 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar44 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar44 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
    FUN_00956dac(&local_40,param_5 + 0x35);
    plVar10 = local_40;
    (**(code **)(*local_38 + 0x40))();
    auVar46._0_4_ = extraout_s0 * extraout_s0;
    auVar46._4_4_ = extraout_var * extraout_var;
    auVar46._8_4_ = extraout_var_00 * extraout_var_00;
    auVar46._12_4_ = extraout_var_01 * extraout_var_01;
    auVar59 = NEON_ext(auVar46,auVar46,8,1);
    fVar43 = auVar59._0_4_ + auVar46._0_4_;
    fVar54 = auVar59._4_4_ + auVar46._4_4_;
    fVar12 = fVar43 + fVar54;
    fVar43 = fVar43 + fVar54;
    auVar47._8_8_ = CONCAT44(fVar43,fVar12);
    auVar47._0_8_ = CONCAT44(fVar43,fVar12);
    *(undefined1 *)(plVar10 + 0x1c) = 1;
    auVar59 = NEON_frsqrte(auVar47,4);
    auVar67._0_4_ = auVar59._0_4_ * fVar12;
    auVar67._4_4_ = auVar59._4_4_ * fVar43;
    auVar67._8_4_ = auVar59._8_4_ * fVar12;
    auVar67._12_4_ = auVar59._12_4_ * fVar43;
    auVar68 = NEON_frsqrts(auVar59,auVar67,4);
    auVar60._0_4_ = auVar59._0_4_ * auVar68._0_4_;
    auVar60._4_4_ = auVar59._4_4_ * auVar68._4_4_;
    auVar60._8_4_ = auVar59._8_4_ * auVar68._8_4_;
    auVar60._12_4_ = auVar59._12_4_ * auVar68._12_4_;
    auVar69._0_4_ = fVar12 * auVar60._0_4_;
    auVar69._4_4_ = fVar43 * auVar60._4_4_;
    auVar69._8_4_ = fVar12 * auVar60._8_4_;
    auVar69._12_4_ = fVar43 * auVar60._12_4_;
    iVar44 = -(uint)(fVar12 == 0.0);
    iVar55 = -(uint)(fVar43 == 0.0);
    iVar56 = -(uint)(fVar12 == 0.0);
    iVar57 = -(uint)(fVar43 == 0.0);
    auVar59 = NEON_frsqrts(auVar60,auVar69,4);
    fVar12 = extraout_s0 * auVar60._0_4_ * auVar59._0_4_;
    fVar43 = extraout_var * auVar60._4_4_ * auVar59._4_4_;
    fVar54 = extraout_var_00 * auVar60._8_4_ * auVar59._8_4_;
    fVar18 = extraout_var_01 * auVar60._12_4_ * auVar59._12_4_;
    fVar45 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                             CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10),
                                      CONCAT11((byte)((uint)fVar12 >> 8) &
                                               ~(byte)((uint)iVar44 >> 8),
                                               SUB41(fVar12,0) & ~(byte)iVar44)));
    auVar48._0_8_ =
         CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                  CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                           CONCAT15((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar55 >> 8),
                                    CONCAT14(SUB41(fVar43,0) & ~(byte)iVar55,fVar45))));
    auVar48[8] = SUB41(fVar54,0) & ~(byte)iVar56;
    auVar48[9] = (byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar56 >> 8);
    auVar48[10] = (byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10);
    auVar48[0xb] = (byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18);
    auVar48[0xc] = SUB41(fVar18,0) & ~(byte)iVar57;
    auVar48[0xd] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar57 >> 8);
    auVar48[0xe] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
    auVar48[0xf] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
    auVar61._0_4_ =
         (float)CONCAT13(uVar24,CONCAT12(uVar22,CONCAT11(uVar20,uVar19))) *
         (float)CONCAT13(uVar24,CONCAT12(uVar22,CONCAT11(uVar20,uVar19)));
    auVar61._4_4_ =
         (float)CONCAT13(uVar34,CONCAT12(uVar32,CONCAT11(uVar29,uVar27))) *
         (float)CONCAT13(uVar34,CONCAT12(uVar32,CONCAT11(uVar29,uVar27)));
    auVar61._8_4_ =
         (float)CONCAT13(uVar28,CONCAT12(uVar26,CONCAT11(uVar25,uVar36))) *
         (float)CONCAT13(uVar28,CONCAT12(uVar26,CONCAT11(uVar25,uVar36)));
    auVar61._12_4_ =
         (float)CONCAT13(uVar35,CONCAT12(uVar33,CONCAT11(uVar31,uVar30))) *
         (float)CONCAT13(uVar35,CONCAT12(uVar33,CONCAT11(uVar31,uVar30)));
    auVar59 = NEON_ext(auVar61,auVar61,8,1);
    fVar43 = auVar59._0_4_ + auVar61._0_4_;
    fVar54 = auVar59._4_4_ + auVar61._4_4_;
    fVar12 = fVar43 + fVar54;
    fVar43 = fVar43 + fVar54;
    auVar62._8_8_ = CONCAT44(fVar43,fVar12);
    auVar62._0_8_ = CONCAT44(fVar43,fVar12);
    auVar59 = NEON_frsqrte(auVar62,4);
    auVar77._0_4_ = auVar59._0_4_ * fVar12;
    auVar77._4_4_ = auVar59._4_4_ * fVar43;
    auVar77._8_4_ = auVar59._8_4_ * fVar12;
    auVar77._12_4_ = auVar59._12_4_ * fVar43;
    auVar68 = NEON_frsqrts(auVar59,auVar77,4);
    auVar70._0_4_ = auVar59._0_4_ * auVar68._0_4_;
    auVar70._4_4_ = auVar59._4_4_ * auVar68._4_4_;
    auVar70._8_4_ = auVar59._8_4_ * auVar68._8_4_;
    auVar70._12_4_ = auVar59._12_4_ * auVar68._12_4_;
    auVar78._0_4_ = fVar12 * auVar70._0_4_;
    auVar78._4_4_ = fVar43 * auVar70._4_4_;
    auVar78._8_4_ = fVar12 * auVar70._8_4_;
    auVar78._12_4_ = fVar43 * auVar70._12_4_;
    iVar57 = -(uint)(fVar12 == 0.0);
    iVar64 = -(uint)(fVar43 == 0.0);
    iVar65 = -(uint)(fVar12 == 0.0);
    auVar59 = NEON_frsqrts(auVar70,auVar78,4);
    fVar43 = (float)CONCAT13(uVar24,CONCAT12(uVar22,CONCAT11(uVar20,uVar19))) *
             auVar70._0_4_ * auVar59._0_4_;
    fVar12 = (float)CONCAT13(uVar34,CONCAT12(uVar32,CONCAT11(uVar29,uVar27))) *
             auVar70._4_4_ * auVar59._4_4_;
    fVar54 = (float)CONCAT13(uVar28,CONCAT12(uVar26,CONCAT11(uVar25,uVar36))) *
             auVar70._8_4_ * auVar59._8_4_;
    bVar21 = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
    bVar23 = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
    fVar13 = param_3._0_4_;
    auVar71._0_4_ = fVar13 * fVar13;
    fVar16 = param_3._4_4_;
    auVar71._4_4_ = fVar16 * fVar16;
    fVar17 = param_3._8_4_;
    auVar71._8_4_ = fVar17 * fVar17;
    auVar71._12_4_ = param_3._12_4_ * param_3._12_4_;
    auVar59 = NEON_ext(auVar71,auVar71,8,1);
    fVar66 = auVar59._0_4_ + auVar71._0_4_;
    fVar74 = auVar59._4_4_ + auVar71._4_4_;
    fVar18 = fVar66 + fVar74;
    fVar66 = fVar66 + fVar74;
    auVar72._8_8_ = CONCAT44(fVar66,fVar18);
    auVar72._0_8_ = CONCAT44(fVar66,fVar18);
    auVar59 = NEON_frsqrte(auVar72,4);
    auVar82._0_4_ = auVar59._0_4_ * fVar18;
    auVar82._4_4_ = auVar59._4_4_ * fVar66;
    auVar82._8_4_ = auVar59._8_4_ * fVar18;
    auVar82._12_4_ = auVar59._12_4_ * fVar66;
    auVar68 = NEON_frsqrts(auVar59,auVar82,4);
    auVar79._0_4_ = auVar59._0_4_ * auVar68._0_4_;
    auVar79._4_4_ = auVar59._4_4_ * auVar68._4_4_;
    auVar79._8_4_ = auVar59._8_4_ * auVar68._8_4_;
    auVar79._12_4_ = auVar59._12_4_ * auVar68._12_4_;
    auVar83._0_4_ = fVar18 * auVar79._0_4_;
    auVar83._4_4_ = fVar66 * auVar79._4_4_;
    auVar83._8_4_ = fVar18 * auVar79._8_4_;
    auVar83._12_4_ = fVar66 * auVar79._12_4_;
    auVar59 = NEON_frsqrts(auVar79,auVar83,4);
    fVar13 = fVar13 * auVar79._0_4_ * auVar59._0_4_;
    fVar16 = fVar16 * auVar79._4_4_ * auVar59._4_4_;
    fVar17 = fVar17 * auVar79._8_4_ * auVar59._8_4_;
    iVar44 = -(uint)(fVar18 == 0.0);
    iVar55 = -(uint)(fVar66 == 0.0);
    iVar56 = -(uint)(fVar18 == 0.0);
    uVar37 = CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                      CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar55 >> 8),
                               CONCAT14(SUB41(fVar16,0) & ~(byte)iVar55,
                                        CONCAT13((byte)((uint)fVar13 >> 0x18) &
                                                 ~(byte)((uint)iVar44 >> 0x18),
                                                 CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                          ~(byte)((uint)iVar44 >> 0x10),
                                                          CONCAT11((byte)((uint)fVar13 >> 8) &
                                                                   ~(byte)((uint)iVar44 >> 8),
                                                                   SUB41(fVar13,0) & ~(byte)iVar44))
                                                ))));
    bVar42 = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
    auVar38._0_8_ = CONCAT17(bVar42,uVar37);
    auVar38[8] = SUB41(fVar17,0) & ~(byte)iVar56;
    auVar38[9] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar56 >> 8);
    auVar38[10] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10);
    auVar38[0xb] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18);
    uVar75 = NEON_ext(auVar48._0_8_,auVar38._0_8_,4,1);
    auVar59 = NEON_ext(auVar48,auVar48,8,1);
    fVar12 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                             CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                                      CONCAT11((byte)((uint)fVar12 >> 8) &
                                               ~(byte)((uint)iVar64 >> 8),
                                               SUB41(fVar12,0) & ~(byte)iVar64)));
    fVar16 = auVar38._8_4_;
    auVar68 = NEON_fmov(0x3f800000,4);
    fVar18 = (float)_DAT_03889820 * fVar45 + (float)_DAT_0388a450 * fVar12 +
             (float)_DAT_03889eb0 * fVar16 + auVar68._0_4_;
    fVar66 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar45 +
             (float)((ulong)_DAT_0388a450 >> 0x20) * fVar12 +
             (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar16 + auVar68._4_4_;
    fVar13 = (float)_UNK_03889828 * fVar45 + (float)_UNK_0388a458 * fVar12 +
             (float)_UNK_03889eb8 * fVar16 + auVar68._8_4_;
    fVar16 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar45 +
             (float)((ulong)_UNK_0388a458 >> 0x20) * fVar12 +
             (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar16 + auVar68._12_4_;
    fVar12 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                             CONCAT12((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10),
                                      CONCAT11((byte)((uint)fVar54 >> 8) &
                                               ~(byte)((uint)iVar65 >> 8),
                                               SUB41(fVar54,0) & ~(byte)iVar65)));
    uVar4 = CONCAT11((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar57 >> 8),
                     SUB41(fVar43,0) & ~(byte)iVar57);
    auVar39._0_4_ = (float)uVar75 + (float)CONCAT13(bVar23,CONCAT12(bVar21,uVar4));
    fVar43 = (float)((ulong)uVar75 >> 0x20);
    auVar39._4_4_ = fVar43 + auVar59._0_4_;
    uVar8 = (undefined3)((uint7)uVar37 >> 0x20);
    auVar39._8_4_ = fVar12 + (float)CONCAT13(bVar42,uVar8);
    auVar39._12_4_ = 0;
    auVar49._0_4_ = (float)uVar75 - (float)CONCAT13(bVar23,CONCAT12(bVar21,uVar4));
    auVar49._4_4_ = fVar43 - auVar59._0_4_;
    auVar49._8_4_ = fVar12 - (float)CONCAT13(bVar42,uVar8);
    auVar49._12_4_ = 0;
    uVar9 = a64_TBL(ZEXT816(0),auVar39,auVar49,DAT_0388a888);
    uVar75 = a64_TBL(ZEXT816(0),auVar39,auVar49,DAT_0388a710);
    auVar73._8_8_ = uVar75;
    auVar73._0_8_ = uVar9 & 0xffffffff00000000;
    uVar58 = a64_TBL(ZEXT816(0),auVar39,auVar49,DAT_0388a758);
    auVar85._4_12_ = auVar73._4_12_;
    auVar85._0_4_ = fVar18;
    auVar63._0_8_ = a64_TBL(ZEXT816(0),auVar39,auVar49,DAT_0388a880);
    uVar76 = a64_TBL(ZEXT816(0),auVar39,auVar49,DAT_0388a640);
    auVar80._0_8_ = a64_TBL(ZEXT816(0),auVar39,auVar49,DAT_0388a700);
    uVar75 = a64_TBL(ZEXT816(0),auVar39,auVar49,DAT_0388a590);
    auVar50._4_4_ = fVar66;
    auVar50._0_4_ = fVar66;
    auVar50._8_4_ = fVar66;
    auVar50._12_4_ = fVar66;
    auVar63._12_4_ = (undefined4)((ulong)uVar76 >> 0x20);
    auVar63._8_4_ = fVar13;
    auVar80._8_8_ = uVar75;
    auVar87._4_4_ = fVar18;
    auVar87._0_4_ = fVar18;
    auVar87._8_4_ = fVar18;
    auVar87._12_4_ = fVar18;
    auVar84._0_8_ = CONCAT44(-(uint)(fVar18 <= fVar66),-(uint)(fVar18 <= fVar66));
    auVar84._8_4_ = -(uint)(fVar18 <= fVar66);
    auVar84._12_4_ = -(uint)(fVar18 <= fVar66);
    auVar86._8_8_ = auVar84._8_8_;
    auVar86._0_8_ = auVar84._0_8_;
    auVar59[4] = SUB41(fVar66,0);
    auVar59._0_4_ = (int)uVar9;
    auVar59[5] = (char)((uint)fVar66 >> 8);
    auVar59[6] = (char)((uint)fVar66 >> 0x10);
    auVar59[7] = (char)((uint)fVar66 >> 0x18);
    auVar59[8] = (char)uVar58;
    auVar59[9] = (char)((ulong)uVar58 >> 8);
    auVar59[10] = (char)((ulong)uVar58 >> 0x10);
    auVar59[0xb] = (char)((ulong)uVar58 >> 0x18);
    auVar59[0xc] = (char)((ulong)uVar58 >> 0x20);
    auVar59[0xd] = (char)((ulong)uVar58 >> 0x28);
    auVar59[0xe] = (char)((ulong)uVar58 >> 0x30);
    auVar59[0xf] = (char)((ulong)uVar58 >> 0x38);
    auVar85 = auVar85 ^ (auVar85 ^ auVar59) & auVar84;
    uVar19 = SUB41(fVar13,0);
    uVar20 = (undefined1)((uint)fVar13 >> 8);
    uVar22 = (undefined1)((uint)fVar13 >> 0x10);
    uVar24 = (undefined1)((uint)fVar13 >> 0x18);
    auVar81._0_12_ = auVar80._0_12_;
    auVar81._12_4_ = fVar16;
    auVar87 = auVar87 ^ (auVar87 ^ auVar50) & auVar86;
    auVar40._0_8_ = CONCAT44(-(uint)(auVar87._4_4_ <= fVar13),-(uint)(auVar87._0_4_ <= fVar13));
    auVar40._8_4_ = -(uint)(auVar87._8_4_ <= fVar13);
    auVar40._12_4_ = -(uint)(auVar87._12_4_ <= fVar13);
    auVar51._8_8_ = auVar40._8_8_;
    auVar51._0_8_ = auVar40._0_8_;
    auVar85 = auVar85 ^ (auVar85 ^ auVar63) & auVar40;
    auVar68[4] = uVar19;
    auVar68._0_4_ = fVar13;
    auVar68[5] = uVar20;
    auVar68[6] = uVar22;
    auVar68[7] = uVar24;
    auVar68[8] = uVar19;
    auVar68[9] = uVar20;
    auVar68[10] = uVar22;
    auVar68[0xb] = uVar24;
    auVar68[0xc] = uVar19;
    auVar68[0xd] = uVar20;
    auVar68[0xe] = uVar22;
    auVar68[0xf] = uVar24;
    auVar87 = auVar87 ^ (auVar87 ^ auVar68) & auVar51;
    auVar14._0_4_ = -(uint)(auVar87._0_4_ <= fVar16);
    auVar14._4_4_ = -(uint)(auVar87._4_4_ <= fVar16);
    auVar14._8_4_ = -(uint)(auVar87._8_4_ <= fVar16);
    auVar14._12_4_ = -(uint)(auVar87._12_4_ <= fVar16);
    auVar85 = auVar85 ^ (auVar85 ^ auVar81) & auVar14;
    fVar66 = auVar85._0_4_;
    fVar12 = fVar66 * fVar66;
    fVar13 = auVar85._4_4_;
    fVar43 = fVar13 * fVar13;
    uVar19 = (undefined1)((uint)fVar43 >> 8);
    uVar20 = (undefined1)((uint)fVar43 >> 0x10);
    uVar22 = (undefined1)((uint)fVar43 >> 0x18);
    fVar16 = auVar85._8_4_;
    fVar54 = fVar16 * fVar16;
    uVar24 = (undefined1)((uint)fVar54 >> 8);
    uVar27 = (undefined1)((uint)fVar54 >> 0x10);
    uVar29 = (undefined1)((uint)fVar54 >> 0x18);
    fVar17 = auVar85._12_4_;
    fVar18 = fVar17 * fVar17;
    uVar32 = (undefined1)((uint)fVar18 >> 8);
    uVar34 = (undefined1)((uint)fVar18 >> 0x10);
    uVar36 = (undefined1)((uint)fVar18 >> 0x18);
    auVar5[4] = SUB41(fVar43,0);
    auVar5._0_4_ = fVar12;
    auVar5[5] = uVar19;
    auVar5[6] = uVar20;
    auVar5[7] = uVar22;
    auVar5[8] = SUB41(fVar54,0);
    auVar5[9] = uVar24;
    auVar5[10] = uVar27;
    auVar5[0xb] = uVar29;
    auVar5[0xc] = SUB41(fVar18,0);
    auVar5[0xd] = uVar32;
    auVar5[0xe] = uVar34;
    auVar5[0xf] = uVar36;
    auVar6[4] = SUB41(fVar43,0);
    auVar6._0_4_ = fVar12;
    auVar6[5] = uVar19;
    auVar6[6] = uVar20;
    auVar6[7] = uVar22;
    auVar6[8] = SUB41(fVar54,0);
    auVar6[9] = uVar24;
    auVar6[10] = uVar27;
    auVar6[0xb] = uVar29;
    auVar6[0xc] = SUB41(fVar18,0);
    auVar6[0xd] = uVar32;
    auVar6[0xe] = uVar34;
    auVar6[0xf] = uVar36;
    auVar59 = NEON_ext(auVar5,auVar6,8,1);
    fVar12 = auVar59._0_4_ + fVar12;
    fVar43 = auVar59._4_4_ + fVar43;
    fVar54 = fVar12 + fVar43;
    fVar12 = fVar12 + fVar43;
    uVar19 = SUB41(fVar12,0);
    uVar20 = (undefined1)((uint)fVar12 >> 8);
    uVar22 = (undefined1)((uint)fVar12 >> 0x10);
    uVar24 = (undefined1)((uint)fVar12 >> 0x18);
    auVar7[4] = uVar19;
    auVar7._0_4_ = fVar54;
    auVar7[5] = uVar20;
    auVar7[6] = uVar22;
    auVar7[7] = uVar24;
    auVar7[8] = SUB41(fVar54,0);
    auVar7[9] = (char)((uint)fVar54 >> 8);
    auVar7[10] = (char)((uint)fVar54 >> 0x10);
    auVar7[0xb] = (char)((uint)fVar54 >> 0x18);
    auVar7[0xc] = uVar19;
    auVar7[0xd] = uVar20;
    auVar7[0xe] = uVar22;
    auVar7[0xf] = uVar24;
    auVar59 = NEON_frsqrte(auVar7,4);
    auVar52._0_4_ = auVar59._0_4_ * fVar54;
    auVar52._4_4_ = auVar59._4_4_ * fVar12;
    auVar52._8_4_ = auVar59._8_4_ * fVar54;
    uVar4 = (undefined2)(CONCAT15(uVar20,CONCAT14(uVar19,fVar54)) >> 0x20);
    auVar52._12_4_ = auVar59._12_4_ * (float)CONCAT13(uVar24,CONCAT12(uVar22,uVar4));
    auVar68 = NEON_frsqrts(auVar59,auVar52,4);
    auVar41._0_4_ = auVar59._0_4_ * auVar68._0_4_;
    auVar41._4_4_ = auVar59._4_4_ * auVar68._4_4_;
    auVar41._8_4_ = auVar59._8_4_ * auVar68._8_4_;
    auVar41._12_4_ = auVar59._12_4_ * auVar68._12_4_;
    auVar53._0_4_ = fVar54 * auVar41._0_4_;
    auVar53._4_4_ = fVar12 * auVar41._4_4_;
    auVar53._8_4_ = fVar54 * auVar41._8_4_;
    auVar53._12_4_ = (float)CONCAT13(uVar24,CONCAT12(uVar22,uVar4)) * auVar41._12_4_;
    iVar44 = -(uint)(fVar54 == 0.0);
    iVar55 = -(uint)(fVar12 == 0.0);
    iVar56 = -(uint)(fVar54 == 0.0);
    iVar57 = -(uint)((float)CONCAT13(uVar24,CONCAT12(uVar22,uVar4)) == 0.0);
    auVar59 = NEON_frsqrts(auVar41,auVar53,4);
    fVar66 = auVar41._0_4_ * auVar59._0_4_ * fVar66;
    fVar13 = auVar41._4_4_ * auVar59._4_4_ * fVar13;
    fVar16 = auVar41._8_4_ * auVar59._8_4_ * fVar16;
    fVar17 = auVar41._12_4_ * auVar59._12_4_ * fVar17;
    auVar15._0_8_ =
         CONCAT17((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                  CONCAT16((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10),
                           CONCAT15((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar55 >> 8),
                                    CONCAT14(SUB41(fVar13,0) & ~(byte)iVar55,
                                             CONCAT13((byte)((uint)fVar66 >> 0x18) &
                                                      ~(byte)((uint)iVar44 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar66 >> 0x10) &
                                                               ~(byte)((uint)iVar44 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar66 >> 8) &
                                                                        ~(byte)((uint)iVar44 >> 8),
                                                                        SUB41(fVar66,0) &
                                                                        ~(byte)iVar44)))))));
    auVar15[8] = SUB41(fVar16,0) & ~(byte)iVar56;
    auVar15[9] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar56 >> 8);
    auVar15[10] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10);
    auVar15[0xb] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18);
    auVar15[0xc] = SUB41(fVar17,0) & ~(byte)iVar57;
    auVar15[0xd] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar57 >> 8);
    auVar15[0xe] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
    auVar15[0xf] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
    plVar10[0x19] = auVar15._8_8_;
    plVar10[0x18] = auVar15._0_8_;
    if (local_40 != (long *)0x0) {
      lVar11 = local_40[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar44 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar44 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar44 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if (local_38 != (long *)0x0) {
      lVar11 = local_38[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar44 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar44 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar44 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  (**(code **)(*param_5 + 0x138))(param_5);
  return;
}


