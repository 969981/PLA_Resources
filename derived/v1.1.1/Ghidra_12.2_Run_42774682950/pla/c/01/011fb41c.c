/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011fb41c; name: FUN_011fb41c
 */


void FUN_011fb41c(undefined1 *param_1,long param_2)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  *param_1 = 0;
  if (*(char *)(param_2 + 0x1b8) != '\0') {
    lVar5 = *(long *)(param_2 + 0x1c0);
    *(long *)(param_1 + 8) = lVar5;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar2 = *(undefined1 *)(param_2 + 0x1d0);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x1c8);
    param_1[0x18] = uVar2;
    *param_1 = 1;
  }
  return;
}


