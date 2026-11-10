/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309f0f0; name: FUN_0309f0f0
 */


undefined8 * FUN_0309f0f0(long param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  iVar2 = *(int *)(param_1 + 0x184);
  iVar1 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x184) = iVar2 + 1;
  if (iVar2 < iVar1) {
    *param_2 = 0;
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar2 * 0x70);
  }
  else {
    *param_2 = 1;
    iVar5 = *(int *)(param_1 + 0x40);
    lVar4 = *(long *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x120) = 1;
    iVar2 = iVar5 + 1;
    if ((int)(*(uint *)(param_1 + 0x44) & 0x3fffffff) <= iVar5) {
      lVar4 = FUN_030a3254(PTR_PTR_0434a080,iVar2);
      iVar5 = *(int *)(param_1 + 0x40);
      *(long *)(param_1 + 0x38) = lVar4;
    }
    puVar3 = (undefined8 *)(lVar4 + (long)iVar5 * 0x70);
    *(int *)(param_1 + 0x40) = iVar2;
    *puVar3 = 0xffffff00ffffff;
    *(undefined4 *)(puVar3 + 1) = 0x7fffffff;
    *(undefined2 *)(puVar3 + 0xc) = 0;
    *(undefined8 *)((long)puVar3 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar3 + 0x14) = 0xffffffff;
    if (iVar1 < 1) {
      *(undefined4 *)(lVar4 + (long)iVar5 * 0x70 + 0x14) = 0;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x38) + (long)(iVar1 + -1) * 0x70;
      lVar4 = lVar4 + (long)iVar5 * 0x70;
      *(ushort *)(lVar4 + 0x14) = *(short *)(lVar6 + 0x14) + (ushort)*(byte *)(lVar6 + 0x19);
      lVar6 = *(long *)(param_1 + 0x38) + (long)(iVar1 + -1) * 0x70;
      *(ushort *)(lVar4 + 0x16) = *(short *)(lVar6 + 0x16) + (ushort)*(byte *)(lVar6 + 0x18);
    }
  }
  return puVar3;
}


