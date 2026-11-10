/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0298a554; name: FUN_0298a554
 */


bool FUN_0298a554(long param_1,undefined4 *param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar7 + 0x30);
  uVar10 = *(uint *)(lVar9 + 0xc08);
  if (uVar10 < 0x60) {
    do {
      lVar13 = *(long *)(lVar9 + (ulong)uVar10 * 0x20 + 8);
      if (*(short *)(lVar13 + 8) == 0) {
        if (uVar10 < 0x5f) {
          *(undefined2 *)(lVar13 + 8) = 1;
          *(int *)(lVar9 + 0xc08) = *(int *)(lVar9 + 0xc08) + 1;
        }
        break;
      }
      uVar10 = uVar10 + 1;
      *(uint *)(lVar9 + 0xc08) = uVar10;
    } while (uVar10 != 0x60);
  }
  lVar9 = *(long *)(lVar7 + 0x50);
  uVar10 = *(uint *)(lVar9 + 0x408);
  if (uVar10 < 0x1f) {
    *(uint *)(lVar9 + 0x408) = uVar10 + 1;
    lVar9 = *(long *)(lVar7 + 0x50);
    uVar10 = *(uint *)(lVar9 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar9 + (ulong)uVar10 * 0x20 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar7 + 0x30);
  uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
  uVar11 = uVar14 << 5 | 8;
  uVar17 = uVar14;
  do {
    uVar15 = uVar17;
    if (0x5f < uVar15) goto LAB_0298a684;
    sVar5 = *(short *)(*(long *)(lVar9 + uVar11) + 8);
    if (sVar5 == 0) goto LAB_0298a648;
    uVar11 = uVar11 + 0x20;
    uVar17 = uVar15 + 1;
  } while (sVar5 != 3);
  if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_0298a648:
    lVar13 = *(long *)(lVar9 + (uVar15 & 0xffffffff) * 0x20 + 8);
    if (lVar13 != 0) {
      *(uint *)(lVar13 + 0xc) = (uint)*(byte *)(param_3 + 0x7d);
      *(undefined2 *)(lVar13 + 8) = 3;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x20) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_0298a684:
  cVar2 = *(char *)(param_4 + 0x5b);
  uVar11 = uVar14 << 5 | 8;
  bVar3 = *(byte *)(param_4 + 0x5a);
  lVar13 = 0;
  do {
    lVar16 = lVar13;
    if (0x5f < uVar14 + lVar16) goto LAB_0298a710;
    sVar5 = *(short *)(*(long *)(lVar9 + uVar11) + 8);
    if (sVar5 == 0) goto LAB_0298a6d4;
    uVar11 = uVar11 + 0x20;
    lVar13 = lVar16 + 1;
  } while (sVar5 != 5);
  if (((int)uVar14 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_0298a6d4:
    lVar13 = *(long *)(lVar9 + (ulong)(uint)((int)uVar14 + (int)lVar16) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 5;
      *(uint *)(lVar13 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x30) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_0298a710:
  uVar1 = param_2[8];
  uVar11 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar16 = lVar13;
    if (0x5f < uVar14 + lVar16) goto LAB_0298a798;
    sVar5 = *(short *)(*(long *)(lVar9 + uVar11) + 8);
    if (sVar5 == 0) goto LAB_0298a75c;
    uVar11 = uVar11 + 0x20;
    lVar13 = lVar16 + 1;
  } while (sVar5 != 0x80);
  if (((int)uVar14 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_0298a75c:
    lVar13 = *(long *)(lVar9 + (ulong)(uint)((int)uVar14 + (int)lVar16) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x80;
      *(undefined4 *)(lVar13 + 0xc) = uVar1;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x408) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_0298a798:
  uVar11 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar16 = lVar13;
    if (0x5f < uVar14 + lVar16) goto LAB_0298a81c;
    sVar5 = *(short *)(*(long *)(lVar9 + uVar11) + 8);
    if (sVar5 == 0) goto LAB_0298a7e0;
    uVar11 = uVar11 + 0x20;
    lVar13 = lVar16 + 1;
  } while (sVar5 != 0x59);
  if (((int)uVar14 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_0298a7e0:
    lVar13 = *(long *)(lVar9 + (ulong)(uint)((int)uVar14 + (int)lVar16) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x59;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(undefined4 *)(lVar13 + 0xc) = 1;
      *(undefined1 *)(lVar13 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x2d0) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_0298a81c:
  uVar11 = uVar14 << 5 | 8;
  lVar13 = 0;
  do {
    lVar16 = lVar13;
    if (0x5f < uVar14 + lVar16) goto LAB_0298a8a0;
    sVar5 = *(short *)(*(long *)(lVar9 + uVar11) + 8);
    if (sVar5 == 0) goto LAB_0298a864;
    uVar11 = uVar11 + 0x20;
    lVar13 = lVar16 + 1;
  } while (sVar5 != 0x47);
  if (((int)uVar14 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_0298a864:
    lVar13 = *(long *)(lVar9 + (ulong)(uint)((int)uVar14 + (int)lVar16) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x47;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(undefined4 *)(lVar13 + 0xc) = 1;
      *(undefined1 *)(lVar13 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x240) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_0298a8a0:
  plVar12 = (long *)(lVar9 + uVar14 * 0x20 + 8);
  do {
    uVar11 = uVar14;
    if (0x5f < uVar11) goto LAB_0298a90c;
    lVar13 = *plVar12;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_0298a8dc;
    plVar12 = plVar12 + 4;
    uVar14 = uVar11 + 1;
  } while (*(short *)(lVar13 + 8) != 0x78);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_0298a8dc:
    lVar9 = *(long *)(lVar9 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x78;
      *(undefined1 *)(lVar9 + 10) = 0;
      *(undefined8 *)(lVar9 + 0xc) = 0;
      *(undefined8 *)(lVar9 + 0x14) = 0;
      *(undefined4 *)(lVar9 + 0x1c) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x3c8) = lVar9;
    }
  }
LAB_0298a90c:
  if (bVar3 != 0) {
    uVar11 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x10);
      uVar10 = (int)uVar11 + 6;
      lVar9 = *(long *)(lVar7 + 0x30);
      bVar4 = *(byte *)(*(long *)(param_4 + uVar11 * 8) + 0x7d);
      plVar12 = (long *)(lVar9 + (ulong)*(uint *)(lVar9 + 0xc08) * 0x20 + 8);
      uVar14 = (ulong)*(uint *)(lVar9 + 0xc08);
      do {
        uVar17 = uVar14;
        if (0x5f < uVar17) goto LAB_0298a91c;
        lVar13 = *plVar12;
        if (*(ushort *)(lVar13 + 8) == 0) goto LAB_0298a97c;
        plVar12 = plVar12 + 4;
        uVar14 = uVar17 + 1;
      } while ((uint)*(ushort *)(lVar13 + 8) != (uVar10 & 0xffff));
      if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_0298a97c:
        lVar9 = *(long *)(lVar9 + (uVar17 & 0xffffffff) * 0x20 + 8);
        if (lVar9 != 0) {
          *(ushort *)(lVar9 + 8) = (ushort)uVar10;
          *(uint *)(lVar9 + 0xc) = (uint)bVar4;
          *(undefined1 *)(lVar9 + 10) = 4;
          *(undefined8 *)(lVar9 + 0x10) = 0;
          *(undefined8 *)(lVar9 + 0x18) = 0;
          if ((uVar10 & 0xffff) < 0x82) {
            *(long *)(*(long *)(lVar7 + 0x70) + (ulong)(ushort)uVar10 * 8 + 8) = lVar9;
          }
        }
      }
LAB_0298a91c:
      uVar11 = uVar11 + 1;
    } while (uVar11 != bVar3);
  }
  lVar9 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar9 + 0x30);
  plVar12 = (long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0xc08) * 0x20 + 8);
  uVar11 = (ulong)*(uint *)(lVar7 + 0xc08);
  do {
    uVar14 = uVar11;
    if (0x5f < uVar14) goto LAB_0298aa38;
    lVar13 = *plVar12;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_0298aa04;
    plVar12 = plVar12 + 4;
    uVar11 = uVar14 + 1;
  } while (*(short *)(lVar13 + 8) != 0x12);
  if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0298aa04:
    lVar7 = *(long *)(lVar7 + (uVar14 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0xc) = *param_2;
      *(undefined2 *)(lVar7 + 8) = 0x12;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x98) = lVar7;
      lVar9 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0298aa38:
  iVar8 = *(int *)(lVar9 + 0x78) + 1;
  *(int *)(lVar9 + 0x78) = iVar8;
  lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8);
  if (cVar2 == '\0') {
    if (lVar7 != 0) {
      do {
        lVar13 = FUN_02999e6c(lVar9,0xc6,8,1,lVar7);
        if (lVar13 == 0) break;
        if ((*(byte *)(lVar13 + 0x3f) >> 5 & 1) == 0) {
          lVar13 = *(long *)(lVar7 + 0x18);
        }
        lVar7 = lVar13;
      } while (lVar13 != 0);
      iVar8 = *(int *)(lVar9 + 0x78);
    }
    *(int *)(lVar9 + 0x78) = iVar8 + -1;
    if (iVar8 + -1 == 0) {
      for (lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8); lVar7 != 0;
          lVar7 = *(long *)(lVar7 + 0x18)) {
        *(uint *)(lVar7 + 0x3c) = (uint)*(ushort *)(lVar7 + 0x3e) << 0x10;
      }
    }
  }
  else {
    if (lVar7 != 0) {
      do {
        lVar13 = FUN_02999e6c(lVar9,0xc5,8,1,lVar7);
        if (lVar13 == 0) break;
        if ((*(byte *)(lVar13 + 0x3f) >> 5 & 1) == 0) {
          lVar13 = *(long *)(lVar7 + 0x18);
        }
        lVar7 = lVar13;
      } while (lVar13 != 0);
      iVar8 = *(int *)(lVar9 + 0x78);
    }
    *(int *)(lVar9 + 0x78) = iVar8 + -1;
    if (iVar8 + -1 == 0) {
      for (lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8); lVar7 != 0;
          lVar7 = *(long *)(lVar7 + 0x18)) {
        *(uint *)(lVar7 + 0x3c) = (uint)*(ushort *)(lVar7 + 0x3e) << 0x10;
      }
    }
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x2d0);
  bVar6 = false;
  if (lVar7 != 0) {
    bVar6 = *(int *)(lVar7 + 0xc) != 0;
  }
  *(bool *)param_5 = bVar6;
  lVar9 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(*(long *)(lVar9 + 0x70) + 0x3c8);
  if (lVar7 == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = *(int *)(lVar7 + 0xc) != 0;
  }
  lVar7 = *(long *)(lVar9 + 0x50);
  if (*(uint *)(lVar7 + 0x408) == 0) {
    uVar11 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar7 + 0x408) = *(int *)(lVar7 + 0x408) + -1;
    lVar7 = *(long *)(lVar9 + 0x50);
    uVar11 = (ulong)*(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)(lVar7 + uVar11 * 0x20 + 8);
  lVar7 = *(long *)(lVar9 + 0x30);
  uVar10 = *(uint *)(lVar7 + 0xc08);
  if (uVar10 != 0) {
    if ((uVar10 & 0xffff) < 0x60) {
      uVar11 = (ulong)uVar10 & 0xffff;
      plVar12 = (long *)(lVar7 + uVar11 * 0x20 + 8);
      do {
        uVar11 = uVar11 + 1;
        if (*(short *)(*plVar12 + 8) == 0) break;
        *(undefined2 *)(*plVar12 + 8) = 0;
        plVar12 = plVar12 + 4;
      } while (((uint)uVar11 & 0xffff) != 0x60);
      uVar10 = *(uint *)(lVar7 + 0xc08);
    }
    *(uint *)(lVar7 + 0xc08) = uVar10 - 1;
    *(undefined2 *)(*(long *)(lVar7 + (ulong)(uVar10 - 1) * 0x20 + 8) + 8) = 0;
    uVar11 = (ulong)*(uint *)(lVar7 + 0xc08);
    do {
      if (uVar11 == 0) {
        return bVar6;
      }
      uVar11 = uVar11 - 1;
      *(int *)(lVar7 + 0xc08) = (int)uVar11;
    } while (*(short *)(*(long *)(lVar7 + (uVar11 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar7 + 0xc08) = (int)uVar11 + 1;
  }
  return bVar6;
}


