/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b75d0; name: FUN_010b75d0
 */


void FUN_010b75d0(long param_1)

{
  int *piVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  if ((*(char *)(param_1 + 0x3f9) == '\0') && (*(char *)(param_1 + 0x3f8) == '\0')) {
    return;
  }
  bVar4 = false;
  if (*(long *)(param_1 + 0x1a0) == 0) {
LAB_010b7628:
    lVar6 = *(long *)(param_1 + 0x1a8);
  }
  else {
    piVar1 = (int *)(*(long *)(param_1 + 0x1a0) + 0x18f0c);
    if (*piVar1 != 0) {
      *piVar1 = 0;
      bVar4 = true;
      goto LAB_010b7628;
    }
    bVar4 = false;
    lVar6 = *(long *)(param_1 + 0x1a8);
  }
  if (lVar6 != 0) {
    bVar2 = *(int *)(lVar6 + 0x18f0c) != 0;
    if (bVar2) {
      *(int *)(lVar6 + 0x18f0c) = 0;
    }
    bVar4 = (bool)(bVar4 | bVar2);
  }
  if ((*(long *)(param_1 + 0x1b0) == 0) ||
     (piVar1 = (int *)(*(long *)(param_1 + 0x1b0) + 0x18f0c), *piVar1 == 0)) {
    if ((!bVar4) && (*(char *)(param_1 + 0x3f8) == '\0')) goto LAB_010b767c;
  }
  else {
    *piVar1 = 0;
  }
  FUN_010b77cc(param_1);
  *(undefined1 *)(param_1 + 0x3f8) = 0;
LAB_010b767c:
  lVar6 = *(long *)(*(long *)(param_1 + 0x3a8) + 0x28);
  if (lVar6 != 0) {
    plVar5 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x20);
    lVar6 = lVar6 * 0x18;
    lVar3 = *plVar5;
    plVar5 = plVar5 + 2;
    while( true ) {
      if ((lVar3 != 0) && ((plVar5[-1] == 0 || (*(char *)(plVar5[-1] + 0x550) != '\0')))) {
        FUN_010b6f48(param_1,*(undefined8 *)(lVar3 + 0xd8),lVar3,*(undefined2 *)(lVar3 + 0x112),
                     (int)*plVar5,*(undefined4 *)((long)plVar5 + 4),0xffffffff);
      }
      lVar6 = lVar6 + -0x18;
      if (lVar6 == 0) break;
      lVar3 = plVar5[1];
      plVar5 = plVar5 + 3;
    }
  }
  lVar6 = *(long *)(param_1 + 0x1a0);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x19210) != '\0')) {
    *(char *)(lVar6 + 0x19210) = '\0';
    FUN_00221e04(lVar6 + 0x17340);
    FUN_0022289c(lVar6 + 0x17340);
  }
  lVar6 = *(long *)(param_1 + 0x1a8);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x19210) != '\0')) {
    *(char *)(lVar6 + 0x19210) = '\0';
    FUN_00221e04(lVar6 + 0x17340);
    FUN_0022289c(lVar6 + 0x17340);
  }
  lVar6 = *(long *)(param_1 + 0x1b0);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x19210) != '\0')) {
    *(char *)(lVar6 + 0x19210) = '\0';
    FUN_00221e04(lVar6 + 0x17340);
    FUN_0022289c(lVar6 + 0x17340);
  }
  *(undefined1 *)(param_1 + 0x3f9) = 0;
  return;
}


