/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01343360; name: FUN_01343360
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01343360(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  long *local_98;
  long *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar5 = *(uint *)(lVar11 + 400);
  if (uVar5 != 0) {
    uVar13 = 0;
    piVar12 = (int *)(lVar11 + 0x20);
LAB_013433b0:
    puVar4 = (undefined8 *)PTR_DAT_04379c88;
    if (*(long *)(piVar12 + -4) != 0) {
      puVar4 = (undefined8 *)(*(long *)(piVar12 + -4) + 0x58);
    }
    if (((undefined1 *)*puVar4 != &DAT_72837ff1f1cec6a2) || (*piVar12 != 10)) goto LAB_013437b0;
    if ((uint)uVar13 < 0x10) {
      plVar14 = *(long **)(piVar12 + -2);
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar15 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar15;
        }
        piVar12 = (int *)(lVar11 + 0xc);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar7) {
            *piVar12 = *piVar12 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    else {
      plVar14 = (long *)0x0;
    }
    plVar8 = (long *)plVar14[0xd];
    goto joined_r0x013433e8;
  }
LAB_013437c0:
  plVar14 = (long *)0x0;
  plVar8 = _DAT_00000068;
joined_r0x013433e8:
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar14 != (long *)0x0) {
    lVar11 = plVar14[0xb];
    piVar12 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
      plVar14 = *(long **)(param_1 + 0x2c8);
      goto joined_r0x01343424;
    }
  }
  plVar14 = *(long **)(param_1 + 0x2c8);
joined_r0x01343424:
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x5c0) + 400);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
  FUN_00d8c950(&local_68);
  FUN_016b6208(&local_60,local_68);
  FUN_0165dc5c(&local_90,local_60);
  FUN_016afe80(&local_58,local_90);
  if (local_90 != (long *)0x0) {
    plVar1 = local_90 + 10;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if (local_60 != (long *)0x0) {
    plVar1 = local_60 + 10;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 10;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  local_60 = (long *)FUN_016a7b0c(local_58);
  if ((local_60 == (long *)0xc0ea47549ab5f3d9) ||
     (FUN_016a50f0(&local_90,local_58,&local_60,*(undefined8 *)(param_1 + 8)), plVar1 = local_90,
     local_90 == (long *)0x0)) {
    uVar15 = 0xffffffff;
  }
  else {
    plVar2 = local_90 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (local_90 != (long *)0x0) {
      plVar16 = local_90 + 10;
      do {
        iVar9 = (int)*plVar16 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = iVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (plVar14 != (long *)0x0) {
      plVar16 = plVar14 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = (int)*plVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_90 = (long *)0x6b01f1b45cbc9550;
    pcStack_88 = "pane_L_window_popup_lmap_00_T_number_mssn_00";
    local_80 = 0x2c;
    local_78 = (long *)0x0;
    if (plVar8 == (long *)0x0) {
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = plVar8 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = (int)*plVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar16 = plVar8;
    }
    local_68 = (long *)0xf2f4ca1470a7422;
    local_98 = plVar8;
    local_70 = plVar14;
    FUN_01344780(&local_70,&local_90,&local_98,&local_68,(int)plVar1[0xc]);
    if (plVar16 != (long *)0x0) {
      plVar3 = plVar16 + 10;
      do {
        iVar9 = (int)*plVar3 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(int *)plVar3 = iVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_70 != (long *)0x0) {
      plVar16 = local_70 + 10;
      do {
        iVar9 = (int)*plVar16 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = iVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    local_90 = (long *)0xb616d4822957395a;
    pcStack_88 = "pane_L_window_popup_lmap_00_T_mssn_name_00";
    local_80 = 0x2a;
    local_78 = (long *)0x0;
    FUN_0283ce7c(plVar14,&local_90,plVar1[0xd],10);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    iVar9 = *(int *)((long)plVar1 + 100);
    local_90 = (long *)0x5e9e37f4a8500134;
    pcStack_88 = "pane_L_window_popup_lmap_00_P_icon_mssn_00";
    local_80 = 0x2a;
    local_78 = (long *)0x0;
    lVar11 = FUN_00d63240(*(undefined8 *)(param_1 + 0x2c8),&local_90);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (lVar11 != 0) {
      uVar10 = 2;
      if (iVar9 != 0) {
        uVar10 = 3;
      }
      FUN_01308270(uVar15,uVar10,lVar11,0,0);
    }
    FUN_00d2e2f0(0x40400000,param_1 + 0x180,"anime_L_window_popup_lmap_00_ptn_window");
    do {
      lVar11 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar11 == 1) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    uVar15 = 3;
  }
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 10;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar14 = plVar8 + 10;
    do {
      iVar9 = (int)*plVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(int *)plVar14 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return uVar15;
LAB_013437b0:
  uVar13 = uVar13 + 1;
  piVar12 = piVar12 + 6;
  if (uVar5 == uVar13) goto LAB_013437c0;
  goto LAB_013433b0;
}


