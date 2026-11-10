/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02993838; name: FUN_02993838
 */


uint FUN_02993838(long param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  iVar5 = FUN_029985a4(param_4,param_5);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar8 + 0x30);
  uVar12 = *(uint *)(lVar10 + 0xc08);
  if (uVar12 < 0x60) {
    do {
      lVar14 = *(long *)(lVar10 + (ulong)uVar12 * 0x20 + 8);
      if (*(short *)(lVar14 + 8) == 0) {
        if (uVar12 < 0x5f) {
          *(undefined2 *)(lVar14 + 8) = 1;
          *(int *)(lVar10 + 0xc08) = *(int *)(lVar10 + 0xc08) + 1;
        }
        break;
      }
      uVar12 = uVar12 + 1;
      *(uint *)(lVar10 + 0xc08) = uVar12;
    } while (uVar12 != 0x60);
  }
  lVar10 = *(long *)(lVar8 + 0x50);
  uVar12 = *(uint *)(lVar10 + 0x408);
  if (uVar12 < 0x1f) {
    *(uint *)(lVar10 + 0x408) = uVar12 + 1;
    lVar10 = *(long *)(lVar8 + 0x50);
    uVar12 = *(uint *)(lVar10 + 0x408);
  }
  *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(lVar10 + (ulong)uVar12 * 0x20 + 8);
  lVar10 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar10 + 0x30);
  uVar11 = (ulong)*(uint *)(lVar8 + 0xc08);
  bVar2 = *(byte *)(param_2 + 0x7d);
  uVar9 = uVar11 << 5 | 8;
  uVar4 = uVar11;
  do {
    uVar16 = uVar4;
    if (0x5f < uVar16) goto LAB_02993980;
    sVar3 = *(short *)(*(long *)(lVar8 + uVar9) + 8);
    if (sVar3 == 0) goto LAB_02993944;
    uVar9 = uVar9 + 0x20;
    uVar4 = uVar16 + 1;
  } while (sVar3 != 3);
  if ((int)(uVar16 + 1) - 1U < 0x60) {
LAB_02993944:
    lVar14 = *(long *)(lVar8 + (uVar16 & 0xffffffff) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 3;
      *(uint *)(lVar14 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x20) = lVar14;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_02993980:
  bVar2 = *(byte *)(param_3 + 0x7d);
  uVar9 = uVar11 << 5 | 8;
  lVar14 = 0;
  do {
    lVar15 = lVar14;
    if (0x5f < uVar11 + lVar15) goto LAB_02993a04;
    sVar3 = *(short *)(*(long *)(lVar8 + uVar9) + 8);
    if (sVar3 == 0) goto LAB_029939cc;
    uVar9 = uVar9 + 0x20;
    lVar14 = lVar15 + 1;
  } while (sVar3 != 4);
  if (((int)uVar11 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_029939cc:
    lVar14 = *(long *)(lVar8 + (ulong)(uint)((int)uVar11 + (int)lVar15) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 4;
      *(uint *)(lVar14 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x28) = lVar14;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_02993a04:
  uVar9 = uVar11 << 5 | 8;
  lVar14 = 0;
  do {
    lVar15 = lVar14;
    if (0x5f < uVar11 + lVar15) goto LAB_02993a88;
    sVar3 = *(short *)(*(long *)(lVar8 + uVar9) + 8);
    if (sVar3 == 0) goto LAB_02993a4c;
    uVar9 = uVar9 + 0x20;
    lVar14 = lVar15 + 1;
  } while (sVar3 != 0x12);
  if (((int)uVar11 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_02993a4c:
    lVar14 = *(long *)(lVar8 + (ulong)(uint)((int)uVar11 + (int)lVar15) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x12;
      *(undefined4 *)(lVar14 + 0xc) = param_4;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x98) = lVar14;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_02993a88:
  plVar13 = (long *)(lVar8 + uVar11 * 0x20 + 8);
  do {
    uVar9 = uVar11;
    if (0x5f < uVar9) goto LAB_02993af8;
    lVar14 = *plVar13;
    if (*(short *)(lVar14 + 8) == 0) goto LAB_02993ac4;
    plVar13 = plVar13 + 4;
    uVar11 = uVar9 + 1;
  } while (*(short *)(lVar14 + 8) != 0x38);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_02993ac4:
    lVar8 = *(long *)(lVar8 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x38;
      *(undefined1 *)(lVar8 + 10) = 0;
      *(undefined8 *)(lVar8 + 0xc) = 0;
      *(undefined8 *)(lVar8 + 0x14) = 0;
      *(undefined4 *)(lVar8 + 0x1c) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x1c8) = lVar8;
      lVar10 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02993af8:
  iVar7 = *(int *)(lVar10 + 0x78) + 1;
  *(int *)(lVar10 + 0x78) = iVar7;
  lVar8 = *(long *)(*(long *)(*(long *)(lVar10 + 8) + 0x88) + 0x14c8);
  if (lVar8 != 0) {
    do {
      lVar14 = FUN_02999e6c(lVar10,0xb2,8,1,lVar8);
      if (lVar14 == 0) break;
      if ((*(byte *)(lVar14 + 0x3f) >> 5 & 1) == 0) {
        lVar14 = *(long *)(lVar8 + 0x18);
      }
      lVar8 = lVar14;
    } while (lVar14 != 0);
    iVar7 = *(int *)(lVar10 + 0x78);
  }
  *(int *)(lVar10 + 0x78) = iVar7 + -1;
  if (iVar7 + -1 == 0) {
    for (lVar8 = *(long *)(*(long *)(*(long *)(lVar10 + 8) + 0x88) + 0x14c8); lVar8 != 0;
        lVar8 = *(long *)(lVar8 + 0x18)) {
      *(uint *)(lVar8 + 0x3c) = (uint)*(ushort *)(lVar8 + 0x3e) << 0x10;
    }
  }
  lVar10 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(*(long *)(lVar10 + 0x70) + 0x1c8);
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(lVar8 + 0xc);
  }
  lVar8 = *(long *)(lVar10 + 0x50);
  if (*(uint *)(lVar8 + 0x408) == 0) {
    uVar9 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar8 + (ulong)*(uint *)(lVar8 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar8 + 0x408) = *(int *)(lVar8 + 0x408) + -1;
    lVar8 = *(long *)(lVar10 + 0x50);
    uVar9 = (ulong)*(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(lVar8 + uVar9 * 0x20 + 8);
  lVar8 = *(long *)(lVar10 + 0x30);
  uVar12 = *(uint *)(lVar8 + 0xc08);
  if (uVar12 != 0) {
    if ((uVar12 & 0xffff) < 0x60) {
      uVar9 = (ulong)uVar12 & 0xffff;
      plVar13 = (long *)(lVar8 + uVar9 * 0x20 + 8);
      do {
        uVar9 = uVar9 + 1;
        if (*(short *)(*plVar13 + 8) == 0) break;
        *(undefined2 *)(*plVar13 + 8) = 0;
        plVar13 = plVar13 + 4;
      } while (((uint)uVar9 & 0xffff) != 0x60);
      uVar12 = *(uint *)(lVar8 + 0xc08);
    }
    *(uint *)(lVar8 + 0xc08) = uVar12 - 1;
    *(undefined2 *)(*(long *)(lVar8 + (ulong)(uVar12 - 1) * 0x20 + 8) + 8) = 0;
    uVar9 = (ulong)*(uint *)(lVar8 + 0xc08);
    do {
      if (uVar9 == 0) goto LAB_02993c80;
      uVar9 = uVar9 - 1;
      *(int *)(lVar8 + 0xc08) = (int)uVar9;
    } while (*(short *)(*(long *)(lVar8 + (uVar9 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar8 + 0xc08) = (int)uVar9 + 1;
  }
LAB_02993c80:
  uVar6 = FUN_029506a8(param_3,0xe);
  uVar12 = uVar6 * iVar7 >> 0xc;
  if (0x800 < (uVar6 * iVar7 & 0xfff)) {
    uVar12 = uVar12 + 1;
  }
  uVar1 = (uVar6 * iVar5) / 100;
  if (iVar7 != 0) {
    uVar1 = uVar12;
  }
  if (uVar1 == 0) {
    uVar6 = 1;
  }
  else if (uVar1 <= uVar6) {
    uVar6 = uVar1;
  }
  return uVar6;
}


