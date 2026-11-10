/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031770fc; name: FUN_031770fc
 */


void FUN_031770fc(long param_1,int *param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int local_60 [2];
  int local_58 [2];
  
  lVar7 = (long)*param_2;
  lVar8 = *(long *)(param_1 + 0x38);
  plVar9 = (long *)(lVar8 + lVar7 * 0xf0);
  lVar6 = plVar9[3];
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar4 = FUN_0317c11c();
  }
  FUN_001d530c(uVar4,(int)lVar6);
  *(undefined4 *)(plVar9 + 3) = 0xffffffff;
  local_60[0] = *param_2;
  FUN_031772ac(param_1,local_60);
  plVar5 = (long *)*plVar9;
  *plVar9 = 0;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar9 = plVar5 + 2;
    do {
      lVar6 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  lVar6 = lVar8 + lVar7 * 0xf0;
  *(byte *)(lVar6 + 0xe0) = *(byte *)(lVar6 + 0xe0) | 1;
  if (*(long *)(lVar6 + 0x10) == 0) {
    if ((param_3 >> 1 & 1) != 0) {
      return;
    }
    lVar8 = lVar8 + lVar7 * 0xf0;
  }
  else {
    if ((param_3 & 1) == 0) {
      return;
    }
    iVar1 = *param_2;
    lVar8 = (long)iVar1;
    FUN_03184c20(*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar8 * 0xf0 + 0x10),param_1);
    local_58[0] = iVar1;
    FUN_031778ac(param_1,local_58);
    lVar6 = *(long *)(param_1 + 0x38) + lVar8 * 0xf0;
    plVar9 = *(long **)(lVar6 + 0x10);
    *(undefined8 *)(lVar6 + 0x10) = 0;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar5 = plVar9 + 2;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
    lVar6 = *(long *)(param_1 + 0x38) + lVar8 * 0xf0;
    *(byte *)(lVar6 + 0xe0) = *(byte *)(lVar6 + 0xe0) | 4;
    if ((param_3 >> 1 & 1) != 0) {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x38) + lVar8 * 0xf0;
  }
  *(undefined4 *)(lVar8 + 0x1c) = 0xffffffff;
  return;
}


