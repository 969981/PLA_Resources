/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8cc28; name: FUN_01a8cc28
 */


void FUN_01a8cc28(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_18;
  
  if (*(long *)(param_1 + 0x628) == 0) {
    local_18 = (long *)0x0;
  }
  else {
    FUN_009b8474(&local_18,*(long *)(param_1 + 0x628));
    if (local_18 != (long *)0x0) {
      FUN_018281e0(local_18);
      if (local_18 != (long *)0x0) {
        lVar5 = local_18[0xb];
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
          (**(code **)(*local_18 + 0x20))();
        }
      }
      goto LAB_01a8cc50;
    }
  }
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  *(undefined4 *)(param_1 + 0x8e8) = 0;
LAB_01a8cc50:
  FUN_009c69bc(&local_18,param_1);
  lVar5 = param_2[1];
  local_18[0x18] = *param_2;
  local_18[0x19] = lVar5;
  *(undefined1 *)(local_18 + 0x1c) = 1;
  if (local_18 != (long *)0x0) {
    lVar5 = local_18[0xb];
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
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return;
}


