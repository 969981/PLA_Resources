/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0296eaa8; name: FUN_0296eaa8
 */


undefined1 FUN_0296eaa8(long param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x30);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  if (uVar7 < 0x60) {
    do {
      lVar9 = *(long *)(lVar6 + (ulong)uVar7 * 0x20 + 8);
      if (*(short *)(lVar9 + 8) == 0) {
        if (uVar7 < 0x5f) {
          *(undefined2 *)(lVar9 + 8) = 1;
          *(int *)(lVar6 + 0xc08) = *(int *)(lVar6 + 0xc08) + 1;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      *(uint *)(lVar6 + 0xc08) = uVar7;
    } while (uVar7 != 0x60);
  }
  lVar6 = *(long *)(lVar4 + 0x50);
  uVar7 = *(uint *)(lVar6 + 0x408);
  if (uVar7 < 0x1f) {
    *(uint *)(lVar6 + 0x408) = uVar7 + 1;
    lVar6 = *(long *)(lVar4 + 0x50);
    uVar7 = *(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar6 + (ulong)uVar7 * 0x20 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar6 + 0x30);
  plVar8 = (long *)(lVar4 + (ulong)*(uint *)(lVar4 + 0xc08) * 0x20 + 8);
  uVar5 = (ulong)*(uint *)(lVar4 + 0xc08);
  do {
    uVar10 = uVar5;
    if (0x5f < uVar10) goto LAB_0296ebc4;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_0296eb8c;
    plVar8 = plVar8 + 4;
    uVar5 = uVar10 + 1;
  } while (*(short *)(lVar9 + 8) != 0x48);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_0296eb8c:
    lVar4 = *(long *)(lVar4 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 8) = 0x48;
      *(undefined8 *)(lVar4 + 0xc) = 0;
      *(undefined8 *)(lVar4 + 0x14) = 0;
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      *(undefined1 *)(lVar4 + 10) = 1;
      *(long *)(*(long *)(lVar6 + 0x70) + 0x248) = lVar4;
      lVar6 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0296ebc4:
  iVar3 = *(int *)(lVar6 + 0x78) + 1;
  *(int *)(lVar6 + 0x78) = iVar3;
  lVar4 = *(long *)(*(long *)(*(long *)(lVar6 + 8) + 0x88) + 0x14c8);
  if (lVar4 != 0) {
    do {
      lVar9 = FUN_02999e6c(lVar6,0x96,8,1,lVar4);
      if (lVar9 == 0) break;
      if ((*(byte *)(lVar9 + 0x3f) >> 5 & 1) == 0) {
        lVar9 = *(long *)(lVar4 + 0x18);
      }
      lVar4 = lVar9;
    } while (lVar9 != 0);
    iVar3 = *(int *)(lVar6 + 0x78);
  }
  *(int *)(lVar6 + 0x78) = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    for (lVar4 = *(long *)(*(long *)(*(long *)(lVar6 + 8) + 0x88) + 0x14c8); lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 0x18)) {
      *(uint *)(lVar4 + 0x3c) = (uint)*(ushort *)(lVar4 + 0x3e) << 0x10;
    }
  }
  lVar6 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(*(long *)(lVar6 + 0x70) + 0x248);
  if (lVar4 == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = *(int *)(lVar4 + 0xc) == 0;
  }
  lVar4 = *(long *)(lVar6 + 0x50);
  if (*(uint *)(lVar4 + 0x408) == 0) {
    uVar5 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar4 + 0x408) = *(int *)(lVar4 + 0x408) + -1;
    lVar4 = *(long *)(lVar6 + 0x50);
    uVar5 = (ulong)*(uint *)(lVar4 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar4 + uVar5 * 0x20 + 8);
  lVar4 = *(long *)(lVar6 + 0x30);
  uVar7 = *(uint *)(lVar4 + 0xc08);
  if (uVar7 != 0) {
    if ((uVar7 & 0xffff) < 0x60) {
      uVar5 = (ulong)uVar7 & 0xffff;
      plVar8 = (long *)(lVar4 + uVar5 * 0x20 + 8);
      do {
        uVar5 = uVar5 + 1;
        if (*(short *)(*plVar8 + 8) == 0) break;
        *(undefined2 *)(*plVar8 + 8) = 0;
        plVar8 = plVar8 + 4;
      } while (((uint)uVar5 & 0xffff) != 0x60);
      uVar7 = *(uint *)(lVar4 + 0xc08);
    }
    *(uint *)(lVar4 + 0xc08) = uVar7 - 1;
    *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar7 - 1) * 0x20 + 8) + 8) = 0;
    uVar5 = (ulong)*(uint *)(lVar4 + 0xc08);
    do {
      if (uVar5 == 0) goto LAB_0296ed54;
      uVar5 = uVar5 - 1;
      *(int *)(lVar4 + 0xc08) = (int)uVar5;
    } while (*(short *)(*(long *)(lVar4 + (uVar5 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar4 + 0xc08) = (int)uVar5 + 1;
  }
LAB_0296ed54:
  if (bVar1) {
    uVar2 = **(undefined1 **)(*(long *)(param_1 + 0x18) + 0x28);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


