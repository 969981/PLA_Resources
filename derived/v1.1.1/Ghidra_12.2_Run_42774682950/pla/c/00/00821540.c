/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00821540; name: thunk_FUN_00821550
 */


undefined8 thunk_FUN_00821550(char *param_1,long *param_2,uint param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  bool bVar17;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar5 = PTR_DAT_04377b60;
  pcVar7 = (char *)param_2[1];
  cVar3 = *PTR_DAT_04377b60;
  cVar12 = cVar3;
  if (*pcVar7 != cVar3) {
    uVar15 = 0;
    do {
      uVar8 = uVar15;
      cVar12 = *pcVar7;
      if (uVar8 == 0x80000) goto joined_r0x008216ec;
      uVar15 = uVar8 + 1;
    } while (pcVar7[uVar8 + 1] != cVar3);
    pcVar1 = PTR_DAT_04377b60;
    if (-1 < (int)(uVar8 + 1) || 0x7ffff < uVar8) {
      pcVar1 = pcVar7;
    }
    cVar12 = *pcVar1;
  }
joined_r0x008216ec:
  if (cVar12 == '-') {
    iVar13 = -1;
    uVar15 = 1;
  }
  else {
    iVar13 = 1;
    uVar15 = (ulong)(cVar12 == '+');
  }
  if (0 < (int)param_3) {
    if (param_3 == 10) goto LAB_00821804;
    goto LAB_0082160c;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar7 = (char *)param_2[1];
  if (*pcVar7 == cVar3) {
LAB_00821758:
    iVar10 = 0;
  }
  else {
    uVar8 = 0;
    do {
      uVar9 = uVar8;
      if (uVar9 == 0x80000) goto LAB_00821758;
      uVar8 = uVar9 + 1;
    } while (pcVar7[uVar9 + 1] != cVar3);
    iVar10 = 0;
    if (uVar9 >> 0x13 == 0) {
      iVar10 = (int)(uVar9 + 1);
    }
  }
  pbVar2 = puVar5;
  if ((int)uVar15 <= iVar10) {
    pbVar2 = (byte *)(pcVar7 + uVar15);
  }
  if (9 < *pbVar2 - 0x30) {
    return 0;
  }
  if (*pbVar2 != 0x30) {
LAB_00821804:
    bVar17 = false;
    iVar10 = 0;
    if (iVar13 < 0) {
      do {
        cVar12 = (char)iVar10;
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar7 = (char *)param_2[1];
        if (*pcVar7 == cVar3) {
LAB_0082192c:
          iVar11 = 0;
        }
        else {
          uVar8 = 0;
          do {
            uVar9 = uVar8;
            if (uVar9 == 0x80000) goto LAB_0082192c;
            uVar8 = uVar9 + 1;
          } while (pcVar7[uVar9 + 1] != cVar3);
          iVar11 = 0;
          if (uVar9 >> 0x13 == 0) {
            iVar11 = (int)(uVar9 + 1);
          }
        }
        iVar14 = (int)uVar15;
        pbVar2 = puVar5;
        if (iVar14 <= iVar11 && -1 < iVar14) {
          pbVar2 = (byte *)(pcVar7 + iVar14);
        }
        iVar11 = *pbVar2 - 0x30;
        if (0x39 < *pbVar2) {
          iVar11 = -1;
        }
        if (iVar11 < 0) goto LAB_0082198c;
        if (0x18 < (iVar10 + 0xcU & 0xff)) {
          return 0;
        }
        if ((int)(char)(iVar10 * 10) < iVar11 + -0x80) {
          return 0;
        }
        iVar10 = iVar10 * 10 + iVar11 * iVar13;
        uVar15 = (ulong)(iVar14 + 1);
        bVar17 = true;
      } while( true );
    }
    do {
      cVar12 = (char)iVar10;
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar7 = (char *)param_2[1];
      if (*pcVar7 == cVar3) {
LAB_0082186c:
        iVar11 = 0;
      }
      else {
        uVar8 = 0;
        do {
          uVar9 = uVar8;
          if (uVar9 == 0x80000) goto LAB_0082186c;
          uVar8 = uVar9 + 1;
        } while (pcVar7[uVar9 + 1] != cVar3);
        iVar11 = 0;
        if (uVar9 >> 0x13 == 0) {
          iVar11 = (int)(uVar9 + 1);
        }
      }
      iVar14 = (int)uVar15;
      pbVar2 = puVar5;
      if (iVar14 <= iVar11 && -1 < iVar14) {
        pbVar2 = (byte *)(pcVar7 + iVar14);
      }
      iVar11 = *pbVar2 - 0x30;
      if (0x39 < *pbVar2) {
        iVar11 = -1;
      }
      if (iVar11 < 0) {
LAB_0082198c:
        if (bVar17) {
          if (param_1 != (char *)0x0) {
            *param_1 = cVar12;
          }
          return 1;
        }
        return 0;
      }
      if (0x18 < (iVar10 + 0xcU & 0xff)) {
        return 0;
      }
      if (0x7f - iVar11 < (int)(char)(iVar10 * 10)) {
        return 0;
      }
      iVar10 = iVar10 * 10 + iVar11 * iVar13;
      uVar15 = (ulong)(iVar14 + 1);
      bVar17 = true;
    } while( true );
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar7 = (char *)param_2[1];
  if (*pcVar7 == cVar3) {
LAB_008217d4:
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      uVar9 = uVar8;
      if (uVar9 == 0x80000) goto LAB_008217d4;
      uVar8 = uVar9 + 1;
    } while (pcVar7[uVar9 + 1] != cVar3);
    if (uVar9 >> 0x13 != 0) goto LAB_008217d4;
  }
  pcVar7 = pcVar7 + uVar15 + 1;
  if ((int)uVar8 <= (int)uVar15) {
    pcVar7 = puVar5;
  }
  if (*pcVar7 == 'b') {
    uVar15 = uVar15 | 2;
    param_3 = 2;
  }
  else if (*pcVar7 == 'x') {
    uVar15 = uVar15 | 2;
    param_3 = 0x10;
  }
  else {
    param_3 = 8;
  }
LAB_0082160c:
  uVar4 = 0;
  if (param_3 != 0) {
    uVar4 = 0xff / param_3;
  }
  bVar17 = false;
  uVar16 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar7 = (char *)param_2[1];
    if (*pcVar7 == cVar3) {
LAB_00821674:
      iVar10 = 0;
    }
    else {
      uVar8 = 0;
      do {
        uVar9 = uVar8;
        if (uVar9 == 0x80000) goto LAB_00821674;
        uVar8 = uVar9 + 1;
      } while (pcVar7[uVar9 + 1] != cVar3);
      iVar10 = 0;
      if (uVar9 >> 0x13 == 0) {
        iVar10 = (int)(uVar9 + 1);
      }
    }
    iVar11 = (int)uVar15;
    pbVar2 = puVar5;
    if (iVar11 <= iVar10 && -1 < iVar11) {
      pbVar2 = (byte *)(pcVar7 + iVar11);
    }
    uVar6 = tolower((uint)*pbVar2);
    uVar6 = uVar6 & 0xff;
    iVar10 = uVar6 - 0x57;
    if (5 < uVar6 - 0x61) {
      iVar10 = -1;
    }
    if (uVar6 < 0x3a) {
      iVar10 = uVar6 - 0x30;
    }
    if ((iVar10 < 0) || ((int)param_3 <= iVar10)) {
      if (!bVar17) {
        return 0;
      }
      *param_1 = (char)uVar16 * (char)iVar13;
      return 1;
    }
    if (uVar4 < (uVar16 & 0xff)) {
      return 0;
    }
    if (0xff - iVar10 < (int)(uVar16 * param_3 & 0xff)) {
      return 0;
    }
    uVar16 = uVar16 * param_3 + iVar10;
    uVar15 = (ulong)(iVar11 + 1);
    bVar17 = true;
  } while( true );
}


