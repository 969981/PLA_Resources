/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02be3494; name: FUN_02be3494
 */


void FUN_02be3494(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined5 uVar27;
  undefined8 *puVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  byte extraout_b0;
  byte bVar32;
  byte extraout_var;
  byte bVar33;
  byte extraout_var_00;
  byte bVar34;
  byte extraout_var_01;
  byte bVar35;
  undefined1 extraout_var_02;
  undefined1 uVar36;
  byte bVar37;
  undefined1 extraout_var_03;
  undefined1 uVar38;
  byte bVar39;
  undefined1 extraout_var_04;
  undefined1 uVar40;
  byte bVar41;
  undefined1 extraout_var_05;
  undefined1 uVar42;
  byte bVar43;
  byte extraout_var_06;
  byte bVar44;
  byte extraout_var_07;
  byte bVar45;
  byte extraout_var_08;
  byte bVar46;
  byte extraout_var_09;
  byte bVar47;
  undefined1 extraout_var_10;
  byte bVar48;
  undefined1 extraout_var_11;
  byte bVar49;
  undefined1 extraout_var_12;
  byte bVar50;
  undefined1 extraout_var_13;
  byte bVar51;
  float fVar52;
  ulong uVar54;
  int iVar63;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  int iVar53;
  undefined8 uVar55;
  float fVar61;
  int iVar62;
  float fVar64;
  int iVar65;
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  undefined1 uVar78;
  byte bVar79;
  undefined1 uVar80;
  byte bVar81;
  undefined1 uVar82;
  byte bVar83;
  undefined1 uVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  float fVar91;
  byte bVar95;
  float fVar92;
  byte bVar93;
  byte bVar94;
  byte bVar96;
  float fVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  float fVar102;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined8 uVar113;
  undefined8 uVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  float fVar118;
  undefined8 uVar119;
  undefined8 uVar120;
  undefined8 uVar121;
  undefined8 uVar122;
  float fVar125;
  float fVar126;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  float fVar127;
  float fVar128;
  float fVar129;
  undefined8 uVar130;
  undefined8 uVar131;
  float fVar132;
  float fVar133;
  undefined8 *local_50;
  undefined8 uStack_48;
  long local_40;
  long *local_38;
  long *local_30;
  undefined8 local_28;
  
  fVar97 = param_4._8_4_;
  fVar91 = param_4._4_4_;
  fVar102 = param_4._0_4_;
  uVar84 = param_3[0xf];
  uVar82 = param_3[0xe];
  uVar80 = param_3[0xd];
  uVar78 = param_3[0xc];
  bVar47 = param_3[0xb];
  bVar46 = param_3[10];
  bVar45 = param_3[9];
  bVar44 = param_3[8];
  uVar42 = param_3[7];
  uVar40 = param_3[6];
  uVar38 = param_3[5];
  uVar36 = param_3[4];
  bVar77 = param_3[3];
  bVar76 = param_3[2];
  bVar75 = param_3[1];
  bVar74 = param_3[0];
  if ((*(char *)(param_5 + 0x78) != '\0') && (*(int *)(param_5 + 0x7c) == 2)) {
    pauVar1 = (undefined1 (*) [16])(*(long *)(param_5 + 0xd0) + 0x90);
    lVar30 = *(long *)*pauVar1;
    auVar56 = *pauVar1;
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_008c4b3c(&local_50,param_5 + 0x68);
    FUN_00956dac(&local_30,&local_50);
    puVar28 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_50 + 1);
      do {
        iVar53 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar53 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar53 + -1 == 0) {
        local_50[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar53 = __cxa_guard_acquire(PTR_DAT_04379498), iVar53 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar31 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar31;
        local_28 = *puVar28;
        FUN_02a44274(lVar31 + 0xd8,&local_28);
      }
    }
    plVar29 = local_30;
    if (local_30 != (long *)0x0) {
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      auVar56 = NEON_ext(auVar56,auVar56,8,1);
      auVar115._8_8_ = auVar56._8_8_;
      fVar52 = auVar56._0_4_;
      auVar115._0_8_ = CONCAT44(0,fVar52);
      auVar56 = auVar115;
      FUN_0095aa3c(&local_50,local_30 + 0x4e);
      local_40 = plVar29[0x50];
      FUN_02bd4a68(&local_38,&local_50);
      puVar28 = local_50;
      if (local_50 != (undefined8 *)0x0) {
        piVar2 = (int *)(local_50 + 1);
        do {
          iVar53 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar53 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar53 + -1 == 0) {
          local_50[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar53 = __cxa_guard_acquire(PTR_DAT_04379498), iVar53 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar31 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar31;
          local_28 = *puVar28;
          FUN_02a44274(lVar31 + 0xd8,&local_28);
        }
      }
      if (local_38 == (long *)0x0) {
        *(undefined1 *)(local_30 + 0x1c) = 1;
        local_30[0x1b] = auVar115._0_8_;
        local_30[0x1a] = lVar30;
      }
      else {
        (**(code **)(*local_38 + 0x40))();
        auVar57._4_12_ = auVar56._4_12_;
        fVar92 = auVar56._4_4_;
        if (*(char *)(param_5 + 800) == '\0') {
          bVar70 = auVar56[0];
          bVar71 = auVar56[1];
          bVar72 = auVar56[2];
          bVar73 = auVar56[3];
          bVar79 = 0;
          bVar81 = 0;
          bVar83 = 0;
          bVar85 = 0;
          uVar27 = CONCAT14(extraout_var_05,
                            CONCAT13(extraout_var_04,
                                     CONCAT12(extraout_var_03,CONCAT11(extraout_var_02,bVar77))));
          fVar108 = (float)((uint5)uVar27 >> 8);
          auVar58._4_12_ = auVar57._4_12_;
          auVar58._0_4_ = fVar108;
          fVar110 = (float)(CONCAT18(uVar42,CONCAT17(uVar40,CONCAT16(uVar38,CONCAT15(uVar36,uVar27))
                                                    )) >> 0x28);
          auVar123._0_8_ = auVar58._0_8_;
          auVar123._8_4_ = fVar110;
          auVar123._12_4_ = auVar56._12_4_;
          auVar59._8_8_ = auVar123._8_8_;
          auVar59._4_4_ = fVar92;
          auVar59._0_4_ = fVar108;
          auVar60._0_12_ = auVar59._0_12_;
          auVar60._12_4_ = 0;
          bVar37 = auVar56[8];
          bVar39 = auVar56[9];
          bVar41 = auVar56[10];
          bVar43 = auVar56[0xb];
          bVar48 = 0;
          bVar49 = 0;
          bVar50 = 0;
          bVar51 = 0;
          fVar108 = 0.0 - ((float)CONCAT13(extraout_var_01,
                                           CONCAT12(extraout_var_00,
                                                    CONCAT11(extraout_var,extraout_b0))) * fVar102 +
                           fVar108 * fVar91 +
                          (float)CONCAT13(extraout_var_09,
                                          CONCAT12(extraout_var_08,
                                                   (short)(CONCAT12(extraout_var_07,
                                                                    CONCAT11(extraout_var_06,
                                                                             extraout_var_05)) >> 8)
                                                  )) * fVar97);
          fVar92 = 0.0 - (auVar56._0_4_ * fVar102 + fVar92 * fVar91 + auVar56._8_4_ * fVar97);
          fVar110 = 0.0 - ((float)CONCAT13(bVar77,CONCAT12(bVar76,CONCAT11(bVar75,bVar74))) *
                           fVar102 + fVar110 * fVar91 +
                          (float)CONCAT13(bVar47,CONCAT12(bVar46,CONCAT11(bVar45,bVar44))) * fVar97)
          ;
          fVar102 = 0.0 - (fVar102 * 0.0 + fVar91 * 0.0 + fVar97 * 0.0);
          bVar32 = extraout_var_06;
          bVar33 = extraout_var_07;
          bVar34 = extraout_var_08;
          bVar35 = extraout_var_09;
          bVar66 = extraout_b0;
          bVar67 = extraout_var;
          bVar68 = extraout_var_00;
          bVar69 = extraout_var_01;
        }
        else {
          uVar19 = a64_TBL(ZEXT816(0),auVar56,DAT_0388a880);
          uVar20 = a64_TBL(ZEXT816(0),auVar56,DAT_0388a6f0);
          auVar10[1] = bVar75;
          auVar10[0] = bVar74;
          auVar10[2] = bVar76;
          auVar10[3] = bVar77;
          auVar10[4] = uVar36;
          auVar10[5] = uVar38;
          auVar10[6] = uVar40;
          auVar10[7] = uVar42;
          auVar10[8] = bVar44;
          auVar10[9] = bVar45;
          auVar10[10] = bVar46;
          auVar10[0xb] = bVar47;
          auVar10[0xc] = uVar78;
          auVar10[0xd] = uVar80;
          auVar10[0xe] = uVar82;
          auVar10[0xf] = uVar84;
          uVar113 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a680);
          auVar11[1] = bVar75;
          auVar11[0] = bVar74;
          auVar11[2] = bVar76;
          auVar11[3] = bVar77;
          auVar11[4] = uVar36;
          auVar11[5] = uVar38;
          auVar11[6] = uVar40;
          auVar11[7] = uVar42;
          auVar11[8] = bVar44;
          auVar11[9] = bVar45;
          auVar11[10] = bVar46;
          auVar11[0xb] = bVar47;
          auVar11[0xc] = uVar78;
          auVar11[0xd] = uVar80;
          auVar11[0xe] = uVar82;
          auVar11[0xf] = uVar84;
          uVar119 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a6d8);
          uVar120 = a64_TBL(ZEXT816(0),auVar56,DAT_0388a6d8);
          uVar114 = a64_TBL(ZEXT816(0),auVar56,DAT_0388a680);
          auVar12[1] = bVar75;
          auVar12[0] = bVar74;
          auVar12[2] = bVar76;
          auVar12[3] = bVar77;
          auVar12[4] = uVar36;
          auVar12[5] = uVar38;
          auVar12[6] = uVar40;
          auVar12[7] = uVar42;
          auVar12[8] = bVar44;
          auVar12[9] = bVar45;
          auVar12[10] = bVar46;
          auVar12[0xb] = bVar47;
          auVar12[0xc] = uVar78;
          auVar12[0xd] = uVar80;
          auVar12[0xe] = uVar82;
          auVar12[0xf] = uVar84;
          uVar121 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a880);
          auVar13[1] = bVar75;
          auVar13[0] = bVar74;
          auVar13[2] = bVar76;
          auVar13[3] = bVar77;
          auVar13[4] = uVar36;
          auVar13[5] = uVar38;
          auVar13[6] = uVar40;
          auVar13[7] = uVar42;
          auVar13[8] = bVar44;
          auVar13[9] = bVar45;
          auVar13[10] = bVar46;
          auVar13[0xb] = bVar47;
          auVar13[0xc] = uVar78;
          auVar13[0xd] = uVar80;
          auVar13[0xe] = uVar82;
          auVar13[0xf] = uVar84;
          uVar26 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a6f0);
          uVar14 = CONCAT13(bVar77,CONCAT12(bVar76,CONCAT11(bVar75,bVar74)));
          uVar5 = CONCAT13(extraout_var_01,
                           CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
          fVar108 = (float)CONCAT13(extraout_var_01,
                                    CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
                    (float)uVar19 * (float)uVar113 -
                    (float)CONCAT13(extraout_var_01,
                                    CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
                    (float)uVar114 * (float)uVar121;
          fVar110 = (float)CONCAT13(extraout_var_05,
                                    CONCAT12(extraout_var_04,
                                             CONCAT11(extraout_var_03,extraout_var_02))) *
                    (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar113 >> 0x20) -
                    (float)CONCAT13(extraout_var_05,
                                    CONCAT12(extraout_var_04,
                                             CONCAT11(extraout_var_03,extraout_var_02))) *
                    (float)((ulong)uVar114 >> 0x20) * (float)((ulong)uVar121 >> 0x20);
          fVar111 = (float)CONCAT13(extraout_var_09,
                                    CONCAT12(extraout_var_08,
                                             CONCAT11(extraout_var_07,extraout_var_06))) *
                    (float)uVar20 * (float)uVar119 -
                    (float)CONCAT13(extraout_var_09,
                                    CONCAT12(extraout_var_08,
                                             CONCAT11(extraout_var_07,extraout_var_06))) *
                    (float)uVar120 * (float)uVar26;
          fVar112 = (float)CONCAT13(extraout_var_13,
                                    CONCAT12(extraout_var_12,
                                             CONCAT11(extraout_var_11,extraout_var_10))) *
                    (float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar119 >> 0x20) -
                    (float)CONCAT13(extraout_var_13,
                                    CONCAT12(extraout_var_12,
                                             CONCAT11(extraout_var_11,extraout_var_10))) *
                    (float)((ulong)uVar120 >> 0x20) * (float)((ulong)uVar26 >> 0x20);
          auVar21._4_4_ = fVar110;
          auVar21._0_4_ = fVar108;
          auVar21._8_4_ = fVar111;
          auVar21._12_4_ = fVar112;
          auVar22._4_4_ = fVar110;
          auVar22._0_4_ = fVar108;
          auVar22._8_4_ = fVar111;
          auVar22._12_4_ = fVar112;
          auVar115 = NEON_ext(auVar21,auVar22,8,1);
          fVar109 = fVar108 + fVar110 + auVar115._0_4_ + auVar115._4_4_;
          auVar23._4_4_ = fVar109;
          auVar23._0_4_ = fVar109;
          auVar23._8_4_ = fVar109;
          auVar23._12_4_ = fVar109;
          auVar115 = NEON_frecpe(auVar23,4);
          auVar24._4_4_ = fVar109;
          auVar24._0_4_ = fVar109;
          auVar24._8_4_ = fVar109;
          auVar24._12_4_ = fVar109;
          auVar123 = NEON_frecps(auVar115,auVar24,4);
          auVar116._0_4_ = auVar115._0_4_ * auVar123._0_4_;
          auVar116._4_4_ = auVar115._4_4_ * auVar123._4_4_;
          auVar116._8_4_ = auVar115._8_4_ * auVar123._8_4_;
          auVar116._12_4_ = auVar115._12_4_ * auVar123._12_4_;
          auVar25._4_4_ = fVar109;
          auVar25._0_4_ = fVar109;
          auVar25._8_4_ = fVar109;
          auVar25._12_4_ = fVar109;
          auVar115 = NEON_frecps(auVar116,auVar25,4);
          fVar110 = auVar116._0_4_ * auVar115._0_4_;
          fVar111 = auVar116._4_4_ * auVar115._4_4_;
          fVar112 = auVar116._8_4_ * auVar115._8_4_;
          fVar15 = auVar116._12_4_ * auVar115._12_4_;
          auVar57._0_4_ = auVar56._8_4_;
          uVar54 = auVar57._0_8_ & 0xffffffff;
          auVar117._4_4_ = auVar56._0_4_;
          auVar117._0_4_ = uVar5;
          auVar117._8_4_ = uVar14;
          auVar117._12_4_ = 0;
          auVar124._4_4_ = fVar92;
          auVar124._0_4_ =
               (int)(CONCAT17(extraout_var_05,
                              CONCAT16(extraout_var_04,
                                       CONCAT15(extraout_var_03,CONCAT14(extraout_var_02,uVar5))))
                    >> 0x20);
          auVar124._8_4_ =
               (int)(CONCAT17(uVar42,CONCAT16(uVar40,CONCAT15(uVar38,CONCAT14(uVar36,uVar14)))) >>
                    0x20);
          auVar124._12_4_ = 0;
          uVar6 = (undefined2)
                  (CONCAT12(extraout_var_07,CONCAT11(extraout_var_06,extraout_var_05)) >> 8);
          uVar36 = (undefined1)uVar54;
          uVar38 = (undefined1)(uVar54 >> 8);
          uVar40 = (undefined1)(uVar54 >> 0x10);
          uVar42 = (undefined1)(uVar54 >> 0x18);
          uVar55 = a64_TBL(ZEXT816(0),auVar124,DAT_0388a880);
          uVar120 = a64_TBL(ZEXT816(0),auVar124,DAT_0388a6f0);
          auVar56[2] = extraout_var_08;
          auVar56._0_2_ = uVar6;
          auVar56[3] = extraout_var_09;
          auVar56[4] = uVar36;
          auVar56[5] = uVar38;
          auVar56[6] = uVar40;
          auVar56[7] = uVar42;
          auVar56[8] = bVar44;
          auVar56[9] = bVar45;
          auVar56[10] = bVar46;
          auVar56[0xb] = bVar47;
          auVar56._12_4_ = 0;
          uVar130 = a64_TBL(ZEXT816(0),auVar56,DAT_0388a6d8);
          auVar7[2] = extraout_var_08;
          auVar7._0_2_ = uVar6;
          auVar7[3] = extraout_var_09;
          auVar7[4] = uVar36;
          auVar7[5] = uVar38;
          auVar7[6] = uVar40;
          auVar7[7] = uVar42;
          auVar7[8] = bVar44;
          auVar7[9] = bVar45;
          auVar7[10] = bVar46;
          auVar7[0xb] = bVar47;
          auVar7._12_4_ = 0;
          uVar121 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a680);
          fVar128 = (float)((ulong)uVar121 >> 0x20);
          auVar8[2] = extraout_var_08;
          auVar8._0_2_ = uVar6;
          auVar8[3] = extraout_var_09;
          auVar8[4] = uVar36;
          auVar8[5] = uVar38;
          auVar8[6] = uVar40;
          auVar8[7] = uVar42;
          auVar8[8] = bVar44;
          auVar8[9] = bVar45;
          auVar8[10] = bVar46;
          auVar8[0xb] = bVar47;
          auVar8._12_4_ = 0;
          uVar131 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a880);
          auVar9[2] = extraout_var_08;
          auVar9._0_2_ = uVar6;
          auVar9[3] = extraout_var_09;
          auVar9[4] = uVar36;
          auVar9[5] = uVar38;
          auVar9[6] = uVar40;
          auVar9[7] = uVar42;
          auVar9[8] = bVar44;
          auVar9[9] = bVar45;
          auVar9[10] = bVar46;
          auVar9[0xb] = bVar47;
          auVar9._12_4_ = 0;
          uVar19 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a6f0);
          uVar26 = a64_TBL(ZEXT816(0),auVar117,DAT_0388a880);
          fVar129 = (float)((ulong)uVar130 >> 0x20);
          uVar113 = a64_TBL(ZEXT816(0),auVar117,DAT_0388a6f0);
          uVar20 = a64_TBL(ZEXT816(0),auVar124,DAT_0388a680);
          uVar122 = a64_TBL(ZEXT816(0),auVar124,DAT_0388a6d8);
          uVar119 = a64_TBL(ZEXT816(0),auVar117,DAT_0388a6d8);
          fVar107 = (float)((ulong)uVar119 >> 0x20);
          uVar114 = a64_TBL(ZEXT816(0),auVar117,DAT_0388a680);
          fVar106 = (float)((ulong)uVar114 >> 0x20);
          fVar61 = (float)((ulong)uVar55 >> 0x20);
          fVar64 = (float)((ulong)uVar120 >> 0x20);
          fVar92 = (float)((ulong)uVar20 >> 0x20);
          fVar132 = (float)((ulong)uVar131 >> 0x20);
          fVar108 = (float)((ulong)uVar122 >> 0x20);
          fVar133 = (float)((ulong)uVar19 >> 0x20);
          fVar16 = (float)((ulong)uVar26 >> 0x20);
          fVar17 = (float)((ulong)uVar113 >> 0x20);
          fVar118 = fVar110 * ((float)uVar55 * (float)uVar121 - (float)uVar131 * (float)uVar20);
          fVar125 = fVar111 * (fVar61 * fVar128 - fVar132 * fVar92);
          fVar126 = fVar112 * ((float)uVar120 * (float)uVar130 - (float)uVar19 * (float)uVar122);
          fVar127 = fVar15 * (fVar64 * fVar129 - fVar133 * fVar108);
          fVar18 = fVar110 * ((float)uVar131 * (float)uVar114 - (float)uVar26 * (float)uVar121);
          fVar128 = fVar111 * (fVar132 * fVar106 - fVar16 * fVar128);
          fVar132 = fVar112 * ((float)uVar19 * (float)uVar119 - (float)uVar113 * (float)uVar130);
          fVar129 = fVar15 * (fVar133 * fVar107 - fVar17 * fVar129);
          fVar110 = fVar110 * ((float)uVar20 * (float)uVar26 - (float)uVar55 * (float)uVar114);
          fVar111 = fVar111 * (fVar92 * fVar16 - fVar61 * fVar106);
          fVar112 = fVar112 * ((float)uVar122 * (float)uVar113 - (float)uVar120 * (float)uVar119);
          fVar15 = fVar15 * (fVar108 * fVar17 - fVar64 * fVar107);
          iVar53 = -(uint)(fVar109 == 0.0);
          iVar62 = -(uint)(fVar109 == 0.0);
          iVar63 = -(uint)(fVar109 == 0.0);
          iVar65 = -(uint)(fVar109 == 0.0);
          fVar92 = (-(fVar118 * fVar102) - fVar18 * fVar91) - fVar110 * fVar97;
          fVar16 = (-(fVar125 * fVar102) - fVar128 * fVar91) - fVar111 * fVar97;
          fVar17 = (-(fVar126 * fVar102) - fVar132 * fVar91) - fVar112 * fVar97;
          fVar102 = (-(fVar127 * fVar102) - fVar129 * fVar91) - fVar15 * fVar97;
          bVar86 = ~(byte)iVar53;
          bVar87 = ~(byte)((uint)iVar53 >> 8);
          bVar88 = ~(byte)((uint)iVar53 >> 0x10);
          bVar89 = ~(byte)((uint)iVar53 >> 0x18);
          bVar90 = ~(byte)iVar62;
          bVar93 = ~(byte)((uint)iVar62 >> 8);
          bVar94 = ~(byte)((uint)iVar62 >> 0x10);
          bVar95 = ~(byte)((uint)iVar62 >> 0x18);
          bVar96 = ~(byte)iVar63;
          bVar98 = ~(byte)((uint)iVar63 >> 8);
          bVar99 = ~(byte)((uint)iVar63 >> 0x10);
          bVar100 = ~(byte)((uint)iVar63 >> 0x18);
          bVar101 = ~(byte)iVar65;
          bVar103 = ~(byte)((uint)iVar65 >> 8);
          bVar104 = ~(byte)((uint)iVar65 >> 0x10);
          bVar105 = ~(byte)((uint)iVar65 >> 0x18);
          bVar66 = SUB41(fVar118,0) & bVar86;
          bVar67 = (byte)((uint)fVar118 >> 8) & bVar87;
          bVar68 = (byte)((uint)fVar118 >> 0x10) & bVar88;
          bVar69 = (byte)((uint)fVar118 >> 0x18) & bVar89;
          bVar70 = SUB41(fVar125,0) & bVar90;
          bVar71 = (byte)((uint)fVar125 >> 8) & bVar93;
          bVar72 = (byte)((uint)fVar125 >> 0x10) & bVar94;
          bVar73 = (byte)((uint)fVar125 >> 0x18) & bVar95;
          bVar74 = SUB41(fVar126,0) & bVar96;
          bVar75 = (byte)((uint)fVar126 >> 8) & bVar98;
          bVar76 = (byte)((uint)fVar126 >> 0x10) & bVar99;
          bVar77 = (byte)((uint)fVar126 >> 0x18) & bVar100;
          bVar79 = SUB41(fVar127,0) & bVar101;
          bVar81 = (byte)((uint)fVar127 >> 8) & bVar103;
          bVar83 = (byte)((uint)fVar127 >> 0x10) & bVar104;
          bVar85 = (byte)((uint)fVar127 >> 0x18) & bVar105;
          auVar60[0] = SUB41(fVar18,0) & bVar86;
          auVar60[1] = (byte)((uint)fVar18 >> 8) & bVar87;
          auVar60[2] = (byte)((uint)fVar18 >> 0x10) & bVar88;
          auVar60[3] = (byte)((uint)fVar18 >> 0x18) & bVar89;
          auVar60[4] = SUB41(fVar128,0) & bVar90;
          auVar60[5] = (byte)((uint)fVar128 >> 8) & bVar93;
          auVar60[6] = (byte)((uint)fVar128 >> 0x10) & bVar94;
          auVar60[7] = (byte)((uint)fVar128 >> 0x18) & bVar95;
          auVar60[8] = SUB41(fVar132,0) & bVar96;
          auVar60[9] = (byte)((uint)fVar132 >> 8) & bVar98;
          auVar60[10] = (byte)((uint)fVar132 >> 0x10) & bVar99;
          auVar60[0xb] = (byte)((uint)fVar132 >> 0x18) & bVar100;
          auVar60[0xc] = SUB41(fVar129,0) & bVar101;
          auVar60[0xd] = (byte)((uint)fVar129 >> 8) & bVar103;
          auVar60[0xe] = (byte)((uint)fVar129 >> 0x10) & bVar104;
          auVar60[0xf] = (byte)((uint)fVar129 >> 0x18) & bVar105;
          bVar32 = SUB41(fVar110,0) & bVar86;
          bVar33 = (byte)((uint)fVar110 >> 8) & bVar87;
          bVar34 = (byte)((uint)fVar110 >> 0x10) & bVar88;
          bVar35 = (byte)((uint)fVar110 >> 0x18) & bVar89;
          bVar37 = SUB41(fVar111,0) & bVar90;
          bVar39 = (byte)((uint)fVar111 >> 8) & bVar93;
          bVar41 = (byte)((uint)fVar111 >> 0x10) & bVar94;
          bVar43 = (byte)((uint)fVar111 >> 0x18) & bVar95;
          bVar44 = SUB41(fVar112,0) & bVar96;
          bVar45 = (byte)((uint)fVar112 >> 8) & bVar98;
          bVar46 = (byte)((uint)fVar112 >> 0x10) & bVar99;
          bVar47 = (byte)((uint)fVar112 >> 0x18) & bVar100;
          bVar48 = SUB41(fVar15,0) & bVar101;
          bVar49 = (byte)((uint)fVar15 >> 8) & bVar103;
          bVar50 = (byte)((uint)fVar15 >> 0x10) & bVar104;
          bVar51 = (byte)((uint)fVar15 >> 0x18) & bVar105;
          fVar108 = (float)CONCAT13((byte)((uint)fVar92 >> 0x18) & bVar89,
                                    CONCAT12((byte)((uint)fVar92 >> 0x10) & bVar88,
                                             CONCAT11((byte)((uint)fVar92 >> 8) & bVar87,
                                                      SUB41(fVar92,0) & bVar86)));
          fVar92 = (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & bVar95,
                                   CONCAT12((byte)((uint)fVar16 >> 0x10) & bVar94,
                                            CONCAT11((byte)((uint)fVar16 >> 8) & bVar93,
                                                     SUB41(fVar16,0) & bVar90)));
          fVar110 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & bVar100,
                                    CONCAT12((byte)((uint)fVar17 >> 0x10) & bVar99,
                                             CONCAT11((byte)((uint)fVar17 >> 8) & bVar98,
                                                      SUB41(fVar17,0) & bVar96)));
          fVar102 = (float)CONCAT13((byte)((uint)fVar102 >> 0x18) & bVar105,
                                    CONCAT12((byte)((uint)fVar102 >> 0x10) & bVar104,
                                             CONCAT11((byte)((uint)fVar102 >> 8) & bVar103,
                                                      SUB41(fVar102,0) & bVar101)));
        }
        fVar91 = (float)lVar30;
        fVar97 = (float)((ulong)lVar30 >> 0x20);
        fVar92 = (float)CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar70))) * fVar91 +
                 auVar60._4_4_ * fVar97 +
                 (float)CONCAT13(bVar43,CONCAT12(bVar41,CONCAT11(bVar39,bVar37))) * fVar52 + fVar92;
        fVar102 = (float)CONCAT13(bVar85,CONCAT12(bVar83,CONCAT11(bVar81,bVar79))) * fVar91 +
                  auVar60._12_4_ * fVar97 +
                  (float)CONCAT13(bVar51,CONCAT12(bVar50,CONCAT11(bVar49,bVar48))) * fVar52 +
                  fVar102;
        *(undefined1 *)(local_30 + 0x1c) = 1;
        local_30[0x1b] =
             CONCAT17((char)((uint)fVar102 >> 0x18),
                      CONCAT16((char)((uint)fVar102 >> 0x10),
                               CONCAT15((char)((uint)fVar102 >> 8),
                                        CONCAT14(SUB41(fVar102,0),
                                                 (float)CONCAT13(bVar77,CONCAT12(bVar76,CONCAT11(
                                                  bVar75,bVar74))) * fVar91 + auVar60._8_4_ * fVar97
                                                 + (float)CONCAT13(bVar47,CONCAT12(bVar46,CONCAT11(
                                                  bVar45,bVar44))) * fVar52 + fVar110))));
        local_30[0x1a] =
             CONCAT17((char)((uint)fVar92 >> 0x18),
                      CONCAT16((char)((uint)fVar92 >> 0x10),
                               CONCAT15((char)((uint)fVar92 >> 8),
                                        CONCAT14(SUB41(fVar92,0),
                                                 (float)CONCAT13(bVar69,CONCAT12(bVar68,CONCAT11(
                                                  bVar67,bVar66))) * fVar91 + auVar60._0_4_ * fVar97
                                                 + (float)CONCAT13(bVar35,CONCAT12(bVar34,CONCAT11(
                                                  bVar33,bVar32))) * fVar52 + fVar108))));
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x18))(local_38);
        }
      }
      if (local_30 != (long *)0x0) {
        lVar30 = local_30[0xb];
        piVar2 = (int *)(lVar30 + 0xc);
        do {
          iVar53 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar53 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar53 + -1 == 0) {
          *(undefined8 *)(lVar30 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))();
        }
      }
    }
  }
  return;
}


