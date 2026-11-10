/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c2e2d4; name: FUN_01c2e2d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01c2e2d4(undefined8 param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar34;
  long lVar35;
  long lVar36;
  undefined1 *puVar37;
  ulong uVar38;
  undefined1 *puVar39;
  long *plVar40;
  ulong uVar41;
  ulong uVar42;
  undefined1 *puVar43;
  long *plVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 auVar47 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  float fVar78;
  float fVar79;
  undefined8 uVar80;
  float fVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  long *local_18;
  
  FUN_009c69bc(&local_18);
  lVar36 = local_18[0x1b];
  lVar9 = local_18[0x1a];
  if (local_18 != (long *)0x0) {
    lVar35 = local_18[0xb];
    piVar1 = (int *)(lVar35 + 0xc);
    do {
      iVar34 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar34 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar34 + -1 == 0) {
      *(undefined8 *)(lVar35 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))();
    }
  }
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar34 = __cxa_guard_acquire(PTR_DAT_04379660), iVar34 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar35 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar35;
  puVar37 = *(undefined1 **)(lVar35 + 0x60);
  uVar45 = 0;
  uVar48 = 0;
  uVar49 = 0;
  uVar50 = 0;
  if (puVar37 != (undefined1 *)0x0) {
    uVar38 = (long)puVar37 - ((ulong)puVar37 >> 1 & 0x5555555555555555);
    uVar38 = (uVar38 & 0x3333333333333333) + (uVar38 >> 2 & 0x3333333333333333);
    uVar38 = (uVar38 + (uVar38 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar38 < 2) {
      puVar39 = (undefined1 *)((ulong)(puVar37 + -1) & 0x471b26c9ac42475c);
    }
    else if (&DAT_471b26c9ac42475c < puVar37) {
      puVar39 = &DAT_471b26c9ac42475c;
    }
    else {
      uVar41 = 0;
      if (puVar37 != (undefined1 *)0x0) {
        uVar41 = 0x471b26c9ac42475c / (ulong)puVar37;
      }
      puVar39 = &DAT_471b26c9ac42475c + -(uVar41 * (long)puVar37);
    }
    plVar40 = *(long **)(*(long *)(lVar35 + 0x58) + (long)puVar39 * 8);
    if ((plVar40 != (long *)0x0) && (plVar40 = (long *)*plVar40, plVar40 != (long *)0x0)) {
      if (uVar38 < 2) {
        do {
          if ((undefined1 *)plVar40[1] == &DAT_471b26c9ac42475c) {
            if ((undefined1 *)plVar40[2] == &DAT_471b26c9ac42475c) goto LAB_01c2e3dc;
          }
          else if ((undefined1 *)((ulong)plVar40[1] & (ulong)(puVar37 + -1)) != puVar39) break;
          plVar40 = (long *)*plVar40;
        } while (plVar40 != (long *)0x0);
      }
      else {
        do {
          puVar43 = (undefined1 *)plVar40[1];
          if (puVar43 == &DAT_471b26c9ac42475c) {
            if ((undefined1 *)plVar40[2] == &DAT_471b26c9ac42475c) goto LAB_01c2e3dc;
          }
          else {
            if (puVar37 <= puVar43) {
              uVar38 = 0;
              if (puVar37 != (undefined1 *)0x0) {
                uVar38 = (ulong)puVar43 / (ulong)puVar37;
              }
              puVar43 = puVar43 + -(uVar38 * (long)puVar37);
            }
            if (puVar43 != puVar39) break;
          }
          plVar40 = (long *)*plVar40;
        } while (plVar40 != (long *)0x0);
      }
    }
  }
  goto LAB_01c2e538;
LAB_01c2e3dc:
  plVar40 = (long *)plVar40[3];
  if (plVar40 == (long *)0x0) goto LAB_01c2e538;
  plVar2 = plVar40 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar38 = plVar40[0x21];
  uVar45 = 0;
  uVar48 = 0;
  uVar49 = 0;
  uVar50 = 0;
  if (uVar38 != 0) {
    uVar41 = uVar38 - (uVar38 >> 1 & 0x5555555555555555);
    uVar41 = (uVar41 & 0x3333333333333333) + (uVar41 >> 2 & 0x3333333333333333);
    uVar41 = (uVar41 + (uVar41 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar41 < 2) {
      uVar42 = uVar38 - 1 & 0xa1e16900d153e78a;
    }
    else if (uVar38 < 0xa1e16900d153e78b) {
      uVar42 = 0;
      if (uVar38 != 0) {
        uVar42 = 0xa1e16900d153e78a / uVar38;
      }
      uVar42 = 0xa1e16900d153e78a - uVar42 * uVar38;
    }
    else {
      uVar42 = 0xa1e16900d153e78a;
    }
    plVar44 = *(long **)(plVar40[0x20] + uVar42 * 8);
    if ((plVar44 != (long *)0x0) && (plVar44 = (long *)*plVar44, plVar44 != (long *)0x0)) {
      if (uVar41 < 2) {
        do {
          if (plVar44[1] == 0xa1e16900d153e78a) {
            if (plVar44[2] == -0x5e1e96ff2eac1876) goto LAB_01c2e520;
          }
          else if ((plVar44[1] & uVar38 - 1) != uVar42) break;
          plVar44 = (long *)*plVar44;
        } while (plVar44 != (long *)0x0);
      }
      else {
        do {
          uVar41 = plVar44[1];
          if (uVar41 == 0xa1e16900d153e78a) {
            if (plVar44[2] == -0x5e1e96ff2eac1876) goto LAB_01c2e520;
          }
          else {
            if (uVar38 <= uVar41) {
              uVar5 = 0;
              if (uVar38 != 0) {
                uVar5 = uVar41 / uVar38;
              }
              uVar41 = uVar41 - uVar5 * uVar38;
            }
            if (uVar41 != uVar42) break;
          }
          plVar44 = (long *)*plVar44;
        } while (plVar44 != (long *)0x0);
      }
    }
  }
  goto LAB_01c2e524;
LAB_01c2e520:
  lVar35 = plVar44[6];
  uVar45 = (undefined1)lVar35;
  uVar48 = (undefined1)((ulong)lVar35 >> 8);
  uVar49 = (undefined1)((ulong)lVar35 >> 0x10);
  uVar50 = (undefined1)((ulong)lVar35 >> 0x18);
LAB_01c2e524:
  do {
    iVar34 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar34;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar34 == 0) {
    (**(code **)(*plVar40 + 0x10))();
  }
LAB_01c2e538:
  uVar38 = CONCAT44(0,CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar45))));
  FUN_009c69bc(&local_18,param_1);
  plVar40 = local_18 + 0x18;
  lVar35 = local_18[0x19];
  uVar45 = (undefined1)((ulong)lVar35 >> 8);
  uVar48 = (undefined1)((ulong)lVar35 >> 0x10);
  uVar49 = (undefined1)((ulong)lVar35 >> 0x18);
  uVar50 = (undefined1)((ulong)lVar35 >> 0x20);
  uVar51 = (undefined1)((ulong)lVar35 >> 0x28);
  uVar52 = (undefined1)((ulong)lVar35 >> 0x30);
  uVar53 = (undefined1)((ulong)lVar35 >> 0x38);
  fVar28 = (float)*plVar40;
  fVar23 = fVar28 * (float)_DAT_03889ac0;
  fVar29 = (float)((ulong)*plVar40 >> 0x20);
  fVar26 = fVar29 * (float)((ulong)_DAT_03889ac0 >> 0x20);
  uVar66 = SUB41(fVar26,0);
  uVar67 = (undefined1)((uint)fVar26 >> 8);
  uVar68 = (undefined1)((uint)fVar26 >> 0x10);
  uVar69 = (undefined1)((uint)fVar26 >> 0x18);
  fVar57 = (float)lVar35 * (float)_UNK_03889ac8;
  uVar70 = SUB41(fVar57,0);
  uVar71 = (undefined1)((uint)fVar57 >> 8);
  uVar72 = (undefined1)((uint)fVar57 >> 0x10);
  uVar73 = (undefined1)((uint)fVar57 >> 0x18);
  fVar58 = (float)((ulong)lVar35 >> 0x20) * (float)((ulong)_UNK_03889ac8 >> 0x20);
  uVar74 = SUB41(fVar58,0);
  uVar75 = (undefined1)((uint)fVar58 >> 8);
  uVar76 = (undefined1)((uint)fVar58 >> 0x10);
  uVar77 = (undefined1)((uint)fVar58 >> 0x18);
  auVar17[4] = uVar66;
  auVar17._0_4_ = fVar23;
  auVar17[5] = uVar67;
  auVar17[6] = uVar68;
  auVar17[7] = uVar69;
  auVar17[8] = uVar70;
  auVar17[9] = uVar71;
  auVar17[10] = uVar72;
  auVar17[0xb] = uVar73;
  auVar17[0xc] = uVar74;
  auVar17[0xd] = uVar75;
  auVar17[0xe] = uVar76;
  auVar17[0xf] = uVar77;
  uVar64 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a6c8);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar38;
  uVar80 = a64_TBL(ZEXT816(0),auVar31 << 0x40,DAT_0388a680);
  auVar18[4] = uVar66;
  auVar18._0_4_ = fVar23;
  auVar18[5] = uVar67;
  auVar18[6] = uVar68;
  auVar18[7] = uVar69;
  auVar18[8] = uVar70;
  auVar18[9] = uVar71;
  auVar18[10] = uVar72;
  auVar18[0xb] = uVar73;
  auVar18[0xc] = uVar74;
  auVar18[0xd] = uVar75;
  auVar18[0xe] = uVar76;
  auVar18[0xf] = uVar77;
  uVar60 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a580);
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar38;
  uVar16 = a64_TBL(ZEXT816(0),auVar32 << 0x40,DAT_0388a580);
  fVar55 = (float)((ulong)uVar16 >> 0x20);
  fVar81 = (float)((ulong)uVar80 >> 0x20);
  auVar19[4] = uVar66;
  auVar19._0_4_ = fVar23;
  auVar19[5] = uVar67;
  auVar19[6] = uVar68;
  auVar19[7] = uVar69;
  auVar19[8] = uVar70;
  auVar19[9] = uVar71;
  auVar19[10] = uVar72;
  auVar19[0xb] = uVar73;
  auVar19[0xc] = uVar74;
  auVar19[0xd] = uVar75;
  auVar19[0xe] = uVar76;
  auVar19[0xf] = uVar77;
  uVar82 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a680);
  auVar20[4] = uVar66;
  auVar20._0_4_ = fVar23;
  auVar20[5] = uVar67;
  auVar20[6] = uVar68;
  auVar20[7] = uVar69;
  auVar20[8] = uVar70;
  auVar20[9] = uVar71;
  auVar20[10] = uVar72;
  auVar20[0xb] = uVar73;
  auVar20[0xc] = uVar74;
  auVar20[0xd] = uVar75;
  auVar20[0xe] = uVar76;
  auVar20[0xf] = uVar77;
  uVar83 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a880);
  fVar59 = (float)_DAT_03889ad0;
  fVar61 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar62 = (float)_UNK_03889ad8;
  fVar63 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  auVar21[4] = uVar66;
  auVar21._0_4_ = fVar23;
  auVar21[5] = uVar67;
  auVar21[6] = uVar68;
  auVar21[7] = uVar69;
  auVar21[8] = uVar70;
  auVar21[9] = uVar71;
  auVar21[10] = uVar72;
  auVar21[0xb] = uVar73;
  auVar21[0xc] = uVar74;
  auVar21[0xd] = uVar75;
  auVar21[0xe] = uVar76;
  auVar21[0xf] = uVar77;
  uVar84 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a790);
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar38;
  uVar65 = a64_TBL(ZEXT816(0),auVar33 << 0x40,DAT_0388a880);
  fVar78 = (float)((ulong)uVar65 >> 0x20);
  auVar6[9] = uVar45;
  auVar6._0_9_ = *(unkbyte9 *)plVar40;
  auVar6[10] = uVar48;
  auVar6[0xb] = uVar49;
  auVar6[0xc] = uVar50;
  auVar6[0xd] = uVar51;
  auVar6[0xe] = uVar52;
  auVar6[0xf] = uVar53;
  uVar30 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a680);
  fVar79 = (float)((ulong)uVar30 >> 0x20);
  auVar22[4] = uVar66;
  auVar22._0_4_ = fVar23;
  auVar22[5] = uVar67;
  auVar22[6] = uVar68;
  auVar22[7] = uVar69;
  auVar22[8] = SUB41(fVar23,0);
  auVar22[9] = (char)((uint)fVar23 >> 8);
  auVar22[10] = (char)((uint)fVar23 >> 0x10);
  auVar22[0xb] = (char)((uint)fVar23 >> 0x18);
  auVar22[0xc] = uVar66;
  auVar22[0xd] = uVar67;
  auVar22[0xe] = uVar68;
  auVar22[0xf] = uVar69;
  uVar25 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a648);
  fVar24 = (float)uVar25 * 0.0;
  fVar27 = (float)((ulong)uVar25 >> 0x20) * 0.0;
  auVar7[9] = uVar45;
  auVar7._0_9_ = *(unkbyte9 *)plVar40;
  auVar7[10] = uVar48;
  auVar7[0xb] = uVar49;
  auVar7[0xc] = uVar50;
  auVar7[0xd] = uVar51;
  auVar7[0xe] = uVar52;
  auVar7[0xf] = uVar53;
  uVar25 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a580);
  fVar54 = (fVar23 * (float)uVar16 + fVar59 * (float)uVar60 * 0.0 +
           fVar59 * (float)uVar65 * (float)uVar82) - (float)uVar80 * (float)uVar83;
  fVar56 = (fVar26 * fVar55 + fVar61 * (float)((ulong)uVar60 >> 0x20) * 0.0 +
           fVar61 * fVar78 * (float)((ulong)uVar82 >> 0x20)) -
           fVar81 * (float)((ulong)uVar83 >> 0x20);
  fVar57 = (fVar57 * (float)uVar16 + fVar62 * (float)uVar80 * (float)uVar64 + fVar62 * fVar24) -
           (float)uVar65 * (float)uVar84;
  fVar58 = (fVar58 * fVar55 + fVar63 * fVar81 * (float)((ulong)uVar64 >> 0x20) +
           fVar63 * (float)(CONCAT17((char)((uint)fVar27 >> 0x18),
                                     CONCAT16((char)((uint)fVar27 >> 0x10),
                                              CONCAT15((char)((uint)fVar27 >> 8),
                                                       CONCAT14(SUB41(fVar27,0),fVar24)))) >> 0x20))
           - fVar78 * (float)((ulong)uVar84 >> 0x20);
  auVar10._4_4_ = fVar56;
  auVar10._0_4_ = fVar54;
  auVar10._8_4_ = fVar57;
  auVar10._12_4_ = fVar58;
  uVar64 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a580);
  auVar11._4_4_ = fVar56;
  auVar11._0_4_ = fVar54;
  auVar11._8_4_ = fVar57;
  auVar11._12_4_ = fVar58;
  uVar80 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a6c8);
  fVar26 = (float)((ulong)uVar25 >> 0x20);
  auVar12._4_4_ = fVar56;
  auVar12._0_4_ = fVar54;
  auVar12._8_4_ = fVar57;
  auVar12._12_4_ = fVar58;
  uVar83 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a790);
  auVar13._4_4_ = fVar56;
  auVar13._0_4_ = fVar54;
  auVar13._8_4_ = fVar57;
  auVar13._12_4_ = fVar58;
  uVar60 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a680);
  auVar14._4_4_ = fVar56;
  auVar14._0_4_ = fVar54;
  auVar14._8_4_ = fVar57;
  auVar14._12_4_ = fVar58;
  uVar82 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a880);
  auVar8[9] = uVar45;
  auVar8._0_9_ = *(unkbyte9 *)plVar40;
  auVar8[10] = uVar48;
  auVar8[0xb] = uVar49;
  auVar8[0xc] = uVar50;
  auVar8[0xd] = uVar51;
  auVar8[0xe] = uVar52;
  auVar8[0xf] = uVar53;
  uVar65 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a880);
  fVar55 = (float)((ulong)uVar65 >> 0x20);
  auVar15._4_4_ = fVar56;
  auVar15._0_4_ = fVar54;
  auVar15._8_4_ = fVar54;
  auVar15._12_4_ = fVar56;
  uVar16 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a648);
  fVar23 = fVar28 * (float)uVar16;
  fVar24 = fVar29 * (float)((ulong)uVar16 >> 0x20);
  bVar46 = (byte)_DAT_038897c0;
  uVar38 = (ulong)_DAT_038897c0 >> 8;
  uVar41 = (ulong)_DAT_038897c0 >> 0x10;
  uVar42 = (ulong)_DAT_038897c0 >> 0x18;
  fVar27 = ((float)uVar25 * fVar54 + fVar59 * fVar28 * (float)uVar64 +
           fVar59 * (float)uVar65 * (float)uVar60) - (float)uVar30 * (float)uVar82;
  fVar28 = (fVar26 * fVar56 + fVar61 * fVar29 * (float)((ulong)uVar64 >> 0x20) +
           fVar61 * fVar55 * (float)((ulong)uVar60 >> 0x20)) -
           fVar79 * (float)((ulong)uVar82 >> 0x20);
  fVar29 = ((float)uVar25 * fVar57 + fVar62 * (float)uVar30 * (float)uVar80 + fVar62 * fVar23) -
           (float)uVar65 * (float)uVar83;
  fVar23 = (fVar26 * fVar58 + fVar63 * fVar79 * (float)((ulong)uVar80 >> 0x20) +
           fVar63 * (float)(CONCAT17((char)((uint)fVar24 >> 0x18),
                                     CONCAT16((char)((uint)fVar24 >> 0x10),
                                              CONCAT15((char)((uint)fVar24 >> 8),
                                                       CONCAT14(SUB41(fVar24,0),fVar23)))) >> 0x20))
           - fVar55 * (float)((ulong)uVar83 >> 0x20);
  fVar28 = (float)((ulong)lVar9 >> 0x20) +
           (float)CONCAT13((byte)((uint)fVar28 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                           CONCAT12((byte)((uint)fVar28 >> 0x10) &
                                    (byte)((ulong)_DAT_038897c0 >> 0x30),
                                    CONCAT11((byte)((uint)fVar28 >> 8) &
                                             (byte)((ulong)_DAT_038897c0 >> 0x28),
                                             SUB41(fVar28,0) & (byte)((ulong)_DAT_038897c0 >> 0x20))
                                   ));
  auVar47[4] = SUB41(fVar28,0);
  auVar47[5] = (undefined1)((uint)fVar28 >> 8);
  auVar47[6] = (undefined1)((uint)fVar28 >> 0x10);
  auVar47[7] = (undefined1)((uint)fVar28 >> 0x18);
  fVar28 = (float)lVar36 +
           (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18),
                           CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                    (byte)((ulong)_UNK_038897c8 >> 0x10),
                                    CONCAT11((byte)((uint)fVar29 >> 8) &
                                             (byte)((ulong)_UNK_038897c8 >> 8),
                                             SUB41(fVar29,0) & (byte)_UNK_038897c8)));
  auVar47[8] = SUB41(fVar28,0);
  auVar47[9] = (undefined1)((uint)fVar28 >> 8);
  auVar47[10] = (undefined1)((uint)fVar28 >> 0x10);
  auVar47[0xb] = (undefined1)((uint)fVar28 >> 0x18);
  fVar28 = (float)((ulong)lVar36 >> 0x20) +
           (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38),
                           CONCAT12((byte)((uint)fVar23 >> 0x10) &
                                    (byte)((ulong)_UNK_038897c8 >> 0x30),
                                    CONCAT11((byte)((uint)fVar23 >> 8) &
                                             (byte)((ulong)_UNK_038897c8 >> 0x28),
                                             SUB41(fVar23,0) & (byte)((ulong)_UNK_038897c8 >> 0x20))
                                   ));
  auVar47[0xc] = SUB41(fVar28,0);
  auVar47[0xd] = (undefined1)((uint)fVar28 >> 8);
  auVar47[0xe] = (undefined1)((uint)fVar28 >> 0x10);
  auVar47[0xf] = (undefined1)((uint)fVar28 >> 0x18);
  if (local_18 != (long *)0x0) {
    lVar36 = local_18[0xb];
    piVar1 = (int *)(lVar36 + 0xc);
    do {
      iVar34 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar34 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar34 + -1 == 0) {
      *(undefined8 *)(lVar36 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))();
    }
  }
  auVar47._0_4_ =
       (float)lVar9 +
       (float)CONCAT13((byte)((uint)fVar27 >> 0x18) & (byte)uVar42,
                       CONCAT12((byte)((uint)fVar27 >> 0x10) & (byte)uVar41,
                                CONCAT11((byte)((uint)fVar27 >> 8) & (byte)uVar38,
                                         SUB41(fVar27,0) & bVar46)));
  return auVar47;
}


