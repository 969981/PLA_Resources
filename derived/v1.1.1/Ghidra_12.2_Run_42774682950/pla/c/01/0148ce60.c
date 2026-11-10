/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148ce60; name: FUN_0148ce60
 */


void FUN_0148ce60(long param_1,undefined8 param_2,long *param_3,long *param_4,undefined4 *param_5,
                 undefined4 param_6,undefined4 param_7)

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
  long lVar11;
  long *plVar12;
  
  lVar6 = *param_3;
  plVar12 = *(long **)(*(long *)(param_1 + 0x148) + 0x1c0);
  if (plVar12 == (long *)0x0) {
    lVar10 = *(long *)(lVar6 + 0xb0);
    if (lVar10 != 0) {
      plVar12 = *(long **)(lVar10 + 0x270);
      if (plVar12 != *(long **)(lVar10 + 0x278)) {
        iVar8 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar12 != 0) {
            plVar3 = (long *)(*plVar12 + 0x58);
          }
          if (*plVar3 == *param_4) goto LAB_0148d0b8;
          plVar12 = plVar12 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar12);
      }
    }
    iVar8 = 0;
LAB_0148d0b8:
    FUN_02c2e33c(lVar6,iVar8,0);
  }
  else {
    plVar3 = plVar12 + 10;
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
          if (*plVar2 == *param_4) goto LAB_0148cf08;
          plVar9 = plVar9 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar9);
      }
    }
    iVar8 = 0;
LAB_0148cf08:
    FUN_02c2e33c(lVar6,iVar8,plVar12);
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
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  plVar12 = *(long **)(*(long *)(param_1 + 0x148) + 0x1b8);
  if (plVar12 == (long *)0x0) {
    FUN_02c395d0(0,param_6,param_7,*param_5,param_5[1],param_5[2]);
  }
  else {
    lVar6 = plVar12[0xb];
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
    FUN_02c395d0(plVar12,param_6,param_7,*param_5,param_5[1],param_5[2]);
    lVar6 = plVar12[0xb];
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
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  lVar10 = *(long *)(param_1 + 0x148);
  uVar7 = *(undefined8 *)(lVar10 + 0x1c0);
  lVar6 = *(long *)(lVar10 + 0x1c8);
  lVar11 = *(long *)(lVar10 + 0x1b8);
  *(undefined4 *)(lVar11 + 0x124) = 0;
  *(undefined2 *)(lVar11 + 0x128) = 0;
  *(undefined4 *)(lVar11 + 300) = 0;
  *(undefined4 *)(lVar11 + 0x134) = 0;
  FUN_02c33414(lVar11,uVar7);
  if (*(char *)(lVar6 + 0x7c) != '\0') {
    **(undefined2 **)(lVar6 + 0x58) = 0;
    *(undefined2 *)(lVar6 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar11,lVar6,uVar7,0,0);
  FUN_0283ce7c(lVar10,param_2,*(undefined8 *)(lVar10 + 0x1c8),10);
  return;
}


