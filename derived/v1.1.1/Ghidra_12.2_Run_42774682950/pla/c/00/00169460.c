/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00169460; name: FUN_00169460
 */


void FUN_00169460(long *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    iVar3 = FUN_00169190(param_1,param_2,param_3,param_4);
    if (iVar3 != 0) {
      return;
    }
    uVar12 = param_2 + 0xd;
    break;
  case 0xc:
    if (param_4[4] == param_4[5]) {
      FUN_00167ad0();
      iVar3 = *param_4;
    }
    else {
      FUN_00168360(param_1,param_4);
      iVar3 = *param_4;
    }
    if (iVar3 == 0xc) {
      lVar8 = *(long *)(*param_1 + 0x38);
      lVar9 = (long)param_4[2];
      uVar12 = *(uint *)(lVar8 + lVar9 * 4);
      if ((uVar12 & 0x3f) == 0x1d) {
        if (((*param_3 == 7) && (((uint)param_3[2] >> 8 & 1) == 0)) &&
           ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_3[2])) {
          *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
          lVar8 = *(long *)(*param_1 + 0x38);
          lVar9 = (long)param_4[2];
          uVar12 = *(uint *)(lVar8 + lVar9 * 4);
        }
        *(uint *)(lVar8 + lVar9 * 4) = uVar12 & 0x7fffff | param_3[2] << 0x17;
        *param_3 = 0xc;
        param_3[2] = param_4[2];
        return;
      }
    }
    FUN_00167ad0(param_1,param_4);
    if (((*param_4 == 7) && (((uint)param_4[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_4[2])) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
    }
    bVar2 = *(byte *)((long)param_1 + 0x3c);
    bVar6 = bVar2 + 1;
    if (*(byte *)(*param_1 + 0xc) <= bVar2) {
      if (0xfd < bVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0016a180(param_1[2],"function or expression needs too many registers");
      }
      *(byte *)(*param_1 + 0xc) = bVar6;
      bVar6 = *(char *)((long)param_1 + 0x3c) + 1;
    }
    *(byte *)((long)param_1 + 0x3c) = bVar6;
    FUN_00167ca0(param_1,param_4,bVar6 - 1);
    uVar12 = 0x1d;
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    uVar12 = param_3[2] | 0x100;
    if (*param_3 != 4) {
      uVar12 = param_3[2];
    }
    iVar3 = FUN_001684a0(param_1,param_4);
    if (*param_3 == 7) {
      uVar4 = param_3[2];
    }
    else {
      uVar4 = 0xffffffff;
    }
    uVar13 = 0xffffffff;
    if (*param_4 == 7) {
      uVar13 = param_4[2];
    }
    if ((int)uVar13 < (int)uVar4) {
      if (((uVar4 >> 8 & 1) == 0) && ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)uVar4)) {
        *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
      }
      if (((uVar13 >> 8 & 1) == 0) && ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)uVar13)) {
LAB_001695a0:
        *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
      }
    }
    else {
      if (((uVar13 >> 8 & 1) == 0) && ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)uVar13)) {
        *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
      }
      if (((uVar4 >> 8 & 1) == 0) && ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)uVar4))
      goto LAB_001695a0;
    }
    if (param_2 - 0x11U < 2) {
      FUN_001674a0(param_1,param_2 + 0xfU | iVar3 << 0x17 | uVar12 << 0xe | 0x40);
      uVar12 = *(uint *)(param_1 + 5);
      *(undefined4 *)(param_1 + 5) = 0xffffffff;
      uVar4 = FUN_001674a0(param_1,0x7fff801e);
      if (uVar12 == 0xffffffff) goto LAB_00169744;
      if (uVar4 == 0xffffffff) goto LAB_00169740;
      lVar8 = *(long *)(*param_1 + 0x38);
      uVar13 = uVar4;
      do {
        uVar11 = uVar13;
        uVar7 = *(uint *)(lVar8 + (long)(int)uVar11 * 4);
        iVar3 = (uVar7 >> 0xe) - 0x1ffff;
        uVar13 = 0xffffffff;
        if (iVar3 != -1) {
          uVar13 = uVar11 + iVar3 + 1;
        }
      } while (uVar13 != 0xffffffff);
    }
    else if (param_2 == 0x10) {
      FUN_001674a0(param_1,iVar3 << 0xe | uVar12 << 0x17 | 0x1f);
      uVar12 = *(uint *)(param_1 + 5);
      *(undefined4 *)(param_1 + 5) = 0xffffffff;
      uVar4 = FUN_001674a0(param_1,0x7fff801e);
      if (uVar12 == 0xffffffff) goto LAB_00169744;
      if (uVar4 == 0xffffffff) {
LAB_00169740:
        uVar4 = uVar12;
        goto LAB_00169744;
      }
      lVar8 = *(long *)(*param_1 + 0x38);
      uVar13 = uVar4;
      do {
        uVar11 = uVar13;
        uVar7 = *(uint *)(lVar8 + (long)(int)uVar11 * 4);
        iVar3 = (uVar7 >> 0xe) - 0x1ffff;
        uVar13 = 0xffffffff;
        if (iVar3 != -1) {
          uVar13 = uVar11 + iVar3 + 1;
        }
      } while (uVar13 != 0xffffffff);
    }
    else {
      FUN_001674a0(param_1,param_2 + 0x12U | iVar3 << 0xe | uVar12 << 0x17 | 0x40);
      uVar12 = *(uint *)(param_1 + 5);
      *(undefined4 *)(param_1 + 5) = 0xffffffff;
      uVar4 = FUN_001674a0(param_1,0x7fff801e);
      if (uVar12 == 0xffffffff) goto LAB_00169744;
      if (uVar4 == 0xffffffff) goto LAB_00169740;
      lVar8 = *(long *)(*param_1 + 0x38);
      uVar13 = uVar4;
      do {
        uVar11 = uVar13;
        uVar7 = *(uint *)(lVar8 + (long)(int)uVar11 * 4);
        iVar3 = (uVar7 >> 0xe) - 0x1ffff;
        uVar13 = 0xffffffff;
        if (iVar3 != -1) {
          uVar13 = uVar11 + iVar3 + 1;
        }
      } while (uVar13 != 0xffffffff);
    }
    iVar3 = uVar12 + ~uVar11;
    iVar5 = -iVar3;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    if (0x1ffff < iVar5) {
LAB_0016998c:
                    /* WARNING: Subroutine does not return */
      FUN_0016a180(param_1[2],"control structure too long");
    }
    *(uint *)(lVar8 + (long)(int)uVar11 * 4) = (uVar7 & 0x3fff | iVar3 * 0x4000) + 0x7fffc000;
LAB_00169744:
    param_3[2] = uVar4;
    *param_3 = 0xb;
    return;
  case 0x13:
    FUN_00167ad0(param_1,param_4);
    iVar3 = param_3[5];
    if (iVar3 != -1) {
      if (param_4[5] == 0xffffffff) {
        param_4[5] = iVar3;
      }
      else {
        lVar8 = *(long *)(*param_1 + 0x38);
        uVar12 = param_4[5];
        do {
          uVar13 = uVar12;
          uVar4 = *(uint *)(lVar8 + (long)(int)uVar13 * 4);
          iVar5 = (uVar4 >> 0xe) - 0x1ffff;
          uVar12 = 0xffffffff;
          if (iVar5 != -1) {
            uVar12 = uVar13 + iVar5 + 1;
          }
        } while (uVar12 != 0xffffffff);
LAB_00169828:
        iVar3 = iVar3 + ~uVar13;
        iVar5 = -iVar3;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        if (0x1ffff < iVar5) goto LAB_0016998c;
        *(uint *)(lVar8 + (long)(int)uVar13 * 4) = (uVar4 & 0x3fff | iVar3 * 0x4000) + 0x7fffc000;
      }
    }
    goto LAB_00169968;
  case 0x14:
    FUN_00167ad0(param_1,param_4);
    iVar3 = param_3[4];
    if (iVar3 != -1) {
      if (param_4[4] != 0xffffffff) {
        lVar8 = *(long *)(*param_1 + 0x38);
        uVar12 = param_4[4];
        do {
          uVar13 = uVar12;
          uVar4 = *(uint *)(lVar8 + (long)(int)uVar13 * 4);
          iVar5 = (uVar4 >> 0xe) - 0x1ffff;
          uVar12 = 0xffffffff;
          if (iVar5 != -1) {
            uVar12 = uVar13 + iVar5 + 1;
          }
        } while (uVar12 != 0xffffffff);
        goto LAB_00169828;
      }
      param_4[4] = iVar3;
    }
LAB_00169968:
    uVar1 = *(undefined8 *)param_4;
    uVar10 = *(undefined8 *)(param_4 + 4);
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)(param_3 + 4) = uVar10;
    *(undefined8 *)param_3 = uVar1;
switchD_001694a8_default:
    return;
  default:
    goto switchD_001694a8_default;
  }
  iVar3 = FUN_001684a0(param_1,param_4);
  iVar5 = FUN_001684a0(param_1,param_3);
  if (*param_3 == 7) {
    uVar4 = param_3[2];
    if (*param_4 == 7) goto LAB_00169a58;
LAB_00169a0c:
    uVar13 = 0xffffffff;
    if (uVar4 < 0x80000000) goto LAB_00169a64;
LAB_00169a18:
    if (((uVar13 >> 8 & 1) == 0) && ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)uVar13)) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
    }
    if (((uVar4 >> 8 & 1) != 0) || ((int)uVar4 < (int)(uint)*(byte *)((long)param_1 + 0x3a)))
    goto LAB_00169a9c;
  }
  else {
    uVar4 = 0xffffffff;
    if (*param_4 != 7) goto LAB_00169a0c;
LAB_00169a58:
    uVar13 = param_4[2];
    if ((int)uVar4 <= (int)uVar13) goto LAB_00169a18;
LAB_00169a64:
    if (((uVar4 >> 8 & 1) == 0) && ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)uVar4)) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
    }
    if (((uVar13 >> 8 & 1) != 0) || ((int)uVar13 < (int)(uint)*(byte *)((long)param_1 + 0x3a)))
    goto LAB_00169a9c;
  }
  *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
LAB_00169a9c:
  iVar3 = FUN_001674a0(param_1,uVar12 | iVar3 << 0xe | iVar5 << 0x17);
  param_3[2] = iVar3;
  *param_3 = 0xc;
  *(undefined4 *)(*(long *)(*param_1 + 0x48) + (long)(int)param_1[4] * 4 + -4) = param_5;
  return;
}


