/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029922cc; name: FUN_029922cc
 */


int FUN_029922cc(long param_1,ulong param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  
  lVar14 = (&DAT_0428af30)[(param_2 & 0xffffffff) * 6];
  if (lVar14 == 0) {
    plVar8 = &DAT_0428af30;
  }
  else {
    plVar8 = &DAT_0428af30;
    if (*(char *)(lVar14 + 0x1e1) != '\0') {
      plVar8 = &DAT_0428af30 + (param_2 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar8 + 0x250) + (ulong)**(uint **)(*plVar8 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x27) ||
     (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x13], uVar10 == 0)) {
    uVar18 = 0;
  }
  else {
    uVar18 = (uint)*(byte *)((long)piVar1 + uVar10);
  }
  lVar14 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar14 + 0x30);
  uVar13 = *(uint *)(lVar11 + 0xc08);
  if (uVar13 < 0x60) {
    do {
      lVar15 = *(long *)(lVar11 + (ulong)uVar13 * 0x20 + 8);
      if (*(short *)(lVar15 + 8) == 0) {
        if (uVar13 < 0x5f) {
          *(undefined2 *)(lVar15 + 8) = 1;
          *(int *)(lVar11 + 0xc08) = *(int *)(lVar11 + 0xc08) + 1;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      *(uint *)(lVar11 + 0xc08) = uVar13;
    } while (uVar13 != 0x60);
  }
  lVar11 = *(long *)(lVar14 + 0x50);
  uVar13 = *(uint *)(lVar11 + 0x408);
  if (uVar13 < 0x1f) {
    *(uint *)(lVar11 + 0x408) = uVar13 + 1;
    lVar11 = *(long *)(lVar14 + 0x50);
    uVar13 = *(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar14 + 0x70) = *(undefined8 *)(lVar11 + (ulong)uVar13 * 0x20 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(lVar11 + 0x30);
  uVar12 = (ulong)*(uint *)(lVar14 + 0xc08);
  bVar3 = *(byte *)(param_3 + 0x7d);
  uVar10 = uVar12 << 5 | 8;
  uVar5 = uVar12;
  do {
    uVar17 = uVar5;
    if (0x5f < uVar17) goto LAB_0299245c;
    sVar4 = *(short *)(*(long *)(lVar14 + uVar10) + 8);
    if (sVar4 == 0) goto LAB_02992420;
    uVar10 = uVar10 + 0x20;
    uVar5 = uVar17 + 1;
  } while (sVar4 != 3);
  if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_02992420:
    lVar15 = *(long *)(lVar14 + (uVar17 & 0xffffffff) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 3;
      *(uint *)(lVar15 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x20) = lVar15;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar11 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_0299245c:
  uVar10 = uVar12 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar12 + lVar16) goto LAB_029924e0;
    sVar4 = *(short *)(*(long *)(lVar14 + uVar10) + 8);
    if (sVar4 == 0) goto LAB_029924a4;
    uVar10 = uVar10 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar4 != 0x28);
  if (((int)uVar12 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_029924a4:
    lVar15 = *(long *)(lVar14 + (ulong)(uint)((int)uVar12 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x28;
      *(uint *)(lVar15 + 0xc) = uVar18;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x148) = lVar15;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar11 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_029924e0:
  uVar10 = uVar12 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar12 + lVar16) goto LAB_02992568;
    sVar4 = *(short *)(*(long *)(lVar14 + uVar10) + 8);
    if (sVar4 == 0) goto LAB_02992528;
    uVar10 = uVar10 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar4 != 0x4c);
  if (((int)uVar12 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_02992528:
    lVar15 = *(long *)(lVar14 + (ulong)(uint)((int)uVar12 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x4c;
      *(undefined8 *)(lVar15 + 0xc) = 0;
      *(undefined8 *)(lVar15 + 0x14) = 0;
      *(undefined4 *)(lVar15 + 0x1c) = 0;
      *(undefined1 *)(lVar15 + 10) = 1;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x268) = lVar15;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar11 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_02992568:
  uVar10 = uVar12 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar12 + lVar16) goto LAB_029925f0;
    sVar4 = *(short *)(*(long *)(lVar14 + uVar10) + 8);
    if (sVar4 == 0) goto LAB_029925b0;
    uVar10 = uVar10 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar4 != 0x48);
  if (((int)uVar12 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_029925b0:
    lVar15 = *(long *)(lVar14 + (ulong)(uint)((int)uVar12 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x48;
      *(undefined8 *)(lVar15 + 0xc) = 0;
      *(undefined8 *)(lVar15 + 0x14) = 0;
      *(undefined4 *)(lVar15 + 0x1c) = 0;
      *(undefined1 *)(lVar15 + 10) = 1;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x248) = lVar15;
      lVar11 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(lVar11 + 0x30);
      uVar12 = (ulong)*(uint *)(lVar14 + 0xc08);
    }
  }
LAB_029925f0:
  plVar8 = (long *)(lVar14 + uVar12 * 0x20 + 8);
  do {
    uVar10 = uVar12;
    if (0x5f < uVar10) goto LAB_02992660;
    lVar15 = *plVar8;
    if (*(short *)(lVar15 + 8) == 0) goto LAB_0299262c;
    plVar8 = plVar8 + 4;
    uVar12 = uVar10 + 1;
  } while (*(short *)(lVar15 + 8) != 0x29);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_0299262c:
    lVar14 = *(long *)(lVar14 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar14 != 0) {
      *(undefined2 *)(lVar14 + 8) = 0x29;
      *(undefined1 *)(lVar14 + 10) = 0;
      *(undefined8 *)(lVar14 + 0xc) = 0;
      *(undefined8 *)(lVar14 + 0x14) = 0;
      *(undefined4 *)(lVar14 + 0x1c) = 0;
      *(long *)(*(long *)(lVar11 + 0x70) + 0x150) = lVar14;
      lVar11 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02992660:
  iVar7 = *(int *)(lVar11 + 0x78) + 1;
  *(int *)(lVar11 + 0x78) = iVar7;
  lVar14 = *(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x88) + 0x14c8);
  if (lVar14 != 0) {
    do {
      lVar15 = FUN_02999e6c(lVar11,0x86,8,1,lVar14);
      if (lVar15 == 0) break;
      if ((*(byte *)(lVar15 + 0x3f) >> 5 & 1) == 0) {
        lVar15 = *(long *)(lVar14 + 0x18);
      }
      lVar14 = lVar15;
    } while (lVar15 != 0);
    iVar7 = *(int *)(lVar11 + 0x78);
  }
  *(int *)(lVar11 + 0x78) = iVar7 + -1;
  if (iVar7 + -1 == 0) {
    for (lVar14 = *(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x88) + 0x14c8); lVar14 != 0;
        lVar14 = *(long *)(lVar14 + 0x18)) {
      *(uint *)(lVar14 + 0x3c) = (uint)*(ushort *)(lVar14 + 0x3e) << 0x10;
    }
  }
  lVar11 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(lVar11 + 0x70);
  if (*(long *)(lVar14 + 0x248) == 0) {
    bVar6 = false;
    lVar15 = *(long *)(lVar14 + 0x268);
  }
  else {
    bVar6 = *(int *)(*(long *)(lVar14 + 0x248) + 0xc) != 0;
    lVar15 = *(long *)(lVar14 + 0x268);
  }
  if (lVar15 == 0) {
    iVar7 = 0;
    lVar14 = *(long *)(lVar14 + 0x150);
  }
  else {
    iVar7 = *(int *)(lVar15 + 0xc);
    lVar14 = *(long *)(lVar14 + 0x150);
  }
  if (lVar14 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(uint *)(lVar14 + 0xc);
  }
  lVar14 = *(long *)(lVar11 + 0x50);
  if (*(uint *)(lVar14 + 0x408) == 0) {
    uVar10 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar14 + (ulong)*(uint *)(lVar14 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar14 + 0x408) = *(int *)(lVar14 + 0x408) + -1;
    lVar14 = *(long *)(lVar11 + 0x50);
    uVar10 = (ulong)*(uint *)(lVar14 + 0x408);
  }
  *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)(lVar14 + uVar10 * 0x20 + 8);
  lVar14 = *(long *)(lVar11 + 0x30);
  uVar9 = *(uint *)(lVar14 + 0xc08);
  if (uVar9 != 0) {
    if ((uVar9 & 0xffff) < 0x60) {
      uVar10 = (ulong)uVar9 & 0xffff;
      plVar8 = (long *)(lVar14 + uVar10 * 0x20 + 8);
      do {
        uVar10 = uVar10 + 1;
        if (*(short *)(*plVar8 + 8) == 0) break;
        *(undefined2 *)(*plVar8 + 8) = 0;
        plVar8 = plVar8 + 4;
      } while (((uint)uVar10 & 0xffff) != 0x60);
      uVar9 = *(uint *)(lVar14 + 0xc08);
    }
    *(uint *)(lVar14 + 0xc08) = uVar9 - 1;
    *(undefined2 *)(*(long *)(lVar14 + (ulong)(uVar9 - 1) * 0x20 + 8) + 8) = 0;
    uVar10 = (ulong)*(uint *)(lVar14 + 0xc08);
    do {
      if (uVar10 == 0) goto LAB_02992820;
      uVar10 = uVar10 - 1;
      *(int *)(lVar14 + 0xc08) = (int)uVar10;
    } while (*(short *)(*(long *)(lVar14 + (uVar10 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar14 + 0xc08) = (int)uVar10 + 1;
  }
LAB_02992820:
  if (uVar18 != 0) {
    uVar13 = uVar18;
  }
  iVar2 = 0;
  if (!(bool)(uVar18 != 0 & bVar6)) {
    iVar2 = uVar13 << (iVar7 != 0);
  }
  return iVar2;
}


