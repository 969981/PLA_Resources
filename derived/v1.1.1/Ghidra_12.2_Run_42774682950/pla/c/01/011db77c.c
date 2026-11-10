/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011db77c; name: FUN_011db77c
 */


void FUN_011db77c(long param_1,long param_2,ulong param_3)

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
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_38;
  
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
  FUN_011d24c4(&local_38);
  lVar9 = local_38[0x16];
  if (lVar9 != 0) {
    plVar8 = *(long **)(lVar9 + 0x270);
    if (plVar8 != *(long **)(lVar9 + 0x278)) {
      iVar7 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar8 != 0) {
          plVar2 = (long *)(*plVar8 + 0x58);
        }
        if (*plVar2 == -0x1776ab98f4ed9d3d) goto LAB_011db858;
        plVar8 = plVar8 + 1;
        iVar7 = iVar7 + 1;
      } while (*(long **)(lVar9 + 0x278) != plVar8);
    }
  }
  iVar7 = 0;
LAB_011db858:
  FUN_02c2e33c(local_38,iVar7,plVar11);
  plVar11 = (long *)plVar10[0x37];
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0xb];
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
  FUN_010c6004(plVar11,0,*(undefined8 *)(*(long *)(param_2 + 0x70) + 0x60));
  lVar9 = (param_3 & 0xff) * 0x60;
  local_60 = *(undefined8 *)(&DAT_041f9c68 + lVar9);
  puStack_58 = (&PTR_s_pane_L_icon_00_T_pokename_00_041f9c70)[(param_3 & 0xff) * 0xc];
  local_50 = *(undefined8 *)(&DAT_041f9c78 + lVar9);
  local_48 = (long *)0x0;
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
  FUN_0283ce7c(plVar10,&local_60,plVar10[0x39],10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0xb];
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
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  if (local_38 != (long *)0x0) {
    plVar11 = local_38 + 10;
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
      (**(code **)(*local_38 + 0x10))();
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


