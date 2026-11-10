/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01361aa0; name: FUN_01361aa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01361aa0(long param_1)

{
  unkbyte9 *pVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long *plVar41;
  long *plVar42;
  undefined8 uVar43;
  long lVar44;
  byte bVar45;
  byte bVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined8 uVar67;
  float fVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  float fVar72;
  float fVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  long *local_38;
  undefined1 auStack_28 [8];
  
  plVar41 = (long *)FUN_009ae864(auStack_28,*(undefined8 *)(param_1 + 0xb0));
  if (plVar41 != (long *)0x0) {
    lVar44 = plVar41[0xb];
    if (*(undefined8 **)(lVar44 + 0x18) == (undefined8 *)0x0) goto LAB_01361dc8;
    if (*(long *)(lVar44 + 0x10) == 0) {
      uVar43 = (**(code **)**(undefined8 **)(lVar44 + 0x18))();
      *(undefined8 *)(lVar44 + 0x10) = uVar43;
    }
    piVar2 = (int *)(lVar44 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar42 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (plVar42 != (long *)0x0) {
    lVar44 = plVar42[0xb];
    piVar2 = (int *)(lVar44 + 0xc);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar44 + 0x18) = 0;
      (**(code **)(*plVar42 + 0x20))();
    }
  }
  *(long **)(param_1 + 0xa8) = plVar41;
  local_38 = plVar41;
  if (plVar41 != (long *)0x0) {
    lVar44 = plVar41[0xb];
    if (*(undefined8 **)(lVar44 + 0x18) == (undefined8 *)0x0) {
LAB_01361dc8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar44 + 0x10) == 0) {
      uVar43 = (**(code **)**(undefined8 **)(lVar44 + 0x18))();
      *(undefined8 *)(lVar44 + 0x10) = uVar43;
    }
    piVar2 = (int *)(lVar44 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_00da9be0(&local_38,param_1 + 0x168);
  if (local_38 != (long *)0x0) {
    lVar44 = local_38[0xb];
    piVar2 = (int *)(lVar44 + 0xc);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar44 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  lVar44 = FUN_0134ee74(*(long *)(param_1 + 0xa8),*(undefined8 *)(*(long *)(param_1 + 0xa8) + 8),
                        &DAT_0393acb9);
  *(undefined4 *)(lVar44 + 0x230) = 0;
  fVar66 = *(float *)PTR_FloatPi_04372cf0;
  fVar54 = *(float *)PTR_FloatDegree180_04372ce0;
  *(undefined4 *)(lVar44 + 0x240) = 0x3fe38e39;
  *(float *)(lVar44 + 0x23c) = (fVar66 / fVar54) * 30.0;
  *(undefined8 *)(lVar44 + 0x234) = 0x45bb80003e23d70a;
  uVar40 = DAT_0388a148;
  uVar39 = DAT_0388a140;
  pVar1 = (unkbyte9 *)(lVar44 + 0x350);
  uVar43 = *(undefined8 *)(lVar44 + 0x358);
  uVar47 = (undefined1)((ulong)uVar43 >> 8);
  uVar48 = (undefined1)((ulong)uVar43 >> 0x10);
  uVar49 = (undefined1)((ulong)uVar43 >> 0x18);
  uVar50 = (undefined1)((ulong)uVar43 >> 0x20);
  uVar51 = (undefined1)((ulong)uVar43 >> 0x28);
  uVar52 = (undefined1)((ulong)uVar43 >> 0x30);
  uVar53 = (undefined1)((ulong)uVar43 >> 0x38);
  fVar66 = (float)*(undefined8 *)pVar1;
  fVar58 = fVar66 * (float)_DAT_03889ac0;
  fVar54 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
  fVar60 = fVar54 * (float)((ulong)_DAT_03889ac0 >> 0x20);
  fVar62 = (float)uVar43 * (float)_UNK_03889ac8;
  fVar64 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)_UNK_03889ac8 >> 0x20);
  auVar15._8_8_ = DAT_0388a148;
  auVar15._0_8_ = DAT_0388a140;
  uVar43 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a580);
  fVar68 = (float)((ulong)uVar43 >> 0x20);
  auVar18._4_4_ = fVar60;
  auVar18._0_4_ = fVar58;
  auVar18._8_4_ = fVar62;
  auVar18._12_4_ = fVar64;
  uVar69 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a6c8);
  auVar16._8_8_ = DAT_0388a148;
  auVar16._0_8_ = DAT_0388a140;
  uVar67 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a680);
  auVar19._4_4_ = fVar60;
  auVar19._0_4_ = fVar58;
  auVar19._8_4_ = fVar62;
  auVar19._12_4_ = fVar64;
  uVar17 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a580);
  fVar72 = (float)((ulong)DAT_0388a7e8 >> 0x20);
  fVar57 = (float)((ulong)uVar67 >> 0x20);
  auVar20._4_4_ = fVar60;
  auVar20._0_4_ = fVar58;
  auVar20._8_4_ = fVar62;
  auVar20._12_4_ = fVar64;
  uVar70 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a680);
  auVar21._4_4_ = fVar60;
  auVar21._0_4_ = fVar58;
  auVar21._8_4_ = fVar62;
  auVar21._12_4_ = fVar64;
  uVar75 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a880);
  auVar22._4_4_ = fVar60;
  auVar22._0_4_ = fVar58;
  auVar22._8_4_ = fVar62;
  auVar22._12_4_ = fVar64;
  uVar76 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a790);
  auVar23._4_4_ = fVar60;
  auVar23._0_4_ = fVar58;
  auVar23._8_4_ = fVar58;
  auVar23._12_4_ = fVar60;
  uVar56 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a648);
  auVar24._8_8_ = DAT_0388a148;
  auVar24._0_8_ = DAT_0388a140;
  uVar74 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a880);
  fVar73 = (float)((ulong)uVar74 >> 0x20);
  fVar63 = (float)_UNK_03889ad8;
  fVar65 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  fVar59 = (float)_DAT_03889ad0;
  fVar61 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  auVar6[9] = uVar47;
  auVar6._0_9_ = *pVar1;
  auVar6[10] = uVar48;
  auVar6[0xb] = uVar49;
  auVar6[0xc] = uVar50;
  auVar6[0xd] = uVar51;
  auVar6[0xe] = uVar52;
  auVar6[0xf] = uVar53;
  uVar71 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a580);
  fVar55 = (fVar58 * (float)uVar43 + fVar59 * (float)uVar17 * (float)DAT_0388a7e8 +
           fVar59 * (float)uVar74 * (float)uVar70) - (float)uVar67 * (float)uVar75;
  fVar60 = (fVar60 * fVar68 + fVar61 * (float)((ulong)uVar17 >> 0x20) * fVar72 +
           fVar61 * fVar73 * (float)((ulong)uVar70 >> 0x20)) -
           fVar57 * (float)((ulong)uVar75 >> 0x20);
  fVar62 = (fVar62 * (float)uVar43 + fVar63 * (float)uVar67 * (float)uVar69 +
           fVar63 * (float)uVar56 * (float)DAT_0388a7e8) - (float)uVar74 * (float)uVar76;
  fVar64 = (fVar64 * fVar68 + fVar65 * fVar57 * (float)((ulong)uVar69 >> 0x20) +
           fVar65 * (float)((ulong)uVar56 >> 0x20) * fVar72) -
           fVar73 * (float)((ulong)uVar76 >> 0x20);
  fVar72 = (float)((ulong)uVar71 >> 0x20);
  auVar7[9] = uVar47;
  auVar7._0_9_ = *pVar1;
  auVar7[10] = uVar48;
  auVar7[0xb] = uVar49;
  auVar7[0xc] = uVar50;
  auVar7[0xd] = uVar51;
  auVar7[0xe] = uVar52;
  auVar7[0xf] = uVar53;
  uVar75 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
  auVar9._4_4_ = fVar60;
  auVar9._0_4_ = fVar55;
  auVar9._8_4_ = fVar62;
  auVar9._12_4_ = fVar64;
  uVar67 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a580);
  auVar10._4_4_ = fVar60;
  auVar10._0_4_ = fVar55;
  auVar10._8_4_ = fVar62;
  auVar10._12_4_ = fVar64;
  uVar70 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a6c8);
  fVar73 = (float)((ulong)uVar75 >> 0x20);
  auVar11._4_4_ = fVar60;
  auVar11._0_4_ = fVar55;
  auVar11._8_4_ = fVar62;
  auVar11._12_4_ = fVar64;
  uVar56 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a680);
  auVar12._4_4_ = fVar60;
  auVar12._0_4_ = fVar55;
  auVar12._8_4_ = fVar62;
  auVar12._12_4_ = fVar64;
  uVar74 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a790);
  auVar13._4_4_ = fVar60;
  auVar13._0_4_ = fVar55;
  auVar13._8_4_ = fVar62;
  auVar13._12_4_ = fVar64;
  uVar69 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a880);
  auVar8[9] = uVar47;
  auVar8._0_9_ = *pVar1;
  auVar8[10] = uVar48;
  auVar8[0xb] = uVar49;
  auVar8[0xc] = uVar50;
  auVar8[0xd] = uVar51;
  auVar8[0xe] = uVar52;
  auVar8[0xf] = uVar53;
  uVar17 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a880);
  fVar57 = (float)((ulong)uVar17 >> 0x20);
  auVar14._4_4_ = fVar60;
  auVar14._0_4_ = fVar55;
  auVar14._8_4_ = fVar55;
  auVar14._12_4_ = fVar60;
  uVar43 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a648);
  fVar68 = fVar66 * (float)uVar43;
  fVar58 = fVar54 * (float)((ulong)uVar43 >> 0x20);
  bVar46 = (byte)_UNK_038897c8;
  uVar32 = (ulong)_UNK_038897c8 >> 8;
  uVar33 = (ulong)_UNK_038897c8 >> 0x10;
  uVar34 = (ulong)_UNK_038897c8 >> 0x18;
  uVar35 = (ulong)_UNK_038897c8 >> 0x20;
  uVar36 = (ulong)_UNK_038897c8 >> 0x28;
  uVar37 = (ulong)_UNK_038897c8 >> 0x30;
  uVar38 = (ulong)_UNK_038897c8 >> 0x38;
  bVar45 = (byte)_DAT_038897c0;
  uVar25 = (ulong)_DAT_038897c0 >> 8;
  uVar26 = (ulong)_DAT_038897c0 >> 0x10;
  uVar27 = (ulong)_DAT_038897c0 >> 0x18;
  uVar28 = (ulong)_DAT_038897c0 >> 0x20;
  uVar29 = (ulong)_DAT_038897c0 >> 0x28;
  uVar30 = (ulong)_DAT_038897c0 >> 0x30;
  uVar31 = (ulong)_DAT_038897c0 >> 0x38;
  *(ulong *)(lVar44 + 0x380) = *(ulong *)(lVar44 + 0x380) & 0xffffffffffffffe0 | 5;
  fVar66 = ((float)uVar71 * fVar55 + fVar59 * fVar66 * (float)uVar67 +
           fVar59 * (float)uVar17 * (float)uVar56) - (float)uVar75 * (float)uVar69;
  fVar54 = (fVar72 * fVar60 + fVar61 * fVar54 * (float)((ulong)uVar67 >> 0x20) +
           fVar61 * fVar57 * (float)((ulong)uVar56 >> 0x20)) -
           fVar73 * (float)((ulong)uVar69 >> 0x20);
  fVar55 = ((float)uVar71 * fVar62 + fVar63 * (float)uVar75 * (float)uVar70 + fVar63 * fVar68) -
           (float)uVar17 * (float)uVar74;
  fVar68 = (fVar72 * fVar64 + fVar65 * fVar73 * (float)((ulong)uVar70 >> 0x20) +
           fVar65 * (float)(CONCAT17((char)((uint)fVar58 >> 0x18),
                                     CONCAT16((char)((uint)fVar58 >> 0x10),
                                              CONCAT15((char)((uint)fVar58 >> 8),
                                                       CONCAT14(SUB41(fVar58,0),fVar68)))) >> 0x20))
           - fVar57 * (float)((ulong)uVar74 >> 0x20);
  *(ulong *)(lVar44 + 0x318) =
       CONCAT17((byte)((uint)fVar68 >> 0x18) & (byte)uVar38,
                CONCAT16((byte)((uint)fVar68 >> 0x10) & (byte)uVar37,
                         CONCAT15((byte)((uint)fVar68 >> 8) & (byte)uVar36,
                                  CONCAT14(SUB41(fVar68,0) & (byte)uVar35,
                                           CONCAT13((byte)((uint)fVar55 >> 0x18) & (byte)uVar34,
                                                    CONCAT12((byte)((uint)fVar55 >> 0x10) &
                                                             (byte)uVar33,
                                                             CONCAT11((byte)((uint)fVar55 >> 8) &
                                                                      (byte)uVar32,
                                                                      SUB41(fVar55,0) & bVar46))))))
               );
  *(ulong *)(lVar44 + 0x310) =
       CONCAT17((byte)((uint)fVar54 >> 0x18) & (byte)uVar31,
                CONCAT16((byte)((uint)fVar54 >> 0x10) & (byte)uVar30,
                         CONCAT15((byte)((uint)fVar54 >> 8) & (byte)uVar29,
                                  CONCAT14(SUB41(fVar54,0) & (byte)uVar28,
                                           CONCAT13((byte)((uint)fVar66 >> 0x18) & (byte)uVar27,
                                                    CONCAT12((byte)((uint)fVar66 >> 0x10) &
                                                             (byte)uVar26,
                                                             CONCAT11((byte)((uint)fVar66 >> 8) &
                                                                      (byte)uVar25,
                                                                      SUB41(fVar66,0) & bVar45))))))
               );
  (**(code **)(*(long *)(lVar44 + 0x208) + 0x10))(lVar44 + 0x208);
  (**(code **)(*(long *)(lVar44 + 0x208) + 0x18))(lVar44 + 0x208);
  uVar67 = _UNK_03889a38;
  uVar56 = _DAT_03889a30;
  uVar17 = _UNK_038898f8;
  uVar43 = _DAT_038898f0;
  *(undefined8 *)(lVar44 + 0x318) = uVar40;
  *(undefined8 *)(lVar44 + 0x310) = uVar39;
  *(undefined8 *)(lVar44 + 0x328) = uVar17;
  *(undefined8 *)(lVar44 + 800) = uVar43;
  *(undefined8 *)(lVar44 + 0x338) = uVar67;
  *(undefined8 *)(lVar44 + 0x330) = uVar56;
  FUN_02a925c8(lVar44);
  return;
}


