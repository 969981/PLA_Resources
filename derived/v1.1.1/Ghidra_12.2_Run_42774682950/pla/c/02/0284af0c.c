/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284af0c; name: FUN_0284af0c
 */


void FUN_0284af0c(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  
  local_30 = param_2;
  FUN_02835b8c();
  *param_1 = &PTR_LAB_0426fe68;
  param_1[0x5d] = 0;
  param_1[0xd] = &PTR_LAB_0426ffb0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[9] = &PTR_LAB_0426ff40;
  param_1[10] = &PTR_LAB_0426ff88;
  lVar6 = FUN_02849fc8(auStack_28,param_2,&local_30);
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)param_1[0x5d];
  param_1[0x5d] = 0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_04270148;
  param_1[0x5d] = lVar6;
  param_1[9] = &PTR_LAB_04270220;
  param_1[10] = &PTR_LAB_04270268;
  param_1[0xd] = &PTR_LAB_04270290;
  return;
}


