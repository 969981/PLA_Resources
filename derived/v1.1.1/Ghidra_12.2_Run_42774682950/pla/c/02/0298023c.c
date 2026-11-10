/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0298023c; name: FUN_0298023c
 */


undefined4
FUN_0298023c(long param_1,long param_2,undefined4 param_3,undefined4 param_4,long param_5,
            long param_6)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  
  if (param_5 == 0) {
    uVar14 = 0;
    uVar9 = 0;
  }
  else {
    uVar14 = *(undefined4 *)(param_5 + 0x18);
    uVar9 = *(undefined4 *)(param_5 + 0xc);
  }
  if (param_6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (uint)*(byte *)(param_6 + 0x5a);
  }
  lVar8 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar8 + 0x30);
  uVar12 = *(uint *)(lVar11 + 0xc08);
  if (uVar12 < 0x60) {
    do {
      lVar15 = *(long *)(lVar11 + (ulong)uVar12 * 0x20 + 8);
      if (*(short *)(lVar15 + 8) == 0) {
        if (uVar12 < 0x5f) {
          *(undefined2 *)(lVar15 + 8) = 1;
          *(int *)(lVar11 + 0xc08) = *(int *)(lVar11 + 0xc08) + 1;
        }
        break;
      }
      uVar12 = uVar12 + 1;
      *(uint *)(lVar11 + 0xc08) = uVar12;
    } while (uVar12 != 0x60);
  }
  lVar11 = *(long *)(lVar8 + 0x50);
  uVar12 = *(uint *)(lVar11 + 0x408);
  if (uVar12 < 0x1f) {
    *(uint *)(lVar11 + 0x408) = uVar12 + 1;
    lVar11 = *(long *)(lVar8 + 0x50);
    uVar12 = *(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(lVar11 + (ulong)uVar12 * 0x20 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar8 + 0x30);
  uVar13 = (ulong)*(uint *)(lVar11 + 0xc08);
  uVar6 = uVar13 << 5 | 8;
  uVar4 = uVar13;
  do {
    uVar17 = uVar4;
    if (0x5f < uVar17) goto LAB_0298038c;
    sVar3 = *(short *)(*(long *)(lVar11 + uVar6) + 8);
    if (sVar3 == 0) goto LAB_02980350;
    uVar6 = uVar6 + 0x20;
    uVar4 = uVar17 + 1;
  } while (sVar3 != 0x12);
  if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_02980350:
    lVar15 = *(long *)(lVar11 + (uVar17 & 0xffffffff) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x12;
      *(undefined4 *)(lVar15 + 0xc) = param_3;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x98) = lVar15;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar8 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0298038c:
  bVar2 = *(byte *)(param_2 + 0x7d);
  uVar6 = uVar13 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar13 + lVar16) goto LAB_02980414;
    sVar3 = *(short *)(*(long *)(lVar11 + uVar6) + 8);
    if (sVar3 == 0) goto LAB_029803d8;
    uVar6 = uVar6 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar3 != 2);
  if (((int)uVar13 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_029803d8:
    lVar15 = *(long *)(lVar11 + (ulong)(uint)((int)uVar13 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 2;
      *(uint *)(lVar15 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x18) = lVar15;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar8 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_02980414:
  uVar6 = uVar13 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar13 + lVar16) goto LAB_02980498;
    sVar3 = *(short *)(*(long *)(lVar11 + uVar6) + 8);
    if (sVar3 == 0) goto LAB_0298045c;
    uVar6 = uVar6 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar3 != 0x19);
  if (((int)uVar13 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_0298045c:
    lVar15 = *(long *)(lVar11 + (ulong)(uint)((int)uVar13 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x19;
      *(undefined4 *)(lVar15 + 0xc) = uVar14;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0xd0) = lVar15;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar8 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_02980498:
  uVar6 = uVar13 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar13 + lVar16) goto LAB_0298051c;
    sVar3 = *(short *)(*(long *)(lVar11 + uVar6) + 8);
    if (sVar3 == 0) goto LAB_029804e0;
    uVar6 = uVar6 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar3 != 0x1b);
  if (((int)uVar13 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_029804e0:
    lVar15 = *(long *)(lVar11 + (ulong)(uint)((int)uVar13 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined4 *)(lVar15 + 0xc) = uVar9;
      *(undefined2 *)(lVar15 + 8) = 0x1b;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0xe0) = lVar15;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar8 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0298051c:
  uVar6 = uVar13 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar13 + lVar16) goto LAB_029805a4;
    sVar3 = *(short *)(*(long *)(lVar11 + uVar6) + 8);
    if (sVar3 == 0) goto LAB_02980564;
    uVar6 = uVar6 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar3 != 0x25);
  if (((int)uVar13 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_02980564:
    lVar15 = *(long *)(lVar11 + (ulong)(uint)((int)uVar13 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x25;
      *(undefined8 *)(lVar15 + 0xc) = 0;
      *(undefined8 *)(lVar15 + 0x14) = 0;
      *(undefined4 *)(lVar15 + 0x1c) = 0;
      *(undefined1 *)(lVar15 + 10) = 1;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x130) = lVar15;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar8 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_029805a4:
  plVar10 = (long *)(lVar11 + uVar13 * 0x20 + 8);
  do {
    uVar6 = uVar13;
    if (0x5f < uVar6) goto LAB_02980610;
    lVar15 = *plVar10;
    if (*(short *)(lVar15 + 8) == 0) goto LAB_029805e0;
    plVar10 = plVar10 + 4;
    uVar13 = uVar6 + 1;
  } while (*(short *)(lVar15 + 8) != 5);
  if ((int)(uVar6 + 1) - 1U < 0x60) {
LAB_029805e0:
    lVar11 = *(long *)(lVar11 + (uVar6 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 5;
      *(uint *)(lVar11 + 0xc) = uVar7;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x30) = lVar11;
    }
  }
LAB_02980610:
  if (uVar7 != 0) {
    uVar12 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x10);
      uVar1 = uVar12 + 6;
      lVar11 = *(long *)(lVar8 + 0x30);
      bVar2 = *(byte *)(*(long *)(param_6 + (ulong)uVar12 * 8) + 0x7d);
      plVar10 = (long *)(lVar11 + (ulong)*(uint *)(lVar11 + 0xc08) * 0x20 + 8);
      uVar6 = (ulong)*(uint *)(lVar11 + 0xc08);
      do {
        uVar13 = uVar6;
        if (0x5f < uVar13) goto LAB_02980620;
        lVar15 = *plVar10;
        if (*(ushort *)(lVar15 + 8) == 0) goto LAB_02980688;
        plVar10 = plVar10 + 4;
        uVar6 = uVar13 + 1;
      } while (*(ushort *)(lVar15 + 8) != uVar1);
      if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_02980688:
        lVar11 = *(long *)(lVar11 + (uVar13 & 0xffffffff) * 0x20 + 8);
        if (lVar11 != 0) {
          *(short *)(lVar11 + 8) = (short)uVar1;
          *(uint *)(lVar11 + 0xc) = (uint)bVar2;
          *(undefined1 *)(lVar11 + 10) = 4;
          *(undefined8 *)(lVar11 + 0x10) = 0;
          *(undefined8 *)(lVar11 + 0x18) = 0;
          if (uVar1 < 0x82) {
            *(long *)(*(long *)(lVar8 + 0x70) + (ulong)uVar1 * 8 + 8) = lVar11;
          }
        }
      }
LAB_02980620:
      uVar12 = uVar12 + 1 & 0xff;
    } while (uVar12 < uVar7);
  }
  if (param_5 != 0) {
    lVar8 = *(long *)(param_1 + 0x10);
    lVar11 = *(long *)(lVar8 + 0x30);
    plVar10 = (long *)(lVar11 + (ulong)*(uint *)(lVar11 + 0xc08) * 0x20 + 8);
    uVar6 = (ulong)*(uint *)(lVar11 + 0xc08);
    do {
      uVar13 = uVar6;
      if (0x5f < uVar13) goto LAB_02980740;
      lVar15 = *plVar10;
      if (*(short *)(lVar15 + 8) == 0) goto LAB_02980710;
      plVar10 = plVar10 + 4;
      uVar6 = uVar13 + 1;
    } while (*(short *)(lVar15 + 8) != 0x16);
    if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_02980710:
      lVar11 = *(long *)(lVar11 + (uVar13 & 0xffffffff) * 0x20 + 8);
      if (lVar11 != 0) {
        *(uint *)(lVar11 + 0xc) = (uint)*(byte *)(param_5 + 10);
        *(undefined2 *)(lVar11 + 8) = 0x16;
        *(undefined1 *)(lVar11 + 10) = 4;
        *(undefined8 *)(lVar11 + 0x10) = 0;
        *(undefined8 *)(lVar11 + 0x18) = 0;
        *(long *)(*(long *)(lVar8 + 0x70) + 0xb8) = lVar11;
      }
    }
  }
LAB_02980740:
  lVar11 = *(long *)(param_1 + 0x10);
  iVar5 = *(int *)(lVar11 + 0x78) + 1;
  *(int *)(lVar11 + 0x78) = iVar5;
  lVar8 = *(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x88) + 0x14c8);
  if (lVar8 != 0) {
    do {
      lVar15 = FUN_02999e6c(lVar11,param_4,8,1,lVar8);
      if (lVar15 == 0) break;
      if ((*(byte *)(lVar15 + 0x3f) >> 5 & 1) == 0) {
        lVar15 = *(long *)(lVar8 + 0x18);
      }
      lVar8 = lVar15;
    } while (lVar15 != 0);
    iVar5 = *(int *)(lVar11 + 0x78);
  }
  *(int *)(lVar11 + 0x78) = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    for (lVar8 = *(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x88) + 0x14c8); lVar8 != 0;
        lVar8 = *(long *)(lVar8 + 0x18)) {
      *(uint *)(lVar8 + 0x3c) = (uint)*(ushort *)(lVar8 + 0x3e) << 0x10;
    }
  }
  lVar11 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(*(long *)(lVar11 + 0x70) + 0x130);
  if (lVar8 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined4 *)(lVar8 + 0xc);
  }
  lVar8 = *(long *)(lVar11 + 0x50);
  if (*(uint *)(lVar8 + 0x408) == 0) {
    uVar6 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar8 + (ulong)*(uint *)(lVar8 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar8 + 0x408) = *(int *)(lVar8 + 0x408) + -1;
    lVar8 = *(long *)(lVar11 + 0x50);
    uVar6 = (ulong)*(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)(lVar8 + uVar6 * 0x20 + 8);
  lVar8 = *(long *)(lVar11 + 0x30);
  uVar7 = *(uint *)(lVar8 + 0xc08);
  if (uVar7 != 0) {
    if ((uVar7 & 0xffff) < 0x60) {
      uVar6 = (ulong)uVar7 & 0xffff;
      plVar10 = (long *)(lVar8 + uVar6 * 0x20 + 8);
      do {
        uVar6 = uVar6 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar6 & 0xffff) != 0x60);
      uVar7 = *(uint *)(lVar8 + 0xc08);
    }
    *(uint *)(lVar8 + 0xc08) = uVar7 - 1;
    *(undefined2 *)(*(long *)(lVar8 + (ulong)(uVar7 - 1) * 0x20 + 8) + 8) = 0;
    uVar6 = (ulong)*(uint *)(lVar8 + 0xc08);
    do {
      if (uVar6 == 0) {
        return uVar14;
      }
      uVar6 = uVar6 - 1;
      *(int *)(lVar8 + 0xc08) = (int)uVar6;
    } while (*(short *)(*(long *)(lVar8 + (uVar6 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar8 + 0xc08) = (int)uVar6 + 1;
  }
  return uVar14;
}


