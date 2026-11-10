/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03265360; name: FUN_03265360
 */


undefined8 FUN_03265360(long param_1,ushort *param_2)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  undefined2 *puVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  undefined2 uVar11;
  ushort uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  
  iVar8 = *(int *)(param_1 + 0x128);
  iVar5 = iVar8 + 2;
  if ((int)(*(uint *)(param_1 + 300) & 0x3fffffff) < iVar5) {
    uVar13 = FUN_03265628(PTR_PTR_0434a080,iVar5,*(undefined8 *)(param_1 + 0x120),iVar8,
                          param_1 + 300);
    *(undefined8 *)(param_1 + 0x120) = uVar13;
  }
  *(int *)(param_1 + 0x128) = iVar5;
  uVar12 = (ushort)iVar8;
  uVar1 = uVar12 + 1;
  iVar5 = *(int *)(param_1 + 0x118);
  if (iVar5 < (int)(*(uint *)(param_1 + 0x11c) & 0x3fffffff)) {
    lVar14 = *(long *)(param_1 + 0x110);
  }
  else {
    lVar14 = FUN_032656b0(PTR_PTR_0434a080,iVar5 + 1,*(undefined8 *)(param_1 + 0x110),iVar5,
                          param_1 + 0x11c);
    *(long *)(param_1 + 0x110) = lVar14;
  }
  *(int *)(param_1 + 0x118) = iVar5 + 1;
  puVar6 = (ushort *)(lVar14 + (ulong)*param_2 * 8);
  uVar9 = puVar6[1];
  lVar15 = *(long *)(param_1 + 0x120);
  uVar10 = *puVar6;
  puVar7 = (undefined2 *)(lVar15 + (ulong)uVar9 * 8);
  puVar7[2] = (ushort)(iVar8 << 2) | 2;
  puVar7[1] = uVar10;
  uVar11 = *(undefined2 *)(lVar15 + (ulong)uVar10 * 8);
  puVar2 = (undefined2 *)(lVar15 + (ulong)uVar12 * 8);
  puVar3 = (undefined2 *)(lVar15 + (ulong)uVar1 * 8);
  puVar2[1] = uVar1;
  puVar2[2] = uVar9 << 2 | 2;
  *puVar2 = uVar11;
  *puVar3 = *puVar7;
  *(undefined4 *)(puVar3 + 1) = 0x3ffff;
  puVar6[1] = *puVar6;
  puVar4 = (ushort *)(lVar14 + (ulong)(ushort)iVar5 * 8);
  *puVar4 = uVar12;
  puVar4[1] = uVar1;
  puVar4[2] = puVar6[2];
  *param_2 = (ushort)iVar5;
  return 1;
}


