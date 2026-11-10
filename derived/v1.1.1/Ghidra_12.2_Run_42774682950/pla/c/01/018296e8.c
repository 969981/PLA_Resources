/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018296e8; name: FUN_018296e8
 */


/* WARNING: Removing unreachable block (ram,0x01829a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018296e8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  float fVar15;
  byte bVar16;
  byte bVar31;
  byte bVar32;
  float extraout_s0;
  int iVar17;
  float fVar18;
  int iVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  byte bVar33;
  byte bVar34;
  byte bVar39;
  byte bVar40;
  float extraout_var;
  float fVar35;
  int iVar36;
  byte bVar41;
  byte bVar42;
  byte bVar47;
  byte bVar48;
  float extraout_var_00;
  float fVar43;
  int iVar44;
  byte bVar49;
  byte bVar50;
  byte bVar54;
  byte bVar55;
  float extraout_var_01;
  float fVar51;
  int iVar52;
  byte bVar56;
  undefined1 auVar24 [16];
  float fVar37;
  float fVar45;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar38;
  int iVar46;
  int iVar53;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar57;
  float fVar58;
  float fVar67;
  undefined8 uVar59;
  float fVar68;
  float fVar69;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar70;
  undefined8 uVar71;
  undefined1 auVar73 [12];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined8 uVar72;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar86;
  undefined8 uVar87;
  float fVar103;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar102;
  undefined8 uVar88;
  float fVar104;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined8 uVar89;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  undefined1 uVar112;
  undefined1 uVar113;
  undefined8 uVar114;
  long lVar115;
  long lVar116;
  byte local_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long *local_48;
  
  if ((0.0 < *(float *)(param_1 + 0x218)) &&
     (*(float *)(param_1 + 0x21c) < *(float *)(param_1 + 0x218))) {
    FUN_01829384(param_1);
    auVar75._0_4_ = extraout_s0 * extraout_s0;
    auVar75._4_4_ = extraout_var * extraout_var;
    auVar75._8_4_ = extraout_var_00 * extraout_var_00;
    auVar75._12_4_ = extraout_var_01 * extraout_var_01;
    auVar74 = NEON_ext(auVar75,auVar75,8,1);
    fVar57 = auVar74._0_4_ + auVar75._0_4_;
    fVar67 = auVar74._4_4_ + auVar75._4_4_;
    fVar15 = fVar57 + fVar67;
    fVar57 = fVar57 + fVar67;
    auVar74._8_8_ = CONCAT44(fVar57,fVar15);
    auVar74._0_8_ = CONCAT44(fVar57,fVar15);
    auVar75 = NEON_frsqrte(auVar74,4);
    auVar90._0_4_ = auVar75._0_4_ * fVar15;
    auVar90._4_4_ = auVar75._4_4_ * fVar57;
    auVar90._8_4_ = auVar75._8_4_ * fVar15;
    auVar90._12_4_ = auVar75._12_4_ * fVar57;
    auVar74 = NEON_frsqrts(auVar75,auVar90,4);
    auVar76._0_4_ = auVar75._0_4_ * auVar74._0_4_;
    auVar76._4_4_ = auVar75._4_4_ * auVar74._4_4_;
    auVar76._8_4_ = auVar75._8_4_ * auVar74._8_4_;
    auVar76._12_4_ = auVar75._12_4_ * auVar74._12_4_;
    auVar91._0_4_ = fVar15 * auVar76._0_4_;
    auVar91._4_4_ = fVar57 * auVar76._4_4_;
    auVar91._8_4_ = fVar15 * auVar76._8_4_;
    auVar91._12_4_ = fVar57 * auVar76._12_4_;
    auVar75 = NEON_frsqrts(auVar76,auVar91,4);
    fVar67 = extraout_s0 * auVar76._0_4_ * auVar75._0_4_;
    fVar35 = extraout_var * auVar76._4_4_ * auVar75._4_4_;
    fVar43 = extraout_var_00 * auVar76._8_4_ * auVar75._8_4_;
    fVar51 = extraout_var_01 * auVar76._12_4_ * auVar75._12_4_;
    iVar17 = -(uint)(fVar15 == 0.0);
    iVar36 = -(uint)(fVar57 == 0.0);
    iVar44 = -(uint)(fVar15 == 0.0);
    iVar52 = -(uint)(fVar57 == 0.0);
    FUN_009c69bc(&local_48,param_1);
    lVar116 = local_48[0x19];
    lVar115 = local_48[0x18];
    if (local_48 != (long *)0x0) {
      lVar14 = local_48[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar19 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar19 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    uVar13 = DAT_0388a880;
    uVar72 = DAT_0388a6f0;
    uVar12 = DAT_0388a6d8;
    uVar114 = DAT_0388a680;
    uVar89 = DAT_0388a5e0;
    bVar16 = (byte)_DAT_038897c0;
    bVar31 = (byte)((ulong)_DAT_038897c0 >> 8);
    bVar32 = (byte)((ulong)_DAT_038897c0 >> 0x10);
    bVar33 = (byte)((ulong)_DAT_038897c0 >> 0x18);
    fVar70 = (float)CONCAT13((byte)((ulong)lVar115 >> 0x18) & bVar33,
                             CONCAT12((byte)((ulong)lVar115 >> 0x10) & bVar32,
                                      CONCAT11((byte)((ulong)lVar115 >> 8) & bVar31,
                                               (byte)lVar115 & bVar16)));
    bVar34 = (byte)((ulong)_DAT_038897c0 >> 0x20);
    bVar39 = (byte)((ulong)_DAT_038897c0 >> 0x28);
    bVar40 = (byte)((ulong)_DAT_038897c0 >> 0x30);
    bVar41 = (byte)((ulong)_DAT_038897c0 >> 0x38);
    auVar20._0_8_ =
         CONCAT17((byte)((ulong)lVar115 >> 0x38) & bVar41,
                  CONCAT16((byte)((ulong)lVar115 >> 0x30) & bVar40,
                           CONCAT15((byte)((ulong)lVar115 >> 0x28) & bVar39,
                                    CONCAT14((byte)((ulong)lVar115 >> 0x20) & bVar34,fVar70))));
    bVar42 = (byte)_UNK_038897c8;
    auVar20[8] = (byte)lVar116 & bVar42;
    bVar47 = (byte)((ulong)_UNK_038897c8 >> 8);
    auVar20[9] = (byte)((ulong)lVar116 >> 8) & bVar47;
    bVar48 = (byte)((ulong)_UNK_038897c8 >> 0x10);
    auVar20[10] = (byte)((ulong)lVar116 >> 0x10) & bVar48;
    bVar49 = (byte)((ulong)_UNK_038897c8 >> 0x18);
    auVar20[0xb] = (byte)((ulong)lVar116 >> 0x18) & bVar49;
    bVar50 = (byte)((ulong)_UNK_038897c8 >> 0x20);
    auVar24[0xc] = (byte)((ulong)lVar116 >> 0x20) & bVar50;
    auVar24._0_12_ = auVar20;
    bVar54 = (byte)((ulong)_UNK_038897c8 >> 0x28);
    auVar24[0xd] = (byte)((ulong)lVar116 >> 0x28) & bVar54;
    bVar55 = (byte)((ulong)_UNK_038897c8 >> 0x30);
    bVar56 = (byte)((ulong)_UNK_038897c8 >> 0x38);
    auVar24[0xe] = (byte)((ulong)lVar116 >> 0x30) & bVar55;
    auVar24[0xf] = (byte)((ulong)lVar116 >> 0x38) & bVar56;
    uVar59 = NEON_ext(auVar20._0_8_,auVar20._0_8_,4,1);
    uVar71 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a6f0);
    uVar87 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a5e0);
    uVar88 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a6d8);
    fVar58 = (float)uVar59 * (float)uVar59;
    fVar68 = (float)((ulong)uVar59 >> 0x20);
    fVar68 = fVar68 * fVar68;
    fVar18 = (float)uVar71;
    fVar69 = (float)((ulong)uVar71 >> 0x20);
    fVar86 = (float)uVar87 * (float)uVar87;
    fVar102 = (float)((ulong)uVar87 >> 0x20);
    fVar102 = fVar102 * fVar102;
    fVar103 = (float)uVar88;
    fVar104 = (float)((ulong)uVar88 >> 0x20);
    uVar88 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a880);
    fVar70 = (float)uVar88 * fVar70;
    fVar83 = (float)((ulong)uVar88 >> 0x20) * (float)((ulong)auVar20._0_8_ >> 0x20);
    fVar84 = fVar18 * auVar20._8_4_;
    fVar85 = fVar69 * auVar24._12_4_;
    uVar88 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a680);
    fVar70 = fVar70 + fVar70;
    fVar83 = fVar83 + fVar83;
    fVar84 = fVar84 + fVar84;
    fVar85 = fVar85 + fVar85;
    fVar15 = (float)((ulong)lVar116 >> 0x20);
    fVar57 = (float)uVar88 * fVar15;
    fVar37 = (float)((ulong)uVar88 >> 0x20) * fVar15;
    fVar57 = fVar57 + fVar57;
    fVar37 = fVar37 + fVar37;
    fVar45 = fVar103 * fVar15 + fVar103 * fVar15;
    fVar15 = fVar104 * fVar15 + fVar104 * fVar15;
    auVar92._0_4_ = fVar70 + fVar57;
    auVar92._4_4_ = fVar83 + fVar37;
    auVar92._8_4_ = fVar84 + fVar45;
    auVar92._12_4_ = fVar85 + fVar15;
    fVar70 = fVar70 - fVar57;
    fVar83 = fVar83 - fVar37;
    fVar84 = fVar84 - fVar45;
    fVar85 = fVar85 - fVar15;
    fVar15 = (float)_DAT_03888fc0;
    auVar25._0_4_ = fVar15 - (fVar58 + fVar58 + fVar86 + fVar86);
    fVar57 = (float)((ulong)_DAT_03888fc0 >> 0x20);
    auVar25._4_4_ = fVar57 - (fVar68 + fVar68 + fVar102 + fVar102);
    fVar37 = (float)_UNK_03888fc8;
    fVar45 = (float)((ulong)_UNK_03888fc8 >> 0x20);
    auVar25._8_4_ =
         fVar37 - (fVar18 * fVar18 + fVar18 * fVar18 + fVar103 * fVar103 + fVar103 * fVar103);
    auVar25._12_4_ =
         fVar45 - (fVar69 * fVar69 + fVar69 * fVar69 + fVar104 * fVar104 + fVar104 * fVar104);
    auVar4._4_4_ = fVar83;
    auVar4._0_4_ = fVar70;
    auVar4._8_4_ = fVar84;
    auVar4._12_4_ = fVar85;
    auVar60._0_8_ = a64_TBL(ZEXT816(0),auVar92,auVar4,DAT_0388a758);
    auVar5._4_4_ = fVar83;
    auVar5._0_4_ = fVar70;
    auVar5._8_4_ = fVar84;
    auVar5._12_4_ = fVar85;
    uVar88 = a64_TBL(ZEXT816(0),auVar92,auVar5,DAT_0388a720);
    auVar60._8_8_ = uVar88;
    uVar59 = a64_TBL(ZEXT816(0),auVar25,auVar60,DAT_0388a668);
    uVar88 = a64_TBL(ZEXT816(0),auVar25,auVar60,DAT_0388a5a8);
    fVar84 = (float)uVar59;
    fVar70 = (float)((ulong)uVar59 >> 0x20);
    fVar69 = (float)uVar88;
    fVar58 = (float)((ulong)uVar88 >> 0x20);
    fVar18 = fVar69 * fVar69 + fVar84 * fVar84;
    fVar83 = fVar58 * fVar58 + fVar70 * fVar70;
    fVar68 = fVar18 + fVar83;
    fVar18 = fVar18 + fVar83;
    auVar26._8_8_ = CONCAT44(fVar18,fVar68);
    auVar26._0_8_ = CONCAT44(fVar18,fVar68);
    auVar75 = NEON_frsqrte(auVar26,4);
    auVar93._0_4_ = auVar75._0_4_ * fVar68;
    auVar93._4_4_ = auVar75._4_4_ * fVar18;
    auVar93._8_4_ = auVar75._8_4_ * fVar68;
    auVar93._12_4_ = auVar75._12_4_ * fVar18;
    auVar74 = NEON_frsqrts(auVar75,auVar93,4);
    auVar77._0_4_ = auVar75._0_4_ * auVar74._0_4_;
    auVar77._4_4_ = auVar75._4_4_ * auVar74._4_4_;
    auVar77._8_4_ = auVar75._8_4_ * auVar74._8_4_;
    auVar77._12_4_ = auVar75._12_4_ * auVar74._12_4_;
    auVar94._0_4_ = fVar68 * auVar77._0_4_;
    auVar94._4_4_ = fVar18 * auVar77._4_4_;
    auVar94._8_4_ = fVar68 * auVar77._8_4_;
    auVar94._12_4_ = fVar18 * auVar77._12_4_;
    iVar19 = -(uint)(fVar68 == 0.0);
    iVar38 = -(uint)(fVar18 == 0.0);
    iVar46 = -(uint)(fVar68 == 0.0);
    iVar53 = -(uint)(fVar18 == 0.0);
    auVar75 = NEON_frsqrts(auVar77,auVar94,4);
    fVar84 = fVar84 * auVar77._0_4_ * auVar75._0_4_;
    fVar70 = fVar70 * auVar77._4_4_ * auVar75._4_4_;
    fVar69 = fVar69 * auVar77._8_4_ * auVar75._8_4_;
    fVar58 = fVar58 * auVar77._12_4_ * auVar75._12_4_;
    fVar68 = (float)CONCAT13((byte)((uint)fVar84 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                             CONCAT12((byte)((uint)fVar84 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                      CONCAT11((byte)((uint)fVar84 >> 8) &
                                               ~(byte)((uint)iVar19 >> 8),
                                               SUB41(fVar84,0) & ~(byte)iVar19)));
    auVar21._0_8_ =
         CONCAT17((byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                  CONCAT16((byte)((uint)fVar70 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                           CONCAT15((byte)((uint)fVar70 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                    CONCAT14(SUB41(fVar70,0) & ~(byte)iVar38,fVar68))));
    auVar21[8] = SUB41(fVar69,0) & ~(byte)iVar46;
    auVar21[9] = (byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar46 >> 8);
    auVar21[10] = (byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
    auVar21[0xb] = (byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
    auVar27[0xc] = SUB41(fVar58,0) & ~(byte)iVar53;
    auVar27._0_12_ = auVar21;
    auVar27[0xd] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar53 >> 8);
    auVar27[0xe] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
    auVar27[0xf] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
    auVar61._0_4_ = fVar68 * fVar68;
    fVar18 = (float)((ulong)auVar21._0_8_ >> 0x20);
    auVar61._4_4_ = fVar18 * fVar18;
    fVar69 = auVar21._8_4_;
    auVar61._8_4_ = fVar69 * fVar69;
    fVar83 = auVar27._12_4_;
    auVar61._12_4_ = fVar83 * fVar83;
    auVar75 = NEON_ext(auVar61,auVar61,8,1);
    fVar58 = auVar75._0_4_ + auVar61._0_4_;
    fVar84 = auVar75._4_4_ + auVar61._4_4_;
    fVar70 = fVar58 + fVar84;
    fVar58 = fVar58 + fVar84;
    auVar62._8_8_ = CONCAT44(fVar58,fVar70);
    auVar62._0_8_ = CONCAT44(fVar58,fVar70);
    auVar75 = NEON_frsqrte(auVar62,4);
    auVar95._0_4_ = auVar75._0_4_ * fVar70;
    auVar95._4_4_ = auVar75._4_4_ * fVar58;
    auVar95._8_4_ = auVar75._8_4_ * fVar70;
    auVar95._12_4_ = auVar75._12_4_ * fVar58;
    auVar74 = NEON_frsqrts(auVar75,auVar95,4);
    auVar78._0_4_ = auVar75._0_4_ * auVar74._0_4_;
    auVar78._4_4_ = auVar75._4_4_ * auVar74._4_4_;
    auVar78._8_4_ = auVar75._8_4_ * auVar74._8_4_;
    auVar78._12_4_ = auVar75._12_4_ * auVar74._12_4_;
    auVar96._0_4_ = fVar70 * auVar78._0_4_;
    auVar96._4_4_ = fVar58 * auVar78._4_4_;
    auVar96._8_4_ = fVar70 * auVar78._8_4_;
    auVar96._12_4_ = fVar58 * auVar78._12_4_;
    iVar19 = -(uint)(fVar70 == 0.0);
    iVar38 = -(uint)(fVar58 == 0.0);
    iVar46 = -(uint)(fVar70 == 0.0);
    iVar53 = -(uint)(fVar58 == 0.0);
    auVar75 = NEON_frsqrts(auVar78,auVar96,4);
    fVar68 = fVar68 * auVar78._0_4_ * auVar75._0_4_;
    fVar18 = fVar18 * auVar78._4_4_ * auVar75._4_4_;
    fVar69 = fVar69 * auVar78._8_4_ * auVar75._8_4_;
    fVar83 = fVar83 * auVar78._12_4_ * auVar75._12_4_;
    local_60 = SUB41(fVar67,0);
    bStack_5f = (byte)((uint)fVar67 >> 8);
    bStack_5e = (byte)((uint)fVar67 >> 0x10);
    bStack_5d = (byte)((uint)fVar67 >> 0x18);
    uStack_5c._0_1_ = SUB41(fVar35,0);
    uStack_5c._1_1_ = (byte)((uint)fVar35 >> 8);
    uStack_5c._2_1_ = (byte)((uint)fVar35 >> 0x10);
    uStack_5c._3_1_ = (byte)((uint)fVar35 >> 0x18);
    uStack_58._0_1_ = SUB41(fVar43,0);
    uStack_58._1_1_ = (byte)((uint)fVar43 >> 8);
    uStack_58._2_1_ = (byte)((uint)fVar43 >> 0x10);
    uStack_58._3_1_ = (byte)((uint)fVar43 >> 0x18);
    uStack_54._0_1_ = SUB41(fVar51,0);
    uStack_54._1_1_ = (byte)((uint)fVar51 >> 8);
    uStack_54._2_1_ = (byte)((uint)fVar51 >> 0x10);
    uStack_54._3_1_ = (byte)((uint)fVar51 >> 0x18);
    fVar67 = (float)CONCAT13(bStack_5d & ~(byte)((uint)iVar17 >> 0x18),
                             CONCAT12(bStack_5e & ~(byte)((uint)iVar17 >> 0x10),
                                      CONCAT11(bStack_5f & ~(byte)((uint)iVar17 >> 8),
                                               local_60 & ~(byte)iVar17)));
    auVar73._0_8_ =
         CONCAT17(uStack_5c._3_1_ & ~(byte)((uint)iVar36 >> 0x18),
                  CONCAT16(uStack_5c._2_1_ & ~(byte)((uint)iVar36 >> 0x10),
                           CONCAT15(uStack_5c._1_1_ & ~(byte)((uint)iVar36 >> 8),
                                    CONCAT14((byte)uStack_5c & ~(byte)iVar36,fVar67))));
    auVar73[8] = (byte)uStack_58 & ~(byte)iVar44;
    auVar73[9] = uStack_58._1_1_ & ~(byte)((uint)iVar44 >> 8);
    auVar73[10] = uStack_58._2_1_ & ~(byte)((uint)iVar44 >> 0x10);
    auVar73[0xb] = uStack_58._3_1_ & ~(byte)((uint)iVar44 >> 0x18);
    auVar79[0xc] = (byte)uStack_54 & ~(byte)iVar52;
    auVar79._0_12_ = auVar73;
    auVar79[0xd] = uStack_54._1_1_ & ~(byte)((uint)iVar52 >> 8);
    auVar79[0xe] = uStack_54._2_1_ & ~(byte)((uint)iVar52 >> 0x10);
    auVar79[0xf] = uStack_54._3_1_ & ~(byte)((uint)iVar52 >> 0x18);
    FUN_009c69bc(&local_48,param_1);
    lVar116 = local_48[0x19];
    lVar115 = local_48[0x18];
    if (local_48 != (long *)0x0) {
      lVar14 = local_48[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar17 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar17 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    fVar35 = (float)CONCAT13((byte)((ulong)lVar115 >> 0x18) & bVar33,
                             CONCAT12((byte)((ulong)lVar115 >> 0x10) & bVar32,
                                      CONCAT11((byte)((ulong)lVar115 >> 8) & bVar31,
                                               (byte)lVar115 & bVar16)));
    auVar22._0_8_ =
         CONCAT17((byte)((ulong)lVar115 >> 0x38) & bVar41,
                  CONCAT16((byte)((ulong)lVar115 >> 0x30) & bVar40,
                           CONCAT15((byte)((ulong)lVar115 >> 0x28) & bVar39,
                                    CONCAT14((byte)((ulong)lVar115 >> 0x20) & bVar34,fVar35))));
    auVar22[8] = (byte)lVar116 & bVar42;
    auVar22[9] = (byte)((ulong)lVar116 >> 8) & bVar47;
    auVar22[10] = (byte)((ulong)lVar116 >> 0x10) & bVar48;
    auVar22[0xb] = (byte)((ulong)lVar116 >> 0x18) & bVar49;
    auVar28[0xc] = (byte)((ulong)lVar116 >> 0x20) & bVar50;
    auVar28._0_12_ = auVar22;
    auVar28[0xd] = (byte)((ulong)lVar116 >> 0x28) & bVar54;
    auVar28[0xe] = (byte)((ulong)lVar116 >> 0x30) & bVar55;
    auVar28[0xf] = (byte)((ulong)lVar116 >> 0x38) & bVar56;
    uVar59 = NEON_ext(auVar22._0_8_,auVar22._0_8_,4,1);
    uVar72 = a64_TBL(ZEXT816(0),auVar28,uVar72);
    uVar89 = a64_TBL(ZEXT816(0),auVar28,uVar89);
    uVar88 = a64_TBL(ZEXT816(0),auVar28,uVar12);
    fVar103 = (float)uVar88;
    fVar43 = (float)uVar59 * (float)uVar59;
    fVar51 = (float)((ulong)uVar59 >> 0x20);
    fVar51 = fVar51 * fVar51;
    fVar85 = (float)uVar72;
    fVar86 = (float)((ulong)uVar72 >> 0x20);
    fVar70 = (float)uVar89 * (float)uVar89;
    fVar58 = (float)((ulong)uVar89 >> 0x20);
    fVar58 = fVar58 * fVar58;
    fVar102 = (float)((ulong)uVar88 >> 0x20);
    fVar15 = fVar15 - (fVar43 + fVar43 + fVar70 + fVar70);
    fVar57 = fVar57 - (fVar51 + fVar51 + fVar58 + fVar58);
    uVar105 = (undefined1)((uint)fVar57 >> 8);
    uVar106 = (undefined1)((uint)fVar57 >> 0x10);
    uVar107 = (undefined1)((uint)fVar57 >> 0x18);
    fVar37 = fVar37 - (fVar85 * fVar85 + fVar85 * fVar85 + fVar103 * fVar103 + fVar103 * fVar103);
    uVar108 = (undefined1)((uint)fVar37 >> 8);
    uVar109 = (undefined1)((uint)fVar37 >> 0x10);
    uVar110 = (undefined1)((uint)fVar37 >> 0x18);
    fVar45 = fVar45 - (fVar86 * fVar86 + fVar86 * fVar86 + fVar102 * fVar102 + fVar102 * fVar102);
    uVar111 = (undefined1)((uint)fVar45 >> 8);
    uVar112 = (undefined1)((uint)fVar45 >> 0x10);
    uVar113 = (undefined1)((uint)fVar45 >> 0x18);
    uVar88 = a64_TBL(ZEXT816(0),auVar28,uVar13);
    fVar35 = (float)uVar88 * fVar35;
    fVar84 = (float)((ulong)uVar88 >> 0x20) * (float)((ulong)auVar22._0_8_ >> 0x20);
    fVar85 = fVar85 * auVar22._8_4_;
    fVar86 = fVar86 * auVar28._12_4_;
    uVar88 = a64_TBL(ZEXT816(0),auVar28,uVar114);
    fVar35 = fVar35 + fVar35;
    fVar84 = fVar84 + fVar84;
    fVar85 = fVar85 + fVar85;
    fVar86 = fVar86 + fVar86;
    fVar58 = (float)((ulong)lVar116 >> 0x20);
    fVar43 = (float)uVar88 * fVar58;
    fVar51 = (float)((ulong)uVar88 >> 0x20) * fVar58;
    fVar43 = fVar43 + fVar43;
    fVar51 = fVar51 + fVar51;
    fVar70 = fVar103 * fVar58 + fVar103 * fVar58;
    fVar58 = fVar102 * fVar58 + fVar102 * fVar58;
    auVar80._0_4_ = fVar35 + fVar43;
    auVar80._4_4_ = fVar84 + fVar51;
    auVar80._8_4_ = fVar85 + fVar70;
    auVar80._12_4_ = fVar86 + fVar58;
    auVar97._0_4_ = fVar35 - fVar43;
    auVar97._4_4_ = fVar84 - fVar51;
    auVar97._8_4_ = fVar85 - fVar70;
    auVar97._12_4_ = fVar86 - fVar58;
    uVar114 = a64_TBL(ZEXT816(0),auVar80,auVar97,DAT_0388a898);
    uVar88 = a64_TBL(ZEXT816(0),auVar80,auVar97,DAT_0388a5e8);
    auVar6[4] = SUB41(fVar57,0);
    auVar6._0_4_ = fVar15;
    auVar6[5] = uVar105;
    auVar6[6] = uVar106;
    auVar6[7] = uVar107;
    auVar6[8] = SUB41(fVar37,0);
    auVar6[9] = uVar108;
    auVar6[10] = uVar109;
    auVar6[0xb] = uVar110;
    auVar6[0xc] = SUB41(fVar45,0);
    auVar6[0xd] = uVar111;
    auVar6[0xe] = uVar112;
    auVar6[0xf] = uVar113;
    auVar8._8_8_ = uVar88;
    auVar8._0_8_ = uVar114;
    uVar89 = a64_TBL(ZEXT816(0),auVar6,auVar8,DAT_0388a640);
    auVar7[4] = SUB41(fVar57,0);
    auVar7._0_4_ = fVar15;
    auVar7[5] = uVar105;
    auVar7[6] = uVar106;
    auVar7[7] = uVar107;
    auVar7[8] = SUB41(fVar37,0);
    auVar7[9] = uVar108;
    auVar7[10] = uVar109;
    auVar7[0xb] = uVar110;
    auVar7[0xc] = SUB41(fVar45,0);
    auVar7[0xd] = uVar111;
    auVar7[0xe] = uVar112;
    auVar7[0xf] = uVar113;
    auVar9._8_8_ = uVar88;
    auVar9._0_8_ = uVar114;
    uVar88 = a64_TBL(ZEXT816(0),auVar7,auVar9,DAT_0388a7f0);
    fVar51 = (float)uVar89;
    fVar15 = (float)((ulong)uVar89 >> 0x20);
    fVar45 = (float)uVar88;
    fVar57 = (float)((ulong)uVar88 >> 0x20);
    fVar43 = fVar45 * fVar45 + fVar51 * fVar51;
    fVar37 = fVar57 * fVar57 + fVar15 * fVar15;
    fVar35 = fVar43 + fVar37;
    fVar43 = fVar43 + fVar37;
    auVar29._8_8_ = CONCAT44(fVar43,fVar35);
    auVar29._0_8_ = CONCAT44(fVar43,fVar35);
    auVar75 = NEON_frsqrte(auVar29,4);
    auVar98._0_4_ = auVar75._0_4_ * fVar35;
    auVar98._4_4_ = auVar75._4_4_ * fVar43;
    auVar98._8_4_ = auVar75._8_4_ * fVar35;
    auVar98._12_4_ = auVar75._12_4_ * fVar43;
    auVar74 = NEON_frsqrts(auVar75,auVar98,4);
    auVar63._0_4_ = auVar75._0_4_ * auVar74._0_4_;
    auVar63._4_4_ = auVar75._4_4_ * auVar74._4_4_;
    auVar63._8_4_ = auVar75._8_4_ * auVar74._8_4_;
    auVar63._12_4_ = auVar75._12_4_ * auVar74._12_4_;
    auVar99._0_4_ = fVar35 * auVar63._0_4_;
    auVar99._4_4_ = fVar43 * auVar63._4_4_;
    auVar99._8_4_ = fVar35 * auVar63._8_4_;
    auVar99._12_4_ = fVar43 * auVar63._12_4_;
    iVar17 = -(uint)(fVar35 == 0.0);
    iVar36 = -(uint)(fVar43 == 0.0);
    iVar44 = -(uint)(fVar35 == 0.0);
    iVar52 = -(uint)(fVar43 == 0.0);
    auVar75 = NEON_frsqrts(auVar63,auVar99,4);
    fVar51 = fVar51 * auVar63._0_4_ * auVar75._0_4_;
    fVar15 = fVar15 * auVar63._4_4_ * auVar75._4_4_;
    fVar45 = fVar45 * auVar63._8_4_ * auVar75._8_4_;
    fVar57 = fVar57 * auVar63._12_4_ * auVar75._12_4_;
    fVar35 = (float)CONCAT13((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                             CONCAT12((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                      CONCAT11((byte)((uint)fVar51 >> 8) &
                                               ~(byte)((uint)iVar17 >> 8),
                                               SUB41(fVar51,0) & ~(byte)iVar17)));
    auVar23._0_8_ =
         CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                  CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                           CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar36 >> 8),
                                    CONCAT14(SUB41(fVar15,0) & ~(byte)iVar36,fVar35))));
    auVar23[8] = SUB41(fVar45,0) & ~(byte)iVar44;
    auVar23[9] = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar44 >> 8);
    auVar23[10] = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10);
    auVar23[0xb] = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18);
    auVar30[0xc] = SUB41(fVar57,0) & ~(byte)iVar52;
    auVar30._0_12_ = auVar23;
    auVar30[0xd] = (byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar52 >> 8);
    auVar30[0xe] = (byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
    auVar30[0xf] = (byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
    auVar64._0_4_ = fVar35 * fVar35;
    fVar43 = (float)((ulong)auVar23._0_8_ >> 0x20);
    auVar64._4_4_ = fVar43 * fVar43;
    fVar51 = auVar23._8_4_;
    auVar64._8_4_ = fVar51 * fVar51;
    fVar37 = auVar30._12_4_;
    auVar64._12_4_ = fVar37 * fVar37;
    auVar75 = NEON_ext(auVar64,auVar64,8,1);
    fVar57 = auVar75._0_4_ + auVar64._0_4_;
    fVar45 = auVar75._4_4_ + auVar64._4_4_;
    fVar15 = fVar57 + fVar45;
    fVar57 = fVar57 + fVar45;
    auVar65._8_8_ = CONCAT44(fVar57,fVar15);
    auVar65._0_8_ = CONCAT44(fVar57,fVar15);
    auVar75 = NEON_frsqrte(auVar65,4);
    auVar100._0_4_ = auVar75._0_4_ * fVar15;
    auVar100._4_4_ = auVar75._4_4_ * fVar57;
    auVar100._8_4_ = auVar75._8_4_ * fVar15;
    auVar100._12_4_ = auVar75._12_4_ * fVar57;
    auVar74 = NEON_frsqrts(auVar75,auVar100,4);
    auVar81._0_4_ = auVar75._0_4_ * auVar74._0_4_;
    auVar81._4_4_ = auVar75._4_4_ * auVar74._4_4_;
    auVar81._8_4_ = auVar75._8_4_ * auVar74._8_4_;
    auVar81._12_4_ = auVar75._12_4_ * auVar74._12_4_;
    auVar101._0_4_ = fVar15 * auVar81._0_4_;
    auVar101._4_4_ = fVar57 * auVar81._4_4_;
    auVar101._8_4_ = fVar15 * auVar81._8_4_;
    auVar101._12_4_ = fVar57 * auVar81._12_4_;
    iVar17 = -(uint)(fVar15 == 0.0);
    iVar36 = -(uint)(fVar57 == 0.0);
    iVar44 = -(uint)(fVar15 == 0.0);
    iVar52 = -(uint)(fVar57 == 0.0);
    auVar75 = NEON_frsqrts(auVar81,auVar101,4);
    fVar35 = fVar35 * auVar81._0_4_ * auVar75._0_4_;
    fVar43 = fVar43 * auVar81._4_4_ * auVar75._4_4_;
    fVar51 = fVar51 * auVar81._8_4_ * auVar75._8_4_;
    fVar37 = fVar37 * auVar81._12_4_ * auVar75._12_4_;
    fVar15 = (float)CONCAT13((byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                             CONCAT12((byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                      CONCAT11((byte)((uint)fVar68 >> 8) &
                                               ~(byte)((uint)iVar19 >> 8),
                                               SUB41(fVar68,0) & ~(byte)iVar19)));
    uVar88 = CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                      CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                               CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                        CONCAT14(SUB41(fVar18,0) & ~(byte)iVar38,fVar15))));
    auVar11[8] = SUB41(fVar69,0) & ~(byte)iVar46;
    auVar11._0_8_ = uVar88;
    auVar11[9] = (byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar46 >> 8);
    auVar11[10] = (byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
    auVar11[0xb] = (byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
    auVar10[0xc] = SUB41(fVar83,0) & ~(byte)iVar53;
    auVar10._0_12_ = auVar11;
    auVar10[0xd] = (byte)((uint)fVar83 >> 8) & ~(byte)((uint)iVar53 >> 8);
    auVar10[0xe] = (byte)((uint)fVar83 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
    auVar10[0xf] = (byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
    uStack_5c = (float)((ulong)auVar73._0_8_ >> 0x20);
    uStack_58 = auVar73._8_4_;
    uStack_54 = auVar79._12_4_;
    auVar82._0_4_ = fVar67 * fVar15;
    auVar82._4_4_ = uStack_5c * (float)((ulong)uVar88 >> 0x20);
    auVar82._8_4_ = uStack_58 * auVar11._8_4_;
    auVar82._12_4_ = uStack_54 * auVar10._12_4_;
    NEON_ext(auVar82,auVar82,8,1);
    FUN_0095d8f0();
    auVar66._0_4_ =
         fVar67 * (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                                  CONCAT12((byte)((uint)fVar35 >> 0x10) &
                                           ~(byte)((uint)iVar17 >> 0x10),
                                           CONCAT11((byte)((uint)fVar35 >> 8) &
                                                    ~(byte)((uint)iVar17 >> 8),
                                                    SUB41(fVar35,0) & ~(byte)iVar17)));
    auVar66._4_4_ =
         uStack_5c *
         (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                         CONCAT12((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                  CONCAT11((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar36 >> 8),
                                           SUB41(fVar43,0) & ~(byte)iVar36)));
    auVar66._8_4_ =
         uStack_58 *
         (float)CONCAT13((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                         CONCAT12((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10),
                                  CONCAT11((byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar44 >> 8),
                                           SUB41(fVar51,0) & ~(byte)iVar44)));
    auVar66._12_4_ =
         uStack_54 *
         (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18),
                         CONCAT12((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10),
                                  CONCAT11((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar52 >> 8),
                                           SUB41(fVar37,0) & ~(byte)iVar52)));
    NEON_ext(auVar66,auVar66,8,1);
  }
  return;
}


