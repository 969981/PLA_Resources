/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02980ca0; name: FUN_02980ca0
 */


undefined4
FUN_02980ca0(long param_1,long param_2,uint param_3,undefined4 param_4,int param_5,long *param_6)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = 1;
  if (param_5 != 0) {
    uVar2 = 2;
  }
  lVar7 = *(long *)(lVar5 + 0x30);
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
  lVar7 = *(long *)(lVar5 + 0x50);
  uVar10 = *(uint *)(lVar7 + 0x408);
  if (uVar10 < 0x1f) {
    *(uint *)(lVar7 + 0x408) = uVar10 + 1;
    lVar7 = *(long *)(lVar5 + 0x50);
    uVar10 = *(uint *)(lVar7 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(lVar7 + (ulong)uVar10 * 0x20 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x30);
  bVar4 = *(byte *)((long)param_6 + 0x5a);
  plVar9 = (long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0xc08) * 0x20 + 8);
  uVar6 = (ulong)*(uint *)(lVar7 + 0xc08);
  do {
    uVar8 = uVar6;
    if (0x5f < uVar8) goto LAB_02980dc8;
    lVar11 = *plVar9;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_02980d94;
    plVar9 = plVar9 + 4;
    uVar6 = uVar8 + 1;
  } while (*(short *)(lVar11 + 8) != 5);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_02980d94:
    lVar7 = *(long *)(lVar7 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(uint *)(lVar7 + 0xc) = (uint)bVar4;
      *(undefined2 *)(lVar7 + 8) = 5;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x70) + 0x30) = lVar7;
      bVar4 = *(byte *)((long)param_6 + 0x5a);
    }
  }
LAB_02980dc8:
  if ((bVar4 != 0) && (lVar5 = *param_6, lVar5 != 0)) {
    uVar6 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x10);
      uVar10 = (int)uVar6 + 6;
      bVar4 = *(byte *)(lVar5 + 0x7d);
      lVar5 = *(long *)(lVar7 + 0x30);
      plVar9 = (long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0xc08) * 0x20 + 8);
      uVar8 = (ulong)*(uint *)(lVar5 + 0xc08);
      do {
        uVar14 = uVar8;
        if (0x5f < uVar14) goto LAB_02980e64;
        lVar11 = *plVar9;
        if (*(ushort *)(lVar11 + 8) == 0) goto LAB_02980e2c;
        plVar9 = plVar9 + 4;
        uVar8 = uVar14 + 1;
      } while ((uint)*(ushort *)(lVar11 + 8) != (uVar10 & 0xffff));
      if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_02980e2c:
        lVar5 = *(long *)(lVar5 + (uVar14 & 0xffffffff) * 0x20 + 8);
        if (lVar5 != 0) {
          *(ushort *)(lVar5 + 8) = (ushort)uVar10;
          *(uint *)(lVar5 + 0xc) = (uint)bVar4;
          *(undefined1 *)(lVar5 + 10) = 4;
          *(undefined8 *)(lVar5 + 0x10) = 0;
          *(undefined8 *)(lVar5 + 0x18) = 0;
          if ((uVar10 & 0xffff) < 0x82) {
            *(long *)(*(long *)(lVar7 + 0x70) + (ulong)(ushort)uVar10 * 8 + 8) = lVar5;
          }
        }
      }
LAB_02980e64:
      uVar6 = uVar6 + 1;
    } while ((uVar6 < *(byte *)((long)param_6 + 0x5a)) && (lVar5 = param_6[uVar6], lVar5 != 0));
  }
  lVar7 = *(long *)(param_1 + 0x10);
  bVar4 = *(byte *)(param_2 + 0x7d);
  lVar5 = *(long *)(lVar7 + 0x30);
  uVar8 = (ulong)*(uint *)(lVar5 + 0xc08);
  uVar6 = uVar8 << 5 | 8;
  uVar14 = uVar8;
  do {
    uVar13 = uVar14;
    if (0x5f < uVar13) goto LAB_02980f08;
    sVar1 = *(short *)(*(long *)(lVar5 + uVar6) + 8);
    if (sVar1 == 0) goto LAB_02980ecc;
    uVar6 = uVar6 + 0x20;
    uVar14 = uVar13 + 1;
  } while (sVar1 != 3);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_02980ecc:
    lVar11 = *(long *)(lVar5 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 3;
      *(uint *)(lVar11 + 0xc) = (uint)bVar4;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x20) = lVar11;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar7 + 0x30);
      uVar8 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_02980f08:
  uVar6 = uVar8 << 5 | 8;
  lVar11 = 0;
  do {
    lVar12 = lVar11;
    if (0x5f < uVar8 + lVar12) goto LAB_02980f8c;
    sVar1 = *(short *)(*(long *)(lVar5 + uVar6) + 8);
    if (sVar1 == 0) goto LAB_02980f50;
    uVar6 = uVar6 + 0x20;
    lVar11 = lVar12 + 1;
  } while (sVar1 != 0x12);
  if (((int)uVar8 + (int)(lVar12 + 1)) - 1U < 0x60) {
LAB_02980f50:
    lVar11 = *(long *)(lVar5 + (ulong)(uint)((int)uVar8 + (int)lVar12) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x12;
      *(undefined4 *)(lVar11 + 0xc) = param_4;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x98) = lVar11;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar7 + 0x30);
      uVar8 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_02980f8c:
  uVar6 = uVar8 << 5 | 8;
  lVar11 = 0;
  do {
    lVar12 = lVar11;
    if (0x5f < uVar8 + lVar12) goto LAB_02981014;
    sVar1 = *(short *)(*(long *)(lVar5 + uVar6) + 8);
    if (sVar1 == 0) goto LAB_02980fd8;
    uVar6 = uVar6 + 0x20;
    lVar11 = lVar12 + 1;
  } while (sVar1 != 0x18);
  if (((int)uVar8 + (int)(lVar12 + 1)) - 1U < 0x60) {
LAB_02980fd8:
    lVar11 = *(long *)(lVar5 + (ulong)(uint)((int)uVar8 + (int)lVar12) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x18;
      *(uint *)(lVar11 + 0xc) = param_3 & 0xff;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 200) = lVar11;
      lVar7 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar7 + 0x30);
      uVar8 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_02981014:
  plVar9 = (long *)(lVar5 + uVar8 * 0x20 + 8);
  do {
    uVar6 = uVar8;
    if (0x5f < uVar6) goto LAB_02981080;
    lVar11 = *plVar9;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_02981050;
    plVar9 = plVar9 + 4;
    uVar8 = uVar6 + 1;
  } while (*(short *)(lVar11 + 8) != 0x23);
  if ((int)(uVar6 + 1) - 1U < 0x60) {
LAB_02981050:
    lVar5 = *(long *)(lVar5 + (uVar6 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 0x23;
      *(undefined4 *)(lVar5 + 0xc) = uVar2;
      *(undefined1 *)(lVar5 + 10) = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar7 + 0x70) + 0x120) = lVar5;
      lVar7 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02981080:
  iVar3 = *(int *)(lVar7 + 0x78) + 1;
  *(int *)(lVar7 + 0x78) = iVar3;
  lVar5 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8);
  if (lVar5 != 0) {
    do {
      lVar11 = FUN_02999e6c(lVar7,100,8,1,lVar5);
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
  lVar7 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(*(long *)(lVar7 + 0x70) + 0x120);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar5 + 0xc);
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
  uVar10 = *(uint *)(lVar5 + 0xc08);
  if (uVar10 != 0) {
    if ((uVar10 & 0xffff) < 0x60) {
      uVar6 = (ulong)uVar10 & 0xffff;
      plVar9 = (long *)(lVar5 + uVar6 * 0x20 + 8);
      do {
        uVar6 = uVar6 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar6 & 0xffff) != 0x60);
      uVar10 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar10 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar10 - 1) * 0x20 + 8) + 8) = 0;
    uVar6 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar6 == 0) {
        return uVar2;
      }
      uVar6 = uVar6 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar6;
    } while (*(short *)(*(long *)(lVar5 + (uVar6 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar6 + 1;
  }
  return uVar2;
}


