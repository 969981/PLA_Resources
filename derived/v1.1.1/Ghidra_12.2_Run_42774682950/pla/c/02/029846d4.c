/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029846d4; name: FUN_029846d4
 */


void FUN_029846d4(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  short sVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  
  lVar6 = *(long *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_2 + 0x7d);
  lVar7 = *(long *)(lVar6 + 0x30);
  uVar10 = *(uint *)(lVar7 + 0xc08);
  if (uVar10 < 0x60) {
    do {
      lVar11 = *(long *)(lVar7 + (ulong)uVar10 * 0x20 + 8);
      if (*(short *)(lVar11 + 8) == 0) {
        if (uVar10 < 0x5f) {
          *(undefined2 *)(lVar11 + 8) = 1;
          *(int *)(lVar7 + 0xc08) = *(int *)(lVar7 + 0xc08) + 1;
        }
        break;
      }
      uVar10 = uVar10 + 1;
      *(uint *)(lVar7 + 0xc08) = uVar10;
    } while (uVar10 != 0x60);
  }
  lVar7 = *(long *)(lVar6 + 0x50);
  uVar10 = *(uint *)(lVar7 + 0x408);
  if (uVar10 < 0x1f) {
    *(uint *)(lVar7 + 0x408) = uVar10 + 1;
    lVar7 = *(long *)(lVar6 + 0x50);
    uVar10 = *(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar7 + (ulong)uVar10 * 0x20 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar7 + 0x30);
  uVar8 = (ulong)*(uint *)(lVar6 + 0xc08);
  uVar5 = uVar8 << 5 | 8;
  uVar3 = uVar8;
  do {
    uVar12 = uVar3;
    if (0x5f < uVar12) goto LAB_029847f8;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar5) + 8);
    if (sVar2 == 0) goto LAB_029847c0;
    uVar5 = uVar5 + 0x20;
    uVar3 = uVar12 + 1;
  } while (sVar2 != 4);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_029847c0:
    lVar11 = *(long *)(lVar6 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 4;
      *(uint *)(lVar11 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x28) = lVar11;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar7 + 0x30);
      uVar8 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_029847f8:
  plVar9 = (long *)(lVar6 + uVar8 * 0x20 + 8);
  do {
    uVar5 = uVar8;
    if (0x5f < uVar5) goto LAB_0298486c;
    lVar11 = *plVar9;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_02984838;
    plVar9 = plVar9 + 4;
    uVar8 = uVar5 + 1;
  } while (*(short *)(lVar11 + 8) != 3);
  if ((int)(uVar5 + 1) - 1U < 0x60) {
LAB_02984838:
    lVar6 = *(long *)(lVar6 + (uVar5 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(uint *)(lVar6 + 0xc) = param_3 & 0xff;
      *(undefined2 *)(lVar6 + 8) = 3;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x20) = lVar6;
      lVar7 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0298486c:
  iVar4 = *(int *)(lVar7 + 0x78) + 1;
  *(int *)(lVar7 + 0x78) = iVar4;
  lVar6 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8);
  if (lVar6 != 0) {
    do {
      lVar11 = FUN_02999e6c(lVar7,0xd0,8,1,lVar6);
      if (lVar11 == 0) break;
      if ((*(byte *)(lVar11 + 0x3f) >> 5 & 1) == 0) {
        lVar11 = *(long *)(lVar6 + 0x18);
      }
      lVar6 = lVar11;
    } while (lVar11 != 0);
    iVar4 = *(int *)(lVar7 + 0x78);
  }
  *(int *)(lVar7 + 0x78) = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    for (lVar6 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8); lVar6 != 0;
        lVar6 = *(long *)(lVar6 + 0x18)) {
      *(uint *)(lVar6 + 0x3c) = (uint)*(ushort *)(lVar6 + 0x3e) << 0x10;
    }
  }
  lVar6 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar6 + 0x50);
  if (*(uint *)(lVar7 + 0x408) == 0) {
    uVar5 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar7 + 0x408) = *(int *)(lVar7 + 0x408) + -1;
    lVar7 = *(long *)(lVar6 + 0x50);
    uVar5 = (ulong)*(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar7 + uVar5 * 0x20 + 8);
  lVar6 = *(long *)(lVar6 + 0x30);
  uVar10 = *(uint *)(lVar6 + 0xc08);
  if (uVar10 != 0) {
    if ((uVar10 & 0xffff) < 0x60) {
      uVar5 = (ulong)uVar10 & 0xffff;
      plVar9 = (long *)(lVar6 + uVar5 * 0x20 + 8);
      do {
        uVar5 = uVar5 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar5 & 0xffff) != 0x60);
      uVar10 = *(uint *)(lVar6 + 0xc08);
    }
    *(uint *)(lVar6 + 0xc08) = uVar10 - 1;
    *(undefined2 *)(*(long *)(lVar6 + (ulong)(uVar10 - 1) * 0x20 + 8) + 8) = 0;
    uVar5 = (ulong)*(uint *)(lVar6 + 0xc08);
    do {
      if (uVar5 == 0) {
        return;
      }
      uVar5 = uVar5 - 1;
      *(int *)(lVar6 + 0xc08) = (int)uVar5;
    } while (*(short *)(*(long *)(lVar6 + (uVar5 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar6 + 0xc08) = (int)uVar5 + 1;
  }
  return;
}


