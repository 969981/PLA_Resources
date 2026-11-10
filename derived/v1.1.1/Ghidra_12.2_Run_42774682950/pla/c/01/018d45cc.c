/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d45cc; name: FUN_018d45cc
 */


byte FUN_018d45cc(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  long *local_18;
  
  bVar5 = 0;
  if (*(char *)(param_1 + 0x689) != '\0') {
    if (*(long *)(param_1 + 0x5a0) == 0) {
      bVar5 = 0;
    }
    else {
      FUN_018e3920(&local_18);
      if (local_18 == (long *)0x0) {
        bVar5 = 0;
      }
      else {
        bVar5 = FUN_01c35a88();
        if (local_18 != (long *)0x0) {
          lVar6 = local_18[0xb];
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
            (**(code **)(*local_18 + 0x20))();
          }
        }
      }
    }
  }
  return bVar5 & 1;
}


