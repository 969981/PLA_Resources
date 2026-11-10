/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00820300; name: FUN_00820300
 */


undefined8 FUN_00820300(int *param_1,long *param_2,uint param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  bool bVar18;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar7 = PTR_DAT_04377b60;
  pcVar9 = (char *)param_2[1];
  cVar3 = *PTR_DAT_04377b60;
  cVar4 = cVar3;
  if (*pcVar9 != cVar3) {
    uVar16 = 0;
    do {
      uVar10 = uVar16;
      cVar4 = *pcVar9;
      if (uVar10 == 0x80000) goto joined_r0x0082049c;
      uVar16 = uVar10 + 1;
    } while (pcVar9[uVar10 + 1] != cVar3);
    pcVar1 = PTR_DAT_04377b60;
    if (-1 < (int)(uVar10 + 1) || 0x7ffff < uVar10) {
      pcVar1 = pcVar9;
    }
    cVar4 = *pcVar1;
  }
joined_r0x0082049c:
  if (cVar4 == '-') {
    iVar14 = -1;
    uVar16 = 1;
  }
  else {
    iVar14 = 1;
    uVar16 = (ulong)(cVar4 == '+');
  }
  if (0 < (int)param_3) {
    if (param_3 == 10) goto LAB_008205b4;
    goto LAB_008203bc;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar9 = (char *)param_2[1];
  if (*pcVar9 == cVar3) {
LAB_00820508:
    iVar12 = 0;
  }
  else {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      if (uVar11 == 0x80000) goto LAB_00820508;
      uVar10 = uVar11 + 1;
    } while (pcVar9[uVar11 + 1] != cVar3);
    iVar12 = 0;
    if (uVar11 >> 0x13 == 0) {
      iVar12 = (int)(uVar11 + 1);
    }
  }
  pbVar2 = puVar7;
  if ((int)uVar16 <= iVar12) {
    pbVar2 = (byte *)(pcVar9 + uVar16);
  }
  if (9 < *pbVar2 - 0x30) {
    return 0;
  }
  if (*pbVar2 != 0x30) {
LAB_008205b4:
    bVar18 = false;
    iVar12 = 0;
    if (iVar14 < 0) {
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar9 = (char *)param_2[1];
        if (*pcVar9 == cVar3) {
LAB_008206e8:
          iVar13 = 0;
        }
        else {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            if (uVar11 == 0x80000) goto LAB_008206e8;
            uVar10 = uVar11 + 1;
          } while (pcVar9[uVar11 + 1] != cVar3);
          iVar13 = 0;
          if (uVar11 >> 0x13 == 0) {
            iVar13 = (int)(uVar11 + 1);
          }
        }
        iVar15 = (int)uVar16;
        pbVar2 = puVar7;
        if (iVar15 <= iVar13 && -1 < iVar15) {
          pbVar2 = (byte *)(pcVar9 + iVar15);
        }
        uVar6 = *pbVar2 - 0x30;
        if (0x39 < *pbVar2) {
          uVar6 = 0xffffffff;
        }
        if ((int)uVar6 < 0) goto LAB_00820744;
        if (0x19999998 < iVar12 + 0xcccccccU) {
          return 0;
        }
        if (iVar12 * 10 < (int)(uVar6 | 0x80000000)) {
          return 0;
        }
        iVar12 = iVar12 * 10 + uVar6 * iVar14;
        uVar16 = (ulong)(iVar15 + 1);
        bVar18 = true;
      } while( true );
    }
    do {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar9 = (char *)param_2[1];
      if (*pcVar9 == cVar3) {
LAB_0082062c:
        iVar13 = 0;
      }
      else {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          if (uVar11 == 0x80000) goto LAB_0082062c;
          uVar10 = uVar11 + 1;
        } while (pcVar9[uVar11 + 1] != cVar3);
        iVar13 = 0;
        if (uVar11 >> 0x13 == 0) {
          iVar13 = (int)(uVar11 + 1);
        }
      }
      iVar15 = (int)uVar16;
      pbVar2 = puVar7;
      if (iVar15 <= iVar13 && -1 < iVar15) {
        pbVar2 = (byte *)(pcVar9 + iVar15);
      }
      iVar13 = *pbVar2 - 0x30;
      if (0x39 < *pbVar2) {
        iVar13 = -1;
      }
      if (iVar13 < 0) {
LAB_00820744:
        if (bVar18) {
          if (param_1 != (int *)0x0) {
            *param_1 = iVar12;
          }
          return 1;
        }
        return 0;
      }
      if (0x19999998 < iVar12 + 0xcccccccU) {
        return 0;
      }
      if (0x7fffffff - iVar13 < iVar12 * 10) {
        return 0;
      }
      iVar12 = iVar12 * 10 + iVar13 * iVar14;
      uVar16 = (ulong)(iVar15 + 1);
      bVar18 = true;
    } while( true );
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar9 = (char *)param_2[1];
  if (*pcVar9 == cVar3) {
LAB_00820584:
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    do {
      uVar11 = uVar10;
      if (uVar11 == 0x80000) goto LAB_00820584;
      uVar10 = uVar11 + 1;
    } while (pcVar9[uVar11 + 1] != cVar3);
    if (uVar11 >> 0x13 != 0) goto LAB_00820584;
  }
  pcVar9 = pcVar9 + uVar16 + 1;
  if ((int)uVar10 <= (int)uVar16) {
    pcVar9 = puVar7;
  }
  if (*pcVar9 == 'b') {
    uVar16 = uVar16 | 2;
    param_3 = 2;
  }
  else if (*pcVar9 == 'x') {
    uVar16 = uVar16 | 2;
    param_3 = 0x10;
  }
  else {
    param_3 = 8;
  }
LAB_008203bc:
  uVar6 = 0;
  if (param_3 != 0) {
    uVar6 = 0xffffffff / param_3;
  }
  bVar18 = false;
  uVar17 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar9 = (char *)param_2[1];
    if (*pcVar9 == cVar3) {
LAB_00820424:
      iVar12 = 0;
    }
    else {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        if (uVar11 == 0x80000) goto LAB_00820424;
        uVar10 = uVar11 + 1;
      } while (pcVar9[uVar11 + 1] != cVar3);
      iVar12 = 0;
      if (uVar11 >> 0x13 == 0) {
        iVar12 = (int)(uVar11 + 1);
      }
    }
    iVar13 = (int)uVar16;
    pbVar2 = puVar7;
    if (iVar13 <= iVar12 && -1 < iVar13) {
      pbVar2 = (byte *)(pcVar9 + iVar13);
    }
    uVar8 = tolower((uint)*pbVar2);
    uVar8 = uVar8 & 0xff;
    uVar5 = uVar8 - 0x57;
    if (5 < uVar8 - 0x61) {
      uVar5 = 0xffffffff;
    }
    if (uVar8 < 0x3a) {
      uVar5 = uVar8 - 0x30;
    }
    if (((int)uVar5 < 0) || ((int)param_3 <= (int)uVar5)) {
      if (!bVar18) {
        return 0;
      }
      *param_1 = uVar17 * iVar14;
      return 1;
    }
    if (uVar6 < uVar17) {
      return 0;
    }
    if (~uVar5 < uVar17 * param_3) {
      return 0;
    }
    uVar17 = uVar5 + uVar17 * param_3;
    uVar16 = (ulong)(iVar13 + 1);
    bVar18 = true;
  } while( true );
}


