/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01476418; name: FUN_01476418
 */


void FUN_01476418(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar10 = *(long **)(param_1 + 0x2c8);
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar11 = (long *)plVar10[0x37];
  if (plVar11 != (long *)0x0) {
    lVar14 = plVar11[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_014767b4;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_010c7198(plVar11,0,*param_2);
  plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar13 != (long *)0x0) {
    lVar14 = plVar13[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_014767b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar12 = (long *)plVar13[0xd];
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar14 = plVar13[0xb];
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
    plVar13 = (long *)plVar10[0x38];
  }
  else {
    plVar13 = (long *)plVar10[0x38];
  }
  if (plVar13 == (long *)0x0) {
    lVar14 = plVar12[0x16];
    if (lVar14 != 0) {
      plVar13 = *(long **)(lVar14 + 0x270);
      if (plVar13 != *(long **)(lVar14 + 0x278)) {
        iVar8 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar13 != 0) {
            plVar3 = (long *)(*plVar13 + 0x58);
          }
          if (*plVar3 == -0x5f61e3c15d1be366) goto LAB_0147678c;
          plVar13 = plVar13 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar14 + 0x278) != plVar13);
      }
    }
    iVar8 = 0;
LAB_0147678c:
    FUN_02c2e33c(plVar12,iVar8,0);
  }
  else {
    plVar3 = plVar13 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar14 = plVar12[0x16];
    if (lVar14 != 0) {
      plVar9 = *(long **)(lVar14 + 0x270);
      if (plVar9 != *(long **)(lVar14 + 0x278)) {
        iVar8 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar2 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar2 == -0x5f61e3c15d1be366) goto LAB_014765a4;
          plVar9 = plVar9 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar14 + 0x278) != plVar9);
      }
    }
    iVar8 = 0;
LAB_014765a4:
    FUN_02c2e33c(plVar12,iVar8,plVar13);
    do {
      iVar8 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  local_50 = 0xe;
  local_48 = (long *)0x0;
  local_60 = 0x8fb815a4e5c07f4b;
  pcStack_58 = "pane_T_text_00";
  lVar15 = plVar10[0x37];
  lVar14 = plVar10[0x38];
  lVar4 = plVar10[0x39];
  *(undefined4 *)(lVar15 + 0x124) = 0;
  *(undefined2 *)(lVar15 + 0x128) = 0;
  *(undefined4 *)(lVar15 + 300) = 0;
  *(undefined4 *)(lVar15 + 0x134) = 0;
  FUN_02c33414(lVar15,lVar14);
  if (*(char *)(lVar4 + 0x7c) != '\0') {
    **(undefined2 **)(lVar4 + 0x58) = 0;
    *(undefined2 *)(lVar4 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar15,lVar4,lVar14,0,0);
  FUN_0283ce7c(plVar10,&local_60,plVar10[0x39],10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      iVar8 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar14 = plVar11[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  plVar11 = plVar10 + 10;
  do {
    iVar8 = (int)*plVar11 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar6) {
      *(int *)plVar11 = iVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}


