/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315e9c8; name: FUN_0315e9c8
 */


void FUN_0315e9c8(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  if (*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) {
    iVar6 = *param_2;
    piVar1 = (int *)(param_1 + 0x48);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    iVar6 = param_2[1];
    if (iVar6 < *(int *)(param_1 + 0x70)) {
      piVar1 = (int *)(param_1 + 0x70);
      iVar5 = *(int *)(param_1 + 0x70);
      do {
        iVar2 = *piVar1;
        if (iVar2 == iVar5) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = param_2[1];
        iVar5 = iVar2;
      } while (iVar6 < iVar2);
    }
  }
  return;
}


