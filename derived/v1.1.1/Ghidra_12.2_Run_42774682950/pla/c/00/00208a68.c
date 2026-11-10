/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00208a68; name: FUN_00208a68
 */


int FUN_00208a68(long param_1,uint param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  if ((param_2 & 1) != 0) {
    if (param_4 != 0) {
      return -0x1f5;
    }
    if (0x270 < *(ulong *)(param_1 + 0x920) >> 4) {
      return -0x388;
    }
  }
  iVar2 = FUN_0020d65c(param_3,param_4);
  if (iVar2 == 0) {
    return -0x1f5;
  }
  lVar9 = param_1 + 0x890;
  lVar3 = FUN_0020c738(lVar9,0x98);
  if (lVar3 == 0) {
    return -0x385;
  }
  if (param_4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_0020d498(param_3,param_4,lVar9);
    if (lVar4 == 0) goto LAB_00208b40;
  }
  if ((param_2 & 1) != 0) {
    puVar5 = (undefined8 *)0x0;
    goto LAB_00208b90;
  }
  puVar5 = (undefined8 *)FUN_0020c738(lVar9,0x18);
  if (puVar5 == (undefined8 *)0x0) {
LAB_00208b34:
    FUN_0020c748(lVar9,lVar4);
LAB_00208b40:
    FUN_0020c748(lVar9,lVar3);
    return -0x385;
  }
  if (param_4 == 0) {
    puVar5[1] = 0;
  }
  else {
    lVar6 = FUN_0020d498(param_3,param_4,lVar9);
    puVar5[1] = lVar6;
    if (lVar6 == 0) {
      FUN_0020c748(lVar9,puVar5);
      goto LAB_00208b34;
    }
  }
  puVar5[2] = param_4;
  *puVar5 = 0;
LAB_00208b90:
  FUN_00211334(lVar3);
  FUN_0020c918(lVar3,param_2,lVar4,param_4);
  iVar2 = FUN_002069b8(param_1,lVar3);
  if (iVar2 != 0) {
    FUN_00206280(puVar5,lVar9);
    FUN_0020c940(lVar3,lVar9);
    FUN_0020c748(lVar9,lVar3);
    return iVar2;
  }
  if ((param_2 & 1) == 0) {
    puVar8 = (undefined8 *)(param_1 + 0x8e0);
    do {
      puVar7 = puVar8;
      puVar8 = (undefined8 *)*puVar7;
    } while (puVar8 != (undefined8 *)0x0);
    *puVar7 = puVar5;
  }
  else {
    *(long *)(param_1 + 0x920) = *(long *)(param_1 + 0x920) + 1;
  }
  param_3 = param_3 + param_4 * 8;
  lVar9 = param_4 + 1;
  puVar10 = (undefined4 *)(param_3 + 4);
  do {
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) goto LAB_00208c40;
    puVar11 = puVar10 + -2;
    piVar1 = puVar10 + -3;
    puVar10 = puVar11;
  } while (*piVar1 != 3);
  *(undefined4 *)(param_1 + 0x9a0) = *puVar11;
LAB_00208c40:
  lVar9 = param_4 + 1;
  puVar10 = (undefined4 *)(param_3 + 4);
  do {
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) goto LAB_00208c6c;
    puVar11 = puVar10 + -2;
    piVar1 = puVar10 + -3;
    puVar10 = puVar11;
  } while (*piVar1 != 2);
  *(char *)(param_1 + 0x9a8) = (char)*puVar11;
LAB_00208c6c:
  param_4 = param_4 + 1;
  puVar10 = (undefined4 *)(param_3 + 4);
  do {
    param_4 = param_4 + -1;
    if (param_4 == 0) {
      return 0;
    }
    puVar11 = puVar10 + -2;
    piVar1 = puVar10 + -3;
    puVar10 = puVar11;
  } while (*piVar1 != 8);
  *(char *)(param_1 + 0x9a9) = (char)*puVar11;
  return 0;
}


