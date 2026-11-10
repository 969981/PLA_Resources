/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03264900; name: FUN_03264900
 */


int FUN_03264900(long param_1,ushort param_2,int param_3)

{
  ushort *puVar1;
  short *psVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  ushort uVar6;
  undefined2 uVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  uVar5 = *(uint *)(param_1 + 0x128);
  iVar3 = uVar5 + 3;
  if ((int)(*(uint *)(param_1 + 300) & 0x3fffffff) < iVar3) {
    uVar11 = FUN_03265628(PTR_PTR_0434a080,iVar3,*(undefined8 *)(param_1 + 0x120),uVar5,
                          param_1 + 300);
    *(undefined8 *)(param_1 + 0x120) = uVar11;
  }
  *(int *)(param_1 + 0x128) = iVar3;
  iVar3 = *(int *)(param_1 + 0x118);
  if (iVar3 < (int)(*(uint *)(param_1 + 0x11c) & 0x3fffffff)) {
    lVar12 = *(long *)(param_1 + 0x110);
  }
  else {
    lVar12 = FUN_032656b0(PTR_PTR_0434a080,iVar3 + 1,*(undefined8 *)(param_1 + 0x110),iVar3,
                          param_1 + 0x11c);
    *(long *)(param_1 + 0x110) = lVar12;
  }
  puVar1 = (ushort *)(lVar12 + (ulong)param_2 * 8);
  *(int *)(param_1 + 0x118) = iVar3 + 1;
  uVar6 = *puVar1;
  lVar13 = *(long *)(param_1 + 0x120);
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar10 = *(int *)(param_1 + 0x138) + -1;
    if (*(int *)(*(long *)(param_1 + 0x130) + (long)iVar10 * 4) == param_3) goto LAB_03264a40;
  }
  iVar10 = FUN_032645d0(param_1,param_3);
LAB_03264a40:
  puVar4 = (undefined2 *)(lVar13 + ((ulong)uVar5 & 0xffff) * 8);
  *puVar4 = (short)iVar10;
  sVar9 = (short)(uVar5 + 1);
  puVar4[1] = uVar6;
  puVar4[2] = sVar9 * 4 | 2;
  uVar7 = *(undefined2 *)(lVar13 + (ulong)uVar6 * 8);
  puVar4 = (undefined2 *)(lVar13 + ((ulong)(uVar5 + 1) & 0xffff) * 8);
  puVar4[2] = (ushort)(uVar5 << 2) | 2;
  sVar8 = (short)(uVar5 + 2);
  puVar4[1] = sVar8;
  *puVar4 = uVar7;
  puVar4 = (undefined2 *)(lVar13 + ((ulong)(uVar5 + 2) & 0xffff) * 8);
  *puVar4 = (short)iVar10;
  *(undefined4 *)(puVar4 + 1) = 0x3ffff;
  *puVar1 = (ushort)uVar5;
  psVar2 = (short *)(*(long *)(param_1 + 0x110) + (ulong)(ushort)iVar3 * 8);
  *psVar2 = sVar9;
  psVar2[1] = sVar8;
  psVar2[2] = *(short *)(lVar12 + (ulong)param_2 * 8 + 4);
  return iVar3;
}


