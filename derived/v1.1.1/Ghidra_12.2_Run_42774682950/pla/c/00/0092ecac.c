/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092ecac; name: FUN_0092ecac
 */


void FUN_0092ecac(long param_1,long *param_2,undefined8 param_3,char *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  long *local_38;
  
  plVar8 = *(long **)(param_1 + 0x70);
  uVar7 = 0x205;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x68) + 0x98) + 0x130) != *param_4) {
    uVar7 = 0x207;
  }
  if (plVar8 == (long *)0x0) {
    FUN_0092f04c(param_1,uVar7,0);
  }
  else {
    plVar1 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_0092f04c(param_1,uVar7,0);
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  plVar8 = *(long **)(param_1 + 0x70);
  local_38 = plVar8;
  if (plVar8 == (long *)0x0) {
    FUN_0092f418(param_1,&local_38,param_4);
  }
  else {
    plVar1 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_0092f418(param_1,&local_38,param_4);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  lVar3 = *(long *)(param_1 + 0x78);
  lVar9 = *param_2;
  *(undefined4 *)(lVar3 + 0x124) = 0;
  *(undefined2 *)(lVar3 + 0x128) = 0;
  *(undefined4 *)(lVar3 + 300) = 0;
  *(undefined4 *)(lVar3 + 0x134) = 0;
  FUN_02c33414(lVar3,uVar2);
  if (*(char *)(lVar9 + 0x7c) != '\0') {
    **(undefined2 **)(lVar9 + 0x58) = 0;
    *(undefined2 *)(lVar9 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar3,lVar9,uVar2,0,0);
  return;
}


