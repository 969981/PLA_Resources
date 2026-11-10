/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f3d28; name: FUN_031f3d28
 */


void FUN_031f3d28(long param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  pcVar1 = (char *)(param_1 + 0x5c);
  do {
    cVar2 = *pcVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar4) {
      *pcVar1 = '\x04';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (cVar2 == '\x01') {
    FUN_031c215c(*(undefined8 *)(param_1 + 0x60),1);
    lVar5 = *(long *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (lVar5 != 0) {
      FUN_032d647c();
      return;
    }
  }
  return;
}


