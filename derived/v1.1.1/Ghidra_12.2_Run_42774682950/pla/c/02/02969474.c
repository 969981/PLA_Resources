/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02969474; name: FUN_02969474
 */


bool FUN_02969474(long param_1,long param_2,long param_3,uint param_4)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  ulong uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  lVar10 = (&DAT_0428af30)[(ulong)param_4 * 6];
  if (lVar10 == 0) {
    plVar8 = &DAT_0428af30;
  }
  else {
    plVar8 = &DAT_0428af30;
    if (*(char *)(lVar10 + 0x1e1) != '\0') {
      plVar8 = &DAT_0428af30 + (ulong)param_4 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar8 + 0x250) + (ulong)**(uint **)(*plVar8 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x65) ||
     (uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x32], uVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)(*(char *)((long)piVar1 + uVar9) != '\0');
  }
  lVar10 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar10 + 0x30);
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
  lVar11 = *(long *)(lVar10 + 0x50);
  uVar13 = *(uint *)(lVar11 + 0x408);
  if (uVar13 < 0x1f) {
    *(uint *)(lVar11 + 0x408) = uVar13 + 1;
    lVar11 = *(long *)(lVar10 + 0x50);
    uVar13 = *(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(lVar11 + (ulong)uVar13 * 0x20 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar11 + 0x30);
  uVar12 = (ulong)*(uint *)(lVar10 + 0xc08);
  bVar2 = *(byte *)(param_2 + 0x7d);
  uVar9 = uVar12 << 5 | 8;
  uVar4 = uVar12;
  do {
    uVar16 = uVar4;
    if (0x5f < uVar16) goto LAB_02969608;
    sVar3 = *(short *)(*(long *)(lVar10 + uVar9) + 8);
    if (sVar3 == 0) goto LAB_029695cc;
    uVar9 = uVar9 + 0x20;
    uVar4 = uVar16 + 1;
  } while (sVar3 != 3);
  if ((int)(uVar16 + 1) - 1U < 0x60) {
LAB_029695cc:
    lVar14 = *(long *)(lVar10 + (uVar16 & 0xffffffff) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 3;
      *(uint *)(lVar14 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x20) = lVar14;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(lVar11 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar10 + 0xc08);
    }
  }
LAB_02969608:
  bVar2 = *(byte *)(param_3 + 0x7d);
  uVar9 = uVar12 << 5 | 8;
  lVar14 = 0;
  do {
    lVar15 = lVar14;
    if (0x5f < uVar12 + lVar15) goto LAB_0296968c;
    sVar3 = *(short *)(*(long *)(lVar10 + uVar9) + 8);
    if (sVar3 == 0) goto LAB_02969654;
    uVar9 = uVar9 + 0x20;
    lVar14 = lVar15 + 1;
  } while (sVar3 != 4);
  if (((int)uVar12 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_02969654:
    lVar14 = *(long *)(lVar10 + (ulong)(uint)((int)uVar12 + (int)lVar15) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 4;
      *(uint *)(lVar14 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x28) = lVar14;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(lVar11 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar10 + 0xc08);
    }
  }
LAB_0296968c:
  uVar9 = uVar12 << 5 | 8;
  lVar14 = 0;
  do {
    lVar15 = lVar14;
    if (0x5f < uVar12 + lVar15) goto LAB_02969710;
    sVar3 = *(short *)(*(long *)(lVar10 + uVar9) + 8);
    if (sVar3 == 0) goto LAB_029696d4;
    uVar9 = uVar9 + 0x20;
    lVar14 = lVar15 + 1;
  } while (sVar3 != 0x12);
  if (((int)uVar12 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_029696d4:
    lVar14 = *(long *)(lVar10 + (ulong)(uint)((int)uVar12 + (int)lVar15) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x12;
      *(uint *)(lVar14 + 0xc) = param_4;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x98) = lVar14;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)(lVar11 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar10 + 0xc08);
    }
  }
LAB_02969710:
  plVar8 = (long *)(lVar10 + uVar12 * 0x20 + 8);
  do {
    uVar9 = uVar12;
    if (0x5f < uVar9) goto LAB_02969780;
    lVar14 = *plVar8;
    if (*(short *)(lVar14 + 8) == 0) goto LAB_0296974c;
    plVar8 = plVar8 + 4;
    uVar12 = uVar9 + 1;
  } while (*(short *)(lVar14 + 8) != 0x59);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_0296974c:
    lVar10 = *(long *)(lVar10 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar10 != 0) {
      *(uint *)(lVar10 + 0xc) = uVar6;
      *(undefined2 *)(lVar10 + 8) = 0x59;
      *(undefined1 *)(lVar10 + 10) = 1;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x2d0) = lVar10;
      lVar11 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02969780:
  iVar7 = *(int *)(lVar11 + 0x78) + 1;
  *(int *)(lVar11 + 0x78) = iVar7;
  lVar10 = *(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x88) + 0x14c8);
  if (lVar10 != 0) {
    do {
      lVar14 = FUN_02999e6c(lVar11,5,8,1,lVar10);
      if (lVar14 == 0) break;
      if ((*(byte *)(lVar14 + 0x3f) >> 5 & 1) == 0) {
        lVar14 = *(long *)(lVar10 + 0x18);
      }
      lVar10 = lVar14;
    } while (lVar14 != 0);
    iVar7 = *(int *)(lVar11 + 0x78);
  }
  *(int *)(lVar11 + 0x78) = iVar7 + -1;
  if (iVar7 + -1 == 0) {
    for (lVar10 = *(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x88) + 0x14c8); lVar10 != 0;
        lVar10 = *(long *)(lVar10 + 0x18)) {
      *(uint *)(lVar10 + 0x3c) = (uint)*(ushort *)(lVar10 + 0x3e) << 0x10;
    }
  }
  lVar11 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(*(long *)(lVar11 + 0x70) + 0x2d0);
  if (lVar10 == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = *(int *)(lVar10 + 0xc) != 0;
  }
  lVar10 = *(long *)(lVar11 + 0x50);
  if (*(uint *)(lVar10 + 0x408) == 0) {
    uVar9 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar10 + 0x408) = *(int *)(lVar10 + 0x408) + -1;
    lVar10 = *(long *)(lVar11 + 0x50);
    uVar9 = (ulong)*(uint *)(lVar10 + 0x408);
  }
  *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)(lVar10 + uVar9 * 0x20 + 8);
  lVar10 = *(long *)(lVar11 + 0x30);
  uVar6 = *(uint *)(lVar10 + 0xc08);
  if (uVar6 != 0) {
    if ((uVar6 & 0xffff) < 0x60) {
      uVar9 = (ulong)uVar6 & 0xffff;
      plVar8 = (long *)(lVar10 + uVar9 * 0x20 + 8);
      do {
        uVar9 = uVar9 + 1;
        if (*(short *)(*plVar8 + 8) == 0) break;
        *(undefined2 *)(*plVar8 + 8) = 0;
        plVar8 = plVar8 + 4;
      } while (((uint)uVar9 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar10 + 0xc08);
    }
    *(uint *)(lVar10 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar10 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar9 = (ulong)*(uint *)(lVar10 + 0xc08);
    do {
      if (uVar9 == 0) {
        return bVar5;
      }
      uVar9 = uVar9 - 1;
      *(int *)(lVar10 + 0xc08) = (int)uVar9;
    } while (*(short *)(*(long *)(lVar10 + (uVar9 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar10 + 0xc08) = (int)uVar9 + 1;
  }
  return bVar5;
}


