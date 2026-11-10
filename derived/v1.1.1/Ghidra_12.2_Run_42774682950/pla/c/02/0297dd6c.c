/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0297dd6c; name: FUN_0297dd6c
 */


void FUN_0297dd6c(long param_1,undefined4 *param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 *param_11)

{
  undefined4 uVar1;
  byte bVar2;
  short sVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  *(undefined4 *)(param_11 + 4) = 0;
  param_11[2] = 0;
  param_11[3] = 0;
  *param_11 = 0;
  param_11[1] = 0;
  if ((ulong)*(byte *)(param_4 + 0x7d) < 0x1e) {
    uVar11 = *(undefined4 *)(param_5 + (ulong)*(byte *)(param_4 + 0x7d) * 8);
  }
  else {
    uVar11 = 0xe;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar7 + 0x30);
  uVar13 = *(uint *)(lVar9 + 0xc08);
  if (uVar13 < 0x60) {
    do {
      lVar15 = *(long *)(lVar9 + (ulong)uVar13 * 0x20 + 8);
      if (*(short *)(lVar15 + 8) == 0) {
        if (uVar13 < 0x5f) {
          *(undefined2 *)(lVar15 + 8) = 1;
          *(int *)(lVar9 + 0xc08) = *(int *)(lVar9 + 0xc08) + 1;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      *(uint *)(lVar9 + 0xc08) = uVar13;
    } while (uVar13 != 0x60);
  }
  lVar9 = *(long *)(lVar7 + 0x50);
  uVar13 = *(uint *)(lVar9 + 0x408);
  if (uVar13 < 0x1f) {
    *(uint *)(lVar9 + 0x408) = uVar13 + 1;
    lVar9 = *(long *)(lVar7 + 0x50);
    uVar13 = *(uint *)(lVar9 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar9 + (ulong)uVar13 * 0x20 + 8);
  lVar9 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar9 + 0x30);
  uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
  bVar2 = *(byte *)(param_3 + 0x7d);
  uVar8 = uVar10 << 5 | 8;
  uVar4 = uVar10;
  do {
    uVar16 = uVar4;
    if (0x5f < uVar16) goto LAB_0297ded8;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0297de9c;
    uVar8 = uVar8 + 0x20;
    uVar4 = uVar16 + 1;
  } while (sVar3 != 3);
  if ((int)(uVar16 + 1) - 1U < 0x60) {
LAB_0297de9c:
    lVar15 = *(long *)(lVar7 + (uVar16 & 0xffffffff) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 3;
      *(uint *)(lVar15 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x20) = lVar15;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297ded8:
  bVar2 = *(byte *)(param_4 + 0x7d);
  uVar8 = uVar10 << 5 | 8;
  lVar15 = 0;
  do {
    lVar14 = lVar15;
    if (0x5f < uVar10 + lVar14) goto LAB_0297df5c;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0297df24;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar14 + 1;
  } while (sVar3 != 4);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0297df24:
    lVar15 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 4;
      *(uint *)(lVar15 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x28) = lVar15;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297df5c:
  uVar1 = *param_2;
  uVar8 = uVar10 << 5 | 8;
  lVar15 = 0;
  do {
    lVar14 = lVar15;
    if (0x5f < uVar10 + lVar14) goto LAB_0297dfe4;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0297dfa8;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar14 + 1;
  } while (sVar3 != 0x12);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0297dfa8:
    lVar15 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x12;
      *(undefined4 *)(lVar15 + 0xc) = uVar1;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x98) = lVar15;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297dfe4:
  bVar2 = *(byte *)((long)param_2 + 10);
  uVar8 = uVar10 << 5 | 8;
  lVar15 = 0;
  do {
    lVar14 = lVar15;
    if (0x5f < uVar10 + lVar14) goto LAB_0297e06c;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0297e030;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar14 + 1;
  } while (sVar3 != 0x16);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0297e030:
    lVar15 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x16;
      *(uint *)(lVar15 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0xb8) = lVar15;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297e06c:
  uVar1 = param_2[6];
  uVar8 = uVar10 << 5 | 8;
  lVar15 = 0;
  do {
    lVar14 = lVar15;
    if (0x5f < uVar10 + lVar14) goto LAB_0297e0f4;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0297e0b8;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar14 + 1;
  } while (sVar3 != 0x19);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0297e0b8:
    lVar15 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x19;
      *(undefined4 *)(lVar15 + 0xc) = uVar1;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0xd0) = lVar15;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297e0f4:
  uVar1 = param_2[5];
  uVar8 = uVar10 << 5 | 8;
  lVar15 = 0;
  do {
    lVar14 = lVar15;
    if (0x5f < uVar10 + lVar14) goto LAB_0297e17c;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0297e140;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar14 + 1;
  } while (sVar3 != 0x1c);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0297e140:
    lVar15 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x1c;
      *(undefined4 *)(lVar15 + 0xc) = uVar1;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0xe8) = lVar15;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297e17c:
  uVar13 = param_2[9];
  uVar8 = uVar10 << 5 | 8;
  lVar15 = 0;
  do {
    lVar14 = lVar15;
    if (0x5f < uVar10 + lVar14) goto LAB_0297e208;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0297e1cc;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar14 + 1;
  } while (sVar3 != 0x55);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0297e1cc:
    lVar15 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x55;
      *(uint *)(lVar15 + 0xc) = uVar13 & 1;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x2b0) = lVar15;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297e208:
  uVar8 = uVar10 << 5 | 8;
  lVar15 = 0;
  do {
    lVar14 = lVar15;
    if (0x5f < uVar10 + lVar14) goto LAB_0297e28c;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0297e250;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar14 + 1;
  } while (sVar3 != 0x44);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0297e250:
    lVar15 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x44;
      *(undefined8 *)(lVar15 + 0xc) = 0;
      *(undefined4 *)(lVar15 + 0x14) = 0;
      *(undefined8 **)(lVar15 + 0x18) = param_11;
      *(undefined1 *)(lVar15 + 10) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x228) = lVar15;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297e28c:
  uVar8 = uVar10 << 5 | 8;
  lVar15 = 0;
  do {
    lVar14 = lVar15;
    if (0x5f < uVar10 + lVar14) goto LAB_0297e310;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0297e2d4;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar14 + 1;
  } while (sVar3 != 0x3d);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0297e2d4:
    lVar15 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x3d;
      *(undefined4 *)(lVar15 + 0xc) = uVar11;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x1f0) = lVar15;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297e310:
  uVar8 = uVar10 << 5 | 8;
  lVar15 = 0;
  do {
    lVar14 = lVar15;
    if (0x5f < uVar10 + lVar14) goto LAB_0297e398;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0297e358;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar14 + 1;
  } while (sVar3 != 0x47);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0297e358:
    lVar15 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x47;
      *(undefined8 *)(lVar15 + 0xc) = 0;
      *(undefined8 *)(lVar15 + 0x14) = 0;
      *(undefined4 *)(lVar15 + 0x1c) = 0;
      *(undefined1 *)(lVar15 + 10) = 1;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x240) = lVar15;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297e398:
  uVar8 = uVar10 << 5 | 8;
  lVar15 = 0;
  do {
    lVar14 = lVar15;
    if (0x5f < uVar10 + lVar14) goto LAB_0297e420;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0297e3e0;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar14 + 1;
  } while (sVar3 != 0x59);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0297e3e0:
    lVar15 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x59;
      *(undefined8 *)(lVar15 + 0xc) = 0;
      *(undefined8 *)(lVar15 + 0x14) = 0;
      *(undefined4 *)(lVar15 + 0x1c) = 0;
      *(undefined1 *)(lVar15 + 10) = 1;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x2d0) = lVar15;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297e420:
  uVar8 = uVar10 << 5 | 8;
  lVar15 = 0;
  do {
    lVar14 = lVar15;
    if (0x5f < uVar10 + lVar14) goto LAB_0297e4a8;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0297e468;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar14 + 1;
  } while (sVar3 != 0x75);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0297e468:
    lVar15 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x75;
      *(undefined8 *)(lVar15 + 0xc) = 0;
      *(undefined8 *)(lVar15 + 0x14) = 0;
      *(undefined4 *)(lVar15 + 0x1c) = 0;
      *(undefined1 *)(lVar15 + 10) = 1;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x3b0) = lVar15;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0297e4a8:
  plVar12 = (long *)(lVar7 + uVar10 * 0x20 + 8);
  do {
    uVar8 = uVar10;
    if (0x5f < uVar8) goto LAB_0297e51c;
    lVar15 = *plVar12;
    if (*(short *)(lVar15 + 8) == 0) goto LAB_0297e4e4;
    plVar12 = plVar12 + 4;
    uVar10 = uVar8 + 1;
  } while (*(short *)(lVar15 + 8) != 0x76);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_0297e4e4:
    lVar7 = *(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 0x76;
      *(undefined8 *)(lVar7 + 0xc) = 0;
      *(undefined8 *)(lVar7 + 0x14) = 0;
      *(undefined4 *)(lVar7 + 0x1c) = 0;
      *(undefined1 *)(lVar7 + 10) = 1;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x3b8) = lVar7;
      lVar9 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0297e51c:
  iVar6 = *(int *)(lVar9 + 0x78) + 1;
  *(int *)(lVar9 + 0x78) = iVar6;
  lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8);
  if (lVar7 != 0) {
    do {
      lVar15 = FUN_02999e6c(lVar9,param_6,8,1,lVar7);
      if (lVar15 == 0) break;
      if ((*(byte *)(lVar15 + 0x3f) >> 5 & 1) == 0) {
        lVar15 = *(long *)(lVar7 + 0x18);
      }
      lVar7 = lVar15;
    } while (lVar15 != 0);
    iVar6 = *(int *)(lVar9 + 0x78);
  }
  *(int *)(lVar9 + 0x78) = iVar6 + -1;
  if (iVar6 + -1 == 0) {
    for (lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8); lVar7 != 0;
        lVar7 = *(long *)(lVar7 + 0x18)) {
      *(uint *)(lVar7 + 0x3c) = (uint)*(ushort *)(lVar7 + 0x3e) << 0x10;
    }
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x240);
  bVar5 = false;
  if (lVar7 != 0) {
    bVar5 = *(int *)(lVar7 + 0xc) != 0;
  }
  *(bool *)param_7 = bVar5;
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x2d0);
  bVar5 = false;
  if (lVar7 != 0) {
    bVar5 = *(int *)(lVar7 + 0xc) != 0;
  }
  *(bool *)param_8 = bVar5;
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x3b0);
  bVar5 = false;
  if (lVar7 != 0) {
    bVar5 = *(int *)(lVar7 + 0xc) != 0;
  }
  *(bool *)param_9 = bVar5;
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x3b8);
  bVar5 = false;
  if (lVar7 != 0) {
    bVar5 = *(int *)(lVar7 + 0xc) != 0;
  }
  *(bool *)param_10 = bVar5;
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
  uVar13 = *(uint *)(lVar7 + 0xc08);
  if (uVar13 != 0) {
    if ((uVar13 & 0xffff) < 0x60) {
      uVar8 = (ulong)uVar13 & 0xffff;
      plVar12 = (long *)(lVar7 + uVar8 * 0x20 + 8);
      do {
        uVar8 = uVar8 + 1;
        if (*(short *)(*plVar12 + 8) == 0) break;
        *(undefined2 *)(*plVar12 + 8) = 0;
        plVar12 = plVar12 + 4;
      } while (((uint)uVar8 & 0xffff) != 0x60);
      uVar13 = *(uint *)(lVar7 + 0xc08);
    }
    *(uint *)(lVar7 + 0xc08) = uVar13 - 1;
    *(undefined2 *)(*(long *)(lVar7 + (ulong)(uVar13 - 1) * 0x20 + 8) + 8) = 0;
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


