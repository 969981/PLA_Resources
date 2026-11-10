/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00821ea4; name: FUN_00821ea4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00821ea4(long param_1,undefined8 *param_2)

{
  char *__dest;
  undefined *puVar1;
  char cVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  char cVar11;
  bool bVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  undefined *local_78;
  undefined *local_70;
  char local_64 [4];
  
  puVar6 = PTR_DAT_04377b60;
  cVar4 = *PTR_DAT_04377b60;
  *DAT_043a4960 = cVar4;
  iVar7 = (**(code **)*param_2)(param_2,local_64,1);
  if (iVar7 == 0) {
    return;
  }
  bVar12 = false;
  uVar15 = 0;
  puVar1 = PTR_DAT_043773d0 + 0x10;
LAB_00821f9c:
  do {
    cVar11 = local_64[0];
    pcVar8 = DAT_043a4960;
    uVar14 = (uint)uVar15;
    if (bVar12) {
      if (local_64[0] == '\"') {
        if ((int)uVar14 < 2) {
          return;
        }
        iVar7 = (int)((long)(int)uVar14 + -1);
        __dest = DAT_043a4960 + iVar7;
        pcVar3 = puVar6;
        if ((int)uVar14 <= DAT_043a4968) {
          pcVar3 = __dest;
        }
        if (*pcVar3 != '\\') {
          return;
        }
        local_70 = &DAT_039042e1;
        local_78 = puVar1;
        (**(code **)(DAT_043a4958 + 0x18))(&DAT_043a4958);
        if (*DAT_043a4960 == cVar4) {
LAB_0082205c:
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          do {
            uVar9 = uVar13;
            if (uVar9 == 0x80000) goto LAB_0082205c;
            uVar13 = uVar9 + 1;
          } while (DAT_043a4960[uVar9 + 1] != cVar4);
          if (uVar9 >> 0x13 != 0) goto LAB_0082205c;
        }
        iVar5 = DAT_043a4968 - uVar14;
        if (1 < DAT_043a4968 - iVar7) {
          iVar5 = 1;
        }
        if (0 < iVar5) {
          (**(code **)(local_78 + 0x18))(&local_78);
          memcpy(__dest,local_70,(long)iVar5);
          lVar10 = (long)iVar5 + (long)(int)uVar14 + -1;
          if ((int)uVar13 < (int)lVar10) {
            pcVar8[lVar10] = cVar4;
          }
        }
        bVar12 = true;
        cVar11 = '\0';
      }
      else {
        (**(code **)(DAT_043a4958 + 0x18))(&DAT_043a4958);
        if (*DAT_043a4960 == cVar4) {
LAB_00822140:
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          do {
            uVar13 = uVar15;
            if (uVar13 == 0x80000) goto LAB_00822140;
            uVar15 = uVar13 + 1;
          } while (DAT_043a4960[uVar13 + 1] != cVar4);
          if (uVar13 >> 0x13 != 0) goto LAB_00822140;
        }
        if ((int)uVar15 < DAT_043a4968 + -1) {
          pcVar8 = DAT_043a4960 + (int)uVar15;
          *pcVar8 = cVar11;
          pcVar8[1] = cVar4;
        }
        bVar12 = true;
        uVar15 = (ulong)(uVar14 + 1);
        cVar11 = '\0';
      }
    }
    else if ((uVar14 == 0) && (local_64[0] == '\"')) {
      bVar12 = true;
      uVar15 = 0;
      cVar11 = '\0';
    }
    else {
      (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
      cVar11 = local_64[0];
      pcVar8 = (char *)(*(long *)(param_1 + 0x10) + 2);
      lVar10 = 0x80001;
      do {
        if (pcVar8[-2] == cVar4) break;
        if (pcVar8[-2] == local_64[0]) goto LAB_008222b4;
        if (pcVar8[-1] == cVar4) break;
        if (pcVar8[-1] == local_64[0]) goto LAB_008222b4;
        if (*pcVar8 == cVar4) break;
        if (*pcVar8 == local_64[0]) goto LAB_008222b4;
        lVar10 = lVar10 + -3;
        pcVar8 = pcVar8 + 3;
      } while (lVar10 != 0);
      if (local_64[0] == '\0') {
LAB_008222b4:
        if (*DAT_043a4960 != cVar4) {
          return;
        }
        cVar11 = '\0';
        bVar12 = false;
      }
      else {
        (**(code **)(DAT_043a4958 + 0x18))(&DAT_043a4958);
        if (*DAT_043a4960 == cVar4) {
LAB_0082223c:
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          do {
            uVar9 = uVar13;
            if (uVar9 == 0x80000) goto LAB_0082223c;
            uVar13 = uVar9 + 1;
          } while (DAT_043a4960[uVar9 + 1] != cVar4);
          if (uVar9 >> 0x13 != 0) goto LAB_0082223c;
        }
        if ((int)uVar13 < DAT_043a4968 + -1) {
          pcVar8 = DAT_043a4960 + (int)uVar13;
          *pcVar8 = cVar11;
          pcVar8[1] = cVar4;
        }
        uVar13 = (ulong)(uVar14 + 1);
        if ((int)uVar14 < 0) {
LAB_008222d4:
          cVar11 = '\0';
          uVar14 = uVar14 + 1;
        }
        else {
          pcVar8 = DAT_043a4960 + (int)uVar14;
          if (DAT_043a4968 <= (int)uVar14) {
            pcVar8 = puVar6;
          }
          if (*pcVar8 != '#') goto LAB_008222d4;
          if ((int)uVar14 < DAT_043a4968) {
            DAT_043a4960[uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)] = cVar4;
            uVar13 = uVar15 & 0xffffffff;
            cVar11 = '\n';
          }
          else {
            (**(code **)(DAT_043a4958 + 0x18))();
            uVar13 = uVar15 & 0xffffffff;
            cVar11 = '\n';
          }
        }
        if (1 < (int)uVar14) {
          iVar7 = (int)uVar13;
          uVar15 = (long)iVar7 - 2;
          uVar14 = (uint)uVar15;
          pcVar8 = DAT_043a4960 + uVar15;
          if (DAT_043a4968 <= (int)uVar14) {
            pcVar8 = puVar6;
          }
          if (*pcVar8 == '/') {
            pcVar8 = puVar6;
            if (iVar7 <= DAT_043a4968) {
              pcVar8 = DAT_043a4960 + (long)iVar7 + -1;
            }
            if (*pcVar8 == '/') {
              if ((int)uVar14 < DAT_043a4968) {
                bVar12 = false;
                DAT_043a4960[uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)] = cVar4;
                cVar11 = '\n';
              }
              else {
                (**(code **)(DAT_043a4958 + 0x18))();
                bVar12 = false;
                cVar11 = '\n';
              }
            }
            else {
              pcVar8 = puVar6;
              if (iVar7 <= DAT_043a4968) {
                pcVar8 = DAT_043a4960 + (long)iVar7 + -1;
              }
              if (*pcVar8 != '*') goto LAB_0082239c;
              if ((int)uVar14 < DAT_043a4968) {
                DAT_043a4960[uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)] = cVar4;
              }
              else {
                (**(code **)(DAT_043a4958 + 0x18))();
              }
              bVar12 = false;
              cVar11 = '*';
            }
            goto LAB_00821f38;
          }
        }
LAB_0082239c:
        bVar12 = false;
        uVar15 = uVar13;
      }
    }
LAB_00821f38:
    while( true ) {
      while( true ) {
        iVar7 = (**(code **)*param_2)(param_2,local_64,1);
        if (iVar7 == 0) {
          return;
        }
        if (cVar11 == '\0') goto LAB_00821f9c;
        if (local_64[0] == cVar11) break;
        cVar2 = '*';
        if (cVar11 != '/') {
          cVar2 = cVar11;
        }
        cVar11 = cVar2;
      }
      if (cVar11 != '*') break;
      cVar11 = '/';
    }
    if (*(int *)(param_1 + 0x18) < 1) {
      pcVar8 = puVar6;
    }
    else {
      pcVar8 = *(char **)(param_1 + 0x10);
    }
    local_64[0] = *pcVar8;
  } while( true );
}


