/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032647f0; name: FUN_032647f0
 */


int FUN_032647f0(long param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  undefined2 *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar5 = *(int *)(param_1 + 0x138) + -1;
    if (*(int *)(*(long *)(param_1 + 0x130) + (long)iVar5 * 4) == param_2) goto LAB_03264838;
  }
  iVar5 = FUN_032645d0(param_1,param_2);
LAB_03264838:
  iVar4 = *(int *)(param_1 + 0x128);
  if (iVar4 < (int)(*(uint *)(param_1 + 300) & 0x3fffffff)) {
    lVar6 = *(long *)(param_1 + 0x120);
  }
  else {
    lVar6 = FUN_03265628(PTR_PTR_0434a080,iVar4 + 1,*(undefined8 *)(param_1 + 0x120),iVar4,
                         param_1 + 300);
    *(long *)(param_1 + 0x120) = lVar6;
  }
  uVar1 = (ushort)iVar4;
  puVar2 = (undefined2 *)(lVar6 + (ulong)uVar1 * 8);
  *(int *)(param_1 + 0x128) = iVar4 + 1;
  *puVar2 = (short)iVar5;
  *(undefined4 *)(puVar2 + 1) = 0x3ffff;
  iVar5 = *(int *)(param_1 + 0x118);
  if (iVar5 < (int)(*(uint *)(param_1 + 0x11c) & 0x3fffffff)) {
    lVar6 = *(long *)(param_1 + 0x110);
  }
  else {
    lVar6 = FUN_032656b0(PTR_PTR_0434a080,iVar5 + 1,*(undefined8 *)(param_1 + 0x110),iVar5,
                         param_1 + 0x11c);
    *(long *)(param_1 + 0x110) = lVar6;
  }
  puVar3 = (ushort *)(lVar6 + (ulong)(ushort)iVar5 * 8);
  *(int *)(param_1 + 0x118) = iVar5 + 1;
  *puVar3 = uVar1;
  puVar3[1] = uVar1;
  puVar3[2] = param_3;
  return iVar5;
}


