/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019bf0f4; name: FUN_019bf0f4
 */


void FUN_019bf0f4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_18;
  
  if (*(int *)(param_1 + 0x88) < 1) {
    return;
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
  if (*(long *)(param_1 + 0x68) == 0) {
    local_18 = (long *)0x0;
  }
  else {
    FUN_019bf828(&local_18,*(long *)(param_1 + 0x68));
    if ((local_18 != (long *)0x0) && (FUN_01f0aac0(local_18), local_18 != (long *)0x0)) {
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
        (**(code **)(*local_18 + 0x20))(local_18);
        iVar2 = *(int *)(param_1 + 0x88);
        goto joined_r0x019bf1ec;
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x88);
joined_r0x019bf1ec:
  if ((((iVar2 == 0) && (*(long *)(param_1 + 0x78) != 0)) &&
      (FUN_0192af0c(&local_18), local_18 != (long *)0x0)) &&
     (FUN_01f1a208(), local_18 != (long *)0x0)) {
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


