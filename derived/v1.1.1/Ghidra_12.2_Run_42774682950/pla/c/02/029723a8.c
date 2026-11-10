/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029723a8; name: FUN_029723a8
 */


bool FUN_029723a8(long param_1,undefined1 *param_2,long param_3,long param_4,undefined8 param_5)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  
  *param_2 = 0;
  uVar5 = FUN_029506a8(param_3,0xf);
  uVar6 = FUN_029506a8(param_4,0xf);
  if ((uVar5 & 0xff) < (uVar6 & 0xff)) {
    return false;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar9 + 0x30);
  uVar13 = *(uint *)(lVar11 + 0xc08);
  if (uVar13 < 0x60) {
    do {
      lVar16 = *(long *)(lVar11 + (ulong)uVar13 * 0x20 + 8);
      if (*(short *)(lVar16 + 8) == 0) {
        if (uVar13 < 0x5f) {
          *(undefined2 *)(lVar16 + 8) = 1;
          *(int *)(lVar11 + 0xc08) = *(int *)(lVar11 + 0xc08) + 1;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      *(uint *)(lVar11 + 0xc08) = uVar13;
    } while (uVar13 != 0x60);
  }
  lVar11 = *(long *)(lVar9 + 0x50);
  uVar13 = *(uint *)(lVar11 + 0x408);
  if (uVar13 < 0x1f) {
    *(uint *)(lVar11 + 0x408) = uVar13 + 1;
    lVar11 = *(long *)(lVar9 + 0x50);
    uVar13 = *(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)(lVar11 + (ulong)uVar13 * 0x20 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar11 + 0x30);
  uVar12 = (ulong)*(uint *)(lVar9 + 0xc08);
  bVar1 = *(byte *)(param_3 + 0x7d);
  uVar10 = uVar12 << 5 | 8;
  uVar19 = uVar12;
  do {
    uVar18 = uVar19;
    if (0x5f < uVar18) goto LAB_02972520;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar10) + 8);
    if (sVar2 == 0) goto LAB_029724e4;
    uVar10 = uVar10 + 0x20;
    uVar19 = uVar18 + 1;
  } while (sVar2 != 3);
  if ((int)(uVar18 + 1) - 1U < 0x60) {
LAB_029724e4:
    lVar16 = *(long *)(lVar9 + (uVar18 & 0xffffffff) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 3;
      *(uint *)(lVar16 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar16 + 10) = 4;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x20) = lVar16;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar11 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02972520:
  bVar1 = *(byte *)(param_4 + 0x7d);
  uVar10 = uVar12 << 5 | 8;
  lVar16 = 0;
  do {
    lVar17 = lVar16;
    if (0x5f < uVar12 + lVar17) goto LAB_029725a4;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar10) + 8);
    if (sVar2 == 0) goto LAB_0297256c;
    uVar10 = uVar10 + 0x20;
    lVar16 = lVar17 + 1;
  } while (sVar2 != 4);
  if (((int)uVar12 + (int)(lVar17 + 1)) - 1U < 0x60) {
LAB_0297256c:
    lVar16 = *(long *)(lVar9 + (ulong)(uint)((int)uVar12 + (int)lVar17) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 4;
      *(uint *)(lVar16 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar16 + 10) = 4;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(undefined8 *)(lVar16 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x28) = lVar16;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar11 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_029725a4:
  uVar10 = uVar12 << 5 | 8;
  lVar16 = 0;
  do {
    lVar17 = lVar16;
    if (0x5f < uVar12 + lVar17) goto LAB_0297262c;
    sVar2 = *(short *)(*(long *)(lVar9 + uVar10) + 8);
    if (sVar2 == 0) goto LAB_029725ec;
    uVar10 = uVar10 + 0x20;
    lVar16 = lVar17 + 1;
  } while (sVar2 != 0x48);
  if (((int)uVar12 + (int)(lVar17 + 1)) - 1U < 0x60) {
LAB_029725ec:
    lVar16 = *(long *)(lVar9 + (ulong)(uint)((int)uVar12 + (int)lVar17) * 0x20 + 8);
    if (lVar16 != 0) {
      *(undefined2 *)(lVar16 + 8) = 0x48;
      *(undefined8 *)(lVar16 + 0xc) = 0;
      *(undefined8 *)(lVar16 + 0x14) = 0;
      *(undefined4 *)(lVar16 + 0x1c) = 0;
      *(undefined1 *)(lVar16 + 10) = 1;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x248) = lVar16;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar11 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_0297262c:
  plVar14 = (long *)(lVar9 + uVar12 * 0x20 + 8);
  do {
    uVar10 = uVar12;
    if (0x5f < uVar10) goto LAB_0297269c;
    lVar16 = *plVar14;
    if (*(short *)(lVar16 + 8) == 0) goto LAB_02972668;
    plVar14 = plVar14 + 4;
    uVar12 = uVar10 + 1;
  } while (*(short *)(lVar16 + 8) != 0x75);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_02972668:
    lVar9 = *(long *)(lVar9 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x75;
      *(undefined1 *)(lVar9 + 10) = 0;
      *(undefined8 *)(lVar9 + 0xc) = 0;
      *(undefined8 *)(lVar9 + 0x14) = 0;
      *(undefined4 *)(lVar9 + 0x1c) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x3b0) = lVar9;
      lVar11 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0297269c:
  iVar7 = *(int *)(lVar11 + 0x78) + 1;
  *(int *)(lVar11 + 0x78) = iVar7;
  lVar9 = *(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x88) + 0x14c8);
  if (lVar9 != 0) {
    do {
      lVar16 = FUN_02999e6c(lVar11,0x8a,8,1,lVar9);
      if (lVar16 == 0) break;
      if ((*(byte *)(lVar16 + 0x3f) >> 5 & 1) == 0) {
        lVar16 = *(long *)(lVar9 + 0x18);
      }
      lVar9 = lVar16;
    } while (lVar16 != 0);
    iVar7 = *(int *)(lVar11 + 0x78);
  }
  *(int *)(lVar11 + 0x78) = iVar7 + -1;
  if (iVar7 + -1 == 0) {
    for (lVar9 = *(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x88) + 0x14c8); lVar9 != 0;
        lVar9 = *(long *)(lVar9 + 0x18)) {
      *(uint *)(lVar9 + 0x3c) = (uint)*(ushort *)(lVar9 + 0x3e) << 0x10;
    }
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
  if (*(long *)(lVar9 + 0x248) == 0) {
    bVar3 = true;
    lVar9 = *(long *)(lVar9 + 0x3b0);
    if (lVar9 != 0) goto LAB_0297274c;
    bVar4 = false;
  }
  else {
    bVar3 = *(int *)(*(long *)(lVar9 + 0x248) + 0xc) == 0;
    lVar9 = *(long *)(lVar9 + 0x3b0);
    bVar4 = false;
    if (lVar9 != 0) {
LAB_0297274c:
      bVar4 = *(int *)(lVar9 + 0xc) != 0;
    }
  }
  *param_2 = bVar4;
  lVar9 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar9 + 0x50);
  if (*(uint *)(lVar11 + 0x408) == 0) {
    uVar10 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar11 + (ulong)*(uint *)(lVar11 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar11 + 0x408) = *(int *)(lVar11 + 0x408) + -1;
    lVar11 = *(long *)(lVar9 + 0x50);
    uVar10 = (ulong)*(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)(lVar11 + uVar10 * 0x20 + 8);
  lVar9 = *(long *)(lVar9 + 0x30);
  uVar13 = *(uint *)(lVar9 + 0xc08);
  if (uVar13 != 0) {
    if ((uVar13 & 0xffff) < 0x60) {
      uVar10 = (ulong)uVar13 & 0xffff;
      plVar14 = (long *)(lVar9 + uVar10 * 0x20 + 8);
      do {
        uVar10 = uVar10 + 1;
        if (*(short *)(*plVar14 + 8) == 0) break;
        *(undefined2 *)(*plVar14 + 8) = 0;
        plVar14 = plVar14 + 4;
      } while (((uint)uVar10 & 0xffff) != 0x60);
      uVar13 = *(uint *)(lVar9 + 0xc08);
    }
    *(uint *)(lVar9 + 0xc08) = uVar13 - 1;
    *(undefined2 *)(*(long *)(lVar9 + (ulong)(uVar13 - 1) * 0x20 + 8) + 8) = 0;
    uVar10 = (ulong)*(uint *)(lVar9 + 0xc08);
    do {
      if (uVar10 == 0) goto LAB_02972850;
      uVar10 = uVar10 - 1;
      *(int *)(lVar9 + 0xc08) = (int)uVar10;
    } while (*(short *)(*(long *)(lVar9 + (uVar10 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar9 + 0xc08) = (int)uVar10 + 1;
  }
LAB_02972850:
  if (!bVar3) {
    return false;
  }
  if ((*(byte *)(param_3 + 0x188) & 7) == 0) {
    uVar10 = *(ulong *)(param_3 + 400);
    if ((uVar10 & 7) != 0) {
      uVar8 = (uint)uVar10;
      uVar13 = uVar8 & 7;
      if (uVar13 == 4) {
        uVar13 = uVar8 >> 0xe & 0x3f;
      }
      else if (uVar13 == 3) {
        uVar13 = uVar8 >> 8 & 0x3f;
      }
      else if (uVar13 == 2) {
        uVar13 = (uint)(uVar10 >> 0xe);
      }
      else {
        uVar13 = 0;
      }
      if ((uint)*(byte *)(param_4 + 0x7d) == (uVar13 & 0xff)) goto LAB_02972860;
    }
    iVar7 = FUN_02972934(param_1,0x43,param_3,param_4,param_5);
    lVar9 = DAT_043ecde0;
    uVar10 = *(ulong *)(DAT_043ecde0 + 8);
    uVar12 = *(ulong *)(DAT_043ecde0 + 0x10);
    do {
      uVar19 = uVar10 ^ uVar12;
      iVar15 = (int)uVar12;
      uVar12 = uVar19 >> 0x1b | uVar19 << 0x25;
      uVar13 = (int)uVar10 + iVar15 & 0x7f;
      uVar10 = uVar19 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar19 << 0x10;
    } while (99 < uVar13);
    bVar3 = uVar13 < ((uVar5 - uVar6) + iVar7 & 0xff);
    *(ulong *)(DAT_043ecde0 + 8) = uVar10;
    *(ulong *)(lVar9 + 0x10) = uVar12;
  }
  else {
LAB_02972860:
    bVar3 = true;
  }
  return bVar3;
}


