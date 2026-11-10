/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011fb3b0; name: FUN_011fb3b0
 */


void FUN_011fb3b0(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_2 + 0x180);
  *param_1 = lVar5;
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
  lVar5 = *(long *)(param_2 + 0x188);
  param_1[1] = lVar5;
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
  param_1[2] = *(long *)(param_2 + 400);
  lVar6 = *(long *)(param_2 + 0x1a8);
  lVar5 = *(long *)(param_2 + 0x198);
  lVar2 = *(long *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x1b0);
  param_1[4] = lVar2;
  param_1[5] = lVar6;
  param_1[3] = lVar5;
  return;
}


