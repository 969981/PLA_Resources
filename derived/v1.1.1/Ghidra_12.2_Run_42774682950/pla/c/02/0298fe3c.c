/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0298fe3c; name: FUN_0298fe3c
 */


undefined8 FUN_0298fe3c(long param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  
  lVar5 = *(long *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_3 + 0x5a);
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
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x30);
  uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
  bVar2 = *(byte *)(param_2 + 0x7d);
  uVar6 = uVar10 << 5 | 8;
  uVar14 = uVar10;
  do {
    uVar13 = uVar14;
    if (0x5f < uVar13) goto LAB_0298ff68;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar6) + 8);
    if (sVar3 == 0) goto LAB_0298ff2c;
    uVar6 = uVar6 + 0x20;
    uVar14 = uVar13 + 1;
  } while (sVar3 != 3);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_0298ff2c:
    lVar11 = *(long *)(lVar7 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 3;
      *(uint *)(lVar11 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x70) + 0x20) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298ff68:
  uVar6 = uVar10 << 5 | 8;
  lVar11 = 0;
  do {
    lVar12 = lVar11;
    if (0x5f < uVar10 + lVar12) goto LAB_0298fff0;
    sVar3 = *(short *)(*(long *)(lVar7 + uVar6) + 8);
    if (sVar3 == 0) goto LAB_0298ffb0;
    uVar6 = uVar6 + 0x20;
    lVar11 = lVar12 + 1;
  } while (sVar3 != 0x48);
  if (((int)uVar10 + (int)(lVar12 + 1)) - 1U < 0x60) {
LAB_0298ffb0:
    lVar11 = *(long *)(lVar7 + (ulong)(uint)((int)uVar10 + (int)lVar12) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x48;
      *(undefined8 *)(lVar11 + 0xc) = 0;
      *(undefined8 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x1c) = 0;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(long *)(*(long *)(lVar5 + 0x70) + 0x248) = lVar11;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)(lVar5 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
    }
  }
LAB_0298fff0:
  plVar8 = (long *)(lVar7 + uVar10 * 0x20 + 8);
  do {
    uVar6 = uVar10;
    if (0x5f < uVar6) goto LAB_0299005c;
    lVar11 = *plVar8;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_0299002c;
    plVar8 = plVar8 + 4;
    uVar10 = uVar6 + 1;
  } while (*(short *)(lVar11 + 8) != 5);
  if ((int)(uVar6 + 1) - 1U < 0x60) {
LAB_0299002c:
    lVar7 = *(long *)(lVar7 + (uVar6 & 0xffffffff) * 0x20 + 8);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 8) = 5;
      *(uint *)(lVar7 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar7 + 10) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x70) + 0x30) = lVar7;
    }
  }
LAB_0299005c:
  if (bVar1 != 0) {
    uVar6 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x10);
      uVar9 = (int)uVar6 + 6;
      lVar7 = *(long *)(lVar5 + 0x30);
      bVar2 = *(byte *)(*(long *)(param_3 + uVar6 * 8) + 0x7d);
      plVar8 = (long *)(lVar7 + (ulong)*(uint *)(lVar7 + 0xc08) * 0x20 + 8);
      uVar10 = (ulong)*(uint *)(lVar7 + 0xc08);
      do {
        uVar14 = uVar10;
        if (0x5f < uVar14) goto LAB_0299006c;
        lVar11 = *plVar8;
        if (*(ushort *)(lVar11 + 8) == 0) goto LAB_029900cc;
        plVar8 = plVar8 + 4;
        uVar10 = uVar14 + 1;
      } while ((uint)*(ushort *)(lVar11 + 8) != (uVar9 & 0xffff));
      if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_029900cc:
        lVar7 = *(long *)(lVar7 + (uVar14 & 0xffffffff) * 0x20 + 8);
        if (lVar7 != 0) {
          *(ushort *)(lVar7 + 8) = (ushort)uVar9;
          *(uint *)(lVar7 + 0xc) = (uint)bVar2;
          *(undefined1 *)(lVar7 + 10) = 4;
          *(undefined8 *)(lVar7 + 0x10) = 0;
          *(undefined8 *)(lVar7 + 0x18) = 0;
          if ((uVar9 & 0xffff) < 0x82) {
            *(long *)(*(long *)(lVar5 + 0x70) + (ulong)(ushort)uVar9 * 8 + 8) = lVar7;
          }
        }
      }
LAB_0299006c:
      uVar6 = uVar6 + 1;
    } while (uVar6 != bVar1);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  iVar4 = *(int *)(lVar7 + 0x78) + 1;
  *(int *)(lVar7 + 0x78) = iVar4;
  lVar5 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8);
  if (lVar5 != 0) {
    do {
      lVar11 = FUN_02999e6c(lVar7,0xbc,8,1,lVar5);
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
  lVar7 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(*(long *)(lVar7 + 0x70) + 0x248);
  if ((lVar5 == 0) || (*(char *)(lVar5 + 0xc) == '\0')) {
    iVar4 = *(int *)(lVar7 + 0x78) + 1;
    *(int *)(lVar7 + 0x78) = iVar4;
    lVar5 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8);
    if (lVar5 != 0) {
      do {
        lVar11 = FUN_02999e6c(lVar7,0xbd,8,1,lVar5);
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
    uVar15 = 1;
  }
  else {
    uVar15 = 0;
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
      plVar8 = (long *)(lVar5 + uVar6 * 0x20 + 8);
      do {
        uVar6 = uVar6 + 1;
        if (*(short *)(*plVar8 + 8) == 0) break;
        *(undefined2 *)(*plVar8 + 8) = 0;
        plVar8 = plVar8 + 4;
      } while (((uint)uVar6 & 0xffff) != 0x60);
      uVar9 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar9 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar9 - 1) * 0x20 + 8) + 8) = 0;
    uVar6 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar6 == 0) {
        return uVar15;
      }
      uVar6 = uVar6 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar6;
    } while (*(short *)(*(long *)(lVar5 + (uVar6 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar6 + 1;
  }
  return uVar15;
}


