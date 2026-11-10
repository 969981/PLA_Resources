/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02982d94; name: FUN_02982d94
 */


void FUN_02982d94(long param_1,long param_2,long param_3,long param_4,undefined4 *param_5,
                 uint param_6,uint param_7,undefined4 param_8)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  
  lVar7 = *(long *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_3 + 0x5a);
  lVar9 = *(long *)(lVar7 + 0x30);
  uVar11 = *(uint *)(lVar9 + 0xc08);
  if (uVar11 < 0x60) {
    do {
      lVar14 = *(long *)(lVar9 + (ulong)uVar11 * 0x20 + 8);
      if (*(short *)(lVar14 + 8) == 0) {
        if (uVar11 < 0x5f) {
          *(undefined2 *)(lVar14 + 8) = 1;
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
  bVar3 = *(byte *)(param_2 + 0x7d);
  uVar13 = uVar12 << 5 | 8;
  uVar5 = uVar12;
  do {
    uVar15 = uVar5;
    if (0x5f < uVar15) goto LAB_02982ec8;
    sVar4 = *(short *)(*(long *)(lVar9 + uVar13) + 8);
    if (sVar4 == 0) goto LAB_02982e8c;
    uVar13 = uVar13 + 0x20;
    uVar5 = uVar15 + 1;
  } while (sVar4 != 3);
  if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_02982e8c:
    lVar14 = *(long *)(lVar9 + (uVar15 & 0xffffffff) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 3;
      *(uint *)(lVar14 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x20) = lVar14;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02982ec8:
  uVar13 = uVar12 << 5 | 8;
  lVar14 = 0;
  do {
    lVar16 = lVar14;
    if (0x5f < uVar12 + lVar16) goto LAB_02982f50;
    sVar4 = *(short *)(*(long *)(lVar9 + uVar13) + 8);
    if (sVar4 == 0) goto LAB_02982f14;
    uVar13 = uVar13 + 0x20;
    lVar14 = lVar16 + 1;
  } while (sVar4 != 0x54);
  if (((int)uVar12 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_02982f14:
    lVar14 = *(long *)(lVar9 + (ulong)(uint)((int)uVar12 + (int)lVar16) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x54;
      *(uint *)(lVar14 + 0xc) = param_6 & 1;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x2a8) = lVar14;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02982f50:
  uVar1 = *param_5;
  uVar13 = uVar12 << 5 | 8;
  lVar14 = 0;
  do {
    lVar16 = lVar14;
    if (0x5f < uVar12 + lVar16) goto LAB_02982fd8;
    sVar4 = *(short *)(*(long *)(lVar9 + uVar13) + 8);
    if (sVar4 == 0) goto LAB_02982f9c;
    uVar13 = uVar13 + 0x20;
    lVar14 = lVar16 + 1;
  } while (sVar4 != 0x12);
  if (((int)uVar12 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_02982f9c:
    lVar14 = *(long *)(lVar9 + (ulong)(uint)((int)uVar12 + (int)lVar16) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x12;
      *(undefined4 *)(lVar14 + 0xc) = uVar1;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x98) = lVar14;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02982fd8:
  bVar3 = *(byte *)((long)param_5 + 10);
  uVar13 = uVar12 << 5 | 8;
  lVar14 = 0;
  do {
    lVar16 = lVar14;
    if (0x5f < uVar12 + lVar16) goto LAB_02983060;
    sVar4 = *(short *)(*(long *)(lVar9 + uVar13) + 8);
    if (sVar4 == 0) goto LAB_02983024;
    uVar13 = uVar13 + 0x20;
    lVar14 = lVar16 + 1;
  } while (sVar4 != 0x16);
  if (((int)uVar12 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_02983024:
    lVar14 = *(long *)(lVar9 + (ulong)(uint)((int)uVar12 + (int)lVar16) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x16;
      *(uint *)(lVar14 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0xb8) = lVar14;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02983060:
  uVar1 = param_5[3];
  uVar13 = uVar12 << 5 | 8;
  lVar14 = 0;
  do {
    lVar16 = lVar14;
    if (0x5f < uVar12 + lVar16) goto LAB_029830e8;
    sVar4 = *(short *)(*(long *)(lVar9 + uVar13) + 8);
    if (sVar4 == 0) goto LAB_029830ac;
    uVar13 = uVar13 + 0x20;
    lVar14 = lVar16 + 1;
  } while (sVar4 != 0x1b);
  if (((int)uVar12 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_029830ac:
    lVar14 = *(long *)(lVar9 + (ulong)(uint)((int)uVar12 + (int)lVar16) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x1b;
      *(undefined4 *)(lVar14 + 0xc) = uVar1;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0xe0) = lVar14;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_029830e8:
  bVar3 = *(byte *)(param_5 + 4);
  uVar13 = uVar12 << 5 | 8;
  lVar14 = 0;
  do {
    lVar16 = lVar14;
    if (0x5f < uVar12 + lVar16) goto LAB_02983170;
    sVar4 = *(short *)(*(long *)(lVar9 + uVar13) + 8);
    if (sVar4 == 0) goto LAB_02983134;
    uVar13 = uVar13 + 0x20;
    lVar14 = lVar16 + 1;
  } while (sVar4 != 99);
  if (((int)uVar12 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_02983134:
    lVar14 = *(long *)(lVar9 + (ulong)(uint)((int)uVar12 + (int)lVar16) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 99;
      *(uint *)(lVar14 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 800) = lVar14;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar7 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02983170:
  uVar11 = *(uint *)(param_4 + 4);
  plVar10 = (long *)(lVar9 + uVar12 * 0x20 + 8);
  do {
    uVar13 = uVar12;
    if (0x5f < uVar13) goto LAB_029831e4;
    lVar14 = *plVar10;
    if (*(short *)(lVar14 + 8) == 0) goto LAB_029831b4;
    plVar10 = plVar10 + 4;
    uVar12 = uVar13 + 1;
  } while (*(short *)(lVar14 + 8) != 0x6e);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_029831b4:
    lVar9 = *(long *)(lVar9 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x6e;
      *(uint *)(lVar9 + 0xc) = uVar11 & 1;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x378) = lVar9;
    }
  }
LAB_029831e4:
  if (bVar2 != 0) {
    uVar13 = 0;
    iVar6 = 0;
    iVar8 = 0;
    if ((param_7 & 1) != 0) {
LAB_02983210:
      bVar3 = *(byte *)(param_3 + 0x5a);
      if (uVar13 < bVar3) {
        lVar7 = *(long *)(param_3 + uVar13 * 8);
      }
      else {
        lVar7 = 0;
      }
      if (bVar3 != 0) {
        uVar12 = 0;
        do {
          if ((*(long *)(param_3 + uVar12 * 8) == lVar7) &&
             (*(char *)(param_3 + uVar12 + 0x48) == '\x01')) {
            lVar9 = *(long *)(param_1 + 0x10);
            lVar14 = *(long *)(lVar9 + 0x30);
            bVar3 = *(byte *)(lVar7 + 0x7d);
            iVar6 = iVar6 + (uint)*(ushort *)(param_3 + uVar12 * 2 + 0x30);
            uVar11 = iVar8 + 6;
            plVar10 = (long *)(lVar14 + (ulong)*(uint *)(lVar14 + 0xc08) * 0x20 + 8);
            uVar12 = (ulong)*(uint *)(lVar14 + 0xc08);
            goto LAB_02983288;
          }
          uVar12 = uVar12 + 1;
        } while (bVar3 != uVar12);
      }
      goto LAB_02983204;
    }
LAB_02983308:
    bVar3 = *(byte *)(param_3 + 0x5a);
    if (uVar13 < bVar3) {
      lVar7 = *(long *)(param_3 + uVar13 * 8);
    }
    else {
      lVar7 = 0;
    }
    if (bVar3 != 0) {
      uVar12 = 0;
      do {
        if ((*(long *)(param_3 + uVar12 * 8) == lVar7) &&
           (*(char *)(param_3 + uVar12 + 0x48) != '\0')) {
          lVar9 = param_3 + uVar12 * 2;
          lVar14 = *(long *)(param_1 + 0x10);
          lVar16 = *(long *)(lVar14 + 0x30);
          bVar3 = *(byte *)(lVar7 + 0x7d);
          iVar6 = (uint)*(ushort *)(lVar9 + 0x3c) + (uint)*(ushort *)(lVar9 + 0x30) + iVar6;
          uVar11 = iVar8 + 6;
          plVar10 = (long *)(lVar16 + (ulong)*(uint *)(lVar16 + 0xc08) * 0x20 + 8);
          uVar12 = (ulong)*(uint *)(lVar16 + 0xc08);
          goto LAB_02983384;
        }
        uVar12 = uVar12 + 1;
      } while (bVar3 != uVar12);
    }
    goto LAB_029832fc;
  }
  goto LAB_0298372c;
  while( true ) {
    lVar7 = *plVar10;
    if (*(ushort *)(lVar7 + 8) == 0) goto LAB_029832bc;
    plVar10 = plVar10 + 4;
    uVar12 = uVar5 + 1;
    if ((uint)*(ushort *)(lVar7 + 8) == (uVar11 & 0xffff)) break;
LAB_02983288:
    uVar5 = uVar12;
    if (0x5f < uVar5) goto LAB_02983200;
  }
  if ((int)(uVar5 + 1) - 1U < 0x60) {
LAB_029832bc:
    lVar7 = *(long *)(lVar14 + (uVar5 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(ushort *)(lVar7 + 8) = (ushort)uVar11;
      *(uint *)(lVar7 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      if ((uVar11 & 0xffff) < 0x82) {
        *(long *)(*(long *)(lVar9 + 0x70) + (ulong)(ushort)uVar11 * 8 + 8) = lVar7;
      }
    }
  }
LAB_02983200:
  iVar8 = iVar8 + 1;
LAB_02983204:
  uVar13 = uVar13 + 1;
  if (uVar13 == bVar2) goto LAB_029833f4;
  goto LAB_02983210;
  while( true ) {
    lVar7 = *plVar10;
    if (*(ushort *)(lVar7 + 8) == 0) goto LAB_029833b8;
    plVar10 = plVar10 + 4;
    uVar12 = uVar5 + 1;
    if ((uint)*(ushort *)(lVar7 + 8) == (uVar11 & 0xffff)) break;
LAB_02983384:
    uVar5 = uVar12;
    if (0x5f < uVar5) goto LAB_029832f8;
  }
  if ((int)(uVar5 + 1) - 1U < 0x60) {
LAB_029833b8:
    lVar7 = *(long *)(lVar16 + (uVar5 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(ushort *)(lVar7 + 8) = (ushort)uVar11;
      *(uint *)(lVar7 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      if ((uVar11 & 0xffff) < 0x82) {
        *(long *)(*(long *)(lVar14 + 0x70) + (ulong)(ushort)uVar11 * 8 + 8) = lVar7;
      }
    }
  }
LAB_029832f8:
  iVar8 = iVar8 + 1;
LAB_029832fc:
  uVar13 = uVar13 + 1;
  if (uVar13 == bVar2) goto LAB_029833f4;
  goto LAB_02983308;
LAB_029833f4:
  if (iVar8 != 0) {
    lVar9 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)(lVar9 + 0x30);
    uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
    uVar13 = uVar12 << 5 | 8;
    uVar5 = uVar12;
    do {
      uVar15 = uVar5;
      if (0x5f < uVar15) goto LAB_02983480;
      sVar4 = *(short *)(*(long *)(lVar7 + uVar13) + 8);
      if (sVar4 == 0) goto LAB_02983444;
      uVar13 = uVar13 + 0x20;
      uVar5 = uVar15 + 1;
    } while (sVar4 != 5);
    if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_02983444:
      lVar14 = *(long *)(lVar7 + (uVar15 & 0xffffffff) * 0x20 + 8);
      if (lVar14 != 0) {
        *(undefined2 *)(lVar14 + 8) = 5;
        *(int *)(lVar14 + 0xc) = iVar8;
        *(undefined1 *)(lVar14 + 10) = 4;
        *(undefined8 *)(lVar14 + 0x10) = 0;
        *(undefined8 *)(lVar14 + 0x18) = 0;
        *(long *)(*(long *)(lVar9 + 0x70) + 0x30) = lVar14;
        lVar9 = *(long *)(param_1 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x30);
        uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
      }
    }
LAB_02983480:
    uVar13 = uVar12 << 5 | 8;
    lVar14 = 0;
    do {
      lVar16 = lVar14;
      if (0x5f < uVar12 + lVar16) goto LAB_02983508;
      sVar4 = *(short *)(*(long *)(lVar7 + uVar13) + 8);
      if (sVar4 == 0) goto LAB_029834c8;
      uVar13 = uVar13 + 0x20;
      lVar14 = lVar16 + 1;
    } while (sVar4 != 0x4e);
    if (((int)uVar12 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_029834c8:
      lVar14 = *(long *)(lVar7 + (ulong)(uint)((int)uVar12 + (int)lVar16) * 0x20 + 8);
      if (lVar14 != 0) {
        *(undefined2 *)(lVar14 + 8) = 0x4e;
        *(undefined8 *)(lVar14 + 0xc) = 0;
        *(undefined8 *)(lVar14 + 0x14) = 0;
        *(undefined4 *)(lVar14 + 0x1c) = 0;
        *(undefined1 *)(lVar14 + 10) = 1;
        *(long *)(*(long *)(lVar9 + 0x70) + 0x278) = lVar14;
        lVar9 = *(long *)(param_1 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x30);
        uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
      }
    }
LAB_02983508:
    uVar13 = uVar12 << 5 | 8;
    lVar14 = 0;
    do {
      lVar16 = lVar14;
      if (0x5f < uVar12 + lVar16) goto LAB_02983590;
      sVar4 = *(short *)(*(long *)(lVar7 + uVar13) + 8);
      if (sVar4 == 0) goto LAB_02983550;
      uVar13 = uVar13 + 0x20;
      lVar14 = lVar16 + 1;
    } while (sVar4 != 0x4f);
    if (((int)uVar12 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_02983550:
      lVar14 = *(long *)(lVar7 + (ulong)(uint)((int)uVar12 + (int)lVar16) * 0x20 + 8);
      if (lVar14 != 0) {
        *(undefined2 *)(lVar14 + 8) = 0x4f;
        *(undefined8 *)(lVar14 + 0xc) = 0;
        *(undefined8 *)(lVar14 + 0x14) = 0;
        *(undefined4 *)(lVar14 + 0x1c) = 0;
        *(undefined1 *)(lVar14 + 10) = 1;
        *(long *)(*(long *)(lVar9 + 0x70) + 0x280) = lVar14;
        lVar9 = *(long *)(param_1 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x30);
        uVar12 = (ulong)*(uint *)(lVar7 + 0xc08);
      }
    }
LAB_02983590:
    plVar10 = (long *)(lVar7 + uVar12 * 0x20 + 8);
    do {
      uVar13 = uVar12;
      if (0x5f < uVar13) goto LAB_02983600;
      lVar14 = *plVar10;
      if (*(short *)(lVar14 + 8) == 0) goto LAB_029835cc;
      plVar10 = plVar10 + 4;
      uVar12 = uVar13 + 1;
    } while (*(short *)(lVar14 + 8) != 0x35);
    if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_029835cc:
      lVar7 = *(long *)(lVar7 + (uVar13 & 0xffffffff) * 0x20 + 8);
      if (lVar7 != 0) {
        *(int *)(lVar7 + 0xc) = iVar6;
        *(undefined2 *)(lVar7 + 8) = 0x35;
        *(undefined1 *)(lVar7 + 10) = 4;
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        *(long *)(*(long *)(lVar9 + 0x70) + 0x1b0) = lVar7;
        lVar9 = *(long *)(param_1 + 0x10);
      }
    }
LAB_02983600:
    iVar8 = *(int *)(lVar9 + 0x78) + 1;
    *(int *)(lVar9 + 0x78) = iVar8;
    lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8);
    if (lVar7 != 0) {
      do {
        lVar14 = FUN_02999e6c(lVar9,0xa2,8,1,lVar7);
        if (lVar14 == 0) break;
        if ((*(byte *)(lVar14 + 0x3f) >> 5 & 1) == 0) {
          lVar14 = *(long *)(lVar7 + 0x18);
        }
        lVar7 = lVar14;
      } while (lVar14 != 0);
      iVar8 = *(int *)(lVar9 + 0x78);
    }
    *(int *)(lVar9 + 0x78) = iVar8 + -1;
    if (iVar8 + -1 == 0) {
      for (lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8); lVar7 != 0;
          lVar7 = *(long *)(lVar7 + 0x18)) {
        *(uint *)(lVar7 + 0x3c) = (uint)*(ushort *)(lVar7 + 0x3e) << 0x10;
      }
    }
    lVar9 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)(*(long *)(lVar9 + 0x70) + 0x280);
    if ((lVar7 == 0) || (*(int *)(lVar7 + 0xc) == 0)) {
      iVar8 = *(int *)(lVar9 + 0x78) + 1;
      *(int *)(lVar9 + 0x78) = iVar8;
      lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8);
      if (lVar7 != 0) {
        do {
          lVar14 = FUN_02999e6c(lVar9,param_8,8,1,lVar7);
          if (lVar14 == 0) break;
          if ((*(byte *)(lVar14 + 0x3f) >> 5 & 1) == 0) {
            lVar14 = *(long *)(lVar7 + 0x18);
          }
          lVar7 = lVar14;
        } while (lVar14 != 0);
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
  }
LAB_0298372c:
  lVar7 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar7 + 0x50);
  if (*(uint *)(lVar9 + 0x408) == 0) {
    uVar13 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar9 + (ulong)*(uint *)(lVar9 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar9 + 0x408) = *(int *)(lVar9 + 0x408) + -1;
    lVar9 = *(long *)(lVar7 + 0x50);
    uVar13 = (ulong)*(uint *)(lVar9 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar9 + uVar13 * 0x20 + 8);
  lVar7 = *(long *)(lVar7 + 0x30);
  uVar11 = *(uint *)(lVar7 + 0xc08);
  if (uVar11 != 0) {
    if ((uVar11 & 0xffff) < 0x60) {
      uVar13 = (ulong)uVar11 & 0xffff;
      plVar10 = (long *)(lVar7 + uVar13 * 0x20 + 8);
      do {
        uVar13 = uVar13 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar13 & 0xffff) != 0x60);
      uVar11 = *(uint *)(lVar7 + 0xc08);
    }
    *(uint *)(lVar7 + 0xc08) = uVar11 - 1;
    *(undefined2 *)(*(long *)(lVar7 + (ulong)(uVar11 - 1) * 0x20 + 8) + 8) = 0;
    uVar13 = (ulong)*(uint *)(lVar7 + 0xc08);
    do {
      if (uVar13 == 0) {
        return;
      }
      uVar13 = uVar13 - 1;
      *(int *)(lVar7 + 0xc08) = (int)uVar13;
    } while (*(short *)(*(long *)(lVar7 + (uVar13 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar7 + 0xc08) = (int)uVar13 + 1;
  }
  return;
}


