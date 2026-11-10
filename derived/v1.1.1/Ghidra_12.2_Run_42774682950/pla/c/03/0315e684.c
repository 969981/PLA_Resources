/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315e684; name: FUN_0315e684
 */


/* WARNING: Removing unreachable block (ram,0x0315e758) */

void FUN_0315e684(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(float *)(param_1 + 0x18) <= *(float *)(param_1 + 0x1c) + 0.001) {
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar2 = *(uint *)(param_1 + 0x30);
  uVar5 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    uVar3 = uVar5 & 3;
    if (uVar5 - 1 < 3) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      do {
        lVar6 = lVar4 * 4;
        lVar4 = lVar4 + 4;
        *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar6) = 0xffffffff;
        *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar6 + 4) = 0xffffffff;
        *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar6 + 8) = 0xffffffff;
        *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar6 + 0xc) = 0xffffffff;
      } while (uVar5 - uVar3 != lVar4);
    }
    if ((uVar2 & 3) != 0) {
      lVar4 = lVar4 << 2;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar4) = 0xffffffff;
        uVar3 = uVar3 - 1;
        lVar4 = lVar4 + 4;
      } while (uVar3 != 0);
    }
  }
  uVar2 = *(uint *)(param_1 + 0x58);
  if (0 < (int)uVar2) {
    if (uVar2 == 1) {
      lVar4 = 0;
    }
    else {
      lVar6 = 0;
      lVar4 = 0;
      do {
        *(undefined2 *)(*(long *)(param_1 + 0x50) + lVar6) = 0xff00;
        lVar4 = lVar4 + 2;
        lVar1 = *(long *)(param_1 + 0x50) + lVar6;
        lVar6 = lVar6 + 4;
        *(undefined2 *)(lVar1 + 2) = 0xff00;
      } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar4);
      if ((uVar2 & 1) == 0) goto LAB_0315e7a0;
    }
    *(undefined2 *)(*(long *)(param_1 + 0x50) + lVar4 * 2) = 0xff00;
  }
LAB_0315e7a0:
  uVar2 = *(uint *)(param_1 + 0x68);
  uVar5 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    uVar3 = uVar5 & 3;
    if (uVar5 - 1 < 3) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x60) + lVar4) = 0xff;
        *(undefined1 *)(*(long *)(param_1 + 0x60) + lVar4 + 1) = 0xff;
        *(undefined1 *)(*(long *)(param_1 + 0x60) + lVar4 + 2) = 0xff;
        lVar6 = *(long *)(param_1 + 0x60) + lVar4;
        lVar4 = lVar4 + 4;
        *(undefined1 *)(lVar6 + 3) = 0xff;
      } while (uVar5 - uVar3 != lVar4);
    }
    if ((uVar2 & 3) != 0) {
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x60) + lVar4) = 0xff;
        lVar4 = lVar4 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}


