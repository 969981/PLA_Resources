/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00871bc8; name: FUN_00871bc8
 */


/* WARNING: Removing unreachable block (ram,0x008721f0) */
/* WARNING: Removing unreachable block (ram,0x00872390) */
/* WARNING: Removing unreachable block (ram,0x00871f7c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00871bc8(long *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  size_t sVar4;
  byte bVar5;
  ushort uVar6;
  undefined2 uVar7;
  uint uVar8;
  char *pcVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 uVar12;
  ulong uVar13;
  void *pvVar14;
  char *pcVar15;
  undefined8 uVar16;
  byte bVar17;
  void *pvVar18;
  long lVar19;
  char *pcVar20;
  size_t sVar21;
  ulong uVar22;
  undefined **ppuVar23;
  undefined1 **ppuVar24;
  size_t sVar25;
  ErrorResultVariant *this;
  long lVar26;
  ulong uVar27;
  undefined1 *puVar28;
  void *pvVar29;
  undefined1 *local_9c8 [2];
  undefined4 local_9b8;
  undefined4 uStack_9b4;
  undefined4 local_9b0;
  undefined *local_9a8;
  undefined1 local_9a0;
  undefined4 local_99f;
  undefined2 local_99b;
  undefined1 local_999 [193];
  undefined *local_8d8;
  undefined8 local_8d0;
  ushort local_8c8;
  undefined2 uStack_8c6;
  uint uStack_8c4;
  ushort local_8c0;
  undefined2 uStack_8be;
  undefined *local_8b8;
  undefined1 local_8b0 [2];
  ushort uStack_8ae;
  undefined2 local_8ab;
  undefined1 local_8a9 [193];
  undefined *local_7e8;
  short local_7e0;
  byte local_7d8;
  char local_7d7 [7];
  size_t local_7d0;
  char *local_7c8;
  undefined1 auStack_7a0 [40];
  undefined1 *local_778 [2];
  undefined4 local_768;
  undefined4 uStack_764;
  undefined4 local_760;
  undefined *local_758;
  undefined1 local_750;
  undefined4 local_74f;
  undefined2 local_74b;
  undefined1 local_749 [193];
  int local_688 [4];
  int local_678;
  undefined1 local_674 [4];
  undefined1 auStack_670 [36];
  byte local_64c;
  byte bStack_64b;
  ushort uStack_64a;
  undefined1 uStack_648;
  ushort local_647;
  uint local_645;
  ushort local_641;
  ulong local_63f;
  ushort local_637;
  ushort local_635;
  undefined4 local_70 [4];
  
  puVar10 = PTR_DAT_043777e0;
  this = (ErrorResultVariant *)((ulong)&local_8d8 | 4);
  puVar1 = PTR_DAT_043753a8 + 0x10;
  pcVar2 = (char *)((long)param_1 + 0x811);
  uVar22 = (ulong)local_9c8 | 1;
  pvVar18 = (void *)((ulong)&local_8d8 | 1);
  puVar3 = PTR_DAT_04378438 + 0x10;
  do {
    while( true ) {
      FUN_007e3400(auStack_670);
      local_674[0] = 0;
      local_678 = 0;
      FUN_007ebd7c(local_688,param_1[0xdd],&local_64c,0x5dc,auStack_670,local_674,&local_678);
      local_778[0] = puVar10 + 0x10;
      local_758 = puVar10 + 0x68;
      local_768 = 0xc0;
      local_750 = 0;
      lVar19 = 0;
      ppuVar24 = local_778;
      do {
        *(undefined4 *)((long)ppuVar24 + 0x29) = 0;
        lVar26 = lVar19 + 8;
        *(undefined2 *)((long)ppuVar24 + 0x2d) = 0;
        *(undefined1 *)((long)ppuVar24 + 0x2f) = 0;
        ppuVar24 = (undefined1 **)((long)local_778 + lVar26);
        local_749[lVar19 + 1] = 0;
        lVar19 = lVar26;
      } while (lVar26 != 0xc0);
      uStack_764 = 0;
      local_760 = 0;
      local_778[1] = &local_750;
      FUN_007e37e0(auStack_670,local_778);
      if (local_688[0] != 0) {
        local_8d8 = (undefined *)CONCAT44(local_8d8._4_4_,0x2c09);
        local_9c8[0] = (undefined1 *)((ulong)local_9c8[0] & 0xffffffff00000000);
        nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_9c8);
        FUN_007e34a4(auStack_670);
        return;
      }
      uVar6 = (ushort)bStack_64b | CONCAT11(bStack_64b,local_64c) << 8;
      if ((local_64c & 0xc0) != 0x40) break;
      if (local_678 + -4 < (int)((uint)(uStack_64a >> 8) | (uStack_64a & 0xff00ff) << 8)) {
        FUN_007e34a4(auStack_670);
      }
      else if (local_678 + -4 == 0x19) {
        local_8d0 = (undefined1 *)(((ulong)local_8d0 >> 8 & 0xffffff) << 8);
        local_8c8 = 0;
        uStack_8c4 = 0;
        local_8c0 = 0;
        local_8b8 = (undefined *)0x0;
        _local_8b0 = 0;
        local_8d8 = puVar3;
        FUN_00875c64(local_9c8,&local_8d8,&uStack_648,0x19);
        FUN_007ee660(local_688,local_9c8);
        if (local_688[0] != 0) {
          FUN_007e34a4(auStack_670);
          return;
        }
        FUN_00875d30(param_1,&local_8d8);
        FUN_007e34a4(auStack_670);
      }
      else {
        if ((*(ushort *)(param_1 + 0x116) != uVar6) && (*(ushort *)((long)param_1 + 0x8b2) != uVar6)
           ) {
          if ((*(ushort *)(param_1 + 300) == uVar6) || (*(ushort *)((long)param_1 + 0x962) == uVar6)
             ) {
            lVar19 = 1;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x142) == uVar6) ||
             (*(ushort *)((long)param_1 + 0xa12) == uVar6)) {
            lVar19 = 2;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x158) == uVar6) ||
             (*(ushort *)((long)param_1 + 0xac2) == uVar6)) {
            lVar19 = 3;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x16e) == uVar6) ||
             (*(ushort *)((long)param_1 + 0xb72) == uVar6)) {
            lVar19 = 4;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x184) == uVar6) ||
             (*(ushort *)((long)param_1 + 0xc22) == uVar6)) {
            lVar19 = 5;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x19a) == uVar6) ||
             (*(ushort *)((long)param_1 + 0xcd2) == uVar6)) {
            lVar19 = 6;
            goto LAB_008721bc;
          }
          if (*(ushort *)(param_1 + 0x1b0) == uVar6) {
            lVar19 = 7;
            goto LAB_008721bc;
          }
          if (*(ushort *)((long)param_1 + 0xd82) == uVar6) {
            lVar19 = 7;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x1c6) == uVar6) ||
             (*(ushort *)((long)param_1 + 0xe32) == uVar6)) {
            lVar19 = 8;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x1dc) == uVar6) ||
             (*(ushort *)((long)param_1 + 0xee2) == uVar6)) {
            lVar19 = 9;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x1f2) == uVar6) ||
             (*(ushort *)((long)param_1 + 0xf92) == uVar6)) {
            lVar19 = 10;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x208) == uVar6) ||
             (*(ushort *)((long)param_1 + 0x1042) == uVar6)) {
            lVar19 = 0xb;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x21e) == uVar6) ||
             (*(ushort *)((long)param_1 + 0x10f2) == uVar6)) {
            lVar19 = 0xc;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x234) == uVar6) ||
             (*(ushort *)((long)param_1 + 0x11a2) == uVar6)) {
            lVar19 = 0xd;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x24a) == uVar6) ||
             (*(ushort *)((long)param_1 + 0x1252) == uVar6)) {
            lVar19 = 0xe;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x260) == uVar6) ||
             (*(ushort *)((long)param_1 + 0x1302) == uVar6)) {
            lVar19 = 0xf;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x276) == uVar6) ||
             (*(ushort *)((long)param_1 + 0x13b2) == uVar6)) {
            lVar19 = 0x10;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x28c) == uVar6) ||
             (*(ushort *)((long)param_1 + 0x1462) == uVar6)) {
            lVar19 = 0x11;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x2a2) == uVar6) ||
             (*(ushort *)((long)param_1 + 0x1512) == uVar6)) {
            lVar19 = 0x12;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x2b8) == uVar6) ||
             (*(ushort *)((long)param_1 + 0x15c2) == uVar6)) {
            lVar19 = 0x13;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x2ce) == uVar6) ||
             (*(ushort *)((long)param_1 + 0x1672) == uVar6)) {
            lVar19 = 0x14;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x2e4) == uVar6) ||
             (*(ushort *)((long)param_1 + 0x1722) == uVar6)) {
            lVar19 = 0x15;
            goto LAB_008721bc;
          }
          if ((*(ushort *)(param_1 + 0x2fa) == uVar6) ||
             (*(ushort *)((long)param_1 + 0x17d2) == uVar6)) {
            lVar19 = 0x16;
            goto LAB_008721bc;
          }
          iVar11 = 2;
          goto LAB_00873564;
        }
        lVar19 = 0;
LAB_008721bc:
        (**(code **)(*(long *)param_1[0xdc] + 0x3f0))
                  ((long *)param_1[0xdc],param_1[lVar19 * 0x16 + 0x10c],&uStack_648);
        FUN_007e34a4(auStack_670);
      }
    }
    FUN_0060b60c(auStack_7a0,&local_64c,(long)local_678);
    FUN_0060bc00(&local_7e8);
    local_7e8 = puVar1;
    uVar13 = FUN_0060c938(&local_7e8,auStack_7a0);
    if ((uVar13 & 1) == 0) {
      if (local_678 == 0x19) {
        local_9c8[0] = (undefined1 *)((ulong)local_9c8[0] & 0xffffffff00000000);
        local_70[0] = 0;
        local_8d8 = PTR_DAT_04378438 + 0x10;
        local_8d0 = (undefined1 *)CONCAT71(local_8d0._1_7_,local_64c);
        uVar8 = (CONCAT13(uStack_648,CONCAT21(uStack_64a,bStack_64b)) & 0xff00ff00) >> 8 |
                (CONCAT21(uStack_64a,bStack_64b) & 0xff00ff) << 8;
        local_8d0 = (undefined1 *)CONCAT44(uVar8 >> 0x10 | uVar8 << 0x10,(undefined4)local_8d0);
        uVar8 = (local_645 & 0xff00ff00) >> 8 | (local_645 & 0xff00ff) << 8;
        uStack_8c4 = uVar8 >> 0x10 | uVar8 << 0x10;
        uVar13 = (local_63f & 0xff00ff00ff00ff00) >> 8 | (local_63f & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        local_8b8 = (undefined *)(uVar13 >> 0x20 | uVar13 << 0x20);
        local_8c8 = local_647 >> 8 | local_647 << 8;
        local_8c0 = local_641 >> 8 | local_641 << 8;
        _local_8b0 = CONCAT22(local_635 >> 8 | local_635 << 8,local_637 >> 8 | local_637 << 8);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_9c8 | 4),(Result *)local_70);
        FUN_007ee578(local_70,local_9c8);
        FUN_007ee660(local_688,local_70);
        if (local_688[0] != 0) goto LAB_00872520;
        FUN_00875d30(param_1,&local_8d8);
      }
      else {
        uVar13 = FUN_007e45a8(param_1 + 0x112,auStack_670);
        if ((uVar13 & 1) == 0) {
          uVar13 = FUN_007e45a8(param_1 + 0x128,auStack_670);
          if ((uVar13 & 1) == 0) {
            uVar13 = FUN_007e45a8(param_1 + 0x13e,auStack_670);
            if ((uVar13 & 1) == 0) {
              uVar13 = FUN_007e45a8(param_1 + 0x154,auStack_670);
              if ((uVar13 & 1) == 0) {
                uVar13 = FUN_007e45a8(param_1 + 0x16a,auStack_670);
                if ((uVar13 & 1) == 0) {
                  uVar13 = FUN_007e45a8(param_1 + 0x180,auStack_670);
                  if ((uVar13 & 1) == 0) {
                    uVar13 = FUN_007e45a8(param_1 + 0x196,auStack_670);
                    if ((uVar13 & 1) == 0) {
                      uVar13 = FUN_007e45a8(param_1 + 0x1ac,auStack_670);
                      if ((uVar13 & 1) == 0) {
                        uVar13 = FUN_007e45a8(param_1 + 0x1c2,auStack_670);
                        if ((uVar13 & 1) == 0) {
                          uVar13 = FUN_007e45a8(param_1 + 0x1d8,auStack_670);
                          if ((uVar13 & 1) == 0) {
                            uVar13 = FUN_007e45a8(param_1 + 0x1ee,auStack_670);
                            if ((uVar13 & 1) == 0) {
                              uVar13 = FUN_007e45a8(param_1 + 0x204,auStack_670);
                              if ((uVar13 & 1) == 0) {
                                uVar13 = FUN_007e45a8(param_1 + 0x21a,auStack_670);
                                if ((uVar13 & 1) == 0) {
                                  uVar13 = FUN_007e45a8(param_1 + 0x230,auStack_670);
                                  if ((uVar13 & 1) == 0) {
                                    uVar13 = FUN_007e45a8(param_1 + 0x246,auStack_670);
                                    if ((uVar13 & 1) == 0) {
                                      uVar13 = FUN_007e45a8(param_1 + 0x25c,auStack_670);
                                      if ((uVar13 & 1) == 0) {
                                        uVar13 = FUN_007e45a8(param_1 + 0x272,auStack_670);
                                        if ((uVar13 & 1) == 0) {
                                          uVar13 = FUN_007e45a8(param_1 + 0x288,auStack_670);
                                          if ((uVar13 & 1) == 0) {
                                            uVar13 = FUN_007e45a8(param_1 + 0x29e,auStack_670);
                                            if ((uVar13 & 1) == 0) {
                                              uVar13 = FUN_007e45a8(param_1 + 0x2b4,auStack_670);
                                              if ((uVar13 & 1) == 0) {
                                                uVar13 = FUN_007e45a8(param_1 + 0x2ca,auStack_670);
                                                if ((uVar13 & 1) == 0) {
                                                  uVar13 = FUN_007e45a8(param_1 + 0x2e0,auStack_670)
                                                  ;
                                                  if ((uVar13 & 1) == 0) {
                                                    uVar13 = FUN_007e45a8(param_1 + 0x2f6,
                                                                          auStack_670);
                                                    if ((uVar13 & 1) == 0) goto LAB_00873558;
                                                    lVar19 = 0x16;
                                                  }
                                                  else {
                                                    lVar19 = 0x15;
                                                  }
                                                }
                                                else {
                                                  lVar19 = 0x14;
                                                }
                                              }
                                              else {
                                                lVar19 = 0x13;
                                              }
                                            }
                                            else {
                                              lVar19 = 0x12;
                                            }
                                          }
                                          else {
                                            lVar19 = 0x11;
                                          }
                                        }
                                        else {
                                          lVar19 = 0x10;
                                        }
                                      }
                                      else {
                                        lVar19 = 0xf;
                                      }
                                    }
                                    else {
                                      lVar19 = 0xe;
                                    }
                                  }
                                  else {
                                    lVar19 = 0xd;
                                  }
                                }
                                else {
                                  lVar19 = 0xc;
                                }
                              }
                              else {
                                lVar19 = 0xb;
                              }
                            }
                            else {
                              lVar19 = 10;
                            }
                          }
                          else {
                            lVar19 = 9;
                          }
                        }
                        else {
                          lVar19 = 8;
                        }
                      }
                      else {
                        lVar19 = 7;
                      }
                    }
                    else {
                      lVar19 = 6;
                    }
                  }
                  else {
                    lVar19 = 5;
                  }
                }
                else {
                  lVar19 = 4;
                }
              }
              else {
                lVar19 = 3;
              }
            }
            else {
              lVar19 = 2;
            }
          }
          else {
            lVar19 = 1;
          }
        }
        else {
          lVar19 = 0;
        }
        (**(code **)(*(long *)param_1[0xdc] + 0x3f0))
                  ((long *)param_1[0xdc],param_1[lVar19 * 0x16 + 0x10c],&local_64c,local_678);
      }
LAB_00873558:
      iVar11 = 2;
      goto LAB_0087355c;
    }
    FUN_0060c0ec(&local_7e8);
    iVar11 = FUN_0060c0ec(&local_7e8);
    if (iVar11 == 0x1b6) {
      lVar19 = FUN_0060c0c0(&local_7e8,0x14);
      uVar6 = *(ushort *)(lVar19 + 10);
      uVar13 = (ulong)uVar6;
      pvVar29 = *(void **)(lVar19 + 0x10);
      local_8c8 = 0;
      uStack_8c6 = 0;
      uStack_8c4 = 0;
      local_8d0 = (undefined1 *)0x0;
      local_8d8 = (undefined *)0x0;
      if (uVar13 < 0x17) {
        local_8d8 = (undefined *)(ulong)(byte)((char)uVar6 << 1);
        pvVar14 = pvVar18;
        if (uVar6 != 0) goto LAB_00872238;
      }
      else {
        uVar27 = (ulong)(uVar6 + 0x10) & 0x1fff0;
        pvVar14 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar27);
        local_8d8 = (undefined *)(uVar27 | 1);
        local_8c8 = (ushort)pvVar14;
        uStack_8c6 = (undefined2)((ulong)pvVar14 >> 0x10);
        uStack_8c4 = (uint)((ulong)pvVar14 >> 0x20);
        local_8d0 = (undefined1 *)uVar13;
LAB_00872238:
        memcpy(pvVar14,pvVar29,uVar13);
      }
      *(undefined1 *)((long)pvVar14 + uVar13) = 0;
      lVar19 = 0;
      pvVar29 = pvVar18;
      if (((ulong)local_8d8 & 1) != 0) {
        pvVar29 = (void *)CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,local_8c8));
      }
      do {
        pcVar15 = (char *)((long)pvVar29 + lVar19);
        if (*pcVar15 == '\0') {
          *(undefined1 *)((long)param_1 + lVar19 + 0x738) = 0;
          goto joined_r0x00872568;
        }
        *(char *)((long)param_1 + lVar19 + 0x738) = *pcVar15;
        if (pcVar15[1] == '\0') {
          *(undefined1 *)((long)param_1 + lVar19 + 0x739) = 0;
          goto joined_r0x00872568;
        }
        *(char *)((long)param_1 + lVar19 + 0x739) = pcVar15[1];
        if (pcVar15[2] == '\0') {
          *(undefined1 *)((long)param_1 + lVar19 + 0x73a) = 0;
          goto joined_r0x00872568;
        }
        lVar26 = lVar19 + 3;
        *(char *)((long)param_1 + lVar19 + 0x73a) = pcVar15[2];
        lVar19 = lVar26;
      } while (lVar26 != 0x3f);
      *(undefined1 *)((long)param_1 + 0x777) = 0;
joined_r0x00872568:
      if (((ulong)local_8d8 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,local_8c8)));
      }
      lVar19 = FUN_0060c0c0(&local_7e8,0x15);
      uVar6 = *(ushort *)(lVar19 + 10);
      puVar28 = (undefined1 *)(ulong)uVar6;
      pvVar29 = *(void **)(lVar19 + 0x10);
      local_8c8 = 0;
      uStack_8c6 = 0;
      uStack_8c4 = 0;
      local_8d0 = (undefined1 *)0x0;
      local_8d8 = (undefined *)0x0;
      if (&DAT_00000016 < puVar28) {
        uVar13 = (ulong)(uVar6 + 0x10) & 0x1fff0;
        pvVar14 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar13);
        local_8d8 = (undefined *)(uVar13 | 1);
        local_8c8 = (ushort)pvVar14;
        uStack_8c6 = (undefined2)((ulong)pvVar14 >> 0x10);
        uStack_8c4 = (uint)((ulong)pvVar14 >> 0x20);
        local_8d0 = puVar28;
LAB_00872418:
        memcpy(pvVar14,pvVar29,(size_t)puVar28);
      }
      else {
        local_8d8 = (undefined *)(ulong)(byte)((char)uVar6 << 1);
        pvVar14 = pvVar18;
        if (uVar6 != 0) goto LAB_00872418;
      }
      *(undefined1 *)((long)pvVar14 + (long)puVar28) = 0;
      lVar19 = 0;
      pvVar29 = pvVar18;
      if (((ulong)local_8d8 & 1) != 0) {
        pvVar29 = (void *)CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,local_8c8));
      }
      do {
        pcVar15 = (char *)((long)pvVar29 + lVar19);
        if (*pcVar15 == '\0') {
          *(undefined1 *)((long)param_1 + lVar19 + 0x778) = 0;
          goto joined_r0x00872578;
        }
        *(char *)((long)param_1 + lVar19 + 0x778) = *pcVar15;
        if (pcVar15[1] == '\0') {
          *(undefined1 *)((long)param_1 + lVar19 + 0x779) = 0;
          goto joined_r0x00872578;
        }
        *(char *)((long)param_1 + lVar19 + 0x779) = pcVar15[1];
        if (pcVar15[2] == '\0') {
          *(undefined1 *)((long)param_1 + lVar19 + 0x77a) = 0;
          goto joined_r0x00872578;
        }
        lVar26 = lVar19 + 3;
        *(char *)((long)param_1 + lVar19 + 0x77a) = pcVar15[2];
        lVar19 = lVar26;
      } while (lVar26 != 0x3f);
      *(undefined1 *)((long)param_1 + 0x7b7) = 0;
joined_r0x00872578:
      if (((ulong)local_8d8 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,local_8c8)));
      }
      if ((int)param_1[0xf7] == 4) {
        lVar19 = param_1[0xc];
        FUN_007e3400(&local_8d8);
        FUN_00874c48(param_1,5,&local_8d8,(short)lVar19,0);
        FUN_007e34a4(&local_8d8);
        FUN_007ecf14(param_1 + 0x109);
        iVar11 = 1;
      }
      else {
LAB_00872520:
        iVar11 = 1;
      }
      goto LAB_0087355c;
    }
    iVar11 = FUN_0060c0ec(&local_7e8);
    if (iVar11 == 0x191) {
      if (local_7e0 != 0x114) {
        if (*(char *)((long)param_1 + 0x74) != '\0') goto LAB_00872520;
        (**(code **)(*(long *)param_1[0xf] + 0x18))(&local_8d8,(long *)param_1[0xf],0);
        FUN_007ee660(local_688,&local_8d8);
        iVar11 = 1;
        if (local_688[0] == 0) {
          *(undefined1 *)((long)param_1 + 0x74) = 1;
        }
        goto LAB_0087355c;
      }
      lVar19 = FUN_0060c0c0(&local_7e8,0x14);
      uVar6 = *(ushort *)(lVar19 + 10);
      uVar13 = (ulong)uVar6;
      pvVar29 = *(void **)(lVar19 + 0x10);
      local_8c8 = 0;
      uStack_8c6 = 0;
      uStack_8c4 = 0;
      local_8d0 = (undefined1 *)0x0;
      local_8d8 = (undefined *)0x0;
      if (uVar13 < 0x17) {
        local_8d8 = (undefined *)(ulong)(byte)((char)uVar6 << 1);
        pvVar14 = pvVar18;
        if (uVar6 != 0) goto LAB_008725ac;
      }
      else {
        uVar27 = (ulong)(uVar6 + 0x10) & 0x1fff0;
        pvVar14 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar27);
        local_8d8 = (undefined *)(uVar27 | 1);
        local_8c8 = (ushort)pvVar14;
        uStack_8c6 = (undefined2)((ulong)pvVar14 >> 0x10);
        uStack_8c4 = (uint)((ulong)pvVar14 >> 0x20);
        local_8d0 = (undefined1 *)uVar13;
LAB_008725ac:
        memcpy(pvVar14,pvVar29,uVar13);
      }
      *(undefined1 *)((long)pvVar14 + uVar13) = 0;
      lVar19 = 0;
      pvVar29 = pvVar18;
      if (((ulong)local_8d8 & 1) != 0) {
        pvVar29 = (void *)CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,local_8c8));
      }
      do {
        pcVar15 = (char *)((long)pvVar29 + lVar19);
        if (*pcVar15 == '\0') {
          *(undefined1 *)((long)param_1 + lVar19 + 0x738) = 0;
          goto joined_r0x00872f10;
        }
        *(char *)((long)param_1 + lVar19 + 0x738) = *pcVar15;
        if (pcVar15[1] == '\0') {
          *(undefined1 *)((long)param_1 + lVar19 + 0x739) = 0;
          goto joined_r0x00872f10;
        }
        *(char *)((long)param_1 + lVar19 + 0x739) = pcVar15[1];
        if (pcVar15[2] == '\0') {
          *(undefined1 *)((long)param_1 + lVar19 + 0x73a) = 0;
          goto joined_r0x00872f10;
        }
        lVar26 = lVar19 + 3;
        *(char *)((long)param_1 + lVar19 + 0x73a) = pcVar15[2];
        lVar19 = lVar26;
      } while (lVar26 != 0x3f);
      *(undefined1 *)((long)param_1 + 0x777) = 0;
joined_r0x00872f10:
      if (((ulong)local_8d8 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,local_8c8)));
      }
      lVar19 = FUN_0060c0c0(&local_7e8,0x15);
      uVar6 = *(ushort *)(lVar19 + 10);
      puVar28 = (undefined1 *)(ulong)uVar6;
      pvVar29 = *(void **)(lVar19 + 0x10);
      local_8c8 = 0;
      uStack_8c6 = 0;
      uStack_8c4 = 0;
      local_8d0 = (undefined1 *)0x0;
      local_8d8 = (undefined *)0x0;
      if (&DAT_00000016 < puVar28) {
        uVar13 = (ulong)(uVar6 + 0x10) & 0x1fff0;
        pvVar14 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar13);
        local_8d8 = (undefined *)(uVar13 | 1);
        local_8c8 = (ushort)pvVar14;
        uStack_8c6 = (undefined2)((ulong)pvVar14 >> 0x10);
        uStack_8c4 = (uint)((ulong)pvVar14 >> 0x20);
        local_8d0 = puVar28;
LAB_0087276c:
        memcpy(pvVar14,pvVar29,(size_t)puVar28);
      }
      else {
        local_8d8 = (undefined *)(ulong)(byte)((char)uVar6 << 1);
        pvVar14 = pvVar18;
        if (uVar6 != 0) goto LAB_0087276c;
      }
      *(undefined1 *)((long)pvVar14 + (long)puVar28) = 0;
      lVar19 = 0;
      pvVar29 = pvVar18;
      if (((ulong)local_8d8 & 1) != 0) {
        pvVar29 = (void *)CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,local_8c8));
      }
      do {
        pcVar15 = (char *)((long)pvVar29 + lVar19);
        if (*pcVar15 == '\0') {
          *(undefined1 *)((long)param_1 + lVar19 + 0x778) = 0;
          goto joined_r0x00872f20;
        }
        *(char *)((long)param_1 + lVar19 + 0x778) = *pcVar15;
        if (pcVar15[1] == '\0') {
          *(undefined1 *)((long)param_1 + lVar19 + 0x779) = 0;
          goto joined_r0x00872f20;
        }
        *(char *)((long)param_1 + lVar19 + 0x779) = pcVar15[1];
        if (pcVar15[2] == '\0') {
          *(undefined1 *)((long)param_1 + lVar19 + 0x77a) = 0;
          goto joined_r0x00872f20;
        }
        lVar26 = lVar19 + 3;
        *(char *)((long)param_1 + lVar19 + 0x77a) = pcVar15[2];
        lVar19 = lVar26;
      } while (lVar26 != 0x3f);
      *(undefined1 *)((long)param_1 + 0x7b7) = 0;
joined_r0x00872f20:
      if (((ulong)local_8d8 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,local_8c8)));
      }
      *(undefined4 *)(param_1 + 0xf7) = 3;
      FUN_007ecf14(param_1 + 0x10a);
      lVar19 = param_1[0xc];
      FUN_007e3400(&local_8d8);
      FUN_00874c48(param_1,2,&local_8d8,(short)lVar19,0);
      FUN_007e34a4(&local_8d8);
      iVar11 = 1;
      goto LAB_0087355c;
    }
    switch(local_7e0) {
    case 0x103:
      bVar5 = *(byte *)(param_1 + 0x102);
      sVar21 = (size_t)(bVar5 >> 1);
      sVar4 = sVar21;
      if ((bVar5 & 1) != 0) {
        sVar4 = param_1[0x103];
      }
      sVar25 = (ulong)(local_7d8 >> 1);
      if ((local_7d8 & 1) != 0) {
        sVar25 = local_7d0;
      }
      if (sVar4 == sVar25) {
        pcVar15 = pcVar2;
        if ((bVar5 & 1) != 0) {
          pcVar15 = (char *)param_1[0x104];
        }
        pcVar20 = local_7d7;
        if ((local_7d8 & 1) != 0) {
          pcVar20 = local_7c8;
        }
        pcVar9 = pcVar2;
        if ((bVar5 & 1) == 0) {
          while (sVar4 != 0) {
            if (*pcVar9 != *pcVar20) goto LAB_00873244;
            pcVar20 = pcVar20 + 1;
            sVar21 = sVar21 - 1;
            pcVar9 = pcVar9 + 1;
            sVar4 = sVar21;
          }
        }
        else if ((sVar4 != 0) && (iVar11 = memcmp(pcVar15,pcVar20,sVar4), iVar11 != 0))
        goto LAB_00873244;
        *(undefined4 *)(param_1 + 0xf7) = 4;
        lVar19 = FUN_0060c03c(&local_7e8,0x20);
        FUN_0060a284(local_9c8,lVar19 + 0x10);
        uVar13 = uVar22;
        if (((ulong)local_9c8[0] & 1) != 0) {
          uVar13 = CONCAT44(uStack_9b4,local_9b8);
        }
        local_8c0 = 0;
        uStack_8be = 0;
        local_8c8 = 0xc0;
        uStack_8c6 = 0;
        uStack_8c4 = 0;
        local_8d8 = puVar10 + 0x10;
        local_8d0 = local_8b0;
        local_8b8 = puVar10 + 0x68;
        uVar12 = FUN_007ec9d0(&local_8d8,uVar13,1);
        FUN_00805548(local_70,&local_8d8,uVar13,uVar12,1);
        FUN_007e3a78(local_70,param_1 + 0xfa,&local_8d8);
        if (((ulong)local_9c8[0] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_9b4,local_9b8));
        }
        lVar19 = FUN_0060c03c(&local_7e8,0x16);
        FUN_0060a284(local_9c8,lVar19 + 0x10);
        uVar13 = uVar22;
        if (((ulong)local_9c8[0] & 1) != 0) {
          uVar13 = CONCAT44(uStack_9b4,local_9b8);
        }
        local_8c0 = 0;
        uStack_8be = 0;
        local_8c8 = 0xc0;
        uStack_8c6 = 0;
        uStack_8c4 = 0;
        local_8d8 = puVar10 + 0x10;
        local_8d0 = local_8b0;
        local_8b8 = puVar10 + 0x68;
        uVar12 = FUN_007ec9d0(&local_8d8,uVar13,1);
        FUN_00805548(local_70,&local_8d8,uVar13,uVar12,1);
        FUN_007e3a78(local_70,param_1 + 0xfe,&local_8d8);
        if (((ulong)local_9c8[0] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_9b4,local_9b8));
        }
        local_8d8 = puVar10 + 0x10;
        local_8b8 = puVar10 + 0x68;
        local_8c8 = 0xc0;
        uStack_8c6 = 0;
        _local_8b0 = _local_8b0 & 0xffffff00;
        lVar19 = 0;
        ppuVar23 = &local_8d8;
        do {
          *(undefined4 *)((long)ppuVar23 + 0x29) = 0;
          lVar26 = lVar19 + 8;
          *(undefined2 *)((long)ppuVar23 + 0x2d) = 0;
          *(undefined1 *)((long)ppuVar23 + 0x2f) = 0;
          ppuVar23 = (undefined **)((long)&local_8d8 + lVar26);
          local_8a9[lVar19 + 1] = 0;
          lVar19 = lVar26;
        } while (lVar26 != 0xc0);
        uStack_8c4 = 0;
        local_8c0 = 0;
        uStack_8be = 0;
        local_8d0 = local_8b0;
        FUN_007e37e0(param_1 + 0xfa,&local_8d8);
        local_9c8[0] = puVar10 + 0x10;
        local_9a8 = puVar10 + 0x68;
        local_9b8 = 0xc0;
        local_9a0 = 0;
        lVar19 = 0;
        ppuVar24 = local_9c8;
        do {
          *(undefined4 *)((long)ppuVar24 + 0x29) = 0;
          lVar26 = lVar19 + 8;
          *(undefined2 *)((long)ppuVar24 + 0x2d) = 0;
          *(undefined1 *)((long)ppuVar24 + 0x2f) = 0;
          ppuVar24 = (undefined1 **)((long)local_9c8 + lVar26);
          local_999[lVar19 + 1] = 0;
          lVar19 = lVar26;
        } while (lVar26 != 0xc0);
        uStack_9b4 = 0;
        local_9b0 = 0;
        local_9c8[1] = &local_9a0;
        FUN_007e37e0(param_1 + 0xfe,local_9c8);
      }
      goto LAB_00873244;
    case 0x104:
      bVar5 = *(byte *)(param_1 + 0x105);
      sVar4 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar4 = param_1[0x106];
      }
      sVar21 = (ulong)(local_7d8 >> 1);
      if ((local_7d8 & 1) != 0) {
        sVar21 = local_7d0;
      }
      iVar11 = 0;
      if (((sVar4 == sVar21) && ((bVar5 & 1) != 0)) && (sVar4 != 0)) {
        pcVar15 = local_7d7;
        if ((local_7d8 & 1) != 0) {
          pcVar15 = local_7c8;
        }
        memcmp((void *)param_1[0x107],pcVar15,sVar4);
        goto LAB_00873244;
      }
      break;
    case 0x105:
    case 0x106:
    case 0x107:
    case 0x108:
    case 0x10a:
    case 0x10b:
    case 0x10c:
    case 0x10d:
    case 0x10e:
    case 0x10f:
    case 0x110:
    case 0x111:
    case 0x112:
    case 0x115:
    case 0x116:
    case 0x117:
    case 0x118:
switchD_008722d0_caseD_105:
      local_8d0 = (undefined1 *)((ulong)local_8d0 & 0xffffffff00000000);
      local_8d8 = (undefined *)0x1000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_8d8);
      goto LAB_00873244;
    case 0x109:
      lVar19 = 0;
      do {
        bVar5 = *(byte *)(param_1 + lVar19 * 0x16 + 0x117);
        uVar13 = (ulong)(bVar5 >> 1);
        sVar4 = uVar13;
        if ((bVar5 & 1) != 0) {
          sVar4 = param_1[lVar19 * 0x16 + 0x118];
        }
        sVar25 = (size_t)(local_7d8 >> 1);
        bVar17 = local_7d8 & 1;
        sVar21 = sVar25;
        if ((local_7d8 & 1) != 0) {
          sVar21 = local_7d0;
        }
        if (sVar4 == sVar21) {
          pvVar29 = (void *)param_1[lVar19 * 0x16 + 0x119];
          if ((bVar5 & 1) == 0) {
            pvVar29 = (void *)((long)param_1 + lVar19 * 0xb0 + 0x8b9);
          }
          pcVar15 = local_7d7;
          if ((local_7d8 & 1) != 0) {
            pcVar15 = local_7c8;
          }
          if ((bVar5 & 1) == 0) {
            if (sVar4 == 0) {
LAB_00872f28:
              iVar11 = 0;
              *(undefined1 *)(param_1 + lVar19 * 0x16 + 0x11d) = 0;
              break;
            }
            pcVar20 = (char *)((long)param_1 + lVar19 * 0xb0 + 0x8b9);
            while (*pcVar20 == *pcVar15) {
              uVar13 = uVar13 - 1;
              pcVar20 = pcVar20 + 1;
              pcVar15 = pcVar15 + 1;
              if (uVar13 == 0) goto LAB_00872f28;
            }
          }
          else {
            if ((sVar4 == 0) || (iVar11 = memcmp(pvVar29,pcVar15,sVar4), iVar11 == 0))
            goto LAB_00872f28;
            bVar17 = local_7d8 & 1;
            sVar25 = (size_t)(local_7d8 >> 1);
          }
        }
        bVar5 = *(byte *)(param_1 + lVar19 * 0x16 + 0x11a);
        uVar13 = (ulong)(bVar5 >> 1);
        sVar4 = uVar13;
        if ((bVar5 & 1) != 0) {
          sVar4 = param_1[lVar19 * 0x16 + 0x11b];
        }
        if (bVar17 != 0) {
          sVar25 = local_7d0;
        }
        if (sVar4 == sVar25) {
          pvVar29 = (void *)param_1[lVar19 * 0x16 + 0x11c];
          if ((bVar5 & 1) == 0) {
            pvVar29 = (void *)((long)param_1 + lVar19 * 0xb0 + 0x8d1);
          }
          pcVar15 = local_7d7;
          if (bVar17 != 0) {
            pcVar15 = local_7c8;
          }
          if ((bVar5 & 1) == 0) {
            if (sVar4 == 0) {
LAB_008729bc:
              iVar11 = 0;
              *(undefined1 *)((long)param_1 + lVar19 * 0xb0 + 0x8e9) = 0;
              break;
            }
            pcVar20 = (char *)((long)param_1 + lVar19 * 0xb0 + 0x8d1);
            while (*pcVar20 == *pcVar15) {
              uVar13 = uVar13 - 1;
              pcVar20 = pcVar20 + 1;
              pcVar15 = pcVar15 + 1;
              if (uVar13 == 0) goto LAB_008729bc;
            }
          }
          else if ((sVar4 == 0) || (iVar11 = memcmp(pvVar29,pcVar15,sVar4), iVar11 == 0))
          goto LAB_008729bc;
        }
        lVar19 = lVar19 + 1;
        iVar11 = 0;
      } while (lVar19 != 0x17);
      break;
    case 0x113:
      bVar5 = *(byte *)(param_1 + 0x102);
      sVar21 = (size_t)(bVar5 >> 1);
      sVar4 = sVar21;
      if ((bVar5 & 1) != 0) {
        sVar4 = param_1[0x103];
      }
      sVar25 = (ulong)(local_7d8 >> 1);
      if ((local_7d8 & 1) != 0) {
        sVar25 = local_7d0;
      }
      if (sVar4 == sVar25) {
        pcVar15 = pcVar2;
        if ((bVar5 & 1) != 0) {
          pcVar15 = (char *)param_1[0x104];
        }
        pcVar20 = local_7d7;
        if ((local_7d8 & 1) != 0) {
          pcVar20 = local_7c8;
        }
        pcVar9 = pcVar2;
        if ((bVar5 & 1) == 0) {
          while (sVar4 != 0) {
            if (*pcVar9 != *pcVar20) goto LAB_00873244;
            pcVar20 = pcVar20 + 1;
            sVar21 = sVar21 - 1;
            pcVar9 = pcVar9 + 1;
            sVar4 = sVar21;
          }
        }
        else if ((sVar4 != 0) && (iVar11 = memcmp(pcVar15,pcVar20,sVar4), iVar11 != 0))
        goto LAB_00873244;
        iVar11 = FUN_0060c0ec(&local_7e8);
        if (iVar11 == 0x1b5) {
          FUN_00870af4(&local_8d8,param_1);
          FUN_007ecf14(param_1 + 0x10a);
          lVar19 = param_1[0xc];
          FUN_007e3400(&local_8d8);
          FUN_00874c48(param_1,2,&local_8d8,(short)lVar19,0);
          FUN_007e34a4(&local_8d8);
        }
      }
      goto LAB_00873244;
    case 0x114:
      iVar11 = FUN_0060c0ec(&local_7e8);
      if (iVar11 != 0x1b5) goto switchD_008722d0_caseD_105;
      if ((int)param_1[0xf7] != 4) goto LAB_00873244;
      lVar26 = param_1[0xf8];
      lVar19 = param_1[0xf9];
      FUN_008706d8();
      param_1[0xf8] = lVar26;
      *(short *)(param_1 + 0xf9) = (short)lVar19;
      lVar26 = param_1[0x10c];
      lVar19 = param_1[0x10d];
      *(undefined1 *)(param_1 + 0xe7) = 0;
      *(undefined1 *)(param_1 + 0xef) = 0;
      FUN_0087088c(param_1 + 0x10b);
      param_1[0x10c] = lVar26;
      *(short *)(param_1 + 0x10d) = (short)lVar19;
      lVar26 = param_1[0x122];
      lVar19 = param_1[0x123];
      FUN_0087088c(param_1 + 0x121);
      param_1[0x122] = lVar26;
      *(short *)(param_1 + 0x123) = (short)lVar19;
      lVar26 = param_1[0x138];
      lVar19 = param_1[0x139];
      FUN_0087088c(param_1 + 0x137);
      param_1[0x138] = lVar26;
      *(short *)(param_1 + 0x139) = (short)lVar19;
      lVar26 = param_1[0x14e];
      lVar19 = param_1[0x14f];
      FUN_0087088c(param_1 + 0x14d);
      param_1[0x14e] = lVar26;
      *(short *)(param_1 + 0x14f) = (short)lVar19;
      lVar26 = param_1[0x164];
      lVar19 = param_1[0x165];
      FUN_0087088c(param_1 + 0x163);
      param_1[0x164] = lVar26;
      *(short *)(param_1 + 0x165) = (short)lVar19;
      lVar26 = param_1[0x17a];
      lVar19 = param_1[0x17b];
      FUN_0087088c(param_1 + 0x179);
      param_1[0x17a] = lVar26;
      *(short *)(param_1 + 0x17b) = (short)lVar19;
      lVar26 = param_1[400];
      lVar19 = param_1[0x191];
      FUN_0087088c(param_1 + 399);
      param_1[400] = lVar26;
      *(short *)(param_1 + 0x191) = (short)lVar19;
      lVar26 = param_1[0x1a6];
      lVar19 = param_1[0x1a7];
      FUN_0087088c(param_1 + 0x1a5);
      param_1[0x1a6] = lVar26;
      *(short *)(param_1 + 0x1a7) = (short)lVar19;
      lVar26 = param_1[0x1bc];
      lVar19 = param_1[0x1bd];
      FUN_0087088c(param_1 + 0x1bb);
      param_1[0x1bc] = lVar26;
      *(short *)(param_1 + 0x1bd) = (short)lVar19;
      lVar26 = param_1[0x1d2];
      lVar19 = param_1[0x1d3];
      FUN_0087088c(param_1 + 0x1d1);
      param_1[0x1d2] = lVar26;
      *(short *)(param_1 + 0x1d3) = (short)lVar19;
      lVar26 = param_1[0x1e8];
      lVar19 = param_1[0x1e9];
      FUN_0087088c(param_1 + 0x1e7);
      param_1[0x1e8] = lVar26;
      *(short *)(param_1 + 0x1e9) = (short)lVar19;
      lVar26 = param_1[0x1fe];
      lVar19 = param_1[0x1ff];
      FUN_0087088c(param_1 + 0x1fd);
      param_1[0x1fe] = lVar26;
      *(short *)(param_1 + 0x1ff) = (short)lVar19;
      lVar26 = param_1[0x214];
      lVar19 = param_1[0x215];
      FUN_0087088c(param_1 + 0x213);
      param_1[0x214] = lVar26;
      *(short *)(param_1 + 0x215) = (short)lVar19;
      lVar26 = param_1[0x22a];
      lVar19 = param_1[0x22b];
      FUN_0087088c(param_1 + 0x229);
      param_1[0x22a] = lVar26;
      *(short *)(param_1 + 0x22b) = (short)lVar19;
      lVar26 = param_1[0x240];
      lVar19 = param_1[0x241];
      FUN_0087088c(param_1 + 0x23f);
      param_1[0x240] = lVar26;
      *(short *)(param_1 + 0x241) = (short)lVar19;
      lVar26 = param_1[0x256];
      lVar19 = param_1[599];
      FUN_0087088c(param_1 + 0x255);
      param_1[0x256] = lVar26;
      *(short *)(param_1 + 599) = (short)lVar19;
      lVar26 = param_1[0x26c];
      lVar19 = param_1[0x26d];
      FUN_0087088c(param_1 + 0x26b);
      param_1[0x26c] = lVar26;
      *(short *)(param_1 + 0x26d) = (short)lVar19;
      lVar26 = param_1[0x282];
      lVar19 = param_1[0x283];
      FUN_0087088c(param_1 + 0x281);
      param_1[0x282] = lVar26;
      *(short *)(param_1 + 0x283) = (short)lVar19;
      lVar26 = param_1[0x298];
      lVar19 = param_1[0x299];
      FUN_0087088c(param_1 + 0x297);
      param_1[0x298] = lVar26;
      *(short *)(param_1 + 0x299) = (short)lVar19;
      lVar26 = param_1[0x2ae];
      lVar19 = param_1[0x2af];
      FUN_0087088c(param_1 + 0x2ad);
      param_1[0x2ae] = lVar26;
      *(short *)(param_1 + 0x2af) = (short)lVar19;
      lVar26 = param_1[0x2c4];
      lVar19 = param_1[0x2c5];
      FUN_0087088c(param_1 + 0x2c3);
      param_1[0x2c4] = lVar26;
      *(short *)(param_1 + 0x2c5) = (short)lVar19;
      lVar26 = param_1[0x2da];
      lVar19 = param_1[0x2db];
      FUN_0087088c(param_1 + 0x2d9);
      param_1[0x2da] = lVar26;
      *(short *)(param_1 + 0x2db) = (short)lVar19;
      lVar26 = param_1[0x2f0];
      lVar19 = param_1[0x2f1];
      FUN_0087088c(param_1 + 0x2ef);
      param_1[0x2f0] = lVar26;
      *(short *)(param_1 + 0x2f1) = (short)lVar19;
      FUN_00870af4(&local_8d8,param_1);
      iVar11 = 0;
      *(undefined4 *)(param_1 + 0xf7) = 1;
      break;
    case 0x119:
      uVar13 = 0;
      do {
        bVar5 = *(byte *)(param_1 + uVar13 * 0x16 + 0x117);
        uVar27 = (ulong)(bVar5 >> 1);
        sVar4 = uVar27;
        if ((bVar5 & 1) != 0) {
          sVar4 = param_1[uVar13 * 0x16 + 0x118];
        }
        sVar25 = (size_t)(local_7d8 >> 1);
        bVar17 = local_7d8 & 1;
        sVar21 = sVar25;
        if ((local_7d8 & 1) != 0) {
          sVar21 = local_7d0;
        }
        if (sVar4 == sVar21) {
          pvVar29 = (void *)param_1[uVar13 * 0x16 + 0x119];
          if ((bVar5 & 1) == 0) {
            pvVar29 = (void *)((long)param_1 + uVar13 * 0xb0 + 0x8b9);
          }
          pcVar15 = local_7d7;
          if ((local_7d8 & 1) != 0) {
            pcVar15 = local_7c8;
          }
          if ((bVar5 & 1) != 0) {
            if ((sVar4 == 0) || (iVar11 = memcmp(pvVar29,pcVar15,sVar4), iVar11 == 0))
            goto LAB_00872f38;
            bVar17 = local_7d8 & 1;
            sVar25 = (size_t)(local_7d8 >> 1);
            goto LAB_00872a94;
          }
          if (sVar4 != 0) {
            pcVar20 = (char *)((long)param_1 + uVar13 * 0xb0 + 0x8b9);
            while (*pcVar20 == *pcVar15) {
              uVar27 = uVar27 - 1;
              pcVar20 = pcVar20 + 1;
              pcVar15 = pcVar15 + 1;
              if (uVar27 == 0) goto LAB_00872f38;
            }
            goto LAB_00872a94;
          }
LAB_00872f38:
          uVar6 = *(ushort *)(param_1 + uVar13 * 0x16 + 0x116);
          *(short *)(param_1 + uVar13 * 0x16 + 0x116) = (short)(uVar6 + 1);
          if ((uVar6 + 1 >> 8 & 0xff) < 0x41) {
            uVar7 = (undefined2)param_1[uVar13 * 0x16 + 0x10d];
            lVar19 = uVar13 * 0x16 + 0x10e;
            uVar16 = 3;
LAB_0087323c:
            FUN_00874c48(param_1,uVar16,param_1 + lVar19,uVar13 & 0xffffffff,uVar7);
            goto LAB_00873244;
          }
LAB_00872f54:
          local_8d8 = (undefined *)CONCAT44(local_8d8._4_4_,0x10408);
          local_9c8[0] = (undefined1 *)((ulong)local_9c8[0] & 0xffffffff00000000);
          nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_9c8);
          FUN_007ee660(param_1 + 0xe5,&local_8d8);
          iVar11 = 0;
          *(undefined4 *)(param_1 + 0xf7) = 5;
          break;
        }
LAB_00872a94:
        bVar5 = *(byte *)(param_1 + uVar13 * 0x16 + 0x11a);
        uVar27 = (ulong)(bVar5 >> 1);
        sVar4 = uVar27;
        if ((bVar5 & 1) != 0) {
          sVar4 = param_1[uVar13 * 0x16 + 0x11b];
        }
        if (bVar17 != 0) {
          sVar25 = local_7d0;
        }
        if (sVar4 == sVar25) {
          pvVar29 = (void *)param_1[uVar13 * 0x16 + 0x11c];
          if ((bVar5 & 1) == 0) {
            pvVar29 = (void *)((long)param_1 + uVar13 * 0xb0 + 0x8d1);
          }
          pcVar15 = local_7d7;
          if (bVar17 != 0) {
            pcVar15 = local_7c8;
          }
          if ((bVar5 & 1) == 0) {
            if (sVar4 == 0) {
LAB_00872b20:
              uVar8 = *(ushort *)((long)param_1 + uVar13 * 0xb0 + 0x8b2) + 1;
              *(short *)((long)param_1 + uVar13 * 0xb0 + 0x8b2) = (short)uVar8;
              if ((uVar8 >> 8 & 0xff) < 0x51) {
                uVar7 = (undefined2)param_1[uVar13 * 0x16 + 0x10d];
                lVar19 = uVar13 * 0x16 + 0x112;
                uVar16 = 4;
                goto LAB_0087323c;
              }
              goto LAB_00872f54;
            }
            pcVar20 = (char *)((long)param_1 + uVar13 * 0xb0 + 0x8d1);
            while (*pcVar20 == *pcVar15) {
              uVar27 = uVar27 - 1;
              pcVar20 = pcVar20 + 1;
              pcVar15 = pcVar15 + 1;
              if (uVar27 == 0) goto LAB_00872b20;
            }
          }
          else if ((sVar4 == 0) || (iVar11 = memcmp(pvVar29,pcVar15,sVar4), iVar11 == 0))
          goto LAB_00872b20;
        }
        uVar13 = uVar13 + 1;
        iVar11 = 0;
      } while (uVar13 != 0x17);
      break;
    default:
      if (local_7e0 != 0x17) goto switchD_008722d0_caseD_105;
      local_8d8 = puVar10 + 0x10;
      local_8b8 = puVar10 + 0x68;
      local_8c8 = 0xc0;
      uStack_8c6 = 0;
      _local_8b0 = _local_8b0 & 0xffffff00;
      lVar19 = 0;
      ppuVar23 = &local_8d8;
      do {
        lVar26 = lVar19 + 8;
        *(undefined4 *)((long)ppuVar23 + 0x29) = 0;
        *(undefined2 *)((long)ppuVar23 + 0x2d) = 0;
        *(undefined1 *)((long)ppuVar23 + 0x2f) = 0;
        ppuVar23 = (undefined **)((long)&local_8d8 + lVar26);
        local_8a9[lVar19 + 1] = 0;
        lVar19 = lVar26;
      } while (lVar26 != 0xc0);
      uStack_8c4 = 0;
      local_8c0 = 0;
      uStack_8be = 0;
      local_8d0 = local_8b0;
      FUN_007e37e0(auStack_670,&local_8d8);
LAB_00873244:
      iVar11 = 0;
    }
LAB_0087355c:
    FUN_0060eecc(&local_7e8);
LAB_00873564:
    FUN_007e34a4(auStack_670);
    if (iVar11 == 1) {
      return;
    }
  } while( true );
}


