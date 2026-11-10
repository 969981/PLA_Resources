/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0298c290; name: FUN_0298c290
 */


bool FUN_0298c290(long param_1,long param_2,undefined8 param_3,uint param_4,undefined4 *param_5)

{
  byte bVar1;
  short sVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
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
  bVar1 = *(byte *)(param_2 + 0x7d);
  uVar9 = uVar11 << 5 | 8;
  uVar3 = uVar11;
  do {
    uVar16 = uVar3;
    if (0x5f < uVar16) goto LAB_0298c3c0;
    sVar2 = *(short *)(*(long *)(lVar8 + uVar9) + 8);
    if (sVar2 == 0) goto LAB_0298c384;
    uVar9 = uVar9 + 0x20;
    uVar3 = uVar16 + 1;
  } while (sVar2 != 2);
  if ((int)(uVar16 + 1) - 1U < 0x60) {
LAB_0298c384:
    lVar14 = *(long *)(lVar8 + (uVar16 & 0xffffffff) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 2;
      *(uint *)(lVar14 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x18) = lVar14;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_0298c3c0:
  uVar9 = uVar11 << 5 | 8;
  lVar14 = 0;
  do {
    lVar15 = lVar14;
    if (0x5f < uVar11 + lVar15) goto LAB_0298c448;
    sVar2 = *(short *)(*(long *)(lVar8 + uVar9) + 8);
    if (sVar2 == 0) goto LAB_0298c40c;
    uVar9 = uVar9 + 0x20;
    lVar14 = lVar15 + 1;
  } while (sVar2 != 0xe);
  if (((int)uVar11 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_0298c40c:
    lVar14 = *(long *)(lVar8 + (ulong)(uint)((int)uVar11 + (int)lVar15) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0xe;
      *(uint *)(lVar14 + 0xc) = param_4 & 0xff;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x78) = lVar14;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_0298c448:
  uVar9 = uVar11 << 5 | 8;
  lVar14 = 0;
  do {
    lVar15 = lVar14;
    if (0x5f < uVar11 + lVar15) goto LAB_0298c4cc;
    sVar2 = *(short *)(*(long *)(lVar8 + uVar9) + 8);
    if (sVar2 == 0) goto LAB_0298c490;
    uVar9 = uVar9 + 0x20;
    lVar14 = lVar15 + 1;
  } while (sVar2 != 0x12);
  if (((int)uVar11 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_0298c490:
    lVar14 = *(long *)(lVar8 + (ulong)(uint)((int)uVar11 + (int)lVar15) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x12;
      *(undefined1 *)(lVar14 + 10) = 0;
      *(undefined8 *)(lVar14 + 0xc) = 0;
      *(undefined8 *)(lVar14 + 0x14) = 0;
      *(undefined4 *)(lVar14 + 0x1c) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x98) = lVar14;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_0298c4cc:
  uVar9 = uVar11 << 5 | 8;
  lVar14 = 0;
  do {
    lVar15 = lVar14;
    if (0x5f < uVar11 + lVar15) goto LAB_0298c550;
    sVar2 = *(short *)(*(long *)(lVar8 + uVar9) + 8);
    if (sVar2 == 0) goto LAB_0298c514;
    uVar9 = uVar9 + 0x20;
    lVar14 = lVar15 + 1;
  } while (sVar2 != 0xd);
  if (((int)uVar11 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_0298c514:
    lVar14 = *(long *)(lVar8 + (ulong)(uint)((int)uVar11 + (int)lVar15) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0xd;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(undefined4 *)(lVar14 + 0xc) = 6;
      *(undefined1 *)(lVar14 + 10) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x70) = lVar14;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_0298c550:
  plVar13 = (long *)(lVar8 + uVar11 * 0x20 + 8);
  do {
    uVar9 = uVar11;
    if (0x5f < uVar9) goto LAB_0298c5c4;
    lVar14 = *plVar13;
    if (*(short *)(lVar14 + 8) == 0) goto LAB_0298c58c;
    plVar13 = plVar13 + 4;
    uVar11 = uVar9 + 1;
  } while (*(short *)(lVar14 + 8) != 0x48);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_0298c58c:
    lVar8 = *(long *)(lVar8 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x48;
      *(undefined8 *)(lVar8 + 0xc) = 0;
      *(undefined8 *)(lVar8 + 0x14) = 0;
      *(undefined4 *)(lVar8 + 0x1c) = 0;
      *(undefined1 *)(lVar8 + 10) = 1;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x248) = lVar8;
      lVar10 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0298c5c4:
  iVar6 = *(int *)(lVar10 + 0x78) + 1;
  *(int *)(lVar10 + 0x78) = iVar6;
  lVar8 = *(long *)(*(long *)(*(long *)(lVar10 + 8) + 0x88) + 0x14c8);
  if (lVar8 != 0) {
    do {
      lVar14 = FUN_02999e6c(lVar10,0x1a,8,1,lVar8);
      if (lVar14 == 0) break;
      if ((*(byte *)(lVar14 + 0x3f) >> 5 & 1) == 0) {
        lVar14 = *(long *)(lVar8 + 0x18);
      }
      lVar8 = lVar14;
    } while (lVar14 != 0);
    iVar6 = *(int *)(lVar10 + 0x78);
  }
  *(int *)(lVar10 + 0x78) = iVar6 + -1;
  if (iVar6 + -1 == 0) {
    for (lVar8 = *(long *)(*(long *)(*(long *)(lVar10 + 8) + 0x88) + 0x14c8); lVar8 != 0;
        lVar8 = *(long *)(lVar8 + 0x18)) {
      *(uint *)(lVar8 + 0x3c) = (uint)*(ushort *)(lVar8 + 0x3e) << 0x10;
    }
  }
  lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x98);
  uVar7 = 0;
  if (lVar8 != 0) {
    uVar7 = *(undefined4 *)(lVar8 + 0xc);
  }
  *param_5 = uVar7;
  lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x70);
  uVar5 = 0;
  if (lVar8 != 0) {
    uVar5 = (undefined1)*(undefined4 *)(lVar8 + 0xc);
  }
  *(undefined1 *)(param_5 + 1) = uVar5;
  lVar10 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(*(long *)(lVar10 + 0x70) + 0x248);
  if (lVar8 == 0) {
    bVar4 = true;
  }
  else {
    bVar4 = *(int *)(lVar8 + 0xc) == 0;
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
      if (uVar9 == 0) {
        return bVar4;
      }
      uVar9 = uVar9 - 1;
      *(int *)(lVar8 + 0xc08) = (int)uVar9;
    } while (*(short *)(*(long *)(lVar8 + (uVar9 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar8 + 0xc08) = (int)uVar9 + 1;
  }
  return bVar4;
}


