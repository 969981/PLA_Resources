/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0298de0c; name: FUN_0298de0c
 */


undefined4
FUN_0298de0c(long param_1,long param_2,long param_3,undefined4 *param_4,long param_5,int *param_6)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined4 uVar15;
  
  lVar5 = *(long *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_5 + 0x5a);
  lVar7 = *(long *)(lVar5 + 0x30);
  uVar9 = *(uint *)(lVar7 + 0xc08);
  if (uVar9 < 0x60) {
    do {
      lVar11 = *(long *)(lVar7 + (ulong)uVar9 * 0x20 + 8);
      if (*(short *)(lVar11 + 8) == 0) {
        if (uVar9 < 0x5f) {
          *(undefined2 *)(lVar11 + 8) = 1;
          *(int *)(lVar7 + 0xc08) = *(int *)(lVar7 + 0xc08) + 1;
        }
        break;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(lVar7 + 0xc08) = uVar9;
    } while (uVar9 != 0x60);
  }
  lVar7 = *(long *)(lVar5 + 0x50);
  uVar9 = *(uint *)(lVar7 + 0x408);
  if (uVar9 < 0x1f) {
    *(uint *)(lVar7 + 0x408) = uVar9 + 1;
    lVar7 = *(long *)(lVar5 + 0x50);
    uVar9 = *(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(lVar7 + (ulong)uVar9 * 0x20 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x30);
  uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
  bVar2 = *(byte *)(param_3 + 0x7d);
  uVar9 = (uint)bVar2;
  uVar6 = uVar10 << 5 | 8;
  uVar14 = uVar10;
  do {
    uVar12 = uVar14;
    if (0x5f < uVar12) goto LAB_0298df44;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar6) + 8);
    if (sVar3 == 0) goto LAB_0298df04;
    uVar6 = uVar6 + 0x20;
    uVar14 = uVar12 + 1;
  } while (sVar3 != 3);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_0298df04:
    lVar11 = *(long *)(lVar7 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 3;
      *(uint *)(lVar11 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x70) + 0x20) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x30);
      uVar9 = (uint)*(byte *)(param_3 + 0x7d);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298df44:
  uVar6 = uVar10 << 5 | 8;
  lVar11 = 0;
  do {
    lVar13 = lVar11;
    if (0x5f < uVar10 + lVar13) goto LAB_0298dfc8;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar6) + 8);
    if (sVar3 == 0) goto LAB_0298df8c;
    uVar6 = uVar6 + 0x20;
    lVar11 = lVar13 + 1;
  } while (sVar3 != 2);
  if (((int)uVar10 + (int)(lVar13 + 1)) - 1U < 0x60) {
LAB_0298df8c:
    lVar11 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar13) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 2;
      *(uint *)(lVar11 + 0xc) = uVar9;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x70) + 0x18) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298dfc8:
  uVar15 = *param_4;
  uVar6 = uVar10 << 5 | 8;
  lVar11 = 0;
  do {
    lVar13 = lVar11;
    if (0x5f < uVar10 + lVar13) goto LAB_0298e050;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar6) + 8);
    if (sVar3 == 0) goto LAB_0298e014;
    uVar6 = uVar6 + 0x20;
    lVar11 = lVar13 + 1;
  } while (sVar3 != 0x12);
  if (((int)uVar10 + (int)(lVar13 + 1)) - 1U < 0x60) {
LAB_0298e014:
    lVar11 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar13) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x12;
      *(undefined4 *)(lVar11 + 0xc) = uVar15;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x70) + 0x98) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298e050:
  bVar2 = *(byte *)((long)param_4 + 10);
  uVar6 = uVar10 << 5 | 8;
  lVar11 = 0;
  do {
    lVar13 = lVar11;
    if (0x5f < uVar10 + lVar13) goto LAB_0298e0d8;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar6) + 8);
    if (sVar3 == 0) goto LAB_0298e09c;
    uVar6 = uVar6 + 0x20;
    lVar11 = lVar13 + 1;
  } while (sVar3 != 0x16);
  if (((int)uVar10 + (int)(lVar13 + 1)) - 1U < 0x60) {
LAB_0298e09c:
    lVar11 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar13) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x16;
      *(uint *)(lVar11 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x70) + 0xb8) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298e0d8:
  uVar9 = *(uint *)(param_2 + 4);
  uVar6 = uVar10 << 5 | 8;
  lVar11 = 0;
  do {
    lVar13 = lVar11;
    if (0x5f < uVar10 + lVar13) goto LAB_0298e168;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar6) + 8);
    if (sVar3 == 0) goto LAB_0298e128;
    uVar6 = uVar6 + 0x20;
    lVar11 = lVar13 + 1;
  } while (sVar3 != 0x6f);
  if (((int)uVar10 + (int)(lVar13 + 1)) - 1U < 0x60) {
LAB_0298e128:
    lVar11 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar13) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x6f;
      *(uint *)(lVar11 + 0xc) = uVar9 >> 1 & 1;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x70) + 0x380) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x30);
      uVar9 = *(uint *)(param_2 + 4);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298e168:
  uVar6 = uVar10 << 5 | 8;
  lVar11 = 0;
  do {
    lVar13 = lVar11;
    if (0x5f < uVar10 + lVar13) goto LAB_0298e1f0;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar6) + 8);
    if (sVar3 == 0) goto LAB_0298e1b4;
    uVar6 = uVar6 + 0x20;
    lVar11 = lVar13 + 1;
  } while (sVar3 != 0x71);
  if (((int)uVar10 + (int)(lVar13 + 1)) - 1U < 0x60) {
LAB_0298e1b4:
    lVar11 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar13) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x71;
      *(uint *)(lVar11 + 0xc) = uVar9 >> 3 & 1;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x70) + 0x390) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298e1f0:
  plVar8 = (long *)(lVar7 + uVar10 * 0x20 + 8);
  do {
    uVar6 = uVar10;
    if (0x5f < uVar6) goto LAB_0298e25c;
    lVar11 = *plVar8;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_0298e22c;
    plVar8 = plVar8 + 4;
    uVar10 = uVar6 + 1;
  } while (*(short *)(lVar11 + 8) != 5);
  if ((int)(uVar6 + 1) - 1U < 0x60) {
LAB_0298e22c:
    lVar7 = *(long *)(lVar7 + (uVar6 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 5;
      *(uint *)(lVar7 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x70) + 0x30) = lVar7;
    }
  }
LAB_0298e25c:
  if (bVar1 != 0) {
    uVar6 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x10);
      uVar9 = (int)uVar6 + 6;
      lVar7 = *(long *)(lVar5 + 0x30);
      bVar2 = *(byte *)(*(long *)(param_5 + uVar6 * 8) + 0x7d);
      plVar8 = (long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0xc08) * 0x20 + 8);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
      do {
        uVar14 = uVar10;
        if (0x5f < uVar14) goto LAB_0298e26c;
        lVar11 = *plVar8;
        if (*(ushort *)(lVar11 + 8) == 0) goto LAB_0298e2cc;
        plVar8 = plVar8 + 4;
        uVar10 = uVar14 + 1;
      } while ((uint)*(ushort *)(lVar11 + 8) != (uVar9 & 0xffff));
      if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0298e2cc:
        lVar7 = *(long *)(lVar7 + (uVar14 & 0xffffffff) * 0x20 + 8);
        if (lVar7 != 0) {
          *(ushort *)(lVar7 + 8) = (ushort)uVar9;
          *(uint *)(lVar7 + 0xc) = (uint)bVar2;
          *(undefined1 *)(lVar7 + 10) = 4;
          *(undefined8 *)(lVar7 + 0x10) = 0;
          *(undefined8 *)(lVar7 + 0x18) = 0;
          if ((uVar9 & 0xffff) < 0x82) {
            *(long *)(*(long *)(lVar5 + 0x70) + (ulong)(ushort)uVar9 * 8 + 8) = lVar7;
          }
        }
      }
LAB_0298e26c:
      uVar6 = uVar6 + 1;
    } while (uVar6 != bVar1);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar7 + 0x30);
  uVar10 = (ulong)*(uint *)(lVar5 + 0xc08);
  uVar6 = uVar10 << 5 | 8;
  uVar14 = uVar10;
  do {
    uVar12 = uVar14;
    if (0x5f < uVar12) goto LAB_0298e394;
    sVar3 = *(short *)(*(long *)(lVar5 + uVar6) + 8);
    if (sVar3 == 0) goto LAB_0298e354;
    uVar6 = uVar6 + 0x20;
    uVar14 = uVar12 + 1;
  } while (sVar3 != 0x43);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_0298e354:
    lVar11 = *(long *)(lVar5 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x43;
      *(undefined8 *)(lVar11 + 0xc) = 0;
      *(undefined8 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x1c) = 0;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x220) = lVar11;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar7 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_0298e394:
  plVar8 = (long *)(lVar5 + uVar10 * 0x20 + 8);
  do {
    uVar6 = uVar10;
    if (0x5f < uVar6) goto LAB_0298e408;
    lVar11 = *plVar8;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_0298e3d0;
    plVar8 = plVar8 + 4;
    uVar10 = uVar6 + 1;
  } while (*(short *)(lVar11 + 8) != 0x13);
  if ((int)(uVar6 + 1) - 1U < 0x60) {
LAB_0298e3d0:
    lVar5 = *(long *)(lVar5 + (uVar6 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 0x13;
      *(undefined8 *)(lVar5 + 0xc) = 0;
      *(undefined8 *)(lVar5 + 0x14) = 0;
      *(undefined4 *)(lVar5 + 0x1c) = 0;
      *(undefined1 *)(lVar5 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x70) + 0xa0) = lVar5;
      lVar7 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0298e408:
  iVar4 = *(int *)(lVar7 + 0x78) + 1;
  *(int *)(lVar7 + 0x78) = iVar4;
  lVar5 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8);
  if (lVar5 != 0) {
    do {
      lVar11 = FUN_02999e6c(lVar7,0x26,8,1,lVar5);
      if (lVar11 == 0) break;
      if ((*(byte *)(lVar11 + 0x3f) >> 5 & 1) == 0) {
        lVar11 = *(long *)(lVar5 + 0x18);
      }
      lVar5 = lVar11;
    } while (lVar11 != 0);
    iVar4 = *(int *)(lVar7 + 0x78);
  }
  *(int *)(lVar7 + 0x78) = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    for (lVar5 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8); lVar5 != 0;
        lVar5 = *(long *)(lVar5 + 0x18)) {
      *(uint *)(lVar5 + 0x3c) = (uint)*(ushort *)(lVar5 + 0x3e) << 0x10;
    }
  }
  lVar7 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar7 + 0x70);
  if (*(long *)(lVar5 + 0x220) == 0) {
    uVar15 = 0;
    lVar5 = *(long *)(lVar5 + 0xa0);
  }
  else {
    uVar15 = *(undefined4 *)(*(long *)(lVar5 + 0x220) + 0xc);
    lVar5 = *(long *)(lVar5 + 0xa0);
  }
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(lVar5 + 0xc);
  }
  lVar5 = *(long *)(lVar7 + 0x50);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar6 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar7 + 0x50);
    uVar6 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar5 + uVar6 * 0x20 + 8);
  lVar5 = *(long *)(lVar7 + 0x30);
  uVar9 = *(uint *)(lVar5 + 0xc08);
  if (uVar9 != 0) {
    if ((uVar9 & 0xffff) < 0x60) {
      uVar6 = (ulong)uVar9 & 0xffff;
      plVar8 = (long *)(lVar5 + uVar6 * 0x20 + 8);
      do {
        uVar6 = uVar6 + 1;
        if (*(short *)(*plVar8 + 8) == 0) break;
        *(undefined2 *)(*plVar8 + 8) = 0;
        plVar8 = plVar8 + 4;
      } while (((uint)uVar6 & 0xffff) != 0x60);
      uVar9 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar9 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar9 - 1) * 0x20 + 8) + 8) = 0;
    uVar6 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar6 == 0) goto LAB_0298e5a8;
      uVar6 = uVar6 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar6;
    } while (*(short *)(*(long *)(lVar5 + (uVar6 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar6 + 1;
  }
LAB_0298e5a8:
  if (iVar4 != 0) {
    *param_6 = iVar4;
  }
  return uVar15;
}


