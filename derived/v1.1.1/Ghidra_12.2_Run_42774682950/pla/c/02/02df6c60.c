/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02df6c60; name: FUN_02df6c60
 */


undefined8 FUN_02df6c60(long *param_1,int *param_2,long *param_3,int *param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong *puVar17;
  byte *pbVar18;
  ulong uVar19;
  ushort *puVar20;
  uint uVar21;
  byte bVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  int iVar30;
  long *plVar31;
  char *pcVar32;
  uint uVar33;
  ulong uVar34;
  int iVar35;
  char acStack_123 [3];
  undefined8 uStack_120;
  ulong local_118 [2];
  long *local_108;
  uint local_fc;
  long local_f8;
  ulong local_f0;
  ulong uStack_e8;
  long *local_e0;
  ushort *local_d8;
  long *local_d0;
  ushort *local_c8;
  long *local_c0;
  long *local_b8;
  char *local_b0;
  long *local_a8;
  uint local_9c;
  long local_98;
  long *local_90;
  long local_88;
  undefined8 local_80;
  int *local_78;
  long local_70 [2];
  
  local_98 = param_1[3];
  local_a8 = param_3;
  local_78 = param_2;
  local_90 = (long *)(*(long *)(local_98 + 0x40) + (ulong)*(byte *)((long)param_2 + 0x25) * 0x20);
  iVar7 = param_2[8];
  uVar13 = (ulong)iVar7;
  uVar34 = (ulong)*(byte *)((long)local_90 + 0x1a);
  iVar9 = *(int *)(local_98 + (long)*(int *)((long)param_1 + 0x3c) * 4);
  uVar33 = (uint)*(byte *)((long)local_90 + 0x1a);
  if (*param_2 < 2) {
    iVar35 = param_2[6];
    iVar9 = iVar9 >> 1;
    iVar30 = param_2[7];
    if (iVar9 <= param_2[7]) {
      iVar30 = iVar9;
    }
    if ((0 < iVar30 - iVar35) && (0 < (int)param_5)) {
      uVar10 = (ulong)(*param_4 != 0);
      if (param_5 != 1) {
        lVar15 = (ulong)param_5 - 1;
        plVar12 = param_3;
        do {
          param_4 = param_4 + 1;
          plVar12 = plVar12 + 1;
          if (*param_4 != 0) {
            param_3[(int)uVar10] = *plVar12;
            uVar10 = (ulong)((int)uVar10 + 1);
          }
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      iVar9 = (int)uVar10;
      if (iVar9 != 0) {
        iVar8 = 0;
        if (iVar7 != 0) {
          iVar8 = (iVar30 - iVar35) / iVar7;
        }
        uVar11 = uVar33 - 1;
        lVar15 = -((-(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3) + 0xf & 0xfffffffffffffff0
                  );
        plVar12 = (long *)(acStack_123 + lVar15 + 3);
        iVar7 = 0;
        if (uVar33 != 0) {
          iVar7 = (int)(iVar8 + uVar11) / (int)uVar33;
        }
        lVar16 = (long)plVar12 - ((long)(int)(iVar7 * uVar33 * iVar9) + 0xfU & 0xfffffffffffffff0);
        *plVar12 = lVar16;
        if (1 < iVar9) {
          lVar26 = (long)(int)(iVar7 * uVar33);
          *(long *)((long)local_118 + lVar15) = lVar16 + lVar26;
          if (iVar9 != 2) {
            *(long *)((long)local_118 + lVar15 + 8) = lVar16 + lVar26 * 2;
            if (iVar9 != 3) {
              lVar16 = lVar26 * 3;
              uVar29 = 3;
              do {
                lVar23 = *plVar12 + lVar16;
                lVar16 = lVar16 + lVar26;
                plVar12[uVar29] = lVar23;
                uVar29 = uVar29 + 1;
              } while (uVar10 != uVar29);
            }
          }
        }
        uVar14 = (uint)*(byte *)((long)local_78 + 0x26);
        if (*(byte *)((long)local_78 + 0x26) != 0) {
          local_fc = uVar11;
          local_f8 = uVar34 - 2;
          local_80 = (long)iVar8;
          local_c8 = (ushort *)CONCAT44(local_c8._4_4_,(uint)(uVar33 == 0 || iVar9 < 2));
          local_d0 = (long *)((long)local_90 + 0x1b);
          uVar21 = 0;
          local_118[1] = uVar10;
          local_108 = plVar12;
          local_f0 = uVar10;
          uStack_e8 = uVar13;
          local_e0 = local_90 + 1;
          local_d8 = (ushort *)(local_90 + 3);
          local_118[0] = uVar34 & 3;
          local_b0 = (char *)(uVar10 - 1);
          local_b8 = local_a8 + 1;
          local_c0 = (long *)((long)local_118 + lVar15);
LAB_02df6e14:
          if (0 < iVar8) {
            uVar14 = 1 << (ulong)(uVar21 & 0x1f);
            uVar29 = 0;
            local_88 = CONCAT44(local_88._4_4_,uVar21);
            local_9c = uVar14;
            lVar15 = local_88;
            do {
              local_88._0_4_ = uVar21;
              uVar28 = (uint)uVar29;
              if ((uint)local_88 == 0) {
                lVar16 = *plVar12;
                *(undefined1 *)(lVar16 + (int)(uVar28 + uVar11)) = 1;
                if (1 < uVar33) {
                  pcVar32 = (char *)(lVar16 + local_f8 + (int)uVar28);
                  *pcVar32 = (char)local_78[9] * pcVar32[1];
                  if (0 < local_f8) {
                    uVar19 = uVar34;
                    do {
                      lVar26 = lVar16 + (int)uVar28 + uVar19;
                      lVar23 = uVar19 - 3;
                      uVar19 = uVar19 - 1;
                      *(char *)(lVar26 + -3) = (char)local_78[9] * *(char *)(lVar26 + -2);
                    } while (0 < lVar23);
                  }
                }
                if (((ulong)local_c8 & 1) == 0) {
                  lVar26 = (long)(int)uVar28;
                  uVar19 = 1;
                  do {
                    lVar23 = plVar12[uVar19];
                    uVar13 = uVar34;
                    if (local_118[0] != 0) {
                      uVar10 = local_118[0];
                      do {
                        uVar10 = uVar10 - 1;
                        *(undefined1 *)(lVar23 + lVar26 + -1 + uVar13) =
                             *(undefined1 *)(lVar16 + lVar26 + -1 + uVar13);
                        uVar13 = uVar13 - 1;
                      } while (uVar10 != 0);
                    }
                    if (2 < uVar34 - 1) {
                      do {
                        puVar2 = (undefined1 *)(lVar16 + lVar26 + -4 + uVar13);
                        puVar3 = (undefined1 *)(lVar23 + lVar26 + -2 + uVar13);
                        uVar13 = uVar13 - 4;
                        puVar3[1] = puVar2[3];
                        *puVar3 = puVar2[2];
                        puVar3[-1] = puVar2[1];
                        puVar3[-2] = *puVar2;
                      } while (0 < (long)uVar13);
                    }
                    uVar19 = uVar19 + 1;
                    local_88._0_4_ = (uint)lVar15;
                    uVar10 = local_f0;
                    plVar12 = local_108;
                    uVar13 = uStack_e8;
                    lVar16 = lVar23;
                    uVar14 = local_9c;
                  } while (uVar19 != local_118[1]);
                }
                if (0 < (int)uVar10) {
                  if (uVar33 == 0) {
                    puVar17 = (ulong *)*param_1;
                    iVar9 = 0;
                    uVar19 = (ulong)*(byte *)(param_1 + 1);
                    do {
                      uVar25 = (ulong)(int)(DAT_0429f2e0 & (uint)(*puVar17 >> (uVar19 & 0x3f)));
                      if (*(char *)local_d0 == '\x01') {
                        uVar6 = *(ushort *)(*local_90 + (*local_d8 & uVar25) * 2);
                        bVar4 = *(byte *)(*local_e0 + (*local_d8 & uVar25));
                        uVar21 = (uint)bVar4;
                        if (-1 < (short)uVar6) {
                          uVar25 = uVar25 >> ((ulong)bVar4 & 0x3f);
                          lVar16 = *local_90 + (ulong)uVar6 * 2;
                          Hint_Prefetch(lVar16,0,0,0);
                          bVar4 = *(byte *)(lVar16 + (uVar25 & 1));
                          while (uVar21 = uVar21 + 1, -1 < (char)bVar4) {
                            lVar16 = lVar16 + (ulong)bVar4 * 2;
                            uVar27 = uVar25 >> 1;
                            uVar25 = uVar25 >> 1;
                            bVar4 = *(byte *)(lVar16 + (uVar27 & 1));
                          }
                        }
                      }
                      else if (*(char *)local_d0 == '\x02') {
                        uVar6 = *(ushort *)(*local_90 + (*local_d8 & uVar25) * 2);
                        bVar4 = *(byte *)(*local_e0 + (*local_d8 & uVar25));
                        uVar21 = (uint)bVar4;
                        if (-1 < (short)uVar6) {
                          uVar25 = uVar25 >> ((ulong)bVar4 & 0x3f);
                          lVar16 = *local_90 + (ulong)uVar6 * 2;
                          Hint_Prefetch(lVar16,0,0,0);
                          bVar22 = *(byte *)(lVar16 + (uVar25 & 1));
                          if ((char)bVar22 < '\0') {
                            uVar21 = bVar4 + 1;
                          }
                          else {
                            lVar16 = lVar16 + (ulong)bVar22 * 2;
                            bVar22 = *(byte *)(lVar16 + (uVar25 >> 1 & 1));
                            uVar21 = bVar4 + 2;
                            if (-1 < (char)bVar22) {
                              uVar25 = uVar25 >> 2;
                              do {
                                lVar16 = lVar16 + (ulong)bVar22 * 2;
                                uVar27 = uVar25 & 1;
                                uVar25 = uVar25 >> 1;
                                bVar22 = *(byte *)(lVar16 + uVar27);
                                uVar21 = uVar21 + 1;
                              } while (-1 < (char)bVar22);
                            }
                          }
                        }
                      }
                      else {
                        uVar21 = 0;
                      }
                      uVar21 = uVar21 + (int)uVar19;
                      uVar24 = uVar21 & 0x1f;
                      uVar19 = (ulong)uVar24;
                      iVar7 = (int)uVar21 >> 5;
                      puVar17 = (ulong *)((long)puVar17 + (long)iVar7 * 4);
                      iVar7 = *(int *)((long)param_1 + 0xc) - iVar7;
                      *(char *)(param_1 + 1) = (char)uVar24;
                      *(int *)((long)param_1 + 0xc) = iVar7;
                      *param_1 = (long)puVar17;
                      if (iVar7 < 0) {
                        return 0;
                      }
                      iVar9 = iVar9 + 1;
                    } while (iVar9 != (int)uVar10);
                  }
                  else {
                    lVar16 = (long)(int)uVar28;
                    uVar19 = 0;
                    do {
                      uVar25 = (ulong)(int)(DAT_0429f2e0 &
                                           (uint)(*(ulong *)*param_1 >>
                                                 ((ulong)*(byte *)(param_1 + 1) & 0x3f)));
                      if (*(char *)local_d0 == '\x01') {
                        lVar26 = *local_90;
                        uVar6 = *(ushort *)(lVar26 + (*local_d8 & uVar25) * 2);
                        bVar4 = *(byte *)(*local_e0 + (*local_d8 & uVar25));
                        uVar21 = (uint)bVar4;
                        uVar24 = (uint)uVar6;
                        if ((short)uVar6 < 0) {
LAB_02df70bc:
                          uVar24 = uVar24 & 0x7fff;
                        }
                        else {
                          uVar25 = uVar25 >> ((ulong)bVar4 & 0x3f);
                          lVar23 = lVar26 + (ulong)uVar24 * 2;
                          Hint_Prefetch(lVar26 + (ulong)uVar6 * 2,0,0,0);
                          cVar5 = *(char *)(lVar23 + (uVar25 & 1));
                          uVar24 = (uint)cVar5;
                          uVar21 = bVar4 + 1;
                          if (-1 < cVar5) {
                            do {
                              lVar23 = lVar23 + (ulong)(byte)uVar24 * 2;
                              uVar27 = uVar25 >> 1;
                              uVar25 = uVar25 >> 1;
                              uVar24 = (uint)*(char *)(lVar23 + (uVar27 & 1));
                              uVar21 = uVar21 + 1;
                            } while (-1 < (int)uVar24);
                          }
                          uVar24 = uVar24 & 0x7f;
                        }
                      }
                      else if (*(char *)local_d0 == '\x02') {
                        lVar26 = *local_90;
                        uVar6 = *(ushort *)(lVar26 + (*local_d8 & uVar25) * 2);
                        bVar4 = *(byte *)(*local_e0 + (*local_d8 & uVar25));
                        uVar21 = (uint)bVar4;
                        uVar24 = (uint)uVar6;
                        if ((short)uVar6 < 0) goto LAB_02df70bc;
                        uVar25 = uVar25 >> ((ulong)bVar4 & 0x3f);
                        Hint_Prefetch(lVar26 + (ulong)uVar6 * 2,0,0,0);
                        lVar26 = lVar26 + (ulong)uVar24 * 2;
                        bVar4 = *(byte *)(lVar26 + (uVar25 & 1));
                        uVar27 = (ulong)(char)bVar4;
                        if ((char)bVar4 < '\0') {
                          uVar21 = uVar21 + 1;
                        }
                        else {
                          lVar26 = lVar26 + (ulong)bVar4 * 2;
                          cVar5 = *(char *)(lVar26 + (uVar25 >> 1 & 1));
                          uVar27 = (ulong)cVar5;
                          uVar21 = uVar21 + 2;
                          if (-1 < cVar5) {
                            uVar25 = uVar25 >> 2;
                            do {
                              lVar26 = lVar26 + (uVar27 & 0xff) * 2;
                              uVar27 = uVar25 & 1;
                              uVar25 = uVar25 >> 1;
                              cVar5 = *(char *)(lVar26 + uVar27);
                              uVar27 = (ulong)cVar5;
                              uVar21 = uVar21 + 1;
                            } while (-1 < cVar5);
                          }
                        }
                        uVar24 = (uint)*(ushort *)(lVar26 + (uVar27 & 0x7f) * 2);
                      }
                      else {
                        uVar21 = 0;
                        uVar24 = 0;
                      }
                      iVar9 = uVar21 + *(byte *)(param_1 + 1);
                      iVar7 = iVar9 >> 5;
                      *(byte *)(param_1 + 1) = (byte)iVar9 & 0x1f;
                      *param_1 = *param_1 + (long)iVar7 * 4;
                      iVar7 = *(int *)((long)param_1 + 0xc) - iVar7;
                      *(int *)((long)param_1 + 0xc) = iVar7;
                      if (iVar7 < 0) {
                        return 0;
                      }
                      lVar26 = plVar12[uVar19];
                      bVar4 = *(byte *)(lVar26 + lVar16);
                      uVar21 = 0;
                      if (bVar4 != 0) {
                        uVar21 = uVar24 / bVar4;
                      }
                      *(char *)(lVar26 + lVar16) = (char)uVar21;
                      if (uVar33 != 1) {
                        uVar24 = uVar24 - (uVar21 & 0xff) * (uint)bVar4;
                        bVar4 = *(byte *)(lVar26 + lVar16 + 1);
                        uVar21 = 0;
                        if (bVar4 != 0) {
                          uVar21 = uVar24 / bVar4;
                        }
                        *(char *)(lVar26 + lVar16 + 1) = (char)uVar21;
                        if (uVar33 != 2) {
                          uVar24 = uVar24 - (uVar21 & 0xff) * (uint)bVar4;
                          pbVar18 = (byte *)(lVar26 + lVar16 + 2);
                          lVar26 = local_f8;
                          do {
                            bVar4 = *pbVar18;
                            uVar21 = 0;
                            if (bVar4 != 0) {
                              uVar21 = uVar24 / bVar4;
                            }
                            lVar26 = lVar26 + -1;
                            *pbVar18 = (byte)uVar21;
                            uVar24 = uVar24 - (uVar21 & 0xff) * (uint)bVar4;
                            pbVar18 = pbVar18 + 1;
                          } while (lVar26 != 0);
                        }
                      }
                      uVar19 = uVar19 + 1;
                    } while (uVar19 != local_118[1]);
                  }
                }
              }
              uVar21 = (uint)local_88;
              local_88 = lVar15;
              if ((uVar33 == 0) || (iVar8 <= (int)uVar28)) {
LAB_02df6e50:
                iVar9 = (int)uVar29;
              }
              else {
                if ((int)uVar10 < 1) {
                  uVar24 = iVar8 + ~uVar28;
                  if (uVar11 <= iVar8 + ~uVar28) {
                    uVar24 = uVar11;
                  }
                  uVar29 = (ulong)(uVar28 + uVar24 + 1);
                  goto LAB_02df6e50;
                }
                lVar15 = *plVar12;
                uVar11 = 0;
                uVar29 = (ulong)(int)uVar28;
                do {
                  lVar16 = uVar29 * uVar13;
                  if ((uVar14 & *(byte *)(*(long *)(local_78 + 2) +
                                         (ulong)*(byte *)(lVar15 + uVar29))) != 0) {
                    puVar1 = (undefined8 *)
                             (*(long *)(local_98 + 0x40) +
                             (ulong)*(byte *)(*(long *)(local_78 + 4) +
                                             (ulong)*(byte *)(lVar15 + uVar29) * 8 + (ulong)uVar21)
                             * 0x20);
                    Hint_Prefetch(*puVar1,0,0,0);
                    local_70[0] = *local_a8 + (lVar16 + local_78[6]) * 4;
                    (**(code **)(puVar1[2] + 0x48))(puVar1,local_70,0,param_1,uVar13 & 0xffffffff);
                    uVar10 = local_f0;
                    uVar13 = uStack_e8;
                    uVar21 = (uint)local_88;
                    uVar14 = local_9c;
                  }
                  if ((int)uVar10 != 1) {
                    plVar31 = local_c0;
                    pcVar32 = local_b0;
                    plVar12 = local_b8;
                    do {
                      if ((uVar14 & *(byte *)(*(long *)(local_78 + 2) +
                                             (ulong)*(byte *)(*plVar31 + uVar29))) != 0) {
                        puVar1 = (undefined8 *)
                                 (*(long *)(local_98 + 0x40) +
                                 (ulong)*(byte *)(*(long *)(local_78 + 4) +
                                                 (ulong)*(byte *)(*plVar31 + uVar29) * 8 +
                                                 (ulong)uVar21) * 0x20);
                        Hint_Prefetch(*puVar1,0,0,0);
                        local_70[0] = *plVar12 + (lVar16 + local_78[6]) * 4;
                        (**(code **)(puVar1[2] + 0x48))
                                  (puVar1,local_70,0,param_1,uVar13 & 0xffffffff);
                        uVar10 = local_f0;
                        uVar13 = uStack_e8;
                        uVar21 = (uint)local_88;
                        uVar14 = local_9c;
                      }
                      pcVar32 = (char *)((long)pcVar32 + -1);
                      plVar12 = plVar12 + 1;
                      plVar31 = plVar31 + 1;
                    } while (pcVar32 != (char *)0x0);
                  }
                  uVar29 = uVar29 + 1;
                } while (((long)uVar29 < local_80) && (uVar11 = uVar11 + 1, uVar11 < uVar33));
                iVar9 = (int)uVar29;
                plVar12 = local_108;
                uVar11 = local_fc;
              }
              if (iVar8 <= iVar9) goto LAB_02df7470;
              lVar15 = local_88;
            } while( true );
          }
          goto LAB_02df7478;
        }
      }
    }
  }
  else {
    iVar9 = (int)(iVar9 * param_5) >> 1;
    iVar30 = param_2[6];
    iVar35 = param_2[7];
    if (iVar9 <= param_2[7]) {
      iVar35 = iVar9;
    }
    if (0 < iVar35 - iVar30) {
      iVar9 = 0;
      if (iVar7 != 0) {
        iVar9 = (iVar35 - iVar30) / iVar7;
      }
      local_b8 = (long *)CONCAT44(local_b8._4_4_,uVar33 - 1);
      iVar35 = 0;
      if (uVar33 != 0) {
        iVar35 = (int)(iVar9 + (uVar33 - 1)) / (int)uVar33;
      }
      lVar15 = -((long)(int)(iVar35 * uVar33) + 0xfU & 0xfffffffffffffff0);
      lVar16 = lVar15 + -0x120;
      if (iVar30 < 0) {
        iVar30 = iVar30 + 1;
      }
      if (param_4[1] != 0 || *param_4 != 0) {
        if (iVar7 < 0) {
          iVar7 = iVar7 + 1;
        }
        if (*(char *)((long)param_2 + 0x26) != '\0') {
          local_9c = iVar30 >> 1;
          local_88 = (long)iVar9;
          local_d8 = (ushort *)(uVar34 - 2);
          iVar7 = iVar7 >> 1;
          local_c0 = (long *)((long)local_90 + 0x1b);
          local_d0 = local_90 + 1;
          local_c8 = (ushort *)(local_90 + 3);
          uVar11 = 0;
          local_b0 = acStack_123 + lVar15 + 4;
          local_e0 = (long *)(acStack_123 + lVar15 + 5);
          do {
            if (0 < iVar9) {
              uVar13 = 0;
              local_80 = CONCAT44(local_80._4_4_,1 << (ulong)(uVar11 & 0x1f));
              if (uVar11 == 0) {
                do {
                  iVar30 = (int)uVar13;
                  acStack_123[(iVar30 + (int)local_b8) + lVar16 + 0x123] = '\x01';
                  puVar20 = local_d8;
                  if (1 < uVar33) {
                    iVar35 = local_78[9];
                    acStack_123[(long)local_d8 + (long)iVar30 + lVar16 + 0x123] =
                         (acStack_123 + (long)local_d8 + (long)iVar30 + lVar16 + 0x123)[1] *
                         (char)iVar35;
                    if (0 < (long)puVar20) {
                      uVar10 = uVar34;
                      do {
                        lVar15 = uVar10 + iVar30 + lVar16;
                        lVar26 = uVar10 - 3;
                        uVar10 = uVar10 - 1;
                        acStack_123[lVar15 + 0x120] = acStack_123[lVar15 + 0x121] * (char)iVar35;
                      } while (0 < lVar26);
                    }
                  }
                  uVar10 = (ulong)(int)(DAT_0429f2e0 &
                                       (uint)(*(ulong *)*param_1 >>
                                             ((ulong)*(byte *)(param_1 + 1) & 0x3f)));
                  if ((char)*local_c0 == '\x01') {
                    lVar15 = *local_90;
                    uVar6 = *(ushort *)(lVar15 + (*local_c8 & uVar10) * 2);
                    bVar4 = *(byte *)(*local_d0 + (*local_c8 & uVar10));
                    uVar14 = (uint)bVar4;
                    uVar21 = (uint)uVar6;
                    if ((short)uVar6 < 0) {
LAB_02df77c0:
                      uVar21 = uVar21 & 0x7fff;
                    }
                    else {
                      uVar10 = uVar10 >> ((ulong)bVar4 & 0x3f);
                      lVar26 = lVar15 + (ulong)uVar21 * 2;
                      Hint_Prefetch(lVar15 + (ulong)uVar6 * 2,0,0,0);
                      cVar5 = *(char *)(lVar26 + (uVar10 & 1));
                      uVar21 = (uint)cVar5;
                      uVar14 = bVar4 + 1;
                      if (-1 < cVar5) {
                        do {
                          lVar26 = lVar26 + (ulong)(byte)uVar21 * 2;
                          uVar29 = uVar10 >> 1;
                          uVar10 = uVar10 >> 1;
                          uVar21 = (uint)*(char *)(lVar26 + (uVar29 & 1));
                          uVar14 = uVar14 + 1;
                        } while (-1 < (int)uVar21);
                      }
                      uVar21 = uVar21 & 0x7f;
                    }
                  }
                  else if ((char)*local_c0 == '\x02') {
                    lVar15 = *local_90;
                    uVar6 = *(ushort *)(lVar15 + (*local_c8 & uVar10) * 2);
                    bVar4 = *(byte *)(*local_d0 + (*local_c8 & uVar10));
                    uVar14 = (uint)bVar4;
                    uVar21 = (uint)uVar6;
                    if ((short)uVar6 < 0) goto LAB_02df77c0;
                    uVar10 = uVar10 >> ((ulong)bVar4 & 0x3f);
                    Hint_Prefetch(lVar15 + (ulong)uVar6 * 2,0,0,0);
                    lVar15 = lVar15 + (ulong)uVar21 * 2;
                    bVar4 = *(byte *)(lVar15 + (uVar10 & 1));
                    uVar29 = (ulong)(char)bVar4;
                    if ((char)bVar4 < '\0') {
                      uVar14 = uVar14 + 1;
                    }
                    else {
                      lVar15 = lVar15 + (ulong)bVar4 * 2;
                      cVar5 = *(char *)(lVar15 + (uVar10 >> 1 & 1));
                      uVar29 = (ulong)cVar5;
                      uVar14 = uVar14 + 2;
                      if (-1 < cVar5) {
                        uVar10 = uVar10 >> 2;
                        do {
                          lVar15 = lVar15 + (uVar29 & 0xff) * 2;
                          uVar29 = uVar10 & 1;
                          uVar10 = uVar10 >> 1;
                          cVar5 = *(char *)(lVar15 + uVar29);
                          uVar29 = (ulong)cVar5;
                          uVar14 = uVar14 + 1;
                        } while (-1 < cVar5);
                      }
                    }
                    uVar21 = (uint)*(ushort *)(lVar15 + (uVar29 & 0x7f) * 2);
                  }
                  else {
                    uVar14 = 0;
                    uVar21 = 0;
                  }
                  iVar35 = uVar14 + *(byte *)(param_1 + 1);
                  iVar8 = iVar35 >> 5;
                  *(byte *)(param_1 + 1) = (byte)iVar35 & 0x1f;
                  *param_1 = *param_1 + (long)iVar8 * 4;
                  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - iVar8;
                  if (uVar33 != 0) {
                    lVar15 = (long)iVar30;
                    bVar4 = acStack_123[lVar15 + lVar16 + 0x123];
                    uVar14 = 0;
                    if (bVar4 != 0) {
                      uVar14 = uVar21 / bVar4;
                    }
                    acStack_123[lVar15 + lVar16 + 0x123] = (char)uVar14;
                    if (uVar33 != 1) {
                      uVar21 = uVar21 - (uVar14 & 0xff) * (uint)bVar4;
                      bVar4 = acStack_123[lVar15 + lVar16 + 0x124];
                      uVar14 = 0;
                      if (bVar4 != 0) {
                        uVar14 = uVar21 / bVar4;
                      }
                      acStack_123[lVar15 + lVar16 + 0x124] = (char)uVar14;
                      if (uVar33 != 2) {
                        uVar21 = uVar21 - (uVar14 & 0xff) * (uint)bVar4;
                        pbVar18 = (byte *)((long)local_e0 + lVar15);
                        puVar20 = local_d8;
                        do {
                          bVar4 = *pbVar18;
                          uVar14 = 0;
                          if (bVar4 != 0) {
                            uVar14 = uVar21 / bVar4;
                          }
                          puVar20 = (ushort *)((long)puVar20 + -1);
                          *pbVar18 = (byte)uVar14;
                          uVar21 = uVar21 - (uVar14 & 0xff) * (uint)bVar4;
                          pbVar18 = pbVar18 + 1;
                        } while (puVar20 != (ushort *)0x0);
                      }
                    }
                  }
                  if ((uVar33 != 0) && (iVar30 < iVar9)) {
                    lVar15 = (long)iVar30;
                    if (((uint)local_80 &
                        *(byte *)(*(long *)(local_78 + 2) +
                                 (ulong)(byte)acStack_123[lVar15 + lVar16 + 0x123])) != 0) {
                      lVar26 = *(long *)(local_98 + 0x40) +
                               (ulong)*(byte *)(*(long *)(local_78 + 4) +
                                               (ulong)(byte)acStack_123[lVar15 + lVar16 + 0x123] * 8
                                               ) * 0x20;
                      (**(code **)(*(long *)(lVar26 + 0x10) + 0x48))
                                (lVar26,local_a8,local_9c + iVar7 * iVar30,param_1,iVar7);
                    }
                    pcVar32 = local_b0;
                    uVar13 = lVar15 + 1;
                    if (((long)uVar13 < local_88) && (1 < uVar33)) {
                      iVar30 = local_9c + iVar7 * (iVar30 + 1);
                      lVar26 = 0;
                      do {
                        if (((uint)local_80 &
                            *(byte *)(*(long *)(local_78 + 2) +
                                     (ulong)(byte)pcVar32[lVar26 + lVar15])) != 0) {
                          lVar23 = *(long *)(local_98 + 0x40) +
                                   (ulong)*(byte *)(*(long *)(local_78 + 4) +
                                                   (ulong)(byte)pcVar32[lVar26 + lVar15] * 8) * 0x20
                          ;
                          (**(code **)(*(long *)(lVar23 + 0x10) + 0x48))
                                    (lVar23,local_a8,iVar30,param_1,iVar7);
                        }
                        lVar23 = lVar26 + 1;
                      } while ((lVar15 + lVar26 + 2 < local_88) &&
                              (iVar35 = (int)lVar26, iVar30 = iVar30 + iVar7, lVar26 = lVar23,
                              iVar35 + 2U < uVar33));
                      uVar13 = lVar15 + lVar23 + 1;
                    }
                    uVar13 = uVar13 & 0xffffffff;
                  }
                } while ((int)uVar13 < iVar9);
              }
              else {
                do {
                  if ((uVar33 != 0) && (iVar30 = (int)uVar13, iVar30 < iVar9)) {
                    lVar15 = (long)iVar30;
                    if (((uint)local_80 &
                        *(byte *)(*(long *)(local_78 + 2) +
                                 (ulong)(byte)acStack_123[lVar15 + lVar16 + 0x123])) != 0) {
                      lVar26 = *(long *)(local_98 + 0x40) +
                               (ulong)*(byte *)(*(long *)(local_78 + 4) +
                                               (ulong)(byte)acStack_123[lVar15 + lVar16 + 0x123] * 8
                                               + (ulong)uVar11) * 0x20;
                      (**(code **)(*(long *)(lVar26 + 0x10) + 0x48))
                                (lVar26,local_a8,local_9c + iVar7 * iVar30,param_1,iVar7);
                    }
                    pcVar32 = local_b0;
                    uVar13 = lVar15 + 1;
                    if (((long)uVar13 < local_88) && (1 < uVar33)) {
                      iVar30 = local_9c + iVar7 * (iVar30 + 1);
                      lVar26 = 0;
                      do {
                        if (((uint)local_80 &
                            *(byte *)(*(long *)(local_78 + 2) +
                                     (ulong)(byte)pcVar32[lVar26 + lVar15])) != 0) {
                          lVar23 = *(long *)(local_98 + 0x40) +
                                   (ulong)*(byte *)(*(long *)(local_78 + 4) +
                                                   (ulong)(byte)pcVar32[lVar26 + lVar15] * 8 +
                                                   (ulong)uVar11) * 0x20;
                          (**(code **)(*(long *)(lVar23 + 0x10) + 0x48))
                                    (lVar23,local_a8,iVar30,param_1,iVar7);
                        }
                        lVar23 = lVar26 + 1;
                      } while ((lVar15 + lVar26 + 2 < local_88) &&
                              (iVar35 = (int)lVar26, iVar30 = iVar30 + iVar7, lVar26 = lVar23,
                              iVar35 + 2U < uVar33));
                      uVar13 = lVar15 + lVar23 + 1;
                    }
                    uVar13 = uVar13 & 0xffffffff;
                  }
                } while ((int)uVar13 < iVar9);
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(byte *)((long)local_78 + 0x26));
        }
      }
    }
  }
  return 0;
LAB_02df7470:
  uVar14 = (uint)*(byte *)((long)local_78 + 0x26);
LAB_02df7478:
  uVar21 = uVar21 + 1;
  if (uVar14 <= uVar21) {
    return 0;
  }
  goto LAB_02df6e14;
}


