/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e96cbc; name: FUN_02e96cbc
 */


void FUN_02e96cbc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  long lVar5;
  
  FUN_02e8ec28(param_2);
  *(undefined8 *)(param_2 + 0x40) = param_3;
  *(undefined8 *)(param_2 + 0x48) = param_4;
  *(undefined1 *)(param_2 + 0x30) = 1;
  lVar5 = DAT_0440a128;
  uVar4 = FUN_02e7d4f8();
  lVar5 = FUN_02e7de5c(lVar5,0x1a,uVar4);
  *(long *)(lVar5 + 4) = param_2;
  piVar1 = (int *)(DAT_0440a128 + 0x9c);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_02e7dd6c(DAT_0440a128,0);
  return;
}


