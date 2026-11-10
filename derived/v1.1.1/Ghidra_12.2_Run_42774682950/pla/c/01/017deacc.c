/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017deacc; name: FUN_017deacc
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017deacc(long param_1)

{
  int *piVar1;
  long *plVar2;
  LightEventType *pLVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined *puVar21;
  undefined *puVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  undefined8 uVar26;
  long *plVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long *plVar34;
  ulong uVar35;
  long *plVar36;
  long *plVar37;
  undefined8 *puVar38;
  int unaff_w27;
  long *plVar39;
  float fVar40;
  float fVar41;
  undefined1 extraout_b0;
  undefined1 uVar42;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
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
  undefined1 uVar43;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 uVar44;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 uVar45;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 uVar46;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 uVar47;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 uVar48;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 uVar49;
  undefined1 extraout_var_34;
  undefined1 extraout_var_35;
  undefined1 uVar50;
  undefined1 extraout_var_36;
  undefined1 extraout_var_37;
  float fVar51;
  float fVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 in_q3 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  long *local_1a8;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  long *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  long *local_150;
  undefined8 local_148;
  long *local_140;
  undefined8 local_138;
  long *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  long *local_110;
  undefined8 uStack_108;
  long *local_f8;
  long *local_f0;
  undefined8 uStack_e8;
  long *local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  long *local_a0 [2];
  
  if (0 < *(int *)(param_1 + 0x1c0)) {
    *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + -1;
  }
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  if (*(char *)(param_1 + 0x100) == '\0') {
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_017deb24;
LAB_017e1800:
    FUN_0131ff2c(&local_170);
    if (local_170 == (long *)0x0) {
      uVar35 = 0;
    }
    else {
      uVar35 = FUN_01e80e78();
      uVar35 = uVar35 & 0xffffffff;
      if (local_170 != (long *)0x0) {
        lVar29 = local_170[0xb];
        piVar1 = (int *)(lVar29 + 0xc);
        do {
          iVar25 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar25 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar25 + -1 == 0) {
          *(undefined8 *)(lVar29 + 0x18) = 0;
          (**(code **)(*local_170 + 0x20))();
        }
      }
    }
  }
  else {
    puVar38 = *(undefined8 **)(param_1 + 0x170);
    if (puVar38 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar38 + 1);
      do {
        iVar25 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar25 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar25 + -1 == 0) {
        puVar38[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar29 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar29;
        local_170 = (long *)*puVar38;
        FUN_02a44274(lVar29 + 0xd8,&local_170);
      }
    }
    if (*(long **)(param_1 + 0x150) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x150) + 0x20))();
    }
    puVar38 = *(undefined8 **)(param_1 + 0x140);
    if (puVar38 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar38 + 1);
      do {
        iVar25 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar25 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar25 + -1 == 0) {
        puVar38[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar29 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar29;
        local_170 = (long *)*puVar38;
        FUN_02a44274(lVar29 + 0xd8,&local_170);
      }
    }
    puVar38 = *(undefined8 **)(param_1 + 0x130);
    if (puVar38 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar38 + 1);
      do {
        iVar25 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar25 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar25 + -1 == 0) {
        puVar38[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar29 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar29;
        local_170 = (long *)*puVar38;
        FUN_02a44274(lVar29 + 0xd8,&local_170);
      }
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
    if (*(long *)(param_1 + 0x98) != 0) goto LAB_017e1800;
LAB_017deb24:
    uVar35 = 0;
    local_170 = (long *)0x0;
  }
  if (((*PTR_DAT_04379690 & 1) == 0) &&
     (iVar25 = __cxa_guard_acquire(PTR_DAT_04379690), iVar25 != 0)) {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar29 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar29;
  plVar36 = *(long **)(*(long *)(lVar29 + 0x50) + 0x30);
  if (plVar36 != (long *)0x0) {
    lVar29 = plVar36[0xb];
    if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_017e1b64;
    if (*(long *)(lVar29 + 0x10) == 0) {
      uVar26 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
      *(undefined8 *)(lVar29 + 0x10) = uVar26;
    }
    piVar1 = (int *)(lVar29 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar29 = FUN_01467f18(plVar36[0x99],"ItemChangeView");
  if (lVar29 == 0) {
LAB_017e1b64:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar30 = plVar36[0xb];
  piVar1 = (int *)(lVar30 + 0xc);
  do {
    iVar25 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar25 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar25 + -1 == 0) {
    *(undefined8 *)(lVar30 + 0x18) = 0;
    (**(code **)(*plVar36 + 0x20))(plVar36);
  }
  if (*(int *)(lVar29 + 0x5ac) == 1) {
    if (*(long *)(lVar29 + 0x630) == *(long *)(lVar29 + 0x638)) {
      bVar5 = false;
      unaff_w27 = 0;
    }
    else {
      bVar5 = true;
      unaff_w27 = *(int *)(*(long *)(lVar29 + 0x630) + (ulong)*(uint *)(lVar29 + 0x6fc) * 8);
    }
  }
  else {
    bVar5 = false;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
    local_a0[0] = (long *)0x0;
LAB_017dec10:
    fVar60 = 0.0;
    uStack_188 = _UNK_03888d18;
    local_190 = _DAT_03888d10;
    uStack_178 = 0;
    local_180 = 0;
  }
  else {
    FUN_00cfac20(local_a0);
    if (local_a0[0] == (long *)0x0) goto LAB_017dec10;
    (**(code **)(*local_a0[0] + 0x140))();
    uStack_178 = CONCAT17(extraout_var_36,
                          CONCAT16(extraout_var_34,
                                   CONCAT15(extraout_var_32,
                                            CONCAT14(extraout_var_30,
                                                     CONCAT13(extraout_var_28,
                                                              CONCAT12(extraout_var_26,
                                                                       CONCAT11(extraout_var_24,
                                                                                extraout_var_22)))))
                                  ));
    local_180 = CONCAT17(extraout_var_20,
                         CONCAT16(extraout_var_18,
                                  CONCAT15(extraout_var_16,
                                           CONCAT14(extraout_var_14,
                                                    CONCAT13(extraout_var_11,
                                                             CONCAT12(extraout_var_06,
                                                                      CONCAT11(extraout_var_01,
                                                                               extraout_b0_01)))))))
    ;
    FUN_0099c748(&local_170,local_a0[0] + 0x49);
    if (local_170 == (long *)0x0) {
      fVar60 = 0.0;
    }
    else {
      (**(code **)(*local_170 + 0x248))();
      fVar60 = (float)CONCAT13(extraout_var_12,
                               CONCAT12(extraout_var_07,CONCAT11(extraout_var_02,extraout_b0_02)));
      if (local_170 != (long *)0x0) {
        lVar29 = local_170[0xb];
        piVar1 = (int *)(lVar29 + 0xc);
        do {
          iVar25 = *piVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar25 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar25 + -1 == 0) {
          *(undefined8 *)(lVar29 + 0x18) = 0;
          (**(code **)(*local_170 + 0x20))();
        }
      }
    }
    local_170 = (long *)0x0;
    uStack_168 = 0;
    FUN_00ac3fa4(&local_170,local_a0[0] + 0x49);
    plVar36 = local_170;
    puVar21 = PTR_DAT_04379e90;
    if (local_170 == (long *)0x0) {
LAB_017e1ab0:
      local_190 = _DAT_03888d10;
      uStack_188 = _UNK_03888d18;
    }
    else {
      if (*(int *)((long)local_170 + 0xc) != 0) {
        piVar1 = (int *)((long)local_170 + 0xc);
        iVar25 = *(int *)((long)local_170 + 0xc);
        do {
          puVar38 = (undefined8 *)plVar36[2];
          if (((*PTR_DAT_04379e88 & 1) == 0) &&
             (iVar24 = __cxa_guard_acquire(PTR_DAT_04379e88), iVar24 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar24 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar24 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar24 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar24 != 0)) {
                uVar26 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar26;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar21 = PTR_DAT_043795e0;
            __cxa_guard_release(PTR_DAT_04379e88);
          }
          while( true ) {
            if (puVar38 == (undefined8 *)0x0) goto LAB_017e1f54;
            if (puVar38 == (undefined8 *)puVar21) break;
            puVar38 = (undefined8 *)*puVar38;
          }
          iVar24 = *piVar1;
          if (iVar24 == iVar25) {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar25 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar29 = plVar36[3];
              plVar36 = (long *)0x0;
              plVar2 = local_170;
              if (lVar29 != 0) {
                plVar36 = (long *)(lVar29 + -0x50);
              }
              goto joined_r0x017e1efc;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar25 = iVar24;
        } while (iVar24 != 0);
      }
LAB_017e1f54:
      plVar36 = (long *)0x0;
      plVar2 = local_170;
joined_r0x017e1efc:
      local_170 = plVar2;
      if (plVar2 != (long *)0x0) {
        plVar39 = plVar2 + 1;
        do {
          iVar25 = (int)*plVar39 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar39,0x10);
          if (bVar6) {
            *(int *)plVar39 = iVar25;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar25 == 0) {
          plVar2[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar29 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar29;
          local_f0 = (long *)*plVar2;
          FUN_02a44274(lVar29 + 0xd8,&local_f0);
        }
      }
      if (plVar36 == (long *)0x0) goto LAB_017e1ab0;
      FUN_01a831dc(plVar36);
      lVar29 = plVar36[0xb];
      piVar1 = (int *)(lVar29 + 0xc);
      uStack_188 = CONCAT17(extraout_var_37,
                            CONCAT16(extraout_var_35,
                                     CONCAT15(extraout_var_33,
                                              CONCAT14(extraout_var_31,
                                                       CONCAT13(extraout_var_29,
                                                                CONCAT12(extraout_var_27,
                                                                         CONCAT11(extraout_var_25,
                                                                                  extraout_var_23)))
                                                      ))));
      local_190 = CONCAT17(extraout_var_21,
                           CONCAT16(extraout_var_19,
                                    CONCAT15(extraout_var_17,
                                             CONCAT14(extraout_var_15,
                                                      CONCAT13(extraout_var_13,
                                                               CONCAT12(extraout_var_08,
                                                                        CONCAT11(extraout_var_03,
                                                                                 extraout_b0_03)))))
                                   ));
      do {
        iVar25 = *piVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar25 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar25 + -1 == 0) {
        *(undefined8 *)(lVar29 + 0x18) = 0;
        (**(code **)(*plVar36 + 0x20))(plVar36);
      }
    }
    if (local_a0[0] != (long *)0x0) {
      lVar29 = local_a0[0][0xb];
      piVar1 = (int *)(lVar29 + 0xc);
      do {
        iVar25 = *piVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar25 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar25 + -1 == 0) {
        *(undefined8 *)(lVar29 + 0x18) = 0;
        (**(code **)(*local_a0[0] + 0x20))();
      }
    }
  }
  lVar29 = nn::os::GetCurrentThread();
  plVar36 = (long *)(param_1 + 400);
  do {
    if (*plVar36 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x184));
        while (*plVar36 == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar6) {
            *plVar36 = lVar29;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_017dec6c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar36,0x10);
    if (bVar6) {
      *plVar36 = lVar29;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_017dec6c:
  plVar39 = *(long **)(param_1 + 0xc0);
  plVar2 = (long *)(param_1 + 0xb8);
  if (plVar2 != plVar39) {
    bVar6 = false;
    fVar20 = 0.0;
LAB_017deca0:
    plVar37 = plVar39 + 2;
    if (*(int *)(*plVar37 + 0x7c) == 0) {
      plVar39 = (long *)plVar39[1];
      goto joined_r0x017dec9c;
    }
    local_170 = (long *)0x0;
    uStack_168 = 0;
    FUN_009ab200(&local_170,*(long *)(*plVar37 + 0x68) + 0x340);
    plVar27 = local_170;
    bVar23 = bVar6;
    fVar62 = fVar20;
    if (local_170 == (long *)0x0) goto LAB_017deccc;
    if (*(int *)((long)local_170 + 0xc) != 0) {
      piVar1 = (int *)((long)local_170 + 0xc);
      local_1a8._0_4_ = *(int *)((long)local_170 + 0xc);
      while (uVar32 = FUN_009b4090(plVar27[2]), (uVar32 & 1) != 0) {
        iVar25 = *piVar1;
        if (iVar25 == (int)local_1a8) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = (int)local_1a8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar29 = plVar27[3];
            local_1a8 = (long *)0x0;
            plVar27 = local_170;
            if (lVar29 != 0) {
              local_1a8 = (long *)(lVar29 + -0x50);
            }
            goto joined_r0x017ded54;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        local_1a8._0_4_ = iVar25;
        if (iVar25 == 0) break;
      }
    }
    local_1a8 = (long *)0x0;
    plVar27 = local_170;
joined_r0x017ded54:
    local_170 = plVar27;
    if (plVar27 != (long *)0x0) {
      plVar28 = plVar27 + 1;
      do {
        iVar25 = (int)*plVar28 + -1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar7) {
          *(int *)plVar28 = iVar25;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar25 == 0) {
        plVar27[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar29 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar29;
        local_f0 = (long *)*plVar27;
        FUN_02a44274(lVar29 + 0xd8,&local_f0);
      }
    }
    if (local_1a8 == (long *)0x0) goto LAB_017deccc;
    if ((*(char *)((long)local_1a8 + 0x75b) != '\0') || (*(char *)(*plVar37 + 0x70) != '\0')) {
      FUN_009c69bc(&local_170,local_1a8);
      lVar29 = FUN_009aff90(local_170 + 0x1e,&local_f0);
      if (local_170 != (long *)0x0) {
        lVar30 = local_170[0xb];
        piVar1 = (int *)(lVar30 + 0xc);
        do {
          iVar25 = *piVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar25 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar25 + -1 == 0) {
          *(undefined8 *)(lVar30 + 0x18) = 0;
          (**(code **)(*local_170 + 0x20))();
        }
      }
      auVar56 = in_q3;
      if (lVar29 == 0) goto LAB_017e0e98;
      FUN_01836814(lVar29,0);
      uVar26 = *(undefined8 *)(param_1 + 0xf8);
      (**(code **)(*local_1a8 + 0x10))(&local_170);
      local_d0 = (long *)0x0;
      uStack_c8 = 0;
      FUN_017dc294(&local_d0,&local_170);
      plVar37 = local_170;
      if (local_170 != (long *)0x0) {
        plVar27 = local_170 + 1;
        do {
          iVar25 = (int)*plVar27 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar6) {
            *(int *)plVar27 = iVar25;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar25 == 0) {
          local_170[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar29 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar29;
          local_f0 = (long *)*plVar37;
          FUN_02a44274(lVar29 + 0xd8,&local_f0);
        }
      }
      FUN_017d5558(uVar26,&local_d0);
      auVar56 = in_q3;
      if (local_d0 != (long *)0x0) {
        plVar37 = local_d0 + 1;
        do {
          iVar25 = (int)*plVar37;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar6) {
            *(int *)plVar37 = iVar25 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          plVar27 = local_d0;
        } while (cVar4 != '\0');
        goto LAB_017deed4;
      }
LAB_017def1c:
      bVar7 = true;
      goto LAB_017e0e9c;
    }
    if ((char)local_1a8[0xf5] != '\0') {
      FUN_018e1674(local_1a8);
      uVar26 = *(undefined8 *)(param_1 + 0xf8);
      (**(code **)(*local_1a8 + 0x10))(&local_170,local_1a8);
      local_e0 = (long *)0x0;
      uStack_d8 = 0;
      FUN_017dc294(&local_e0,&local_170);
      plVar37 = local_170;
      if (local_170 != (long *)0x0) {
        plVar27 = local_170 + 1;
        do {
          iVar25 = (int)*plVar27 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar6) {
            *(int *)plVar27 = iVar25;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar25 == 0) {
          local_170[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar29 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar29;
          local_f0 = (long *)*plVar37;
          FUN_02a44274(lVar29 + 0xd8,&local_f0);
        }
      }
      FUN_017d5558(uVar26,&local_e0);
      auVar56 = in_q3;
      if (local_e0 != (long *)0x0) {
        plVar37 = local_e0 + 1;
        do {
          iVar25 = (int)*plVar37;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar6) {
            *(int *)plVar37 = iVar25 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          plVar27 = local_e0;
        } while (cVar4 != '\0');
LAB_017deed4:
        auVar56 = in_q3;
        if (iVar25 == 1) {
          plVar27[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar29 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar29;
          local_170 = (long *)*plVar27;
          FUN_02a44274(lVar29 + 0xd8,&local_170);
          auVar56 = in_q3;
        }
      }
      goto LAB_017def1c;
    }
    if ((*(ulong *)(param_1 + 0x1a8) & 3) == 0) {
LAB_017df174:
      uVar42 = 0;
    }
    else {
      if ((*(ulong *)(param_1 + 0x1a8) & 1) != 0) {
        if (*(long *)(param_1 + 0x1b0) == 0) {
          uVar42 = 0;
          if (*(long *)(*plVar37 + 0x68) == 0) goto LAB_017df178;
        }
        else {
          FUN_009b3e90(&local_170);
          plVar27 = local_170;
          plVar28 = *(long **)(*plVar37 + 0x68);
          if (local_170 != (long *)0x0) {
            lVar29 = local_170[0xb];
            piVar1 = (int *)(lVar29 + 0xc);
            do {
              iVar25 = *piVar1;
              cVar4 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar23) {
                *piVar1 = iVar25 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar25 + -1 == 0) {
              *(undefined8 *)(lVar29 + 0x18) = 0;
              (**(code **)(*local_170 + 0x20))(local_170);
            }
          }
          if (plVar27 == plVar28) goto LAB_017df174;
        }
      }
      uVar42 = 1;
    }
LAB_017df178:
    *(undefined1 *)((long)local_1a8 + 0x7a9) = uVar42;
    lVar29 = *plVar37;
    if (*(int *)(lVar29 + 0x7c) == 2) {
      if (*(char *)((long)local_1a8 + 0x75e) == '\0') {
        if (((uVar35 & 1) != 0) && (*(int *)((long)local_1a8 + 0x714) == 7)) {
          FUN_017e2724(param_1,*(undefined4 *)(lVar29 + 0x78));
        }
      }
      else {
        *(undefined4 *)(lVar29 + 0x7c) = 5;
      }
    }
    auVar56 = in_q3;
    if ((char)local_1a8[0xfd] == '\0') goto LAB_017e0e98;
    FUN_009c69bc(&local_170,local_1a8);
    (**(code **)(*local_170 + 0x40))();
    auVar56 = in_q3;
    if (local_170 != (long *)0x0) {
      lVar29 = local_170[0xb];
      piVar1 = (int *)(lVar29 + 0xc);
      do {
        iVar25 = *piVar1;
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar23) {
          *piVar1 = iVar25 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar25 + -1 == 0) {
        *(undefined8 *)(lVar29 + 0x18) = 0;
        (**(code **)(*local_170 + 0x20))();
      }
    }
    FUN_0099c748(&local_170,local_1a8 + 0x49);
    fVar62 = 0.0;
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x248))();
      fVar62 = (float)CONCAT13(extraout_var_09,
                               CONCAT12(extraout_var_04,CONCAT11(extraout_var,extraout_b0)));
      if (local_170 != (long *)0x0) {
        lVar29 = local_170[0xb];
        piVar1 = (int *)(lVar29 + 0xc);
        do {
          iVar25 = *piVar1;
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar23) {
            *piVar1 = iVar25 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar25 + -1 == 0) {
          *(undefined8 *)(lVar29 + 0x18) = 0;
          (**(code **)(*local_170 + 0x20))();
        }
      }
    }
    local_1c0 = in_q3._0_4_;
    fStack_1b8 = in_q3._8_4_;
    fStack_1b4 = in_q3._12_4_;
    fVar16 = (float)local_180;
    fVar41 = local_1c0 - fVar16;
    fVar18 = (float)uStack_178;
    fVar17 = fStack_1b8 - fVar18;
    fVar19 = (float)((ulong)uStack_178 >> 0x20);
    fVar63 = fStack_1b4 - fVar19;
    auVar59._0_4_ = fVar41 * fVar41;
    auVar59._4_4_ = 0;
    auVar59._8_4_ = fVar17 * fVar17;
    auVar59._12_4_ = fVar63 * fVar63;
    auVar55 = NEON_ext(auVar59,auVar59,8,1);
    fVar51 = auVar55._0_4_ + auVar59._0_4_;
    fVar54 = auVar55._4_4_ + 0.0;
    fVar40 = fVar51 + fVar54;
    fVar51 = fVar51 + fVar54;
    if (fVar40 == 0.0) goto LAB_017e0e98;
    auVar52._8_8_ = CONCAT44(fVar51,fVar40);
    auVar52._0_8_ = CONCAT44(fVar51,fVar40);
    auVar56 = NEON_frsqrte(auVar52,4);
    auVar58._0_4_ = auVar56._0_4_ * fVar40;
    auVar58._4_4_ = auVar56._4_4_ * fVar51;
    auVar58._8_4_ = auVar56._8_4_ * fVar40;
    auVar58._12_4_ = auVar56._12_4_ * fVar51;
    auVar59 = NEON_frsqrts(auVar56,auVar58,4);
    auVar57._0_4_ = auVar56._0_4_ * auVar59._0_4_;
    auVar57._4_4_ = auVar56._4_4_ * auVar59._4_4_;
    auVar57._8_4_ = auVar56._8_4_ * auVar59._8_4_;
    auVar57._12_4_ = auVar56._12_4_ * auVar59._12_4_;
    auVar56._0_4_ = -(uint)(fVar40 == 0.0);
    auVar56._4_4_ = -(uint)(fVar51 == 0.0);
    auVar56._8_4_ = -(uint)(fVar40 == 0.0);
    auVar56._12_4_ = -(uint)(fVar51 == 0.0);
    auVar53._0_4_ = fVar40 * auVar57._0_4_;
    auVar53._4_4_ = fVar51 * auVar57._4_4_;
    auVar53._8_4_ = fVar40 * auVar57._8_4_;
    auVar53._12_4_ = fVar51 * auVar57._12_4_;
    auVar59 = NEON_frsqrts(auVar57,auVar53,4);
    fVar41 = fVar41 * auVar57._0_4_ * auVar59._0_4_;
    fVar40 = auVar57._4_4_ * auVar59._4_4_ * 0.0;
    fVar17 = fVar17 * auVar57._8_4_ * auVar59._8_4_;
    fVar63 = fVar63 * auVar57._12_4_ * auVar59._12_4_;
    fVar41 = (float)local_190 *
             (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)auVar56._0_4_ >> 0x18),
                             CONCAT12((byte)((uint)fVar41 >> 0x10) &
                                      ~(byte)((uint)auVar56._0_4_ >> 0x10),
                                      CONCAT11((byte)((uint)fVar41 >> 8) &
                                               ~(byte)((uint)auVar56._0_4_ >> 8),
                                               SUB41(fVar41,0) & ~(byte)auVar56._0_4_)));
    fVar40 = local_190._4_4_ *
             (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)auVar56._4_4_ >> 0x18),
                             CONCAT12((byte)((uint)fVar40 >> 0x10) &
                                      ~(byte)((uint)auVar56._4_4_ >> 0x10),
                                      CONCAT11((byte)((uint)fVar40 >> 8) &
                                               ~(byte)((uint)auVar56._4_4_ >> 8),
                                               SUB41(fVar40,0) & ~(byte)auVar56._4_4_)));
    uVar42 = (undefined1)((uint)fVar40 >> 8);
    uVar43 = (undefined1)((uint)fVar40 >> 0x10);
    uVar44 = (undefined1)((uint)fVar40 >> 0x18);
    fVar17 = (float)uStack_188 *
             (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)auVar56._8_4_ >> 0x18),
                             CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                      ~(byte)((uint)auVar56._8_4_ >> 0x10),
                                      CONCAT11((byte)((uint)fVar17 >> 8) &
                                               ~(byte)((uint)auVar56._8_4_ >> 8),
                                               SUB41(fVar17,0) & ~(byte)auVar56._8_4_)));
    uVar45 = (undefined1)((uint)fVar17 >> 8);
    uVar46 = (undefined1)((uint)fVar17 >> 0x10);
    uVar47 = (undefined1)((uint)fVar17 >> 0x18);
    fVar63 = uStack_188._4_4_ *
             (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)auVar56._12_4_ >> 0x18),
                             CONCAT12((byte)((uint)fVar63 >> 0x10) &
                                      ~(byte)((uint)auVar56._12_4_ >> 0x10),
                                      CONCAT11((byte)((uint)fVar63 >> 8) &
                                               ~(byte)((uint)auVar56._12_4_ >> 8),
                                               SUB41(fVar63,0) & ~(byte)auVar56._12_4_)));
    uVar48 = (undefined1)((uint)fVar63 >> 8);
    uVar49 = (undefined1)((uint)fVar63 >> 0x10);
    uVar50 = (undefined1)((uint)fVar63 >> 0x18);
    auVar55[4] = SUB41(fVar40,0);
    auVar55._0_4_ = fVar41;
    auVar55[5] = uVar42;
    auVar55[6] = uVar43;
    auVar55[7] = uVar44;
    auVar55[8] = SUB41(fVar17,0);
    auVar55[9] = uVar45;
    auVar55[10] = uVar46;
    auVar55[0xb] = uVar47;
    auVar55[0xc] = SUB41(fVar63,0);
    auVar55[0xd] = uVar48;
    auVar55[0xe] = uVar49;
    auVar55[0xf] = uVar50;
    auVar9[4] = SUB41(fVar40,0);
    auVar9._0_4_ = fVar41;
    auVar9[5] = uVar42;
    auVar9[6] = uVar43;
    auVar9[7] = uVar44;
    auVar9[8] = SUB41(fVar17,0);
    auVar9[9] = uVar45;
    auVar9[10] = uVar46;
    auVar9[0xb] = uVar47;
    auVar9[0xc] = SUB41(fVar63,0);
    auVar9[0xd] = uVar48;
    auVar9[0xe] = uVar49;
    auVar9[0xf] = uVar50;
    auVar59 = NEON_ext(auVar55,auVar9,8,1);
    fVar41 = auVar59._0_4_ + fVar41 + auVar59._4_4_ + fVar40;
    uVar42 = 0;
    if ((-1.0 <= fVar41) && (uVar42 = SUB41(fVar41,0), 1.0 < fVar41)) {
      uVar42 = 0;
    }
    FUN_0095d8f0(uVar42);
    fVar41 = -(float)CONCAT13(extraout_var_10,
                              CONCAT12(extraout_var_05,CONCAT11(extraout_var_00,extraout_b0_00)));
    if (NAN((float)CONCAT13(extraout_var_10,
                            CONCAT12(extraout_var_05,CONCAT11(extraout_var_00,extraout_b0_00)))) ||
        0.0 <= (float)CONCAT13(extraout_var_10,
                               CONCAT12(extraout_var_05,CONCAT11(extraout_var_00,extraout_b0_00))))
    {
      fVar41 = (float)CONCAT13(extraout_var_10,
                               CONCAT12(extraout_var_05,CONCAT11(extraout_var_00,extraout_b0_00)));
    }
    lVar29 = local_1a8[0xb];
    if (*(undefined8 **)(lVar29 + 0x18) != (undefined8 *)0x0) {
      fStack_1bc = in_q3._4_4_;
      fVar17 = (float)((ulong)local_180 >> 0x20);
      fVar63 = (fVar16 - local_1c0) * (fVar16 - local_1c0);
      fVar40 = (fVar17 - fStack_1bc) * (fVar17 - fStack_1bc);
      uVar42 = (undefined1)((uint)fVar40 >> 8);
      uVar43 = (undefined1)((uint)fVar40 >> 0x10);
      uVar44 = (undefined1)((uint)fVar40 >> 0x18);
      fVar51 = (fVar18 - fStack_1b8) * (fVar18 - fStack_1b8);
      uVar45 = (undefined1)((uint)fVar51 >> 8);
      uVar46 = (undefined1)((uint)fVar51 >> 0x10);
      uVar47 = (undefined1)((uint)fVar51 >> 0x18);
      fVar54 = (fVar19 - fStack_1b4) * (fVar19 - fStack_1b4);
      uVar48 = (undefined1)((uint)fVar54 >> 8);
      uVar49 = (undefined1)((uint)fVar54 >> 0x10);
      uVar50 = (undefined1)((uint)fVar54 >> 0x18);
      auVar10[4] = SUB41(fVar40,0);
      auVar10._0_4_ = fVar63;
      auVar10[5] = uVar42;
      auVar10[6] = uVar43;
      auVar10[7] = uVar44;
      auVar10[8] = SUB41(fVar51,0);
      auVar10[9] = uVar45;
      auVar10[10] = uVar46;
      auVar10[0xb] = uVar47;
      auVar10[0xc] = SUB41(fVar54,0);
      auVar10[0xd] = uVar48;
      auVar10[0xe] = uVar49;
      auVar10[0xf] = uVar50;
      auVar11[4] = SUB41(fVar40,0);
      auVar11._0_4_ = fVar63;
      auVar11[5] = uVar42;
      auVar11[6] = uVar43;
      auVar11[7] = uVar44;
      auVar11[8] = SUB41(fVar51,0);
      auVar11[9] = uVar45;
      auVar11[10] = uVar46;
      auVar11[0xb] = uVar47;
      auVar11[0xc] = SUB41(fVar54,0);
      auVar11[0xd] = uVar48;
      auVar11[0xe] = uVar49;
      auVar11[0xf] = uVar50;
      auVar59 = NEON_ext(auVar10,auVar11,8,1);
      if (*(long *)(lVar29 + 0x10) == 0) {
        uVar26 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
        *(undefined8 *)(lVar29 + 0x10) = uVar26;
      }
      fVar62 = (SQRT(auVar59._0_4_ + fVar63 + auVar59._4_4_ + fVar40) - fVar62) - fVar60;
      piVar1 = (int *)(lVar29 + 0xc);
      do {
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar23) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar32 = FUN_018de07c(local_1a8);
      if ((uVar32 & 1) == 0) {
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar25 = __cxa_guard_acquire(PTR_DAT_04379660), iVar25 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar29 = *(long *)PTR_DAT_04379668;
        fVar41 = 0.0;
        *(long *)PTR_DAT_04379670 = lVar29;
        uVar32 = *(ulong *)(lVar29 + 0x60);
        if (uVar32 == 0) goto LAB_017dfc4c;
        uVar33 = uVar32 - (uVar32 >> 1 & 0x5555555555555555);
        uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
        uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar33 < 2) {
          uVar31 = uVar32 - 1 & 0x4e9fd5f8e749f8e3;
        }
        else if (uVar32 < 0x4e9fd5f8e749f8e4) {
          uVar31 = 0;
          if (uVar32 != 0) {
            uVar31 = 0x4e9fd5f8e749f8e3 / uVar32;
          }
          uVar31 = 0x4e9fd5f8e749f8e3 - uVar31 * uVar32;
        }
        else {
          uVar31 = 0x4e9fd5f8e749f8e3;
        }
        fVar41 = 0.0;
        plVar27 = *(long **)(*(long *)(lVar29 + 0x58) + uVar31 * 8);
        if (plVar27 == (long *)0x0) goto LAB_017dfc4c;
        plVar27 = (long *)*plVar27;
        fVar41 = 0.0;
        if (plVar27 == (long *)0x0) goto LAB_017dfc4c;
        fVar41 = fVar62;
        if (uVar33 < 2) {
          do {
            if (plVar27[1] == 0x4e9fd5f8e749f8e3) {
              if (plVar27[2] == 0x4e9fd5f8e749f8e3) goto LAB_017dfa8c;
            }
            else if ((plVar27[1] & uVar32 - 1) != uVar31) break;
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
        else {
          do {
            uVar33 = plVar27[1];
            if (uVar33 == 0x4e9fd5f8e749f8e3) {
              if (plVar27[2] == 0x4e9fd5f8e749f8e3) goto LAB_017dfa8c;
            }
            else {
              if (uVar32 <= uVar33) {
                uVar8 = 0;
                if (uVar32 != 0) {
                  uVar8 = uVar33 / uVar32;
                }
                uVar33 = uVar33 - uVar8 * uVar32;
              }
              if (uVar33 != uVar31) break;
            }
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
        }
        goto joined_r0x017df5dc;
      }
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar25 = __cxa_guard_acquire(PTR_DAT_04379660), iVar25 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar29 = *(long *)PTR_DAT_04379668;
      fVar63 = 0.0;
      *(long *)PTR_DAT_04379670 = lVar29;
      uVar32 = *(ulong *)(lVar29 + 0x60);
      if (uVar32 == 0) goto LAB_017df8d4;
      uVar33 = uVar32 - (uVar32 >> 1 & 0x5555555555555555);
      uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
      uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar33 < 2) {
        uVar31 = uVar32 - 1 & 0x4e9fd5f8e749f8e3;
      }
      else {
        uVar31 = 0x4e9fd5f8e749f8e3;
        if (uVar32 < 0x4e9fd5f8e749f8e4) {
          uVar31 = 0;
          if (uVar32 != 0) {
            uVar31 = 0x4e9fd5f8e749f8e3 / uVar32;
          }
          uVar31 = 0x4e9fd5f8e749f8e3 - uVar31 * uVar32;
        }
      }
      fVar63 = 0.0;
      plVar27 = *(long **)(*(long *)(lVar29 + 0x58) + uVar31 * 8);
      if (plVar27 == (long *)0x0) goto LAB_017df8d4;
      plVar27 = (long *)*plVar27;
      fVar63 = 0.0;
      if (plVar27 == (long *)0x0) goto LAB_017df8d4;
      if (uVar33 < 2) {
        do {
          if (plVar27[1] == 0x4e9fd5f8e749f8e3) {
            if (plVar27[2] == 0x4e9fd5f8e749f8e3) goto LAB_017df714;
          }
          else if ((plVar27[1] & uVar32 - 1) != uVar31) break;
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
      }
      else {
        do {
          uVar33 = plVar27[1];
          if (uVar33 == 0x4e9fd5f8e749f8e3) {
            if (plVar27[2] == 0x4e9fd5f8e749f8e3) goto LAB_017df714;
          }
          else {
            if (uVar32 <= uVar33) {
              uVar8 = 0;
              if (uVar32 != 0) {
                uVar8 = uVar33 / uVar32;
              }
              uVar33 = uVar33 - uVar8 * uVar32;
            }
            if (uVar33 != uVar31) break;
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
      }
      if (0.0 < fVar62) goto LAB_017df8dc;
      goto LAB_017e0a74;
    }
    goto LAB_017e1b64;
  }
  bVar6 = false;
LAB_017e13f8:
  pLVar3 = (LightEventType *)(param_1 + 0x184);
  *(undefined8 *)(param_1 + 400) = 0;
  nn::os::SignalLightEvent(pLVar3);
  if (*(long *)(param_1 + 0x68) == 0) {
    local_f8 = (long *)0x0;
  }
  else {
    FUN_00cfac20(&local_f8);
    if (local_f8 == (long *)0x0) goto LAB_017e1418;
    local_170 = (long *)0x0;
    uStack_168 = 0;
    FUN_01a02dbc(&local_170,local_f8 + 0x8c);
    plVar39 = local_170;
    puVar21 = PTR_DAT_0437a688;
    if (local_170 != (long *)0x0) {
      if (*(int *)((long)local_170 + 0xc) != 0) {
        piVar1 = (int *)((long)local_170 + 0xc);
        iVar25 = *(int *)((long)local_170 + 0xc);
        do {
          plVar37 = (long *)plVar39[2];
          if (((*PTR_DAT_0437a680 & 1) == 0) &&
             (iVar24 = __cxa_guard_acquire(PTR_DAT_0437a680), iVar24 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar24 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar24 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar24 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar24 != 0)) {
                uVar26 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar26;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar21 = PTR_DAT_043795e0;
            __cxa_guard_release(PTR_DAT_0437a680);
          }
          plVar27 = (long *)0x0;
          plVar28 = local_170;
          if (plVar37 == (long *)0x0) goto joined_r0x017e1cbc;
          while (plVar37 != (long *)puVar21) {
            plVar37 = (long *)*plVar37;
            if (plVar37 == (long *)0x0) {
              plVar27 = (long *)0x0;
              goto joined_r0x017e1cbc;
            }
          }
          iVar24 = *piVar1;
          if (iVar24 == iVar25) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar25 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar29 = plVar39[3];
              plVar27 = (long *)0x0;
              if (lVar29 != 0) {
                plVar27 = (long *)(lVar29 + -0x50);
              }
              goto joined_r0x017e1cbc;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar25 = iVar24;
        } while (iVar24 != 0);
      }
      plVar27 = (long *)0x0;
      plVar28 = local_170;
joined_r0x017e1cbc:
      local_170 = plVar28;
      if (plVar28 != (long *)0x0) {
        plVar39 = plVar28 + 1;
        do {
          iVar25 = (int)*plVar39 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar39,0x10);
          if (bVar5) {
            *(int *)plVar39 = iVar25;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar25 == 0) {
          plVar28[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar29 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar29;
          local_f0 = (long *)*plVar28;
          FUN_02a44274(lVar29 + 0xd8,&local_f0);
        }
      }
      if (plVar27 != (long *)0x0) {
        puVar38 = local_b0;
        if (((!bVar6) && (local_c0 != (long *)0x0)) && (*(int *)((long)local_c0 + 0xc) != 0)) {
          FUN_017db6d4(&local_b0,&local_c0);
          puVar38 = local_b0;
        }
        local_b0 = puVar38;
        if ((puVar38 != (undefined8 *)0x0) && (*(int *)((long)puVar38 + 0xc) != 0)) {
          piVar1 = (int *)((long)puVar38 + 0xc);
          iVar25 = *(int *)((long)puVar38 + 0xc);
          while( true ) {
            uVar35 = FUN_009b4090(puVar38[2]);
            if ((uVar35 & 1) == 0) goto LAB_017e1d30;
            iVar24 = *piVar1;
            if (iVar24 == iVar25) break;
            ClearExclusiveLocal();
LAB_017e1edc:
            iVar25 = iVar24;
            if (iVar24 == 0) goto LAB_017e1d30;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar25 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_017e1edc;
          lVar29 = puVar38[3];
          if (lVar29 == 0) goto LAB_017e1d30;
          local_128 = 0;
          local_120 = 0x3f80000000000000;
          plVar37 = (long *)(lVar29 + -0x50);
          local_118 = 0x3f800000;
          local_170 = (long *)CONCAT44(local_170._4_4_,2);
          local_160 = 0;
          local_138 = 0;
          local_130 = (long *)0x0;
          local_148 = 0;
          local_140 = (long *)0x0;
          local_158 = 0;
          local_150 = (long *)0x0;
          local_110 = (long *)0x0;
          uStack_108 = 0;
          FUN_01a73650(&local_f0,plVar37);
          FUN_0087fcf0(&local_140,&local_f0);
          plVar39 = local_f0;
          if (local_f0 != (long *)0x0) {
            plVar28 = local_f0 + 1;
            do {
              iVar25 = (int)*plVar28 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar5) {
                *(int *)plVar28 = iVar25;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar25 == 0) {
              local_f0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar30 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar30;
              local_a0[0] = (long *)*plVar39;
              FUN_02a44274(lVar30 + 0xd8,local_a0);
            }
          }
          lVar30 = (**(code **)(*plVar37 + 0x100))(plVar37);
          FUN_00947cf8(&local_f0,*(undefined8 *)(lVar30 + 8));
          plVar39 = local_130;
          local_130 = (long *)0x0;
          if (plVar39 != (long *)0x0) {
            (**(code **)(*plVar39 + 0x20))();
          }
          local_130 = local_f0;
          if (((*PTR_DAT_04379660 & 1) == 0) &&
             (iVar25 = __cxa_guard_acquire(PTR_DAT_04379660), iVar25 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar30 = *(long *)PTR_DAT_04379668;
          *(long *)PTR_DAT_04379670 = lVar30;
          uVar35 = *(ulong *)(lVar30 + 0x60);
          uVar61 = 0;
          if (uVar35 != 0) {
            uVar32 = uVar35 - (uVar35 >> 1 & 0x5555555555555555);
            uVar32 = (uVar32 & 0x3333333333333333) + (uVar32 >> 2 & 0x3333333333333333);
            uVar32 = (uVar32 + (uVar32 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar32 < 2) {
              uVar33 = uVar35 - 1 & 0x4e9fd5f8e749f8e3;
            }
            else if (uVar35 < 0x4e9fd5f8e749f8e4) {
              uVar33 = 0;
              if (uVar35 != 0) {
                uVar33 = 0x4e9fd5f8e749f8e3 / uVar35;
              }
              uVar33 = 0x4e9fd5f8e749f8e3 - uVar33 * uVar35;
            }
            else {
              uVar33 = 0x4e9fd5f8e749f8e3;
            }
            plVar39 = *(long **)(*(long *)(lVar30 + 0x58) + uVar33 * 8);
            if ((plVar39 != (long *)0x0) && (plVar39 = (long *)*plVar39, plVar39 != (long *)0x0)) {
              if (uVar32 < 2) {
                do {
                  if (plVar39[1] == 0x4e9fd5f8e749f8e3) {
                    if (plVar39[2] == 0x4e9fd5f8e749f8e3) goto LAB_017e22d4;
                  }
                  else if ((plVar39[1] & uVar35 - 1) != uVar33) break;
                  plVar39 = (long *)*plVar39;
                } while (plVar39 != (long *)0x0);
              }
              else {
                do {
                  uVar32 = plVar39[1];
                  if (uVar32 != 0x4e9fd5f8e749f8e3) {
                    if (uVar35 <= uVar32) {
                      uVar31 = 0;
                      if (uVar35 != 0) {
                        uVar31 = uVar32 / uVar35;
                      }
                      uVar32 = uVar32 - uVar31 * uVar35;
                    }
                    if (uVar32 == uVar33) goto LAB_017e2290;
                    break;
                  }
                  if (plVar39[2] == 0x4e9fd5f8e749f8e3) goto LAB_017e22d4;
LAB_017e2290:
                  plVar39 = (long *)*plVar39;
                } while (plVar39 != (long *)0x0);
              }
            }
          }
          goto LAB_017e2420;
        }
LAB_017e1d30:
        lVar29 = plVar27[0xb];
        piVar1 = (int *)(lVar29 + 0xc);
        do {
          iVar25 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar25 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar25 + -1 == 0) {
          *(undefined8 *)(lVar29 + 0x18) = 0;
          (**(code **)(*plVar27 + 0x20))(plVar27);
        }
      }
    }
    if (local_f8 != (long *)0x0) {
      lVar29 = local_f8[0xb];
      piVar1 = (int *)(lVar29 + 0xc);
      do {
        iVar25 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar25 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar25 + -1 == 0) {
        *(undefined8 *)(lVar29 + 0x18) = 0;
        (**(code **)(*local_f8 + 0x20))();
      }
    }
  }
LAB_017e1418:
  lVar29 = nn::os::GetCurrentThread();
  do {
    if (*plVar36 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar3);
        while (*plVar36 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar5) {
            *plVar36 = lVar29;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_017e1450;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar36,0x10);
    if (bVar5) {
      *plVar36 = lVar29;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_017e1450:
  puVar22 = PTR_DAT_043794a8;
  puVar21 = PTR_DAT_043794a0;
  for (plVar36 = *(long **)(param_1 + 0xc0); plVar36 != plVar2; plVar36 = (long *)plVar36[1]) {
    lVar29 = plVar36[2];
    if (*(int *)(lVar29 + 0x7c) == 0) {
      if (*(int *)(lVar29 + 0x74) < 1) {
        plVar39 = *(long **)(param_1 + 0xc0);
        if (plVar39 != plVar2) {
LAB_017e14c0:
          if ((*(int *)(plVar39[2] + 0x7c) == 0) ||
             (*(int *)(plVar39[2] + 0x78) != *(int *)(lVar29 + 0x78))) goto LAB_017e14b4;
          FUN_017e62ec(&local_170);
          plVar39 = local_170;
          if (local_170 != (long *)0x0) {
            iVar25 = *(int *)((long)local_170 + 0xc);
            if (local_170 != (long *)0x0) {
              plVar37 = local_170 + 1;
              do {
                iVar24 = (int)*plVar37 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar37,0x10);
                if (bVar5) {
                  *(int *)plVar37 = iVar24;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar24 == 0) {
                local_170[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar24 = __cxa_guard_acquire(PTR_DAT_04379498), iVar24 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,puVar21,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar29 = *(long *)puVar21;
                *(long *)puVar22 = lVar29;
                local_f0 = (long *)*plVar39;
                FUN_02a44274(lVar29 + 0xd8,&local_f0);
              }
            }
            if (iVar25 == 0) goto LAB_017e154c;
            goto LAB_017e147c;
          }
          goto LAB_017e154c;
        }
LAB_017e1548:
        local_170 = (long *)0x0;
        uStack_168 = 0;
LAB_017e154c:
        FUN_017e2bb4(param_1,plVar36[2] + 0x90);
        lVar29 = plVar36[2];
        if (*(char *)(lVar29 + 0x71) == '\0') {
          *(undefined4 *)(lVar29 + 0x7c) = 1;
        }
        else {
          *(undefined4 *)(lVar29 + 0x7c) = 2;
        }
      }
      else {
        *(int *)(lVar29 + 0x74) = *(int *)(lVar29 + 0x74) + -1;
      }
    }
LAB_017e147c:
  }
  *(undefined8 *)(param_1 + 400) = 0;
  nn::os::SignalLightEvent(pLVar3);
  lVar29 = *(long *)(param_1 + 0xf8) + 0x70;
  for (lVar30 = *(long *)(*(long *)(param_1 + 0xf8) + 0x78); lVar29 != lVar30;
      lVar30 = *(long *)(lVar30 + 8)) {
    while( true ) {
      FUN_017d446c(*(undefined8 *)(lVar30 + 0x10));
      iVar25 = FUN_017d4ac0(*(undefined8 *)(lVar30 + 0x10));
      if (1 < iVar25) break;
      lVar30 = FUN_017d4b2c(lVar29,lVar30);
      if (lVar29 == lVar30) goto LAB_017e15d4;
    }
  }
LAB_017e15d4:
  plVar36 = local_c0;
  if (local_c0 != (long *)0x0) {
    plVar2 = local_c0 + 1;
    do {
      iVar25 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar25;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar25 == 0) {
      local_c0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar29 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar29;
      local_170 = (long *)*plVar36;
      FUN_02a44274(lVar29 + 0xd8,&local_170);
    }
  }
  puVar38 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_b0 + 1);
    do {
      iVar25 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar25 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar25 + -1 == 0) {
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar29 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar29;
      local_170 = (long *)*puVar38;
      FUN_02a44274(lVar29 + 0xd8,&local_170);
    }
  }
  return;
LAB_017dfa8c:
  plVar27 = (long *)plVar27[3];
  fVar41 = 0.0;
  if (plVar27 != (long *)0x0) {
    plVar28 = plVar27 + 10;
    do {
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar23) {
        *(int *)plVar28 = (int)*plVar28 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar32 = plVar27[0x21];
    fVar41 = 0.0;
    if (uVar32 != 0) {
      uVar33 = uVar32 - (uVar32 >> 1 & 0x5555555555555555);
      uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
      uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar33 < 2) {
        uVar31 = uVar32 - 1 & 0x49288f1ac627c30d;
      }
      else if (uVar32 < 0x49288f1ac627c30e) {
        uVar31 = 0;
        if (uVar32 != 0) {
          uVar31 = 0x49288f1ac627c30d / uVar32;
        }
        uVar31 = 0x49288f1ac627c30d - uVar31 * uVar32;
      }
      else {
        uVar31 = 0x49288f1ac627c30d;
      }
      fVar41 = 0.0;
      plVar34 = *(long **)(plVar27[0x20] + uVar31 * 8);
      if (plVar34 != (long *)0x0) {
        plVar34 = (long *)*plVar34;
        fVar41 = 0.0;
        if (plVar34 != (long *)0x0) {
          if (uVar33 < 2) {
            do {
              if (plVar34[1] == 0x49288f1ac627c30d) {
                if (plVar34[2] == 0x49288f1ac627c30d) goto LAB_017dfc34;
              }
              else if ((plVar34[1] & uVar32 - 1) != uVar31) break;
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
          else {
            do {
              uVar33 = plVar34[1];
              if (uVar33 == 0x49288f1ac627c30d) {
                if (plVar34[2] == 0x49288f1ac627c30d) goto LAB_017dfc34;
              }
              else {
                if (uVar32 <= uVar33) {
                  uVar8 = 0;
                  if (uVar32 != 0) {
                    uVar8 = uVar33 / uVar32;
                  }
                  uVar33 = uVar33 - uVar8 * uVar32;
                }
                if (uVar33 != uVar31) break;
              }
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
          fVar41 = 0.0;
        }
      }
    }
    goto LAB_017dfc38;
  }
LAB_017dfc4c:
  if (fVar62 <= fVar41) goto LAB_017e0a74;
  goto LAB_017e0a58;
LAB_017dfc34:
  fVar41 = *(float *)(plVar34 + 6);
LAB_017dfc38:
  do {
    iVar25 = (int)*plVar28 + -1;
    cVar4 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar23) {
      *(int *)plVar28 = iVar25;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar25 != 0) goto LAB_017dfc4c;
  (**(code **)(*plVar27 + 0x10))();
  if (fVar41 < fVar62) goto LAB_017e0a58;
  goto LAB_017e0a74;
LAB_017df714:
  plVar27 = (long *)plVar27[3];
  fVar63 = 0.0;
  if (plVar27 != (long *)0x0) {
    plVar28 = plVar27 + 10;
    do {
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar23) {
        *(int *)plVar28 = (int)*plVar28 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar32 = plVar27[0x21];
    fVar63 = 0.0;
    if (uVar32 != 0) {
      uVar33 = uVar32 - (uVar32 >> 1 & 0x5555555555555555);
      uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
      uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar33 < 2) {
        uVar31 = uVar32 - 1 & 0xc5b59755b17ae517;
      }
      else if (uVar32 < 0xc5b59755b17ae518) {
        uVar31 = 0;
        if (uVar32 != 0) {
          uVar31 = 0xc5b59755b17ae517 / uVar32;
        }
        uVar31 = 0xc5b59755b17ae517 - uVar31 * uVar32;
      }
      else {
        uVar31 = 0xc5b59755b17ae517;
      }
      fVar63 = 0.0;
      plVar34 = *(long **)(plVar27[0x20] + uVar31 * 8);
      if (plVar34 != (long *)0x0) {
        plVar34 = (long *)*plVar34;
        fVar63 = 0.0;
        if (plVar34 != (long *)0x0) {
          if (uVar33 < 2) {
            do {
              if (plVar34[1] == 0xc5b59755b17ae517) {
                if (plVar34[2] == -0x3a4a68aa4e851ae9) goto LAB_017df8bc;
              }
              else if ((plVar34[1] & uVar32 - 1) != uVar31) break;
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
          else {
            do {
              uVar33 = plVar34[1];
              if (uVar33 == 0xc5b59755b17ae517) {
                if (plVar34[2] == -0x3a4a68aa4e851ae9) goto LAB_017df8bc;
              }
              else {
                if (uVar32 <= uVar33) {
                  uVar8 = 0;
                  if (uVar32 != 0) {
                    uVar8 = uVar33 / uVar32;
                  }
                  uVar33 = uVar33 - uVar8 * uVar32;
                }
                if (uVar33 != uVar31) break;
              }
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
          fVar63 = 0.0;
        }
      }
    }
    goto LAB_017df8c0;
  }
LAB_017df8d4:
  if (fVar63 < fVar62) goto LAB_017df8dc;
  goto LAB_017e0a74;
LAB_017df8bc:
  fVar63 = *(float *)(plVar34 + 6);
LAB_017df8c0:
  do {
    iVar25 = (int)*plVar28 + -1;
    cVar4 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar23) {
      *(int *)plVar28 = iVar25;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar25 != 0) goto LAB_017df8d4;
  (**(code **)(*plVar27 + 0x10))();
  if (fVar62 <= fVar63) goto LAB_017e0a74;
LAB_017df8dc:
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar25 = __cxa_guard_acquire(PTR_DAT_04379660), iVar25 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar29 = *(long *)PTR_DAT_04379668;
  fVar63 = 0.0;
  *(long *)PTR_DAT_04379670 = lVar29;
  uVar32 = *(ulong *)(lVar29 + 0x60);
  if (uVar32 == 0) goto joined_r0x017e0038;
  uVar33 = uVar32 - (uVar32 >> 1 & 0x5555555555555555);
  uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
  uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar33 < 2) {
    uVar31 = uVar32 - 1 & 0x4e9fd5f8e749f8e3;
  }
  else {
    uVar31 = 0x4e9fd5f8e749f8e3;
    if (uVar32 < 0x4e9fd5f8e749f8e4) {
      uVar31 = 0;
      if (uVar32 != 0) {
        uVar31 = 0x4e9fd5f8e749f8e3 / uVar32;
      }
      uVar31 = 0x4e9fd5f8e749f8e3 - uVar31 * uVar32;
    }
  }
  fVar63 = 0.0;
  plVar27 = *(long **)(*(long *)(lVar29 + 0x58) + uVar31 * 8);
  if (plVar27 == (long *)0x0) goto joined_r0x017e0038;
  plVar27 = (long *)*plVar27;
  fVar63 = 0.0;
  if (plVar27 == (long *)0x0) goto joined_r0x017e0038;
  if (uVar33 < 2) {
    do {
      if (plVar27[1] == 0x4e9fd5f8e749f8e3) {
        if (plVar27[2] == 0x4e9fd5f8e749f8e3) goto LAB_017dfd20;
      }
      else if ((plVar27[1] & uVar32 - 1) != uVar31) break;
      plVar27 = (long *)*plVar27;
    } while (plVar27 != (long *)0x0);
  }
  else {
    do {
      uVar33 = plVar27[1];
      if (uVar33 == 0x4e9fd5f8e749f8e3) {
        if (plVar27[2] == 0x4e9fd5f8e749f8e3) goto LAB_017dfd20;
      }
      else {
        if (uVar32 <= uVar33) {
          uVar8 = 0;
          if (uVar32 != 0) {
            uVar8 = uVar33 / uVar32;
          }
          uVar33 = uVar33 - uVar8 * uVar32;
        }
        if (uVar33 != uVar31) break;
      }
      plVar27 = (long *)*plVar27;
    } while (plVar27 != (long *)0x0);
  }
  if (fVar62 <= 0.0) goto LAB_017dfee8;
  goto LAB_017e02b8;
LAB_017dfd20:
  plVar27 = (long *)plVar27[3];
  fVar63 = 0.0;
  if (plVar27 == (long *)0x0) goto joined_r0x017e0038;
  plVar28 = plVar27 + 10;
  do {
    cVar4 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar23) {
      *(int *)plVar28 = (int)*plVar28 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar32 = plVar27[0x21];
  fVar63 = 0.0;
  if (uVar32 != 0) {
    uVar33 = uVar32 - (uVar32 >> 1 & 0x5555555555555555);
    uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
    uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar33 < 2) {
      uVar31 = uVar32 - 1 & 0xd4be168a3f3dcac4;
    }
    else if (uVar32 < 0xd4be168a3f3dcac5) {
      uVar31 = 0;
      if (uVar32 != 0) {
        uVar31 = 0xd4be168a3f3dcac4 / uVar32;
      }
      uVar31 = 0xd4be168a3f3dcac4 - uVar31 * uVar32;
    }
    else {
      uVar31 = 0xd4be168a3f3dcac4;
    }
    fVar63 = 0.0;
    plVar34 = *(long **)(plVar27[0x20] + uVar31 * 8);
    if (plVar34 != (long *)0x0) {
      plVar34 = (long *)*plVar34;
      fVar63 = 0.0;
      if (plVar34 != (long *)0x0) {
        if (uVar33 < 2) {
          do {
            if (plVar34[1] == 0xd4be168a3f3dcac4) {
              if (plVar34[2] == -0x2b41e975c0c2353c) goto LAB_017dfec8;
            }
            else if ((plVar34[1] & uVar32 - 1) != uVar31) break;
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
        else {
          do {
            uVar33 = plVar34[1];
            if (uVar33 == 0xd4be168a3f3dcac4) {
              if (plVar34[2] == -0x2b41e975c0c2353c) goto LAB_017dfec8;
            }
            else {
              if (uVar32 <= uVar33) {
                uVar8 = 0;
                if (uVar32 != 0) {
                  uVar8 = uVar33 / uVar32;
                }
                uVar33 = uVar33 - uVar8 * uVar32;
              }
              if (uVar33 != uVar31) break;
            }
            plVar34 = (long *)*plVar34;
          } while (plVar34 != (long *)0x0);
        }
        fVar63 = 0.0;
      }
    }
  }
  goto LAB_017dfecc;
LAB_017dfec8:
  fVar63 = *(float *)(plVar34 + 6);
LAB_017dfecc:
  do {
    iVar25 = (int)*plVar28 + -1;
    cVar4 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar23) {
      *(int *)plVar28 = iVar25;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar25 == 0) {
    (**(code **)(*plVar27 + 0x10))();
  }
joined_r0x017e0038:
  if (fVar62 <= fVar63) {
LAB_017dfee8:
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar25 = __cxa_guard_acquire(PTR_DAT_04379660), iVar25 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar29 = *(long *)PTR_DAT_04379668;
    fVar63 = 0.0;
    *(long *)PTR_DAT_04379670 = lVar29;
    uVar32 = *(ulong *)(lVar29 + 0x60);
    if (uVar32 != 0) {
      uVar33 = uVar32 - (uVar32 >> 1 & 0x5555555555555555);
      uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
      uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar33 < 2) {
        uVar31 = uVar32 - 1 & 0x4e9fd5f8e749f8e3;
      }
      else {
        uVar31 = 0x4e9fd5f8e749f8e3;
        if (uVar32 < 0x4e9fd5f8e749f8e4) {
          uVar31 = 0;
          if (uVar32 != 0) {
            uVar31 = 0x4e9fd5f8e749f8e3 / uVar32;
          }
          uVar31 = 0x4e9fd5f8e749f8e3 - uVar31 * uVar32;
        }
      }
      fVar63 = 0.0;
      plVar27 = *(long **)(*(long *)(lVar29 + 0x58) + uVar31 * 8);
      if (plVar27 != (long *)0x0) {
        plVar27 = (long *)*plVar27;
        fVar63 = 0.0;
        if (plVar27 != (long *)0x0) {
          if (uVar33 < 2) {
            do {
              if (plVar27[1] == 0x4e9fd5f8e749f8e3) {
                if (plVar27[2] == 0x4e9fd5f8e749f8e3) goto LAB_017e00f0;
              }
              else if ((plVar27[1] & uVar32 - 1) != uVar31) break;
              plVar27 = (long *)*plVar27;
            } while (plVar27 != (long *)0x0);
          }
          else {
            do {
              uVar33 = plVar27[1];
              if (uVar33 == 0x4e9fd5f8e749f8e3) {
                if (plVar27[2] == 0x4e9fd5f8e749f8e3) goto LAB_017e00f0;
              }
              else {
                if (uVar32 <= uVar33) {
                  uVar8 = 0;
                  if (uVar32 != 0) {
                    uVar8 = uVar33 / uVar32;
                  }
                  uVar33 = uVar33 - uVar8 * uVar32;
                }
                if (uVar33 != uVar31) break;
              }
              plVar27 = (long *)*plVar27;
            } while (plVar27 != (long *)0x0);
          }
          if (fVar41 <= 0.0) goto LAB_017e0a74;
          goto LAB_017e02b8;
        }
      }
    }
    goto joined_r0x017e0408;
  }
  goto LAB_017e02b8;
LAB_017e00f0:
  plVar27 = (long *)plVar27[3];
  fVar63 = 0.0;
  if (plVar27 != (long *)0x0) {
    plVar28 = plVar27 + 10;
    do {
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar23) {
        *(int *)plVar28 = (int)*plVar28 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar32 = plVar27[0x21];
    fVar63 = 0.0;
    if (uVar32 != 0) {
      uVar33 = uVar32 - (uVar32 >> 1 & 0x5555555555555555);
      uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
      uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar33 < 2) {
        uVar31 = uVar32 - 1 & 0xab1f48d0f56ca028;
      }
      else if (uVar32 < 0xab1f48d0f56ca029) {
        uVar31 = 0;
        if (uVar32 != 0) {
          uVar31 = 0xab1f48d0f56ca028 / uVar32;
        }
        uVar31 = 0xab1f48d0f56ca028 - uVar31 * uVar32;
      }
      else {
        uVar31 = 0xab1f48d0f56ca028;
      }
      fVar63 = 0.0;
      plVar34 = *(long **)(plVar27[0x20] + uVar31 * 8);
      if (plVar34 != (long *)0x0) {
        plVar34 = (long *)*plVar34;
        fVar63 = 0.0;
        if (plVar34 != (long *)0x0) {
          if (uVar33 < 2) {
            do {
              if (plVar34[1] == 0xab1f48d0f56ca028) {
                if (plVar34[2] == -0x54e0b72f0a935fd8) goto LAB_017e0298;
              }
              else if ((plVar34[1] & uVar32 - 1) != uVar31) break;
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
          else {
            do {
              uVar33 = plVar34[1];
              if (uVar33 == 0xab1f48d0f56ca028) {
                if (plVar34[2] == -0x54e0b72f0a935fd8) goto LAB_017e0298;
              }
              else {
                if (uVar32 <= uVar33) {
                  uVar8 = 0;
                  if (uVar32 != 0) {
                    uVar8 = uVar33 / uVar32;
                  }
                  uVar33 = uVar33 - uVar8 * uVar32;
                }
                if (uVar33 != uVar31) break;
              }
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
          fVar63 = 0.0;
        }
      }
    }
    goto LAB_017e029c;
  }
  goto joined_r0x017e0408;
LAB_017e0298:
  fVar63 = *(float *)(plVar34 + 6);
LAB_017e029c:
  do {
    iVar25 = (int)*plVar28 + -1;
    cVar4 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar23) {
      *(int *)plVar28 = iVar25;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar25 == 0) {
    (**(code **)(*plVar27 + 0x10))();
  }
joined_r0x017e0408:
  if (fVar41 <= fVar63) goto LAB_017e0a74;
LAB_017e02b8:
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar25 = __cxa_guard_acquire(PTR_DAT_04379660), iVar25 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar29 = *(long *)PTR_DAT_04379668;
  fVar63 = 0.0;
  *(long *)PTR_DAT_04379670 = lVar29;
  uVar32 = *(ulong *)(lVar29 + 0x60);
  if (uVar32 == 0) {
LAB_017e0680:
    if (fVar62 <= fVar63) {
LAB_017e0688:
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar25 = __cxa_guard_acquire(PTR_DAT_04379660), iVar25 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar29 = *(long *)PTR_DAT_04379668;
      fVar63 = 0.0;
      *(long *)PTR_DAT_04379670 = lVar29;
      uVar32 = *(ulong *)(lVar29 + 0x60);
      if (uVar32 != 0) {
        uVar33 = uVar32 - (uVar32 >> 1 & 0x5555555555555555);
        uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
        uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar33 < 2) {
          uVar31 = uVar32 - 1 & 0x4e9fd5f8e749f8e3;
        }
        else {
          uVar31 = 0x4e9fd5f8e749f8e3;
          if (uVar32 < 0x4e9fd5f8e749f8e4) {
            uVar31 = 0;
            if (uVar32 != 0) {
              uVar31 = 0x4e9fd5f8e749f8e3 / uVar32;
            }
            uVar31 = 0x4e9fd5f8e749f8e3 - uVar31 * uVar32;
          }
        }
        fVar63 = 0.0;
        plVar27 = *(long **)(*(long *)(lVar29 + 0x58) + uVar31 * 8);
        if (plVar27 != (long *)0x0) {
          plVar27 = (long *)*plVar27;
          fVar63 = 0.0;
          if (plVar27 != (long *)0x0) {
            if (uVar33 < 2) {
              do {
                if (plVar27[1] == 0x4e9fd5f8e749f8e3) {
                  if (plVar27[2] == 0x4e9fd5f8e749f8e3) goto LAB_017e0890;
                }
                else if ((plVar27[1] & uVar32 - 1) != uVar31) break;
                plVar27 = (long *)*plVar27;
              } while (plVar27 != (long *)0x0);
            }
            else {
              do {
                uVar33 = plVar27[1];
                if (uVar33 == 0x4e9fd5f8e749f8e3) {
                  if (plVar27[2] == 0x4e9fd5f8e749f8e3) goto LAB_017e0890;
                }
                else {
                  if (uVar32 <= uVar33) {
                    uVar8 = 0;
                    if (uVar32 != 0) {
                      uVar8 = uVar33 / uVar32;
                    }
                    uVar33 = uVar33 - uVar8 * uVar32;
                  }
                  if (uVar33 != uVar31) break;
                }
                plVar27 = (long *)*plVar27;
              } while (plVar27 != (long *)0x0);
            }
joined_r0x017df5dc:
            if (fVar41 <= 0.0) goto LAB_017e0a74;
            goto LAB_017e0a58;
          }
        }
      }
LAB_017e0a50:
      if (fVar41 <= fVar63) goto LAB_017e0a74;
    }
  }
  else {
    uVar33 = uVar32 - (uVar32 >> 1 & 0x5555555555555555);
    uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
    uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar33 < 2) {
      uVar31 = uVar32 - 1 & 0x4e9fd5f8e749f8e3;
    }
    else {
      uVar31 = 0x4e9fd5f8e749f8e3;
      if (uVar32 < 0x4e9fd5f8e749f8e4) {
        uVar31 = 0;
        if (uVar32 != 0) {
          uVar31 = 0x4e9fd5f8e749f8e3 / uVar32;
        }
        uVar31 = 0x4e9fd5f8e749f8e3 - uVar31 * uVar32;
      }
    }
    fVar63 = 0.0;
    plVar27 = *(long **)(*(long *)(lVar29 + 0x58) + uVar31 * 8);
    if (plVar27 == (long *)0x0) goto LAB_017e0680;
    plVar27 = (long *)*plVar27;
    fVar63 = 0.0;
    if (plVar27 == (long *)0x0) goto LAB_017e0680;
    if (uVar33 < 2) {
      do {
        if (plVar27[1] == 0x4e9fd5f8e749f8e3) {
          if (plVar27[2] == 0x4e9fd5f8e749f8e3) goto LAB_017e04c0;
        }
        else if ((plVar27[1] & uVar32 - 1) != uVar31) break;
        plVar27 = (long *)*plVar27;
      } while (plVar27 != (long *)0x0);
    }
    else {
      do {
        uVar33 = plVar27[1];
        if (uVar33 == 0x4e9fd5f8e749f8e3) {
          if (plVar27[2] == 0x4e9fd5f8e749f8e3) goto LAB_017e04c0;
        }
        else {
          if (uVar32 <= uVar33) {
            uVar8 = 0;
            if (uVar32 != 0) {
              uVar8 = uVar33 / uVar32;
            }
            uVar33 = uVar33 - uVar8 * uVar32;
          }
          if (uVar33 != uVar31) break;
        }
        plVar27 = (long *)*plVar27;
      } while (plVar27 != (long *)0x0);
    }
    if (fVar62 <= 0.0) goto LAB_017e0688;
  }
LAB_017e0a58:
  bVar23 = false;
  goto LAB_017e0a78;
LAB_017e04c0:
  plVar27 = (long *)plVar27[3];
  fVar63 = 0.0;
  if (plVar27 != (long *)0x0) {
    plVar28 = plVar27 + 10;
    do {
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar23) {
        *(int *)plVar28 = (int)*plVar28 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar32 = plVar27[0x21];
    fVar63 = 0.0;
    if (uVar32 != 0) {
      uVar33 = uVar32 - (uVar32 >> 1 & 0x5555555555555555);
      uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
      uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar33 < 2) {
        uVar31 = uVar32 - 1 & 0xb1440a812e0a411;
      }
      else if (uVar32 < 0xb1440a812e0a412) {
        uVar31 = 0;
        if (uVar32 != 0) {
          uVar31 = 0xb1440a812e0a411 / uVar32;
        }
        uVar31 = 0xb1440a812e0a411 - uVar31 * uVar32;
      }
      else {
        uVar31 = 0xb1440a812e0a411;
      }
      fVar63 = 0.0;
      plVar34 = *(long **)(plVar27[0x20] + uVar31 * 8);
      if (plVar34 != (long *)0x0) {
        plVar34 = (long *)*plVar34;
        fVar63 = 0.0;
        if (plVar34 != (long *)0x0) {
          if (uVar33 < 2) {
            do {
              if (plVar34[1] == 0xb1440a812e0a411) {
                if (plVar34[2] == 0xb1440a812e0a411) goto LAB_017e0668;
              }
              else if ((plVar34[1] & uVar32 - 1) != uVar31) break;
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
          else {
            do {
              uVar33 = plVar34[1];
              if (uVar33 == 0xb1440a812e0a411) {
                if (plVar34[2] == 0xb1440a812e0a411) goto LAB_017e0668;
              }
              else {
                if (uVar32 <= uVar33) {
                  uVar8 = 0;
                  if (uVar32 != 0) {
                    uVar8 = uVar33 / uVar32;
                  }
                  uVar33 = uVar33 - uVar8 * uVar32;
                }
                if (uVar33 != uVar31) break;
              }
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
          fVar63 = 0.0;
        }
      }
    }
    goto LAB_017e066c;
  }
  goto LAB_017e0680;
LAB_017e0668:
  fVar63 = *(float *)(plVar34 + 6);
LAB_017e066c:
  do {
    iVar25 = (int)*plVar28 + -1;
    cVar4 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar23) {
      *(int *)plVar28 = iVar25;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar25 != 0) goto LAB_017e0680;
  (**(code **)(*plVar27 + 0x10))();
  if (fVar63 < fVar62) goto LAB_017e0a58;
  goto LAB_017e0688;
LAB_017e0890:
  plVar27 = (long *)plVar27[3];
  fVar63 = 0.0;
  if (plVar27 != (long *)0x0) {
    plVar28 = plVar27 + 10;
    do {
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar23) {
        *(int *)plVar28 = (int)*plVar28 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar32 = plVar27[0x21];
    fVar63 = 0.0;
    if (uVar32 != 0) {
      uVar33 = uVar32 - (uVar32 >> 1 & 0x5555555555555555);
      uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333);
      uVar33 = (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar33 < 2) {
        uVar31 = uVar32 - 1 & 0x909bdb5754eddb35;
      }
      else if (uVar32 < 0x909bdb5754eddb36) {
        uVar31 = 0;
        if (uVar32 != 0) {
          uVar31 = 0x909bdb5754eddb35 / uVar32;
        }
        uVar31 = 0x909bdb5754eddb35 - uVar31 * uVar32;
      }
      else {
        uVar31 = 0x909bdb5754eddb35;
      }
      fVar63 = 0.0;
      plVar34 = *(long **)(plVar27[0x20] + uVar31 * 8);
      if (plVar34 != (long *)0x0) {
        plVar34 = (long *)*plVar34;
        fVar63 = 0.0;
        if (plVar34 != (long *)0x0) {
          if (uVar33 < 2) {
            do {
              if (plVar34[1] == 0x909bdb5754eddb35) {
                if (plVar34[2] == -0x6f6424a8ab1224cb) goto LAB_017e0a38;
              }
              else if ((plVar34[1] & uVar32 - 1) != uVar31) break;
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
          else {
            do {
              uVar33 = plVar34[1];
              if (uVar33 == 0x909bdb5754eddb35) {
                if (plVar34[2] == -0x6f6424a8ab1224cb) goto LAB_017e0a38;
              }
              else {
                if (uVar32 <= uVar33) {
                  uVar8 = 0;
                  if (uVar32 != 0) {
                    uVar8 = uVar33 / uVar32;
                  }
                  uVar33 = uVar33 - uVar8 * uVar32;
                }
                if (uVar33 != uVar31) break;
              }
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
          fVar63 = 0.0;
        }
      }
    }
    goto LAB_017e0a3c;
  }
  goto LAB_017e0a50;
LAB_017e0a38:
  fVar63 = *(float *)(plVar34 + 6);
LAB_017e0a3c:
  do {
    iVar25 = (int)*plVar28 + -1;
    cVar4 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar23) {
      *(int *)plVar28 = iVar25;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar25 != 0) goto LAB_017e0a50;
  (**(code **)(*plVar27 + 0x10))();
  if (fVar63 < fVar41) goto LAB_017e0a58;
LAB_017e0a74:
  bVar23 = true;
LAB_017e0a78:
  lVar29 = local_1a8[0xb];
  piVar1 = (int *)(lVar29 + 0xc);
  do {
    iVar25 = *piVar1;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar25 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar25 + -1 == 0) {
    *(undefined8 *)(lVar29 + 0x18) = 0;
    (**(code **)(*local_1a8 + 0x20))();
    if (bVar23) goto LAB_017e0a9c;
LAB_017e0e98:
    bVar7 = false;
    bVar23 = bVar6;
    fVar62 = fVar20;
  }
  else {
    if (!bVar23) goto LAB_017e0e98;
LAB_017e0a9c:
    if ((bVar5) && (unaff_w27 == *(int *)(*plVar37 + 0x78))) {
      (**(code **)(*local_1a8 + 0x10))(&local_170);
      local_f0 = (long *)0x0;
      uStack_e8 = 0;
      FUN_017dc294(&local_f0,&local_170);
      plVar37 = local_170;
      if (local_170 != (long *)0x0) {
        plVar27 = local_170 + 1;
        do {
          iVar25 = (int)*plVar27 + -1;
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar23) {
            *(int *)plVar27 = iVar25;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar25 == 0) {
          local_170[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar29 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar29;
          local_a0[0] = (long *)*plVar37;
          FUN_02a44274(lVar29 + 0xd8,local_a0);
        }
      }
      FUN_017e9b98(&local_c0,&local_f0);
      plVar37 = local_f0;
      if (local_f0 != (long *)0x0) {
        plVar27 = local_f0 + 1;
        do {
          iVar25 = (int)*plVar27 + -1;
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar23) {
            *(int *)plVar27 = iVar25;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar25 == 0) {
          local_f0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar29 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar29;
          local_170 = (long *)*plVar37;
          FUN_02a44274(lVar29 + 0xd8,&local_170);
        }
      }
    }
    if ((local_b0 == (undefined8 *)0x0) || (*(int *)((long)local_b0 + 0xc) == 0)) {
      (**(code **)(*local_1a8 + 0x10))(&local_170);
      local_f0 = (long *)0x0;
      uStack_e8 = 0;
      FUN_017dc294(&local_f0,&local_170);
      plVar37 = local_170;
      if (local_170 != (long *)0x0) {
        plVar27 = local_170 + 1;
        do {
          iVar25 = (int)*plVar27 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar6) {
            *(int *)plVar27 = iVar25;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar25 == 0) {
          local_170[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar29 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar29;
          local_a0[0] = (long *)*plVar37;
          FUN_02a44274(lVar29 + 0xd8,local_a0);
        }
      }
      FUN_017e9b98(&local_b0,&local_f0);
      plVar37 = local_f0;
      if (local_f0 != (long *)0x0) {
        plVar27 = local_f0 + 1;
        do {
          iVar25 = (int)*plVar27 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar6) {
            *(int *)plVar27 = iVar25;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar25 == 0) {
          local_f0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar29 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar29;
          local_170 = (long *)*plVar37;
          FUN_02a44274(lVar29 + 0xd8,&local_170);
        }
      }
      FUN_009c69bc(&local_170,local_1a8);
      (**(code **)(*local_170 + 0x40))();
      fVar16 = fVar16 - auVar56._0_4_;
      fVar17 = fVar17 - auVar56._4_4_;
      fVar18 = fVar18 - auVar56._8_4_;
      fVar19 = fVar19 - auVar56._12_4_;
      fVar16 = fVar16 * fVar16;
      fVar17 = fVar17 * fVar17;
      uVar42 = (undefined1)((uint)fVar17 >> 8);
      uVar43 = (undefined1)((uint)fVar17 >> 0x10);
      uVar44 = (undefined1)((uint)fVar17 >> 0x18);
      fVar18 = fVar18 * fVar18;
      uVar45 = (undefined1)((uint)fVar18 >> 8);
      uVar46 = (undefined1)((uint)fVar18 >> 0x10);
      uVar47 = (undefined1)((uint)fVar18 >> 0x18);
      fVar19 = fVar19 * fVar19;
      uVar48 = (undefined1)((uint)fVar19 >> 8);
      uVar49 = (undefined1)((uint)fVar19 >> 0x10);
      uVar50 = (undefined1)((uint)fVar19 >> 0x18);
      auVar12[4] = SUB41(fVar17,0);
      auVar12._0_4_ = fVar16;
      auVar12[5] = uVar42;
      auVar12[6] = uVar43;
      auVar12[7] = uVar44;
      auVar12[8] = SUB41(fVar18,0);
      auVar12[9] = uVar45;
      auVar12[10] = uVar46;
      auVar12[0xb] = uVar47;
      auVar12[0xc] = SUB41(fVar19,0);
      auVar12[0xd] = uVar48;
      auVar12[0xe] = uVar49;
      auVar12[0xf] = uVar50;
      auVar13[4] = SUB41(fVar17,0);
      auVar13._0_4_ = fVar16;
      auVar13[5] = uVar42;
      auVar13[6] = uVar43;
      auVar13[7] = uVar44;
      auVar13[8] = SUB41(fVar18,0);
      auVar13[9] = uVar45;
      auVar13[10] = uVar46;
      auVar13[0xb] = uVar47;
      auVar13[0xc] = SUB41(fVar19,0);
      auVar13[0xd] = uVar48;
      auVar13[0xe] = uVar49;
      auVar13[0xf] = uVar50;
      auVar59 = NEON_ext(auVar12,auVar13,8,1);
      fVar62 = auVar59._0_4_ + fVar16 + auVar59._4_4_ + fVar17;
      if (local_170 != (long *)0x0) {
        lVar29 = local_170[0xb];
        piVar1 = (int *)(lVar29 + 0xc);
        do {
          iVar25 = *piVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar25 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar25 + -1 == 0) {
          *(undefined8 *)(lVar29 + 0x18) = 0;
          (**(code **)(*local_170 + 0x20))();
        }
      }
      bVar7 = false;
      bVar23 = *(char *)((long)local_1a8 + 0x762) != '\0';
    }
    else {
      bVar23 = *(char *)((long)local_1a8 + 0x762) != '\0';
      if ((bool)(bVar6 ^ bVar23)) {
        if (*(char *)((long)local_1a8 + 0x762) == '\0') goto LAB_017e0e98;
        (**(code **)(*local_1a8 + 0x10))(&local_170);
        local_f0 = (long *)0x0;
        uStack_e8 = 0;
        FUN_017dc294(&local_f0,&local_170);
        plVar37 = local_170;
        if (local_170 != (long *)0x0) {
          plVar27 = local_170 + 1;
          do {
            iVar25 = (int)*plVar27 + -1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar6) {
              *(int *)plVar27 = iVar25;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar25 == 0) {
            local_170[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar29 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar29;
            local_a0[0] = (long *)*plVar37;
            FUN_02a44274(lVar29 + 0xd8,local_a0);
          }
        }
        FUN_017e9b98(&local_b0,&local_f0);
        plVar37 = local_f0;
        if (local_f0 != (long *)0x0) {
          plVar27 = local_f0 + 1;
          do {
            iVar25 = (int)*plVar27 + -1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar6) {
              *(int *)plVar27 = iVar25;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar25 == 0) {
            local_f0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar29 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar29;
            local_170 = (long *)*plVar37;
            FUN_02a44274(lVar29 + 0xd8,&local_170);
          }
        }
        FUN_009c69bc(&local_170,local_1a8);
        (**(code **)(*local_170 + 0x40))();
        fVar16 = fVar16 - auVar56._0_4_;
        fVar17 = fVar17 - auVar56._4_4_;
        fVar18 = fVar18 - auVar56._8_4_;
        fVar19 = fVar19 - auVar56._12_4_;
        fVar16 = fVar16 * fVar16;
        fVar17 = fVar17 * fVar17;
        uVar42 = (undefined1)((uint)fVar17 >> 8);
        uVar43 = (undefined1)((uint)fVar17 >> 0x10);
        uVar44 = (undefined1)((uint)fVar17 >> 0x18);
        fVar18 = fVar18 * fVar18;
        uVar45 = (undefined1)((uint)fVar18 >> 8);
        uVar46 = (undefined1)((uint)fVar18 >> 0x10);
        uVar47 = (undefined1)((uint)fVar18 >> 0x18);
        fVar19 = fVar19 * fVar19;
        uVar48 = (undefined1)((uint)fVar19 >> 8);
        uVar49 = (undefined1)((uint)fVar19 >> 0x10);
        uVar50 = (undefined1)((uint)fVar19 >> 0x18);
        auVar14[4] = SUB41(fVar17,0);
        auVar14._0_4_ = fVar16;
        auVar14[5] = uVar42;
        auVar14[6] = uVar43;
        auVar14[7] = uVar44;
        auVar14[8] = SUB41(fVar18,0);
        auVar14[9] = uVar45;
        auVar14[10] = uVar46;
        auVar14[0xb] = uVar47;
        auVar14[0xc] = SUB41(fVar19,0);
        auVar14[0xd] = uVar48;
        auVar14[0xe] = uVar49;
        auVar14[0xf] = uVar50;
        auVar15[4] = SUB41(fVar17,0);
        auVar15._0_4_ = fVar16;
        auVar15[5] = uVar42;
        auVar15[6] = uVar43;
        auVar15[7] = uVar44;
        auVar15[8] = SUB41(fVar18,0);
        auVar15[9] = uVar45;
        auVar15[10] = uVar46;
        auVar15[0xb] = uVar47;
        auVar15[0xc] = SUB41(fVar19,0);
        auVar15[0xd] = uVar48;
        auVar15[0xe] = uVar49;
        auVar15[0xf] = uVar50;
        auVar59 = NEON_ext(auVar14,auVar15,8,1);
        fVar62 = auVar59._0_4_ + fVar16 + auVar59._4_4_ + fVar17;
        if (local_170 != (long *)0x0) {
          lVar29 = local_170[0xb];
          piVar1 = (int *)(lVar29 + 0xc);
          do {
            iVar25 = *piVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar25 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar25 + -1 == 0) {
            *(undefined8 *)(lVar29 + 0x18) = 0;
            (**(code **)(*local_170 + 0x20))();
          }
        }
        bVar7 = false;
        bVar23 = true;
      }
      else {
        if (fVar20 < fVar62) goto LAB_017e0e98;
        (**(code **)(*local_1a8 + 0x10))(&local_170);
        local_f0 = (long *)0x0;
        uStack_e8 = 0;
        FUN_017dc294(&local_f0,&local_170);
        plVar37 = local_170;
        if (local_170 != (long *)0x0) {
          plVar27 = local_170 + 1;
          do {
            iVar25 = (int)*plVar27 + -1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar6) {
              *(int *)plVar27 = iVar25;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar25 == 0) {
            local_170[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar29 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar29;
            local_a0[0] = (long *)*plVar37;
            FUN_02a44274(lVar29 + 0xd8,local_a0);
          }
        }
        FUN_017e9b98(&local_b0,&local_f0);
        plVar37 = local_f0;
        if (local_f0 != (long *)0x0) {
          plVar27 = local_f0 + 1;
          do {
            iVar25 = (int)*plVar27 + -1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar6) {
              *(int *)plVar27 = iVar25;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar25 == 0) {
            local_f0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar29 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar29;
            local_170 = (long *)*plVar37;
            FUN_02a44274(lVar29 + 0xd8,&local_170);
          }
        }
        bVar7 = false;
      }
    }
  }
LAB_017e0e9c:
  lVar29 = local_1a8[0xb];
  piVar1 = (int *)(lVar29 + 0xc);
  do {
    iVar25 = *piVar1;
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar25 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  in_q3 = auVar56;
  if (iVar25 + -1 == 0) {
    *(undefined8 *)(lVar29 + 0x18) = 0;
    (**(code **)(*local_1a8 + 0x20))();
    in_q3 = auVar56;
  }
  if (bVar7) {
    plVar37 = (long *)plVar39[1];
    *(long **)(*plVar39 + 8) = plVar37;
    *(long *)plVar39[1] = *plVar39;
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + -1;
    plVar27 = (long *)plVar39[2];
    if (plVar27 != (long *)0x0) {
      lVar29 = plVar27[0xb];
      piVar1 = (int *)(lVar29 + 0xc);
      do {
        iVar25 = *piVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar25 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar25 + -1 == 0) {
        *(undefined8 *)(lVar29 + 0x18) = 0;
        (**(code **)(*plVar27 + 0x20))();
      }
    }
    plVar27 = *(long **)(param_1 + 0xd0);
    uVar32 = (**(code **)(*plVar27 + 0xc0))();
    bVar6 = bVar23;
    fVar20 = fVar62;
    if ((uVar32 & 1) != 0) {
      lVar29 = tpidr_el0;
      if (*(char *)(lVar29 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar29 + 0x38d488) = 1;
        *(undefined8 *)(lVar29 + 0x38d478) = 0;
        *(undefined8 *)(lVar29 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar29 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar29 + 0x38d480)) {
        FUN_02bcc824(plVar27,plVar39,0x18,8);
        plVar39 = plVar37;
        goto joined_r0x017dec9c;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,plVar39,0x18,8);
    plVar39 = plVar37;
  }
  else {
LAB_017deccc:
    plVar39 = (long *)plVar39[1];
    bVar6 = bVar23;
    fVar20 = fVar62;
  }
joined_r0x017dec9c:
  if (plVar2 == plVar39) goto LAB_017e13f8;
  goto LAB_017deca0;
LAB_017e22d4:
  plVar39 = (long *)plVar39[3];
  if (plVar39 == (long *)0x0) goto LAB_017e2420;
  plVar28 = plVar39 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar5) {
      *(int *)plVar28 = (int)*plVar28 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar35 = plVar39[0x21];
  uVar61 = 0;
  if (uVar35 != 0) {
    uVar32 = uVar35 - (uVar35 >> 1 & 0x5555555555555555);
    uVar32 = (uVar32 & 0x3333333333333333) + (uVar32 >> 2 & 0x3333333333333333);
    uVar32 = (uVar32 + (uVar32 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar32 < 2) {
      uVar33 = uVar35 - 1 & 0xcbd5b277f9450789;
    }
    else if (uVar35 < 0xcbd5b277f945078a) {
      uVar33 = 0;
      if (uVar35 != 0) {
        uVar33 = 0xcbd5b277f9450789 / uVar35;
      }
      uVar33 = 0xcbd5b277f9450789 - uVar33 * uVar35;
    }
    else {
      uVar33 = 0xcbd5b277f9450789;
    }
    plVar34 = *(long **)(plVar39[0x20] + uVar33 * 8);
    if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
      if (uVar32 < 2) {
        do {
          if (plVar34[1] == 0xcbd5b277f9450789) {
            if (plVar34[2] == -0x342a4d8806baf877) goto LAB_017e23fc;
          }
          else if ((plVar34[1] & uVar35 - 1) != uVar33) break;
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
      else {
        do {
          uVar32 = plVar34[1];
          if (uVar32 != 0xcbd5b277f9450789) {
            if (uVar35 <= uVar32) {
              uVar31 = 0;
              if (uVar35 != 0) {
                uVar31 = uVar32 / uVar35;
              }
              uVar32 = uVar32 - uVar31 * uVar35;
            }
            if (uVar32 == uVar33) goto LAB_017e23b8;
            break;
          }
          if (plVar34[2] == -0x342a4d8806baf877) goto LAB_017e23fc;
LAB_017e23b8:
          plVar34 = (long *)*plVar34;
        } while (plVar34 != (long *)0x0);
      }
    }
  }
LAB_017e2400:
  do {
    iVar25 = (int)*plVar28 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar5) {
      *(int *)plVar28 = iVar25;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar25 == 0) {
    (**(code **)(*plVar39 + 0x10))();
  }
LAB_017e2420:
  local_120 = CONCAT44(local_120._4_4_,uVar61);
  FUN_017db6d4(&local_110,&local_b0);
  puVar38 = (undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x120) = local_160;
  *(undefined8 *)(param_1 + 0x128) = local_158;
  *(long **)(param_1 + 0x110) = local_170;
  *(undefined8 *)(param_1 + 0x118) = uStack_168;
  if (*(char *)(param_1 + 0x100) == '\0') {
    *puVar38 = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    FUN_00b636fc(puVar38,&local_150);
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    FUN_008c4b3c(param_1 + 0x140,&local_140);
    *(long **)(param_1 + 0x150) = local_130;
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x18))();
    }
    *(undefined4 *)(param_1 + 0x168) = local_118;
    *(undefined8 *)(param_1 + 0x158) = local_128;
    *(undefined8 *)(param_1 + 0x160) = local_120;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    FUN_017db6d4(param_1 + 0x170,&local_110);
    *(undefined1 *)(param_1 + 0x100) = 1;
    plVar39 = local_110;
  }
  else {
    FUN_00b636fc(puVar38,&local_150);
    FUN_008c4b3c(param_1 + 0x140,&local_140);
    plVar39 = local_130;
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x18))(local_130);
    }
    plVar28 = *(long **)(param_1 + 0x150);
    *(long **)(param_1 + 0x150) = plVar39;
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x20))();
    }
    *(undefined4 *)(param_1 + 0x168) = local_118;
    *(undefined8 *)(param_1 + 0x158) = local_128;
    *(undefined8 *)(param_1 + 0x160) = local_120;
    FUN_017db6d4(param_1 + 0x170,&local_110);
    plVar39 = local_110;
  }
  local_110 = plVar39;
  if (plVar39 != (long *)0x0) {
    plVar28 = plVar39 + 1;
    do {
      iVar25 = (int)*plVar28 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar5) {
        *(int *)plVar28 = iVar25;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar25 == 0) {
      plVar39[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar30 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar30;
      local_f0 = (long *)*plVar39;
      FUN_02a44274(lVar30 + 0xd8,&local_f0);
    }
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  plVar39 = local_140;
  if (local_140 != (long *)0x0) {
    plVar28 = local_140 + 1;
    do {
      iVar25 = (int)*plVar28 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar5) {
        *(int *)plVar28 = iVar25;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar25 == 0) {
      local_140[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar30 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar30;
      local_f0 = (long *)*plVar39;
      FUN_02a44274(lVar30 + 0xd8,&local_f0);
    }
  }
  plVar39 = local_150;
  if (local_150 != (long *)0x0) {
    plVar28 = local_150 + 1;
    do {
      iVar25 = (int)*plVar28 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar5) {
        *(int *)plVar28 = iVar25;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar25 == 0) {
      local_150[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar30 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar30;
      local_f0 = (long *)*plVar39;
      FUN_02a44274(lVar30 + 0xd8,&local_f0);
    }
  }
  lVar29 = *(long *)(lVar29 + 8);
  piVar1 = (int *)(lVar29 + 0xc);
  do {
    iVar25 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar25 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar25 + -1 == 0) {
    *(undefined8 *)(lVar29 + 0x18) = 0;
    (**(code **)(*plVar37 + 0x20))(plVar37);
  }
  goto LAB_017e1d30;
LAB_017e23fc:
  uVar61 = (undefined4)plVar34[6];
  goto LAB_017e2400;
LAB_017e14b4:
  plVar39 = (long *)plVar39[1];
  if (plVar39 == plVar2) goto LAB_017e1548;
  goto LAB_017e14c0;
}


