/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03264ad0; name: FUN_03264ad0
 */


int FUN_03264ad0(long param_1,ushort param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined2 uVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  undefined8 uVar11;
  ushort *puVar12;
  long lVar13;
  long lVar14;
  
  uVar5 = *(uint *)(param_1 + 0x128);
  iVar2 = uVar5 + 3;
  if ((int)(*(uint *)(param_1 + 300) & 0x3fffffff) < iVar2) {
    uVar11 = FUN_03265628(PTR_PTR_0434a080,iVar2,*(undefined8 *)(param_1 + 0x120),uVar5,
                          param_1 + 300);
    *(undefined8 *)(param_1 + 0x120) = uVar11;
  }
  *(int *)(param_1 + 0x128) = iVar2;
  iVar2 = *(int *)(param_1 + 0x118);
  if (iVar2 < (int)(*(uint *)(param_1 + 0x11c) & 0x3fffffff)) {
    lVar14 = *(long *)(param_1 + 0x110);
  }
  else {
    lVar14 = FUN_032656b0(PTR_PTR_0434a080,iVar2 + 1,*(undefined8 *)(param_1 + 0x110),iVar2,
                          param_1 + 0x11c);
    *(long *)(param_1 + 0x110) = lVar14;
  }
  *(int *)(param_1 + 0x118) = iVar2 + 1;
  puVar12 = (ushort *)(lVar14 + (ulong)param_2 * 8 + 2);
  uVar7 = *puVar12;
  lVar13 = *(long *)(param_1 + 0x120);
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar10 = *(int *)(param_1 + 0x138) + -1;
    if (*(int *)(*(long *)(param_1 + 0x130) + (long)iVar10 * 4) == param_3) goto LAB_03264c10;
  }
  iVar10 = FUN_032645d0(param_1,param_3);
LAB_03264c10:
  puVar3 = (undefined2 *)(lVar13 + (ulong)uVar7 * 8);
  puVar3[1] = (ushort)uVar5;
  sVar9 = (short)(uVar5 + 2);
  puVar3[2] = sVar9 * 4 | 2;
  puVar4 = (undefined2 *)(lVar13 + ((ulong)uVar5 & 0xffff) * 8);
  *puVar4 = (short)iVar10;
  *(undefined4 *)(puVar4 + 1) = 0x3ffff;
  uVar6 = *puVar3;
  puVar3 = (undefined2 *)(lVar13 + ((ulong)(uVar5 + 1) & 0xffff) * 8);
  *(undefined4 *)(puVar3 + 1) = 0x3ffff;
  *puVar3 = uVar6;
  puVar3 = (undefined2 *)(lVar13 + ((ulong)(uVar5 + 2) & 0xffff) * 8);
  *puVar3 = (short)iVar10;
  sVar8 = (short)(uVar5 + 1);
  puVar3[1] = sVar8;
  puVar3[2] = uVar7 << 2 | 2;
  *puVar12 = (ushort)uVar5;
  psVar1 = (short *)(*(long *)(param_1 + 0x110) + (ulong)(ushort)iVar2 * 8);
  *psVar1 = sVar9;
  psVar1[1] = sVar8;
  psVar1[2] = *(short *)(lVar14 + (ulong)param_2 * 8 + 4);
  return iVar2;
}


