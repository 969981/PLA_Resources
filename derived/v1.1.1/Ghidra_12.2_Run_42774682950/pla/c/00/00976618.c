/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00976618; name: FUN_00976618
 */


void FUN_00976618(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_28;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    local_28 = (long *)0x0;
  }
  else {
    FUN_00931034(&local_28);
  }
  if (param_2 == 0) {
    FUN_011d86b0(local_28[0xd1] + 0x5b0);
  }
  if (local_28 != (long *)0x0) {
    lVar5 = local_28[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  FUN_00931034(&local_28,*(undefined8 *)(param_1 + 0x58));
  if (param_2 - 1U < 5) {
    lVar5 = local_28[0xd2];
    switch(param_2) {
    case 1:
      lVar5 = lVar5 + 0x5b0;
      break;
    case 2:
      lVar5 = lVar5 + 0x5f8;
      break;
    case 3:
      lVar5 = lVar5 + 0x640;
      break;
    case 4:
      lVar5 = lVar5 + 0x688;
      break;
    case 5:
      lVar5 = lVar5 + 0x6d0;
    }
    FUN_011d86b0(lVar5);
  }
  if (local_28 != (long *)0x0) {
    lVar5 = local_28[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


