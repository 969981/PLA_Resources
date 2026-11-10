/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d279ec; name: FUN_00d279ec
 */


undefined8 FUN_00d279ec(long param_1,undefined8 param_2,char *param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *local_48;
  long *local_38;
  
  if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (7 < *(uint *)(param_1 + 0x590)) {
    return 0;
  }
  strncpy((char *)(param_1 + 0x10 + (ulong)*(uint *)(param_1 + 0x590) * 0xb0),param_3,0x7f);
  lVar5 = param_1 + 0x10 + (ulong)*(uint *)(param_1 + 0x590) * 0xb0;
  *(undefined1 *)(lVar5 + 0x7f) = 0;
  lVar5 = lVar5 + 0x80;
  if (param_4 == 0) {
    FUN_00d27bb4(&local_48,lVar5,param_2);
    if (local_48 == (long *)0x0) goto LAB_00d27a84;
    lVar5 = local_48[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      iVar4 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
      local_38 = local_48;
    } while (cVar2 != '\0');
  }
  else {
    FUN_00d27b14(&local_38,lVar5,param_2,*(undefined8 *)(param_1 + 8),param_4);
    if (local_38 == (long *)0x0) goto LAB_00d27a84;
    lVar5 = local_38[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      iVar4 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar4 == 0) {
    *(undefined8 *)(lVar5 + 0x18) = 0;
    (**(code **)(*local_38 + 0x20))();
  }
LAB_00d27a84:
  *(int *)(param_1 + 0x590) = *(int *)(param_1 + 0x590) + 1;
  return 1;
}


