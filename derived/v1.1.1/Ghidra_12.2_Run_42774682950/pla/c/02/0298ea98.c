/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0298ea98; name: FUN_0298ea98
 */


bool FUN_0298ea98(long param_1,long param_2,long *param_3)

{
  short sVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  
  if (*(char *)((long)param_3 + 0x5a) == '\0') {
    lVar5 = 0;
  }
  else {
    lVar5 = *param_3;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar7 + 0x30);
  uVar11 = *(uint *)(lVar9 + 0xc08);
  if (uVar11 < 0x60) {
    do {
      lVar12 = *(long *)(lVar9 + (ulong)uVar11 * 0x20 + 8);
      if (*(short *)(lVar12 + 8) == 0) {
        if (uVar11 < 0x5f) {
          *(undefined2 *)(lVar12 + 8) = 1;
          *(int *)(lVar9 + 0xc08) = *(int *)(lVar9 + 0xc08) + 1;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      *(uint *)(lVar9 + 0xc08) = uVar11;
    } while (uVar11 != 0x60);
  }
  lVar9 = *(long *)(lVar7 + 0x50);
  uVar11 = *(uint *)(lVar9 + 0x408);
  if (uVar11 < 0x1f) {
    *(uint *)(lVar9 + 0x408) = uVar11 + 1;
    lVar9 = *(long *)(lVar7 + 0x50);
    uVar11 = *(uint *)(lVar9 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar9 + (ulong)uVar11 * 0x20 + 8);
  lVar9 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar9 + 0x30);
  plVar10 = (long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0xc08) * 0x20 + 8);
  uVar6 = (ulong)*(uint *)(lVar7 + 0xc08);
  do {
    uVar8 = uVar6;
    if (0x5f < uVar8) goto LAB_0298ebc8;
    lVar12 = *plVar10;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_0298eb94;
    plVar10 = plVar10 + 4;
    uVar6 = uVar8 + 1;
  } while (*(short *)(lVar12 + 8) != 3);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_0298eb94:
    lVar7 = *(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(uint *)(lVar7 + 0xc) = (uint)*(byte *)(param_2 + 0x7d);
      *(undefined2 *)(lVar7 + 8) = 3;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x20) = lVar7;
      lVar9 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0298ebc8:
  if (lVar5 == 0) {
    uVar11 = 0x1f;
  }
  else {
    uVar11 = (uint)*(byte *)(lVar5 + 0x7d);
  }
  lVar5 = *(long *)(lVar9 + 0x30);
  uVar8 = (ulong)*(uint *)(lVar5 + 0xc08);
  uVar6 = uVar8 << 5 | 8;
  uVar2 = uVar8;
  do {
    uVar13 = uVar2;
    if (0x5f < uVar13) goto LAB_0298ec58;
    sVar1 = *(short *)(*(long *)(lVar5 + uVar6) + 8);
    if (sVar1 == 0) goto LAB_0298ec20;
    uVar6 = uVar6 + 0x20;
    uVar2 = uVar13 + 1;
  } while (sVar1 != 4);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_0298ec20:
    lVar7 = *(long *)(lVar5 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 4;
      *(uint *)(lVar7 + 0xc) = uVar11;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x28) = lVar7;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar9 + 0x30);
      uVar8 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_0298ec58:
  plVar10 = (long *)(lVar5 + uVar8 * 0x20 + 8);
  do {
    uVar6 = uVar8;
    if (0x5f < uVar6) goto LAB_0298eccc;
    lVar7 = *plVar10;
    if (*(short *)(lVar7 + 8) == 0) goto LAB_0298ec94;
    plVar10 = plVar10 + 4;
    uVar8 = uVar6 + 1;
  } while (*(short *)(lVar7 + 8) != 0x48);
  if ((int)(uVar6 + 1) - 1U < 0x60) {
LAB_0298ec94:
    lVar5 = *(long *)(lVar5 + (uVar6 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 0x48;
      *(undefined8 *)(lVar5 + 0xc) = 0;
      *(undefined8 *)(lVar5 + 0x14) = 0;
      *(undefined4 *)(lVar5 + 0x1c) = 0;
      *(undefined1 *)(lVar5 + 10) = 1;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x248) = lVar5;
      lVar9 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0298eccc:
  iVar4 = *(int *)(lVar9 + 0x78) + 1;
  *(int *)(lVar9 + 0x78) = iVar4;
  lVar5 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8);
  if (lVar5 != 0) {
    do {
      lVar7 = FUN_02999e6c(lVar9,0xb7,8,1,lVar5);
      if (lVar7 == 0) break;
      if ((*(byte *)(lVar7 + 0x3f) >> 5 & 1) == 0) {
        lVar7 = *(long *)(lVar5 + 0x18);
      }
      lVar5 = lVar7;
    } while (lVar7 != 0);
    iVar4 = *(int *)(lVar9 + 0x78);
  }
  *(int *)(lVar9 + 0x78) = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    for (lVar5 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8); lVar5 != 0;
        lVar5 = *(long *)(lVar5 + 0x18)) {
      *(uint *)(lVar5 + 0x3c) = (uint)*(ushort *)(lVar5 + 0x3e) << 0x10;
    }
  }
  lVar7 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(*(long *)(lVar7 + 0x70) + 0x248);
  if (lVar5 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(lVar5 + 0xc) != 0;
  }
  lVar5 = *(long *)(lVar7 + 0x50);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar6 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar7 + 0x50);
    uVar6 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar5 + uVar6 * 0x20 + 8);
  lVar5 = *(long *)(lVar7 + 0x30);
  uVar11 = *(uint *)(lVar5 + 0xc08);
  if (uVar11 != 0) {
    if ((uVar11 & 0xffff) < 0x60) {
      uVar6 = (ulong)uVar11 & 0xffff;
      plVar10 = (long *)(lVar5 + uVar6 * 0x20 + 8);
      do {
        uVar6 = uVar6 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar6 & 0xffff) != 0x60);
      uVar11 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar11 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar11 - 1) * 0x20 + 8) + 8) = 0;
    uVar6 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar6 == 0) {
        return bVar3;
      }
      uVar6 = uVar6 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar6;
    } while (*(short *)(*(long *)(lVar5 + (uVar6 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar6 + 1;
  }
  return bVar3;
}


