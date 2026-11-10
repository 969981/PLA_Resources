/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015f730; name: FUN_0015f730
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_0015f730(undefined8 param_1,FILE *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  FILE *pFVar4;
  FILE *pFVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  void *pvVar12;
  char *pcVar13;
  lconv *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  int iVar18;
  uint uVar19;
  FILE *pFVar20;
  FILE *local_2088;
  uint local_2080;
  uint local_207c;
  ulong local_2078 [1027];
  
  iVar6 = FUN_0014fef0();
  clearerr(param_2);
  if (iVar6 == 1) {
    uVar7 = FUN_0015fee0(param_1,param_2,1);
    iVar8 = param_3 + 1;
  }
  else {
    FUN_00153fb0(param_1,iVar6 + 0x13,"too many arguments");
    iVar6 = iVar6 + -2;
    iVar18 = param_3;
    do {
      iVar8 = FUN_00150310(param_1,iVar18);
      if (iVar8 == 3) {
        sVar11 = FUN_00154b00(param_1,iVar18);
        if (sVar11 == 0) {
          iVar8 = getc(param_2);
          ungetc(iVar8,param_2);
          FUN_00151570(param_1,&DAT_03996322);
          uVar19 = (uint)(iVar8 != -1);
          uVar7 = (uint)(iVar8 != -1);
          goto joined_r0x0015f804;
        }
        FUN_00155030(param_1,&local_2088);
        pvVar12 = (void *)FUN_00154c30(&local_2088,sVar11);
        sVar11 = fread(pvVar12,1,sVar11,param_2);
        local_2078[0] = local_2078[0] + sVar11;
        FUN_00154ec0(&local_2088);
        uVar7 = (uint)(sVar11 != 0);
        goto joined_r0x0015f950;
      }
      pcVar13 = (char *)FUN_00154910(param_1,iVar18,0);
      if (*pcVar13 == '*') {
        pcVar13 = pcVar13 + 1;
      }
      switch(*pcVar13) {
      case 'L':
        uVar17 = 0;
        break;
      default:
        uVar16 = FUN_00154010(param_1,iVar18,"invalid format");
        return uVar16;
      case 'a':
        FUN_00155030(param_1,&local_2088);
        do {
          pvVar12 = (void *)FUN_00154c30(&local_2088,0x2000);
          sVar11 = fread(pvVar12,1,0x2000,param_2);
          local_2078[0] = local_2078[0] + sVar11;
        } while (sVar11 == 0x2000);
        FUN_00154ec0(&local_2088);
        uVar19 = 1;
        uVar7 = 1;
        goto joined_r0x0015f804;
      case 'l':
        uVar17 = 1;
        break;
      case 'n':
        local_207c = 0;
        local_2088 = param_2;
        plVar14 = localeconv();
        bVar2 = *plVar14->decimal_point;
        flockfile(param_2);
        do {
          uVar7 = getc_unlocked(param_2);
        } while (uVar7 == 0x20 || uVar7 - 9 < 5);
        pFVar20 = param_2;
        local_2080 = uVar7;
        if ((uVar7 == 0x2d) || (uVar7 == 0x2b)) {
          uVar16 = 1;
          local_2078[0] = CONCAT71(local_2078[0]._1_7_,(char)uVar7);
          local_207c = 1;
          local_2080 = getc_unlocked(param_2);
          if (local_2080 == 0x30) goto LAB_0015f9d4;
LAB_0015fa8c:
          iVar9 = 0;
          iVar8 = 0;
          if (local_2080 - 0x30 < 10) {
LAB_0015fa9c:
            iVar8 = 0;
            do {
              pFVar20 = local_2088;
              local_207c = (int)uVar16 + 1;
              *(char *)((long)local_2078 + (long)(int)uVar16) = (char)local_2080;
              uVar7 = getc_unlocked(local_2088);
              iVar8 = iVar8 + 1;
              local_2080 = uVar7;
              if (9 < uVar7 - 0x30) {
                bVar3 = true;
                iVar8 = iVar8 + iVar9;
                goto joined_r0x0015fc2c;
              }
              uVar16 = (ulong)local_207c;
            } while ((int)local_207c < 200);
            bVar3 = true;
LAB_0015faf0:
            local_2078[0] = local_2078[0] & 0xffffffffffffff00;
            iVar8 = iVar8 + iVar9;
            goto joined_r0x0015fc2c;
          }
LAB_0015fbec:
          bVar3 = true;
          uVar7 = local_2080;
joined_r0x0015fc08:
          if (uVar7 != bVar2) goto LAB_0015fb04;
LAB_0015fb2c:
          pFVar4 = local_2088;
          lVar15 = (long)(int)local_207c;
          if ((int)local_207c < 200) {
            local_207c = local_207c + 1;
            *(char *)((long)local_2078 + lVar15) = (char)uVar7;
            uVar7 = getc_unlocked(local_2088);
            pFVar20 = pFVar4;
            local_2080 = uVar7;
            if (bVar3) {
              pFVar4 = local_2088;
              if (uVar7 - 0x30 < 10) {
                if ((int)local_207c < 200) {
                  iVar9 = 0;
                  do {
                    pFVar20 = local_2088;
                    *(char *)((long)local_2078 + (long)(int)local_207c) = (char)local_2080;
                    local_207c = local_207c + 1;
                    uVar7 = getc_unlocked(local_2088);
                    iVar9 = iVar9 + 1;
                    local_2080 = uVar7;
                    if (9 < uVar7 - 0x30) goto LAB_0015fcf4;
                  } while ((int)local_207c < 200);
                  goto LAB_0015fcf0;
                }
LAB_0015fc4c:
                local_2078[0] = local_2078[0] & 0xffffffffffffff00;
                pFVar4 = local_2088;
              }
            }
            else {
              iVar9 = isxdigit(uVar7);
              pFVar4 = local_2088;
              if (iVar9 != 0) {
                if (199 < (int)local_207c) goto LAB_0015fc4c;
                iVar9 = 0;
                do {
                  pFVar20 = local_2088;
                  *(char *)((long)local_2078 + (long)(int)local_207c) = (char)uVar7;
                  local_207c = local_207c + 1;
                  uVar7 = getc_unlocked(local_2088);
                  iVar9 = iVar9 + 1;
                  local_2080 = uVar7;
                  iVar10 = isxdigit(uVar7);
                  if (iVar10 == 0) goto LAB_0015fcf4;
                } while ((int)local_207c < 200);
LAB_0015fcf0:
                local_2078[0] = local_2078[0] & 0xffffffffffffff00;
LAB_0015fcf4:
                iVar8 = iVar9 + iVar8;
                pFVar4 = local_2088;
              }
            }
          }
          else {
            local_2078[0] = local_2078[0] & 0xffffffffffffff00;
          }
        }
        else {
          uVar16 = 0;
          if (uVar7 != 0x30) goto LAB_0015fa8c;
LAB_0015f9d4:
          uVar7 = (uint)uVar16 + 1;
          *(undefined1 *)(((ulong)&local_2088 | uVar16) + 0x10) = 0x30;
          local_207c = uVar7;
          local_2080 = getc_unlocked(param_2);
          if ((local_2080 | 0x20) != 0x78) {
            iVar8 = 1;
            uVar16 = (ulong)uVar7;
            iVar9 = iVar8;
            if (9 < local_2080 - 0x30) goto LAB_0015fbec;
            goto LAB_0015fa9c;
          }
          uVar19 = (uint)uVar16 | 2;
          *(char *)(((ulong)&local_2088 | (ulong)uVar7) + 0x10) = (char)local_2080;
          local_207c = uVar19;
          uVar7 = getc_unlocked(param_2);
          local_2080 = uVar7;
          iVar8 = isxdigit(uVar7);
          if (iVar8 != 0) {
            iVar8 = 0;
            local_207c = uVar19;
            do {
              pFVar20 = local_2088;
              *(char *)((long)local_2078 + (long)(int)local_207c) = (char)uVar7;
              local_207c = local_207c + 1;
              uVar7 = getc_unlocked(local_2088);
              iVar8 = iVar8 + 1;
              local_2080 = uVar7;
              iVar9 = isxdigit(uVar7);
              if (iVar9 == 0) {
                bVar3 = false;
                goto joined_r0x0015fc08;
              }
            } while ((int)local_207c < 200);
            bVar3 = false;
            iVar9 = 0;
            goto LAB_0015faf0;
          }
          bVar3 = false;
          iVar8 = 0;
joined_r0x0015fc2c:
          if (uVar7 == bVar2) goto LAB_0015fb2c;
LAB_0015fb04:
          pFVar4 = local_2088;
          if (uVar7 == 0x2e) goto LAB_0015fb2c;
        }
        local_2088 = pFVar4;
        if (0 < iVar8) {
          pbVar1 = &DAT_039671a9;
          if (!bVar3) {
            pbVar1 = &DAT_039366f9;
          }
          if ((uVar7 == *pbVar1) || (uVar7 == pbVar1[1])) {
            lVar15 = (long)(int)local_207c;
            if ((int)local_207c < 200) {
              local_207c = local_207c + 1;
              *(char *)((long)local_2078 + lVar15) = (char)uVar7;
              local_2080 = getc_unlocked(pFVar4);
              pFVar5 = local_2088;
              pFVar20 = pFVar4;
              uVar7 = local_2080;
              pFVar4 = local_2088;
              uVar19 = local_207c;
              if ((local_2080 == 0x2d) || (local_2080 == 0x2b)) {
                lVar15 = (long)(int)local_207c;
                if ((int)local_207c < 200) {
                  local_207c = local_207c + 1;
                  *(char *)((long)local_2078 + lVar15) = (char)local_2080;
                  uVar7 = getc_unlocked(local_2088);
                  pFVar20 = pFVar5;
                  pFVar4 = local_2088;
                  uVar19 = local_207c;
                }
                else {
                  local_2078[0] = local_2078[0] & 0xffffffffffffff00;
                }
              }
              while (local_2088 = pFVar4, local_2080 = uVar7, local_207c = uVar19, uVar7 - 0x30 < 10
                    ) {
                if (199 < (int)uVar19) goto LAB_0015fdd0;
                local_207c = uVar19 + 1;
                *(char *)((long)local_2078 + (long)(int)uVar19) = (char)uVar7;
                uVar7 = getc_unlocked(pFVar4);
                pFVar20 = pFVar4;
                pFVar4 = local_2088;
                uVar19 = local_207c;
              }
            }
            else {
LAB_0015fdd0:
              local_2078[0] = local_2078[0] & 0xffffffffffffff00;
            }
          }
        }
        ungetc(uVar7,pFVar20);
        funlockfile(pFVar20);
        *(undefined1 *)((long)local_2078 + (long)(int)local_207c) = 0;
        lVar15 = FUN_00150a50(param_1,local_2078);
        if (lVar15 == 0) {
          FUN_00151490(param_1);
        }
        bVar3 = lVar15 != 0;
        uVar19 = (uint)bVar3;
        uVar7 = (uint)bVar3;
joined_r0x0015f804:
        iVar8 = iVar18 + 1;
        if (iVar6 != 0) goto LAB_0015f808;
        goto LAB_0015fe64;
      }
      uVar7 = FUN_0015fee0(param_1,param_2,uVar17);
joined_r0x0015f950:
      iVar8 = iVar18 + 1;
      uVar19 = uVar7;
      if (iVar6 == 0) break;
LAB_0015f808:
      iVar6 = iVar6 + -1;
      iVar8 = iVar18 + 1;
      uVar7 = 0;
      iVar18 = iVar8;
    } while (uVar19 != 0);
  }
LAB_0015fe64:
  iVar6 = ferror(param_2);
  if (iVar6 == 0) {
    if (uVar7 == 0) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_00151490(param_1);
    }
    uVar16 = (ulong)(uint)(iVar8 - param_3);
  }
  else {
    uVar16 = FUN_001543b0(param_1,0,0);
  }
  return uVar16;
}


