/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d95830; name: FUN_01d95830
 */


void FUN_01d95830(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 local_38;
  char *pcStack_30;
  undefined8 local_28;
  long *local_20;
  long *local_18;
  
  if (*(long *)(param_1 + 2) == 0) {
    return;
  }
  FUN_019174ac(&local_18);
  if (local_18 == (long *)0x0) {
    return;
  }
  if (*param_1 == 0) {
    local_38 = 0x79479c9171128967;
    pcStack_30 = "field";
    local_28 = 5;
  }
  else {
    if (*param_1 != 1) goto LAB_01d958c0;
    local_38 = 0x1e0f2020be5b5db7;
    pcStack_30 = "battle";
    local_28 = 6;
  }
  local_20 = (long *)0x0;
  FUN_00b52884(local_18,&local_38);
  if (local_20 != (long *)0x0) {
    (**(code **)(*local_20 + 0x20))();
  }
  if (local_18 == (long *)0x0) {
    return;
  }
LAB_01d958c0:
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


