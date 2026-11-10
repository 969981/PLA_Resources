/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029828bc; name: FUN_029828bc
 */


void FUN_029828bc(long param_1,long param_2,undefined4 *param_3,long param_4)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  lVar6 = *(long *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_4 + 0x5a);
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
  lVar6 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar6 + 0x30);
  uVar11 = (ulong)*(uint *)(lVar8 + 0xc08);
  bVar3 = *(byte *)(param_2 + 0x7d);
  uVar7 = uVar11 << 5 | 8;
  uVar15 = uVar11;
  do {
    uVar13 = uVar15;
    if (0x5f < uVar13) goto LAB_029829e8;
    sVar4 = *(short *)(*(long *)(lVar8 + uVar7) + 8);
    if (sVar4 == 0) goto LAB_029829ac;
    uVar7 = uVar7 + 0x20;
    uVar15 = uVar13 + 1;
  } while (sVar4 != 3);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_029829ac:
    lVar12 = *(long *)(lVar8 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 3;
      *(uint *)(lVar12 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x70) + 0x20) = lVar12;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar6 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_029829e8:
  uVar1 = *param_3;
  uVar7 = uVar11 << 5 | 8;
  lVar12 = 0;
  do {
    lVar14 = lVar12;
    if (0x5f < uVar11 + lVar14) goto LAB_02982a70;
    sVar4 = *(short *)(*(long *)(lVar8 + uVar7) + 8);
    if (sVar4 == 0) goto LAB_02982a34;
    uVar7 = uVar7 + 0x20;
    lVar12 = lVar14 + 1;
  } while (sVar4 != 0x12);
  if (((int)uVar11 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_02982a34:
    lVar12 = *(long *)(lVar8 + (ulong)(uint)((int)uVar11 + (int)lVar14) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x12;
      *(undefined4 *)(lVar12 + 0xc) = uVar1;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x70) + 0x98) = lVar12;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar6 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_02982a70:
  bVar3 = *(byte *)((long)param_3 + 10);
  uVar7 = uVar11 << 5 | 8;
  lVar12 = 0;
  do {
    lVar14 = lVar12;
    if (0x5f < uVar11 + lVar14) goto LAB_02982af8;
    sVar4 = *(short *)(*(long *)(lVar8 + uVar7) + 8);
    if (sVar4 == 0) goto LAB_02982abc;
    uVar7 = uVar7 + 0x20;
    lVar12 = lVar14 + 1;
  } while (sVar4 != 0x16);
  if (((int)uVar11 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_02982abc:
    lVar12 = *(long *)(lVar8 + (ulong)(uint)((int)uVar11 + (int)lVar14) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x16;
      *(uint *)(lVar12 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x70) + 0xb8) = lVar12;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar6 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_02982af8:
  plVar9 = (long *)(lVar8 + uVar11 * 0x20 + 8);
  do {
    uVar7 = uVar11;
    if (0x5f < uVar7) goto LAB_02982b64;
    lVar12 = *plVar9;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_02982b34;
    plVar9 = plVar9 + 4;
    uVar11 = uVar7 + 1;
  } while (*(short *)(lVar12 + 8) != 5);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_02982b34:
    lVar8 = *(long *)(lVar8 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 5;
      *(uint *)(lVar8 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar8 + 10) = 4;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x70) + 0x30) = lVar8;
    }
  }
LAB_02982b64:
  if (bVar2 != 0) {
    uVar7 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x10);
      uVar10 = (int)uVar7 + 6;
      lVar8 = *(long *)(lVar6 + 0x30);
      bVar3 = *(byte *)(*(long *)(param_4 + uVar7 * 8) + 0x7d);
      plVar9 = (long *)(lVar8 + (ulong)*(uint *)(lVar8 + 0xc08) * 0x20 + 8);
      uVar11 = (ulong)*(uint *)(lVar8 + 0xc08);
      do {
        uVar15 = uVar11;
        if (0x5f < uVar15) goto LAB_02982b74;
        lVar12 = *plVar9;
        if (*(ushort *)(lVar12 + 8) == 0) goto LAB_02982bd4;
        plVar9 = plVar9 + 4;
        uVar11 = uVar15 + 1;
      } while ((uint)*(ushort *)(lVar12 + 8) != (uVar10 & 0xffff));
      if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_02982bd4:
        lVar8 = *(long *)(lVar8 + (uVar15 & 0xffffffff) * 0x20 + 8);
        if (lVar8 != 0) {
          *(ushort *)(lVar8 + 8) = (ushort)uVar10;
          *(uint *)(lVar8 + 0xc) = (uint)bVar3;
          *(undefined1 *)(lVar8 + 10) = 4;
          *(undefined8 *)(lVar8 + 0x10) = 0;
          *(undefined8 *)(lVar8 + 0x18) = 0;
          if ((uVar10 & 0xffff) < 0x82) {
            *(long *)(*(long *)(lVar6 + 0x70) + (ulong)(ushort)uVar10 * 8 + 8) = lVar8;
          }
        }
      }
LAB_02982b74:
      uVar7 = uVar7 + 1;
    } while (uVar7 != bVar2);
  }
  lVar8 = *(long *)(param_1 + 0x10);
  iVar5 = *(int *)(lVar8 + 0x78) + 1;
  *(int *)(lVar8 + 0x78) = iVar5;
  lVar6 = *(long *)(*(long *)(*(long *)(lVar8 + 8) + 0x88) + 0x14c8);
  if (lVar6 != 0) {
    do {
      lVar12 = FUN_02999e6c(lVar8,0xa1,8,1,lVar6);
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
  lVar6 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar6 + 0x50);
  if (*(uint *)(lVar8 + 0x408) == 0) {
    uVar7 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar8 + (ulong)*(uint *)(lVar8 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar8 + 0x408) = *(int *)(lVar8 + 0x408) + -1;
    lVar8 = *(long *)(lVar6 + 0x50);
    uVar7 = (ulong)*(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar8 + uVar7 * 0x20 + 8);
  lVar6 = *(long *)(lVar6 + 0x30);
  uVar10 = *(uint *)(lVar6 + 0xc08);
  if (uVar10 != 0) {
    if ((uVar10 & 0xffff) < 0x60) {
      uVar7 = (ulong)uVar10 & 0xffff;
      plVar9 = (long *)(lVar6 + uVar7 * 0x20 + 8);
      do {
        uVar7 = uVar7 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar7 & 0xffff) != 0x60);
      uVar10 = *(uint *)(lVar6 + 0xc08);
    }
    *(uint *)(lVar6 + 0xc08) = uVar10 - 1;
    *(undefined2 *)(*(long *)(lVar6 + (ulong)(uVar10 - 1) * 0x20 + 8) + 8) = 0;
    uVar7 = (ulong)*(uint *)(lVar6 + 0xc08);
    do {
      if (uVar7 == 0) {
        return;
      }
      uVar7 = uVar7 - 1;
      *(int *)(lVar6 + 0xc08) = (int)uVar7;
    } while (*(short *)(*(long *)(lVar6 + (uVar7 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar6 + 0xc08) = (int)uVar7 + 1;
  }
  return;
}


