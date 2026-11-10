/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02def8d0; name: FUN_02def8d0
 */


char FUN_02def8d0(long *param_1,byte *param_2,uint param_3,long *param_4,long param_5,long *param_6,
                 uint param_7)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  ulong uVar30;
  long *plVar31;
  ulong uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  ulong uVar37;
  size_t sVar38;
  undefined4 *__s;
  long lVar39;
  void *pvVar40;
  ulong *puVar41;
  char cVar42;
  ushort *puVar43;
  uint unaff_w27;
  uint uVar44;
  int iVar45;
  uint local_160 [2];
  ulong local_158;
  undefined8 local_150;
  long *local_148;
  ulong local_140;
  size_t local_138;
  int local_130;
  uint local_12c;
  int local_128;
  int local_124;
  void *local_120;
  uint local_118;
  int local_114;
  uint local_110;
  int local_10c;
  ulong local_108;
  long local_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  uVar24 = 1 << (ulong)(param_7 & 0x1f);
  *(short *)(param_1 + 3) = (short)uVar24 + -1;
  uVar5 = *(ushort *)(param_5 + 10);
  uVar16 = (uVar24 + (uint)uVar5 * 2) - 2;
  __s = (undefined4 *)
        ((long)local_160 -
        ((-(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar16 << 2) + 0xf &
        0xfffffffffffffff0));
  sVar38 = (size_t)(int)uVar24;
  pvVar40 = (void *)((long)__s - (sVar38 + 0xf & 0xfffffffffffffff0));
  uVar6 = *(ushort *)(param_5 + 8);
  local_148 = param_4;
  local_138 = sVar38;
  local_120 = pvVar40;
  local_f8 = param_1;
  if (1 < (ulong)uVar6) {
    memset(__s,0,sVar38 << 2);
    memset(pvVar40,0,sVar38);
    local_124 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_100 = CONCAT44(local_100._4_4_,-3 - param_7);
    local_108 = CONCAT44(local_108._4_4_,param_7 + 3);
    local_90 = 0;
    uStack_88 = 0;
    uVar25 = 0;
    uVar16 = 0;
    local_10c = -4 - param_7;
    local_110 = param_7 + 4;
    uVar20 = (ulong)&local_f0 | 4;
    local_114 = -5 - param_7;
    local_118 = param_7 + 5;
    local_a0 = 0;
    uStack_98 = 0;
    local_70 = 0;
    local_128 = -6 - param_7;
    local_12c = param_7 + 6;
    local_130 = -7 - param_7;
    local_140 = (ulong)uVar24;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    bVar4 = *param_2;
    uVar27 = uVar24;
    uVar24 = 0;
    pvVar40 = local_120;
    plVar31 = local_f8;
    do {
      uVar19 = (ulong)bVar4;
      uVar29 = uVar24;
      local_120 = pvVar40;
      local_f8 = plVar31;
      if (uVar19 != 0) {
        puVar1 = (uint *)((long)&local_f0 + uVar19 * 4);
        uVar15 = *puVar1;
        if ((uVar16 != 0) && (uVar15 == 0)) {
          uVar27 = 0xffffffff;
          goto LAB_02df042c;
        }
        uVar18 = (uint)bVar4;
        uVar44 = uVar18 - param_7;
        uVar29 = uVar18;
        if ((int)param_7 <= (int)uVar18) {
          uVar29 = param_7;
        }
        if (uVar44 == 0 || (int)uVar18 < (int)param_7) {
          uVar44 = 0;
        }
        if ((int)uVar29 < 1) {
          uVar44 = 0;
        }
        else {
          uVar23 = uVar15 >> (ulong)(uVar44 & 0x1f);
          uVar44 = (uVar23 & 1) << (ulong)(uVar29 - 1 & 0x1f);
          if (1 < (int)uVar29) {
            uVar44 = (uVar23 >> 1 & 1) << (ulong)(uVar29 - 2 & 0x1f) | uVar44;
            if (2 < (int)uVar29) {
              uVar44 = (uVar23 >> 2 & 1) << (ulong)(uVar29 - 3 & 0x1f) | uVar44;
              if (3 < (int)uVar29) {
                uVar44 = (uVar23 >> 3 & 1) << (ulong)(uVar29 - 4 & 0x1f) | uVar44;
                uVar11 = uVar29 - 5;
                if (4 < (int)uVar29) {
                  uVar33 = 4;
                  do {
                    uVar8 = uVar33 & 0x1f;
                    uVar33 = uVar33 + 1;
                    uVar36 = uVar11 & 0x1f;
                    uVar11 = uVar11 - 1;
                    uVar44 = (uVar23 >> (ulong)uVar8 & 1) << (ulong)uVar36 | uVar44;
                  } while ((int)uVar33 < (int)uVar29);
                }
              }
            }
          }
        }
        uVar12 = (ulong)uVar44;
        uVar23 = (uint)uVar25;
        if (__s[uVar44] == 0) {
          if ((int)uVar18 <= (int)param_7) {
            local_124 = local_124 + 1;
            iVar17 = *(int *)(param_5 + 0x24);
            if (iVar17 == 1) {
              bVar3 = *(byte *)((long)plVar31 + 0x1a);
              if (*(int *)(param_5 + 0x20) == 1) {
                if (bVar3 == 0) goto LAB_02df0390;
                iVar17 = 0;
                if (param_3 != 0) {
                  iVar17 = (int)uVar23 / (int)param_3;
                }
                lVar14 = *(long *)(param_5 + 0x18);
                uVar11 = (uint)bVar3;
                uVar5 = *(ushort *)(lVar14 + (ulong)(uVar23 - iVar17 * param_3) * 2);
                uVar29 = (uint)uVar5;
                if (uVar11 != 1) {
                  bVar3 = *(byte *)(plVar31[2] + 0x50);
                  iVar10 = 0;
                  if (param_3 != 0) {
                    iVar10 = iVar17 / (int)param_3;
                  }
                  uVar29 = (uint)*(ushort *)(lVar14 + (ulong)(iVar17 - iVar10 * param_3) * 2) <<
                           (ulong)(bVar3 & 0x1f) | (uint)uVar5;
                  if (uVar11 != 2) {
                    iVar17 = 0;
                    if (param_3 != 0) {
                      iVar17 = iVar10 / (int)param_3;
                    }
                    iVar45 = uVar11 - 3;
                    uVar29 = (uint)*(ushort *)(lVar14 + (ulong)(iVar10 - iVar17 * param_3) * 2) <<
                             (ulong)((bVar3 & 0xf) << 1) | uVar29;
                    if (iVar45 != 0) {
                      uVar11 = (uint)bVar3 * 3;
                      do {
                        iVar17 = 0;
                        if (param_3 != 0) {
                          iVar17 = iVar10 / (int)param_3;
                        }
                        iVar45 = iVar45 + -1;
                        iVar10 = 0;
                        if (param_3 != 0) {
                          iVar10 = iVar17 / (int)param_3;
                        }
                        uVar33 = uVar11 & 0x1f;
                        uVar11 = uVar11 + bVar3;
                        uVar29 = (uint)*(ushort *)(lVar14 + (ulong)(iVar17 - iVar10 * param_3) * 2)
                                 << (ulong)uVar33 | uVar29;
                        iVar10 = iVar17;
                      } while (iVar45 != 0);
                    }
                  }
                }
              }
              else if (bVar3 == 0) {
LAB_02df0390:
                uVar29 = 0;
              }
              else {
                uVar11 = 0;
                uVar29 = 0;
                bVar3 = *(byte *)(plVar31[2] + 0x50);
                puVar41 = (ulong *)*local_148;
                uVar30 = (ulong)*(byte *)(local_148 + 1);
                iVar17 = *(int *)((long)local_148 + 0xc);
                do {
                  uVar37 = *puVar41;
                  uVar33 = (uint)bVar3 + (int)uVar30;
                  uVar32 = uVar30 & 0x3f;
                  uVar8 = uVar33 >> 5;
                  uVar33 = uVar33 & 0x1f;
                  uVar30 = (ulong)uVar33;
                  uVar36 = (&DAT_0429f280)[bVar3];
                  puVar41 = (ulong *)((long)puVar41 + (ulong)uVar8 * 4);
                  iVar17 = iVar17 - uVar8;
                  *(char *)(local_148 + 1) = (char)uVar33;
                  *(int *)((long)local_148 + 0xc) = iVar17;
                  *local_148 = (long)puVar41;
                  bVar3 = *(byte *)(plVar31[2] + 0x50);
                  uVar33 = uVar11 * bVar3;
                  uVar11 = uVar11 + 1;
                  uVar29 = (uVar36 & (uint)(uVar37 >> uVar32)) << (ulong)(uVar33 & 0x1f) | uVar29;
                } while (uVar11 < *(byte *)((long)plVar31 + 0x1a));
              }
            }
            else {
              uVar29 = uVar23;
              if ((iVar17 != 0) && (uVar29 = uVar16, iVar17 != 3)) {
                if (iVar17 == 2) {
                  bVar3 = *(byte *)((long)plVar31 + 0x1a);
                  if (bVar3 != 0) {
                    iVar17 = *(int *)(param_5 + 0x10);
                    local_150._4_4_ = (undefined4)((ulong)local_150 >> 0x20);
                    local_150 = (ulong *)(CONCAT44(local_150._4_4_,(uint)bVar3) & 0xffffffff00000001
                                         );
                    if (bVar3 == 1) {
                      iVar10 = 0;
                      uVar29 = 0;
                      uVar36 = uVar23;
                    }
                    else {
                      uVar11 = 0;
                      iVar10 = 0;
                      uVar29 = 0;
                      uVar30 = uVar25 & 0xffffffff;
                      do {
                        iVar45 = 0;
                        iVar35 = (int)uVar30;
                        if (param_3 != 0) {
                          iVar45 = iVar35 / (int)param_3;
                        }
                        iVar10 = iVar10 + 2;
                        uVar33 = uVar11 & 0x1f;
                        uVar36 = 0;
                        if (param_3 != 0) {
                          uVar36 = iVar45 / (int)param_3;
                        }
                        uVar30 = (ulong)uVar36;
                        uVar8 = iVar17 + uVar11;
                        uVar11 = uVar11 + iVar17 * 2;
                        uVar29 = iVar45 - uVar36 * param_3 << (ulong)(uVar8 & 0x1f) |
                                 iVar35 - iVar45 * param_3 << (ulong)uVar33 | uVar29;
                      } while ((uint)bVar3 - (int)local_150 != iVar10);
                    }
                    if ((int)local_150 != 0) {
                      iVar45 = 0;
                      if (param_3 != 0) {
                        iVar45 = (int)uVar36 / (int)param_3;
                      }
                      uVar29 = uVar36 - iVar45 * param_3 << (ulong)(iVar10 * iVar17 & 0x1f) | uVar29
                      ;
                    }
                    goto LAB_02deff6c;
                  }
                }
                goto LAB_02df0390;
              }
            }
LAB_02deff6c:
            uVar11 = uVar29;
            if (uVar29 <= uVar24) {
              uVar11 = uVar24;
            }
            uVar29 = uVar29 | 0x80000000;
            __s[uVar12] = uVar29;
            *(byte *)((long)pvVar40 + uVar12) = bVar4;
            if (((int)uVar18 < (int)param_7) && (param_7 - uVar18 != 0x1f)) {
              iVar17 = 1 << (ulong)(param_7 - uVar18 & 0x1f);
              __s[(int)uVar44] = uVar29;
              *(byte *)((long)pvVar40 + (long)(int)uVar44) = bVar4;
              if (1 < iVar17) {
                uVar24 = 1 << (ulong)(uVar18 & 0x1f) | uVar44;
                __s[(int)uVar24] = uVar29;
                *(byte *)((long)pvVar40 + (long)(int)uVar24) = bVar4;
                if (2 < iVar17) {
                  lVar14 = (long)(int)(2 << (ulong)(uVar18 & 0x1f) | uVar44);
                  __s[lVar14] = uVar29;
                  *(byte *)((long)pvVar40 + lVar14) = bVar4;
                  if (3 < iVar17) {
                    iVar10 = 3;
                    do {
                      uVar24 = iVar10 << (ulong)(uVar18 & 0x1f);
                      iVar10 = iVar10 + 1;
                      lVar14 = (long)(int)(uVar24 | uVar44);
                      __s[lVar14] = uVar29;
                      *(byte *)((long)pvVar40 + lVar14) = bVar4;
                    } while (iVar10 < iVar17);
                  }
                }
              }
            }
            uVar24 = uVar11;
            uVar16 = uVar16 + 1;
            goto LAB_02defb30;
          }
          __s[uVar12] = uVar27;
          *(char *)((long)pvVar40 + uVar12) = (char)param_7;
          uVar29 = uVar27;
LAB_02defb40:
          puVar13 = __s + uVar29;
          uVar44 = uVar18 - 1;
          uVar12 = (ulong)uVar29;
          uVar11 = param_7;
          if ((int)param_7 < (int)uVar44) {
            uVar30 = (ulong)(uVar15 >> ((ulong)(~param_7 + uVar18) & 0x3f)) & 1;
            if ((long)uVar12 < (long)(int)uVar27) {
              uVar29 = puVar13[uVar30];
              if (puVar13[uVar30] == 0) {
                puVar13[uVar30] = uVar27;
                uVar29 = uVar27;
              }
            }
            else {
              uVar27 = uVar27 + 2;
              *puVar13 = uVar27;
              puVar13[1] = 0;
              uVar29 = puVar13[uVar30];
            }
            puVar13 = __s + uVar29;
            if (param_7 + 1 != uVar44) {
              uVar12 = (ulong)(uVar15 >> ((ulong)((-2 - param_7) + uVar18) & 0x3f)) & 1;
              if ((long)(ulong)uVar29 < (long)(int)uVar27) {
                uVar29 = puVar13[uVar12];
                if (puVar13[uVar12] == 0) {
                  puVar13[uVar12] = uVar27;
                  uVar29 = uVar27;
                }
              }
              else {
                uVar27 = uVar27 + 2;
                *puVar13 = uVar27;
                puVar13[1] = 0;
                uVar29 = puVar13[uVar12];
              }
              puVar13 = __s + uVar29;
              if (param_7 + 2 != uVar44) {
                uVar12 = (ulong)(uVar15 >> ((ulong)((int)local_100 + uVar18) & 0x3f)) & 1;
                if ((long)(ulong)uVar29 < (long)(int)uVar27) {
                  uVar29 = puVar13[uVar12];
                  if (puVar13[uVar12] == 0) {
                    puVar13[uVar12] = uVar27;
                    uVar29 = uVar27;
                  }
                }
                else {
                  uVar27 = uVar27 + 2;
                  *puVar13 = uVar27;
                  puVar13[1] = 0;
                  uVar29 = puVar13[uVar12];
                }
                puVar13 = __s + uVar29;
                if ((uint)local_108 != uVar44) {
                  uVar12 = (ulong)(uVar15 >> ((ulong)(local_10c + uVar18) & 0x3f)) & 1;
                  if ((long)(ulong)uVar29 < (long)(int)uVar27) {
                    uVar29 = puVar13[uVar12];
                    if (puVar13[uVar12] == 0) {
                      puVar13[uVar12] = uVar27;
                      uVar29 = uVar27;
                    }
                  }
                  else {
                    uVar27 = uVar27 + 2;
                    *puVar13 = uVar27;
                    puVar13[1] = 0;
                    uVar29 = puVar13[uVar12];
                  }
                  puVar13 = __s + uVar29;
                  if (local_110 != uVar44) {
                    uVar12 = (ulong)(uVar15 >> ((ulong)(local_114 + uVar18) & 0x3f)) & 1;
                    if ((long)(ulong)uVar29 < (long)(int)uVar27) {
                      uVar29 = puVar13[uVar12];
                      if (puVar13[uVar12] == 0) {
                        puVar13[uVar12] = uVar27;
                        uVar29 = uVar27;
                      }
                    }
                    else {
                      uVar27 = uVar27 + 2;
                      *puVar13 = uVar27;
                      puVar13[1] = 0;
                      uVar29 = puVar13[uVar12];
                    }
                    puVar13 = __s + uVar29;
                    if (local_118 != uVar44) {
                      uVar12 = (ulong)(uVar15 >> ((ulong)(local_128 + uVar18) & 0x3f)) & 1;
                      if ((long)(ulong)uVar29 < (long)(int)uVar27) {
                        uVar29 = puVar13[uVar12];
                        if (puVar13[uVar12] == 0) {
                          puVar13[uVar12] = uVar27;
                          uVar29 = uVar27;
                        }
                      }
                      else {
                        uVar27 = uVar27 + 2;
                        *puVar13 = uVar27;
                        puVar13[1] = 0;
                        uVar29 = puVar13[uVar12];
                      }
                      puVar13 = __s + uVar29;
                      if (local_12c != uVar44) {
                        uVar11 = local_130 + uVar18;
                        do {
                          uVar12 = (ulong)(uVar15 >> ((ulong)uVar11 & 0x3f)) & 1;
                          if ((long)(ulong)uVar29 < (long)(int)uVar27) {
                            uVar29 = puVar13[uVar12];
                            if (puVar13[uVar12] == 0) {
                              puVar13[uVar12] = uVar27;
                              uVar29 = uVar27;
                            }
                          }
                          else {
                            uVar27 = uVar27 + 2;
                            *puVar13 = uVar27;
                            puVar13[1] = 0;
                            uVar29 = puVar13[uVar12];
                          }
                          puVar13 = __s + uVar29;
                          uVar11 = uVar11 - 1;
                        } while (uVar11 != 0);
                      }
                    }
                  }
                }
              }
            }
            uVar12 = (ulong)uVar29;
            uVar11 = uVar44;
          }
          iVar17 = *(int *)(param_5 + 0x24);
          if (iVar17 == 1) {
            bVar4 = *(byte *)((long)plVar31 + 0x1a);
            if (*(int *)(param_5 + 0x20) == 1) {
              if (bVar4 == 0) goto LAB_02df0208;
              iVar17 = 0;
              if (param_3 != 0) {
                iVar17 = (int)uVar23 / (int)param_3;
              }
              lVar14 = *(long *)(param_5 + 0x18);
              uVar44 = (uint)bVar4;
              uVar5 = *(ushort *)(lVar14 + (ulong)(uVar23 - iVar17 * param_3) * 2);
              uVar29 = (uint)uVar5;
              if (uVar44 != 1) {
                iVar10 = 0;
                if (param_3 != 0) {
                  iVar10 = iVar17 / (int)param_3;
                }
                bVar4 = *(byte *)(plVar31[2] + 0x50);
                uVar29 = (uint)*(ushort *)(lVar14 + (ulong)(iVar17 - iVar10 * param_3) * 2) <<
                         (ulong)(bVar4 & 0x1f) | (uint)uVar5;
                if (uVar44 != 2) {
                  iVar17 = 0;
                  if (param_3 != 0) {
                    iVar17 = iVar10 / (int)param_3;
                  }
                  iVar45 = uVar44 - 3;
                  uVar29 = (uint)*(ushort *)(lVar14 + (ulong)(iVar10 - iVar17 * param_3) * 2) <<
                           (ulong)((bVar4 & 0xf) << 1) | uVar29;
                  if (iVar45 != 0) {
                    uVar44 = (uint)bVar4 * 3;
                    do {
                      iVar17 = 0;
                      if (param_3 != 0) {
                        iVar17 = iVar10 / (int)param_3;
                      }
                      iVar45 = iVar45 + -1;
                      iVar10 = 0;
                      if (param_3 != 0) {
                        iVar10 = iVar17 / (int)param_3;
                      }
                      uVar23 = uVar44 & 0x1f;
                      uVar44 = uVar44 + bVar4;
                      uVar29 = (uint)*(ushort *)(lVar14 + (ulong)(iVar17 - iVar10 * param_3) * 2) <<
                               (ulong)uVar23 | uVar29;
                      iVar10 = iVar17;
                    } while (iVar45 != 0);
                  }
                }
              }
            }
            else if (bVar4 == 0) {
LAB_02df0208:
              uVar29 = 0;
            }
            else {
              local_160[0] = 0;
              bVar4 = *(byte *)(local_f8[2] + 0x50);
              local_150 = (ulong *)*local_148;
              local_158 = (ulong)*(byte *)(local_148 + 1);
              local_160[1] = *(uint *)((long)local_148 + 0xc);
              uVar29 = 0;
              do {
                uVar44 = (uint)bVar4 + (int)local_158;
                uVar32 = *local_150;
                uVar30 = local_158 & 0x3f;
                uVar33 = uVar44 >> 5;
                uVar44 = uVar44 & 0x1f;
                local_150 = (ulong *)((long)local_150 + (ulong)uVar33 * 4);
                uVar23 = (&DAT_0429f280)[bVar4];
                local_160[1] = local_160[1] - uVar33;
                local_158 = (ulong)uVar44;
                *(char *)(local_148 + 1) = (char)uVar44;
                *(uint *)((long)local_148 + 0xc) = local_160[1];
                *local_148 = (long)local_150;
                bVar4 = *(byte *)(local_f8[2] + 0x50);
                uVar44 = local_160[0] + 1;
                uVar29 = (uVar23 & (uint)(uVar32 >> uVar30)) << (ulong)(local_160[0] * bVar4 & 0x1f)
                         | uVar29;
                local_160[0] = uVar44;
              } while (uVar44 < *(byte *)((long)local_f8 + 0x1a));
            }
          }
          else if (iVar17 == 0) {
            uVar29 = uVar23;
          }
          else {
            uVar29 = uVar16;
            if (iVar17 != 3) {
              if (iVar17 == 2) {
                bVar4 = *(byte *)((long)local_f8 + 0x1a);
                if (bVar4 != 0) {
                  iVar17 = *(int *)(param_5 + 0x10);
                  local_160[1] = bVar4 & 1;
                  if (bVar4 == 1) {
                    iVar10 = 0;
                    uVar29 = 0;
                  }
                  else {
                    local_150 = (ulong *)CONCAT44(local_150._4_4_,iVar17 * 2);
                    uVar44 = 0;
                    iVar10 = 0;
                    uVar29 = 0;
                    uVar30 = uVar25 & 0xffffffff;
                    iVar45 = bVar4 - local_160[1];
                    local_158 = CONCAT44(local_158._4_4_,iVar45);
                    do {
                      iVar35 = 0;
                      iVar34 = (int)uVar30;
                      if (param_3 != 0) {
                        iVar35 = iVar34 / (int)param_3;
                      }
                      iVar10 = iVar10 + 2;
                      uVar23 = 0;
                      if (param_3 != 0) {
                        uVar23 = iVar35 / (int)param_3;
                      }
                      uVar30 = (ulong)uVar23;
                      uVar29 = iVar35 - uVar23 * param_3 << (ulong)(iVar17 + uVar44 & 0x1f) |
                               iVar34 - iVar35 * param_3 << (ulong)(uVar44 & 0x1f) | uVar29;
                      uVar44 = uVar44 + iVar17 * 2;
                    } while (iVar45 != iVar10);
                  }
                  if ((bVar4 & 1) != 0) {
                    iVar45 = 0;
                    if (param_3 != 0) {
                      iVar45 = (int)uVar23 / (int)param_3;
                    }
                    uVar29 = uVar23 - iVar45 * param_3 << (ulong)(iVar10 * iVar17 & 0x1f) | uVar29;
                  }
                  goto LAB_02defc90;
                }
              }
              goto LAB_02df0208;
            }
          }
LAB_02defc90:
          uVar16 = uVar16 + 1;
          uVar44 = uVar29 | 0x80000000;
          if (uVar29 <= uVar24) {
            uVar29 = uVar24;
          }
          if ((long)uVar12 < (long)(int)uVar27) {
            uVar12 = (ulong)(uVar15 >> ((ulong)(~uVar11 + uVar18) & 0x3f)) & 1;
          }
          else {
            uVar27 = uVar27 + 2;
            *puVar13 = uVar44;
            uVar12 = 1;
            uVar44 = 0;
          }
          puVar13[uVar12] = uVar44;
        }
        else {
LAB_02defb30:
          uVar29 = uVar24;
          if ((int)param_7 < (int)uVar18) {
            plVar31 = local_f8;
            uVar29 = __s[uVar12];
            goto LAB_02defb40;
          }
        }
        uVar12 = uVar19;
        puVar13 = puVar1;
        if ((uVar15 & 1) == 0) {
          uVar24 = uVar15;
          do {
            uVar12 = uVar12 - 1;
            *puVar13 = uVar24 + 1;
            if ((long)uVar12 < 1) goto LAB_02defd1c;
            puVar13 = puVar13 + -1;
            uVar24 = *puVar13;
          } while ((uVar24 & 1) == 0);
        }
        *puVar13 = *(int *)((long)&local_f0 + ((long)((uVar12 << 0x20) + -0x100000000) >> 0x1e)) <<
                   1;
LAB_02defd1c:
        if (uVar18 < 0x20) {
          uVar24 = *puVar1;
          do {
            uVar44 = *(uint *)(uVar20 + uVar19 * 4);
            if (uVar15 != uVar44 >> 1) break;
            uVar24 = uVar24 << 1;
            *(uint *)(uVar20 + uVar19 * 4) = uVar24;
            uVar19 = uVar19 + 1;
            uVar15 = uVar44;
          } while (uVar19 != 0x20);
        }
      }
      uVar25 = uVar25 + 1;
      if (uVar25 == uVar6) goto LAB_02df0410;
      bVar4 = param_2[uVar25];
      uVar24 = uVar29;
      pvVar40 = local_120;
      plVar31 = local_f8;
    } while( true );
  }
  iVar17 = 0;
  uVar27 = 0;
  *__s = 0x80000000;
LAB_02df0444:
  uVar16 = 3 << (ulong)(param_7 & 0x1f);
  uVar25 = (ulong)uVar16;
  *(char *)((long)param_1 + 0x1b) = (char)unaff_w27;
  iVar10 = 0;
  if ((unaff_w27 & 0xff) != 2) {
    iVar10 = -((uint)uVar5 - iVar17);
  }
  lVar14 = (*DAT_0442d138)(5,(uVar16 - uVar24) + uVar27 + ((uint)uVar5 - iVar17) * unaff_w27 +
                             iVar10);
  *local_f8 = lVar14;
  if (lVar14 == 0) {
    cVar42 = '\x02';
  }
  else {
    lVar21 = lVar14 + local_138 * 2;
    local_f8[1] = lVar21;
    if (param_7 != 0x1f) {
      lVar39 = 0;
      sVar38 = local_138;
      pvVar40 = local_120;
      plVar31 = local_f8;
      do {
        *(undefined1 *)(lVar21 + lVar39) = *(undefined1 *)((long)pvVar40 + lVar39);
        iVar17 = __s[lVar39];
        if (iVar17 < 0) {
          cVar42 = '\0';
          *(ushort *)(lVar14 + lVar39 * 2) = (ushort)iVar17 | 0x8000;
        }
        else {
          uVar24 = (uint)uVar25;
          if ((int)uVar24 < 0) {
            uVar24 = uVar24 + 1;
          }
          *(short *)(lVar14 + lVar39 * 2) = (short)(uVar24 >> 1);
          lVar21 = *plVar31;
          if ((int)param_6[1] < 2) {
            local_100 = lVar14;
            puVar43 = (ushort *)(*DAT_0442d138)(5,0x100);
            if (puVar43 != (ushort *)0x0) {
              if (*param_6 != 0) {
                (*DAT_0442d150)(5);
              }
              *(undefined4 *)(param_6 + 1) = 0x100;
              *param_6 = (long)puVar43;
              lVar14 = local_100;
              pvVar40 = local_120;
              plVar31 = local_f8;
              goto LAB_02df0514;
            }
LAB_02df0ab4:
            cVar42 = '\x02';
            plVar31 = local_f8;
            goto LAB_02df0ac0;
          }
          puVar43 = (ushort *)*param_6;
LAB_02df0514:
          *puVar43 = (ushort)iVar17;
          uVar24 = __s[iVar17];
          uVar16 = (__s + iVar17)[1];
          if ((int)param_6[3] < 1) {
            local_100 = lVar14;
            lVar14 = (*DAT_0442d138)(5,0x100);
            if (lVar14 == 0) goto LAB_02df0ab4;
            if (param_6[2] != 0) {
              (*DAT_0442d150)(5);
            }
            *(undefined4 *)(param_6 + 3) = 0x100;
            param_6[2] = lVar14;
            lVar14 = local_100;
            sVar38 = local_138;
            pvVar40 = local_120;
            plVar31 = local_f8;
          }
          iVar17 = -((int)~uVar24 >> 0x1f) - ((int)~uVar16 >> 0x1f);
          iVar10 = (int)param_6[5];
          uVar24 = 1;
          uVar20 = 1;
          do {
            uVar16 = iVar17 * 2;
            if (iVar10 < (int)uVar16) {
              if ((int)uVar16 < 0x101) {
                uVar16 = 0x100;
              }
              local_100 = lVar14;
              lVar14 = (*DAT_0442d138)(5,(ulong)uVar16);
              if (lVar14 == 0) {
                cVar42 = '\x02';
              }
              else {
                local_108 = (ulong)uVar16;
                if (param_6[4] != 0) {
                  (*DAT_0442d150)(5);
                }
                *(int *)(param_6 + 5) = (int)local_108;
                param_6[4] = lVar14;
                cVar42 = '\0';
              }
              lVar14 = local_100;
              sVar38 = local_138;
              pvVar40 = local_120;
              plVar31 = local_f8;
            }
            else {
              cVar42 = '\0';
            }
            iVar17 = iVar17 * 4;
            iVar10 = (int)uVar25;
            iVar45 = (int)uVar20;
            if ((int)param_6[7] < iVar17) {
              if (iVar17 < 0x101) {
                iVar17 = 0x100;
              }
              local_100 = lVar14;
              uVar20 = (*DAT_0442d138)(5,iVar17);
              if (uVar20 != 0) {
                if (param_6[6] != 0) {
                  local_108 = uVar20;
                  (*DAT_0442d150)(5);
                  uVar20 = local_108;
                }
                param_6[6] = uVar20;
                *(int *)(param_6 + 7) = iVar17;
                lVar14 = local_100;
                sVar38 = local_138;
                pvVar40 = local_120;
                plVar31 = local_f8;
                goto LAB_02df0568;
              }
              iVar17 = 0;
              uVar16 = iVar10 + iVar45 * 2;
              cVar42 = '\x02';
              uVar20 = 0;
              lVar14 = local_100;
              sVar38 = local_138;
              pvVar40 = local_120;
              plVar31 = local_f8;
            }
            else {
LAB_02df0568:
              uVar16 = iVar10 + iVar45 * 2;
              iVar17 = 0;
              if ((iVar45 < 1) || (cVar42 != '\0')) {
                uVar20 = 0;
              }
              else {
                lVar22 = 0;
                iVar17 = 0;
                iVar35 = -iVar10;
                uVar25 = (ulong)iVar10;
                uVar20 = 0;
                do {
                  piVar2 = __s + *(short *)(*param_6 + lVar22 * 2);
                  iVar10 = (int)uVar20;
                  sVar9 = (short)uVar25;
                  if (uVar24 < 2) {
                    cVar42 = false;
                    iVar34 = *piVar2;
                    iVar28 = piVar2[1];
                    if (-1 < iVar34) goto LAB_02df0688;
LAB_02df05d8:
                    if (-1 < iVar28) {
                      *(short *)(param_6[6] + (long)iVar10 * 2) = sVar9 + 1;
                      if (unaff_w27 == 1) {
                        *(byte *)(lVar21 + uVar25) = (byte)iVar34 | 0x80;
                      }
                      else {
                        uVar27 = uVar16 + iVar35;
                        if ((int)uVar27 < 0) {
                          uVar27 = uVar27 + 1;
                        }
                        *(byte *)(lVar21 + uVar25) = (byte)(uVar27 >> 1) | 0x80;
                        *(short *)(lVar21 + (int)uVar16) = (short)iVar34;
                        uVar16 = uVar16 + 2;
                      }
                      lVar26 = (long)iVar10 * 2;
                      *(short *)(param_6[4] + lVar26) = (short)iVar28;
                      piVar2[1] = 0;
LAB_02df0740:
                      uVar27 = iVar10 + 1;
                      uVar29 = (__s + *(short *)(param_6[4] + lVar26))[1];
                      iVar17 = iVar17 - ((int)~__s[*(short *)(param_6[4] + lVar26)] >> 0x1f);
                      goto LAB_02df075c;
                    }
                    if (unaff_w27 == 1) {
                      *(byte *)(lVar21 + uVar25) = (byte)iVar34 | 0x80;
                      ((byte *)(lVar21 + uVar25))[1] = (byte)iVar28 | 0x80;
                    }
                    else {
                      uVar27 = uVar16 + iVar35;
                      uVar29 = uVar27;
                      if ((int)uVar27 < 0) {
                        uVar29 = uVar27 + 1;
                      }
                      *(byte *)(lVar21 + uVar25) = (byte)(uVar29 >> 1) | 0x80;
                      uVar29 = uVar27 + 3;
                      if (-1 < (int)(uVar27 + 2)) {
                        uVar29 = uVar27 + 2;
                      }
                      ((byte *)(lVar21 + uVar25))[1] = (byte)(uVar29 >> 1) | 0x80;
                      lVar26 = (long)(int)uVar16;
                      uVar16 = uVar16 + 4;
                      *(undefined2 *)(lVar21 + lVar26) = (short)iVar34;
                      ((undefined2 *)(lVar21 + lVar26))[1] = (short)iVar28;
                    }
                  }
                  else {
                    sVar7 = *(short *)(param_6[2] + lVar22 * 2);
                    uVar29 = (int)uVar25 - ((int)sVar7 & 0xfffffffeU);
                    uVar27 = uVar29;
                    if ((int)uVar29 < 0) {
                      uVar27 = uVar29 + 1;
                    }
                    cVar42 = 0xff < (int)uVar29;
                    *(char *)(lVar21 + sVar7) = (char)(uVar27 >> 1);
                    iVar34 = *piVar2;
                    iVar28 = piVar2[1];
                    if (iVar34 < 0) goto LAB_02df05d8;
LAB_02df0688:
                    if (iVar28 < 0) {
                      *(short *)(param_6[6] + (long)iVar10 * 2) = sVar9;
                      if (unaff_w27 == 1) {
                        *(byte *)(lVar21 + uVar25 + 1) = (byte)iVar28 | 0x80;
                      }
                      else {
                        uVar27 = uVar16 + iVar35;
                        if ((int)uVar27 < 0) {
                          uVar27 = uVar27 + 1;
                        }
                        *(byte *)(lVar21 + uVar25 + 1) = (byte)(uVar27 >> 1) | 0x80;
                        *(short *)(lVar21 + (int)uVar16) = (short)iVar28;
                        uVar16 = uVar16 + 2;
                      }
                      lVar26 = (long)iVar10 * 2;
                      *(short *)(param_6[4] + lVar26) = (short)iVar34;
                      *piVar2 = 0;
                      goto LAB_02df0740;
                    }
                    uVar20 = -(uVar20 >> 0x1f) & 0xfffffffe00000000 | uVar20 << 1;
                    uVar27 = iVar10 + 2;
                    *(short *)(param_6[4] + uVar20) = (short)iVar34;
                    lVar26 = uVar20 + 2;
                    *(short *)(param_6[4] + lVar26) = (short)iVar28;
                    *(short *)(param_6[6] + uVar20) = sVar9;
                    *(short *)(param_6[6] + lVar26) = sVar9 + 1;
                    piVar2[0] = 0;
                    piVar2[1] = 0;
                    uVar29 = (__s + *(short *)(param_6[4] + lVar26))[1];
                    iVar17 = ((iVar17 - ((int)~__s[*(short *)(param_6[4] + uVar20)] >> 0x1f)) -
                             ((int)~(__s + *(short *)(param_6[4] + uVar20))[1] >> 0x1f)) -
                             ((int)~__s[*(short *)(param_6[4] + lVar26)] >> 0x1f);
LAB_02df075c:
                    uVar20 = (ulong)uVar27;
                    iVar17 = iVar17 - ((int)~uVar29 >> 0x1f);
                  }
                  lVar22 = lVar22 + 1;
                  uVar25 = uVar25 + 2;
                  if (iVar45 <= lVar22) break;
                  iVar35 = iVar35 + -2;
                } while ((bool)cVar42 == false);
              }
            }
            if (unaff_w27 != 2) {
              uVar16 = (uint)uVar25;
            }
            uVar25 = (ulong)uVar16;
            lVar22 = *param_6;
            *param_6 = param_6[4];
            iVar10 = (int)param_6[1];
            *(int *)(param_6 + 1) = (int)param_6[5];
            param_6[4] = lVar22;
            *(int *)(param_6 + 5) = iVar10;
            lVar26 = param_6[2];
            param_6[2] = param_6[6];
            lVar22 = param_6[3];
            *(int *)(param_6 + 3) = (int)param_6[7];
            param_6[6] = lVar26;
            *(int *)(param_6 + 7) = (int)lVar22;
          } while ((cVar42 == '\0') && (uVar24 = uVar24 + 1, (int)uVar20 != 0));
        }
        lVar39 = lVar39 + 1;
        if (((long)sVar38 <= lVar39) || (cVar42 != '\0')) {
          if (cVar42 == '\0') {
            return '\0';
          }
LAB_02df0ac0:
          if (*plVar31 == 0) {
            return cVar42;
          }
          (*DAT_0442d150)(5);
          *plVar31 = 0;
          return cVar42;
        }
        lVar21 = plVar31[1];
      } while( true );
    }
    cVar42 = '\0';
  }
  return cVar42;
LAB_02df0410:
  uVar24 = 2;
  if (0x7fff < uVar29) {
    uVar24 = 4;
  }
  param_3 = 1;
  if (0x7f < uVar29) {
    param_3 = uVar24;
  }
LAB_02df042c:
  uVar24 = (uint)local_140;
  uVar5 = *(ushort *)(param_5 + 10);
  param_1 = local_f8;
  iVar17 = local_124;
  unaff_w27 = param_3;
  goto LAB_02df0444;
}


