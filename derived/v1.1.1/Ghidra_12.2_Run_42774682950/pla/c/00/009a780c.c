/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a780c; name: FUN_009a780c
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009a780c(long *param_1,long param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined4 uVar27;
  int iVar28;
  int iVar29;
  undefined8 uVar30;
  ulong uVar31;
  long lVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  long lVar36;
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
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 extraout_var_34;
  undefined1 extraout_var_35;
  undefined1 extraout_var_36;
  undefined1 extraout_var_37;
  undefined1 extraout_var_38;
  undefined1 extraout_var_39;
  undefined1 extraout_var_40;
  undefined1 extraout_var_41;
  undefined1 extraout_var_42;
  undefined1 extraout_var_43;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined8 uVar59;
  float fVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined8 uStack_68;
  
  local_70 = (long *)0x0;
  uStack_68 = 0;
  FUN_009630f4(&local_70,param_2 + 0x510);
  plVar33 = local_70;
  puVar26 = PTR_DAT_04379fd0;
  puVar25 = PTR_DAT_04379fc8;
  puVar24 = PTR_DAT_043794d0;
  plVar35 = (long *)0x0;
  if (local_70 != (long *)0x0) {
    if (*(int *)((long)local_70 + 0xc) != 0) {
      piVar1 = (int *)((long)local_70 + 0xc);
      iVar28 = *(int *)((long)local_70 + 0xc);
      do {
        plVar35 = (long *)plVar33[2];
        if (((*puVar25 & 1) == 0) && (iVar29 = __cxa_guard_acquire(puVar25), iVar29 != 0)) {
          if (((*puVar24 & 1) == 0) && (iVar29 = __cxa_guard_acquire(puVar24), iVar29 != 0)) {
            uVar30 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar30;
            __cxa_guard_release(puVar24);
          }
          *(undefined **)puVar26 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar25);
        }
        while( true ) {
          if (plVar35 == (long *)0x0) goto LAB_009a7f74;
          if (plVar35 == (long *)puVar26) break;
          plVar35 = (long *)*plVar35;
        }
        iVar29 = *piVar1;
        if (iVar29 == iVar28) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar28 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar36 = plVar33[3];
            plVar35 = (long *)0x0;
            plVar33 = local_70;
            if (lVar36 != 0) {
              plVar35 = (long *)(lVar36 + -0x50);
            }
            goto joined_r0x009a7ee8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar28 = iVar29;
      } while (iVar29 != 0);
    }
LAB_009a7f74:
    plVar35 = (long *)0x0;
    plVar33 = local_70;
joined_r0x009a7ee8:
    if (plVar33 != (long *)0x0) {
      plVar34 = plVar33 + 1;
      do {
        iVar28 = (int)*plVar34 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar3) {
          *(int *)plVar34 = iVar28;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar28 == 0) {
        plVar33[2] = 0;
        local_70 = plVar33;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar28 = __cxa_guard_acquire(PTR_DAT_04379498), iVar28 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar36 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar36;
        local_90 = *plVar33;
        FUN_02a44274(lVar36 + 0xd8,&local_90);
      }
    }
  }
  local_70 = (long *)0x0;
  uStack_68 = 0;
  FUN_01901488(&local_70,plVar35 + 0x1c);
  if (local_70 == (long *)0x0) {
    local_78 = (long *)0x0;
  }
  else {
    FUN_009ac698(&local_78);
    plVar33 = local_70;
    if (local_70 != (long *)0x0) {
      plVar34 = local_70 + 1;
      do {
        iVar28 = (int)*plVar34 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar34,0x10);
        if (bVar3) {
          *(int *)plVar34 = iVar28;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar28 == 0) {
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar28 = __cxa_guard_acquire(PTR_DAT_04379498), iVar28 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar36 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar36;
        local_90 = *plVar33;
        FUN_02a44274(lVar36 + 0xd8,&local_90);
      }
    }
  }
  if (local_78 != (long *)0x0) {
    FUN_01a1ce24(local_78,param_3 & 1);
    plVar33 = (long *)**(long **)(param_2 + 0xd0);
    if ((*(ulong *)(param_2 + 0xd8) & *(ulong *)(param_2 + 0xd8) - 1) == 0) {
      do {
        do {
          plVar33 = (long *)*plVar33;
        } while (plVar33[1] != 0);
      } while (*(int *)(plVar33 + 2) != 0);
    }
    else {
      do {
        do {
          plVar33 = (long *)*plVar33;
        } while (plVar33[1] != 0);
      } while ((int)plVar33[2] != 0);
    }
    plVar33 = (long *)plVar33[3];
    if (plVar33 != (long *)0x0) {
      lVar36 = plVar33[0xb];
      if (*(undefined8 **)(lVar36 + 0x18) == (undefined8 *)0x0) goto LAB_009a7e44;
      if (*(long *)(lVar36 + 0x10) == 0) {
        uVar30 = (**(code **)**(undefined8 **)(lVar36 + 0x18))();
        *(undefined8 *)(lVar36 + 0x10) = uVar30;
      }
      piVar1 = (int *)(lVar36 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar36 = FUN_009b45b4(plVar33 + 0x1e,&local_70);
    if (lVar36 != 0) {
      if (((*PTR_DAT_04379578 & 1) == 0) &&
         (iVar28 = __cxa_guard_acquire(PTR_DAT_04379578), iVar28 != 0)) {
        FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379578);
      }
      *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
      FUN_00954958(&local_70);
      FUN_009405ac(local_70);
      FUN_00923c30();
      uVar27 = FUN_0092877c();
      FUN_00ac96e4(lVar36,uVar27);
      if (local_70 != (long *)0x0) {
        plVar34 = local_70 + 10;
        do {
          iVar28 = (int)*plVar34 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar3) {
            *(int *)plVar34 = iVar28;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar28 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
    }
    if ((param_3 & 1) != 0) {
      uVar31 = FUN_00ab0c78();
      if ((uVar31 & 1) == 0) {
        plVar34 = (long *)**(long **)(param_2 + 0xd0);
        if ((*(ulong *)(param_2 + 0xd8) & *(ulong *)(param_2 + 0xd8) - 1) == 0) {
          do {
            do {
              plVar34 = (long *)*plVar34;
            } while (plVar34[1] != 0);
          } while (*(int *)(plVar34 + 2) != 0);
        }
        else {
          do {
            do {
              plVar34 = (long *)*plVar34;
            } while (plVar34[1] != 0);
          } while ((int)plVar34[2] != 0);
        }
        local_80 = (long *)plVar34[3];
        if (local_80 != (long *)0x0) {
          lVar36 = local_80[0xb];
          if (*(undefined8 **)(lVar36 + 0x18) == (undefined8 *)0x0) goto LAB_009a7e44;
          if (*(long *)(lVar36 + 0x10) == 0) {
            uVar30 = (**(code **)**(undefined8 **)(lVar36 + 0x18))();
            *(undefined8 *)(lVar36 + 0x10) = uVar30;
          }
          piVar1 = (int *)(lVar36 + 0xc);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      else {
        FUN_00ab0f5c(&local_80);
      }
      if (local_80 != (long *)0x0) {
        lVar36 = FUN_0095992c(local_80 + 0x1e,&local_70);
        if ((lVar36 != 0) && (iVar28 = FUN_01a81e54(), iVar28 == 0)) {
          lVar32 = FUN_009abb04(local_80 + 0x1e,&local_70);
          if (lVar32 != 0) {
            FUN_01827904();
          }
          FUN_01a168cc(local_78,0);
          uStack_68 = CONCAT17(extraout_var_41,
                               CONCAT16(extraout_var_38,
                                        CONCAT15(extraout_var_35,
                                                 CONCAT14(extraout_var_32,
                                                          CONCAT13(extraout_var_29,
                                                                   CONCAT12(extraout_var_26,
                                                                            CONCAT11(extraout_var_23
                                                                                     ,
                                                  extraout_var_20)))))));
          local_70 = (long *)CONCAT17(extraout_var_17,
                                      CONCAT16(extraout_var_14,
                                               CONCAT15(extraout_var_11,
                                                        CONCAT14(extraout_var_08,
                                                                 CONCAT13(extraout_var_05,
                                                                          CONCAT12(extraout_var_02,
                                                                                   CONCAT11(
                                                  extraout_var,extraout_b0)))))));
          FUN_01a168cc(local_78,1);
          local_a0 = 0;
          uStack_98 = 0;
          uStack_88 = CONCAT17(extraout_var_42,
                               CONCAT16(extraout_var_39,
                                        CONCAT15(extraout_var_36,
                                                 CONCAT14(extraout_var_33,
                                                          CONCAT13(extraout_var_30,
                                                                   CONCAT12(extraout_var_27,
                                                                            CONCAT11(extraout_var_24
                                                                                     ,
                                                  extraout_var_21)))))));
          local_90 = CONCAT17(extraout_var_18,
                              CONCAT16(extraout_var_15,
                                       CONCAT15(extraout_var_12,
                                                CONCAT14(extraout_var_09,
                                                         CONCAT13(extraout_var_06,
                                                                  CONCAT12(extraout_var_03,
                                                                           CONCAT11(extraout_var_00,
                                                                                    extraout_b0_00))
                                                                 )))));
          FUN_00aacc18(&local_70,&local_90,&local_a0,1);
          FUN_009a7ff4(SUB41((local_a0._4_4_ + 180.0) *
                             (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0
                             ),0),0,0);
          uVar51 = (undefined1)_UNK_03888d18;
          uVar52 = (undefined1)((ulong)_UNK_03888d18 >> 8);
          uVar53 = (undefined1)((ulong)_UNK_03888d18 >> 0x10);
          uVar54 = (undefined1)((ulong)_UNK_03888d18 >> 0x18);
          uVar55 = (undefined1)((ulong)_UNK_03888d18 >> 0x20);
          uVar56 = (undefined1)((ulong)_UNK_03888d18 >> 0x28);
          uVar57 = (undefined1)((ulong)_UNK_03888d18 >> 0x30);
          uVar58 = (undefined1)((ulong)_UNK_03888d18 >> 0x38);
          auVar20[8] = uVar51;
          auVar20._0_8_ = _DAT_03888d10;
          auVar20[9] = uVar52;
          auVar20[10] = uVar53;
          auVar20[0xb] = uVar54;
          auVar20[0xc] = uVar55;
          auVar20[0xd] = uVar56;
          auVar20[0xe] = uVar57;
          auVar20[0xf] = uVar58;
          uVar59 = a64_TBL(ZEXT816(0),auVar20,DAT_0388a680);
          fVar43 = (float)CONCAT13(extraout_var_07,
                                   CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01)
                                           )) * (float)_DAT_03889ac0;
          fVar45 = (float)CONCAT13(extraout_var_19,
                                   CONCAT12(extraout_var_16,
                                            CONCAT11(extraout_var_13,extraout_var_10))) *
                   (float)((ulong)_DAT_03889ac0 >> 0x20);
          fVar47 = (float)CONCAT13(extraout_var_31,
                                   CONCAT12(extraout_var_28,
                                            CONCAT11(extraout_var_25,extraout_var_22))) *
                   (float)_UNK_03889ac8;
          fVar49 = (float)CONCAT13(extraout_var_43,
                                   CONCAT12(extraout_var_40,
                                            CONCAT11(extraout_var_37,extraout_var_34))) *
                   (float)((ulong)_UNK_03889ac8 >> 0x20);
          auVar21[8] = uVar51;
          auVar21._0_8_ = _DAT_03888d10;
          auVar21[9] = uVar52;
          auVar21[10] = uVar53;
          auVar21[0xb] = uVar54;
          auVar21[0xc] = uVar55;
          auVar21[0xd] = uVar56;
          auVar21[0xe] = uVar57;
          auVar21[0xf] = uVar58;
          uVar30 = a64_TBL(ZEXT816(0),auVar21,DAT_0388a580);
          fVar38 = (float)((ulong)uVar30 >> 0x20);
          auVar14._4_4_ = fVar45;
          auVar14._0_4_ = fVar43;
          auVar14._8_4_ = fVar47;
          auVar14._12_4_ = fVar49;
          uVar39 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a580);
          auVar15._4_4_ = fVar45;
          auVar15._0_4_ = fVar43;
          auVar15._8_4_ = fVar47;
          auVar15._12_4_ = fVar49;
          uVar61 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a6c8);
          fVar41 = (float)((ulong)uVar59 >> 0x20);
          auVar16._4_4_ = fVar45;
          auVar16._0_4_ = fVar43;
          auVar16._8_4_ = fVar47;
          auVar16._12_4_ = fVar49;
          uVar62 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a680);
          auVar17._4_4_ = fVar45;
          auVar17._0_4_ = fVar43;
          auVar17._8_4_ = fVar47;
          auVar17._12_4_ = fVar49;
          uVar64 = a64_TBL(ZEXT816(0),auVar17,DAT_0388a790);
          auVar18._4_4_ = fVar45;
          auVar18._0_4_ = fVar43;
          auVar18._8_4_ = fVar47;
          auVar18._12_4_ = fVar49;
          uVar63 = a64_TBL(ZEXT816(0),auVar18,DAT_0388a880);
          auVar19._4_4_ = fVar45;
          auVar19._0_4_ = fVar43;
          auVar19._8_4_ = fVar43;
          auVar19._12_4_ = fVar45;
          uVar40 = a64_TBL(ZEXT816(0),auVar19,DAT_0388a648);
          auVar22[8] = uVar51;
          auVar22._0_8_ = _DAT_03888d10;
          auVar22[9] = uVar52;
          auVar22[10] = uVar53;
          auVar22[0xb] = uVar54;
          auVar22[0xc] = uVar55;
          auVar22[0xd] = uVar56;
          auVar22[0xe] = uVar57;
          auVar22[0xf] = uVar58;
          uVar42 = a64_TBL(ZEXT816(0),auVar22,DAT_0388a880);
          fVar7 = (float)((ulong)uVar42 >> 0x20);
          auVar4[1] = extraout_var_01;
          auVar4[0] = extraout_b0_01;
          auVar4[2] = extraout_var_04;
          auVar4[3] = extraout_var_07;
          auVar4[4] = extraout_var_10;
          auVar4[5] = extraout_var_13;
          auVar4[6] = extraout_var_16;
          auVar4[7] = extraout_var_19;
          auVar4[8] = extraout_var_22;
          auVar4[9] = extraout_var_25;
          auVar4[10] = extraout_var_28;
          auVar4[0xb] = extraout_var_31;
          auVar4[0xc] = extraout_var_34;
          auVar4[0xd] = extraout_var_37;
          auVar4[0xe] = extraout_var_40;
          auVar4[0xf] = extraout_var_43;
          uVar23 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a580);
          fVar48 = (float)_UNK_03889ad8;
          fVar50 = (float)((ulong)_UNK_03889ad8 >> 0x20);
          fVar44 = (float)_DAT_03889ad0;
          fVar46 = (float)((ulong)_DAT_03889ad0 >> 0x20);
          fVar37 = (fVar43 * (float)uVar30 + fVar44 * (float)uVar39 * 0.0 +
                   fVar44 * (float)uVar42 * (float)uVar62) - (float)uVar59 * (float)uVar63;
          fVar45 = (fVar45 * fVar38 + fVar46 * (float)((ulong)uVar39 >> 0x20) * 0.0 +
                   fVar46 * fVar7 * (float)((ulong)uVar62 >> 0x20)) -
                   fVar41 * (float)((ulong)uVar63 >> 0x20);
          fVar47 = (fVar47 * (float)uVar30 + fVar48 * (float)uVar59 * (float)uVar61 +
                   fVar48 * (float)uVar40 * 0.0) - (float)uVar42 * (float)uVar64;
          fVar49 = (fVar49 * fVar38 + fVar50 * fVar41 * (float)((ulong)uVar61 >> 0x20) +
                   fVar50 * (float)((ulong)uVar40 >> 0x20) * 0.0) -
                   fVar7 * (float)((ulong)uVar64 >> 0x20);
          auVar5[1] = extraout_var_01;
          auVar5[0] = extraout_b0_01;
          auVar5[2] = extraout_var_04;
          auVar5[3] = extraout_var_07;
          auVar5[4] = extraout_var_10;
          auVar5[5] = extraout_var_13;
          auVar5[6] = extraout_var_16;
          auVar5[7] = extraout_var_19;
          auVar5[8] = extraout_var_22;
          auVar5[9] = extraout_var_25;
          auVar5[10] = extraout_var_28;
          auVar5[0xb] = extraout_var_31;
          auVar5[0xc] = extraout_var_34;
          auVar5[0xd] = extraout_var_37;
          auVar5[0xe] = extraout_var_40;
          auVar5[0xf] = extraout_var_43;
          uVar61 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a680);
          auVar8._4_4_ = fVar45;
          auVar8._0_4_ = fVar37;
          auVar8._8_4_ = fVar47;
          auVar8._12_4_ = fVar49;
          uVar39 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a580);
          auVar9._4_4_ = fVar45;
          auVar9._0_4_ = fVar37;
          auVar9._8_4_ = fVar47;
          auVar9._12_4_ = fVar49;
          uVar62 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a6c8);
          fVar43 = (float)((ulong)uVar23 >> 0x20);
          fVar60 = (float)((ulong)uVar61 >> 0x20);
          auVar10._4_4_ = fVar45;
          auVar10._0_4_ = fVar37;
          auVar10._8_4_ = fVar47;
          auVar10._12_4_ = fVar49;
          uVar63 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a790);
          auVar11._4_4_ = fVar45;
          auVar11._0_4_ = fVar37;
          auVar11._8_4_ = fVar47;
          auVar11._12_4_ = fVar49;
          uVar42 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a680);
          auVar12._4_4_ = fVar45;
          auVar12._0_4_ = fVar37;
          auVar12._8_4_ = fVar47;
          auVar12._12_4_ = fVar49;
          uVar59 = a64_TBL(ZEXT816(0),auVar12,DAT_0388a880);
          auVar6[1] = extraout_var_01;
          auVar6[0] = extraout_b0_01;
          auVar6[2] = extraout_var_04;
          auVar6[3] = extraout_var_07;
          auVar6[4] = extraout_var_10;
          auVar6[5] = extraout_var_13;
          auVar6[6] = extraout_var_16;
          auVar6[7] = extraout_var_19;
          auVar6[8] = extraout_var_22;
          auVar6[9] = extraout_var_25;
          auVar6[10] = extraout_var_28;
          auVar6[0xb] = extraout_var_31;
          auVar6[0xc] = extraout_var_34;
          auVar6[0xd] = extraout_var_37;
          auVar6[0xe] = extraout_var_40;
          auVar6[0xf] = extraout_var_43;
          uVar40 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a880);
          fVar41 = (float)((ulong)uVar40 >> 0x20);
          auVar13._4_4_ = fVar45;
          auVar13._0_4_ = fVar37;
          auVar13._8_4_ = fVar37;
          auVar13._12_4_ = fVar45;
          uVar30 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a648);
          fVar7 = (float)CONCAT13(extraout_var_07,
                                  CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01))
                                 ) * (float)uVar30;
          fVar38 = (float)CONCAT13(extraout_var_19,
                                   CONCAT12(extraout_var_16,
                                            CONCAT11(extraout_var_13,extraout_var_10))) *
                   (float)((ulong)uVar30 >> 0x20);
          fVar37 = ((float)uVar23 * fVar37 +
                    fVar44 * (float)CONCAT13(extraout_var_07,
                                             CONCAT12(extraout_var_04,
                                                      CONCAT11(extraout_var_01,extraout_b0_01))) *
                             (float)uVar39 + fVar44 * (float)uVar40 * (float)uVar42) -
                   (float)uVar61 * (float)uVar59;
          fVar45 = (fVar43 * fVar45 +
                    fVar46 * (float)CONCAT13(extraout_var_19,
                                             CONCAT12(extraout_var_16,
                                                      CONCAT11(extraout_var_13,extraout_var_10))) *
                             (float)((ulong)uVar39 >> 0x20) +
                   fVar46 * fVar41 * (float)((ulong)uVar42 >> 0x20)) -
                   fVar60 * (float)((ulong)uVar59 >> 0x20);
          fVar47 = ((float)uVar23 * fVar47 + fVar48 * (float)uVar61 * (float)uVar62 + fVar48 * fVar7
                   ) - (float)uVar40 * (float)uVar63;
          fVar7 = (fVar43 * fVar49 + fVar50 * fVar60 * (float)((ulong)uVar62 >> 0x20) +
                  fVar50 * (float)(CONCAT17((char)((uint)fVar38 >> 0x18),
                                            CONCAT16((char)((uint)fVar38 >> 0x10),
                                                     CONCAT15((char)((uint)fVar38 >> 8),
                                                              CONCAT14(SUB41(fVar38,0),fVar7)))) >>
                                  0x20)) - fVar41 * (float)((ulong)uVar63 >> 0x20);
          uStack_a8 = CONCAT17((byte)((uint)fVar7 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38),
                               CONCAT16((byte)((uint)fVar7 >> 0x10) &
                                        (byte)((ulong)_UNK_038897c8 >> 0x30),
                                        CONCAT15((byte)((uint)fVar7 >> 8) &
                                                 (byte)((ulong)_UNK_038897c8 >> 0x28),
                                                 CONCAT14(SUB41(fVar7,0) &
                                                          (byte)((ulong)_UNK_038897c8 >> 0x20),
                                                          CONCAT13((byte)((uint)fVar47 >> 0x18) &
                                                                   (byte)((ulong)_UNK_038897c8 >>
                                                                         0x18),
                                                                   CONCAT12((byte)((uint)fVar47 >>
                                                                                  0x10) &
                                                                            (byte)((ulong)
                                                  _UNK_038897c8 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar47 >> 8) &
                                                           (byte)((ulong)_UNK_038897c8 >> 8),
                                                           SUB41(fVar47,0) & (byte)_UNK_038897c8))))
                                                )));
          local_b0 = CONCAT17((byte)((uint)fVar45 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                              CONCAT16((byte)((uint)fVar45 >> 0x10) &
                                       (byte)((ulong)_DAT_038897c0 >> 0x30),
                                       CONCAT15((byte)((uint)fVar45 >> 8) &
                                                (byte)((ulong)_DAT_038897c0 >> 0x28),
                                                CONCAT14(SUB41(fVar45,0) &
                                                         (byte)((ulong)_DAT_038897c0 >> 0x20),
                                                         CONCAT13((byte)((uint)fVar37 >> 0x18) &
                                                                  (byte)((ulong)_DAT_038897c0 >>
                                                                        0x18),
                                                                  CONCAT12((byte)((uint)fVar37 >>
                                                                                 0x10) &
                                                                           (byte)((ulong)
                                                  _DAT_038897c0 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar37 >> 8) &
                                                           (byte)((ulong)_DAT_038897c0 >> 8),
                                                           SUB41(fVar37,0) & (byte)_DAT_038897c0))))
                                               )));
          FUN_01a853a8(lVar36,&local_b0);
        }
        if (local_80 != (long *)0x0) {
          lVar36 = local_80[0xb];
          piVar1 = (int *)(lVar36 + 0xc);
          do {
            iVar28 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar28 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar28 + -1 == 0) {
            *(undefined8 *)(lVar36 + 0x18) = 0;
            (**(code **)(*local_80 + 0x20))();
          }
        }
      }
    }
    if (plVar33 != (long *)0x0) {
      lVar36 = plVar33[0xb];
      piVar1 = (int *)(lVar36 + 0xc);
      do {
        iVar28 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar28 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar28 + -1 == 0) {
        *(undefined8 *)(lVar36 + 0x18) = 0;
        (**(code **)(*plVar33 + 0x20))(plVar33);
      }
    }
    if (local_78 != (long *)0x0) {
      lVar36 = local_78[0xb];
      piVar1 = (int *)(lVar36 + 0xc);
      do {
        iVar28 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar28 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar28 + -1 == 0) {
        *(undefined8 *)(lVar36 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
      }
    }
  }
  local_70 = (long *)0x0;
  lVar36 = FUN_009bb5dc(&local_90,*(undefined8 *)(param_2 + 8),&local_70);
  *param_1 = lVar36;
  if (lVar36 != 0) {
    lVar36 = *(long *)(lVar36 + 0x58);
    if (*(undefined8 **)(lVar36 + 0x18) == (undefined8 *)0x0) {
LAB_009a7e44:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar36 + 0x10) == 0) {
      uVar30 = (**(code **)**(undefined8 **)(lVar36 + 0x18))();
      *(undefined8 *)(lVar36 + 0x10) = uVar30;
    }
    piVar1 = (int *)(lVar36 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plVar35 != (long *)0x0) {
    lVar36 = plVar35[0xb];
    piVar1 = (int *)(lVar36 + 0xc);
    do {
      iVar28 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar28 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar28 + -1 == 0) {
      *(undefined8 *)(lVar36 + 0x18) = 0;
      (**(code **)(*plVar35 + 0x20))(plVar35);
    }
  }
  return;
}


