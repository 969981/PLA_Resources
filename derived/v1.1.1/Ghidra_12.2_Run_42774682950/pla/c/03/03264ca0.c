/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03264ca0; name: FUN_03264ca0
 */


undefined8
FUN_03264ca0(long param_1,ushort param_2,int param_3,undefined2 *param_4,undefined2 *param_5)

{
  ushort *puVar1;
  short *psVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  undefined2 uVar9;
  ushort uVar10;
  ushort uVar11;
  undefined2 uVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  undefined8 uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  
  uVar6 = *(uint *)(param_1 + 0x128);
  iVar17 = uVar6 + 5;
  if ((int)(*(uint *)(param_1 + 300) & 0x3fffffff) < iVar17) {
    uVar18 = FUN_03265628(PTR_PTR_0434a080,iVar17,*(undefined8 *)(param_1 + 0x120),uVar6,
                          param_1 + 300);
    *(undefined8 *)(param_1 + 0x120) = uVar18;
  }
  *(int *)(param_1 + 0x128) = iVar17;
  uVar7 = *(uint *)(param_1 + 0x118);
  uVar19 = *(uint *)(param_1 + 0x11c) & 0x3fffffff;
  uVar3 = uVar7 + 1;
  if ((int)uVar19 <= (int)uVar7) {
    uVar18 = FUN_032656b0(PTR_PTR_0434a080,uVar3,*(undefined8 *)(param_1 + 0x110),uVar7,
                          param_1 + 0x11c);
    uVar19 = *(uint *)(param_1 + 0x11c) & 0x3fffffff;
    *(undefined8 *)(param_1 + 0x110) = uVar18;
  }
  *(uint *)(param_1 + 0x118) = uVar3;
  if ((int)uVar3 < (int)uVar19) {
    lVar20 = *(long *)(param_1 + 0x110);
  }
  else {
    lVar20 = FUN_032656b0(PTR_PTR_0434a080,uVar7 + 2,*(undefined8 *)(param_1 + 0x110),uVar3,
                          param_1 + 0x11c);
    *(long *)(param_1 + 0x110) = lVar20;
  }
  *(uint *)(param_1 + 0x118) = uVar7 + 2;
  puVar1 = (ushort *)(lVar20 + (ulong)param_2 * 8);
  uVar8 = *puVar1;
  uVar10 = puVar1[1];
  lVar21 = *(long *)(param_1 + 0x120);
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar17 = *(int *)(param_1 + 0x138) + -1;
    if (*(int *)(*(long *)(param_1 + 0x130) + (long)iVar17 * 4) == param_3) goto LAB_03264e78;
  }
  iVar17 = FUN_032645d0(param_1,param_3);
LAB_03264e78:
  puVar4 = (undefined2 *)(lVar21 + (ulong)uVar10 * 8);
  puVar5 = (undefined2 *)(lVar21 + ((ulong)uVar6 & 0xffff) * 8);
  uVar11 = (ushort)uVar6;
  puVar4[1] = uVar11;
  sVar15 = (short)(uVar6 + 2);
  puVar4[2] = sVar15 * 4 | 2;
  sVar16 = (short)(uVar6 + 3);
  uVar12 = (undefined2)iVar17;
  *puVar5 = uVar12;
  puVar5[1] = uVar8;
  puVar5[2] = sVar16 * 4 | 2;
  uVar9 = *puVar4;
  puVar4 = (undefined2 *)(lVar21 + ((ulong)(uVar6 + 1) & 0xffff) * 8);
  puVar5 = (undefined2 *)(lVar21 + ((ulong)(uVar6 + 2) & 0xffff) * 8);
  *(undefined4 *)(puVar4 + 1) = 0x3ffff;
  *puVar4 = uVar9;
  *puVar5 = uVar12;
  sVar13 = (short)(uVar6 + 1);
  puVar5[1] = sVar13;
  puVar4 = (undefined2 *)(lVar21 + ((ulong)(uVar6 + 3) & 0xffff) * 8);
  puVar5[2] = uVar10 << 2 | 2;
  uVar9 = *(undefined2 *)(lVar21 + (ulong)uVar8 * 8);
  puVar5 = (undefined2 *)(lVar21 + ((ulong)(uVar6 + 4) & 0xffff) * 8);
  sVar14 = (short)(uVar6 + 4);
  puVar4[1] = sVar14;
  puVar4[2] = (ushort)(uVar6 << 2) | 2;
  lVar20 = lVar20 + (ulong)param_2 * 8;
  *puVar4 = uVar9;
  *puVar5 = uVar12;
  *(undefined4 *)(puVar5 + 1) = 0x3ffff;
  puVar1[1] = uVar11;
  *puVar1 = uVar11;
  psVar2 = (short *)(*(long *)(param_1 + 0x110) + ((ulong)uVar7 & 0xffff) * 8);
  *psVar2 = sVar15;
  psVar2[1] = sVar13;
  psVar2[2] = *(short *)(lVar20 + 4);
  psVar2 = (short *)(*(long *)(param_1 + 0x110) + (ulong)(uVar3 & 0xffff) * 8);
  *psVar2 = sVar16;
  psVar2[1] = sVar14;
  psVar2[2] = *(short *)(lVar20 + 4);
  *param_4 = (short)uVar7;
  *param_5 = (short)uVar3;
  return 1;
}


