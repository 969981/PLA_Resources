/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02978410; name: FUN_02978410
 */


void FUN_02978410(long param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar3 + 0x30);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  if (uVar6 < 0x60) {
    do {
      lVar8 = *(long *)(lVar5 + (ulong)uVar6 * 0x20 + 8);
      if (*(short *)(lVar8 + 8) == 0) {
        if (uVar6 < 0x5f) {
          *(undefined2 *)(lVar8 + 8) = 1;
          *(int *)(lVar5 + 0xc08) = *(int *)(lVar5 + 0xc08) + 1;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(lVar5 + 0xc08) = uVar6;
    } while (uVar6 != 0x60);
  }
  lVar5 = *(long *)(lVar3 + 0x50);
  uVar6 = *(uint *)(lVar5 + 0x408);
  if (uVar6 < 0x1f) {
    *(uint *)(lVar5 + 0x408) = uVar6 + 1;
    lVar5 = *(long *)(lVar3 + 0x50);
    uVar6 = *(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(lVar5 + (ulong)uVar6 * 0x20 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar5 + 0x30);
  plVar7 = (long *)(lVar3 + (ulong)*(uint *)(lVar3 + 0xc08) * 0x20 + 8);
  uVar4 = (ulong)*(uint *)(lVar3 + 0xc08);
  do {
    uVar9 = uVar4;
    if (0x5f < uVar9) goto LAB_02978530;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_029784fc;
    plVar7 = plVar7 + 4;
    uVar4 = uVar9 + 1;
  } while (*(short *)(lVar8 + 8) != 2);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_029784fc:
    lVar3 = *(long *)(lVar3 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0xc) = (uint)*(byte *)(*param_2 + 0x7d);
      *(undefined2 *)(lVar3 + 8) = 2;
      *(undefined1 *)(lVar3 + 10) = 4;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x70) + 0x18) = lVar3;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02978530:
  if ((int)param_2[1] == 1) {
    uVar1 = (undefined4)param_2[2];
  }
  else {
    uVar1 = 0;
  }
  lVar3 = *(long *)(lVar5 + 0x30);
  plVar7 = (long *)(lVar3 + (ulong)*(uint *)(lVar3 + 0xc08) * 0x20 + 8);
  uVar4 = (ulong)*(uint *)(lVar3 + 0xc08);
  do {
    uVar9 = uVar4;
    if (0x5f < uVar9) goto LAB_029785c0;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_0297858c;
    plVar7 = plVar7 + 4;
    uVar4 = uVar9 + 1;
  } while (*(short *)(lVar8 + 8) != 0x12);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_0297858c:
    lVar3 = *(long *)(lVar3 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0xc) = uVar1;
      *(undefined2 *)(lVar3 + 8) = 0x12;
      *(undefined1 *)(lVar3 + 10) = 4;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x70) + 0x98) = lVar3;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_029785c0:
  iVar2 = *(int *)(lVar5 + 0x78) + 1;
  *(int *)(lVar5 + 0x78) = iVar2;
  lVar3 = *(long *)(*(long *)(*(long *)(lVar5 + 8) + 0x88) + 0x14c8);
  if (lVar3 != 0) {
    do {
      lVar8 = FUN_02999e6c(lVar5,0xde,8,1,lVar3);
      if (lVar8 == 0) break;
      if ((*(byte *)(lVar8 + 0x3f) >> 5 & 1) == 0) {
        lVar8 = *(long *)(lVar3 + 0x18);
      }
      lVar3 = lVar8;
    } while (lVar8 != 0);
    iVar2 = *(int *)(lVar5 + 0x78);
  }
  *(int *)(lVar5 + 0x78) = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    for (lVar3 = *(long *)(*(long *)(*(long *)(lVar5 + 8) + 0x88) + 0x14c8); lVar3 != 0;
        lVar3 = *(long *)(lVar3 + 0x18)) {
      *(uint *)(lVar3 + 0x3c) = (uint)*(ushort *)(lVar3 + 0x3e) << 0x10;
    }
  }
  lVar3 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar3 + 0x50);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar4 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar3 + 0x50);
    uVar4 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(lVar5 + uVar4 * 0x20 + 8);
  lVar3 = *(long *)(lVar3 + 0x30);
  uVar6 = *(uint *)(lVar3 + 0xc08);
  if (uVar6 != 0) {
    if ((uVar6 & 0xffff) < 0x60) {
      uVar4 = (ulong)uVar6 & 0xffff;
      plVar7 = (long *)(lVar3 + uVar4 * 0x20 + 8);
      do {
        uVar4 = uVar4 + 1;
        if (*(short *)(*plVar7 + 8) == 0) break;
        *(undefined2 *)(*plVar7 + 8) = 0;
        plVar7 = plVar7 + 4;
      } while (((uint)uVar4 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar3 + 0xc08);
    }
    *(uint *)(lVar3 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar3 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar4 = (ulong)*(uint *)(lVar3 + 0xc08);
    do {
      if (uVar4 == 0) {
        return;
      }
      uVar4 = uVar4 - 1;
      *(int *)(lVar3 + 0xc08) = (int)uVar4;
    } while (*(short *)(*(long *)(lVar3 + (uVar4 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar3 + 0xc08) = (int)uVar4 + 1;
  }
  return;
}


