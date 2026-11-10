/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f4074; name: FUN_013f4074
 */


void FUN_013f4074(long param_1)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  bool bVar11;
  undefined4 uVar12;
  bool bVar13;
  byte bVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 *puVar27;
  long *plVar28;
  byte *pbVar29;
  uint uVar30;
  long *plVar31;
  long *plVar32;
  bool bVar33;
  int iVar34;
  undefined1 *puVar35;
  long *plVar36;
  long *plVar37;
  long *local_3880;
  long *local_3878;
  long *local_3870;
  undefined1 *local_3868;
  long *local_3860;
  undefined8 local_3858;
  char *pcStack_3850;
  undefined8 local_3848;
  long *local_3840;
  undefined4 local_3838;
  undefined2 local_3834;
  undefined8 local_3830;
  undefined8 local_3828;
  undefined1 *local_3820;
  char *pcStack_3818;
  undefined8 local_3810;
  long *local_3808;
  undefined4 local_48c;
  undefined8 local_488;
  undefined8 local_480;
  long *local_478;
  undefined4 local_470 [2];
  byte local_468;
  undefined7 uStack_467;
  
  local_3820 = &DAT_304928236d5bcabe;
  pcStack_3818 = "common/pokedex.dat";
  local_3810 = 0x12;
  local_3808 = (long *)0x0;
  FUN_00d37bb4(&local_468,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),&local_3820,10);
  plVar37 = *(long **)(CONCAT71(uStack_467,local_468) + 0x68);
  if (plVar37 != (long *)0x0) {
    plVar31 = plVar37 + 10;
    do {
      cVar10 = '\x01';
      bVar33 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar33) {
        *(int *)plVar31 = (int)*plVar31 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  plVar31 = (long *)CONCAT71(uStack_467,local_468);
  if (plVar31 != (long *)0x0) {
    lVar26 = plVar31[0xb];
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar10 = '\x01';
      bVar33 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar33) {
        *piVar1 = iVar15 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*plVar31 + 0x20))();
    }
  }
  if (local_3808 != (long *)0x0) {
    (**(code **)(*local_3808 + 0x20))();
  }
  local_3820 = (undefined1 *)0x5d17a9aed6c828c8;
  pcStack_3818 = "common/zkn_form.dat";
  local_3810 = 0x13;
  local_3808 = (long *)0x0;
  FUN_00d37bb4(&local_468,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),&local_3820,10);
  plVar31 = *(long **)(CONCAT71(uStack_467,local_468) + 0x68);
  if (plVar31 != (long *)0x0) {
    plVar32 = plVar31 + 10;
    do {
      cVar10 = '\x01';
      bVar33 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar33) {
        *(int *)plVar32 = (int)*plVar32 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  plVar32 = (long *)CONCAT71(uStack_467,local_468);
  if (plVar32 != (long *)0x0) {
    lVar26 = plVar32[0xb];
    piVar1 = (int *)(lVar26 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar10 = '\x01';
      bVar33 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar33) {
        *piVar1 = iVar15 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar26 + 0x18) = 0;
      (**(code **)(*plVar32 + 0x20))();
    }
  }
  if (local_3808 != (long *)0x0) {
    (**(code **)(*local_3808 + 0x20))();
  }
  plVar32 = *(long **)(param_1 + 0x2c8);
  if (plVar32 != (long *)0x0) {
    plVar36 = plVar32 + 10;
    do {
      cVar10 = '\x01';
      bVar33 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar33) {
        *(int *)plVar36 = (int)*plVar36 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  memset(&local_468,0,0x400);
  cVar10 = *(char *)(param_1 + 0x6e8);
  cVar9 = *(char *)(param_1 + 0x6e9);
  *(undefined2 *)(param_1 + 0x6e8) = 0;
  if (cVar10 != '\0') {
    lVar26 = *(long *)(param_1 + 0x5c0);
    uVar7 = *(undefined4 *)(lVar26 + 0x70);
    local_470[0] = *(undefined4 *)(lVar26 + 0x74);
    FUN_013e16b0(*(undefined8 *)(lVar26 + 0x78));
    uVar19 = FUN_013db59c();
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04379558), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148f20(&local_478);
    local_480 = 0;
    local_488 = 0;
    local_48c = 0;
    FUN_013dae20(*(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x80),uVar7,(long)&local_480 + 4,
                 &local_480,(long)&local_488 + 4,&local_488,&local_48c);
    memset(&local_3820,0,0x3394);
    FUN_013dd128(uVar19,&local_3820);
    iVar15 = FUN_013dd0e4(&local_3820);
    if (iVar15 == 0) {
      uVar30 = 0;
    }
    else {
      uVar30 = 0;
      iVar34 = 0;
      do {
        local_3858 = 0;
        FUN_013dd0ec(&local_3820,iVar34,&local_3858);
        plVar36 = local_478;
        uVar16 = FUN_013dd0dc(&local_3858);
        uVar17 = FUN_0112ec2c(plVar36,uVar16);
        iVar34 = iVar34 + 1;
        uVar30 = uVar30 + (uVar17 & 1);
      } while (iVar15 != iVar34);
    }
    local_3828 = 0;
    uVar16 = FUN_013e150c(local_470);
    FUN_013dd0ec(&local_3820,uVar16,&local_3828);
    FUN_013dd0dc(&local_3828);
    uVar20 = FUN_013e1f88();
    plVar36 = local_478;
    if ((uVar20 & 1) == 0) {
LAB_013f495c:
      bVar14 = 0;
      bVar33 = false;
    }
    else {
      uVar16 = FUN_013dd0dc(&local_3828);
      uVar20 = FUN_0112ec2c(plVar36,uVar16);
      if ((uVar20 & 1) == 0) goto LAB_013f495c;
      if (cVar9 != '\0') {
        FUN_013dbb78(&local_3828,*(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x80),param_1 + 0x6f4)
        ;
        FUN_013db878(param_1 + 0x6f4,*(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x80),uVar7,
                     param_1 + 0x6ec,param_1 + 0x6f0,param_1 + 0x6f1);
      }
      lVar26 = param_1 + 0x6f4;
      lVar2 = param_1 + 0x180;
      uVar17 = FUN_013db7f0(lVar26);
      local_3838 = 0;
      local_3834 = 0;
      local_3830 = 0;
      FUN_013db7f8(lVar26,*(undefined4 *)(param_1 + 0x6ec),&local_3838);
      bVar14 = FUN_013db770(&local_3838);
      FUN_013db7a4(&local_3858,&local_3838,*(undefined1 *)(param_1 + 0x6f0));
      *(undefined8 *)(param_1 + 0x6d0) = local_3848;
      *(char **)(param_1 + 0x6c8) = pcStack_3850;
      *(undefined8 *)(param_1 + 0x6c0) = local_3858;
      FUN_01362344(*(undefined8 *)(param_1 + 0x5b8),param_1 + 0x6c0,cVar9 != '\0');
      if (cVar9 != '\0') {
        *(undefined8 *)(param_1 + 0x6dc) = 0;
      }
      *(undefined2 *)(param_1 + 0x6d8) = 1;
      local_3858 = 0x2b42d5b6c65f6572;
      pcStack_3850 = "pane_T_pokerace_00";
      local_3848 = 0x12;
      local_3840 = (long *)0x0;
      if (plVar37 != (long *)0x0) {
        plVar36 = plVar37 + 10;
        do {
          cVar10 = '\x01';
          bVar33 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar33) {
            *(int *)plVar36 = (int)*plVar36 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      local_3868 = (undefined1 *)0xdad226e9ad58f196;
      local_3860 = plVar37;
      uVar16 = FUN_013db6f8(&local_3838);
      FUN_0133fa78(lVar2,&local_3858,&local_3860,&local_3868,0,uVar16);
      if (local_3860 != (long *)0x0) {
        plVar36 = local_3860 + 10;
        do {
          iVar15 = (int)*plVar36 + -1;
          cVar10 = '\x01';
          bVar33 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar33) {
            *(int *)plVar36 = iVar15;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar15 == 0) {
          (**(code **)(*local_3860 + 0x10))();
        }
      }
      if (local_3840 != (long *)0x0) {
        (**(code **)(*local_3840 + 0x20))();
      }
      lVar21 = FUN_01306260(lVar2,"pane_N_icon_m_00");
      lVar22 = FUN_01306260(lVar2,"pane_N_icon_f_00");
      lVar23 = FUN_01306260(lVar2,"pane_N_rare_00");
      lVar24 = FUN_01306260(lVar2,"pane_N_form_num_00");
      lVar25 = FUN_01306260(lVar2,"pane_N_form_name_00");
      *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) & 0xfe;
      *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe;
      uVar20 = FUN_013db708(&local_3838);
      if ((uVar20 & 1) != 0) {
        *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 1;
      }
      uVar20 = FUN_013db72c(&local_3838);
      if ((uVar20 & 1) != 0) {
        *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 1;
      }
      *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) & 0xfe | *(byte *)(param_1 + 0x6cc);
      bVar33 = 1 < uVar17;
      *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) & 0xfe | bVar33;
      if (plVar32 != (long *)0x0) {
        plVar36 = plVar32 + 10;
        do {
          cVar10 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar13) {
            *(int *)plVar36 = (int)*plVar36 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      local_3858 = 0x5bf5ed4ebc3fea3b;
      pcStack_3850 = "pane_T_param_form_num_00";
      local_3848 = 0x18;
      local_3840 = (long *)0x0;
      if (plVar37 == (long *)0x0) {
        plVar36 = (long *)0x0;
      }
      else {
        plVar36 = plVar37 + 10;
        do {
          cVar10 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar13) {
            *(int *)plVar36 = (int)*plVar36 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        plVar36 = plVar37;
      }
      local_3868 = (undefined1 *)0x3137f4f148c2b8d1;
      local_3878 = plVar37;
      local_3870 = plVar32;
      FUN_013f4fe4(&local_3870,&local_3858,&local_3878,&local_3868,*(int *)(param_1 + 0x6ec) + 1);
      if (plVar36 != (long *)0x0) {
        plVar3 = plVar36 + 10;
        do {
          iVar15 = (int)*plVar3 + -1;
          cVar10 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar13) {
            *(int *)plVar3 = iVar15;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar15 == 0) {
          (**(code **)(*plVar36 + 0x10))(plVar36);
        }
      }
      if (local_3840 != (long *)0x0) {
        (**(code **)(*local_3840 + 0x20))();
      }
      if (local_3870 != (long *)0x0) {
        plVar36 = local_3870 + 10;
        do {
          iVar15 = (int)*plVar36 + -1;
          cVar10 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar13) {
            *(int *)plVar36 = iVar15;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar15 == 0) {
          (**(code **)(*local_3870 + 0x10))();
        }
      }
      puVar35 = &DAT_cbf29ce484222645;
      iVar15 = FUN_013db6f8(&local_3838);
      uVar17 = FUN_013db700(&local_3838);
      snprintf((char *)&local_468,0x400,"ZKN_FORM_%03d_%03d",iVar15,uVar17 & 0xffff);
      puVar27 = &DAT_cbf29ce484222645;
      if (local_468 != 0) {
        puVar27 = &DAT_cbf29ce484222645;
        pbVar29 = (byte *)((ulong)&local_468 | 1);
        bVar8 = local_468;
        do {
          puVar27 = (undefined1 *)(((ulong)puVar27 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar29;
          pbVar29 = pbVar29 + 1;
        } while (bVar8 != 0);
      }
      plVar36 = (long *)plVar32[0x38];
      if (plVar36 == (long *)0x0) {
        lVar21 = plVar31[0x16];
        if (lVar21 != 0) {
          plVar36 = *(long **)(lVar21 + 0x270);
          if (plVar36 != *(long **)(lVar21 + 0x278)) {
            iVar15 = 0;
            do {
              puVar6 = (undefined8 *)PTR_DAT_04379c88;
              if (*plVar36 != 0) {
                puVar6 = (undefined8 *)(*plVar36 + 0x58);
              }
              if ((undefined1 *)*puVar6 == puVar27) goto LAB_013f4c34;
              plVar36 = plVar36 + 1;
              iVar15 = iVar15 + 1;
            } while (*(long **)(lVar21 + 0x278) != plVar36);
          }
        }
        iVar15 = 0;
LAB_013f4c34:
        FUN_02c2e33c(plVar31,iVar15,0);
        plVar36 = (long *)plVar32[0x38];
joined_r0x013f4c44:
        if (plVar36 == (long *)0x0) goto LAB_013f4ad4;
LAB_013f47c4:
        plVar3 = plVar36 + 10;
        do {
          cVar10 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar13) {
            *(int *)plVar3 = (int)*plVar3 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        uVar17 = FUN_02c30040(plVar36);
        bVar13 = uVar17 < 2;
        do {
          iVar15 = (int)*plVar3 + -1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar11) {
            *(int *)plVar3 = iVar15;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar15 == 0) {
          (**(code **)(*plVar36 + 0x10))(plVar36);
        }
      }
      else {
        plVar3 = plVar36 + 10;
        do {
          cVar10 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar13) {
            *(int *)plVar3 = (int)*plVar3 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        lVar21 = plVar31[0x16];
        if (lVar21 != 0) {
          plVar28 = *(long **)(lVar21 + 0x270);
          if (plVar28 != *(long **)(lVar21 + 0x278)) {
            iVar15 = 0;
            do {
              puVar6 = (undefined8 *)PTR_DAT_04379c88;
              if (*plVar28 != 0) {
                puVar6 = (undefined8 *)(*plVar28 + 0x58);
              }
              if ((undefined1 *)*puVar6 == puVar27) goto LAB_013f479c;
              plVar28 = plVar28 + 1;
              iVar15 = iVar15 + 1;
            } while (*(long **)(lVar21 + 0x278) != plVar28);
          }
        }
        iVar15 = 0;
LAB_013f479c:
        FUN_02c2e33c(plVar31,iVar15,plVar36);
        do {
          iVar15 = (int)*plVar3 + -1;
          cVar10 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar13) {
            *(int *)plVar3 = iVar15;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar15 == 0) {
          (**(code **)(*plVar36 + 0x10))(plVar36);
          plVar36 = (long *)plVar32[0x38];
          goto joined_r0x013f4c44;
        }
        plVar36 = (long *)plVar32[0x38];
        if (plVar36 != (long *)0x0) goto LAB_013f47c4;
LAB_013f4ad4:
        uVar17 = FUN_02c30040(0);
        bVar13 = uVar17 < 2;
      }
      local_3858 = 0x1a57ba24ab1b827c;
      pcStack_3850 = "pane_T_form_name_00";
      local_3848 = 0x13;
      local_3840 = (long *)0x0;
      if (plVar31 != (long *)0x0) {
        plVar36 = plVar31 + 10;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar11) {
            *(int *)plVar36 = (int)*plVar36 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      if (local_468 != 0) {
        pbVar29 = (byte *)((ulong)&local_468 | 1);
        do {
          puVar35 = (undefined1 *)(((ulong)puVar35 ^ (ulong)local_468) * 0x100000001b3);
          local_468 = *pbVar29;
          pbVar29 = pbVar29 + 1;
        } while (local_468 != 0);
      }
      local_3880 = plVar31;
      local_3868 = puVar35;
      FUN_011845f4(lVar2,&local_3858,&local_3880,&local_3868,10);
      if (local_3880 != (long *)0x0) {
        plVar36 = local_3880 + 10;
        do {
          iVar15 = (int)*plVar36 + -1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar11) {
            *(int *)plVar36 = iVar15;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar15 == 0) {
          (**(code **)(*local_3880 + 0x10))();
        }
      }
      if (local_3840 != (long *)0x0) {
        (**(code **)(*local_3840 + 0x20))();
      }
      *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe | bVar13 ^ 1U;
      uVar19 = *(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x80);
      bVar13 = cVar9 == '\0';
      uVar16 = 0;
      if (bVar13) {
        uVar16 = (undefined4)local_480;
      }
      uVar4 = 0;
      if (bVar13) {
        uVar4 = local_488._4_4_;
      }
      uVar12 = local_480._4_4_;
      uVar5 = 0;
      if (bVar13) {
        uVar5 = (undefined4)local_488;
      }
      uVar18 = FUN_013dd0dc(local_488 & 0xffffffff,&local_3828);
      FUN_013dac88(uVar19,uVar7,uVar12,uVar16,uVar4,uVar5,uVar18);
      if (cVar9 == '\0') {
        FUN_013dbb0c(lVar26,*(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x80),uVar7,
                     *(undefined4 *)(param_1 + 0x6ec),*(undefined1 *)(param_1 + 0x6f0),
                     *(undefined1 *)(param_1 + 0x6f1));
      }
      bVar14 = bVar14 & 1;
    }
    FUN_013f5310(param_1,0,bVar33);
    FUN_013f5310(param_1,1,bVar33);
    FUN_013f5310(param_1,2,1 < uVar30);
    FUN_013f5310(param_1,3,1 < uVar30);
    *(byte *)(param_1 + 0xc24) = bVar14;
    FUN_013f539c(param_1);
    if (local_478 != (long *)0x0) {
      lVar26 = local_478[0xb];
      piVar1 = (int *)(lVar26 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar10 = '\x01';
        bVar33 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar33) {
          *piVar1 = iVar15 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar26 + 0x18) = 0;
        (**(code **)(*local_478 + 0x20))();
        cVar10 = *(char *)(param_1 + 0x6d8);
        goto joined_r0x013f49e0;
      }
    }
  }
  cVar10 = *(char *)(param_1 + 0x6d8);
joined_r0x013f49e0:
  if (((cVar10 != '\0') &&
      (uVar20 = FUN_01363370(*(undefined8 *)(param_1 + 0x5b8)), (uVar20 & 1) != 0)) &&
     (*(char *)(param_1 + 0x6d9) == '\0')) {
    FUN_013f5350(param_1);
  }
  if (plVar32 != (long *)0x0) {
    plVar36 = plVar32 + 10;
    do {
      iVar15 = (int)*plVar36 + -1;
      cVar10 = '\x01';
      bVar33 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar33) {
        *(int *)plVar36 = iVar15;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar32 + 0x10))(plVar32);
    }
  }
  if (plVar31 != (long *)0x0) {
    plVar32 = plVar31 + 10;
    do {
      iVar15 = (int)*plVar32 + -1;
      cVar10 = '\x01';
      bVar33 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar33) {
        *(int *)plVar32 = iVar15;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
    }
  }
  if (plVar37 != (long *)0x0) {
    plVar31 = plVar37 + 10;
    do {
      iVar15 = (int)*plVar31 + -1;
      cVar10 = '\x01';
      bVar33 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar33) {
        *(int *)plVar31 = iVar15;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar37 + 0x10))(plVar37);
    }
  }
  return;
}


