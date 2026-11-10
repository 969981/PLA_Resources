/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00820c20; name: thunk_FUN_00820c30
 */


undefined8 thunk_FUN_00820c30(short *param_1,long *param_2,uint param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  bool bVar18;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar6 = PTR_DAT_04377b60;
  pcVar8 = (char *)param_2[1];
  cVar3 = *PTR_DAT_04377b60;
  cVar4 = cVar3;
  if (*pcVar8 != cVar3) {
    uVar16 = 0;
    do {
      uVar9 = uVar16;
      cVar4 = *pcVar8;
      if (uVar9 == 0x80000) goto joined_r0x00820dcc;
      uVar16 = uVar9 + 1;
    } while (pcVar8[uVar9 + 1] != cVar3);
    pcVar1 = PTR_DAT_04377b60;
    if (-1 < (int)(uVar9 + 1) || 0x7ffff < uVar9) {
      pcVar1 = pcVar8;
    }
    cVar4 = *pcVar1;
  }
joined_r0x00820dcc:
  if (cVar4 == '-') {
    iVar14 = -1;
    uVar16 = 1;
  }
  else {
    iVar14 = 1;
    uVar16 = (ulong)(cVar4 == '+');
  }
  if (0 < (int)param_3) {
    if (param_3 == 10) goto LAB_00820ee4;
    goto LAB_00820cec;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar8 = (char *)param_2[1];
  if (*pcVar8 == cVar3) {
LAB_00820e38:
    iVar11 = 0;
  }
  else {
    uVar9 = 0;
    do {
      uVar10 = uVar9;
      if (uVar10 == 0x80000) goto LAB_00820e38;
      uVar9 = uVar10 + 1;
    } while (pcVar8[uVar10 + 1] != cVar3);
    iVar11 = 0;
    if (uVar10 >> 0x13 == 0) {
      iVar11 = (int)(uVar10 + 1);
    }
  }
  pbVar2 = puVar6;
  if ((int)uVar16 <= iVar11) {
    pbVar2 = (byte *)(pcVar8 + uVar16);
  }
  if (9 < *pbVar2 - 0x30) {
    return 0;
  }
  if (*pbVar2 != 0x30) {
LAB_00820ee4:
    bVar18 = false;
    iVar11 = 0;
    if (iVar14 < 0) {
      do {
        sVar13 = (short)iVar11;
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar8 = (char *)param_2[1];
        if (*pcVar8 == cVar3) {
LAB_0082100c:
          iVar12 = 0;
        }
        else {
          uVar9 = 0;
          do {
            uVar10 = uVar9;
            if (uVar10 == 0x80000) goto LAB_0082100c;
            uVar9 = uVar10 + 1;
          } while (pcVar8[uVar10 + 1] != cVar3);
          iVar12 = 0;
          if (uVar10 >> 0x13 == 0) {
            iVar12 = (int)(uVar10 + 1);
          }
        }
        iVar15 = (int)uVar16;
        pbVar2 = puVar6;
        if (iVar15 <= iVar12 && -1 < iVar15) {
          pbVar2 = (byte *)(pcVar8 + iVar15);
        }
        iVar12 = *pbVar2 - 0x30;
        if (0x39 < *pbVar2) {
          iVar12 = -1;
        }
        if (iVar12 < 0) goto LAB_00821068;
        if (0x1998 < (iVar11 + 0xcccU & 0xffff)) {
          return 0;
        }
        if ((int)(short)(iVar11 * 10) < iVar12 + -0x8000) {
          return 0;
        }
        iVar11 = iVar11 * 10 + iVar12 * iVar14;
        uVar16 = (ulong)(iVar15 + 1);
        bVar18 = true;
      } while( true );
    }
    do {
      sVar13 = (short)iVar11;
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar8 = (char *)param_2[1];
      if (*pcVar8 == cVar3) {
LAB_00820f50:
        iVar12 = 0;
      }
      else {
        uVar9 = 0;
        do {
          uVar10 = uVar9;
          if (uVar10 == 0x80000) goto LAB_00820f50;
          uVar9 = uVar10 + 1;
        } while (pcVar8[uVar10 + 1] != cVar3);
        iVar12 = 0;
        if (uVar10 >> 0x13 == 0) {
          iVar12 = (int)(uVar10 + 1);
        }
      }
      iVar15 = (int)uVar16;
      pbVar2 = puVar6;
      if (iVar15 <= iVar12 && -1 < iVar15) {
        pbVar2 = (byte *)(pcVar8 + iVar15);
      }
      iVar12 = *pbVar2 - 0x30;
      if (0x39 < *pbVar2) {
        iVar12 = -1;
      }
      if (iVar12 < 0) {
LAB_00821068:
        if (bVar18) {
          if (param_1 != (short *)0x0) {
            *param_1 = sVar13;
          }
          return 1;
        }
        return 0;
      }
      if (0x1998 < (iVar11 + 0xcccU & 0xffff)) {
        return 0;
      }
      if (0x7fff - iVar12 < (int)(short)(iVar11 * 10)) {
        return 0;
      }
      iVar11 = iVar11 * 10 + iVar12 * iVar14;
      uVar16 = (ulong)(iVar15 + 1);
      bVar18 = true;
    } while( true );
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar8 = (char *)param_2[1];
  if (*pcVar8 == cVar3) {
LAB_00820eb4:
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      uVar10 = uVar9;
      if (uVar10 == 0x80000) goto LAB_00820eb4;
      uVar9 = uVar10 + 1;
    } while (pcVar8[uVar10 + 1] != cVar3);
    if (uVar10 >> 0x13 != 0) goto LAB_00820eb4;
  }
  pcVar8 = pcVar8 + uVar16 + 1;
  if ((int)uVar9 <= (int)uVar16) {
    pcVar8 = puVar6;
  }
  if (*pcVar8 == 'b') {
    uVar16 = uVar16 | 2;
    param_3 = 2;
  }
  else if (*pcVar8 == 'x') {
    uVar16 = uVar16 | 2;
    param_3 = 0x10;
  }
  else {
    param_3 = 8;
  }
LAB_00820cec:
  uVar5 = 0;
  if (param_3 != 0) {
    uVar5 = 0xffff / param_3;
  }
  bVar18 = false;
  uVar17 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar8 = (char *)param_2[1];
    if (*pcVar8 == cVar3) {
LAB_00820d54:
      iVar11 = 0;
    }
    else {
      uVar9 = 0;
      do {
        uVar10 = uVar9;
        if (uVar10 == 0x80000) goto LAB_00820d54;
        uVar9 = uVar10 + 1;
      } while (pcVar8[uVar10 + 1] != cVar3);
      iVar11 = 0;
      if (uVar10 >> 0x13 == 0) {
        iVar11 = (int)(uVar10 + 1);
      }
    }
    iVar12 = (int)uVar16;
    pbVar2 = puVar6;
    if (iVar12 <= iVar11 && -1 < iVar12) {
      pbVar2 = (byte *)(pcVar8 + iVar12);
    }
    uVar7 = tolower((uint)*pbVar2);
    uVar7 = uVar7 & 0xff;
    iVar11 = uVar7 - 0x57;
    if (5 < uVar7 - 0x61) {
      iVar11 = -1;
    }
    if (uVar7 < 0x3a) {
      iVar11 = uVar7 - 0x30;
    }
    if ((iVar11 < 0) || ((int)param_3 <= iVar11)) {
      if (!bVar18) {
        return 0;
      }
      *param_1 = (short)uVar17 * (short)iVar14;
      return 1;
    }
    if (uVar5 < (uVar17 & 0xffff)) {
      return 0;
    }
    if (0xffff - iVar11 < (int)(uVar17 * param_3 & 0xffff)) {
      return 0;
    }
    uVar17 = uVar17 * param_3 + iVar11;
    uVar16 = (ulong)(iVar12 + 1);
    bVar18 = true;
  } while( true );
}


