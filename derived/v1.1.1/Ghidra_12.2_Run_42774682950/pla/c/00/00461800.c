/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00461800; name: FUN_00461800
 */


undefined4 FUN_00461800(long param_1,undefined4 *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  size_t __n;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  undefined4 uVar15;
  char *__s;
  long lVar16;
  int *piVar17;
  int *piVar18;
  
  uVar15 = 0x33;
  switch(*param_2) {
  case 1:
    piVar18 = *(int **)(param_2 + 2);
    piVar17 = *(int **)(param_1 + 8);
    pbVar14 = *(byte **)(piVar18 + 2);
    __s = *(char **)(piVar17 + 2);
    pcVar7 = strchr((char *)pbVar14,0x40);
    pcVar6 = strchr(__s,0x40);
    if (pcVar6 != (char *)0x0) {
      if (pcVar7 == (char *)0x0) {
        if (*pbVar14 == 0x2e) {
          iVar4 = *piVar17;
          iVar5 = *piVar18;
          iVar3 = iVar4 - iVar5;
          if (iVar3 == 0 || iVar4 < iVar5) {
            return 0x2f;
          }
          lVar9 = 0;
          uVar8 = 0x2e;
          bVar2 = __s[iVar3];
          uVar13 = (uint)bVar2;
          if (bVar2 == 0x2e) goto LAB_00461b9c;
          while( true ) {
            uVar1 = uVar8 + 0x20;
            if (0x19 < (uVar8 - 0x41 & 0xff)) {
              uVar1 = uVar8;
            }
            uVar8 = uVar13 + 0x20;
            if (0x19 < uVar13 - 0x41) {
              uVar8 = uVar13;
            }
            if ((uVar1 & 0xff) != (uVar8 & 0xff)) break;
            while( true ) {
              if (lVar9 == -2) {
                return 0;
              }
              uVar8 = (uint)pbVar14[lVar9 + 1];
              lVar9 = lVar9 + 1;
              uVar13 = (uint)(byte)(__s + iVar3)[lVar9];
              if (uVar13 != uVar8) break;
LAB_00461b9c:
              if (uVar8 == 0) {
                return 0;
              }
            }
          }
          return 0x2f;
        }
      }
      else {
        __n = (long)pcVar7 - (long)pbVar14;
        if ((__n != 0) &&
           ((__n != (long)pcVar6 - (long)__s ||
            (iVar4 = strncmp((char *)pbVar14,__s,__n), iVar4 != 0)))) {
          return 0x2f;
        }
        pbVar14 = (byte *)(pcVar7 + 1);
      }
      lVar9 = 0;
      uVar13 = (uint)*pbVar14;
      bVar2 = pcVar6[1];
      uVar8 = (uint)bVar2;
      if (*pbVar14 == bVar2) goto LAB_00461c2c;
      while( true ) {
        uVar1 = uVar13 + 0x20;
        if (0x19 < uVar13 - 0x41) {
          uVar1 = uVar13;
        }
        uVar13 = uVar8 + 0x20;
        if (0x19 < uVar8 - 0x41) {
          uVar13 = uVar8;
        }
        lVar16 = lVar9;
        if ((uVar1 & 0xff) != (uVar13 & 0xff)) break;
        while( true ) {
          lVar9 = lVar16 + 1;
          if (lVar16 == -2) {
            return 0;
          }
          uVar13 = (uint)pbVar14[lVar9];
          uVar8 = (uint)(byte)(pcVar6 + 1)[lVar9];
          if (uVar13 != uVar8) break;
LAB_00461c2c:
          lVar16 = lVar9;
          if (uVar13 == 0) {
            return 0;
          }
        }
      }
      return 0x2f;
    }
    break;
  case 2:
    pbVar14 = *(byte **)(*(int **)(param_2 + 2) + 2);
    bVar2 = *pbVar14;
    uVar8 = (uint)bVar2;
    if (bVar2 == 0) {
      return 0;
    }
    pbVar11 = *(byte **)(*(int **)(param_1 + 8) + 2);
    iVar4 = **(int **)(param_1 + 8);
    iVar5 = **(int **)(param_2 + 2);
    iVar3 = iVar4 - iVar5;
    if (((iVar3 != 0 && iVar5 <= iVar4) && (pbVar11 = pbVar11 + iVar3, bVar2 != 0x2e)) &&
       (pbVar11[-1] != 0x2e)) {
      return 0x2f;
    }
    lVar9 = 0;
    uVar13 = (uint)*pbVar11;
    if (*pbVar11 == bVar2) goto LAB_0046192c;
    while( true ) {
      uVar1 = uVar8 + 0x20;
      if (0x19 < (uVar8 - 0x41 & 0xff)) {
        uVar1 = uVar8;
      }
      uVar8 = uVar13 + 0x20;
      if (0x19 < uVar13 - 0x41) {
        uVar8 = uVar13;
      }
      if ((uVar1 & 0xff) != (uVar8 & 0xff)) break;
      while( true ) {
        if (lVar9 == -2) {
          return 0;
        }
        uVar8 = (uint)pbVar14[lVar9 + 1];
        lVar9 = lVar9 + 1;
        uVar13 = (uint)pbVar11[lVar9];
        if (uVar13 != uVar8) break;
LAB_0046192c:
        if (uVar8 == 0) {
          return 0;
        }
      }
    }
    return 0x2f;
  default:
    goto switchD_00461838_caseD_3;
  case 4:
    lVar9 = *(long *)(param_1 + 8);
    lVar16 = *(long *)(param_2 + 2);
    if (((*(int *)(lVar9 + 8) != 0) && (iVar4 = FUN_0044abd0(lVar9,0), iVar4 < 0)) ||
       ((*(int *)(lVar16 + 8) != 0 && (iVar4 = FUN_0044abd0(lVar16,0), iVar4 < 0)))) {
      return 0x11;
    }
    if (*(int *)(lVar9 + 0x20) < *(int *)(lVar16 + 0x20)) {
      return 0x2f;
    }
    iVar4 = memcmp(*(void **)(lVar16 + 0x18),*(void **)(lVar9 + 0x18),(long)*(int *)(lVar16 + 0x20))
    ;
    uVar15 = 0;
    if (iVar4 != 0) {
      uVar15 = 0x2f;
    }
    return uVar15;
  case 6:
    piVar17 = *(int **)(param_2 + 2);
    pbVar14 = *(byte **)(piVar17 + 2);
    pcVar7 = strchr(*(char **)(*(long *)(param_1 + 8) + 8),0x3a);
    if (((pcVar7 != (char *)0x0) && (pcVar7[1] == '/')) && (pcVar7[2] == '/')) {
      pbVar11 = (byte *)(pcVar7 + 3);
      pcVar7 = strchr((char *)pbVar11,0x3a);
      if ((pcVar7 == (char *)0x0) && (pcVar7 = strchr((char *)pbVar11,0x2f), pcVar7 == (char *)0x0))
      {
        uVar12 = strlen((char *)pbVar11);
        iVar4 = (int)uVar12;
      }
      else {
        uVar12 = (long)pcVar7 - (long)pbVar11;
        iVar4 = (int)uVar12;
      }
      if (iVar4 != 0) {
        bVar2 = *pbVar14;
        uVar8 = (uint)bVar2;
        iVar4 = *piVar17;
        iVar5 = (int)uVar12;
        if (bVar2 == 0x2e) {
          if (iVar5 <= iVar4) {
            return 0x2f;
          }
          if (iVar4 != 0) {
            lVar9 = -(long)iVar4;
            pbVar14 = pbVar14 + 1;
            uVar8 = 0x2e;
            uVar13 = (uint)pbVar11[lVar9 + iVar5];
            if (pbVar11[lVar9 + iVar5] == 0x2e) goto LAB_00461a88;
            while( true ) {
              uVar1 = uVar13 + 0x20;
              if (0x19 < uVar13 - 0x41) {
                uVar1 = uVar13;
              }
              uVar13 = uVar8 + 0x20;
              if (0x19 < (uVar8 - 0x41 & 0xff)) {
                uVar13 = uVar8;
              }
              pbVar10 = pbVar14;
              if ((uVar1 & 0xff) != (uVar13 & 0xff)) break;
              while( true ) {
                if (lVar9 == -1) {
                  return 0;
                }
                pbVar14 = pbVar10 + 1;
                uVar8 = (uint)*pbVar10;
                lVar9 = lVar9 + 1;
                uVar13 = (uint)pbVar11[lVar9 + iVar5];
                if (uVar13 != uVar8) break;
LAB_00461a88:
                pbVar10 = pbVar14;
                if (uVar8 == 0) {
                  return 0;
                }
              }
            }
            return 0x2f;
          }
        }
        else {
          if (iVar4 != iVar5) {
            return 0x2f;
          }
          if ((uVar12 & 0xffffffff) != 0) {
            lVar9 = (long)iVar5 + -1;
            pbVar14 = pbVar14 + 1;
            uVar13 = (uint)*pbVar11;
            if (*pbVar11 == bVar2) goto LAB_00461ca0;
            while( true ) {
              uVar1 = uVar13 + 0x20;
              if (0x19 < uVar13 - 0x41) {
                uVar1 = uVar13;
              }
              uVar13 = uVar8 + 0x20;
              if (0x19 < (uVar8 - 0x41 & 0xff)) {
                uVar13 = uVar8;
              }
              pbVar10 = pbVar14;
              if ((uVar1 & 0xff) != (uVar13 & 0xff)) break;
              while( true ) {
                if (lVar9 == 0) {
                  return 0;
                }
                pbVar14 = pbVar10 + 1;
                uVar8 = (uint)*pbVar10;
                pbVar11 = pbVar11 + 1;
                lVar9 = lVar9 + -1;
                uVar13 = (uint)*pbVar11;
                if (uVar13 != uVar8) break;
LAB_00461ca0:
                pbVar10 = pbVar14;
                if (uVar8 == 0) {
                  return 0;
                }
              }
            }
            return 0x2f;
          }
        }
        return 0;
      }
    }
    break;
  case 7:
    uVar8 = **(uint **)(param_1 + 8);
    if (uVar8 == 0x10 || uVar8 == 4) {
      iVar4 = **(int **)(param_2 + 2);
      if (iVar4 == 0x20 || iVar4 == 8) {
        if (iVar4 != uVar8 * 2) {
          return 0x2f;
        }
        pbVar11 = *(byte **)(*(uint **)(param_1 + 8) + 2);
        uVar12 = (ulong)uVar8;
        pbVar14 = *(byte **)(*(int **)(param_2 + 2) + 2);
        do {
          if (((*pbVar14 ^ *pbVar11) & pbVar14[(int)uVar8]) != 0) {
            return 0x2f;
          }
          uVar12 = uVar12 - 1;
          pbVar14 = pbVar14 + 1;
          pbVar11 = pbVar11 + 1;
        } while (uVar12 != 0);
        return 0;
      }
    }
  }
  uVar15 = 0x35;
switchD_00461838_caseD_3:
  return uVar15;
}


