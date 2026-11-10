/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029701e4; name: FUN_029701e4
 */


byte FUN_029701e4(long param_1,long param_2,ulong param_3)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  char cVar11;
  long lVar12;
  char cVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  
  if ((param_3 & 1) == 0) {
    uVar8 = 0;
    goto LAB_029702a8;
  }
  bVar5 = (*(byte *)(param_2 + 0x168) & 7) != 0;
  cVar13 = *(char *)(param_2 + 0x2dc);
  cVar1 = *(char *)(param_2 + 0x2dd);
  bVar6 = cVar1 != '\x12';
  bVar7 = cVar1 == '\x02';
  cVar11 = cVar1;
  if (*(char *)(param_2 + 0x389) < '\0') {
    if (cVar13 != '\x12' && (cVar13 != '\x02' || !bVar5)) {
      if (!bVar6 || bVar5 && bVar7) goto LAB_02970284;
    }
    else {
      cVar13 = cVar1;
      if (!bVar6 || bVar5 && bVar7) {
        cVar13 = '\x12';
LAB_02970284:
        cVar11 = cVar13;
      }
    }
  }
  else if (cVar13 != '\x12' && (cVar13 != '\x02' || !bVar5)) {
    if (!bVar6 || bVar5 && bVar7) goto LAB_02970284;
  }
  else {
    cVar13 = '\0';
    cVar11 = '\0';
    if (bVar6 && (!bVar5 || !bVar7)) {
      cVar13 = cVar1;
      cVar11 = cVar1;
    }
  }
  uVar8 = 1;
  if ((cVar13 != '\x02') && (cVar11 != '\x02')) {
    uVar8 = (uint)(*(char *)(param_2 + 0x2de) == '\x02');
  }
LAB_029702a8:
  lVar12 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(lVar12 + 0x30);
  uVar17 = *(uint *)(lVar14 + 0xc08);
  if (uVar17 < 0x60) {
    do {
      lVar18 = *(long *)(lVar14 + (ulong)uVar17 * 0x20 + 8);
      if (*(short *)(lVar18 + 8) == 0) {
        if (uVar17 < 0x5f) {
          *(undefined2 *)(lVar18 + 8) = 1;
          *(int *)(lVar14 + 0xc08) = *(int *)(lVar14 + 0xc08) + 1;
        }
        break;
      }
      uVar17 = uVar17 + 1;
      *(uint *)(lVar14 + 0xc08) = uVar17;
    } while (uVar17 != 0x60);
  }
  lVar14 = *(long *)(lVar12 + 0x50);
  uVar17 = *(uint *)(lVar14 + 0x408);
  if (uVar17 < 0x1f) {
    *(uint *)(lVar14 + 0x408) = uVar17 + 1;
    lVar14 = *(long *)(lVar12 + 0x50);
    uVar17 = *(uint *)(lVar14 + 0x408);
  }
  *(undefined8 *)(lVar12 + 0x70) = *(undefined8 *)(lVar14 + (ulong)uVar17 * 0x20 + 8);
  lVar14 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(lVar14 + 0x30);
  uVar15 = (ulong)*(uint *)(lVar12 + 0xc08);
  bVar2 = *(byte *)(param_2 + 0x7d);
  uVar10 = uVar15 << 5 | 8;
  uVar4 = uVar15;
  do {
    uVar20 = uVar4;
    if (0x5f < uVar20) goto LAB_029703bc;
    sVar3 = *(short *)(*(long *)(lVar12 + uVar10) + 8);
    if (sVar3 == 0) goto LAB_02970380;
    uVar10 = uVar10 + 0x20;
    uVar4 = uVar20 + 1;
  } while (sVar3 != 2);
  if ((int)(uVar20 + 1) - 1U < 0x60) {
LAB_02970380:
    lVar18 = *(long *)(lVar12 + (uVar20 & 0xffffffff) * 0x20 + 8);
    if (lVar18 != 0) {
      *(undefined2 *)(lVar18 + 8) = 2;
      *(uint *)(lVar18 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar18 + 10) = 4;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      *(long *)(*(long *)(lVar14 + 0x70) + 0x18) = lVar18;
      lVar14 = *(long *)(param_1 + 0x10);
      lVar12 = *(long *)(lVar14 + 0x30);
      uVar15 = (ulong)*(uint *)(lVar12 + 0xc08);
    }
  }
LAB_029703bc:
  uVar10 = uVar15 << 5 | 8;
  lVar18 = 0;
  do {
    lVar19 = lVar18;
    if (0x5f < uVar15 + lVar19) goto LAB_02970440;
    sVar3 = *(short *)(*(long *)(lVar12 + uVar10) + 8);
    if (sVar3 == 0) goto LAB_02970404;
    uVar10 = uVar10 + 0x20;
    lVar18 = lVar19 + 1;
  } while (sVar3 != 0x59);
  if (((int)uVar15 + (int)(lVar19 + 1)) - 1U < 0x60) {
LAB_02970404:
    lVar18 = *(long *)(lVar12 + (ulong)(uint)((int)uVar15 + (int)lVar19) * 0x20 + 8);
    if (lVar18 != 0) {
      *(uint *)(lVar18 + 0xc) = uVar8;
      *(undefined2 *)(lVar18 + 8) = 0x59;
      *(undefined1 *)(lVar18 + 10) = 1;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      *(undefined8 *)(lVar18 + 0x18) = 0;
      *(long *)(*(long *)(lVar14 + 0x70) + 0x2d0) = lVar18;
      lVar14 = *(long *)(param_1 + 0x10);
      lVar12 = *(long *)(lVar14 + 0x30);
      uVar15 = (ulong)*(uint *)(lVar12 + 0xc08);
    }
  }
LAB_02970440:
  plVar16 = (long *)(lVar12 + uVar15 * 0x20 + 8);
  do {
    uVar10 = uVar15;
    if (0x5f < uVar10) goto LAB_029704b4;
    lVar18 = *plVar16;
    if (*(short *)(lVar18 + 8) == 0) goto LAB_0297047c;
    plVar16 = plVar16 + 4;
    uVar15 = uVar10 + 1;
  } while (*(short *)(lVar18 + 8) != 0x48);
  if ((int)(uVar10 + 1) - 1U < 0x60) {
LAB_0297047c:
    lVar12 = *(long *)(lVar12 + (uVar10 & 0xffffffff) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x48;
      *(undefined8 *)(lVar12 + 0xc) = 0;
      *(undefined8 *)(lVar12 + 0x14) = 0;
      *(undefined4 *)(lVar12 + 0x1c) = 0;
      *(undefined1 *)(lVar12 + 10) = 1;
      *(long *)(*(long *)(lVar14 + 0x70) + 0x248) = lVar12;
      lVar14 = *(long *)(param_1 + 0x10);
    }
  }
LAB_029704b4:
  iVar9 = *(int *)(lVar14 + 0x78) + 1;
  *(int *)(lVar14 + 0x78) = iVar9;
  lVar12 = *(long *)(*(long *)(*(long *)(lVar14 + 8) + 0x88) + 0x14c8);
  if (lVar12 != 0) {
    do {
      lVar18 = FUN_02999e6c(lVar14,0x12,8,1,lVar12);
      if (lVar18 == 0) break;
      if ((*(byte *)(lVar18 + 0x3f) >> 5 & 1) == 0) {
        lVar18 = *(long *)(lVar12 + 0x18);
      }
      lVar12 = lVar18;
    } while (lVar18 != 0);
    iVar9 = *(int *)(lVar14 + 0x78);
  }
  *(int *)(lVar14 + 0x78) = iVar9 + -1;
  if (iVar9 + -1 == 0) {
    for (lVar12 = *(long *)(*(long *)(*(long *)(lVar14 + 8) + 0x88) + 0x14c8); lVar12 != 0;
        lVar12 = *(long *)(lVar12 + 0x18)) {
      *(uint *)(lVar12 + 0x3c) = (uint)*(ushort *)(lVar12 + 0x3e) << 0x10;
    }
  }
  if (((((*(byte *)(param_2 + 0x148) & 7) != 0) &&
       (lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x248), lVar12 != 0)) &&
      (*(byte *)(lVar12 + 10) < 2)) &&
     (*(undefined4 *)(lVar12 + 0xc) = 1, *(byte *)(lVar12 + 10) == 1)) {
    *(undefined1 *)(lVar12 + 10) = 2;
  }
  if ((((*(byte *)(param_2 + 0x1a0) & 7) != 0) &&
      (lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x248), lVar12 != 0)) &&
     ((*(byte *)(lVar12 + 10) < 2 &&
      (*(undefined4 *)(lVar12 + 0xc) = 1, *(byte *)(lVar12 + 10) == 1)))) {
    *(undefined1 *)(lVar12 + 10) = 2;
  }
  if ((((*(byte *)(param_2 + 0x1a8) & 7) != 0) || ((*(byte *)(param_2 + 0x198) & 7) != 0)) &&
     ((lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x2d0), lVar12 != 0 &&
      ((*(byte *)(lVar12 + 10) < 2 &&
       (*(undefined4 *)(lVar12 + 0xc) = 1, *(byte *)(lVar12 + 10) == 1)))))) {
    *(undefined1 *)(lVar12 + 10) = 2;
  }
  lVar14 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(lVar14 + 0x70);
  if (*(long *)(lVar12 + 0x2d0) == 0) {
    iVar9 = 0;
    lVar12 = *(long *)(lVar12 + 0x248);
  }
  else {
    iVar9 = *(int *)(*(long *)(lVar12 + 0x2d0) + 0xc);
    lVar12 = *(long *)(lVar12 + 0x248);
  }
  if (lVar12 == 0) {
    bVar5 = true;
  }
  else {
    bVar5 = *(int *)(lVar12 + 0xc) == 0;
  }
  lVar12 = *(long *)(lVar14 + 0x50);
  if (*(uint *)(lVar12 + 0x408) == 0) {
    uVar10 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar12 + (ulong)*(uint *)(lVar12 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar12 + 0x408) = *(int *)(lVar12 + 0x408) + -1;
    lVar12 = *(long *)(lVar14 + 0x50);
    uVar10 = (ulong)*(uint *)(lVar12 + 0x408);
  }
  *(undefined8 *)(lVar14 + 0x70) = *(undefined8 *)(lVar12 + uVar10 * 0x20 + 8);
  lVar12 = *(long *)(lVar14 + 0x30);
  uVar8 = *(uint *)(lVar12 + 0xc08);
  if (uVar8 != 0) {
    if ((uVar8 & 0xffff) < 0x60) {
      uVar10 = (ulong)uVar8 & 0xffff;
      plVar16 = (long *)(lVar12 + uVar10 * 0x20 + 8);
      do {
        uVar10 = uVar10 + 1;
        if (*(short *)(*plVar16 + 8) == 0) break;
        *(undefined2 *)(*plVar16 + 8) = 0;
        plVar16 = plVar16 + 4;
      } while (((uint)uVar10 & 0xffff) != 0x60);
      uVar8 = *(uint *)(lVar12 + 0xc08);
    }
    *(uint *)(lVar12 + 0xc08) = uVar8 - 1;
    *(undefined2 *)(*(long *)(lVar12 + (ulong)(uVar8 - 1) * 0x20 + 8) + 8) = 0;
    uVar10 = (ulong)*(uint *)(lVar12 + 0xc08);
    do {
      if (uVar10 == 0) goto LAB_0297071c;
      uVar10 = uVar10 - 1;
      *(int *)(lVar12 + 0xc08) = (int)uVar10;
    } while (*(short *)(*(long *)(lVar12 + (uVar10 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar12 + 0xc08) = (int)uVar10 + 1;
  }
LAB_0297071c:
  return iVar9 != 0 & bVar5;
}


