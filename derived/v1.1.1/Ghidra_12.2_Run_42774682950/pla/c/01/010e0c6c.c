/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e0c6c; name: FUN_010e0c6c
 */


undefined8
FUN_010e0c6c(undefined8 param_1,long *param_2,long *param_3,undefined4 param_4,int *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long *local_60;
  long *local_58;
  
  iVar7 = 0;
  while( true ) {
    local_58 = (long *)*param_2;
    if (local_58 != (long *)0x0) {
      plVar6 = local_58 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = (int)*plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar6 = (long *)*param_3;
    local_60 = plVar6;
    if (plVar6 == (long *)0x0) {
      uVar5 = FUN_010e0f6c(param_1,&local_58,&local_60,param_4,iVar7);
      uVar5 = uVar5 & 0xffffffff;
    }
    else {
      plVar1 = plVar6 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar5 = FUN_010e0f6c(param_1,&local_58,&local_60,param_4,iVar7);
      uVar5 = uVar5 & 0xffffffff;
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
    }
    if (local_58 != (long *)0x0) {
      plVar6 = local_58 + 10;
      do {
        iVar4 = (int)*plVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    if ((uVar5 & 1) != 0) break;
    iVar7 = iVar7 + 1;
    if (iVar7 == 0x1e) {
      return 0;
    }
  }
  *param_5 = iVar7;
  return 1;
}


