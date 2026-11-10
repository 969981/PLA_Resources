/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0011f790; name: FUN_0011f790
 */


long FUN_0011f790(byte *param_1,long param_2,void *param_3,void *param_4,long *param_5,long param_6,
                 long param_7,long *param_8,byte param_9,void *param_10,void *param_11)

{
  ulong *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  byte bVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  char *pcVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  ulong *puVar20;
  code *pcVar21;
  ulong *puVar22;
  void *pvVar23;
  int iVar24;
  int iVar25;
  ulong *puVar26;
  void *pvVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  long *plVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  int iVar40;
  void *pvVar41;
  uint *puVar42;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  ushort *puVar46;
  ushort *puVar47;
  ulong uVar48;
  void *local_4b8;
  ulong uStack_4b0;
  undefined8 local_4a8;
  ulong local_4a0 [5];
  void *local_478;
  void *local_470;
  void *local_468;
  void *local_460;
  long local_458 [63];
  long local_260 [64];
  
  if (param_2 - (long)param_1 < 4) {
    return -1;
  }
  puVar46 = (ushort *)(param_1 + 1);
  bVar10 = *param_1;
  if (-1 < (char)bVar10) {
    return -1;
  }
  uVar3 = (uint)param_7;
  if ((bVar10 & 0x3f) != 0) {
    uVar3 = bVar10 & 0x3f;
  }
  if (param_3 == param_10) {
    lVar43 = (-0xc000 - (long)param_3) + (long)param_11;
    if (lVar43 < 0) {
      lVar43 = lVar43 + 1;
    }
    param_4 = (void *)((long)param_3 + (lVar43 >> 1));
    param_10 = param_4;
  }
  pvVar23 = param_10;
  if ((int)uVar3 < 1) {
    lVar43 = 0;
    *param_8 = 0;
  }
  else {
    bVar11 = (bVar10 & 0x3f) == 0;
    pvVar41 = param_4;
    if (!bVar11) {
      pvVar41 = param_11;
    }
    param_9 = bVar11 & param_9;
    lVar43 = 0;
    if ((bVar10 & 0x3f) == 0) {
      lVar13 = 0;
      pvVar27 = param_3;
      do {
        local_460 = pvVar27;
        lVar12 = FUN_00120660(&local_460,puVar46,param_2,&local_4b8,(long)pvVar41 - (long)pvVar27,
                              param_9,param_10,param_11);
        if (lVar12 < 0) {
          return -1;
        }
        local_260[lVar13] = (long)local_460;
        lVar18 = lVar13 + 1;
        pvVar27 = (void *)((long)pvVar27 + (long)local_4b8);
        lVar43 = (long)local_4b8 + lVar43;
        puVar46 = (ushort *)((long)puVar46 + lVar12);
        local_458[lVar13] = (long)local_4b8;
        lVar13 = lVar18;
      } while (lVar18 < (int)uVar3);
    }
    else {
      lVar13 = 0;
      do {
        local_460 = param_10;
        lVar12 = FUN_00120660(&local_460,puVar46,param_2,&local_4b8,(long)pvVar41 - (long)param_10,
                              param_9,pvVar23,param_11);
        if (lVar12 < 0) {
          return -1;
        }
        local_260[lVar13] = (long)local_460;
        lVar18 = lVar13 + 1;
        param_10 = (void *)((long)param_10 + (long)local_4b8);
        pvVar23 = (void *)((long)pvVar23 + (long)local_4b8);
        lVar43 = (long)local_4b8 + lVar43;
        puVar46 = (ushort *)((long)puVar46 + lVar12);
        local_458[lVar13] = (long)local_4b8;
        lVar13 = lVar18;
      } while (lVar18 < (int)uVar3);
    }
    *param_8 = lVar43;
  }
  if ((bVar10 & 0x3f) == 0) {
    if (0 < param_7) {
      lVar43 = 0;
      iVar24 = 1;
      do {
        param_5[lVar43] = local_260[lVar43];
        *(long *)(param_6 + lVar43 * 8) = local_458[lVar43];
        lVar43 = (long)iVar24;
        iVar24 = iVar24 + 1;
      } while (lVar43 < param_7);
    }
    return (long)puVar46 - (long)param_1;
  }
  if (param_2 - (long)puVar46 < 3) {
    FUN_0010a430();
    pcVar21 = *(code **)PTR_PTR_043722f8;
    if (pcVar21 == (code *)0x0) goto LAB_00120354;
    pcVar15 = "OODLE ERROR : corruption : rrPtrDiff(comp_end - comp_ptr) >= 3\n";
    uVar14 = 0x168;
  }
  else {
    puVar47 = puVar46 + 1;
    uVar9 = *puVar46;
    lVar43 = FUN_001199a0(puVar47,param_2,&local_460,lVar43);
    if (lVar43 < 1) {
      return -1;
    }
    pvVar41 = (void *)((long)local_460 - param_7);
    if ((long)pvVar41 < 1) {
      return -1;
    }
    if ((long)param_11 - (long)pvVar23 < (long)local_460) {
      return -1;
    }
    local_468 = (void *)((long)pvVar23 + (long)local_460);
    if ((long)param_11 - (long)local_468 < (long)local_460) {
      return -1;
    }
    lVar43 = (long)local_468 + (long)local_460;
    local_470 = pvVar23;
    if ((short)uVar9 < 0) {
      local_4b8 = local_468;
      lVar13 = FUN_00120660(&local_4b8,puVar47,param_2,&local_478,local_460,0,lVar43);
      if (lVar13 < 0) {
        return -1;
      }
      if (local_478 != local_460) {
        return -1;
      }
      if ((long)local_478 < 4) {
        lVar12 = 0;
        puVar17 = (ulong *)((long)puVar47 + lVar13);
        pvVar41 = local_478;
        if (0 < (long)local_478) {
LAB_0011fb54:
          puVar17 = (ulong *)((long)puVar47 + lVar13);
          iVar24 = (int)lVar12;
          do {
            iVar24 = iVar24 + 1;
            bVar10 = *(byte *)((long)local_4b8 + lVar12);
            *(byte *)((long)local_470 + lVar12) = bVar10 >> 4;
            *(byte *)((long)local_468 + lVar12) = bVar10 & 0xf;
            lVar12 = (long)iVar24;
            pvVar41 = local_460;
          } while (lVar12 < (long)local_460);
        }
      }
      else {
        iVar24 = 0;
        do {
          lVar12 = (long)iVar24;
          uVar4 = *(uint *)((long)local_4b8 + lVar12);
          *(uint *)((long)local_470 + lVar12) = uVar4 >> 4 & 0xf0f0f0f;
          *(uint *)((long)local_468 + lVar12) = uVar4 & 0xf0f0f0f;
          iVar25 = iVar24 + 8;
          iVar24 = iVar24 + 4;
        } while ((long)iVar25 <= (long)local_460);
        lVar12 = (long)iVar24;
        puVar17 = (ulong *)((long)puVar47 + lVar13);
        pvVar41 = local_460;
        if (lVar12 < (long)local_460) goto LAB_0011fb54;
      }
    }
    else {
      lVar13 = FUN_00120660(&local_468,puVar47,param_2,&local_4b8,local_460,0,lVar43);
      if (lVar13 < 0) {
        return -1;
      }
      if (local_4b8 != local_460) {
        return -1;
      }
      lVar12 = FUN_00120660(&local_470,(long)puVar47 + lVar13,param_2,&local_4b8,pvVar41,0,lVar43,
                            param_11);
      if (lVar12 < 0) {
        return -1;
      }
      if (local_4b8 != pvVar41) {
        return -1;
      }
      lVar18 = 0;
      puVar17 = (ulong *)((long)puVar47 + lVar13 + lVar12);
      do {
        if (0x10 < *(byte *)((long)local_470 + lVar18)) {
          FUN_0010a430();
          pcVar21 = *(code **)PTR_PTR_043722f8;
          if (pcVar21 == (code *)0x0) goto LAB_00120354;
          pcVar15 = "OODLE ERROR : corruption : interval_lenlog2 > 16\n";
          uVar14 = 0x1c1;
          goto LAB_0012034c;
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < (long)pvVar41);
    }
    if ((long)param_11 - lVar43 < 4) {
      return -1;
    }
    uVar19 = lVar43 + 3U & 0xfffffffffffffffc;
    if ((long)((long)param_11 - uVar19) < (long)pvVar41 * 4) {
      return -1;
    }
    if (param_2 - (long)puVar17 < (long)((ulong)uVar9 & 0x3fff)) {
      FUN_0010a430();
      pcVar21 = *(code **)PTR_PTR_043722f8;
      if (pcVar21 == (code *)0x0) goto LAB_00120354;
      pcVar15 = "OODLE ERROR : corruption : rrPtrDiff(comp_end - comp_ptr) >= varbits_complen\n";
      uVar14 = 0x242;
    }
    else {
      puVar1 = (ulong *)((long)puVar17 + ((ulong)uVar9 & 0x3fff));
      puVar20 = puVar17;
      puVar26 = puVar1;
      if ((long)pvVar41 < 6) {
        lVar43 = 0;
        uVar48 = 0;
        uVar16 = 0;
        bVar11 = false;
        uVar44 = 0x3f;
        uVar45 = 0x3f;
        if (1 < (long)pvVar41) {
LAB_0011fc00:
          puVar42 = (uint *)(uVar19 + lVar43 * 4 + 4);
          lVar13 = lVar43;
          do {
            if (puVar26 <= puVar20 + 2) {
              if (bVar11) {
                if (puVar26 < puVar20 + -2) {
                  FUN_0010a430();
                  pcVar21 = *(code **)PTR_PTR_043722f8;
                  if (pcVar21 == (code *)0x0) goto LAB_00120354;
                  pcVar15 = "OODLE ERROR : corruption : b >= f-16\n";
                  uVar14 = 0x287;
                  goto LAB_0012034c;
                }
                if (puVar26 < &uStack_4b0) {
                  FUN_0010a430();
                  pcVar21 = *(code **)PTR_PTR_043722f8;
                  if (pcVar21 == (code *)0x0) goto LAB_00120354;
                  pcVar15 = "OODLE ERROR : corruption : b >= safe_space+(8)\n";
                  uVar14 = 0x287;
                  goto LAB_0012034c;
                }
                if (local_4a0 + 4 < puVar20) {
                  FUN_0010a430();
                  pcVar21 = *(code **)PTR_PTR_043722f8;
                  if (pcVar21 == (code *)0x0) goto LAB_00120354;
                  pcVar15 = "OODLE ERROR : corruption : f <= safe_space + sizeof(safe_space) -(8)\n"
                  ;
                  uVar14 = 0x287;
                  goto LAB_0012034c;
                }
                bVar11 = true;
              }
              else {
                if (puVar26 < puVar20) {
                  FUN_0010a430();
                  pcVar21 = *(code **)PTR_PTR_043722f8;
                  if (pcVar21 == (code *)0x0) goto LAB_00120354;
                  pcVar15 = "OODLE ERROR : corruption : b >= f\n";
                  uVar14 = 0x287;
                  goto LAB_0012034c;
                }
                lVar43 = (long)puVar20 - (long)puVar17;
                local_4a0[3] = 0;
                local_4a0[4] = 0;
                lVar12 = (long)puVar1 - (long)puVar26;
                if (0x17 < lVar43) {
                  lVar43 = 0x18;
                }
                local_4a0[1] = 0;
                local_4a0[2] = 0;
                if (0x17 < lVar12) {
                  lVar12 = 0x18;
                }
                local_4a8 = 0;
                local_4a0[0] = 0;
                local_4b8 = (void *)0x0;
                uStack_4b0 = 0;
                memcpy((void *)((long)local_4a0 - lVar43),(void *)((long)puVar20 - lVar43),
                       ((long)puVar26 - (long)puVar20) + lVar12 + lVar43);
                puVar26 = (ulong *)((long)local_4a0 + ((long)puVar26 - (long)puVar20));
                bVar11 = true;
                puVar20 = local_4a0;
              }
            }
            uVar28 = (*puVar20 & 0xff00ff00ff00ff00) >> 8 | (*puVar20 & 0xff00ff00ff00ff) << 8;
            uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
            puVar22 = puVar26 + -1;
            puVar26 = (ulong *)((long)puVar26 - (uVar44 >> 3));
            uVar28 = (uVar28 >> 0x20 | uVar28 << 0x20) >> (0x3f - uVar45 & 0x3f) | uVar16;
            bVar10 = *(byte *)((long)local_470 + lVar13);
            uVar37 = (ulong)bVar10;
            bVar5 = ((byte *)((long)local_470 + lVar13))[1];
            uVar31 = (ulong)bVar5;
            uVar34 = *puVar22 >> (0x3f - uVar44 & 0x3f) | uVar48;
            uVar16 = uVar28 << (uVar37 & 0x3f);
            lVar43 = lVar13 + 2;
            uVar48 = uVar34 << (uVar31 & 0x3f);
            uVar44 = (uVar44 & 7) + uVar31;
            puVar20 = (ulong *)((long)puVar20 + ((long)uVar45 >> 3));
            uVar45 = (uVar45 & 7) + uVar37;
            lVar12 = lVar13 + 4;
            puVar42[-1] = 1 << (ulong)(bVar10 & 0x1f) |
                          (uint)((uVar28 >> 1) >> (0x3f - uVar37 & 0x3f));
            *puVar42 = 1 << (ulong)(bVar5 & 0x1f) | (uint)((uVar34 >> 1) >> (0x3f - uVar31 & 0x3f));
            puVar42 = puVar42 + 2;
            lVar13 = lVar43;
          } while (lVar12 <= (long)pvVar41);
        }
      }
      else {
        bVar11 = false;
        uVar16 = 0;
        uVar48 = 0;
        uVar45 = 0x3f;
        uVar44 = 0x3f;
        puVar42 = (uint *)(uVar19 + 0xc);
        lVar43 = 0;
        do {
          lVar13 = lVar43;
          if (puVar26 <= puVar20 + 2) {
            if (bVar11) {
              if (puVar26 < puVar20 + -2) {
                FUN_0010a430();
                pcVar21 = *(code **)PTR_PTR_043722f8;
                if (pcVar21 == (code *)0x0) goto LAB_00120354;
                pcVar15 = "OODLE ERROR : corruption : b >= f-16\n";
                uVar14 = 0x261;
                goto LAB_0012034c;
              }
              if (puVar26 < &uStack_4b0) {
                FUN_0010a430();
                pcVar21 = *(code **)PTR_PTR_043722f8;
                if (pcVar21 == (code *)0x0) goto LAB_00120354;
                pcVar15 = "OODLE ERROR : corruption : b >= safe_space+(8)\n";
                uVar14 = 0x261;
                goto LAB_0012034c;
              }
              if (local_4a0 + 4 < puVar20) {
                FUN_0010a430();
                pcVar21 = *(code **)PTR_PTR_043722f8;
                if (pcVar21 == (code *)0x0) goto LAB_00120354;
                pcVar15 = "OODLE ERROR : corruption : f <= safe_space + sizeof(safe_space) -(8)\n";
                uVar14 = 0x261;
                goto LAB_0012034c;
              }
              bVar11 = true;
            }
            else {
              if (puVar26 < puVar20) {
                FUN_0010a430();
                pcVar21 = *(code **)PTR_PTR_043722f8;
                if (pcVar21 == (code *)0x0) goto LAB_00120354;
                pcVar15 = "OODLE ERROR : corruption : b >= f\n";
                uVar14 = 0x261;
                goto LAB_0012034c;
              }
              lVar43 = (long)puVar20 - (long)puVar17;
              lVar12 = (long)puVar1 - (long)puVar26;
              if (0x17 < lVar43) {
                lVar43 = 0x18;
              }
              local_4a0[3] = 0;
              local_4a0[4] = 0;
              if (0x17 < lVar12) {
                lVar12 = 0x18;
              }
              local_4a0[1] = 0;
              local_4a0[2] = 0;
              local_4a8 = 0;
              local_4a0[0] = 0;
              local_4b8 = (void *)0x0;
              uStack_4b0 = 0;
              memcpy((void *)((long)local_4a0 - lVar43),(void *)((long)puVar20 - lVar43),
                     ((long)puVar26 - (long)puVar20) + lVar12 + lVar43);
              puVar26 = (ulong *)((long)local_4a0 + ((long)puVar26 - (long)puVar20));
              bVar11 = true;
              puVar20 = local_4a0;
            }
          }
          puVar22 = puVar26 + -1;
          uVar28 = (*puVar20 & 0xff00ff00ff00ff00) >> 8 | (*puVar20 & 0xff00ff00ff00ff) << 8;
          uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
          puVar20 = (ulong *)((long)puVar20 + ((long)uVar45 >> 3));
          puVar26 = (ulong *)((long)puVar26 - ((long)uVar44 >> 3));
          lVar43 = lVar13 + 6;
          pbVar2 = (byte *)((long)local_470 + lVar13);
          uVar38 = (ulong)*pbVar2;
          bVar10 = pbVar2[1];
          uVar31 = (ulong)bVar10;
          uVar37 = (uVar28 >> 0x20 | uVar28 << 0x20) >> (0x3f - uVar45 & 0x3f) | uVar16;
          uVar29 = uVar37 << (uVar38 & 0x3f);
          bVar5 = pbVar2[2];
          uVar39 = (ulong)bVar5;
          uVar48 = *puVar22 >> (0x3f - uVar44 & 0x3f) | uVar48;
          uVar32 = uVar48 << (uVar31 & 0x3f);
          bVar6 = pbVar2[3];
          uVar34 = (ulong)bVar6;
          bVar7 = pbVar2[4];
          uVar28 = (ulong)bVar7;
          bVar8 = pbVar2[5];
          uVar36 = (ulong)bVar8;
          uVar30 = uVar29 << (uVar39 & 0x3f);
          uVar45 = (uVar45 & 7) + uVar38 + uVar39 + uVar28;
          uVar33 = uVar32 << (uVar34 & 0x3f);
          uVar16 = uVar30 << (uVar28 & 0x3f);
          puVar42[-3] = 1 << (ulong)(*pbVar2 & 0x1f) |
                        (uint)((uVar37 >> 1) >> (0x3f - uVar38 & 0x3f));
          puVar42[-2] = 1 << (ulong)(bVar10 & 0x1f) |
                        (uint)((uVar48 >> 1) >> (0x3f - uVar31 & 0x3f));
          puVar42[-1] = 1 << (ulong)(bVar5 & 0x1f) | (uint)((uVar29 >> 1) >> (0x3f - uVar39 & 0x3f))
          ;
          *puVar42 = 1 << (ulong)(bVar6 & 0x1f) | (uint)((uVar32 >> 1) >> (0x3f - uVar34 & 0x3f));
          uVar48 = uVar33 << (uVar36 & 0x3f);
          uVar44 = (uVar44 & 7) + uVar31 + uVar34 + uVar36;
          puVar42[1] = 1 << (ulong)(bVar7 & 0x1f) | (uint)((uVar30 >> 1) >> (0x3f - uVar28 & 0x3f));
          puVar42[2] = 1 << (ulong)(bVar8 & 0x1f) | (uint)((uVar33 >> 1) >> (0x3f - uVar36 & 0x3f));
          puVar42 = puVar42 + 6;
        } while (lVar13 + 0xc <= (long)pvVar41);
        if (lVar13 + 8 <= (long)pvVar41) goto LAB_0011fc00;
      }
      if (lVar43 < (long)pvVar41) {
        puVar22 = puVar20;
        if (puVar26 <= puVar20 + 2) {
          if (bVar11) {
            if (puVar26 < puVar20 + -2) {
              FUN_0010a430();
              pcVar21 = *(code **)PTR_PTR_043722f8;
              if (pcVar21 == (code *)0x0) goto LAB_00120354;
              pcVar15 = "OODLE ERROR : corruption : b >= f-16\n";
              uVar14 = 0x29d;
            }
            else if (puVar26 < &uStack_4b0) {
              FUN_0010a430();
              pcVar21 = *(code **)PTR_PTR_043722f8;
              if (pcVar21 == (code *)0x0) goto LAB_00120354;
              pcVar15 = "OODLE ERROR : corruption : b >= safe_space+(8)\n";
              uVar14 = 0x29d;
            }
            else {
              if (puVar20 <= local_4a0 + 4) goto LAB_001200b0;
              FUN_0010a430();
              pcVar21 = *(code **)PTR_PTR_043722f8;
              if (pcVar21 == (code *)0x0) goto LAB_00120354;
              pcVar15 = "OODLE ERROR : corruption : f <= safe_space + sizeof(safe_space) -(8)\n";
              uVar14 = 0x29d;
            }
          }
          else {
            if (puVar20 <= puVar26) {
              puVar22 = local_4a0;
              lVar13 = (long)puVar20 - (long)puVar17;
              lVar12 = (long)puVar1 - (long)puVar26;
              local_4a0[3] = 0;
              local_4a0[4] = 0;
              local_4a8 = 0;
              local_4a0[0] = 0;
              local_4a0[1] = 0;
              local_4a0[2] = 0;
              if (0x17 < lVar13) {
                lVar13 = 0x18;
              }
              if (0x17 < lVar12) {
                lVar12 = 0x18;
              }
              local_4b8 = (void *)0x0;
              uStack_4b0 = 0;
              memcpy((void *)((long)puVar22 - lVar13),(void *)((long)puVar20 - lVar13),
                     (long)puVar26 + lVar13 + (lVar12 - (long)puVar20));
              goto LAB_001200b0;
            }
            FUN_0010a430();
            pcVar21 = *(code **)PTR_PTR_043722f8;
            if (pcVar21 == (code *)0x0) goto LAB_00120354;
            pcVar15 = "OODLE ERROR : corruption : b >= f\n";
            uVar14 = 0x29d;
          }
          goto LAB_0012034c;
        }
LAB_001200b0:
        uVar44 = (*puVar22 & 0xff00ff00ff00ff00) >> 8 | (*puVar22 & 0xff00ff00ff00ff) << 8;
        uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 | (uVar44 & 0xffff0000ffff) << 0x10;
        *(uint *)(uVar19 + lVar43 * 4) =
             1 << (ulong)(*(byte *)((long)local_470 + lVar43) & 0x1f) |
             (uint)((((uVar44 >> 0x20 | uVar44 << 0x20) >> (0x3f - uVar45 & 0x3f) | uVar16) >> 1) >>
                   (0x3f - (ulong)*(byte *)((long)local_470 + lVar43) & 0x3f));
      }
      if (*(char *)((long)local_468 + (long)local_460 + -1) == '\0') {
        if (param_7 < 1) {
          pvVar23 = (void *)0x0;
          if (local_460 == (void *)0x0) {
LAB_001202c0:
            if (pvVar41 == pvVar23) {
              if (0 < (int)uVar3) {
                iVar24 = 0;
                do {
                  if (local_458[iVar24] != 0) {
                    FUN_0010a430();
                    pcVar21 = *(code **)PTR_PTR_043722f8;
                    if (pcVar21 == (code *)0x0) goto LAB_00120354;
                    pcVar15 = "OODLE ERROR : corruption : entropy_array_lens[i] == 0\n";
                    uVar14 = 0x31d;
                    goto LAB_0012034c;
                  }
                  iVar24 = iVar24 + 1;
                } while (iVar24 < (int)uVar3);
              }
              return (long)puVar1 - (long)param_1;
            }
            FUN_0010a430();
            pcVar21 = *(code **)PTR_PTR_043722f8;
            if (pcVar21 == (code *)0x0) goto LAB_00120354;
            pcVar15 = "OODLE ERROR : corruption : leni == num_lens\n";
            uVar14 = 0x2fd;
          }
          else {
LAB_0012036c:
            FUN_0010a430();
            pcVar21 = *(code **)PTR_PTR_043722f8;
            if (pcVar21 == (code *)0x0) goto LAB_00120354;
            pcVar15 = "OODLE ERROR : corruption : indi == num_indices\n";
            uVar14 = 0x2fc;
          }
        }
        else {
          *param_5 = (long)param_3;
          if (0 < (long)local_460) {
            lVar43 = 0;
            iVar24 = 0;
            iVar25 = 0;
            lVar13 = 0;
            pvVar23 = local_468;
            plVar35 = param_5;
            do {
              bVar10 = *(byte *)((long)pvVar23 + lVar43);
              iVar25 = iVar25 + 1;
              if (bVar10 == 0) {
                pvVar27 = param_3;
              }
              else {
                iVar40 = iVar25;
                do {
                  if ((int)uVar3 < (int)(uint)bVar10) {
                    FUN_0010a430();
                    pcVar21 = *(code **)PTR_PTR_043722f8;
                    if (pcVar21 == (code *)0x0) goto LAB_00120354;
                    pcVar15 = "OODLE ERROR : corruption : interval source > num_entropy_arrays\n";
                    uVar14 = 0x2dd;
                    goto LAB_0012034c;
                  }
                  if ((long)pvVar41 <= (long)iVar24) {
                    FUN_0010a430();
                    pcVar21 = *(code **)PTR_PTR_043722f8;
                    if (pcVar21 == (code *)0x0) goto LAB_00120354;
                    pcVar15 = "OODLE ERROR : corruption : leni < num_lens\n";
                    uVar14 = 0x2e2;
                    goto LAB_0012034c;
                  }
                  lVar43 = (ulong)bVar10 - 1;
                  uVar45 = (ulong)*(uint *)(uVar19 + (long)iVar24 * 4);
                  if ((local_458[lVar43] < (long)uVar45) ||
                     ((long)param_4 - (long)param_3 < (long)uVar45)) {
                    FUN_0010a430();
                    pcVar21 = *(code **)PTR_PTR_043722f8;
                    if (pcVar21 == (code *)0x0) goto LAB_00120354;
                    pcVar15 = "OODLE ERROR : corruption : interval cur_len too large\n";
                    uVar14 = 0x2ec;
                    goto LAB_0012034c;
                  }
                  iVar24 = iVar24 + 1;
                  memcpy(param_3,(void *)local_260[lVar43],uVar45);
                  local_260[lVar43] = local_260[lVar43] + uVar45;
                  iVar25 = iVar40 + 1;
                  local_458[lVar43] = local_458[lVar43] - uVar45;
                  bVar10 = *(byte *)((long)local_468 + (long)iVar40);
                  param_3 = (void *)((long)param_3 + uVar45);
                  iVar40 = iVar25;
                } while (bVar10 != 0);
                pvVar23 = local_468;
                pvVar27 = (void *)*plVar35;
              }
              iVar24 = iVar24 + (uint)(uVar9 >> 0xf);
              *(long *)(param_6 + lVar13 * 8) = (long)param_3 - (long)pvVar27;
              lVar13 = (long)((int)lVar13 + 1);
              if (param_7 <= lVar13) {
                pvVar23 = (void *)(long)iVar24;
                if (local_460 != (void *)(long)iVar25) goto LAB_0012036c;
                goto LAB_001202c0;
              }
              plVar35 = param_5 + lVar13;
              lVar43 = (long)iVar25;
              *plVar35 = (long)param_3;
            } while (lVar43 < (long)local_460);
          }
          FUN_0010a430();
          pcVar21 = *(code **)PTR_PTR_043722f8;
          if (pcVar21 == (code *)0x0) goto LAB_00120354;
          pcVar15 = "OODLE ERROR : corruption : indi < num_indices\n";
          uVar14 = 0x2ca;
        }
      }
      else {
        FUN_0010a430();
        pcVar21 = *(code **)PTR_PTR_043722f8;
        if (pcVar21 == (code *)0x0) goto LAB_00120354;
        pcVar15 = "OODLE ERROR : corruption : interval_indices[num_indices-1] == 0\n";
        uVar14 = 0x2be;
      }
    }
  }
LAB_0012034c:
  (*pcVar21)(0,"v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp",uVar14,pcVar15);
LAB_00120354:
  FUN_0010a450();
  return -1;
}


