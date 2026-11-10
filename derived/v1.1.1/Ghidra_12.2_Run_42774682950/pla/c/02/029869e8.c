/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029869e8; name: FUN_029869e8
 */


void FUN_029869e8(long param_1,long param_2,long param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6)

{
  byte bVar1;
  short sVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
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
  bVar1 = *(byte *)(param_2 + 0x7d);
  plVar10 = (long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0xc08) * 0x20 + 8);
  uVar6 = (ulong)*(uint *)(lVar5 + 0xc08);
  do {
    uVar8 = uVar6;
    if (0x5f < uVar8) goto LAB_02986b00;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_02986ad0;
    plVar10 = plVar10 + 4;
    uVar6 = uVar8 + 1;
  } while (*(short *)(lVar11 + 8) != 4);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_02986ad0:
    lVar5 = *(long *)(lVar5 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 4;
      *(uint *)(lVar5 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x28) = lVar5;
      lVar7 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02986b00:
  if (param_3 == 0) {
    uVar9 = 0x1f;
  }
  else {
    uVar9 = (uint)*(byte *)(param_3 + 0x7d);
  }
  lVar5 = *(long *)(lVar7 + 0x30);
  uVar8 = (ulong)*(uint *)(lVar5 + 0xc08);
  uVar6 = uVar8 << 5 | 8;
  uVar3 = uVar8;
  do {
    uVar13 = uVar3;
    if (0x5f < uVar13) goto LAB_02986b94;
    sVar2 = *(short *)(*(long *)(lVar5 + uVar6) + 8);
    if (sVar2 == 0) goto LAB_02986b58;
    uVar6 = uVar6 + 0x20;
    uVar3 = uVar13 + 1;
  } while (sVar2 != 3);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_02986b58:
    lVar11 = *(long *)(lVar5 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 3;
      *(uint *)(lVar11 + 0xc) = uVar9;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x20) = lVar11;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar7 + 0x30);
      uVar8 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_02986b94:
  uVar6 = uVar8 << 5 | 8;
  lVar11 = 0;
  do {
    lVar12 = lVar11;
    if (0x5f < uVar8 + lVar12) goto LAB_02986c18;
    sVar2 = *(short *)(*(long *)(lVar5 + uVar6) + 8);
    if (sVar2 == 0) goto LAB_02986bdc;
    uVar6 = uVar6 + 0x20;
    lVar11 = lVar12 + 1;
  } while (sVar2 != 0x1e);
  if (((int)uVar8 + (int)(lVar12 + 1)) - 1U < 0x60) {
LAB_02986bdc:
    lVar11 = *(long *)(lVar5 + (ulong)(uint)((int)uVar8 + (int)lVar12) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x1e;
      *(undefined4 *)(lVar11 + 0xc) = param_4;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0xf8) = lVar11;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar7 + 0x30);
      uVar8 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_02986c18:
  uVar6 = uVar8 << 5 | 8;
  lVar11 = 0;
  do {
    lVar12 = lVar11;
    if (0x5f < uVar8 + lVar12) goto LAB_02986ca0;
    sVar2 = *(short *)(*(long *)(lVar5 + uVar6) + 8);
    if (sVar2 == 0) goto LAB_02986c64;
    uVar6 = uVar6 + 0x20;
    lVar11 = lVar12 + 1;
  } while (sVar2 != 0x6b);
  if (((int)uVar8 + (int)(lVar12 + 1)) - 1U < 0x60) {
LAB_02986c64:
    lVar11 = *(long *)(lVar5 + (ulong)(uint)((int)uVar8 + (int)lVar12) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x6b;
      *(uint *)(lVar11 + 0xc) = param_5 & 0xff;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x360) = lVar11;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar7 + 0x30);
      uVar8 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_02986ca0:
  plVar10 = (long *)(lVar5 + uVar8 * 0x20 + 8);
  do {
    uVar6 = uVar8;
    if (0x5f < uVar6) goto LAB_02986d10;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_02986cdc;
    plVar10 = plVar10 + 4;
    uVar8 = uVar6 + 1;
  } while (*(short *)(lVar11 + 8) != 0x1a);
  if ((int)(uVar6 + 1) - 1U < 0x60) {
LAB_02986cdc:
    lVar5 = *(long *)(lVar5 + (uVar6 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 0x1a;
      *(undefined4 *)(lVar5 + 0xc) = param_6;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0xd8) = lVar5;
      lVar7 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02986d10:
  iVar4 = *(int *)(lVar7 + 0x78) + 1;
  *(int *)(lVar7 + 0x78) = iVar4;
  lVar5 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8);
  if (lVar5 != 0) {
    do {
      lVar11 = FUN_02999e6c(lVar7,0x81,8,1,lVar5);
      if (lVar11 == 0) break;
      if ((*(byte *)(lVar11 + 0x3f) >> 5 & 1) == 0) {
        lVar11 = *(long *)(lVar5 + 0x18);
      }
      lVar5 = lVar11;
    } while (lVar11 != 0);
    iVar4 = *(int *)(lVar7 + 0x78);
  }
  *(int *)(lVar7 + 0x78) = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    for (lVar5 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8); lVar5 != 0;
        lVar5 = *(long *)(lVar5 + 0x18)) {
      *(uint *)(lVar5 + 0x3c) = (uint)*(ushort *)(lVar5 + 0x3e) << 0x10;
    }
  }
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
        return;
      }
      uVar6 = uVar6 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar6;
    } while (*(short *)(*(long *)(lVar5 + (uVar6 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar6 + 1;
  }
  return;
}


