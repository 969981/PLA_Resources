/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126be58; name: FUN_0126be58
 */


void FUN_0126be58(long *param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_68 [24];
  long *local_50;
  undefined8 local_48;
  
  if (*param_1 != 0) {
    lVar8 = param_1[1];
    plVar7 = *(long **)(*param_1 + 0x1c0);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_48 = FUN_0126bff0(param_2,param_1 + 2);
    FUN_02c2e7d0(lVar8,&local_48,plVar7);
    lVar9 = *param_1;
    FUN_02a4754c(auStack_68,&DAT_04200020);
    FUN_0283d080(lVar9,auStack_68,10);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    local_48 = FUN_0126bff0(param_2,param_3);
    FUN_02c2e7d0(lVar8,&local_48,plVar7);
    lVar8 = *param_1;
    FUN_02a4754c(auStack_68,&DAT_04200038);
    FUN_0283d080(lVar8,auStack_68,10);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    uVar5 = FUN_0126c130(param_1,param_2,param_3);
    lVar8 = *param_1;
    if ((uVar5 & 1) == 0) {
      puVar6 = &DAT_04200068;
    }
    else {
      puVar6 = &DAT_04200050;
    }
    FUN_02a4754c(auStack_68,puVar6);
    FUN_0283b1e8(lVar8,auStack_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return;
}


