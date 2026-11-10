/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141462c; name: FUN_0141462c
 */


void FUN_0141462c(long *param_1,undefined8 param_2,long *param_3,long *param_4,undefined4 param_5)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  lVar6 = *param_3;
  plVar11 = *(long **)(*param_1 + 0x1c0);
  if (plVar11 == (long *)0x0) {
    lVar10 = *(long *)(lVar6 + 0xb0);
    if (lVar10 != 0) {
      plVar11 = *(long **)(lVar10 + 0x270);
      if (plVar11 != *(long **)(lVar10 + 0x278)) {
        iVar8 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar11 != 0) {
            plVar3 = (long *)(*plVar11 + 0x58);
          }
          if (*plVar3 == *param_4) goto LAB_0141487c;
          plVar11 = plVar11 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar11);
      }
    }
    iVar8 = 0;
LAB_0141487c:
    FUN_02c2e33c(lVar6,iVar8,0);
  }
  else {
    plVar3 = plVar11 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar10 = *(long *)(lVar6 + 0xb0);
    if (lVar10 != 0) {
      plVar9 = *(long **)(lVar10 + 0x270);
      if (plVar9 != *(long **)(lVar10 + 0x278)) {
        iVar8 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar2 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar2 == *param_4) goto LAB_014146c8;
          plVar9 = plVar9 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar9);
      }
    }
    iVar8 = 0;
LAB_014146c8:
    FUN_02c2e33c(lVar6,iVar8,plVar11);
    do {
      iVar8 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  plVar11 = *(long **)(*param_1 + 0x1b8);
  if (plVar11 == (long *)0x0) {
    FUN_02c395d0(0,0,param_5,5,1,1);
  }
  else {
    lVar6 = plVar11[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_02c395d0(plVar11,0,param_5,5,1,1);
    lVar6 = plVar11[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  lVar10 = *param_1;
  uVar7 = *(undefined8 *)(lVar10 + 0x1c0);
  lVar6 = *(long *)(lVar10 + 0x1c8);
  lVar12 = *(long *)(lVar10 + 0x1b8);
  *(undefined4 *)(lVar12 + 0x124) = 0;
  *(undefined2 *)(lVar12 + 0x128) = 0;
  *(undefined4 *)(lVar12 + 300) = 0;
  *(undefined4 *)(lVar12 + 0x134) = 0;
  FUN_02c33414(lVar12,uVar7);
  if (*(char *)(lVar6 + 0x7c) != '\0') {
    **(undefined2 **)(lVar6 + 0x58) = 0;
    *(undefined2 *)(lVar6 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar12,lVar6,uVar7,0,0);
  FUN_0283ce7c(lVar10,param_2,*(undefined8 *)(lVar10 + 0x1c8),10);
  return;
}


