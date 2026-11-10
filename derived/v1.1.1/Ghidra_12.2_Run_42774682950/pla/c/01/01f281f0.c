/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f281f0; name: FUN_01f281f0
 */


void FUN_01f281f0(undefined1 *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 in_q3 [16];
  undefined8 uVar7;
  long *local_18;
  
  uVar7 = in_q3._8_8_;
  uVar6 = in_q3._0_8_;
  if (((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) ||
     (FUN_00c1e8d8(&local_18), local_18 == (long *)0x0)) {
    *param_1 = 0;
    return;
  }
  (**(code **)(*local_18 + 0x40))();
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  if (local_18 == (long *)0x0) {
    return;
  }
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
    return;
  }
  return;
}


