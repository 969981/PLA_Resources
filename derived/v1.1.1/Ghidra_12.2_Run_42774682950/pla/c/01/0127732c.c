/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0127732c; name: FUN_0127732c
 */


void FUN_0127732c(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long local_38;
  long *local_30;
  char *pcStack_28;
  
  pcStack_28 = "View_Top";
  local_38 = param_2[0x15];
  local_30 = param_2;
  FUN_0127742c(param_1,param_2[1],&local_30,&pcStack_28,&local_38);
  local_30 = (long *)*param_1;
  local_30[0x31] = (long)local_30;
  local_30[0x32] = local_30[1];
  if (local_30 != (long *)0x0) {
    lVar6 = local_30[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_012774a4(param_2 + 0xe,&local_30);
  if (local_30 != (long *)0x0) {
    lVar6 = local_30[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_30 + 0x20))();
    }
  }
  *(undefined1 *)(param_2 + 0x18) = 0;
  return;
}


