/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02977028; name: FUN_02977028
 */


undefined4 FUN_02977028(long param_1,uint param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined4 uVar17;
  
  plVar8 = &DAT_0428af30 + (ulong)param_2 * 6;
  lVar7 = *plVar8;
  if (lVar7 == 0) {
    plVar10 = &DAT_0428af30;
  }
  else {
    plVar10 = &DAT_0428af30;
    if (*(char *)(lVar7 + 0x1e1) != '\0') {
      plVar10 = plVar8;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar10 + 0x250) + (ulong)**(uint **)(*plVar10 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x15) ||
     (uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10], uVar9 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)*(char *)((long)piVar1 + uVar9);
  }
  plVar10 = &DAT_0428af30;
  if ((lVar7 != 0) && (plVar10 = &DAT_0428af30, *(char *)(lVar7 + 0x1e1) != '\0')) {
    plVar10 = plVar8;
  }
  piVar1 = (int *)((long)*(uint **)(*plVar10 + 0x250) + (ulong)**(uint **)(*plVar10 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)*(byte *)((long)piVar1 + uVar9);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar7 + 0x30);
  uVar13 = *(uint *)(lVar11 + 0xc08);
  if (uVar13 < 0x60) {
    do {
      lVar14 = *(long *)(lVar11 + (ulong)uVar13 * 0x20 + 8);
      if (*(short *)(lVar14 + 8) == 0) {
        if (uVar13 < 0x5f) {
          *(undefined2 *)(lVar14 + 8) = 1;
          *(int *)(lVar11 + 0xc08) = *(int *)(lVar11 + 0xc08) + 1;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      *(uint *)(lVar11 + 0xc08) = uVar13;
    } while (uVar13 != 0x60);
  }
  lVar11 = *(long *)(lVar7 + 0x50);
  uVar13 = *(uint *)(lVar11 + 0x408);
  if (uVar13 < 0x1f) {
    *(uint *)(lVar11 + 0x408) = uVar13 + 1;
    lVar11 = *(long *)(lVar7 + 0x50);
    uVar13 = *(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar11 + (ulong)uVar13 * 0x20 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar11 + 0x30);
  uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
  bVar2 = *(byte *)(param_3 + 0x7d);
  uVar9 = uVar12 << 5 | 8;
  uVar4 = uVar12;
  do {
    uVar16 = uVar4;
    if (0x5f < uVar16) goto LAB_02977200;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar9) + 8);
    if (sVar3 == 0) goto LAB_029771c4;
    uVar9 = uVar9 + 0x20;
    uVar4 = uVar16 + 1;
  } while (sVar3 != 3);
  if ((int)(uVar16 + 1) - 1U < 0x60) {
LAB_029771c4:
    lVar14 = *(long *)(lVar7 + (uVar16 & 0xffffffff) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 3;
      *(uint *)(lVar14 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x20) = lVar14;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar11 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_02977200:
  uVar9 = uVar12 << 5 | 8;
  lVar14 = 0;
  do {
    lVar15 = lVar14;
    if (0x5f < uVar12 + lVar15) goto LAB_02977284;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar9) + 8);
    if (sVar3 == 0) goto LAB_02977248;
    uVar9 = uVar9 + 0x20;
    lVar14 = lVar15 + 1;
  } while (sVar3 != 0x12);
  if (((int)uVar12 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_02977248:
    lVar14 = *(long *)(lVar7 + (ulong)(uint)((int)uVar12 + (int)lVar15) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x12;
      *(uint *)(lVar14 + 0xc) = param_2;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x98) = lVar14;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar11 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_02977284:
  uVar9 = uVar12 << 5 | 8;
  lVar14 = 0;
  do {
    lVar15 = lVar14;
    if (0x5f < uVar12 + lVar15) goto LAB_02977308;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar9) + 8);
    if (sVar3 == 0) goto LAB_029772cc;
    uVar9 = uVar9 + 0x20;
    lVar14 = lVar15 + 1;
  } while (sVar3 != 0x16);
  if (((int)uVar12 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_029772cc:
    lVar14 = *(long *)(lVar7 + (ulong)(uint)((int)uVar12 + (int)lVar15) * 0x20 + 8);
    if (lVar14 != 0) {
      *(uint *)(lVar14 + 0xc) = uVar6;
      *(undefined2 *)(lVar14 + 8) = 0x16;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0xb8) = lVar14;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar11 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_02977308:
  plVar8 = (long *)(lVar7 + uVar12 * 0x20 + 8);
  do {
    uVar9 = uVar12;
    if (0x5f < uVar9) goto LAB_02977374;
    lVar14 = *plVar8;
    if (*(short *)(lVar14 + 8) == 0) goto LAB_02977344;
    plVar8 = plVar8 + 4;
    uVar12 = uVar9 + 1;
  } while (*(short *)(lVar14 + 8) != 0x19);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_02977344:
    lVar7 = *(long *)(lVar7 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 0x19;
      *(int *)(lVar7 + 0xc) = iVar5 + 7;
      *(undefined1 *)(lVar7 + 10) = 0;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0xd0) = lVar7;
      lVar11 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02977374:
  iVar5 = *(int *)(lVar11 + 0x78) + 1;
  *(int *)(lVar11 + 0x78) = iVar5;
  lVar7 = *(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x88) + 0x14c8);
  if (lVar7 != 0) {
    do {
      lVar14 = FUN_02999e6c(lVar11,0x11,8,1,lVar7);
      if (lVar14 == 0) break;
      if ((*(byte *)(lVar14 + 0x3f) >> 5 & 1) == 0) {
        lVar14 = *(long *)(lVar7 + 0x18);
      }
      lVar7 = lVar14;
    } while (lVar14 != 0);
    iVar5 = *(int *)(lVar11 + 0x78);
  }
  *(int *)(lVar11 + 0x78) = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    for (lVar7 = *(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x88) + 0x14c8); lVar7 != 0;
        lVar7 = *(long *)(lVar7 + 0x18)) {
      *(uint *)(lVar7 + 0x3c) = (uint)*(ushort *)(lVar7 + 0x3e) << 0x10;
    }
  }
  lVar11 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(*(long *)(lVar11 + 0x70) + 0xd0);
  if (lVar7 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined4 *)(lVar7 + 0xc);
  }
  lVar7 = *(long *)(lVar11 + 0x50);
  if (*(uint *)(lVar7 + 0x408) == 0) {
    uVar9 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar7 + 0x408) = *(int *)(lVar7 + 0x408) + -1;
    lVar7 = *(long *)(lVar11 + 0x50);
    uVar9 = (ulong)*(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)(lVar7 + uVar9 * 0x20 + 8);
  lVar7 = *(long *)(lVar11 + 0x30);
  uVar6 = *(uint *)(lVar7 + 0xc08);
  if (uVar6 != 0) {
    if ((uVar6 & 0xffff) < 0x60) {
      uVar9 = (ulong)uVar6 & 0xffff;
      plVar8 = (long *)(lVar7 + uVar9 * 0x20 + 8);
      do {
        uVar9 = uVar9 + 1;
        if (*(short *)(*plVar8 + 8) == 0) break;
        *(undefined2 *)(*plVar8 + 8) = 0;
        plVar8 = plVar8 + 4;
      } while (((uint)uVar9 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar7 + 0xc08);
    }
    *(uint *)(lVar7 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar7 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar9 = (ulong)*(uint *)(lVar7 + 0xc08);
    do {
      if (uVar9 == 0) {
        return uVar17;
      }
      uVar9 = uVar9 - 1;
      *(int *)(lVar7 + 0xc08) = (int)uVar9;
    } while (*(short *)(*(long *)(lVar7 + (uVar9 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar7 + 0xc08) = (int)uVar9 + 1;
  }
  return uVar17;
}


