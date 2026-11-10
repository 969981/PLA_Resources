/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c1224; name: FUN_008c1224
 */


void FUN_008c1224(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_28;
  
  FUN_008b2878();
  uVar5 = FUN_00923c00();
  uVar6 = FUN_00934f10(uVar5,*(undefined1 *)(param_1 + 0x7e));
  if ((uVar6 & 1) == 0) {
    FUN_008b2878(param_1);
    uVar5 = FUN_00923bc4();
    FUN_009a34a8(&local_28,uVar5,*(undefined2 *)(param_1 + 0x7c),*(undefined1 *)(param_1 + 0x7e));
    plVar7 = *(long **)(param_1 + 0x88);
    *(long *)(param_1 + 0x88) = 0;
    if (plVar7 == (long *)0x0) goto LAB_008c129c;
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    FUN_008b2878(param_1);
    uVar5 = FUN_00923bc4();
    FUN_009a3174(&local_28,uVar5,*(undefined2 *)(param_1 + 0x7c),*(undefined1 *)(param_1 + 0x7e));
    plVar7 = *(long **)(param_1 + 0x88);
    *(long *)(param_1 + 0x88) = 0;
    if (plVar7 == (long *)0x0) goto LAB_008c129c;
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar2 == 1) {
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))();
  }
LAB_008c129c:
  *(undefined8 *)(param_1 + 0x88) = local_28;
  return;
}


