/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec5bc0; name: FUN_01ec5bc0
 */


void FUN_01ec5bc0(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_18;
  
  if (*(long *)(param_1 + 0x240) == 0) {
    return;
  }
  FUN_00ba1e00(&local_18);
  if (local_18 == (long *)0x0) {
    return;
  }
  lVar6 = *param_2;
  if (lVar6 < -0x41dba523407a4083) {
    if (lVar6 < -0x7772ff4b80e1990f) {
      if (lVar6 == -0x7773024b80e19e28) {
        uVar5 = 1;
      }
      else {
        if (lVar6 != -0x7773004b80e19ac2) goto LAB_01ec5c5c;
        uVar5 = 3;
      }
    }
    else {
      if (lVar6 != -0x7772ff4b80e1990f) {
        if (lVar6 != -0x41dba823407a459c) goto LAB_01ec5c5c;
        uVar5 = 1;
        goto LAB_01ec5d1c;
      }
      uVar5 = 2;
    }
    FUN_01c03b14(local_18,1,uVar5);
  }
  else if (lVar6 == -0x41dba523407a4083) {
    uVar5 = 2;
LAB_01ec5d1c:
    FUN_01c01de0(local_18,uVar5);
  }
  else {
    if (lVar6 == 0x3c26c762fbe21e1f) {
      uVar5 = 2;
    }
    else {
      if (lVar6 != 0x3c26c862fbe21fd2) goto LAB_01ec5c5c;
      uVar5 = 1;
    }
    FUN_01c01c5c(local_18,uVar5);
  }
  if (local_18 == (long *)0x0) {
    return;
  }
LAB_01ec5c5c:
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
  return;
}


