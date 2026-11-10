/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fb304; name: FUN_001fb304
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_001fb304(long *param_1,undefined4 param_2,char *param_3,uint param_4)

{
  size_t sVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  void *__src;
  size_t sVar5;
  char *pcVar6;
  ulong uVar7;
  size_t sVar8;
  char *pcVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  char *pcVar21;
  char *local_68;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (param_3 == (char *)0x0) {
    switch(param_2) {
    case 0:
      return 0;
    case 1:
      break;
    case 2:
      param_1 = param_1 + 1;
      break;
    case 3:
      param_1 = param_1 + 2;
      break;
    case 4:
      param_1 = param_1 + 3;
      break;
    case 5:
      param_1 = param_1 + 4;
      break;
    case 6:
      param_1 = param_1 + 5;
      break;
    case 7:
      param_1 = param_1 + 6;
      break;
    case 8:
      param_1 = param_1 + 7;
      break;
    case 9:
      param_1 = param_1 + 8;
      break;
    default:
      goto LAB_001fb788;
    }
    if (*param_1 == 0) {
      return 0;
    }
    FUN_002044d4();
    *param_1 = 0;
    return 0;
  }
  switch(param_2) {
  case 0:
    uVar7 = FUN_001fac58(param_3,0,8);
    if (((uVar7 & 1) != 0) || (iVar4 = FUN_001faec0(param_1,0,&local_68,param_4), iVar4 != 0)) {
      __src = (void *)FUN_00204504(0x58,1);
      if (__src == (void *)0x0) {
        return 7;
      }
      iVar4 = FUN_001fbb80(param_3,__src,param_4);
      goto joined_r0x001fbb38;
    }
    pcVar6 = (char *)FUN_002044f4(local_68);
    if (pcVar6 != (char *)0x0) {
      pcVar9 = strstr(pcVar6,"//");
      cVar10 = *param_3;
      pcVar15 = pcVar6;
      if (pcVar9 != (char *)0x0) {
        pcVar15 = pcVar9 + 2;
      }
      if (cVar10 == '/') {
        if (param_3[1] != '/') {
          pcVar21 = strchr(pcVar15,0x2f);
          pcVar9 = strchr(pcVar15,0x3f);
          if (pcVar21 == (char *)0x0) {
            if (pcVar9 != (char *)0x0) {
              *pcVar9 = '\0';
            }
          }
          else {
            if (pcVar9 == (char *)0x0 || pcVar21 <= pcVar9) {
              pcVar9 = pcVar21;
            }
            *pcVar9 = '\0';
          }
          goto LAB_001fb96c;
        }
        param_3 = param_3 + 2;
        *pcVar15 = '\0';
        pcVar9 = (char *)FUN_001fc328(param_3);
        bVar20 = false;
      }
      else {
        pcVar9 = strchr(pcVar15,0x3f);
        if (pcVar9 != (char *)0x0) {
          *pcVar9 = '\0';
          cVar10 = *param_3;
        }
        if ((cVar10 != '?') && (pcVar9 = strrchr(pcVar15,0x2f), pcVar9 != (char *)0x0)) {
          *pcVar9 = '\0';
          cVar10 = *param_3;
        }
        pcVar9 = strchr(pcVar15,0x2f);
        pcVar15 = (char *)0x0;
        if (pcVar9 != (char *)0x0) {
          pcVar15 = pcVar9 + 1;
        }
        if (cVar10 == '.') {
          pcVar21 = param_3 + 2;
          if (param_3[1] != '/') {
            pcVar21 = param_3;
          }
          if (param_3[(ulong)(param_3[1] == '/') * 2] == '.') {
            iVar4 = 0;
            do {
              param_3 = pcVar21;
              if ((pcVar21[1] != '.') || (pcVar21[2] != '/')) break;
              pcVar21 = pcVar21 + 3;
              iVar4 = iVar4 + 1;
              param_3 = pcVar21;
            } while (*pcVar21 == '.');
          }
          else {
            iVar4 = 0;
            param_3 = pcVar21;
          }
        }
        else {
          iVar4 = 0;
        }
        if (pcVar9 == (char *)0x0) {
          pcVar15 = (char *)0x0;
        }
        else if (iVar4 == 0) {
          pcVar15 = pcVar9 + 1;
        }
        else {
          do {
            pcVar9 = strrchr(pcVar15,0x2f);
            if (pcVar9 == (char *)0x0) {
              *pcVar15 = '\0';
              break;
            }
            iVar4 = iVar4 + -1;
            *pcVar9 = '\0';
          } while (iVar4 != 0);
        }
LAB_001fb96c:
        bVar20 = true;
        pcVar9 = param_3;
      }
      cVar10 = *param_3;
      if (cVar10 == '\0') {
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        bVar3 = true;
        pcVar21 = param_3;
        do {
          if (pcVar21 < pcVar9) {
LAB_001fb990:
            lVar11 = lVar11 + 1;
          }
          else if (cVar10 == ' ') {
            if (!bVar3) {
              bVar3 = false;
              goto LAB_001fb990;
            }
            lVar11 = lVar11 + 3;
            bVar3 = true;
          }
          else {
            if (cVar10 == '?') {
              bVar3 = false;
            }
            uVar7 = FUN_001fc3b4();
            lVar12 = lVar11 + 2;
            if ((uVar7 & 1) == 0) {
              lVar12 = lVar11;
            }
            lVar11 = lVar12 + 1;
          }
          pcVar21 = pcVar21 + 1;
          cVar10 = *pcVar21;
        } while (cVar10 != '\0');
      }
      sVar5 = strlen(pcVar6);
      pcVar9 = (char *)FUN_002044c4(lVar11 + sVar5 + 1 + 1);
      if (pcVar9 == (char *)0x0) {
        FUN_002044d4(pcVar6);
      }
      else {
        memcpy(pcVar9,pcVar6,sVar5);
        cVar10 = *param_3;
        if (cVar10 != '/') {
          if (pcVar15 == (char *)0x0) {
            if (cVar10 != '?') goto LAB_001fba38;
          }
          else if ((cVar10 != '?') && (*pcVar15 != '\0')) {
LAB_001fba38:
            pcVar9[sVar5] = '/';
            sVar5 = sVar5 + 1;
          }
        }
        pcVar15 = pcVar9 + sVar5;
        pcVar21 = param_3;
        if (!bVar20) {
          pcVar21 = (char *)FUN_001fc328(param_3);
        }
        cVar10 = *param_3;
        if (cVar10 != '\0') {
          bVar20 = true;
          pcVar16 = pcVar15;
          do {
            if (param_3 < pcVar21) {
              pcVar15 = pcVar16 + 1;
              *pcVar16 = cVar10;
            }
            else if (cVar10 == ' ') {
              if (bVar20) {
                pcVar16[0] = '%';
                pcVar16[1] = '2';
                pcVar16[2] = '0';
                pcVar15 = pcVar16 + 3;
                bVar20 = true;
              }
              else {
                bVar20 = false;
                pcVar15 = pcVar16 + 1;
                *pcVar16 = '+';
              }
            }
            else {
              if (cVar10 == '?') {
                bVar20 = false;
              }
              uVar7 = FUN_001fc3b4();
              if ((uVar7 & 1) == 0) {
                pcVar15 = pcVar16 + 1;
                *pcVar16 = *param_3;
              }
              else {
                FUN_001e64cc(pcVar16,4,"%%%02x");
                pcVar15 = pcVar16 + 3;
              }
            }
            param_3 = param_3 + 1;
            cVar10 = *param_3;
            pcVar16 = pcVar15;
          } while (cVar10 != '\0');
        }
        *pcVar15 = '\0';
        FUN_002044d4(pcVar6);
        FUN_002044d4(local_68);
        __src = (void *)FUN_00204504(0x58,1);
        if (__src != (void *)0x0) {
          iVar4 = FUN_001fbb80(pcVar9,__src,param_4);
          FUN_002044d4(pcVar9);
joined_r0x001fbb38:
          if (iVar4 == 0) {
            FUN_001fad50(param_1);
            memcpy(param_1,__src,0x58);
          }
          else {
            FUN_001fad50(__src);
          }
          FUN_002044d4(__src);
          return iVar4;
        }
        local_68 = pcVar9;
      }
    }
    goto LAB_001fb72c;
  case 1:
    if (((param_4 >> 3 & 1) == 0) && (lVar11 = FUN_001fd4b8(param_3), lVar11 == 0)) {
      return 5;
    }
    lVar11 = 0;
    uVar18 = 0;
    plVar17 = param_1;
    goto LAB_001fb510;
  case 2:
    plVar17 = param_1 + 1;
    break;
  case 3:
    plVar17 = param_1 + 2;
    break;
  case 4:
    plVar17 = param_1 + 3;
    break;
  case 5:
    plVar17 = param_1 + 4;
    break;
  case 6:
    lVar11 = strtol(param_3,(char **)0x0,10);
    if (0xfffe < lVar11 - 1U) {
      return 4;
    }
    uVar18 = 0;
    plVar17 = param_1 + 5;
    goto LAB_001fb510;
  case 7:
    plVar17 = param_1 + 6;
    if ((param_4 >> 7 & 1) == 0) goto LAB_001fb50c;
    bVar2 = 0;
    goto LAB_001fb4bc;
  case 8:
    uVar18 = param_4 >> 8 & 1;
    plVar17 = param_1 + 7;
    if ((param_4 >> 7 & 1) == 0) {
      lVar11 = 0;
      goto LAB_001fb510;
    }
    uVar14 = 1;
    bVar2 = 1;
    goto LAB_001fb4c0;
  case 9:
    plVar17 = param_1 + 8;
    break;
  default:
LAB_001fb788:
    return 9;
  }
  if ((param_4 >> 7 & 1) == 0) {
LAB_001fb50c:
    uVar18 = 0;
    lVar11 = 0;
LAB_001fb510:
    pcVar6 = (char *)FUN_002044f4(param_3);
    if (pcVar6 != (char *)0x0) {
      pcVar15 = pcVar6;
      do {
        if (*pcVar15 == '%') {
          iVar4 = FUN_001e3460(pcVar15[1]);
          if (((iVar4 == 0) || (iVar4 = FUN_001e3460(pcVar15[2]), iVar4 == 0)) ||
             ((iVar4 = FUN_001e34d8(pcVar15[1]), iVar4 == 0 &&
              (iVar4 = FUN_001e34d8(pcVar15[2]), iVar4 == 0)))) goto LAB_001fb588;
          iVar4 = tolower((uint)(byte)pcVar15[1]);
          pcVar15[1] = (char)iVar4;
          iVar4 = tolower((uint)(byte)pcVar15[2]);
          lVar12 = 3;
          pcVar15[2] = (char)iVar4;
        }
        else {
          if (*pcVar15 == '\0') goto joined_r0x001fb684;
LAB_001fb588:
          lVar12 = 1;
        }
        pcVar15 = pcVar15 + lVar12;
      } while( true );
    }
  }
  else {
    bVar2 = 1;
LAB_001fb4bc:
    uVar18 = 0;
    uVar14 = uVar18;
LAB_001fb4c0:
    sVar5 = strlen(param_3);
    pcVar6 = (char *)FUN_002044c4(sVar5 * 3 + 1);
    if (pcVar6 != (char *)0x0) {
      if (uVar14 != 0) {
        lVar11 = 0;
        do {
          cVar10 = param_3[lVar11];
          cVar13 = '+';
          if (cVar10 != ' ') {
            if (cVar10 == '\0') goto LAB_001fb5a4;
            cVar13 = cVar10;
          }
          pcVar6[lVar11] = cVar13;
          lVar11 = lVar11 + 1;
        } while( true );
      }
      bVar20 = false;
LAB_001fb5c0:
      pcVar15 = pcVar6;
      if (*param_3 != '\0') {
        uVar19 = uVar18;
        pcVar9 = param_3;
        do {
          pcVar21 = pcVar9 + 1;
          uVar7 = FUN_001fc62c();
          cVar10 = *pcVar9;
          if ((uVar7 & 1) == 0) {
            cVar13 = '/';
            if ((bool)(cVar10 == '/' & (bVar2 ^ 1))) goto LAB_001fb648;
            if ((cVar10 == '=' & uVar19) != 0) goto LAB_001fb5ec;
            cVar13 = cVar10;
            if (cVar10 == '+' && uVar14 == 1) goto LAB_001fb648;
            FUN_001e64cc(pcVar15,4,"%%%02x");
            lVar11 = 3;
          }
          else {
LAB_001fb5ec:
            cVar13 = cVar10;
LAB_001fb648:
            uVar19 = uVar19 & cVar13 != '=';
            *pcVar15 = cVar13;
            lVar11 = 1;
          }
          pcVar15 = pcVar15 + lVar11;
          pcVar9 = pcVar21;
        } while (*pcVar21 != '\0');
      }
      *pcVar15 = '\0';
      if (bVar20) {
        FUN_002044d4(param_3);
      }
      lVar11 = 0;
joined_r0x001fb684:
      if (((uVar18 == 0) || (pcVar15 = (char *)param_1[7], pcVar15 == (char *)0x0)) ||
         (sVar5 = strlen(pcVar15), sVar5 == 0)) {
        FUN_002044d4(*plVar17);
        *plVar17 = (long)pcVar6;
        if (lVar11 == 0) {
          return 0;
        }
        param_1[10] = lVar11;
        return 0;
      }
      cVar10 = pcVar15[sVar5 - 1];
      sVar8 = strlen(pcVar6);
      sVar1 = sVar5;
      if (cVar10 != '&') {
        sVar1 = sVar5 + 1;
      }
      pcVar15 = (char *)FUN_002044c4(sVar8 + sVar1 + 1);
      if (pcVar15 != (char *)0x0) {
        strcpy(pcVar15,(char *)param_1[7]);
        if (cVar10 != '&') {
          pcVar15[sVar5] = '&';
        }
        strcpy(pcVar15 + sVar1,pcVar6);
        FUN_002044d4(pcVar6);
        FUN_002044d4(*plVar17);
        *plVar17 = (long)pcVar15;
        return 0;
      }
LAB_001fb728:
      local_68 = pcVar6;
LAB_001fb72c:
      FUN_002044d4(local_68);
    }
  }
  return 7;
LAB_001fb5a4:
  pcVar6[lVar11] = '\0';
  param_3 = (char *)FUN_002044f4(pcVar6);
  if (param_3 != (char *)0x0) {
    bVar20 = true;
    goto LAB_001fb5c0;
  }
  goto LAB_001fb728;
}


