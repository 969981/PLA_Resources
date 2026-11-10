/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0298f234; name: FUN_0298f234
 */


bool FUN_0298f234(long param_1,long param_2,long param_3,undefined8 param_4,undefined1 *param_5,
                 undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar7 = *(long *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_3 + 0x5a);
  lVar9 = *(long *)(lVar7 + 0x30);
  uVar11 = *(uint *)(lVar9 + 0xc08);
  if (uVar11 < 0x60) {
    do {
      lVar13 = *(long *)(lVar9 + (ulong)uVar11 * 0x20 + 8);
      if (*(short *)(lVar13 + 8) == 0) {
        if (uVar11 < 0x5f) {
          *(undefined2 *)(lVar13 + 8) = 1;
          *(int *)(lVar9 + 0xc08) = *(int *)(lVar9 + 0xc08) + 1;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      *(uint *)(lVar9 + 0xc08) = uVar11;
    } while (uVar11 != 0x60);
  }
  lVar9 = *(long *)(lVar7 + 0x50);
  uVar11 = *(uint *)(lVar9 + 0x408);
  if (uVar11 < 0x1f) {
    *(uint *)(lVar9 + 0x408) = uVar11 + 1;
    lVar9 = *(long *)(lVar7 + 0x50);
    uVar11 = *(uint *)(lVar9 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar9 + (ulong)uVar11 * 0x20 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar7 + 0x30);
  uVar12 = (ulong)*(uint *)(lVar9 + 0xc08);
  bVar2 = *(byte *)(param_2 + 0x7d);
  uVar8 = uVar12 << 5 | 8;
  uVar16 = uVar12;
  do {
    uVar14 = uVar16;
    if (0x5f < uVar14) goto LAB_0298f36c;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0298f330;
    uVar8 = uVar8 + 0x20;
    uVar16 = uVar14 + 1;
  } while (sVar3 != 3);
  if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0298f330:
    lVar13 = *(long *)(lVar9 + (uVar14 & 0xffffffff) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 3;
      *(uint *)(lVar13 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x20) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_0298f36c:
  plVar10 = (long *)(lVar9 + uVar12 * 0x20 + 8);
  do {
    uVar8 = uVar12;
    if (0x5f < uVar8) goto LAB_0298f3d8;
    lVar13 = *plVar10;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_0298f3a8;
    plVar10 = plVar10 + 4;
    uVar12 = uVar8 + 1;
  } while (*(short *)(lVar13 + 8) != 5);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_0298f3a8:
    lVar9 = *(long *)(lVar9 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 5;
      *(uint *)(lVar9 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x30) = lVar9;
    }
  }
LAB_0298f3d8:
  if (bVar1 == 0) {
    lVar7 = *(long *)(param_1 + 0x10);
    lVar9 = *(long *)(lVar7 + 0x30);
    plVar10 = (long *)(lVar9 + (ulong)*(uint *)(lVar9 + 0xc08) * 0x20 + 8);
    uVar8 = (ulong)*(uint *)(lVar9 + 0xc08);
    do {
      uVar12 = uVar8;
      if (0x5f < uVar12) goto LAB_0298f500;
      lVar13 = *plVar10;
      if (*(short *)(lVar13 + 8) == 0) goto LAB_0298f4cc;
      plVar10 = plVar10 + 4;
      uVar8 = uVar12 + 1;
    } while (*(short *)(lVar13 + 8) != 6);
    if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_0298f4cc:
      lVar9 = *(long *)(lVar9 + (uVar12 & 0xffffffff) * 0x20 + 8);
      if (lVar9 != 0) {
        *(undefined2 *)(lVar9 + 8) = 6;
        *(undefined8 *)(lVar9 + 0x10) = 0;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        *(undefined4 *)(lVar9 + 0xc) = 0x1f;
        *(undefined1 *)(lVar9 + 10) = 4;
        *(long *)(*(long *)(lVar7 + 0x70) + 0x38) = lVar9;
      }
    }
  }
  else {
    uVar8 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x10);
      uVar11 = (int)uVar8 + 6;
      lVar9 = *(long *)(lVar7 + 0x30);
      bVar2 = *(byte *)(*(long *)(param_3 + uVar8 * 8) + 0x7d);
      plVar10 = (long *)(lVar9 + (ulong)*(uint *)(lVar9 + 0xc08) * 0x20 + 8);
      uVar12 = (ulong)*(uint *)(lVar9 + 0xc08);
      do {
        uVar16 = uVar12;
        if (0x5f < uVar16) goto LAB_0298f3e8;
        lVar13 = *plVar10;
        if (*(ushort *)(lVar13 + 8) == 0) goto LAB_0298f448;
        plVar10 = plVar10 + 4;
        uVar12 = uVar16 + 1;
      } while ((uint)*(ushort *)(lVar13 + 8) != (uVar11 & 0xffff));
      if ((int)(uVar16 + 1) - 1U < 0x60) {
LAB_0298f448:
        lVar9 = *(long *)(lVar9 + (uVar16 & 0xffffffff) * 0x20 + 8);
        if (lVar9 != 0) {
          *(ushort *)(lVar9 + 8) = (ushort)uVar11;
          *(uint *)(lVar9 + 0xc) = (uint)bVar2;
          *(undefined1 *)(lVar9 + 10) = 4;
          *(undefined8 *)(lVar9 + 0x10) = 0;
          *(undefined8 *)(lVar9 + 0x18) = 0;
          if ((uVar11 & 0xffff) < 0x82) {
            *(long *)(*(long *)(lVar7 + 0x70) + (ulong)(ushort)uVar11 * 8 + 8) = lVar9;
          }
        }
      }
LAB_0298f3e8:
      uVar8 = uVar8 + 1;
    } while (uVar8 != bVar1);
  }
LAB_0298f500:
  lVar9 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar9 + 0x30);
  uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
  uVar8 = uVar12 << 5 | 8;
  uVar16 = uVar12;
  do {
    uVar14 = uVar16;
    if (0x5f < uVar14) goto LAB_0298f58c;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0298f54c;
    uVar8 = uVar8 + 0x20;
    uVar16 = uVar14 + 1;
  } while (sVar3 != 0x48);
  if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0298f54c:
    lVar13 = *(long *)(lVar7 + (uVar14 & 0xffffffff) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x48;
      *(undefined8 *)(lVar13 + 0xc) = 0;
      *(undefined8 *)(lVar13 + 0x14) = 0;
      *(undefined4 *)(lVar13 + 0x1c) = 0;
      *(undefined1 *)(lVar13 + 10) = 1;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x248) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298f58c:
  uVar8 = uVar12 << 5 | 8;
  lVar13 = 0;
  do {
    lVar15 = lVar13;
    if (0x5f < uVar12 + lVar15) goto LAB_0298f614;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0298f5d4;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar15 + 1;
  } while (sVar3 != 0x59);
  if (((int)uVar12 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_0298f5d4:
    lVar13 = *(long *)(lVar7 + (ulong)(uint)((int)uVar12 + (int)lVar15) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x59;
      *(undefined8 *)(lVar13 + 0xc) = 0;
      *(undefined8 *)(lVar13 + 0x14) = 0;
      *(undefined4 *)(lVar13 + 0x1c) = 0;
      *(undefined1 *)(lVar13 + 10) = 1;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x2d0) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298f614:
  uVar8 = uVar12 << 5 | 8;
  lVar13 = 0;
  do {
    lVar15 = lVar13;
    if (0x5f < uVar12 + lVar15) goto LAB_0298f69c;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0298f65c;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar15 + 1;
  } while (sVar3 != 0x56);
  if (((int)uVar12 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_0298f65c:
    lVar13 = *(long *)(lVar7 + (ulong)(uint)((int)uVar12 + (int)lVar15) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x56;
      *(undefined8 *)(lVar13 + 0xc) = 0;
      *(undefined8 *)(lVar13 + 0x14) = 0;
      *(undefined4 *)(lVar13 + 0x1c) = 0;
      *(undefined1 *)(lVar13 + 10) = 1;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x2b8) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298f69c:
  plVar10 = (long *)(lVar7 + uVar12 * 0x20 + 8);
  do {
    uVar8 = uVar12;
    if (0x5f < uVar8) goto LAB_0298f70c;
    lVar13 = *plVar10;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_0298f6d8;
    plVar10 = plVar10 + 4;
    uVar12 = uVar8 + 1;
  } while (*(short *)(lVar13 + 8) != 0x44);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_0298f6d8:
    lVar7 = *(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 0x44;
      *(undefined8 *)(lVar7 + 0xc) = 0;
      *(undefined4 *)(lVar7 + 0x14) = 0;
      *(undefined8 *)(lVar7 + 0x18) = param_4;
      *(undefined1 *)(lVar7 + 10) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x228) = lVar7;
      lVar9 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0298f70c:
  iVar6 = *(int *)(lVar9 + 0x78) + 1;
  *(int *)(lVar9 + 0x78) = iVar6;
  lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8);
  if (lVar7 != 0) {
    do {
      lVar13 = FUN_02999e6c(lVar9,0xb9,8,1,lVar7);
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
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
  lVar9 = *(long *)(lVar7 + 0x2d0);
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0xc) == 0)) {
    uVar5 = 0x1f;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x38);
    uVar5 = 0;
    if (lVar7 != 0) {
      uVar5 = (undefined1)*(undefined4 *)(lVar7 + 0xc);
    }
  }
  *param_5 = uVar5;
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x2b8);
  bVar4 = false;
  if (lVar7 != 0) {
    bVar4 = *(int *)(lVar7 + 0xc) != 0;
  }
  *(bool *)param_6 = bVar4;
  lVar9 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(*(long *)(lVar9 + 0x70) + 0x248);
  if (lVar7 == 0) {
    bVar4 = true;
  }
  else {
    bVar4 = *(int *)(lVar7 + 0xc) == 0;
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
  uVar11 = *(uint *)(lVar7 + 0xc08);
  if (uVar11 != 0) {
    if ((uVar11 & 0xffff) < 0x60) {
      uVar8 = (ulong)uVar11 & 0xffff;
      plVar10 = (long *)(lVar7 + uVar8 * 0x20 + 8);
      do {
        uVar8 = uVar8 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar8 & 0xffff) != 0x60);
      uVar11 = *(uint *)(lVar7 + 0xc08);
    }
    *(uint *)(lVar7 + 0xc08) = uVar11 - 1;
    *(undefined2 *)(*(long *)(lVar7 + (ulong)(uVar11 - 1) * 0x20 + 8) + 8) = 0;
    uVar8 = (ulong)*(uint *)(lVar7 + 0xc08);
    do {
      if (uVar8 == 0) {
        return bVar4;
      }
      uVar8 = uVar8 - 1;
      *(int *)(lVar7 + 0xc08) = (int)uVar8;
    } while (*(short *)(*(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar7 + 0xc08) = (int)uVar8 + 1;
  }
  return bVar4;
}


