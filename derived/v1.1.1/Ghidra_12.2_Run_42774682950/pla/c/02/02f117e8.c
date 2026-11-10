/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f117e8; name: FUN_02f117e8
 */


undefined8 * FUN_02f117e8(long *param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  uVar4 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  if (uVar4 == 0) {
    uVar13 = 0;
  }
  else {
    iVar8 = 0;
    uVar9 = uVar4;
    do {
      iVar2 = iVar8 + (uVar9 >> 1);
      uVar13 = *(ulong *)(*(long *)(lVar7 + (long)iVar2 * 8) + 0x20);
      if (uVar13 == param_2) break;
      if (param_2 <= uVar13) {
        iVar8 = iVar2 + 1;
      }
      uVar9 = uVar9 - (param_2 <= uVar13) >> 1;
      iVar2 = iVar8;
    } while (uVar9 != 0);
    uVar13 = (ulong)iVar2;
    lVar7 = lVar7 + uVar13 * 8;
  }
  if (lVar7 == 0) {
    puVar5 = (undefined8 *)FUN_02f11b88(param_1);
    return puVar5;
  }
  uVar9 = *(uint *)((long)param_1 + 0xc);
  if (uVar9 <= uVar4) {
    iVar8 = uVar9 + (uVar9 >> 1);
    if (uVar9 == 0) {
      iVar8 = 1;
    }
    uVar6 = FUN_02f11bf0(param_1,iVar8);
    if ((uVar6 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    uVar9 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar9 <= uVar4) {
    return (undefined8 *)0x0;
  }
  uVar4 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  *(uint *)(param_1 + 1) = uVar4 + 1;
  if (uVar4 <= (uint)uVar13) {
    return (undefined8 *)(lVar7 + (uVar13 & 0xffffffff) * 8);
  }
  lVar11 = (ulong)uVar4 * 8;
  lVar3 = lVar7 + lVar11;
  uVar13 = uVar13 & 0xffffffff;
  puVar10 = (undefined8 *)(lVar3 - 8);
  *(undefined8 *)(lVar7 + lVar11) = *puVar10;
  puVar5 = (undefined8 *)(*param_1 + uVar13 * 8);
  if (puVar10 <= puVar5) {
    return puVar5;
  }
  puVar12 = (undefined8 *)(lVar3 - 0x10);
  *puVar10 = *puVar12;
  puVar5 = (undefined8 *)(*param_1 + uVar13 * 8);
  if (puVar12 <= puVar5) {
    return puVar5;
  }
  puVar5 = (undefined8 *)((lVar7 + (ulong)uVar4 * 8) - 0x18);
  do {
    puVar5[1] = *puVar5;
    puVar10 = (undefined8 *)(*param_1 + uVar13 * 8);
    bVar1 = puVar10 < puVar5;
    puVar5 = puVar5 + -1;
  } while (bVar1);
  return puVar10;
}


