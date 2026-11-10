/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db7a0c; name: FUN_00db7a0c
 */


undefined4 FUN_00db7a0c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x6c) = 1;
  lVar9 = *(long *)(param_1 + 200) + -1;
  plVar5 = *(long **)(lVar6 + lVar9 * 8);
  if ((int)plVar5[0xe] == 2) {
    iVar4 = (**(code **)(*plVar5 + 0x48))();
    *(undefined1 *)(param_1 + 0x6a) = 1;
    if (*(char *)(param_1 + 0x6b) == '\0') {
      if (iVar4 != 1) goto switchD_00db7a9c_caseD_2;
    }
    else {
      *(undefined1 *)(param_1 + 0x6b) = 0;
    }
    lVar7 = *(long *)(lVar6 + lVar9 * 8);
    uVar8 = 3;
    goto LAB_00db7b84;
  }
  switch((int)plVar5[0xe]) {
  case 0:
    *(undefined4 *)(plVar5 + 0xe) = 1;
    plVar5 = *(long **)(lVar6 + lVar9 * 8);
  case 1:
    iVar4 = (**(code **)(*plVar5 + 0x40))();
    if (iVar4 == 1) {
      lVar7 = *(long *)(lVar6 + lVar9 * 8);
      uVar8 = 2;
LAB_00db7b84:
      *(undefined4 *)(lVar7 + 0x70) = uVar8;
      *(undefined4 *)(*(long *)(lVar6 + lVar9 * 8) + 0x68) = 0;
    }
    break;
  default:
    break;
  case 3:
    *(undefined1 *)(param_1 + 0x6a) = 0;
    iVar4 = (**(code **)(**(long **)(lVar6 + lVar9 * 8) + 0x60))();
    if (iVar4 != 1) break;
    *(undefined4 *)(*(long *)(lVar6 + lVar9 * 8) + 0x70) = 4;
  case 4:
    if (*(char *)(param_1 + 0x69) == '\0') {
      plVar5 = *(long **)(*(long *)(param_1 + 0xc0) + *(long *)(param_1 + 200) * 8 + -8);
      if (plVar5 != (long *)0x0) {
        lVar6 = plVar5[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      lVar9 = *(long *)(param_1 + 200);
      lVar6 = lVar9 + -1;
      *(long *)(param_1 + 200) = lVar6;
      *(undefined1 *)(param_1 + 0x6b) = 0;
      if (lVar6 != 0) {
        (**(code **)(**(long **)(*(long *)(param_1 + 0xc0) + lVar9 * 8 + -0x10) + 0x70))();
        lVar6 = *(long *)(param_1 + 200);
        goto joined_r0x00db7ba0;
      }
    }
    else {
      FUN_00db76fc(param_1);
      lVar6 = *(long *)(param_1 + 200);
joined_r0x00db7ba0:
      if (lVar6 != 0) {
        *(undefined4 *)(param_1 + 0x6c) = 2;
        break;
      }
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
switchD_00db7a9c_caseD_2:
  return *(undefined4 *)(param_1 + 0x6c);
}


