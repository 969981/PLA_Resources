/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014b5444; name: FUN_014b5444
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014b5444(long param_1,int param_2,long param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  char *local_c0;
  long *local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long *local_98;
  char acStack_90 [64];
  
  plVar9 = *(long **)(param_1 + 0x2c8);
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)plVar9[0x38];
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
  }
  plVar11 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar13 = (long *)plVar11[0xd];
  if (plVar13 == (long *)0x0) {
    if (_DAT_000000b0 != 0) {
      plVar13 = *(long **)(_DAT_000000b0 + 0x270);
      if (plVar13 != *(long **)(_DAT_000000b0 + 0x278)) {
        iVar7 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar13 != 0) {
            plVar3 = (long *)(*plVar13 + 0x58);
          }
          if (*plVar3 == param_3) goto LAB_014b5764;
          plVar13 = plVar13 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(_DAT_000000b0 + 0x278) != plVar13);
      }
    }
    iVar7 = 0;
LAB_014b5764:
    FUN_02c2e33c(0,iVar7,plVar10);
  }
  else {
    plVar3 = plVar13 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar12 = plVar13[0x16];
    if (lVar12 != 0) {
      plVar8 = *(long **)(lVar12 + 0x270);
      if (plVar8 != *(long **)(lVar12 + 0x278)) {
        iVar7 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar8 != 0) {
            plVar2 = (long *)(*plVar8 + 0x58);
          }
          if (*plVar2 == param_3) goto LAB_014b5570;
          plVar8 = plVar8 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar12 + 0x278) != plVar8);
      }
    }
    iVar7 = 0;
LAB_014b5570:
    FUN_02c2e33c(plVar13,iVar7,plVar10);
    do {
      iVar7 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  snprintf(acStack_90,0x40,"pane_T_%02d",param_2);
  local_c0 = acStack_90;
  FUN_009313e8(&local_b8,&local_c0);
  plVar11 = local_b8;
  if (local_b8 == (long *)0x0) {
    local_b0 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_b0 = local_b8[0xb];
    if (local_b8 != (long *)0x0) {
      lStack_a8 = local_b8[0xc];
      goto joined_r0x014b55f8;
    }
  }
  lStack_a8 = *(long *)PTR_PTR_04379d00;
joined_r0x014b55f8:
  if (local_b8 == (long *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = local_b8[0xd];
  }
  local_98 = (long *)0x0;
  if (local_b8 == (long *)0x0) {
    local_98 = local_b8;
  }
  else {
    (**(code **)(*local_b8 + 0x18))(local_b8);
    plVar13 = local_98;
    local_98 = plVar11;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  FUN_0283ce7c(plVar9,&local_b0,plVar10,10);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  *(long *)(param_1 + (long)param_2 * 8 + 0x818) = param_3;
  plVar10 = plVar9 + 10;
  do {
    iVar7 = (int)*plVar10 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *(int *)plVar10 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  return;
}


