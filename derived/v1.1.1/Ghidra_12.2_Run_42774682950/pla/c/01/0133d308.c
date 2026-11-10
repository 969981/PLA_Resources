/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0133d308; name: FUN_0133d308
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0133d308(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  int *piVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined1 *puVar24;
  long lVar25;
  undefined8 *local_90 [2];
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  plVar20 = *(long **)(param_1 + 0x2c8);
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *(int *)plVar21 = (int)*plVar21 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar15 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar5 = *(uint *)(lVar15 + 400);
  if (uVar5 != 0) {
    uVar19 = 0;
    piVar18 = (int *)(lVar15 + 0x20);
LAB_0133d378:
    puVar1 = (undefined8 *)PTR_DAT_04379c88;
    if (*(long *)(piVar18 + -4) != 0) {
      puVar1 = (undefined8 *)(*(long *)(piVar18 + -4) + 0x58);
    }
    if (((undefined1 *)*puVar1 != &DAT_72837ff1f1cec6a2) || (*piVar18 != 10)) goto LAB_0133da94;
    if (0xf < (uint)uVar19) {
      plVar21 = (long *)0x0;
      goto LAB_0133d3ac;
    }
    plVar21 = *(long **)(piVar18 + -2);
    if (plVar21 == (long *)0x0) goto LAB_0133d3ac;
    lVar15 = plVar21[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar23;
      }
      piVar18 = (int *)(lVar15 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar7) {
          *piVar18 = *piVar18 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_0133d3ac:
      plVar8 = (long *)plVar21[0xd];
      goto joined_r0x0133d3b0;
    }
    goto LAB_0133dfb0;
  }
LAB_0133daa4:
  plVar21 = (long *)0x0;
  plVar8 = _DAT_00000068;
joined_r0x0133d3b0:
  if (plVar8 != (long *)0x0) {
    plVar22 = plVar8 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar7) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar15 = param_1 + 0x180;
  if (plVar21 != (long *)0x0) {
    lVar16 = plVar21[0xb];
    piVar18 = (int *)(lVar16 + 0xc);
    do {
      iVar12 = *piVar18;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar7) {
        *piVar18 = iVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  FUN_025ad148(local_90);
  puVar1 = local_90[0];
  puVar10 = PTR_DAT_04379d88;
  if ((local_90[0] != (undefined8 *)0x0) && (*(int *)((long)local_90[0] + 0xc) != 0)) {
    piVar18 = (int *)((long)local_90[0] + 0xc);
    iVar12 = *(int *)((long)local_90[0] + 0xc);
    do {
      plVar21 = (long *)puVar1[2];
      if (((*PTR_DAT_04379d80 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379d80), iVar13 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
          uVar23 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar23;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar10 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_04379d80);
      }
      while( true ) {
        if (plVar21 == (long *)0x0) goto LAB_0133d3fc;
        if (plVar21 == (long *)puVar10) break;
        plVar21 = (long *)*plVar21;
      }
      iVar13 = *piVar18;
      if (iVar13 == iVar12) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar7) {
          *piVar18 = iVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_0133dfcc;
        lVar16 = puVar1[3];
        if (lVar16 != 0) {
          plVar21 = (long *)(lVar16 + -0x50);
          iVar12 = FUN_025acbdc(plVar21);
          local_80 = 0xaf7d2be9be2c04a2;
          pcStack_78 = "anime_L_time_00_switch_icon";
          local_70 = 0x1b;
          local_68 = (long *)0x0;
          FUN_00d2df7c(lVar15,&local_80);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          local_80 = 0xaf7d2be9be2c04a2;
          pcStack_78 = "anime_L_time_00_switch_icon";
          local_70 = 0x1b;
          local_68 = (long *)0x0;
          FUN_00d2e4b8((float)iVar12,lVar15,&local_80);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          lVar16 = *(long *)(lVar16 + 8);
          piVar18 = (int *)(lVar16 + 0xc);
          do {
            iVar12 = *piVar18;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
            if (bVar7) {
              *piVar18 = iVar12 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar12 + -1 != 0) break;
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar21 + 0x20))(plVar21);
          plVar21 = *(long **)(param_1 + 0x2c8);
          goto joined_r0x0133e0cc;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_0133dfcc:
      iVar12 = iVar13;
    } while (iVar13 != 0);
  }
LAB_0133d3fc:
  plVar21 = *(long **)(param_1 + 0x2c8);
joined_r0x0133e0cc:
  if (plVar21 != (long *)0x0) {
    plVar22 = plVar21 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar7) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar16 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar5 = *(uint *)(lVar16 + 400);
  if (uVar5 != 0) {
    uVar19 = 0;
    piVar18 = (int *)(lVar16 + 0x20);
LAB_0133d438:
    puVar1 = (undefined8 *)PTR_DAT_04379c88;
    if (*(long *)(piVar18 + -4) != 0) {
      puVar1 = (undefined8 *)(*(long *)(piVar18 + -4) + 0x58);
    }
    if (((undefined1 *)*puVar1 != &DAT_72837ff1f1cec6a2) || (*piVar18 != 10)) goto LAB_0133dab4;
    if (0xf < (uint)uVar19) {
      plVar22 = (long *)0x0;
      goto LAB_0133d46c;
    }
    plVar22 = *(long **)(piVar18 + -2);
    if (plVar22 == (long *)0x0) goto LAB_0133d46c;
    lVar16 = plVar22[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar23;
      }
      piVar18 = (int *)(lVar16 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar7) {
          *piVar18 = *piVar18 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_0133d46c:
      plVar9 = (long *)plVar22[0xd];
      goto joined_r0x0133d470;
    }
    goto LAB_0133dfb0;
  }
LAB_0133dac4:
  plVar22 = (long *)0x0;
  plVar9 = _DAT_00000068;
joined_r0x0133d470:
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar22 == (long *)0x0) {
LAB_0133d4a8:
    plVar22 = (long *)plVar21[0x38];
    if (plVar22 != (long *)0x0) goto LAB_0133d4b0;
LAB_0133dd78:
    lVar16 = plVar9[0x16];
    if (lVar16 != 0) {
      plVar22 = *(long **)(lVar16 + 0x270);
      if (plVar22 != *(long **)(lVar16 + 0x278)) {
        iVar12 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar22 != 0) {
            plVar3 = (long *)(*plVar22 + 0x58);
          }
          if (*plVar3 == 0x39ad4995fda1bf58) goto LAB_0133dddc;
          plVar22 = plVar22 + 1;
          iVar12 = iVar12 + 1;
        } while (*(long **)(lVar16 + 0x278) != plVar22);
      }
    }
    iVar12 = 0;
LAB_0133dddc:
    FUN_02c2e33c(plVar9,iVar12,0);
  }
  else {
    lVar16 = plVar22[0xb];
    piVar18 = (int *)(lVar16 + 0xc);
    do {
      iVar12 = *piVar18;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar7) {
        *piVar18 = iVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 + -1 != 0) goto LAB_0133d4a8;
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
    plVar22 = (long *)plVar21[0x38];
    if (plVar22 == (long *)0x0) goto LAB_0133dd78;
LAB_0133d4b0:
    plVar3 = plVar22 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar16 = plVar9[0x16];
    if (lVar16 != 0) {
      plVar17 = *(long **)(lVar16 + 0x270);
      if (plVar17 != *(long **)(lVar16 + 0x278)) {
        iVar12 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar17 != 0) {
            plVar2 = (long *)(*plVar17 + 0x58);
          }
          if (*plVar2 == 0x39ad4995fda1bf58) goto LAB_0133d528;
          plVar17 = plVar17 + 1;
          iVar12 = iVar12 + 1;
        } while (*(long **)(lVar16 + 0x278) != plVar17);
      }
    }
    iVar12 = 0;
LAB_0133d528:
    FUN_02c2e33c(plVar9,iVar12,plVar22);
    do {
      iVar12 = (int)*plVar3 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
  local_70 = 0x14;
  local_68 = (long *)0x0;
  local_80 = 0xa0ab211c3851a14e;
  pcStack_78 = "pane_T_guide_mssn_00";
  lVar25 = plVar21[0x37];
  lVar16 = plVar21[0x38];
  lVar4 = plVar21[0x39];
  *(undefined4 *)(lVar25 + 0x124) = 0;
  *(undefined2 *)(lVar25 + 0x128) = 0;
  *(undefined4 *)(lVar25 + 300) = 0;
  *(undefined4 *)(lVar25 + 0x134) = 0;
  FUN_02c33414(lVar25,lVar16);
  if (*(char *)(lVar4 + 0x7c) != '\0') {
    **(undefined2 **)(lVar4 + 0x58) = 0;
    *(undefined2 *)(lVar4 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar25,lVar4,lVar16,0,0);
  FUN_0283ce7c(plVar21,&local_80,plVar21[0x39],10);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  lVar16 = FUN_01306260(lVar15,"pane_N_guide_mssn_00");
  bVar11 = FUN_0131d0f4();
  *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe | bVar11 & 1;
  lVar16 = FUN_01306260(lVar15,"pane_N_icon_new_00");
  uVar23 = *(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x78);
  local_80._0_4_ = 1;
  uVar19 = FUN_0131b5a0(uVar23,&local_80);
  if (((uVar19 & 1) == 0) && (uVar19 = FUN_0131d0f4(), (uVar19 & 1) != 0)) {
    local_80._0_4_ = 1;
    FUN_0131b450(uVar23,&local_80,1);
  }
  local_80._0_4_ = 1;
  uVar19 = FUN_0131b5a0(uVar23,&local_80);
  local_80 = CONCAT44(local_80._4_4_,2);
  uVar14 = FUN_0131b5a0(uVar23,&local_80);
  if (((uVar19 & 1) == 0) || ((uVar14 & 1) != 0)) {
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
LAB_0133d67c:
    if (plVar9 == (long *)0x0) goto LAB_0133d698;
LAB_0133d680:
    plVar22 = plVar9 + 10;
    do {
      iVar12 = (int)*plVar22 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar7) {
        *(int *)plVar22 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 != 0) goto LAB_0133d698;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    cVar6 = *(char *)(param_1 + 0x5c8);
  }
  else {
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 1;
    local_80 = 0xfa4be31a358f052d;
    pcStack_78 = "anime_L_icon_new_00_flashing";
    local_70 = 0x1c;
    local_68 = (long *)0x0;
    FUN_00d2df7c(lVar15,&local_80);
    if (local_68 == (long *)0x0) goto LAB_0133d67c;
    (**(code **)(*local_68 + 0x20))();
    if (plVar9 != (long *)0x0) goto LAB_0133d680;
LAB_0133d698:
    cVar6 = *(char *)(param_1 + 0x5c8);
  }
  if (cVar6 == '\0') {
    local_80 = 0x8f9e59610b1055ba;
    pcStack_78 = "anime_info_mssn_in";
    local_70 = 0x12;
    local_68 = (long *)0x0;
    FUN_00d2e2d0(lVar15,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_80 = 0x4cc591e5e8d4c5d3;
    pcStack_78 = "anime_info_mssn_out";
    local_70 = 0x13;
    local_68 = (long *)0x0;
    FUN_00d2e2d0(lVar15,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_80 = 0x8f9e59610b1055ba;
    pcStack_78 = "anime_info_mssn_in";
    local_70 = 0x12;
    local_68 = (long *)0x0;
    FUN_00d2e4b8(0,lVar15,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x5c9) = 1;
    *(undefined4 *)(param_1 + 0x5cc) = 0;
    lVar16 = *(long *)(*(long *)(param_1 + 0x5c0) + 0x78);
    if (lVar16 != 0) {
      local_80 = CONCAT44(local_80._4_4_,4);
      uVar19 = FUN_0131b5a0(lVar16,&local_80);
      if (((uVar19 & 1) != 0) &&
         ((*(int *)(param_1 + 0x5cc) == 0 || (*(int *)(param_1 + 0x5cc) == 2)))) {
        *(undefined1 *)(param_1 + 0x5c9) = 1;
      }
    }
    *(undefined1 *)(param_1 + 0x5c8) = 1;
  }
  cVar6 = *(char *)(*(long *)(param_1 + 0x5c0) + 0x129);
  *(undefined1 *)(*(long *)(param_1 + 0x5c0) + 0x129) = 0;
  if (cVar6 != '\0') {
    FUN_0133e280(param_1);
  }
  plVar22 = plVar21 + 10;
  do {
    iVar12 = (int)*plVar22 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar7) {
      *(int *)plVar22 = iVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    plVar21 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar21 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar21 != (long *)0x0) {
    plVar22 = plVar21 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar7) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar16 = FUN_01306260(lVar15,"pane_L_window_popup_area_00");
  *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 1;
  iVar12 = *(int *)(*(long *)(param_1 + 0x5c0) + 0x84);
  if (iVar12 == 7) goto LAB_0133d9b8;
  if ((iVar12 < 7) &&
     (puVar24 = *(undefined1 **)(&DAT_03a7ae58 + (long)iVar12 * 8), puVar24 != &DAT_cbf29ce484222645
     )) {
    plVar22 = (long *)plVar21[0x37];
    if (plVar22 == (long *)0x0) {
      FUN_010c7198(0,0,puVar24);
    }
    else {
      lVar16 = plVar22[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_0133dfb0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar16 + 0x10) == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        *(undefined8 *)(lVar16 + 0x10) = uVar23;
      }
      piVar18 = (int *)(lVar16 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar7) {
          *piVar18 = *piVar18 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      FUN_010c7198(plVar22,0,puVar24);
      lVar16 = plVar22[0xb];
      piVar18 = (int *)(lVar16 + 0xc);
      do {
        iVar13 = *piVar18;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar7) {
          *piVar18 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar22 + 0x20))(plVar22);
      }
    }
    lVar16 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
    uVar5 = *(uint *)(lVar16 + 400);
    if (uVar5 != 0) {
      uVar19 = 0;
      piVar18 = (int *)(lVar16 + 0x20);
LAB_0133d7d0:
      puVar1 = (undefined8 *)PTR_DAT_04379c88;
      if (*(long *)(piVar18 + -4) != 0) {
        puVar1 = (undefined8 *)(*(long *)(piVar18 + -4) + 0x58);
      }
      if (((undefined1 *)*puVar1 != &DAT_72837ff1f1cec6a2) || (*piVar18 != 10)) goto LAB_0133dad4;
      if (0xf < (uint)uVar19) {
        plVar22 = (long *)0x0;
        goto LAB_0133d804;
      }
      plVar22 = *(long **)(piVar18 + -2);
      if (plVar22 == (long *)0x0) goto LAB_0133d804;
      lVar16 = plVar22[0xb];
      if (*(undefined8 **)(lVar16 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar16 + 0x10) == 0) {
          uVar23 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
          *(undefined8 *)(lVar16 + 0x10) = uVar23;
        }
        piVar18 = (int *)(lVar16 + 0xc);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar7) {
            *piVar18 = *piVar18 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_0133d804:
        plVar9 = (long *)plVar22[0xd];
        goto joined_r0x0133d808;
      }
      goto LAB_0133dfb0;
    }
LAB_0133dae4:
    plVar22 = (long *)0x0;
    plVar9 = _DAT_00000068;
joined_r0x0133d808:
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (plVar22 == (long *)0x0) {
LAB_0133d840:
      plVar22 = (long *)plVar21[0x38];
      if (plVar22 != (long *)0x0) goto LAB_0133d848;
LAB_0133de08:
      lVar16 = plVar9[0x16];
      if (lVar16 != 0) {
        plVar22 = *(long **)(lVar16 + 0x270);
        if (plVar22 != *(long **)(lVar16 + 0x278)) {
          iVar13 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar22 != 0) {
              plVar3 = (long *)(*plVar22 + 0x58);
            }
            if (*plVar3 == 0xf2bc4a147075733) goto LAB_0133de6c;
            plVar22 = plVar22 + 1;
            iVar13 = iVar13 + 1;
          } while (*(long **)(lVar16 + 0x278) != plVar22);
        }
      }
      iVar13 = 0;
LAB_0133de6c:
      FUN_02c2e33c(plVar9,iVar13,0);
    }
    else {
      lVar16 = plVar22[0xb];
      piVar18 = (int *)(lVar16 + 0xc);
      do {
        iVar13 = *piVar18;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
        if (bVar7) {
          *piVar18 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 != 0) goto LAB_0133d840;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
      plVar22 = (long *)plVar21[0x38];
      if (plVar22 == (long *)0x0) goto LAB_0133de08;
LAB_0133d848:
      plVar3 = plVar22 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      lVar16 = plVar9[0x16];
      if (lVar16 != 0) {
        plVar17 = *(long **)(lVar16 + 0x270);
        if (plVar17 != *(long **)(lVar16 + 0x278)) {
          iVar13 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar17 != 0) {
              plVar2 = (long *)(*plVar17 + 0x58);
            }
            if (*plVar2 == 0xf2bc4a147075733) goto LAB_0133d8c0;
            plVar17 = plVar17 + 1;
            iVar13 = iVar13 + 1;
          } while (*(long **)(lVar16 + 0x278) != plVar17);
        }
      }
      iVar13 = 0;
LAB_0133d8c0:
      FUN_02c2e33c(plVar9,iVar13,plVar22);
      do {
        iVar13 = (int)*plVar3 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(int *)plVar3 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
    local_70 = 0x2a;
    local_68 = (long *)0x0;
    local_80 = 0xfd2a39d165d99751;
    pcStack_78 = "pane_L_window_popup_area_00_T_area_name_00";
    lVar25 = plVar21[0x37];
    lVar16 = plVar21[0x38];
    lVar4 = plVar21[0x39];
    *(undefined4 *)(lVar25 + 0x124) = 0;
    *(undefined2 *)(lVar25 + 0x128) = 0;
    *(undefined4 *)(lVar25 + 300) = 0;
    *(undefined4 *)(lVar25 + 0x134) = 0;
    FUN_02c33414(lVar25,lVar16);
    if (*(char *)(lVar4 + 0x7c) != '\0') {
      **(undefined2 **)(lVar4 + 0x58) = 0;
      *(undefined2 *)(lVar4 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar25,lVar4,lVar16,0,0);
    FUN_0283ce7c(plVar21,&local_80,plVar21[0x39],10);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (plVar9 != (long *)0x0) {
      plVar22 = plVar9 + 10;
      do {
        iVar13 = (int)*plVar22 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar7) {
          *(int *)plVar22 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  iVar12 = FUN_0133eb30(*(undefined8 *)(param_1 + 0x5c0),iVar12);
  FUN_00d2e2f0((float)iVar12,lVar15,"anime_L_window_popup_area_00_L_icon_weather_00_switch_icon");
LAB_0133d9b8:
  *(undefined4 *)(param_1 + 0x5f4) = 2;
  puVar1 = local_90[0];
  if (plVar21 != (long *)0x0) {
    plVar22 = plVar21 + 10;
    do {
      iVar12 = (int)*plVar22 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar7) {
        *(int *)plVar22 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      puVar1 = local_90[0];
    }
  }
  if (puVar1 != (undefined8 *)0x0) {
    piVar18 = (int *)(puVar1 + 1);
    do {
      iVar12 = *piVar18;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar7) {
        *piVar18 = iVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 + -1 == 0) {
      puVar1[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_80 = *puVar1;
      FUN_02a44274(lVar15 + 0xd8,&local_80);
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar21 = plVar8 + 10;
    do {
      iVar12 = (int)*plVar21 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *(int *)plVar21 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  if (plVar20 != (long *)0x0) {
    plVar21 = plVar20 + 10;
    do {
      iVar12 = (int)*plVar21 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *(int *)plVar21 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  return;
LAB_0133da94:
  uVar19 = uVar19 + 1;
  piVar18 = piVar18 + 6;
  if (uVar5 == uVar19) goto LAB_0133daa4;
  goto LAB_0133d378;
LAB_0133dab4:
  uVar19 = uVar19 + 1;
  piVar18 = piVar18 + 6;
  if (uVar5 == uVar19) goto LAB_0133dac4;
  goto LAB_0133d438;
LAB_0133dad4:
  uVar19 = uVar19 + 1;
  piVar18 = piVar18 + 6;
  if (uVar5 == uVar19) goto LAB_0133dae4;
  goto LAB_0133d7d0;
}


