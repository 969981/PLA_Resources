/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282b6d0; name: FUN_0282b6d0
 */


undefined8 FUN_0282b6d0(long param_1,int *param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  long *plVar14;
  uint *puVar15;
  long *plVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  long *plVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  long *plVar25;
  uint uVar26;
  uint uVar27;
  byte bVar28;
  uint *puVar29;
  char *pcVar30;
  double dVar31;
  double __x;
  uint local_9c;
  uint uStack_98;
  long local_80;
  int local_78;
  int local_74;
  
  iVar13 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    uVar21 = 0;
    if (iVar5 != 0) {
      uVar21 = iVar13 / iVar5;
    }
    uVar23 = iVar13 - uVar21 * iVar5;
    if (iVar5 == 1) goto LAB_0282b71c;
LAB_0282b730:
    puVar29 = (uint *)(param_1 + 0x10);
    iVar13 = param_2[1];
    if (*puVar29 == 1) {
      iVar5 = -iVar13;
      if (-1 < iVar13) {
        iVar5 = iVar13;
      }
      if (0 < iVar5) goto LAB_0282ba9c;
    }
    iVar6 = *param_2;
    iVar5 = -iVar6;
    if (-1 < iVar6) {
      iVar5 = iVar6;
    }
    __x = (double)(iVar13 * iVar13 + iVar6 * iVar6);
    dVar31 = SQRT(__x);
    iVar6 = -iVar13;
    if (-1 < iVar13) {
      iVar6 = iVar13;
    }
    if (NAN(dVar31)) {
      dVar31 = sqrt(__x);
    }
    iVar17 = (int)dVar31;
    iVar13 = *param_2;
    iVar9 = 0;
    if (iVar17 != 0) {
      iVar9 = iVar13 / iVar17;
    }
    puVar1 = (uint *)(param_1 + 0xc);
    plVar20 = (long *)(*(long *)(*(long *)(param_1 + 0x40) + 0x20) +
                      (ulong)*(uint *)(param_1 + 8) * 0x28);
    local_80 = *plVar20;
    plVar20 = (long *)plVar20[3];
    iVar10 = 0;
    if (iVar17 != 0) {
      iVar10 = param_2[1] / iVar17;
    }
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
      iVar13 = *param_2;
    }
    lVar24 = 0x18;
    if (iVar13 != 0) {
      lVar24 = 0x14;
    }
    iVar7 = *(int *)(param_1 + lVar24);
    *param_3 = 0;
    iVar13 = 0;
    local_78 = 0;
    local_74 = 1;
    iVar17 = iVar9;
    local_9c = uVar21;
    uStack_98 = uVar23;
    uVar22 = uVar21;
    do {
      uVar22 = uVar22 + iVar10;
      uVar27 = uVar23 + iVar17;
      plVar16 = plVar20;
      uVar26 = uVar22;
      if (((((int)uVar27 < 0) || ((int)uVar22 < 0)) || ((int)*puVar1 <= (int)uVar27)) ||
         ((int)*puVar29 <= (int)uVar22)) {
        if (iVar7 == 1) {
          uVar26 = *puVar1;
          iVar2 = uVar23 + (uVar26 & (int)uVar27 >> 0x1f) + iVar17;
          iVar11 = 0;
          if (uVar26 != 0) {
            iVar11 = iVar2 / (int)uVar26;
          }
          uVar27 = iVar2 - iVar11 * uVar26;
          uVar26 = *puVar29;
          *param_3 = 1;
          iVar2 = (uVar26 & (int)uVar22 >> 0x1f) + uVar22;
          iVar11 = 0;
          if (uVar26 != 0) {
            iVar11 = iVar2 / (int)uVar26;
          }
          uVar26 = iVar2 - iVar11 * uVar26;
          if ((int)(uVar26 | uVar27) < 0) break;
        }
        else {
          if (iVar7 == 0) goto LAB_0282bab0;
          if (iVar7 == 2) {
            uVar19 = uVar23 + local_74 * iVar9;
            uVar8 = uVar21 + local_74 * iVar10;
            uVar18 = *puVar1;
            if ((int)uVar27 < 0) {
              uVar27 = 0;
              if (uVar18 != 0) {
                uVar27 = (int)(uVar23 + iVar17 + uVar18) / (int)uVar18;
              }
              uVar3 = -uVar27;
              if (-1 < (int)uVar27) {
                uVar3 = uVar27;
              }
              iVar2 = (uVar3 + 1) * uVar18;
              uVar26 = ~uVar3 + uVar22;
              if ((int)uVar26 < 0) {
                *param_3 = 1;
                uVar18 = *puVar29;
                iVar11 = 0;
                if (uVar18 != 0) {
                  iVar11 = (int)(uVar22 + (uVar18 - uVar3) + -1) / (int)uVar18;
                }
                iVar4 = -iVar11;
                if (-1 < iVar11) {
                  iVar4 = iVar11;
                }
                uVar27 = iVar2 + uVar19;
                uVar26 = (uVar8 - (uVar3 + 1)) + (iVar4 + 1) * uVar18;
                goto joined_r0x0282bcb8;
              }
              uVar27 = uVar23 + iVar17 + iVar2;
              uVar18 = *puVar29;
              if ((int)uVar18 <= (int)uVar26) goto LAB_0282bbac;
            }
            else {
              if ((int)uVar27 < (int)uVar18) {
                uVar18 = *puVar29;
                uVar27 = uVar19;
                uVar26 = uVar8;
              }
              else {
                iVar2 = 0;
                if (uVar18 != 0) {
                  iVar2 = (int)uVar27 / (int)uVar18;
                }
                uVar26 = uVar22 + iVar2;
                uVar27 = (uVar23 + iVar17) - uVar18 * iVar2;
                uVar18 = *puVar29;
                if ((int)uVar18 <= (int)uVar26) {
                  *param_3 = 1;
                  uVar18 = *puVar29;
                  iVar2 = 0;
                  if (uVar18 != 0) {
                    iVar2 = (int)uVar26 / (int)uVar18;
                  }
                  uVar26 = uVar26 - iVar2 * uVar18;
                }
              }
joined_r0x0282bcb8:
              if ((int)uVar26 < 0) {
                iVar2 = 0;
                if (uVar18 != 0) {
                  iVar2 = (int)(uVar26 + uVar18) / (int)uVar18;
                }
                iVar11 = -iVar2;
                if (-1 < iVar2) {
                  iVar11 = iVar2;
                }
                uVar26 = uVar26 + (iVar11 + 1) * uVar18;
                uVar27 = uVar27 - (iVar11 + 1);
                if ((int)uVar27 < 0) {
                  *param_3 = 1;
                  uVar18 = *puVar1;
                  iVar2 = 0;
                  if (uVar18 != 0) {
                    iVar2 = (int)(uVar18 + uVar27) / (int)uVar18;
                  }
                  iVar11 = -iVar2;
                  if (-1 < iVar2) {
                    iVar11 = iVar2;
                  }
                  uVar27 = uVar27 + (iVar11 + 1) * uVar18;
                  goto LAB_0282b840;
                }
              }
              else if ((int)uVar18 <= (int)uVar26) {
LAB_0282bbac:
                iVar2 = 0;
                if (uVar18 != 0) {
                  iVar2 = (int)uVar26 / (int)uVar18;
                }
                uVar27 = iVar2 + uVar27;
                uVar26 = uVar26 - iVar2 * uVar18;
                if ((int)*puVar1 <= (int)uVar27) {
                  *param_3 = 1;
                  uVar18 = *puVar1;
                  iVar2 = 0;
                  if (uVar18 != 0) {
                    iVar2 = (int)uVar27 / (int)uVar18;
                  }
                  uVar27 = uVar27 - iVar2 * uVar18;
                  goto LAB_0282b840;
                }
              }
            }
          }
        }
      }
LAB_0282b840:
      bVar12 = *(int *)(param_1 + 0x1c) != 0;
      puVar15 = puVar1;
      if (bVar12) {
        puVar15 = puVar29;
      }
      uVar18 = uVar27;
      uVar19 = uVar26;
      if (bVar12) {
        uVar18 = uVar26;
        uVar19 = uVar27;
      }
      plVar14 = (long *)(*(long *)(*(long *)(param_1 + 0x40) + 0x20) +
                        (ulong)(uVar18 + *puVar15 * uVar19) * 0x28);
      lVar24 = *plVar14;
      plVar14 = (long *)plVar14[3];
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
      if (lVar24 == local_80) {
        bVar28 = 0;
      }
      else {
        bVar12 = *(int *)(param_1 + 0x1c) != 0;
        puVar15 = puVar1;
        if (bVar12) {
          puVar15 = puVar29;
        }
        uVar18 = uVar27;
        uVar19 = uVar26;
        if (bVar12) {
          uVar18 = uVar26;
          uVar19 = uVar27;
        }
        lVar24 = *(long *)(*(long *)(param_1 + 0x40) + 0x20) +
                 (ulong)(uVar18 + *puVar15 * uVar19) * 0x28;
        pcVar30 = *(char **)(lVar24 + 8);
        plVar25 = *(long **)(lVar24 + 0x18);
        if (plVar25 == (long *)0x0) {
          if (*pcVar30 == '\0') goto LAB_0282bb04;
LAB_0282b8c4:
          puVar15 = puVar1;
          uVar18 = uVar26;
          uVar19 = uVar27;
          if (*(int *)(param_1 + 0x1c) != 0) {
            puVar15 = puVar29;
            uVar18 = uVar27;
            uVar19 = uVar26;
          }
          bVar28 = *(byte *)(*(long *)(*(long *)(param_1 + 0x40) + 0x20) +
                             (ulong)(uVar19 + *puVar15 * uVar18) * 0x28 + 0x20) & 1;
        }
        else {
          (**(code **)(*plVar25 + 0x18))(plVar25);
          if (*pcVar30 != '\0') goto LAB_0282b8c4;
LAB_0282bb04:
          bVar28 = 0;
        }
        if (plVar25 != (long *)0x0) {
          (**(code **)(*plVar25 + 0x20))(plVar25);
        }
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if (bVar28 == 0) {
      }
      else {
        puVar15 = puVar1;
        uVar18 = uVar26;
        uVar19 = uVar27;
        if (*(int *)(param_1 + 0x1c) != 0) {
          puVar15 = puVar29;
          uVar18 = uVar27;
          uVar19 = uVar26;
        }
        plVar16 = (long *)(*(long *)(*(long *)(param_1 + 0x40) + 0x20) +
                          (ulong)(uVar19 + *puVar15 * uVar18) * 0x28);
        local_80 = *plVar16;
        plVar16 = (long *)plVar16[3];
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x18))(plVar16);
        }
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x20))(plVar20);
        }
        iVar13 = iVar13 + 1;
        local_9c = uVar26;
        uStack_98 = uVar27;
      }
      if (iVar5 <= iVar13) {
        if (iVar6 <= iVar13) goto joined_r0x0282ba60;
      }
      iVar17 = iVar17 + iVar9;
      local_74 = local_74 + 1;
      local_78 = local_78 + 1;
      plVar20 = plVar16;
    } while (local_78 < (int)(*puVar29 * *puVar1));
    plVar20 = plVar16;
    uStack_98 = uVar23;
    local_9c = uVar21;
LAB_0282bab0:
    *param_3 = 2;
    plVar16 = plVar20;
joined_r0x0282ba60:
    uVar23 = uStack_98;
    uVar21 = local_9c;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x10);
    uVar23 = 0;
    if (iVar5 != 0) {
      uVar23 = iVar13 / iVar5;
    }
    uVar21 = iVar13 - uVar23 * iVar5;
    if (*(int *)(param_1 + 0xc) != 1) goto LAB_0282b730;
LAB_0282b71c:
    iVar5 = *param_2;
    iVar13 = -iVar5;
    if (-1 < iVar5) {
      iVar13 = iVar5;
    }
    if (iVar13 < 1) goto LAB_0282b730;
LAB_0282ba9c:
    *param_3 = 2;
  }
  return CONCAT44(uVar21,uVar23);
}


