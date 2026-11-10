/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015b7f0; name: FUN_0015b7f0
 */


int FUN_0015b7f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined2 uVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar13 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined1 *)(param_1 + 0xcc);
  uVar12 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_5;
  uVar7 = *(undefined2 *)(param_1 + 0xc4);
  iVar9 = FUN_0015a410();
  if (iVar9 == 0) goto LAB_0015b944;
  plVar4 = (long *)(*(long *)(param_1 + 0x38) + param_4);
  FUN_0015c870(param_1,plVar4);
  if (iVar9 == 6) {
    lVar11 = FUN_0016d720(param_1,"error in error handling",0x17);
    *plVar4 = lVar11;
    bVar6 = *(byte *)(lVar11 + 8);
LAB_0015b884:
    *(uint *)(plVar4 + 1) = bVar6 | 0x40;
  }
  else {
    if (iVar9 == 4) {
      lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0xd8);
      *plVar4 = lVar11;
      bVar6 = *(byte *)(lVar11 + 8);
      goto LAB_0015b884;
    }
    lVar11 = *(long *)(*(long *)(param_1 + 0x10) + -8);
    *plVar4 = *(long *)(*(long *)(param_1 + 0x10) + -0x10);
    plVar4[1] = lVar11;
  }
  *(long **)(param_1 + 0x10) = plVar4 + 2;
  *(long *)(param_1 + 0x20) = lVar13;
  *(undefined1 *)(param_1 + 0xcc) = uVar5;
  *(undefined2 *)(param_1 + 0xc4) = uVar7;
  plVar4 = plVar4 + 2;
  while (plVar8 = plVar4, lVar13 != 0) {
    puVar1 = (undefined8 *)(lVar13 + 8);
    lVar13 = *(long *)(lVar13 + 0x10);
    plVar4 = (long *)*puVar1;
    if ((long *)*puVar1 <= plVar8) {
      plVar4 = plVar8;
    }
  }
  iVar10 = (int)((ulong)((long)plVar8 - *(long *)(param_1 + 0x38)) >> 4);
  iVar2 = iVar10 + 1;
  iVar3 = iVar10 + 8;
  if (-1 < iVar2) {
    iVar3 = iVar10 + 1;
  }
  iVar3 = iVar2 + (iVar3 >> 3);
  if (0xf4235 < iVar3) {
    iVar3 = 0xf4236;
  }
  if (*(int *)(param_1 + 0xb8) < 0xf4241) {
    FUN_0016cb00(param_1);
  }
  else {
    FUN_0016caa0();
  }
  if ((iVar2 < 0xf423c) && (iVar3 + 10 < *(int *)(param_1 + 0xb8))) {
    FUN_0015a490(param_1);
  }
LAB_0015b944:
  *(undefined8 *)(param_1 + 0xb0) = uVar12;
  return iVar9;
}


