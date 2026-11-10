/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b7e84; name: FUN_008b7e84
 */


undefined8 FUN_008b7e84(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *local_28;
  
  iVar2 = *(int *)(param_1 + 0x84);
  if (iVar2 == 0) {
    if (0 < *(int *)(param_1 + 0x88)) {
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x84) = 1;
LAB_008b7f78:
    lVar10 = *(long *)(**(long **)(param_1 + 0x70) + 0x120);
    *(undefined1 *)(lVar10 + 0x78) = 0;
    *(undefined4 *)(lVar10 + 0x7c) = 0;
    FUN_009a1b88(&local_28,*(undefined8 *)(*(long *)(lVar10 + 0x68) + 0x28));
    plVar6 = *(long **)(lVar10 + 0x70);
    *(undefined8 *)(lVar10 + 0x70) = 0;
    if (plVar6 != (long *)0x0) {
      lVar8 = plVar6[0xb];
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
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    *(long **)(lVar10 + 0x70) = local_28;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    return 0;
  }
  if (iVar2 != 2) {
    if (iVar2 != 1) {
      if (iVar2 == 3) {
        return 1;
      }
      return 0;
    }
    goto LAB_008b7f78;
  }
  lVar10 = *(long *)(**(long **)(param_1 + 0x70) + 0x120);
  if (*(long *)(lVar10 + 0x70) == 0) goto LAB_008b7f0c;
  if (*(long *)(*(long *)(lVar10 + 0x70) + 0x68) == 0) {
    local_28 = (long *)0x0;
LAB_008b7eec:
    plVar6 = *(long **)(*(long *)(lVar10 + 0x70) + 0x78);
    if (plVar6 == (long *)0x0) {
      puVar5 = (undefined1 *)(*(long *)(lVar10 + 0x70) + 0x80);
    }
    else {
      puVar5 = (undefined1 *)(**(code **)(*plVar6 + 0x68))();
    }
    uVar7 = *puVar5;
  }
  else {
    FUN_009c66e4(&local_28);
    if (local_28 == (long *)0x0) goto LAB_008b7eec;
    lVar9 = local_28[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    lVar8 = local_28[0xd];
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
      if ((int)lVar8 != 3) goto LAB_008b8068;
      goto LAB_008b7eec;
    }
    if ((int)lVar8 == 3) goto LAB_008b7eec;
LAB_008b8068:
    iVar2 = *(int *)(lVar10 + 0x7c);
    *(int *)(lVar10 + 0x7c) = iVar2 + 1;
    if (iVar2 < 0x1e) {
      return 0;
    }
    uVar7 = 0;
  }
  *(undefined1 *)(lVar10 + 0x78) = uVar7;
LAB_008b7f0c:
  lVar10 = *(long *)(**(long **)(param_1 + 0x70) + 0x120);
  lVar8 = *(long *)(lVar10 + 0x68);
  lVar9 = *(long *)(*(long *)(lVar8 + 0x160) + 0x68);
  if ((((*(char *)(*(long *)(*(long *)(*(long *)(lVar9 + 0x138) + 0x68) + 8) + 0x354) == '\0') &&
       (*(char *)(*(long *)(lVar9 + 8) + 0x355) == '\0')) &&
      (*(char *)(*(long *)(*(long *)(*(long *)(lVar8 + 0x130) + 0x68) + 8) + 0x348) == '\0')) &&
     (*(char *)(lVar10 + 0x78) != '\0')) {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    return 1;
  }
  *(undefined8 *)(param_1 + 0x84) = 0x1e00000000;
  return 0;
}


