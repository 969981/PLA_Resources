/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00693da4; name: FUN_00693da4
 */


long FUN_00693da4(undefined *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_1 == PTR_DAT_04375d80) {
    lVar2 = 0;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar2 = 0;
      lVar3 = *(long *)(param_1 + 0x18);
    }
    else {
      lVar2 = FUN_0068dff4();
      lVar2 = lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      lVar3 = *(long *)(param_1 + 0x18);
    }
    if (lVar3 != 0) {
      lVar3 = FUN_00603ab4();
      lVar2 = lVar2 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x1c) == 2) {
        lVar4 = FUN_00602744(*(undefined8 *)(lVar3 + 0x10));
        lVar4 = lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
        uVar5 = *(ulong *)(lVar3 + 8);
      }
      else if (*(int *)(lVar3 + 0x1c) == 1) {
        lVar4 = 2;
        uVar5 = *(ulong *)(lVar3 + 8);
      }
      else {
        lVar4 = 0;
        uVar5 = *(ulong *)(lVar3 + 8);
      }
      if ((uVar5 & 1) != 0) {
        bVar1 = *(byte *)((uVar5 & 0xfffffffffffffffe) + 8);
        if ((bVar1 & 1) == 0) {
          uVar5 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar5 = *(ulong *)((uVar5 & 0xfffffffffffffffe) + 0x10);
        }
        lVar4 = uVar5 + lVar4;
      }
      *(uint *)(lVar3 + 0x18) = (uint)lVar4;
      lVar2 = lVar2 + lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if ((uVar5 & 1) != 0) {
    bVar1 = *(byte *)((uVar5 & 0xfffffffffffffffe) + 8);
    if ((bVar1 & 1) == 0) {
      uVar5 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar5 = *(ulong *)((uVar5 & 0xfffffffffffffffe) + 0x10);
    }
    lVar2 = uVar5 + lVar2;
  }
  *(int *)(param_1 + 0x28) = (int)lVar2;
  return lVar2;
}


