/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014dcd00; name: FUN_014dcd00
 */


void FUN_014dcd00(long param_1,undefined2 param_2,undefined2 param_3)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_58;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0), lVar8 == 0)) goto LAB_014dd040;
  local_80 = 0xc4dbc279d356203b;
  pcStack_78 = "common/net.dat";
  local_70 = 0xe;
  local_68 = (long *)0x0;
  FUN_00d37bb4(&local_58,lVar8,&local_80,10);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if ((local_58 == (long *)0x0) || (plVar10 = (long *)local_58[0xd], plVar10 == (long *)0x0))
  goto LAB_014dd040;
  plVar1 = plVar10 + 10;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  plVar11 = *(long **)(param_1 + 0x2c8);
  if (plVar11 == (long *)0x0) goto LAB_014dd040;
  plVar2 = plVar11 + 10;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  plVar12 = (long *)plVar11[0x39];
  if (plVar12 == (long *)0x0) {
LAB_014dcdf4:
    plVar13 = (long *)plVar11[0x37];
  }
  else {
    plVar13 = plVar12 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      iVar7 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 != 0) goto LAB_014dcdf4;
    (**(code **)(*plVar12 + 0x10))(plVar12);
    plVar13 = (long *)plVar11[0x37];
  }
  if (plVar13 != (long *)0x0) {
    lVar8 = plVar13[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_014dd040:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar9;
    }
    piVar3 = (int *)(lVar8 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar8 = plVar13[0xb];
    piVar3 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
      plVar14 = (long *)plVar11[0x38];
      goto joined_r0x014dd01c;
    }
  }
  plVar14 = (long *)plVar11[0x38];
joined_r0x014dd01c:
  if (plVar14 != (long *)0x0) {
    plVar4 = plVar14 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *(int *)plVar4 = (int)*plVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      iVar7 = (int)*plVar4 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *(int *)plVar4 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  local_80 = 0xc988b967d124beb9;
  FUN_02c2e7d0(plVar10,&local_80,plVar14);
  FUN_02c395d0(plVar13,0,param_2,4,2,1);
  FUN_02c395d0(plVar13,1,param_3,4,2,1);
  FUN_02c333a8(plVar13,plVar12,plVar14);
  local_80 = 0x3e85e7cc88b4d3bf;
  pcStack_78 = "pane_T_p_netm_00";
  local_70 = 0x10;
  local_68 = (long *)0x0;
  FUN_0283ce7c(plVar11,&local_80,plVar12,10);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  do {
    iVar7 = (int)*plVar2 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *(int *)plVar2 = iVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *(int *)plVar1 = iVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if (local_58 != (long *)0x0) {
    lVar8 = local_58[0xb];
    piVar3 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


