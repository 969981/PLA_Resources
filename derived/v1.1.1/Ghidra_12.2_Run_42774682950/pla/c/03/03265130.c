/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03265130; name: FUN_03265130
 */


undefined8
FUN_03265130(long param_1,ushort *param_2,int param_3,undefined4 param_4,undefined2 *param_5)

{
  undefined2 *puVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  
  uVar2 = *param_2;
  if (*(int *)(param_1 + 0x138) != 0) {
    uVar3 = *(int *)(param_1 + 0x138) - 1;
    if (*(int *)(*(long *)(param_1 + 0x130) + (long)(int)uVar3 * 4) == param_3) goto LAB_03265188;
  }
  uVar3 = FUN_032645d0(param_1,param_3);
LAB_03265188:
  lVar4 = *(long *)(param_1 + 0x120);
  if ((uint)*(ushort *)(lVar4 + (ulong)uVar2 * 8) == (uVar3 & 0xffff)) {
    iVar5 = 0xffff;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x128);
    if ((int)(*(uint *)(param_1 + 300) & 0x3fffffff) <= iVar5) {
      lVar4 = FUN_03265628(PTR_PTR_0434a080,iVar5 + 1,lVar4,iVar5,param_1 + 300);
      *(long *)(param_1 + 0x120) = lVar4;
    }
    puVar1 = (undefined2 *)(lVar4 + (ulong)(ushort)iVar5 * 8);
    *(int *)(param_1 + 0x128) = iVar5 + 1;
    *puVar1 = (short)uVar3;
    puVar1[1] = uVar2;
    *(undefined4 *)(puVar1 + 2) = param_4;
    *param_2 = (ushort)iVar5;
  }
  *param_5 = (short)iVar5;
  return 1;
}


