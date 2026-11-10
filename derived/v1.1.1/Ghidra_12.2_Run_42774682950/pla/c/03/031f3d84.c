/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f3d84; name: FUN_031f3d84
 */


/* WARNING: Removing unreachable block (ram,0x031f3dc8) */
/* WARNING: Removing unreachable block (ram,0x031f3df8) */

void FUN_031f3d84(long param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char cVar5;
  
  cVar5 = *(char *)(param_1 + 0x5c);
  pcVar1 = (char *)(param_1 + 0x5c);
  do {
    while( true ) {
      while (cVar5 != '\x01') {
        if (cVar5 != '\0') {
          return;
        }
        cVar5 = *pcVar1;
        if (cVar5 == '\0') {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar3) {
            *pcVar1 = '\x02';
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      }
      cVar5 = *pcVar1;
      if (cVar5 == '\x01') break;
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x03';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_031c215c(*(undefined8 *)(param_1 + 0x60),1);
  lVar4 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (lVar4 == 0) {
    return;
  }
  FUN_032d647c();
  return;
}


