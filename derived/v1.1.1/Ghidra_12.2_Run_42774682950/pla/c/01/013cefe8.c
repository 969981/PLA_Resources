/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cefe8; name: FUN_013cefe8
 */


void FUN_013cefe8(long param_1)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *local_68;
  long *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar11 = *(long **)(param_1 + 0x2c8);
  if (plVar11 == (long *)0x0) {
LAB_013cf2e8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  plVar1 = plVar11 + 10;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  local_60 = (long *)&DAT_e2c06acab97c29c2;
  pcStack_58 = "CommonOptionBar";
  local_50 = 0xf;
  local_48 = (long *)0x0;
  lVar7 = FUN_0118c80c(*(undefined8 *)(param_1 + 0x68),&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (lVar7 == 0) goto LAB_013cf2e8;
  FUN_00d6a4e4(lVar7);
  FUN_00d37c90(&local_60,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),0);
  plVar12 = (long *)local_60[0xd];
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (local_60 != (long *)0x0) {
    lVar9 = local_60[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
      plVar13 = (long *)plVar11[0x38];
      goto joined_r0x013cf270;
    }
  }
  plVar13 = (long *)plVar11[0x38];
joined_r0x013cf270:
  if (plVar13 == (long *)0x0) {
    lVar9 = plVar12[0x16];
    if (lVar9 != 0) {
      plVar13 = *(long **)(lVar9 + 0x270);
      if (plVar13 != *(long **)(lVar9 + 0x278)) {
        iVar8 = 0;
        do {
          plVar4 = (long *)PTR_DAT_04379c88;
          if (*plVar13 != 0) {
            plVar4 = (long *)(*plVar13 + 0x58);
          }
          if (*plVar4 == -0x367744982edb3de1) goto LAB_013cf2d8;
          plVar13 = plVar13 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar9 + 0x278) != plVar13);
      }
    }
    iVar8 = 0;
LAB_013cf2d8:
    FUN_02c2e33c(plVar12,iVar8,0);
  }
  else {
    plVar4 = plVar13 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *(int *)plVar4 = (int)*plVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar9 = plVar12[0x16];
    if (lVar9 != 0) {
      plVar10 = *(long **)(lVar9 + 0x270);
      if (plVar10 != *(long **)(lVar9 + 0x278)) {
        iVar8 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar10 != 0) {
            plVar3 = (long *)(*plVar10 + 0x58);
          }
          if (*plVar3 == -0x367744982edb3de1) goto LAB_013cf14c;
          plVar10 = plVar10 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar9 + 0x278) != plVar10);
      }
    }
    iVar8 = 0;
LAB_013cf14c:
    FUN_02c2e33c(plVar12,iVar8,plVar13);
    do {
      iVar8 = (int)*plVar4 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *(int *)plVar4 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  local_68 = (long *)plVar11[0x38];
  if (local_68 != (long *)0x0) {
    plVar13 = local_68 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_00d6a464(lVar7,0,1,&local_68);
  if (local_68 != (long *)0x0) {
    plVar13 = local_68 + 10;
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
      (**(code **)(*local_68 + 0x10))();
    }
  }
  FUN_00d6a4d8(lVar7);
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
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *(int *)plVar1 = iVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  return;
}


