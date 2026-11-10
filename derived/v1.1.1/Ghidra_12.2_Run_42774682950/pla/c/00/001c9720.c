/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c9720; name: FUN_001c9720
 */


int FUN_001c9720(byte param_1,long param_2,long param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char *local_1e0;
  long local_98;
  long lStack_90;
  char *local_88;
  char *pcStack_80;
  char *local_78;
  char *local_70;
  
  lVar20 = *(long *)PTR_DAT_04372550;
  iVar22 = -0xfff4;
  if (lVar20 == 0) {
    return -0xff01;
  }
  iVar17 = (int)(param_3 - param_2);
  iVar18 = iVar17 + -1;
  if (iVar17 < 1) {
    uVar16 = 0;
    if (0 < iVar18) goto LAB_001c97b0;
  }
  else {
    uVar16 = 0;
    do {
      if ((*(byte *)(param_2 + uVar16) | 2) != 0x22) break;
      uVar16 = uVar16 + 1;
    } while ((param_3 - param_2 & 0xffffffffU) != uVar16);
    if ((int)uVar16 < iVar18) {
LAB_001c97b0:
      lVar24 = (long)(int)(~(uint)param_2 + (int)param_3);
      do {
        if ((*(byte *)(param_2 + lVar24) | 2) != 0x22) {
          iVar18 = (int)lVar24;
          break;
        }
        lVar24 = lVar24 + -1;
        iVar18 = iVar18 + -1;
      } while ((int)uVar16 < lVar24);
    }
  }
  pcVar1 = (char *)(param_2 + (uVar16 & 0xffffffff));
  iVar18 = iVar18 - (int)uVar16;
  iVar17 = iVar18 + 1;
  local_70 = pcVar1 + iVar17;
  local_98 = param_2;
  lStack_90 = param_3;
  local_78 = pcVar1;
  if (5 < param_1) {
    iVar22 = -0xfff6;
    goto LAB_001c9b64;
  }
  if (iVar17 == 0) {
    iVar22 = -0xfff5;
  }
  else if (((iVar18 - 0x23U < 0xdd) && (*pcVar1 == '0')) && (pcVar1[1] == 'x')) {
    uVar19 = (byte)pcVar1[2] - 0x30;
    if ((uVar19 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar19 & 0x3f) & 1) != 0)) {
      uVar21 = (byte)pcVar1[3] - 0x30;
      if ((uVar21 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar21 & 0x3f) & 1) != 0)) {
        uVar15 = (byte)pcVar1[4] - 0x30;
        if ((uVar15 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar15 & 0x3f) & 1) != 0)) {
          uVar23 = (byte)pcVar1[5] - 0x30;
          if ((uVar23 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar23 & 0x3f) & 1) != 0)) {
            uVar4 = (byte)pcVar1[6] - 0x30;
            if (uVar4 < 0x37) {
              if ((0x7e0000007e03ffU >> ((ulong)uVar4 & 0x3f) & 1) != 0) {
                uVar5 = (byte)pcVar1[7] - 0x30;
                if ((uVar5 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar5 & 0x3f) & 1) != 0)) {
                  uVar6 = (byte)pcVar1[8] - 0x30;
                  if ((uVar6 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar6 & 0x3f) & 1) != 0)) {
                    uVar7 = (byte)pcVar1[9] - 0x30;
                    if ((uVar7 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar7 & 0x3f) & 1) != 0)) {
                      uVar19 = *(int *)(&DAT_039c6d78 + (long)(char)uVar7 * 4) +
                               (uint)(byte)pcVar1[9] +
                               (*(int *)(&DAT_039c6d78 + (long)(char)uVar6 * 4) +
                                (uint)(byte)pcVar1[8] +
                               (*(int *)(&DAT_039c6d78 + (long)(char)uVar5 * 4) +
                                (uint)(byte)pcVar1[7] +
                               (*(int *)(&DAT_039c6d78 + (long)(char)uVar4 * 4) +
                                (uint)(byte)pcVar1[6] +
                               (*(int *)(&DAT_039c6d78 + (long)(char)uVar23 * 4) +
                                (uint)(byte)pcVar1[5] +
                               (*(int *)(&DAT_039c6d78 + (long)(char)uVar15 * 4) +
                                (uint)(byte)pcVar1[4] +
                               (*(int *)(&DAT_039c6d78 + (long)(char)uVar21 * 4) +
                                (uint)(byte)pcVar1[3] +
                               (*(int *)(&DAT_039c6d78 + (long)(char)uVar19 * 4) +
                               (uint)(byte)pcVar1[2]) * 0x10) * 0x10) * 0x10) * 0x10) * 0x10) * 0x10
                               ) * 0x10;
                      pcVar14 = pcVar1 + 10;
                      if ((int)uVar19 < 0) {
                        uVar21 = 0xffffffff;
                        cVar3 = *pcVar14;
joined_r0x001c9d04:
                        local_78 = pcVar14;
                        if (cVar3 == ':') {
                          local_78 = pcVar14 + 1;
                          if ((uint)((ulong)(byte)pcVar14[1] - 0x30) < 10) {
                            local_78 = pcVar14 + 2;
                            if ((uint)((ulong)(byte)pcVar14[2] - 0x30) < 10) {
                              local_78 = pcVar14 + 3;
                              if ((uint)((ulong)(byte)pcVar14[3] - 0x30) < 10) {
                                local_78 = pcVar14 + 4;
                                if (((uint)((ulong)(byte)pcVar14[4] - 0x30) < 10) &&
                                   (local_78 = pcVar14 + 5, pcVar14[5] == '-')) {
                                  local_78 = pcVar14 + 6;
                                  if ((uint)((ulong)(byte)pcVar14[6] - 0x30) < 10) {
                                    local_78 = pcVar14 + 7;
                                    if (((uint)((ulong)(byte)pcVar14[7] - 0x30) < 10) &&
                                       (local_78 = pcVar14 + 8, pcVar14[8] == '-')) {
                                      local_78 = pcVar14 + 9;
                                      if ((uint)((ulong)(byte)pcVar14[9] - 0x30) < 10) {
                                        local_78 = pcVar14 + 10;
                                        if (((uint)((ulong)(byte)pcVar14[10] - 0x30) < 10) &&
                                           (local_78 = pcVar14 + 0xb, pcVar14[0xb] == '.')) {
                                          uVar16 = ((ulong)(byte)pcVar14[4] - 0x30) +
                                                   (((ulong)(byte)pcVar14[3] - 0x30) +
                                                   (((ulong)(byte)pcVar14[2] - 0x30) +
                                                   ((ulong)(byte)pcVar14[1] - 0x30) * 10) * 10) * 10
                                          ;
                                          local_78 = pcVar14 + 0xc;
                                          uVar15 = (uint)uVar16;
                                          if (0x7cd < (int)uVar15) {
                                            lVar24 = ((ulong)(byte)pcVar14[7] - 0x30) +
                                                     ((ulong)(byte)pcVar14[6] - 0x30) * 10;
                                            uVar23 = (uint)lVar24;
                                            if (uVar23 < 0xd) {
                                              lVar25 = ((ulong)(byte)pcVar14[10] - 0x30) +
                                                       ((ulong)(byte)pcVar14[9] - 0x30) * 10;
                                              uVar4 = 1 << (ulong)(uVar23 & 0x1f);
                                              iVar22 = (int)lVar25;
                                              if ((uVar4 & 0x15aa) == 0) {
                                                if ((uVar4 & 0xa50) == 0) {
                                                  if (((uVar23 == 2) && (iVar22 != 0)) &&
                                                     (iVar22 < 0x1e)) goto LAB_001c9e9c;
                                                }
                                                else if ((iVar22 != 0) && (iVar22 < 0x1f)) {
LAB_001c9e9c:
                                                  if (param_1 < 6) {
                                                    pcVar14 = (&PTR_s_Physics_0411bb28)
                                                              [(char)param_1];
                                                  }
                                                  else {
                                                    pcVar14 = "Invalid";
                                                  }
                                                  FUN_032c3f5c(&local_88,pcVar14);
                                                  local_1e8 = local_88;
                                                  local_1e0 = pcStack_80;
                                                  uVar12 = FUN_032c422c(&local_78,&local_1e8);
                                                  if ((uVar12 & 1) != 0) {
                                                    local_78 = local_78 +
                                                               ((int)local_1e0 - (int)local_1e8);
                                                    if (*local_78 == '.') {
                                                      local_78 = local_78 + 1;
                                                      if ((int)uVar19 < 0) {
                                                        local_1e8 = "Evaluation.";
                                                        local_1e0 = "";
                                                        uVar12 = FUN_032c422c(&local_78,&local_1e8);
                                                        if ((uVar12 & 1) == 0) goto LAB_001c9e24;
                                                        local_78 = local_78 +
                                                                   ((int)local_1e0 - (int)local_1e8)
                                                        ;
                                                      }
                                                      pcVar9 = local_70;
                                                      pcVar14 = local_78;
                                                      if (param_1 < 6) {
                                                        uVar5 = *(uint *)(&DAT_039c6d60 +
                                                                         (long)(char)param_1 * 4);
                                                        uVar4 = uVar5 ^ uVar19 & 0x7fffffff;
                                                        if ((int)uVar19 < 0) {
                                                          uVar12 = thunk_FUN_032ba130();
                                                          lVar13 = FUN_001c9570();
                                                          iVar22 = -0xfff1;
                                                          if ((uVar12 < lVar13 - 0x1e13380U) ||
                                                             (uVar4 < (uint)(uVar12 >> 8)))
                                                          goto joined_r0x001ca1a4;
                                                        }
                                                        uVar6 = uVar15 & 0xffff;
                                                        iVar22 = (int)((ulong)((long)(int)uVar15 *
                                                                              -0x51eb851f) >> 0x20);
                                                        if ((uVar16 & 3) == 0) {
                                                          if ((uVar6 * -0x3d70a3d7 >> 2 |
                                                              uVar15 * 0x40000000) < 0x28f5c29) {
                                                            bVar11 = (uVar15 + (uVar6 / 400) * -400
                                                                     & 0xffff) == 0;
                                                          }
                                                          else {
                                                            bVar11 = true;
                                                          }
                                                        }
                                                        else {
                                                          bVar11 = false;
                                                        }
                                                        lVar13 = -0x1de;
                                                        if (!(bool)((int)uVar23 < 3 & bVar11)) {
                                                          lVar13 = -0x1dd;
                                                        }
                                                        uVar15 = (uint)((lVar25 + (long)((iVar22 >>
                                                                                         5) - (
                                                  iVar22 >> 0x1f)) + (ulong)(uVar15 >> 2) +
                                                  (ulong)uVar6 / 400 + uVar16 * 0x16d + -0xaf8ca +
                                                  *(long *)(&BYTE_039c6cf8 + lVar24 * 8) + lVar13) *
                                                  0x15180 + -0x15180 >> 8);
                                                  bVar10 = uVar15 <= uVar4 + 0x3f4;
                                                  bVar11 = uVar4 <= uVar15 + 0x3f4;
                                                  iVar22 = -0xfff1;
                                                  if (bVar10 && bVar11) {
                                                    iVar22 = 0;
                                                  }
                                                  if ((-1 < (int)uVar19) && (bVar10 && bVar11)) {
                                                    uVar16 = (long)pcVar9 - (long)pcVar14;
                                                    if ((int)uVar16 < 1) {
                                                      uVar19 = 0;
                                                    }
                                                    else {
                                                      if ((uVar16 & 0xffffffff) == 1) {
                                                        lVar24 = 0;
                                                        uVar19 = 0;
                                                      }
                                                      else {
                                                        lVar24 = 0;
                                                        uVar19 = 0;
                                                        do {
                                                          pbVar2 = (byte *)(pcVar14 + lVar24);
                                                          lVar24 = lVar24 + 2;
                                                          uVar19 = ((uint)pbVar2[1] +
                                                                   (uVar19 + *pbVar2) * 0x17) * 0x17
                                                          ;
                                                        } while ((uVar16 & 0xffffffff) -
                                                                 (uVar16 & 1) != lVar24);
                                                      }
                                                      if ((uVar16 & 1) != 0) {
                                                        uVar19 = (uVar19 + (byte)pcVar14[lVar24]) *
                                                                 0x17;
                                                      }
                                                      uVar19 = uVar19 & 0x7fffffff;
                                                    }
                                                    iVar22 = 0;
                                                    if (uVar21 != (uVar19 ^ uVar5)) {
                                                      iVar22 = -0xfff4;
                                                    }
                                                  }
                                                  if (iVar22 < 0) goto joined_r0x001ca1a4;
                                                  }
                                                  else {
                                                    iVar22 = 0;
                                                  }
                                                  lVar20 = lVar20 + (ulong)CONCAT11(param_1,param_1)
                                                           + 0x18;
                                                  FUN_032c4b00(lVar20,0,0x101);
                                                  FUN_032c4a00(lVar20,pcVar1,iVar17);
                                                  goto joined_r0x001ca1a4;
                                                  }
                                                  }
                                                }
                                              }
                                              else if ((iVar22 != 0) && (iVar22 < 0x20))
                                              goto LAB_001c9e9c;
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
                      }
                      else {
                        local_78 = pcVar14;
                        if (*pcVar14 == '-') {
                          local_78 = pcVar1 + 0xb;
                          if ((pcVar1[0xb] == '0') && (pcVar1[0xc] == 'x')) {
                            uVar21 = (byte)pcVar1[0xd] - 0x30;
                            if ((uVar21 < 0x37) &&
                               ((0x7e0000007e03ffU >> ((ulong)uVar21 & 0x3f) & 1) != 0)) {
                              uVar15 = (byte)pcVar1[0xe] - 0x30;
                              if ((uVar15 < 0x37) &&
                                 ((0x7e0000007e03ffU >> ((ulong)uVar15 & 0x3f) & 1) != 0)) {
                                uVar23 = (byte)pcVar1[0xf] - 0x30;
                                if ((uVar23 < 0x37) &&
                                   ((0x7e0000007e03ffU >> ((ulong)uVar23 & 0x3f) & 1) != 0)) {
                                  uVar4 = (byte)pcVar1[0x10] - 0x30;
                                  if ((uVar4 < 0x37) &&
                                     ((0x7e0000007e03ffU >> ((ulong)uVar4 & 0x3f) & 1) != 0)) {
                                    uVar5 = (byte)pcVar1[0x11] - 0x30;
                                    if ((uVar5 < 0x37) &&
                                       ((0x7e0000007e03ffU >> ((ulong)uVar5 & 0x3f) & 1) != 0)) {
                                      uVar6 = (byte)pcVar1[0x12] - 0x30;
                                      if ((uVar6 < 0x37) &&
                                         ((0x7e0000007e03ffU >> ((ulong)uVar6 & 0x3f) & 1) != 0)) {
                                        uVar7 = (byte)pcVar1[0x13] - 0x30;
                                        if ((uVar7 < 0x37) &&
                                           ((0x7e0000007e03ffU >> ((ulong)uVar7 & 0x3f) & 1) != 0))
                                        {
                                          uVar8 = (byte)pcVar1[0x14] - 0x30;
                                          if ((uVar8 < 0x37) &&
                                             ((0x7e0000007e03ffU >> ((ulong)uVar8 & 0x3f) & 1) != 0)
                                             ) {
                                            uVar21 = *(int *)(&DAT_039c6d78 + (long)(char)uVar8 * 4)
                                                     + (uint)(byte)pcVar1[0x14] +
                                                     (*(int *)(&DAT_039c6d78 + (long)(char)uVar7 * 4
                                                              ) + (uint)(byte)pcVar1[0x13] +
                                                     (*(int *)(&DAT_039c6d78 + (long)(char)uVar6 * 4
                                                              ) + (uint)(byte)pcVar1[0x12] +
                                                     (*(int *)(&DAT_039c6d78 + (long)(char)uVar5 * 4
                                                              ) + (uint)(byte)pcVar1[0x11] +
                                                     (*(int *)(&DAT_039c6d78 + (long)(char)uVar4 * 4
                                                              ) + (uint)(byte)pcVar1[0x10] +
                                                     (*(int *)(&DAT_039c6d78 +
                                                              (long)(char)uVar23 * 4) +
                                                      (uint)(byte)pcVar1[0xf] +
                                                     (*(int *)(&DAT_039c6d78 +
                                                              (long)(char)uVar15 * 4) +
                                                      (uint)(byte)pcVar1[0xe] +
                                                     (*(int *)(&DAT_039c6d78 +
                                                              (long)(char)uVar21 * 4) +
                                                     (uint)(byte)pcVar1[0xd]) * 0x10) * 0x10) * 0x10
                                                     ) * 0x10) * 0x10) * 0x10) * 0x10;
                                            pcVar14 = pcVar1 + 0x15;
                                            cVar3 = *pcVar14;
                                            goto joined_r0x001c9d04;
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
                    }
                  }
                }
              }
LAB_001c9e24:
              iVar22 = -0xfff4;
              goto LAB_001c9b64;
            }
          }
        }
      }
    }
  }
joined_r0x001ca1a4:
  if (-1 < iVar22) {
    return iVar22;
  }
LAB_001c9b64:
  if ((2 < DAT_0438e858) || (uVar16 = FUN_03327170(), (uVar16 & 1) != 0)) {
    uVar16 = FUN_03327170();
    if ((uVar16 & 1) == 0) {
      FUN_03326994(&local_1e8,&DAT_0438e808,3);
      if (param_1 < 6) {
        local_78 = (&PTR_s_Physics_0411bb28)[(char)param_1];
      }
      else {
        local_78 = "Invalid";
      }
      if (iVar22 + 0xfff6U < 6) {
        local_88 = (&PTR_s_Invalid_Product_0411baf8)[(int)(iVar22 + 0xfff6U)];
      }
      else {
        local_88 = "Unknown Error";
      }
      lVar20 = FUN_03326338(&local_1e8,"  [ERROR: INVALID KEY] {0,-16} : {} ({})",PTR_DAT_04372618,
                            &local_78,&local_98,&local_88);
      *(char **)(lVar20 + 0x38) =
           "X:/CI/Stable_Package_Build_nx64/Source/Common/Internal/Keycode/hkKeycodeManager.cpp";
      *(undefined8 *)(lVar20 + 0x40) = 0x71;
      FUN_033269dc(&local_1e8);
    }
    else {
      FUN_03326a7c(&local_1e8,&DAT_0438e808,3);
      if (param_1 < 6) {
        local_1f0 = (&PTR_s_Physics_0411bb28)[(char)param_1];
      }
      else {
        local_1f0 = "Invalid";
      }
      if (iVar22 + 0xfff6U < 6) {
        local_1f8 = (&PTR_s_Invalid_Product_0411baf8)[(int)(iVar22 + 0xfff6U)];
      }
      else {
        local_1f8 = "Unknown Error";
      }
      lVar20 = FUN_03326338(&local_1e8,"  [ERROR: INVALID KEY] {0,-16} : {} ({})",PTR_DAT_04372618,
                            &local_1f0,&local_98,&local_1f8);
      *(char **)(lVar20 + 0x38) =
           "X:/CI/Stable_Package_Build_nx64/Source/Common/Internal/Keycode/hkKeycodeManager.cpp";
      *(undefined8 *)(lVar20 + 0x40) = 0x71;
      FUN_03326adc(&local_1e8);
    }
  }
  return iVar22;
}


