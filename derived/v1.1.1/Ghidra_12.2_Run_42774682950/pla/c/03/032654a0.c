/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032654a0; name: FUN_032654a0
 */


undefined8 FUN_032654a0(long param_1,ushort *param_2)

{
  undefined2 *puVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  undefined2 *puVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  undefined2 uVar9;
  ushort uVar10;
  ushort uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  iVar6 = *(int *)(param_1 + 0x128);
  iVar3 = iVar6 + 2;
  if ((int)(*(uint *)(param_1 + 300) & 0x3fffffff) < iVar3) {
    uVar12 = FUN_03265628(PTR_PTR_0434a080,iVar3,*(undefined8 *)(param_1 + 0x120),iVar6,
                          param_1 + 300);
    *(undefined8 *)(param_1 + 0x120) = uVar12;
  }
  *(int *)(param_1 + 0x128) = iVar3;
  uVar11 = (ushort)iVar6;
  uVar10 = uVar11 + 1;
  iVar3 = *(int *)(param_1 + 0x118);
  if (iVar3 < (int)(*(uint *)(param_1 + 0x11c) & 0x3fffffff)) {
    lVar13 = *(long *)(param_1 + 0x110);
  }
  else {
    lVar13 = FUN_032656b0(PTR_PTR_0434a080,iVar3 + 1,*(undefined8 *)(param_1 + 0x110),iVar3,
                          param_1 + 0x11c);
    *(long *)(param_1 + 0x110) = lVar13;
  }
  *(int *)(param_1 + 0x118) = iVar3 + 1;
  puVar4 = (ushort *)(lVar13 + (ulong)*param_2 * 8);
  uVar7 = puVar4[1];
  lVar14 = *(long *)(param_1 + 0x120);
  uVar8 = *puVar4;
  puVar5 = (undefined2 *)(lVar14 + (ulong)uVar7 * 8);
  puVar5[1] = uVar8;
  puVar5[2] = uVar10 * 4 | 2;
  uVar9 = *(undefined2 *)(lVar14 + (ulong)uVar8 * 8);
  puVar1 = (undefined2 *)(lVar14 + (ulong)uVar10 * 8);
  puVar1[1] = uVar11;
  puVar1[2] = uVar7 << 2 | 2;
  *puVar1 = uVar9;
  puVar1 = (undefined2 *)(lVar14 + (ulong)uVar11 * 8);
  *puVar1 = *puVar5;
  *(undefined4 *)(puVar1 + 1) = 0x3ffff;
  puVar4[1] = *puVar4;
  puVar2 = (ushort *)(lVar13 + (ulong)(ushort)iVar3 * 8);
  *puVar2 = uVar10;
  puVar2[1] = uVar11;
  puVar2[2] = puVar4[2];
  *param_2 = (ushort)iVar3;
  return 1;
}


