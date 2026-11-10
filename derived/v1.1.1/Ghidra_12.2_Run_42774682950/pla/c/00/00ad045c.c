/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad045c; name: FUN_00ad045c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ad045c(long param_1)

{
  unkbyte9 *pVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined *puVar31;
  long *plVar32;
  int iVar33;
  long *plVar34;
  long *plVar35;
  long lVar36;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar37;
  undefined1 extraout_var_03;
  undefined1 uVar38;
  undefined1 extraout_var_04;
  undefined1 uVar39;
  undefined1 extraout_var_05;
  undefined1 uVar40;
  undefined1 extraout_var_06;
  undefined1 uVar41;
  undefined1 extraout_var_07;
  undefined1 uVar42;
  undefined1 extraout_var_08;
  undefined1 uVar43;
  undefined1 extraout_var_09;
  undefined1 uVar44;
  undefined1 extraout_var_10;
  undefined1 uVar45;
  undefined1 extraout_var_11;
  undefined1 uVar46;
  undefined1 extraout_var_12;
  undefined1 uVar47;
  undefined1 extraout_var_13;
  undefined1 uVar48;
  float fVar49;
  float fVar51;
  undefined8 uVar50;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar63;
  float fVar64;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined8 uVar70;
  float fVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  float fVar76;
  float fVar77;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  long *local_28;
  
  FUN_0099d0e8(&local_40,*(undefined8 *)(param_1 + 0x310));
  if (local_40 == (undefined8 *)0x0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_009ac698(&local_30);
    if (local_40 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_40 + 1);
      do {
        iVar33 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar33 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar33 + -1 == 0) {
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar33 = __cxa_guard_acquire(PTR_DAT_04379498), iVar33 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar36 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar36;
        local_28 = (long *)*local_40;
        FUN_02a44274(lVar36 + 0xd8,&local_28);
      }
    }
  }
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_01a1ca9c(local_30);
  plVar32 = local_30;
  puVar31 = PTR_DAT_04379578;
  fVar57 = *(float *)(param_1 + 0x3b0);
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar33 = __cxa_guard_acquire(PTR_DAT_04379578), iVar33 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  plVar35 = (long *)PTR_DAT_04379588;
  plVar34 = (long *)PTR_DAT_04379580;
  lVar36 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar36;
  lVar36 = *(long *)(lVar36 + 200);
  uVar18 = *(undefined8 *)(lVar36 + 0x538);
  uVar11 = *(undefined8 *)(lVar36 + 0x530);
  fVar66 = (float)plVar32[0x1dcc] + (float)uVar11;
  fVar67 = (float)((ulong)plVar32[0x1dcc] >> 0x20) + (float)((ulong)uVar11 >> 0x20);
  fVar68 = (float)plVar32[0x1dcd] + (float)uVar18;
  fVar69 = (float)((ulong)plVar32[0x1dcd] >> 0x20) + (float)((ulong)uVar18 >> 0x20);
  if (((*puVar31 & 1) == 0) &&
     (iVar33 = __cxa_guard_acquire(PTR_DAT_04379578), plVar34 = (long *)PTR_DAT_04379580,
     plVar35 = (long *)PTR_DAT_04379588, iVar33 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
    plVar34 = (long *)PTR_DAT_04379580;
    plVar35 = (long *)PTR_DAT_04379588;
  }
  lVar36 = *plVar34;
  *plVar35 = lVar36;
  lVar36 = *(long *)(lVar36 + 200);
  uVar18 = *(undefined8 *)(lVar36 + 0x538);
  uVar11 = *(undefined8 *)(lVar36 + 0x530);
  fVar49 = fVar66 - ((float)plVar32[0x1dce] + (float)uVar11);
  fVar51 = fVar67 - ((float)((ulong)plVar32[0x1dce] >> 0x20) + (float)((ulong)uVar11 >> 0x20));
  fVar53 = fVar68 - ((float)plVar32[0x1dcf] + (float)uVar18);
  fVar54 = fVar69 - ((float)((ulong)plVar32[0x1dcf] >> 0x20) + (float)((ulong)uVar18 >> 0x20));
  fVar55 = fVar49 * fVar49;
  fVar56 = fVar51 * fVar51;
  auVar60._4_4_ = fVar56;
  auVar60._0_4_ = fVar55;
  auVar60._8_4_ = fVar53 * fVar53;
  auVar60._12_4_ = fVar54 * fVar54;
  auVar13._4_4_ = fVar56;
  auVar13._0_4_ = fVar55;
  auVar13._8_4_ = fVar53 * fVar53;
  auVar13._12_4_ = fVar54 * fVar54;
  auVar60 = NEON_ext(auVar60,auVar13,8,1);
  fVar56 = SQRT(auVar60._0_4_ + fVar55 + auVar60._4_4_ + fVar56);
  fVar55 = 0.001;
  if (1.1920929e-07 <= fVar56) {
    fVar55 = fVar56;
  }
  fVar57 = fVar57 / fVar55;
  fVar66 = fVar66 - fVar49 * fVar57;
  fVar67 = fVar67 - fVar51 * fVar57;
  fVar68 = fVar68 - fVar53 * fVar57;
  fVar69 = fVar69 - fVar54 * fVar57;
  FUN_01a1c8d8(local_30,&local_40);
  fVar57 = *(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0;
  FUN_009a7ff4(SUB41(fVar57 * (float)((ulong)local_40 >> 0x20),0),fVar57 * SUB84(local_40,0),
               fVar57 * (float)uStack_38);
  fVar49 = (float)CONCAT13(extraout_var_09,
                           CONCAT12(extraout_var_08,CONCAT11(extraout_var_07,extraout_var_06)));
  fVar77 = (float)(CONCAT17(extraout_var_13,
                            CONCAT16(extraout_var_12,
                                     CONCAT15(extraout_var_11,CONCAT14(extraout_var_10,fVar49)))) >>
                  0x20);
  fVar57 = (float)CONCAT13(extraout_var_01,
                           CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
  fVar76 = (float)(CONCAT17(extraout_var_05,
                            CONCAT16(extraout_var_04,
                                     CONCAT15(extraout_var_03,CONCAT14(extraout_var_02,fVar57)))) >>
                  0x20);
  pVar1 = (unkbyte9 *)(param_1 + 0x3c0);
  uVar11 = *(undefined8 *)(param_1 + 0x3c8);
  uVar37 = (undefined1)((ulong)uVar11 >> 8);
  uVar38 = (undefined1)((ulong)uVar11 >> 0x10);
  uVar39 = (undefined1)((ulong)uVar11 >> 0x18);
  uVar40 = (undefined1)((ulong)uVar11 >> 0x20);
  uVar41 = (undefined1)((ulong)uVar11 >> 0x28);
  uVar42 = (undefined1)((ulong)uVar11 >> 0x30);
  uVar43 = (undefined1)((ulong)uVar11 >> 0x38);
  fVar51 = fVar57 * (float)_DAT_03889ac0;
  fVar53 = fVar76 * (float)((ulong)_DAT_03889ac0 >> 0x20);
  auVar61._0_8_ = CONCAT44(fVar53,fVar51);
  auVar61._8_4_ = fVar49 * (float)_UNK_03889ac8;
  auVar61._12_4_ = fVar77 * (float)((ulong)_UNK_03889ac8 >> 0x20);
  auVar14[9] = uVar37;
  auVar14._0_9_ = *pVar1;
  auVar14[10] = uVar38;
  auVar14[0xb] = uVar39;
  auVar14[0xc] = uVar40;
  auVar14[0xd] = uVar41;
  auVar14[0xe] = uVar42;
  auVar14[0xf] = uVar43;
  uVar11 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a580);
  auVar15[9] = uVar37;
  auVar15._0_9_ = *pVar1;
  auVar15[10] = uVar38;
  auVar15[0xb] = uVar39;
  auVar15[0xc] = uVar40;
  auVar15[0xd] = uVar41;
  auVar15[0xe] = uVar42;
  auVar15[0xf] = uVar43;
  uVar70 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a680);
  uVar72 = a64_TBL(ZEXT816(0),auVar61,DAT_0388a6c8);
  uVar50 = a64_TBL(ZEXT816(0),auVar61,DAT_0388a580);
  fVar55 = (float)((ulong)uVar11 >> 0x20);
  fVar54 = (float)*(undefined8 *)pVar1;
  fVar12 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
  fVar52 = (float)((ulong)uVar70 >> 0x20);
  uVar73 = a64_TBL(ZEXT816(0),auVar61,DAT_0388a680);
  uVar74 = a64_TBL(ZEXT816(0),auVar61,DAT_0388a880);
  uVar75 = a64_TBL(ZEXT816(0),auVar61,DAT_0388a790);
  auVar62._8_8_ = auVar61._0_8_;
  auVar62._0_8_ = auVar61._0_8_;
  uVar59 = a64_TBL(ZEXT816(0),auVar62,DAT_0388a648);
  auVar16[9] = uVar37;
  auVar16._0_9_ = *pVar1;
  auVar16[10] = uVar38;
  auVar16[0xb] = uVar39;
  auVar16[0xc] = uVar40;
  auVar16[0xd] = uVar41;
  auVar16[0xe] = uVar42;
  auVar16[0xf] = uVar43;
  uVar18 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a880);
  fVar17 = (float)((ulong)uVar18 >> 0x20);
  auVar20._4_4_ = fVar76;
  auVar20._0_4_ = fVar57;
  auVar20._8_4_ = fVar49;
  auVar20._12_4_ = fVar77;
  uVar19 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a580);
  fVar58 = (float)_DAT_03889ad0;
  fVar63 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar64 = (float)_UNK_03889ad8;
  fVar65 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  fVar51 = (fVar51 * (float)uVar11 + fVar58 * fVar54 * (float)uVar50 +
           fVar58 * (float)uVar18 * (float)uVar73) - (float)uVar70 * (float)uVar74;
  fVar53 = (fVar53 * fVar55 + fVar63 * fVar12 * (float)((ulong)uVar50 >> 0x20) +
           fVar63 * fVar17 * (float)((ulong)uVar73 >> 0x20)) -
           fVar52 * (float)((ulong)uVar74 >> 0x20);
  uVar37 = SUB41(fVar53,0);
  uVar38 = (undefined1)((uint)fVar53 >> 8);
  uVar39 = (undefined1)((uint)fVar53 >> 0x10);
  uVar40 = (undefined1)((uint)fVar53 >> 0x18);
  fVar56 = (auVar61._8_4_ * (float)uVar11 + fVar64 * (float)uVar70 * (float)uVar72 +
           fVar64 * fVar54 * (float)uVar59) - (float)uVar18 * (float)uVar75;
  uVar41 = SUB41(fVar56,0);
  uVar42 = (undefined1)((uint)fVar56 >> 8);
  uVar43 = (undefined1)((uint)fVar56 >> 0x10);
  uVar44 = (undefined1)((uint)fVar56 >> 0x18);
  fVar12 = (auVar61._12_4_ * fVar55 + fVar65 * fVar52 * (float)((ulong)uVar72 >> 0x20) +
           fVar65 * fVar12 * (float)((ulong)uVar59 >> 0x20)) -
           fVar17 * (float)((ulong)uVar75 >> 0x20);
  uVar45 = SUB41(fVar12,0);
  uVar46 = (undefined1)((uint)fVar12 >> 8);
  uVar47 = (undefined1)((uint)fVar12 >> 0x10);
  uVar48 = (undefined1)((uint)fVar12 >> 0x18);
  auVar21._4_4_ = fVar76;
  auVar21._0_4_ = fVar57;
  auVar21._8_4_ = fVar49;
  auVar21._12_4_ = fVar77;
  uVar72 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a680);
  auVar5[4] = uVar37;
  auVar5._0_4_ = fVar51;
  auVar5[5] = uVar38;
  auVar5[6] = uVar39;
  auVar5[7] = uVar40;
  auVar5[8] = uVar41;
  auVar5[9] = uVar42;
  auVar5[10] = uVar43;
  auVar5[0xb] = uVar44;
  auVar5[0xc] = uVar45;
  auVar5[0xd] = uVar46;
  auVar5[0xe] = uVar47;
  auVar5[0xf] = uVar48;
  uVar59 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a580);
  auVar6[4] = uVar37;
  auVar6._0_4_ = fVar51;
  auVar6[5] = uVar38;
  auVar6[6] = uVar39;
  auVar6[7] = uVar40;
  auVar6[8] = uVar41;
  auVar6[9] = uVar42;
  auVar6[10] = uVar43;
  auVar6[0xb] = uVar44;
  auVar6[0xc] = uVar45;
  auVar6[0xd] = uVar46;
  auVar6[0xe] = uVar47;
  auVar6[0xf] = uVar48;
  uVar73 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a6c8);
  fVar71 = (float)((ulong)uVar72 >> 0x20);
  fVar17 = (float)((ulong)uVar19 >> 0x20);
  auVar7[4] = uVar37;
  auVar7._0_4_ = fVar51;
  auVar7[5] = uVar38;
  auVar7[6] = uVar39;
  auVar7[7] = uVar40;
  auVar7[8] = uVar41;
  auVar7[9] = uVar42;
  auVar7[10] = uVar43;
  auVar7[0xb] = uVar44;
  auVar7[0xc] = uVar45;
  auVar7[0xd] = uVar46;
  auVar7[0xe] = uVar47;
  auVar7[0xf] = uVar48;
  uVar18 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
  auVar8[4] = uVar37;
  auVar8._0_4_ = fVar51;
  auVar8[5] = uVar38;
  auVar8[6] = uVar39;
  auVar8[7] = uVar40;
  auVar8[8] = uVar41;
  auVar8[9] = uVar42;
  auVar8[10] = uVar43;
  auVar8[0xb] = uVar44;
  auVar8[0xc] = uVar45;
  auVar8[0xd] = uVar46;
  auVar8[0xe] = uVar47;
  auVar8[0xf] = uVar48;
  uVar74 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a790);
  auVar9[4] = uVar37;
  auVar9._0_4_ = fVar51;
  auVar9[5] = uVar38;
  auVar9[6] = uVar39;
  auVar9[7] = uVar40;
  auVar9[8] = uVar41;
  auVar9[9] = uVar42;
  auVar9[10] = uVar43;
  auVar9[0xb] = uVar44;
  auVar9[0xc] = uVar45;
  auVar9[0xd] = uVar46;
  auVar9[0xe] = uVar47;
  auVar9[0xf] = uVar48;
  uVar70 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a880);
  auVar22._4_4_ = fVar76;
  auVar22._0_4_ = fVar57;
  auVar22._8_4_ = fVar49;
  auVar22._12_4_ = fVar77;
  uVar50 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a880);
  fVar52 = (float)((ulong)uVar50 >> 0x20);
  auVar10[4] = uVar37;
  auVar10._0_4_ = fVar51;
  auVar10[5] = uVar38;
  auVar10[6] = uVar39;
  auVar10[7] = uVar40;
  auVar10[8] = SUB41(fVar51,0);
  auVar10[9] = (char)((uint)fVar51 >> 8);
  auVar10[10] = (char)((uint)fVar51 >> 0x10);
  auVar10[0xb] = (char)((uint)fVar51 >> 0x18);
  auVar10[0xc] = uVar37;
  auVar10[0xd] = uVar38;
  auVar10[0xe] = uVar39;
  auVar10[0xf] = uVar40;
  uVar11 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a648);
  fVar55 = fVar57 * (float)uVar11;
  fVar54 = fVar76 * (float)((ulong)uVar11 >> 0x20);
  uVar27 = (ulong)_UNK_038897c8 >> 0x20;
  uVar28 = (ulong)_UNK_038897c8 >> 0x28;
  uVar29 = (ulong)_UNK_038897c8 >> 0x30;
  uVar30 = (ulong)_UNK_038897c8 >> 0x38;
  uVar23 = (ulong)_DAT_038897c0 >> 0x20;
  uVar24 = (ulong)_DAT_038897c0 >> 0x28;
  uVar25 = (ulong)_DAT_038897c0 >> 0x30;
  uVar26 = (ulong)_DAT_038897c0 >> 0x38;
  fVar58 = ((float)uVar19 * fVar51 + fVar58 * fVar57 * (float)uVar59 +
           fVar58 * (float)uVar50 * (float)uVar18) - (float)uVar72 * (float)uVar70;
  fVar53 = (fVar17 * fVar53 + fVar63 * fVar76 * (float)((ulong)uVar59 >> 0x20) +
           fVar63 * fVar52 * (float)((ulong)uVar18 >> 0x20)) -
           fVar71 * (float)((ulong)uVar70 >> 0x20);
  fVar51 = ((float)uVar19 * fVar56 + fVar64 * (float)uVar72 * (float)uVar73 + fVar64 * fVar55) -
           (float)uVar50 * (float)uVar74;
  fVar54 = (fVar17 * fVar12 + fVar65 * fVar71 * (float)((ulong)uVar73 >> 0x20) +
           fVar65 * (float)(CONCAT17((char)((uint)fVar54 >> 0x18),
                                     CONCAT16((char)((uint)fVar54 >> 0x10),
                                              CONCAT15((char)((uint)fVar54 >> 8),
                                                       CONCAT14(SUB41(fVar54,0),fVar55)))) >> 0x20))
           - fVar52 * (float)((ulong)uVar74 >> 0x20);
  fVar51 = (float)CONCAT13((byte)((uint)fVar51 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18),
                           CONCAT12((byte)((uint)fVar51 >> 0x10) &
                                    (byte)((ulong)_UNK_038897c8 >> 0x10),
                                    CONCAT11((byte)((uint)fVar51 >> 8) &
                                             (byte)((ulong)_UNK_038897c8 >> 8),
                                             SUB41(fVar51,0) & (byte)_UNK_038897c8)));
  fVar55 = (float)CONCAT13((byte)((uint)fVar58 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18),
                           CONCAT12((byte)((uint)fVar58 >> 0x10) &
                                    (byte)((ulong)_DAT_038897c0 >> 0x10),
                                    CONCAT11((byte)((uint)fVar58 >> 8) &
                                             (byte)((ulong)_DAT_038897c0 >> 8),
                                             SUB41(fVar58,0) & (byte)_DAT_038897c0)));
  FUN_009c69bc(&local_28,param_1);
  fVar67 = (float)(CONCAT17((char)((uint)fVar67 >> 0x18),
                            CONCAT16((char)((uint)fVar67 >> 0x10),
                                     CONCAT15((char)((uint)fVar67 >> 8),
                                              CONCAT14(SUB41(fVar67,0),fVar66)))) >> 0x20) +
           (float)(CONCAT17((byte)((uint)fVar53 >> 0x18) & (byte)uVar26,
                            CONCAT16((byte)((uint)fVar53 >> 0x10) & (byte)uVar25,
                                     CONCAT15((byte)((uint)fVar53 >> 8) & (byte)uVar24,
                                              CONCAT14(SUB41(fVar53,0) & (byte)uVar23,fVar55)))) >>
                  0x20);
  fVar69 = (float)(CONCAT17((char)((uint)fVar69 >> 0x18),
                            CONCAT16((char)((uint)fVar69 >> 0x10),
                                     CONCAT15((char)((uint)fVar69 >> 8),
                                              CONCAT14(SUB41(fVar69,0),fVar68)))) >> 0x20) +
           (float)(CONCAT17((byte)((uint)fVar54 >> 0x18) & (byte)uVar30,
                            CONCAT16((byte)((uint)fVar54 >> 0x10) & (byte)uVar29,
                                     CONCAT15((byte)((uint)fVar54 >> 8) & (byte)uVar28,
                                              CONCAT14(SUB41(fVar54,0) & (byte)uVar27,fVar51)))) >>
                  0x20);
  *(undefined1 *)(local_28 + 0x1c) = 1;
  local_28[0x19] = CONCAT44(fVar77,fVar49);
  local_28[0x18] = CONCAT44(fVar76,fVar57);
  local_28[0x1b] =
       CONCAT17((char)((uint)fVar69 >> 0x18),
                CONCAT16((char)((uint)fVar69 >> 0x10),
                         CONCAT15((char)((uint)fVar69 >> 8),
                                  CONCAT14(SUB41(fVar69,0),fVar68 + fVar51))));
  local_28[0x1a] =
       CONCAT17((char)((uint)fVar67 >> 0x18),
                CONCAT16((char)((uint)fVar67 >> 0x10),
                         CONCAT15((char)((uint)fVar67 >> 8),
                                  CONCAT14(SUB41(fVar67,0),fVar66 + fVar55))));
  if (local_28 != (long *)0x0) {
    lVar36 = local_28[0xb];
    piVar2 = (int *)(lVar36 + 0xc);
    do {
      iVar33 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar33 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar33 + -1 == 0) {
      *(undefined8 *)(lVar36 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  if (local_30 != (long *)0x0) {
    lVar36 = local_30[0xb];
    piVar2 = (int *)(lVar36 + 0xc);
    do {
      iVar33 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar33 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar33 + -1 == 0) {
      *(undefined8 *)(lVar36 + 0x18) = 0;
      (**(code **)(*local_30 + 0x20))();
    }
  }
  return;
}


