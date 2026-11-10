/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f83584; name: FUN_01f83584
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_01f83584(long param_1,long param_2,ulong param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined2 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  int iVar18;
  int iVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  undefined8 uVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  undefined8 *puVar31;
  long lVar32;
  float fVar33;
  float fVar34;
  float fVar35;
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
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
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
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 uVar42;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 uVar43;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 uVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [12];
  float fVar49;
  undefined1 auVar48 [16];
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 in_q3 [16];
  undefined1 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fStack_b4;
  long *local_a0;
  long *local_98;
  undefined8 uStack_90;
  long *local_88;
  long *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  uVar52 = in_q3[0xf];
  uVar51 = in_q3[0xe];
  uVar50 = in_q3[0xd];
  uVar44 = in_q3[0xc];
  uVar43 = in_q3[0xb];
  uVar42 = in_q3[10];
  uVar41 = in_q3[9];
  uVar40 = in_q3[8];
  uVar39 = in_q3[3];
  uVar38 = in_q3[2];
  uVar37 = in_q3[1];
  uVar36 = in_q3[0];
  FUN_00bf5c04(&local_68,param_1 + (long)*(int *)(param_2 + 8) * 0x20 + 0x1f8);
  if (local_68 == (long *)0x0) {
LAB_01f835cc:
    bVar5 = false;
  }
  else {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00ac3fa4(&local_78,local_68 + 0x49);
    FUN_0099c748(&local_80,&local_78);
    puVar31 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
      do {
        iVar23 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar23 + -1 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar23 = __cxa_guard_acquire(PTR_DAT_04379498), iVar23 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar28 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar28;
        local_98 = (long *)*puVar31;
        FUN_02a44274(lVar28 + 0xd8,&local_98);
      }
    }
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00ae8374(&local_78,local_80 + 0x44);
    puVar31 = local_78;
    puVar20 = PTR_DAT_04379e80;
    puVar21 = PTR_DAT_04379e78;
    if (local_78 == (undefined8 *)0x0) {
      uVar24 = 1;
    }
    else {
      if (*(int *)((long)local_78 + 0xc) != 0) {
        piVar1 = (int *)((long)local_78 + 0xc);
        iVar23 = *(int *)((long)local_78 + 0xc);
        do {
          plVar29 = (long *)puVar31[2];
          if (((*puVar21 & 1) == 0) && (iVar25 = __cxa_guard_acquire(puVar21), iVar25 != 0)) {
            uVar27 = FUN_0095a420();
            *(undefined8 *)puVar20 = uVar27;
            __cxa_guard_release(puVar21);
          }
          while( true ) {
            if (plVar29 == (long *)0x0) goto LAB_01f83a44;
            if (plVar29 == (long *)puVar20) break;
            plVar29 = (long *)*plVar29;
          }
          iVar25 = *piVar1;
          if (iVar25 == iVar23) {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar23 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar28 = puVar31[3];
              plVar29 = (long *)0x0;
              puVar31 = local_78;
              if (lVar28 != 0) {
                plVar29 = (long *)(lVar28 + -0x50);
              }
              goto joined_r0x01f83a68;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar23 = iVar25;
        } while (iVar25 != 0);
      }
LAB_01f83a44:
      plVar29 = (long *)0x0;
      puVar31 = local_78;
joined_r0x01f83a68:
      local_78 = puVar31;
      if (puVar31 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar31 + 1);
        do {
          iVar23 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar23 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar23 + -1 == 0) {
          puVar31[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar23 = __cxa_guard_acquire(PTR_DAT_04379498), iVar23 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar28 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar28;
          local_98 = (long *)*puVar31;
          FUN_02a44274(lVar28 + 0xd8,&local_98);
        }
      }
      if (plVar29 == (long *)0x0) {
        uVar24 = 1;
      }
      else {
        if ((((plVar29[0x3e] == 0) || (uVar26 = FUN_02a43a8c(), (uVar26 & 1) != 0)) ||
            ((int)plVar29[0x42] != 0)) || (uVar26 = FUN_01bdbec0(plVar29), (uVar26 & 1) == 0)) {
          uVar24 = 1;
        }
        else {
          uVar24 = FUN_01bdbfc4(plVar29);
          uVar24 = uVar24 & 1;
        }
        lVar28 = plVar29[0xb];
        piVar1 = (int *)(lVar28 + 0xc);
        do {
          iVar23 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar23 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar23 + -1 == 0) {
          *(undefined8 *)(lVar28 + 0x18) = 0;
          (**(code **)(*plVar29 + 0x20))(plVar29);
        }
      }
    }
    if (local_80 != (long *)0x0) {
      lVar28 = local_80[0xb];
      piVar1 = (int *)(lVar28 + 0xc);
      do {
        iVar23 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar23 + -1 == 0) {
        *(undefined8 *)(lVar28 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
    if (uVar24 == 0) goto LAB_01f835cc;
    bVar5 = true;
  }
  if (local_68 != (long *)0x0) {
    lVar28 = local_68[0xb];
    piVar1 = (int *)(lVar28 + 0xc);
    do {
      iVar23 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar23 + -1 == 0) {
      *(undefined8 *)(lVar28 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (bVar5) {
    return false;
  }
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_00b636fc(&local_78,param_1 + (long)*(int *)(param_2 + 8) * 0x20 + 0x1f8);
  FUN_00bf5c04(&local_80,&local_78);
  if (local_80 != (long *)0x0) {
    local_98 = (long *)0x0;
    uStack_90 = 0;
    FUN_00ac3fa4(&local_98,local_80 + 0x49);
    FUN_0099c748(&local_88,&local_98);
    plVar29 = local_98;
    if (local_98 != (long *)0x0) {
      plVar30 = local_98 + 1;
      do {
        iVar23 = (int)*plVar30 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar5) {
          *(int *)plVar30 = iVar23;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar23 == 0) {
        local_98[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar23 = __cxa_guard_acquire(PTR_DAT_04379498), iVar23 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar28 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar28;
        local_68 = (long *)*plVar29;
        FUN_02a44274(lVar28 + 0xd8,&local_68);
      }
    }
    puVar22 = PTR_DAT_04379fd0;
    puVar20 = PTR_DAT_04379fc8;
    puVar21 = PTR_DAT_043794d0;
    lVar28 = *(long *)(param_1 + 0x260);
    if (lVar28 == 0) {
      bVar5 = false;
    }
    else if (*(int *)(lVar28 + 0xc) == 0) {
LAB_01f83cc4:
      bVar5 = false;
    }
    else {
      piVar1 = (int *)(lVar28 + 0xc);
      iVar23 = *(int *)(lVar28 + 0xc);
      do {
        puVar31 = *(undefined8 **)(lVar28 + 0x10);
        if (((*puVar20 & 1) == 0) && (iVar25 = __cxa_guard_acquire(puVar20), iVar25 != 0)) {
          if (((*puVar21 & 1) == 0) && (iVar25 = __cxa_guard_acquire(puVar21), iVar25 != 0)) {
            uVar27 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar27;
            __cxa_guard_release(puVar21);
          }
          *(undefined **)puVar22 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar20);
        }
        if (puVar31 == (undefined8 *)0x0) goto LAB_01f83cc4;
        while (puVar31 != (undefined8 *)puVar22) {
          puVar31 = (undefined8 *)*puVar31;
          bVar5 = false;
          if (puVar31 == (undefined8 *)0x0) goto joined_r0x01f83c7c;
        }
        iVar25 = *piVar1;
        if (iVar25 == iVar23) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar23 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01f83bb0;
          lVar28 = *(long *)(lVar28 + 0x18);
          if (lVar28 == 0) goto LAB_01f83cc4;
          plVar29 = (long *)(lVar28 + -0x50);
          FUN_018f98bc(&local_98,plVar29);
          if (local_98 == (long *)0x0) {
            local_a0 = (long *)0x0;
            goto LAB_01f83c10;
          }
          FUN_009b8630(&local_a0);
          plVar30 = local_98;
          if (local_98 == (long *)0x0) goto LAB_01f83c10;
          plVar2 = local_98 + 1;
          do {
            iVar23 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar23;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar23 == 0) {
            local_98[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar23 = __cxa_guard_acquire(PTR_DAT_04379498), iVar23 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar32 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar32;
            local_68 = (long *)*plVar30;
            FUN_02a44274(lVar32 + 0xd8,&local_68);
            if (local_a0 != (long *)0x0) goto LAB_01f83c18;
LAB_01f83c20:
            bVar5 = false;
          }
          else {
LAB_01f83c10:
            if (local_a0 == (long *)0x0) goto LAB_01f83c20;
LAB_01f83c18:
            puVar20 = PTR_DAT_043794b0;
            lVar32 = local_a0[0x35];
            if ((lVar32 == 0) || (*(int *)(lVar32 + 0xc) == 0)) goto LAB_01f83c20;
            piVar1 = (int *)(lVar32 + 0xc);
            iVar23 = *(int *)(lVar32 + 0xc);
            while( true ) {
              plVar30 = *(long **)(lVar32 + 0x10);
              if (((*puVar20 & 1) == 0) && (iVar25 = __cxa_guard_acquire(puVar20), iVar25 != 0)) {
                if (((*PTR_DAT_043794c0 & 1) == 0) &&
                   (iVar25 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar25 != 0)) {
                  if (((*puVar21 & 1) == 0) && (iVar25 = __cxa_guard_acquire(puVar21), iVar25 != 0))
                  {
                    uVar27 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar27;
                    __cxa_guard_release(puVar21);
                  }
                  *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_043794c0);
                }
                *(undefined **)PTR_DAT_043794b8 = PTR_DAT_043794c8;
                __cxa_guard_release(puVar20);
                if (plVar30 != (long *)0x0) goto LAB_01f83dc4;
                goto LAB_01f83c20;
              }
              while( true ) {
                if (plVar30 == (long *)0x0) goto LAB_01f83c20;
LAB_01f83dc4:
                if (plVar30 == (long *)PTR_DAT_043794b8) break;
                plVar30 = (long *)*plVar30;
              }
              iVar25 = *piVar1;
              if (iVar25 == iVar23) break;
              ClearExclusiveLocal();
LAB_01f83dac:
              iVar23 = iVar25;
              if (iVar25 == 0) goto LAB_01f83c20;
            }
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar23 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_01f83dac;
            lVar32 = *(long *)(lVar32 + 0x18);
            if (lVar32 == 0) goto LAB_01f83c20;
            plVar30 = (long *)(lVar32 + -0x50);
            (**(code **)(*(long *)(lVar32 + -0x50) + 0x40))(plVar30);
            fVar35 = (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40)));
            fVar45 = (float)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar37,uVar36)));
            (**(code **)(*local_a0 + 0x138))();
            fVar49 = (float)CONCAT13(extraout_var_17,
                                     CONCAT12(extraout_var_14,
                                              CONCAT11(extraout_var_11,extraout_var_08)));
            fStack_b4 = (float)(CONCAT17(extraout_var_29,
                                         CONCAT16(extraout_var_26,
                                                  CONCAT15(extraout_var_23,
                                                           CONCAT14(extraout_var_20,fVar49)))) >>
                               0x20);
            FUN_01a4bbac(local_a0);
            fVar49 = fVar49 + (float)CONCAT13(extraout_var_18,
                                              CONCAT12(extraout_var_15,
                                                       CONCAT11(extraout_var_12,extraout_var_09)));
            fStack_b4 = fStack_b4 +
                        (float)CONCAT13(extraout_var_30,
                                        CONCAT12(extraout_var_27,
                                                 CONCAT11(extraout_var_24,extraout_var_21)));
            fStack_b4 = (float)(CONCAT17((char)((uint)fStack_b4 >> 0x18),
                                         CONCAT16((char)((uint)fStack_b4 >> 0x10),
                                                  CONCAT15((char)((uint)fStack_b4 >> 8),
                                                           CONCAT14(SUB41(fStack_b4,0),fVar49)))) >>
                               0x20);
            FUN_01a87f20(local_88);
            fVar6 = (float)CONCAT13(extraout_var_07,
                                    CONCAT12(extraout_var_04,
                                             CONCAT11(extraout_var_01,extraout_b0_01))) - fVar45;
            fVar7 = (float)CONCAT13(extraout_var_19,
                                    CONCAT12(extraout_var_16,
                                             CONCAT11(extraout_var_13,extraout_var_10))) - fVar35;
            fVar46 = (float)(CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar44,fVar35)
                                                                     ))) >> 0x20);
            fVar8 = (float)CONCAT13(extraout_var_31,
                                    CONCAT12(extraout_var_28,
                                             CONCAT11(extraout_var_25,extraout_var_22))) - fVar46;
            lVar32 = *(long *)(lVar32 + 8);
            fVar45 = ((float)CONCAT13(extraout_var_05,
                                      CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0)))
                     + (float)CONCAT13(extraout_var_06,
                                       CONCAT12(extraout_var_03,
                                                CONCAT11(extraout_var_00,extraout_b0_00)))) - fVar45
            ;
            fVar49 = fVar49 - fVar35;
            fStack_b4 = fStack_b4 - fVar46;
            piVar1 = (int *)(lVar32 + 0xc);
            fVar35 = fVar6 * fVar6;
            fVar46 = fVar7 * fVar7;
            uVar36 = (undefined1)((uint)fVar46 >> 8);
            uVar37 = (undefined1)((uint)fVar46 >> 0x10);
            uVar38 = (undefined1)((uint)fVar46 >> 0x18);
            fVar13 = fVar8 * fVar8;
            uVar39 = (undefined1)((uint)fVar13 >> 8);
            uVar40 = (undefined1)((uint)fVar13 >> 0x10);
            uVar41 = (undefined1)((uint)fVar13 >> 0x18);
            fVar34 = fVar45 * fVar45;
            fVar17 = fVar49 * fVar49;
            uVar42 = (undefined1)((uint)fVar17 >> 8);
            uVar43 = (undefined1)((uint)fVar17 >> 0x10);
            uVar44 = (undefined1)((uint)fVar17 >> 0x18);
            fVar33 = fStack_b4 * fStack_b4;
            uVar50 = (undefined1)((uint)fVar33 >> 8);
            uVar51 = (undefined1)((uint)fVar33 >> 0x10);
            uVar52 = (undefined1)((uint)fVar33 >> 0x18);
            auVar14._4_4_ = 0;
            auVar14._0_4_ = fVar34;
            auVar14[8] = SUB41(fVar17,0);
            auVar14[9] = uVar42;
            auVar14[10] = uVar43;
            auVar14[0xb] = uVar44;
            auVar14[0xc] = SUB41(fVar33,0);
            auVar14[0xd] = uVar50;
            auVar14[0xe] = uVar51;
            auVar14[0xf] = uVar52;
            auVar15._4_4_ = 0;
            auVar15._0_4_ = fVar34;
            auVar15[8] = SUB41(fVar17,0);
            auVar15[9] = uVar42;
            auVar15[10] = uVar43;
            auVar15[0xb] = uVar44;
            auVar15[0xc] = SUB41(fVar33,0);
            auVar15[0xd] = uVar50;
            auVar15[0xe] = uVar51;
            auVar15[0xf] = uVar52;
            auVar53 = NEON_ext(auVar14,auVar15,8,1);
            fVar34 = auVar53._0_4_ + fVar34;
            fVar17 = auVar53._4_4_ + 0.0;
            fVar33 = fVar34 + fVar17;
            fVar34 = fVar34 + fVar17;
            uVar42 = SUB41(fVar34,0);
            uVar43 = (undefined1)((uint)fVar34 >> 8);
            uVar44 = (undefined1)((uint)fVar34 >> 0x10);
            uVar50 = (undefined1)((uint)fVar34 >> 0x18);
            auVar16[4] = uVar42;
            auVar16._0_4_ = fVar33;
            auVar16[5] = uVar43;
            auVar16[6] = uVar44;
            auVar16[7] = uVar50;
            auVar16[8] = SUB41(fVar33,0);
            auVar16[9] = (char)((uint)fVar33 >> 8);
            auVar16[10] = (char)((uint)fVar33 >> 0x10);
            auVar16[0xb] = (char)((uint)fVar33 >> 0x18);
            auVar16[0xc] = uVar42;
            auVar16[0xd] = uVar43;
            auVar16[0xe] = uVar44;
            auVar16[0xf] = uVar50;
            auVar53 = NEON_frsqrte(auVar16,4);
            auVar56._0_4_ = auVar53._0_4_ * fVar33;
            auVar56._4_4_ = auVar53._4_4_ * fVar34;
            auVar56._8_4_ = auVar53._8_4_ * fVar33;
            uVar12 = (undefined2)(CONCAT15(uVar43,CONCAT14(uVar42,fVar33)) >> 0x20);
            auVar56._12_4_ = auVar53._12_4_ * (float)CONCAT13(uVar50,CONCAT12(uVar44,uVar12));
            auVar57 = NEON_frsqrts(auVar53,auVar56,4);
            auVar54._0_4_ = auVar53._0_4_ * auVar57._0_4_;
            auVar54._4_4_ = auVar53._4_4_ * auVar57._4_4_;
            auVar54._8_4_ = auVar53._8_4_ * auVar57._8_4_;
            auVar54._12_4_ = auVar53._12_4_ * auVar57._12_4_;
            auVar58._0_4_ = fVar33 * auVar54._0_4_;
            auVar58._4_4_ = fVar34 * auVar54._4_4_;
            auVar58._8_4_ = fVar33 * auVar54._8_4_;
            auVar58._12_4_ = (float)CONCAT13(uVar50,CONCAT12(uVar44,uVar12)) * auVar54._12_4_;
            iVar23 = -(uint)(fVar33 == 0.0);
            iVar25 = -(uint)(fVar34 == 0.0);
            iVar18 = -(uint)(fVar33 == 0.0);
            iVar19 = -(uint)((float)CONCAT13(uVar50,CONCAT12(uVar44,uVar12)) == 0.0);
            auVar53 = NEON_frsqrts(auVar54,auVar58,4);
            fVar45 = fVar45 * auVar54._0_4_ * auVar53._0_4_;
            fVar34 = auVar54._4_4_ * auVar53._4_4_ * 0.0;
            fVar49 = fVar49 * auVar54._8_4_ * auVar53._8_4_;
            fStack_b4 = fStack_b4 * auVar54._12_4_ * auVar53._12_4_;
            auVar9._4_4_ = 0;
            auVar9._0_4_ = fVar35;
            auVar9[8] = SUB41(fVar46,0);
            auVar9[9] = uVar36;
            auVar9[10] = uVar37;
            auVar9[0xb] = uVar38;
            auVar9[0xc] = SUB41(fVar13,0);
            auVar9[0xd] = uVar39;
            auVar9[0xe] = uVar40;
            auVar9[0xf] = uVar41;
            auVar10._4_4_ = 0;
            auVar10._0_4_ = fVar35;
            auVar10[8] = SUB41(fVar46,0);
            auVar10[9] = uVar36;
            auVar10[10] = uVar37;
            auVar10[0xb] = uVar38;
            auVar10[0xc] = SUB41(fVar13,0);
            auVar10[0xd] = uVar39;
            auVar10[0xe] = uVar40;
            auVar10[0xf] = uVar41;
            auVar53 = NEON_ext(auVar9,auVar10,8,1);
            fVar35 = auVar53._0_4_ + fVar35;
            fVar13 = auVar53._4_4_ + 0.0;
            fVar46 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                                     CONCAT12((byte)((uint)fVar45 >> 0x10) &
                                              ~(byte)((uint)iVar23 >> 0x10),
                                              CONCAT11((byte)((uint)fVar45 >> 8) &
                                                       ~(byte)((uint)iVar23 >> 8),
                                                       SUB41(fVar45,0) & ~(byte)iVar23)));
            auVar47._0_8_ =
                 CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                          CONCAT16((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10),
                                   CONCAT15((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar25 >> 8),
                                            CONCAT14(SUB41(fVar34,0) & ~(byte)iVar25,fVar46))));
            auVar47[8] = SUB41(fVar49,0) & ~(byte)iVar18;
            auVar47[9] = (byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar18 >> 8);
            auVar47[10] = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10);
            auVar47[0xb] = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18);
            auVar48[0xc] = SUB41(fStack_b4,0) & ~(byte)iVar19;
            auVar48._0_12_ = auVar47;
            auVar48[0xd] = (byte)((uint)fStack_b4 >> 8) & ~(byte)((uint)iVar19 >> 8);
            auVar48[0xe] = (byte)((uint)fStack_b4 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10);
            auVar48[0xf] = (byte)((uint)fStack_b4 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18);
            fVar49 = fVar35 + fVar13;
            fVar35 = fVar35 + fVar13;
            uVar36 = SUB41(fVar35,0);
            uVar37 = (undefined1)((uint)fVar35 >> 8);
            uVar38 = (undefined1)((uint)fVar35 >> 0x10);
            uVar39 = (undefined1)((uint)fVar35 >> 0x18);
            auVar11[4] = uVar36;
            auVar11._0_4_ = fVar49;
            auVar11[5] = uVar37;
            auVar11[6] = uVar38;
            auVar11[7] = uVar39;
            auVar11[8] = SUB41(fVar49,0);
            auVar11[9] = (char)((uint)fVar49 >> 8);
            auVar11[10] = (char)((uint)fVar49 >> 0x10);
            auVar11[0xb] = (char)((uint)fVar49 >> 0x18);
            auVar11[0xc] = uVar36;
            auVar11[0xd] = uVar37;
            auVar11[0xe] = uVar38;
            auVar11[0xf] = uVar39;
            auVar53 = NEON_frsqrte(auVar11,4);
            auVar59._0_4_ = auVar53._0_4_ * fVar49;
            auVar59._4_4_ = auVar53._4_4_ * fVar35;
            auVar59._8_4_ = auVar53._8_4_ * fVar49;
            uVar12 = (undefined2)(CONCAT15(uVar37,CONCAT14(uVar36,fVar49)) >> 0x20);
            auVar59._12_4_ = auVar53._12_4_ * (float)CONCAT13(uVar39,CONCAT12(uVar38,uVar12));
            auVar57 = NEON_frsqrts(auVar53,auVar59,4);
            auVar55._0_4_ = auVar53._0_4_ * auVar57._0_4_;
            auVar55._4_4_ = auVar53._4_4_ * auVar57._4_4_;
            auVar55._8_4_ = auVar53._8_4_ * auVar57._8_4_;
            auVar55._12_4_ = auVar53._12_4_ * auVar57._12_4_;
            auVar60._0_4_ = fVar49 * auVar55._0_4_;
            auVar60._4_4_ = fVar35 * auVar55._4_4_;
            auVar60._8_4_ = fVar49 * auVar55._8_4_;
            auVar60._12_4_ = (float)CONCAT13(uVar39,CONCAT12(uVar38,uVar12)) * auVar55._12_4_;
            iVar23 = -(uint)(fVar49 == 0.0);
            iVar25 = -(uint)(fVar35 == 0.0);
            iVar18 = -(uint)(fVar49 == 0.0);
            iVar19 = -(uint)((float)CONCAT13(uVar39,CONCAT12(uVar38,uVar12)) == 0.0);
            auVar53 = NEON_frsqrts(auVar55,auVar60,4);
            fVar6 = fVar6 * auVar55._0_4_ * auVar53._0_4_;
            fVar49 = auVar55._4_4_ * auVar53._4_4_ * 0.0;
            fVar7 = fVar7 * auVar55._8_4_ * auVar53._8_4_;
            fVar8 = fVar8 * auVar55._12_4_ * auVar53._12_4_;
            fVar46 = fVar46 * (float)CONCAT13((byte)((uint)fVar6 >> 0x18) &
                                              ~(byte)((uint)iVar23 >> 0x18),
                                              CONCAT12((byte)((uint)fVar6 >> 0x10) &
                                                       ~(byte)((uint)iVar23 >> 0x10),
                                                       CONCAT11((byte)((uint)fVar6 >> 8) &
                                                                ~(byte)((uint)iVar23 >> 8),
                                                                SUB41(fVar6,0) & ~(byte)iVar23)));
            fVar49 = (float)((ulong)auVar47._0_8_ >> 0x20) *
                     (float)CONCAT13((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                     CONCAT12((byte)((uint)fVar49 >> 0x10) &
                                              ~(byte)((uint)iVar25 >> 0x10),
                                              CONCAT11((byte)((uint)fVar49 >> 8) &
                                                       ~(byte)((uint)iVar25 >> 8),
                                                       SUB41(fVar49,0) & ~(byte)iVar25)));
            uVar36 = (undefined1)((uint)fVar49 >> 8);
            uVar37 = (undefined1)((uint)fVar49 >> 0x10);
            uVar38 = (undefined1)((uint)fVar49 >> 0x18);
            fVar6 = auVar47._8_4_ *
                    (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                                    CONCAT12((byte)((uint)fVar7 >> 0x10) &
                                             ~(byte)((uint)iVar18 >> 0x10),
                                             CONCAT11((byte)((uint)fVar7 >> 8) &
                                                      ~(byte)((uint)iVar18 >> 8),
                                                      SUB41(fVar7,0) & ~(byte)iVar18)));
            uVar39 = (undefined1)((uint)fVar6 >> 8);
            uVar40 = (undefined1)((uint)fVar6 >> 0x10);
            uVar41 = (undefined1)((uint)fVar6 >> 0x18);
            fVar7 = auVar48._12_4_ *
                    (float)CONCAT13((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                    CONCAT12((byte)((uint)fVar8 >> 0x10) &
                                             ~(byte)((uint)iVar19 >> 0x10),
                                             CONCAT11((byte)((uint)fVar8 >> 8) &
                                                      ~(byte)((uint)iVar19 >> 8),
                                                      SUB41(fVar8,0) & ~(byte)iVar19)));
            uVar42 = (undefined1)((uint)fVar7 >> 8);
            uVar43 = (undefined1)((uint)fVar7 >> 0x10);
            uVar44 = (undefined1)((uint)fVar7 >> 0x18);
            auVar53[4] = SUB41(fVar49,0);
            auVar53._0_4_ = fVar46;
            auVar53[5] = uVar36;
            auVar53[6] = uVar37;
            auVar53[7] = uVar38;
            auVar53[8] = SUB41(fVar6,0);
            auVar53[9] = uVar39;
            auVar53[10] = uVar40;
            auVar53[0xb] = uVar41;
            auVar53[0xc] = SUB41(fVar7,0);
            auVar53[0xd] = uVar42;
            auVar53[0xe] = uVar43;
            auVar53[0xf] = uVar44;
            auVar57[4] = SUB41(fVar49,0);
            auVar57._0_4_ = fVar46;
            auVar57[5] = uVar36;
            auVar57[6] = uVar37;
            auVar57[7] = uVar38;
            auVar57[8] = SUB41(fVar6,0);
            auVar57[9] = uVar39;
            auVar57[10] = uVar40;
            auVar57[0xb] = uVar41;
            auVar57[0xc] = SUB41(fVar7,0);
            auVar57[0xd] = uVar42;
            auVar57[0xe] = uVar43;
            auVar57[0xf] = uVar44;
            auVar53 = NEON_ext(auVar53,auVar57,8,1);
            do {
              iVar23 = *piVar1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar23 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar23 + -1 == 0) {
              *(undefined8 *)(lVar32 + 0x18) = 0;
              (**(code **)(*plVar30 + 0x20))(plVar30);
            }
            if (auVar53._0_4_ + fVar46 + auVar53._4_4_ + fVar49 <= 0.0) goto LAB_01f83c20;
            bVar5 = true;
          }
          if (local_a0 != (long *)0x0) {
            lVar32 = local_a0[0xb];
            piVar1 = (int *)(lVar32 + 0xc);
            do {
              iVar23 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar23 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar23 + -1 == 0) {
              *(undefined8 *)(lVar32 + 0x18) = 0;
              (**(code **)(*local_a0 + 0x20))();
            }
          }
          lVar28 = *(long *)(lVar28 + 8);
          piVar1 = (int *)(lVar28 + 0xc);
          do {
            iVar23 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar23 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar23 + -1 == 0) {
            *(undefined8 *)(lVar28 + 0x18) = 0;
            (**(code **)(*plVar29 + 0x20))(plVar29);
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01f83bb0:
        bVar5 = false;
        iVar23 = iVar25;
      } while (iVar25 != 0);
    }
joined_r0x01f83c7c:
    if (local_88 != (long *)0x0) {
      lVar28 = local_88[0xb];
      piVar1 = (int *)(lVar28 + 0xc);
      do {
        iVar23 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar23 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar23 + -1 == 0) {
        *(undefined8 *)(lVar28 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
    if (bVar5) {
      bVar5 = true;
      goto joined_r0x01f838a4;
    }
  }
  bVar5 = false;
joined_r0x01f838a4:
  puVar31 = local_78;
  if (local_80 != (long *)0x0) {
    lVar28 = local_80[0xb];
    piVar1 = (int *)(lVar28 + 0xc);
    do {
      iVar23 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar23 + -1 == 0) {
      *(undefined8 *)(lVar28 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
      puVar31 = local_78;
    }
  }
  if (puVar31 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar31 + 1);
    do {
      iVar23 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar23 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar23 + -1 == 0) {
      puVar31[2] = 0;
      local_78 = puVar31;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar23 = __cxa_guard_acquire(PTR_DAT_04379498), iVar23 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar28 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar28;
      local_98 = (long *)*puVar31;
      FUN_02a44274(lVar28 + 0xd8,&local_98);
    }
  }
  if (!bVar5) {
    return false;
  }
  if (0 < *(int *)(param_1 + 0x300)) {
    return true;
  }
  iVar23 = *(int *)(param_1 + 0x304);
  if (0 < iVar23) {
    return 0 < iVar23;
  }
  if ((param_3 & 1) == 0) {
    return 0.0 < *(float *)(param_1 + 0x324);
  }
  return 0 < iVar23;
}


