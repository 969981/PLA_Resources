/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bbd31c; name: FUN_00bbd31c
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bbd31c(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  lVar11 = *param_2;
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar9 = (long *)param_1[0xb];
  param_1[0xb] = lVar11;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 10;
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  puVar4 = (undefined8 *)param_1[0xd];
  puVar5 = (undefined8 *)param_1[0xe];
joined_r0x00bbd380:
  if (puVar4 != puVar5) {
    plVar9 = (long *)*puVar4;
    if (plVar9 != (long *)0x0) goto code_r0x00bbd3c8;
    lVar11 = *param_2;
    if (lVar11 != 0) {
      piVar1 = (int *)(lVar11 + 0x50);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plVar9 = _DAT_000000a0;
    if (_DAT_000000a0 == (long *)0x0) {
      _DAT_000000a0 = (long *)lVar11;
      halt_baddata();
    }
    plVar2 = _DAT_000000a0 + 10;
    _DAT_000000a0 = (long *)lVar11;
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    goto LAB_00bbd4b4;
  }
  puVar4 = (undefined8 *)param_1[0x14];
  puVar5 = (undefined8 *)param_1[0x15];
  while( true ) {
    if (puVar4 == puVar5) {
                    /* WARNING: Could not recover jumptable at 0x00bbd3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x58))(param_1);
      return;
    }
    plVar9 = (long *)*puVar4;
    if (plVar9 == (long *)0x0) break;
    plVar2 = plVar9 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar11 = *param_2;
    if (lVar11 != 0) {
      piVar1 = (int *)(lVar11 + 0x50);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plVar10 = (long *)plVar9[0x14];
    plVar9[0x14] = lVar11;
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 10;
      do {
        iVar8 = (int)*plVar3 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(int *)plVar3 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    (**(code **)(*plVar9 + 0x50))(plVar9);
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    puVar4 = puVar4 + 1;
  }
  lVar11 = *param_2;
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar9 = _DAT_000000a0;
  if (_DAT_000000a0 != (long *)0x0) {
    plVar2 = _DAT_000000a0 + 10;
    _DAT_000000a0 = (long *)lVar11;
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_00bbd4b4:
    lVar11 = (long)_DAT_000000a0;
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
      lVar11 = (long)_DAT_000000a0;
    }
  }
  _DAT_000000a0 = (long *)lVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_r0x00bbd3c8:
  plVar2 = plVar9 + 10;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar11 = *param_2;
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar10 = (long *)plVar9[0x14];
  plVar9[0x14] = lVar11;
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 10;
    do {
      iVar8 = (int)*plVar3 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  (**(code **)(*plVar9 + 0x48))(plVar9);
  do {
    iVar8 = (int)*plVar2 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *(int *)plVar2 = iVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar4 = puVar4 + 1;
  goto joined_r0x00bbd380;
}


