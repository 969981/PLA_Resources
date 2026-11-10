/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02efe3f0; name: FUN_02efe3f0
 */


void FUN_02efe3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,ulong param_5
                 ,ulong param_6,float *param_7)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  size_t __n;
  ulong uVar6;
  float *pfVar7;
  uint uVar8;
  ulong uVar9;
  float *pfVar10;
  undefined8 uVar11;
  float *pfVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  float *pfVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float afStack_d0 [2];
  size_t local_c8;
  float *local_c0;
  float *local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  
  uVar23 = param_5 >> 0xc;
  uVar9 = uVar23 & 0xfffff;
  uVar8 = (uint)uVar9;
  uVar16 = (uint)(param_6 >> 0xc);
  uVar22 = (uint)param_5;
  uVar18 = (uint)param_6;
  uVar4 = uVar18 - ((uVar16 & 0xfffff) - (uVar16 & 0xffff7) >> 3);
  uVar3 = uVar22 - (uVar8 - (uVar8 & 0xfffffff7) >> 3) & 0xff;
  if ((param_4 == 0) || ((uVar4 & 0xff) == 1)) {
    uVar21 = param_6 & 0xff;
    uVar20 = (uint)uVar21;
    if (uVar3 == 1) {
      if (uVar20 != 0) {
        memset(param_7,0,(ulong)(uVar20 << 2));
      }
      if ((uVar4 & 0xfe) == 0) {
        *param_7 = 1.0;
      }
      else if ((~uVar18 & 0x7000) == 0) {
        fVar25 = SQRT(0.5 - (float)param_3 * 0.5);
        *param_7 = fVar25;
        param_7[1] = fVar25;
        param_7[2] = SQRT((float)param_3);
      }
      else {
        param_7[0] = 0.70710677;
        param_7[1] = 0.70710677;
      }
      if ((uVar22 >> 0xf & 1) != 0) {
        if (uVar20 != 0) {
          memset(param_7 + (uVar20 + 3 & 0x1fc) * ((uVar22 & 0xff) - 1),0,(ulong)(uVar20 << 2));
        }
        if ((uVar18 >> 0xf & 1) != 0) {
          (param_7 + (uVar20 + 3 & 0x1fc) * ((uVar22 & 0xff) - 1))[uVar21 - 1] = 1.0;
        }
      }
    }
    else {
      uVar3 = uVar16 & 0x737;
      local_90 = (undefined4 *)(CONCAT44(local_90._4_4_,uVar16) & 0xffffffff000ffff7);
      local_88 = CONCAT44(local_88._4_4_,uVar8) & 0xfffffffffffffff7;
      local_98 = uVar9;
      if (uVar3 == 3) {
        if ((uVar23 & 0xffff7) != 0) {
          uVar3 = uVar20 + 3 & 0x1fc;
          if (uVar20 == 0) {
            if ((uVar22 >> 0xc & 1) != 0) {
              param_7[0] = 1.0;
              param_7[1] = 0.0;
            }
            if (1 < (uint)local_88) {
              if ((uVar22 >> 0xd & 1) != 0) {
                param_7[0] = 0.0;
                param_7[1] = 1.0;
              }
              if (3 < (uint)local_88) {
                uVar3 = 4;
                uVar23 = 2;
                do {
                  if ((uVar3 & (uint)local_88) != 0) {
                    *(undefined8 *)param_7 = *(undefined8 *)(&UNK_03aa0438 + uVar23 * 8);
                  }
                  uVar3 = uVar3 * 2;
                  uVar23 = (ulong)((int)uVar23 + 1);
                } while (uVar3 <= (uint)local_88);
              }
            }
          }
          else {
            __n = (ulong)(uVar20 << 2) - 8;
            if (uVar20 < 3) {
              bVar1 = (uVar22 >> 0xc & 1) != 0;
              if (bVar1) {
                memset(param_7 + 2,0,0);
                param_7[0] = 1.0;
                param_7[1] = 0.0;
              }
              uVar8 = (uint)bVar1;
              if (1 < (uint)local_88) {
                if ((uVar22 >> 0xd & 1) != 0) {
                  pfVar19 = param_7 + uVar8 * uVar3;
                  memset(pfVar19 + 2,0,0);
                  uVar8 = uVar8 + 1;
                  pfVar19[0] = 0.0;
                  pfVar19[1] = 1.0;
                }
                if (3 < (uint)local_88) {
                  uVar16 = 4;
                  uVar23 = 2;
                  do {
                    if ((uVar16 & (uint)local_88) != 0) {
                      uVar4 = uVar8 * uVar3;
                      memset(param_7 + uVar4 + 2,0,0);
                      uVar8 = uVar8 + 1;
                      *(undefined8 *)(param_7 + uVar4) = *(undefined8 *)(&UNK_03aa0438 + uVar23 * 8)
                      ;
                    }
                    uVar16 = uVar16 * 2;
                    uVar23 = (ulong)((int)uVar23 + 1);
                  } while (uVar16 <= (uint)local_88);
                }
              }
            }
            else {
              pfVar19 = param_7 + 2;
              local_b8 = (float *)((ulong)(uVar20 - 3) * 4 + 4);
              bVar1 = (uVar22 >> 0xc & 1) != 0;
              local_b0 = uVar21;
              local_a8 = param_6;
              if (bVar1) {
                memset(param_7 + 2,0,__n);
                param_7[0] = 1.0;
                param_7[1] = 0.0;
                memset(pfVar19,0,(size_t)local_b8);
              }
              uVar8 = (uint)bVar1;
              param_6 = local_a8;
              uVar21 = local_b0;
              if (1 < (uint)local_88) {
                if ((uVar22 >> 0xd & 1) != 0) {
                  pfVar7 = param_7 + uVar8 * uVar3;
                  memset(pfVar7 + 2,0,__n);
                  pfVar7[0] = 0.0;
                  pfVar7[1] = 1.0;
                  memset(pfVar19 + uVar8 * uVar3,0,(size_t)local_b8);
                  uVar8 = uVar8 + 1;
                }
                uVar21 = local_b0;
                param_6 = local_a8;
                if (3 < (uint)local_88) {
                  uVar16 = 4;
                  local_c0 = (float *)CONCAT44(local_c0._4_4_,2);
                  do {
                    if ((uVar16 & (uint)local_88) != 0) {
                      memset(param_7 + uVar8 * uVar3 + 2,0,__n);
                      *(undefined8 *)(param_7 + uVar8 * uVar3) =
                           *(undefined8 *)(&UNK_03aa0438 + ((ulong)local_c0 & 0xffffffff) * 8);
                      memset(pfVar19 + uVar8 * uVar3,0,(size_t)local_b8);
                      uVar8 = uVar8 + 1;
                    }
                    local_c0 = (float *)CONCAT44(local_c0._4_4_,(int)local_c0 + 1);
                    uVar16 = uVar16 * 2;
                    param_6 = local_a8;
                  } while (uVar16 <= (uint)local_88);
                }
              }
            }
          }
        }
      }
      else {
        local_a0 = param_5;
        if (uVar3 < 0x607) {
          if (uVar3 == 4) {
            local_b0 = uVar21;
            local_a8 = param_6;
            if ((uint)local_88 != 0) {
              if (uVar20 == 0) {
                uVar3 = 0;
                uVar8 = 1;
                if ((uVar23 & 1) != 0) goto LAB_02f00600;
                while( true ) {
                  uVar8 = uVar8 * 2;
                  uVar3 = uVar3 + 1;
                  if ((uint)local_88 < uVar8) break;
                  if ((uVar8 & (uint)local_88) != 0) {
LAB_02f00600:
                    *param_7 = (float)(&DAT_03aa03f0)[uVar3];
                  }
                }
              }
              else if (uVar20 == 1) {
                iVar14 = 0;
                uVar3 = 0;
                uVar8 = 1;
                if ((uVar23 & 1) != 0) goto LAB_02eff078;
                while( true ) {
                  uVar8 = uVar8 * 2;
                  uVar3 = uVar3 + 1;
                  if ((uint)local_88 < uVar8) break;
                  if ((uVar8 & (uint)local_88) != 0) {
LAB_02eff078:
                    uVar16 = iVar14 * 4;
                    memset(param_7 + uVar16,0,4);
                    iVar14 = iVar14 + 1;
                    param_7[uVar16] = (float)(&DAT_03aa03f0)[uVar3];
                  }
                }
              }
              else {
                local_b8 = param_7 + 1;
                local_c0 = (float *)((ulong)(uVar20 - 2) * 4 + 4);
                iVar14 = 0;
                uVar3 = 0;
                uVar8 = 1;
                if ((uVar23 & 1) != 0) goto LAB_02effe34;
                while( true ) {
                  uVar8 = uVar8 * 2;
                  uVar3 = uVar3 + 1;
                  if ((uint)local_88 < uVar8) break;
                  if ((uVar8 & (uint)local_88) != 0) {
LAB_02effe34:
                    uVar16 = iVar14 * (uVar20 + 3 & 0x1fc);
                    memset(param_7 + uVar16,0,(ulong)(uVar20 << 2));
                    param_7[uVar16] = (float)(&DAT_03aa03f0)[uVar3];
                    memset(local_b8 + uVar16,0,(size_t)local_c0);
                    iVar14 = iVar14 + 1;
                  }
                }
              }
            }
          }
          else if (uVar3 == 7) {
            local_b0 = uVar21;
            local_a8 = param_6;
            if ((uint)local_88 != 0) {
              uVar3 = uVar20 + 3 & 0x1fc;
              if (uVar20 == 0) {
                uVar3 = 0;
                uVar8 = 1;
                if ((uVar23 & 1) != 0) goto LAB_02f0065c;
                while( true ) {
                  uVar8 = uVar8 * 2;
                  uVar3 = uVar3 + 1;
                  if ((uint)local_88 < uVar8) break;
                  if ((uVar8 & (uint)local_88) != 0) {
LAB_02f0065c:
                    param_7[2] = (float)(&DAT_03aa04d0)[(ulong)uVar3 * 3];
                    *(undefined8 *)param_7 = *(undefined8 *)(&DAT_03aa04c8 + (ulong)uVar3 * 3);
                  }
                }
              }
              else {
                local_b8 = (float *)((ulong)(uVar20 << 2) - 0xc);
                if (uVar20 < 4) {
                  uVar8 = 0;
                  iVar14 = 0;
                  uVar16 = 1;
                  local_b8 = (float *)0x0;
                  if ((uVar23 & 1) != 0) goto LAB_02effec8;
                  while( true ) {
                    uVar16 = uVar16 * 2;
                    uVar8 = uVar8 + 1;
                    param_6 = local_a8;
                    if ((uint)local_88 < uVar16) break;
                    if ((uVar16 & (uint)local_88) != 0) {
LAB_02effec8:
                      pfVar19 = param_7 + iVar14 * uVar3;
                      memset(pfVar19 + 3,0,(size_t)local_b8);
                      *(undefined8 *)pfVar19 = *(undefined8 *)(&DAT_03aa04c8 + (ulong)uVar8 * 3);
                      iVar14 = iVar14 + 1;
                      pfVar19[2] = (float)(&DAT_03aa04d0)[(ulong)uVar8 * 3];
                    }
                  }
                }
                else {
                  local_c8 = (ulong)(uVar20 - 4) * 4 + 4;
                  uVar16 = 1;
                  local_c0 = param_7 + 3;
                  uVar8 = 0;
                  iVar14 = 0;
                  if ((uVar23 & 1) != 0) goto LAB_02eff130;
                  while( true ) {
                    uVar16 = uVar16 * 2;
                    uVar8 = uVar8 + 1;
                    if ((uint)local_88 < uVar16) break;
                    if ((uVar16 & (uint)local_88) != 0) {
LAB_02eff130:
                      uVar4 = iVar14 * uVar3;
                      pfVar19 = param_7 + uVar4;
                      memset(pfVar19 + 3,0,(size_t)local_b8);
                      *(undefined8 *)pfVar19 = *(undefined8 *)(&DAT_03aa04c8 + (ulong)uVar8 * 3);
                      pfVar19[2] = (float)(&DAT_03aa04d0)[(ulong)uVar8 * 3];
                      memset(local_c0 + uVar4,0,local_c8);
                      iVar14 = iVar14 + 1;
                    }
                  }
                }
              }
            }
          }
          else {
            local_b0 = uVar21;
            local_a8 = param_6;
            if ((uVar3 == 0x603) && ((uint)local_88 != 0)) {
              uVar3 = uVar20 + 3 & 0x1fc;
              if (uVar20 == 0) {
                uVar3 = 0;
                uVar8 = 1;
                if ((uVar23 & 1) != 0) goto LAB_02f00520;
                while( true ) {
                  uVar8 = uVar8 * 2;
                  uVar3 = uVar3 + 1;
                  if ((uint)local_88 < uVar8) break;
                  if ((uVar8 & (uint)local_88) != 0) {
LAB_02f00520:
                    uVar2 = *(undefined8 *)(&DAT_03aa05a8 + (ulong)uVar3 * 4);
                    *(undefined8 *)param_7 = *(undefined8 *)(&DAT_03aa05a0 + (ulong)uVar3 * 4);
                    *(undefined8 *)(param_7 + 2) = uVar2;
                  }
                }
              }
              else {
                local_b8 = (float *)((ulong)(uVar20 << 2) - 0x10);
                if (uVar20 < 5) {
                  uVar8 = 0;
                  iVar14 = 0;
                  uVar16 = 1;
                  local_b8 = (float *)0x0;
                  if ((uVar23 & 1) != 0) goto LAB_02effd20;
                  while( true ) {
                    uVar16 = uVar16 * 2;
                    uVar8 = uVar8 + 1;
                    param_6 = local_a8;
                    if ((uint)local_88 < uVar16) break;
                    if ((uVar16 & (uint)local_88) != 0) {
LAB_02effd20:
                      pfVar19 = param_7 + iVar14 * uVar3;
                      memset(pfVar19 + 4,0,(size_t)local_b8);
                      uVar2 = *(undefined8 *)(&DAT_03aa05a8 + (ulong)uVar8 * 4);
                      iVar14 = iVar14 + 1;
                      *(undefined8 *)pfVar19 = *(undefined8 *)(&DAT_03aa05a0 + (ulong)uVar8 * 4);
                      *(undefined8 *)(pfVar19 + 2) = uVar2;
                    }
                  }
                }
                else {
                  local_c8 = (ulong)(uVar20 - 5) * 4 + 4;
                  uVar16 = 1;
                  local_c0 = param_7 + 4;
                  uVar8 = 0;
                  iVar14 = 0;
                  if ((uVar23 & 1) != 0) goto LAB_02efeb18;
                  while( true ) {
                    uVar16 = uVar16 * 2;
                    uVar8 = uVar8 + 1;
                    if ((uint)local_88 < uVar16) break;
                    if ((uVar16 & (uint)local_88) != 0) {
LAB_02efeb18:
                      uVar4 = iVar14 * uVar3;
                      pfVar19 = param_7 + uVar4;
                      memset(pfVar19 + 4,0,(size_t)local_b8);
                      uVar2 = *(undefined8 *)(&DAT_03aa05a8 + (ulong)uVar8 * 4);
                      *(undefined8 *)pfVar19 = *(undefined8 *)(&DAT_03aa05a0 + (ulong)uVar8 * 4);
                      *(undefined8 *)(pfVar19 + 2) = uVar2;
                      memset(local_c0 + uVar4,0,local_c8);
                      iVar14 = iVar14 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        else if (uVar3 == 0x607) {
          local_b0 = uVar21;
          local_a8 = param_6;
          if ((uint)local_88 != 0) {
            uVar3 = uVar20 + 3 & 0x1fc;
            if (uVar20 == 0) {
              uVar3 = 0;
              uVar8 = 1;
              if ((uVar23 & 1) != 0) goto LAB_02f006cc;
              while( true ) {
                uVar8 = uVar8 * 2;
                uVar3 = uVar3 + 1;
                if ((uint)local_88 < uVar8) break;
                if ((uVar8 & (uint)local_88) != 0) {
LAB_02f006cc:
                  uVar23 = (ulong)uVar3;
                  param_7[4] = (float)(&DAT_03aa06d0)[uVar23 * 5];
                  uVar2 = *(undefined8 *)(&DAT_03aa06c8 + uVar23 * 5);
                  *(undefined8 *)param_7 = *(undefined8 *)(&DAT_03aa06c0 + uVar23 * 5);
                  *(undefined8 *)(param_7 + 2) = uVar2;
                }
              }
            }
            else {
              local_b8 = (float *)((ulong)(uVar20 << 2) - 0x14);
              if (uVar20 < 6) {
                uVar8 = 0;
                iVar14 = 0;
                uVar16 = 1;
                local_b8 = (float *)0x0;
                if ((uVar23 & 1) != 0) goto LAB_02efff40;
                while( true ) {
                  uVar16 = uVar16 * 2;
                  uVar8 = uVar8 + 1;
                  if ((uint)local_88 < uVar16) break;
                  if ((uVar16 & (uint)local_88) != 0) {
LAB_02efff40:
                    uVar23 = (ulong)uVar8;
                    pfVar19 = param_7 + iVar14 * uVar3;
                    memset(pfVar19 + 5,0,(size_t)local_b8);
                    uVar2 = *(undefined8 *)(&DAT_03aa06c8 + uVar23 * 5);
                    iVar14 = iVar14 + 1;
                    *(undefined8 *)pfVar19 = *(undefined8 *)(&DAT_03aa06c0 + uVar23 * 5);
                    *(undefined8 *)(pfVar19 + 2) = uVar2;
                    pfVar19[4] = (float)(&DAT_03aa06d0)[uVar23 * 5];
                  }
                }
              }
              else {
                local_c8 = (ulong)(uVar20 - 6) * 4 + 4;
                uVar16 = 1;
                local_c0 = param_7 + 5;
                uVar8 = 0;
                iVar14 = 0;
                if ((uVar23 & 1) != 0) goto LAB_02eff214;
                while( true ) {
                  uVar16 = uVar16 * 2;
                  uVar8 = uVar8 + 1;
                  if ((uint)local_88 < uVar16) break;
                  if ((uVar16 & (uint)local_88) != 0) {
LAB_02eff214:
                    uVar23 = (ulong)uVar8;
                    uVar4 = iVar14 * uVar3;
                    pfVar19 = param_7 + uVar4;
                    memset(pfVar19 + 5,0,(size_t)local_b8);
                    uVar2 = *(undefined8 *)(&DAT_03aa06c8 + uVar23 * 5);
                    *(undefined8 *)pfVar19 = *(undefined8 *)(&DAT_03aa06c0 + uVar23 * 5);
                    *(undefined8 *)(pfVar19 + 2) = uVar2;
                    pfVar19[4] = (float)(&DAT_03aa06d0)[uVar23 * 5];
                    memset(local_c0 + uVar4,0,local_c8);
                    iVar14 = iVar14 + 1;
                  }
                }
              }
            }
          }
        }
        else if (uVar3 == 0x633) {
          local_b0 = uVar21;
          local_a8 = param_6;
          if ((uint)local_88 != 0) {
            uVar3 = uVar20 + 3 & 0x1fc;
            if (uVar20 == 0) {
              uVar3 = 0;
              uVar8 = 1;
              if ((uVar23 & 1) != 0) goto LAB_02f00740;
              while( true ) {
                uVar8 = uVar8 * 2;
                uVar3 = uVar3 + 1;
                if ((uint)local_88 < uVar8) break;
                if ((uVar8 & (uint)local_88) != 0) {
LAB_02f00740:
                  uVar23 = (ulong)uVar3;
                  uVar2 = *(undefined8 *)(&DAT_03aa0828 + uVar23 * 6);
                  uVar5 = *(undefined8 *)(&DAT_03aa0838 + uVar23 * 6);
                  *(undefined8 *)(param_7 + 2) = *(undefined8 *)(&DAT_03aa0830 + uVar23 * 6);
                  *(undefined8 *)(param_7 + 4) = uVar5;
                  *(undefined8 *)param_7 = uVar2;
                }
              }
            }
            else {
              local_b8 = (float *)((ulong)(uVar20 << 2) - 0x18);
              if (uVar20 < 7) {
                uVar8 = 0;
                iVar14 = 0;
                uVar16 = 1;
                local_b8 = (float *)0x0;
                if ((uVar23 & 1) != 0) goto LAB_02efffc0;
                while( true ) {
                  uVar16 = uVar16 * 2;
                  uVar8 = uVar8 + 1;
                  if ((uint)local_88 < uVar16) break;
                  if ((uVar16 & (uint)local_88) != 0) {
LAB_02efffc0:
                    uVar23 = (ulong)uVar8;
                    pfVar19 = param_7 + iVar14 * uVar3;
                    memset(pfVar19 + 6,0,(size_t)local_b8);
                    uVar2 = *(undefined8 *)(&DAT_03aa0830 + uVar23 * 6);
                    *(undefined8 *)pfVar19 = *(undefined8 *)(&DAT_03aa0828 + uVar23 * 6);
                    uVar5 = *(undefined8 *)(&DAT_03aa0838 + uVar23 * 6);
                    iVar14 = iVar14 + 1;
                    *(undefined8 *)(pfVar19 + 2) = uVar2;
                    *(undefined8 *)(pfVar19 + 4) = uVar5;
                  }
                }
              }
              else {
                local_c8 = (ulong)(uVar20 - 7) * 4 + 4;
                uVar16 = 1;
                local_c0 = param_7 + 6;
                uVar8 = 0;
                iVar14 = 0;
                if ((uVar23 & 1) != 0) goto LAB_02eff2f8;
                while( true ) {
                  uVar16 = uVar16 * 2;
                  uVar8 = uVar8 + 1;
                  if ((uint)local_88 < uVar16) break;
                  if ((uVar16 & (uint)local_88) != 0) {
LAB_02eff2f8:
                    uVar23 = (ulong)uVar8;
                    uVar4 = iVar14 * uVar3;
                    pfVar19 = param_7 + uVar4;
                    memset(pfVar19 + 6,0,(size_t)local_b8);
                    uVar2 = *(undefined8 *)(&DAT_03aa0830 + uVar23 * 6);
                    *(undefined8 *)pfVar19 = *(undefined8 *)(&DAT_03aa0828 + uVar23 * 6);
                    uVar5 = *(undefined8 *)(&DAT_03aa0838 + uVar23 * 6);
                    *(undefined8 *)(pfVar19 + 2) = uVar2;
                    *(undefined8 *)(pfVar19 + 4) = uVar5;
                    memset(local_c0 + uVar4,0,local_c8);
                    iVar14 = iVar14 + 1;
                  }
                }
              }
            }
          }
        }
        else {
          local_b0 = uVar21;
          local_a8 = param_6;
          if ((uVar3 == 0x637) && ((uint)local_88 != 0)) {
            uVar3 = uVar20 + 3 & 0x1fc;
            if (uVar20 == 0) {
              uVar3 = 0;
              uVar8 = 1;
              if ((uVar23 & 1) != 0) goto LAB_02f00588;
              while( true ) {
                uVar8 = uVar8 * 2;
                uVar3 = uVar3 + 1;
                if ((uint)local_88 < uVar8) break;
                if ((uVar8 & (uint)local_88) != 0) {
LAB_02f00588:
                  uVar23 = (ulong)uVar3;
                  uVar2 = *(undefined8 *)(&DAT_03aa09d8 + uVar23 * 7);
                  uVar5 = *(undefined8 *)(&DAT_03aa09e0 + uVar23 * 7);
                  param_7[6] = (float)(&DAT_03aa09f0)[uVar23 * 7];
                  uVar11 = *(undefined8 *)(&DAT_03aa09e8 + uVar23 * 7);
                  *(undefined8 *)(param_7 + 2) = uVar5;
                  *(undefined8 *)(param_7 + 4) = uVar11;
                  *(undefined8 *)param_7 = uVar2;
                }
              }
            }
            else {
              local_b8 = (float *)((ulong)(uVar20 << 2) - 0x1c);
              if (uVar20 < 8) {
                uVar8 = 0;
                iVar14 = 0;
                uVar16 = 1;
                local_b8 = (float *)0x0;
                if ((uVar23 & 1) != 0) goto LAB_02effd90;
                while( true ) {
                  uVar16 = uVar16 * 2;
                  uVar8 = uVar8 + 1;
                  if ((uint)local_88 < uVar16) break;
                  if ((uVar16 & (uint)local_88) != 0) {
LAB_02effd90:
                    uVar23 = (ulong)uVar8;
                    pfVar19 = param_7 + iVar14 * uVar3;
                    memset(pfVar19 + 7,0,(size_t)local_b8);
                    uVar2 = *(undefined8 *)(&DAT_03aa09e0 + uVar23 * 7);
                    iVar14 = iVar14 + 1;
                    fVar25 = (float)(&DAT_03aa09f0)[uVar23 * 7];
                    *(undefined8 *)pfVar19 = *(undefined8 *)(&DAT_03aa09d8 + uVar23 * 7);
                    pfVar19[6] = fVar25;
                    uVar5 = *(undefined8 *)(&DAT_03aa09e8 + uVar23 * 7);
                    *(undefined8 *)(pfVar19 + 2) = uVar2;
                    *(undefined8 *)(pfVar19 + 4) = uVar5;
                  }
                }
              }
              else {
                local_c8 = (ulong)(uVar20 - 8) * 4 + 4;
                uVar16 = 1;
                local_c0 = param_7 + 7;
                uVar8 = 0;
                iVar14 = 0;
                if ((uVar23 & 1) != 0) goto LAB_02efed88;
                while( true ) {
                  uVar16 = uVar16 * 2;
                  uVar8 = uVar8 + 1;
                  if ((uint)local_88 < uVar16) break;
                  if ((uVar16 & (uint)local_88) != 0) {
LAB_02efed88:
                    uVar23 = (ulong)uVar8;
                    uVar4 = iVar14 * uVar3;
                    pfVar19 = param_7 + uVar4;
                    memset(pfVar19 + 7,0,(size_t)local_b8);
                    uVar2 = *(undefined8 *)(&DAT_03aa09e0 + uVar23 * 7);
                    fVar25 = (float)(&DAT_03aa09f0)[uVar23 * 7];
                    *(undefined8 *)pfVar19 = *(undefined8 *)(&DAT_03aa09d8 + uVar23 * 7);
                    pfVar19[6] = fVar25;
                    uVar5 = *(undefined8 *)(&DAT_03aa09e8 + uVar23 * 7);
                    *(undefined8 *)(pfVar19 + 2) = uVar2;
                    *(undefined8 *)(pfVar19 + 4) = uVar5;
                    memset(local_c0 + uVar4,0,local_c8);
                    iVar14 = iVar14 + 1;
                  }
                }
              }
            }
          }
        }
      }
      if ((((param_5 & 0xff9c0000) != 0) && ((param_6 & 0xff9c0000) != 0)) && (0x7fffff < uVar22)) {
        uVar3 = (uint)local_98 & 0x637;
        uVar3 = uVar3 - (uVar3 >> 1 & 0xf1f1f1f1);
        uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
        uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
        iVar14 = (int)uVar21;
        local_98 = CONCAT44(local_98._4_4_,iVar14 + 3) & 0xffffffff000001fc;
        if (iVar14 == 0) {
          uVar23 = 0;
          uVar16 = 1;
          uVar8 = 0x800;
          if ((local_88 & 0x800) != 0) goto LAB_02f007c0;
          while (uVar8 = uVar8 * 2, uVar8 <= (uint)local_88) {
            if ((uVar8 & (uint)local_88) != 0) {
LAB_02f007c0:
              if ((uVar8 & (uint)local_90) != 0) {
                while ((uVar16 & uVar8) == 0) {
                  uVar18 = uVar16 & (uint)local_90;
                  uVar16 = uVar16 << 1;
                  uVar4 = (uint)uVar23;
                  if (uVar18 != 0) {
                    uVar4 = uVar4 + 1;
                  }
                  uVar23 = (ulong)uVar4;
                }
                param_7[uVar3 * (int)local_98 + uVar23] = 1.0;
              }
              uVar3 = uVar3 + 1;
            }
          }
        }
        else {
          local_a8 = (ulong)(uint)(iVar14 << 2);
          uVar23 = 0;
          uVar16 = 1;
          uVar8 = 0x800;
          if ((local_88 & 0x800) != 0) goto LAB_02effa08;
          while( true ) {
            uVar8 = uVar8 * 2;
            if ((uint)local_88 < uVar8) break;
            if ((uVar8 & (uint)local_88) != 0) {
LAB_02effa08:
              uVar4 = uVar3 * (int)local_98;
              memset(param_7 + uVar4,0,local_a8);
              if ((uVar8 & (uint)local_90) != 0) {
                while ((uVar16 & uVar8) == 0) {
                  uVar20 = uVar16 & (uint)local_90;
                  uVar16 = uVar16 << 1;
                  uVar18 = (uint)uVar23;
                  if (uVar20 != 0) {
                    uVar18 = uVar18 + 1;
                  }
                  uVar23 = (ulong)uVar18;
                }
                (param_7 + uVar4)[uVar23] = 1.0;
              }
              uVar3 = uVar3 + 1;
            }
          }
        }
      }
    }
    if ((uVar22 >> 0xf & 1) == 0) {
      return;
    }
    iVar14 = (int)uVar21;
    param_7 = param_7 + (iVar14 + 3U & 0x1fc) * ((uVar22 & 0xff) - 1);
    if (iVar14 != 0) {
      memset(param_7,0,(ulong)(uint)(iVar14 << 2));
    }
    uVar3 = (uint)param_6;
  }
  else {
    local_a0 = param_5;
    fVar25 = (float)param_1;
    if (uVar3 == 1) {
      iVar14 = (int)(param_6 & 0xff);
      if (iVar14 != 0) {
        memset(param_7,0,(ulong)(uint)(iVar14 << 2));
      }
      uVar16 = uVar16 & 0x637;
      if (uVar16 < 0x607) {
        if ((param_6 >> 0xc & 0x637) == 0) {
          uVar3 = iVar14 + 3U & 0x1fc;
          iVar15 = uVar3 * (uVar22 & 0xff);
          if (iVar15 != 0) {
            memset(param_7,0,(ulong)(uint)(iVar15 * 4));
          }
          if ((uVar22 >> 0xf & 1) == 0) {
            return;
          }
          if (iVar14 != 0) {
            memset(param_7 + uVar3 * ((uVar22 & 0xff) - 1),0,(ulong)(uint)(iVar14 << 2));
          }
          if ((uVar18 >> 0xf & 1) == 0) {
            return;
          }
          param_7 = param_7 + uVar3 * ((uVar22 & 0xff) - 1) + (param_6 & 0xff);
          goto LAB_02efe6a0;
        }
        if (uVar16 == 0x603) {
          fVar24 = (float)param_2;
          *param_7 = SQRT((1.0 - fVar25) * fVar24);
          param_7[1] = SQRT(fVar24 * fVar25);
          param_7[2] = SQRT((1.0 - fVar24) * (1.0 - fVar25));
          param_7[3] = SQRT((1.0 - fVar24) * fVar25);
          uVar3 = (uint)local_a0;
        }
        else {
          if (uVar16 != 7) {
LAB_02efe734:
            *param_7 = SQRT(1.0 - fVar25);
            param_7[1] = SQRT(fVar25);
            goto LAB_02efe74c;
          }
          FUN_02f01630(param_1,param_3,param_7);
          uVar3 = (uint)local_a0;
        }
      }
      else if (uVar16 == 0x637) {
        FUN_02f013d0(param_1,param_2,param_3,param_7);
        uVar3 = (uint)local_a0;
      }
      else if (uVar16 == 0x633) {
        FUN_02f014a0(param_1,param_2,param_7,0x633);
        uVar3 = (uint)local_a0;
      }
      else {
        if (uVar16 != 0x607) goto LAB_02efe734;
        FUN_02f01550(param_1,param_2,param_3,param_7);
        uVar3 = (uint)local_a0;
      }
joined_r0x02efe718:
      if ((uVar3 >> 0xf & 1) == 0) {
        return;
      }
      uVar21 = param_6 & 0xff;
      iVar14 = (int)uVar21;
      param_7 = param_7 + (iVar14 + 3U & 0x1fc) * ((uVar3 & 0xff) - 1);
      if (iVar14 != 0) {
        memset(param_7,0,(ulong)(uint)(iVar14 << 2));
      }
      uVar3 = (uint)param_6;
    }
    else {
      local_a8 = param_6;
      if (((uVar22 >> 0x10 ^ uVar22 >> 0x15) & 1) == 0) {
        uVar8 = uVar8 & 0x637;
        if ((uVar23 & 0x637) != 0) {
LAB_02efe7b0:
          uVar20 = uVar8 | uVar16 & 0x637;
          uVar3 = uVar8 - (uVar8 >> 1 & 0x55555555);
          uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
          uVar4 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
          uVar3 = uVar20 - (uVar20 >> 1 & 0x55555555);
          uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
          uVar18 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
          uVar22 = uVar18 + 3 >> 2;
          puVar17 = (undefined4 *)((long)afStack_d0 - (ulong)(uVar4 * uVar22 * 0x10));
          uVar3 = uVar18 + 3 & 0x1c;
          local_88 = (ulong)uVar3;
          iVar14 = uVar3 * uVar4;
          local_98 = (ulong)uVar4;
          if (iVar14 != 0) {
            memset(puVar17,0,(ulong)(uint)(iVar14 * 4));
          }
          local_90 = puVar17;
          pfVar19 = (float *)((long)puVar17 - (ulong)(uVar22 << 4));
          uVar3 = (int)local_88 * 4;
          uVar23 = (ulong)uVar3;
          if ((int)local_88 != 0) {
            memset(pfVar19,0,uVar23);
          }
          puVar17 = local_90;
          uVar4 = uVar20 >> 2 & 1;
          if (uVar8 == 3) {
            uVar23 = local_88 & 0xffffffff;
            *local_90 = 0x3f800000;
            puVar17[uVar23 + 1] = 0x3f800000;
            if ((uVar20 | 4) == 0x637) {
              local_90[uVar4 | 2] = 0x3f800000;
              local_90[uVar4 | 4] = 0x3f800000;
              puVar17[uVar23 + (uVar4 + 3)] = 0x3f800000;
              puVar17[uVar23 + (uVar4 + 5)] = 0x3f800000;
LAB_02efef80:
              FUN_02f014a0(param_1,param_2,pfVar19,uVar20);
            }
            else if ((uVar20 | 4) == 0x607) {
              local_90[uVar4 | 2] = 0x3f800000;
              puVar17[uVar23 + (uVar4 + 3)] = 0x3f800000;
LAB_02efefb0:
              FUN_02f015d0(param_1,param_2,pfVar19,uVar20);
            }
            else {
              fVar24 = 1.0 - fVar25;
LAB_02efe8d4:
              *pfVar19 = SQRT(fVar24);
              pfVar19[1] = SQRT(fVar25);
            }
          }
          else {
            iVar14 = (int)local_88;
            if (uVar8 < 0x607) {
              if (uVar8 != 7) {
                if (uVar8 == 0x603) {
                  uVar23 = local_88 & 0xffffffff;
                  *local_90 = 0x3f800000;
                  puVar17[uVar23 + 1] = 0x3f800000;
                  puVar17[(ulong)(uint)(iVar14 * 2) + (ulong)(uVar4 | 2)] = 0x3f800000;
                  puVar17[(ulong)(uint)(iVar14 * 3) + (ulong)(uVar4 + 3)] = 0x3f800000;
                  if ((uVar20 | 4) != 0x637) goto LAB_02efefb0;
                  puVar17[(ulong)(uint)(iVar14 * 2) + (ulong)(uVar4 | 4)] = 0x3f800000;
                  puVar17[(ulong)(uint)(iVar14 * 3) + (ulong)(uVar4 + 5)] = 0x3f800000;
                  goto LAB_02efef80;
                }
                goto LAB_02efe8d8;
              }
              uVar23 = local_88 & 0xffffffff;
              uVar3 = iVar14 << 1;
              *local_90 = 0x3f800000;
              puVar17[uVar23 + 1] = 0x3f800000;
              puVar17[(ulong)uVar3 + 2] = 0x3f800000;
              if ((uVar20 | 4) == 0x607) {
                local_90[uVar4 | 2] = 0x3f800000;
                puVar17[uVar23 + (uVar4 + 3)] = 0x3f800000;
                puVar17[(ulong)uVar3 + (ulong)(uVar4 | 2)] = 0x3f000000;
                puVar17[(ulong)uVar3 + (ulong)(uVar4 + 3)] = 0x3f000000;
                goto LAB_02effc98;
              }
              if ((uVar20 | 4) != 0x637) {
                pfVar19[2] = 0.57735026;
                fVar25 = fVar25 * 0.6666667;
                fVar24 = 0.6666667 - fVar25;
                goto LAB_02efe8d4;
              }
              local_90[uVar4 | 2] = 0x3f800000;
              local_90[uVar4 | 4] = 0x3f800000;
              puVar17[uVar23 + (uVar4 + 3)] = 0x3f800000;
              puVar17[uVar23 + (uVar4 + 5)] = 0x3f800000;
              puVar17[(ulong)uVar3 + (ulong)(uVar4 | 2)] = 0x3f000000;
              puVar17[(ulong)uVar3 + (ulong)(uVar4 | 4)] = 0x3f000000;
              puVar17[(ulong)uVar3 + (ulong)(uVar4 + 3)] = 0x3f000000;
              puVar17[(ulong)uVar3 + (ulong)(uVar4 + 5)] = 0x3f000000;
            }
            else if (uVar8 == 0x607) {
              uVar9 = local_88 & 0xffffffff;
              *local_90 = 0x3f800000;
              puVar17[uVar9 + 1] = 0x3f800000;
              puVar17[(ulong)(uint)(iVar14 * 2) + 2] = 0x3f800000;
              puVar17[(ulong)(uint)(iVar14 * 3) + (ulong)(uVar4 | 2)] = 0x3f800000;
              puVar17[uVar23 + (uVar4 + 3)] = 0x3f800000;
              if ((uVar20 | 4) != 0x637) {
LAB_02effc98:
                FUN_02f01740(param_1,param_2,pfVar19);
                goto LAB_02efe8d8;
              }
              puVar17[(ulong)(uint)(iVar14 * 3) + (ulong)(uVar4 | 4)] = 0x3f800000;
              puVar17[uVar23 + (uVar4 + 5)] = 0x3f800000;
            }
            else {
              if (uVar8 == 0x633) {
                uVar9 = local_88 & 0xffffffff;
                *local_90 = 0x3f800000;
                puVar17[uVar9 + 1] = 0x3f800000;
                puVar17[(ulong)(uint)(iVar14 * 2) + (ulong)(uVar4 | 2)] = 0x3f800000;
                puVar17[(ulong)(uint)(iVar14 * 3) + (ulong)(uVar4 + 3)] = 0x3f800000;
                puVar17[uVar23 + (uVar4 | 4)] = 0x3f800000;
                puVar17[(ulong)(uVar3 + iVar14) + (ulong)(uVar4 + 5)] = 0x3f800000;
                goto LAB_02efef80;
              }
              if (uVar8 != 0x637) goto LAB_02efe8d8;
              uVar9 = local_88 & 0xffffffff;
              *local_90 = 0x3f800000;
              puVar17[uVar9 + 1] = 0x3f800000;
              puVar17[(ulong)(uint)(iVar14 * 2) + 2] = 0x3f800000;
              puVar17[(ulong)(uint)(iVar14 * 3) + (ulong)(uVar4 | 2)] = 0x3f800000;
              puVar17[uVar23 + (uVar4 + 3)] = 0x3f800000;
              puVar17[(ulong)(uVar3 + iVar14) + (ulong)(uVar4 | 4)] = 0x3f800000;
              puVar17[(ulong)(uint)(iVar14 * 6) + (ulong)(uVar4 + 5)] = 0x3f800000;
            }
            FUN_02f01680(param_1,param_2,pfVar19);
          }
LAB_02efe8d8:
          puVar17 = local_90;
          uVar9 = local_98;
          param_6 = local_a8;
          fVar25 = *pfVar19;
          uVar23 = 0;
          pfVar7 = (float *)(local_90 + 2);
          do {
            pfVar10 = (float *)(local_90 + uVar23 * local_88);
            *pfVar10 = *pfVar10 * fVar25;
            if ((uVar18 != 1) && (pfVar10[1] = pfVar10[1] * pfVar19[1], uVar18 != 2)) {
              pfVar10 = pfVar19 + 2;
              pfVar12 = pfVar7;
              lVar13 = (ulong)uVar18 - 2;
              do {
                lVar13 = lVar13 + -1;
                *pfVar12 = *pfVar12 * *pfVar10;
                pfVar10 = pfVar10 + 1;
                pfVar12 = pfVar12 + 1;
              } while (lVar13 != 0);
            }
            uVar23 = uVar23 + 1;
            pfVar7 = pfVar7 + local_88;
          } while (uVar23 < local_98);
          uVar16 = uVar16 & 0x737;
          uVar3 = (uint)local_a8 & 0xff;
          if (uVar16 == 3) {
            uVar8 = uVar3 + 3 & 0x1fc;
            if ((local_a8 & 0xff) == 0) {
              uVar23 = 0;
              do {
                pfVar7 = (float *)(local_90 + uVar23 * local_88);
                pfVar19 = param_7 + uVar8 * (int)uVar23;
                bVar1 = (uVar20 & 1) != 0;
                if (bVar1) {
                  *pfVar19 = *pfVar19 + *pfVar7;
                }
                uVar9 = (ulong)bVar1;
                if (1 < uVar20) {
                  if ((uVar20 >> 1 & 1) != 0) {
                    pfVar10 = pfVar7 + uVar9;
                    uVar9 = (ulong)(bVar1 + 1);
                    pfVar19[1] = pfVar19[1] + *pfVar10;
                  }
                  if (3 < uVar20) {
                    uVar3 = 4;
                    uVar21 = 2;
                    do {
                      if ((uVar3 & uVar20) != 0) {
                        fVar25 = pfVar7[uVar9];
                        uVar9 = (ulong)((int)uVar9 + 1);
                        fVar24 = *(float *)(&UNK_03aa043c + uVar21 * 8);
                        *pfVar19 = *pfVar19 + fVar25 * *(float *)(&UNK_03aa0438 + uVar21 * 8);
                        pfVar19[1] = pfVar19[1] + fVar25 * fVar24;
                      }
                      uVar3 = uVar3 * 2;
                      uVar21 = (ulong)((int)uVar21 + 1);
                    } while (uVar3 <= uVar20);
                  }
                }
                uVar23 = uVar23 + 1;
              } while (uVar23 != local_98);
            }
            else {
              uVar23 = 0;
              do {
                pfVar7 = (float *)(puVar17 + uVar23 * local_88);
                pfVar19 = param_7 + uVar8 * (int)uVar23;
                memset(pfVar19,0,(ulong)(uVar3 << 2));
                bVar1 = (uVar20 & 1) != 0;
                if (bVar1) {
                  *pfVar19 = *pfVar19 + *pfVar7;
                }
                uVar21 = (ulong)bVar1;
                if (1 < uVar20) {
                  if ((uVar20 >> 1 & 1) != 0) {
                    pfVar10 = pfVar7 + uVar21;
                    uVar21 = (ulong)(bVar1 + 1);
                    pfVar19[1] = pfVar19[1] + *pfVar10;
                  }
                  if (3 < uVar20) {
                    uVar16 = 4;
                    uVar6 = 2;
                    do {
                      if ((uVar16 & uVar20) != 0) {
                        fVar25 = pfVar7[uVar21];
                        uVar21 = (ulong)((int)uVar21 + 1);
                        fVar24 = *(float *)(&UNK_03aa043c + uVar6 * 8);
                        *pfVar19 = *pfVar19 + fVar25 * *(float *)(&UNK_03aa0438 + uVar6 * 8);
                        pfVar19[1] = pfVar19[1] + fVar25 * fVar24;
                      }
                      uVar16 = uVar16 * 2;
                      uVar6 = (ulong)((int)uVar6 + 1);
                    } while (uVar16 <= uVar20);
                  }
                }
                uVar23 = uVar23 + 1;
              } while (uVar23 != uVar9);
            }
          }
          else if (uVar16 < 0x607) {
            if (uVar16 == 4) {
              uVar23 = (ulong)((uVar18 & 0x3f) + 3) & 0x7c;
              uVar8 = uVar3 + 3 & 0x1fc;
              if ((local_a8 & 0xff) == 0) {
                uVar9 = 0;
                do {
                  uVar21 = 0;
                  uVar3 = 0;
                  uVar16 = 1;
                  uVar4 = uVar8 * (int)uVar9;
                  uVar18 = uVar20 & 1;
                  while( true ) {
                    if (uVar18 != 0) {
                      lVar13 = uVar9 * uVar23 + uVar21;
                      uVar21 = (ulong)((int)uVar21 + 1);
                      param_7[uVar4] =
                           param_7[uVar4] + (float)local_90[lVar13] * (float)(&DAT_03aa03f0)[uVar3];
                    }
                    uVar16 = uVar16 * 2;
                    uVar3 = uVar3 + 1;
                    if (uVar20 < uVar16) break;
                    uVar18 = uVar16 & uVar20;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 != local_98);
              }
              else {
                uVar9 = 0;
                do {
                  puVar17 = local_90;
                  pfVar19 = param_7 + uVar8 * (int)uVar9;
                  memset(pfVar19,0,(ulong)(uVar3 << 2));
                  uVar21 = 0;
                  uVar16 = 0;
                  uVar4 = 1;
                  uVar18 = uVar20 & 1;
                  while( true ) {
                    if (uVar18 != 0) {
                      lVar13 = uVar9 * uVar23 + uVar21;
                      uVar21 = (ulong)((int)uVar21 + 1);
                      *pfVar19 = *pfVar19 + (float)puVar17[lVar13] * (float)(&DAT_03aa03f0)[uVar16];
                    }
                    uVar4 = uVar4 * 2;
                    uVar16 = uVar16 + 1;
                    if (uVar20 < uVar4) break;
                    uVar18 = uVar4 & uVar20;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 != local_98);
              }
            }
            else if (uVar16 == 7) {
              uVar23 = (ulong)((uVar18 & 0x3f) + 3) & 0x7c;
              uVar8 = uVar3 + 3 & 0x1fc;
              if ((local_a8 & 0xff) == 0) {
                uVar9 = 0;
                do {
                  uVar3 = 0;
                  uVar21 = 0;
                  pfVar19 = param_7 + uVar8 * (int)uVar9;
                  uVar16 = 1;
                  uVar4 = uVar20 & 1;
                  while( true ) {
                    if (uVar4 != 0) {
                      uVar6 = (ulong)uVar3;
                      fVar25 = (float)local_90[uVar9 * uVar23 + uVar21];
                      uVar21 = (ulong)((int)uVar21 + 1);
                      fVar24 = (float)(&DAT_03aa04cc)[uVar6 * 3];
                      fVar26 = (float)(&DAT_03aa04d0)[uVar6 * 3];
                      *pfVar19 = *pfVar19 + fVar25 * (float)(&DAT_03aa04c8)[uVar6 * 3];
                      pfVar19[1] = pfVar19[1] + fVar25 * fVar24;
                      pfVar19[2] = pfVar19[2] + fVar25 * fVar26;
                    }
                    uVar16 = uVar16 * 2;
                    uVar3 = uVar3 + 1;
                    if (uVar20 < uVar16) break;
                    uVar4 = uVar16 & uVar20;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 != local_98);
              }
              else {
                uVar9 = 0;
                do {
                  puVar17 = local_90;
                  pfVar19 = param_7 + uVar8 * (int)uVar9;
                  memset(pfVar19,0,(ulong)(uVar3 << 2));
                  uVar16 = 0;
                  uVar21 = 0;
                  uVar4 = 1;
                  uVar18 = uVar20 & 1;
                  while( true ) {
                    if (uVar18 != 0) {
                      uVar6 = (ulong)uVar16;
                      fVar25 = (float)puVar17[uVar9 * uVar23 + uVar21];
                      uVar21 = (ulong)((int)uVar21 + 1);
                      fVar24 = (float)(&DAT_03aa04cc)[uVar6 * 3];
                      fVar26 = (float)(&DAT_03aa04d0)[uVar6 * 3];
                      *pfVar19 = *pfVar19 + fVar25 * (float)(&DAT_03aa04c8)[uVar6 * 3];
                      pfVar19[1] = pfVar19[1] + fVar25 * fVar24;
                      pfVar19[2] = pfVar19[2] + fVar25 * fVar26;
                    }
                    uVar4 = uVar4 * 2;
                    uVar16 = uVar16 + 1;
                    if (uVar20 < uVar4) break;
                    uVar18 = uVar4 & uVar20;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 != local_98);
              }
            }
            else if (uVar16 == 0x603) {
              uVar23 = (ulong)((uVar18 & 0x3f) + 3) & 0x7c;
              uVar8 = uVar3 + 3 & 0x1fc;
              if ((local_a8 & 0xff) == 0) {
                uVar9 = 0;
                do {
                  uVar21 = 0;
                  uVar3 = 0;
                  pfVar19 = param_7 + uVar8 * (int)uVar9;
                  uVar16 = 1;
                  uVar4 = uVar20 & 1;
                  while( true ) {
                    if (uVar4 != 0) {
                      uVar6 = (ulong)uVar3;
                      fVar25 = (float)local_90[uVar9 * uVar23 + uVar21];
                      uVar21 = (ulong)((int)uVar21 + 1);
                      fVar26 = (float)(&DAT_03aa05a4)[uVar6 * 4];
                      fVar24 = (float)(&DAT_03aa05a8)[uVar6 * 4];
                      fVar27 = (float)(&DAT_03aa05ac)[uVar6 * 4];
                      *pfVar19 = *pfVar19 + fVar25 * (float)(&DAT_03aa05a0)[uVar6 * 4];
                      pfVar19[1] = pfVar19[1] + fVar25 * fVar26;
                      pfVar19[2] = pfVar19[2] + fVar25 * fVar24;
                      pfVar19[3] = pfVar19[3] + fVar25 * fVar27;
                    }
                    uVar16 = uVar16 * 2;
                    uVar3 = uVar3 + 1;
                    if (uVar20 < uVar16) break;
                    uVar4 = uVar16 & uVar20;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 != local_98);
              }
              else {
                uVar9 = 0;
                do {
                  puVar17 = local_90;
                  pfVar19 = param_7 + uVar8 * (int)uVar9;
                  memset(pfVar19,0,(ulong)(uVar3 << 2));
                  uVar21 = 0;
                  uVar16 = 0;
                  uVar4 = 1;
                  uVar18 = uVar20 & 1;
                  while( true ) {
                    if (uVar18 != 0) {
                      uVar6 = (ulong)uVar16;
                      fVar25 = (float)puVar17[uVar9 * uVar23 + uVar21];
                      uVar21 = (ulong)((int)uVar21 + 1);
                      fVar26 = (float)(&DAT_03aa05a4)[uVar6 * 4];
                      fVar24 = (float)(&DAT_03aa05a8)[uVar6 * 4];
                      fVar27 = (float)(&DAT_03aa05ac)[uVar6 * 4];
                      *pfVar19 = *pfVar19 + fVar25 * (float)(&DAT_03aa05a0)[uVar6 * 4];
                      pfVar19[1] = pfVar19[1] + fVar25 * fVar26;
                      pfVar19[2] = pfVar19[2] + fVar25 * fVar24;
                      pfVar19[3] = pfVar19[3] + fVar25 * fVar27;
                    }
                    uVar4 = uVar4 * 2;
                    uVar16 = uVar16 + 1;
                    if (uVar20 < uVar4) break;
                    uVar18 = uVar4 & uVar20;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 != local_98);
              }
            }
          }
          else if (uVar16 == 0x607) {
            uVar23 = (ulong)((uVar18 & 0x3f) + 3) & 0x7c;
            uVar8 = uVar3 + 3 & 0x1fc;
            if ((local_a8 & 0xff) == 0) {
              uVar9 = 0;
              do {
                uVar21 = 0;
                uVar3 = 0;
                pfVar19 = param_7 + uVar8 * (int)uVar9;
                uVar16 = 1;
                uVar4 = uVar20 & 1;
                while( true ) {
                  if (uVar4 != 0) {
                    uVar6 = (ulong)uVar3;
                    fVar25 = (float)local_90[uVar9 * uVar23 + uVar21];
                    uVar21 = (ulong)((int)uVar21 + 1);
                    fVar26 = (float)(&DAT_03aa06c4)[uVar6 * 5];
                    fVar24 = (float)(&DAT_03aa06c8)[uVar6 * 5];
                    fVar27 = (float)(&DAT_03aa06cc)[uVar6 * 5];
                    *pfVar19 = *pfVar19 + fVar25 * (float)(&DAT_03aa06c0)[uVar6 * 5];
                    pfVar19[1] = pfVar19[1] + fVar25 * fVar26;
                    pfVar19[2] = pfVar19[2] + fVar25 * fVar24;
                    pfVar19[3] = pfVar19[3] + fVar25 * fVar27;
                    pfVar19[4] = pfVar19[4] + fVar25 * (float)(&DAT_03aa06d0)[uVar6 * 5];
                  }
                  uVar16 = uVar16 * 2;
                  uVar3 = uVar3 + 1;
                  if (uVar20 < uVar16) break;
                  uVar4 = uVar16 & uVar20;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 != local_98);
            }
            else {
              uVar9 = 0;
              do {
                puVar17 = local_90;
                pfVar19 = param_7 + uVar8 * (int)uVar9;
                memset(pfVar19,0,(ulong)(uVar3 << 2));
                uVar21 = 0;
                uVar16 = 0;
                uVar4 = 1;
                uVar18 = uVar20 & 1;
                while( true ) {
                  if (uVar18 != 0) {
                    uVar6 = (ulong)uVar16;
                    fVar25 = (float)puVar17[uVar9 * uVar23 + uVar21];
                    uVar21 = (ulong)((int)uVar21 + 1);
                    fVar24 = (float)(&DAT_03aa06c0)[uVar6 * 5];
                    fVar26 = (float)(&DAT_03aa06c8)[uVar6 * 5];
                    fVar27 = (float)(&DAT_03aa06cc)[uVar6 * 5];
                    pfVar19[1] = pfVar19[1] + fVar25 * (float)(&DAT_03aa06c4)[uVar6 * 5];
                    *pfVar19 = *pfVar19 + fVar25 * fVar24;
                    pfVar19[3] = pfVar19[3] + fVar25 * fVar27;
                    pfVar19[2] = pfVar19[2] + fVar25 * fVar26;
                    pfVar19[4] = pfVar19[4] + fVar25 * (float)(&DAT_03aa06d0)[uVar6 * 5];
                  }
                  uVar4 = uVar4 * 2;
                  uVar16 = uVar16 + 1;
                  if (uVar20 < uVar4) break;
                  uVar18 = uVar4 & uVar20;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 != local_98);
            }
          }
          else if (uVar16 == 0x633) {
            uVar23 = (ulong)((uVar18 & 0x3f) + 3) & 0x7c;
            uVar8 = uVar3 + 3 & 0x1fc;
            if ((local_a8 & 0xff) == 0) {
              uVar9 = 0;
              do {
                uVar21 = 0;
                uVar3 = 0;
                pfVar19 = param_7 + uVar8 * (int)uVar9;
                uVar16 = 1;
                uVar4 = uVar20 & 1;
                while( true ) {
                  if (uVar4 != 0) {
                    uVar6 = (ulong)uVar3;
                    fVar25 = (float)local_90[uVar9 * uVar23 + uVar21];
                    uVar21 = (ulong)((int)uVar21 + 1);
                    fVar27 = (float)(&DAT_03aa082c)[uVar6 * 6];
                    fVar24 = (float)(&DAT_03aa0830)[uVar6 * 6];
                    fVar28 = (float)(&DAT_03aa0834)[uVar6 * 6];
                    fVar26 = (float)(&DAT_03aa0838)[uVar6 * 6];
                    fVar29 = (float)(&DAT_03aa083c)[uVar6 * 6];
                    *pfVar19 = *pfVar19 + fVar25 * (float)(&DAT_03aa0828)[uVar6 * 6];
                    pfVar19[1] = pfVar19[1] + fVar25 * fVar27;
                    pfVar19[2] = pfVar19[2] + fVar25 * fVar24;
                    pfVar19[3] = pfVar19[3] + fVar25 * fVar28;
                    pfVar19[4] = pfVar19[4] + fVar25 * fVar26;
                    pfVar19[5] = pfVar19[5] + fVar25 * fVar29;
                  }
                  uVar16 = uVar16 * 2;
                  uVar3 = uVar3 + 1;
                  if (uVar20 < uVar16) break;
                  uVar4 = uVar16 & uVar20;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 != local_98);
            }
            else {
              uVar9 = 0;
              do {
                puVar17 = local_90;
                pfVar19 = param_7 + uVar8 * (int)uVar9;
                memset(pfVar19,0,(ulong)(uVar3 << 2));
                uVar21 = 0;
                uVar16 = 0;
                uVar4 = 1;
                uVar18 = uVar20 & 1;
                while( true ) {
                  if (uVar18 != 0) {
                    uVar6 = (ulong)uVar16;
                    fVar25 = (float)puVar17[uVar9 * uVar23 + uVar21];
                    uVar21 = (ulong)((int)uVar21 + 1);
                    fVar27 = (float)(&DAT_03aa082c)[uVar6 * 6];
                    fVar24 = (float)(&DAT_03aa0830)[uVar6 * 6];
                    fVar28 = (float)(&DAT_03aa0834)[uVar6 * 6];
                    fVar26 = (float)(&DAT_03aa0838)[uVar6 * 6];
                    fVar29 = (float)(&DAT_03aa083c)[uVar6 * 6];
                    *pfVar19 = *pfVar19 + fVar25 * (float)(&DAT_03aa0828)[uVar6 * 6];
                    pfVar19[1] = pfVar19[1] + fVar25 * fVar27;
                    pfVar19[2] = pfVar19[2] + fVar25 * fVar24;
                    pfVar19[3] = pfVar19[3] + fVar25 * fVar28;
                    pfVar19[4] = pfVar19[4] + fVar25 * fVar26;
                    pfVar19[5] = pfVar19[5] + fVar25 * fVar29;
                  }
                  uVar4 = uVar4 * 2;
                  uVar16 = uVar16 + 1;
                  if (uVar20 < uVar4) break;
                  uVar18 = uVar4 & uVar20;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 != local_98);
            }
          }
          else if (uVar16 == 0x637) {
            uVar23 = (ulong)((uVar18 & 0x3f) + 3) & 0x7c;
            uVar8 = uVar3 + 3 & 0x1fc;
            if ((local_a8 & 0xff) == 0) {
              uVar9 = 0;
              do {
                uVar21 = 0;
                uVar3 = 0;
                pfVar19 = param_7 + uVar8 * (int)uVar9;
                uVar16 = 1;
                uVar4 = uVar20 & 1;
                while( true ) {
                  if (uVar4 != 0) {
                    uVar6 = (ulong)uVar3;
                    fVar25 = (float)local_90[uVar9 * uVar23 + uVar21];
                    uVar21 = (ulong)((int)uVar21 + 1);
                    fVar24 = (float)(&DAT_03aa09d8)[uVar6 * 7];
                    fVar26 = (float)(&DAT_03aa09e0)[uVar6 * 7];
                    fVar28 = (float)(&DAT_03aa09e4)[uVar6 * 7];
                    fVar27 = (float)(&DAT_03aa09e8)[uVar6 * 7];
                    fVar29 = (float)(&DAT_03aa09ec)[uVar6 * 7];
                    pfVar19[1] = pfVar19[1] + fVar25 * (float)(&DAT_03aa09dc)[uVar6 * 7];
                    *pfVar19 = *pfVar19 + fVar25 * fVar24;
                    pfVar19[3] = pfVar19[3] + fVar25 * fVar28;
                    pfVar19[2] = pfVar19[2] + fVar25 * fVar26;
                    pfVar19[5] = pfVar19[5] + fVar25 * fVar29;
                    pfVar19[4] = pfVar19[4] + fVar25 * fVar27;
                    pfVar19[6] = pfVar19[6] + fVar25 * (float)(&DAT_03aa09f0)[uVar6 * 7];
                  }
                  uVar16 = uVar16 * 2;
                  uVar3 = uVar3 + 1;
                  if (uVar20 < uVar16) break;
                  uVar4 = uVar16 & uVar20;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 != local_98);
            }
            else {
              uVar9 = 0;
              do {
                puVar17 = local_90;
                pfVar19 = param_7 + uVar8 * (int)uVar9;
                memset(pfVar19,0,(ulong)(uVar3 << 2));
                uVar21 = 0;
                uVar16 = 0;
                uVar4 = 1;
                uVar18 = uVar20 & 1;
                while( true ) {
                  if (uVar18 != 0) {
                    uVar6 = (ulong)uVar16;
                    fVar25 = (float)puVar17[uVar9 * uVar23 + uVar21];
                    uVar21 = (ulong)((int)uVar21 + 1);
                    fVar27 = (float)(&DAT_03aa09dc)[uVar6 * 7];
                    fVar24 = (float)(&DAT_03aa09e0)[uVar6 * 7];
                    fVar28 = (float)(&DAT_03aa09e4)[uVar6 * 7];
                    fVar26 = (float)(&DAT_03aa09e8)[uVar6 * 7];
                    fVar29 = (float)(&DAT_03aa09ec)[uVar6 * 7];
                    *pfVar19 = *pfVar19 + fVar25 * (float)(&DAT_03aa09d8)[uVar6 * 7];
                    pfVar19[1] = pfVar19[1] + fVar25 * fVar27;
                    pfVar19[2] = pfVar19[2] + fVar25 * fVar24;
                    pfVar19[3] = pfVar19[3] + fVar25 * fVar28;
                    pfVar19[4] = pfVar19[4] + fVar25 * fVar26;
                    pfVar19[5] = pfVar19[5] + fVar25 * fVar29;
                    pfVar19[6] = pfVar19[6] + fVar25 * (float)(&DAT_03aa09f0)[uVar6 * 7];
                  }
                  uVar4 = uVar4 * 2;
                  uVar16 = uVar16 + 1;
                  if (uVar20 < uVar4) break;
                  uVar18 = uVar4 & uVar20;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 != local_98);
            }
          }
LAB_02efe74c:
          uVar3 = (uint)local_a0;
          goto joined_r0x02efe718;
        }
      }
      else {
        uVar8 = uVar22 >> 0xc & 7 | 0x600;
        if (uVar8 != 0) goto LAB_02efe7b0;
      }
      uVar21 = param_6 & 0xff;
      iVar15 = (int)uVar21;
      uVar3 = iVar15 + 3U & 0x1fc;
      iVar14 = uVar3 * (uVar22 & 0xff);
      if (iVar14 != 0) {
        memset(param_7,0,(ulong)(uint)(iVar14 * 4));
      }
      if (((uint)local_a0 >> 0xf & 1) == 0) {
        return;
      }
      param_7 = param_7 + uVar3 * ((uVar22 & 0xff) - 1);
      if (iVar15 != 0) {
        memset(param_7,0,(ulong)(uint)(iVar15 << 2));
      }
      uVar3 = (uint)local_a8;
    }
  }
  if ((uVar3 >> 0xf & 1) == 0) {
    return;
  }
  param_7 = param_7 + uVar21;
LAB_02efe6a0:
  param_7[-1] = 1.0;
  return;
}


