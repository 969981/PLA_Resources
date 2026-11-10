/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c638c; name: FUN_032c638c
 */


long * FUN_032c638c(long *param_1,char *param_2,long param_3,undefined8 param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long alStack_78 [3];
  
  pcVar11 = (char *)*param_1;
  if (*pcVar11 == '\0') {
    FUN_032c4d7c(param_1,param_2,0xffffffff);
    if (param_3 != 0) {
      FUN_032c638c(param_1,param_3,param_4,0);
    }
  }
  else {
    alStack_78[0] = param_3;
    alStack_78[1] = param_4;
    alStack_78[2] = 0;
    lVar14 = param_1[1];
    iVar7 = (int)lVar14 + -1;
    *(int *)(param_1 + 1) = iVar7;
    puVar5 = PTR_PTR_0434a090;
    if (iVar7 == 0) {
      bVar6 = false;
    }
    else {
      bVar6 = pcVar11[(long)(int)lVar14 + -2] != '/';
    }
    if (param_2 != (char *)0x0) {
      puVar12 = (uint *)((long)param_1 + 0xc);
      lVar14 = 0;
      do {
        cVar2 = *param_2;
        if (cVar2 != '\0') {
          while (cVar2 == '/') {
            param_2 = param_2 + 1;
            cVar2 = *param_2;
          }
          iVar7 = FUN_032c4900(param_2);
          if (iVar7 != 0) {
            uVar15 = iVar7 + 1;
            lVar13 = (long)iVar7;
            do {
              if (lVar13 == 0) {
                uVar15 = 0;
                goto LAB_032c64dc;
              }
              lVar4 = lVar13 + -1;
              uVar15 = uVar15 - 1;
              lVar13 = lVar13 + -1;
            } while (param_2[lVar4] == '/');
            if (bVar6) {
              iVar7 = (int)param_1[1];
              uVar8 = *(uint *)((long)param_1 + 0xc);
              lVar13 = *param_1;
              uVar9 = iVar7 + 1;
              if ((int)(uVar8 & 0x3fffffff) <= iVar7) {
                if (0x3ffffffe < iVar7) {
                  FUN_032bd0a8(uVar9);
                  uVar8 = *puVar12;
                }
                uVar8 = (uVar8 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar8) {
                  uVar8 = 0x3fffffff;
                }
                uVar3 = uVar9;
                if ((int)uVar9 <= (int)uVar8) {
                  uVar3 = uVar8;
                }
                lVar13 = FUN_032bd1d4(puVar5,uVar3,1,lVar13,iVar7,puVar12);
                iVar7 = (int)param_1[1];
                *param_1 = lVar13;
              }
              *(undefined1 *)(lVar13 + iVar7) = 0x2f;
              *(uint *)(param_1 + 1) = uVar9;
            }
LAB_032c64dc:
            iVar7 = (int)param_1[1];
            uVar8 = *(uint *)((long)param_1 + 0xc);
            lVar13 = *param_1;
            uVar9 = iVar7 + uVar15;
            if ((int)(uVar8 & 0x3fffffff) < (int)uVar9) {
              if (0x3fffffff < (int)uVar9) {
                FUN_032bd0a8(uVar9);
                uVar8 = *puVar12;
              }
              uVar8 = (uVar8 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar8) {
                uVar8 = 0x3fffffff;
              }
              uVar3 = uVar9;
              if ((int)uVar9 <= (int)uVar8) {
                uVar3 = uVar8;
              }
              lVar13 = FUN_032bd1d4(puVar5,uVar3,1,lVar13,iVar7,puVar12);
              *param_1 = lVar13;
            }
            if (0 < (int)uVar15) {
              pcVar11 = (char *)(lVar13 + iVar7);
              uVar8 = uVar15 & 7;
              if (6 < uVar15 - 1) {
                iVar7 = uVar8 - uVar15;
                pcVar10 = pcVar11;
                do {
                  *pcVar10 = *param_2;
                  pcVar10[1] = param_2[1];
                  pcVar10[2] = param_2[2];
                  pcVar10[3] = param_2[3];
                  pcVar10[4] = param_2[4];
                  pcVar10[5] = param_2[5];
                  pcVar10[6] = param_2[6];
                  pcVar1 = param_2 + 7;
                  pcVar11 = pcVar10 + 8;
                  param_2 = param_2 + 8;
                  iVar7 = iVar7 + 8;
                  pcVar10[7] = *pcVar1;
                  pcVar10 = pcVar11;
                } while (iVar7 != 0);
              }
              for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar11 = *param_2;
                pcVar11 = pcVar11 + 1;
                param_2 = param_2 + 1;
              }
            }
            *(uint *)(param_1 + 1) = uVar9;
          }
          bVar6 = true;
        }
        param_2 = (char *)alStack_78[lVar14];
        lVar14 = lVar14 + 1;
      } while (param_2 != (char *)0x0);
      iVar7 = (int)param_1[1];
      pcVar11 = (char *)*param_1;
    }
    puVar12 = (uint *)((long)param_1 + 0xc);
    uVar9 = *puVar12;
    uVar15 = iVar7 + 1;
    if ((int)(uVar9 & 0x3fffffff) <= iVar7) {
      if (0x3ffffffe < iVar7) {
        FUN_032bd0a8(uVar15);
        uVar9 = *puVar12;
      }
      uVar9 = (uVar9 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar9) {
        uVar9 = 0x3fffffff;
      }
      uVar8 = uVar15;
      if ((int)uVar15 <= (int)uVar9) {
        uVar8 = uVar9;
      }
      pcVar11 = (char *)FUN_032bd1d4(puVar5,uVar8,1,pcVar11,iVar7,puVar12);
      iVar7 = (int)param_1[1];
      *param_1 = (long)pcVar11;
    }
    pcVar11[iVar7] = '\0';
    *(uint *)(param_1 + 1) = uVar15;
  }
  return param_1;
}


