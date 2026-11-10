/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad0c64; name: FUN_00ad0c64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00ad0c64(long *param_1)

{
  undefined1 (*pauVar1) [12];
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
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [12];
  ulong uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  undefined1 uVar40;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 auVar41 [16];
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  float fVar68;
  undefined8 uVar69;
  float fVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  float fVar74;
  float fVar75;
  long local_30;
  ulong uStack_28;
  long *local_18;
  
  FUN_009c69bc(&local_18);
  lVar14 = local_18[0x1b];
  lVar12 = local_18[0x1a];
  if (local_18 != (long *)0x0) {
    lVar37 = local_18[0xb];
    piVar2 = (int *)(lVar37 + 0xc);
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
      *(undefined8 *)(lVar37 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))();
    }
  }
  if ((int)param_1[100] == 4) {
    uStack_28 = param_1[0x61];
    local_30 = param_1[0x60];
    uVar36 = (**(code **)(*param_1 + 0x110))(param_1);
    if ((uVar36 & 1) != 0) {
      FUN_009c69bc(&local_18,param_1);
      lVar39 = local_18[0x17];
      lVar37 = local_18[0x16];
      if (local_18 != (long *)0x0) {
        lVar38 = local_18[0xb];
        piVar2 = (int *)(lVar38 + 0xc);
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
          *(undefined8 *)(lVar38 + 0x18) = 0;
          (**(code **)(*local_18 + 0x20))();
        }
      }
      local_30 = CONCAT44((float)((ulong)local_30 >> 0x20) * (float)((ulong)lVar37 >> 0x20),
                          (float)local_30 * (float)lVar37);
      uStack_28 = (ulong)(uint)((float)uStack_28 * (float)lVar39);
    }
    FUN_009c69bc(&local_18,param_1);
    pauVar1 = (undefined1 (*) [12])(local_18 + 0x18);
    lVar37 = local_18[0x19];
    fVar65 = (float)((ulong)lVar37 >> 0x20);
    auVar35 = *pauVar1;
    auVar34 = *pauVar1;
    auVar33 = *pauVar1;
    fVar58 = (float)*(undefined8 *)*pauVar1;
    fVar61 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    if (local_18 != (long *)0x0) {
      lVar39 = local_18[0xb];
      piVar2 = (int *)(lVar39 + 0xc);
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
        *(undefined8 *)(lVar39 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))();
      }
    }
    auVar32._8_8_ = uStack_28;
    auVar32._0_8_ = local_30;
    auVar31._8_8_ = uStack_28;
    auVar31._0_8_ = local_30;
    auVar30._8_8_ = uStack_28;
    auVar30._0_8_ = local_30;
    fVar74 = (float)((ulong)local_30 >> 0x20);
    fVar21 = fVar58 * (float)_DAT_03889ac0;
    fVar24 = fVar61 * (float)((ulong)_DAT_03889ac0 >> 0x20);
    uVar40 = SUB41(fVar24,0);
    uVar42 = (undefined1)((uint)fVar24 >> 8);
    uVar43 = (undefined1)((uint)fVar24 >> 0x10);
    uVar44 = (undefined1)((uint)fVar24 >> 0x18);
    fVar26 = (float)lVar37 * (float)_UNK_03889ac8;
    uVar45 = SUB41(fVar26,0);
    uVar46 = (undefined1)((uint)fVar26 >> 8);
    uVar47 = (undefined1)((uint)fVar26 >> 0x10);
    uVar48 = (undefined1)((uint)fVar26 >> 0x18);
    fVar68 = fVar65 * (float)((ulong)_UNK_03889ac8 >> 0x20);
    uVar49 = SUB41(fVar68,0);
    uVar50 = (undefined1)((uint)fVar68 >> 8);
    uVar51 = (undefined1)((uint)fVar68 >> 0x10);
    uVar52 = (undefined1)((uint)fVar68 >> 0x18);
    uVar13 = a64_TBL(ZEXT816(0),auVar30,DAT_0388a580);
    uVar69 = a64_TBL(ZEXT816(0),auVar31,DAT_0388a680);
    auVar15[4] = uVar40;
    auVar15._0_4_ = fVar21;
    auVar15[5] = uVar42;
    auVar15[6] = uVar43;
    auVar15[7] = uVar44;
    auVar15[8] = uVar45;
    auVar15[9] = uVar46;
    auVar15[10] = uVar47;
    auVar15[0xb] = uVar48;
    auVar15[0xc] = uVar49;
    auVar15[0xd] = uVar50;
    auVar15[0xe] = uVar51;
    auVar15[0xf] = uVar52;
    uVar59 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a580);
    auVar16[4] = uVar40;
    auVar16._0_4_ = fVar21;
    auVar16[5] = uVar42;
    auVar16[6] = uVar43;
    auVar16[7] = uVar44;
    auVar16[8] = uVar45;
    auVar16[9] = uVar46;
    auVar16[10] = uVar47;
    auVar16[0xb] = uVar48;
    auVar16[0xc] = uVar49;
    auVar16[0xd] = uVar50;
    auVar16[0xe] = uVar51;
    auVar16[0xf] = uVar52;
    uVar66 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a6c8);
    auVar17[4] = uVar40;
    auVar17._0_4_ = fVar21;
    auVar17[5] = uVar42;
    auVar17[6] = uVar43;
    auVar17[7] = uVar44;
    auVar17[8] = uVar45;
    auVar17[9] = uVar46;
    auVar17[10] = uVar47;
    auVar17[0xb] = uVar48;
    auVar17[0xc] = uVar49;
    auVar17[0xd] = uVar50;
    auVar17[0xe] = uVar51;
    auVar17[0xf] = uVar52;
    uVar71 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a680);
    fVar70 = (float)((ulong)uVar69 >> 0x20);
    fVar63 = (float)((ulong)uVar13 >> 0x20);
    auVar18[4] = uVar40;
    auVar18._0_4_ = fVar21;
    auVar18[5] = uVar42;
    auVar18[6] = uVar43;
    auVar18[7] = uVar44;
    auVar18[8] = uVar45;
    auVar18[9] = uVar46;
    auVar18[10] = uVar47;
    auVar18[0xb] = uVar48;
    auVar18[0xc] = uVar49;
    auVar18[0xd] = uVar50;
    auVar18[0xe] = uVar51;
    auVar18[0xf] = uVar52;
    uVar72 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a880);
    auVar19[4] = uVar40;
    auVar19._0_4_ = fVar21;
    auVar19[5] = uVar42;
    auVar19[6] = uVar43;
    auVar19[7] = uVar44;
    auVar19[8] = uVar45;
    auVar19[9] = uVar46;
    auVar19[10] = uVar47;
    auVar19[0xb] = uVar48;
    auVar19[0xc] = uVar49;
    auVar19[0xd] = uVar50;
    auVar19[0xe] = uVar51;
    auVar19[0xf] = uVar52;
    uVar73 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a790);
    fVar57 = (float)_DAT_03889ad0;
    fVar60 = (float)((ulong)_DAT_03889ad0 >> 0x20);
    fVar62 = (float)_UNK_03889ad8;
    fVar64 = (float)((ulong)_UNK_03889ad8 >> 0x20);
    auVar20[4] = uVar40;
    auVar20._0_4_ = fVar21;
    auVar20[5] = uVar42;
    auVar20[6] = uVar43;
    auVar20[7] = uVar44;
    auVar20[8] = SUB41(fVar21,0);
    auVar20[9] = (char)((uint)fVar21 >> 8);
    auVar20[10] = (char)((uint)fVar21 >> 0x10);
    auVar20[0xb] = (char)((uint)fVar21 >> 0x18);
    auVar20[0xc] = uVar40;
    auVar20[0xd] = uVar42;
    auVar20[0xe] = uVar43;
    auVar20[0xf] = uVar44;
    uVar23 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a648);
    fVar22 = (float)local_30 * (float)uVar23;
    fVar25 = fVar74 * (float)((ulong)uVar23 >> 0x20);
    uVar67 = a64_TBL(ZEXT816(0),auVar32,DAT_0388a880);
    fVar75 = (float)((ulong)uVar67 >> 0x20);
    auVar27._12_4_ = fVar65;
    auVar27._0_12_ = auVar33;
    uVar23 = a64_TBL(ZEXT816(0),auVar27,DAT_0388a580);
    fVar21 = (fVar21 * (float)uVar13 + fVar57 * (float)local_30 * (float)uVar59 +
             fVar57 * (float)uVar67 * (float)uVar71) - (float)uVar69 * (float)uVar72;
    fVar24 = (fVar24 * fVar63 + fVar60 * fVar74 * (float)((ulong)uVar59 >> 0x20) +
             fVar60 * fVar75 * (float)((ulong)uVar71 >> 0x20)) -
             fVar70 * (float)((ulong)uVar72 >> 0x20);
    uVar40 = SUB41(fVar24,0);
    uVar42 = (undefined1)((uint)fVar24 >> 8);
    uVar43 = (undefined1)((uint)fVar24 >> 0x10);
    uVar44 = (undefined1)((uint)fVar24 >> 0x18);
    fVar26 = (fVar26 * (float)uVar13 + fVar62 * (float)uVar69 * (float)uVar66 + fVar62 * fVar22) -
             (float)uVar67 * (float)uVar73;
    uVar45 = SUB41(fVar26,0);
    uVar46 = (undefined1)((uint)fVar26 >> 8);
    uVar47 = (undefined1)((uint)fVar26 >> 0x10);
    uVar48 = (undefined1)((uint)fVar26 >> 0x18);
    fVar22 = (fVar68 * fVar63 + fVar64 * fVar70 * (float)((ulong)uVar66 >> 0x20) +
             fVar64 * (float)(CONCAT17((char)((uint)fVar25 >> 0x18),
                                       CONCAT16((char)((uint)fVar25 >> 0x10),
                                                CONCAT15((char)((uint)fVar25 >> 8),
                                                         CONCAT14(SUB41(fVar25,0),fVar22)))) >> 0x20
                             )) - fVar75 * (float)((ulong)uVar73 >> 0x20);
    uVar49 = SUB41(fVar22,0);
    uVar50 = (undefined1)((uint)fVar22 >> 8);
    uVar51 = (undefined1)((uint)fVar22 >> 0x10);
    uVar52 = (undefined1)((uint)fVar22 >> 0x18);
    auVar28._12_4_ = fVar65;
    auVar28._0_12_ = auVar34;
    uVar69 = a64_TBL(ZEXT816(0),auVar28,DAT_0388a680);
    auVar6[4] = uVar40;
    auVar6._0_4_ = fVar21;
    auVar6[5] = uVar42;
    auVar6[6] = uVar43;
    auVar6[7] = uVar44;
    auVar6[8] = uVar45;
    auVar6[9] = uVar46;
    auVar6[10] = uVar47;
    auVar6[0xb] = uVar48;
    auVar6[0xc] = uVar49;
    auVar6[0xd] = uVar50;
    auVar6[0xe] = uVar51;
    auVar6[0xf] = uVar52;
    uVar66 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a580);
    auVar7[4] = uVar40;
    auVar7._0_4_ = fVar21;
    auVar7[5] = uVar42;
    auVar7[6] = uVar43;
    auVar7[7] = uVar44;
    auVar7[8] = uVar45;
    auVar7[9] = uVar46;
    auVar7[10] = uVar47;
    auVar7[0xb] = uVar48;
    auVar7[0xc] = uVar49;
    auVar7[0xd] = uVar50;
    auVar7[0xe] = uVar51;
    auVar7[0xf] = uVar52;
    uVar71 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a6c8);
    fVar70 = (float)((ulong)uVar69 >> 0x20);
    fVar25 = (float)((ulong)uVar23 >> 0x20);
    auVar8[4] = uVar40;
    auVar8._0_4_ = fVar21;
    auVar8[5] = uVar42;
    auVar8[6] = uVar43;
    auVar8[7] = uVar44;
    auVar8[8] = uVar45;
    auVar8[9] = uVar46;
    auVar8[10] = uVar47;
    auVar8[0xb] = uVar48;
    auVar8[0xc] = uVar49;
    auVar8[0xd] = uVar50;
    auVar8[0xe] = uVar51;
    auVar8[0xf] = uVar52;
    uVar59 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a680);
    auVar9[4] = uVar40;
    auVar9._0_4_ = fVar21;
    auVar9[5] = uVar42;
    auVar9[6] = uVar43;
    auVar9[7] = uVar44;
    auVar9[8] = uVar45;
    auVar9[9] = uVar46;
    auVar9[10] = uVar47;
    auVar9[0xb] = uVar48;
    auVar9[0xc] = uVar49;
    auVar9[0xd] = uVar50;
    auVar9[0xe] = uVar51;
    auVar9[0xf] = uVar52;
    uVar72 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a880);
    auVar10[4] = uVar40;
    auVar10._0_4_ = fVar21;
    auVar10[5] = uVar42;
    auVar10[6] = uVar43;
    auVar10[7] = uVar44;
    auVar10[8] = uVar45;
    auVar10[9] = uVar46;
    auVar10[10] = uVar47;
    auVar10[0xb] = uVar48;
    auVar10[0xc] = uVar49;
    auVar10[0xd] = uVar50;
    auVar10[0xe] = uVar51;
    auVar10[0xf] = uVar52;
    uVar73 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a790);
    auVar29._12_4_ = fVar65;
    auVar29._0_12_ = auVar35;
    uVar67 = a64_TBL(ZEXT816(0),auVar29,DAT_0388a880);
    fVar68 = (float)((ulong)uVar67 >> 0x20);
    auVar11[4] = uVar40;
    auVar11._0_4_ = fVar21;
    auVar11[5] = uVar42;
    auVar11[6] = uVar43;
    auVar11[7] = uVar44;
    auVar11[8] = SUB41(fVar21,0);
    auVar11[9] = (char)((uint)fVar21 >> 8);
    auVar11[10] = (char)((uint)fVar21 >> 0x10);
    auVar11[0xb] = (char)((uint)fVar21 >> 0x18);
    auVar11[0xc] = uVar40;
    auVar11[0xd] = uVar42;
    auVar11[0xe] = uVar43;
    auVar11[0xf] = uVar44;
    uVar13 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a648);
    fVar65 = fVar58 * (float)uVar13;
    fVar63 = fVar61 * (float)((ulong)uVar13 >> 0x20);
    fVar58 = ((float)uVar23 * fVar21 + fVar57 * fVar58 * (float)uVar66 +
             fVar57 * (float)uVar67 * (float)uVar59) - (float)uVar69 * (float)uVar72;
    fVar61 = (fVar25 * fVar24 + fVar60 * fVar61 * (float)((ulong)uVar66 >> 0x20) +
             fVar60 * fVar68 * (float)((ulong)uVar59 >> 0x20)) -
             fVar70 * (float)((ulong)uVar72 >> 0x20);
    fVar21 = ((float)uVar23 * fVar26 + fVar62 * (float)uVar69 * (float)uVar71 + fVar62 * fVar65) -
             (float)uVar67 * (float)uVar73;
    fVar65 = (fVar25 * fVar22 + fVar64 * fVar70 * (float)((ulong)uVar71 >> 0x20) +
             fVar64 * (float)(CONCAT17((char)((uint)fVar63 >> 0x18),
                                       CONCAT16((char)((uint)fVar63 >> 0x10),
                                                CONCAT15((char)((uint)fVar63 >> 8),
                                                         CONCAT14(SUB41(fVar63,0),fVar65)))) >> 0x20
                             )) - fVar68 * (float)((ulong)uVar73 >> 0x20);
    fVar58 = (float)lVar12 +
             (float)CONCAT13((byte)((uint)fVar58 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18),
                             CONCAT12((byte)((uint)fVar58 >> 0x10) &
                                      (byte)((ulong)_DAT_038897c0 >> 0x10),
                                      CONCAT11((byte)((uint)fVar58 >> 8) &
                                               (byte)((ulong)_DAT_038897c0 >> 8),
                                               SUB41(fVar58,0) & (byte)_DAT_038897c0)));
    fVar61 = (float)((ulong)lVar12 >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar61 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                             CONCAT12((byte)((uint)fVar61 >> 0x10) &
                                      (byte)((ulong)_DAT_038897c0 >> 0x30),
                                      CONCAT11((byte)((uint)fVar61 >> 8) &
                                               (byte)((ulong)_DAT_038897c0 >> 0x28),
                                               SUB41(fVar61,0) &
                                               (byte)((ulong)_DAT_038897c0 >> 0x20))));
    fVar63 = (float)lVar14 +
             (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18),
                             CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                      (byte)((ulong)_UNK_038897c8 >> 0x10),
                                      CONCAT11((byte)((uint)fVar21 >> 8) &
                                               (byte)((ulong)_UNK_038897c8 >> 8),
                                               SUB41(fVar21,0) & (byte)_UNK_038897c8)));
    fVar65 = (float)((ulong)lVar14 >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar65 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38),
                             CONCAT12((byte)((uint)fVar65 >> 0x10) &
                                      (byte)((ulong)_UNK_038897c8 >> 0x30),
                                      CONCAT11((byte)((uint)fVar65 >> 8) &
                                               (byte)((ulong)_UNK_038897c8 >> 0x28),
                                               SUB41(fVar65,0) &
                                               (byte)((ulong)_UNK_038897c8 >> 0x20))));
    uVar49 = SUB41(fVar63,0);
    uVar50 = (undefined1)((uint)fVar63 >> 8);
    uVar51 = (undefined1)((uint)fVar63 >> 0x10);
    uVar52 = (undefined1)((uint)fVar63 >> 0x18);
    uVar53 = SUB41(fVar65,0);
    uVar54 = (undefined1)((uint)fVar65 >> 8);
    uVar55 = (undefined1)((uint)fVar65 >> 0x10);
    uVar56 = (undefined1)((uint)fVar65 >> 0x18);
    uVar40 = SUB41(fVar58,0);
    uVar42 = (undefined1)((uint)fVar58 >> 8);
    uVar43 = (undefined1)((uint)fVar58 >> 0x10);
    uVar44 = (undefined1)((uint)fVar58 >> 0x18);
    uVar45 = SUB41(fVar61,0);
    uVar46 = (undefined1)((uint)fVar61 >> 8);
    uVar47 = (undefined1)((uint)fVar61 >> 0x10);
    uVar48 = (undefined1)((uint)fVar61 >> 0x18);
  }
  else {
    uVar49 = (undefined1)lVar14;
    uVar50 = (undefined1)((ulong)lVar14 >> 8);
    uVar51 = (undefined1)((ulong)lVar14 >> 0x10);
    uVar52 = (undefined1)((ulong)lVar14 >> 0x18);
    uVar53 = (undefined1)((ulong)lVar14 >> 0x20);
    uVar54 = (undefined1)((ulong)lVar14 >> 0x28);
    uVar55 = (undefined1)((ulong)lVar14 >> 0x30);
    uVar56 = (undefined1)((ulong)lVar14 >> 0x38);
    uVar40 = (undefined1)lVar12;
    uVar42 = (undefined1)((ulong)lVar12 >> 8);
    uVar43 = (undefined1)((ulong)lVar12 >> 0x10);
    uVar44 = (undefined1)((ulong)lVar12 >> 0x18);
    uVar45 = (undefined1)((ulong)lVar12 >> 0x20);
    uVar46 = (undefined1)((ulong)lVar12 >> 0x28);
    uVar47 = (undefined1)((ulong)lVar12 >> 0x30);
    uVar48 = (undefined1)((ulong)lVar12 >> 0x38);
  }
  auVar41[1] = uVar42;
  auVar41[0] = uVar40;
  auVar41[2] = uVar43;
  auVar41[3] = uVar44;
  auVar41[4] = uVar45;
  auVar41[5] = uVar46;
  auVar41[6] = uVar47;
  auVar41[7] = uVar48;
  auVar41[8] = uVar49;
  auVar41[9] = uVar50;
  auVar41[10] = uVar51;
  auVar41[0xb] = uVar52;
  auVar41[0xc] = uVar53;
  auVar41[0xd] = uVar54;
  auVar41[0xe] = uVar55;
  auVar41[0xf] = uVar56;
  return auVar41;
}


