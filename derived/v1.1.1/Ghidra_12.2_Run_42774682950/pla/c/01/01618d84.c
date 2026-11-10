/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01618d84; name: FUN_01618d84
 */


void FUN_01618d84(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = FUN_0161add4(param_2 + 0x58);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x18);
    *param_1 = lVar5;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x50);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar5 = *(long *)(lVar4 + 0x20);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar4 + 0x28);
    param_1[1] = lVar5;
  }
  return;
}


