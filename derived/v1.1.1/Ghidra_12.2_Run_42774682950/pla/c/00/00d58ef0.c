/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d58ef0; name: FUN_00d58ef0
 */


void FUN_00d58ef0(long param_1,long param_2,undefined4 param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *local_38;
  
  FUN_00d58a08(&local_38,param_1,param_3);
  plVar8 = *(long **)(param_1 + 0x2c8);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)plVar8[0x37];
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)plVar8[0x38];
  if (plVar11 == (long *)0x0) {
    lVar10 = local_38[0x16];
    if (lVar10 != 0) {
      plVar11 = *(long **)(lVar10 + 0x270);
      if (plVar11 != *(long **)(lVar10 + 0x278)) {
        iVar6 = 0;
        do {
          plVar12 = (long *)PTR_DAT_04379c88;
          if (*plVar11 != 0) {
            plVar12 = (long *)(*plVar11 + 0x58);
          }
          if (*plVar12 == param_2) goto LAB_00d591d0;
          plVar11 = plVar11 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar11);
      }
    }
    iVar6 = 0;
LAB_00d591d0:
    FUN_02c2e33c(local_38,iVar6,0);
    plVar11 = (long *)plVar8[0x39];
  }
  else {
    plVar12 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = local_38[0x16];
    if (lVar10 != 0) {
      plVar7 = *(long **)(lVar10 + 0x270);
      if (plVar7 != *(long **)(lVar10 + 0x278)) {
        iVar6 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar7 != 0) {
            plVar2 = (long *)(*plVar7 + 0x58);
          }
          if (*plVar2 == param_2) goto LAB_00d58fe8;
          plVar7 = plVar7 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar7);
      }
    }
    iVar6 = 0;
LAB_00d58fe8:
    FUN_02c2e33c(local_38,iVar6,plVar11);
    do {
      iVar6 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar11 = (long *)plVar8[0x39];
    }
    else {
      plVar11 = (long *)plVar8[0x39];
    }
  }
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar12 = (long *)plVar8[0x38];
  if (plVar12 != (long *)0x0) {
    plVar7 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_02c333a8(plVar9,plVar11,plVar12);
  plVar7 = plVar12 + 10;
  do {
    iVar6 = (int)*plVar7 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *(int *)plVar7 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      iVar6 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar9 = plVar8 + 10;
  do {
    iVar6 = (int)*plVar9 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *(int *)plVar9 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if (local_38 != (long *)0x0) {
    plVar8 = local_38 + 10;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return;
}


