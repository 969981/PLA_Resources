/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0259e83c; name: FUN_0259e83c
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0259e83c(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined2 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  int iVar31;
  int iVar32;
  undefined8 uVar33;
  long lVar34;
  long *plVar35;
  long lVar36;
  long *plVar37;
  undefined8 *puVar38;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 uVar39;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 uVar40;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 uVar41;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 uVar42;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 uVar43;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 uVar44;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 uVar45;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 uVar46;
  undefined1 extraout_var_34;
  undefined1 extraout_var_35;
  undefined1 uVar47;
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  float fVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_c0 [4];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 *local_78 [3];
  
  puVar30 = PTR_DAT_04379fd0;
  puVar29 = PTR_DAT_04379fc8;
  puVar28 = PTR_DAT_043794d8;
  puVar27 = PTR_DAT_043794d0;
  lVar36 = *(long *)(param_1 + 0xb8);
  if (lVar36 == 0) {
    return 0;
  }
  if (*(int *)(lVar36 + 0xc) == 0) {
    return 0;
  }
  piVar1 = (int *)(lVar36 + 0xc);
  iVar32 = *(int *)(lVar36 + 0xc);
  do {
    puVar38 = *(undefined8 **)(lVar36 + 0x10);
    if (((*puVar29 & 1) == 0) && (iVar31 = __cxa_guard_acquire(puVar29), iVar31 != 0)) {
      if (((*puVar27 & 1) == 0) && (iVar31 = __cxa_guard_acquire(puVar27), iVar31 != 0)) {
        uVar33 = FUN_0087f8f0();
        *(undefined8 *)puVar28 = uVar33;
        __cxa_guard_release(puVar27);
      }
      *(undefined **)puVar30 = puVar28;
      __cxa_guard_release(puVar29);
    }
    if (puVar38 == (undefined8 *)0x0) {
      return 0;
    }
    while (puVar38 != (undefined8 *)puVar30) {
      puVar38 = (undefined8 *)*puVar38;
      if (puVar38 == (undefined8 *)0x0) {
        return 0;
      }
    }
    iVar31 = *piVar1;
    if (iVar31 == iVar32) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar32 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar36 = *(long *)(lVar36 + 0x18);
        if (lVar36 == 0) {
          return 0;
        }
        plVar35 = (long *)(lVar36 + -0x50);
        FUN_018f8f5c(local_78,plVar35);
        puVar38 = local_78[0];
        puVar29 = PTR_DAT_04379fe0;
        if (local_78[0] == (undefined8 *)0x0) {
          bVar4 = true;
          goto LAB_0259e920;
        }
        if (*(int *)((long)local_78[0] + 0xc) == 0) goto LAB_0259ed38;
        piVar1 = (int *)((long)local_78[0] + 0xc);
        iVar32 = *(int *)((long)local_78[0] + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar32 = iVar31;
    if (iVar31 == 0) {
      return 0;
    }
  } while( true );
LAB_0259ea34:
  plVar37 = (long *)puVar38[2];
  if (((*PTR_DAT_04379fd8 & 1) == 0) &&
     (iVar31 = __cxa_guard_acquire(PTR_DAT_04379fd8), iVar31 != 0)) {
    if (((*PTR_DAT_043795d8 & 1) == 0) &&
       (iVar31 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar31 != 0)) {
      if (((*puVar27 & 1) == 0) && (iVar31 = __cxa_guard_acquire(puVar27), iVar31 != 0)) {
        uVar33 = FUN_0087f8f0();
        *(undefined8 *)puVar28 = uVar33;
        __cxa_guard_release(puVar27);
      }
      *(undefined **)PTR_DAT_043795e0 = puVar28;
      __cxa_guard_release(PTR_DAT_043795d8);
    }
    *(undefined **)puVar29 = PTR_DAT_043795e0;
    __cxa_guard_release(PTR_DAT_04379fd8);
  }
  while( true ) {
    if (plVar37 == (long *)0x0) goto LAB_0259ed38;
    if (plVar37 == (long *)puVar29) break;
    plVar37 = (long *)*plVar37;
  }
  iVar31 = *piVar1;
  if (iVar31 == iVar32) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar32 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      lVar34 = puVar38[3];
      if (lVar34 == 0) {
        bVar4 = true;
        puVar38 = local_78[0];
      }
      else {
        plVar37 = (long *)(lVar34 + -0x50);
        FUN_01a4bb30(local_c0,plVar37);
        (**(code **)(*(long *)(lVar34 + -0x50) + 0x138))(plVar37);
        uStack_108 = CONCAT17(extraout_var_34,
                              CONCAT16(extraout_var_32,
                                       CONCAT15(extraout_var_30,
                                                CONCAT14(extraout_var_28,
                                                         CONCAT13(extraout_var_26,
                                                                  CONCAT12(extraout_var_24,
                                                                           CONCAT11(extraout_var_22,
                                                                                    extraout_var_20)
                                                                          ))))));
        local_110 = CONCAT17(extraout_var_18,
                             CONCAT16(extraout_var_15,
                                      CONCAT15(extraout_var_12,
                                               CONCAT14(extraout_var_09,
                                                        CONCAT13(extraout_var_06,
                                                                 CONCAT12(extraout_var_03,
                                                                          CONCAT11(extraout_var_00,
                                                                                   extraout_b0_00)))
                                                       ))));
        FUN_01831870(auStack_100,local_c0,&local_110);
        FUN_009a7ff4((undefined1)local_a0,uStack_9c,0);
        uVar39 = (undefined1)_UNK_03888d28;
        uVar40 = (undefined1)((ulong)_UNK_03888d28 >> 8);
        uVar41 = (undefined1)((ulong)_UNK_03888d28 >> 0x10);
        uVar42 = (undefined1)((ulong)_UNK_03888d28 >> 0x18);
        uVar43 = (undefined1)((ulong)_UNK_03888d28 >> 0x20);
        uVar44 = (undefined1)((ulong)_UNK_03888d28 >> 0x28);
        uVar45 = (undefined1)((ulong)_UNK_03888d28 >> 0x30);
        uVar46 = (undefined1)((ulong)_UNK_03888d28 >> 0x38);
        fVar55 = (float)CONCAT13(extraout_var_07,
                                 CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01)))
                 * (float)_DAT_03889ac0;
        fVar57 = (float)CONCAT13(extraout_var_19,
                                 CONCAT12(extraout_var_16,CONCAT11(extraout_var_13,extraout_var_10))
                                ) * (float)((ulong)_DAT_03889ac0 >> 0x20);
        fVar59 = (float)CONCAT13(extraout_var_27,
                                 CONCAT12(extraout_var_25,CONCAT11(extraout_var_23,extraout_var_21))
                                ) * (float)_UNK_03889ac8;
        fVar61 = (float)CONCAT13(extraout_var_35,
                                 CONCAT12(extraout_var_33,CONCAT11(extraout_var_31,extraout_var_29))
                                ) * (float)((ulong)_UNK_03889ac8 >> 0x20);
        auVar23[8] = uVar39;
        auVar23._0_8_ = _DAT_03888d20;
        auVar23[9] = uVar40;
        auVar23[10] = uVar41;
        auVar23[0xb] = uVar42;
        auVar23[0xc] = uVar43;
        auVar23[0xd] = uVar44;
        auVar23[0xe] = uVar45;
        auVar23[0xf] = uVar46;
        uVar33 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a580);
        fVar50 = (float)((ulong)uVar33 >> 0x20);
        auVar17._4_4_ = fVar57;
        auVar17._0_4_ = fVar55;
        auVar17._8_4_ = fVar59;
        auVar17._12_4_ = fVar61;
        uVar51 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a580);
        auVar24[8] = uVar39;
        auVar24._0_8_ = _DAT_03888d20;
        auVar24[9] = uVar40;
        auVar24[10] = uVar41;
        auVar24[0xb] = uVar42;
        auVar24[0xc] = uVar43;
        auVar24[0xd] = uVar44;
        auVar24[0xe] = uVar45;
        auVar24[0xf] = uVar46;
        uVar63 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a680);
        auVar18._4_4_ = fVar57;
        auVar18._0_4_ = fVar55;
        auVar18._8_4_ = fVar59;
        auVar18._12_4_ = fVar61;
        uVar65 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a6c8);
        fVar53 = (float)((ulong)uVar63 >> 0x20);
        auVar19._4_4_ = fVar57;
        auVar19._0_4_ = fVar55;
        auVar19._8_4_ = fVar59;
        auVar19._12_4_ = fVar61;
        uVar66 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a680);
        auVar20._4_4_ = fVar57;
        auVar20._0_4_ = fVar55;
        auVar20._8_4_ = fVar59;
        auVar20._12_4_ = fVar61;
        uVar68 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a790);
        auVar21._4_4_ = fVar57;
        auVar21._0_4_ = fVar55;
        auVar21._8_4_ = fVar59;
        auVar21._12_4_ = fVar61;
        uVar67 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a880);
        auVar22._4_4_ = fVar57;
        auVar22._0_4_ = fVar55;
        auVar22._8_4_ = fVar55;
        auVar22._12_4_ = fVar57;
        uVar52 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a648);
        auVar25[8] = uVar39;
        auVar25._0_8_ = _DAT_03888d20;
        auVar25[9] = uVar40;
        auVar25[10] = uVar41;
        auVar25[0xb] = uVar42;
        auVar25[0xc] = uVar43;
        auVar25[0xd] = uVar44;
        auVar25[0xe] = uVar45;
        auVar25[0xf] = uVar46;
        uVar54 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a880);
        fVar10 = (float)((ulong)uVar54 >> 0x20);
        auVar48[1] = extraout_var_01;
        auVar48[0] = extraout_b0_01;
        auVar48[2] = extraout_var_04;
        auVar48[3] = extraout_var_07;
        auVar48[4] = extraout_var_10;
        auVar48[5] = extraout_var_13;
        auVar48[6] = extraout_var_16;
        auVar48[7] = extraout_var_19;
        auVar48[8] = extraout_var_21;
        auVar48[9] = extraout_var_23;
        auVar48[10] = extraout_var_25;
        auVar48[0xb] = extraout_var_27;
        auVar48[0xc] = extraout_var_29;
        auVar48[0xd] = extraout_var_31;
        auVar48[0xe] = extraout_var_33;
        auVar48[0xf] = extraout_var_35;
        uVar26 = a64_TBL(ZEXT816(0),auVar48,DAT_0388a580);
        fVar60 = (float)_UNK_03889ad8;
        fVar62 = (float)((ulong)_UNK_03889ad8 >> 0x20);
        fVar56 = (float)_DAT_03889ad0;
        fVar58 = (float)((ulong)_DAT_03889ad0 >> 0x20);
        fVar49 = (fVar55 * (float)uVar33 + fVar56 * (float)uVar51 * 0.0 +
                 fVar56 * (float)uVar54 * (float)uVar66) - (float)uVar63 * (float)uVar67;
        fVar57 = (fVar57 * fVar50 + fVar58 * (float)((ulong)uVar51 >> 0x20) * 0.0 +
                 fVar58 * fVar10 * (float)((ulong)uVar66 >> 0x20)) -
                 fVar53 * (float)((ulong)uVar67 >> 0x20);
        fVar59 = (fVar59 * (float)uVar33 + fVar60 * (float)uVar63 * (float)uVar65 +
                 fVar60 * (float)uVar52 * 0.0) - (float)uVar54 * (float)uVar68;
        fVar61 = (fVar61 * fVar50 + fVar62 * fVar53 * (float)((ulong)uVar65 >> 0x20) +
                 fVar62 * (float)((ulong)uVar52 >> 0x20) * 0.0) -
                 fVar10 * (float)((ulong)uVar68 >> 0x20);
        auVar5[1] = extraout_var_01;
        auVar5[0] = extraout_b0_01;
        auVar5[2] = extraout_var_04;
        auVar5[3] = extraout_var_07;
        auVar5[4] = extraout_var_10;
        auVar5[5] = extraout_var_13;
        auVar5[6] = extraout_var_16;
        auVar5[7] = extraout_var_19;
        auVar5[8] = extraout_var_21;
        auVar5[9] = extraout_var_23;
        auVar5[10] = extraout_var_25;
        auVar5[0xb] = extraout_var_27;
        auVar5[0xc] = extraout_var_29;
        auVar5[0xd] = extraout_var_31;
        auVar5[0xe] = extraout_var_33;
        auVar5[0xf] = extraout_var_35;
        uVar65 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a680);
        auVar11._4_4_ = fVar57;
        auVar11._0_4_ = fVar49;
        auVar11._8_4_ = fVar59;
        auVar11._12_4_ = fVar61;
        uVar51 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a580);
        auVar12._4_4_ = fVar57;
        auVar12._0_4_ = fVar49;
        auVar12._8_4_ = fVar59;
        auVar12._12_4_ = fVar61;
        uVar66 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a6c8);
        fVar55 = (float)((ulong)uVar26 >> 0x20);
        fVar64 = (float)((ulong)uVar65 >> 0x20);
        auVar13._4_4_ = fVar57;
        auVar13._0_4_ = fVar49;
        auVar13._8_4_ = fVar59;
        auVar13._12_4_ = fVar61;
        uVar67 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a790);
        auVar14._4_4_ = fVar57;
        auVar14._0_4_ = fVar49;
        auVar14._8_4_ = fVar59;
        auVar14._12_4_ = fVar61;
        uVar54 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a680);
        auVar15._4_4_ = fVar57;
        auVar15._0_4_ = fVar49;
        auVar15._8_4_ = fVar59;
        auVar15._12_4_ = fVar61;
        uVar63 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a880);
        auVar6[1] = extraout_var_01;
        auVar6[0] = extraout_b0_01;
        auVar6[2] = extraout_var_04;
        auVar6[3] = extraout_var_07;
        auVar6[4] = extraout_var_10;
        auVar6[5] = extraout_var_13;
        auVar6[6] = extraout_var_16;
        auVar6[7] = extraout_var_19;
        auVar6[8] = extraout_var_21;
        auVar6[9] = extraout_var_23;
        auVar6[10] = extraout_var_25;
        auVar6[0xb] = extraout_var_27;
        auVar6[0xc] = extraout_var_29;
        auVar6[0xd] = extraout_var_31;
        auVar6[0xe] = extraout_var_33;
        auVar6[0xf] = extraout_var_35;
        uVar52 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a880);
        fVar53 = (float)((ulong)uVar52 >> 0x20);
        auVar16._4_4_ = fVar57;
        auVar16._0_4_ = fVar49;
        auVar16._8_4_ = fVar49;
        auVar16._12_4_ = fVar57;
        uVar33 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a648);
        fVar10 = (float)CONCAT13(extraout_var_07,
                                 CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01)))
                 * (float)uVar33;
        fVar50 = (float)CONCAT13(extraout_var_19,
                                 CONCAT12(extraout_var_16,CONCAT11(extraout_var_13,extraout_var_10))
                                ) * (float)((ulong)uVar33 >> 0x20);
        lVar34 = *(long *)(lVar34 + 8);
        piVar1 = (int *)(lVar34 + 0xc);
        fVar49 = ((float)uVar26 * fVar49 +
                  fVar56 * (float)CONCAT13(extraout_var_07,
                                           CONCAT12(extraout_var_04,
                                                    CONCAT11(extraout_var_01,extraout_b0_01))) *
                           (float)uVar51 + fVar56 * (float)uVar52 * (float)uVar54) -
                 (float)uVar65 * (float)uVar63;
        fVar57 = (fVar55 * fVar57 +
                  fVar58 * (float)CONCAT13(extraout_var_19,
                                           CONCAT12(extraout_var_16,
                                                    CONCAT11(extraout_var_13,extraout_var_10))) *
                           (float)((ulong)uVar51 >> 0x20) +
                 fVar58 * fVar53 * (float)((ulong)uVar54 >> 0x20)) -
                 fVar64 * (float)((ulong)uVar63 >> 0x20);
        fVar59 = ((float)uVar26 * fVar59 + fVar60 * (float)uVar65 * (float)uVar66 + fVar60 * fVar10)
                 - (float)uVar52 * (float)uVar67;
        fVar61 = (fVar55 * fVar61 + fVar62 * fVar64 * (float)((ulong)uVar66 >> 0x20) +
                 fVar62 * (float)(CONCAT17((char)((uint)fVar50 >> 0x18),
                                           CONCAT16((char)((uint)fVar50 >> 0x10),
                                                    CONCAT15((char)((uint)fVar50 >> 8),
                                                             CONCAT14(SUB41(fVar50,0),fVar10)))) >>
                                 0x20)) - fVar53 * (float)((ulong)uVar67 >> 0x20);
        fVar10 = (*(float *)(param_1 + 0x140) - (float)local_f0) *
                 (float)CONCAT13((byte)((uint)fVar49 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18)
                                 ,CONCAT12((byte)((uint)fVar49 >> 0x10) &
                                           (byte)((ulong)_DAT_038897c0 >> 0x10),
                                           CONCAT11((byte)((uint)fVar49 >> 8) &
                                                    (byte)((ulong)_DAT_038897c0 >> 8),
                                                    SUB41(fVar49,0) & (byte)_DAT_038897c0)));
        fVar50 = (*(float *)(param_1 + 0x144) - (float)((ulong)local_f0 >> 0x20)) *
                 (float)CONCAT13((byte)((uint)fVar57 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38)
                                 ,CONCAT12((byte)((uint)fVar57 >> 0x10) &
                                           (byte)((ulong)_DAT_038897c0 >> 0x30),
                                           CONCAT11((byte)((uint)fVar57 >> 8) &
                                                    (byte)((ulong)_DAT_038897c0 >> 0x28),
                                                    SUB41(fVar57,0) &
                                                    (byte)((ulong)_DAT_038897c0 >> 0x20))));
        uVar39 = (undefined1)((uint)fVar50 >> 8);
        uVar40 = (undefined1)((uint)fVar50 >> 0x10);
        uVar41 = (undefined1)((uint)fVar50 >> 0x18);
        fVar55 = (*(float *)(param_1 + 0x148) - (float)uStack_e8) *
                 (float)CONCAT13((byte)((uint)fVar59 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18)
                                 ,CONCAT12((byte)((uint)fVar59 >> 0x10) &
                                           (byte)((ulong)_UNK_038897c8 >> 0x10),
                                           CONCAT11((byte)((uint)fVar59 >> 8) &
                                                    (byte)((ulong)_UNK_038897c8 >> 8),
                                                    SUB41(fVar59,0) & (byte)_UNK_038897c8)));
        uVar42 = (undefined1)((uint)fVar55 >> 8);
        uVar43 = (undefined1)((uint)fVar55 >> 0x10);
        uVar44 = (undefined1)((uint)fVar55 >> 0x18);
        fVar49 = (*(float *)(param_1 + 0x14c) - (float)((ulong)uStack_e8 >> 0x20)) *
                 (float)CONCAT13((byte)((uint)fVar61 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38)
                                 ,CONCAT12((byte)((uint)fVar61 >> 0x10) &
                                           (byte)((ulong)_UNK_038897c8 >> 0x30),
                                           CONCAT11((byte)((uint)fVar61 >> 8) &
                                                    (byte)((ulong)_UNK_038897c8 >> 0x28),
                                                    SUB41(fVar61,0) &
                                                    (byte)((ulong)_UNK_038897c8 >> 0x20))));
        uVar45 = (undefined1)((uint)fVar49 >> 8);
        uVar46 = (undefined1)((uint)fVar49 >> 0x10);
        uVar47 = (undefined1)((uint)fVar49 >> 0x18);
        auVar7[4] = SUB41(fVar50,0);
        auVar7._0_4_ = fVar10;
        auVar7[5] = uVar39;
        auVar7[6] = uVar40;
        auVar7[7] = uVar41;
        auVar7[8] = SUB41(fVar55,0);
        auVar7[9] = uVar42;
        auVar7[10] = uVar43;
        auVar7[0xb] = uVar44;
        auVar7[0xc] = SUB41(fVar49,0);
        auVar7[0xd] = uVar45;
        auVar7[0xe] = uVar46;
        auVar7[0xf] = uVar47;
        auVar8[4] = SUB41(fVar50,0);
        auVar8._0_4_ = fVar10;
        auVar8[5] = uVar39;
        auVar8[6] = uVar40;
        auVar8[7] = uVar41;
        auVar8[8] = SUB41(fVar55,0);
        auVar8[9] = uVar42;
        auVar8[10] = uVar43;
        auVar8[0xb] = uVar44;
        auVar8[0xc] = SUB41(fVar49,0);
        auVar8[0xd] = uVar45;
        auVar8[0xe] = uVar46;
        auVar8[0xf] = uVar47;
        auVar48 = NEON_ext(auVar7,auVar8,8,1);
        bVar4 = auVar48._0_4_ + fVar10 + auVar48._4_4_ + fVar50 <= 0.0;
        do {
          iVar32 = *piVar1;
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar2) {
            *piVar1 = iVar32 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar38 = local_78[0];
        if (iVar32 + -1 == 0) {
          *(undefined8 *)(lVar34 + 0x18) = 0;
          (**(code **)(*plVar37 + 0x20))(plVar37);
          puVar38 = local_78[0];
        }
      }
      goto joined_r0x0259ec88;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar32 = iVar31;
  if (iVar31 == 0) {
LAB_0259ed38:
    bVar4 = true;
    puVar38 = local_78[0];
joined_r0x0259ec88:
    if (puVar38 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar38 + 1);
      do {
        iVar32 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar32 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar32 + -1 == 0) {
        puVar38[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar32 = __cxa_guard_acquire(PTR_DAT_04379498), iVar32 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar34 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar34;
        local_c0[0] = *puVar38;
        FUN_02a44274(lVar34 + 0xd8,local_c0);
      }
    }
LAB_0259e920:
    lVar36 = *(long *)(lVar36 + 8);
    piVar1 = (int *)(lVar36 + 0xc);
    do {
      iVar32 = *piVar1;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar2) {
        *piVar1 = iVar32 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar32 + -1 == 0) {
      *(undefined8 *)(lVar36 + 0x18) = 0;
      (**(code **)(*plVar35 + 0x20))(plVar35);
    }
    if ((((!bVar4) &&
         (FUN_01832ce8(param_1 + 0x140),
         -100.0 <= (float)CONCAT13(extraout_var_05,
                                   CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0)))))
        && (!NAN((float)CONCAT13(extraout_var_05,
                                 CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0)))) &&
            (float)CONCAT13(extraout_var_05,
                            CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0))) < 2020.0))
       && ((uVar9 = CONCAT11(extraout_var_11,extraout_var_08),
           -100.0 <= (float)CONCAT13(extraout_var_17,CONCAT12(extraout_var_14,uVar9)) &&
           (!NAN((float)CONCAT13(extraout_var_17,CONCAT12(extraout_var_14,uVar9))) &&
            (float)CONCAT13(extraout_var_17,CONCAT12(extraout_var_14,uVar9)) < 1180.0)))) {
      return 1;
    }
    return 0;
  }
  goto LAB_0259ea34;
}


