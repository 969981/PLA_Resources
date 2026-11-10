/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbe804; name: FUN_02bbe804
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_02bbe804(long param_1,int param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  int extraout_s0;
  int iVar8;
  undefined4 extraout_var;
  undefined4 uVar10;
  undefined8 extraout_var_00;
  undefined8 uVar11;
  undefined1 auVar9 [16];
  
  plVar5 = *(long **)(param_1 + 0x80);
  lVar7 = _DAT_00000058;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar7 = plVar5[0xb];
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  if (lVar7 != 0) {
    piVar6 = *(int **)(lVar7 + 0x50);
    piVar2 = *(int **)(lVar7 + 0x58);
    if (piVar6 == piVar2) {
LAB_02bbe88c:
      if (piVar6 != piVar2) {
        iVar8 = piVar6[1];
        uVar10 = 0;
        uVar11 = 0;
        goto LAB_02bbe8d4;
      }
    }
    else {
      do {
        if (*piVar6 == param_2) goto LAB_02bbe88c;
        piVar6 = piVar6 + 5;
      } while (piVar2 != piVar6);
    }
  }
  if (*(long *)(param_1 + 0x148) == 0) {
    iVar8 = 0;
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    FUN_02bbe804(*(long *)(param_1 + 0x148),param_2);
    iVar8 = extraout_s0;
    uVar10 = extraout_var;
    uVar11 = extraout_var_00;
  }
LAB_02bbe8d4:
  auVar9._4_4_ = uVar10;
  auVar9._0_4_ = iVar8;
  auVar9._8_8_ = uVar11;
  return auVar9;
}


