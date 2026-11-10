/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006958b4; name: FUN_006958b4
 */


long FUN_006958b4(undefined *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  pbVar3 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
LAB_00695948:
      lVar5 = 0;
      goto joined_r0x00695910;
    }
  }
  else if (*(long *)(pbVar3 + 8) == 0) goto LAB_00695948;
  uVar4 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar4 = *(ulong *)(pbVar3 + 8);
  }
  lVar5 = uVar4 + (((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
joined_r0x00695910:
  if ((param_1 != PTR_DAT_04375c78) && (lVar6 = *(long *)(param_1 + 0x18), lVar6 != 0)) {
    if (*(int *)(lVar6 + 0x1c) == 2) {
      lVar2 = FUN_00602744(*(undefined8 *)(lVar6 + 0x10));
      lVar2 = lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
      uVar4 = *(ulong *)(lVar6 + 8);
    }
    else if (*(int *)(lVar6 + 0x1c) == 1) {
      lVar2 = 2;
      uVar4 = *(ulong *)(lVar6 + 8);
    }
    else {
      lVar2 = 0;
      uVar4 = *(ulong *)(lVar6 + 8);
    }
    if ((uVar4 & 1) != 0) {
      bVar1 = *(byte *)((uVar4 & 0xfffffffffffffffe) + 8);
      if ((bVar1 & 1) == 0) {
        uVar4 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar4 = *(ulong *)((uVar4 & 0xfffffffffffffffe) + 0x10);
      }
      lVar2 = uVar4 + lVar2;
    }
    *(uint *)(lVar6 + 0x18) = (uint)lVar2;
    lVar5 = lVar5 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar4 + 8);
    if ((bVar1 & 1) == 0) {
      uVar4 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar4 = *(ulong *)(uVar4 + 0x10);
    }
    lVar5 = uVar4 + lVar5;
  }
  *(int *)(param_1 + 0x20) = (int)lVar5;
  return lVar5;
}


