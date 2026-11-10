/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a0768; name: FUN_010a0768
 */


void FUN_010a0768(undefined8 param_1,long *param_2,int param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long *local_48;
  
  iVar5 = param_3;
  if (param_3 - 2U < 3) {
    lVar6 = *param_2;
    uVar4 = FUN_02c6cf3c(*(undefined8 *)(lVar6 + 0x98));
    if ((((uVar4 & 1) != 0) ||
        ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0x98) + 0x10) + 4) >> 2 & 1) != 0)) &&
       (iVar5 = param_3 + 9, 2 < param_3 - 2U)) {
      iVar5 = param_3;
    }
  }
  param_2 = (long *)*param_2;
  local_48 = param_2;
  if (param_2 == (long *)0x0) {
    FUN_010a0870(param_1,&local_48,iVar5,param_4);
  }
  else {
    plVar1 = param_2 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_010a0870(param_1,&local_48,iVar5,param_4);
    if (param_2 != (long *)0x0) {
      plVar1 = param_2 + 10;
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
                    /* WARNING: Could not recover jumptable at 0x010a0854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x10))(param_2);
        return;
      }
    }
  }
  return;
}


