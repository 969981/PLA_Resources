/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e26cc; name: FUN_010e26cc
 */


int FUN_010e26cc(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  long *local_48;
  
  if ((*(long *)(param_1 + 0x54668) == 0) || (iVar4 = FUN_010e630c(), iVar4 == -0x1d)) {
    return 0;
  }
  uVar7 = 0;
  iVar4 = 0;
  do {
    plVar6 = (long *)*param_2;
    local_48 = plVar6;
    if (plVar6 == (long *)0x0) {
      iVar5 = FUN_010e27d4(param_1,uVar7,&local_48,param_3 & 1);
      iVar4 = iVar5 + iVar4;
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
      iVar5 = FUN_010e27d4(param_1,uVar7,&local_48,param_3 & 1);
      iVar4 = iVar5 + iVar4;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    uVar7 = uVar7 + 1;
    iVar5 = FUN_010e630c();
  } while (uVar7 < iVar5 + 0x1dU);
  return iVar4;
}


