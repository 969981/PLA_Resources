/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a17c4; name: FUN_028a17c4
 */


void FUN_028a17c4(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *local_30;
  undefined1 auStack_28 [8];
  
  lVar5 = param_2 + 0x1a8;
  if (*(char *)(param_2 + 0x304) != '\0') {
    lVar5 = param_2 + 0x1f0;
  }
  FUN_00956dac(&local_30,lVar5);
  if (local_30 != (long *)0x0) {
    lVar5 = FUN_00a3e9dc(local_30 + 0x1e,auStack_28);
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
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x1f0);
      *param_1 = lVar5;
      if (lVar5 == 0) {
        return;
      }
      piVar1 = (int *)(lVar5 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      return;
    }
  }
  *param_1 = 0;
  return;
}


