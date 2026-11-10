/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00962898; name: FUN_00962898
 */


void FUN_00962898(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  long *local_18;
  
  FUN_00931034(&local_18,*(undefined8 *)(param_1 + 0x58));
  if (*(char *)(local_18[0xd1] + 0x6fb) != '\0') {
    local_40 = DAT_041fa060;
    puStack_38 = PTR_s_anime_close_041fa068;
    local_30 = DAT_041fa070;
    local_28 = (long *)0x0;
    FUN_00d2df7c(local_18[0xd1] + 0x180,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
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
  FUN_00931034(&local_18,*(undefined8 *)(param_1 + 0x58));
  if (*(char *)(local_18[0xd2] + 0x722) != '\0') {
    local_40 = DAT_041f9a00;
    puStack_38 = PTR_s_anime_close_041f9a08;
    local_30 = DAT_041f9a10;
    local_28 = (long *)0x0;
    FUN_00d2df7c(local_18[0xd2] + 0x180,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
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


