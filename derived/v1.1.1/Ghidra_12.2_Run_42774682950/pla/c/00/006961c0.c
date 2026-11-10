/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006961c0; name: FUN_006961c0
 */


void FUN_006961c0(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar2 = FUN_00602744(*(undefined8 *)(param_1 + 0x10));
    iVar3 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x1c) == 1) {
      iVar3 = 2;
    }
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


