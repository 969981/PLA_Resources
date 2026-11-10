/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081f500; name: thunk_FUN_0081f510
 */


undefined8 thunk_FUN_0081f510(ulong *param_1,long *param_2,int param_3)

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
  int iVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar5 = PTR_DAT_04377b60;
  pcVar8 = (char *)param_2[1];
  cVar3 = *PTR_DAT_04377b60;
  cVar4 = cVar3;
  if (*pcVar8 != cVar3) {
    uVar14 = 0;
    do {
      uVar16 = uVar14;
      cVar4 = *pcVar8;
      if (uVar16 == 0x80000) goto joined_r0x0081f6b4;
      uVar14 = uVar16 + 1;
    } while (pcVar8[uVar16 + 1] != cVar3);
    pcVar1 = PTR_DAT_04377b60;
    if (-1 < (int)(uVar16 + 1) || 0x7ffff < uVar16) {
      pcVar1 = pcVar8;
    }
    cVar4 = *pcVar1;
  }
joined_r0x0081f6b4:
  if (cVar4 == '-') {
    iVar12 = -1;
    uVar14 = 1;
  }
  else {
    iVar12 = 1;
    uVar14 = (ulong)(cVar4 == '+');
  }
  if (0 < param_3) {
    if (param_3 == 10) goto LAB_0081f7cc;
    goto LAB_0081f5cc;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar8 = (char *)param_2[1];
  if (*pcVar8 == cVar3) {
LAB_0081f720:
    iVar10 = 0;
  }
  else {
    uVar16 = 0;
    do {
      uVar11 = uVar16;
      if (uVar11 == 0x80000) goto LAB_0081f720;
      uVar16 = uVar11 + 1;
    } while (pcVar8[uVar11 + 1] != cVar3);
    iVar10 = 0;
    if (uVar11 >> 0x13 == 0) {
      iVar10 = (int)(uVar11 + 1);
    }
  }
  pbVar2 = puVar5;
  if ((int)uVar14 <= iVar10) {
    pbVar2 = (byte *)(pcVar8 + uVar14);
  }
  if (9 < *pbVar2 - 0x30) {
    return 0;
  }
  if (*pbVar2 != 0x30) {
LAB_0081f7cc:
    bVar17 = false;
    uVar16 = 0;
    if (iVar12 < 0) {
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar8 = (char *)param_2[1];
        if (*pcVar8 == cVar3) {
LAB_0081f8f8:
          iVar10 = 0;
        }
        else {
          uVar11 = 0;
          do {
            uVar15 = uVar11;
            if (uVar15 == 0x80000) goto LAB_0081f8f8;
            uVar11 = uVar15 + 1;
          } while (pcVar8[uVar15 + 1] != cVar3);
          iVar10 = 0;
          if (uVar15 >> 0x13 == 0) {
            iVar10 = (int)(uVar15 + 1);
          }
        }
        iVar13 = (int)uVar14;
        pbVar2 = puVar5;
        if (iVar13 <= iVar10 && -1 < iVar13) {
          pbVar2 = (byte *)(pcVar8 + iVar13);
        }
        iVar10 = *pbVar2 - 0x30;
        if (0x39 < *pbVar2) {
          iVar10 = -1;
        }
        if (iVar10 < 0) goto LAB_0081f950;
        if (0x1999999999999999 < uVar16) {
          return 0;
        }
        if (uVar16 * 10 < (ulong)(long)iVar10) {
          return 0;
        }
        uVar14 = (ulong)(iVar13 + 1);
        bVar17 = true;
        uVar16 = uVar16 * 10 + (long)(iVar10 * iVar12);
      } while( true );
    }
    do {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar8 = (char *)param_2[1];
      if (*pcVar8 == cVar3) {
LAB_0081f838:
        iVar10 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar15 = uVar11;
          if (uVar15 == 0x80000) goto LAB_0081f838;
          uVar11 = uVar15 + 1;
        } while (pcVar8[uVar15 + 1] != cVar3);
        iVar10 = 0;
        if (uVar15 >> 0x13 == 0) {
          iVar10 = (int)(uVar15 + 1);
        }
      }
      iVar13 = (int)uVar14;
      pbVar2 = puVar5;
      if (iVar13 <= iVar10 && -1 < iVar13) {
        pbVar2 = (byte *)(pcVar8 + iVar13);
      }
      uVar7 = *pbVar2 - 0x30;
      if (0x39 < *pbVar2) {
        uVar7 = 0xffffffff;
      }
      if ((int)uVar7 < 0) {
LAB_0081f950:
        if (bVar17) {
          if (param_1 != (ulong *)0x0) {
            *param_1 = uVar16;
          }
          return 1;
        }
        return 0;
      }
      if (0x1999999999999999 < uVar16) {
        return 0;
      }
      if ((ulong)(long)(int)~uVar7 < uVar16 * 10) {
        return 0;
      }
      uVar14 = (ulong)(iVar13 + 1);
      bVar17 = true;
      uVar16 = uVar16 * 10 + (long)(int)(uVar7 * iVar12);
    } while( true );
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar8 = (char *)param_2[1];
  if (*pcVar8 == cVar3) {
LAB_0081f79c:
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    do {
      uVar11 = uVar16;
      if (uVar11 == 0x80000) goto LAB_0081f79c;
      uVar16 = uVar11 + 1;
    } while (pcVar8[uVar11 + 1] != cVar3);
    if (uVar11 >> 0x13 != 0) goto LAB_0081f79c;
  }
  pcVar8 = pcVar8 + uVar14 + 1;
  if ((int)uVar16 <= (int)uVar14) {
    pcVar8 = puVar5;
  }
  if (*pcVar8 == 'b') {
    uVar14 = uVar14 | 2;
    param_3 = 2;
  }
  else if (*pcVar8 == 'x') {
    uVar14 = uVar14 | 2;
    param_3 = 0x10;
  }
  else {
    param_3 = 8;
  }
LAB_0081f5cc:
  uVar11 = (ulong)param_3;
  uVar16 = 0;
  if (uVar11 != 0) {
    uVar16 = 0xffffffffffffffff / uVar11;
  }
  bVar17 = false;
  uVar15 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar8 = (char *)param_2[1];
    if (*pcVar8 == cVar3) {
LAB_0081f638:
      iVar10 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar9 = uVar6;
        if (uVar9 == 0x80000) goto LAB_0081f638;
        uVar6 = uVar9 + 1;
      } while (pcVar8[uVar9 + 1] != cVar3);
      iVar10 = 0;
      if (uVar9 >> 0x13 == 0) {
        iVar10 = (int)(uVar9 + 1);
      }
    }
    iVar13 = (int)uVar14;
    pbVar2 = puVar5;
    if (iVar13 <= iVar10 && -1 < iVar13) {
      pbVar2 = (byte *)(pcVar8 + iVar13);
    }
    uVar7 = tolower((uint)*pbVar2);
    uVar7 = uVar7 & 0xff;
    iVar10 = uVar7 - 0x57;
    if (5 < uVar7 - 0x61) {
      iVar10 = -1;
    }
    if (uVar7 < 0x3a) {
      iVar10 = uVar7 - 0x30;
    }
    if ((iVar10 < 0) || (param_3 <= iVar10)) {
      if (!bVar17) {
        return 0;
      }
      *param_1 = uVar15 * (long)iVar12;
      return 1;
    }
    if (uVar16 < uVar15) {
      return 0;
    }
    if ((ulong)~(long)iVar10 < uVar15 * uVar11) {
      return 0;
    }
    uVar15 = uVar15 * uVar11 + (long)iVar10;
    uVar14 = (ulong)(iVar13 + 1);
    bVar17 = true;
  } while( true );
}


