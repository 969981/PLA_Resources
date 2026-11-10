/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0298b2cc; name: FUN_0298b2cc
 */


undefined4 FUN_0298b2cc(long param_1,long param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  short sVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined4 uVar15;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x30);
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
  lVar8 = *(long *)(lVar5 + 0x50);
  uVar10 = *(uint *)(lVar8 + 0x408);
  if (uVar10 < 0x1f) {
    *(uint *)(lVar8 + 0x408) = uVar10 + 1;
    lVar8 = *(long *)(lVar5 + 0x50);
    uVar10 = *(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(lVar8 + (ulong)uVar10 * 0x20 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar8 + 0x30);
  uVar9 = (ulong)*(uint *)(lVar5 + 0xc08);
  bVar1 = *(byte *)(param_2 + 0x7d);
  uVar6 = uVar9 << 5 | 8;
  uVar3 = uVar9;
  do {
    uVar14 = uVar3;
    if (0x5f < uVar14) goto LAB_0298b3f4;
    sVar2 = *(short *)(*(long *)(lVar5 + uVar6) + 8);
    if (sVar2 == 0) goto LAB_0298b3b8;
    uVar6 = uVar6 + 0x20;
    uVar3 = uVar14 + 1;
  } while (sVar2 != 2);
  if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_0298b3b8:
    lVar12 = *(long *)(lVar5 + (uVar14 & 0xffffffff) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 2;
      *(uint *)(lVar12 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x18) = lVar12;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar8 + 0x30);
      uVar9 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_0298b3f4:
  uVar6 = uVar9 << 5 | 8;
  lVar12 = 0;
  do {
    lVar13 = lVar12;
    if (0x5f < uVar9 + lVar13) goto LAB_0298b47c;
    sVar2 = *(short *)(*(long *)(lVar5 + uVar6) + 8);
    if (sVar2 == 0) goto LAB_0298b440;
    uVar6 = uVar6 + 0x20;
    lVar12 = lVar13 + 1;
  } while (sVar2 != 0x3e);
  if (((int)uVar9 + (int)(lVar13 + 1)) - 1U < 0x60) {
LAB_0298b440:
    lVar12 = *(long *)(lVar5 + (ulong)(uint)((int)uVar9 + (int)lVar13) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x3e;
      *(uint *)(lVar12 + 0xc) = param_3 & 0xff;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x1f8) = lVar12;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar8 + 0x30);
      uVar9 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_0298b47c:
  uVar6 = uVar9 << 5 | 8;
  lVar12 = 0;
  do {
    lVar13 = lVar12;
    if (0x5f < uVar9 + lVar13) goto LAB_0298b504;
    sVar2 = *(short *)(*(long *)(lVar5 + uVar6) + 8);
    if (sVar2 == 0) goto LAB_0298b4c4;
    uVar6 = uVar6 + 0x20;
    lVar12 = lVar13 + 1;
  } while (sVar2 != 0x48);
  if (((int)uVar9 + (int)(lVar13 + 1)) - 1U < 0x60) {
LAB_0298b4c4:
    lVar12 = *(long *)(lVar5 + (ulong)(uint)((int)uVar9 + (int)lVar13) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x48;
      *(undefined8 *)(lVar12 + 0xc) = 0;
      *(undefined8 *)(lVar12 + 0x14) = 0;
      *(undefined4 *)(lVar12 + 0x1c) = 0;
      *(undefined1 *)(lVar12 + 10) = 1;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x248) = lVar12;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar8 + 0x30);
      uVar9 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_0298b504:
  plVar11 = (long *)(lVar5 + uVar9 * 0x20 + 8);
  do {
    uVar6 = uVar9;
    if (0x5f < uVar6) goto LAB_0298b570;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_0298b540;
    plVar11 = plVar11 + 4;
    uVar9 = uVar6 + 1;
  } while (*(short *)(lVar12 + 8) != 0x35);
  if ((int)(uVar6 + 1) - 1U < 0x60) {
LAB_0298b540:
    lVar5 = *(long *)(lVar5 + (uVar6 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 0x35;
      *(undefined4 *)(lVar5 + 0xc) = param_4;
      *(undefined1 *)(lVar5 + 10) = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x1b0) = lVar5;
      lVar8 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0298b570:
  iVar4 = *(int *)(lVar8 + 0x78) + 1;
  *(int *)(lVar8 + 0x78) = iVar4;
  lVar5 = *(long *)(*(long *)(*(long *)(lVar8 + 8) + 0x88) + 0x14c8);
  if (lVar5 != 0) {
    do {
      lVar12 = FUN_02999e6c(lVar8,0x9c,8,1,lVar5);
      if (lVar12 == 0) break;
      if ((*(byte *)(lVar12 + 0x3f) >> 5 & 1) == 0) {
        lVar12 = *(long *)(lVar5 + 0x18);
      }
      lVar5 = lVar12;
    } while (lVar12 != 0);
    iVar4 = *(int *)(lVar8 + 0x78);
  }
  *(int *)(lVar8 + 0x78) = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    for (lVar5 = *(long *)(*(long *)(*(long *)(lVar8 + 8) + 0x88) + 0x14c8); lVar5 != 0;
        lVar5 = *(long *)(lVar5 + 0x18)) {
      *(uint *)(lVar5 + 0x3c) = (uint)*(ushort *)(lVar5 + 0x3e) << 0x10;
    }
  }
  lVar8 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar8 + 0x70);
  if (*(long *)(lVar5 + 0x1b0) == 0) {
    uVar15 = 0;
    lVar5 = *(long *)(lVar5 + 0x248);
  }
  else {
    uVar15 = *(undefined4 *)(*(long *)(lVar5 + 0x1b0) + 0xc);
    lVar5 = *(long *)(lVar5 + 0x248);
  }
  if (lVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(uint *)(lVar5 + 0xc);
  }
  lVar5 = *(long *)(lVar8 + 0x50);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar6 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar8 + 0x50);
    uVar6 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(lVar5 + uVar6 * 0x20 + 8);
  lVar5 = *(long *)(lVar8 + 0x30);
  uVar7 = *(uint *)(lVar5 + 0xc08);
  if (uVar7 != 0) {
    if ((uVar7 & 0xffff) < 0x60) {
      uVar6 = (ulong)uVar7 & 0xffff;
      plVar11 = (long *)(lVar5 + uVar6 * 0x20 + 8);
      do {
        uVar6 = uVar6 + 1;
        if (*(short *)(*plVar11 + 8) == 0) break;
        *(undefined2 *)(*plVar11 + 8) = 0;
        plVar11 = plVar11 + 4;
      } while (((uint)uVar6 & 0xffff) != 0x60);
      uVar7 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar7 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar7 - 1) * 0x20 + 8) + 8) = 0;
    uVar6 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar6 == 0) goto LAB_0298b710;
      uVar6 = uVar6 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar6;
    } while (*(short *)(*(long *)(lVar5 + (uVar6 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar6 + 1;
  }
LAB_0298b710:
  if ((uVar10 & 0xff) != 0) {
    uVar15 = 0;
  }
  return uVar15;
}


