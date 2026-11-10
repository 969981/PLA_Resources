/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec5d6c; name: FUN_01ec5d6c
 */


void FUN_01ec5d6c(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_18;
  
  if (*(long *)(param_1 + 0x240) == 0) {
    return;
  }
  FUN_00ba1e00(&local_18);
  if (local_18 == (long *)0x0) {
    return;
  }
  lVar5 = *param_2;
  if (lVar5 < -0x41dba823407a459c) {
    if (((lVar5 != -0x7773024b80e19e28) && (lVar5 != -0x7773004b80e19ac2)) &&
       (lVar5 != -0x7772ff4b80e1990f)) goto LAB_01ec5e48;
    FUN_01c03b14(local_18,0,0);
  }
  else {
    if ((lVar5 != -0x41dba823407a459c) && (lVar5 != -0x41dba523407a4083)) goto LAB_01ec5e48;
    FUN_01c01f50();
  }
  if (local_18 == (long *)0x0) {
    return;
  }
LAB_01ec5e48:
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
  return;
}


