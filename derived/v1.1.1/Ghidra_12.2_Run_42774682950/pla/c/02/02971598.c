/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02971598; name: FUN_02971598
 */


undefined4 FUN_02971598(long param_1,long param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined4 uVar16;
  
  lVar9 = (&DAT_0428af30)[(ulong)param_3 * 6];
  if (lVar9 == 0) {
    plVar7 = &DAT_0428af30;
  }
  else {
    plVar7 = &DAT_0428af30;
    if (*(char *)(lVar9 + 0x1e1) != '\0') {
      plVar7 = &DAT_0428af30 + (ulong)param_3 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar7 + 0x250) + (ulong)**(uint **)(*plVar7 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
     (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar8 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)*(byte *)((long)piVar1 + uVar8);
  }
  lVar9 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar9 + 0x30);
  uVar12 = *(uint *)(lVar10 + 0xc08);
  if (uVar12 < 0x60) {
    do {
      lVar13 = *(long *)(lVar10 + (ulong)uVar12 * 0x20 + 8);
      if (*(short *)(lVar13 + 8) == 0) {
        if (uVar12 < 0x5f) {
          *(undefined2 *)(lVar13 + 8) = 1;
          *(int *)(lVar10 + 0xc08) = *(int *)(lVar10 + 0xc08) + 1;
        }
        break;
      }
      uVar12 = uVar12 + 1;
      *(uint *)(lVar10 + 0xc08) = uVar12;
    } while (uVar12 != 0x60);
  }
  lVar10 = *(long *)(lVar9 + 0x50);
  uVar12 = *(uint *)(lVar10 + 0x408);
  if (uVar12 < 0x1f) {
    *(uint *)(lVar10 + 0x408) = uVar12 + 1;
    lVar10 = *(long *)(lVar9 + 0x50);
    uVar12 = *(uint *)(lVar10 + 0x408);
  }
  *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)(lVar10 + (ulong)uVar12 * 0x20 + 8);
  lVar10 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar10 + 0x30);
  uVar11 = (ulong)*(uint *)(lVar9 + 0xc08);
  bVar2 = *(byte *)(param_2 + 0x7d);
  uVar8 = uVar11 << 5 | 8;
  uVar4 = uVar11;
  do {
    uVar15 = uVar4;
    if (0x5f < uVar15) goto LAB_02971724;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_029716e8;
    uVar8 = uVar8 + 0x20;
    uVar4 = uVar15 + 1;
  } while (sVar3 != 2);
  if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_029716e8:
    lVar13 = *(long *)(lVar9 + (uVar15 & 0xffffffff) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 2;
      *(uint *)(lVar13 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x18) = lVar13;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02971724:
  uVar8 = uVar11 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar11 + lVar14) goto LAB_029717a8;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_0297176c;
    uVar8 = uVar8 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar3 != 0x12);
  if (((int)uVar11 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0297176c:
    lVar13 = *(long *)(lVar9 + (ulong)(uint)((int)uVar11 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x12;
      *(uint *)(lVar13 + 0xc) = param_3;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x98) = lVar13;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_029717a8:
  plVar7 = (long *)(lVar9 + uVar11 * 0x20 + 8);
  do {
    uVar8 = uVar11;
    if (0x5f < uVar8) goto LAB_02971814;
    lVar13 = *plVar7;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_029717e4;
    plVar7 = plVar7 + 4;
    uVar11 = uVar8 + 1;
  } while (*(short *)(lVar13 + 8) != 0x81);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_029717e4:
    lVar9 = *(long *)(lVar9 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x81;
      *(uint *)(lVar9 + 0xc) = uVar5;
      *(undefined1 *)(lVar9 + 10) = 0;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x410) = lVar9;
      lVar10 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02971814:
  iVar6 = *(int *)(lVar10 + 0x78) + 1;
  *(int *)(lVar10 + 0x78) = iVar6;
  lVar9 = *(long *)(*(long *)(*(long *)(lVar10 + 8) + 0x88) + 0x14c8);
  if (lVar9 != 0) {
    do {
      lVar13 = FUN_02999e6c(lVar10,0xea,8,1,lVar9);
      if (lVar13 == 0) break;
      if ((*(byte *)(lVar13 + 0x3f) >> 5 & 1) == 0) {
        lVar13 = *(long *)(lVar9 + 0x18);
      }
      lVar9 = lVar13;
    } while (lVar13 != 0);
    iVar6 = *(int *)(lVar10 + 0x78);
  }
  *(int *)(lVar10 + 0x78) = iVar6 + -1;
  if (iVar6 + -1 == 0) {
    for (lVar9 = *(long *)(*(long *)(*(long *)(lVar10 + 8) + 0x88) + 0x14c8); lVar9 != 0;
        lVar9 = *(long *)(lVar9 + 0x18)) {
      *(uint *)(lVar9 + 0x3c) = (uint)*(ushort *)(lVar9 + 0x3e) << 0x10;
    }
  }
  lVar10 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(*(long *)(lVar10 + 0x70) + 0x410);
  if (lVar9 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined4 *)(lVar9 + 0xc);
  }
  lVar9 = *(long *)(lVar10 + 0x50);
  if (*(uint *)(lVar9 + 0x408) == 0) {
    uVar8 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar9 + (ulong)*(uint *)(lVar9 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar9 + 0x408) = *(int *)(lVar9 + 0x408) + -1;
    lVar9 = *(long *)(lVar10 + 0x50);
    uVar8 = (ulong)*(uint *)(lVar9 + 0x408);
  }
  *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(lVar9 + uVar8 * 0x20 + 8);
  lVar9 = *(long *)(lVar10 + 0x30);
  uVar5 = *(uint *)(lVar9 + 0xc08);
  if (uVar5 != 0) {
    if ((uVar5 & 0xffff) < 0x60) {
      uVar8 = (ulong)uVar5 & 0xffff;
      plVar7 = (long *)(lVar9 + uVar8 * 0x20 + 8);
      do {
        uVar8 = uVar8 + 1;
        if (*(short *)(*plVar7 + 8) == 0) break;
        *(undefined2 *)(*plVar7 + 8) = 0;
        plVar7 = plVar7 + 4;
      } while (((uint)uVar8 & 0xffff) != 0x60);
      uVar5 = *(uint *)(lVar9 + 0xc08);
    }
    *(uint *)(lVar9 + 0xc08) = uVar5 - 1;
    *(undefined2 *)(*(long *)(lVar9 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
    uVar8 = (ulong)*(uint *)(lVar9 + 0xc08);
    do {
      if (uVar8 == 0) {
        return uVar16;
      }
      uVar8 = uVar8 - 1;
      *(int *)(lVar9 + 0xc08) = (int)uVar8;
    } while (*(short *)(*(long *)(lVar9 + (uVar8 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar9 + 0xc08) = (int)uVar8 + 1;
  }
  return uVar16;
}


