/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01214f28; name: FUN_01214f28
 */


void FUN_01214f28(long param_1)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_50 = 0x4d3d3d18487a9199;
  pcStack_48 = "anime_reset_box";
  local_40 = 0xf;
  if (*(long *)(param_1 + 0x2c8) == 0) {
    lVar11 = 0;
  }
  else {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_50);
    lVar11 = *(long *)(param_1 + 0x2c8);
  }
  plVar10 = *(long **)(lVar11 + 0x148);
  lVar11 = *(long *)(lVar11 + 0x150);
  plVar13 = plVar10;
  if ((lVar11 != 0) && (*plVar10 != -0x58a4d12c18eee144)) {
    lVar12 = 0;
    do {
      if (lVar11 * 0x30 + -0x30 == lVar12) goto LAB_01215008;
      lVar2 = lVar12 + 0x30;
      lVar7 = lVar12 + 0x30;
      lVar12 = lVar2;
    } while (*(long *)((long)plVar10 + lVar7) != -0x58a4d12c18eee144);
    plVar13 = (long *)((long)plVar10 + lVar2);
  }
  if ((plVar13 != plVar10 + lVar11 * 6) && (lVar12 = plVar13[4], lVar12 != 0)) {
    *(undefined8 *)(lVar12 + 0x30) = 0;
    *(undefined4 *)(lVar12 + 0x38) = 0;
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 0x10;
    plVar10 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar11 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  }
LAB_01215008:
  plVar13 = plVar10;
  if ((lVar11 != 0) && (*plVar10 != -0x771ffff17aef661b)) {
    lVar12 = lVar11 * 0x30;
    plVar8 = plVar10;
    do {
      lVar12 = lVar12 + -0x30;
      if (lVar12 == 0) goto LAB_01215090;
      plVar13 = plVar8 + 6;
      plVar1 = plVar8 + 6;
      plVar8 = plVar13;
    } while (*plVar1 != -0x771ffff17aef661b);
  }
  if ((plVar13 != plVar10 + lVar11 * 6) && (lVar11 = plVar13[4], lVar11 != 0)) {
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined4 *)(lVar11 + 0x38) = 0;
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 0x10;
  }
LAB_01215090:
  *(undefined4 *)(param_1 + 0x167c) = 0;
  FUN_00d4ecc4(param_1);
  plVar13 = *(long **)(param_1 + 0x638);
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_012152a0;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar9;
    }
    piVar3 = (int *)(lVar11 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar12 = plVar13[0xb];
    piVar3 = (int *)(lVar12 + 0xc);
    lVar11 = plVar13[0x16];
    do {
      iVar4 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
    if ((int)lVar11 != 0) {
      FUN_00d51790(param_1,0,0xffffffff,0xffffffff);
    }
  }
  FUN_00d4f240(param_1,0);
  plVar13 = *(long **)(param_1 + 0x698);
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_012152a0;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar9;
    }
    piVar3 = (int *)(lVar11 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar12 = plVar13[0xb];
    piVar3 = (int *)(lVar12 + 0xc);
    lVar11 = plVar13[0x16];
    do {
      iVar4 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
    if ((int)lVar11 != 0) {
      FUN_00d51790(param_1,1,0xffffffff,0xffffffff);
    }
  }
  plVar13 = *(long **)(param_1 + 0x638);
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_012152a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar9;
    }
    piVar3 = (int *)(lVar11 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar12 = plVar13[0xb];
    piVar3 = (int *)(lVar12 + 0xc);
    lVar11 = plVar13[0x16];
    do {
      iVar4 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
    if ((int)lVar11 != 0) {
      FUN_00d52f90(param_1,0,0,0,1);
    }
  }
  *(undefined1 *)(param_1 + 0x6de) = 0;
  FUN_012152b8(param_1,1);
  FUN_01215340(param_1);
  *(undefined4 *)(param_1 + 0x1680) = 0;
  return;
}


