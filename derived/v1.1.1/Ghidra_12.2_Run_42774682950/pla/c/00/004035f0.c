/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004035f0; name: FUN_004035f0
 */


undefined8
FUN_004035f0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,int param_6,uint param_7,uint param_8,int param_9)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  char local_9d [40];
  char acStack_75 [21];
  
  uVar9 = 6;
  if (-1 < (int)param_7) {
    uVar9 = param_7;
  }
  dVar22 = param_1;
  iVar6 = param_9;
  if (0.0 <= param_1) {
    if ((param_8 >> 1 & 1) != 0) {
      iVar4 = 0x2b;
      goto joined_r0x004036d8;
    }
    iVar4 = (param_8 & 4) << 3;
    if (param_9 == 2) goto LAB_00403644;
joined_r0x00403a0c:
    if (param_9 == 0) {
      uVar19 = 0;
      goto LAB_004037c0;
    }
  }
  else {
    iVar4 = 0x2d;
joined_r0x004036d8:
    if (param_9 != 2) goto joined_r0x00403a0c;
LAB_00403644:
    if (param_1 == 0.0) {
      iVar6 = 0;
    }
    else {
      if ((0.0001 <= param_1) && ((param_1 < 10.0 || (uVar9 != 0)))) {
        if (0 < (int)uVar9) {
          dVar20 = 1.0;
          uVar10 = uVar9;
          for (uVar11 = uVar9 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            dVar20 = dVar20 * 10.0;
            uVar10 = uVar10 - 1;
          }
          if (2 < uVar9 - 1) {
            do {
              dVar20 = dVar20 * 10.0 * 10.0 * 10.0 * 10.0;
              uVar10 = uVar10 - 4;
            } while (uVar10 != 0);
          }
          if (dVar20 <= param_1) {
            iVar6 = 1;
            goto joined_r0x00403a0c;
          }
        }
        iVar6 = 0;
        goto joined_r0x00403a0c;
      }
      iVar6 = 1;
    }
  }
  if (param_1 == 0.0) {
    uVar19 = 0;
  }
  else {
    uVar19 = 0;
    if (param_1 < 1.0) {
      do {
        dVar22 = dVar22 * 10.0;
        uVar19 = uVar19 - 1;
      } while (dVar22 < 1.0);
    }
    for (; 10.0 < dVar22; dVar22 = dVar22 / 10.0) {
      uVar19 = uVar19 + 1;
    }
  }
  if (param_9 == 2) {
    if (uVar9 == 0) {
      uVar9 = 1;
    }
    if (iVar6 == 0) {
      uVar9 = uVar9 + ~(uint)uVar19;
      dVar22 = param_1;
      if ((int)uVar9 < 0) {
        return 0;
      }
      goto LAB_004037c0;
    }
    uVar9 = uVar9 - 1;
  }
  if (iVar6 != 1) {
    dVar22 = param_1;
  }
LAB_004037c0:
  dVar20 = -dVar22;
  if (0.0 <= dVar22) {
    dVar20 = dVar22;
  }
  if (1.8446744073709552e+19 < dVar20) {
    return 0;
  }
  uVar12 = (ulong)dVar20;
  uVar11 = uVar9;
  if (8 < (int)uVar9) {
    uVar11 = 9;
  }
  uVar7 = (ulong)uVar11;
  if (uVar11 == 0) {
    dVar22 = 1.0;
    uVar14 = 1;
  }
  else {
    dVar21 = 1.0;
    uVar10 = uVar11;
    for (uVar15 = uVar11 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      dVar21 = dVar21 * 10.0;
      uVar10 = uVar10 - 1;
    }
    if (2 < uVar11 - 1) {
      do {
        dVar21 = dVar21 * 10.0 * 10.0 * 10.0 * 10.0;
        uVar10 = uVar10 - 4;
      } while (uVar10 != 0);
    }
    dVar22 = 1.0;
    uVar14 = (ulong)(0.5 <= dVar21 - (double)(long)dVar21) + (long)dVar21;
    uVar15 = uVar11;
    for (uVar10 = uVar11 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      dVar22 = dVar22 * 10.0;
      uVar15 = uVar15 - 1;
    }
    if (2 < uVar11 - 1) {
      do {
        dVar22 = dVar22 * 10.0 * 10.0 * 10.0 * 10.0;
        uVar15 = uVar15 - 4;
      } while (uVar15 != 0);
    }
  }
  dVar22 = (dVar20 - (double)uVar12) * dVar22;
  lVar17 = (long)dVar22;
  uVar13 = (ulong)(0.5 <= dVar22 - (double)lVar17) + lVar17;
  uVar16 = 0;
  if (uVar14 <= uVar13) {
    uVar12 = uVar12 + 1;
  }
  uVar1 = 0;
  if (uVar14 <= uVar13) {
    uVar1 = uVar14;
  }
  do {
    acStack_75[uVar16 + 1] = "0123456789"[uVar12 % 10];
    uVar16 = uVar16 + 1;
    if (uVar12 < 10) break;
    uVar12 = uVar12 / 10;
  } while (uVar16 < 0x14);
  uVar13 = uVar13 - uVar1;
  uVar15 = (uint)uVar16;
  uVar10 = uVar15 - 1;
  if (uVar15 != 0x14) {
    uVar10 = uVar15;
  }
  acStack_75[(ulong)uVar10 + 1] = '\0';
  if (param_9 == 2) {
    uVar12 = (long)(int)uVar11;
    do {
      uVar7 = uVar12 - 1;
      if ((long)uVar12 < 1) {
        lVar17 = 0;
LAB_00403a18:
        uVar7 = uVar12 & 0xffffffff;
        break;
      }
      uVar14 = uVar13;
      lVar18 = 0;
      while( true ) {
        uVar13 = uVar14 / 10;
        if (lVar18 == 0 && uVar14 % 10 == 0) break;
        lVar17 = lVar18 + 1;
        local_9d[lVar18 + 0x15] = "0123456789"[uVar14 % 10];
        uVar14 = uVar13;
        lVar18 = lVar17;
        if ((long)uVar12 <= lVar17) goto LAB_00403a18;
      }
      lVar17 = 0;
      uVar12 = uVar7;
    } while (0 < (long)uVar7);
  }
  else if ((int)uVar9 < 1) {
    lVar17 = 0;
  }
  else {
    lVar17 = 0;
    do {
      local_9d[lVar17 + 0x15] = "0123456789"[uVar13 % 10];
      lVar17 = lVar17 + 1;
      uVar13 = uVar13 / 10;
    } while (lVar17 < (int)uVar11);
  }
  iVar5 = (int)lVar17 - (uint)((int)lVar17 == 0x14);
  uVar12 = 0;
  local_9d[(long)iVar5 + 0x15] = '\0';
  if (iVar6 == 1) {
    uVar12 = 0;
    uVar14 = -uVar19;
    if (-1 < (long)uVar19) {
      uVar14 = uVar19;
    }
    do {
      iVar2 = (int)uVar14;
      uVar14 = (ulong)(uint)(iVar2 / 10);
      local_9d[uVar12 + 1] = "0123456789"[iVar2 % 10];
      uVar12 = uVar12 + 1;
      if (iVar2 < 10) break;
    } while (uVar12 < 0x14);
    if (9 < iVar2) {
      return 0;
    }
    if ((int)uVar12 == 1) {
      uVar12 = 2;
      local_9d[2] = 0x30;
    }
  }
  iVar3 = (int)uVar7;
  iVar2 = -2 - (int)uVar12;
  if (iVar6 != 1) {
    iVar2 = 0;
  }
  uVar11 = ((((param_6 - (uint)(iVar4 != 0)) - uVar10) - iVar3) - (uint)(0 < iVar3)) + iVar2;
  uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
  uVar9 = -uVar11;
  if ((param_8 & 1) == 0) {
    uVar9 = uVar11;
  }
  if (((param_8 >> 4 & 1) == 0) || ((int)uVar9 < 1)) {
    for (; 0 < (int)uVar9; uVar9 = uVar9 - 1) {
      uVar8 = FUN_004031d0(param_2,param_3,param_4,param_5,0x20);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
    }
    if ((iVar4 != 0) &&
       (uVar8 = FUN_004031d0(param_2,param_3,param_4,param_5,iVar4), (int)uVar8 == 0)) {
      return uVar8;
    }
  }
  else {
    if (iVar4 == 0) goto LAB_00403b24;
    uVar8 = FUN_004031d0(param_2,param_3,param_4,param_5,iVar4);
    iVar4 = (int)uVar8;
    while( true ) {
      if (iVar4 == 0) {
        return uVar8;
      }
      uVar9 = uVar9 - 1;
      if ((int)uVar9 < 1) break;
LAB_00403b24:
      uVar8 = FUN_004031d0(param_2,param_3,param_4,param_5,0x30);
      iVar4 = (int)uVar8;
    }
    uVar9 = 0;
  }
  iVar4 = iVar3 - iVar5;
  lVar17 = (long)(int)uVar10;
  while (0 < lVar17) {
    uVar8 = FUN_004031d0(param_2,param_3,param_4,param_5,acStack_75[lVar17]);
    lVar17 = lVar17 + -1;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
  }
  if (((param_8 >> 3 & 1) != 0) || (0 < iVar3)) {
    uVar8 = FUN_004031d0(param_2,param_3,param_4,param_5,0x2e);
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    lVar17 = (long)iVar5;
    while (0 < lVar17) {
      iVar5 = FUN_004031d0(param_2,param_3,param_4,param_5,local_9d[lVar17 + 0x14]);
      lVar17 = lVar17 + -1;
      if (iVar5 == 0) {
        return 0;
      }
    }
  }
  for (; 0 < iVar4; iVar4 = iVar4 + -1) {
    uVar8 = FUN_004031d0(param_2,param_3,param_4,param_5,0x30);
    if ((int)uVar8 == 0) {
      return uVar8;
    }
  }
  if (iVar6 == 1) {
    uVar8 = FUN_004031d0(param_2,param_3,param_4,param_5,param_8 & 0x20 ^ 0x65);
    if ((int)uVar8 != 0) {
      if ((long)uVar19 < 0) {
        uVar8 = 0x2d;
      }
      else {
        uVar8 = 0x2b;
      }
      uVar8 = FUN_004031d0(param_2,param_3,param_4,param_5,uVar8);
      if ((int)uVar8 != 0) {
        uVar19 = uVar12 & 0xffffffff;
        do {
          if ((long)uVar19 < 1) goto LAB_00403d44;
          iVar6 = FUN_004031d0(param_2,param_3,param_4,param_5,local_9d[uVar19]);
          uVar8 = 0;
          uVar19 = uVar19 - 1;
        } while (iVar6 != 0);
      }
    }
  }
  else {
LAB_00403d44:
    if ((int)uVar9 < 0) {
      do {
        uVar8 = FUN_004031d0(param_2,param_3,param_4,param_5,0x20);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        uVar9 = uVar9 + 1;
        uVar8 = 1;
      } while (uVar9 != 0);
    }
    else {
      uVar8 = 1;
    }
  }
  return uVar8;
}


