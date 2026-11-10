/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029849ec; name: FUN_029849ec
 */


int FUN_029849ec(long param_1,uint param_2,int param_3,long param_4,long param_5,ulong *param_6)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  undefined2 uVar5;
  long *plVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulong local_58;
  
  plVar13 = &DAT_0428af30 + (ulong)param_2 * 6;
  if (*plVar13 == 0) {
    plVar6 = &DAT_0428af30;
  }
  else {
    plVar6 = &DAT_0428af30;
    if (*(char *)(*plVar13 + 0x1e1) != '\0') {
      plVar6 = plVar13;
    }
  }
  piVar7 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x1b) ||
     (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0xd], uVar8 == 0)) {
    uVar21 = 0;
  }
  else {
    uVar21 = (uint)*(ushort *)((long)piVar7 + uVar8);
  }
  uVar5 = FUN_02998dec(param_2,param_3);
  lVar9 = *plVar13;
  plVar6 = &DAT_0428af30;
  if (param_3 == 1) {
    if ((lVar9 != 0) && (plVar6 = &DAT_0428af30, *(char *)(lVar9 + 0x1e1) != '\0')) {
      plVar6 = plVar13;
    }
    piVar7 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
    if ((0xa8 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0x54], uVar8 != 0))
    goto LAB_02984b20;
LAB_02984b28:
    uVar20 = 0;
  }
  else {
    if ((lVar9 != 0) && (plVar6 = &DAT_0428af30, *(char *)(lVar9 + 0x1e1) != '\0')) {
      plVar6 = plVar13;
    }
    piVar7 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x1d) ||
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0xe], uVar8 == 0))
    goto LAB_02984b28;
LAB_02984b20:
    uVar20 = (uint)*(byte *)((long)piVar7 + uVar8);
  }
  FUN_0293f1f0(uVar5,param_4,&local_58);
  lVar9 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)(lVar9 + 0x30);
  uVar12 = *(uint *)(lVar10 + 0xc08);
  if (uVar12 < 0x60) {
    do {
      lVar15 = *(long *)(lVar10 + (ulong)uVar12 * 0x20 + 8);
      if (*(short *)(lVar15 + 8) == 0) {
        if (uVar12 < 0x5f) {
          *(undefined2 *)(lVar15 + 8) = 1;
          *(int *)(lVar10 + 0xc08) = *(int *)(lVar10 + 0xc08) + 1;
        }
        break;
      }
      uVar12 = uVar12 + 1;
      *(uint *)(lVar10 + 0xc08) = uVar12;
    } while (uVar12 != 0x60);
  }
  lVar10 = *(long *)(lVar9 + 0x50);
  uVar12 = *(uint *)(lVar10 + 0x408);
  if (uVar12 < 0x1f) {
    *(uint *)(lVar10 + 0x408) = uVar12 + 1;
    lVar10 = *(long *)(lVar9 + 0x50);
    uVar12 = *(uint *)(lVar10 + 0x408);
  }
  *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)(lVar10 + (ulong)uVar12 * 0x20 + 8);
  lVar10 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar10 + 0x30);
  uVar11 = (ulong)*(uint *)(lVar9 + 0xc08);
  bVar2 = *(byte *)(param_5 + 0x7d);
  uVar8 = uVar11 << 5 | 8;
  uVar18 = uVar11;
  do {
    uVar17 = uVar18;
    if (0x5f < uVar17) goto LAB_02984c4c;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_02984c14;
    uVar8 = uVar8 + 0x20;
    uVar18 = uVar17 + 1;
  } while (sVar3 != 4);
  if ((int)(uVar17 + 1) - 1U < 0x60) {
LAB_02984c14:
    lVar15 = *(long *)(lVar9 + (uVar17 & 0xffffffff) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 4;
      *(uint *)(lVar15 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x28) = lVar15;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02984c4c:
  bVar2 = *(byte *)(param_4 + 0x7d);
  uVar8 = uVar11 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar11 + lVar16) goto LAB_02984cd4;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_02984c98;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar3 != 3);
  if (((int)uVar11 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_02984c98:
    lVar15 = *(long *)(lVar9 + (ulong)(uint)((int)uVar11 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 3;
      *(uint *)(lVar15 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x20) = lVar15;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02984cd4:
  uVar8 = uVar11 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar11 + lVar16) goto LAB_02984d58;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_02984d1c;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar3 != 0x12);
  if (((int)uVar11 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_02984d1c:
    lVar15 = *(long *)(lVar9 + (ulong)(uint)((int)uVar11 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x12;
      *(uint *)(lVar15 + 0xc) = param_2;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x98) = lVar15;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02984d58:
  uVar8 = uVar11 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar11 + lVar16) goto LAB_02984ddc;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_02984da0;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar3 != 0x80);
  if (((int)uVar11 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_02984da0:
    lVar15 = *(long *)(lVar9 + (ulong)(uint)((int)uVar11 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x80;
      *(int *)(lVar15 + 0xc) = param_3;
      *(undefined1 *)(lVar15 + 10) = 4;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x408) = lVar15;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02984ddc:
  uVar8 = uVar11 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar11 + lVar16) goto LAB_02984e64;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_02984e24;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar3 != 0x1f);
  if (((int)uVar11 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_02984e24:
    lVar15 = *(long *)(lVar9 + (ulong)(uint)((int)uVar11 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x1f;
      *(undefined8 *)(lVar15 + 0xc) = 0;
      *(undefined4 *)(lVar15 + 0x14) = 0;
      *(ulong **)(lVar15 + 0x18) = &local_58;
      *(undefined1 *)(lVar15 + 10) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x100) = lVar15;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02984e64:
  uVar8 = uVar11 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar11 + lVar16) goto LAB_02984ee4;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_02984eac;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar3 != 0x1e);
  if (((int)uVar11 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_02984eac:
    lVar15 = *(long *)(lVar9 + (ulong)(uint)((int)uVar11 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x1e;
      *(uint *)(lVar15 + 0xc) = uVar21;
      *(undefined1 *)(lVar15 + 10) = 0;
      *(undefined8 *)(lVar15 + 0x10) = 0;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0xf8) = lVar15;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02984ee4:
  uVar8 = uVar11 << 5 | 8;
  lVar15 = 0;
  do {
    lVar16 = lVar15;
    if (0x5f < uVar11 + lVar16) goto LAB_02984f6c;
    sVar3 = *(short *)(*(long *)(lVar9 + uVar8) + 8);
    if (sVar3 == 0) goto LAB_02984f2c;
    uVar8 = uVar8 + 0x20;
    lVar15 = lVar16 + 1;
  } while (sVar3 != 0x48);
  if (((int)uVar11 + (int)(lVar16 + 1)) - 1U < 0x60) {
LAB_02984f2c:
    lVar15 = *(long *)(lVar9 + (ulong)(uint)((int)uVar11 + (int)lVar16) * 0x20 + 8);
    if (lVar15 != 0) {
      *(undefined2 *)(lVar15 + 8) = 0x48;
      *(undefined8 *)(lVar15 + 0xc) = 0;
      *(undefined8 *)(lVar15 + 0x14) = 0;
      *(undefined4 *)(lVar15 + 0x1c) = 0;
      *(undefined1 *)(lVar15 + 10) = 1;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x248) = lVar15;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar9 = *(long *)(lVar10 + 0x30);
      uVar11 = (ulong)*(uint *)(lVar9 + 0xc08);
    }
  }
LAB_02984f6c:
  plVar13 = (long *)(lVar9 + uVar11 * 0x20 + 8);
  do {
    uVar8 = uVar11;
    if (0x5f < uVar8) goto LAB_02984fd8;
    lVar15 = *plVar13;
    if (*(short *)(lVar15 + 8) == 0) goto LAB_02984fa8;
    plVar13 = plVar13 + 4;
    uVar11 = uVar8 + 1;
  } while (*(short *)(lVar15 + 8) != 0x29);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_02984fa8:
    lVar9 = *(long *)(lVar9 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x29;
      *(uint *)(lVar9 + 0xc) = uVar20;
      *(undefined1 *)(lVar9 + 10) = 0;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar10 + 0x70) + 0x150) = lVar9;
      lVar10 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02984fd8:
  iVar14 = *(int *)(lVar10 + 0x78) + 1;
  *(int *)(lVar10 + 0x78) = iVar14;
  lVar9 = *(long *)(*(long *)(*(long *)(lVar10 + 8) + 0x88) + 0x14c8);
  if (lVar9 != 0) {
    do {
      lVar15 = FUN_02999e6c(lVar10,0x7e,8,1,lVar9);
      if (lVar15 == 0) break;
      if ((*(byte *)(lVar15 + 0x3f) >> 5 & 1) == 0) {
        lVar15 = *(long *)(lVar9 + 0x18);
      }
      lVar9 = lVar15;
    } while (lVar15 != 0);
    iVar14 = *(int *)(lVar10 + 0x78);
  }
  *(int *)(lVar10 + 0x78) = iVar14 + -1;
  if (iVar14 + -1 == 0) {
    for (lVar9 = *(long *)(*(long *)(*(long *)(lVar10 + 8) + 0x88) + 0x14c8); lVar9 != 0;
        lVar9 = *(long *)(lVar9 + 0x18)) {
      *(uint *)(lVar9 + 0x3c) = (uint)*(ushort *)(lVar9 + 0x3e) << 0x10;
    }
  }
  lVar10 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar10 + 0x70);
  iVar14 = 0;
  if (*(long *)(lVar9 + 0xf8) != 0) {
    iVar14 = *(int *)(*(long *)(lVar9 + 0xf8) + 0xc);
  }
  if (*(long *)(lVar9 + 0x150) == 0) {
    iVar19 = 0;
    lVar9 = *(long *)(lVar9 + 0x248);
    if (lVar9 != 0) goto LAB_02985088;
LAB_0298509c:
    uVar21 = 0;
  }
  else {
    iVar19 = *(int *)(*(long *)(lVar9 + 0x150) + 0xc);
    lVar9 = *(long *)(lVar9 + 0x248);
    if (lVar9 == 0) goto LAB_0298509c;
LAB_02985088:
    uVar21 = *(uint *)(lVar9 + 0xc);
  }
  lVar9 = *(long *)(lVar10 + 0x50);
  iVar1 = 0;
  if (iVar14 != 0xffff) {
    iVar1 = iVar14;
  }
  if (*(uint *)(lVar9 + 0x408) == 0) {
    uVar8 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar9 + (ulong)*(uint *)(lVar9 + 0x408) * 0x20 + 8) + 8),0,0x410);
    *(int *)(lVar9 + 0x408) = *(int *)(lVar9 + 0x408) + -1;
    lVar9 = *(long *)(lVar10 + 0x50);
    uVar8 = (ulong)*(uint *)(lVar9 + 0x408);
  }
  *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(lVar9 + uVar8 * 0x20 + 8);
  lVar9 = *(long *)(lVar10 + 0x30);
  uVar20 = *(uint *)(lVar9 + 0xc08);
  if (uVar20 != 0) {
    if ((uVar20 & 0xffff) < 0x60) {
      uVar8 = (ulong)uVar20 & 0xffff;
      plVar13 = (long *)(lVar9 + uVar8 * 0x20 + 8);
      do {
        uVar8 = uVar8 + 1;
        if (*(short *)(*plVar13 + 8) == 0) break;
        *(undefined2 *)(*plVar13 + 8) = 0;
        plVar13 = plVar13 + 4;
      } while (((uint)uVar8 & 0xffff) != 0x60);
      uVar20 = *(uint *)(lVar9 + 0xc08);
    }
    *(uint *)(lVar9 + 0xc08) = uVar20 - 1;
    *(undefined2 *)(*(long *)(lVar9 + (ulong)(uVar20 - 1) * 0x20 + 8) + 8) = 0;
    uVar8 = (ulong)*(uint *)(lVar9 + 0xc08);
    do {
      if (uVar8 == 0) goto LAB_0298518c;
      uVar8 = uVar8 - 1;
      *(int *)(lVar9 + 0xc08) = (int)uVar8;
    } while (*(short *)(*(long *)(lVar9 + (uVar8 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar9 + 0xc08) = (int)uVar8 + 1;
  }
LAB_0298518c:
  cVar4 = FUN_0296eaa8(param_1);
  lVar9 = DAT_043ecde0;
  if (iVar1 != 0x30) {
    if (iVar1 == 0x2f) {
      switch((uint)local_58 & 7) {
      case 1:
      case 2:
      case 3:
        local_58 = local_58 & 0xffffffffc0003fff | (ulong)((param_2 & 0xffff) << 0xe);
        break;
      case 4:
        local_58 = local_58 & 0xfffffff000000000 |
                   local_58 & 0xfffff | (ulong)(param_2 & 0xffff) << 0x14;
      }
    }
    goto switchD_029851e0_default;
  }
  switch((uint)local_58 & 7) {
  case 1:
  case 2:
  case 3:
    uVar8 = (ulong)((param_2 & 0xffff) << 0xe);
    uVar11 = 0xffffffffc0003fff;
    break;
  case 4:
    uVar8 = (ulong)(param_2 & 0xffff) << 0x14;
    uVar11 = 0xfffffff0000fffff;
    break;
  default:
    goto switchD_0298521c_default;
  }
  local_58 = local_58 & uVar11 | uVar8;
switchD_0298521c_default:
  switch((uint)local_58 & 7) {
  case 1:
  case 2:
  case 3:
    local_58 = local_58 & 0xffffffff80000000 | local_58 & 0x3fffffff | (ulong)(param_3 == 1) << 0x1e
    ;
    break;
  case 4:
    local_58 = local_58 & 0xffffffe000000000 |
               local_58 & 0xfffffffff | (ulong)(param_3 == 1) << 0x24;
  }
switchD_029851e0_default:
  iVar14 = 0;
  if ((iVar1 != 0) && ((uVar21 & 0xff) == 0)) {
    uVar21 = iVar19 << (ulong)(iVar1 == 7 && cVar4 == '\r');
    if (0 < (int)uVar21) {
      uVar8 = *(ulong *)(DAT_043ecde0 + 8);
      uVar11 = *(ulong *)(DAT_043ecde0 + 0x10);
      do {
        uVar18 = uVar8 ^ uVar11;
        iVar14 = (int)uVar11;
        uVar11 = uVar18 >> 0x1b | uVar18 << 0x25;
        uVar20 = (int)uVar8 + iVar14 & 0x7f;
        uVar8 = uVar18 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar18 << 0x10;
      } while (99 < uVar20);
      *(ulong *)(DAT_043ecde0 + 8) = uVar8;
      *(ulong *)(lVar9 + 0x10) = uVar11;
      if (uVar20 < (uVar21 & 0xff)) {
        *param_6 = local_58;
        iVar14 = iVar1;
      }
      else {
        iVar14 = 0;
      }
    }
  }
  return iVar14;
}


