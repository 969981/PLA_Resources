/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ca0e60; name: FUN_02ca0e60
 */


void FUN_02ca0e60(undefined8 *param_1,uint *param_2,long param_3,long param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  bool bVar7;
  undefined2 uVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  long *plVar12;
  char *pcVar13;
  ulong uVar14;
  ushort uVar15;
  uint uVar16;
  long lVar17;
  byte *pbVar18;
  uint *puVar19;
  ushort *puVar20;
  long *plVar21;
  long lVar22;
  uint *puVar23;
  long *plVar24;
  uint *puVar25;
  uint *puVar26;
  undefined8 *puVar27;
  ulong uVar28;
  char *__haystack;
  long lVar29;
  long *plVar30;
  undefined1 *puVar31;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  uint uVar38;
  ushort auStack_260 [6];
  int local_254;
  undefined8 *local_250;
  undefined1 *local_248;
  ulong local_240;
  ulong local_238;
  uint *local_230;
  undefined1 *local_228;
  uint *local_220;
  uint *local_218;
  long local_210;
  uint local_204;
  int *local_200;
  uint *local_1f8;
  long *local_1f0;
  long **local_1e8;
  long local_1e0;
  uint **local_1d8;
  ulong local_1d0;
  long *local_1c8;
  uint *local_1c0;
  long local_1b8;
  uint *local_1b0;
  uint *local_1a8;
  uint *local_1a0;
  undefined1 *local_198;
  long *local_190;
  uint *local_188;
  undefined1 *local_180;
  uint *local_178;
  long local_170;
  ulong local_168;
  undefined1 *local_160;
  char *pcStack_158;
  size_t local_150;
  long *local_148;
  undefined1 **local_140;
  long *local_138;
  long lStack_130;
  long local_128;
  long local_120;
  long local_118;
  uint *puStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  ulong local_f0;
  undefined1 *local_e8;
  uint *local_e0;
  uint *local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  long *local_b8;
  uint *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  ulong local_90;
  float local_88;
  undefined1 auStack_80 [16];
  
  lVar22 = *(long *)(param_3 + 8);
  local_1a8 = param_2;
  if ((lVar22 == 0) || (*(char *)(lVar22 + 0x1e1) == '\0')) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  local_250 = param_1;
  lVar17 = *(long *)(param_4 + 0x278) - *(long *)(param_4 + 0x270) >> 4;
  uVar14 = lVar17 * -0x5555555555555555;
  local_240 = uVar14;
  local_238 = (long)(short)uVar14;
  puVar31 = (undefined1 *)
            ((long)auStack_260 -
            ((-(uVar14 >> 0xf & 1) & 0xfffffffffffe0000 | lVar17 * 0x5555555555555556 & 0x1fffeU) +
             0xf & 0xfffffffffffffff0));
  local_254 = (int)uVar14 * 0x10000;
  if (local_254 < 1) {
LAB_02ca0f28:
    local_200 = (int *)((long)*(uint **)(lVar22 + 0x250) + (ulong)**(uint **)(lVar22 + 0x250));
  }
  else {
    uVar28 = 0;
    do {
      uVar8 = FUN_02b68b4c(param_4,uVar28 & 0xffffffff);
      *(undefined2 *)(puVar31 + uVar28 * 2) = uVar8;
      uVar28 = uVar28 + 1;
    } while ((long)uVar28 < (long)(short)uVar14);
    lVar22 = *(long *)(param_3 + 8);
    if ((lVar22 != 0) && (*(char *)(lVar22 + 0x1e1) != '\0')) goto LAB_02ca0f28;
    local_200 = (int *)0x0;
  }
  lVar22 = (long)*local_200;
  local_248 = &DAT_cbf29ce484222645;
  uVar15 = *(ushort *)((long)local_200 - lVar22);
  if (uVar15 < 5) {
    local_198 = auStack_80;
    local_228 = (undefined1 *)0x0;
    local_220 = (uint *)0x0;
    local_204 = 0;
    plVar24 = (long *)puVar31;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)local_200 - lVar22))[2];
    if (((uVar14 == 0) ||
        (puVar25 = (uint *)((long)local_200 + uVar14),
        puVar25 = (uint *)((long)puVar25 + (ulong)*puVar25), puVar25 == (uint *)0x0)) ||
       (uVar32 = *puVar25, uVar32 == 0)) {
      uVar38 = 0;
    }
    else {
      local_198 = (undefined1 *)0x0;
      uVar38 = 0;
      local_1a0 = puVar25;
      puVar25 = puVar25 + 1;
      local_1b0 = puVar25;
      do {
        piVar1 = (int *)((long)(puVar25 + (long)local_198) + (ulong)puVar25[(long)local_198]);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
           (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar14 == 0)) {
          bVar7 = false;
        }
        else {
          bVar7 = *(char *)((long)piVar1 + uVar14) != '\0';
        }
        puVar19 = (uint *)((long)local_200 +
                          (ulong)*(ushort *)((long)local_200 + (4 - (long)*local_200)));
        puVar19 = (uint *)((long)puVar19 + (long)local_198 * 4 + (ulong)*puVar19 + 4);
        piVar1 = (int *)((long)puVar19 + (ulong)*puVar19);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
           (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar14 == 0)) {
          puVar19 = (uint *)0x0;
        }
        else {
          puVar19 = (uint *)((long)piVar1 + uVar14);
          puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
        }
        if (bVar7) {
          if (*puVar19 != 0) {
            uVar14 = 0;
            lVar22 = (long)puVar19 + 9;
            do {
              uVar33 = (ulong)puVar19[uVar14 + 1];
              puVar25 = (uint *)((long)(puVar19 + uVar14 + 1) + uVar33);
              puVar26 = puVar25 + 1;
              uVar32 = *puVar25;
              uVar28 = (ulong)uVar32;
              if (uVar32 == 0) {
                uVar28 = strlen((char *)puVar26);
              }
              bVar5 = (byte)*puVar26;
              local_e8 = &DAT_cbf29ce484222645;
              if (bVar5 != 0) {
                local_e8 = &DAT_cbf29ce484222645;
                pbVar18 = (byte *)(lVar22 + uVar33);
                do {
                  local_e8 = (undefined1 *)(((ulong)local_e8 ^ (ulong)bVar5) * 0x100000001b3);
                  bVar5 = *pbVar18;
                  pbVar18 = pbVar18 + 1;
                } while (bVar5 != 0);
              }
              local_e0 = puVar26;
              local_d8 = (uint *)uVar28;
              local_d0 = (long *)0x0;
              puVar27 = *(undefined8 **)(param_4 + 0x58);
              puVar3 = *(undefined8 **)(param_4 + 0x60);
              if (puVar27 == puVar3) {
                uVar32 = 0xffffffff;
              }
              else {
                do {
                  sVar9 = FUN_02b6f370(*puVar27,&local_e8);
                  if (-1 < sVar9) {
                    sVar9 = *(short *)((long)puVar27 + 10) + sVar9;
                    goto LAB_02ca114c;
                  }
                  puVar27 = puVar27 + 2;
                } while (puVar3 != puVar27);
                sVar9 = -1;
LAB_02ca114c:
                uVar32 = (uint)sVar9;
                if ((int)uVar32 < 0) {
                  uVar32 = 0xffffffff;
                }
                if (local_d0 != (long *)0x0) {
                  (**(code **)(*local_d0 + 0x20))();
                }
              }
              uVar38 = uVar38 + 1;
              iVar11 = ((uint)(*(int *)(param_4 + 0x278) - *(int *)(param_4 + 0x270)) >> 4) *
                       -0x55550000;
              if (iVar11 != 0) {
                uVar28 = 0;
                do {
                  for (uVar15 = *(ushort *)(puVar31 + uVar28 * 2); uVar15 != 0xffff;
                      uVar15 = *(ushort *)(puVar31 + (ulong)uVar15 * 2)) {
                    if (uVar32 == uVar15) {
                      uVar38 = uVar38 + 1;
                      break;
                    }
                  }
                  uVar28 = uVar28 + 1;
                } while (uVar28 < (uint)(iVar11 >> 0x10));
              }
              uVar14 = uVar14 + 1;
              lVar22 = lVar22 + 4;
            } while (uVar14 < *puVar19);
            uVar32 = *local_1a0;
            puVar25 = local_1b0;
          }
        }
        else {
          uVar38 = *puVar19 + uVar38;
        }
        local_198 = (undefined1 *)((long)local_198 + 1);
      } while (local_198 < (ulong)uVar32);
      lVar22 = (long)*local_200;
      uVar15 = *(ushort *)((long)local_200 - lVar22);
    }
    if (uVar15 < 7) {
LAB_02ca1340:
      local_198 = puVar31 + -((ulong)uVar38 * 4 + 0xf & 0x7fffffff0);
      if ((uVar15 < 5) || (uVar14 = (ulong)*(ushort *)((long)local_200 + (4 - lVar22)), uVar14 == 0)
         ) goto LAB_02ca1834;
LAB_02ca139c:
      uVar28 = (ulong)*(uint *)((long)local_200 + uVar14);
      puVar25 = (uint *)((long)((long)local_200 + uVar14) + uVar28);
      if (puVar25 == (uint *)0x0) goto LAB_02ca1834;
      uVar32 = *puVar25;
      plVar24 = (long *)(local_198 + (long)(ulong)uVar32 * -0x20);
      local_228 = (undefined1 *)plVar24;
      local_220 = (uint *)(ulong)uVar32;
      if (uVar32 != 0) {
        puVar19 = (uint *)0x0;
        uVar33 = 0;
        local_1c0 = puVar25 + 1;
        lVar22 = (long)local_200 + uVar28 + uVar14 + 0xd;
        do {
          puVar25 = local_1c0 + (long)puVar19;
          uVar32 = *puVar25;
          puVar26 = (uint *)(local_228 + (long)puVar19 * 0x20);
          puVar23 = (uint *)((long)puVar25 + (ulong)uVar32);
          if (*(ushort *)((long)puVar23 - (long)(int)*puVar23) < 5) {
            lVar17 = 0;
          }
          else {
            uVar14 = (ulong)((ushort *)((long)puVar23 - (long)(int)*puVar23))[2];
            lVar17 = 0;
            if (uVar14 != 0) {
              puVar2 = (uint *)((long)puVar23 + uVar14);
              lVar17 = (long)puVar2 + (ulong)*puVar2;
            }
          }
          *(long *)(puVar26 + 4) = lVar17 + 4;
          uVar38 = 0;
          if (8 < *(ushort *)((long)puVar23 - (long)(int)*puVar23)) {
            uVar14 = (ulong)((ushort *)((long)puVar23 - (long)(int)*puVar23))[4];
            uVar38 = 0;
            if (uVar14 != 0) {
              uVar38 = *(uint *)((long)puVar23 + uVar14);
            }
          }
          puVar26[6] = uVar38;
          puVar20 = (ushort *)((long)puVar23 - (long)(int)*puVar23);
          local_1b8 = lVar22;
          local_1b0 = puVar19;
          if ((*puVar20 < 0xb) || ((ulong)puVar20[5] == 0)) {
            plVar12 = (long *)(local_198 + uVar33 * 4);
LAB_02ca169c:
            uVar38 = *(uint *)((long)((long)puVar23 + (ulong)puVar20[3]) +
                              (ulong)*(uint *)((long)puVar23 + (ulong)puVar20[3]));
            *(long **)puVar26 = plVar12;
            *(ulong *)(puVar26 + 2) = (ulong)uVar38;
            lVar17 = (long)(int)*puVar23;
            puVar25 = (uint *)((long)puVar23 + (ulong)*(ushort *)((long)puVar23 + (6 - lVar17)));
            if (*(int *)((long)puVar25 + (ulong)*puVar25) != 0) {
              uVar14 = 0;
              lVar22 = lVar22 + (ulong)uVar32;
              uVar28 = uVar33;
              local_1a0 = puVar23;
              do {
                uVar34 = (ulong)*(ushort *)((long)puVar23 + (6 - (long)(int)lVar17));
                puVar23 = (uint *)((long)puVar23 + uVar34);
                uVar35 = (ulong)*puVar23;
                puVar23 = (uint *)((long)puVar23 + uVar14 * 4 + uVar35 + 4);
                uVar37 = (ulong)*puVar23;
                puVar23 = (uint *)((long)puVar23 + uVar37);
                puVar25 = puVar23 + 1;
                uVar32 = *puVar23;
                uVar33 = (ulong)uVar32;
                if (uVar32 == 0) {
                  uVar33 = strlen((char *)puVar25);
                }
                puVar23 = local_1a0;
                bVar5 = (byte)*puVar25;
                local_e8 = &DAT_cbf29ce484222645;
                if (bVar5 != 0) {
                  local_e8 = &DAT_cbf29ce484222645;
                  pbVar18 = (byte *)(lVar22 + uVar37 + uVar35 + uVar34);
                  do {
                    local_e8 = (undefined1 *)(((ulong)local_e8 ^ (ulong)bVar5) * 0x100000001b3);
                    bVar5 = *pbVar18;
                    pbVar18 = pbVar18 + 1;
                  } while (bVar5 != 0);
                }
                local_d0 = (long *)0x0;
                puVar27 = *(undefined8 **)(param_4 + 0x58);
                puVar3 = *(undefined8 **)(param_4 + 0x60);
                local_e0 = puVar25;
                local_d8 = (uint *)uVar33;
                if (puVar27 == puVar3) {
                  sVar9 = -1;
                }
                else {
                  do {
                    sVar9 = FUN_02b6f370(*puVar27,&local_e8);
                    if (-1 < sVar9) {
                      sVar9 = *(short *)((long)puVar27 + 10) + sVar9;
                      goto LAB_02ca17e8;
                    }
                    puVar27 = puVar27 + 2;
                  } while (puVar3 != puVar27);
                  sVar9 = -1;
                }
LAB_02ca17e8:
                iVar11 = (int)sVar9;
                uVar33 = (ulong)((int)uVar28 + 1);
                if (iVar11 < 0) {
                  iVar11 = -1;
                }
                *(int *)(local_198 + uVar28 * 4) = iVar11;
                if (local_d0 != (long *)0x0) {
                  (**(code **)(*local_d0 + 0x20))();
                }
                lVar17 = (long)(int)*puVar23;
                puVar25 = (uint *)((long)puVar23 + (ulong)*(ushort *)((long)puVar23 + (6 - lVar17)))
                ;
                uVar14 = uVar14 + 1;
                lVar22 = lVar22 + 4;
                uVar28 = uVar33;
              } while (uVar14 < *(uint *)((long)puVar25 + (ulong)*puVar25));
            }
          }
          else {
            plVar12 = (long *)(local_198 + uVar33 * 4);
            if (*(char *)((long)puVar23 + (ulong)puVar20[5]) == '\0') goto LAB_02ca169c;
            piVar1 = (int *)((long)puVar25 + (ulong)*puVar25);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
               (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar14 == 0)) {
              puVar25 = (uint *)0x0;
              if (iRam0000000000000000 != 0) goto LAB_02ca150c;
            }
            else {
              puVar25 = (uint *)((long)piVar1 + uVar14);
              puVar25 = (uint *)((long)puVar25 + (ulong)*puVar25);
              if (*puVar25 != 0) {
LAB_02ca150c:
                uVar14 = 0;
                local_1c8 = plVar12;
                lVar22 = (long)puVar25 + 9;
                local_1a0 = puVar26;
                do {
                  uVar35 = (ulong)puVar25[uVar14 + 1];
                  puVar19 = (uint *)((long)(puVar25 + uVar14 + 1) + uVar35);
                  puVar26 = puVar19 + 1;
                  uVar32 = *puVar19;
                  uVar28 = (ulong)uVar32;
                  if (uVar32 == 0) {
                    uVar28 = strlen((char *)puVar26);
                  }
                  bVar5 = (byte)*puVar26;
                  local_e8 = &DAT_cbf29ce484222645;
                  if (bVar5 != 0) {
                    local_e8 = &DAT_cbf29ce484222645;
                    pbVar18 = (byte *)(lVar22 + uVar35);
                    do {
                      local_e8 = (undefined1 *)(((ulong)local_e8 ^ (ulong)bVar5) * 0x100000001b3);
                      bVar5 = *pbVar18;
                      pbVar18 = pbVar18 + 1;
                    } while (bVar5 != 0);
                  }
                  local_e0 = puVar26;
                  local_d8 = (uint *)uVar28;
                  local_d0 = (long *)0x0;
                  puVar27 = *(undefined8 **)(param_4 + 0x58);
                  puVar3 = *(undefined8 **)(param_4 + 0x60);
                  if (puVar27 == puVar3) {
                    uVar32 = 0xffffffff;
                  }
                  else {
                    do {
                      sVar9 = FUN_02b6f370(*puVar27,&local_e8);
                      if (-1 < sVar9) {
                        sVar9 = *(short *)((long)puVar27 + 10) + sVar9;
                        goto LAB_02ca15f4;
                      }
                      puVar27 = puVar27 + 2;
                    } while (puVar3 != puVar27);
                    sVar9 = -1;
LAB_02ca15f4:
                    uVar32 = (uint)sVar9;
                    if ((int)uVar32 < 0) {
                      uVar32 = 0xffffffff;
                    }
                    if (local_d0 != (long *)0x0) {
                      (**(code **)(*local_d0 + 0x20))();
                    }
                  }
                  *(uint *)(local_198 + uVar33 * 4) = uVar32;
                  iVar11 = ((uint)(*(int *)(param_4 + 0x278) - *(int *)(param_4 + 0x270)) >> 4) *
                           -0x55550000;
                  uVar33 = (ulong)((int)uVar33 + 1);
                  if (iVar11 != 0) {
                    uVar28 = 0;
                    do {
                      for (uVar15 = *(ushort *)(puVar31 + uVar28 * 2); uVar15 != 0xffff;
                          uVar15 = *(ushort *)(puVar31 + (ulong)uVar15 * 2)) {
                        if (uVar32 == uVar15) {
                          *(int *)(local_198 + uVar33 * 4) = (int)uVar28;
                          uVar33 = (ulong)((int)uVar33 + 1);
                          break;
                        }
                      }
                      uVar28 = uVar28 + 1;
                    } while (uVar28 < (uint)(iVar11 >> 0x10));
                  }
                  uVar14 = uVar14 + 1;
                  lVar22 = lVar22 + 4;
                } while (uVar14 < *puVar25);
                plVar12 = local_1c8;
                puVar26 = local_1a0;
              }
            }
            *(long **)puVar26 = plVar12;
            *(long *)(puVar26 + 2) = (long)(local_198 + (uVar33 * 4 - (long)plVar12)) >> 2;
          }
          puVar19 = (uint *)((long)local_1b0 + 1);
          lVar22 = local_1b8 + 4;
        } while (puVar19 != local_220);
        local_204 = (uint)uVar33;
        goto LAB_02ca1848;
      }
    }
    else {
      uVar14 = (ulong)*(ushort *)((long)local_200 + (6 - lVar22));
      if (uVar14 != 0) {
        uVar28 = (ulong)*(uint *)((long)local_200 + uVar14);
        puVar25 = (uint *)((long)((long)local_200 + uVar14) + uVar28);
        if ((puVar25 != (uint *)0x0) && (uVar32 = *puVar25, uVar32 != 0)) {
          lVar36 = uVar14 + uVar28;
          lVar17 = 0;
          do {
            uVar14 = (ulong)*(uint *)((long)local_200 + lVar17 + lVar36 + 4);
            lVar29 = uVar14 + *(ushort *)
                               ((long)local_200 +
                               lVar17 + (uVar14 - (long)*(int *)((long)local_200 +
                                                                lVar17 + uVar14 + lVar36 + 4)) +
                                        lVar36 + 10);
            lVar29 = lVar17 + lVar29 + (ulong)*(uint *)((long)local_200 +
                                                       lVar17 + lVar29 + lVar36 + 4) + lVar36;
            lVar17 = lVar17 + 4;
            uVar38 = *(int *)((long)local_200 + lVar29 + 4) + uVar38;
          } while ((ulong)uVar32 * 4 != lVar17);
        }
      }
      if (uVar15 < 9) goto LAB_02ca1340;
      uVar14 = (ulong)*(ushort *)((long)local_200 + (8 - lVar22));
      if (uVar14 != 0) {
        uVar28 = (ulong)*(uint *)((long)local_200 + uVar14);
        puVar25 = (uint *)((long)((long)local_200 + uVar14) + uVar28);
        if ((puVar25 != (uint *)0x0) && (uVar32 = *puVar25, uVar32 != 0)) {
          lVar36 = uVar14 + uVar28;
          lVar17 = 0;
          do {
            uVar14 = (ulong)*(uint *)((long)local_200 + lVar17 + lVar36 + 4);
            lVar29 = uVar14 + *(ushort *)
                               ((long)local_200 +
                               lVar17 + (uVar14 - (long)*(int *)((long)local_200 +
                                                                lVar17 + uVar14 + lVar36 + 4)) +
                                        lVar36 + 10);
            lVar29 = lVar17 + lVar29 + (ulong)*(uint *)((long)local_200 +
                                                       lVar17 + lVar29 + lVar36 + 4) + lVar36;
            lVar17 = lVar17 + 4;
            uVar38 = *(int *)((long)local_200 + lVar29 + 4) + uVar38;
          } while ((ulong)uVar32 * 4 != lVar17);
          goto LAB_02ca1340;
        }
      }
      local_198 = puVar31 + -((ulong)uVar38 * 4 + 0xf & 0x7fffffff0);
      uVar14 = (ulong)*(ushort *)((long)local_200 + (4 - lVar22));
      if (uVar14 != 0) goto LAB_02ca139c;
LAB_02ca1834:
      local_228 = (undefined1 *)0x0;
      plVar24 = (long *)local_198;
    }
    local_220 = (uint *)0x0;
    local_204 = 0;
  }
LAB_02ca1848:
  if (*(long **)(param_4 + 0x60) == *(long **)(param_4 + 0x58)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  sVar9 = (**(code **)(*(long *)(*(long *)(**(long **)(param_4 + 0x58) + 0x58) + 0x58) + 0x10))();
  local_e0 = (uint *)0x0;
  local_d8 = local_1a8;
  local_b8 = (long *)0x0;
  local_b0 = local_1a8;
  local_e8 = (undefined1 *)0x0;
  local_c0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_d0 = (long *)0x666666666666666;
  uStack_c8 = 0;
  local_a8 = 0x666666666666666;
  uStack_a0 = 0;
  local_88 = 1.0;
  puVar20 = (ushort *)((long)local_200 - (long)*local_200);
  uVar15 = *puVar20;
  local_1e0 = tpidr_el0;
  if (uVar15 < 7) {
    local_1b8 = 0;
    local_1b0 = (uint *)0x0;
    plVar24 = (long *)0x0;
    pcVar13 = "";
    local_218 = (uint *)0x0;
    local_1f0 = (long *)0x0;
    local_198 = (undefined1 *)0x0;
  }
  else {
    uVar14 = (ulong)puVar20[3];
    lVar22 = -(long)*local_200;
    if (uVar14 == 0) {
LAB_02ca247c:
      local_218 = (uint *)0x0;
      local_1f0 = (long *)0x0;
    }
    else {
      uVar28 = (ulong)*(uint *)((long)local_200 + uVar14);
      puVar25 = (uint *)((long)((long)local_200 + uVar14) + uVar28);
      if (puVar25 == (uint *)0x0) goto LAB_02ca247c;
      local_218 = (uint *)(ulong)*puVar25;
      plVar24 = (long *)((long)plVar24 + -((long)local_218 * 0x28 + 0xfU & 0x7ffffffff0));
      local_1f0 = plVar24;
      if (*puVar25 == 0) {
        local_218 = (uint *)0x0;
      }
      else {
        local_1d0 = (ulong)(uint)(int)sVar9;
        local_230 = puVar25 + 1;
        local_1b0 = (uint *)(long)(int)sVar9;
        local_1e8 = &local_b8;
        local_1d8 = &local_188;
        puVar25 = (uint *)0x0;
        lVar22 = (long)local_200 + uVar28 + uVar14 + 0xd;
        do {
          uVar32 = local_204;
          uVar14 = (ulong)local_230[(long)puVar25];
          piVar1 = (int *)((long)(local_230 + (long)puVar25) + uVar14);
          puVar20 = (ushort *)((long)piVar1 - (long)*piVar1);
          if (*puVar20 < 0xb) {
            local_1c0 = (uint *)(local_1f0 + (long)puVar25 * 5);
            if (*puVar20 < 5) {
              lVar17 = 0;
              lVar36 = 0;
            }
            else {
              lVar17 = 0;
              uVar28 = (ulong)puVar20[2];
              if (uVar28 != 0) goto LAB_02ca19d0;
              lVar36 = 0;
            }
          }
          else {
            lVar17 = 0;
            if ((ulong)puVar20[5] != 0) {
              puVar19 = (uint *)((long)piVar1 + (ulong)puVar20[5]);
              lVar17 = (long)puVar19 + (ulong)*puVar19;
            }
            local_1c0 = (uint *)(local_1f0 + (long)puVar25 * 5);
            uVar28 = (ulong)puVar20[2];
            lVar36 = 0;
            if (uVar28 != 0) {
LAB_02ca19d0:
              lVar36 = (long)((long)piVar1 + uVar28) + (ulong)*(uint *)((long)piVar1 + uVar28);
            }
          }
          puVar26 = local_1c0;
          local_1f0[(long)puVar25 * 5 + 2] = lVar36 + 4;
          uVar4 = *(undefined4 *)(lVar17 + 0xc);
          *(undefined8 *)((long)local_1f0 + (long)puVar25 * 0x28 + 0x1c) =
               *(undefined8 *)(lVar17 + 4);
          *(undefined4 *)((long)local_1f0 + (long)puVar25 * 0x28 + 0x24) = uVar4;
          puVar19 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
          uVar38 = *(uint *)((long)puVar19 + (ulong)*puVar19);
          *(undefined1 **)local_1c0 = local_198 + (ulong)local_204 * 4;
          *(ulong *)(puVar26 + 2) = (ulong)uVar38;
          if (*(ushort *)((long)piVar1 - (long)*piVar1) < 9) {
            uVar38 = 0;
          }
          else {
            uVar28 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4];
            uVar38 = 0;
            if (uVar28 != 0) {
              uVar38 = (uint)*(byte *)((long)piVar1 + uVar28);
            }
          }
          *(uint *)(local_1f0 + (long)puVar25 * 5 + 3) = uVar38;
          lVar17 = (long)*piVar1;
          puVar19 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - lVar17)));
          local_210 = lVar22;
          local_1f8 = puVar25;
          if (*(int *)((long)puVar19 + (ulong)*puVar19) != 0) {
            uVar28 = 0;
            lVar22 = lVar22 + uVar14;
            uVar38 = uVar32;
            do {
              uVar33 = (ulong)*(ushort *)((long)piVar1 + (6 - (long)(int)lVar17));
              puVar25 = (uint *)((long)piVar1 + uVar33);
              uVar35 = (ulong)*puVar25;
              puVar25 = (uint *)((long)puVar25 + uVar28 * 4 + uVar35 + 4);
              uVar37 = (ulong)*puVar25;
              puVar25 = (uint *)((long)puVar25 + uVar37);
              puVar19 = puVar25 + 1;
              uVar32 = *puVar25;
              uVar14 = (ulong)uVar32;
              if (uVar32 == 0) {
                uVar14 = strlen((char *)puVar19);
              }
              bVar5 = (byte)*puVar19;
              local_190 = (long *)&DAT_cbf29ce484222645;
              if (bVar5 != 0) {
                local_190 = (long *)&DAT_cbf29ce484222645;
                pbVar18 = (byte *)(lVar22 + uVar37 + uVar35 + uVar33);
                do {
                  local_190 = (long *)(((ulong)local_190 ^ (ulong)bVar5) * 0x100000001b3);
                  bVar5 = *pbVar18;
                  pbVar18 = pbVar18 + 1;
                } while (bVar5 != 0);
              }
              local_178 = (uint *)0x0;
              puVar27 = *(undefined8 **)(param_4 + 0x58);
              puVar3 = *(undefined8 **)(param_4 + 0x60);
              local_188 = puVar19;
              local_180 = (undefined1 *)uVar14;
              if (puVar27 == puVar3) {
                sVar9 = -1;
              }
              else {
                do {
                  sVar9 = FUN_02b6f370(*puVar27,&local_190);
                  if (-1 < sVar9) {
                    sVar9 = *(short *)((long)puVar27 + 10) + sVar9;
                    goto LAB_02ca1b94;
                  }
                  puVar27 = puVar27 + 2;
                } while (puVar3 != puVar27);
                sVar9 = -1;
              }
LAB_02ca1b94:
              iVar11 = (int)sVar9;
              uVar32 = uVar38 + 1;
              if (iVar11 < 0) {
                iVar11 = -1;
              }
              *(int *)(local_198 + (ulong)uVar38 * 4) = iVar11;
              if (local_178 != (uint *)0x0) {
                (**(code **)(*(long *)local_178 + 0x20))();
              }
              lVar17 = (long)*piVar1;
              puVar25 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - lVar17)));
              uVar28 = uVar28 + 1;
              lVar22 = lVar22 + 4;
              uVar38 = uVar32;
            } while (uVar28 < *(uint *)((long)puVar25 + (ulong)*puVar25));
          }
          local_1c8 = local_1f0 + (long)local_1f8 * 5 + 1;
          local_204 = uVar32;
          if (*local_1c8 != 0) {
            puVar25 = (uint *)0x0;
            puVar19 = local_1b0;
            do {
              uVar32 = *(uint *)(*(long *)local_1c0 + (long)puVar25 * 4);
              plVar12 = (long *)(**(code **)(*(long *)local_1a8 + 0x10))(local_1a8,0x38,8);
              local_1a0 = puVar25;
              if (plVar12 == (long *)0x0) {
                local_180 = (undefined1 *)0x0;
                local_178 = (uint *)0x0;
                local_190 = (long *)0x0;
                local_188 = (uint *)0x0;
              }
              else {
                if ((*PTR_DAT_04379520 & 1) == 0) {
                  iVar11 = __cxa_guard_acquire(PTR_DAT_04379520);
                  puVar6 = PTR_DAT_04379528;
                  if (iVar11 != 0) {
                    FUN_008a62a4(PTR_DAT_04379528);
                    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379520);
                  }
                }
                lVar22 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
                if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_02ca2ddc;
                *(uint **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = local_1a8;
                *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
                plVar12[4] = 0x7fffffffffffffff;
                plVar12[5] = 0;
                *plVar12 = 0;
                plVar12[1] = 0;
                plVar12[2] = 0;
                plVar12[3] = (long)local_1a8;
                *(undefined4 *)(plVar12 + 6) = 0;
                local_190 = plVar12;
                local_188 = local_1a8;
                local_178 = (uint *)&DAT_00000008;
                local_180 = (undefined1 *)0x38;
                *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
              }
              if (0 < (int)local_1d0) {
                uVar14 = 0;
                plVar21 = plVar12 + 3;
                do {
                  if (uVar32 == *(ushort *)(puVar31 + uVar14 * 2)) {
                    lVar22 = FUN_02b68dac(param_4,uVar14 & 0xffffffff);
                    __haystack = *(char **)(lVar22 + 8);
                    pcVar13 = strstr(__haystack,"_roll");
                    if (pcVar13 == (char *)0x0) {
                      pcVar13 = strstr(__haystack,"_sub");
                      if (pcVar13 == (char *)0x0) {
                        local_128 = CONCAT62(local_128._2_6_,(short)uVar14);
                        uVar28 = plVar12[1];
                        if (uVar28 < (ulong)plVar12[2]) {
                          FUN_028cef9c(plVar21,uVar28,&local_128);
                          plVar12[1] = plVar12[1] + 2;
                        }
                        else {
                          uVar33 = plVar12[4];
                          lVar22 = (long)(uVar28 - *plVar12) >> 1;
                          uVar28 = lVar22 + 1;
                          if (0x7ffffffffffffffe < uVar33) {
                            uVar33 = 0x7fffffffffffffff;
                          }
                          if (uVar33 < uVar28) {
                    /* WARNING: Subroutine does not return */
                            std::__vector_base_common<true>::__throw_length_error();
                          }
                          uVar35 = plVar12[2] - *plVar12;
                          if (uVar28 <= uVar35) {
                            uVar28 = uVar35;
                          }
                          if (uVar33 >> 1 <= (ulong)((long)uVar35 >> 1)) {
                            uVar28 = uVar33;
                          }
                          if (uVar28 == 0) {
                            lVar17 = 0;
                          }
                          else {
                            lVar17 = (**(code **)(*(long *)*plVar21 + 0x10))
                                               ((long *)*plVar21,uVar28 << 1,2);
                            if (lVar17 == 0) {
                              (**(code **)(*(long *)*plVar21 + 0xb8))();
                            }
                          }
                          lVar36 = lVar17 + lVar22 * 2;
                          local_1b8 = lVar17 + uVar28 * 2;
                          FUN_028cef9c(plVar21,lVar36,&local_128);
                          lVar17 = *plVar12;
                          lVar29 = plVar12[1];
                          lVar22 = lVar36 + 2;
                          if (lVar29 != lVar17) {
                            do {
                              lVar36 = lVar36 + -2;
                              lVar29 = lVar29 + -2;
                              FUN_028cef9c(plVar21,lVar36,lVar29);
                            } while (lVar17 != lVar29);
                            lVar17 = *plVar12;
                          }
                          *plVar12 = lVar36;
                          plVar12[1] = lVar22;
                          lVar22 = plVar12[2];
                          plVar12[2] = local_1b8;
                          if (lVar17 != 0) {
                            plVar30 = (long *)*plVar21;
                            uVar28 = (**(code **)(*plVar30 + 0xc0))(plVar30);
                            if ((uVar28 & 1) != 0) {
                              if (*(char *)(local_1e0 + 0x38d488) == '\0') {
                                *(undefined1 *)(local_1e0 + 0x38d488) = 1;
                                *(undefined8 *)(local_1e0 + 0x38d478) = 0;
                                *(undefined8 *)(local_1e0 + 0x38d480) = 0;
                                __cxa_thread_atexit(&LAB_02bcbe54,local_1e0 + 0x80078,
                                                    &PTR_LOOP_0411a000);
                              }
                              if (0 < *(int *)(local_1e0 + 0x38d480)) {
                                FUN_02bcc824(plVar30,lVar17,lVar22 - lVar17,2);
                                goto LAB_02ca1d00;
                              }
                            }
                            (**(code **)(*plVar30 + 0x18))(plVar30,lVar17,lVar22 - lVar17,2);
                          }
                        }
LAB_02ca1d00:
                        puVar19 = local_1b0;
                      }
                    }
                  }
                  uVar14 = uVar14 + 1;
                } while ((uint *)uVar14 != puVar19);
              }
              plVar12 = (long *)(**(code **)(*(long *)local_b0 + 0x10))(local_b0,0x38,8);
              if (plVar12 == (long *)0x0) {
                (**(code **)(*(long *)local_b0 + 0xb8))();
              }
              puVar26 = local_b0;
              if ((*PTR_DAT_04379520 & 1) == 0) {
                iVar11 = __cxa_guard_acquire(PTR_DAT_04379520);
                puVar6 = PTR_DAT_04379528;
                if (iVar11 != 0) {
                  FUN_008a62a4(PTR_DAT_04379528);
                  FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379520);
                }
              }
              lVar22 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
              plVar21 = local_190;
              puVar25 = local_1a0;
              if (lVar22 != 0) {
                if (0xf < *(ulong *)(lVar22 + 0x80)) {
LAB_02ca2ddc:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(uint **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = puVar26;
                *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
              }
              *(short *)(plVar12 + 2) = (short)uVar32;
              local_190 = (long *)0x0;
              plVar12[3] = (long)plVar21;
              puVar26 = local_1d8[1];
              puVar23 = local_1d8[2];
              plVar12[4] = (long)*local_1d8;
              plVar12[5] = (long)puVar26;
              plVar12[6] = (long)puVar23;
              if (lVar22 != 0) {
                *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
                uVar32 = (uint)*(ushort *)(plVar12 + 2);
              }
              uVar14 = (ulong)(short)uVar32;
              *plVar12 = 0;
              plVar12[1] = uVar14;
              if (local_e0 == (uint *)0x0) {
LAB_02ca2164:
                if ((local_e0 == (uint *)0x0) ||
                   (local_88 * (float)local_e0 < (float)(local_90 + 1))) {
                  uVar14 = (ulong)(local_e0 < 3 || ((ulong)local_e0 & (long)local_e0 - 1U) != 0) |
                           (long)local_e0 << 1;
                  uVar28 = (ulong)((float)(local_90 + 1) / local_88);
                  if (uVar28 <= uVar14) {
                    uVar28 = uVar14;
                  }
                  if (uVar28 - 1 == 0) {
                    uVar28 = 2;
                    bVar7 = local_e0 < 3;
                    uVar14 = uVar28;
                    if (1 < local_e0) goto LAB_02ca21c8;
LAB_02ca2268:
                    FUN_02ca316c(&local_e8,uVar28);
                  }
                  else {
                    if ((uVar28 & uVar28 - 1) != 0) {
                      uVar28 = std::__next_prime(uVar28);
                    }
                    bVar7 = local_e0 <= uVar28;
                    uVar14 = uVar28;
                    if (local_e0 < uVar28) goto LAB_02ca2268;
LAB_02ca21c8:
                    puVar25 = local_e0;
                    if (!bVar7) {
                      uVar28 = (ulong)((float)local_90 / local_88);
                      if ((local_e0 < 3) ||
                         (uVar33 = (long)local_e0 - ((ulong)local_e0 >> 1 & 0x5555555555555555),
                         uVar33 = (uVar33 & 0x3333333333333333) + (uVar33 >> 2 & 0x3333333333333333)
                         , 1 < (uVar33 + (uVar33 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38)) {
                        uVar28 = std::__next_prime(uVar28);
                      }
                      else if (1 < uVar28) {
                        uVar28 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar28 - 1) & 0x3f);
                      }
                      if (uVar28 <= uVar14) {
                        uVar28 = uVar14;
                      }
                      if (uVar28 < puVar25) goto LAB_02ca2268;
                    }
                  }
                  uVar14 = plVar12[1];
                }
                uVar28 = (long)local_e0 - ((ulong)local_e0 >> 1 & 0x5555555555555555);
                uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
                uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar28 < 2) {
                  uVar14 = (long)local_e0 - 1U & uVar14;
                }
                else if (local_e0 <= uVar14) {
                  uVar33 = 0;
                  if (local_e0 != (uint *)0x0) {
                    uVar33 = uVar14 / (ulong)local_e0;
                  }
                  uVar14 = uVar14 - uVar33 * (long)local_e0;
                }
                plVar21 = *(long **)(local_e8 + uVar14 * 8);
                if (plVar21 == (long *)0x0) {
                  *plVar12 = (long)local_b8;
                  *(long ***)(local_e8 + uVar14 * 8) = local_1e8;
                  local_b8 = plVar12;
                  if (*plVar12 != 0) {
                    uVar14 = *(ulong *)(*plVar12 + 8);
                    if (uVar28 < 2) {
                      uVar14 = uVar14 & (long)local_e0 - 1U;
                    }
                    else if (local_e0 <= uVar14) {
                      uVar28 = 0;
                      if (local_e0 != (uint *)0x0) {
                        uVar28 = uVar14 / (ulong)local_e0;
                      }
                      uVar14 = uVar14 - uVar28 * (long)local_e0;
                    }
                    plVar21 = (long *)(local_e8 + uVar14 * 8);
                    goto LAB_02ca1bf8;
                  }
                }
                else {
                  *plVar12 = *plVar21;
LAB_02ca1bf8:
                  *plVar21 = (long)plVar12;
                }
                local_90 = local_90 + 1;
                puVar25 = local_1a0;
              }
              else {
                uVar28 = (long)local_e0 - ((ulong)local_e0 >> 1 & 0x5555555555555555);
                uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
                uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar28 < 2) {
                  uVar33 = (long)local_e0 - 1U & uVar14;
                }
                else {
                  uVar33 = uVar14;
                  if (local_e0 <= uVar14) {
                    uVar33 = 0;
                    if (local_e0 != (uint *)0x0) {
                      uVar33 = uVar14 / (ulong)local_e0;
                    }
                    uVar33 = uVar14 - uVar33 * (long)local_e0;
                  }
                }
                plVar21 = *(long **)(local_e8 + uVar33 * 8);
                if (plVar21 == (long *)0x0) goto LAB_02ca2164;
                if (uVar28 < 2) {
                  do {
                    plVar21 = (long *)*plVar21;
                    if ((plVar21 == (long *)0x0) || ((plVar21[1] & (long)local_e0 - 1U) != uVar33))
                    goto LAB_02ca2164;
                  } while ((uint)*(ushort *)(plVar21 + 2) != (uVar32 & 0xffff));
                }
                else {
                  do {
                    plVar21 = (long *)*plVar21;
                    if (plVar21 == (long *)0x0) goto LAB_02ca2164;
                    uVar28 = plVar21[1];
                    if (local_e0 <= uVar28) {
                      uVar35 = 0;
                      if (local_e0 != (uint *)0x0) {
                        uVar35 = uVar28 / (ulong)local_e0;
                      }
                      uVar28 = uVar28 - uVar35 * (long)local_e0;
                    }
                    if (uVar28 != uVar33) goto LAB_02ca2164;
                  } while ((uint)*(ushort *)(plVar21 + 2) != (uVar32 & 0xffff));
                }
                if (plVar12 != (long *)0x0) {
                  lVar22 = plVar12[3];
                  plVar12[3] = 0;
                  if (lVar22 != 0) {
                    FUN_02ca2e28();
                  }
                  puVar26 = local_b0;
                  uVar14 = (**(code **)(*(long *)local_b0 + 0xc0))(local_b0);
                  if ((uVar14 & 1) != 0) {
                    if (*(char *)(local_1e0 + 0x38d488) == '\0') {
                      *(undefined1 *)(local_1e0 + 0x38d488) = 1;
                      *(undefined8 *)(local_1e0 + 0x38d478) = 0;
                      *(undefined8 *)(local_1e0 + 0x38d480) = 0;
                      __cxa_thread_atexit(&LAB_02bcbe54,local_1e0 + 0x80078,&PTR_LOOP_0411a000);
                    }
                    if (0 < *(int *)(local_1e0 + 0x38d480)) {
                      FUN_02bcc824(puVar26,plVar12,0x38,8);
                      goto LAB_02ca1c0c;
                    }
                  }
                  (**(code **)(*(long *)puVar26 + 0x18))(puVar26,plVar12,0x38,8);
                }
              }
LAB_02ca1c0c:
              puVar25 = (uint *)((long)puVar25 + 1);
            } while (puVar25 < (uint *)*local_1c8);
          }
          puVar25 = (uint *)((long)local_1f8 + 1);
          lVar22 = local_210 + 4;
        } while (puVar25 != local_218);
        lVar22 = -(long)*local_200;
        uVar15 = *(ushort *)((long)local_200 - (long)*local_200);
      }
    }
    if (uVar15 < 9) {
      local_1b8 = 0;
      local_1b0 = (uint *)0x0;
    }
    else {
      uVar14 = (ulong)*(ushort *)((long)local_200 + lVar22 + 8);
      if (uVar14 == 0) {
LAB_02ca2708:
        local_1b8 = 0;
        local_1b0 = (uint *)0x0;
      }
      else {
        uVar28 = (ulong)*(uint *)((long)local_200 + uVar14);
        puVar25 = (uint *)((long)((long)local_200 + uVar14) + uVar28);
        if (puVar25 == (uint *)0x0) goto LAB_02ca2708;
        local_1b0 = (uint *)(ulong)*puVar25;
        local_1b8 = (long)plVar24 - ((long)local_1b0 * 0x18 + 0xfU & 0x3ffffffff0);
        if (*puVar25 == 0) {
          local_1b0 = (uint *)0x0;
        }
        else {
          local_1c0 = puVar25 + 1;
          uVar33 = 0;
          puVar25 = (uint *)((long)local_200 + uVar28 + uVar14 + 0xd);
          uVar32 = local_204;
          do {
            uVar14 = (ulong)local_1c0[uVar33];
            piVar1 = (int *)((long)(local_1c0 + uVar33) + uVar14);
            if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
              lVar22 = 0;
            }
            else {
              uVar28 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
              lVar22 = 0;
              if (uVar28 != 0) {
                puVar19 = (uint *)((long)piVar1 + uVar28);
                lVar22 = (long)puVar19 + (ulong)*puVar19;
              }
            }
            plVar24 = (long *)(local_1b8 + uVar33 * 0x18);
            plVar24[2] = lVar22 + 4;
            puVar19 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1))
                              );
            uVar38 = *(uint *)((long)puVar19 + (ulong)*puVar19);
            *plVar24 = (long)(local_198 + (ulong)uVar32 * 4);
            plVar24[1] = (ulong)uVar38;
            lVar22 = (long)*piVar1;
            puVar19 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - lVar22)));
            local_1a0 = puVar25;
            if (*(int *)((long)puVar19 + (ulong)*puVar19) != 0) {
              uVar28 = 0;
              lVar17 = (long)puVar25 + uVar14;
              uVar38 = uVar32;
              do {
                uVar34 = (ulong)*(ushort *)((long)piVar1 + (6 - (long)(int)lVar22));
                puVar25 = (uint *)((long)piVar1 + uVar34);
                uVar35 = (ulong)*puVar25;
                puVar25 = (uint *)((long)puVar25 + uVar28 * 4 + uVar35 + 4);
                uVar37 = (ulong)*puVar25;
                puVar25 = (uint *)((long)puVar25 + uVar37);
                puVar19 = puVar25 + 1;
                uVar32 = *puVar25;
                uVar14 = (ulong)uVar32;
                if (uVar32 == 0) {
                  uVar14 = strlen((char *)puVar19);
                }
                bVar5 = (byte)*puVar19;
                local_190 = (long *)&DAT_cbf29ce484222645;
                if (bVar5 != 0) {
                  local_190 = (long *)&DAT_cbf29ce484222645;
                  pbVar18 = (byte *)(lVar17 + uVar37 + uVar35 + uVar34);
                  do {
                    local_190 = (long *)(((ulong)local_190 ^ (ulong)bVar5) * 0x100000001b3);
                    bVar5 = *pbVar18;
                    pbVar18 = pbVar18 + 1;
                  } while (bVar5 != 0);
                }
                local_178 = (uint *)0x0;
                puVar3 = *(undefined8 **)(param_4 + 0x60);
                local_188 = puVar19;
                local_180 = (undefined1 *)uVar14;
                for (puVar27 = *(undefined8 **)(param_4 + 0x58); puVar27 != puVar3;
                    puVar27 = puVar27 + 2) {
                  sVar9 = FUN_02b6f370(*puVar27,&local_190);
                  if (-1 < sVar9) {
                    sVar9 = *(short *)((long)puVar27 + 10) + sVar9;
                    goto LAB_02ca26cc;
                  }
                }
                sVar9 = -1;
LAB_02ca26cc:
                iVar11 = (int)sVar9;
                uVar32 = uVar38 + 1;
                if (iVar11 < 0) {
                  iVar11 = -1;
                }
                *(int *)(local_198 + (ulong)uVar38 * 4) = iVar11;
                if (local_178 != (uint *)0x0) {
                  (**(code **)(*(long *)local_178 + 0x20))();
                }
                lVar22 = (long)*piVar1;
                puVar25 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - lVar22)));
                uVar28 = uVar28 + 1;
                lVar17 = lVar17 + 4;
                uVar38 = uVar32;
              } while (uVar28 < *(uint *)((long)puVar25 + (ulong)*puVar25));
            }
            uVar33 = uVar33 + 1;
            puVar25 = local_1a0 + 1;
          } while ((uint *)uVar33 != local_1b0);
          lVar22 = -(long)*local_200;
          uVar15 = *(ushort *)((long)local_200 - (long)*local_200);
        }
      }
      if ((10 < uVar15) && (uVar14 = (ulong)*(ushort *)((long)local_200 + lVar22 + 10), uVar14 != 0)
         ) {
        uVar28 = (ulong)*(uint *)((long)local_200 + uVar14);
        piVar1 = (int *)((long)((long)local_200 + uVar14) + uVar28);
        if (piVar1 != (int *)0x0) {
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
             (uVar33 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar33 == 0)) {
            if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar11 != 0)) {
              FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a0d0);
            }
            local_248 = *(undefined1 **)PTR_DAT_0437a0d8;
            pcVar13 = *(char **)(PTR_DAT_0437a0d8 + 8);
            local_198 = *(undefined1 **)(PTR_DAT_0437a0d8 + 0x10);
            plVar24 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
            if (plVar24 != (long *)0x0) {
              (**(code **)(*plVar24 + 0x18))(plVar24);
            }
          }
          else {
            puVar25 = (uint *)((long)piVar1 + uVar33);
            uVar35 = (ulong)*puVar25;
            pcVar13 = (char *)((long)puVar25 + uVar35 + 4);
            local_198 = (undefined1 *)strlen(pcVar13);
            bVar5 = *(byte *)((long)puVar25 + uVar35 + 4);
            if (bVar5 != 0) {
              local_248 = &DAT_cbf29ce484222645;
              pbVar18 = (byte *)((long)local_200 + uVar35 + uVar33 + uVar28 + uVar14 + 5);
              do {
                local_248 = (undefined1 *)(((ulong)local_248 ^ (ulong)bVar5) * 0x100000001b3);
                bVar5 = *pbVar18;
                pbVar18 = pbVar18 + 1;
              } while (bVar5 != 0);
            }
            plVar24 = (long *)0x0;
          }
          goto LAB_02ca2838;
        }
      }
    }
    plVar24 = (long *)0x0;
    local_198 = (undefined1 *)0x0;
    pcVar13 = "";
  }
LAB_02ca2838:
  local_118 = 0;
  puStack_110 = local_1a8;
  local_128 = 0;
  local_120 = 0;
  uVar28 = local_240 & 0x1f;
  local_108 = 0x3fffffffffffffff;
  uStack_100 = 0;
  uVar14 = local_238 >> 5;
  if ((local_240 & 0x1f) != 0) {
    uVar14 = uVar14 + 1;
  }
  local_f8 = 0;
  local_f0 = 0;
  local_190 = (long *)((ulong)local_190 & 0xffffffff00000000);
  if (uVar14 != 0) {
    FUN_02b6e294(&local_128,uVar14,&local_190);
  }
  local_f0 = local_238;
  if (uVar28 != 0) {
    *(uint *)(local_120 + -4) = *(uint *)(local_120 + -4) & (-1 << uVar28 ^ 0xffffffffU);
  }
  if (0 < local_254) {
    uVar32 = 0;
    sVar9 = (short)local_240;
    do {
      plVar12 = (long *)FUN_02b68dac(param_4,uVar32);
      if (*plVar12 == -0x6b51554b8c8ea611) goto LAB_02ca28f8;
      uVar32 = uVar32 + 1;
    } while ((int)uVar32 < (int)sVar9);
    uVar32 = 0;
LAB_02ca28f8:
    uVar38 = 0;
    do {
      uVar16 = 1 << (ulong)(uVar38 & 0x1f);
      if (uVar32 < (uint)(int)(short)uVar38) {
        uVar10 = uVar38;
        do {
          uVar15 = *(ushort *)(*(long *)(param_4 + 200) + (long)(short)uVar10 * 2);
          if ((1 << (ulong)(uVar15 & 0x1f) &
              *(uint *)(*(long *)(param_4 + 0x178) +
                       ((ulong)(long)(short)uVar15 >> 3 & 0x1ffffffffffffffc))) == 0) {
            puVar25 = (uint *)(local_128 + (ulong)(uVar38 >> 5) * 4);
            uVar16 = *puVar25 & (uVar16 ^ 0xffffffff);
            goto LAB_02ca2918;
          }
          uVar10 = FUN_02b68b4c(param_4);
        } while ((int)uVar32 < (int)(short)uVar10);
      }
      puVar25 = (uint *)(local_128 + (ulong)(uVar38 >> 5) * 4);
      uVar16 = *puVar25 | uVar16;
LAB_02ca2918:
      uVar38 = uVar38 + 1;
      *puVar25 = uVar16;
    } while ((int)uVar38 < (int)sVar9);
  }
  local_170 = local_1b8;
  local_138 = (long *)0x0;
  lStack_130 = 0;
  local_178 = local_220;
  local_180 = local_228;
  local_148 = (long *)0x0;
  local_140 = (undefined1 **)0x0;
  local_188 = local_218;
  local_190 = local_1f0;
  local_160 = local_248;
  local_168 = (ulong)local_1b0;
  local_150 = (size_t)local_198;
  pcStack_158 = pcVar13;
  if (plVar24 == (long *)0x0) {
    local_148 = (long *)0x0;
    plVar12 = local_148;
  }
  else {
    (**(code **)(*plVar24 + 0x18))(plVar24);
    plVar12 = plVar24;
    if (local_148 != (long *)0x0) {
      lVar22 = *local_148;
      local_148 = plVar24;
      (**(code **)(lVar22 + 0x20))();
      plVar12 = local_148;
    }
  }
  local_148 = plVar12;
  local_140 = &local_e8;
  local_138 = &local_128;
  lStack_130 = param_4;
  FUN_02ca35c8(local_250,local_1a8,&local_190);
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  puVar25 = puStack_110;
  lVar22 = local_128;
  if (local_128 != 0) {
    local_120 = local_128;
    lVar17 = local_118 - local_128;
    uVar14 = (**(code **)(*(long *)puStack_110 + 0xc0))(puStack_110);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(local_1e0 + 0x38d488) == '\0') {
        *(undefined1 *)(local_1e0 + 0x38d488) = 1;
        *(undefined8 *)(local_1e0 + 0x38d478) = 0;
        *(undefined8 *)(local_1e0 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,local_1e0 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(local_1e0 + 0x38d480)) {
        FUN_02bcc824(puVar25,lVar22,lVar17,4);
        goto joined_r0x02ca2aa0;
      }
    }
    (**(code **)(*(long *)puVar25 + 0x18))(puVar25,lVar22,lVar17,4);
  }
joined_r0x02ca2aa0:
  puVar31 = local_e8;
  puVar25 = local_d8;
  plVar12 = local_b8;
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x20))(plVar24);
    puVar31 = local_e8;
    puVar25 = local_d8;
    plVar12 = local_b8;
  }
  do {
    while( true ) {
      local_d8 = puVar25;
      if (plVar12 == (long *)0x0) {
        local_e8 = (undefined1 *)0x0;
        if (puVar31 == (undefined1 *)0x0) {
          return;
        }
        lVar22 = (long)local_e0 << 3;
        uVar14 = (**(code **)(*(long *)puVar25 + 0xc0))(puVar25);
        if ((uVar14 & 1) != 0) {
          if (*(char *)(local_1e0 + 0x38d488) == '\0') {
            *(undefined1 *)(local_1e0 + 0x38d488) = 1;
            *(undefined8 *)(local_1e0 + 0x38d478) = 0;
            *(undefined8 *)(local_1e0 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,local_1e0 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(local_1e0 + 0x38d480)) {
            FUN_02bcc824(puVar25,puVar31,lVar22,8);
            return;
          }
        }
        (**(code **)(*(long *)puVar25 + 0x18))(puVar25,puVar31,lVar22,8);
        return;
      }
      lVar22 = plVar12[3];
      plVar12[3] = 0;
      plVar24 = (long *)*plVar12;
      local_e8 = puVar31;
      if (lVar22 != 0) {
        FUN_02ca2e28(plVar12 + 4);
      }
      puVar25 = local_b0;
      uVar14 = (**(code **)(*(long *)local_b0 + 0xc0))(local_b0);
      if ((uVar14 & 1) != 0) break;
LAB_02ca2ae4:
      (**(code **)(*(long *)puVar25 + 0x18))(puVar25,plVar12,0x38,8);
      puVar31 = local_e8;
      puVar25 = local_d8;
      plVar12 = plVar24;
    }
    if (*(char *)(local_1e0 + 0x38d488) == '\0') {
      *(undefined1 *)(local_1e0 + 0x38d488) = 1;
      *(undefined8 *)(local_1e0 + 0x38d478) = 0;
      *(undefined8 *)(local_1e0 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,local_1e0 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(local_1e0 + 0x38d480) < 1) goto LAB_02ca2ae4;
    FUN_02bcc824(puVar25,plVar12,0x38,8);
    puVar31 = local_e8;
    puVar25 = local_d8;
    plVar12 = plVar24;
  } while( true );
}


