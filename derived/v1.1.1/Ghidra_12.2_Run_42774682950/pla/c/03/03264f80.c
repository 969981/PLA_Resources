/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03264f80; name: FUN_03264f80
 */


undefined8
FUN_03264f80(long param_1,ushort *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            ushort *param_6,ushort *param_7)

{
  undefined2 *puVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ushort uVar7;
  long lVar8;
  ushort uVar9;
  ulong uVar10;
  
  iVar2 = *(int *)(param_1 + 0x128);
  if ((int)(*(uint *)(param_1 + 300) & 0x3fffffff) <= iVar2) {
    uVar5 = FUN_03265628(PTR_PTR_0434a080,iVar2 + 1,*(undefined8 *)(param_1 + 0x120),iVar2,
                         param_1 + 300);
    *(undefined8 *)(param_1 + 0x120) = uVar5;
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    uVar4 = *(int *)(param_1 + 0x138) - 1;
    if (*(int *)(*(long *)(param_1 + 0x130) + (long)(int)uVar4 * 4) == param_3) goto LAB_0326501c;
  }
  uVar4 = FUN_032645d0(param_1,param_3);
LAB_0326501c:
  uVar3 = *param_2;
  lVar8 = *(long *)(param_1 + 0x120);
  uVar9 = param_2[1];
  uVar10 = (ulong)uVar9;
  uVar7 = uVar9;
  if ((uint)*(ushort *)(lVar8 + (ulong)uVar3 * 8) == (uVar4 & 0xffff)) {
    lVar8 = lVar8 + uVar10 * 8;
    *(ushort *)(lVar8 + 2) = uVar3;
    *(undefined4 *)(lVar8 + 4) = param_4;
    param_2[1] = uVar3;
    uVar9 = 0xffff;
  }
  else if ((uint)*(ushort *)(lVar8 + uVar10 * 8) == (uVar4 & 0xffff)) {
    lVar8 = lVar8 + uVar10 * 8;
    *(ushort *)(lVar8 + 2) = uVar3;
    *(undefined4 *)(lVar8 + 4) = param_5;
    *param_2 = uVar9;
    uVar7 = 0xffff;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x128);
    if (iVar2 < (int)(*(uint *)(param_1 + 300) & 0x3fffffff)) {
      lVar6 = lVar8;
    }
    else {
      lVar6 = FUN_03265628(PTR_PTR_0434a080,iVar2 + 1,lVar8,iVar2,param_1 + 300);
      *(long *)(param_1 + 0x120) = lVar6;
    }
    lVar8 = lVar8 + uVar10 * 8;
    *(int *)(param_1 + 0x128) = iVar2 + 1;
    uVar9 = (ushort)iVar2;
    *(ushort *)(lVar8 + 2) = uVar9;
    *(undefined4 *)(lVar8 + 4) = param_4;
    puVar1 = (undefined2 *)(lVar6 + (ulong)uVar9 * 8);
    *puVar1 = (short)uVar4;
    puVar1[1] = uVar3;
    *(undefined4 *)(puVar1 + 2) = param_5;
    *param_2 = uVar9;
    param_2[1] = uVar9;
  }
  *param_6 = uVar7;
  *param_7 = uVar9;
  return 1;
}


