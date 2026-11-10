/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0298ce60; name: FUN_0298ce60
 */


void FUN_0298ce60(long param_1,long param_2,ushort *param_3)

{
  byte bVar1;
  short sVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ushort uVar16;
  
  lVar7 = *(long *)(param_1 + 0x10);
  uVar16 = *param_3;
  lVar9 = *(long *)(lVar7 + 0x30);
  uVar12 = *(uint *)(lVar9 + 0xc08);
  if (uVar12 < 0x60) {
    do {
      lVar13 = *(long *)(lVar9 + (ulong)uVar12 * 0x20 + 8);
      if (*(short *)(lVar13 + 8) == 0) {
        if (uVar12 < 0x5f) {
          *(undefined2 *)(lVar13 + 8) = 1;
          *(int *)(lVar9 + 0xc08) = *(int *)(lVar9 + 0xc08) + 1;
        }
        break;
      }
      uVar12 = uVar12 + 1;
      *(uint *)(lVar9 + 0xc08) = uVar12;
    } while (uVar12 != 0x60);
  }
  lVar9 = *(long *)(lVar7 + 0x50);
  uVar12 = *(uint *)(lVar9 + 0x408);
  if (uVar12 < 0x1f) {
    *(uint *)(lVar9 + 0x408) = uVar12 + 1;
    lVar9 = *(long *)(lVar7 + 0x50);
    uVar12 = *(uint *)(lVar9 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar9 + (ulong)uVar12 * 0x20 + 8);
  lVar9 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar9 + 0x30);
  uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
  bVar1 = *(byte *)(param_2 + 0x7d);
  uVar8 = uVar10 << 5 | 8;
  uVar3 = uVar10;
  do {
    uVar15 = uVar3;
    if (0x5f < uVar15) goto LAB_0298cf94;
    sVar2 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar2 == 0) goto LAB_0298cf58;
    uVar8 = uVar8 + 0x20;
    uVar3 = uVar15 + 1;
  } while (sVar2 != 2);
  if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_0298cf58:
    lVar13 = *(long *)(lVar7 + (uVar15 & 0xffffffff) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 2;
      *(uint *)(lVar13 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x18) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298cf94:
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_0298d014;
    sVar2 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar2 == 0) goto LAB_0298cfdc;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar2 != 0x3a);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0298cfdc:
    lVar13 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x3a;
      *(uint *)(lVar13 + 0xc) = (uint)uVar16;
      *(undefined1 *)(lVar13 + 10) = 0;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x1d8) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298d014:
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_0298d098;
    sVar2 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar2 == 0) goto LAB_0298d05c;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar2 != 0x3b);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0298d05c:
    lVar13 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x3b;
      *(undefined1 *)(lVar13 + 10) = 0;
      *(undefined8 *)(lVar13 + 0xc) = 0;
      *(undefined8 *)(lVar13 + 0x14) = 0;
      *(undefined4 *)(lVar13 + 0x1c) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x1e0) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298d098:
  plVar11 = (long *)(lVar7 + uVar10 * 0x20 + 8);
  do {
    uVar8 = uVar10;
    if (0x5f < uVar8) goto LAB_0298d108;
    lVar13 = *plVar11;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_0298d0d4;
    plVar11 = plVar11 + 4;
    uVar10 = uVar8 + 1;
  } while (*(short *)(lVar13 + 8) != 0x3c);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_0298d0d4:
    lVar7 = *(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 0x3c;
      *(undefined1 *)(lVar7 + 10) = 0;
      *(undefined8 *)(lVar7 + 0xc) = 0;
      *(undefined8 *)(lVar7 + 0x14) = 0;
      *(undefined4 *)(lVar7 + 0x1c) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x1e8) = lVar7;
      lVar9 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0298d108:
  iVar6 = *(int *)(lVar9 + 0x78) + 1;
  *(int *)(lVar9 + 0x78) = iVar6;
  lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8);
  if (lVar7 != 0) {
    do {
      lVar13 = FUN_02999e6c(lVar9,0x15,8,1,lVar7);
      if (lVar13 == 0) break;
      if ((*(byte *)(lVar13 + 0x3f) >> 5 & 1) == 0) {
        lVar13 = *(long *)(lVar7 + 0x18);
      }
      lVar7 = lVar13;
    } while (lVar13 != 0);
    iVar6 = *(int *)(lVar9 + 0x78);
  }
  *(int *)(lVar9 + 0x78) = iVar6 + -1;
  if (iVar6 + -1 == 0) {
    for (lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8); lVar7 != 0;
        lVar7 = *(long *)(lVar7 + 0x18)) {
      *(uint *)(lVar7 + 0x3c) = (uint)*(ushort *)(lVar7 + 0x3e) << 0x10;
    }
  }
  lVar9 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar9 + 0x70);
  if (*(long *)(lVar7 + 0x1d8) == 0) {
    uVar16 = 0;
    lVar13 = *(long *)(lVar7 + 0x1e0);
  }
  else {
    uVar16 = (ushort)*(undefined4 *)(*(long *)(lVar7 + 0x1d8) + 0xc);
    lVar13 = *(long *)(lVar7 + 0x1e0);
  }
  if (lVar13 == 0) {
    bVar4 = false;
    lVar7 = *(long *)(lVar7 + 0x1e8);
  }
  else {
    bVar4 = *(int *)(lVar13 + 0xc) != 0;
    lVar7 = *(long *)(lVar7 + 0x1e8);
  }
  if (lVar7 == 0) {
    bVar5 = true;
  }
  else {
    bVar5 = *(int *)(lVar7 + 0xc) == 0;
  }
  lVar7 = *(long *)(lVar9 + 0x50);
  if (*(uint *)(lVar7 + 0x408) == 0) {
    uVar8 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar7 + 0x408) = *(int *)(lVar7 + 0x408) + -1;
    lVar7 = *(long *)(lVar9 + 0x50);
    uVar8 = (ulong)*(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)(lVar7 + uVar8 * 0x20 + 8);
  lVar7 = *(long *)(lVar9 + 0x30);
  uVar12 = *(uint *)(lVar7 + 0xc08);
  if (uVar12 != 0) {
    if ((uVar12 & 0xffff) < 0x60) {
      uVar8 = (ulong)uVar12 & 0xffff;
      plVar11 = (long *)(lVar7 + uVar8 * 0x20 + 8);
      do {
        uVar8 = uVar8 + 1;
        if (*(short *)(*plVar11 + 8) == 0) break;
        *(undefined2 *)(*plVar11 + 8) = 0;
        plVar11 = plVar11 + 4;
      } while (((uint)uVar8 & 0xffff) != 0x60);
      uVar12 = *(uint *)(lVar7 + 0xc08);
    }
    *(uint *)(lVar7 + 0xc08) = uVar12 - 1;
    *(undefined2 *)(*(long *)(lVar7 + (ulong)(uVar12 - 1) * 0x20 + 8) + 8) = 0;
    uVar8 = (ulong)*(uint *)(lVar7 + 0xc08);
    do {
      if (uVar8 == 0) goto LAB_0298d2d0;
      uVar8 = uVar8 - 1;
      *(int *)(lVar7 + 0xc08) = (int)uVar8;
    } while (*(short *)(*(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar7 + 0xc08) = (int)uVar8 + 1;
  }
LAB_0298d2d0:
  if ((bool)(bVar4 | bVar5 ^ 1U)) {
    if (!bVar5) {
      uVar16 = 0;
    }
    *param_3 = uVar16;
  }
  return;
}


