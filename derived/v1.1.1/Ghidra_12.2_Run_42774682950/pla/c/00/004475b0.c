/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004475b0; name: FUN_004475b0
 */


undefined8 FUN_004475b0(undefined8 *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  int local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar11 = param_2[1];
  if (uVar11 == 0x18) {
    bVar8 = (*(ulong *)(param_2 + 4) & 0x100) == 0;
    uVar14 = 7;
    iVar9 = 0xd;
    if (!bVar8) {
      iVar9 = 0xf;
    }
    iVar12 = 6;
  }
  else {
    if (uVar11 != 0x17) {
      return 0;
    }
    bVar8 = (*(ulong *)(param_2 + 4) & 0x100) == 0;
    uVar14 = 6;
    iVar9 = 0xb;
    if (!bVar8) {
      iVar9 = 0xd;
    }
    iVar12 = 5;
  }
  uVar2 = *param_2;
  lVar21 = *(long *)(param_2 + 2);
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if ((int)uVar2 < iVar9) {
    return 0;
  }
  iVar9 = 0;
  uVar20 = 0;
  local_a8 = 0;
  uVar19 = 0;
  do {
    if ((!(bool)(bVar8 ^ 1U | iVar12 * 2 != (int)uVar20)) &&
       (uVar13 = *(byte *)(lVar21 + uVar20) - 0x2b,
       uVar13 < 0x30 && (1L << ((ulong)uVar13 & 0x3f) & 0x800000000005U) != 0)) break;
    uVar10 = FUN_00405430(*(byte *)(lVar21 + uVar20),4);
    if ((int)uVar10 == 0) {
      return uVar10;
    }
    if ((ulong)uVar2 - 1 == uVar20) {
      return 0;
    }
    bVar3 = *(byte *)(lVar21 + uVar20);
    uVar10 = FUN_00405430(*(undefined1 *)(lVar21 + uVar20 + 1),4);
    if ((int)uVar10 == 0) {
      return uVar10;
    }
    if ((ulong)uVar2 - 2 == uVar20) {
      return 0;
    }
    iVar5 = (uint)*(byte *)(lVar21 + uVar20 + 1) + (uint)bVar3 * 10;
    uVar11 = param_2[1];
    uVar13 = uVar19;
    if (uVar11 == 0x17) {
      uVar13 = uVar19 + 1;
    }
    uVar16 = (ulong)uVar13;
    iVar7 = iVar5 + -0x210;
    if (iVar7 < *(int *)(&DAT_03a0bd84 + uVar16 * 4)) {
      return 0;
    }
    if ((int)(&DAT_03a0bda8)[uVar16] < iVar7) {
      return 0;
    }
    if (6 < uVar13) goto LAB_004476a8;
    switch(uVar16) {
    case 0:
      local_a8 = iVar7 * 100 + -0x76c;
      goto LAB_004476a0;
    case 1:
      if (uVar11 == 0x17) {
        local_a8 = iVar5 + -0x1ac;
        if (0x31 < iVar7) {
          local_a8 = iVar7;
        }
      }
      else {
        local_a8 = local_a8 + iVar7;
      }
LAB_004476a0:
      local_90 = CONCAT44(local_a8,(undefined4)local_90);
      break;
    case 2:
      iVar9 = iVar5 + -0x211;
      local_90 = CONCAT44(local_90._4_4_,iVar9);
      break;
    case 3:
      if (iVar9 == 1) {
        uVar13 = local_a8 + 0x76c;
        if ((int)uVar13 % 400 != 0) {
          uVar13 = ((int)uVar13 % 100 != 0 && (uVar13 & 3) == 0) | 0x1c;
          goto joined_r0x00447854;
        }
        if (0x1d < iVar7) {
          return 0;
        }
      }
      else {
        uVar13 = (&DAT_03a0bdcc)[iVar9];
joined_r0x00447854:
        if ((int)uVar13 < iVar7) {
          return 0;
        }
      }
      uStack_98 = CONCAT44(iVar7,(undefined4)uStack_98);
      iVar7 = iVar5 + -0x1e0 + (&DAT_03a0be2c)[iVar9] + -0x31;
      if (iVar9 < 2) {
        iVar15 = iVar9 + 0xe;
        uVar13 = local_a8 + 0x76b;
      }
      else {
        uVar13 = local_a8 + 0x76c;
        if ((int)uVar13 % 400 == 0) {
          uVar17 = 1;
        }
        else {
          uVar17 = (uint)((int)uVar13 % 100 != 0 && (uVar13 & 3) == 0);
        }
        iVar7 = uVar17 + iVar7;
        iVar15 = iVar9 + 2;
      }
      iVar6 = (int)uVar13 % 100;
      iVar1 = iVar6 + 3;
      if (-1 < iVar6) {
        iVar1 = iVar6;
      }
      uStack_88 = CONCAT44(iVar7,(iVar5 + -0x1e0 + (iVar15 * 0xd) / 5 + iVar6 + (int)uVar13 / 400 +
                                  (iVar1 >> 2) + ((int)uVar13 / 100) * 5 + -0x2a) % 7);
      break;
    case 4:
      uStack_98 = CONCAT44(uStack_98._4_4_,iVar7);
      break;
    case 5:
      local_a0 = CONCAT44(iVar7,(undefined4)local_a0);
      break;
    case 6:
      local_a0 = CONCAT44(local_a0._4_4_,iVar7);
    }
LAB_004476a8:
    uVar19 = uVar19 + 1;
    uVar20 = uVar20 + 2;
  } while (uVar19 != uVar14);
  uVar19 = (uint)uVar20;
  if ((uVar11 == 0x18) && (*(char *)(lVar21 + (uVar20 & 0xffffffff)) == '.')) {
    if (!bVar8) {
      return 0;
    }
    uVar11 = uVar19 | 1;
    if ((int)uVar2 <= (int)uVar11) {
      return 0;
    }
    uVar20 = (ulong)uVar11;
    do {
      iVar9 = FUN_00405430(*(undefined1 *)(lVar21 + uVar20),4);
      if (iVar9 == 0) break;
      uVar20 = uVar20 + 1;
    } while (uVar2 != (uint)uVar20);
    uVar19 = (uint)uVar20;
    if (uVar11 == uVar19) {
      return 0;
    }
    if (uVar19 == uVar2) {
      return 0;
    }
  }
  cVar4 = *(char *)(lVar21 + (int)uVar19);
  if (cVar4 == 'Z') {
    uVar19 = uVar19 + 1;
  }
  else {
    if (!bVar8) {
      return 0;
    }
    if ((cVar4 != '-') && (cVar4 != '+')) {
      return 0;
    }
    iVar9 = -1;
    if (cVar4 == '-') {
      iVar9 = 1;
    }
    if (uVar19 + 5 != uVar2) {
      return 0;
    }
    uVar11 = uVar14 + 1;
    lVar18 = (long)(int)(uVar19 + 1);
    uVar10 = FUN_00405430(*(undefined1 *)(lVar21 + lVar18),4);
    if (param_1 == (undefined8 *)0x0) {
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      bVar3 = *(byte *)(lVar21 + lVar18);
      uVar10 = FUN_00405430(*(undefined1 *)(lVar21 + lVar18 + 1),4);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      uVar13 = uVar11;
      if (param_2[1] != 0x17) {
        uVar13 = uVar14;
      }
      iVar9 = (uint)*(byte *)(lVar21 + lVar18 + 1) + (uint)bVar3 * 10 + -0x210;
      if (iVar9 < *(int *)(&DAT_03a0bd84 + (ulong)uVar13 * 4)) {
        return 0;
      }
      if ((int)(&DAT_03a0bda8)[uVar13] < iVar9) {
        return 0;
      }
      uVar10 = FUN_00405430(*(undefined1 *)(lVar21 + lVar18 + 2),4);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      bVar3 = *(byte *)(lVar21 + lVar18 + 2);
      uVar10 = FUN_00405430(*(undefined1 *)(lVar21 + lVar18 + 3),4);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      iVar9 = (uint)*(byte *)(lVar21 + lVar18 + 3) + (uint)bVar3 * 10 + -0x210;
      uVar14 = uVar14 + 2;
      if (param_2[1] != 0x17) {
        uVar14 = uVar11;
      }
      if (iVar9 < *(int *)(&DAT_03a0bd84 + (ulong)uVar14 * 4)) {
        return 0;
      }
      if ((int)(&DAT_03a0bda8)[uVar14] < iVar9) {
        return 0;
      }
      uVar19 = uVar19 + 5;
    }
    else {
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      bVar3 = *(byte *)(lVar21 + lVar18);
      uVar10 = FUN_00405430(*(undefined1 *)(lVar21 + lVar18 + 1),4);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      iVar12 = (uint)*(byte *)(lVar21 + lVar18 + 1) + (uint)bVar3 * 10 + -0x210;
      uVar13 = uVar11;
      if (param_2[1] != 0x17) {
        uVar13 = uVar14;
      }
      if (iVar12 < *(int *)(&DAT_03a0bd84 + (ulong)uVar13 * 4)) {
        return 0;
      }
      if ((int)(&DAT_03a0bda8)[uVar13] < iVar12) {
        return 0;
      }
      uVar10 = FUN_00405430(*(undefined1 *)(lVar21 + lVar18 + 2),4);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      bVar3 = *(byte *)(lVar21 + lVar18 + 2);
      uVar10 = FUN_00405430(*(undefined1 *)(lVar21 + lVar18 + 3),4);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      iVar5 = (uint)*(byte *)(lVar21 + lVar18 + 3) + (uint)bVar3 * 10 + -0x210;
      uVar14 = uVar14 + 2;
      if (param_2[1] != 0x17) {
        uVar14 = uVar11;
      }
      if (iVar5 < *(int *)(&DAT_03a0bd84 + (ulong)uVar14 * 4)) {
        return 0;
      }
      if ((int)(&DAT_03a0bda8)[uVar14] < iVar5) {
        return 0;
      }
      iVar12 = iVar12 * 0xe10 + iVar5 * 0x3c;
      uVar19 = uVar19 + 5;
      if ((iVar12 != 0) &&
         (uVar10 = FUN_00448150(&local_a0,0,(long)(iVar12 * iVar9)), (int)uVar10 == 0)) {
        return uVar10;
      }
    }
  }
  if (uVar19 != uVar2) {
    return 0;
  }
  if (param_1 == (undefined8 *)0x0) {
    return 1;
  }
  param_1[6] = local_70;
  param_1[3] = uStack_88;
  param_1[2] = local_90;
  param_1[5] = uStack_78;
  param_1[4] = local_80;
  param_1[1] = uStack_98;
  *param_1 = local_a0;
  return 1;
}


