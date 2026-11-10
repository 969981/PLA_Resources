/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02992864; name: FUN_02992864
 */


bool FUN_02992864(long param_1,long param_2,undefined4 param_3)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar4 + 0x30);
  uVar9 = *(uint *)(lVar7 + 0xc08);
  if (uVar9 < 0x60) {
    do {
      lVar12 = *(long *)(lVar7 + (ulong)uVar9 * 0x20 + 8);
      if (*(short *)(lVar12 + 8) == 0) {
        if (uVar9 < 0x5f) {
          *(undefined2 *)(lVar12 + 8) = 1;
          *(int *)(lVar7 + 0xc08) = *(int *)(lVar7 + 0xc08) + 1;
        }
        break;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(lVar7 + 0xc08) = uVar9;
    } while (uVar9 != 0x60);
  }
  lVar7 = *(long *)(lVar4 + 0x50);
  uVar9 = *(uint *)(lVar7 + 0x408);
  if (uVar9 < 0x1f) {
    *(uint *)(lVar7 + 0x408) = uVar9 + 1;
    lVar7 = *(long *)(lVar4 + 0x50);
    uVar9 = *(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar7 + (ulong)uVar9 * 0x20 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar7 + 0x30);
  uVar8 = (ulong)*(uint *)(lVar4 + 0xc08);
  bVar1 = *(byte *)(param_2 + 0x7d);
  uVar5 = uVar8 << 5 | 8;
  uVar14 = uVar8;
  do {
    uVar15 = uVar14;
    if (0x5f < uVar15) goto LAB_02992988;
    sVar2 = *(short *)(*(long *)(lVar4 + uVar5) + 8);
    if (sVar2 == 0) goto LAB_02992950;
    uVar5 = uVar5 + 0x20;
    uVar14 = uVar15 + 1;
  } while (sVar2 != 4);
  if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_02992950:
    lVar12 = *(long *)(lVar4 + (uVar15 & 0xffffffff) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 4;
      *(uint *)(lVar12 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x28) = lVar12;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar4 = *(long *)(lVar7 + 0x30);
      uVar8 = (ulong)*(uint *)(lVar4 + 0xc08);
    }
  }
LAB_02992988:
  uVar5 = uVar8 << 5 | 8;
  lVar12 = 0;
  do {
    lVar13 = lVar12;
    if (0x5f < uVar8 + lVar13) goto LAB_02992a08;
    sVar2 = *(short *)(*(long *)(lVar4 + uVar5) + 8);
    if (sVar2 == 0) goto LAB_029929d0;
    uVar5 = uVar5 + 0x20;
    lVar12 = lVar13 + 1;
  } while (sVar2 != 0x29);
  if (((int)uVar8 + (int)(lVar13 + 1)) - 1U < 0x60) {
LAB_029929d0:
    lVar12 = *(long *)(lVar4 + (ulong)(uint)((int)uVar8 + (int)lVar13) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x29;
      *(undefined4 *)(lVar12 + 0xc) = param_3;
      *(undefined1 *)(lVar12 + 10) = 0;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x150) = lVar12;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar4 = *(long *)(lVar7 + 0x30);
      uVar8 = (ulong)*(uint *)(lVar4 + 0xc08);
    }
  }
LAB_02992a08:
  plVar11 = (long *)(lVar4 + uVar8 * 0x20 + 8);
  do {
    uVar5 = uVar8;
    if (0x5f < uVar5) goto LAB_02992a7c;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_02992a44;
    plVar11 = plVar11 + 4;
    uVar8 = uVar5 + 1;
  } while (*(short *)(lVar12 + 8) != 0x48);
  if ((int)(uVar5 + 1) - 1U < 0x60) {
LAB_02992a44:
    lVar4 = *(long *)(lVar4 + (uVar5 & 0xffffffff) * 0x20 + 8);
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 8) = 0x48;
      *(undefined8 *)(lVar4 + 0xc) = 0;
      *(undefined8 *)(lVar4 + 0x14) = 0;
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      *(undefined1 *)(lVar4 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x248) = lVar4;
      lVar7 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02992a7c:
  iVar10 = *(int *)(lVar7 + 0x78) + 1;
  *(int *)(lVar7 + 0x78) = iVar10;
  lVar4 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8);
  if (lVar4 != 0) {
    do {
      lVar12 = FUN_02999e6c(lVar7,0x87,8,1,lVar4);
      if (lVar12 == 0) break;
      if ((*(byte *)(lVar12 + 0x3f) >> 5 & 1) == 0) {
        lVar12 = *(long *)(lVar4 + 0x18);
      }
      lVar4 = lVar12;
    } while (lVar12 != 0);
    iVar10 = *(int *)(lVar7 + 0x78);
  }
  *(int *)(lVar7 + 0x78) = iVar10 + -1;
  if (iVar10 + -1 == 0) {
    for (lVar4 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8); lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 0x18)) {
      *(uint *)(lVar4 + 0x3c) = (uint)*(ushort *)(lVar4 + 0x3e) << 0x10;
    }
  }
  lVar7 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar7 + 0x70);
  if (*(long *)(lVar4 + 0x150) == 0) {
    uVar9 = 0;
    lVar4 = *(long *)(lVar4 + 0x248);
  }
  else {
    uVar9 = *(uint *)(*(long *)(lVar4 + 0x150) + 0xc);
    lVar4 = *(long *)(lVar4 + 0x248);
  }
  if (lVar4 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(lVar4 + 0xc) != 0;
  }
  lVar4 = *(long *)(lVar7 + 0x50);
  if (*(uint *)(lVar4 + 0x408) == 0) {
    uVar5 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar4 + 0x408) = *(int *)(lVar4 + 0x408) + -1;
    lVar4 = *(long *)(lVar7 + 0x50);
    uVar5 = (ulong)*(uint *)(lVar4 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar4 + uVar5 * 0x20 + 8);
  lVar4 = *(long *)(lVar7 + 0x30);
  uVar6 = *(uint *)(lVar4 + 0xc08);
  if (uVar6 != 0) {
    if ((uVar6 & 0xffff) < 0x60) {
      uVar5 = (ulong)uVar6 & 0xffff;
      plVar11 = (long *)(lVar4 + uVar5 * 0x20 + 8);
      do {
        uVar5 = uVar5 + 1;
        if (*(short *)(*plVar11 + 8) == 0) break;
        *(undefined2 *)(*plVar11 + 8) = 0;
        plVar11 = plVar11 + 4;
      } while (((uint)uVar5 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar4 + 0xc08);
    }
    *(uint *)(lVar4 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar5 = (ulong)*(uint *)(lVar4 + 0xc08);
    do {
      if (uVar5 == 0) goto LAB_02992c24;
      uVar5 = uVar5 - 1;
      *(int *)(lVar4 + 0xc08) = (int)uVar5;
    } while (*(short *)(*(long *)(lVar4 + (uVar5 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar4 + 0xc08) = (int)uVar5 + 1;
  }
LAB_02992c24:
  lVar4 = DAT_043ecde0;
  if ((bool)(uVar9 == 0 | bVar3)) {
    bVar3 = false;
  }
  else {
    uVar5 = *(ulong *)(DAT_043ecde0 + 8);
    uVar8 = *(ulong *)(DAT_043ecde0 + 0x10);
    do {
      uVar14 = uVar5 ^ uVar8;
      iVar10 = (int)uVar8;
      uVar8 = uVar14 >> 0x1b | uVar14 << 0x25;
      uVar6 = (int)uVar5 + iVar10 & 0x7f;
      uVar5 = uVar14 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar14 << 0x10;
    } while (99 < uVar6);
    bVar3 = uVar6 < (uVar9 & 0xff);
    *(ulong *)(DAT_043ecde0 + 8) = uVar5;
    *(ulong *)(lVar4 + 0x10) = uVar8;
  }
  return bVar3;
}


