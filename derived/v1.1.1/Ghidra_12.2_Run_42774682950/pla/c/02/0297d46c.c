/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0297d46c; name: FUN_0297d46c
 */


void FUN_0297d46c(long param_1,undefined4 *param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar6 + 0x30);
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
  lVar7 = *(long *)(lVar6 + 0x50);
  uVar9 = *(uint *)(lVar7 + 0x408);
  if (uVar9 < 0x1f) {
    *(uint *)(lVar7 + 0x408) = uVar9 + 1;
    lVar7 = *(long *)(lVar6 + 0x50);
    uVar9 = *(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar7 + (ulong)uVar9 * 0x20 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar6 + 0x30);
  uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
  bVar2 = *(byte *)(param_4 + 0x5a);
  bVar3 = *(byte *)(param_3 + 0x7d);
  uVar8 = uVar12 << 5 | 8;
  uVar15 = uVar12;
  do {
    uVar13 = uVar15;
    if (0x5f < uVar13) goto LAB_0297d598;
    sVar4 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar4 == 0) goto LAB_0297d55c;
    uVar8 = uVar8 + 0x20;
    uVar15 = uVar13 + 1;
  } while (sVar4 != 3);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_0297d55c:
    lVar11 = *(long *)(lVar7 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 3;
      *(uint *)(lVar11 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x70) + 0x20) = lVar11;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar6 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297d598:
  uVar1 = *param_2;
  uVar8 = uVar12 << 5 | 8;
  lVar11 = 0;
  do {
    lVar14 = lVar11;
    if (0x5f < uVar12 + lVar14) goto LAB_0297d620;
    sVar4 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar4 == 0) goto LAB_0297d5e4;
    uVar8 = uVar8 + 0x20;
    lVar11 = lVar14 + 1;
  } while (sVar4 != 0x12);
  if (((int)uVar12 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0297d5e4:
    lVar11 = *(long *)(lVar7 + (ulong)(uint)((int)uVar12 + (int)lVar14) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x12;
      *(undefined4 *)(lVar11 + 0xc) = uVar1;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x70) + 0x98) = lVar11;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar6 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297d620:
  bVar3 = *(byte *)(param_2 + 4);
  uVar8 = uVar12 << 5 | 8;
  lVar11 = 0;
  do {
    lVar14 = lVar11;
    if (0x5f < uVar12 + lVar14) goto LAB_0297d6a8;
    sVar4 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar4 == 0) goto LAB_0297d66c;
    uVar8 = uVar8 + 0x20;
    lVar11 = lVar14 + 1;
  } while (sVar4 != 99);
  if (((int)uVar12 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0297d66c:
    lVar11 = *(long *)(lVar7 + (ulong)(uint)((int)uVar12 + (int)lVar14) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 99;
      *(uint *)(lVar11 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x70) + 800) = lVar11;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar6 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297d6a8:
  plVar10 = (long *)(lVar7 + uVar12 * 0x20 + 8);
  do {
    uVar8 = uVar12;
    if (0x5f < uVar8) goto LAB_0297d714;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_0297d6e4;
    plVar10 = plVar10 + 4;
    uVar12 = uVar8 + 1;
  } while (*(short *)(lVar11 + 8) != 5);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_0297d6e4:
    lVar7 = *(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 5;
      *(uint *)(lVar7 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x70) + 0x30) = lVar7;
    }
  }
LAB_0297d714:
  if (bVar2 != 0) {
    uVar8 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x10);
      uVar9 = (int)uVar8 + 6;
      lVar7 = *(long *)(lVar6 + 0x30);
      bVar3 = *(byte *)(*(long *)(param_4 + uVar8 * 8) + 0x7d);
      plVar10 = (long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0xc08) * 0x20 + 8);
      uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
      do {
        uVar15 = uVar12;
        if (0x5f < uVar15) goto LAB_0297d724;
        lVar11 = *plVar10;
        if (*(ushort *)(lVar11 + 8) == 0) goto LAB_0297d784;
        plVar10 = plVar10 + 4;
        uVar12 = uVar15 + 1;
      } while ((uint)*(ushort *)(lVar11 + 8) != (uVar9 & 0xffff));
      if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_0297d784:
        lVar7 = *(long *)(lVar7 + (uVar15 & 0xffffffff) * 0x20 + 8);
        if (lVar7 != 0) {
          *(ushort *)(lVar7 + 8) = (ushort)uVar9;
          *(uint *)(lVar7 + 0xc) = (uint)bVar3;
          *(undefined1 *)(lVar7 + 10) = 4;
          *(undefined8 *)(lVar7 + 0x10) = 0;
          *(undefined8 *)(lVar7 + 0x18) = 0;
          if ((uVar9 & 0xffff) < 0x82) {
            *(long *)(*(long *)(lVar6 + 0x70) + (ulong)(ushort)uVar9 * 8 + 8) = lVar7;
          }
        }
      }
LAB_0297d724:
      uVar8 = uVar8 + 1;
    } while (uVar8 != bVar2);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  iVar5 = *(int *)(lVar7 + 0x78) + 1;
  *(int *)(lVar7 + 0x78) = iVar5;
  lVar6 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8);
  if (lVar6 != 0) {
    do {
      lVar11 = FUN_02999e6c(lVar7,0x35,8,1,lVar6);
      if (lVar11 == 0) break;
      if ((*(byte *)(lVar11 + 0x3f) >> 5 & 1) == 0) {
        lVar11 = *(long *)(lVar6 + 0x18);
      }
      lVar6 = lVar11;
    } while (lVar11 != 0);
    iVar5 = *(int *)(lVar7 + 0x78);
  }
  *(int *)(lVar7 + 0x78) = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    for (lVar6 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8); lVar6 != 0;
        lVar6 = *(long *)(lVar6 + 0x18)) {
      *(uint *)(lVar6 + 0x3c) = (uint)*(ushort *)(lVar6 + 0x3e) << 0x10;
    }
  }
  lVar6 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar6 + 0x50);
  if (*(uint *)(lVar7 + 0x408) == 0) {
    uVar8 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar7 + 0x408) = *(int *)(lVar7 + 0x408) + -1;
    lVar7 = *(long *)(lVar6 + 0x50);
    uVar8 = (ulong)*(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar7 + uVar8 * 0x20 + 8);
  lVar6 = *(long *)(lVar6 + 0x30);
  uVar9 = *(uint *)(lVar6 + 0xc08);
  if (uVar9 != 0) {
    if ((uVar9 & 0xffff) < 0x60) {
      uVar8 = (ulong)uVar9 & 0xffff;
      plVar10 = (long *)(lVar6 + uVar8 * 0x20 + 8);
      do {
        uVar8 = uVar8 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar8 & 0xffff) != 0x60);
      uVar9 = *(uint *)(lVar6 + 0xc08);
    }
    *(uint *)(lVar6 + 0xc08) = uVar9 - 1;
    *(undefined2 *)(*(long *)(lVar6 + (ulong)(uVar9 - 1) * 0x20 + 8) + 8) = 0;
    uVar8 = (ulong)*(uint *)(lVar6 + 0xc08);
    do {
      if (uVar8 == 0) {
        return;
      }
      uVar8 = uVar8 - 1;
      *(int *)(lVar6 + 0xc08) = (int)uVar8;
    } while (*(short *)(*(long *)(lVar6 + (uVar8 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar6 + 0xc08) = (int)uVar8 + 1;
  }
  return;
}


