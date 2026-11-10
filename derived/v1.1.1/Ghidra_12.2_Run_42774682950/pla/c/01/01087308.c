/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01087308; name: FUN_01087308
 */


undefined8 FUN_01087308(int *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ushort uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ushort uVar16;
  ushort *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  int *piVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  
  lVar18 = *param_2;
  uVar23 = (long)param_1 - lVar18;
  if (((uVar23 & 3) != 0) && ((char)param_2[5] != '\0')) {
    return 0;
  }
  uVar19 = param_2[1];
  if (uVar19 < 5) {
    return 0;
  }
  uVar20 = uVar19 - 4;
  if (uVar20 < uVar23) {
    return 0;
  }
  iVar7 = (int)param_2[2];
  uVar8 = *(uint *)((long)param_2 + 0x14);
  uVar1 = iVar7 + 1;
  iVar13 = (int)param_2[3];
  iVar11 = *param_1;
  uVar22 = iVar13 + 1;
  *(uint *)(param_2 + 2) = uVar1;
  *(uint *)(param_2 + 3) = uVar22;
  if (uVar8 < uVar1) {
    return 0;
  }
  uVar9 = *(uint *)((long)param_2 + 0x1c);
  if (uVar9 < uVar22) {
    return 0;
  }
  uVar14 = uVar23 - (long)iVar11;
  if (((uVar14 & 1) != 0) && ((char)param_2[5] != '\0')) {
    return 0;
  }
  uVar21 = uVar19 - 2;
  if (uVar21 < uVar14) {
    return 0;
  }
  uVar16 = *(ushort *)(lVar18 + uVar14);
  if (((uVar16 & 1) != 0) && ((char)param_2[5] != '\0')) {
    return 0;
  }
  if (uVar19 <= uVar16) {
    return 0;
  }
  if (uVar19 - uVar16 < uVar14) {
    return 0;
  }
  puVar17 = (ushort *)((long)param_1 - (long)*param_1);
  uVar16 = *puVar17;
  if (4 < uVar16) {
    uVar14 = (ulong)puVar17[2];
    lVar15 = -(long)*param_1;
    if (uVar14 != 0) {
      uVar24 = uVar23 + uVar14;
      if ((uVar24 & 3) == 0) {
        if (uVar20 < uVar24) {
          return 0;
        }
      }
      else {
        if (uVar20 < uVar24) {
          return 0;
        }
        if ((char)param_2[5] != '\0') {
          return 0;
        }
      }
      if ((int)*(uint *)(lVar18 + uVar24) < 1) {
        return 0;
      }
      if (uVar19 - 1 < uVar24 + *(uint *)(lVar18 + uVar24)) {
        return 0;
      }
      uVar24 = (ulong)*(uint *)((long)param_1 + uVar14);
      puVar4 = (uint *)((long)((long)param_1 + uVar14) + uVar24);
      if (puVar4 != (uint *)0x0) {
        uVar25 = (long)puVar4 - lVar18;
        if ((uVar25 & 3) == 0) {
          if (uVar20 < uVar25) {
            return 0;
          }
        }
        else {
          if (uVar20 < uVar25) {
            return 0;
          }
          if ((char)param_2[5] != '\0') {
            return 0;
          }
        }
        uVar10 = *puVar4;
        if (0x1ffffffe < uVar10) {
          return 0;
        }
        uVar27 = (ulong)uVar10 * 4 + 4;
        if (uVar19 <= uVar27) {
          return 0;
        }
        if (uVar19 - uVar27 < uVar25) {
          return 0;
        }
        if (uVar10 != 0) {
          uVar25 = 0;
          lVar15 = (long)param_1 + uVar24 + uVar14 + 0xe;
          do {
            uVar24 = (ulong)*(uint *)(lVar15 + -10);
            lVar29 = lVar15 + uVar24;
            uVar14 = (lVar29 - lVar18) - 10;
            if ((uVar14 & 3) == 0) {
              if (uVar20 < uVar14) {
                return 0;
              }
            }
            else if (uVar20 < uVar14 || (char)param_2[5] != '\0') {
              return 0;
            }
            iVar11 = *(int *)(lVar29 + -10);
            uVar22 = iVar13 + (int)uVar25 + 2;
            *(uint *)(param_2 + 2) = iVar7 + 2U;
            *(uint *)(param_2 + 3) = uVar22;
            if (uVar8 < iVar7 + 2U) {
              return 0;
            }
            if (uVar9 < uVar22) {
              return 0;
            }
            uVar27 = uVar14 - (long)iVar11;
            if ((uVar27 & 1) == 0) {
              if (uVar21 < uVar27) {
                return 0;
              }
            }
            else {
              if (uVar21 < uVar27) {
                return 0;
              }
              if ((char)param_2[5] != '\0') {
                return 0;
              }
            }
            uVar16 = *(ushort *)(lVar18 + uVar27);
            if (((uVar16 & 1) != 0) && ((char)param_2[5] != '\0')) {
              return 0;
            }
            if (uVar19 <= uVar16) {
              return 0;
            }
            if (uVar19 - uVar16 < uVar27) {
              return 0;
            }
            lVar26 = uVar24 - (long)*(int *)(lVar29 + -10);
            lVar29 = lVar15 + lVar26;
            uVar16 = *(ushort *)(lVar29 + -10);
            if (4 < uVar16) {
              if (((ulong)*(ushort *)(lVar29 + -6) != 0) &&
                 (uVar20 < uVar14 + *(ushort *)(lVar29 + -6))) {
                return 0;
              }
              if (6 < uVar16) {
                uVar27 = (ulong)*(ushort *)(lVar29 + -4);
                if (uVar27 != 0) {
                  uVar30 = uVar14 + uVar27;
                  if ((uVar30 & 3) == 0) {
                    if (uVar20 < uVar30) {
                      return 0;
                    }
                  }
                  else {
                    if (uVar20 < uVar30) {
                      return 0;
                    }
                    if ((char)param_2[5] != '\0') {
                      return 0;
                    }
                  }
                  if ((int)*(uint *)(lVar18 + uVar30) < 1) {
                    return 0;
                  }
                  if (uVar19 - 1 < uVar30 + *(uint *)(lVar18 + uVar30)) {
                    return 0;
                  }
                  uVar30 = (ulong)*(uint *)(lVar15 + uVar24 + uVar27 + -10);
                  if (lVar15 + uVar24 + uVar30 + uVar27 != 10) {
                    lVar5 = lVar15 + uVar24 + uVar27 + uVar30;
                    uVar24 = (lVar5 + -10) - lVar18;
                    if ((uVar24 & 3) == 0) {
                      if (uVar20 < uVar24) {
                        return 0;
                      }
                    }
                    else {
                      if (uVar20 < uVar24) {
                        return 0;
                      }
                      if ((char)param_2[5] != '\0') {
                        return 0;
                      }
                    }
                    uVar22 = *(uint *)(lVar5 + -10);
                    if (0x1ffffffe < uVar22) {
                      return 0;
                    }
                    uVar27 = (ulong)uVar22 * 4 + 4;
                    if (uVar19 <= uVar27) {
                      return 0;
                    }
                    if (uVar19 - uVar27 < uVar24) {
                      return 0;
                    }
                  }
                }
                if (8 < uVar16) {
                  if (((ulong)*(ushort *)(lVar29 + -2) != 0) &&
                     (uVar20 < uVar14 + *(ushort *)(lVar29 + -2))) {
                    return 0;
                  }
                  if (((10 < uVar16) && (uVar24 = (ulong)*(ushort *)(lVar15 + lVar26), uVar24 != 0))
                     && (uVar20 < uVar14 + uVar24)) {
                    return 0;
                  }
                }
              }
            }
            *(uint *)(param_2 + 2) = uVar1;
            uVar25 = uVar25 + 1;
            lVar15 = lVar15 + 4;
          } while (uVar25 < *puVar4);
          lVar15 = -(long)*param_1;
          uVar16 = *(ushort *)((long)param_1 - (long)*param_1);
          uVar22 = iVar13 + (int)uVar25 + 1;
        }
      }
    }
    if (6 < uVar16) {
      uVar14 = (ulong)*(ushort *)((long)param_1 + lVar15 + 6);
      if (uVar14 != 0) {
        uVar24 = uVar23 + uVar14;
        if ((uVar24 & 3) == 0) {
          if (uVar20 < uVar24) {
            return 0;
          }
        }
        else {
          if (uVar20 < uVar24) {
            return 0;
          }
          if ((char)param_2[5] != '\0') {
            return 0;
          }
        }
        if ((int)*(uint *)(lVar18 + uVar24) < 1) {
          return 0;
        }
        uVar25 = uVar19 - 1;
        if (uVar25 < uVar24 + *(uint *)(lVar18 + uVar24)) {
          return 0;
        }
        uVar24 = (ulong)*(uint *)((long)param_1 + uVar14);
        puVar4 = (uint *)((long)((long)param_1 + uVar14) + uVar24);
        if (puVar4 != (uint *)0x0) {
          uVar27 = (long)puVar4 - lVar18;
          if ((uVar27 & 3) == 0) {
            if (uVar20 < uVar27) {
              return 0;
            }
          }
          else {
            if (uVar20 < uVar27) {
              return 0;
            }
            if ((char)param_2[5] != '\0') {
              return 0;
            }
          }
          uVar10 = *puVar4;
          if (0x1ffffffe < uVar10) {
            return 0;
          }
          uVar30 = (ulong)uVar10 * 4 + 4;
          if (uVar19 <= uVar30) {
            return 0;
          }
          if (uVar19 - uVar30 < uVar27) {
            return 0;
          }
          if (uVar10 != 0) {
            uVar27 = 0;
            uVar10 = iVar7 + 2;
            uVar2 = iVar7 + 3;
            lVar15 = (long)param_1 + uVar24 + uVar14 + 10;
            do {
              uVar24 = (ulong)*(uint *)(lVar15 + -6);
              lVar29 = lVar15 + uVar24;
              uVar14 = (lVar29 - lVar18) - 6;
              if ((uVar14 & 3) == 0) {
                if (uVar20 < uVar14) {
                  return 0;
                }
              }
              else if (uVar20 < uVar14 || (char)param_2[5] != '\0') {
                return 0;
              }
              iVar13 = *(int *)(lVar29 + -6);
              uVar3 = uVar22 + 1;
              *(uint *)(param_2 + 2) = uVar10;
              *(uint *)(param_2 + 3) = uVar3;
              if (uVar8 < uVar10) {
                return 0;
              }
              if (uVar9 < uVar3) {
                return 0;
              }
              uVar30 = uVar14 - (long)iVar13;
              if ((uVar30 & 1) == 0) {
                if (uVar21 < uVar30) {
                  return 0;
                }
              }
              else {
                if (uVar21 < uVar30) {
                  return 0;
                }
                if ((char)param_2[5] != '\0') {
                  return 0;
                }
              }
              uVar16 = *(ushort *)(lVar18 + uVar30);
              if (((uVar16 & 1) != 0) && ((char)param_2[5] != '\0')) {
                return 0;
              }
              if (uVar19 <= uVar16) {
                return 0;
              }
              if (uVar19 - uVar16 < uVar30) {
                return 0;
              }
              lVar26 = uVar24 - (long)*(int *)(lVar29 + -6);
              lVar29 = lVar15 + lVar26;
              uVar16 = *(ushort *)(lVar29 + -6);
              if (4 < uVar16) {
                uVar12 = *(ushort *)(lVar29 + -2);
                uVar30 = (ulong)uVar12;
                if ((uVar30 != 0) && (uVar25 < uVar14 + uVar30)) {
                  return 0;
                }
                if ((uVar16 < 7) || (uVar31 = (ulong)*(ushort *)(lVar15 + lVar26), uVar31 == 0)) {
                  piVar28 = (int *)0x0;
                }
                else {
                  uVar14 = uVar14 + uVar31;
                  if ((uVar14 & 3) == 0) {
                    if (uVar20 < uVar14) {
                      return 0;
                    }
                  }
                  else {
                    if (uVar20 < uVar14) {
                      return 0;
                    }
                    if ((char)param_2[5] != '\0') {
                      return 0;
                    }
                  }
                  if ((int)*(uint *)(lVar18 + uVar14) < 1) {
                    return 0;
                  }
                  if (uVar25 < uVar14 + *(uint *)(lVar18 + uVar14)) {
                    return 0;
                  }
                  piVar28 = (int *)(lVar15 + uVar24 + uVar31 +
                                             (ulong)*(uint *)(lVar15 + uVar24 + uVar31 + -6) + -6);
                }
                if (uVar12 != 0) {
                  switch(*(undefined1 *)(lVar15 + uVar24 + uVar30 + -6)) {
                  case 0:
                    break;
                  case 1:
                    if (piVar28 != (int *)0x0) {
                      uVar14 = (long)piVar28 - lVar18;
                      if ((uVar14 & 3) == 0) {
                        if (uVar20 < uVar14) {
                          return 0;
                        }
                      }
                      else {
                        if (uVar20 < uVar14) {
                          return 0;
                        }
                        if ((char)param_2[5] != '\0') {
                          return 0;
                        }
                      }
                      iVar13 = *piVar28;
                      *(uint *)(param_2 + 2) = uVar2;
                      *(uint *)(param_2 + 3) = uVar22 + 2;
                      if (uVar8 < uVar2) {
                        return 0;
                      }
                      if (uVar9 < uVar22 + 2) {
                        return 0;
                      }
                      uVar24 = uVar14 - (long)iVar13;
                      if ((uVar24 & 1) == 0) {
                        if (uVar21 < uVar24) {
                          return 0;
                        }
                      }
                      else {
                        if (uVar21 < uVar24) {
                          return 0;
                        }
                        if ((char)param_2[5] != '\0') {
                          return 0;
                        }
                      }
                      uVar16 = *(ushort *)(lVar18 + uVar24);
joined_r0x010879ec:
                      if (((uVar16 & 1) != 0) && ((char)param_2[5] != '\0')) {
                        return 0;
                      }
                      if (uVar19 <= uVar16) {
                        return 0;
                      }
                      if (uVar19 - uVar16 < uVar24) {
                        return 0;
                      }
                      if (((4 < *(ushort *)((long)piVar28 - (long)*piVar28)) &&
                          (uVar24 = (ulong)((ushort *)((long)piVar28 - (long)*piVar28))[2],
                          uVar24 != 0)) && (uVar20 < uVar14 + uVar24)) {
                        return 0;
                      }
LAB_010877d0:
                      *(uint *)(param_2 + 2) = uVar10;
                      uVar3 = uVar22 + 2;
                    }
                    break;
                  case 2:
                    if (piVar28 != (int *)0x0) {
                      uVar14 = (long)piVar28 - lVar18;
                      if ((uVar14 & 3) == 0) {
                        if (uVar20 < uVar14) {
                          return 0;
                        }
                      }
                      else {
                        if (uVar20 < uVar14) {
                          return 0;
                        }
                        if ((char)param_2[5] != '\0') {
                          return 0;
                        }
                      }
                      iVar13 = *piVar28;
                      *(uint *)(param_2 + 2) = uVar2;
                      *(uint *)(param_2 + 3) = uVar22 + 2;
                      if (uVar8 < uVar2) {
                        return 0;
                      }
                      if (uVar9 < uVar22 + 2) {
                        return 0;
                      }
                      uVar24 = uVar14 - (long)iVar13;
                      if ((uVar24 & 1) == 0) {
                        if (uVar21 < uVar24) {
                          return 0;
                        }
                      }
                      else {
                        if (uVar21 < uVar24) {
                          return 0;
                        }
                        if ((char)param_2[5] != '\0') {
                          return 0;
                        }
                      }
                      uVar16 = *(ushort *)(lVar18 + uVar24);
                      goto joined_r0x010879ec;
                    }
                    break;
                  case 3:
                    if (piVar28 != (int *)0x0) {
                      uVar14 = (long)piVar28 - lVar18;
                      if ((uVar14 & 3) == 0) {
                        if (uVar20 < uVar14) {
                          return 0;
                        }
                      }
                      else {
                        if (uVar20 < uVar14) {
                          return 0;
                        }
                        if ((char)param_2[5] != '\0') {
                          return 0;
                        }
                      }
                      iVar13 = *piVar28;
                      *(uint *)(param_2 + 2) = uVar2;
                      *(uint *)(param_2 + 3) = uVar22 + 2;
                      if (uVar8 < uVar2) {
                        return 0;
                      }
                      if (uVar9 < uVar22 + 2) {
                        return 0;
                      }
                      uVar24 = uVar14 - (long)iVar13;
                      if ((uVar24 & 1) == 0) {
                        if (uVar21 < uVar24) {
                          return 0;
                        }
                      }
                      else {
                        if (uVar21 < uVar24) {
                          return 0;
                        }
                        if ((char)param_2[5] != '\0') {
                          return 0;
                        }
                      }
                      uVar16 = *(ushort *)(lVar18 + uVar24);
                      if (((uVar16 & 1) != 0) && ((char)param_2[5] != '\0')) {
                        return 0;
                      }
                      if (uVar19 <= uVar16) {
                        return 0;
                      }
                      if (uVar19 - uVar16 < uVar24) {
                        return 0;
                      }
                      if ((4 < *(ushort *)((long)piVar28 - (long)*piVar28)) &&
                         (uVar24 = (ulong)((ushort *)((long)piVar28 - (long)*piVar28))[2],
                         uVar24 != 0)) {
                        uVar14 = uVar14 + uVar24;
                        if ((uVar14 & 3) == 0) {
                          if (uVar20 < uVar14) {
                            return 0;
                          }
                        }
                        else {
                          if (uVar20 < uVar14) {
                            return 0;
                          }
                          if ((char)param_2[5] != '\0') {
                            return 0;
                          }
                        }
                        if ((int)*(uint *)(lVar18 + uVar14) < 1) {
                          return 0;
                        }
                        if (uVar25 < uVar14 + *(uint *)(lVar18 + uVar14)) {
                          return 0;
                        }
                        puVar6 = (uint *)((long)((long)piVar28 + uVar24) +
                                         (ulong)*(uint *)((long)piVar28 + uVar24));
                        uVar14 = (long)puVar6 - lVar18;
                        if ((uVar14 & 3) == 0) {
                          if (uVar20 < uVar14) {
                            return 0;
                          }
                        }
                        else {
                          if (uVar20 < uVar14) {
                            return 0;
                          }
                          if ((char)param_2[5] != '\0') {
                            return 0;
                          }
                        }
                        uVar3 = *puVar6;
                        if (0x7ffffffe < uVar3) {
                          return 0;
                        }
                        uVar24 = (ulong)uVar3 + 4;
                        if (uVar25 < uVar24 + uVar14) {
                          return 0;
                        }
                        if (uVar19 <= uVar24) {
                          return 0;
                        }
                        if (uVar19 - uVar24 < uVar14) {
                          return 0;
                        }
                        if (*(char *)(lVar18 + uVar24 + uVar14) != '\0') {
                          return 0;
                        }
                      }
                      goto LAB_010877d0;
                    }
                    break;
                  case 4:
                    if (piVar28 != (int *)0x0) {
                      uVar14 = (long)piVar28 - lVar18;
                      if ((uVar14 & 3) == 0) {
                        if (uVar20 < uVar14) {
                          return 0;
                        }
                      }
                      else {
                        if (uVar20 < uVar14) {
                          return 0;
                        }
                        if ((char)param_2[5] != '\0') {
                          return 0;
                        }
                      }
                      iVar13 = *piVar28;
                      *(uint *)(param_2 + 2) = uVar2;
                      *(uint *)(param_2 + 3) = uVar22 + 2;
                      if (uVar8 < uVar2) {
                        return 0;
                      }
                      if (uVar9 < uVar22 + 2) {
                        return 0;
                      }
                      uVar24 = uVar14 - (long)iVar13;
                      if ((uVar24 & 1) == 0) {
                        if (uVar21 < uVar24) {
                          return 0;
                        }
                      }
                      else {
                        if (uVar21 < uVar24) {
                          return 0;
                        }
                        if ((char)param_2[5] != '\0') {
                          return 0;
                        }
                      }
                      uVar16 = *(ushort *)(lVar18 + uVar24);
                      if (((uVar16 & 1) != 0) && ((char)param_2[5] != '\0')) {
                        return 0;
                      }
                      if (uVar19 <= uVar16) {
                        return 0;
                      }
                      if (uVar19 - uVar16 < uVar24) {
                        return 0;
                      }
                      if ((4 < *(ushort *)((long)piVar28 - (long)*piVar28)) &&
                         (uVar24 = (ulong)((ushort *)((long)piVar28 - (long)*piVar28))[2],
                         uVar24 != 0)) {
                        if (uVar19 < 9) {
                          return 0;
                        }
                        if (uVar19 - 8 < uVar14 + uVar24) {
                          return 0;
                        }
                      }
                      goto LAB_010877d0;
                    }
                    break;
                  default:
                    goto LAB_01087ed0;
                  }
                }
              }
              uVar22 = uVar3;
              *(uint *)(param_2 + 2) = uVar1;
              uVar27 = uVar27 + 1;
              lVar15 = lVar15 + 4;
            } while (uVar27 < *puVar4);
            lVar15 = -(long)*param_1;
            uVar16 = *(ushort *)((long)param_1 - (long)*param_1);
          }
        }
      }
      if ((8 < uVar16) && (uVar14 = (ulong)*(ushort *)((long)param_1 + lVar15 + 8), uVar14 != 0)) {
        uVar23 = uVar23 + uVar14;
        if ((uVar23 & 3) == 0) {
          if (uVar20 < uVar23) {
            return 0;
          }
        }
        else {
          if (uVar20 < uVar23) {
            return 0;
          }
          if ((char)param_2[5] != '\0') {
            return 0;
          }
        }
        if (((int)*(uint *)(lVar18 + uVar23) < 1) ||
           (uVar19 - 1 < uVar23 + *(uint *)(lVar18 + uVar23))) {
LAB_01087ed0:
          return 0;
        }
        uVar23 = (ulong)*(uint *)((long)param_1 + uVar14);
        puVar4 = (uint *)((long)((long)param_1 + uVar14) + uVar23);
        if (puVar4 != (uint *)0x0) {
          uVar24 = (long)puVar4 - lVar18;
          if ((uVar24 & 3) == 0) {
            if (uVar20 < uVar24) {
              return 0;
            }
          }
          else {
            if (uVar20 < uVar24) {
              return 0;
            }
            if ((char)param_2[5] != '\0') {
              return 0;
            }
          }
          uVar10 = *puVar4;
          if (0x1ffffffe < uVar10) {
            return 0;
          }
          uVar25 = (ulong)uVar10 * 4 + 4;
          if (uVar19 <= uVar25) {
            return 0;
          }
          if (uVar19 - uVar25 < uVar24) {
            return 0;
          }
          if (uVar10 != 0) {
            uVar24 = 0;
            uVar25 = uVar19 - 8;
            uVar10 = iVar7 + 2;
            lVar15 = (long)param_1 + uVar14 + uVar23 + 8;
            do {
              uVar14 = (ulong)puVar4[uVar24 + 1];
              piVar28 = (int *)((long)(puVar4 + uVar24 + 1) + uVar14);
              uVar23 = (long)piVar28 - lVar18;
              if ((uVar23 & 3) == 0) {
                if (uVar20 < uVar23) {
                  return 0;
                }
              }
              else if (uVar20 < uVar23 || (char)param_2[5] != '\0') {
                return 0;
              }
              iVar13 = *piVar28;
              uVar2 = uVar22 + 1;
              *(uint *)(param_2 + 2) = uVar10;
              *(uint *)(param_2 + 3) = uVar2;
              if (uVar8 < uVar10) {
                return 0;
              }
              if (uVar9 < uVar2) {
                return 0;
              }
              uVar27 = uVar23 - (long)iVar13;
              if ((uVar27 & 1) == 0) {
                if (uVar21 < uVar27) {
                  return 0;
                }
              }
              else {
                if (uVar21 < uVar27) {
                  return 0;
                }
                if ((char)param_2[5] != '\0') {
                  return 0;
                }
              }
              uVar16 = *(ushort *)(lVar18 + uVar27);
              if (((uVar16 & 1) != 0) && ((char)param_2[5] != '\0')) {
                return 0;
              }
              if (uVar19 <= uVar16 || uVar19 - uVar16 < uVar27) {
                return 0;
              }
              puVar17 = (ushort *)((long)piVar28 - (long)*piVar28);
              if (4 < *puVar17) {
                if ((ulong)puVar17[2] != 0) {
                  if (uVar19 < 9) {
                    return 0;
                  }
                  if (uVar25 < uVar23 + puVar17[2]) {
                    return 0;
                  }
                }
                if ((6 < *puVar17) && (uVar27 = (ulong)puVar17[3], uVar27 != 0)) {
                  uVar23 = uVar23 + uVar27;
                  if ((uVar23 & 3) == 0) {
                    if (uVar20 < uVar23) {
                      return 0;
                    }
                  }
                  else {
                    if (uVar20 < uVar23) {
                      return 0;
                    }
                    if ((char)param_2[5] != '\0') {
                      return 0;
                    }
                  }
                  if ((int)*(uint *)(lVar18 + uVar23) < 1) {
                    return 0;
                  }
                  if (uVar19 - 1 < uVar23 + *(uint *)(lVar18 + uVar23)) {
                    return 0;
                  }
                  uVar23 = (ulong)*(uint *)((long)piVar28 + uVar27);
                  puVar6 = (uint *)((long)((long)piVar28 + uVar27) + uVar23);
                  if (puVar6 != (uint *)0x0) {
                    uVar30 = (long)puVar6 - lVar18;
                    if ((uVar30 & 3) == 0) {
                      if (uVar20 < uVar30) {
                        return 0;
                      }
                    }
                    else {
                      if (uVar20 < uVar30) {
                        return 0;
                      }
                      if ((char)param_2[5] != '\0') {
                        return 0;
                      }
                    }
                    uVar3 = *puVar6;
                    if (0x1ffffffe < uVar3) {
                      return 0;
                    }
                    uVar31 = (ulong)uVar3 * 4 + 4;
                    if (uVar19 <= uVar31) {
                      return 0;
                    }
                    if (uVar19 - uVar31 < uVar30) {
                      return 0;
                    }
                    if (uVar3 != 0) {
                      lVar29 = 0;
                      uVar30 = 0;
                      lVar26 = lVar15 + uVar14 + uVar23 + uVar27;
                      do {
                        uVar14 = (ulong)*(uint *)(lVar26 + uVar30 * 4);
                        uVar23 = (lVar26 + lVar29 + uVar14) - lVar18;
                        if ((uVar23 & 3) == 0) {
                          if (uVar20 < uVar23) {
                            return 0;
                          }
                        }
                        else if (uVar20 < uVar23 || (char)param_2[5] != '\0') {
                          return 0;
                        }
                        iVar13 = *(int *)(lVar26 + uVar14 + uVar30 * 4);
                        *(uint *)(param_2 + 2) = iVar7 + 3U;
                        uVar2 = uVar22 + (int)uVar30 + 2;
                        *(uint *)(param_2 + 3) = uVar2;
                        if (uVar8 < iVar7 + 3U) {
                          return 0;
                        }
                        if (uVar9 < uVar2) {
                          return 0;
                        }
                        uVar27 = uVar23 - (long)iVar13;
                        if ((uVar27 & 1) == 0) {
                          if (uVar21 < uVar27) {
                            return 0;
                          }
                        }
                        else {
                          if (uVar21 < uVar27) {
                            return 0;
                          }
                          if ((char)param_2[5] != '\0') {
                            return 0;
                          }
                        }
                        uVar16 = *(ushort *)(lVar18 + uVar27);
                        if (((uVar16 & 1) != 0) && ((char)param_2[5] != '\0')) {
                          return 0;
                        }
                        if (uVar19 <= uVar16) {
                          return 0;
                        }
                        if (uVar19 - uVar16 < uVar27) {
                          return 0;
                        }
                        lVar5 = lVar29 + (uVar14 - (long)*(int *)(lVar26 + uVar14 + uVar30 * 4));
                        uVar16 = *(ushort *)(lVar26 + lVar5);
                        if (4 < uVar16) {
                          lVar5 = lVar26 + lVar5;
                          uVar14 = (ulong)*(ushort *)(lVar5 + 4);
                          if (uVar14 != 0) {
                            if (uVar19 < 9) {
                              return 0;
                            }
                            if (uVar25 < uVar23 + uVar14) {
                              return 0;
                            }
                          }
                          if ((6 < uVar16) && (uVar14 = (ulong)*(ushort *)(lVar5 + 6), uVar14 != 0))
                          {
                            if (uVar19 < 9) {
                              return 0;
                            }
                            if (uVar25 < uVar23 + uVar14) {
                              return 0;
                            }
                          }
                        }
                        *(uint *)(param_2 + 2) = uVar10;
                        uVar30 = uVar30 + 1;
                        lVar29 = lVar29 + 4;
                      } while (uVar30 < *puVar6);
                      uVar2 = uVar22 + (int)uVar30 + 1;
                    }
                  }
                }
              }
              uVar22 = uVar2;
              *(uint *)(param_2 + 2) = uVar1;
              uVar24 = uVar24 + 1;
              lVar15 = lVar15 + 4;
            } while (uVar24 < *puVar4);
          }
        }
      }
    }
  }
  *(int *)(param_2 + 2) = iVar7;
  return 1;
}


