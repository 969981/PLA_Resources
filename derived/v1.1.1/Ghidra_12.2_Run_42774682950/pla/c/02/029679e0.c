/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029679e0; name: FUN_029679e0
 */


undefined4 FUN_029679e0(long param_1,uint param_2,undefined4 *param_3)

{
  short sVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x30);
  uVar9 = *(uint *)(lVar7 + 0xc08);
  if (uVar9 < 0x60) {
    do {
      lVar11 = *(long *)(lVar7 + (ulong)uVar9 * 0x20 + 8);
      if (*(short *)(lVar11 + 8) == 0) {
        if (uVar9 < 0x5f) {
          *(undefined2 *)(lVar11 + 8) = 1;
          *(int *)(lVar7 + 0xc08) = *(int *)(lVar7 + 0xc08) + 1;
        }
        break;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(lVar7 + 0xc08) = uVar9;
    } while (uVar9 != 0x60);
  }
  lVar7 = *(long *)(lVar5 + 0x50);
  uVar9 = *(uint *)(lVar7 + 0x408);
  if (uVar9 < 0x1f) {
    *(uint *)(lVar7 + 0x408) = uVar9 + 1;
    lVar7 = *(long *)(lVar5 + 0x50);
    uVar9 = *(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(lVar7 + (ulong)uVar9 * 0x20 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar7 + 0x30);
  uVar8 = (ulong)*(uint *)(lVar5 + 0xc08);
  uVar6 = uVar8 << 5 | 8;
  uVar2 = uVar8;
  do {
    uVar13 = uVar2;
    if (0x5f < uVar13) goto LAB_02967b10;
    sVar1 = *(short *)(*(long *)(lVar5 + uVar6) + 8);
    if (sVar1 == 0) goto LAB_02967ad4;
    uVar6 = uVar6 + 0x20;
    uVar2 = uVar13 + 1;
  } while (sVar1 != 2);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_02967ad4:
    lVar11 = *(long *)(lVar5 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 2;
      *(uint *)(lVar11 + 0xc) = param_2 & 0xff;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x18) = lVar11;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar7 + 0x30);
      uVar8 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_02967b10:
  uVar6 = uVar8 << 5 | 8;
  lVar11 = 0;
  do {
    lVar12 = lVar11;
    if (0x5f < uVar8 + lVar12) goto LAB_02967b94;
    sVar1 = *(short *)(*(long *)(lVar5 + uVar6) + 8);
    if (sVar1 == 0) goto LAB_02967b58;
    uVar6 = uVar6 + 0x20;
    lVar11 = lVar12 + 1;
  } while (sVar1 != 0x7c);
  if (((int)uVar8 + (int)(lVar12 + 1)) - 1U < 0x60) {
LAB_02967b58:
    lVar11 = *(long *)(lVar5 + (ulong)(uint)((int)uVar8 + (int)lVar12) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x7c;
      *(undefined1 *)(lVar11 + 10) = 0;
      *(undefined8 *)(lVar11 + 0xc) = 0;
      *(undefined8 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x1c) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 1000) = lVar11;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar7 + 0x30);
      uVar8 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_02967b94:
  uVar6 = uVar8 << 5 | 8;
  lVar11 = 0;
  do {
    lVar12 = lVar11;
    if (0x5f < uVar8 + lVar12) goto LAB_02967c1c;
    sVar1 = *(short *)(*(long *)(lVar5 + uVar6) + 8);
    if (sVar1 == 0) goto LAB_02967bdc;
    uVar6 = uVar6 + 0x20;
    lVar11 = lVar12 + 1;
  } while (sVar1 != 0x7d);
  if (((int)uVar8 + (int)(lVar12 + 1)) - 1U < 0x60) {
LAB_02967bdc:
    lVar11 = *(long *)(lVar5 + (ulong)(uint)((int)uVar8 + (int)lVar12) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x7d;
      *(undefined8 *)(lVar11 + 0xc) = 0;
      *(undefined8 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x1c) = 0;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x3f0) = lVar11;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar7 + 0x30);
      uVar8 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_02967c1c:
  plVar10 = (long *)(lVar5 + uVar8 * 0x20 + 8);
  do {
    uVar6 = uVar8;
    if (0x5f < uVar6) goto LAB_02967c90;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_02967c58;
    plVar10 = plVar10 + 4;
    uVar8 = uVar6 + 1;
  } while (*(short *)(lVar11 + 8) != 0x7e);
  if ((int)(uVar6 + 1) - 1U < 0x60) {
LAB_02967c58:
    lVar5 = *(long *)(lVar5 + (uVar6 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 0x7e;
      *(undefined8 *)(lVar5 + 0xc) = 0;
      *(undefined8 *)(lVar5 + 0x14) = 0;
      *(undefined4 *)(lVar5 + 0x1c) = 0;
      *(undefined1 *)(lVar5 + 10) = 1;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x3f8) = lVar5;
      lVar7 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02967c90:
  iVar3 = *(int *)(lVar7 + 0x78) + 1;
  *(int *)(lVar7 + 0x78) = iVar3;
  lVar5 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8);
  if (lVar5 != 0) {
    do {
      lVar11 = FUN_02999e6c(lVar7,0xe6,8,1,lVar5);
      if (lVar11 == 0) break;
      if ((*(byte *)(lVar11 + 0x3f) >> 5 & 1) == 0) {
        lVar11 = *(long *)(lVar5 + 0x18);
      }
      lVar5 = lVar11;
    } while (lVar11 != 0);
    iVar3 = *(int *)(lVar7 + 0x78);
  }
  *(int *)(lVar7 + 0x78) = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    for (lVar5 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8); lVar5 != 0;
        lVar5 = *(long *)(lVar5 + 0x18)) {
      *(uint *)(lVar5 + 0x3c) = (uint)*(ushort *)(lVar5 + 0x3e) << 0x10;
    }
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
  if (*(long *)(lVar5 + 1000) == 0) {
    uVar14 = 0;
    lVar5 = *(long *)(lVar5 + 0x3f0);
    if (lVar5 == 0) {
      uVar4 = 0;
      goto LAB_02967d3c;
    }
  }
  else {
    uVar14 = *(undefined4 *)(*(long *)(lVar5 + 1000) + 0xc);
    lVar5 = *(long *)(lVar5 + 0x3f0);
    uVar4 = 0;
    if (lVar5 == 0) goto LAB_02967d3c;
  }
  uVar4 = *(undefined4 *)(lVar5 + 0xc);
LAB_02967d3c:
  *param_3 = uVar4;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x3f8);
  uVar4 = 0;
  if (lVar5 != 0) {
    uVar4 = *(undefined4 *)(lVar5 + 0xc);
  }
  param_3[1] = uVar4;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x50);
  if (*(uint *)(lVar7 + 0x408) == 0) {
    uVar6 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar7 + 0x408) = *(int *)(lVar7 + 0x408) + -1;
    lVar7 = *(long *)(lVar5 + 0x50);
    uVar6 = (ulong)*(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(lVar7 + uVar6 * 0x20 + 8);
  lVar5 = *(long *)(lVar5 + 0x30);
  uVar9 = *(uint *)(lVar5 + 0xc08);
  if (uVar9 != 0) {
    if ((uVar9 & 0xffff) < 0x60) {
      uVar6 = (ulong)uVar9 & 0xffff;
      plVar10 = (long *)(lVar5 + uVar6 * 0x20 + 8);
      do {
        uVar6 = uVar6 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar6 & 0xffff) != 0x60);
      uVar9 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar9 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar9 - 1) * 0x20 + 8) + 8) = 0;
    uVar6 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar6 == 0) {
        return uVar14;
      }
      uVar6 = uVar6 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar6;
    } while (*(short *)(*(long *)(lVar5 + (uVar6 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar6 + 1;
  }
  return uVar14;
}


