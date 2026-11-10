/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bf7cb0; name: FUN_00bf7cb0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf7cb0(undefined4 *param_1,long param_2)

{
  unkbyte9 *pVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
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
  undefined1 auVar26 [16];
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  int iVar31;
  undefined4 *puVar32;
  ulong uVar33;
  undefined8 uVar34;
  long lVar35;
  int iVar36;
  long *plVar37;
  undefined1 extraout_b0;
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
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70 [2];
  
  FUN_00b5f5a4(local_70,*(undefined8 *)(param_2 + 0x58));
  lVar35 = local_70[0];
  puVar30 = PTR_DAT_04379e90;
  puVar29 = PTR_DAT_04379e88;
  puVar28 = PTR_DAT_043795e0;
  puVar27 = PTR_DAT_043794d0;
  if ((local_70[0] != 0) && (*(int *)(local_70[0] + 0xc) != 0)) {
    piVar2 = (int *)(local_70[0] + 0xc);
    iVar36 = *(int *)(local_70[0] + 0xc);
    do {
      plVar37 = *(long **)(lVar35 + 0x10);
      if (((*puVar29 & 1) == 0) && (iVar31 = __cxa_guard_acquire(puVar29), iVar31 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar31 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar31 != 0)) {
          if (((*puVar27 & 1) == 0) && (iVar31 = __cxa_guard_acquire(puVar27), iVar31 != 0)) {
            uVar34 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar34;
            __cxa_guard_release(puVar27);
          }
          *(undefined **)puVar28 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar30 = puVar28;
        __cxa_guard_release(puVar29);
      }
      while( true ) {
        if (plVar37 == (long *)0x0) goto LAB_00bf7cec;
        if (plVar37 == (long *)puVar30) break;
        plVar37 = (long *)*plVar37;
      }
      iVar31 = *piVar2;
      if (iVar31 == iVar36) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar36 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar35 = *(long *)(lVar35 + 0x18);
          plVar37 = (long *)(lVar35 + -0x50);
          if (lVar35 != 0) {
            if (*(float *)(param_2 + 0x160) <= *(float *)(param_2 + 0x164)) {
              FUN_01a853a8(plVar37,param_2 + 0x140);
              puVar32 = (undefined4 *)FUN_00cd4380();
            }
            else {
              FUN_01a831dc(plVar37);
              pVar1 = (unkbyte9 *)(param_2 + 0x150);
              uVar34 = *(undefined8 *)(param_2 + 0x158);
              uVar38 = (undefined1)((ulong)uVar34 >> 8);
              uVar39 = (undefined1)((ulong)uVar34 >> 0x10);
              uVar40 = (undefined1)((ulong)uVar34 >> 0x18);
              uVar41 = (undefined1)((ulong)uVar34 >> 0x20);
              uVar42 = (undefined1)((ulong)uVar34 >> 0x28);
              uVar43 = (undefined1)((ulong)uVar34 >> 0x30);
              uVar44 = (undefined1)((ulong)uVar34 >> 0x38);
              fVar8 = (float)*(undefined8 *)pVar1;
              fVar51 = fVar8 * (float)_DAT_03889ac0;
              fVar10 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
              fVar53 = fVar10 * (float)((ulong)_DAT_03889ac0 >> 0x20);
              fVar55 = (float)uVar34 * (float)_UNK_03889ac8;
              fVar57 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)_UNK_03889ac8 >> 0x20);
              auVar5[1] = extraout_var;
              auVar5[0] = extraout_b0;
              auVar5[2] = extraout_var_00;
              auVar5[3] = extraout_var_01;
              auVar5[4] = extraout_var_02;
              auVar5[5] = extraout_var_03;
              auVar5[6] = extraout_var_04;
              auVar5[7] = extraout_var_05;
              auVar5[8] = extraout_var_06;
              auVar5[9] = extraout_var_07;
              auVar5[10] = extraout_var_08;
              auVar5[0xb] = extraout_var_09;
              auVar5[0xc] = extraout_var_10;
              auVar5[0xd] = extraout_var_11;
              auVar5[0xe] = extraout_var_12;
              auVar5[0xf] = extraout_var_13;
              uVar48 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a580);
              fVar45 = (float)((ulong)uVar48 >> 0x20);
              auVar6[1] = extraout_var;
              auVar6[0] = extraout_b0;
              auVar6[2] = extraout_var_00;
              auVar6[3] = extraout_var_01;
              auVar6[4] = extraout_var_02;
              auVar6[5] = extraout_var_03;
              auVar6[6] = extraout_var_04;
              auVar6[7] = extraout_var_05;
              auVar6[8] = extraout_var_06;
              auVar6[9] = extraout_var_07;
              auVar6[10] = extraout_var_08;
              auVar6[0xb] = extraout_var_09;
              auVar6[0xc] = extraout_var_10;
              auVar6[0xd] = extraout_var_11;
              auVar6[0xe] = extraout_var_12;
              auVar6[0xf] = extraout_var_13;
              uVar59 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a680);
              auVar21._4_4_ = fVar53;
              auVar21._0_4_ = fVar51;
              auVar21._8_4_ = fVar55;
              auVar21._12_4_ = fVar57;
              uVar47 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a580);
              auVar22._4_4_ = fVar53;
              auVar22._0_4_ = fVar51;
              auVar22._8_4_ = fVar55;
              auVar22._12_4_ = fVar57;
              uVar61 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a6c8);
              fVar49 = (float)((ulong)uVar59 >> 0x20);
              auVar23._4_4_ = fVar53;
              auVar23._0_4_ = fVar51;
              auVar23._8_4_ = fVar55;
              auVar23._12_4_ = fVar57;
              uVar62 = a64_TBL(ZEXT816(0),auVar23,DAT_0388a680);
              auVar24._4_4_ = fVar53;
              auVar24._0_4_ = fVar51;
              auVar24._8_4_ = fVar55;
              auVar24._12_4_ = fVar57;
              uVar63 = a64_TBL(ZEXT816(0),auVar24,DAT_0388a880);
              auVar25._4_4_ = fVar53;
              auVar25._0_4_ = fVar51;
              auVar25._8_4_ = fVar55;
              auVar25._12_4_ = fVar57;
              uVar64 = a64_TBL(ZEXT816(0),auVar25,DAT_0388a790);
              auVar26._4_4_ = fVar53;
              auVar26._0_4_ = fVar51;
              auVar26._8_4_ = fVar51;
              auVar26._12_4_ = fVar53;
              uVar50 = a64_TBL(ZEXT816(0),auVar26,DAT_0388a648);
              auVar7[1] = extraout_var;
              auVar7[0] = extraout_b0;
              auVar7[2] = extraout_var_00;
              auVar7[3] = extraout_var_01;
              auVar7[4] = extraout_var_02;
              auVar7[5] = extraout_var_03;
              auVar7[6] = extraout_var_04;
              auVar7[7] = extraout_var_05;
              auVar7[8] = extraout_var_06;
              auVar7[9] = extraout_var_07;
              auVar7[10] = extraout_var_08;
              auVar7[0xb] = extraout_var_09;
              auVar7[0xc] = extraout_var_10;
              auVar7[0xd] = extraout_var_11;
              auVar7[0xe] = extraout_var_12;
              auVar7[0xf] = extraout_var_13;
              uVar34 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a880);
              fVar11 = (float)((ulong)uVar34 >> 0x20);
              fVar56 = (float)_UNK_03889ad8;
              fVar58 = (float)((ulong)_UNK_03889ad8 >> 0x20);
              fVar52 = (float)_DAT_03889ad0;
              fVar54 = (float)((ulong)_DAT_03889ad0 >> 0x20);
              auVar12[9] = uVar38;
              auVar12._0_9_ = *pVar1;
              auVar12[10] = uVar39;
              auVar12[0xb] = uVar40;
              auVar12[0xc] = uVar41;
              auVar12[0xd] = uVar42;
              auVar12[0xe] = uVar43;
              auVar12[0xf] = uVar44;
              uVar9 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a580);
              fVar51 = (fVar51 * (float)uVar48 +
                        fVar52 * (float)CONCAT13(extraout_var_01,
                                                 CONCAT12(extraout_var_00,
                                                          CONCAT11(extraout_var,extraout_b0))) *
                                 (float)uVar47 + fVar52 * (float)uVar34 * (float)uVar62) -
                       (float)uVar59 * (float)uVar63;
              fVar46 = (fVar53 * fVar45 +
                        fVar54 * (float)CONCAT13(extraout_var_05,
                                                 CONCAT12(extraout_var_04,
                                                          CONCAT11(extraout_var_03,extraout_var_02))
                                                ) * (float)((ulong)uVar47 >> 0x20) +
                       fVar54 * fVar11 * (float)((ulong)uVar62 >> 0x20)) -
                       fVar49 * (float)((ulong)uVar63 >> 0x20);
              fVar55 = (fVar55 * (float)uVar48 + fVar56 * (float)uVar59 * (float)uVar61 +
                       fVar56 * (float)CONCAT13(extraout_var_01,
                                                CONCAT12(extraout_var_00,
                                                         CONCAT11(extraout_var,extraout_b0))) *
                                (float)uVar50) - (float)uVar34 * (float)uVar64;
              fVar57 = (fVar57 * fVar45 + fVar58 * fVar49 * (float)((ulong)uVar61 >> 0x20) +
                       fVar58 * (float)CONCAT13(extraout_var_05,
                                                CONCAT12(extraout_var_04,
                                                         CONCAT11(extraout_var_03,extraout_var_02)))
                                * (float)((ulong)uVar50 >> 0x20)) -
                       fVar11 * (float)((ulong)uVar64 >> 0x20);
              auVar13[9] = uVar38;
              auVar13._0_9_ = *pVar1;
              auVar13[10] = uVar39;
              auVar13[0xb] = uVar40;
              auVar13[0xc] = uVar41;
              auVar13[0xd] = uVar42;
              auVar13[0xe] = uVar43;
              auVar13[0xf] = uVar44;
              uVar61 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a680);
              auVar15._4_4_ = fVar46;
              auVar15._0_4_ = fVar51;
              auVar15._8_4_ = fVar55;
              auVar15._12_4_ = fVar57;
              uVar47 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a580);
              auVar16._4_4_ = fVar46;
              auVar16._0_4_ = fVar51;
              auVar16._8_4_ = fVar55;
              auVar16._12_4_ = fVar57;
              uVar62 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a6c8);
              fVar60 = (float)((ulong)uVar61 >> 0x20);
              fVar11 = (float)((ulong)uVar9 >> 0x20);
              auVar17._4_4_ = fVar46;
              auVar17._0_4_ = fVar51;
              auVar17._8_4_ = fVar55;
              auVar17._12_4_ = fVar57;
              uVar50 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a680);
              auVar18._4_4_ = fVar46;
              auVar18._0_4_ = fVar51;
              auVar18._8_4_ = fVar55;
              auVar18._12_4_ = fVar57;
              uVar63 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a790);
              auVar19._4_4_ = fVar46;
              auVar19._0_4_ = fVar51;
              auVar19._8_4_ = fVar55;
              auVar19._12_4_ = fVar57;
              uVar59 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a880);
              auVar14[9] = uVar38;
              auVar14._0_9_ = *pVar1;
              auVar14[10] = uVar39;
              auVar14[0xb] = uVar40;
              auVar14[0xc] = uVar41;
              auVar14[0xd] = uVar42;
              auVar14[0xe] = uVar43;
              auVar14[0xf] = uVar44;
              uVar48 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a880);
              fVar49 = (float)((ulong)uVar48 >> 0x20);
              auVar20._4_4_ = fVar46;
              auVar20._0_4_ = fVar51;
              auVar20._8_4_ = fVar51;
              auVar20._12_4_ = fVar46;
              uVar34 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a648);
              fVar45 = fVar8 * (float)uVar34;
              fVar53 = fVar10 * (float)((ulong)uVar34 >> 0x20);
              fVar8 = ((float)uVar9 * fVar51 + fVar52 * fVar8 * (float)uVar47 +
                      fVar52 * (float)uVar48 * (float)uVar50) - (float)uVar61 * (float)uVar59;
              fVar10 = (fVar11 * fVar46 + fVar54 * fVar10 * (float)((ulong)uVar47 >> 0x20) +
                       fVar54 * fVar49 * (float)((ulong)uVar50 >> 0x20)) -
                       fVar60 * (float)((ulong)uVar59 >> 0x20);
              fVar51 = ((float)uVar9 * fVar55 + fVar56 * (float)uVar61 * (float)uVar62 +
                       fVar56 * fVar45) - (float)uVar48 * (float)uVar63;
              fVar11 = (fVar11 * fVar57 + fVar58 * fVar60 * (float)((ulong)uVar62 >> 0x20) +
                       fVar58 * (float)(CONCAT17((char)((uint)fVar53 >> 0x18),
                                                 CONCAT16((char)((uint)fVar53 >> 0x10),
                                                          CONCAT15((char)((uint)fVar53 >> 8),
                                                                   CONCAT14(SUB41(fVar53,0),fVar45))
                                                         )) >> 0x20)) -
                       fVar49 * (float)((ulong)uVar63 >> 0x20);
              uStack_78 = CONCAT17((byte)((uint)fVar11 >> 0x18) &
                                   (byte)((ulong)_UNK_038897c8 >> 0x38),
                                   CONCAT16((byte)((uint)fVar11 >> 0x10) &
                                            (byte)((ulong)_UNK_038897c8 >> 0x30),
                                            CONCAT15((byte)((uint)fVar11 >> 8) &
                                                     (byte)((ulong)_UNK_038897c8 >> 0x28),
                                                     CONCAT14(SUB41(fVar11,0) &
                                                              (byte)((ulong)_UNK_038897c8 >> 0x20),
                                                              CONCAT13((byte)((uint)fVar51 >> 0x18)
                                                                       & (byte)((ulong)_UNK_038897c8
                                                                               >> 0x18),
                                                                       CONCAT12((byte)((uint)fVar51
                                                                                      >> 0x10) &
                                                                                (byte)((ulong)
                                                  _UNK_038897c8 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar51 >> 8) &
                                                           (byte)((ulong)_UNK_038897c8 >> 8),
                                                           SUB41(fVar51,0) & (byte)_UNK_038897c8))))
                                                  )));
              local_80 = CONCAT17((byte)((uint)fVar10 >> 0x18) &
                                  (byte)((ulong)_DAT_038897c0 >> 0x38),
                                  CONCAT16((byte)((uint)fVar10 >> 0x10) &
                                           (byte)((ulong)_DAT_038897c0 >> 0x30),
                                           CONCAT15((byte)((uint)fVar10 >> 8) &
                                                    (byte)((ulong)_DAT_038897c0 >> 0x28),
                                                    CONCAT14(SUB41(fVar10,0) &
                                                             (byte)((ulong)_DAT_038897c0 >> 0x20),
                                                             CONCAT13((byte)((uint)fVar8 >> 0x18) &
                                                                      (byte)((ulong)_DAT_038897c0 >>
                                                                            0x18),
                                                                      CONCAT12((byte)((uint)fVar8 >>
                                                                                     0x10) &
                                                                               (byte)((ulong)
                                                  _DAT_038897c0 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar8 >> 8) &
                                                           (byte)((ulong)_DAT_038897c0 >> 8),
                                                           SUB41(fVar8,0) & (byte)_DAT_038897c0)))))
                                          ));
              FUN_01a853a8(plVar37,&local_80);
              *(float *)(param_2 + 0x160) =
                   *(float *)(param_2 + 0x160) - *(float *)(param_2 + 0x164);
              puVar32 = (undefined4 *)FUN_00cd43a4();
            }
            *param_1 = *puVar32;
            uVar33 = FUN_02a43a5c(*(undefined8 *)(lVar35 + 8));
            if ((uVar33 & 1) != 0) {
              (**(code **)(*plVar37 + 0x20))(plVar37);
            }
            goto joined_r0x00bf7f3c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar36 = iVar31;
    } while (iVar31 != 0);
  }
LAB_00bf7cec:
  puVar32 = (undefined4 *)FUN_00cd438c();
  *param_1 = *puVar32;
joined_r0x00bf7f3c:
  if (local_70[0] != 0) {
    FUN_02a43934();
  }
  return;
}


