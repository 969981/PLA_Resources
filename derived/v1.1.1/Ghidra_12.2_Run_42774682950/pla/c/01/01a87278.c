/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a87278; name: FUN_01a87278
 */


void FUN_01a87278(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *local_28;
  long *local_18;
  
  FUN_01839c8c(&local_28,param_1 + 0xad0);
  if (local_28 != (long *)0x0) {
    FUN_01839c8c(&local_18,param_1 + 0xad0);
    if (local_18 != (long *)0x0) {
      lVar6 = local_18[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      iVar3 = *(int *)((long)local_18 + 0x7c);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))();
      }
      if (iVar3 == 2) {
        lVar6 = local_28[0x1a];
        *(undefined8 *)(lVar6 + 0xc0) = 0;
        *(undefined8 *)(lVar6 + 200) = 0;
      }
    }
    if (local_28 != (long *)0x0) {
      lVar6 = local_28[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}


