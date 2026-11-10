/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081f9b0; name: FUN_0081f9b0
 */


undefined8 FUN_0081f9b0(long *param_1,long *param_2,int param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  bool bVar18;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar5 = PTR_DAT_04377b60;
  pcVar8 = (char *)param_2[1];
  cVar3 = *PTR_DAT_04377b60;
  cVar4 = cVar3;
  if (*pcVar8 != cVar3) {
    uVar15 = 0;
    do {
      uVar9 = uVar15;
      cVar4 = *pcVar8;
      if (uVar9 == 0x80000) goto joined_r0x0081fb54;
      uVar15 = uVar9 + 1;
    } while (pcVar8[uVar9 + 1] != cVar3);
    pcVar1 = PTR_DAT_04377b60;
    if (-1 < (int)(uVar9 + 1) || 0x7ffff < uVar9) {
      pcVar1 = pcVar8;
    }
    cVar4 = *pcVar1;
  }
joined_r0x0081fb54:
  if (cVar4 == '-') {
    iVar13 = -1;
    uVar15 = 1;
  }
  else {
    iVar13 = 1;
    uVar15 = (ulong)(cVar4 == '+');
  }
  if (0 < param_3) {
    if (param_3 == 10) goto LAB_0081fc6c;
    goto LAB_0081fa6c;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar8 = (char *)param_2[1];
  if (*pcVar8 == cVar3) {
LAB_0081fbc0:
    iVar11 = 0;
  }
  else {
    uVar9 = 0;
    do {
      uVar12 = uVar9;
      if (uVar12 == 0x80000) goto LAB_0081fbc0;
      uVar9 = uVar12 + 1;
    } while (pcVar8[uVar12 + 1] != cVar3);
    iVar11 = 0;
    if (uVar12 >> 0x13 == 0) {
      iVar11 = (int)(uVar12 + 1);
    }
  }
  pbVar2 = puVar5;
  if ((int)uVar15 <= iVar11) {
    pbVar2 = (byte *)(pcVar8 + uVar15);
  }
  if (9 < *pbVar2 - 0x30) {
    return 0;
  }
  if (*pbVar2 != 0x30) {
LAB_0081fc6c:
    bVar18 = false;
    lVar17 = 0;
    if (iVar13 < 0) {
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar8 = (char *)param_2[1];
        if (*pcVar8 == cVar3) {
LAB_0081fdac:
          iVar11 = 0;
        }
        else {
          uVar9 = 0;
          do {
            uVar12 = uVar9;
            if (uVar12 == 0x80000) goto LAB_0081fdac;
            uVar9 = uVar12 + 1;
          } while (pcVar8[uVar12 + 1] != cVar3);
          iVar11 = 0;
          if (uVar12 >> 0x13 == 0) {
            iVar11 = (int)(uVar12 + 1);
          }
        }
        iVar14 = (int)uVar15;
        pbVar2 = puVar5;
        if (iVar14 <= iVar11 && -1 < iVar14) {
          pbVar2 = (byte *)(pcVar8 + iVar14);
        }
        iVar11 = *pbVar2 - 0x30;
        if (0x39 < *pbVar2) {
          iVar11 = -1;
        }
        if (iVar11 < 0) goto LAB_0081fe10;
        if (0x1999999999999998 < lVar17 + 0xcccccccccccccccU) {
          return 0;
        }
        if (lVar17 * 10 < (long)((long)iVar11 | 0x8000000000000000U)) {
          return 0;
        }
        uVar15 = (ulong)(iVar14 + 1);
        bVar18 = true;
        lVar17 = lVar17 * 10 + (long)(iVar11 * iVar13);
      } while( true );
    }
    do {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar8 = (char *)param_2[1];
      if (*pcVar8 == cVar3) {
LAB_0081fce8:
        iVar11 = 0;
      }
      else {
        uVar9 = 0;
        do {
          uVar12 = uVar9;
          if (uVar12 == 0x80000) goto LAB_0081fce8;
          uVar9 = uVar12 + 1;
        } while (pcVar8[uVar12 + 1] != cVar3);
        iVar11 = 0;
        if (uVar12 >> 0x13 == 0) {
          iVar11 = (int)(uVar12 + 1);
        }
      }
      iVar14 = (int)uVar15;
      pbVar2 = puVar5;
      if (iVar14 <= iVar11 && -1 < iVar14) {
        pbVar2 = (byte *)(pcVar8 + iVar14);
      }
      iVar11 = *pbVar2 - 0x30;
      if (0x39 < *pbVar2) {
        iVar11 = -1;
      }
      if (iVar11 < 0) {
LAB_0081fe10:
        if (bVar18) {
          if (param_1 != (long *)0x0) {
            *param_1 = lVar17;
          }
          return 1;
        }
        return 0;
      }
      if (0x1999999999999998 < lVar17 + 0xcccccccccccccccU) {
        return 0;
      }
      if (0x7fffffffffffffff - (long)iVar11 < lVar17 * 10) {
        return 0;
      }
      uVar15 = (ulong)(iVar14 + 1);
      bVar18 = true;
      lVar17 = lVar17 * 10 + (long)(iVar11 * iVar13);
    } while( true );
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar8 = (char *)param_2[1];
  if (*pcVar8 == cVar3) {
LAB_0081fc3c:
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      uVar12 = uVar9;
      if (uVar12 == 0x80000) goto LAB_0081fc3c;
      uVar9 = uVar12 + 1;
    } while (pcVar8[uVar12 + 1] != cVar3);
    if (uVar12 >> 0x13 != 0) goto LAB_0081fc3c;
  }
  pcVar8 = pcVar8 + uVar15 + 1;
  if ((int)uVar9 <= (int)uVar15) {
    pcVar8 = puVar5;
  }
  if (*pcVar8 == 'b') {
    uVar15 = uVar15 | 2;
    param_3 = 2;
  }
  else if (*pcVar8 == 'x') {
    uVar15 = uVar15 | 2;
    param_3 = 0x10;
  }
  else {
    param_3 = 8;
  }
LAB_0081fa6c:
  uVar12 = (ulong)param_3;
  uVar9 = 0;
  if (uVar12 != 0) {
    uVar9 = 0xffffffffffffffff / uVar12;
  }
  bVar18 = false;
  uVar16 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar8 = (char *)param_2[1];
    if (*pcVar8 == cVar3) {
LAB_0081fad8:
      iVar11 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar10 = uVar6;
        if (uVar10 == 0x80000) goto LAB_0081fad8;
        uVar6 = uVar10 + 1;
      } while (pcVar8[uVar10 + 1] != cVar3);
      iVar11 = 0;
      if (uVar10 >> 0x13 == 0) {
        iVar11 = (int)(uVar10 + 1);
      }
    }
    iVar14 = (int)uVar15;
    pbVar2 = puVar5;
    if (iVar14 <= iVar11 && -1 < iVar14) {
      pbVar2 = (byte *)(pcVar8 + iVar14);
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
    if ((iVar11 < 0) || (param_3 <= iVar11)) {
      if (!bVar18) {
        return 0;
      }
      *param_1 = uVar16 * (long)iVar13;
      return 1;
    }
    if (uVar9 < uVar16) {
      return 0;
    }
    if ((ulong)~(long)iVar11 < uVar16 * uVar12) {
      return 0;
    }
    uVar16 = uVar16 * uVar12 + (long)iVar11;
    uVar15 = (ulong)(iVar14 + 1);
    bVar18 = true;
  } while( true );
}


