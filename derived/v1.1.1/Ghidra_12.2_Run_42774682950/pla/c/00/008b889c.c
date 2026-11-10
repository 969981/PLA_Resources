/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b889c; name: FUN_008b889c
 */


void FUN_008b889c(long param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined8 local_28;
  
  lVar5 = FUN_00934074(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0xd0),0);
  if (lVar5 == 0) {
    uVar8 = 0x1f;
  }
  else {
    uVar8 = *(undefined1 *)(*(long *)(lVar5 + 0x70) + 0x7d);
  }
  uVar7 = 1;
  if ((param_2 & 1) != 0) {
    uVar7 = 2;
  }
  FUN_009a3764(&local_28,*(undefined8 *)(**(long **)(param_1 + 0x70) + 0x28),0xb);
  plVar6 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar6 != (long *)0x0) {
    lVar5 = plVar6[0xb];
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
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  *(undefined8 *)(param_1 + 0x98) = local_28;
  FUN_009a4310(&local_28,*(undefined8 *)(**(long **)(param_1 + 0x70) + 0x28),uVar7,uVar8,0x1f);
  plVar6 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar6 != (long *)0x0) {
    lVar5 = plVar6[0xb];
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
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = local_28;
  return;
}


