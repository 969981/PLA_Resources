/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02968b58; name: FUN_02968b58
 */


void FUN_02968b58(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5
                 ,long param_6,undefined4 *param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  undefined1 uVar20;
  undefined2 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  lVar11 = *(long *)(param_1 + 0x10);
  uVar4 = *(ushort *)(param_7 + 2);
  bVar1 = *(byte *)((long)param_7 + 10);
  uVar22 = param_7[5];
  uVar23 = param_7[3];
  bVar2 = *(byte *)(param_7 + 4);
  uVar19 = param_7[9];
  lVar14 = *(long *)(lVar11 + 0x30);
  uVar16 = *(uint *)(lVar14 + 0xc08);
  if (uVar16 < 0x60) {
    do {
      lVar18 = *(long *)(lVar14 + (ulong)uVar16 * 0x20 + 8);
      if (*(short *)(lVar18 + 8) == 0) {
        if (uVar16 < 0x5f) {
          *(undefined2 *)(lVar18 + 8) = 1;
          *(int *)(lVar14 + 0xc08) = *(int *)(lVar14 + 0xc08) + 1;
        }
        break;
      }
      uVar16 = uVar16 + 1;
      *(uint *)(lVar14 + 0xc08) = uVar16;
    } while (uVar16 != 0x60);
  }
  lVar14 = *(long *)(lVar11 + 0x50);
  uVar16 = *(uint *)(lVar14 + 0x408);
  if (uVar16 < 0x1f) {
    *(uint *)(lVar14 + 0x408) = uVar16 + 1;
    lVar14 = *(long *)(lVar11 + 0x50);
    uVar16 = *(uint *)(lVar14 + 0x408);
  }
  *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)(lVar14 + (ulong)uVar16 * 0x20 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(lVar11 + 0x30);
  uVar17 = (ulong)*(uint *)(lVar14 + 0xc08);
  bVar3 = *(byte *)(param_5 + 0x7d);
  uVar12 = uVar17 << 5 | 8;
  uVar6 = uVar17;
  do {
    uVar9 = uVar6;
    if (0x5f < uVar9) goto LAB_02968cb4;
    sVar5 = *(short *)(*(long *)(lVar14 + uVar12) + 8);
    if (sVar5 == 0) goto LAB_02968c78;
    uVar12 = uVar12 + 0x20;
    uVar6 = uVar9 + 1;
  } while (sVar5 != 2);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_02968c78:
    lVar18 = *(long *)(lVar14 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar18 != 0) {
      *(undefined2 *)(lVar18 + 8) = 2;
      *(uint *)(lVar18 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar18 + 10) = 4;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x18) = lVar18;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar11 + 0x30);
      uVar17 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_02968cb4:
  uVar12 = uVar17 << 5 | 8;
  lVar18 = 0;
  do {
    lVar8 = lVar18;
    if (0x5f < uVar17 + lVar8) goto LAB_02968d38;
    sVar5 = *(short *)(*(long *)(lVar14 + uVar12) + 8);
    if (sVar5 == 0) goto LAB_02968cfc;
    uVar12 = uVar12 + 0x20;
    lVar18 = lVar8 + 1;
  } while (sVar5 != 0x12);
  if (((int)uVar17 + (int)(lVar8 + 1)) - 1U < 0x60) {
LAB_02968cfc:
    lVar18 = *(long *)(lVar14 + (ulong)(uint)((int)uVar17 + (int)lVar8) * 0x20 + 8);
    if (lVar18 != 0) {
      *(undefined2 *)(lVar18 + 8) = 0x12;
      *(undefined4 *)(lVar18 + 0xc) = param_2;
      *(undefined1 *)(lVar18 + 10) = 4;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x98) = lVar18;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar11 + 0x30);
      uVar17 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_02968d38:
  uVar12 = uVar17 << 5 | 8;
  lVar18 = 0;
  do {
    lVar8 = lVar18;
    if (0x5f < uVar17 + lVar8) goto LAB_02968dbc;
    sVar5 = *(short *)(*(long *)(lVar14 + uVar12) + 8);
    if (sVar5 == 0) goto LAB_02968d80;
    uVar12 = uVar12 + 0x20;
    lVar18 = lVar8 + 1;
  } while (sVar5 != 0x16);
  if (((int)uVar17 + (int)(lVar8 + 1)) - 1U < 0x60) {
LAB_02968d80:
    lVar18 = *(long *)(lVar14 + (ulong)(uint)((int)uVar17 + (int)lVar8) * 0x20 + 8);
    if (lVar18 != 0) {
      *(undefined2 *)(lVar18 + 8) = 0x16;
      *(uint *)(lVar18 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar18 + 10) = 1;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0xb8) = lVar18;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar11 + 0x30);
      uVar17 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_02968dbc:
  uVar12 = uVar17 << 5 | 8;
  lVar18 = 0;
  do {
    lVar8 = lVar18;
    if (0x5f < uVar17 + lVar8) goto LAB_02968e3c;
    sVar5 = *(short *)(*(long *)(lVar14 + uVar12) + 8);
    if (sVar5 == 0) goto LAB_02968e04;
    uVar12 = uVar12 + 0x20;
    lVar18 = lVar8 + 1;
  } while (sVar5 != 0x1d);
  if (((int)uVar17 + (int)(lVar8 + 1)) - 1U < 0x60) {
LAB_02968e04:
    lVar18 = *(long *)(lVar14 + (ulong)(uint)((int)uVar17 + (int)lVar8) * 0x20 + 8);
    if (lVar18 != 0) {
      *(undefined2 *)(lVar18 + 8) = 0x1d;
      *(uint *)(lVar18 + 0xc) = (uint)uVar4;
      *(undefined1 *)(lVar18 + 10) = 0;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0xf0) = lVar18;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar11 + 0x30);
      uVar17 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_02968e3c:
  uVar12 = uVar17 << 5 | 8;
  lVar18 = 0;
  do {
    lVar8 = lVar18;
    if (0x5f < uVar17 + lVar8) goto LAB_02968ebc;
    sVar5 = *(short *)(*(long *)(lVar14 + uVar12) + 8);
    if (sVar5 == 0) goto LAB_02968e84;
    uVar12 = uVar12 + 0x20;
    lVar18 = lVar8 + 1;
  } while (sVar5 != 0x1b);
  if (((int)uVar17 + (int)(lVar8 + 1)) - 1U < 0x60) {
LAB_02968e84:
    lVar18 = *(long *)(lVar14 + (ulong)(uint)((int)uVar17 + (int)lVar8) * 0x20 + 8);
    if (lVar18 != 0) {
      *(undefined2 *)(lVar18 + 8) = 0x1b;
      *(undefined4 *)(lVar18 + 0xc) = uVar23;
      *(undefined1 *)(lVar18 + 10) = 0;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0xe0) = lVar18;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar11 + 0x30);
      uVar17 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_02968ebc:
  uVar12 = uVar17 << 5 | 8;
  lVar18 = 0;
  do {
    lVar8 = lVar18;
    if (0x5f < uVar17 + lVar8) goto LAB_02968f3c;
    sVar5 = *(short *)(*(long *)(lVar14 + uVar12) + 8);
    if (sVar5 == 0) goto LAB_02968f04;
    uVar12 = uVar12 + 0x20;
    lVar18 = lVar8 + 1;
  } while (sVar5 != 99);
  if (((int)uVar17 + (int)(lVar8 + 1)) - 1U < 0x60) {
LAB_02968f04:
    lVar18 = *(long *)(lVar14 + (ulong)(uint)((int)uVar17 + (int)lVar8) * 0x20 + 8);
    if (lVar18 != 0) {
      *(undefined2 *)(lVar18 + 8) = 99;
      *(uint *)(lVar18 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar18 + 10) = 0;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 800) = lVar18;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar11 + 0x30);
      uVar17 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_02968f3c:
  uVar12 = uVar17 << 5 | 8;
  lVar18 = 0;
  do {
    lVar8 = lVar18;
    if (0x5f < uVar17 + lVar8) goto LAB_02968fbc;
    sVar5 = *(short *)(*(long *)(lVar14 + uVar12) + 8);
    if (sVar5 == 0) goto LAB_02968f84;
    uVar12 = uVar12 + 0x20;
    lVar18 = lVar8 + 1;
  } while (sVar5 != 0x1c);
  if (((int)uVar17 + (int)(lVar8 + 1)) - 1U < 0x60) {
LAB_02968f84:
    lVar18 = *(long *)(lVar14 + (ulong)(uint)((int)uVar17 + (int)lVar8) * 0x20 + 8);
    if (lVar18 != 0) {
      *(undefined2 *)(lVar18 + 8) = 0x1c;
      *(undefined4 *)(lVar18 + 0xc) = uVar22;
      *(undefined1 *)(lVar18 + 10) = 0;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0xe8) = lVar18;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar11 + 0x30);
      uVar17 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_02968fbc:
  uVar12 = uVar17 << 5 | 8;
  lVar18 = 0;
  do {
    lVar8 = lVar18;
    if (0x5f < uVar17 + lVar8) goto LAB_02969040;
    sVar5 = *(short *)(*(long *)(lVar14 + uVar12) + 8);
    if (sVar5 == 0) goto LAB_02969008;
    uVar12 = uVar12 + 0x20;
    lVar18 = lVar8 + 1;
  } while (sVar5 != 0x6d);
  if (((int)uVar17 + (int)(lVar8 + 1)) - 1U < 0x60) {
LAB_02969008:
    lVar18 = *(long *)(lVar14 + (ulong)(uint)((int)uVar17 + (int)lVar8) * 0x20 + 8);
    if (lVar18 != 0) {
      *(undefined2 *)(lVar18 + 8) = 0x6d;
      *(uint *)(lVar18 + 0xc) = uVar19 >> 2 & 1;
      *(undefined1 *)(lVar18 + 10) = 0;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x370) = lVar18;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar11 + 0x30);
      uVar17 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_02969040:
  uVar12 = uVar17 << 5 | 8;
  lVar18 = 0;
  do {
    lVar8 = lVar18;
    if (0x5f < uVar17 + lVar8) goto LAB_029690c8;
    sVar5 = *(short *)(*(long *)(lVar14 + uVar12) + 8);
    if (sVar5 == 0) goto LAB_0296908c;
    uVar12 = uVar12 + 0x20;
    lVar18 = lVar8 + 1;
  } while (sVar5 != 0x7a);
  if (((int)uVar17 + (int)(lVar8 + 1)) - 1U < 0x60) {
LAB_0296908c:
    lVar18 = *(long *)(lVar14 + (ulong)(uint)((int)uVar17 + (int)lVar8) * 0x20 + 8);
    if (lVar18 != 0) {
      *(uint *)(lVar18 + 0xc) = uVar19 >> 3 & 1;
      *(undefined2 *)(lVar18 + 8) = 0x7a;
      *(undefined1 *)(lVar18 + 10) = 1;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x3d8) = lVar18;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar11 + 0x30);
      uVar17 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_029690c8:
  bVar1 = *(byte *)(param_6 + 0x5a);
  plVar15 = (long *)(lVar14 + uVar17 * 0x20 + 8);
  do {
    uVar12 = uVar17;
    if (0x5f < uVar12) goto LAB_02969138;
    lVar18 = *plVar15;
    if (*(short *)(lVar18 + 8) == 0) goto LAB_02969108;
    plVar15 = plVar15 + 4;
    uVar17 = uVar12 + 1;
  } while (*(short *)(lVar18 + 8) != 5);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_02969108:
    lVar14 = *(long *)(lVar14 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 5;
      *(uint *)(lVar14 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x30) = lVar14;
    }
  }
LAB_02969138:
  if (bVar1 != 0) {
    uVar12 = 0;
    do {
      lVar11 = *(long *)(param_1 + 0x10);
      uVar16 = (int)uVar12 + 6;
      lVar14 = *(long *)(lVar11 + 0x30);
      bVar2 = *(byte *)(*(long *)(param_6 + uVar12 * 8) + 0x7d);
      plVar15 = (long *)(lVar14 + (ulong)*(uint *)(lVar14 + 0xc08) * 0x20 + 8);
      uVar6 = (ulong)*(uint *)(lVar14 + 0xc08);
      do {
        uVar17 = uVar6;
        if (0x5f < uVar17) goto LAB_02969148;
        lVar18 = *plVar15;
        if (*(ushort *)(lVar18 + 8) == 0) goto LAB_029691a8;
        plVar15 = plVar15 + 4;
        uVar6 = uVar17 + 1;
      } while ((uint)*(ushort *)(lVar18 + 8) != (uVar16 & 0xffff));
      if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_029691a8:
        lVar14 = *(long *)(lVar14 + (uVar17 & 0xffffffff) * 0x20 + 8);
        if (lVar14 != 0) {
          *(ushort *)(lVar14 + 8) = (ushort)uVar16;
          *(uint *)(lVar14 + 0xc) = (uint)bVar2;
          *(undefined1 *)(lVar14 + 10) = 4;
          *(undefined8 *)(lVar14 + 0x10) = 0;
          *(undefined8 *)(lVar14 + 0x18) = 0;
          if ((uVar16 & 0xffff) < 0x82) {
            *(long *)(*(long *)(lVar11 + 0x70) + (ulong)(ushort)uVar16 * 8 + 8) = lVar14;
          }
        }
      }
LAB_02969148:
      uVar12 = uVar12 + 1;
    } while (uVar12 != bVar1);
  }
  lVar14 = *(long *)(param_1 + 0x10);
  iVar10 = *(int *)(lVar14 + 0x78) + 1;
  *(int *)(lVar14 + 0x78) = iVar10;
  lVar11 = *(long *)(*(long *)(*(long *)(lVar14 + 8) + 0x88) + 0x14c8);
  if (lVar11 != 0) {
    do {
      lVar18 = FUN_02999e6c(lVar14,0x2c,8,1,lVar11);
      if (lVar18 == 0) break;
      if ((*(byte *)(lVar18 + 0x3f) >> 5 & 1) == 0) {
        lVar18 = *(long *)(lVar11 + 0x18);
      }
      lVar11 = lVar18;
    } while (lVar18 != 0);
    iVar10 = *(int *)(lVar14 + 0x78);
  }
  *(int *)(lVar14 + 0x78) = iVar10 + -1;
  if (iVar10 + -1 == 0) {
    for (lVar11 = *(long *)(*(long *)(*(long *)(lVar14 + 8) + 0x88) + 0x14c8); lVar11 != 0;
        lVar11 = *(long *)(lVar11 + 0x18)) {
      *(uint *)(lVar11 + 0x3c) = (uint)*(ushort *)(lVar11 + 0x3e) << 0x10;
    }
  }
  lVar14 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar14 + 0x70);
  if (*(long *)(lVar11 + 0xb8) == 0) {
    uVar20 = 0;
    lVar18 = *(long *)(lVar11 + 0xf0);
  }
  else {
    uVar20 = (undefined1)*(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0xc);
    lVar18 = *(long *)(lVar11 + 0xf0);
  }
  if (lVar18 == 0) {
    uVar21 = 0;
    lVar18 = *(long *)(lVar11 + 0xe0);
  }
  else {
    uVar21 = (undefined2)*(undefined4 *)(lVar18 + 0xc);
    lVar18 = *(long *)(lVar11 + 0xe0);
  }
  if (lVar18 == 0) {
    uVar22 = 0;
    lVar18 = *(long *)(lVar11 + 0xe8);
  }
  else {
    uVar22 = *(undefined4 *)(lVar18 + 0xc);
    lVar18 = *(long *)(lVar11 + 0xe8);
  }
  if (lVar18 == 0) {
    uVar23 = 0;
    lVar18 = *(long *)(lVar11 + 800);
  }
  else {
    uVar23 = *(undefined4 *)(lVar18 + 0xc);
    lVar18 = *(long *)(lVar11 + 800);
  }
  if (lVar18 == 0) {
    bVar7 = false;
    lVar18 = *(long *)(lVar11 + 0x370);
  }
  else {
    bVar7 = *(int *)(lVar18 + 0xc) != 0;
    lVar18 = *(long *)(lVar11 + 0x370);
  }
  if (lVar18 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = (uint)(*(int *)(lVar18 + 0xc) != 0) << 2;
  }
  if (*(long *)(lVar11 + 0x3d8) == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = (uint)(*(int *)(*(long *)(lVar11 + 0x3d8) + 0xc) != 0) << 3;
  }
  lVar11 = *(long *)(lVar14 + 0x50);
  if (*(uint *)(lVar11 + 0x408) == 0) {
    uVar12 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar11 + (ulong)*(uint *)(lVar11 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar11 + 0x408) = *(int *)(lVar11 + 0x408) + -1;
    lVar11 = *(long *)(lVar14 + 0x50);
    uVar12 = (ulong)*(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar14 + 0x70) = *(undefined8 *)(lVar11 + uVar12 * 0x20 + 8);
  lVar11 = *(long *)(lVar14 + 0x30);
  uVar13 = *(uint *)(lVar11 + 0xc08);
  if (uVar13 != 0) {
    if ((uVar13 & 0xffff) < 0x60) {
      uVar12 = (ulong)uVar13 & 0xffff;
      plVar15 = (long *)(lVar11 + uVar12 * 0x20 + 8);
      do {
        uVar12 = uVar12 + 1;
        if (*(short *)(*plVar15 + 8) == 0) break;
        *(undefined2 *)(*plVar15 + 8) = 0;
        plVar15 = plVar15 + 4;
      } while (((uint)uVar12 & 0xffff) != 0x60);
      uVar13 = *(uint *)(lVar11 + 0xc08);
    }
    *(uint *)(lVar11 + 0xc08) = uVar13 - 1;
    *(undefined2 *)(*(long *)(lVar11 + (ulong)(uVar13 - 1) * 0x20 + 8) + 8) = 0;
    uVar12 = (ulong)*(uint *)(lVar11 + 0xc08);
    do {
      if (uVar12 == 0) goto LAB_02969424;
      uVar12 = uVar12 - 1;
      *(int *)(lVar11 + 0xc08) = (int)uVar12;
    } while (*(short *)(*(long *)(lVar11 + (uVar12 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar11 + 0xc08) = (int)uVar12 + 1;
  }
LAB_02969424:
  *param_7 = param_2;
  param_7[1] = param_3;
  *(undefined1 *)((long)param_7 + 10) = uVar20;
  *(undefined2 *)(param_7 + 2) = uVar21;
  param_7[3] = uVar22;
  *(bool *)(param_7 + 4) = bVar7;
  param_7[5] = uVar23;
  param_7[6] = param_4;
  param_7[9] = uVar19 | uVar16 | param_7[9] & 0xfffffff3;
  return;
}


