/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d78c4; name: FUN_017d78c4
 */


bool FUN_017d78c4(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long *local_20;
  long *local_18;
  
  if (*(char *)(param_1 + 0xe0) != '\0') {
    return false;
  }
  if (*(long *)(param_1 + 0xb0) == 0) {
    local_18 = (long *)0x0;
    lVar6 = *param_2;
  }
  else {
    FUN_017dca7c(&local_18);
    lVar6 = *param_2;
  }
  if (lVar6 == 0) {
    bVar5 = local_18 == (long *)0x0;
    local_20 = (long *)0x0;
  }
  else {
    FUN_017dca7c(&local_20);
    bVar5 = local_18 == local_20;
    if (local_20 != (long *)0x0) {
      lVar6 = local_20[0xb];
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
        (**(code **)(*local_20 + 0x20))(local_20);
      }
    }
  }
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
  return bVar5;
}


