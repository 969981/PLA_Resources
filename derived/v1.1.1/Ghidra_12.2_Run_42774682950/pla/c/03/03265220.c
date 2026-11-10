/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03265220; name: FUN_03265220
 */


undefined8 FUN_03265220(long param_1,long param_2,int param_3,undefined4 param_4,ushort *param_5)

{
  undefined2 *puVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ushort uVar7;
  
  iVar2 = *(int *)(param_1 + 0x128);
  if (iVar2 < (int)(*(uint *)(param_1 + 300) & 0x3fffffff)) {
    lVar6 = *(long *)(param_1 + 0x120);
  }
  else {
    lVar6 = FUN_03265628(PTR_PTR_0434a080,iVar2 + 1,*(undefined8 *)(param_1 + 0x120),iVar2,
                         param_1 + 300);
    *(long *)(param_1 + 0x120) = lVar6;
  }
  uVar7 = *(ushort *)(param_2 + 2);
  if (*(int *)(param_1 + 0x138) != 0) {
    uVar4 = *(int *)(param_1 + 0x138) - 1;
    if (*(int *)(*(long *)(param_1 + 0x130) + (long)(int)uVar4 * 4) == param_3) goto LAB_032652c0;
  }
  uVar4 = FUN_032645d0(param_1,param_3);
LAB_032652c0:
  if ((uint)*(ushort *)(lVar6 + (ulong)uVar7 * 8) == (uVar4 & 0xffff)) {
    uVar7 = 0xffff;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x128);
    if (iVar2 < (int)(*(uint *)(param_1 + 300) & 0x3fffffff)) {
      lVar5 = *(long *)(param_1 + 0x120);
    }
    else {
      lVar5 = FUN_03265628(PTR_PTR_0434a080,iVar2 + 1,*(undefined8 *)(param_1 + 0x120),iVar2,
                           param_1 + 300);
      *(long *)(param_1 + 0x120) = lVar5;
    }
    lVar6 = lVar6 + (ulong)uVar7 * 8;
    *(int *)(param_1 + 0x128) = iVar2 + 1;
    uVar3 = (ushort)iVar2;
    *(ushort *)(lVar6 + 2) = uVar3;
    puVar1 = (undefined2 *)(lVar5 + (ulong)uVar3 * 8);
    *(undefined4 *)(lVar6 + 4) = param_4;
    *puVar1 = (short)uVar4;
    *(undefined4 *)(puVar1 + 1) = 0x3ffff;
    *(ushort *)(param_2 + 2) = uVar3;
  }
  *param_5 = uVar7;
  return 1;
}


