/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01190114; name: FUN_01190114
 */


void FUN_01190114(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *local_70 [4];
  long *local_50;
  undefined8 local_38;
  
  local_38 = param_4;
  iVar5 = FUN_02c5be48(param_3);
  uVar6 = FUN_02c5be50(param_3);
  uVar6 = uVar6 & 0xffff;
  if (((((((int)DAT_043bd730 == iVar5) &&
         ((lVar9 = 0, DAT_043bd730._4_4_ == 0xffffffff || (DAT_043bd730._4_4_ == uVar6)))) ||
        (((int)DAT_043bd778 == iVar5 &&
         ((lVar9 = 1, DAT_043bd778._4_4_ == 0xffffffff || (DAT_043bd778._4_4_ == uVar6)))))) ||
       (((int)DAT_043bd7c0 == iVar5 &&
        ((lVar9 = 2, DAT_043bd7c0._4_4_ == 0xffffffff || (DAT_043bd7c0._4_4_ == uVar6)))))) ||
      ((((int)DAT_043bd808 == iVar5 &&
        ((lVar9 = 3, DAT_043bd808._4_4_ == 0xffffffff || (DAT_043bd808._4_4_ == uVar6)))) ||
       (((((int)DAT_043bd850 == iVar5 &&
          ((lVar9 = 4, DAT_043bd850._4_4_ == 0xffffffff || (DAT_043bd850._4_4_ == uVar6)))) ||
         (((int)DAT_043bd898 == iVar5 &&
          ((lVar9 = 5, DAT_043bd898._4_4_ == 0xffffffff || (DAT_043bd898._4_4_ == uVar6)))))) ||
        (((int)DAT_043bd8e0 == iVar5 &&
         ((lVar9 = 6, DAT_043bd8e0._4_4_ == 0xffffffff || (DAT_043bd8e0._4_4_ == uVar6)))))))))) ||
     ((((int)DAT_043bd928 == iVar5 &&
       ((lVar9 = 7, DAT_043bd928._4_4_ == 0xffffffff || (DAT_043bd928._4_4_ == uVar6)))) ||
      (((((int)DAT_043bd970 == iVar5 &&
         ((lVar9 = 8, DAT_043bd970._4_4_ == 0xffffffff || (DAT_043bd970._4_4_ == uVar6)))) ||
        (((int)DAT_043bd9b8 == iVar5 &&
         ((lVar9 = 9, DAT_043bd9b8._4_4_ == 0xffffffff || (DAT_043bd9b8._4_4_ == uVar6)))))) ||
       (((int)DAT_043bda00 == iVar5 &&
        ((lVar9 = 10, DAT_043bda00._4_4_ == 0xffffffff || (DAT_043bda00._4_4_ == uVar6)))))))))) {
    lVar7 = FUN_011910e0(param_4,&local_38,&DAT_043bd6f0 + lVar9 * 9);
    if (lVar7 != 0) {
      piVar2 = (int *)(lVar7 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar8 = *(long **)(param_2 + 0x120);
    *(undefined8 *)(param_2 + 0x120) = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(long *)(param_2 + 0x120) = lVar7;
    FUN_00adcc04(local_70,&DAT_043bd710 + lVar9 * 9);
    FUN_02850d78(lVar7,local_70,local_38);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (local_70[0] != (long *)0x0) {
      (**(code **)(*local_70[0] + 0x20))();
    }
    lVar9 = *(long *)(param_2 + 0x120);
    *param_1 = lVar9;
    if (lVar9 != 0) {
      piVar2 = (int *)(lVar9 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    *param_1 = 0;
  }
  return;
}


