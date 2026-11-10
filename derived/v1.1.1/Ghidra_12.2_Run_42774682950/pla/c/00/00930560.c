/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00930560; name: FUN_00930560
 */


void FUN_00930560(long param_1,long *param_2,undefined4 param_3,short param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  short sVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *local_38;
  
  sVar6 = FUN_0092fe7c(param_1,param_3);
  lVar7 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),param_3);
  FUN_010c6004(*(undefined8 *)(param_1 + 0x78),0,*(undefined8 *)(*(long *)(lVar7 + 0x70) + 0x60));
  plVar9 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
  if (plVar9 == (long *)0x0) {
    FUN_009306bc(&local_38,0);
  }
  else {
    plVar1 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_009306bc(&local_38,plVar9);
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
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  FUN_02c2e33c(local_38,sVar6 + param_4 * 4,*(undefined8 *)(param_1 + 0x70));
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  lVar7 = *(long *)(param_1 + 0x78);
  lVar8 = *param_2;
  *(undefined4 *)(lVar7 + 0x124) = 0;
  *(undefined2 *)(lVar7 + 0x128) = 0;
  *(undefined4 *)(lVar7 + 300) = 0;
  *(undefined4 *)(lVar7 + 0x134) = 0;
  FUN_02c33414(lVar7,uVar2);
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    **(undefined2 **)(lVar8 + 0x58) = 0;
    *(undefined2 *)(lVar8 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar7,lVar8,uVar2,0,0);
  if (local_38 != (long *)0x0) {
    plVar9 = local_38 + 10;
    do {
      iVar5 = (int)*plVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return;
}


