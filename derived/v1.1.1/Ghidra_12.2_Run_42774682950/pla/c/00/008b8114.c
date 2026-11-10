/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b8114; name: FUN_008b8114
 */


void FUN_008b8114(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined1 uVar7;
  long *local_38;
  long *local_28;
  
  lVar6 = FUN_00934074(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0xd0),0);
  if (lVar6 == 0) {
    uVar7 = 0x1f;
  }
  else {
    uVar7 = *(undefined1 *)(*(long *)(lVar6 + 0x70) + 0x7d);
  }
  uVar3 = *(undefined1 *)(*(long *)(**(long **)(param_1 + 0x70) + 0x100) + 0x71);
  FUN_009a3764(&local_28,*(undefined8 *)(**(long **)(param_1 + 0x70) + 0x28),10);
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  FUN_009a4310(&local_38,*(undefined8 *)(**(long **)(param_1 + 0x70) + 0x28),0,uVar7,uVar3);
  if (local_38 != (long *)0x0) {
    lVar6 = local_38[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


