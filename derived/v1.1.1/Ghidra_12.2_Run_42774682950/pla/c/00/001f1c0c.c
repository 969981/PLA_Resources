/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f1c0c; name: FUN_001f1c0c
 */


long FUN_001f1c0c(char *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  size_t sVar11;
  int *piVar12;
  char cVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  char *__s;
  int iVar18;
  uint local_9c;
  uint local_98;
  int local_94;
  char *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_6c;
  undefined8 local_68;
  
  puVar6 = PTR_PTR_04372770;
  iVar9 = -1;
  local_68 = 0xffffffffffffffff;
  local_6c = -1;
  cVar13 = *param_1;
  if (cVar13 != '\0') {
    bVar8 = false;
    iVar18 = -1;
    uVar15 = 0;
    lVar17 = 0xffffffff;
    local_9c = 0xffffffff;
    local_98 = 0xffffffff;
    uVar16 = 0xffffffff;
    __s = param_1;
LAB_001f1c78:
    do {
      iVar9 = FUN_001e343c(cVar13);
      if (iVar9 == 0) {
        __s = __s + 1;
        cVar13 = *__s;
        if (cVar13 != '\0') goto LAB_001f1c78;
      }
      iVar9 = FUN_001e34b4(*__s);
      if (iVar9 == 0) {
        iVar9 = FUN_001e3418(*__s);
        if (iVar9 != 0) {
          local_94 = 0;
          if (local_6c == -1) {
            iVar9 = sscanf(__s,"%02d:%02d:%02d%n",(long)&local_68 + 4,&local_68,&local_6c,&local_94)
            ;
            if (iVar9 == 3) {
              __s = __s + local_94;
            }
            else {
              if ((local_6c != -1) ||
                 (iVar9 = sscanf(__s,"%02d:%02d%n",(long)&local_68 + 4,&local_68,&local_94),
                 iVar9 != 2)) goto LAB_001f1ce0;
              __s = __s + local_94;
              local_6c = 0;
            }
          }
          else {
LAB_001f1ce0:
            piVar12 = __errno_location();
            iVar9 = *piVar12;
            piVar12 = __errno_location();
            *piVar12 = 0;
            lVar14 = strtol(__s,&local_90,10);
            piVar12 = __errno_location();
            iVar3 = *piVar12;
            piVar12 = __errno_location();
            if (*piVar12 != iVar9) {
              piVar12 = __errno_location();
              *piVar12 = iVar9;
            }
            if (lVar14 != (int)lVar14) {
              return -1;
            }
            if (iVar3 != 0) {
              return -1;
            }
            uVar10 = FUN_0020435c(lVar14);
            if ((((iVar18 == -1) && (param_1 < __s)) && ((int)uVar10 < 0x579)) &&
               ((long)local_90 - (long)__s == 4)) {
              cVar13 = __s[-1];
              if ((cVar13 == '-') || (cVar13 == '+')) {
                iVar9 = uVar10 + ((int)uVar10 / 100) * -0x28;
                iVar18 = iVar9 * -0x3c;
                if (cVar13 != '+') {
                  iVar18 = iVar9 * 0x3c;
                }
                bVar7 = true;
              }
              else {
                bVar7 = false;
                iVar18 = -1;
              }
            }
            else {
              bVar7 = false;
              if (((local_98 == 0xffffffff) && ((local_9c & (uint)uVar16) == 0xffffffff)) &&
                 ((long)local_90 - (long)__s == 8)) {
                uVar16 = (ulong)(((int)uVar10 % 10000) / 100 - 1);
                local_98 = (int)uVar10 % 100;
                __s = local_90;
                local_9c = (int)uVar10 / 10000;
                goto LAB_001f201c;
              }
            }
            if (((local_98 == 0xffffffff) && (!bVar8)) && (!bVar7)) {
              bVar7 = uVar10 - 1 < 0x1f;
              local_98 = uVar10;
              if (!bVar7) {
                local_98 = 0xffffffff;
              }
              bVar8 = true;
            }
            if (((local_9c != 0xffffffff) || (!bVar8)) || (bVar7)) {
              __s = local_90;
              if (!bVar7) {
                return -1;
              }
            }
            else {
              if ((int)uVar10 < 100) {
                if ((int)uVar10 < 0x47) {
                  uVar10 = uVar10 + 2000;
                }
                else {
                  uVar10 = uVar10 + 0x76c;
                }
              }
              bVar8 = local_98 != 0xffffffff;
              __s = local_90;
              local_9c = uVar10;
            }
          }
        }
      }
      else {
        local_80 = 0;
        uStack_78 = 0;
        local_90 = (char *)0x0;
        uStack_88 = 0;
        iVar9 = sscanf(__s,"%31[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz]",&local_90);
        if (iVar9 == 0) {
          sVar11 = 0;
        }
        else {
          sVar11 = strlen((char *)&local_90);
        }
        if ((int)lVar17 == -1) {
          lVar17 = 0;
          ppuVar2 = &PTR_s_Monday_0411d188;
          if (sVar11 < 4) {
            ppuVar2 = (undefined **)PTR_PTR_04372768;
          }
          do {
            iVar9 = FUN_001f8b48(&local_90,ppuVar2[lVar17]);
            if (iVar9 != 0) goto LAB_001f1e90;
            lVar17 = lVar17 + 1;
          } while ((int)lVar17 != 7);
          lVar17 = 0xffffffff;
        }
        if ((uint)uVar16 == 0xffffffff) {
          uVar16 = 0;
          do {
            iVar9 = FUN_001f8b48(&local_90,*(undefined8 *)(puVar6 + uVar16 * 8));
            if (iVar9 != 0) goto LAB_001f1e90;
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 != 0xc);
          uVar16 = 0xffffffff;
        }
        if (iVar18 != -1) {
          return -1;
        }
        lVar14 = 0;
        while (iVar9 = FUN_001f8b48(&local_90,&DAT_039c72f8 + lVar14), iVar9 == 0) {
          lVar14 = lVar14 + 0xc;
          if ((int)lVar14 == 0x33c) {
            return -1;
          }
        }
        iVar18 = *(int *)((long)&DAT_039c7300 + lVar14) * 0x3c;
LAB_001f1e90:
        __s = __s + sVar11;
      }
LAB_001f201c:
      iVar9 = (int)uVar16;
      uVar15 = uVar15 + 1;
      if ((5 < uVar15) || (cVar13 = *__s, cVar13 == '\0')) goto LAB_001f2030;
    } while( true );
  }
  local_98 = 0xffffffff;
  local_9c = 0xffffffff;
  iVar18 = -1;
LAB_001f2050:
  local_6c = 0;
  local_68 = 0;
LAB_001f205c:
  if (((((local_9c - 0x76f < 0x87) && (local_9c != 0xffffffff)) && (iVar9 != -1)) &&
      (((local_98 != 0xffffffff && (local_6c < 0x3d)) &&
       ((iVar9 < 0xc && (((int)local_98 < 0x20 && (local_68._4_4_ < 0x18)))))))) &&
     ((int)local_68 < 0x3c)) {
    iVar3 = iVar9;
    if (iVar9 < 0) {
      iVar3 = (0xb - iVar9) / 0xc;
      local_9c = iVar3 + local_9c;
      iVar3 = (iVar3 * 0xc - (0xb - iVar9)) + 0xb;
    }
    iVar4 = local_9c - (iVar9 < 2);
    iVar5 = (int)((ulong)((long)iVar4 * -0x51eb851f) >> 0x20);
    iVar9 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar9 = iVar4;
    }
    iVar1 = 0;
    if (iVar18 != -1) {
      iVar1 = iVar18;
    }
    lVar17 = ((long)(int)local_68 +
             ((long)local_68._4_4_ +
             ((long)*(int *)(&DAT_039c7634 + (long)iVar3 * 4) + (long)(int)local_98 +
              (long)(int)(local_9c - 0x7b2) * 0x16d +
             (long)(((iVar5 >> 5) - (iVar5 >> 0x1f)) + (iVar9 >> 2) + iVar4 / 400 + -0x1dd)) * 0x18)
             * 0x3c) * 0x3c + (long)local_6c + -0x15180;
    if ((iVar1 < 1) || (lVar17 <= 0x7fffffff - iVar1)) {
      lVar17 = lVar17 + iVar1;
      lVar14 = 0;
      if (lVar17 != -1) {
        lVar14 = lVar17;
      }
      return lVar14;
    }
  }
  return -1;
LAB_001f2030:
  if (local_6c != -1) goto LAB_001f205c;
  goto LAB_001f2050;
}


