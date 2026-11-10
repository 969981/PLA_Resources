/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02853c10; name: FUN_02853c10
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02853c10(long param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  
  *(int *)(param_1 + (long)param_3 * 4 + 0x488) = param_2;
  plVar9 = *(long **)(*(long *)(param_1 + 8) + 0x1b8);
  if (plVar9 == (long *)0x0) {
    FUN_02c395d0(0,0,param_4,3,0,1);
  }
  else {
    lVar12 = plVar9[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_02c395d0(plVar9,0,param_4,3,0,1);
    lVar12 = plVar9[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  local_60 = *(undefined8 *)(param_1 + 0x148);
  local_58 = *(undefined8 *)(param_1 + 0x150);
  local_50 = *(undefined8 *)(param_1 + 0x158);
  plVar9 = *(long **)(param_1 + 0x160);
  local_48 = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  local_80 = *(undefined8 *)(param_1 + 0x188);
  local_78 = *(undefined8 *)(param_1 + 400);
  local_70 = *(undefined8 *)(param_1 + 0x198);
  plVar10 = *(long **)(param_1 + 0x1a0);
  local_68 = plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  if (param_3 == 0) {
    lVar12 = *(long *)(param_1 + 0x68);
    if (param_2 == 2) {
      local_60 = *(undefined8 *)(param_1 + 0x208);
      local_58 = *(undefined8 *)(param_1 + 0x210);
      local_50 = *(undefined8 *)(param_1 + 0x218);
      plVar11 = *(long **)(param_1 + 0x220);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      local_48 = plVar11;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      local_80 = *(undefined8 *)(param_1 + 0x248);
      local_78 = *(undefined8 *)(param_1 + 0x250);
      local_70 = *(undefined8 *)(param_1 + 600);
      plVar9 = *(long **)(param_1 + 0x260);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      local_68 = plVar9;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
        plVar9 = *(long **)(param_1 + 0x10);
        goto joined_r0x02853d0c;
      }
    }
    else if (param_2 == 0) goto LAB_02853fbc;
    plVar9 = *(long **)(param_1 + 0x10);
  }
  else {
    if (param_3 != 1) {
LAB_02853fbc:
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      if (plVar9 == (long *)0x0) {
        return;
      }
      (**(code **)(*plVar9 + 0x20))(plVar9);
      return;
    }
    if (param_2 == 2) {
      local_60 = *(undefined8 *)(param_1 + 0x268);
      local_58 = *(undefined8 *)(param_1 + 0x270);
      local_50 = *(undefined8 *)(param_1 + 0x278);
      plVar11 = *(long **)(param_1 + 0x280);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      local_48 = plVar11;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      local_80 = *(undefined8 *)(param_1 + 0x2a8);
      local_78 = *(undefined8 *)(param_1 + 0x2b0);
      local_70 = *(undefined8 *)(param_1 + 0x2b8);
      plVar9 = *(long **)(param_1 + 0x2c0);
    }
    else {
      if (param_2 != 1) goto LAB_02853fbc;
      local_60 = *(undefined8 *)(param_1 + 0x1a8);
      local_58 = *(undefined8 *)(param_1 + 0x1b0);
      local_50 = *(undefined8 *)(param_1 + 0x1b8);
      plVar11 = *(long **)(param_1 + 0x1c0);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      local_48 = plVar11;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      local_80 = *(undefined8 *)(param_1 + 0x1e8);
      local_78 = *(undefined8 *)(param_1 + 0x1f0);
      local_70 = *(undefined8 *)(param_1 + 0x1f8);
      plVar9 = *(long **)(param_1 + 0x200);
    }
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    local_68 = plVar9;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    lVar12 = *(long *)(param_1 + 0x70);
    plVar9 = *(long **)(param_1 + 0x10);
  }
joined_r0x02853d0c:
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
  if (plVar10 == (long *)0x0) {
    lVar8 = plVar9[0x16];
    if (lVar8 != 0) {
      plVar10 = *(long **)(lVar8 + 0x270);
      if (plVar10 != *(long **)(lVar8 + 0x278)) {
        iVar6 = 0;
        do {
          plVar11 = (long *)PTR_DAT_04379c88;
          if (*plVar10 != 0) {
            plVar11 = (long *)(*plVar10 + 0x58);
          }
          if (*plVar11 == lVar12) goto LAB_0285418c;
          plVar10 = plVar10 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar10);
      }
    }
    iVar6 = 0;
LAB_0285418c:
    FUN_02c2e33c(plVar9,iVar6,0);
  }
  else {
    plVar11 = plVar10 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar8 = plVar9[0x16];
    if (lVar8 != 0) {
      plVar7 = *(long **)(lVar8 + 0x270);
      if (plVar7 != *(long **)(lVar8 + 0x278)) {
        iVar6 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar7 != 0) {
            plVar2 = (long *)(*plVar7 + 0x58);
          }
          if (*plVar2 == lVar12) goto LAB_02853d98;
          plVar7 = plVar7 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar8 + 0x278) != plVar7);
      }
    }
    iVar6 = 0;
LAB_02853d98:
    FUN_02c2e33c(plVar9,iVar6,plVar10);
    do {
      iVar6 = (int)*plVar11 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  lVar8 = *(long *)(param_1 + 8);
  uVar5 = *(undefined8 *)(lVar8 + 0x1c0);
  lVar12 = *(long *)(lVar8 + 0x1c8);
  lVar13 = *(long *)(lVar8 + 0x1b8);
  *(undefined4 *)(lVar13 + 0x124) = 0;
  *(undefined2 *)(lVar13 + 0x128) = 0;
  *(undefined4 *)(lVar13 + 300) = 0;
  *(undefined4 *)(lVar13 + 0x134) = 0;
  FUN_02c33414(lVar13,uVar5);
  if (*(char *)(lVar12 + 0x7c) != '\0') {
    **(undefined2 **)(lVar12 + 0x58) = 0;
    *(undefined2 *)(lVar12 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar13,lVar12,uVar5,0,0);
  FUN_0283ce7c(lVar8,&local_80,*(undefined8 *)(lVar8 + 0x1c8),10);
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  FUN_00d648b4(*(undefined8 *)(param_1 + 8),&local_60);
  FUN_00256608();
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x490) = 1;
  return;
}


