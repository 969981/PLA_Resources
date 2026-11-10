/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0296f398; name: FUN_0296f398
 */


uint FUN_0296f398(long param_1,long param_2,long param_3,byte param_4,byte param_5,uint param_6)

{
  byte bVar1;
  short sVar2;
  ulong uVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  
  uVar5 = 0x50;
  if ((param_6 & 1) != 0) {
    uVar5 = 0x51;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar8 + 0x30);
  uVar7 = *(uint *)(lVar11 + 0xc08);
  if (uVar7 < 0x60) {
    do {
      lVar15 = *(long *)(lVar11 + (ulong)uVar7 * 0x20 + 8);
      if (*(short *)(lVar15 + 8) == 0) {
        if (uVar7 < 0x5f) {
          *(undefined2 *)(lVar15 + 8) = 1;
          *(int *)(lVar11 + 0xc08) = *(int *)(lVar11 + 0xc08) + 1;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      *(uint *)(lVar11 + 0xc08) = uVar7;
    } while (uVar7 != 0x60);
  }
  lVar11 = *(long *)(lVar8 + 0x50);
  uVar7 = *(uint *)(lVar11 + 0x408);
  if (uVar7 < 0x1f) {
    *(uint *)(lVar11 + 0x408) = uVar7 + 1;
    lVar11 = *(long *)(lVar8 + 0x50);
    uVar7 = *(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(lVar11 + (ulong)uVar7 * 0x20 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar8 + 0x30);
  uVar13 = (ulong)*(uint *)(lVar11 + 0xc08);
  bVar1 = *(byte *)(param_2 + 0x7d);
  uVar9 = uVar13 << 5 | 8;
  uVar3 = uVar13;
  do {
    uVar17 = uVar3;
    if (0x5f < uVar17) goto LAB_0296f4dc;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar9) + 8);
    if (sVar2 == 0) goto LAB_0296f4a0;
    uVar9 = uVar9 + 0x20;
    uVar3 = uVar17 + 1;
  } while (sVar2 != 3);
  if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_0296f4a0:
    lVar15 = *(long *)(lVar11 + (uVar17 & 0xffffffff) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 3;
      *(uint *)(lVar15 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x20) = lVar15;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar8 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0296f4dc:
  bVar1 = *(byte *)(param_3 + 0x7d);
  uVar9 = uVar13 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar13 + lVar16) goto LAB_0296f560;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar9) + 8);
    if (sVar2 == 0) goto LAB_0296f528;
    uVar9 = uVar9 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar2 != 4);
  if (((int)uVar13 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_0296f528:
    lVar15 = *(long *)(lVar11 + (ulong)(uint)((int)uVar13 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 4;
      *(uint *)(lVar15 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x28) = lVar15;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar8 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0296f560:
  uVar9 = uVar13 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar13 + lVar16) goto LAB_0296f5e8;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar9) + 8);
    if (sVar2 == 0) goto LAB_0296f5ac;
    uVar9 = uVar9 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar2 != 0x15);
  if (((int)uVar13 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_0296f5ac:
    lVar15 = *(long *)(lVar11 + (ulong)(uint)((int)uVar13 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x15;
      *(uint *)(lVar15 + 0xc) = (uint)param_5;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0xb0) = lVar15;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar8 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0296f5e8:
  uVar9 = uVar13 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar13 + lVar16) goto LAB_0296f670;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar9) + 8);
    if (sVar2 == 0) goto LAB_0296f634;
    uVar9 = uVar9 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar2 != 0x16);
  if (((int)uVar13 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_0296f634:
    lVar15 = *(long *)(lVar11 + (ulong)(uint)((int)uVar13 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x16;
      *(uint *)(lVar15 + 0xc) = (uint)param_4;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x70) + 0xb8) = lVar15;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar8 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0296f670:
  uVar9 = uVar13 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar13 + lVar16) goto LAB_0296f6f8;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar9) + 8);
    if (sVar2 == 0) goto LAB_0296f6b8;
    uVar9 = uVar9 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar2 != 0x52);
  if (((int)uVar13 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_0296f6b8:
    lVar15 = *(long *)(lVar11 + (ulong)(uint)((int)uVar13 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x52;
      *(undefined8 *)(lVar15 + 0xc) = 0;
      *(undefined8 *)(lVar15 + 0x14) = 0;
      *(undefined4 *)(lVar15 + 0x1c) = 0;
      *(undefined1 *)(lVar15 + 10) = 1;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x298) = lVar15;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar8 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0296f6f8:
  uVar9 = uVar13 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar13 + lVar16) goto LAB_0296f780;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar9) + 8);
    if (sVar2 == 0) goto LAB_0296f740;
    uVar9 = uVar9 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar2 != 0x53);
  if (((int)uVar13 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_0296f740:
    lVar15 = *(long *)(lVar11 + (ulong)(uint)((int)uVar13 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x53;
      *(undefined8 *)(lVar15 + 0xc) = 0;
      *(undefined8 *)(lVar15 + 0x14) = 0;
      *(undefined4 *)(lVar15 + 0x1c) = 0;
      *(undefined1 *)(lVar15 + 10) = 1;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x2a0) = lVar15;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar8 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0296f780:
  uVar9 = uVar13 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar13 + lVar16) goto LAB_0296f808;
    sVar2 = *(short *)(*(long *)(lVar11 + uVar9) + 8);
    if (sVar2 == 0) goto LAB_0296f7c8;
    uVar9 = uVar9 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar2 != 0x3d);
  if (((int)uVar13 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_0296f7c8:
    lVar15 = *(long *)(lVar11 + (ulong)(uint)((int)uVar13 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x3d;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(undefined4 *)(lVar15 + 0xc) = 0xe;
      *(undefined1 *)(lVar15 + 10) = 1;
      *(long *)(*(long *)(lVar8 + 0x70) + 0x1f0) = lVar15;
      lVar8 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar8 + 0x30);
      uVar13 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_0296f808:
  plVar14 = (long *)(lVar11 + uVar13 * 0x20 + 8);
  do {
    uVar9 = uVar13;
    if (0x5f < uVar9) goto LAB_0296f878;
    lVar15 = *plVar14;
    if (*(short *)(lVar15 + 8) == 0) goto LAB_0296f844;
    plVar14 = plVar14 + 4;
    uVar13 = uVar9 + 1;
  } while (*(short *)(lVar15 + 8) != 0x17);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_0296f844:
    lVar11 = *(long *)(lVar11 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x17;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(undefined4 *)(lVar11 + 0xc) = 0x12;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(long *)(*(long *)(lVar8 + 0x70) + 0xc0) = lVar11;
    }
  }
LAB_0296f878:
  uVar9 = *(ulong *)(param_3 + 0x128);
  if ((uVar9 & 7) != 0) {
    iVar6 = ((uint)uVar9 & 7) - 1;
    switch(iVar6) {
    case 0:
    case 1:
    case 2:
      uVar7 = (uint)(uVar9 >> 0xe);
      break;
    case 3:
      uVar7 = (uint)(uVar9 >> 0x14);
      break;
    default:
      uVar7 = 0;
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
    uVar10 = 0;
    if (*(long *)(lVar8 + 0xb0) != 0) {
      uVar10 = *(uint *)(*(long *)(lVar8 + 0xb0) + 0xc);
    }
    if (((uVar10 ^ uVar7) & 0xff) != 0) goto LAB_0296f8e0;
    switch(iVar6) {
    case 0:
    case 1:
    case 2:
      if (((uint)uVar9 >> 0x1e & 1) == 0) break;
LAB_0296fc14:
      lVar8 = *(long *)(lVar8 + 0x2a0);
      if (lVar8 == 0) goto LAB_0296f8e0;
      goto LAB_0296fc1c;
    case 3:
      if ((uVar9 >> 0x24 & 1) != 0) goto LAB_0296fc14;
    }
    lVar8 = *(long *)(lVar8 + 0x298);
    if (lVar8 != 0) {
LAB_0296fc1c:
      if ((*(byte *)(lVar8 + 10) < 2) &&
         (*(undefined4 *)(lVar8 + 0xc) = 1, *(byte *)(lVar8 + 10) == 1)) {
        *(undefined1 *)(lVar8 + 10) = 2;
      }
    }
  }
LAB_0296f8e0:
  if ((*(byte *)(param_3 + 0x148) & 7) != 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
    lVar11 = *(long *)(lVar8 + 0xb8);
    if ((((lVar11 != 0) && (*(int *)(lVar11 + 0xc) == 4)) &&
        (lVar8 = *(long *)(lVar8 + 0x298), lVar8 != 0)) &&
       ((*(byte *)(lVar8 + 10) < 2 && (*(undefined4 *)(lVar8 + 0xc) = 1, *(byte *)(lVar8 + 10) == 1)
        ))) {
      *(undefined1 *)(lVar8 + 10) = 2;
    }
  }
  if ((*(byte *)(param_3 + 0x1a0) & 7) != 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x70);
    lVar11 = *(long *)(lVar8 + 0xb8);
    if (((lVar11 != 0) && (*(int *)(lVar11 + 0xc) == 4)) &&
       ((lVar8 = *(long *)(lVar8 + 0x298), lVar8 != 0 &&
        ((*(byte *)(lVar8 + 10) < 2 &&
         (*(undefined4 *)(lVar8 + 0xc) = 1, *(byte *)(lVar8 + 10) == 1)))))) {
      *(undefined1 *)(lVar8 + 10) = 2;
    }
  }
  lVar11 = *(long *)(param_1 + 0x10);
  iVar6 = *(int *)(lVar11 + 0x78) + 1;
  *(int *)(lVar11 + 0x78) = iVar6;
  lVar8 = *(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x88) + 0x14c8);
  if (lVar8 != 0) {
    do {
      lVar15 = FUN_02999e6c(lVar11,uVar5,8,1,lVar8);
      if (lVar15 == 0) break;
      if ((*(byte *)(lVar15 + 0x3f) >> 5 & 1) == 0) {
        lVar15 = *(long *)(lVar8 + 0x18);
      }
      lVar8 = lVar15;
    } while (lVar15 != 0);
    iVar6 = *(int *)(lVar11 + 0x78);
  }
  *(int *)(lVar11 + 0x78) = iVar6 + -1;
  if (iVar6 + -1 == 0) {
    for (lVar8 = *(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x88) + 0x14c8); lVar8 != 0;
        lVar8 = *(long *)(lVar8 + 0x18)) {
      *(uint *)(lVar8 + 0x3c) = (uint)*(ushort *)(lVar8 + 0x3e) << 0x10;
    }
  }
  lVar11 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar11 + 0x70);
  if (*(long *)(lVar8 + 0x298) == 0) {
    iVar6 = 0;
    lVar15 = *(long *)(lVar8 + 0x2a0);
    if (lVar15 == 0) goto LAB_0296fa54;
LAB_0296fa28:
    iVar18 = *(int *)(lVar15 + 0xc);
    lVar15 = *(long *)(lVar8 + 0xc0);
    if (lVar15 != 0) goto LAB_0296fa34;
LAB_0296fa60:
    uVar9 = 0;
    lVar8 = *(long *)(lVar8 + 0x1f0);
    if (lVar8 == 0) goto LAB_0296fa6c;
LAB_0296fa40:
    uVar7 = *(uint *)(lVar8 + 0xc);
  }
  else {
    iVar6 = *(int *)(*(long *)(lVar8 + 0x298) + 0xc);
    lVar15 = *(long *)(lVar8 + 0x2a0);
    if (lVar15 != 0) goto LAB_0296fa28;
LAB_0296fa54:
    iVar18 = 0;
    lVar15 = *(long *)(lVar8 + 0xc0);
    if (lVar15 == 0) goto LAB_0296fa60;
LAB_0296fa34:
    uVar9 = (ulong)*(byte *)(lVar15 + 0xc);
    lVar8 = *(long *)(lVar8 + 0x1f0);
    if (lVar8 != 0) goto LAB_0296fa40;
LAB_0296fa6c:
    uVar7 = 0;
  }
  lVar8 = *(long *)(lVar11 + 0x50);
  if (*(uint *)(lVar8 + 0x408) == 0) {
    uVar13 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar8 + (ulong)*(uint *)(lVar8 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar8 + 0x408) = *(int *)(lVar8 + 0x408) + -1;
    lVar8 = *(long *)(lVar11 + 0x50);
    uVar13 = (ulong)*(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)(lVar8 + uVar13 * 0x20 + 8);
  lVar8 = *(long *)(lVar11 + 0x30);
  uVar10 = *(uint *)(lVar8 + 0xc08);
  if (uVar10 != 0) {
    if ((uVar10 & 0xffff) < 0x60) {
      uVar13 = (ulong)uVar10 & 0xffff;
      plVar14 = (long *)(lVar8 + uVar13 * 0x20 + 8);
      do {
        uVar13 = uVar13 + 1;
        if (*(short *)(*plVar14 + 8) == 0) break;
        *(undefined2 *)(*plVar14 + 8) = 0;
        plVar14 = plVar14 + 4;
      } while (((uint)uVar13 & 0xffff) != 0x60);
      uVar10 = *(uint *)(lVar8 + 0xc08);
    }
    *(uint *)(lVar8 + 0xc08) = uVar10 - 1;
    *(undefined2 *)(*(long *)(lVar8 + (ulong)(uVar10 - 1) * 0x20 + 8) + 8) = 0;
    uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    do {
      if (uVar13 == 0) goto LAB_0296fb50;
      uVar13 = uVar13 - 1;
      *(int *)(lVar8 + 0xc08) = (int)uVar13;
    } while (*(short *)(*(long *)(lVar8 + (uVar13 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar8 + 0xc08) = (int)uVar13 + 1;
  }
LAB_0296fb50:
  if (iVar18 != 0) {
    return 7;
  }
  if (((uVar7 != 0xe) || (uVar7 = 7, param_4 == 0x12)) || (param_5 == 0x12))
  goto switchD_0296fbc4_caseD_4;
  uVar7 = 7;
  switch((&DAT_03a84908)[(ulong)param_5 + (ulong)param_4 * 0x12]) {
  case 0:
    uVar7 = (uint)(DAT_043ecde8 != '\0') << 3;
    break;
  default:
    uVar7 = 0;
    break;
  case 2:
    uVar7 = 8;
    if (DAT_043ecde8 == '\0') {
      uVar7 = 6;
    }
    break;
  case 8:
    uVar7 = 6;
    if (DAT_043ecde8 == '\0') {
      uVar7 = 8;
    }
  case 4:
switchD_0296fbc4_caseD_4:
  }
  if ((int)uVar9 == 0x12) goto LAB_0296fd7c;
  uVar10 = 7;
  if ((param_5 == 0x12) || ((int)uVar9 == 0x12)) goto switchD_0296fcd8_caseD_4;
  uVar10 = 7;
  switch((&DAT_03a84908)[(ulong)param_5 + uVar9 * 0x12]) {
  case 0:
    uVar10 = (uint)(DAT_043ecde8 != '\0') << 3;
    break;
  default:
    uVar10 = 0;
    break;
  case 2:
    uVar12 = 6;
    uVar10 = 8;
    goto LAB_0296fd10;
  case 4:
    break;
  case 8:
    uVar12 = 8;
    uVar10 = 6;
LAB_0296fd10:
    if (DAT_043ecde8 == '\0') {
      uVar10 = uVar12;
    }
  }
switchD_0296fcd8_caseD_4:
  uVar12 = (uint)((&DAT_03a84a4c)[uVar10] * (&DAT_03a84a4c)[(int)uVar7]) >> 6;
  if (0xfff < uVar12) {
    uVar12 = 0x1000;
  }
  bVar4 = uVar7 != 0;
  uVar7 = 0;
  if ((uVar12 == 0 && bVar4) && uVar10 != 0) {
    uVar12 = 1;
  }
  do {
    if (uVar7 == 0x20) {
      uVar7 = 0;
      goto LAB_0296fd7c;
    }
    uVar10 = uVar7 & 0x1f;
    uVar7 = uVar7 + 1;
  } while ((1 << (ulong)uVar10 & uVar12) == 0);
  if (0xc < uVar7) {
    uVar7 = 0xd;
  }
LAB_0296fd7c:
  if (uVar7 == 0 && iVar6 != 0) {
    uVar7 = 7;
  }
  return uVar7;
}


