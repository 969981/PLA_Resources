/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02979a0c; name: FUN_02979a0c
 */


void FUN_02979a0c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar2 + 0x30);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  if (uVar5 < 0x60) {
    do {
      lVar7 = *(long *)(lVar4 + (ulong)uVar5 * 0x20 + 8);
      if (*(short *)(lVar7 + 8) == 0) {
        if (uVar5 < 0x5f) {
          *(undefined2 *)(lVar7 + 8) = 1;
          *(int *)(lVar4 + 0xc08) = *(int *)(lVar4 + 0xc08) + 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(lVar4 + 0xc08) = uVar5;
    } while (uVar5 != 0x60);
  }
  lVar4 = *(long *)(lVar2 + 0x50);
  uVar5 = *(uint *)(lVar4 + 0x408);
  if (uVar5 < 0x1f) {
    *(uint *)(lVar4 + 0x408) = uVar5 + 1;
    lVar4 = *(long *)(lVar2 + 0x50);
    uVar5 = *(uint *)(lVar4 + 0x408);
  }
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar4 + (ulong)uVar5 * 0x20 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar4 + 0x30);
  plVar6 = (long *)(lVar2 + (ulong)*(uint *)(lVar2 + 0xc08) * 0x20 + 8);
  uVar3 = (ulong)*(uint *)(lVar2 + 0xc08);
  do {
    uVar8 = uVar3;
    if (0x5f < uVar8) goto LAB_02979b28;
    lVar7 = *plVar6;
    if (*(short *)(lVar7 + 8) == 0) goto LAB_02979af4;
    plVar6 = plVar6 + 4;
    uVar3 = uVar8 + 1;
  } while (*(short *)(lVar7 + 8) != 2);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_02979af4:
    lVar2 = *(long *)(lVar2 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0xc) = (uint)*(byte *)(param_2 + 0x7d);
      *(undefined2 *)(lVar2 + 8) = 2;
      *(undefined1 *)(lVar2 + 10) = 4;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x70) + 0x18) = lVar2;
      lVar4 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02979b28:
  iVar1 = *(int *)(lVar4 + 0x78) + 1;
  *(int *)(lVar4 + 0x78) = iVar1;
  lVar2 = *(long *)(*(long *)(*(long *)(lVar4 + 8) + 0x88) + 0x14c8);
  if (lVar2 != 0) {
    do {
      lVar7 = FUN_02999e6c(lVar4,0x69,8,1,lVar2);
      if (lVar7 == 0) break;
      if ((*(byte *)(lVar7 + 0x3f) >> 5 & 1) == 0) {
        lVar7 = *(long *)(lVar2 + 0x18);
      }
      lVar2 = lVar7;
    } while (lVar7 != 0);
    iVar1 = *(int *)(lVar4 + 0x78);
  }
  *(int *)(lVar4 + 0x78) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    for (lVar2 = *(long *)(*(long *)(*(long *)(lVar4 + 8) + 0x88) + 0x14c8); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x18)) {
      *(uint *)(lVar2 + 0x3c) = (uint)*(ushort *)(lVar2 + 0x3e) << 0x10;
    }
  }
  lVar2 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar2 + 0x50);
  if (*(uint *)(lVar4 + 0x408) == 0) {
    uVar3 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar4 + 0x408) = *(int *)(lVar4 + 0x408) + -1;
    lVar4 = *(long *)(lVar2 + 0x50);
    uVar3 = (ulong)*(uint *)(lVar4 + 0x408);
  }
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar4 + uVar3 * 0x20 + 8);
  lVar2 = *(long *)(lVar2 + 0x30);
  uVar5 = *(uint *)(lVar2 + 0xc08);
  if (uVar5 != 0) {
    if ((uVar5 & 0xffff) < 0x60) {
      uVar3 = (ulong)uVar5 & 0xffff;
      plVar6 = (long *)(lVar2 + uVar3 * 0x20 + 8);
      do {
        uVar3 = uVar3 + 1;
        if (*(short *)(*plVar6 + 8) == 0) break;
        *(undefined2 *)(*plVar6 + 8) = 0;
        plVar6 = plVar6 + 4;
      } while (((uint)uVar3 & 0xffff) != 0x60);
      uVar5 = *(uint *)(lVar2 + 0xc08);
    }
    *(uint *)(lVar2 + 0xc08) = uVar5 - 1;
    *(undefined2 *)(*(long *)(lVar2 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
    uVar3 = (ulong)*(uint *)(lVar2 + 0xc08);
    do {
      if (uVar3 == 0) {
        return;
      }
      uVar3 = uVar3 - 1;
      *(int *)(lVar2 + 0xc08) = (int)uVar3;
    } while (*(short *)(*(long *)(lVar2 + (uVar3 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar2 + 0xc08) = (int)uVar3 + 1;
  }
  return;
}


