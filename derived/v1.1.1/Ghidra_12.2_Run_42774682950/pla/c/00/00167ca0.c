/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00167ca0; name: FUN_00167ca0
 */


void FUN_00167ca0(long *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  
  FUN_00169ba0();
  if ((*param_2 == 0xb) && (iVar5 = param_2[2], iVar5 != -1)) {
    if (param_2[4] != 0xffffffff) {
      uVar7 = param_2[4];
      do {
        uVar6 = uVar7;
        uVar3 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar6 * 4);
        iVar4 = (uVar3 >> 0xe) - 0x1ffff;
        uVar7 = 0xffffffff;
        if (iVar4 != -1) {
          uVar7 = uVar6 + iVar4 + 1;
        }
      } while (uVar7 != 0xffffffff);
      iVar5 = iVar5 + ~uVar6;
      iVar4 = -iVar5;
      if (-1 < iVar5) {
        iVar4 = iVar5;
      }
      if (0x1ffff < iVar4) goto LAB_0016834c;
      *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar6 * 4) =
           (uVar3 & 0x3fff | iVar5 * 0x4000) + 0x7fffc000;
      goto LAB_00167d44;
    }
    param_2[4] = iVar5;
    iVar5 = param_2[4];
    iVar4 = param_2[5];
    if (iVar5 == iVar4) goto LAB_00168320;
  }
  else {
LAB_00167d44:
    iVar5 = param_2[4];
    iVar4 = param_2[5];
    if (iVar5 == iVar4) goto LAB_00168320;
  }
  uVar7 = param_3 << 6;
  if (iVar5 != -1) {
    do {
      puVar9 = (uint *)(*(long *)(*param_1 + 0x38) + (long)iVar5 * 4);
      if ((iVar5 < 1) || (uVar3 = puVar9[-1], -1 < (char)(&DAT_039c5e39)[(ulong)uVar3 & 0x3f])) {
        uVar3 = *puVar9;
      }
      if ((uVar3 & 0x3f) != 0x23) goto LAB_00167e24;
      iVar1 = (*puVar9 >> 0xe) - 0x1ffff;
      iVar10 = iVar5 + iVar1;
      iVar5 = -1;
      if (iVar1 != -1) {
        iVar5 = iVar10 + 1;
      }
    } while (iVar5 != -1);
  }
  iVar5 = -1;
  if (iVar4 != -1) {
    do {
      puVar9 = (uint *)(*(long *)(*param_1 + 0x38) + (long)iVar4 * 4);
      if ((iVar4 < 1) || (uVar3 = puVar9[-1], -1 < (char)(&DAT_039c5e39)[(ulong)uVar3 & 0x3f])) {
        uVar3 = *puVar9;
      }
      if ((uVar3 & 0x3f) != 0x23) goto LAB_00167e24;
      iVar1 = (*puVar9 >> 0xe) - 0x1ffff;
      iVar10 = iVar4 + iVar1;
      iVar4 = -1;
      if (iVar1 != -1) {
        iVar4 = iVar10 + 1;
      }
    } while (iVar4 != -1);
  }
  iVar4 = -1;
LAB_00167f88:
  iVar1 = (int)param_1[4];
  *(int *)((long)param_1 + 0x24) = iVar1;
  uVar3 = param_2[5];
  if (uVar3 != 0xffffffff) {
    if (param_3 == 0xff) {
      do {
        puVar9 = (uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar3 * 4);
        uVar13 = *puVar9;
        iVar10 = (uVar13 >> 0xe) - 0x1ffff;
        uVar6 = 0xffffffff;
        if (iVar10 != -1) {
          uVar6 = uVar3 + iVar10 + 1;
        }
        if ((int)uVar3 < 1) {
LAB_00168024:
          puVar11 = puVar9;
          uVar12 = uVar13;
        }
        else {
          uVar12 = puVar9[-1];
          puVar11 = puVar9 + -1;
          if (-1 < (char)(&DAT_039c5e39)[(ulong)uVar12 & 0x3f]) goto LAB_00168024;
        }
        if ((uVar12 & 0x3f) == 0x23) {
          *puVar11 = uVar12 & 0x7fc000 | uVar12 >> 0x11 & 0x7fc0 | 0x22;
          iVar10 = iVar1 + ~uVar3;
          iVar2 = -iVar10;
          if (-1 < iVar10) {
            iVar2 = iVar10;
          }
          if (0x1ffff < iVar2) goto LAB_0016834c;
          puVar9 = (uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar3 * 4);
          uVar13 = *puVar9;
        }
        else {
          iVar10 = iVar4 + ~uVar3;
          iVar2 = -iVar10;
          if (-1 < iVar10) {
            iVar2 = iVar10;
          }
          if (0x1ffff < iVar2) goto LAB_0016834c;
        }
        *puVar9 = (uVar13 & 0x3fff | iVar10 << 0xe) + 0x7fffc000;
        uVar3 = uVar6;
      } while (uVar6 != 0xffffffff);
    }
    else {
      do {
        puVar9 = (uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar3 * 4);
        uVar13 = *puVar9;
        iVar10 = (uVar13 >> 0xe) - 0x1ffff;
        uVar6 = 0xffffffff;
        if (iVar10 != -1) {
          uVar6 = uVar3 + iVar10 + 1;
        }
        if ((int)uVar3 < 1) {
LAB_001680fc:
          puVar11 = puVar9;
          uVar12 = uVar13;
        }
        else {
          uVar12 = puVar9[-1];
          puVar11 = puVar9 + -1;
          if (-1 < (char)(&DAT_039c5e39)[(ulong)uVar12 & 0x3f]) goto LAB_001680fc;
        }
        if ((uVar12 & 0x3f) == 0x23) {
          uVar13 = uVar12 & 0x7fc000 | uVar7 | 0x22;
          if (param_3 != uVar12 >> 0x17) {
            uVar13 = uVar12 & 0xffffc03f | uVar7 & 0x3fc0;
          }
          *puVar11 = uVar13;
          iVar10 = iVar1 + ~uVar3;
          iVar2 = -iVar10;
          if (-1 < iVar10) {
            iVar2 = iVar10;
          }
          if (0x1ffff < iVar2) goto LAB_0016834c;
          puVar9 = (uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar3 * 4);
          uVar13 = *puVar9;
        }
        else {
          iVar10 = iVar4 + ~uVar3;
          iVar2 = -iVar10;
          if (-1 < iVar10) {
            iVar2 = iVar10;
          }
          if (0x1ffff < iVar2) goto LAB_0016834c;
        }
        *puVar9 = (uVar13 & 0x3fff | iVar10 << 0xe) + 0x7fffc000;
        uVar3 = uVar6;
      } while (uVar6 != 0xffffffff);
    }
  }
  uVar3 = param_2[4];
  if (uVar3 != 0xffffffff) {
    if (param_3 == 0xff) {
      do {
        puVar9 = (uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar3 * 4);
        uVar6 = *puVar9;
        iVar4 = (uVar6 >> 0xe) - 0x1ffff;
        uVar7 = 0xffffffff;
        if (iVar4 != -1) {
          uVar7 = uVar3 + iVar4 + 1;
        }
        if ((int)uVar3 < 1) {
LAB_001681ec:
          puVar11 = puVar9;
          uVar13 = uVar6;
        }
        else {
          uVar13 = puVar9[-1];
          puVar11 = puVar9 + -1;
          if (-1 < (char)(&DAT_039c5e39)[(ulong)uVar13 & 0x3f]) goto LAB_001681ec;
        }
        if ((uVar13 & 0x3f) == 0x23) {
          *puVar11 = uVar13 & 0x7fc000 | uVar13 >> 0x11 & 0x7fc0 | 0x22;
          iVar4 = iVar1 + ~uVar3;
          iVar10 = -iVar4;
          if (-1 < iVar4) {
            iVar10 = iVar4;
          }
          if (0x1ffff < iVar10) goto LAB_0016834c;
          puVar9 = (uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar3 * 4);
          uVar6 = *puVar9;
        }
        else {
          iVar4 = iVar5 + ~uVar3;
          iVar10 = -iVar4;
          if (-1 < iVar4) {
            iVar10 = iVar4;
          }
          if (0x1ffff < iVar10) goto LAB_0016834c;
        }
        *puVar9 = (uVar6 & 0x3fff | iVar4 << 0xe) + 0x7fffc000;
        uVar3 = uVar7;
      } while (uVar7 != 0xffffffff);
    }
    else {
      do {
        puVar9 = (uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar3 * 4);
        uVar13 = *puVar9;
        iVar4 = (uVar13 >> 0xe) - 0x1ffff;
        uVar6 = 0xffffffff;
        if (iVar4 != -1) {
          uVar6 = uVar3 + iVar4 + 1;
        }
        if ((int)uVar3 < 1) {
LAB_001682c4:
          puVar11 = puVar9;
          uVar12 = uVar13;
        }
        else {
          uVar12 = puVar9[-1];
          puVar11 = puVar9 + -1;
          if (-1 < (char)(&DAT_039c5e39)[(ulong)uVar12 & 0x3f]) goto LAB_001682c4;
        }
        if ((uVar12 & 0x3f) == 0x23) {
          uVar13 = uVar12 & 0x7fc000 | uVar7 | 0x22;
          if (param_3 != uVar12 >> 0x17) {
            uVar13 = uVar12 & 0xffffc03f | uVar7 & 0x3fc0;
          }
          *puVar11 = uVar13;
          iVar4 = iVar1 + ~uVar3;
          iVar10 = -iVar4;
          if (-1 < iVar4) {
            iVar10 = iVar4;
          }
          if (0x1ffff < iVar10) goto LAB_0016834c;
          puVar9 = (uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar3 * 4);
          uVar13 = *puVar9;
        }
        else {
          iVar4 = iVar5 + ~uVar3;
          iVar10 = -iVar4;
          if (-1 < iVar4) {
            iVar10 = iVar4;
          }
          if (0x1ffff < iVar10) goto LAB_0016834c;
        }
        *puVar9 = (uVar13 & 0x3fff | iVar4 << 0xe) + 0x7fffc000;
        uVar3 = uVar6;
      } while (uVar6 != 0xffffffff);
    }
  }
LAB_00168320:
  param_2[4] = -1;
  param_2[5] = -1;
  param_2[2] = param_3;
  *param_2 = 7;
  return;
LAB_00167e24:
  uVar3 = 0xffffffff;
  if (*param_2 != 0xb) {
    uVar6 = *(uint *)(param_1 + 5);
    *(undefined4 *)(param_1 + 5) = 0xffffffff;
    uVar3 = FUN_001674a0(param_1,0x7fff801e);
    if (uVar6 != 0xffffffff) {
      if (uVar3 == 0xffffffff) {
        uVar3 = uVar6;
      }
      else {
        uVar13 = uVar3;
        do {
          uVar8 = uVar13;
          uVar12 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar8 * 4);
          iVar5 = (uVar12 >> 0xe) - 0x1ffff;
          uVar13 = 0xffffffff;
          if (iVar5 != -1) {
            uVar13 = uVar8 + iVar5 + 1;
          }
        } while (uVar13 != 0xffffffff);
        iVar5 = uVar6 + ~uVar8;
        iVar4 = -iVar5;
        if (-1 < iVar5) {
          iVar4 = iVar5;
        }
        if (0x1ffff < iVar4) goto LAB_0016834c;
        *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar8 * 4) =
             (uVar12 & 0x3fff | iVar5 * 0x4000) + 0x7fffc000;
      }
    }
  }
  *(int *)((long)param_1 + 0x24) = (int)param_1[4];
  iVar4 = FUN_001674a0(param_1,uVar7 | 0x4003);
  *(int *)((long)param_1 + 0x24) = (int)param_1[4];
  iVar5 = FUN_001674a0(param_1,uVar7 | 0x800003);
  *(int *)((long)param_1 + 0x24) = (int)param_1[4];
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 5) == 0xffffffff) {
      *(uint *)(param_1 + 5) = uVar3;
    }
    else {
      uVar6 = *(uint *)(param_1 + 5);
      do {
        uVar12 = uVar6;
        uVar13 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar12 * 4);
        iVar1 = (uVar13 >> 0xe) - 0x1ffff;
        uVar6 = 0xffffffff;
        if (iVar1 != -1) {
          uVar6 = uVar12 + iVar1 + 1;
        }
      } while (uVar6 != 0xffffffff);
      iVar1 = uVar3 + ~uVar12;
      iVar10 = -iVar1;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (0x1ffff < iVar10) {
LAB_0016834c:
                    /* WARNING: Subroutine does not return */
        FUN_0016a180(param_1[2],"control structure too long");
      }
      *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar12 * 4) =
           (uVar13 & 0x3fff | iVar1 * 0x4000) + 0x7fffc000;
    }
  }
  goto LAB_00167f88;
}


