/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00698c88; name: FUN_00698c88
 */


void FUN_00698c88(undefined *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if ((param_1 == PTR_DAT_04375d68) || (*(long *)(param_1 + 0x10) == 0)) {
    iVar3 = 0;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    uVar2 = FUN_0068ed18();
    iVar3 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if ((uVar4 & 1) == 0) {
    *(int *)(param_1 + 0x18) = iVar3;
    return;
  }
  bVar1 = *(byte *)((uVar4 & 0xfffffffffffffffe) + 8);
  if ((bVar1 & 1) == 0) {
    *(uint *)(param_1 + 0x18) = (uint)(bVar1 >> 1) + iVar3;
    return;
  }
  *(int *)(param_1 + 0x18) = (int)*(undefined8 *)((uVar4 & 0xfffffffffffffffe) + 0x10) + iVar3;
  return;
}


