/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02981a0c; name: FUN_02981a0c
 */


uint FUN_02981a0c(long param_1,long param_2,long param_3,uint param_4,ushort *param_5)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  iVar3 = FUN_029506a8(param_3,0xd);
  if ((int)(uint)*param_5 < iVar3) {
    uVar9 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)(lVar4 + 0x30);
    uVar9 = *(uint *)(lVar7 + 0xc08);
    if (uVar9 < 0x60) {
      do {
        lVar12 = *(long *)(lVar7 + (ulong)uVar9 * 0x20 + 8);
        if (*(short *)(lVar12 + 8) == 0) {
          if (uVar9 < 0x5f) {
            *(undefined2 *)(lVar12 + 8) = 1;
            *(int *)(lVar7 + 0xc08) = *(int *)(lVar7 + 0xc08) + 1;
          }
          break;
        }
        uVar9 = uVar9 + 1;
        *(uint *)(lVar7 + 0xc08) = uVar9;
      } while (uVar9 != 0x60);
    }
    lVar7 = *(long *)(lVar4 + 0x50);
    uVar9 = *(uint *)(lVar7 + 0x408);
    if (uVar9 < 0x1f) {
      *(uint *)(lVar7 + 0x408) = uVar9 + 1;
      lVar7 = *(long *)(lVar4 + 0x50);
      uVar9 = *(uint *)(lVar7 + 0x408);
    }
    *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar7 + (ulong)uVar9 * 0x20 + 8);
    lVar7 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(lVar7 + 0x30);
    uVar8 = (ulong)*(uint *)(lVar4 + 0xc08);
    bVar1 = *(byte *)(param_2 + 0x7d);
    uVar5 = uVar8 << 5 | 8;
    uVar13 = uVar8;
    do {
      uVar14 = uVar13;
      if (0x5f < uVar14) goto LAB_02981b68;
      sVar2 = *(short *)(*(long *)(lVar4 + uVar5) + 8);
      if (sVar2 == 0) goto LAB_02981b2c;
      uVar5 = uVar5 + 0x20;
      uVar13 = uVar14 + 1;
    } while (sVar2 != 3);
    if ((int)(uVar14 + 1) - 1U < 0x60) {
LAB_02981b2c:
      lVar12 = *(long *)(lVar4 + (uVar14 & 0xffffffff) * 0x20 + 8);
      if (lVar12 != 0) {
        *(undefined2 *)(lVar12 + 8) = 3;
        *(uint *)(lVar12 + 0xc) = (uint)bVar1;
        *(undefined1 *)(lVar12 + 10) = 4;
        *(undefined8 *)(lVar12 + 0x10) = 0;
        *(undefined8 *)(lVar12 + 0x18) = 0;
        *(long *)(*(long *)(lVar7 + 0x70) + 0x20) = lVar12;
        lVar7 = *(long *)(param_1 + 0x10);
        lVar4 = *(long *)(lVar7 + 0x30);
        uVar8 = (ulong)*(uint *)(lVar4 + 0xc08);
      }
    }
LAB_02981b68:
    bVar1 = *(byte *)(param_3 + 0x7d);
    uVar5 = uVar8 << 5 | 8;
    lVar12 = 0;
    do {
      lVar15 = lVar12;
      if (0x5f < uVar8 + lVar15) goto LAB_02981bec;
      sVar2 = *(short *)(*(long *)(lVar4 + uVar5) + 8);
      if (sVar2 == 0) goto LAB_02981bb4;
      uVar5 = uVar5 + 0x20;
      lVar12 = lVar15 + 1;
    } while (sVar2 != 4);
    if (((int)uVar8 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_02981bb4:
      lVar12 = *(long *)(lVar4 + (ulong)(uint)((int)uVar8 + (int)lVar15) * 0x20 + 8);
      if (lVar12 != 0) {
        *(undefined2 *)(lVar12 + 8) = 4;
        *(uint *)(lVar12 + 0xc) = (uint)bVar1;
        *(undefined1 *)(lVar12 + 10) = 4;
        *(undefined8 *)(lVar12 + 0x10) = 0;
        *(undefined8 *)(lVar12 + 0x18) = 0;
        *(long *)(*(long *)(lVar7 + 0x70) + 0x28) = lVar12;
        lVar7 = *(long *)(param_1 + 0x10);
        lVar4 = *(long *)(lVar7 + 0x30);
        uVar8 = (ulong)*(uint *)(lVar4 + 0xc08);
      }
    }
LAB_02981bec:
    uVar5 = uVar8 << 5 | 8;
    lVar12 = 0;
    do {
      lVar15 = lVar12;
      if (0x5f < uVar8 + lVar15) goto LAB_02981c74;
      sVar2 = *(short *)(*(long *)(lVar4 + uVar5) + 8);
      if (sVar2 == 0) goto LAB_02981c38;
      uVar5 = uVar5 + 0x20;
      lVar12 = lVar15 + 1;
    } while (sVar2 != 0x59);
    if (((int)uVar8 + (int)(lVar15 + 1)) - 1U < 0x60) {
LAB_02981c38:
      lVar12 = *(long *)(lVar4 + (ulong)(uint)((int)uVar8 + (int)lVar15) * 0x20 + 8);
      if (lVar12 != 0) {
        *(undefined2 *)(lVar12 + 8) = 0x59;
        *(uint *)(lVar12 + 0xc) = param_4 & 1;
        *(undefined1 *)(lVar12 + 10) = 4;
        *(undefined8 *)(lVar12 + 0x10) = 0;
        *(undefined8 *)(lVar12 + 0x18) = 0;
        *(long *)(*(long *)(lVar7 + 0x70) + 0x2d0) = lVar12;
        lVar7 = *(long *)(param_1 + 0x10);
        lVar4 = *(long *)(lVar7 + 0x30);
        uVar8 = (ulong)*(uint *)(lVar4 + 0xc08);
      }
    }
LAB_02981c74:
    plVar11 = (long *)(lVar4 + uVar8 * 0x20 + 8);
    do {
      uVar5 = uVar8;
      if (0x5f < uVar5) goto LAB_02981ce8;
      lVar12 = *plVar11;
      if (*(short *)(lVar12 + 8) == 0) goto LAB_02981cb0;
      plVar11 = plVar11 + 4;
      uVar8 = uVar5 + 1;
    } while (*(short *)(lVar12 + 8) != 0x3f);
    if ((int)(uVar5 + 1) - 1U < 0x60) {
LAB_02981cb0:
      lVar4 = *(long *)(lVar4 + (uVar5 & 0xffffffff) * 0x20 + 8);
      if (lVar4 != 0) {
        *(undefined2 *)(lVar4 + 8) = 0x3f;
        *(undefined8 *)(lVar4 + 0xc) = 0;
        *(undefined8 *)(lVar4 + 0x14) = 0;
        *(undefined4 *)(lVar4 + 0x1c) = 0;
        *(undefined1 *)(lVar4 + 10) = 1;
        *(long *)(*(long *)(lVar7 + 0x70) + 0x200) = lVar4;
        lVar7 = *(long *)(param_1 + 0x10);
      }
    }
LAB_02981ce8:
    iVar3 = *(int *)(lVar7 + 0x78) + 1;
    *(int *)(lVar7 + 0x78) = iVar3;
    lVar4 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8);
    if (lVar4 != 0) {
      do {
        lVar12 = FUN_02999e6c(lVar7,0x90,8,1,lVar4);
        if (lVar12 == 0) break;
        if ((*(byte *)(lVar12 + 0x3f) >> 5 & 1) == 0) {
          lVar12 = *(long *)(lVar4 + 0x18);
        }
        lVar4 = lVar12;
      } while (lVar12 != 0);
      iVar3 = *(int *)(lVar7 + 0x78);
    }
    *(int *)(lVar7 + 0x78) = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      for (lVar4 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x88) + 0x14c8); lVar4 != 0;
          lVar4 = *(long *)(lVar4 + 0x18)) {
        *(uint *)(lVar4 + 0x3c) = (uint)*(ushort *)(lVar4 + 0x3e) << 0x10;
      }
    }
    lVar7 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(*(long *)(lVar7 + 0x70) + 0x200);
    if (lVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(lVar4 + 0xc);
    }
    lVar4 = *(long *)(lVar7 + 0x50);
    if (*(uint *)(lVar4 + 0x408) == 0) {
      uVar5 = 0;
    }
    else {
      memset((void *)(*(long *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x408) * 0x20 + 8) + 8),0,0x410);
      *(int *)(lVar4 + 0x408) = *(int *)(lVar4 + 0x408) + -1;
      lVar4 = *(long *)(lVar7 + 0x50);
      uVar5 = (ulong)*(uint *)(lVar4 + 0x408);
    }
    *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(lVar4 + uVar5 * 0x20 + 8);
    lVar4 = *(long *)(lVar7 + 0x30);
    uVar6 = *(uint *)(lVar4 + 0xc08);
    if (uVar6 != 0) {
      if ((uVar6 & 0xffff) < 0x60) {
        uVar5 = (ulong)uVar6 & 0xffff;
        plVar11 = (long *)(lVar4 + uVar5 * 0x20 + 8);
        do {
          uVar5 = uVar5 + 1;
          if (*(short *)(*plVar11 + 8) == 0) break;
          *(undefined2 *)(*plVar11 + 8) = 0;
          plVar11 = plVar11 + 4;
        } while (((uint)uVar5 & 0xffff) != 0x60);
        uVar6 = *(uint *)(lVar4 + 0xc08);
      }
      *(uint *)(lVar4 + 0xc08) = uVar6 - 1;
      *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
      uVar5 = (ulong)*(uint *)(lVar4 + 0xc08);
      do {
        if (uVar5 == 0) goto LAB_02981e70;
        uVar5 = uVar5 - 1;
        *(int *)(lVar4 + 0xc08) = (int)uVar5;
      } while (*(short *)(*(long *)(lVar4 + (uVar5 & 0xffffffff) * 0x20 + 8) + 8) != 1);
      *(int *)(lVar4 + 0xc08) = (int)uVar5 + 1;
    }
LAB_02981e70:
    lVar4 = DAT_043ecde0;
    if ((uVar9 & 0xff) == 0) {
      uVar5 = *(ulong *)(DAT_043ecde0 + 8);
      uVar8 = *(ulong *)(DAT_043ecde0 + 0x10);
      do {
        uVar13 = uVar5 ^ uVar8;
        iVar10 = (int)uVar8;
        iVar3 = (int)uVar5;
        uVar8 = uVar13 >> 0x1b | uVar13 << 0x25;
        uVar5 = uVar13 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar13 << 0x10;
      } while (99 < (iVar3 + iVar10 & 0x7cU));
      uVar9 = 0;
      *(ulong *)(DAT_043ecde0 + 8) = uVar5;
      *(ulong *)(lVar4 + 0x10) = uVar8;
    }
    else {
      sVar2 = FUN_029506a8(param_3,0xd);
      *param_5 = sVar2 - 1;
    }
  }
  return uVar9;
}


