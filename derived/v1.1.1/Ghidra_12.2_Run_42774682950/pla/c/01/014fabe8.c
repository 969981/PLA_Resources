/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fabe8; name: FUN_014fabe8
 */


void FUN_014fabe8(long *param_1,long param_2,uint param_3,long *param_4)

{
  int *piVar1;
  uint uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  uVar2 = 0;
  if (param_3 < 2) {
    uVar2 = param_3;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(param_2 + 0x68) + 0xb0) + 0x18);
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = (long *)plVar10[0xd];
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar8 = plVar10[0xb];
  piVar1 = (int *)(lVar8 + 0xc);
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
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  param_2 = param_2 + (ulong)uVar2 * 8;
  lVar8 = plVar9[0x16];
  if (lVar8 != 0) {
    plVar10 = *(long **)(lVar8 + 0x270);
    if (plVar10 != *(long **)(lVar8 + 0x278)) {
      iVar7 = 0;
      do {
        plVar3 = (long *)PTR_DAT_04379c88;
        if (*plVar10 != 0) {
          plVar3 = (long *)(*plVar10 + 0x58);
        }
        if (*plVar3 == *param_4) goto LAB_014facf4;
        plVar10 = plVar10 + 1;
        iVar7 = iVar7 + 1;
      } while (*(long **)(lVar8 + 0x278) != plVar10);
    }
  }
  iVar7 = 0;
LAB_014facf4:
  FUN_02c2e33c(plVar9,iVar7,*(undefined8 *)(param_2 + 0x620));
  lVar8 = *(long *)(param_2 + 0x620);
  *param_1 = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar9 != (long *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x014fad68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))(plVar9);
      return;
    }
  }
  return;
}


