/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d8454; name: FUN_008d8454
 */


void FUN_008d8454(long param_1,ulong *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  bVar2 = *(byte *)(param_1 + 0x88);
  uVar3 = 3;
  if (0x17 < bVar2) {
    uVar3 = (uint)(bVar2 < 0x1e) << 2;
  }
  uVar1 = 1;
  if (0x11 < bVar2) {
    uVar1 = uVar3;
  }
  uVar3 = 2;
  if (0xb < bVar2) {
    uVar3 = uVar1;
  }
  lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0xd0) + 0x68
                                                 ) + 0x98) + 0x370) + 8);
  uVar1 = 0;
  if (5 < bVar2) {
    uVar1 = uVar3;
  }
  uVar3 = (uint)*(byte *)(lVar5 + (ulong)uVar1 * 0x38 + 0x38);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      if (*(byte *)(*(long *)(lVar5 + (ulong)uVar1 * 0x38 + (ulong)(uVar4 & 0xff) * 8 + 8) + 0x7d)
          == bVar2) {
        uVar3 = FUN_0294753c();
        if ((uVar3 & 0xff) != 6) goto LAB_008d8500;
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  uVar3 = 6;
LAB_008d8500:
  *param_2 = (ulong)(uVar3 << 9) & 0x1e00 | ((ulong)*(byte *)(param_1 + 0x7c) & 0x1f) << 4 |
             (ulong)(uint)(*(int *)(param_1 + 0x8c) << 0xd) & 0x1fffe000 | 1;
  return;
}


