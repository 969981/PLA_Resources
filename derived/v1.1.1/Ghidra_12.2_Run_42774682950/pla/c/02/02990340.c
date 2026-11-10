/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02990340; name: FUN_02990340
 */


bool FUN_02990340(long param_1,long param_2,long param_3,undefined8 param_4,byte *param_5)

{
  byte bVar1;
  short sVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  *param_5 = 1;
  bVar1 = *(byte *)(param_3 + 0x387);
  if ((bVar1 >> 3 & 1) == 0) {
    if ((bVar1 >> 5 & 1) == 0) {
      if ((bVar1 >> 4 & 1) == 0) {
        if ((bVar1 >> 6 & 1) == 0) {
          return false;
        }
        uVar9 = 6;
      }
      else {
        uVar9 = 4;
      }
    }
    else {
      uVar9 = 5;
    }
  }
  else {
    uVar9 = 3;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar7 + 0x30);
  uVar13 = *(uint *)(lVar10 + 0xc08);
  if (uVar13 < 0x60) {
    do {
      lVar14 = *(long *)(lVar10 + (ulong)uVar13 * 0x20 + 8);
      if (*(short *)(lVar14 + 8) == 0) {
        if (uVar13 < 0x5f) {
          *(undefined2 *)(lVar14 + 8) = 1;
          *(int *)(lVar10 + 0xc08) = *(int *)(lVar10 + 0xc08) + 1;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      *(uint *)(lVar10 + 0xc08) = uVar13;
    } while (uVar13 != 0x60);
  }
  lVar10 = *(long *)(lVar7 + 0x50);
  uVar13 = *(uint *)(lVar10 + 0x408);
  if (uVar13 < 0x1f) {
    *(uint *)(lVar10 + 0x408) = uVar13 + 1;
    lVar10 = *(long *)(lVar7 + 0x50);
    uVar13 = *(uint *)(lVar10 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar10 + (ulong)uVar13 * 0x20 + 8);
  lVar10 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar10 + 0x30);
  uVar11 = (ulong)*(uint *)(lVar7 + 0xc08);
  bVar1 = *(byte *)(param_2 + 0x7d);
  uVar8 = uVar11 << 5 | 8;
  uVar3 = uVar11;
  do {
    uVar16 = uVar3;
    if (0x5f < uVar16) goto LAB_029904b0;
    sVar2 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar2 == 0) goto LAB_02990474;
    uVar8 = uVar8 + 0x20;
    uVar3 = uVar16 + 1;
  } while (sVar2 != 3);
  if ((int)(uVar16 + 1) - 1U < 0x60) {
LAB_02990474:
    lVar14 = *(long *)(lVar7 + (uVar16 & 0xffffffff) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 3;
      *(uint *)(lVar14 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x20) = lVar14;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_029904b0:
  bVar1 = *(byte *)(param_3 + 0x7d);
  uVar8 = uVar11 << 5 | 8;
  lVar14 = 0;
  do {
    lVar15 = lVar14;
    if (0x5f < uVar11 + lVar15) goto LAB_02990534;
    sVar2 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar2 == 0) goto LAB_029904fc;
    uVar8 = uVar8 + 0x20;
    lVar14 = lVar15 + 1;
  } while (sVar2 != 4);
  if (((int)uVar11 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_029904fc:
    lVar14 = *(long *)(lVar7 + (ulong)(uint)((int)uVar11 + (int)lVar15) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 4;
      *(uint *)(lVar14 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x28) = lVar14;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_02990534:
  uVar8 = uVar11 << 5 | 8;
  lVar14 = 0;
  do {
    lVar15 = lVar14;
    if (0x5f < uVar11 + lVar15) goto LAB_029905b8;
    sVar2 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar2 == 0) goto LAB_0299057c;
    uVar8 = uVar8 + 0x20;
    lVar14 = lVar15 + 1;
  } while (sVar2 != 0x24);
  if (((int)uVar11 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_0299057c:
    lVar14 = *(long *)(lVar7 + (ulong)(uint)((int)uVar11 + (int)lVar15) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x24;
      *(undefined4 *)(lVar14 + 0xc) = uVar9;
      *(undefined1 *)(lVar14 + 10) = 4;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x128) = lVar14;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_029905b8:
  uVar8 = uVar11 << 5 | 8;
  lVar14 = 0;
  do {
    lVar15 = lVar14;
    if (0x5f < uVar11 + lVar15) goto LAB_0299063c;
    sVar2 = *(short *)(*(long *)(lVar7 + uVar8) + 8);
    if (sVar2 == 0) goto LAB_02990600;
    uVar8 = uVar8 + 0x20;
    lVar14 = lVar15 + 1;
  } while (sVar2 != 0x49);
  if (((int)uVar11 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_02990600:
    lVar14 = *(long *)(lVar7 + (ulong)(uint)((int)uVar11 + (int)lVar15) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x49;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(undefined4 *)(lVar14 + 0xc) = 1;
      *(undefined1 *)(lVar14 + 10) = 1;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x250) = lVar14;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0299063c:
  plVar12 = (long *)(lVar7 + uVar11 * 0x20 + 8);
  do {
    uVar8 = uVar11;
    if (0x5f < uVar8) goto LAB_029906b0;
    lVar14 = *plVar12;
    if (*(short *)(lVar14 + 8) == 0) goto LAB_0299067c;
    plVar12 = plVar12 + 4;
    uVar11 = uVar8 + 1;
  } while (*(short *)(lVar14 + 8) != 0x56);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_0299067c:
    lVar7 = *(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(uint *)(lVar7 + 0xc) = (uint)*param_5;
      *(undefined2 *)(lVar7 + 8) = 0x56;
      *(undefined1 *)(lVar7 + 10) = 1;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x2b8) = lVar7;
      lVar10 = *(long *)(param_1 + 0x10);
    }
  }
LAB_029906b0:
  iVar6 = *(int *)(lVar10 + 0x78) + 1;
  *(int *)(lVar10 + 0x78) = iVar6;
  lVar7 = *(long *)(*(long *)(*(long *)(lVar10 + 8) + 0x88) + 0x14c8);
  if (lVar7 != 0) {
    do {
      lVar14 = FUN_02999e6c(lVar10,0xbe,8,1,lVar7);
      if (lVar14 == 0) break;
      if ((*(byte *)(lVar14 + 0x3f) >> 5 & 1) == 0) {
        lVar14 = *(long *)(lVar7 + 0x18);
      }
      lVar7 = lVar14;
    } while (lVar14 != 0);
    iVar6 = *(int *)(lVar10 + 0x78);
  }
  *(int *)(lVar10 + 0x78) = iVar6 + -1;
  if (iVar6 + -1 == 0) {
    for (lVar7 = *(long *)(*(long *)(*(long *)(lVar10 + 8) + 0x88) + 0x14c8); lVar7 != 0;
        lVar7 = *(long *)(lVar7 + 0x18)) {
      *(uint *)(lVar7 + 0x3c) = (uint)*(ushort *)(lVar7 + 0x3e) << 0x10;
    }
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
  if (*(long *)(lVar7 + 0x250) == 0) {
    bVar4 = false;
    lVar7 = *(long *)(lVar7 + 0x2b8);
    if (lVar7 == 0) {
      bVar5 = false;
      goto LAB_0299076c;
    }
  }
  else {
    bVar4 = *(int *)(*(long *)(lVar7 + 0x250) + 0xc) != 0;
    lVar7 = *(long *)(lVar7 + 0x2b8);
    bVar5 = false;
    if (lVar7 == 0) goto LAB_0299076c;
  }
  bVar5 = *(int *)(lVar7 + 0xc) != 0;
LAB_0299076c:
  *param_5 = bVar5;
  lVar7 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar7 + 0x50);
  if (*(uint *)(lVar10 + 0x408) == 0) {
    uVar8 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar10 + (ulong)*(uint *)(lVar10 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar10 + 0x408) = *(int *)(lVar10 + 0x408) + -1;
    lVar10 = *(long *)(lVar7 + 0x50);
    uVar8 = (ulong)*(uint *)(lVar10 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar10 + uVar8 * 0x20 + 8);
  lVar7 = *(long *)(lVar7 + 0x30);
  uVar13 = *(uint *)(lVar7 + 0xc08);
  if (uVar13 != 0) {
    if ((uVar13 & 0xffff) < 0x60) {
      uVar8 = (ulong)uVar13 & 0xffff;
      plVar12 = (long *)(lVar7 + uVar8 * 0x20 + 8);
      do {
        uVar8 = uVar8 + 1;
        if (*(short *)(*plVar12 + 8) == 0) break;
        *(undefined2 *)(*plVar12 + 8) = 0;
        plVar12 = plVar12 + 4;
      } while (((uint)uVar8 & 0xffff) != 0x60);
      uVar13 = *(uint *)(lVar7 + 0xc08);
    }
    *(uint *)(lVar7 + 0xc08) = uVar13 - 1;
    *(undefined2 *)(*(long *)(lVar7 + (ulong)(uVar13 - 1) * 0x20 + 8) + 8) = 0;
    uVar8 = (ulong)*(uint *)(lVar7 + 0xc08);
    do {
      if (uVar8 == 0) {
        return bVar4;
      }
      uVar8 = uVar8 - 1;
      *(int *)(lVar7 + 0xc08) = (int)uVar8;
    } while (*(short *)(*(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar7 + 0xc08) = (int)uVar8 + 1;
  }
  return bVar4;
}


