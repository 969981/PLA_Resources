/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b21ce4; name: FUN_02b21ce4
 */


void FUN_02b21ce4(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long local_28;
  undefined1 auStack_18 [8];
  
  local_28 = param_2;
  lVar4 = FUN_02b24c5c(auStack_18,*(undefined8 *)(param_2 + 8),&local_28,param_2 + 0x58);
  *param_1 = lVar4;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


