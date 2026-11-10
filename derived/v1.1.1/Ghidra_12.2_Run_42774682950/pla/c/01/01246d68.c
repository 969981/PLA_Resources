/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01246d68; name: FUN_01246d68
 */


void FUN_01246d68(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_50 [3];
  long *local_38;
  
  plVar6 = *(long **)(*param_1 + 0x1c0);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(undefined1 **)(param_2 + 0x28) == &DAT_cbf29ce484222645) {
    local_50[0] = 0xf24947ef960b4bbf;
    FUN_02c2e7d0(param_1[1],local_50,plVar6);
    lVar7 = *param_1;
    FUN_02a4754c(local_50,&DAT_041fdb78);
    FUN_0283d080(lVar7,local_50,10);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    lVar7 = *param_1;
    FUN_02a4754c(local_50,&DAT_041fdb90);
    uVar5 = 0;
  }
  else {
    FUN_02c2e7d0(param_1[1],param_2 + 0x28,plVar6);
    lVar7 = *param_1;
    FUN_02a4754c(local_50,&DAT_041fdb78);
    FUN_0283d080(lVar7,local_50,10);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    FUN_02c2e7d0(param_1[1],param_2 + 0x38,plVar6);
    lVar7 = *param_1;
    FUN_02a4754c(local_50,&DAT_041fdb90);
    FUN_0283d080(lVar7,local_50,10);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    lVar7 = *param_1;
    FUN_02a4754c(local_50,&DAT_041fdb90);
    uVar5 = 1;
  }
  FUN_0283b11c(lVar7,local_50,uVar5);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return;
}


