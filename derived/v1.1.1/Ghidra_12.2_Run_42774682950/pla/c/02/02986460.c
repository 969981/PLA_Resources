/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02986460; name: FUN_02986460
 */


bool FUN_02986460(long param_1,long param_2,long param_3,undefined4 param_4,uint param_5,
                 undefined8 param_6)

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
  uint uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
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
  lVar7 = *(long *)(param_1 + 0x10);
  if (param_2 == 0) {
    uVar11 = 0x1f;
  }
  else {
    uVar11 = (uint)*(byte *)(param_2 + 0x7d);
  }
  lVar9 = *(long *)(lVar7 + 0x30);
  uVar10 = (ulong)*(uint *)(lVar9 + 0xc08);
  uVar8 = uVar10 << 5 | 8;
  uVar3 = uVar10;
  do {
    uVar15 = uVar3;
    if (0x5f < uVar15) goto LAB_02986598;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar2 == 0) goto LAB_0298655c;
    uVar8 = uVar8 + 0x20;
    uVar3 = uVar15 + 1;
  } while (sVar2 != 3);
  if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_0298655c:
    lVar13 = *(long *)(lVar9 + (uVar15 & 0xffffffff) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 3;
      *(uint *)(lVar13 + 0xc) = uVar11;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x20) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02986598:
  bVar1 = *(byte *)(param_3 + 0x7d);
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_0298661c;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar2 == 0) goto LAB_029865e4;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar2 != 4);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_029865e4:
    lVar13 = *(long *)(lVar9 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 4;
      *(uint *)(lVar13 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x28) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_0298661c:
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_029866a0;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar2 == 0) goto LAB_02986664;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar2 != 0x1e);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_02986664:
    lVar13 = *(long *)(lVar9 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x1e;
      *(undefined4 *)(lVar13 + 0xc) = param_4;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0xf8) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_029866a0:
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_02986728;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar2 == 0) goto LAB_029866ec;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar2 != 0x6b);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_029866ec:
    lVar13 = *(long *)(lVar9 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x6b;
      *(uint *)(lVar13 + 0xc) = param_5 & 0xff;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x360) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02986728:
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_029867b0;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar2 == 0) goto LAB_02986770;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar2 != 0x48);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_02986770:
    lVar13 = *(long *)(lVar9 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x48;
      *(undefined8 *)(lVar13 + 0xc) = 0;
      *(undefined8 *)(lVar13 + 0x14) = 0;
      *(undefined4 *)(lVar13 + 0x1c) = 0;
      *(undefined1 *)(lVar13 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x248) = lVar13;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_029867b0:
  plVar12 = (long *)(lVar9 + uVar10 * 0x20 + 8);
  do {
    uVar8 = uVar10;
    if (0x5f < uVar8) goto LAB_02986824;
    lVar13 = *plVar12;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_029867ec;
    plVar12 = plVar12 + 4;
    uVar10 = uVar8 + 1;
  } while (*(short *)(lVar13 + 8) != 0x4a);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_029867ec:
    lVar9 = *(long *)(lVar9 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x4a;
      *(undefined8 *)(lVar9 + 0xc) = 0;
      *(undefined8 *)(lVar9 + 0x14) = 0;
      *(undefined4 *)(lVar9 + 0x1c) = 0;
      *(undefined1 *)(lVar9 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x70) + 600) = lVar9;
      lVar7 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02986824:
  iVar6 = *(int *)(lVar7 + 0x78) + 1;
  *(int *)(lVar7 + 0x78) = iVar6;
  lVar9 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8);
  if (lVar9 != 0) {
    do {
      lVar13 = FUN_02999e6c(lVar7,0x7f,8,1,lVar9);
      if (lVar13 == 0) break;
      if ((*(byte *)(lVar13 + 0x3f) >> 5 & 1) == 0) {
        lVar13 = *(long *)(lVar9 + 0x18);
      }
      lVar9 = lVar13;
    } while (lVar13 != 0);
    iVar6 = *(int *)(lVar7 + 0x78);
  }
  *(int *)(lVar7 + 0x78) = iVar6 + -1;
  if (iVar6 + -1 == 0) {
    for (lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8); lVar7 != 0;
        lVar7 = *(long *)(lVar7 + 0x18)) {
      *(uint *)(lVar7 + 0x3c) = (uint)*(ushort *)(lVar7 + 0x3e) << 0x10;
    }
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
  if (*(long *)(lVar7 + 0x248) == 0) {
    bVar4 = false;
    lVar7 = *(long *)(lVar7 + 600);
    if (lVar7 == 0) {
      bVar5 = false;
      goto LAB_029868dc;
    }
  }
  else {
    bVar4 = *(int *)(*(long *)(lVar7 + 0x248) + 0xc) != 0;
    lVar7 = *(long *)(lVar7 + 600);
    bVar5 = false;
    if (lVar7 == 0) goto LAB_029868dc;
  }
  bVar5 = *(int *)(lVar7 + 0xc) != 0;
LAB_029868dc:
  *(bool *)param_6 = bVar5;
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
        return bVar4;
      }
      uVar8 = uVar8 - 1;
      *(int *)(lVar7 + 0xc08) = (int)uVar8;
    } while (*(short *)(*(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar7 + 0xc08) = (int)uVar8 + 1;
  }
  return bVar4;
}


