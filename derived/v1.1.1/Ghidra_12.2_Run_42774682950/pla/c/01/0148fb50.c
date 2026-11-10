/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148fb50; name: FUN_0148fb50
 */


void FUN_0148fb50(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined4 uVar14;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_60 = (long *)&DAT_d690ac3ef4814065;
  pcStack_58 = "pane_L_mssn_00";
  local_50 = 0xe;
  local_48 = (long *)0x0;
  lVar6 = FUN_011da5dc(*(undefined8 *)(param_1 + 0x2c8),&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0xe8), lVar6 != 0)) {
    FUN_00235780(lVar6);
    FUN_002350e8(lVar6,"T_content_00");
    FUN_002350e8(lVar6,"T_content_01");
    FUN_002350e8(lVar6,"T_content_02");
  }
  plVar12 = *(long **)(param_1 + 0x2c8);
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      iVar5 = (int)*plVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar13 != (long *)0x0) {
    lVar6 = plVar13[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar6 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)plVar13[0xd];
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = plVar13[0xb];
  piVar2 = (int *)(lVar6 + 0xc);
  do {
    iVar5 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar5 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 + -1 == 0) {
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
  FUN_00d8c950(&local_78);
  FUN_016b6208(&local_70,local_78);
  FUN_0165dc5c(&local_60,local_70);
  FUN_016afe80(&local_68,local_60);
  if (local_60 != (long *)0x0) {
    plVar13 = local_60 + 10;
    do {
      iVar5 = (int)*plVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (local_70 != (long *)0x0) {
    plVar13 = local_70 + 10;
    do {
      iVar5 = (int)*plVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (local_78 != (long *)0x0) {
    plVar13 = local_78 + 10;
    do {
      iVar5 = (int)*plVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  FUN_016a50f0(&local_70,local_68,param_2 + 0x18,*(undefined8 *)(param_1 + 8));
  if (local_70 == (long *)0x0) goto joined_r0x0148ff58;
  local_60 = (long *)0xf32e0e12b795e77e;
  pcStack_58 = "anime_L_mssn_00_switch_icon";
  local_50 = 0x1b;
  local_48 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_60);
  }
  uVar14 = 0;
  if (*(int *)((long)local_70 + 100) != 0) {
    uVar14 = 0x3f800000;
  }
  FUN_00d2e2f0(uVar14,param_1 + 0x180,"anime_L_mssn_00_switch_icon");
  local_60 = (long *)0x527dcde5e29de309;
  pcStack_58 = "pane_L_mssn_00_T_mssn_name_00";
  local_50 = 0x1d;
  local_48 = (long *)0x0;
  FUN_0283ce7c(plVar12,&local_60,local_70[0xd],10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  iVar5 = FUN_0137fc60(*(undefined8 *)(param_1 + 0x3f70),local_70[0xb]);
  plVar12 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar6 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar6 == 0) || (*plVar12 == 0x705234bee5ca01f5)) {
    plVar13 = plVar12;
  }
  else {
    lVar9 = lVar6 * 0x30;
    plVar10 = plVar12;
    do {
      lVar9 = lVar9 + -0x30;
      if (lVar9 == 0) goto LAB_0148ffa8;
      plVar1 = plVar10 + 6;
      plVar13 = plVar10 + 6;
      plVar10 = plVar10 + 6;
    } while (*plVar1 != 0x705234bee5ca01f5);
  }
  if (plVar13 == plVar12 + lVar6 * 6) {
LAB_0148ffa8:
    lVar6 = 0;
    bVar8 = DAT_00000058;
    if (iVar5 != 0) goto LAB_0148feac;
LAB_0148ffb4:
    *(byte *)(lVar6 + 0x58) = bVar8 & 0xfe;
    plVar12 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar6 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    if ((lVar6 != 0) && (*plVar12 != 0x705231bee5c9fcdc)) {
      plVar13 = plVar12 + lVar6 * 6;
      lVar6 = lVar6 * 0x30;
      do {
        lVar6 = lVar6 + -0x30;
        if (lVar6 == 0) {
          plVar12 = plVar13;
          break;
        }
        plVar1 = plVar12 + 6;
        plVar10 = plVar12 + 6;
        plVar12 = plVar1;
      } while (*plVar10 != 0x705231bee5c9fcdc);
    }
    *(byte *)(plVar12[4] + 0x58) = *(byte *)(plVar12[4] + 0x58) & 0xfe;
  }
  else {
    lVar6 = plVar13[4];
    bVar8 = *(byte *)(lVar6 + 0x58);
    if (iVar5 == 0) goto LAB_0148ffb4;
LAB_0148feac:
    *(byte *)(lVar6 + 0x58) = bVar8 | 1;
    plVar12 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar6 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    if ((lVar6 != 0) && (*plVar12 != 0x705231bee5c9fcdc)) {
      plVar13 = plVar12 + lVar6 * 6;
      lVar6 = lVar6 * 0x30;
      do {
        lVar6 = lVar6 + -0x30;
        if (lVar6 == 0) {
          plVar12 = plVar13;
          break;
        }
        plVar1 = plVar12 + 6;
        plVar10 = plVar12 + 6;
        plVar12 = plVar1;
      } while (*plVar10 != 0x705231bee5c9fcdc);
    }
    *(byte *)(plVar12[4] + 0x58) = *(byte *)(plVar12[4] + 0x58) | 1;
    FUN_00d2e2f0((float)(iVar5 - 1),param_1 + 0x180,"anime_L_mssn_00_switch_bg");
  }
  if (local_70 != (long *)0x0) {
    plVar12 = local_70 + 10;
    do {
      iVar5 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
joined_r0x0148ff58:
  if (local_68 != (long *)0x0) {
    plVar12 = local_68 + 10;
    do {
      iVar5 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      iVar5 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  return;
}


