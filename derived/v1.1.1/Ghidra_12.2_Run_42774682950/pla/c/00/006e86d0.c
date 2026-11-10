/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e86d0; name: FUN_006e86d0
 */


undefined8 FUN_006e86d0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  char *pcVar15;
  char *pcVar16;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *plStack_68;
  
  plStack_88 = (long *)FUN_00612290();
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  plStack_68 = (long *)FUN_00612290();
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if ((param_2 != (char *)0x0) && (sVar5 = strlen(param_2), sVar5 != 0)) {
    pcVar16 = param_2 + sVar5;
    if ((long)sVar5 < 1) {
LAB_006e8760:
      pcVar15 = pcVar16;
    }
    else {
      pcVar15 = param_2;
      if (*param_2 != '/') {
        pcVar9 = param_2;
        sVar7 = sVar5;
        do {
          sVar7 = sVar7 - 1;
          if (sVar7 == 0) goto LAB_006e8760;
          pcVar15 = pcVar9 + 1;
          pcVar8 = pcVar9 + 1;
          pcVar9 = pcVar15;
        } while (*pcVar8 != '/');
      }
    }
    if ((pcVar16 != pcVar15) &&
       (uVar12 = (long)pcVar15 - (long)param_2, uVar12 != 0xffffffffffffffff)) {
      uVar13 = sVar5;
      if (uVar12 <= sVar5) {
        uVar13 = uVar12;
      }
      sVar7 = 7;
      if (uVar13 < 8) {
        sVar7 = uVar13;
      }
      if (sVar7 == 0) {
        if (uVar13 < 8) goto LAB_006e87c4;
      }
      else {
        iVar4 = memcmp(param_2,"tenants",sVar7);
        iVar6 = iVar4;
        if (iVar4 == 0) {
          iVar6 = 1;
        }
        if ((uVar13 < 8) && (iVar4 == 0)) {
LAB_006e87c4:
          iVar6 = -(uint)(uVar13 < 7);
        }
        if (iVar6 == 0) {
          uVar13 = sVar5 - (uVar12 + 1);
          pcVar9 = param_2 + uVar12 + 1;
          if (uVar13 == 0) {
LAB_006e88a0:
            pcVar8 = pcVar16;
          }
          else {
            pcVar8 = pcVar16;
            if ((0 < (long)pcVar16 - (long)pcVar9) && (pcVar8 = pcVar9, *pcVar9 != '/')) {
              pcVar10 = param_2 + (sVar5 - (long)pcVar15) + -2;
              pcVar11 = pcVar9;
              do {
                if (pcVar10 == (char *)0x0) goto LAB_006e88a0;
                pcVar8 = pcVar11 + 1;
                pcVar1 = pcVar11 + 1;
                pcVar10 = pcVar10 + -1;
                pcVar11 = pcVar8;
              } while (*pcVar1 != '/');
            }
          }
          uVar12 = (long)pcVar8 - (long)pcVar9;
          if (pcVar16 == pcVar8) {
            uVar12 = 0xffffffffffffffff;
          }
          uVar2 = uVar13;
          if (uVar12 <= uVar13) {
            uVar2 = uVar12;
          }
          FUN_006e84a0(&local_a0,pcVar9,uVar2);
          uVar2 = uVar13;
          if (uVar12 != 0xffffffffffffffff) {
            uVar2 = uVar12 + 1;
          }
          uVar13 = uVar13 - uVar2;
          if (uVar13 != 0) {
            pcVar9 = pcVar9 + uVar2;
            if ((long)uVar13 < 1) {
LAB_006e8928:
              pcVar16 = pcVar9 + uVar13;
            }
            else {
              pcVar16 = pcVar9;
              if (*pcVar9 != '/') {
                pcVar11 = param_2 + (sVar5 - (long)(pcVar15 + uVar2)) + -2;
                pcVar8 = pcVar9;
                do {
                  if (pcVar11 == (char *)0x0) goto LAB_006e8928;
                  pcVar16 = pcVar8 + 1;
                  pcVar10 = pcVar8 + 1;
                  pcVar11 = pcVar11 + -1;
                  pcVar8 = pcVar16;
                } while (*pcVar10 != '/');
              }
            }
            if ((pcVar9 + uVar13 != pcVar16) &&
               (uVar12 = (long)pcVar16 - (long)pcVar9, uVar12 != 0xffffffffffffffff)) {
              uVar3 = uVar13;
              if (uVar12 <= uVar13) {
                uVar3 = uVar12;
              }
              sVar7 = 5;
              if (uVar3 < 6) {
                sVar7 = uVar3;
              }
              if (sVar7 == 0) {
                if (uVar3 < 6) goto LAB_006e898c;
              }
              else {
                iVar4 = memcmp(pcVar9,"users",sVar7);
                iVar6 = iVar4;
                if (iVar4 == 0) {
                  iVar6 = 1;
                }
                if ((uVar3 < 6) && (iVar4 == 0)) {
LAB_006e898c:
                  iVar6 = -(uint)(uVar3 < 5);
                }
                if (iVar6 == 0) {
                  uVar13 = uVar13 - (uVar12 + 1);
                  pcVar8 = pcVar9 + uVar12 + 1;
                  if ((long)uVar13 < 1) {
LAB_006e8a24:
                    pcVar11 = pcVar8 + uVar13;
                  }
                  else {
                    pcVar11 = pcVar8;
                    if (*pcVar8 != '/') {
                      param_2 = param_2 + (sVar5 - 3);
                      pcVar11 = pcVar16 + uVar2 + (long)pcVar15;
                      do {
                        if (pcVar15 + uVar2 + (long)pcVar16 + -(long)pcVar9 == param_2)
                        goto LAB_006e8a24;
                        pcVar1 = pcVar11 + 1;
                        pcVar10 = pcVar11 + (3 - (long)pcVar9);
                        param_2 = param_2 + -1;
                        pcVar11 = pcVar1;
                      } while (*pcVar10 != '/');
                      pcVar11 = pcVar1 + (2 - (long)pcVar9);
                    }
                  }
                  uVar12 = (long)pcVar11 - (long)pcVar8;
                  if (pcVar8 + uVar13 == pcVar11) {
                    uVar12 = 0xffffffffffffffff;
                  }
                  if (uVar12 <= uVar13) {
                    uVar13 = uVar12;
                  }
                  FUN_006e84a0(&local_80,pcVar8,uVar13);
                    /* try { // try from 006e8a40 to 006e8a4b has its CatchHandler @ 006e8a5c */
                  FUN_006e8b44(param_1,&local_a0);
                  uVar14 = 1;
                  goto joined_r0x006e8a54;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar14 = 0;
joined_r0x006e8a54:
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))(plStack_68,local_70,local_80 & 0xfffffffffffffffe,1);
  }
  if ((local_a0 & 1) != 0) {
    (**(code **)(*plStack_88 + 0x18))(plStack_88,local_90,local_a0 & 0xfffffffffffffffe,1);
  }
  return uVar14;
}


