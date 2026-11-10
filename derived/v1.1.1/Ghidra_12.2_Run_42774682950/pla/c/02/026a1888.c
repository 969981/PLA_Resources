/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026a1888; name: FUN_026a1888
 */


void FUN_026a1888(long param_1,byte param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *local_18;
  
  *(byte *)(param_1 + 0xc75) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    FUN_01a5bd74(param_1,&DAT_03a7dcb0,0);
    if (*(long *)(param_1 + 0xbf0) == 0) {
      return;
    }
    FUN_009cf990(&local_18);
    if (local_18 == (long *)0x0) {
      return;
    }
    FUN_01a5bd74(local_18,&DAT_03a7dcb0,0);
    if (local_18 == (long *)0x0) {
      return;
    }
    lVar5 = local_18[0xb];
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
  else {
    if (*(char *)(param_1 + 0xc74) == '\0') {
      return;
    }
    FUN_01a5bd74(param_1,&DAT_03a7dcb0,1);
    if (*(long *)(param_1 + 0xbf0) == 0) {
      return;
    }
    FUN_009cf990(&local_18);
    if (local_18 == (long *)0x0) {
      return;
    }
    FUN_01a5bd74(local_18,&DAT_03a7dcb0,1);
    if (local_18 == (long *)0x0) {
      return;
    }
    lVar5 = local_18[0xb];
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
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


