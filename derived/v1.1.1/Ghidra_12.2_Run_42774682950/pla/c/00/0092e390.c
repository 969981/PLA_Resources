/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092e390; name: FUN_0092e390
 */


void FUN_0092e390(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  
  FUN_00926734();
  *param_1 = &PTR_LAB_041b8110;
  param_1[0xf] = 0;
  param_1[9] = &PTR_LAB_041b8158;
  param_1[10] = &PTR_LAB_041b81a0;
  plVar8 = param_1 + 0xe;
  *plVar8 = 0;
  local_30 = param_1[1];
  FUN_0092e4a4(&local_38,local_30,&local_30);
  plVar6 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  param_1[0xf] = CONCAT44(uStack_34,local_38);
  *(undefined1 *)(CONCAT44(uStack_34,local_38) + 0x120) = 1;
  local_38 = 0x7d1;
  lVar7 = FUN_008af3e4(auStack_28,local_30,&local_38);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar6 = (long *)*plVar8;
  *plVar8 = 0;
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  *plVar8 = lVar7;
  return;
}


