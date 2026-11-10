/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081fe60; name: thunk_FUN_0081fe70
 */


undefined8 thunk_FUN_0081fe70(uint *param_1,long *param_2,uint param_3)

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
  int iVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar6 = PTR_DAT_04377b60;
  pcVar8 = (char *)param_2[1];
  cVar3 = *PTR_DAT_04377b60;
  cVar4 = cVar3;
  if (*pcVar8 != cVar3) {
    uVar14 = 0;
    do {
      uVar9 = uVar14;
      cVar4 = *pcVar8;
      if (uVar9 == 0x80000) goto joined_r0x0082000c;
      uVar14 = uVar9 + 1;
    } while (pcVar8[uVar9 + 1] != cVar3);
    pcVar1 = PTR_DAT_04377b60;
    if (-1 < (int)(uVar9 + 1) || 0x7ffff < uVar9) {
      pcVar1 = pcVar8;
    }
    cVar4 = *pcVar1;
  }
joined_r0x0082000c:
  if (cVar4 == '-') {
    iVar12 = -1;
    uVar14 = 1;
  }
  else {
    iVar12 = 1;
    uVar14 = (ulong)(cVar4 == '+');
  }
  if (0 < (int)param_3) {
    if (param_3 == 10) goto LAB_00820124;
    goto LAB_0081ff2c;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar8 = (char *)param_2[1];
  if (*pcVar8 == cVar3) {
LAB_00820078:
    iVar11 = 0;
  }
  else {
    uVar9 = 0;
    do {
      uVar10 = uVar9;
      if (uVar10 == 0x80000) goto LAB_00820078;
      uVar9 = uVar10 + 1;
    } while (pcVar8[uVar10 + 1] != cVar3);
    iVar11 = 0;
    if (uVar10 >> 0x13 == 0) {
      iVar11 = (int)(uVar10 + 1);
    }
  }
  pbVar2 = puVar6;
  if ((int)uVar14 <= iVar11) {
    pbVar2 = (byte *)(pcVar8 + uVar14);
  }
  if (9 < *pbVar2 - 0x30) {
    return 0;
  }
  if (*pbVar2 != 0x30) {
LAB_00820124:
    bVar17 = false;
    uVar16 = 0;
    if (iVar12 < 0) {
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar8 = (char *)param_2[1];
        if (*pcVar8 == cVar3) {
LAB_00820248:
          iVar11 = 0;
        }
        else {
          uVar9 = 0;
          do {
            uVar10 = uVar9;
            if (uVar10 == 0x80000) goto LAB_00820248;
            uVar9 = uVar10 + 1;
          } while (pcVar8[uVar10 + 1] != cVar3);
          iVar11 = 0;
          if (uVar10 >> 0x13 == 0) {
            iVar11 = (int)(uVar10 + 1);
          }
        }
        iVar13 = (int)uVar14;
        pbVar2 = puVar6;
        if (iVar13 <= iVar11 && -1 < iVar13) {
          pbVar2 = (byte *)(pcVar8 + iVar13);
        }
        uVar15 = *pbVar2 - 0x30;
        if (0x39 < *pbVar2) {
          uVar15 = 0xffffffff;
        }
        if ((int)uVar15 < 0) goto LAB_0082029c;
        if (0x19999999 < uVar16) {
          return 0;
        }
        if (uVar16 * 10 < uVar15) {
          return 0;
        }
        uVar16 = uVar16 * 10 + uVar15 * iVar12;
        uVar14 = (ulong)(iVar13 + 1);
        bVar17 = true;
      } while( true );
    }
    do {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar8 = (char *)param_2[1];
      if (*pcVar8 == cVar3) {
LAB_00820190:
        iVar11 = 0;
      }
      else {
        uVar9 = 0;
        do {
          uVar10 = uVar9;
          if (uVar10 == 0x80000) goto LAB_00820190;
          uVar9 = uVar10 + 1;
        } while (pcVar8[uVar10 + 1] != cVar3);
        iVar11 = 0;
        if (uVar10 >> 0x13 == 0) {
          iVar11 = (int)(uVar10 + 1);
        }
      }
      iVar13 = (int)uVar14;
      pbVar2 = puVar6;
      if (iVar13 <= iVar11 && -1 < iVar13) {
        pbVar2 = (byte *)(pcVar8 + iVar13);
      }
      uVar15 = *pbVar2 - 0x30;
      if (0x39 < *pbVar2) {
        uVar15 = 0xffffffff;
      }
      if ((int)uVar15 < 0) {
LAB_0082029c:
        if (bVar17) {
          if (param_1 != (uint *)0x0) {
            *param_1 = uVar16;
          }
          return 1;
        }
        return 0;
      }
      if (0x19999999 < uVar16) {
        return 0;
      }
      if (~uVar15 < uVar16 * 10) {
        return 0;
      }
      uVar16 = uVar16 * 10 + uVar15 * iVar12;
      uVar14 = (ulong)(iVar13 + 1);
      bVar17 = true;
    } while( true );
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar8 = (char *)param_2[1];
  if (*pcVar8 == cVar3) {
LAB_008200f4:
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      uVar10 = uVar9;
      if (uVar10 == 0x80000) goto LAB_008200f4;
      uVar9 = uVar10 + 1;
    } while (pcVar8[uVar10 + 1] != cVar3);
    if (uVar10 >> 0x13 != 0) goto LAB_008200f4;
  }
  pcVar8 = pcVar8 + uVar14 + 1;
  if ((int)uVar9 <= (int)uVar14) {
    pcVar8 = puVar6;
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
LAB_0081ff2c:
  uVar16 = 0;
  if (param_3 != 0) {
    uVar16 = 0xffffffff / param_3;
  }
  bVar17 = false;
  uVar15 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar8 = (char *)param_2[1];
    if (*pcVar8 == cVar3) {
LAB_0081ff94:
      iVar11 = 0;
    }
    else {
      uVar9 = 0;
      do {
        uVar10 = uVar9;
        if (uVar10 == 0x80000) goto LAB_0081ff94;
        uVar9 = uVar10 + 1;
      } while (pcVar8[uVar10 + 1] != cVar3);
      iVar11 = 0;
      if (uVar10 >> 0x13 == 0) {
        iVar11 = (int)(uVar10 + 1);
      }
    }
    iVar13 = (int)uVar14;
    pbVar2 = puVar6;
    if (iVar13 <= iVar11 && -1 < iVar13) {
      pbVar2 = (byte *)(pcVar8 + iVar13);
    }
    uVar7 = tolower((uint)*pbVar2);
    uVar7 = uVar7 & 0xff;
    uVar5 = uVar7 - 0x57;
    if (5 < uVar7 - 0x61) {
      uVar5 = 0xffffffff;
    }
    if (uVar7 < 0x3a) {
      uVar5 = uVar7 - 0x30;
    }
    if (((int)uVar5 < 0) || ((int)param_3 <= (int)uVar5)) {
      if (!bVar17) {
        return 0;
      }
      *param_1 = uVar15 * iVar12;
      return 1;
    }
    if (uVar16 < uVar15) {
      return 0;
    }
    if (~uVar5 < uVar15 * param_3) {
      return 0;
    }
    uVar15 = uVar5 + uVar15 * param_3;
    uVar14 = (ulong)(iVar13 + 1);
    bVar17 = true;
  } while( true );
}


