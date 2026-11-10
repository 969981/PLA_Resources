/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008404a8; name: FUN_008404a8
 */


void FUN_008404a8(long param_1,void *param_2,uint param_3,short param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  ushort uVar7;
  
  if (param_3 < 8) {
    return;
  }
  bVar2 = *(byte *)((long)param_2 + 3);
  bVar3 = *(byte *)((long)param_2 + 4);
  if (bVar2 <= bVar3) {
    return;
  }
  uVar7 = *(ushort *)((long)param_2 + 1) >> 8 | *(ushort *)((long)param_2 + 1) << 8;
  uVar4 = *(undefined1 *)((long)param_2 + 5);
  uVar5 = *(undefined1 *)((long)param_2 + 6);
  if (((*(short *)(param_1 + 0x5ec) == param_4) &&
      (uVar6 = *(ushort *)(param_1 + 0x5e8), uVar6 != 0xffff)) && (uVar7 <= uVar6)) {
    if (uVar6 != uVar7) {
      return;
    }
    if (*(byte *)(param_1 + 0x5ea) == bVar2) {
      if ((1 << (ulong)(bVar3 & 0x1f) & (uint)*(byte *)(param_1 + 0x5eb)) != 0) {
        return;
      }
      goto LAB_00840584;
    }
  }
  memset(*(void **)(param_1 + 0x18),0,(ulong)*(uint *)(param_1 + 0x20));
  memcpy(*(void **)(param_1 + 0x18),param_2,3);
  *(undefined4 *)(param_1 + 0x24) = 3;
  *(ushort *)(param_1 + 0x5e8) = uVar7;
  *(byte *)(param_1 + 0x5ea) = bVar2;
  *(undefined1 *)(param_1 + 0x5eb) = 0;
  *(short *)(param_1 + 0x5ec) = param_4;
LAB_00840584:
  uVar7 = CONCAT11(uVar4,uVar5);
  uVar1 = (param_3 - 7) + (uint)uVar7;
  if (uVar1 <= *(uint *)(param_1 + 0x20)) {
    memcpy((void *)(*(long *)(param_1 + 0x18) + (ulong)uVar7),(void *)((long)param_2 + 7),
           (ulong)(param_3 - 7));
    if (*(uint *)(param_1 + 0x24) < uVar1) {
      *(uint *)(param_1 + 0x24) = uVar1;
    }
    *(byte *)(param_1 + 0x5eb) = *(byte *)(param_1 + 0x5eb) | (byte)(1 << (ulong)(bVar3 & 0x1f));
  }
  return;
}


