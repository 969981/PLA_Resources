/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01363394; name: FUN_01363394
 */


undefined8 FUN_01363394(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  undefined1 *local_28;
  undefined1 local_14 [4];
  
  iVar2 = *(int *)(param_1 + 0xd0);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xc3) = 1;
    local_14[0] = 0;
    if (*(long *)(param_1 + 0x90) != 0) {
      local_28 = local_14;
      FUN_013651c4(*(long *)(param_1 + 0x90) + 0xf0,&local_28);
    }
    FUN_018fd648();
    *(undefined4 *)(param_1 + 0xd0) = 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 3) {
      return 1;
    }
    plVar5 = *(long **)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x178) = 0;
    if (plVar5 != (long *)0x0) {
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    plVar5 = *(long **)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (plVar5 != (long *)0x0) {
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    uVar6 = 4;
    goto LAB_0136346c;
  }
  if (*(int *)(param_1 + 0x54) == 4) {
    if (*(char *)(param_1 + 0xc0) != '\0') {
LAB_0136348c:
      FUN_01362368(param_1);
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x54) != 1) goto LAB_0136348c;
  FUN_01362d74(param_1);
  uVar6 = 3;
LAB_0136346c:
  *(undefined4 *)(param_1 + 0xd0) = uVar6;
  return 1;
}


