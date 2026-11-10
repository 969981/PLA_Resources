/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00215d80; name: FUN_00215d80
 */


/* WARNING: Removing unreachable block (ram,0x00215dbc) */

undefined8
FUN_00215d80(int param_1,ushort *param_2,uint param_3,long *param_4,uint *param_5,undefined *param_6
            )

{
  undefined1 *puVar1;
  ushort *puVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  undefined *puVar21;
  undefined *puVar22;
  uint uVar23;
  long lVar24;
  ushort uVar25;
  ulong uVar26;
  undefined1 uVar27;
  uint uVar28;
  ushort auStack_90 [5];
  short local_86;
  short local_84;
  short local_82;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  ushort local_70 [16];
  
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[3] = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  local_70[6] = 0;
  local_70[7] = 0;
  local_70[8] = 0;
  local_70[9] = 0;
  local_70[10] = 0;
  local_70[0xb] = 0;
  local_70[0xc] = 0;
  local_70[0xd] = 0;
  local_70[0xe] = 0;
  local_70[0xf] = 0;
  if (param_3 == 0) {
    uVar16 = *param_5;
LAB_00215e3c:
    if (local_70[0xe] == 0) {
      if (local_70[0xd] == 0) {
        if (local_70[0xc] == 0) {
          if (local_70[0xb] == 0) {
            if (local_70[10] == 0) {
              if (local_70[9] == 0) {
                if (local_70[8] == 0) {
                  if (local_70[7] == 0) {
                    if (local_70[6] == 0) {
                      if (local_70[5] == 0) {
                        if (local_70[4] == 0) {
                          if (local_70[3] == 0) {
                            if (local_70[2] == 0) {
                              if (local_70[1] == 0) {
                                puVar15 = (undefined4 *)*param_4;
                                *param_4 = (long)(puVar15 + 1);
                                *puVar15 = 0x140;
                                puVar15 = (undefined4 *)*param_4;
                                *param_4 = (long)(puVar15 + 1);
                                *puVar15 = 0x140;
                                *param_5 = 1;
                                return 0;
                              }
                              uVar9 = 0;
                              uVar20 = (uint)(uVar16 != 0);
                              uVar14 = 1;
                              uVar19 = 1;
                              goto LAB_00215f60;
                            }
                            uVar9 = 0;
                            uVar14 = 2;
                          }
                          else {
                            uVar9 = 0;
                            uVar14 = 3;
                          }
                        }
                        else {
                          uVar9 = 0;
                          uVar14 = 4;
                        }
                      }
                      else {
                        uVar9 = 0;
                        uVar14 = 5;
                      }
                    }
                    else {
                      uVar9 = 0;
                      uVar14 = 6;
                    }
                  }
                  else {
                    uVar9 = 0;
                    uVar14 = 7;
                  }
                }
                else {
                  uVar9 = 0;
                  uVar14 = 8;
                }
              }
              else {
                uVar9 = 0;
                uVar14 = 9;
              }
            }
            else {
              uVar9 = 0;
              uVar14 = 10;
            }
          }
          else {
            uVar9 = 0;
            uVar14 = 0xb;
          }
        }
        else {
          uVar9 = 0;
          uVar14 = 0xc;
        }
      }
      else {
        uVar9 = 0;
        uVar14 = 0xd;
      }
    }
    else {
      uVar9 = 0;
      uVar14 = 0xe;
    }
  }
  else {
    if (param_3 == 1) {
      lVar13 = 0;
LAB_00215e10:
      local_70[param_2[lVar13]] = local_70[param_2[lVar13]] + 1;
    }
    else {
      lVar13 = 0;
      do {
        puVar2 = param_2 + lVar13;
        lVar13 = lVar13 + 2;
        uVar25 = *puVar2;
        local_70[uVar25] = local_70[uVar25] + 1;
        uVar25 = puVar2[1];
        local_70[uVar25] = local_70[uVar25] + 1;
      } while ((ulong)param_3 - ((ulong)param_3 & 1) != lVar13);
      if ((param_3 & 1) != 0) goto LAB_00215e10;
    }
    uVar9 = (uint)local_70[0xf];
    uVar16 = *param_5;
    if (local_70[0xf] == 0) goto LAB_00215e3c;
    uVar14 = 0xf;
  }
  uVar20 = (uint)uVar14;
  if (uVar16 <= (uint)uVar14) {
    uVar20 = uVar16;
  }
  uVar19 = 1;
  do {
    if (local_70[uVar19] != 0) break;
    uVar19 = uVar19 + 1;
  } while (uVar14 != uVar19);
LAB_00215f60:
  uVar16 = (uint)uVar19;
  if ((uint)uVar19 <= uVar20) {
    uVar16 = uVar20;
  }
  if (local_70[1] < 3) {
    iVar11 = 4 - ((uint)local_70[2] + (uint)local_70[1] * 2);
    if (-1 < iVar11) {
      iVar11 = iVar11 * 2 - (uint)local_70[3];
      if (-1 < iVar11) {
        iVar11 = iVar11 * 2 - (uint)local_70[4];
        if (-1 < iVar11) {
          iVar11 = iVar11 * 2 - (uint)local_70[5];
          if (-1 < iVar11) {
            iVar11 = iVar11 * 2 - (uint)local_70[6];
            if (-1 < iVar11) {
              iVar11 = iVar11 * 2 - (uint)local_70[7];
              if (-1 < iVar11) {
                iVar11 = iVar11 * 2 - (uint)local_70[8];
                if (-1 < iVar11) {
                  iVar11 = iVar11 * 2 - (uint)local_70[9];
                  if (-1 < iVar11) {
                    iVar11 = iVar11 * 2 - (uint)local_70[10];
                    if (-1 < iVar11) {
                      iVar11 = iVar11 * 2 - (uint)local_70[0xb];
                      if (-1 < iVar11) {
                        iVar11 = iVar11 * 2 - (uint)local_70[0xc];
                        if (-1 < iVar11) {
                          iVar11 = iVar11 * 2 - (uint)local_70[0xd];
                          if (-1 < iVar11) {
                            iVar11 = iVar11 * 2 - (uint)local_70[0xe];
                            if ((-1 < iVar11) && (uVar20 = iVar11 * 2, -1 < (int)(uVar20 - uVar9)))
                            {
                              uVar12 = (uint)uVar14;
                              if (uVar20 != uVar9) {
                                if (param_1 == 0) {
                                  return 0xffffffff;
                                }
                                if (uVar12 != 1) {
                                  return 0xffffffff;
                                }
                              }
                              auStack_90[3] = local_70[2] + local_70[1];
                              auStack_90[4] = local_70[3] + local_70[2] + local_70[1];
                              local_86 = local_70[4] + auStack_90[4];
                              local_84 = local_70[5] + local_86;
                              local_82 = local_70[6] + local_84;
                              local_80 = local_70[7] + local_82;
                              local_7e = local_70[8] + local_80;
                              local_7c = local_70[9] + local_7e;
                              local_7a = local_70[10] + local_7c;
                              local_78 = local_70[0xb] + local_7a;
                              local_76 = local_70[0xc] + local_78;
                              local_74 = local_70[0xd] + local_76;
                              auStack_90[1] = 0;
                              auStack_90[2] = local_70[1];
                              local_72 = local_70[0xe] + local_74;
                              if (param_3 != 0) {
                                lVar13 = 0;
                                uVar25 = *param_2;
                                while( true ) {
                                  uVar14 = (ulong)uVar25;
                                  if (uVar14 != 0) {
                                    uVar25 = auStack_90[uVar14];
                                    auStack_90[uVar14] = uVar25 + 1;
                                    *(short *)(param_6 + (ulong)uVar25 * 2) = (short)lVar13;
                                  }
                                  if ((ulong)param_3 == lVar13 + 1U) break;
                                  lVar13 = lVar13 + 1;
                                  uVar25 = param_2[lVar13];
                                }
                              }
                              if (param_1 == 0) {
                                bVar7 = false;
                                bVar6 = 0;
                                uVar9 = 0x14;
                                puVar21 = param_6;
                                puVar22 = param_6;
                              }
                              else if (param_1 == 1) {
                                if (9 < uVar16) {
                                  return 1;
                                }
                                bVar7 = false;
                                uVar9 = 0x101;
                                bVar6 = 1;
                                puVar21 = &DAT_039cea9e;
                                puVar22 = &DAT_039cea60;
                              }
                              else {
                                bVar7 = param_1 == 2;
                                uVar9 = 0;
                                puVar21 = &UNK_039ceb1c;
                                puVar22 = &UNK_039ceadc;
                                if (bVar7) {
                                  bVar6 = 0;
                                  if (9 < uVar16) {
                                    return 1;
                                  }
                                }
                                else {
                                  bVar6 = 0;
                                }
                              }
                              lVar13 = *param_4;
                              uVar20 = 1 << (ulong)(uVar16 & 0x1f);
                              uVar14 = 0;
                              uVar23 = 0;
                              uVar5 = uVar20 - 1;
                              uVar17 = uVar16;
                              uVar8 = 0;
                              uVar10 = 0xffffffff;
                              do {
                                uVar3 = 1 << (ulong)(uVar17 & 0x1f);
                                do {
                                  uVar25 = *(ushort *)(param_6 + uVar14 * 2);
                                  uVar17 = (uint)uVar19;
                                  if (uVar25 + 1 < uVar9) {
                                    uVar27 = 0;
                                  }
                                  else if (uVar9 < uVar25 || uVar9 == uVar25) {
                                    lVar24 = (ulong)(uVar25 - uVar9) * 2;
                                    uVar27 = puVar21[lVar24];
                                    uVar25 = *(ushort *)(puVar22 + lVar24);
                                  }
                                  else {
                                    uVar25 = 0;
                                    uVar27 = 0x60;
                                  }
                                  iVar11 = 1 << (ulong)(uVar17 - uVar8 & 0x1f);
                                  uVar18 = uVar3;
                                  do {
                                    uVar28 = ((uVar23 >> (ulong)(uVar8 & 0x1f)) - iVar11) + uVar18;
                                    uVar18 = uVar18 - iVar11;
                                    puVar1 = (undefined1 *)(lVar13 + (ulong)uVar28 * 4);
                                    *puVar1 = uVar27;
                                    uVar4 = (undefined1)(uVar17 - uVar8);
                                    puVar1[1] = uVar4;
                                    *(ushort *)(puVar1 + 2) = uVar25;
                                  } while (uVar18 != 0);
                                  uVar18 = 1 << (ulong)(uVar17 - 1 & 0x1f);
                                  do {
                                    uVar28 = uVar18;
                                    uVar18 = uVar28 >> 1;
                                  } while ((uVar28 & uVar23) != 0);
                                  uVar18 = uVar28 - 1 & uVar23;
                                  uVar25 = local_70[uVar19 & 0xffffffff];
                                  uVar23 = 0;
                                  if (uVar28 != 0) {
                                    uVar23 = uVar18 + uVar28;
                                  }
                                  uVar14 = (ulong)((int)uVar14 + 1);
                                  local_70[uVar19 & 0xffffffff] = uVar25 - 1;
                                  if ((ushort)(uVar25 - 1) == 0) {
                                    if (uVar17 == uVar12) {
                                      if (uVar23 != 0) {
                                        puVar1 = (undefined1 *)(lVar13 + (ulong)uVar23 * 4);
                                        *puVar1 = 0x40;
                                        puVar1[1] = uVar4;
                                        *(undefined2 *)(puVar1 + 2) = 0;
                                      }
                                      *param_4 = *param_4 + (ulong)uVar20 * 4;
                                      *param_5 = uVar16;
                                      return 0;
                                    }
                                    uVar19 = (ulong)param_2[*(ushort *)(param_6 + uVar14 * 2)];
                                  }
                                  uVar18 = (uint)uVar19;
                                } while ((uVar18 <= uVar16) ||
                                        (uVar28 = uVar23 & uVar5, uVar28 == uVar10));
                                uVar10 = uVar16;
                                if (uVar8 != 0) {
                                  uVar10 = uVar8;
                                }
                                uVar17 = uVar18 - uVar10;
                                iVar11 = 1 << (ulong)(uVar17 & 0x1f);
                                if (uVar18 < uVar12) {
                                  uVar26 = uVar19 & 0xffffffff;
                                  do {
                                    puVar2 = local_70 + uVar26;
                                    if ((int)(iVar11 - (uint)*puVar2) < 1) break;
                                    uVar26 = uVar26 + 1;
                                    iVar11 = (iVar11 - (uint)*puVar2) * 2;
                                  } while ((uint)uVar26 < uVar12);
                                  uVar17 = (int)uVar26 - uVar10;
                                  iVar11 = 1 << (ulong)(uVar17 & 0x1f);
                                }
                                uVar20 = iVar11 + uVar20;
                                if ((bool)(bVar6 & 0x354 < uVar20)) {
                                  return 1;
                                }
                                if ((bool)(bVar7 & 0x250 < uVar20)) {
                                  return 1;
                                }
                                lVar13 = lVar13 + (ulong)uVar3 * 4;
                                lVar24 = (ulong)uVar28 * 4;
                                *(char *)(*param_4 + lVar24) = (char)uVar17;
                                *(char *)(*param_4 + lVar24 + 1) = (char)uVar16;
                                *(short *)(*param_4 + lVar24 + 2) =
                                     (short)((uint)((int)lVar13 - (int)*param_4) >> 2);
                                uVar8 = uVar10;
                                uVar10 = uVar28;
                              } while( true );
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
  return 0xffffffff;
}


