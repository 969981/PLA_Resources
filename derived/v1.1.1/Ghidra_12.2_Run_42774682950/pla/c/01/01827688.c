/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01827688; name: FUN_01827688
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01827688(undefined1 param_1 [16],long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined2 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long lVar15;
  long lVar16;
  float fVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined1 uVar23;
  byte bVar24;
  undefined1 uVar25;
  byte bVar26;
  undefined1 uVar27;
  byte bVar28;
  undefined1 uVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  float fVar44;
  undefined1 auVar42 [16];
  float fVar45;
  float fVar46;
  undefined1 auVar43 [16];
  int iVar47;
  int iVar52;
  undefined8 uVar48;
  int iVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int iVar54;
  undefined1 auVar51 [16];
  float fVar55;
  undefined8 uVar56;
  float fVar63;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  float fVar64;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  long *local_18;
  
  if (*(long *)(param_2 + 600) == 0) {
    local_18 = (long *)0x0;
  }
  else {
    FUN_0182b7ac(&local_18,*(long *)(param_2 + 600));
    if ((local_18 != (long *)0x0) && (FUN_01817130(local_18), local_18 != (long *)0x0)) {
      lVar16 = local_18[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar47 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar47 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar47 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))(local_18);
      }
    }
  }
  fVar39 = param_1._0_4_;
  auVar50._0_4_ = fVar39 * fVar39;
  fVar45 = param_1._4_4_;
  auVar50._4_4_ = fVar45 * fVar45;
  fVar55 = param_1._8_4_;
  auVar50._8_4_ = fVar55 * fVar55;
  fVar62 = param_1._12_4_;
  auVar50._12_4_ = fVar62 * fVar62;
  auVar41 = NEON_ext(auVar50,auVar50,8,1);
  fVar38 = auVar41._0_4_ + auVar50._0_4_;
  fVar44 = auVar41._4_4_ + auVar50._4_4_;
  fVar17 = fVar38 + fVar44;
  fVar38 = fVar38 + fVar44;
  if (fVar17 == 0.0) {
    FUN_009c69bc(&local_18);
    lVar10 = local_18[0x19];
    lVar16 = local_18[0x18];
    if (local_18 != (long *)0x0) {
      lVar15 = local_18[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar47 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar47 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar47 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))();
      }
    }
    bVar18 = (byte)lVar16 & (byte)_DAT_038897c0;
    bVar19 = (byte)((ulong)lVar16 >> 8) & (byte)((ulong)_DAT_038897c0 >> 8);
    bVar20 = (byte)((ulong)lVar16 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x10);
    bVar21 = (byte)((ulong)lVar16 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18);
    bVar22 = (byte)((ulong)lVar16 >> 0x20) & (byte)((ulong)_DAT_038897c0 >> 0x20);
    bVar24 = (byte)((ulong)lVar16 >> 0x28) & (byte)((ulong)_DAT_038897c0 >> 0x28);
    bVar26 = (byte)((ulong)lVar16 >> 0x30) & (byte)((ulong)_DAT_038897c0 >> 0x30);
    bVar28 = (byte)((ulong)lVar16 >> 0x38) & (byte)((ulong)_DAT_038897c0 >> 0x38);
    bVar30 = (byte)lVar10 & (byte)_UNK_038897c8;
    bVar31 = (byte)((ulong)lVar10 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
    bVar32 = (byte)((ulong)lVar10 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
    bVar33 = (byte)((ulong)lVar10 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
    bVar34 = (byte)((ulong)lVar10 >> 0x20) & (byte)((ulong)_UNK_038897c8 >> 0x20);
    bVar35 = (byte)((ulong)lVar10 >> 0x28) & (byte)((ulong)_UNK_038897c8 >> 0x28);
    bVar36 = (byte)((ulong)lVar10 >> 0x30) & (byte)((ulong)_UNK_038897c8 >> 0x30);
    bVar37 = (byte)((ulong)lVar10 >> 0x38) & (byte)((ulong)_UNK_038897c8 >> 0x38);
    uVar40 = NEON_ext(CONCAT17(bVar28,CONCAT16(bVar26,CONCAT15(bVar24,CONCAT14(bVar22,CONCAT13(
                                                  bVar21,CONCAT12(bVar20,CONCAT11(bVar19,bVar18)))))
                                              )),
                      CONCAT17(bVar28,CONCAT16(bVar26,CONCAT15(bVar24,CONCAT14(bVar22,CONCAT13(
                                                  bVar21,CONCAT12(bVar20,CONCAT11(bVar19,bVar18)))))
                                              )),4,1);
    auVar41[1] = bVar19;
    auVar41[0] = bVar18;
    auVar41[2] = bVar20;
    auVar41[3] = bVar21;
    auVar41[4] = bVar22;
    auVar41[5] = bVar24;
    auVar41[6] = bVar26;
    auVar41[7] = bVar28;
    auVar41[8] = bVar30;
    auVar41[9] = bVar31;
    auVar41[10] = bVar32;
    auVar41[0xb] = bVar33;
    auVar41[0xc] = bVar34;
    auVar41[0xd] = bVar35;
    auVar41[0xe] = bVar36;
    auVar41[0xf] = bVar37;
    uVar48 = a64_TBL(ZEXT816(0),auVar41,DAT_0388a6f0);
    auVar4[1] = bVar19;
    auVar4[0] = bVar18;
    auVar4[2] = bVar20;
    auVar4[3] = bVar21;
    auVar4[4] = bVar22;
    auVar4[5] = bVar24;
    auVar4[6] = bVar26;
    auVar4[7] = bVar28;
    auVar4[8] = bVar30;
    auVar4[9] = bVar31;
    auVar4[10] = bVar32;
    auVar4[0xb] = bVar33;
    auVar4[0xc] = bVar34;
    auVar4[0xd] = bVar35;
    auVar4[0xe] = bVar36;
    auVar4[0xf] = bVar37;
    uVar56 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a5e0);
    auVar5[1] = bVar19;
    auVar5[0] = bVar18;
    auVar5[2] = bVar20;
    auVar5[3] = bVar21;
    auVar5[4] = bVar22;
    auVar5[5] = bVar24;
    auVar5[6] = bVar26;
    auVar5[7] = bVar28;
    auVar5[8] = bVar30;
    auVar5[9] = bVar31;
    auVar5[10] = bVar32;
    auVar5[0xb] = bVar33;
    auVar5[0xc] = bVar34;
    auVar5[0xd] = bVar35;
    auVar5[0xe] = bVar36;
    auVar5[0xf] = bVar37;
    uVar65 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a6d8);
    fVar39 = (float)uVar40 * (float)uVar40;
    fVar45 = (float)((ulong)uVar40 >> 0x20);
    fVar45 = fVar45 * fVar45;
    fVar44 = (float)uVar48;
    fVar46 = (float)((ulong)uVar48 >> 0x20);
    fVar55 = (float)uVar56 * (float)uVar56;
    fVar62 = (float)((ulong)uVar56 >> 0x20);
    fVar62 = fVar62 * fVar62;
    fVar63 = (float)uVar65;
    fVar64 = (float)((ulong)uVar65 >> 0x20);
    fVar66 = (float)_DAT_03888fc0 - (fVar39 + fVar39 + fVar55 + fVar55);
    fVar67 = (float)((ulong)_DAT_03888fc0 >> 0x20) - (fVar45 + fVar45 + fVar62 + fVar62);
    fVar68 = (float)_UNK_03888fc8 -
             (fVar44 * fVar44 + fVar44 * fVar44 + fVar63 * fVar63 + fVar63 * fVar63);
    fVar69 = (float)((ulong)_UNK_03888fc8 >> 0x20) -
             (fVar46 * fVar46 + fVar46 * fVar46 + fVar64 * fVar64 + fVar64 * fVar64);
    auVar6[1] = bVar19;
    auVar6[0] = bVar18;
    auVar6[2] = bVar20;
    auVar6[3] = bVar21;
    auVar6[4] = bVar22;
    auVar6[5] = bVar24;
    auVar6[6] = bVar26;
    auVar6[7] = bVar28;
    auVar6[8] = bVar30;
    auVar6[9] = bVar31;
    auVar6[10] = bVar32;
    auVar6[0xb] = bVar33;
    auVar6[0xc] = bVar34;
    auVar6[0xd] = bVar35;
    auVar6[0xe] = bVar36;
    auVar6[0xf] = bVar37;
    uVar40 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a880);
    fVar17 = (float)uVar40 * (float)CONCAT13(bVar21,CONCAT12(bVar20,CONCAT11(bVar19,bVar18)));
    fVar38 = (float)((ulong)uVar40 >> 0x20) *
             (float)CONCAT13(bVar28,CONCAT12(bVar26,CONCAT11(bVar24,bVar22)));
    fVar44 = fVar44 * (float)CONCAT13(bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar30)));
    fVar46 = fVar46 * (float)CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar35,bVar34)));
    auVar7[1] = bVar19;
    auVar7[0] = bVar18;
    auVar7[2] = bVar20;
    auVar7[3] = bVar21;
    auVar7[4] = bVar22;
    auVar7[5] = bVar24;
    auVar7[6] = bVar26;
    auVar7[7] = bVar28;
    auVar7[8] = bVar30;
    auVar7[9] = bVar31;
    auVar7[10] = bVar32;
    auVar7[0xb] = bVar33;
    auVar7[0xc] = bVar34;
    auVar7[0xd] = bVar35;
    auVar7[0xe] = bVar36;
    auVar7[0xf] = bVar37;
    uVar40 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
    fVar17 = fVar17 + fVar17;
    fVar38 = fVar38 + fVar38;
    fVar44 = fVar44 + fVar44;
    fVar46 = fVar46 + fVar46;
    fVar62 = (float)((ulong)lVar10 >> 0x20);
    fVar39 = (float)uVar40 * fVar62;
    fVar45 = (float)((ulong)uVar40 >> 0x20) * fVar62;
    fVar39 = fVar39 + fVar39;
    fVar45 = fVar45 + fVar45;
    fVar55 = fVar63 * fVar62 + fVar63 * fVar62;
    fVar62 = fVar64 * fVar62 + fVar64 * fVar62;
    auVar51._0_4_ = fVar17 + fVar39;
    auVar51._4_4_ = fVar38 + fVar45;
    auVar51._8_4_ = fVar44 + fVar55;
    auVar51._12_4_ = fVar46 + fVar62;
    auVar59._0_4_ = fVar17 - fVar39;
    auVar59._4_4_ = fVar38 - fVar45;
    auVar59._8_4_ = fVar44 - fVar55;
    auVar59._12_4_ = fVar46 - fVar62;
    uVar56 = a64_TBL(ZEXT816(0),auVar51,auVar59,DAT_0388a758);
    uVar40 = a64_TBL(ZEXT816(0),auVar51,auVar59,DAT_0388a720);
    auVar11._4_4_ = fVar67;
    auVar11._0_4_ = fVar66;
    auVar11._8_4_ = fVar68;
    auVar11._12_4_ = fVar69;
    auVar13._8_8_ = uVar40;
    auVar13._0_8_ = uVar56;
    uVar48 = a64_TBL(ZEXT816(0),auVar11,auVar13,DAT_0388a668);
    auVar12._4_4_ = fVar67;
    auVar12._0_4_ = fVar66;
    auVar12._8_4_ = fVar68;
    auVar12._12_4_ = fVar69;
    auVar14._8_8_ = uVar40;
    auVar14._0_8_ = uVar56;
    uVar40 = a64_TBL(ZEXT816(0),auVar12,auVar14,DAT_0388a5a8);
    fVar39 = (float)uVar48;
    fVar45 = (float)((ulong)uVar48 >> 0x20);
    fVar44 = (float)uVar40;
    fVar17 = (float)((ulong)uVar40 >> 0x20);
    fVar55 = fVar44 * fVar44 + fVar39 * fVar39;
    fVar62 = fVar17 * fVar17 + fVar45 * fVar45;
    fVar38 = fVar55 + fVar62;
    fVar55 = fVar55 + fVar62;
    uVar23 = SUB41(fVar55,0);
    uVar25 = (undefined1)((uint)fVar55 >> 8);
    uVar27 = (undefined1)((uint)fVar55 >> 0x10);
    uVar29 = (undefined1)((uint)fVar55 >> 0x18);
    auVar8[4] = uVar23;
    auVar8._0_4_ = fVar38;
    auVar8[5] = uVar25;
    auVar8[6] = uVar27;
    auVar8[7] = uVar29;
    auVar8[8] = SUB41(fVar38,0);
    auVar8[9] = (char)((uint)fVar38 >> 8);
    auVar8[10] = (char)((uint)fVar38 >> 0x10);
    auVar8[0xb] = (char)((uint)fVar38 >> 0x18);
    auVar8[0xc] = uVar23;
    auVar8[0xd] = uVar25;
    auVar8[0xe] = uVar27;
    auVar8[0xf] = uVar29;
    auVar41 = NEON_frsqrte(auVar8,4);
    auVar60._0_4_ = auVar41._0_4_ * fVar38;
    auVar60._4_4_ = auVar41._4_4_ * fVar55;
    auVar60._8_4_ = auVar41._8_4_ * fVar38;
    uVar9 = (undefined2)(CONCAT15(uVar25,CONCAT14(uVar23,fVar38)) >> 0x20);
    auVar60._12_4_ = auVar41._12_4_ * (float)CONCAT13(uVar29,CONCAT12(uVar27,uVar9));
    auVar50 = NEON_frsqrts(auVar41,auVar60,4);
    auVar43._0_4_ = auVar41._0_4_ * auVar50._0_4_;
    auVar43._4_4_ = auVar41._4_4_ * auVar50._4_4_;
    auVar43._8_4_ = auVar41._8_4_ * auVar50._8_4_;
    auVar43._12_4_ = auVar41._12_4_ * auVar50._12_4_;
    auVar61._0_4_ = fVar38 * auVar43._0_4_;
    auVar61._4_4_ = fVar55 * auVar43._4_4_;
    auVar61._8_4_ = fVar38 * auVar43._8_4_;
    auVar61._12_4_ = (float)CONCAT13(uVar29,CONCAT12(uVar27,uVar9)) * auVar43._12_4_;
    iVar47 = -(uint)(fVar38 == 0.0);
    iVar52 = -(uint)(fVar55 == 0.0);
    iVar53 = -(uint)(fVar38 == 0.0);
    iVar54 = -(uint)((float)CONCAT13(uVar29,CONCAT12(uVar27,uVar9)) == 0.0);
    auVar41 = NEON_frsqrts(auVar43,auVar61,4);
    fVar39 = fVar39 * auVar43._0_4_ * auVar41._0_4_;
    fVar45 = fVar45 * auVar43._4_4_ * auVar41._4_4_;
    fVar44 = fVar44 * auVar43._8_4_ * auVar41._8_4_;
    fVar17 = fVar17 * auVar43._12_4_ * auVar41._12_4_;
    *(ulong *)(param_2 + 0x208) =
         CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                  CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10),
                           CONCAT15((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar54 >> 8),
                                    CONCAT14(SUB41(fVar17,0) & ~(byte)iVar54,
                                             CONCAT13((byte)((uint)fVar44 >> 0x18) &
                                                      ~(byte)((uint)iVar53 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar44 >> 0x10) &
                                                               ~(byte)((uint)iVar53 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar44 >> 8) &
                                                                        ~(byte)((uint)iVar53 >> 8),
                                                                        SUB41(fVar44,0) &
                                                                        ~(byte)iVar53)))))));
    *(ulong *)(param_2 + 0x200) =
         CONCAT17((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18),
                  CONCAT16((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10),
                           CONCAT15((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar52 >> 8),
                                    CONCAT14(SUB41(fVar45,0) & ~(byte)iVar52,
                                             CONCAT13((byte)((uint)fVar39 >> 0x18) &
                                                      ~(byte)((uint)iVar47 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar39 >> 0x10) &
                                                               ~(byte)((uint)iVar47 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar39 >> 8) &
                                                                        ~(byte)((uint)iVar47 >> 8),
                                                                        SUB41(fVar39,0) &
                                                                        ~(byte)iVar47)))))));
    if (*(char *)(param_2 + 0x1f0) == '\0') {
      *(undefined1 *)(param_2 + 0x1f0) = 1;
    }
  }
  else {
    auVar57._8_8_ = CONCAT44(fVar38,fVar17);
    auVar57._0_8_ = CONCAT44(fVar38,fVar17);
    auVar41 = NEON_frsqrte(auVar57,4);
    auVar49._0_4_ = auVar41._0_4_ * fVar17;
    auVar49._4_4_ = auVar41._4_4_ * fVar38;
    auVar49._8_4_ = auVar41._8_4_ * fVar17;
    auVar49._12_4_ = auVar41._12_4_ * fVar38;
    auVar50 = NEON_frsqrts(auVar41,auVar49,4);
    auVar42._0_4_ = auVar41._0_4_ * auVar50._0_4_;
    auVar42._4_4_ = auVar41._4_4_ * auVar50._4_4_;
    auVar42._8_4_ = auVar41._8_4_ * auVar50._8_4_;
    auVar42._12_4_ = auVar41._12_4_ * auVar50._12_4_;
    iVar47 = -(uint)(fVar17 == 0.0);
    iVar52 = -(uint)(fVar38 == 0.0);
    iVar53 = -(uint)(fVar17 == 0.0);
    iVar54 = -(uint)(fVar38 == 0.0);
    auVar58._0_4_ = fVar17 * auVar42._0_4_;
    auVar58._4_4_ = fVar38 * auVar42._4_4_;
    auVar58._8_4_ = fVar17 * auVar42._8_4_;
    auVar58._12_4_ = fVar38 * auVar42._12_4_;
    auVar41 = NEON_frsqrts(auVar42,auVar58,4);
    fVar39 = fVar39 * auVar42._0_4_ * auVar41._0_4_;
    fVar45 = fVar45 * auVar42._4_4_ * auVar41._4_4_;
    fVar55 = fVar55 * auVar42._8_4_ * auVar41._8_4_;
    fVar62 = fVar62 * auVar42._12_4_ * auVar41._12_4_;
    *(ulong *)(param_2 + 0x208) =
         CONCAT17((byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                  CONCAT16((byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10),
                           CONCAT15((byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar54 >> 8),
                                    CONCAT14(SUB41(fVar62,0) & ~(byte)iVar54,
                                             CONCAT13((byte)((uint)fVar55 >> 0x18) &
                                                      ~(byte)((uint)iVar53 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar55 >> 0x10) &
                                                               ~(byte)((uint)iVar53 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar55 >> 8) &
                                                                        ~(byte)((uint)iVar53 >> 8),
                                                                        SUB41(fVar55,0) &
                                                                        ~(byte)iVar53)))))));
    *(ulong *)(param_2 + 0x200) =
         CONCAT17((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18),
                  CONCAT16((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10),
                           CONCAT15((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar52 >> 8),
                                    CONCAT14(SUB41(fVar45,0) & ~(byte)iVar52,
                                             CONCAT13((byte)((uint)fVar39 >> 0x18) &
                                                      ~(byte)((uint)iVar47 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar39 >> 0x10) &
                                                               ~(byte)((uint)iVar47 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar39 >> 8) &
                                                                        ~(byte)((uint)iVar47 >> 8),
                                                                        SUB41(fVar39,0) &
                                                                        ~(byte)iVar47)))))));
    if (*(char *)(param_2 + 0x1f0) == '\0') {
      *(undefined1 *)(param_2 + 0x1f0) = 1;
    }
  }
  return;
}


