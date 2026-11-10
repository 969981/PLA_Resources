/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02993478; name: FUN_02993478
 */


void FUN_02993478(long param_1,uint param_2)

{
  short sVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x30);
  uVar8 = *(uint *)(lVar6 + 0xc08);
  if (uVar8 < 0x60) {
    do {
      lVar10 = *(long *)(lVar6 + (ulong)uVar8 * 0x20 + 8);
      if (*(short *)(lVar10 + 8) == 0) {
        if (uVar8 < 0x5f) {
          *(undefined2 *)(lVar10 + 8) = 1;
          *(int *)(lVar6 + 0xc08) = *(int *)(lVar6 + 0xc08) + 1;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      *(uint *)(lVar6 + 0xc08) = uVar8;
    } while (uVar8 != 0x60);
  }
  lVar6 = *(long *)(lVar4 + 0x50);
  uVar8 = *(uint *)(lVar6 + 0x408);
  if (uVar8 < 0x1f) {
    *(uint *)(lVar6 + 0x408) = uVar8 + 1;
    lVar6 = *(long *)(lVar4 + 0x50);
    uVar8 = *(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar6 + (ulong)uVar8 * 0x20 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar6 + 0x30);
  uVar7 = (ulong)*(uint *)(lVar4 + 0xc08);
  uVar5 = uVar7 << 5 | 8;
  uVar2 = uVar7;
  do {
    uVar11 = uVar2;
    if (0x5f < uVar11) goto LAB_029935a0;
    sVar1 = *(short *)(*(long *)(lVar4 + uVar5) + 8);
    if (sVar1 == 0) goto LAB_02993564;
    uVar5 = uVar5 + 0x20;
    uVar2 = uVar11 + 1;
  } while (sVar1 != 0x3e);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_02993564:
    lVar10 = *(long *)(lVar4 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x3e;
      *(uint *)(lVar10 + 0xc) = param_2 & 0xff;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x70) + 0x1f8) = lVar10;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar4 = *(long *)(lVar6 + 0x30);
      uVar7 = (ulong)*(uint *)(lVar4 + 0xc08);
    }
  }
LAB_029935a0:
  plVar9 = (long *)(lVar4 + uVar7 * 0x20 + 8);
  do {
    uVar5 = uVar7;
    if (0x5f < uVar5) goto LAB_02993614;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_029935dc;
    plVar9 = plVar9 + 4;
    uVar7 = uVar5 + 1;
  } while (*(short *)(lVar10 + 8) != 0x48);
  if ((int)(uVar5 + 1) - 1U < 0x60) {
LAB_029935dc:
    lVar4 = *(long *)(lVar4 + (uVar5 & 0xffffffff) * 0x20 + 8);
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
LAB_02993614:
  iVar3 = *(int *)(lVar6 + 0x78) + 1;
  *(int *)(lVar6 + 0x78) = iVar3;
  lVar4 = *(long *)(*(long *)(*(long *)(lVar6 + 8) + 0x88) + 0x14c8);
  if (lVar4 != 0) {
    do {
      lVar10 = FUN_02999e6c(lVar6,0x9a,8,1,lVar4);
      if (lVar10 == 0) break;
      if ((*(byte *)(lVar10 + 0x3f) >> 5 & 1) == 0) {
        lVar10 = *(long *)(lVar4 + 0x18);
      }
      lVar4 = lVar10;
    } while (lVar10 != 0);
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
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0xc) == 0)) {
    iVar3 = *(int *)(lVar6 + 0x78) + 1;
    *(int *)(lVar6 + 0x78) = iVar3;
    lVar4 = *(long *)(*(long *)(*(long *)(lVar6 + 8) + 0x88) + 0x14c8);
    if (lVar4 != 0) {
      do {
        lVar10 = FUN_02999e6c(lVar6,0x9b,8,1,lVar4);
        if (lVar10 == 0) break;
        if ((*(byte *)(lVar10 + 0x3f) >> 5 & 1) == 0) {
          lVar10 = *(long *)(lVar4 + 0x18);
        }
        lVar4 = lVar10;
      } while (lVar10 != 0);
      iVar3 = *(int *)(lVar6 + 0x78);
    }
    *(int *)(lVar6 + 0x78) = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      for (lVar4 = *(long *)(*(long *)(*(long *)(lVar6 + 8) + 0x88) + 0x14c8); lVar4 != 0;
          lVar4 = *(long *)(lVar4 + 0x18)) {
        *(uint *)(lVar4 + 0x3c) = (uint)*(ushort *)(lVar4 + 0x3e) << 0x10;
      }
    }
  }
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x50);
  if (*(uint *)(lVar6 + 0x408) == 0) {
    uVar5 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar6 + (ulong)*(uint *)(lVar6 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar6 + 0x408) = *(int *)(lVar6 + 0x408) + -1;
    lVar6 = *(long *)(lVar4 + 0x50);
    uVar5 = (ulong)*(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar6 + uVar5 * 0x20 + 8);
  lVar4 = *(long *)(lVar4 + 0x30);
  uVar8 = *(uint *)(lVar4 + 0xc08);
  if (uVar8 != 0) {
    if ((uVar8 & 0xffff) < 0x60) {
      uVar5 = (ulong)uVar8 & 0xffff;
      plVar9 = (long *)(lVar4 + uVar5 * 0x20 + 8);
      do {
        uVar5 = uVar5 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar5 & 0xffff) != 0x60);
      uVar8 = *(uint *)(lVar4 + 0xc08);
    }
    *(uint *)(lVar4 + 0xc08) = uVar8 - 1;
    *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar8 - 1) * 0x20 + 8) + 8) = 0;
    uVar5 = (ulong)*(uint *)(lVar4 + 0xc08);
    do {
      if (uVar5 == 0) {
        return;
      }
      uVar5 = uVar5 - 1;
      *(int *)(lVar4 + 0xc08) = (int)uVar5;
    } while (*(short *)(*(long *)(lVar4 + (uVar5 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar4 + 0xc08) = (int)uVar5 + 1;
  }
  return;
}


