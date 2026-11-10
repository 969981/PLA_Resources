/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0297a838; name: FUN_0297a838
 */


void FUN_0297a838(long param_1,long param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  byte bVar2;
  short sVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  lVar6 = *(long *)(param_1 + 0x10);
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
  lVar8 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar8 + 0x30);
  uVar9 = (ulong)*(uint *)(lVar6 + 0xc08);
  bVar2 = *(byte *)(param_2 + 0x7d);
  uVar7 = uVar9 << 5 | 8;
  uVar4 = uVar9;
  do {
    uVar13 = uVar4;
    if (0x5f < uVar13) goto LAB_0297a964;
    sVar3 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar3 == 0) goto LAB_0297a928;
    uVar7 = uVar7 + 0x20;
    uVar4 = uVar13 + 1;
  } while (sVar3 != 3);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_0297a928:
    lVar12 = *(long *)(lVar6 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 3;
      *(uint *)(lVar12 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x20) = lVar12;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar8 + 0x30);
      uVar9 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_0297a964:
  uVar1 = *param_3;
  uVar7 = uVar9 << 5 | 8;
  lVar12 = 0;
  do {
    lVar14 = lVar12;
    if (0x5f < uVar9 + lVar14) goto LAB_0297a9ec;
    sVar3 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar3 == 0) goto LAB_0297a9b0;
    uVar7 = uVar7 + 0x20;
    lVar12 = lVar14 + 1;
  } while (sVar3 != 0x12);
  if (((int)uVar9 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0297a9b0:
    lVar12 = *(long *)(lVar6 + (ulong)(uint)((int)uVar9 + (int)lVar14) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x12;
      *(undefined4 *)(lVar12 + 0xc) = uVar1;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x98) = lVar12;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar8 + 0x30);
      uVar9 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_0297a9ec:
  bVar2 = *(byte *)((long)param_3 + 10);
  plVar11 = (long *)(lVar6 + uVar9 * 0x20 + 8);
  do {
    uVar7 = uVar9;
    if (0x5f < uVar7) goto LAB_0297aa60;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_0297aa2c;
    plVar11 = plVar11 + 4;
    uVar9 = uVar7 + 1;
  } while (*(short *)(lVar12 + 8) != 0x16);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_0297aa2c:
    lVar6 = *(long *)(lVar6 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x16;
      *(uint *)(lVar6 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0xb8) = lVar6;
      lVar8 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0297aa60:
  iVar5 = *(int *)(lVar8 + 0x78) + 1;
  *(int *)(lVar8 + 0x78) = iVar5;
  lVar6 = *(long *)(*(long *)(*(long *)(lVar8 + 8) + 0x88) + 0x14c8);
  if (lVar6 != 0) {
    do {
      lVar12 = FUN_02999e6c(lVar8,param_4,8,1,lVar6);
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
      plVar11 = (long *)(lVar6 + uVar7 * 0x20 + 8);
      do {
        uVar7 = uVar7 + 1;
        if (*(short *)(*plVar11 + 8) == 0) break;
        *(undefined2 *)(*plVar11 + 8) = 0;
        plVar11 = plVar11 + 4;
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


