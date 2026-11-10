/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008210c0; name: FUN_008210c0
 */


undefined8 FUN_008210c0(char *param_1,long *param_2,uint param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  bool bVar16;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar4 = PTR_DAT_04377b60;
  pcVar6 = (char *)param_2[1];
  cVar3 = *PTR_DAT_04377b60;
  cVar10 = cVar3;
  if (*pcVar6 != cVar3) {
    uVar14 = 0;
    do {
      uVar7 = uVar14;
      cVar10 = *pcVar6;
      if (uVar7 == 0x80000) goto joined_r0x0082125c;
      uVar14 = uVar7 + 1;
    } while (pcVar6[uVar7 + 1] != cVar3);
    pcVar1 = PTR_DAT_04377b60;
    if (-1 < (int)(uVar7 + 1) || 0x7ffff < uVar7) {
      pcVar1 = pcVar6;
    }
    cVar10 = *pcVar1;
  }
joined_r0x0082125c:
  if (cVar10 == '-') {
    iVar12 = -1;
    uVar14 = 1;
  }
  else {
    iVar12 = 1;
    uVar14 = (ulong)(cVar10 == '+');
  }
  if (0 < (int)param_3) {
    if (param_3 == 10) goto LAB_00821374;
    goto LAB_0082117c;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar6 = (char *)param_2[1];
  if (*pcVar6 == cVar3) {
LAB_008212c8:
    iVar9 = 0;
  }
  else {
    uVar7 = 0;
    do {
      uVar8 = uVar7;
      if (uVar8 == 0x80000) goto LAB_008212c8;
      uVar7 = uVar8 + 1;
    } while (pcVar6[uVar8 + 1] != cVar3);
    iVar9 = 0;
    if (uVar8 >> 0x13 == 0) {
      iVar9 = (int)(uVar8 + 1);
    }
  }
  pbVar2 = puVar4;
  if ((int)uVar14 <= iVar9) {
    pbVar2 = (byte *)(pcVar6 + uVar14);
  }
  if (9 < *pbVar2 - 0x30) {
    return 0;
  }
  if (*pbVar2 != 0x30) {
LAB_00821374:
    bVar16 = false;
    uVar11 = 0;
    if (iVar12 < 0) {
      do {
        cVar10 = (char)uVar11;
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar6 = (char *)param_2[1];
        if (*pcVar6 == cVar3) {
LAB_0082149c:
          iVar9 = 0;
        }
        else {
          uVar7 = 0;
          do {
            uVar8 = uVar7;
            if (uVar8 == 0x80000) goto LAB_0082149c;
            uVar7 = uVar8 + 1;
          } while (pcVar6[uVar8 + 1] != cVar3);
          iVar9 = 0;
          if (uVar8 >> 0x13 == 0) {
            iVar9 = (int)(uVar8 + 1);
          }
        }
        iVar13 = (int)uVar14;
        pbVar2 = puVar4;
        if (iVar13 <= iVar9 && -1 < iVar13) {
          pbVar2 = (byte *)(pcVar6 + iVar13);
        }
        iVar9 = *pbVar2 - 0x30;
        if (0x39 < *pbVar2) {
          iVar9 = -1;
        }
        if (iVar9 < 0) goto LAB_008214f8;
        if (0x19 < (uVar11 & 0xff)) {
          return 0;
        }
        if ((int)(uVar11 * 10 & 0xfe) < iVar9) {
          return 0;
        }
        uVar11 = uVar11 * 10 + iVar9 * iVar12;
        uVar14 = (ulong)(iVar13 + 1);
        bVar16 = true;
      } while( true );
    }
    do {
      cVar10 = (char)uVar11;
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar6 = (char *)param_2[1];
      if (*pcVar6 == cVar3) {
LAB_008213dc:
        iVar9 = 0;
      }
      else {
        uVar7 = 0;
        do {
          uVar8 = uVar7;
          if (uVar8 == 0x80000) goto LAB_008213dc;
          uVar7 = uVar8 + 1;
        } while (pcVar6[uVar8 + 1] != cVar3);
        iVar9 = 0;
        if (uVar8 >> 0x13 == 0) {
          iVar9 = (int)(uVar8 + 1);
        }
      }
      iVar13 = (int)uVar14;
      pbVar2 = puVar4;
      if (iVar13 <= iVar9 && -1 < iVar13) {
        pbVar2 = (byte *)(pcVar6 + iVar13);
      }
      iVar9 = *pbVar2 - 0x30;
      if (0x39 < *pbVar2) {
        iVar9 = -1;
      }
      if (iVar9 < 0) {
LAB_008214f8:
        if (bVar16) {
          if (param_1 != (char *)0x0) {
            *param_1 = cVar10;
          }
          return 1;
        }
        return 0;
      }
      if (0x19 < (uVar11 & 0xff)) {
        return 0;
      }
      if (0xff - iVar9 < (int)(uVar11 * 10 & 0xfe)) {
        return 0;
      }
      uVar11 = uVar11 * 10 + iVar9 * iVar12;
      uVar14 = (ulong)(iVar13 + 1);
      bVar16 = true;
    } while( true );
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar6 = (char *)param_2[1];
  if (*pcVar6 == cVar3) {
LAB_00821344:
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      uVar8 = uVar7;
      if (uVar8 == 0x80000) goto LAB_00821344;
      uVar7 = uVar8 + 1;
    } while (pcVar6[uVar8 + 1] != cVar3);
    if (uVar8 >> 0x13 != 0) goto LAB_00821344;
  }
  pcVar6 = pcVar6 + uVar14 + 1;
  if ((int)uVar7 <= (int)uVar14) {
    pcVar6 = puVar4;
  }
  if (*pcVar6 == 'b') {
    uVar14 = uVar14 | 2;
    param_3 = 2;
  }
  else if (*pcVar6 == 'x') {
    uVar14 = uVar14 | 2;
    param_3 = 0x10;
  }
  else {
    param_3 = 8;
  }
LAB_0082117c:
  uVar11 = 0;
  if (param_3 != 0) {
    uVar11 = 0xff / param_3;
  }
  bVar16 = false;
  uVar15 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar6 = (char *)param_2[1];
    if (*pcVar6 == cVar3) {
LAB_008211e4:
      iVar9 = 0;
    }
    else {
      uVar7 = 0;
      do {
        uVar8 = uVar7;
        if (uVar8 == 0x80000) goto LAB_008211e4;
        uVar7 = uVar8 + 1;
      } while (pcVar6[uVar8 + 1] != cVar3);
      iVar9 = 0;
      if (uVar8 >> 0x13 == 0) {
        iVar9 = (int)(uVar8 + 1);
      }
    }
    iVar13 = (int)uVar14;
    pbVar2 = puVar4;
    if (iVar13 <= iVar9 && -1 < iVar13) {
      pbVar2 = (byte *)(pcVar6 + iVar13);
    }
    uVar5 = tolower((uint)*pbVar2);
    uVar5 = uVar5 & 0xff;
    iVar9 = uVar5 - 0x57;
    if (5 < uVar5 - 0x61) {
      iVar9 = -1;
    }
    if (uVar5 < 0x3a) {
      iVar9 = uVar5 - 0x30;
    }
    if ((iVar9 < 0) || ((int)param_3 <= iVar9)) {
      if (!bVar16) {
        return 0;
      }
      *param_1 = (char)uVar15 * (char)iVar12;
      return 1;
    }
    if (uVar11 < (uVar15 & 0xff)) {
      return 0;
    }
    if (0xff - iVar9 < (int)(uVar15 * param_3 & 0xff)) {
      return 0;
    }
    uVar15 = uVar15 * param_3 + iVar9;
    uVar14 = (ulong)(iVar13 + 1);
    bVar16 = true;
  } while( true );
}


