/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02992f1c; name: FUN_02992f1c
 */


undefined4 FUN_02992f1c(long param_1,long param_2,long param_3,uint param_4)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined4 uVar16;
  
  if (param_3 == 0) {
    uVar8 = 0x1f;
  }
  else {
    uVar8 = (uint)*(byte *)(param_3 + 0x7d);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar6 + 0x30);
  uVar12 = *(uint *)(lVar9 + 0xc08);
  if (uVar12 < 0x60) {
    do {
      lVar13 = *(long *)(lVar9 + (ulong)uVar12 * 0x20 + 8);
      if (*(short *)(lVar13 + 8) == 0) {
        if (uVar12 < 0x5f) {
          *(undefined2 *)(lVar13 + 8) = 1;
          *(int *)(lVar9 + 0xc08) = *(int *)(lVar9 + 0xc08) + 1;
        }
        break;
      }
      uVar12 = uVar12 + 1;
      *(uint *)(lVar9 + 0xc08) = uVar12;
    } while (uVar12 != 0x60);
  }
  lVar9 = *(long *)(lVar6 + 0x50);
  uVar12 = *(uint *)(lVar9 + 0x408);
  if (uVar12 < 0x1f) {
    *(uint *)(lVar9 + 0x408) = uVar12 + 1;
    lVar9 = *(long *)(lVar6 + 0x50);
    uVar12 = *(uint *)(lVar9 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar9 + (ulong)uVar12 * 0x20 + 8);
  lVar9 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar9 + 0x30);
  uVar10 = (ulong)*(uint *)(lVar6 + 0xc08);
  bVar1 = *(byte *)(param_2 + 0x7d);
  uVar7 = uVar10 << 5 | 8;
  uVar4 = uVar10;
  do {
    uVar15 = uVar4;
    if (0x5f < uVar15) goto LAB_02993054;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar2 == 0) goto LAB_02993018;
    uVar7 = uVar7 + 0x20;
    uVar4 = uVar15 + 1;
  } while (sVar2 != 3);
  if ((int)(uVar15 + 1) - 1U < 0x60) {
LAB_02993018:
    lVar13 = *(long *)(lVar6 + (uVar15 & 0xffffffff) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 3;
      *(uint *)(lVar13 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x20) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_02993054:
  uVar7 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_029930d4;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar2 == 0) goto LAB_0299309c;
    uVar7 = uVar7 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar2 != 4);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0299309c:
    lVar13 = *(long *)(lVar6 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 4;
      *(uint *)(lVar13 + 0xc) = uVar8;
      *(undefined1 *)(lVar13 + 10) = 4;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x28) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_029930d4:
  uVar7 = uVar10 << 5 | 8;
  lVar13 = 0;
  do {
    lVar14 = lVar13;
    if (0x5f < uVar10 + lVar14) goto LAB_02993168;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar2 == 0) goto LAB_0299311c;
    uVar7 = uVar7 + 0x20;
    lVar13 = lVar14 + 1;
  } while (sVar2 != 0x38);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_0299311c:
    lVar13 = *(long *)(lVar6 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar13 != 0) {
      *(undefined2 *)(lVar13 + 8) = 0x38;
      *(undefined8 *)(lVar13 + 0xc) = 0x19a00001000;
      *(undefined4 *)(lVar13 + 0x14) = 0x20000;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(undefined1 *)(lVar13 + 10) = 3;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x1c8) = lVar13;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_02993168:
  plVar11 = (long *)(lVar6 + uVar10 * 0x20 + 8);
  do {
    uVar7 = uVar10;
    if (0x5f < uVar7) goto LAB_029931d8;
    lVar13 = *plVar11;
    if (*(short *)(lVar13 + 8) == 0) goto LAB_029931a8;
    plVar11 = plVar11 + 4;
    uVar10 = uVar7 + 1;
  } while (*(short *)(lVar13 + 8) != 0x23);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_029931a8:
    lVar6 = *(long *)(lVar6 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x23;
      *(uint *)(lVar6 + 0xc) = param_4 & 0xffff;
      *(undefined1 *)(lVar6 + 10) = 0;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x120) = lVar6;
      lVar9 = *(long *)(param_1 + 0x10);
    }
  }
LAB_029931d8:
  iVar5 = *(int *)(lVar9 + 0x78) + 1;
  *(int *)(lVar9 + 0x78) = iVar5;
  lVar6 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8);
  if (lVar6 != 0) {
    do {
      lVar13 = FUN_02999e6c(lVar9,0xaf,8,1,lVar6);
      if (lVar13 == 0) break;
      if ((*(byte *)(lVar13 + 0x3f) >> 5 & 1) == 0) {
        lVar13 = *(long *)(lVar6 + 0x18);
      }
      lVar6 = lVar13;
    } while (lVar13 != 0);
    iVar5 = *(int *)(lVar9 + 0x78);
  }
  *(int *)(lVar9 + 0x78) = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    for (lVar6 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8); lVar6 != 0;
        lVar6 = *(long *)(lVar6 + 0x18)) {
      *(uint *)(lVar6 + 0x3c) = (uint)*(ushort *)(lVar6 + 0x3e) << 0x10;
    }
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
  lVar6 = *(long *)(lVar9 + 0x120);
  if (lVar6 == 0) {
    uVar8 = 0;
    lVar9 = *(long *)(lVar9 + 0x1c8);
    if (lVar9 == 0) {
      iVar5 = 0;
      goto LAB_02993284;
    }
  }
  else {
    uVar8 = (uint)*(ushort *)(lVar6 + 0xc);
    lVar9 = *(long *)(lVar9 + 0x1c8);
    iVar5 = 0;
    if (lVar9 == 0) goto LAB_02993284;
  }
  iVar5 = *(int *)(lVar9 + 0xc);
LAB_02993284:
  uVar12 = 0;
  if (uVar8 != 0) {
    uVar3 = iVar5 * uVar8 >> 0xc;
    if (0x800 < (iVar5 * uVar8 & 0xfff)) {
      uVar3 = uVar3 + 1;
    }
    uVar12 = uVar3 & 0xffff;
    if (uVar3 == 0) {
      uVar12 = 1;
    }
  }
  if (((lVar6 != 0) && (*(byte *)(lVar6 + 10) < 2)) &&
     (*(uint *)(lVar6 + 0xc) = uVar12, *(byte *)(lVar6 + 10) == 1)) {
    *(undefined1 *)(lVar6 + 10) = 2;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  iVar5 = *(int *)(lVar9 + 0x78) + 1;
  *(int *)(lVar9 + 0x78) = iVar5;
  lVar6 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8);
  if (lVar6 != 0) {
    do {
      lVar13 = FUN_02999e6c(lVar9,0xb0,8,1,lVar6);
      if (lVar13 == 0) break;
      if ((*(byte *)(lVar13 + 0x3f) >> 5 & 1) == 0) {
        lVar13 = *(long *)(lVar6 + 0x18);
      }
      lVar6 = lVar13;
    } while (lVar13 != 0);
    iVar5 = *(int *)(lVar9 + 0x78);
  }
  *(int *)(lVar9 + 0x78) = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    for (lVar6 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8); lVar6 != 0;
        lVar6 = *(long *)(lVar6 + 0x18)) {
      *(uint *)(lVar6 + 0x3c) = (uint)*(ushort *)(lVar6 + 0x3e) << 0x10;
    }
  }
  lVar9 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(*(long *)(lVar9 + 0x70) + 0x120);
  if (lVar6 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined4 *)(lVar6 + 0xc);
  }
  lVar6 = *(long *)(lVar9 + 0x50);
  if (*(uint *)(lVar6 + 0x408) == 0) {
    uVar7 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar6 + (ulong)*(uint *)(lVar6 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar6 + 0x408) = *(int *)(lVar6 + 0x408) + -1;
    lVar6 = *(long *)(lVar9 + 0x50);
    uVar7 = (ulong)*(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)(lVar6 + uVar7 * 0x20 + 8);
  lVar6 = *(long *)(lVar9 + 0x30);
  uVar8 = *(uint *)(lVar6 + 0xc08);
  if (uVar8 != 0) {
    if ((uVar8 & 0xffff) < 0x60) {
      uVar7 = (ulong)uVar8 & 0xffff;
      plVar11 = (long *)(lVar6 + uVar7 * 0x20 + 8);
      do {
        uVar7 = uVar7 + 1;
        if (*(short *)(*plVar11 + 8) == 0) break;
        *(undefined2 *)(*plVar11 + 8) = 0;
        plVar11 = plVar11 + 4;
      } while (((uint)uVar7 & 0xffff) != 0x60);
      uVar8 = *(uint *)(lVar6 + 0xc08);
    }
    *(uint *)(lVar6 + 0xc08) = uVar8 - 1;
    *(undefined2 *)(*(long *)(lVar6 + (ulong)(uVar8 - 1) * 0x20 + 8) + 8) = 0;
    uVar7 = (ulong)*(uint *)(lVar6 + 0xc08);
    do {
      if (uVar7 == 0) {
        return uVar16;
      }
      uVar7 = uVar7 - 1;
      *(int *)(lVar6 + 0xc08) = (int)uVar7;
    } while (*(short *)(*(long *)(lVar6 + (uVar7 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar6 + 0xc08) = (int)uVar7 + 1;
  }
  return uVar16;
}


