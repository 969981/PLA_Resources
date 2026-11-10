/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02991b68; name: FUN_02991b68
 */


void FUN_02991b68(long param_1,long param_2,uint param_3,undefined1 *param_4,uint param_5)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  undefined1 uVar4;
  uint uVar5;
  long *plVar6;
  undefined1 uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  
  lVar9 = DAT_043ecde0;
  lVar12 = (&DAT_0428af30)[(ulong)param_3 * 6];
  if (lVar12 == 0) {
    plVar6 = &DAT_0428af30;
  }
  else {
    plVar6 = &DAT_0428af30;
    if (*(char *)(lVar12 + 0x1e1) != '\0') {
      plVar6 = &DAT_0428af30 + (ulong)param_3 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
  if ((0x16 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xb], uVar8 != 0)) {
    bVar2 = *(byte *)((long)piVar1 + uVar8);
    uVar19 = (uint)bVar2;
    if (1 < bVar2) {
      uVar5 = uVar19;
      if (bVar2 == 5) {
        uVar8 = *(ulong *)(DAT_043ecde0 + 8);
        uVar13 = *(ulong *)(DAT_043ecde0 + 0x10);
        do {
          uVar15 = uVar8 ^ uVar13;
          iVar11 = (int)uVar13;
          uVar13 = uVar15 >> 0x1b | uVar15 << 0x25;
          uVar14 = (int)uVar8 + iVar11 & 0x7f;
          uVar8 = uVar15 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar15 << 0x10;
        } while (99 < uVar14);
        *(ulong *)(DAT_043ecde0 + 8) = uVar8;
        *(ulong *)(lVar9 + 0x10) = uVar13;
        if (uVar14 < 0x23) {
          uVar5 = 2;
        }
        else if (uVar14 < 0x46) {
          uVar5 = 3;
        }
        else {
          uVar5 = 4;
          if (0x54 < uVar14) {
            uVar5 = 5;
          }
        }
      }
      goto LAB_02991c60;
    }
  }
  uVar19 = 1;
  uVar5 = 1;
LAB_02991c60:
  param_4[1] = 0;
  *(undefined4 *)(param_4 + 4) = 7;
  lVar9 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(lVar9 + 0x30);
  uVar14 = *(uint *)(lVar12 + 0xc08);
  if (uVar14 < 0x60) {
    do {
      lVar16 = *(long *)(lVar12 + (ulong)uVar14 * 0x20 + 8);
      if (*(short *)(lVar16 + 8) == 0) {
        if (uVar14 < 0x5f) {
          *(undefined2 *)(lVar16 + 8) = 1;
          *(int *)(lVar12 + 0xc08) = *(int *)(lVar12 + 0xc08) + 1;
        }
        break;
      }
      uVar14 = uVar14 + 1;
      *(uint *)(lVar12 + 0xc08) = uVar14;
    } while (uVar14 != 0x60);
  }
  lVar12 = *(long *)(lVar9 + 0x50);
  uVar14 = *(uint *)(lVar12 + 0x408);
  if (uVar14 < 0x1f) {
    *(uint *)(lVar12 + 0x408) = uVar14 + 1;
    lVar12 = *(long *)(lVar9 + 0x50);
    uVar14 = *(uint *)(lVar12 + 0x408);
  }
  *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)(lVar12 + (ulong)uVar14 * 0x20 + 8);
  lVar12 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar12 + 0x30);
  uVar13 = (ulong)*(uint *)(lVar9 + 0xc08);
  bVar2 = *(byte *)(param_2 + 0x7d);
  uVar8 = uVar13 << 5 | 8;
  uVar15 = uVar13;
  do {
    uVar18 = uVar15;
    if (0x5f < uVar18) goto LAB_02991d80;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_02991d44;
    uVar8 = uVar8 + 0x20;
    uVar15 = uVar18 + 1;
  } while (sVar3 != 3);
  if ((int)(uVar18 + 1) - 1U < 0x60) {
LAB_02991d44:
    lVar16 = *(long *)(lVar9 + (uVar18 & 0xffffffff) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 3;
      *(uint *)(lVar16 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar16 + 10) = 4;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(long *)(*(long *)(lVar12 + 0x70) + 0x20) = lVar16;
      lVar12 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar12 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02991d80:
  uVar8 = uVar13 << 5 | 8;
  lVar16 = 0;
  do {
    lVar17 = lVar16;
    if (0x5f < uVar13 + lVar17) goto LAB_02991e04;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_02991dc8;
    uVar8 = uVar8 + 0x20;
    lVar16 = lVar17 + 1;
  } while (sVar3 != 0x2c);
  if (((int)uVar13 + (int)(lVar17 + 1)) - 1U < 0x60) {
LAB_02991dc8:
    lVar16 = *(long *)(lVar9 + (ulong)(uint)((int)uVar13 + (int)lVar17) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 0x2c;
      *(uint *)(lVar16 + 0xc) = uVar19;
      *(undefined1 *)(lVar16 + 10) = 4;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(long *)(*(long *)(lVar12 + 0x70) + 0x168) = lVar16;
      lVar12 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar12 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02991e04:
  uVar8 = uVar13 << 5 | 8;
  lVar16 = 0;
  do {
    lVar17 = lVar16;
    if (0x5f < uVar13 + lVar17) goto LAB_02991e88;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_02991e4c;
    uVar8 = uVar8 + 0x20;
    lVar16 = lVar17 + 1;
  } while (sVar3 != 0x12);
  if (((int)uVar13 + (int)(lVar17 + 1)) - 1U < 0x60) {
LAB_02991e4c:
    lVar16 = *(long *)(lVar9 + (ulong)(uint)((int)uVar13 + (int)lVar17) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 0x12;
      *(uint *)(lVar16 + 0xc) = param_3;
      *(undefined1 *)(lVar16 + 10) = 4;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(long *)(*(long *)(lVar12 + 0x70) + 0x98) = lVar16;
      lVar12 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar12 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02991e88:
  uVar8 = uVar13 << 5 | 8;
  lVar16 = 0;
  do {
    lVar17 = lVar16;
    if (0x5f < uVar13 + lVar17) goto LAB_02991f10;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_02991ed4;
    uVar8 = uVar8 + 0x20;
    lVar16 = lVar17 + 1;
  } while (sVar3 != 0x54);
  if (((int)uVar13 + (int)(lVar17 + 1)) - 1U < 0x60) {
LAB_02991ed4:
    lVar16 = *(long *)(lVar9 + (ulong)(uint)((int)uVar13 + (int)lVar17) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 0x54;
      *(uint *)(lVar16 + 0xc) = param_5 & 1;
      *(undefined1 *)(lVar16 + 10) = 4;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(long *)(*(long *)(lVar12 + 0x70) + 0x2a8) = lVar16;
      lVar12 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar12 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02991f10:
  uVar8 = uVar13 << 5 | 8;
  lVar16 = 0;
  do {
    lVar17 = lVar16;
    if (0x5f < uVar13 + lVar17) goto LAB_02991f90;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_02991f58;
    uVar8 = uVar8 + 0x20;
    lVar16 = lVar17 + 1;
  } while (sVar3 != 0x2d);
  if (((int)uVar13 + (int)(lVar17 + 1)) - 1U < 0x60) {
LAB_02991f58:
    lVar16 = *(long *)(lVar9 + (ulong)(uint)((int)uVar13 + (int)lVar17) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 0x2d;
      *(uint *)(lVar16 + 0xc) = uVar5;
      *(undefined1 *)(lVar16 + 10) = 0;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(long *)(*(long *)(lVar12 + 0x70) + 0x170) = lVar16;
      lVar12 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar12 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02991f90:
  uVar8 = uVar13 << 5 | 8;
  lVar16 = 0;
  do {
    lVar17 = lVar16;
    if (0x5f < uVar13 + lVar17) goto LAB_02992018;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_02991fd8;
    uVar8 = uVar8 + 0x20;
    lVar16 = lVar17 + 1;
  } while (sVar3 != 0x59);
  if (((int)uVar13 + (int)(lVar17 + 1)) - 1U < 0x60) {
LAB_02991fd8:
    lVar16 = *(long *)(lVar9 + (ulong)(uint)((int)uVar13 + (int)lVar17) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 0x59;
      *(undefined8 *)(lVar16 + 0xc) = 0;
      *(undefined8 *)(lVar16 + 0x14) = 0;
      *(undefined4 *)(lVar16 + 0x1c) = 0;
      *(undefined1 *)(lVar16 + 10) = 1;
      *(long *)(*(long *)(lVar12 + 0x70) + 0x2d0) = lVar16;
      lVar12 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar12 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02992018:
  plVar6 = (long *)(lVar9 + uVar13 * 0x20 + 8);
  do {
    uVar8 = uVar13;
    if (0x5f < uVar8) goto LAB_0299208c;
    lVar16 = *plVar6;
    if (*(short *)(lVar16 + 8) == 0) goto LAB_02992054;
    plVar6 = plVar6 + 4;
    uVar13 = uVar8 + 1;
  } while (*(short *)(lVar16 + 8) != 0x49);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_02992054:
    lVar9 = *(long *)(lVar9 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x49;
      *(undefined8 *)(lVar9 + 0xc) = 0;
      *(undefined8 *)(lVar9 + 0x14) = 0;
      *(undefined4 *)(lVar9 + 0x1c) = 0;
      *(undefined1 *)(lVar9 + 10) = 1;
      *(long *)(*(long *)(lVar12 + 0x70) + 0x250) = lVar9;
      lVar12 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0299208c:
  iVar11 = *(int *)(lVar12 + 0x78) + 1;
  *(int *)(lVar12 + 0x78) = iVar11;
  lVar9 = *(long *)(*(long *)(*(long *)(lVar12 + 8) + 0x88) + 0x14c8);
  if (lVar9 != 0) {
    do {
      lVar16 = FUN_02999e6c(lVar12,0x44,8,1,lVar9);
      if (lVar16 == 0) break;
      if ((*(byte *)(lVar16 + 0x3f) >> 5 & 1) == 0) {
        lVar16 = *(long *)(lVar9 + 0x18);
      }
      lVar9 = lVar16;
    } while (lVar16 != 0);
    iVar11 = *(int *)(lVar12 + 0x78);
  }
  *(int *)(lVar12 + 0x78) = iVar11 + -1;
  if (iVar11 + -1 == 0) {
    for (lVar9 = *(long *)(*(long *)(*(long *)(lVar12 + 8) + 0x88) + 0x14c8); lVar9 != 0;
        lVar9 = *(long *)(lVar9 + 0x18)) {
      *(uint *)(lVar9 + 0x3c) = (uint)*(ushort *)(lVar9 + 0x3e) << 0x10;
    }
  }
  lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
  lVar9 = *(long *)(lVar12 + 0x170);
  uVar5 = 0;
  if (lVar9 != 0) {
    uVar5 = *(uint *)(lVar9 + 0xc);
  }
  if (uVar19 < 2) {
    if ((uVar5 & 0xfe) == 0) {
      uVar7 = 0;
      uVar10 = 0;
      uVar4 = 1;
      *param_4 = 1;
    }
    else {
      *param_4 = (char)uVar5;
      lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x250);
      uVar7 = 0;
      if (lVar9 != 0) {
        uVar7 = (undefined1)*(undefined4 *)(lVar9 + 0xc);
      }
      uVar10 = 0;
      uVar4 = 0;
    }
  }
  else {
    if (((uVar19 < 6) && (lVar9 = *(long *)(lVar12 + 0x2d0), lVar9 != 0)) &&
       (*(int *)(lVar9 + 0xc) != 0)) {
      uVar7 = 0;
      *param_4 = (char)uVar19;
    }
    else {
      *param_4 = (char)uVar5;
      lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x250);
      uVar7 = 0;
      if (lVar9 != 0) {
        uVar7 = (undefined1)*(undefined4 *)(lVar9 + 0xc);
      }
    }
    uVar4 = 0;
    uVar10 = 1;
  }
  param_4[2] = uVar7;
  param_4[3] = uVar10;
  param_4[8] = uVar4;
  param_4[9] = uVar4;
  lVar9 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(lVar9 + 0x50);
  if (*(uint *)(lVar12 + 0x408) == 0) {
    uVar8 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar12 + (ulong)*(uint *)(lVar12 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar12 + 0x408) = *(int *)(lVar12 + 0x408) + -1;
    lVar12 = *(long *)(lVar9 + 0x50);
    uVar8 = (ulong)*(uint *)(lVar12 + 0x408);
  }
  *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)(lVar12 + uVar8 * 0x20 + 8);
  lVar9 = *(long *)(lVar9 + 0x30);
  uVar19 = *(uint *)(lVar9 + 0xc08);
  if (uVar19 != 0) {
    if ((uVar19 & 0xffff) < 0x60) {
      uVar8 = (ulong)uVar19 & 0xffff;
      plVar6 = (long *)(lVar9 + uVar8 * 0x20 + 8);
      do {
        uVar8 = uVar8 + 1;
        if (*(short *)(*plVar6 + 8) == 0) break;
        *(undefined2 *)(*plVar6 + 8) = 0;
        plVar6 = plVar6 + 4;
      } while (((uint)uVar8 & 0xffff) != 0x60);
      uVar19 = *(uint *)(lVar9 + 0xc08);
    }
    *(uint *)(lVar9 + 0xc08) = uVar19 - 1;
    *(undefined2 *)(*(long *)(lVar9 + (ulong)(uVar19 - 1) * 0x20 + 8) + 8) = 0;
    uVar8 = (ulong)*(uint *)(lVar9 + 0xc08);
    do {
      if (uVar8 == 0) {
        return;
      }
      uVar8 = uVar8 - 1;
      *(int *)(lVar9 + 0xc08) = (int)uVar8;
    } while (*(short *)(*(long *)(lVar9 + (uVar8 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar9 + 0xc08) = (int)uVar8 + 1;
  }
  return;
}


