/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01256d90; name: FUN_01256d90
 */


void FUN_01256d90(long param_1,int param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
  plVar10 = *(long **)(param_1 + 0x2c8);
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_0124f208(&local_48,param_1,0);
  plVar11 = (long *)plVar10[0x38];
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar9 = local_48[0x16];
  if (lVar9 != 0) {
    plVar8 = *(long **)(lVar9 + 0x270);
    if (plVar8 != *(long **)(lVar9 + 0x278)) {
      iVar7 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar8 != 0) {
          plVar2 = (long *)(*plVar8 + 0x58);
        }
        if (*plVar2 == -0x2213727191f89fe9) goto LAB_01256e58;
        plVar8 = plVar8 + 1;
        iVar7 = iVar7 + 1;
      } while (*(long **)(lVar9 + 0x278) != plVar8);
    }
  }
  iVar7 = 0;
LAB_01256e58:
  FUN_02c2e33c(local_48,iVar7,plVar11);
  plVar8 = (long *)plVar10[0x37];
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_02c395d0(plVar8,0,-param_2,7,0,1);
  local_58 = 0x1e;
  local_50 = (long *)0x0;
  local_68 = 0xc02772f686950cb1;
  pcStack_60 = "pane_L_money_00_T_param_sub_00";
  lVar12 = plVar10[0x37];
  lVar9 = plVar10[0x38];
  lVar3 = plVar10[0x39];
  *(undefined4 *)(lVar12 + 0x124) = 0;
  *(undefined2 *)(lVar12 + 0x128) = 0;
  *(undefined4 *)(lVar12 + 300) = 0;
  *(undefined4 *)(lVar12 + 0x134) = 0;
  FUN_02c33414(lVar12,lVar9);
  if (*(char *)(lVar3 + 0x7c) != '\0') {
    **(undefined2 **)(lVar3 + 0x58) = 0;
    *(undefined2 *)(lVar3 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar12,lVar3,lVar9,0,0);
  FUN_0283ce7c(plVar10,&local_68,plVar10[0x39],10);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  local_68 = 0x41e6422dedb92bb6;
  pcStack_60 = "anime_L_money_00_money_sub";
  local_58 = 0x1a;
  local_50 = (long *)0x0;
  FUN_0283b1e8(plVar10,&local_68);
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  if (local_48 != (long *)0x0) {
    plVar11 = local_48 + 10;
    do {
      iVar7 = (int)*plVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  plVar11 = plVar10 + 10;
  do {
    iVar7 = (int)*plVar11 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *(int *)plVar11 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}


