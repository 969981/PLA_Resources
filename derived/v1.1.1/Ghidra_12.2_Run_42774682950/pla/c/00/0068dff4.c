/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068dff4; name: FUN_0068dff4
 */


long FUN_0068dff4(undefined *param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_0068e0f8;
LAB_0068e014:
    uVar3 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar3 = *(ulong *)(pbVar4 + 8);
    }
    lVar5 = uVar3 + (((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  else {
    if (*(long *)(pbVar4 + 8) != 0) goto LAB_0068e014;
LAB_0068e0f8:
    lVar5 = 0;
  }
  if (param_1 != PTR_DAT_04375918) {
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar2 = FUN_002e1558();
      lVar5 = lVar5 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar2 = FUN_00602744();
      lVar5 = lVar5 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar2 = FUN_00602744();
      lVar5 = lVar5 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      uVar3 = *(ulong *)(param_1 + 8);
      goto joined_r0x0068e0e8;
    }
  }
  uVar3 = *(ulong *)(param_1 + 8);
joined_r0x0068e0e8:
  if ((uVar3 & 1) != 0) {
    bVar1 = *(byte *)((uVar3 & 0xfffffffffffffffe) + 8);
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)((uVar3 & 0xfffffffffffffffe) + 0x10);
    }
    lVar5 = uVar3 + lVar5;
  }
  *(int *)(param_1 + 0x30) = (int)lVar5;
  return lVar5;
}


