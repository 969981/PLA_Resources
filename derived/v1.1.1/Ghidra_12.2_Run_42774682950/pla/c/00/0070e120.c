/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070e120; name: FUN_0070e120
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0070e120(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  size_t sVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  char *pcVar19;
  char *pcVar20;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *plStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *plStack_68;
  
  plStack_a8 = (long *)FUN_00612290();
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  plStack_88 = (long *)FUN_00612290();
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  plStack_68 = (long *)FUN_00612290();
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if ((param_2 != (char *)0x0) && (sVar7 = strlen(param_2), sVar7 != 0)) {
    pcVar20 = param_2 + sVar7;
    if ((long)sVar7 < 1) {
LAB_0070e1bc:
      pcVar19 = pcVar20;
    }
    else {
      pcVar19 = param_2;
      if (*param_2 != '/') {
        pcVar11 = param_2;
        sVar9 = sVar7;
        do {
          sVar9 = sVar9 - 1;
          if (sVar9 == 0) goto LAB_0070e1bc;
          pcVar19 = pcVar11 + 1;
          pcVar10 = pcVar11 + 1;
          pcVar11 = pcVar19;
        } while (*pcVar10 != '/');
      }
    }
    if ((pcVar20 != pcVar19) &&
       (uVar16 = (long)pcVar19 - (long)param_2, uVar16 != 0xffffffffffffffff)) {
      uVar17 = sVar7;
      if (uVar16 <= sVar7) {
        uVar17 = uVar16;
      }
      sVar9 = 7;
      if (uVar17 < 8) {
        sVar9 = uVar17;
      }
      if (sVar9 == 0) {
        if (uVar17 < 8) goto LAB_0070e220;
      }
      else {
        iVar6 = memcmp(param_2,"tenants",sVar9);
        iVar8 = iVar6;
        if (iVar6 == 0) {
          iVar8 = 1;
        }
        if ((uVar17 < 8) && (iVar6 == 0)) {
LAB_0070e220:
          iVar8 = -(uint)(uVar17 < 7);
        }
        if (iVar8 == 0) {
          uVar17 = sVar7 - (uVar16 + 1);
          pcVar11 = param_2 + uVar16 + 1;
          if (uVar17 == 0) {
LAB_0070e2e8:
            pcVar10 = pcVar20;
          }
          else {
            pcVar10 = pcVar20;
            if ((0 < (long)pcVar20 - (long)pcVar11) && (pcVar10 = pcVar11, *pcVar11 != '/')) {
              pcVar12 = param_2 + (sVar7 - (long)pcVar19) + -2;
              pcVar13 = pcVar11;
              do {
                if (pcVar12 == (char *)0x0) goto LAB_0070e2e8;
                pcVar10 = pcVar13 + 1;
                pcVar15 = pcVar13 + 1;
                pcVar12 = pcVar12 + -1;
                pcVar13 = pcVar10;
              } while (*pcVar15 != '/');
            }
          }
          uVar16 = (long)pcVar10 - (long)pcVar11;
          if (pcVar20 == pcVar10) {
            uVar16 = 0xffffffffffffffff;
          }
          uVar3 = uVar17;
          if (uVar16 <= uVar17) {
            uVar3 = uVar16;
          }
          FUN_0070df60(&local_c0,pcVar11,uVar3);
          uVar3 = uVar17;
          if (uVar16 != 0xffffffffffffffff) {
            uVar3 = uVar16 + 1;
          }
          uVar17 = uVar17 - uVar3;
          if (uVar17 != 0) {
            pcVar11 = pcVar11 + uVar3;
            if ((long)uVar17 < 1) {
LAB_0070e370:
              pcVar20 = pcVar11 + uVar17;
            }
            else {
              pcVar20 = pcVar11;
              if (*pcVar11 != '/') {
                pcVar13 = param_2 + (sVar7 - (long)(pcVar19 + uVar3)) + -2;
                pcVar10 = pcVar11;
                do {
                  if (pcVar13 == (char *)0x0) goto LAB_0070e370;
                  pcVar20 = pcVar10 + 1;
                  pcVar12 = pcVar10 + 1;
                  pcVar13 = pcVar13 + -1;
                  pcVar10 = pcVar20;
                } while (*pcVar12 != '/');
              }
            }
            if ((pcVar11 + uVar17 != pcVar20) &&
               (uVar16 = (long)pcVar20 - (long)pcVar11, uVar16 != 0xffffffffffffffff)) {
              uVar4 = uVar17;
              if (uVar16 <= uVar17) {
                uVar4 = uVar16;
              }
              sVar9 = 0xc;
              if (uVar4 < 0xd) {
                sVar9 = uVar4;
              }
              if (sVar9 == 0) {
                if (uVar4 < 0xd) goto LAB_0070e3d4;
              }
              else {
                iVar6 = memcmp(pcVar11,"gameSessions",sVar9);
                iVar8 = iVar6;
                if (iVar6 == 0) {
                  iVar8 = 1;
                }
                if ((uVar4 < 0xd) && (iVar6 == 0)) {
LAB_0070e3d4:
                  iVar8 = -(uint)(uVar4 < 0xc);
                }
                if (iVar8 == 0) {
                  uVar17 = uVar17 - (uVar16 + 1);
                  pcVar10 = pcVar11 + uVar16 + 1;
                  if ((long)uVar17 < 1) {
LAB_0070e4b4:
                    pcVar13 = pcVar10 + uVar17;
                  }
                  else {
                    pcVar13 = pcVar10;
                    if (*pcVar10 != '/') {
                      pcVar12 = param_2 + (sVar7 - 3);
                      pcVar13 = pcVar20 + uVar3 + (long)pcVar19;
                      do {
                        if (pcVar19 + uVar3 + (long)pcVar20 + -(long)pcVar11 == pcVar12)
                        goto LAB_0070e4b4;
                        pcVar1 = pcVar13 + 1;
                        pcVar15 = pcVar13 + (3 - (long)pcVar11);
                        pcVar12 = pcVar12 + -1;
                        pcVar13 = pcVar1;
                      } while (*pcVar15 != '/');
                      pcVar13 = pcVar1 + (2 - (long)pcVar11);
                    }
                  }
                  uVar16 = (long)pcVar13 - (long)pcVar10;
                  if (pcVar10 + uVar17 == pcVar13) {
                    uVar16 = 0xffffffffffffffff;
                  }
                  uVar4 = uVar17;
                  if (uVar16 <= uVar17) {
                    uVar4 = uVar16;
                  }
                  FUN_0070df60(&local_a0,pcVar10,uVar4);
                  uVar4 = uVar17;
                  if (uVar16 != 0xffffffffffffffff) {
                    uVar4 = uVar16 + 1;
                  }
                  uVar17 = uVar17 - uVar4;
                  if (uVar17 != 0) {
                    pcVar10 = pcVar10 + uVar4;
                    pcVar13 = pcVar10 + uVar17;
                    pcVar12 = pcVar13;
                    if ((0 < (long)uVar17) && (pcVar12 = pcVar10, *pcVar10 != '/')) {
                      lVar14 = sVar7 - 3;
                      pcVar15 = pcVar20 + uVar4 + uVar3 + (long)pcVar19;
                      do {
                        pcVar12 = pcVar13;
                        if ((long)(pcVar19 + uVar4 + uVar3 + (long)pcVar20) -
                            (long)(param_2 + (long)pcVar11) == lVar14) goto joined_r0x0070e56c;
                        pcVar1 = pcVar15 + 1;
                        pcVar12 = pcVar15 + (3 - (long)pcVar11);
                        lVar14 = lVar14 + -1;
                        pcVar15 = pcVar1;
                      } while (*pcVar12 != '/');
                      pcVar12 = pcVar1 + (2 - (long)pcVar11);
                    }
joined_r0x0070e56c:
                    if ((pcVar13 != pcVar12) &&
                       (uVar16 = (long)pcVar12 - (long)pcVar10, uVar16 != 0xffffffffffffffff)) {
                      uVar5 = uVar17;
                      if (uVar16 <= uVar17) {
                        uVar5 = uVar16;
                      }
                      sVar9 = 0xc;
                      if (uVar5 < 0xd) {
                        sVar9 = uVar5;
                      }
                      if (sVar9 != 0) {
                        iVar6 = memcmp(pcVar10,"userSessions",sVar9);
                        iVar8 = iVar6;
                        if (iVar6 == 0) {
                          iVar8 = 1;
                        }
                        if ((uVar5 < 0xd) && (iVar6 == 0)) goto LAB_0070e5d0;
                        if (iVar8 != 0) goto joined_r0x0070e3e8;
LAB_0070e5e8:
                        uVar17 = uVar17 - (uVar16 + 1);
                        pcVar13 = pcVar10 + uVar16 + 1;
                        if ((long)uVar17 < 1) {
LAB_0070e67c:
                          pcVar15 = pcVar13 + uVar17;
                        }
                        else {
                          pcVar15 = pcVar13;
                          if (*pcVar13 != '/') {
                            pcVar15 = pcVar11 + sVar7 + (long)param_2 + -4;
                            lVar14 = (long)(pcVar12 + uVar4 + uVar3 + (long)pcVar20 + (long)pcVar19)
                                     - (long)pcVar11;
                            do {
                              if (pcVar19 + uVar4 + uVar3 + (long)pcVar20 + (long)pcVar12 +
                                  -(long)pcVar10 == pcVar15) goto LAB_0070e67c;
                              lVar2 = lVar14 - (long)pcVar10;
                              lVar14 = lVar14 + 1;
                              pcVar15 = pcVar15 + -1;
                            } while (*(char *)(lVar2 + 4) != '/');
                            pcVar15 = (char *)((lVar14 - (long)pcVar10) + 3);
                          }
                        }
                        uVar16 = (long)pcVar15 - (long)pcVar13;
                        if (pcVar13 + uVar17 == pcVar15) {
                          uVar16 = 0xffffffffffffffff;
                        }
                        if (uVar16 <= uVar17) {
                          uVar17 = uVar16;
                        }
                        FUN_0070df60(&local_80,pcVar13,uVar17);
                    /* try { // try from 0070e698 to 0070e6a3 has its CatchHandler @ 0070e6b4 */
                        FUN_0070e7e8(param_1,&local_c0);
                        uVar18 = 1;
                        goto joined_r0x0070e3e8;
                      }
                      if (uVar5 < 0xd) {
LAB_0070e5d0:
                        if (0xb < uVar5) goto LAB_0070e5e8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
joined_r0x0070e3e8:
  uVar18 = 0;
joined_r0x0070e3e8:
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))(plStack_68,local_70,local_80 & 0xfffffffffffffffe,1);
  }
  if ((local_a0 & 1) != 0) {
    (**(code **)(*plStack_88 + 0x18))(plStack_88,local_90,local_a0 & 0xfffffffffffffffe,1);
  }
  if ((local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))(plStack_a8,local_b0,local_c0 & 0xfffffffffffffffe,1);
  }
  return uVar18;
}


