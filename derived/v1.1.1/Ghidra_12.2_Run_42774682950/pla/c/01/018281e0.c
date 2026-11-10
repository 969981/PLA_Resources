/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018281e0; name: FUN_018281e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018281e0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined1 uVar26;
  byte bVar27;
  undefined1 uVar28;
  byte bVar29;
  undefined1 uVar30;
  byte bVar31;
  undefined1 uVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar47;
  undefined8 uVar44;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined8 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  char local_40;
  undefined7 uStack_3f;
  long *local_18;
  
  if ((*(long *)(param_1 + 600) != 0) &&
     (FUN_0182b7ac(&local_18,*(long *)(param_1 + 600)), local_18 != (long *)0x0)) {
    FUN_01817868(local_18);
    FUN_018172bc(&local_40,local_18);
    plVar18 = local_18;
    if (local_40 == '\0') {
      FUN_009c69bc(&local_40,param_1);
      plVar17 = (long *)CONCAT71(uStack_3f,local_40);
      lVar10 = plVar17[0x19];
      lVar20 = plVar17[0x18];
      if (plVar17 != (long *)0x0) {
        lVar19 = plVar17[0xb];
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))();
        }
      }
      bVar21 = (byte)lVar20 & (byte)_DAT_038897c0;
      bVar22 = (byte)((ulong)lVar20 >> 8) & (byte)((ulong)_DAT_038897c0 >> 8);
      bVar23 = (byte)((ulong)lVar20 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x10);
      bVar24 = (byte)((ulong)lVar20 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18);
      bVar25 = (byte)((ulong)lVar20 >> 0x20) & (byte)((ulong)_DAT_038897c0 >> 0x20);
      bVar27 = (byte)((ulong)lVar20 >> 0x28) & (byte)((ulong)_DAT_038897c0 >> 0x28);
      bVar29 = (byte)((ulong)lVar20 >> 0x30) & (byte)((ulong)_DAT_038897c0 >> 0x30);
      bVar31 = (byte)((ulong)lVar20 >> 0x38) & (byte)((ulong)_DAT_038897c0 >> 0x38);
      bVar33 = (byte)lVar10 & (byte)_UNK_038897c8;
      bVar34 = (byte)((ulong)lVar10 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
      bVar35 = (byte)((ulong)lVar10 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
      bVar36 = (byte)((ulong)lVar10 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
      bVar37 = (byte)((ulong)lVar10 >> 0x20) & (byte)((ulong)_UNK_038897c8 >> 0x20);
      bVar38 = (byte)((ulong)lVar10 >> 0x28) & (byte)((ulong)_UNK_038897c8 >> 0x28);
      bVar39 = (byte)((ulong)lVar10 >> 0x30) & (byte)((ulong)_UNK_038897c8 >> 0x30);
      bVar40 = (byte)((ulong)lVar10 >> 0x38) & (byte)((ulong)_UNK_038897c8 >> 0x38);
      uVar43 = NEON_ext(CONCAT17(bVar31,CONCAT16(bVar29,CONCAT15(bVar27,CONCAT14(bVar25,CONCAT13(
                                                  bVar24,CONCAT12(bVar23,CONCAT11(bVar22,bVar21)))))
                                                )),
                        CONCAT17(bVar31,CONCAT16(bVar29,CONCAT15(bVar27,CONCAT14(bVar25,CONCAT13(
                                                  bVar24,CONCAT12(bVar23,CONCAT11(bVar22,bVar21)))))
                                                )),4,1);
      auVar45[1] = bVar22;
      auVar45[0] = bVar21;
      auVar45[2] = bVar23;
      auVar45[3] = bVar24;
      auVar45[4] = bVar25;
      auVar45[5] = bVar27;
      auVar45[6] = bVar29;
      auVar45[7] = bVar31;
      auVar45[8] = bVar33;
      auVar45[9] = bVar34;
      auVar45[10] = bVar35;
      auVar45[0xb] = bVar36;
      auVar45[0xc] = bVar37;
      auVar45[0xd] = bVar38;
      auVar45[0xe] = bVar39;
      auVar45[0xf] = bVar40;
      uVar44 = a64_TBL(ZEXT816(0),auVar45,DAT_0388a6f0);
      auVar59[1] = bVar22;
      auVar59[0] = bVar21;
      auVar59[2] = bVar23;
      auVar59[3] = bVar24;
      auVar59[4] = bVar25;
      auVar59[5] = bVar27;
      auVar59[6] = bVar29;
      auVar59[7] = bVar31;
      auVar59[8] = bVar33;
      auVar59[9] = bVar34;
      auVar59[10] = bVar35;
      auVar59[0xb] = bVar36;
      auVar59[0xc] = bVar37;
      auVar59[0xd] = bVar38;
      auVar59[0xe] = bVar39;
      auVar59[0xf] = bVar40;
      uVar56 = a64_TBL(ZEXT816(0),auVar59,DAT_0388a5e0);
      auVar5[1] = bVar22;
      auVar5[0] = bVar21;
      auVar5[2] = bVar23;
      auVar5[3] = bVar24;
      auVar5[4] = bVar25;
      auVar5[5] = bVar27;
      auVar5[6] = bVar29;
      auVar5[7] = bVar31;
      auVar5[8] = bVar33;
      auVar5[9] = bVar34;
      auVar5[10] = bVar35;
      auVar5[0xb] = bVar36;
      auVar5[0xc] = bVar37;
      auVar5[0xd] = bVar38;
      auVar5[0xe] = bVar39;
      auVar5[0xf] = bVar40;
      uVar62 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a6d8);
      fVar41 = (float)uVar43 * (float)uVar43;
      fVar47 = (float)((ulong)uVar43 >> 0x20);
      fVar47 = fVar47 * fVar47;
      fVar49 = (float)uVar44;
      fVar50 = (float)((ulong)uVar44 >> 0x20);
      fVar55 = (float)uVar56 * (float)uVar56;
      fVar61 = (float)((ulong)uVar56 >> 0x20);
      fVar61 = fVar61 * fVar61;
      fVar51 = (float)uVar62;
      fVar52 = (float)((ulong)uVar62 >> 0x20);
      fVar63 = (float)_DAT_03888fc0 - (fVar41 + fVar41 + fVar55 + fVar55);
      fVar64 = (float)((ulong)_DAT_03888fc0 >> 0x20) - (fVar47 + fVar47 + fVar61 + fVar61);
      fVar65 = (float)_UNK_03888fc8 -
               (fVar49 * fVar49 + fVar49 * fVar49 + fVar51 * fVar51 + fVar51 * fVar51);
      fVar66 = (float)((ulong)_UNK_03888fc8 >> 0x20) -
               (fVar50 * fVar50 + fVar50 * fVar50 + fVar52 * fVar52 + fVar52 * fVar52);
      auVar6[1] = bVar22;
      auVar6[0] = bVar21;
      auVar6[2] = bVar23;
      auVar6[3] = bVar24;
      auVar6[4] = bVar25;
      auVar6[5] = bVar27;
      auVar6[6] = bVar29;
      auVar6[7] = bVar31;
      auVar6[8] = bVar33;
      auVar6[9] = bVar34;
      auVar6[10] = bVar35;
      auVar6[0xb] = bVar36;
      auVar6[0xc] = bVar37;
      auVar6[0xd] = bVar38;
      auVar6[0xe] = bVar39;
      auVar6[0xf] = bVar40;
      uVar44 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a880);
      fVar42 = (float)uVar44 * (float)CONCAT13(bVar24,CONCAT12(bVar23,CONCAT11(bVar22,bVar21)));
      fVar48 = (float)((ulong)uVar44 >> 0x20) *
               (float)CONCAT13(bVar31,CONCAT12(bVar29,CONCAT11(bVar27,bVar25)));
      fVar49 = fVar49 * (float)CONCAT13(bVar36,CONCAT12(bVar35,CONCAT11(bVar34,bVar33)));
      fVar50 = fVar50 * (float)CONCAT13(bVar40,CONCAT12(bVar39,CONCAT11(bVar38,bVar37)));
      auVar7[1] = bVar22;
      auVar7[0] = bVar21;
      auVar7[2] = bVar23;
      auVar7[3] = bVar24;
      auVar7[4] = bVar25;
      auVar7[5] = bVar27;
      auVar7[6] = bVar29;
      auVar7[7] = bVar31;
      auVar7[8] = bVar33;
      auVar7[9] = bVar34;
      auVar7[10] = bVar35;
      auVar7[0xb] = bVar36;
      auVar7[0xc] = bVar37;
      auVar7[0xd] = bVar38;
      auVar7[0xe] = bVar39;
      auVar7[0xf] = bVar40;
      uVar44 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
      fVar42 = fVar42 + fVar42;
      fVar48 = fVar48 + fVar48;
      fVar49 = fVar49 + fVar49;
      fVar50 = fVar50 + fVar50;
      fVar61 = (float)((ulong)lVar10 >> 0x20);
      fVar41 = (float)uVar44 * fVar61;
      fVar47 = (float)((ulong)uVar44 >> 0x20) * fVar61;
      fVar41 = fVar41 + fVar41;
      fVar47 = fVar47 + fVar47;
      fVar55 = fVar51 * fVar61 + fVar51 * fVar61;
      fVar61 = fVar52 * fVar61 + fVar52 * fVar61;
      fVar51 = fVar42 + fVar41;
      fVar52 = fVar48 + fVar47;
      fVar53 = fVar49 + fVar55;
      fVar54 = fVar50 + fVar61;
      auVar57._0_4_ = fVar42 - fVar41;
      auVar57._4_4_ = fVar48 - fVar47;
      auVar57._8_4_ = fVar49 - fVar55;
      auVar57._12_4_ = fVar50 - fVar61;
      auVar11._4_4_ = fVar52;
      auVar11._0_4_ = fVar51;
      auVar11._8_4_ = fVar53;
      auVar11._12_4_ = fVar54;
      uVar56 = a64_TBL(ZEXT816(0),auVar11,auVar57,DAT_0388a758);
      auVar12._4_4_ = fVar52;
      auVar12._0_4_ = fVar51;
      auVar12._8_4_ = fVar53;
      auVar12._12_4_ = fVar54;
      uVar44 = a64_TBL(ZEXT816(0),auVar12,auVar57,DAT_0388a720);
      auVar13._4_4_ = fVar64;
      auVar13._0_4_ = fVar63;
      auVar13._8_4_ = fVar65;
      auVar13._12_4_ = fVar66;
      auVar15._8_8_ = uVar44;
      auVar15._0_8_ = uVar56;
      uVar43 = a64_TBL(ZEXT816(0),auVar13,auVar15,DAT_0388a668);
      fVar61 = (float)uVar43;
      auVar14._4_4_ = fVar64;
      auVar14._0_4_ = fVar63;
      auVar14._8_4_ = fVar65;
      auVar14._12_4_ = fVar66;
      auVar16._8_8_ = uVar44;
      auVar16._0_8_ = uVar56;
      uVar44 = a64_TBL(ZEXT816(0),auVar14,auVar16,DAT_0388a5a8);
      fVar41 = (float)((ulong)uVar43 >> 0x20);
      fVar55 = (float)((ulong)uVar44 >> 0x20);
      fVar47 = (float)uVar44 * (float)uVar44 + fVar61 * fVar61;
      fVar41 = fVar55 * fVar55 + fVar41 * fVar41;
      fVar55 = fVar47 + fVar41;
      fVar47 = fVar47 + fVar41;
      uVar26 = SUB41(fVar47,0);
      uVar28 = (undefined1)((uint)fVar47 >> 8);
      uVar30 = (undefined1)((uint)fVar47 >> 0x10);
      uVar32 = (undefined1)((uint)fVar47 >> 0x18);
      auVar8[4] = uVar26;
      auVar8._0_4_ = fVar55;
      auVar8[5] = uVar28;
      auVar8[6] = uVar30;
      auVar8[7] = uVar32;
      auVar8[8] = SUB41(fVar55,0);
      auVar8[9] = (char)((uint)fVar55 >> 8);
      auVar8[10] = (char)((uint)fVar55 >> 0x10);
      auVar8[0xb] = (char)((uint)fVar55 >> 0x18);
      auVar8[0xc] = uVar26;
      auVar8[0xd] = uVar28;
      auVar8[0xe] = uVar30;
      auVar8[0xf] = uVar32;
      auVar45 = NEON_frsqrte(auVar8,4);
      auVar58._0_4_ = auVar45._0_4_ * fVar55;
      auVar58._4_4_ = auVar45._4_4_ * fVar47;
      auVar58._8_4_ = auVar45._8_4_ * fVar55;
      uVar9 = (undefined2)(CONCAT15(uVar28,CONCAT14(uVar26,fVar55)) >> 0x20);
      auVar58._12_4_ = auVar45._12_4_ * (float)CONCAT13(uVar32,CONCAT12(uVar30,uVar9));
      auVar59 = NEON_frsqrts(auVar45,auVar58,4);
      auVar46._0_4_ = auVar45._0_4_ * auVar59._0_4_;
      auVar46._4_4_ = auVar45._4_4_ * auVar59._4_4_;
      auVar46._8_4_ = auVar45._8_4_ * auVar59._8_4_;
      auVar46._12_4_ = auVar45._12_4_ * auVar59._12_4_;
      auVar60._0_4_ = fVar55 * auVar46._0_4_;
      auVar60._4_4_ = fVar47 * auVar46._4_4_;
      auVar60._8_4_ = fVar55 * auVar46._8_4_;
      auVar60._12_4_ = (float)CONCAT13(uVar32,CONCAT12(uVar30,uVar9)) * auVar46._12_4_;
      auVar45 = NEON_frsqrts(auVar46,auVar60,4);
      FUN_01816edc(SUB41(fVar61 * auVar46._0_4_ * auVar45._0_4_,0) & ~-(fVar55 == 0.0),plVar18);
    }
    if (local_18 != (long *)0x0) {
      lVar20 = local_18[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))(local_18);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x220) = 0;
  return;
}


