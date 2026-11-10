/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02997578; name: FUN_02997578
 */


bool FUN_02997578(long param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  short sVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar6 + 0x30);
  uVar10 = *(uint *)(lVar8 + 0xc08);
  if (uVar10 < 0x60) {
    do {
      lVar12 = *(long *)(lVar8 + (ulong)uVar10 * 0x20 + 8);
      if (*(short *)(lVar12 + 8) == 0) {
        if (uVar10 < 0x5f) {
          *(undefined2 *)(lVar12 + 8) = 1;
          *(int *)(lVar8 + 0xc08) = *(int *)(lVar8 + 0xc08) + 1;
        }
        break;
      }
      uVar10 = uVar10 + 1;
      *(uint *)(lVar8 + 0xc08) = uVar10;
    } while (uVar10 != 0x60);
  }
  lVar8 = *(long *)(lVar6 + 0x50);
  uVar10 = *(uint *)(lVar8 + 0x408);
  if (uVar10 < 0x1f) {
    *(uint *)(lVar8 + 0x408) = uVar10 + 1;
    lVar8 = *(long *)(lVar6 + 0x50);
    uVar10 = *(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar8 + (ulong)uVar10 * 0x20 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar8 + 0x30);
  uVar9 = (ulong)*(uint *)(lVar6 + 0xc08);
  bVar1 = *(byte *)(param_2 + 0x7d);
  uVar7 = uVar9 << 5 | 8;
  uVar3 = uVar9;
  do {
    uVar13 = uVar3;
    if (0x5f < uVar13) goto LAB_029976a0;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar2 == 0) goto LAB_02997664;
    uVar7 = uVar7 + 0x20;
    uVar3 = uVar13 + 1;
  } while (sVar2 != 3);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_02997664:
    lVar12 = *(long *)(lVar6 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 3;
      *(uint *)(lVar12 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x20) = lVar12;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar8 + 0x30);
      uVar9 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_029976a0:
  bVar1 = *(byte *)(param_3 + 0x7d);
  uVar7 = uVar9 << 5 | 8;
  lVar12 = 0;
  do {
    lVar14 = lVar12;
    if (0x5f < uVar9 + lVar14) goto LAB_02997724;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar2 == 0) goto LAB_029976ec;
    uVar7 = uVar7 + 0x20;
    lVar12 = lVar14 + 1;
  } while (sVar2 != 4);
  if (((int)uVar9 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_029976ec:
    lVar12 = *(long *)(lVar6 + (ulong)(uint)((int)uVar9 + (int)lVar14) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 4;
      *(uint *)(lVar12 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x28) = lVar12;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar8 + 0x30);
      uVar9 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_02997724:
  bVar1 = *(byte *)(param_4 + 0x7d);
  uVar7 = uVar9 << 5 | 8;
  lVar12 = 0;
  do {
    lVar14 = lVar12;
    if (0x5f < uVar9 + lVar14) goto LAB_029977ac;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar2 == 0) goto LAB_02997770;
    uVar7 = uVar7 + 0x20;
    lVar12 = lVar14 + 1;
  } while (sVar2 != 2);
  if (((int)uVar9 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_02997770:
    lVar12 = *(long *)(lVar6 + (ulong)(uint)((int)uVar9 + (int)lVar14) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 2;
      *(uint *)(lVar12 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x18) = lVar12;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar8 + 0x30);
      uVar9 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_029977ac:
  plVar11 = (long *)(lVar6 + uVar9 * 0x20 + 8);
  do {
    uVar7 = uVar9;
    if (0x5f < uVar7) goto LAB_02997820;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_029977e8;
    plVar11 = plVar11 + 4;
    uVar9 = uVar7 + 1;
  } while (*(short *)(lVar12 + 8) != 0x73);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_029977e8:
    lVar6 = *(long *)(lVar6 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x73;
      *(undefined8 *)(lVar6 + 0xc) = 0;
      *(undefined8 *)(lVar6 + 0x14) = 0;
      *(undefined4 *)(lVar6 + 0x1c) = 0;
      *(undefined1 *)(lVar6 + 10) = 1;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x3a0) = lVar6;
      lVar8 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02997820:
  iVar5 = *(int *)(lVar8 + 0x78) + 1;
  *(int *)(lVar8 + 0x78) = iVar5;
  lVar6 = *(long *)(*(long *)(*(long *)(lVar8 + 8) + 0x88) + 0x14c8);
  if (lVar6 != 0) {
    do {
      lVar12 = FUN_02999e6c(lVar8,0xe3,8,1,lVar6);
      if (lVar12 == 0) break;
      if ((*(byte *)(lVar12 + 0x3f) >> 5 & 1) == 0) {
        lVar12 = *(long *)(lVar6 + 0x18);
      }
      lVar6 = lVar12;
    } while (lVar12 != 0);
    iVar5 = *(int *)(lVar8 + 0x78);
  }
  *(int *)(lVar8 + 0x78) = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    for (lVar6 = *(long *)(*(long *)(*(long *)(lVar8 + 8) + 0x88) + 0x14c8); lVar6 != 0;
        lVar6 = *(long *)(lVar6 + 0x18)) {
      *(uint *)(lVar6 + 0x3c) = (uint)*(ushort *)(lVar6 + 0x3e) << 0x10;
    }
  }
  lVar8 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(*(long *)(lVar8 + 0x70) + 0x3a0);
  if (lVar6 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(int *)(lVar6 + 0xc) != 0;
  }
  lVar6 = *(long *)(lVar8 + 0x50);
  if (*(uint *)(lVar6 + 0x408) == 0) {
    uVar7 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar6 + (ulong)*(uint *)(lVar6 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar6 + 0x408) = *(int *)(lVar6 + 0x408) + -1;
    lVar6 = *(long *)(lVar8 + 0x50);
    uVar7 = (ulong)*(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(lVar6 + uVar7 * 0x20 + 8);
  lVar6 = *(long *)(lVar8 + 0x30);
  uVar10 = *(uint *)(lVar6 + 0xc08);
  if (uVar10 != 0) {
    if ((uVar10 & 0xffff) < 0x60) {
      uVar7 = (ulong)uVar10 & 0xffff;
      plVar11 = (long *)(lVar6 + uVar7 * 0x20 + 8);
      do {
        uVar7 = uVar7 + 1;
        if (*(short *)(*plVar11 + 8) == 0) break;
        *(undefined2 *)(*plVar11 + 8) = 0;
        plVar11 = plVar11 + 4;
      } while (((uint)uVar7 & 0xffff) != 0x60);
      uVar10 = *(uint *)(lVar6 + 0xc08);
    }
    *(uint *)(lVar6 + 0xc08) = uVar10 - 1;
    *(undefined2 *)(*(long *)(lVar6 + (ulong)(uVar10 - 1) * 0x20 + 8) + 8) = 0;
    uVar7 = (ulong)*(uint *)(lVar6 + 0xc08);
    do {
      if (uVar7 == 0) {
        return bVar4;
      }
      uVar7 = uVar7 - 1;
      *(int *)(lVar6 + 0xc08) = (int)uVar7;
    } while (*(short *)(*(long *)(lVar6 + (uVar7 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar6 + 0xc08) = (int)uVar7 + 1;
  }
  return bVar4;
}


