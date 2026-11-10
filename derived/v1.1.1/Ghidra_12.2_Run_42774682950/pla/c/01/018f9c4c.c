/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018f9c4c; name: FUN_018f9c4c
 */


void FUN_018f9c4c(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_18;
  
  if ((*(long *)(param_2 + 0xd0) == 0) || (FUN_01901be0(&local_18), local_18 == (long *)0x0)) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = local_18[0x6f];
    param_1[5] = local_18[0x6d];
    param_1[7] = lVar5;
    lVar5 = local_18[0x6b];
    param_1[1] = local_18[0x69];
    param_1[3] = lVar5;
    lVar5 = local_18[0x68];
    param_1[2] = local_18[0x6a];
    *param_1 = lVar5;
    lVar5 = local_18[0x6c];
    param_1[6] = local_18[0x6e];
    param_1[4] = lVar5;
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


