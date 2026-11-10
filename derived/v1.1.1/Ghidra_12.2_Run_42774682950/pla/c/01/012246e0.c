/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012246e0; name: FUN_012246e0
 */


undefined8 FUN_012246e0(long param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  
  piVar10 = *(int **)(param_1 + 0x1648);
  if ((*piVar10 != 1) ||
     (((param_2 == 1 && (*(int *)(param_1 + 0x167c) == 1)) ||
      (*(char *)((long)piVar10 + 0x26) == '\0')))) {
    return 1;
  }
  if ((param_2 == 1) && (piVar10[0x14] == 0)) {
    return 0;
  }
  lVar6 = FUN_0121fbdc(param_1);
  if (lVar6 == 0) {
    return 0;
  }
  uVar7 = FUN_02c6cf3c(*(undefined8 *)(lVar6 + 0x98));
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  lVar11 = *(long *)(lVar6 + 0x98);
  if ((*(ushort *)(*(long *)(lVar11 + 0x10) + 4) >> 2 & 1) != 0) {
    return 0;
  }
  lVar13 = *(long *)(param_1 + 0x1648);
  if (*(char *)(lVar13 + 0x58) == '\0') {
    if (*(long *)(lVar11 + 8) == 0) {
      sVar3 = FUN_02c5e31c(lVar6);
      if (sVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar8 = FUN_02c66b3c(lVar11);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
    }
    lVar13 = *(long *)(param_1 + 0x1648);
  }
  if (*(long *)(lVar13 + 0x28) != 0) {
    iVar4 = FUN_02c6849c(*(undefined8 *)(lVar6 + 0x98));
    lVar13 = *(long *)(param_1 + 0x1648);
    uVar7 = (ulong)*(uint *)(lVar13 + 0x30);
    if (*(uint *)(lVar13 + 0x30) == 0) {
      return 0;
    }
    piVar10 = *(int **)(lVar13 + 0x28);
    while (iVar4 != *piVar10) {
      uVar7 = uVar7 - 1;
      piVar10 = piVar10 + 1;
      if (uVar7 == 0) {
        return 0;
      }
    }
  }
  if (*(int *)(lVar13 + 0x34) != -1) {
    iVar4 = FUN_02c5fb2c(lVar6);
    lVar13 = *(long *)(param_1 + 0x1648);
    if (iVar4 != *(int *)(lVar13 + 0x34)) {
      return 0;
    }
  }
  if (*(undefined4 **)(lVar13 + 0x38) != (undefined4 *)0x0) {
    if (*(int *)(lVar13 + 0x40) == 0) {
      return 0;
    }
    uVar7 = FUN_02c61778(lVar6,**(undefined4 **)(lVar13 + 0x38));
    lVar13 = *(long *)(param_1 + 0x1648);
    if ((uVar7 & 1) == 0) {
      uVar7 = 1;
      do {
        if (*(uint *)(lVar13 + 0x40) <= uVar7) {
          return 0;
        }
        uVar9 = FUN_02c61778(lVar6,*(undefined4 *)(*(long *)(lVar13 + 0x38) + uVar7 * 4));
        lVar13 = *(long *)(param_1 + 0x1648);
        uVar7 = uVar7 + 1;
      } while ((uVar9 & 1) == 0);
    }
  }
  if (*(char *)(lVar13 + 0x44) != '\0') {
    uVar7 = FUN_02c6d5b0(*(undefined8 *)(lVar6 + 0x98));
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    lVar13 = *(long *)(param_1 + 0x1648);
  }
  if (*(int *)(lVar13 + 0x48) != 0xffff) {
    FUN_02c71158(*(undefined8 *)(lVar6 + 0x98));
    uVar7 = FUN_010a2f50();
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    iVar4 = FUN_02c5d92c(lVar6,7);
    lVar13 = *(long *)(param_1 + 0x1648);
    if (iVar4 != *(int *)(lVar13 + 0x48)) {
      return 0;
    }
  }
  if (*(char *)(lVar13 + 0x4c) == '\x12') {
LAB_01224828:
    uVar8 = FUN_01223198(lVar13 + 0x10,lVar6,0);
    return uVar8;
  }
  iVar4 = FUN_02c6b1c0(*(undefined8 *)(lVar6 + 0x98),0);
  iVar5 = FUN_02c6b1c0(*(undefined8 *)(lVar6 + 0x98),1);
  uVar14 = 2;
  if (iVar4 == 0) {
    uVar14 = 1;
  }
  uVar15 = (uint)(iVar4 != 0);
  if (iVar5 != 0) {
    uVar15 = uVar14;
  }
  iVar4 = FUN_02c6b1c0(*(undefined8 *)(lVar6 + 0x98),2);
  if (iVar4 != 0) {
    uVar15 = uVar15 + 1;
  }
  iVar4 = FUN_02c6b1c0(*(undefined8 *)(lVar6 + 0x98),3);
  if (uVar15 == -(uint)(iVar4 != 0)) {
    return 0;
  }
  uVar14 = 0;
  do {
    cVar2 = *(char *)(*(long *)(param_1 + 0x1648) + 0x4c);
    uVar7 = FUN_02c6b1c0(*(undefined8 *)(lVar6 + 0x98),uVar14);
    lVar11 = (&DAT_0428af30)[(uVar7 & 0xffffffff) * 6];
    if (lVar11 == 0) {
      plVar12 = &DAT_0428af30;
    }
    else {
      plVar12 = &DAT_0428af30;
      if (*(char *)(lVar11 + 0x1e1) != '\0') {
        plVar12 = &DAT_0428af30 + (uVar7 & 0xffffffff) * 6;
      }
    }
    piVar10 = (int *)((long)*(uint **)(*plVar12 + 0x250) + (ulong)**(uint **)(*plVar12 + 0x250));
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 9) ||
       (uVar7 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar7 == 0)) {
      if (cVar2 == '\0') goto LAB_012249a8;
    }
    else if (cVar2 == *(char *)((long)piVar10 + uVar7)) {
LAB_012249a8:
      lVar13 = *(long *)(param_1 + 0x1648);
      goto LAB_01224828;
    }
    uVar14 = uVar14 + 1;
    iVar4 = FUN_02c6b1c0(*(undefined8 *)(lVar6 + 0x98),0);
    iVar5 = FUN_02c6b1c0(*(undefined8 *)(lVar6 + 0x98),1);
    uVar15 = 2;
    if (iVar4 == 0) {
      uVar15 = 1;
    }
    uVar1 = (uint)(iVar4 != 0);
    if (iVar5 != 0) {
      uVar1 = uVar15;
    }
    iVar4 = FUN_02c6b1c0(*(undefined8 *)(lVar6 + 0x98),2);
    if (iVar4 != 0) {
      uVar1 = uVar1 + 1;
    }
    iVar4 = FUN_02c6b1c0(*(undefined8 *)(lVar6 + 0x98),3);
    if (iVar4 != 0) {
      uVar1 = uVar1 + 1;
    }
    if (uVar1 <= uVar14) {
      return 0;
    }
  } while( true );
}


