/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02989b48; name: FUN_02989b48
 */


void FUN_02989b48(long param_1,long param_2,long param_3,undefined4 *param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7,uint param_8)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  lVar7 = *(long *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_3 + 0x7d);
  lVar9 = *(long *)(lVar7 + 0x30);
  uVar12 = *(uint *)(lVar9 + 0xc08);
  if (uVar12 < 0x60) {
    do {
      lVar13 = *(long *)(lVar9 + (ulong)uVar12 * 0x20 + 8);
      if (*(short *)(lVar13 + 8) == 0) {
        if (uVar12 < 0x5f) {
          *(undefined2 *)(lVar13 + 8) = 1;
          *(int *)(lVar9 + 0xc08) = *(int *)(lVar9 + 0xc08) + 1;
        }
        break;
      }
      uVar12 = uVar12 + 1;
      *(uint *)(lVar9 + 0xc08) = uVar12;
    } while (uVar12 != 0x60);
  }
  lVar9 = *(long *)(lVar7 + 0x50);
  uVar12 = *(uint *)(lVar9 + 0x408);
  if (uVar12 < 0x1f) {
    *(uint *)(lVar9 + 0x408) = uVar12 + 1;
    lVar9 = *(long *)(lVar7 + 0x50);
    uVar12 = *(uint *)(lVar9 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar9 + (ulong)uVar12 * 0x20 + 8);
  lVar9 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar9 + 0x30);
  uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
  bVar3 = *(byte *)(param_2 + 0x7d);
  uVar8 = uVar10 << 5 | 8;
  uVar5 = uVar10;
  do {
    uVar15 = uVar5;
    if (0x5f < uVar15) goto LAB_02989c74;
    sVar4 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar4 == 0) goto LAB_02989c38;
    uVar8 = uVar8 + 0x20;
    uVar5 = uVar15 + 1;
  } while (sVar4 != 3);
  if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_02989c38:
    lVar13 = *(long *)(lVar7 + (uVar15 & 0xffffffff) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 3;
      *(uint *)(lVar13 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x20) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_02989c74:
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_02989cf4;
    sVar4 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar4 == 0) goto LAB_02989cbc;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar4 != 4);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_02989cbc:
    lVar13 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 4;
      *(uint *)(lVar13 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x28) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_02989cf4:
  uVar1 = param_4[1];
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_02989d7c;
    sVar4 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar4 == 0) goto LAB_02989d40;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar4 != 0x14);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_02989d40:
    lVar13 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x14;
      *(undefined4 *)(lVar13 + 0xc) = uVar1;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0xa8) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_02989d7c:
  uVar1 = *param_4;
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_02989e04;
    sVar4 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar4 == 0) goto LAB_02989dc8;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar4 != 0x12);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_02989dc8:
    lVar13 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
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
LAB_02989e04:
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_02989e88;
    sVar4 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar4 == 0) goto LAB_02989e4c;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar4 != 0x3d);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_02989e4c:
    lVar13 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x3d;
      *(undefined4 *)(lVar13 + 0xc) = param_5;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x1f0) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_02989e88:
  bVar2 = *(byte *)((long)param_4 + 10);
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_02989f10;
    sVar4 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar4 == 0) goto LAB_02989ed4;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar4 != 0x16);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_02989ed4:
    lVar13 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x16;
      *(uint *)(lVar13 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0xb8) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_02989f10:
  uVar1 = param_4[3];
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_02989f98;
    sVar4 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar4 == 0) goto LAB_02989f5c;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar4 != 0x1b);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_02989f5c:
    lVar13 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x1b;
      *(undefined4 *)(lVar13 + 0xc) = uVar1;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0xe0) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_02989f98:
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_0298a01c;
    sVar4 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar4 == 0) goto LAB_02989fe0;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar4 != 0x35);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_02989fe0:
    lVar13 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x35;
      *(undefined4 *)(lVar13 + 0xc) = param_6;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x1b0) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298a01c:
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_0298a0a4;
    sVar4 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar4 == 0) goto LAB_0298a068;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar4 != 0x4c);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0298a068:
    lVar13 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x4c;
      *(uint *)(lVar13 + 0xc) = param_7 & 1;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x268) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298a0a4:
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_0298a12c;
    sVar4 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar4 == 0) goto LAB_0298a0f0;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar4 != 0x4d);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0298a0f0:
    lVar13 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x4d;
      *(uint *)(lVar13 + 0xc) = param_8 & 1;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x270) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298a12c:
  bVar2 = *(byte *)(param_4 + 4);
  uVar8 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_0298a1b4;
    sVar4 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar4 == 0) goto LAB_0298a178;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar4 != 99);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0298a178:
    lVar13 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 99;
      *(uint *)(lVar13 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 800) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298a1b4:
  plVar11 = (long *)(lVar7 + uVar10 * 0x20 + 8);
  do {
    uVar8 = uVar10;
    if (0x5f < uVar8) goto LAB_0298a228;
    lVar13 = *plVar11;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_0298a1f0;
    plVar11 = plVar11 + 4;
    uVar10 = uVar8 + 1;
  } while (*(short *)(lVar13 + 8) != 0x4e);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_0298a1f0:
    lVar7 = *(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 0x4e;
      *(undefined8 *)(lVar7 + 0xc) = 0;
      *(undefined8 *)(lVar7 + 0x14) = 0;
      *(undefined4 *)(lVar7 + 0x1c) = 0;
      *(undefined1 *)(lVar7 + 10) = 1;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x278) = lVar7;
      lVar9 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0298a228:
  iVar6 = *(int *)(lVar9 + 0x78) + 1;
  *(int *)(lVar9 + 0x78) = iVar6;
  lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8);
  if (lVar7 != 0) {
    do {
      lVar13 = FUN_02999e6c(lVar9,0x5f,8,1,lVar7);
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
  lVar9 = *(long *)(param_1 + 0x10);
  iVar6 = *(int *)(lVar9 + 0x78) + 1;
  *(int *)(lVar9 + 0x78) = iVar6;
  lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8);
  if (lVar7 != 0) {
    do {
      lVar13 = FUN_02999e6c(lVar9,0x60,8,1,lVar7);
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
  lVar9 = *(long *)(param_1 + 0x10);
  iVar6 = *(int *)(lVar9 + 0x78) + 1;
  *(int *)(lVar9 + 0x78) = iVar6;
  lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8);
  if (lVar7 != 0) {
    do {
      lVar13 = FUN_02999e6c(lVar9,0x61,8,1,lVar7);
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
  lVar9 = *(long *)(param_1 + 0x10);
  iVar6 = *(int *)(lVar9 + 0x78) + 1;
  *(int *)(lVar9 + 0x78) = iVar6;
  lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8);
  if (lVar7 != 0) {
    do {
      lVar13 = FUN_02999e6c(lVar9,0x62,8,1,lVar7);
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
  uVar12 = *(uint *)(lVar7 + 0xc08);
  if (uVar12 != 0) {
    if ((uVar12 & 0xffff) < 0x60) {
      uVar8 = (ulong)uVar12 & 0xffff;
      plVar11 = (long *)(lVar7 + uVar8 * 0x20 + 8);
      do {
        uVar8 = uVar8 + 1;
        if (*(short *)(*plVar11 + 8) == 0) break;
        *(undefined2 *)(*plVar11 + 8) = 0;
        plVar11 = plVar11 + 4;
      } while (((uint)uVar8 & 0xffff) != 0x60);
      uVar12 = *(uint *)(lVar7 + 0xc08);
    }
    *(uint *)(lVar7 + 0xc08) = uVar12 - 1;
    *(undefined2 *)(*(long *)(lVar7 + (ulong)(uVar12 - 1) * 0x20 + 8) + 8) = 0;
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


