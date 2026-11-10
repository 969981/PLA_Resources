/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029789d8; name: FUN_029789d8
 */


bool FUN_029789d8(long param_1,long param_2)

{
  byte bVar1;
  short sVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar6 + 0x30);
  uVar9 = *(uint *)(lVar8 + 0xc08);
  if (uVar9 < 0x60) {
    do {
      lVar12 = *(long *)(lVar8 + (ulong)uVar9 * 0x20 + 8);
      if (*(short *)(lVar12 + 8) == 0) {
        if (uVar9 < 0x5f) {
          *(undefined2 *)(lVar12 + 8) = 1;
          *(int *)(lVar8 + 0xc08) = *(int *)(lVar8 + 0xc08) + 1;
        }
        break;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(lVar8 + 0xc08) = uVar9;
    } while (uVar9 != 0x60);
  }
  lVar8 = *(long *)(lVar6 + 0x50);
  uVar9 = *(uint *)(lVar8 + 0x408);
  if (uVar9 < 0x1f) {
    *(uint *)(lVar8 + 0x408) = uVar9 + 1;
    lVar8 = *(long *)(lVar6 + 0x50);
    uVar9 = *(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar8 + (ulong)uVar9 * 0x20 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar6 + 0x30);
  uVar10 = (ulong)*(uint *)(lVar8 + 0xc08);
  bVar1 = *(byte *)(param_2 + 0x7d);
  uVar7 = uVar10 << 5 | 8;
  uVar3 = uVar10;
  do {
    uVar13 = uVar3;
    if (0x5f < uVar13) goto LAB_02978b00;
    sVar2 = *(short *)(*(long *)(lVar8 + uVar7) + 8);
    if (sVar2 == 0) goto LAB_02978ac4;
    uVar7 = uVar7 + 0x20;
    uVar3 = uVar13 + 1;
  } while (sVar2 != 2);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_02978ac4:
    lVar12 = *(long *)(lVar8 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 2;
      *(uint *)(lVar12 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x70) + 0x18) = lVar12;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar6 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_02978b00:
  plVar11 = (long *)(lVar8 + uVar10 * 0x20 + 8);
  do {
    uVar7 = uVar10;
    if (0x5f < uVar7) goto LAB_02978b70;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_02978b3c;
    plVar11 = plVar11 + 4;
    uVar10 = uVar7 + 1;
  } while (*(short *)(lVar12 + 8) != 0x48);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_02978b3c:
    lVar8 = *(long *)(lVar8 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x48;
      *(undefined8 *)(lVar8 + 0xc) = 0;
      *(undefined8 *)(lVar8 + 0x14) = 0;
      *(undefined4 *)(lVar8 + 0x1c) = 0;
      *(undefined1 *)(lVar8 + 10) = 1;
      *(long *)(*(long *)(lVar6 + 0x70) + 0x248) = lVar8;
    }
  }
LAB_02978b70:
  if (((((*(byte *)(param_2 + 0x150) & 7) != 0) || ((*(byte *)(param_2 + 0xe0) & 7) != 0)) &&
      (lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x248), lVar6 != 0)) &&
     ((*(byte *)(lVar6 + 10) < 2 && (*(undefined4 *)(lVar6 + 0xc) = 1, *(byte *)(lVar6 + 10) == 1)))
     ) {
    *(undefined1 *)(lVar6 + 10) = 2;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  iVar5 = *(int *)(lVar8 + 0x78) + 1;
  *(int *)(lVar8 + 0x78) = iVar5;
  lVar6 = *(long *)(*(long *)(*(long *)(lVar8 + 8) + 0x88) + 0x14c8);
  if (lVar6 != 0) {
    do {
      lVar12 = FUN_02999e6c(lVar8,0xc,8,1,lVar6);
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
  lVar6 = *(long *)(*(long *)(lVar8 + 0x70) + 0x248);
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
  uVar9 = *(uint *)(lVar6 + 0xc08);
  if (uVar9 != 0) {
    if ((uVar9 & 0xffff) < 0x60) {
      uVar7 = (ulong)uVar9 & 0xffff;
      plVar11 = (long *)(lVar6 + uVar7 * 0x20 + 8);
      do {
        uVar7 = uVar7 + 1;
        if (*(short *)(*plVar11 + 8) == 0) break;
        *(undefined2 *)(*plVar11 + 8) = 0;
        plVar11 = plVar11 + 4;
      } while (((uint)uVar7 & 0xffff) != 0x60);
      uVar9 = *(uint *)(lVar6 + 0xc08);
    }
    *(uint *)(lVar6 + 0xc08) = uVar9 - 1;
    *(undefined2 *)(*(long *)(lVar6 + (ulong)(uVar9 - 1) * 0x20 + 8) + 8) = 0;
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


