/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02970b08; name: FUN_02970b08
 */


uint FUN_02970b08(long param_1,long param_2,uint param_3,int param_4,int param_5,undefined1 *param_6
                 )

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  ulong uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  char cVar20;
  char cVar21;
  long *plVar22;
  int iVar23;
  
  bVar2 = *(byte *)(param_2 + 0x7d);
  plVar22 = &DAT_0428af30 + (ulong)param_3 * 6;
  lVar11 = *plVar22;
  plVar12 = &DAT_0428af30;
  if (param_4 == 1) {
    if ((lVar11 != 0) && (plVar12 = &DAT_0428af30, *(char *)(lVar11 + 0x1e1) != '\0')) {
      plVar12 = plVar22;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar12 + 0x250) + (ulong)**(uint **)(*plVar12 + 0x250));
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb3) ||
       (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x59], uVar13 == 0))
    goto LAB_02970bf8;
    uVar7 = *(uint *)((long)piVar1 + uVar13);
    uVar10 = -uVar7;
    if (-1 < (int)uVar7) {
      uVar10 = uVar7;
    }
LAB_02970ba8:
    *param_6 = 0;
    if ((uVar10 & 0xff) == 0) goto LAB_02970bfc;
    iVar8 = 1;
  }
  else {
    if ((lVar11 != 0) && (plVar12 = &DAT_0428af30, *(char *)(lVar11 + 0x1e1) != '\0')) {
      plVar12 = plVar22;
    }
    piVar1 = (int *)((long)*(uint **)(*plVar12 + 0x250) + (ulong)**(uint **)(*plVar12 + 0x250));
    if ((0x2a < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x15], uVar13 != 0)) {
      uVar10 = (uint)*(char *)((long)piVar1 + uVar13);
      uVar10 = -uVar10 & uVar10 >> 7 & 0xff;
      goto LAB_02970ba8;
    }
LAB_02970bf8:
    *param_6 = 0;
LAB_02970bfc:
    uVar7 = FUN_029986dc(param_3,param_4);
    bVar6 = (uVar7 & 0xff) != 0;
    uVar10 = 0;
    if (bVar6) {
      uVar10 = uVar7;
    }
    iVar8 = (uint)bVar6 << 1;
  }
  plVar12 = &DAT_0428af30;
  if ((*plVar22 != 0) && (plVar12 = &DAT_0428af30, *(char *)(*plVar22 + 0x1e1) != '\0')) {
    plVar12 = plVar22;
  }
  piVar1 = (int *)((long)*(uint **)(*plVar12 + 0x250) + (ulong)**(uint **)(*plVar12 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
     (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar13 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (uint)*(byte *)((long)piVar1 + uVar13);
  }
  lVar11 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(lVar11 + 0x30);
  uVar16 = *(uint *)(lVar14 + 0xc08);
  if (uVar16 < 0x60) {
    do {
      lVar17 = *(long *)(lVar14 + (ulong)uVar16 * 0x20 + 8);
      if (*(short *)(lVar17 + 8) == 0) {
        if (uVar16 < 0x5f) {
          *(undefined2 *)(lVar17 + 8) = 1;
          *(int *)(lVar14 + 0xc08) = *(int *)(lVar14 + 0xc08) + 1;
        }
        break;
      }
      uVar16 = uVar16 + 1;
      *(uint *)(lVar14 + 0xc08) = uVar16;
    } while (uVar16 != 0x60);
  }
  lVar14 = *(long *)(lVar11 + 0x50);
  uVar16 = *(uint *)(lVar14 + 0x408);
  if (uVar16 < 0x1f) {
    *(uint *)(lVar14 + 0x408) = uVar16 + 1;
    lVar14 = *(long *)(lVar11 + 0x50);
    uVar16 = *(uint *)(lVar14 + 0x408);
  }
  *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)(lVar14 + (ulong)uVar16 * 0x20 + 8);
  lVar14 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar14 + 0x30);
  uVar15 = (ulong)*(uint *)(lVar11 + 0xc08);
  bVar3 = *(byte *)(param_2 + 0x7d);
  uVar13 = uVar15 << 5 | 8;
  uVar5 = uVar15;
  do {
    uVar18 = uVar5;
    if (0x5f < uVar18) goto LAB_02970d80;
    sVar4 = *(short *)(*(long *)(lVar11 + uVar13) + 8);
    if (sVar4 == 0) goto LAB_02970d44;
    uVar13 = uVar13 + 0x20;
    uVar5 = uVar18 + 1;
  } while (sVar4 != 2);
  if ((int)(uVar18 + 1) - 1U < 0x60) {
LAB_02970d44:
    lVar17 = *(long *)(lVar11 + (uVar18 & 0xffffffff) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 2;
      *(uint *)(lVar17 + 0xc) = (uint)bVar3;
      *(undefined1 *)(lVar17 + 10) = 4;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar14 + 0x70) + 0x18) = lVar17;
      lVar14 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar14 + 0x30);
      uVar15 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_02970d80:
  uVar13 = uVar15 << 5 | 8;
  lVar17 = 0;
  do {
    lVar19 = lVar17;
    if (0x5f < uVar15 + lVar19) goto LAB_02970e04;
    sVar4 = *(short *)(*(long *)(lVar11 + uVar13) + 8);
    if (sVar4 == 0) goto LAB_02970dc8;
    uVar13 = uVar13 + 0x20;
    lVar17 = lVar19 + 1;
  } while (sVar4 != 0x12);
  if (((int)uVar15 + (int)(lVar19 + 1)) - 1U < 0x60) {
LAB_02970dc8:
    lVar17 = *(long *)(lVar11 + (ulong)(uint)((int)uVar15 + (int)lVar19) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x12;
      *(uint *)(lVar17 + 0xc) = param_3;
      *(undefined1 *)(lVar17 + 10) = 4;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar14 + 0x70) + 0x98) = lVar17;
      lVar14 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar14 + 0x30);
      uVar15 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_02970e04:
  plVar12 = (long *)(lVar11 + uVar15 * 0x20 + 8);
  do {
    uVar13 = uVar15;
    if (0x5f < uVar13) goto LAB_02970e70;
    lVar17 = *plVar12;
    if (*(short *)(lVar17 + 8) == 0) goto LAB_02970e40;
    plVar12 = plVar12 + 4;
    uVar15 = uVar13 + 1;
  } while (*(short *)(lVar17 + 8) != 0x81);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_02970e40:
    lVar11 = *(long *)(lVar11 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x81;
      *(uint *)(lVar11 + 0xc) = uVar7;
      *(undefined1 *)(lVar11 + 10) = 0;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar14 + 0x70) + 0x410) = lVar11;
      lVar14 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02970e70:
  iVar9 = *(int *)(lVar14 + 0x78) + 1;
  *(int *)(lVar14 + 0x78) = iVar9;
  lVar11 = *(long *)(*(long *)(*(long *)(lVar14 + 8) + 0x88) + 0x14c8);
  if (lVar11 != 0) {
    do {
      lVar17 = FUN_02999e6c(lVar14,0xea,8,1,lVar11);
      if (lVar17 == 0) break;
      if ((*(byte *)(lVar17 + 0x3f) >> 5 & 1) == 0) {
        lVar17 = *(long *)(lVar11 + 0x18);
      }
      lVar11 = lVar17;
    } while (lVar17 != 0);
    iVar9 = *(int *)(lVar14 + 0x78);
  }
  *(int *)(lVar14 + 0x78) = iVar9 + -1;
  if (iVar9 + -1 == 0) {
    for (lVar11 = *(long *)(*(long *)(*(long *)(lVar14 + 8) + 0x88) + 0x14c8); lVar11 != 0;
        lVar11 = *(long *)(lVar11 + 0x18)) {
      *(uint *)(lVar11 + 0x3c) = (uint)*(ushort *)(lVar11 + 0x3e) << 0x10;
    }
  }
  lVar14 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(*(long *)(lVar14 + 0x70) + 0x410);
  if (lVar11 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(lVar11 + 0xc);
  }
  lVar11 = *(long *)(lVar14 + 0x50);
  if (*(uint *)(lVar11 + 0x408) == 0) {
    uVar13 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar11 + (ulong)*(uint *)(lVar11 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar11 + 0x408) = *(int *)(lVar11 + 0x408) + -1;
    lVar11 = *(long *)(lVar14 + 0x50);
    uVar13 = (ulong)*(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar14 + 0x70) = *(undefined8 *)(lVar11 + uVar13 * 0x20 + 8);
  lVar11 = *(long *)(lVar14 + 0x30);
  uVar7 = *(uint *)(lVar11 + 0xc08);
  if (uVar7 != 0) {
    if ((uVar7 & 0xffff) < 0x60) {
      uVar13 = (ulong)uVar7 & 0xffff;
      plVar12 = (long *)(lVar11 + uVar13 * 0x20 + 8);
      do {
        uVar13 = uVar13 + 1;
        if (*(short *)(*plVar12 + 8) == 0) break;
        *(undefined2 *)(*plVar12 + 8) = 0;
        plVar12 = plVar12 + 4;
      } while (((uint)uVar13 & 0xffff) != 0x60);
      uVar7 = *(uint *)(lVar11 + 0xc08);
    }
    *(uint *)(lVar11 + 0xc08) = uVar7 - 1;
    *(undefined2 *)(*(long *)(lVar11 + (ulong)(uVar7 - 1) * 0x20 + 8) + 8) = 0;
    uVar13 = (ulong)*(uint *)(lVar11 + 0xc08);
    do {
      if (uVar13 == 0) goto LAB_02970ff8;
      uVar13 = uVar13 - 1;
      *(int *)(lVar11 + 0xc08) = (int)uVar13;
    } while (*(short *)(*(long *)(lVar11 + (uVar13 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar11 + 0xc08) = (int)uVar13 + 1;
  }
LAB_02970ff8:
  if (iVar9 == 8) {
    return 0;
  }
  lVar11 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(lVar11 + 0x30);
  uVar7 = *(uint *)(lVar14 + 0xc08);
  if (uVar7 < 0x60) {
    do {
      lVar17 = *(long *)(lVar14 + (ulong)uVar7 * 0x20 + 8);
      if (*(short *)(lVar17 + 8) == 0) {
        if (uVar7 < 0x5f) {
          *(undefined2 *)(lVar17 + 8) = 1;
          *(int *)(lVar14 + 0xc08) = *(int *)(lVar14 + 0xc08) + 1;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      *(uint *)(lVar14 + 0xc08) = uVar7;
    } while (uVar7 != 0x60);
  }
  lVar14 = *(long *)(lVar11 + 0x50);
  uVar7 = *(uint *)(lVar14 + 0x408);
  if (uVar7 < 0x1f) {
    *(uint *)(lVar14 + 0x408) = uVar7 + 1;
    lVar14 = *(long *)(lVar11 + 0x50);
    uVar7 = *(uint *)(lVar14 + 0x408);
  }
  *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)(lVar14 + (ulong)uVar7 * 0x20 + 8);
  lVar14 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar14 + 0x30);
  uVar15 = (ulong)*(uint *)(lVar11 + 0xc08);
  uVar13 = uVar15 << 5 | 8;
  uVar5 = uVar15;
  do {
    uVar18 = uVar5;
    if (0x5f < uVar18) goto LAB_02971110;
    sVar4 = *(short *)(*(long *)(lVar11 + uVar13) + 8);
    if (sVar4 == 0) goto LAB_029710d4;
    uVar13 = uVar13 + 0x20;
    uVar5 = uVar18 + 1;
  } while (sVar4 != 3);
  if ((int)(uVar18 + 1) - 1U < 0x60) {
LAB_029710d4:
    lVar17 = *(long *)(lVar11 + (uVar18 & 0xffffffff) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 3;
      *(uint *)(lVar17 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar17 + 10) = 4;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar14 + 0x70) + 0x20) = lVar17;
      lVar14 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar14 + 0x30);
      uVar15 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_02971110:
  uVar13 = uVar15 << 5 | 8;
  lVar17 = 0;
  do {
    lVar19 = lVar17;
    if (0x5f < uVar15 + lVar19) goto LAB_02971194;
    sVar4 = *(short *)(*(long *)(lVar11 + uVar13) + 8);
    if (sVar4 == 0) goto LAB_0297115c;
    uVar13 = uVar13 + 0x20;
    lVar17 = lVar19 + 1;
  } while (sVar4 != 0x38);
  if (((int)uVar15 + (int)(lVar19 + 1)) - 1U < 0x60) {
LAB_0297115c:
    lVar17 = *(long *)(lVar11 + (ulong)(uint)((int)uVar15 + (int)lVar19) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x38;
      *(uint *)(lVar17 + 0xc) = uVar10 & 0xff;
      *(undefined1 *)(lVar17 + 10) = 0;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(long *)(*(long *)(lVar14 + 0x70) + 0x1c8) = lVar17;
      lVar14 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar14 + 0x30);
      uVar15 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_02971194:
  uVar13 = uVar15 << 5 | 8;
  lVar17 = 0;
  do {
    lVar19 = lVar17;
    if (0x5f < uVar15 + lVar19) goto LAB_02971218;
    sVar4 = *(short *)(*(long *)(lVar11 + uVar13) + 8);
    if (sVar4 == 0) goto LAB_029711dc;
    uVar13 = uVar13 + 0x20;
    lVar17 = lVar19 + 1;
  } while (sVar4 != 0x39);
  if (((int)uVar15 + (int)(lVar19 + 1)) - 1U < 0x60) {
LAB_029711dc:
    lVar17 = *(long *)(lVar11 + (ulong)(uint)((int)uVar15 + (int)lVar19) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x39;
      *(undefined1 *)(lVar17 + 10) = 0;
      *(undefined8 *)(lVar17 + 0xc) = 0;
      *(undefined8 *)(lVar17 + 0x14) = 0;
      *(undefined4 *)(lVar17 + 0x1c) = 0;
      *(long *)(*(long *)(lVar14 + 0x70) + 0x1d0) = lVar17;
      lVar14 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar14 + 0x30);
      uVar15 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_02971218:
  uVar13 = uVar15 << 5 | 8;
  lVar17 = 0;
  do {
    lVar19 = lVar17;
    if (0x5f < uVar15 + lVar19) goto LAB_029712a0;
    sVar4 = *(short *)(*(long *)(lVar11 + uVar13) + 8);
    if (sVar4 == 0) goto LAB_02971260;
    uVar13 = uVar13 + 0x20;
    lVar17 = lVar19 + 1;
  } while (sVar4 != 0x48);
  if (((int)uVar15 + (int)(lVar19 + 1)) - 1U < 0x60) {
LAB_02971260:
    lVar17 = *(long *)(lVar11 + (ulong)(uint)((int)uVar15 + (int)lVar19) * 0x20 + 8);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 8) = 0x48;
      *(undefined8 *)(lVar17 + 0xc) = 0;
      *(undefined8 *)(lVar17 + 0x14) = 0;
      *(undefined4 *)(lVar17 + 0x1c) = 0;
      *(undefined1 *)(lVar17 + 10) = 1;
      *(long *)(*(long *)(lVar14 + 0x70) + 0x248) = lVar17;
      lVar14 = *(long *)(param_1 + 0x10);
      lVar11 = *(long *)(lVar14 + 0x30);
      uVar15 = (ulong)*(uint *)(lVar11 + 0xc08);
    }
  }
LAB_029712a0:
  plVar12 = (long *)(lVar11 + uVar15 * 0x20 + 8);
  do {
    uVar13 = uVar15;
    if (0x5f < uVar13) goto LAB_02971314;
    lVar17 = *plVar12;
    if (*(short *)(lVar17 + 8) == 0) goto LAB_029712dc;
    plVar12 = plVar12 + 4;
    uVar15 = uVar13 + 1;
  } while (*(short *)(lVar17 + 8) != 0x59);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_029712dc:
    lVar11 = *(long *)(lVar11 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x59;
      *(undefined8 *)(lVar11 + 0xc) = 0;
      *(undefined8 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x1c) = 0;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(long *)(*(long *)(lVar14 + 0x70) + 0x2d0) = lVar11;
      lVar14 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02971314:
  iVar9 = *(int *)(lVar14 + 0x78) + 1;
  *(int *)(lVar14 + 0x78) = iVar9;
  lVar11 = *(long *)(*(long *)(*(long *)(lVar14 + 8) + 0x88) + 0x14c8);
  if (lVar11 != 0) {
    do {
      lVar17 = FUN_02999e6c(lVar14,0x66,8,1,lVar11);
      if (lVar17 == 0) break;
      if ((*(byte *)(lVar17 + 0x3f) >> 5 & 1) == 0) {
        lVar17 = *(long *)(lVar11 + 0x18);
      }
      lVar11 = lVar17;
    } while (lVar17 != 0);
    iVar9 = *(int *)(lVar14 + 0x78);
  }
  *(int *)(lVar14 + 0x78) = iVar9 + -1;
  if (iVar9 + -1 == 0) {
    for (lVar11 = *(long *)(*(long *)(*(long *)(lVar14 + 8) + 0x88) + 0x14c8); lVar11 != 0;
        lVar11 = *(long *)(lVar11 + 0x18)) {
      *(uint *)(lVar11 + 0x3c) = (uint)*(ushort *)(lVar11 + 0x3e) << 0x10;
    }
  }
  lVar14 = *(long *)(param_1 + 0x10);
  lVar11 = *(long *)(lVar14 + 0x70);
  if (*(long *)(lVar11 + 0x1c8) == 0) {
    iVar9 = 0;
    lVar17 = *(long *)(lVar11 + 0x248);
    if (lVar17 != 0) goto LAB_029713bc;
LAB_029713e8:
    cVar21 = '\0';
    lVar17 = *(long *)(lVar11 + 0x2d0);
    if (lVar17 != 0) goto LAB_029713c8;
LAB_029713f4:
    cVar20 = '\0';
    lVar11 = *(long *)(lVar11 + 0x1d0);
    if (lVar11 != 0) goto LAB_029713d4;
LAB_02971400:
    iVar23 = 0;
  }
  else {
    iVar9 = *(int *)(*(long *)(lVar11 + 0x1c8) + 0xc);
    lVar17 = *(long *)(lVar11 + 0x248);
    if (lVar17 == 0) goto LAB_029713e8;
LAB_029713bc:
    cVar21 = *(char *)(lVar17 + 0xc);
    lVar17 = *(long *)(lVar11 + 0x2d0);
    if (lVar17 == 0) goto LAB_029713f4;
LAB_029713c8:
    cVar20 = *(char *)(lVar17 + 0xc);
    lVar11 = *(long *)(lVar11 + 0x1d0);
    if (lVar11 == 0) goto LAB_02971400;
LAB_029713d4:
    iVar23 = *(int *)(lVar11 + 0xc);
  }
  lVar11 = *(long *)(lVar14 + 0x50);
  if (*(uint *)(lVar11 + 0x408) == 0) {
    uVar13 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar11 + (ulong)*(uint *)(lVar11 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar11 + 0x408) = *(int *)(lVar11 + 0x408) + -1;
    lVar11 = *(long *)(lVar14 + 0x50);
    uVar13 = (ulong)*(uint *)(lVar11 + 0x408);
  }
  *(undefined8 *)(lVar14 + 0x70) = *(undefined8 *)(lVar11 + uVar13 * 0x20 + 8);
  lVar11 = *(long *)(lVar14 + 0x30);
  uVar10 = *(uint *)(lVar11 + 0xc08);
  if (uVar10 != 0) {
    if ((uVar10 & 0xffff) < 0x60) {
      uVar13 = (ulong)uVar10 & 0xffff;
      plVar12 = (long *)(lVar11 + uVar13 * 0x20 + 8);
      do {
        uVar13 = uVar13 + 1;
        if (*(short *)(*plVar12 + 8) == 0) break;
        *(undefined2 *)(*plVar12 + 8) = 0;
        plVar12 = plVar12 + 4;
      } while (((uint)uVar13 & 0xffff) != 0x60);
      uVar10 = *(uint *)(lVar11 + 0xc08);
    }
    *(uint *)(lVar11 + 0xc08) = uVar10 - 1;
    *(undefined2 *)(*(long *)(lVar11 + (ulong)(uVar10 - 1) * 0x20 + 8) + 8) = 0;
    uVar13 = (ulong)*(uint *)(lVar11 + 0xc08);
    do {
      if (uVar13 == 0) goto LAB_029714e4;
      uVar13 = uVar13 - 1;
      *(int *)(lVar11 + 0xc08) = (int)uVar13;
    } while (*(short *)(*(long *)(lVar11 + (uVar13 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar11 + 0xc08) = (int)uVar13 + 1;
  }
LAB_029714e4:
  if (((cVar21 != '\0') && (cVar20 == '\0')) || (uVar10 = iVar23 + iVar9, (uVar10 & 0xff) == 0)) {
    return 0;
  }
  if (iVar8 == 2) {
    iVar8 = FUN_029506a8(param_2,0xe);
    uVar7 = iVar8 * (uVar10 & 0xff);
  }
  else {
    if (param_5 == 0) {
      uVar10 = 0;
      goto LAB_0297156c;
    }
    uVar7 = (uVar10 & 0xff) * param_5;
  }
  uVar10 = uVar7 / 100;
  if (0x31 < uVar7 % 100) {
    uVar10 = uVar7 / 100 + 1;
  }
  if (uVar10 == 0) {
    uVar10 = 1;
  }
LAB_0297156c:
  *param_6 = cVar20 != '\0';
  return uVar10;
}


