/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3a4ac; name: FUN_01b3a4ac
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01b3a4ac(long param_1)

{
  int *piVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined2 uVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  long *plVar27;
  int iVar28;
  int iVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  long *plVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 uVar41;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 uVar42;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 uVar43;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 uVar44;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 uVar45;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 uVar46;
  float fVar47;
  undefined1 auVar48 [12];
  float fVar50;
  float fVar51;
  undefined1 auVar49 [16];
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 in_q3 [16];
  undefined1 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fStack_94;
  long *local_88;
  undefined1 *puStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long *local_58;
  
  puVar26 = PTR_DAT_04379fd0;
  puVar25 = PTR_DAT_04379fc8;
  puVar24 = PTR_DAT_043794d8;
  puVar23 = PTR_DAT_043794d0;
  uVar54 = in_q3[0xf];
  uVar53 = in_q3[0xe];
  uVar52 = in_q3[0xd];
  uVar46 = in_q3[0xc];
  uVar45 = in_q3[0xb];
  uVar44 = in_q3[10];
  uVar43 = in_q3[9];
  uVar42 = in_q3[8];
  uVar41 = in_q3[3];
  uVar40 = in_q3[2];
  uVar39 = in_q3[1];
  uVar38 = in_q3[0];
  lVar31 = *(long *)(param_1 + 0x5f0);
  if ((lVar31 != 0) && (*(int *)(lVar31 + 0xc) != 0)) {
    piVar1 = (int *)(lVar31 + 0xc);
    iVar29 = *(int *)(lVar31 + 0xc);
    do {
      plVar33 = *(long **)(lVar31 + 0x10);
      if (((*puVar25 & 1) == 0) && (iVar28 = __cxa_guard_acquire(puVar25), iVar28 != 0)) {
        if (((*puVar23 & 1) == 0) && (iVar28 = __cxa_guard_acquire(puVar23), iVar28 != 0)) {
          uVar30 = FUN_0087f8f0();
          *(undefined8 *)puVar24 = uVar30;
          __cxa_guard_release(puVar23);
        }
        *(undefined **)puVar26 = puVar24;
        __cxa_guard_release(puVar25);
      }
      while( true ) {
        if (plVar33 == (long *)0x0) {
          return 0;
        }
        if (plVar33 == (long *)puVar26) break;
        plVar33 = (long *)*plVar33;
      }
      iVar28 = *piVar1;
      if (iVar28 == iVar29) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar29 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar31 = *(long *)(lVar31 + 0x18);
          if (lVar31 == 0) {
            return 0;
          }
          plVar33 = (long *)(lVar31 + -0x50);
          FUN_018f98bc(&local_88,plVar33);
          if (local_88 == (long *)0x0) {
            local_68 = (long *)0x0;
          }
          else {
            FUN_009b8630(&local_68);
            plVar27 = local_88;
            if (local_88 != (long *)0x0) {
              plVar2 = local_88 + 1;
              do {
                iVar29 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar29;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar29 == 0) {
                local_88[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar29 = __cxa_guard_acquire(PTR_DAT_04379498), iVar29 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar32 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar32;
                local_58 = (long *)*plVar27;
                FUN_02a44274(lVar32 + 0xd8,&local_58);
              }
            }
          }
          if ((local_68 != (long *)0x0) && (FUN_009c69bc(&local_58), local_58 != (long *)0x0)) {
            (**(code **)(*local_58 + 0x40))();
            fVar51 = (float)CONCAT13(uVar45,CONCAT12(uVar44,CONCAT11(uVar43,uVar42)));
            uVar30 = CONCAT17(uVar54,CONCAT16(uVar53,CONCAT15(uVar52,CONCAT14(uVar46,fVar51))));
            fVar47 = (float)CONCAT13(uVar41,CONCAT12(uVar40,CONCAT11(uVar39,uVar38)));
            (**(code **)(*local_68 + 0x138))();
            fVar37 = (float)CONCAT13(extraout_var_11,
                                     CONCAT12(extraout_var_09,
                                              CONCAT11(extraout_var_07,extraout_var_05)));
            FUN_01a4bbac(local_68);
            fVar36 = fVar37 + (float)CONCAT13(extraout_var_12,
                                              CONCAT12(extraout_var_10,
                                                       CONCAT11(extraout_var_08,extraout_var_06)));
            fVar37 = (float)(CONCAT17(extraout_var_19,
                                      CONCAT16(extraout_var_17,
                                               CONCAT15(extraout_var_15,
                                                        CONCAT14(extraout_var_13,fVar37)))) >> 0x20)
                     + (float)CONCAT13(extraout_var_20,
                                       CONCAT12(extraout_var_18,
                                                CONCAT11(extraout_var_16,extraout_var_14)));
            FUN_009c69bc(&local_88,param_1);
            (**(code **)(*local_88 + 0x40))();
            fVar50 = (float)CONCAT13(uVar45,CONCAT12(uVar44,CONCAT11(uVar43,uVar42)));
            if (local_88 != (long *)0x0) {
              lVar32 = local_88[0xb];
              piVar1 = (int *)(lVar32 + 0xc);
              do {
                iVar29 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar29 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar29 + -1 == 0) {
                *(undefined8 *)(lVar32 + 0x18) = 0;
                (**(code **)(*local_88 + 0x20))();
              }
            }
            fStack_94 = (float)((ulong)uVar30 >> 0x20);
            fVar6 = ((float)CONCAT13(extraout_var_03,
                                     CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0))) +
                    (float)CONCAT13(extraout_var_04,
                                    CONCAT12(extraout_var_02,
                                             CONCAT11(extraout_var_00,extraout_b0_00)))) - fVar47;
            fVar7 = fVar36 - fVar51;
            fVar8 = (float)(CONCAT17((char)((uint)fVar37 >> 0x18),
                                     CONCAT16((char)((uint)fVar37 >> 0x10),
                                              CONCAT15((char)((uint)fVar37 >> 8),
                                                       CONCAT14(SUB41(fVar37,0),fVar36)))) >> 0x20)
                    - fStack_94;
            fVar47 = (float)CONCAT13(uVar41,CONCAT12(uVar40,CONCAT11(uVar39,uVar38))) - fVar47;
            fVar51 = fVar50 - fVar51;
            fStack_94 = (float)(CONCAT17(uVar54,CONCAT16(uVar53,CONCAT15(uVar52,CONCAT14(uVar46,
                                                  fVar50)))) >> 0x20) - fStack_94;
            fVar36 = fVar6 * fVar6;
            fVar37 = fVar7 * fVar7;
            uVar38 = (undefined1)((uint)fVar37 >> 8);
            uVar39 = (undefined1)((uint)fVar37 >> 0x10);
            uVar40 = (undefined1)((uint)fVar37 >> 0x18);
            fVar50 = fVar8 * fVar8;
            uVar41 = (undefined1)((uint)fVar50 >> 8);
            uVar42 = (undefined1)((uint)fVar50 >> 0x10);
            uVar43 = (undefined1)((uint)fVar50 >> 0x18);
            auVar15._4_4_ = 0;
            auVar15._0_4_ = fVar36;
            auVar15[8] = SUB41(fVar37,0);
            auVar15[9] = uVar38;
            auVar15[10] = uVar39;
            auVar15[0xb] = uVar40;
            auVar15[0xc] = SUB41(fVar50,0);
            auVar15[0xd] = uVar41;
            auVar15[0xe] = uVar42;
            auVar15[0xf] = uVar43;
            auVar16._4_4_ = 0;
            auVar16._0_4_ = fVar36;
            auVar16[8] = SUB41(fVar37,0);
            auVar16[9] = uVar38;
            auVar16[10] = uVar39;
            auVar16[0xb] = uVar40;
            auVar16[0xc] = SUB41(fVar50,0);
            auVar16[0xd] = uVar41;
            auVar16[0xe] = uVar42;
            auVar16[0xf] = uVar43;
            auVar55 = NEON_ext(auVar15,auVar16,8,1);
            fVar37 = fVar47 * fVar47;
            fVar50 = fVar51 * fVar51;
            uVar38 = (undefined1)((uint)fVar50 >> 8);
            uVar39 = (undefined1)((uint)fVar50 >> 0x10);
            uVar40 = (undefined1)((uint)fVar50 >> 0x18);
            fVar35 = fStack_94 * fStack_94;
            uVar41 = (undefined1)((uint)fVar35 >> 8);
            uVar42 = (undefined1)((uint)fVar35 >> 0x10);
            uVar43 = (undefined1)((uint)fVar35 >> 0x18);
            fVar36 = auVar55._0_4_ + fVar36;
            fVar19 = auVar55._4_4_ + 0.0;
            fVar34 = fVar36 + fVar19;
            fVar36 = fVar36 + fVar19;
            uVar44 = SUB41(fVar36,0);
            uVar45 = (undefined1)((uint)fVar36 >> 8);
            uVar46 = (undefined1)((uint)fVar36 >> 0x10);
            uVar52 = (undefined1)((uint)fVar36 >> 0x18);
            auVar17[4] = uVar44;
            auVar17._0_4_ = fVar34;
            auVar17[5] = uVar45;
            auVar17[6] = uVar46;
            auVar17[7] = uVar52;
            auVar17[8] = SUB41(fVar34,0);
            auVar17[9] = (char)((uint)fVar34 >> 8);
            auVar17[10] = (char)((uint)fVar34 >> 0x10);
            auVar17[0xb] = (char)((uint)fVar34 >> 0x18);
            auVar17[0xc] = uVar44;
            auVar17[0xd] = uVar45;
            auVar17[0xe] = uVar46;
            auVar17[0xf] = uVar52;
            auVar55 = NEON_frsqrte(auVar17,4);
            auVar58._0_4_ = auVar55._0_4_ * fVar34;
            auVar58._4_4_ = auVar55._4_4_ * fVar36;
            auVar58._8_4_ = auVar55._8_4_ * fVar34;
            uVar12 = (undefined2)(CONCAT15(uVar45,CONCAT14(uVar44,fVar34)) >> 0x20);
            auVar58._12_4_ = auVar55._12_4_ * (float)CONCAT13(uVar52,CONCAT12(uVar46,uVar12));
            auVar59 = NEON_frsqrts(auVar55,auVar58,4);
            auVar56._0_4_ = auVar55._0_4_ * auVar59._0_4_;
            auVar56._4_4_ = auVar55._4_4_ * auVar59._4_4_;
            auVar56._8_4_ = auVar55._8_4_ * auVar59._8_4_;
            auVar56._12_4_ = auVar55._12_4_ * auVar59._12_4_;
            auVar60._0_4_ = fVar34 * auVar56._0_4_;
            auVar60._4_4_ = fVar36 * auVar56._4_4_;
            auVar60._8_4_ = fVar34 * auVar56._8_4_;
            auVar60._12_4_ = (float)CONCAT13(uVar52,CONCAT12(uVar46,uVar12)) * auVar56._12_4_;
            iVar18 = -(uint)(fVar34 == 0.0);
            iVar20 = -(uint)(fVar36 == 0.0);
            iVar21 = -(uint)(fVar34 == 0.0);
            iVar22 = -(uint)((float)CONCAT13(uVar52,CONCAT12(uVar46,uVar12)) == 0.0);
            auVar55 = NEON_frsqrts(auVar56,auVar60,4);
            fVar6 = fVar6 * auVar56._0_4_ * auVar55._0_4_;
            fVar36 = auVar56._4_4_ * auVar55._4_4_ * 0.0;
            fVar7 = fVar7 * auVar56._8_4_ * auVar55._8_4_;
            fVar8 = fVar8 * auVar56._12_4_ * auVar55._12_4_;
            auVar9._4_4_ = 0;
            auVar9._0_4_ = fVar37;
            auVar9[8] = SUB41(fVar50,0);
            auVar9[9] = uVar38;
            auVar9[10] = uVar39;
            auVar9[0xb] = uVar40;
            auVar9[0xc] = SUB41(fVar35,0);
            auVar9[0xd] = uVar41;
            auVar9[0xe] = uVar42;
            auVar9[0xf] = uVar43;
            auVar10._4_4_ = 0;
            auVar10._0_4_ = fVar37;
            auVar10[8] = SUB41(fVar50,0);
            auVar10[9] = uVar38;
            auVar10[10] = uVar39;
            auVar10[0xb] = uVar40;
            auVar10[0xc] = SUB41(fVar35,0);
            auVar10[0xd] = uVar41;
            auVar10[0xe] = uVar42;
            auVar10[0xf] = uVar43;
            auVar55 = NEON_ext(auVar9,auVar10,8,1);
            fVar37 = auVar55._0_4_ + fVar37;
            fVar50 = auVar55._4_4_ + 0.0;
            fVar35 = fVar37 + fVar50;
            fVar37 = fVar37 + fVar50;
            uVar38 = SUB41(fVar37,0);
            uVar39 = (undefined1)((uint)fVar37 >> 8);
            uVar40 = (undefined1)((uint)fVar37 >> 0x10);
            uVar41 = (undefined1)((uint)fVar37 >> 0x18);
            auVar11[4] = uVar38;
            auVar11._0_4_ = fVar35;
            auVar11[5] = uVar39;
            auVar11[6] = uVar40;
            auVar11[7] = uVar41;
            auVar11[8] = SUB41(fVar35,0);
            auVar11[9] = (char)((uint)fVar35 >> 8);
            auVar11[10] = (char)((uint)fVar35 >> 0x10);
            auVar11[0xb] = (char)((uint)fVar35 >> 0x18);
            auVar11[0xc] = uVar38;
            auVar11[0xd] = uVar39;
            auVar11[0xe] = uVar40;
            auVar11[0xf] = uVar41;
            auVar55 = NEON_frsqrte(auVar11,4);
            auVar61._0_4_ = auVar55._0_4_ * fVar35;
            auVar61._4_4_ = auVar55._4_4_ * fVar37;
            auVar61._8_4_ = auVar55._8_4_ * fVar35;
            uVar12 = (undefined2)(CONCAT15(uVar39,CONCAT14(uVar38,fVar35)) >> 0x20);
            auVar61._12_4_ = auVar55._12_4_ * (float)CONCAT13(uVar41,CONCAT12(uVar40,uVar12));
            auVar59 = NEON_frsqrts(auVar55,auVar61,4);
            auVar57._0_4_ = auVar55._0_4_ * auVar59._0_4_;
            auVar57._4_4_ = auVar55._4_4_ * auVar59._4_4_;
            auVar57._8_4_ = auVar55._8_4_ * auVar59._8_4_;
            auVar57._12_4_ = auVar55._12_4_ * auVar59._12_4_;
            auVar62._0_4_ = fVar35 * auVar57._0_4_;
            auVar62._4_4_ = fVar37 * auVar57._4_4_;
            auVar62._8_4_ = fVar35 * auVar57._8_4_;
            auVar62._12_4_ = (float)CONCAT13(uVar41,CONCAT12(uVar40,uVar12)) * auVar57._12_4_;
            iVar29 = -(uint)(fVar35 == 0.0);
            iVar28 = -(uint)(fVar37 == 0.0);
            iVar13 = -(uint)(fVar35 == 0.0);
            iVar14 = -(uint)((float)CONCAT13(uVar41,CONCAT12(uVar40,uVar12)) == 0.0);
            auVar55 = NEON_frsqrts(auVar57,auVar62,4);
            fVar47 = fVar47 * auVar57._0_4_ * auVar55._0_4_;
            fVar50 = auVar57._4_4_ * auVar55._4_4_ * 0.0;
            fVar51 = fVar51 * auVar57._8_4_ * auVar55._8_4_;
            fStack_94 = fStack_94 * auVar57._12_4_ * auVar55._12_4_;
            fVar37 = (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                                     CONCAT12((byte)((uint)fVar47 >> 0x10) &
                                              ~(byte)((uint)iVar29 >> 0x10),
                                              CONCAT11((byte)((uint)fVar47 >> 8) &
                                                       ~(byte)((uint)iVar29 >> 8),
                                                       SUB41(fVar47,0) & ~(byte)iVar29)));
            auVar48._0_8_ =
                 CONCAT17((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                          CONCAT16((byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                                   CONCAT15((byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                            CONCAT14(SUB41(fVar50,0) & ~(byte)iVar28,fVar37))));
            auVar48[8] = SUB41(fVar51,0) & ~(byte)iVar13;
            auVar48[9] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar13 >> 8);
            auVar48[10] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10);
            auVar48[0xb] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18);
            auVar49[0xc] = SUB41(fStack_94,0) & ~(byte)iVar14;
            auVar49._0_12_ = auVar48;
            auVar49[0xd] = (byte)((uint)fStack_94 >> 8) & ~(byte)((uint)iVar14 >> 8);
            auVar49[0xe] = (byte)((uint)fStack_94 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10);
            auVar49[0xf] = (byte)((uint)fStack_94 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18);
            fVar37 = (float)CONCAT13((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                                     CONCAT12((byte)((uint)fVar6 >> 0x10) &
                                              ~(byte)((uint)iVar18 >> 0x10),
                                              CONCAT11((byte)((uint)fVar6 >> 8) &
                                                       ~(byte)((uint)iVar18 >> 8),
                                                       SUB41(fVar6,0) & ~(byte)iVar18))) * fVar37;
            fVar36 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                     CONCAT12((byte)((uint)fVar36 >> 0x10) &
                                              ~(byte)((uint)iVar20 >> 0x10),
                                              CONCAT11((byte)((uint)fVar36 >> 8) &
                                                       ~(byte)((uint)iVar20 >> 8),
                                                       SUB41(fVar36,0) & ~(byte)iVar20))) *
                     (float)((ulong)auVar48._0_8_ >> 0x20);
            uVar38 = (undefined1)((uint)fVar36 >> 8);
            uVar39 = (undefined1)((uint)fVar36 >> 0x10);
            uVar40 = (undefined1)((uint)fVar36 >> 0x18);
            fVar47 = (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                     CONCAT12((byte)((uint)fVar7 >> 0x10) &
                                              ~(byte)((uint)iVar21 >> 0x10),
                                              CONCAT11((byte)((uint)fVar7 >> 8) &
                                                       ~(byte)((uint)iVar21 >> 8),
                                                       SUB41(fVar7,0) & ~(byte)iVar21))) *
                     auVar48._8_4_;
            uVar41 = (undefined1)((uint)fVar47 >> 8);
            uVar42 = (undefined1)((uint)fVar47 >> 0x10);
            uVar43 = (undefined1)((uint)fVar47 >> 0x18);
            fVar51 = (float)CONCAT13((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                                     CONCAT12((byte)((uint)fVar8 >> 0x10) &
                                              ~(byte)((uint)iVar22 >> 0x10),
                                              CONCAT11((byte)((uint)fVar8 >> 8) &
                                                       ~(byte)((uint)iVar22 >> 8),
                                                       SUB41(fVar8,0) & ~(byte)iVar22))) *
                     auVar49._12_4_;
            uVar44 = (undefined1)((uint)fVar51 >> 8);
            uVar45 = (undefined1)((uint)fVar51 >> 0x10);
            uVar46 = (undefined1)((uint)fVar51 >> 0x18);
            auVar55[4] = SUB41(fVar36,0);
            auVar55._0_4_ = fVar37;
            auVar55[5] = uVar38;
            auVar55[6] = uVar39;
            auVar55[7] = uVar40;
            auVar55[8] = SUB41(fVar47,0);
            auVar55[9] = uVar41;
            auVar55[10] = uVar42;
            auVar55[0xb] = uVar43;
            auVar55[0xc] = SUB41(fVar51,0);
            auVar55[0xd] = uVar44;
            auVar55[0xe] = uVar45;
            auVar55[0xf] = uVar46;
            auVar59[4] = SUB41(fVar36,0);
            auVar59._0_4_ = fVar37;
            auVar59[5] = uVar38;
            auVar59[6] = uVar39;
            auVar59[7] = uVar40;
            auVar59[8] = SUB41(fVar47,0);
            auVar59[9] = uVar41;
            auVar59[10] = uVar42;
            auVar59[0xb] = uVar43;
            auVar59[0xc] = SUB41(fVar51,0);
            auVar59[0xd] = uVar44;
            auVar59[0xe] = uVar45;
            auVar59[0xf] = uVar46;
            auVar55 = NEON_ext(auVar55,auVar59,8,1);
            if (auVar55._0_4_ + fVar37 + auVar55._4_4_ + fVar36 <= 0.0) {
LAB_01b3a778:
              bVar5 = false;
            }
            else {
              local_88 = (long *)&DAT_cbf29ce484222645;
              puStack_80 = &DAT_03996322;
              local_78 = 0;
              local_70 = (long *)0x0;
              uVar30 = FUN_01b396b4(param_1,&local_88);
              if (local_70 != (long *)0x0) {
                (**(code **)(*local_70 + 0x20))();
              }
              if (((((float)uVar30 < 0.0) || (1920.0 < (float)uVar30)) ||
                  (fVar37 = (float)((ulong)uVar30 >> 0x20), fVar37 < 0.0)) || (1080.0 < fVar37))
              goto LAB_01b3a778;
              bVar5 = true;
            }
            if (local_58 != (long *)0x0) {
              lVar32 = local_58[0xb];
              piVar1 = (int *)(lVar32 + 0xc);
              do {
                iVar29 = *piVar1;
                cVar4 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar29 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar29 + -1 == 0) {
                *(undefined8 *)(lVar32 + 0x18) = 0;
                (**(code **)(*local_58 + 0x20))();
              }
            }
            if (bVar5) {
              bVar5 = true;
              goto joined_r0x01b3a7ac;
            }
          }
          bVar5 = false;
joined_r0x01b3a7ac:
          if (local_68 != (long *)0x0) {
            lVar32 = local_68[0xb];
            piVar1 = (int *)(lVar32 + 0xc);
            do {
              iVar29 = *piVar1;
              cVar4 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar29 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar29 + -1 == 0) {
              *(undefined8 *)(lVar32 + 0x18) = 0;
              (**(code **)(*local_68 + 0x20))();
            }
          }
          lVar31 = *(long *)(lVar31 + 8);
          piVar1 = (int *)(lVar31 + 0xc);
          do {
            iVar29 = *piVar1;
            cVar4 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar29 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar29 + -1 == 0) {
            *(undefined8 *)(lVar31 + 0x18) = 0;
            (**(code **)(*plVar33 + 0x20))(plVar33);
          }
          if (bVar5) {
            return 1;
          }
          return 0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar29 = iVar28;
    } while (iVar28 != 0);
  }
  return 0;
}


