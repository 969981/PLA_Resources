/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0298c79c; name: FUN_0298c79c
 */


undefined4 FUN_0298c79c(long param_1,long param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined4 uVar15;
  
  lVar7 = *(long *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_2 + 0x36e);
  lVar8 = *(long *)(lVar7 + 0x30);
  uVar11 = *(uint *)(lVar8 + 0xc08);
  if (uVar11 < 0x60) {
    do {
      lVar12 = *(long *)(lVar8 + (ulong)uVar11 * 0x20 + 8);
      if (*(short *)(lVar12 + 8) == 0) {
        if (uVar11 < 0x5f) {
          *(undefined2 *)(lVar12 + 8) = 1;
          *(int *)(lVar8 + 0xc08) = *(int *)(lVar8 + 0xc08) + 1;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      *(uint *)(lVar8 + 0xc08) = uVar11;
    } while (uVar11 != 0x60);
  }
  lVar8 = *(long *)(lVar7 + 0x50);
  uVar11 = *(uint *)(lVar8 + 0x408);
  if (uVar11 < 0x1f) {
    *(uint *)(lVar8 + 0x408) = uVar11 + 1;
    lVar8 = *(long *)(lVar7 + 0x50);
    uVar11 = *(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar8 + (ulong)uVar11 * 0x20 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar8 + 0x30);
  uVar9 = (ulong)*(uint *)(lVar7 + 0xc08);
  bVar2 = *(byte *)(param_2 + 0x7d);
  uVar6 = uVar9 << 5 | 8;
  uVar4 = uVar9;
  do {
    uVar14 = uVar4;
    if (0x5f < uVar14) goto LAB_0298c8c8;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar6) + 8);
    if (sVar3 == 0) goto LAB_0298c88c;
    uVar6 = uVar6 + 0x20;
    uVar4 = uVar14 + 1;
  } while (sVar3 != 2);
  if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0298c88c:
    lVar12 = *(long *)(lVar7 + (uVar14 & 0xffffffff) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 2;
      *(uint *)(lVar12 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x18) = lVar12;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298c8c8:
  uVar6 = uVar9 << 5 | 8;
  lVar12 = 0;
  do {
    lVar13 = lVar12;
    if (0x5f < uVar9 + lVar13) goto LAB_0298c94c;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar6) + 8);
    if (sVar3 == 0) goto LAB_0298c910;
    uVar6 = uVar6 + 0x20;
    lVar12 = lVar13 + 1;
  } while (sVar3 != 0x11);
  if (((int)uVar9 + (int)(lVar13 + 1)) - 1U < 0x60) {
LAB_0298c910:
    lVar12 = *(long *)(lVar7 + (ulong)(uint)((int)uVar9 + (int)lVar13) * 0x20 + 8);
    if (lVar12 != 0) {
      *(uint *)(lVar12 + 0xc) = (uint)bVar1;
      *(undefined2 *)(lVar12 + 8) = 0x11;
      *(undefined1 *)(lVar12 + 10) = 1;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x90) = lVar12;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar8 + 0x30);
      uVar9 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298c94c:
  plVar10 = (long *)(lVar7 + uVar9 * 0x20 + 8);
  do {
    uVar6 = uVar9;
    if (0x5f < uVar6) goto LAB_0298c9b8;
    lVar12 = *plVar10;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_0298c988;
    plVar10 = plVar10 + 4;
    uVar9 = uVar6 + 1;
  } while (*(short *)(lVar12 + 8) != 0x12);
  if ((int)(uVar6 + 1) - 1U < 0x60) {
LAB_0298c988:
    lVar7 = *(long *)(lVar7 + (uVar6 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 0x12;
      *(undefined4 *)(lVar7 + 0xc) = param_3;
      *(undefined1 *)(lVar7 + 10) = 0;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x98) = lVar7;
      lVar8 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0298c9b8:
  iVar5 = *(int *)(lVar8 + 0x78) + 1;
  *(int *)(lVar8 + 0x78) = iVar5;
  lVar7 = *(long *)(*(long *)(*(long *)(lVar8 + 8) + 0x88) + 0x14c8);
  if (lVar7 != 0) {
    do {
      lVar12 = FUN_02999e6c(lVar8,0xf,8,1,lVar7);
      if (lVar12 == 0) break;
      if ((*(byte *)(lVar12 + 0x3f) >> 5 & 1) == 0) {
        lVar12 = *(long *)(lVar7 + 0x18);
      }
      lVar7 = lVar12;
    } while (lVar12 != 0);
    iVar5 = *(int *)(lVar8 + 0x78);
  }
  *(int *)(lVar8 + 0x78) = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    for (lVar7 = *(long *)(*(long *)(*(long *)(lVar8 + 8) + 0x88) + 0x14c8); lVar7 != 0;
        lVar7 = *(long *)(lVar7 + 0x18)) {
      *(uint *)(lVar7 + 0x3c) = (uint)*(ushort *)(lVar7 + 0x3e) << 0x10;
    }
  }
  lVar8 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(*(long *)(lVar8 + 0x70) + 0x90);
  if (lVar7 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined4 *)(lVar7 + 0xc);
  }
  lVar7 = *(long *)(lVar8 + 0x50);
  if (*(uint *)(lVar7 + 0x408) == 0) {
    uVar6 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar7 + 0x408) = *(int *)(lVar7 + 0x408) + -1;
    lVar7 = *(long *)(lVar8 + 0x50);
    uVar6 = (ulong)*(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(lVar7 + uVar6 * 0x20 + 8);
  lVar7 = *(long *)(lVar8 + 0x30);
  uVar11 = *(uint *)(lVar7 + 0xc08);
  if (uVar11 != 0) {
    if ((uVar11 & 0xffff) < 0x60) {
      uVar6 = (ulong)uVar11 & 0xffff;
      plVar10 = (long *)(lVar7 + uVar6 * 0x20 + 8);
      do {
        uVar6 = uVar6 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar6 & 0xffff) != 0x60);
      uVar11 = *(uint *)(lVar7 + 0xc08);
    }
    *(uint *)(lVar7 + 0xc08) = uVar11 - 1;
    *(undefined2 *)(*(long *)(lVar7 + (ulong)(uVar11 - 1) * 0x20 + 8) + 8) = 0;
    uVar6 = (ulong)*(uint *)(lVar7 + 0xc08);
    do {
      if (uVar6 == 0) {
        return uVar15;
      }
      uVar6 = uVar6 - 1;
      *(int *)(lVar7 + 0xc08) = (int)uVar6;
    } while (*(short *)(*(long *)(lVar7 + (uVar6 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar7 + 0xc08) = (int)uVar6 + 1;
  }
  return uVar15;
}


