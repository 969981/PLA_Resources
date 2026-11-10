/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02987c34; name: FUN_02987c34
 */


undefined8 FUN_02987c34(long param_1,uint *param_2,long param_3,long param_4)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined **local_50;
  uint local_48;
  
  if (param_2[8] == 1) {
    lVar12 = (&DAT_0428af30)[(ulong)*param_2 * 6];
    if (lVar12 == 0) {
      plVar5 = &DAT_0428af30;
    }
    else {
      plVar5 = &DAT_0428af30;
      if (*(char *)(lVar12 + 0x1e1) != '\0') {
        plVar5 = &DAT_0428af30 + (ulong)*param_2 * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar5 + 0x250) + (ulong)**(uint **)(*plVar5 + 0x250));
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xab) ||
       (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x55], uVar7 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(byte *)((long)piVar1 + uVar7);
    }
  }
  else {
    local_50 = &PTR_LAB_04294ec8;
    local_48 = *param_2;
    uVar4 = FUN_02c8e294(&local_50,0);
  }
  lVar12 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar12 + 0x30);
  uVar10 = *(uint *)(lVar8 + 0xc08);
  if (uVar10 < 0x60) {
    do {
      lVar13 = *(long *)(lVar8 + (ulong)uVar10 * 0x20 + 8);
      if (*(short *)(lVar13 + 8) == 0) {
        if (uVar10 < 0x5f) {
          *(undefined2 *)(lVar13 + 8) = 1;
          *(int *)(lVar8 + 0xc08) = *(int *)(lVar8 + 0xc08) + 1;
        }
        break;
      }
      uVar10 = uVar10 + 1;
      *(uint *)(lVar8 + 0xc08) = uVar10;
    } while (uVar10 != 0x60);
  }
  lVar8 = *(long *)(lVar12 + 0x50);
  uVar10 = *(uint *)(lVar8 + 0x408);
  if (uVar10 < 0x1f) {
    *(uint *)(lVar8 + 0x408) = uVar10 + 1;
    lVar8 = *(long *)(lVar12 + 0x50);
    uVar10 = *(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar12 + 0x70) = *(undefined8 *)(lVar8 + (ulong)uVar10 * 0x20 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(lVar8 + 0x30);
  uVar9 = (ulong)*(uint *)(lVar12 + 0xc08);
  bVar2 = *(byte *)(param_3 + 0x7d);
  uVar7 = uVar9 << 5 | 8;
  uVar15 = uVar9;
  do {
    uVar16 = uVar15;
    if (0x5f < uVar16) goto LAB_02987dfc;
    sVar3 = *(short *)(*(long *)(lVar12 + uVar7) + 8);
    if (sVar3 == 0) goto LAB_02987dc0;
    uVar7 = uVar7 + 0x20;
    uVar15 = uVar16 + 1;
  } while (sVar3 != 3);
  if ((int)(uVar16 + 1) - 1U < 0x60) {
LAB_02987dc0:
    lVar13 = *(long *)(lVar12 + (uVar16 & 0xffffffff) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 3;
      *(uint *)(lVar13 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x20) = lVar13;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar12 = *(long *)(lVar8 + 0x30);
      uVar9 = (ulong)*(uint *)(lVar12 + 0xc08);
    }
  }
LAB_02987dfc:
  bVar2 = *(byte *)(param_4 + 0x7d);
  uVar7 = uVar9 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar9 + lVar14) goto LAB_02987e80;
    sVar3 = *(short *)(*(long *)(lVar12 + uVar7) + 8);
    if (sVar3 == 0) goto LAB_02987e48;
    uVar7 = uVar7 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar3 != 4);
  if (((int)uVar9 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_02987e48:
    lVar13 = *(long *)(lVar12 + (ulong)(uint)((int)uVar9 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 4;
      *(uint *)(lVar13 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x28) = lVar13;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar12 = *(long *)(lVar8 + 0x30);
      uVar9 = (ulong)*(uint *)(lVar12 + 0xc08);
    }
  }
LAB_02987e80:
  uVar10 = *param_2;
  uVar7 = uVar9 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar9 + lVar14) goto LAB_02987f08;
    sVar3 = *(short *)(*(long *)(lVar12 + uVar7) + 8);
    if (sVar3 == 0) goto LAB_02987ecc;
    uVar7 = uVar7 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar3 != 0x12);
  if (((int)uVar9 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_02987ecc:
    lVar13 = *(long *)(lVar12 + (ulong)(uint)((int)uVar9 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x12;
      *(uint *)(lVar13 + 0xc) = uVar10;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x98) = lVar13;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar12 = *(long *)(lVar8 + 0x30);
      uVar9 = (ulong)*(uint *)(lVar12 + 0xc08);
    }
  }
LAB_02987f08:
  uVar7 = uVar9 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar9 + lVar14) goto LAB_02987f90;
    sVar3 = *(short *)(*(long *)(lVar12 + uVar7) + 8);
    if (sVar3 == 0) goto LAB_02987f50;
    uVar7 = uVar7 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar3 != 0x48);
  if (((int)uVar9 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_02987f50:
    lVar13 = *(long *)(lVar12 + (ulong)(uint)((int)uVar9 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x48;
      *(undefined8 *)(lVar13 + 0xc) = 0;
      *(undefined8 *)(lVar13 + 0x14) = 0;
      *(undefined4 *)(lVar13 + 0x1c) = 0;
      *(undefined1 *)(lVar13 + 10) = 1;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x248) = lVar13;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar12 = *(long *)(lVar8 + 0x30);
      uVar9 = (ulong)*(uint *)(lVar12 + 0xc08);
    }
  }
LAB_02987f90:
  plVar5 = (long *)(lVar12 + uVar9 * 0x20 + 8);
  do {
    uVar7 = uVar9;
    if (0x5f < uVar7) goto LAB_02988000;
    lVar13 = *plVar5;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_02987fd0;
    plVar5 = plVar5 + 4;
    uVar9 = uVar7 + 1;
  } while (*(short *)(lVar13 + 8) != 0x29);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_02987fd0:
    lVar12 = *(long *)(lVar12 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x29;
      *(uint *)(lVar12 + 0xc) = uVar4 & 0xff;
      *(undefined1 *)(lVar12 + 10) = 0;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x150) = lVar12;
      lVar8 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02988000:
  iVar11 = *(int *)(lVar8 + 0x78) + 1;
  *(int *)(lVar8 + 0x78) = iVar11;
  lVar12 = *(long *)(*(long *)(*(long *)(lVar8 + 8) + 0x88) + 0x14c8);
  if (lVar12 != 0) {
    do {
      lVar13 = FUN_02999e6c(lVar8,0x67,8,1,lVar12);
      if (lVar13 == 0) break;
      if ((*(byte *)(lVar13 + 0x3f) >> 5 & 1) == 0) {
        lVar13 = *(long *)(lVar12 + 0x18);
      }
      lVar12 = lVar13;
    } while (lVar13 != 0);
    iVar11 = *(int *)(lVar8 + 0x78);
  }
  *(int *)(lVar8 + 0x78) = iVar11 + -1;
  if (iVar11 + -1 == 0) {
    for (lVar12 = *(long *)(*(long *)(*(long *)(lVar8 + 8) + 0x88) + 0x14c8); lVar12 != 0;
        lVar12 = *(long *)(lVar12 + 0x18)) {
      *(uint *)(lVar12 + 0x3c) = (uint)*(ushort *)(lVar12 + 0x3e) << 0x10;
    }
  }
  lVar8 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(lVar8 + 0x70);
  if (*(long *)(lVar12 + 0x248) == 0) {
    uVar4 = 0;
    lVar12 = *(long *)(lVar12 + 0x150);
  }
  else {
    uVar4 = *(uint *)(*(long *)(lVar12 + 0x248) + 0xc);
    lVar12 = *(long *)(lVar12 + 0x150);
  }
  if (lVar12 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (uint)*(byte *)(lVar12 + 0xc);
  }
  lVar12 = *(long *)(lVar8 + 0x50);
  if (*(uint *)(lVar12 + 0x408) == 0) {
    uVar7 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar12 + (ulong)*(uint *)(lVar12 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar12 + 0x408) = *(int *)(lVar12 + 0x408) + -1;
    lVar12 = *(long *)(lVar8 + 0x50);
    uVar7 = (ulong)*(uint *)(lVar12 + 0x408);
  }
  *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(lVar12 + uVar7 * 0x20 + 8);
  lVar12 = *(long *)(lVar8 + 0x30);
  uVar6 = *(uint *)(lVar12 + 0xc08);
  if (uVar6 != 0) {
    if ((uVar6 & 0xffff) < 0x60) {
      uVar7 = (ulong)uVar6 & 0xffff;
      plVar5 = (long *)(lVar12 + uVar7 * 0x20 + 8);
      do {
        uVar7 = uVar7 + 1;
        if (*(short *)(*plVar5 + 8) == 0) break;
        *(undefined2 *)(*plVar5 + 8) = 0;
        plVar5 = plVar5 + 4;
      } while (((uint)uVar7 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar12 + 0xc08);
    }
    *(uint *)(lVar12 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar12 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar7 = (ulong)*(uint *)(lVar12 + 0xc08);
    do {
      if (uVar7 == 0) goto LAB_029881a0;
      uVar7 = uVar7 - 1;
      *(int *)(lVar12 + 0xc08) = (int)uVar7;
    } while (*(short *)(*(long *)(lVar12 + (uVar7 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar12 + 0xc08) = (int)uVar7 + 1;
  }
LAB_029881a0:
  lVar12 = DAT_043ecde0;
  if ((uVar4 & 0xff) == 0) {
    uVar7 = *(ulong *)(DAT_043ecde0 + 8);
    uVar9 = *(ulong *)(DAT_043ecde0 + 0x10);
    do {
      uVar15 = uVar7 ^ uVar9;
      iVar11 = (int)uVar9;
      uVar9 = uVar15 >> 0x1b | uVar15 << 0x25;
      uVar4 = (int)uVar7 + iVar11 & 0x7f;
      uVar7 = uVar15 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar15 << 0x10;
    } while (99 < uVar4);
    *(ulong *)(DAT_043ecde0 + 8) = uVar7;
    *(ulong *)(lVar12 + 0x10) = uVar9;
    if (uVar4 < uVar10) {
      return 1;
    }
  }
  return 0;
}


