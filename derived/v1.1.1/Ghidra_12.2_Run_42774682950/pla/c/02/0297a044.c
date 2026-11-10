/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0297a044; name: FUN_0297a044
 */


void FUN_0297a044(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  short sVar3;
  ulong uVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  
  lVar7 = *(long *)(param_1 + 0x10);
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
  lVar9 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar9 + 0x30);
  uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
  bVar2 = *(byte *)(param_2 + 0x7d);
  uVar8 = uVar10 << 5 | 8;
  uVar4 = uVar10;
  do {
    uVar14 = uVar4;
    if (0x5f < uVar14) goto LAB_0297a174;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0297a138;
    uVar8 = uVar8 + 0x20;
    uVar4 = uVar14 + 1;
  } while (sVar3 != 3);
  if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0297a138:
    lVar13 = *(long *)(lVar7 + (uVar14 & 0xffffffff) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 3;
      *(uint *)(lVar13 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x20) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297a174:
  uVar1 = *param_3;
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar15 = lVar13;
    if (0x5f < uVar10 + lVar15) goto LAB_0297a1fc;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0297a1c0;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar15 + 1;
  } while (sVar3 != 0x12);
  if (((int)uVar10 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_0297a1c0:
    lVar13 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar15) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x12;
      *(undefined4 *)(lVar13 + 0xc) = uVar1;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x98) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297a1fc:
  bVar2 = *(byte *)((long)param_3 + 10);
  plVar12 = (long *)(lVar7 + uVar10 * 0x20 + 8);
  do {
    uVar8 = uVar10;
    if (0x5f < uVar8) goto LAB_0297a270;
    lVar13 = *plVar12;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_0297a23c;
    plVar12 = plVar12 + 4;
    uVar10 = uVar8 + 1;
  } while (*(short *)(lVar13 + 8) != 0x16);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_0297a23c:
    lVar7 = *(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 0x16;
      *(uint *)(lVar7 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar7 + 10) = 1;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0xb8) = lVar7;
      lVar9 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0297a270:
  iVar6 = *(int *)(lVar9 + 0x78) + 1;
  *(int *)(lVar9 + 0x78) = iVar6;
  lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8);
  if (lVar7 != 0) {
    do {
      lVar13 = FUN_02999e6c(lVar9,199,8,1,lVar7);
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
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0xb8);
  uVar5 = 0;
  if (lVar7 != 0) {
    uVar5 = (undefined1)*(undefined4 *)(lVar7 + 0xc);
  }
  *(undefined1 *)((long)param_3 + 10) = uVar5;
  lVar7 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar7 + 0x50);
  if (*(uint *)(lVar9 + 0x408) == 0) {
    uVar8 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar9 + (ulong)*(uint *)(lVar9 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar9 + 0x408) = *(int *)(lVar9 + 0x408) + -1;
    lVar9 = *(long *)(lVar7 + 0x50);
    uVar8 = (ulong)*(uint *)(lVar9 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar9 + uVar8 * 0x20 + 8);
  lVar7 = *(long *)(lVar7 + 0x30);
  uVar11 = *(uint *)(lVar7 + 0xc08);
  if (uVar11 != 0) {
    if ((uVar11 & 0xffff) < 0x60) {
      uVar8 = (ulong)uVar11 & 0xffff;
      plVar12 = (long *)(lVar7 + uVar8 * 0x20 + 8);
      do {
        uVar8 = uVar8 + 1;
        if (*(short *)(*plVar12 + 8) == 0) break;
        *(undefined2 *)(*plVar12 + 8) = 0;
        plVar12 = plVar12 + 4;
      } while (((uint)uVar8 & 0xffff) != 0x60);
      uVar11 = *(uint *)(lVar7 + 0xc08);
    }
    *(uint *)(lVar7 + 0xc08) = uVar11 - 1;
    *(undefined2 *)(*(long *)(lVar7 + (ulong)(uVar11 - 1) * 0x20 + 8) + 8) = 0;
    uVar8 = (ulong)*(uint *)(lVar7 + 0xc08);
    do {
      if (uVar8 == 0) {
        return;
      }
      uVar8 = uVar8 - 1;
      *(int *)(lVar7 + 0xc08) = (int)uVar8;
    } while (*(short *)(*(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar7 + 0xc08) = (int)uVar8 + 1;
  }
  return;
}


