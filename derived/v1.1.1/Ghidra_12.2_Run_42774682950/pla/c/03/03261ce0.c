/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03261ce0; name: FUN_03261ce0
 */


void FUN_03261ce0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  uint local_68;
  uint uStack_64;
  
  lVar17 = param_1[1];
  FUN_03261b50(param_1,&uStack_64,&local_68);
  uVar20 = (ulong)(int)local_68;
  uVar10 = (int)lVar17 - 1;
  lVar17 = *param_1;
  uVar18 = *(uint *)(lVar17 + (long)(int)uStack_64 * 4);
  uVar1 = uVar18 & 0xffff;
  uVar21 = *(uint *)(lVar17 + uVar20 * 4);
  uVar2 = uVar21 & 0xffff;
  uVar6 = uVar21 >> 0x10;
  uVar7 = uVar18 >> 0x10;
  iVar11 = uVar1 - uVar2;
  iVar12 = uVar7 - uVar6;
  iVar8 = -iVar12;
  if (-1 < iVar12) {
    iVar8 = iVar12;
  }
  iVar19 = iVar11 * iVar11 + iVar12 * iVar12;
  iVar16 = -1;
  if (0 < iVar12) {
    iVar16 = 1;
  }
  iVar24 = ((uVar21 - uVar18) * 2 & 0x10000) + (uVar21 - uVar18);
  iVar23 = -iVar11;
  if (-1 < iVar11) {
    iVar23 = iVar11;
  }
  iVar13 = uVar6 - uVar7;
  iVar14 = uVar2 - uVar1;
  iVar3 = iVar24 >> 0x10;
  iVar15 = (int)(short)iVar24;
  iVar24 = 0xffff;
  if (-1 >= iVar11) {
    iVar24 = 1;
  }
  iVar9 = -iVar19;
  if (iVar8 < iVar23) {
    uVar22 = uStack_64;
    while( true ) {
      uVar5 = 0;
      if (uVar22 != uVar10) {
        uVar5 = uVar22 + 1;
      }
      uVar22 = *(uint *)(lVar17 + (long)(int)uVar5 * 4);
      iVar8 = ((uVar22 & 0xffff) - uVar1) * iVar13 - ((uVar22 >> 0x10) - uVar7) * iVar14;
      if (0 < iVar8) {
        lVar26 = (long)iVar8 * (long)-iVar11;
        lVar25 = (long)iVar8 * (long)iVar12;
        iVar8 = iVar9;
        if (-1 < lVar26) {
          iVar8 = iVar19;
        }
        lVar4 = -lVar26;
        if (-1 < lVar26) {
          lVar4 = lVar26;
        }
        lVar26 = -lVar25;
        if (-1 < lVar25) {
          lVar26 = lVar25;
        }
        iVar16 = 0;
        if ((long)iVar8 != 0) {
          iVar16 = (int)((lVar4 + (iVar8 >> 1 ^ iVar8 >> 0x1f)) / (long)iVar8);
        }
        iVar16 = (uVar22 >> 0x10) + iVar16;
        iVar8 = iVar9;
        if (-1 < lVar25) {
          iVar8 = iVar19;
        }
        iVar23 = 0;
        if ((long)iVar8 != 0) {
          iVar23 = (int)((lVar26 + (iVar8 >> 1 ^ iVar8 >> 0x1f)) / (long)iVar8);
        }
        uVar22 = (uVar22 & 0xffff) + iVar23;
        iVar8 = iVar24;
        if ((int)((iVar16 - uVar6) * iVar11) <= (int)((uVar22 - uVar2) * iVar12)) {
          iVar8 = 0;
        }
        uVar22 = uVar22 | (iVar8 + iVar16) * 0x10000;
      }
      iVar8 = ((uVar22 - uVar18) * 2 & 0x10000) + (uVar22 - uVar18);
      if (-1 < (iVar8 >> 0x10) * iVar3 + (short)iVar8 * iVar15) {
        uVar18 = uVar22;
      }
      *(uint *)(lVar17 + (long)(int)uVar5 * 4) = uVar18;
      if (uVar5 == local_68) break;
      lVar17 = *param_1;
      uVar22 = uVar5;
    }
  }
  else {
    uVar22 = uStack_64;
    while( true ) {
      uVar5 = 0;
      if (uVar22 != uVar10) {
        uVar5 = uVar22 + 1;
      }
      uVar22 = *(uint *)(lVar17 + (long)(int)uVar5 * 4);
      iVar8 = ((uVar22 & 0xffff) - uVar1) * iVar13 - ((uVar22 >> 0x10) - uVar7) * iVar14;
      if (0 < iVar8) {
        lVar26 = (long)iVar8 * (long)-iVar11;
        lVar25 = (long)iVar8 * (long)iVar12;
        iVar8 = iVar9;
        if (-1 < lVar26) {
          iVar8 = iVar19;
        }
        lVar4 = -lVar26;
        if (-1 < lVar26) {
          lVar4 = lVar26;
        }
        lVar26 = -lVar25;
        if (-1 < lVar25) {
          lVar26 = lVar25;
        }
        iVar24 = 0;
        if ((long)iVar8 != 0) {
          iVar24 = (int)((lVar4 + (iVar8 >> 1 ^ iVar8 >> 0x1f)) / (long)iVar8);
        }
        iVar24 = (uVar22 >> 0x10) + iVar24;
        iVar8 = iVar9;
        if (-1 < lVar25) {
          iVar8 = iVar19;
        }
        iVar23 = 0;
        if ((long)iVar8 != 0) {
          iVar23 = (int)((lVar26 + (iVar8 >> 1 ^ iVar8 >> 0x1f)) / (long)iVar8);
        }
        iVar23 = (uVar22 & 0xffff) + iVar23;
        iVar8 = iVar16;
        if ((int)((iVar24 - uVar6) * iVar11) <= (int)((iVar23 - uVar2) * iVar12)) {
          iVar8 = 0;
        }
        uVar22 = iVar8 + iVar23 | iVar24 * 0x10000;
      }
      iVar8 = ((uVar22 - uVar18) * 2 & 0x10000) + (uVar22 - uVar18);
      if (-1 < (iVar8 >> 0x10) * iVar3 + (short)iVar8 * iVar15) {
        uVar18 = uVar22;
      }
      *(uint *)(lVar17 + (long)(int)uVar5 * 4) = uVar18;
      if (uVar5 == local_68) break;
      lVar17 = *param_1;
      uVar22 = uVar5;
    }
  }
  iVar16 = iVar14 * iVar14 + iVar13 * iVar13;
  iVar8 = -iVar13;
  if (-1 < iVar13) {
    iVar8 = iVar13;
  }
  iVar19 = -1;
  if (0 < iVar13) {
    iVar19 = 1;
  }
  iVar24 = -iVar14;
  if (-1 < iVar14) {
    iVar24 = iVar14;
  }
  iVar9 = -iVar16;
  iVar23 = 0xffff;
  if (-1 >= iVar14) {
    iVar23 = 1;
  }
  if (iVar8 < iVar24) {
    do {
      uVar18 = 0;
      if ((uint)uVar20 != uVar10) {
        uVar18 = (uint)uVar20 + 1;
      }
      uVar20 = (ulong)uVar18;
      uVar22 = *(uint *)(*param_1 + (long)(int)uVar18 * 4);
      iVar8 = ((uVar22 & 0xffff) - uVar2) * iVar12 - ((uVar22 >> 0x10) - uVar6) * iVar11;
      if (0 < iVar8) {
        lVar25 = (long)iVar8 * (long)-iVar14;
        lVar17 = (long)iVar8 * (long)iVar13;
        iVar8 = iVar9;
        if (-1 < lVar25) {
          iVar8 = iVar16;
        }
        lVar26 = -lVar25;
        if (-1 < lVar25) {
          lVar26 = lVar25;
        }
        lVar25 = -lVar17;
        if (-1 < lVar17) {
          lVar25 = lVar17;
        }
        iVar19 = 0;
        if ((long)iVar8 != 0) {
          iVar19 = (int)((lVar26 + (iVar8 >> 1 ^ iVar8 >> 0x1f)) / (long)iVar8);
        }
        iVar19 = (uVar22 >> 0x10) + iVar19;
        iVar8 = iVar9;
        if (-1 < lVar17) {
          iVar8 = iVar16;
        }
        iVar24 = 0;
        if ((long)iVar8 != 0) {
          iVar24 = (int)((lVar25 + (iVar8 >> 1 ^ iVar8 >> 0x1f)) / (long)iVar8);
        }
        uVar22 = (uVar22 & 0xffff) + iVar24;
        iVar8 = iVar23;
        if ((int)((iVar19 - uVar7) * iVar14) <= (int)((uVar22 - uVar1) * iVar13)) {
          iVar8 = 0;
        }
        uVar22 = uVar22 | (iVar8 + iVar19) * 0x10000;
      }
      iVar8 = ((uVar22 - uVar21) * 2 & 0x10000) + (uVar22 - uVar21);
      if ((iVar8 >> 0x10) * iVar3 + (short)iVar8 * iVar15 < 1) {
        uVar21 = uVar22;
      }
      *(uint *)(*param_1 + (long)(int)uVar18 * 4) = uVar21;
    } while (uVar18 != uStack_64);
  }
  else {
    do {
      uVar18 = 0;
      if ((uint)uVar20 != uVar10) {
        uVar18 = (uint)uVar20 + 1;
      }
      uVar20 = (ulong)uVar18;
      uVar22 = *(uint *)(*param_1 + (long)(int)uVar18 * 4);
      iVar8 = ((uVar22 & 0xffff) - uVar2) * iVar12 - ((uVar22 >> 0x10) - uVar6) * iVar11;
      if (0 < iVar8) {
        lVar25 = (long)iVar8 * (long)-iVar14;
        lVar17 = (long)iVar8 * (long)iVar13;
        iVar8 = iVar9;
        if (-1 < lVar25) {
          iVar8 = iVar16;
        }
        lVar26 = -lVar25;
        if (-1 < lVar25) {
          lVar26 = lVar25;
        }
        lVar25 = -lVar17;
        if (-1 < lVar17) {
          lVar25 = lVar17;
        }
        iVar24 = 0;
        if ((long)iVar8 != 0) {
          iVar24 = (int)((lVar26 + (iVar8 >> 1 ^ iVar8 >> 0x1f)) / (long)iVar8);
        }
        iVar24 = (uVar22 >> 0x10) + iVar24;
        iVar8 = iVar9;
        if (-1 < lVar17) {
          iVar8 = iVar16;
        }
        iVar23 = 0;
        if ((long)iVar8 != 0) {
          iVar23 = (int)((lVar25 + (iVar8 >> 1 ^ iVar8 >> 0x1f)) / (long)iVar8);
        }
        iVar23 = (uVar22 & 0xffff) + iVar23;
        iVar8 = iVar19;
        if ((int)((iVar24 - uVar7) * iVar14) <= (int)((iVar23 - uVar1) * iVar13)) {
          iVar8 = 0;
        }
        uVar22 = iVar8 + iVar23 | iVar24 * 0x10000;
      }
      iVar8 = ((uVar22 - uVar21) * 2 & 0x10000) + (uVar22 - uVar21);
      if ((iVar8 >> 0x10) * iVar3 + (short)iVar8 * iVar15 < 1) {
        uVar21 = uVar22;
      }
      *(uint *)(*param_1 + (long)(int)uVar18 * 4) = uVar21;
    } while (uVar18 != uStack_64);
  }
  return;
}


