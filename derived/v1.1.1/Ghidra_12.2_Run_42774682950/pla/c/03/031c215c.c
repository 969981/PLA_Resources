/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c215c; name: FUN_031c215c
 */


void FUN_031c215c(long param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  
  pcVar1 = (char *)(param_1 + 0x20);
  if ((param_2 & 1) != 0) {
    *pcVar1 = '\x03';
    return;
  }
  do {
    if (*pcVar1 != '\0') {
      ClearExclusiveLocal();
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x03';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


