/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029744f0; name: FUN_029744f0
 */


void FUN_029744f0(long param_1,undefined4 param_2,uint param_3,long param_4,long param_5,
                 int *param_6,int *param_7)

{
  byte bVar1;
  short sVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined **local_60;
  undefined4 local_58;
  
  if (param_3 < 3) {
    local_60 = &PTR_LAB_04294ec8;
    local_58 = param_2;
    iVar4 = FUN_02c8dfdc(&local_60,param_3);
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = FUN_02c8e134(&local_60,param_3);
    }
    *param_7 = iVar5;
  }
  else {
    iVar4 = 0;
    *param_7 = 0;
  }
  *param_6 = iVar4;
  lVar6 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar6 + 0x30);
  uVar8 = *(uint *)(lVar9 + 0xc08);
  if (uVar8 < 0x60) {
    do {
      lVar12 = *(long *)(lVar9 + (ulong)uVar8 * 0x20 + 8);
      if (*(short *)(lVar12 + 8) == 0) {
        if (uVar8 < 0x5f) {
          *(undefined2 *)(lVar12 + 8) = 1;
          *(int *)(lVar9 + 0xc08) = *(int *)(lVar9 + 0xc08) + 1;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      *(uint *)(lVar9 + 0xc08) = uVar8;
    } while (uVar8 != 0x60);
  }
  lVar9 = *(long *)(lVar6 + 0x50);
  uVar8 = *(uint *)(lVar9 + 0x408);
  if (uVar8 < 0x1f) {
    *(uint *)(lVar9 + 0x408) = uVar8 + 1;
    lVar9 = *(long *)(lVar6 + 0x50);
    uVar8 = *(uint *)(lVar9 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar9 + (ulong)uVar8 * 0x20 + 8);
  lVar9 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar9 + 0x30);
  uVar10 = (ulong)*(uint *)(lVar6 + 0xc08);
  bVar1 = *(byte *)(param_4 + 0x7d);
  uVar7 = uVar10 << 5 | 8;
  uVar3 = uVar10;
  do {
    uVar13 = uVar3;
    if (0x5f < uVar13) goto LAB_02974684;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar2 == 0) goto LAB_02974648;
    uVar7 = uVar7 + 0x20;
    uVar3 = uVar13 + 1;
  } while (sVar2 != 3);
  if ((int)(uVar13 + 1) - 1U < 0x60) {
LAB_02974648:
    lVar12 = *(long *)(lVar6 + (uVar13 & 0xffffffff) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 3;
      *(uint *)(lVar12 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x20) = lVar12;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_02974684:
  bVar1 = *(byte *)(param_5 + 0x7d);
  uVar7 = uVar10 << 5 | 8;
  lVar12 = 0;
  do {
    lVar14 = lVar12;
    if (0x5f < uVar10 + lVar14) goto LAB_02974708;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar2 == 0) goto LAB_029746d0;
    uVar7 = uVar7 + 0x20;
    lVar12 = lVar14 + 1;
  } while (sVar2 != 4);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_029746d0:
    lVar12 = *(long *)(lVar6 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 4;
      *(uint *)(lVar12 + 0xc) = (uint)bVar1;
      *(undefined1 *)(lVar12 + 10) = 4;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x28) = lVar12;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_02974708:
  iVar5 = *param_6;
  uVar7 = uVar10 << 5 | 8;
  lVar12 = 0;
  do {
    lVar14 = lVar12;
    if (0x5f < uVar10 + lVar14) goto LAB_0297478c;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar2 == 0) goto LAB_02974754;
    uVar7 = uVar7 + 0x20;
    lVar12 = lVar14 + 1;
  } while (sVar2 != 0x22);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_02974754:
    lVar12 = *(long *)(lVar6 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x22;
      *(int *)(lVar12 + 0xc) = iVar5;
      *(undefined1 *)(lVar12 + 10) = 0;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x118) = lVar12;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_0297478c:
  iVar5 = *param_7;
  uVar7 = uVar10 << 5 | 8;
  lVar12 = 0;
  do {
    lVar14 = lVar12;
    if (0x5f < uVar10 + lVar14) goto LAB_02974810;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar7) + 8);
    if (sVar2 == 0) goto LAB_029747d8;
    uVar7 = uVar7 + 0x20;
    lVar12 = lVar14 + 1;
  } while (sVar2 != 0x23);
  if (((int)uVar10 + (int)(lVar14 + 1)) - 1U < 0x60) {
LAB_029747d8:
    lVar12 = *(long *)(lVar6 + (ulong)(uint)((int)uVar10 + (int)lVar14) * 0x20 + 8);
    if (lVar12 != 0) {
      *(undefined2 *)(lVar12 + 8) = 0x23;
      *(int *)(lVar12 + 0xc) = iVar5;
      *(undefined1 *)(lVar12 + 10) = 0;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x120) = lVar12;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar9 + 0x30);
      uVar10 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_02974810:
  plVar11 = (long *)(lVar6 + uVar10 * 0x20 + 8);
  do {
    uVar7 = uVar10;
    if (0x5f < uVar7) goto LAB_02974880;
    lVar12 = *plVar11;
    if (*(short *)(lVar12 + 8) == 0) goto LAB_0297484c;
    plVar11 = plVar11 + 4;
    uVar10 = uVar7 + 1;
  } while (*(short *)(lVar12 + 8) != 0x38);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_0297484c:
    lVar6 = *(long *)(lVar6 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x38;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(undefined4 *)(lVar6 + 0xc) = 1;
      *(undefined1 *)(lVar6 + 10) = 0;
      *(long *)(*(long *)(lVar9 + 0x70) + 0x1c8) = lVar6;
      lVar9 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02974880:
  iVar5 = *(int *)(lVar9 + 0x78) + 1;
  *(int *)(lVar9 + 0x78) = iVar5;
  lVar6 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8);
  if (lVar6 != 0) {
    do {
      lVar12 = FUN_02999e6c(lVar9,0x72,8,1,lVar6);
      if (lVar12 == 0) break;
      if ((*(byte *)(lVar12 + 0x3f) >> 5 & 1) == 0) {
        lVar12 = *(long *)(lVar6 + 0x18);
      }
      lVar6 = lVar12;
    } while (lVar12 != 0);
    iVar5 = *(int *)(lVar9 + 0x78);
  }
  *(int *)(lVar9 + 0x78) = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    for (lVar6 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x88) + 0x14c8); lVar6 != 0;
        lVar6 = *(long *)(lVar6 + 0x18)) {
      *(uint *)(lVar6 + 0x3c) = (uint)*(ushort *)(lVar6 + 0x3e) << 0x10;
    }
  }
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x118);
  iVar5 = 0;
  if (lVar6 != 0) {
    iVar5 = *(int *)(lVar6 + 0xc);
  }
  *param_6 = iVar5;
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x70) + 0x120);
  iVar5 = 0;
  if (lVar6 != 0) {
    iVar5 = *(int *)(lVar6 + 0xc);
  }
  *param_7 = iVar5;
  lVar9 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(*(long *)(lVar9 + 0x70) + 0x1c8);
  if ((lVar6 != 0) && (uVar8 = (uint)*(byte *)(lVar6 + 0xc), 1 < uVar8)) {
    *param_7 = uVar8 * iVar5;
    lVar9 = *(long *)(param_1 + 0x10);
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
      if (uVar7 == 0) goto LAB_02974a44;
      uVar7 = uVar7 - 1;
      *(int *)(lVar6 + 0xc08) = (int)uVar7;
    } while (*(short *)(*(long *)(lVar6 + (uVar7 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar6 + 0xc08) = (int)uVar7 + 1;
  }
LAB_02974a44:
  if (*param_6 == 8) {
    *param_6 = 0;
  }
  return;
}


