/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c4610; name: FUN_028c4610
 */


long FUN_028c4610(long param_1)

{
  uint *puVar1;
  char cVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)(param_1 + 0x68);
  if (lVar5 == 0) {
    piVar4 = *(int **)(param_1 + 0x30);
    if (piVar4 == (int *)0x0) {
      lVar3 = *(long *)(param_1 + 0x40);
      if ((lVar3 == 0) || (*(char *)(lVar3 + 0x1e1) == '\0')) {
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        lVar3 = *(long *)(lVar3 + 0x278);
      }
      goto joined_r0x028c471c;
    }
  }
  else {
    lVar3 = *(long *)(lVar5 + 8);
joined_r0x028c471c:
    if (((lVar3 == 0) || (*(char *)(lVar3 + 0x1e1) == '\0')) ||
       (piVar4 = (int *)((long)*(uint **)(lVar3 + 0x250) + (ulong)**(uint **)(lVar3 + 0x250)),
       piVar4 == (int *)0x0)) goto LAB_028c4670;
  }
  if (((4 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
      (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar6 != 0)) &&
     (puVar1 = (uint *)((long)piVar4 + uVar6), lVar3 = (long)puVar1 + (ulong)*puVar1, lVar3 != 0)) {
    return lVar3;
  }
LAB_028c4670:
  lVar3 = *(long *)(param_1 + 0x70);
  if (lVar3 == 0) {
    if (lVar5 == 0) {
      lVar5 = *(long *)(param_1 + 0x40);
      if (lVar5 == 0) {
        return 0;
      }
      if (*(char *)(lVar5 + 0x1e1) == '\0') {
        return 0;
      }
      lVar5 = *(long *)(lVar5 + 0x2a8);
      if (lVar5 == 0) {
        return 0;
      }
      cVar2 = *(char *)(lVar5 + 0x1e1);
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x38);
      if (lVar5 == 0) {
        return 0;
      }
      cVar2 = *(char *)(lVar5 + 0x1e1);
    }
    if (cVar2 == '\0') {
      return 0;
    }
    lVar3 = *(long *)(lVar5 + 0x270);
    if (lVar3 == 0) {
      return 0;
    }
  }
  piVar4 = *(int **)(lVar3 + 0x70);
  lVar5 = 0;
  if (piVar4 != (int *)0x0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar6 == 0)) {
      return 0;
    }
    puVar1 = (uint *)((long)piVar4 + uVar6);
    lVar5 = (long)puVar1 + (ulong)*puVar1;
  }
  return lVar5;
}


