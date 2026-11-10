/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e64b0; name: FUN_031e64b0
 */


void FUN_031e64b0(long param_1,int *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  uint uVar11;
  ulong uVar12;
  short sVar13;
  long lVar14;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  uint *puVar23;
  uint *puVar24;
  undefined4 uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint local_170 [2];
  int local_168 [2];
  undefined8 local_160;
  uint local_158 [2];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 local_130 [2];
  int local_128 [2];
  int local_120 [2];
  uint local_118 [2];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [16];
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  int local_a0;
  long local_98;
  undefined8 local_90;
  int local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  if (*(long *)(lVar3 + 0x38d490) == 0) {
    lVar20 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar20;
    local_70 = *(long *)(lVar20 + 0x10);
  }
  else {
    local_70 = *(long *)(*(long *)(lVar3 + 0x38d490) + 0x10);
  }
  if (local_70 != 0) {
    FUN_032d5af0(local_70,"TtthreadSafeResetClearanceFloodFill",0x23);
  }
  puVar6 = PTR_PTR_0434a090;
  lVar3 = (long)&local_78 + 4;
  local_88 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_78 = 0x8000000000000000;
  local_98 = 0;
  local_90 = 0x8000000000000000;
  local_b0 = 0;
  local_a8 = 0x8000000000000000;
  local_80 = FUN_032bd1d4(PTR_PTR_0434a090,0x20,4,0,0);
  if ((int)local_78 != 0x20) {
    local_78 = CONCAT44(local_78._4_4_,0x20);
  }
  FUN_031e7a5c(&local_98,0x40);
  FUN_031e7a5c(&local_b0,0x40);
  lVar20 = *(long *)(*(long *)(param_1 + 0x38) + (long)*param_2 * 0xf0);
  local_c0 = 0;
  local_b8 = -0x8000000000000000;
  FUN_0318b774(lVar20,&local_c0);
  local_e0 = 0;
  local_d8 = 0x8000000000000000;
  FUN_032c2320();
  uVar25 = FUN_03179fd0(param_1,*(undefined4 *)(*(long *)(lVar20 + 0x20) + 0x180));
  puVar5 = PTR_PTR_0434a080;
  local_e8 = CONCAT44(uVar25,uVar25);
  if (param_3 != param_4) {
    do {
      uVar1 = *param_3;
      local_78 = local_78 & 0xffffffff00000000;
      if (0 < (int)local_90) {
        uVar12 = local_90 & 7;
        if ((local_90 & 0xffffffff) - 1 < 7) {
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          do {
            lVar9 = lVar14 * 4;
            lVar14 = lVar14 + 8;
            *(undefined4 *)(local_98 + lVar9) = 0xffffffff;
            *(undefined4 *)(local_98 + lVar9 + 4) = 0xffffffff;
            *(undefined4 *)(local_98 + lVar9 + 8) = 0xffffffff;
            *(undefined4 *)(local_98 + lVar9 + 0xc) = 0xffffffff;
            *(undefined4 *)(local_98 + lVar9 + 0x10) = 0xffffffff;
            *(undefined4 *)(local_98 + lVar9 + 0x14) = 0xffffffff;
            *(undefined4 *)(local_98 + lVar9 + 0x18) = 0xffffffff;
            *(undefined4 *)(local_98 + lVar9 + 0x1c) = 0xffffffff;
          } while ((local_90 & 0xffffffff) - uVar12 != lVar14);
        }
        if ((local_90 & 7) != 0) {
          lVar14 = lVar14 << 2;
          do {
            *(undefined4 *)(local_98 + lVar14) = 0xffffffff;
            uVar12 = uVar12 - 1;
            lVar14 = lVar14 + 4;
          } while (uVar12 != 0);
        }
      }
      local_88 = 0;
      local_118[0] = uVar1;
      FUN_0319689c(lVar20,local_118,&local_e8,&local_110);
      uVar17 = local_78;
      lVar14 = local_80;
      iVar8 = *param_2;
      uVar15 = (int)local_78 + 1;
      uVar12 = (ulong)uVar15;
      if ((int)(local_78._4_4_ & 0x3fffffff) <= (int)local_78) {
        if (0x3ffffffe < (int)local_78) {
          FUN_032bd0a8(uVar15);
        }
        uVar19 = (local_78._4_4_ & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar19) {
          uVar19 = 0x3fffffff;
        }
        uVar11 = uVar15;
        if ((int)uVar15 <= (int)uVar19) {
          uVar11 = uVar19;
        }
        local_80 = FUN_032bd1d4(puVar6,uVar11,4,lVar14,uVar17 & 0xffffffff,lVar3);
      }
      *(uint *)(local_80 + (long)(int)local_78 * 4) = uVar1 | iVar8 << 0x16;
      local_78 = CONCAT44(local_78._4_4_,uVar15);
      while (uVar15 != 0) {
        uVar12 = (long)(int)uVar12 - 1;
        uVar1 = *(uint *)(local_80 + uVar12 * 4);
        local_78._4_4_ = (uint)(local_78 >> 0x20);
        local_78 = CONCAT44(local_78._4_4_,(int)uVar12);
        if (0 < (int)((int)local_90 - 1U)) {
          uVar15 = (uVar1 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar1 * -0x61c8864f & 0xff00ff) << 8;
          uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
          while( true ) {
            uVar15 = (int)local_90 - 1U & uVar15;
            uVar19 = *(uint *)(local_98 + (long)(int)uVar15 * 4);
            if (uVar19 == 0xffffffff) break;
            if (uVar19 == uVar1) {
              if ((int)uVar15 < (int)local_90) goto LAB_031e67d0;
              break;
            }
            uVar15 = uVar15 + 1;
          }
        }
        uVar15 = uVar1 >> 0x16;
        lVar14 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar15 * 0xf0);
        if (lVar14 == lVar20) {
          plVar21 = &local_c0;
        }
        else {
          uVar12 = (ulong)local_160 >> 0x20;
          local_160 = CONCAT44((int)uVar12,uVar15);
          iVar8 = FUN_031e76e4(&local_e0,&local_160);
          if ((int)local_d8 == iVar8) {
            local_150 = 0;
            uStack_148 = -0x8000000000000000;
            FUN_0318b774(lVar14,&local_150);
            iVar26 = (int)local_d8 + 1;
            if ((int)(local_d8._4_4_ & 0x3fffffff) <= (int)local_d8) {
              local_e0 = FUN_031e77d0(puVar5,iVar26,local_e0,local_d8 & 0xffffffff,
                                      (long)&local_d8 + 4);
            }
            puVar23 = (uint *)(local_e0 + (long)(int)local_d8 * 0x18);
            *puVar23 = uVar15;
            puVar16 = puVar23 + 2;
            puVar16[0] = 0;
            puVar16[1] = 0;
            puVar24 = puVar23 + 4;
            puVar24[0] = 0;
            puVar24[1] = 0x80000000;
            if (uStack_148 < 0) {
              FUN_031e79a8(puVar6,&local_150);
            }
            *(undefined8 *)puVar16 = local_150;
            *puVar24 = (uint)uStack_148;
            puVar23[5] = uStack_148._4_4_;
            local_d8 = CONCAT44(local_d8._4_4_,iVar26);
          }
          plVar21 = (long *)(local_e0 + (long)iVar8 * 0x18 + 8);
        }
        uVar12 = (ulong)uVar1 & 0x3fffff;
        uVar25 = (undefined4)uVar12;
        local_150 = CONCAT44(local_150._4_4_,uVar25);
        cVar7 = FUN_0318fe6c(*(undefined8 *)(lVar14 + 0x20),&local_150,&local_160,local_120);
        if (cVar7 != '\0') {
          for (iVar8 = (int)local_160; iVar8 < local_120[0]; iVar8 = iVar8 + 1) {
            local_128[0] = iVar8;
            FUN_0318b8b8(lVar14,plVar21,local_128);
          }
        }
        local_130[0] = uVar25;
        FUN_0318b8b8(lVar14,plVar21,local_130);
        lVar9 = *(long *)(lVar14 + 0x20);
        piVar10 = (int *)(*(long *)(lVar9 + 0x18) + uVar12 * 0x10);
        iVar8 = *piVar10;
        sVar13 = (short)piVar10[2];
        if (0 < sVar13) {
          lVar22 = (long)iVar8;
          do {
            lVar18 = *(long *)(lVar9 + 0x28) + lVar22 * 0x14;
            uVar19 = *(uint *)(lVar18 + 0xc);
            uVar15 = 0xffffffff;
            if (uVar19 != 0xffffffff) {
              uVar15 = uVar19 & 0x3fffff | *(int *)(lVar9 + 0x17c) << 0x16;
            }
            if ((*(byte *)(lVar18 + 0x10) & 0x40) == 0) {
              uVar19 = uVar15;
            }
            if (*(int *)(*(long *)(lVar9 + 0x28) + lVar22 * 0x14 + 8) != -1) {
              if (0 < (int)((int)local_90 - 1U)) {
                uVar15 = (uVar19 * -0x61c8864f & 0xff00ff00) >> 8 |
                         (uVar19 * -0x61c8864f & 0xff00ff) << 8;
                uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
                while( true ) {
                  uVar15 = (int)local_90 - 1U & uVar15;
                  uVar11 = *(uint *)(local_98 + (long)(int)uVar15 * 4);
                  if (uVar11 == 0xffffffff) break;
                  if (uVar11 == uVar19) {
                    if ((int)uVar15 < (int)local_90) goto LAB_031e69d0;
                    break;
                  }
                  uVar15 = uVar15 + 1;
                }
              }
              local_158[0] = uVar19 & 0x3fffff;
              local_160 = 0;
              FUN_0319689c(lVar14,local_158,&local_160,&local_150);
              uVar17 = local_78;
              lVar9 = local_80;
              iVar8 = -(uint)((float)local_110 <= (float)uStack_140);
              iVar26 = -(uint)((float)((ulong)local_110 >> 0x20) <=
                              (float)((ulong)uStack_140 >> 0x20));
              iVar27 = -(uint)((float)uStack_108 <= (float)uStack_138);
              iVar28 = -(uint)((float)local_150 <= (float)local_100);
              iVar29 = -(uint)((float)((ulong)local_150 >> 0x20) <=
                              (float)((ulong)local_100 >> 0x20));
              iVar30 = -(uint)((float)uStack_148 <= (float)uStack_f8);
              uVar15 = CONCAT13((byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar8 >> 0x18),
                                CONCAT12((byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar8 >> 0x10),
                                         CONCAT11((byte)((uint)iVar28 >> 8) &
                                                  (byte)((uint)iVar8 >> 8),
                                                  (byte)iVar28 & (byte)iVar8)));
              if ((uVar15 & (uint)(CONCAT17((byte)((uint)iVar29 >> 0x18) &
                                            (byte)((uint)iVar26 >> 0x18),
                                            CONCAT16((byte)((uint)iVar29 >> 0x10) &
                                                     (byte)((uint)iVar26 >> 0x10),
                                                     CONCAT15((byte)((uint)iVar29 >> 8) &
                                                              (byte)((uint)iVar26 >> 8),
                                                              CONCAT14((byte)iVar29 & (byte)iVar26,
                                                                       uVar15)))) >> 0x20) &
                  CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar27 >> 0x18),
                           CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar27 >> 0x10),
                                    CONCAT11((byte)((uint)iVar30 >> 8) & (byte)((uint)iVar27 >> 8),
                                             (byte)iVar30 & (byte)iVar27)))) != 0) {
                uVar15 = (int)local_78 + 1;
                if ((int)(local_78._4_4_ & 0x3fffffff) <= (int)local_78) {
                  if (0x3ffffffe < (int)local_78) {
                    FUN_032bd0a8(uVar15);
                  }
                  uVar11 = (local_78._4_4_ & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar11) {
                    uVar11 = 0x3fffffff;
                  }
                  uVar4 = uVar15;
                  if ((int)uVar15 <= (int)uVar11) {
                    uVar4 = uVar11;
                  }
                  local_80 = FUN_032bd1d4(puVar6,uVar4,4,lVar9,uVar17 & 0xffffffff,lVar3);
                }
                *(uint *)(local_80 + (long)(int)local_78 * 4) = uVar19;
                local_78 = CONCAT44(local_78._4_4_,uVar15);
              }
              sVar13 = (short)piVar10[2];
              iVar8 = *piVar10;
              lVar9 = *(long *)(lVar14 + 0x20);
            }
LAB_031e69d0:
            lVar22 = lVar22 + 1;
          } while (lVar22 < iVar8 + sVar13);
        }
        if ((*(int *)(lVar9 + 0x108) != 0) &&
           (((*(byte *)(*(long *)(lVar9 + 0x100) + uVar12) ^ 0xff) & 5) == 0)) {
          if (0 < (int)local_a8) {
            uVar12 = local_a8 & 7;
            if ((local_a8 & 0xffffffff) - 1 < 7) {
              lVar9 = 0;
            }
            else {
              lVar9 = 0;
              do {
                lVar22 = lVar9 * 4;
                *(undefined4 *)(local_b0 + lVar22) = 0xffffffff;
                *(undefined4 *)(local_b0 + lVar22 + 4) = 0xffffffff;
                *(undefined4 *)(local_b0 + lVar22 + 8) = 0xffffffff;
                *(undefined4 *)(local_b0 + lVar22 + 0xc) = 0xffffffff;
                *(undefined4 *)(local_b0 + lVar22 + 0x10) = 0xffffffff;
                *(undefined4 *)(local_b0 + lVar22 + 0x14) = 0xffffffff;
                *(undefined4 *)(local_b0 + lVar22 + 0x18) = 0xffffffff;
                lVar9 = lVar9 + 8;
                *(undefined4 *)(local_b0 + lVar22 + 0x1c) = 0xffffffff;
              } while ((local_a8 & 0xffffffff) - uVar12 != lVar9);
            }
            if ((local_a8 & 7) != 0) {
              lVar9 = lVar9 << 2;
              do {
                uVar12 = uVar12 - 1;
                *(undefined4 *)(local_b0 + lVar9) = 0xffffffff;
                lVar9 = lVar9 + 4;
              } while (uVar12 != 0);
            }
            lVar9 = *(long *)(lVar14 + 0x20);
          }
          local_a0 = 0;
          local_150 = CONCAT44(local_150._4_4_,uVar25);
          cVar7 = FUN_0318fe6c(lVar9,&local_150,local_120,local_168);
          if (cVar7 != '\0') {
            lVar9 = (long)local_120[0];
            iVar8 = local_168[0];
            if (local_120[0] < local_168[0]) {
LAB_031e6ecc:
              lVar22 = *(long *)(lVar14 + 0x20);
              if (lVar9 < *(int *)(lVar22 + 0x20)) {
                if (*(int *)(lVar22 + 0x98) == 0) {
                  iVar26 = (int)lVar9;
                }
                else {
                  iVar26 = *(int *)(*(long *)(lVar22 + 0x90) + lVar9 * 4);
                }
                if (iVar26 == -1) {
                  piVar10 = (int *)(*(long *)(lVar22 + 0x18) + lVar9 * 0x10);
                }
                else {
                  piVar10 = (int *)(*(long *)(lVar22 + 0xb0) + (long)iVar26 * 0x10);
                }
              }
              else {
                piVar10 = (int *)(*(long *)(lVar22 + 0xd0) +
                                 (lVar9 - *(int *)(lVar22 + 0x20)) * 0x10);
              }
              sVar13 = (short)piVar10[2];
              if (0 < sVar13) {
                iVar8 = *piVar10;
                lVar18 = (long)iVar8;
                do {
                  if (lVar18 < *(int *)(lVar22 + 0x30)) {
                    if (*(int *)(lVar22 + 0x78) == 0) {
                      iVar26 = (int)lVar18;
                    }
                    else {
                      iVar26 = *(int *)(*(long *)(lVar22 + 0x70) + lVar18 * 4);
                    }
                    if (iVar26 == -1) {
                      lVar22 = *(long *)(lVar22 + 0x28) + lVar18 * 0x14;
                      bVar2 = *(byte *)(lVar22 + 0x10);
                    }
                    else {
                      lVar22 = *(long *)(lVar22 + 0xc0) + (long)iVar26 * 0x14;
                      bVar2 = *(byte *)(lVar22 + 0x10);
                    }
                  }
                  else {
                    lVar22 = *(long *)(lVar22 + 0xe0) + (lVar18 - *(int *)(lVar22 + 0x30)) * 0x14;
                    bVar2 = *(byte *)(lVar22 + 0x10);
                  }
                  if (((bVar2 >> 6 & 1) != 0) && (*(int *)(lVar22 + 8) != -1)) {
                    uVar15 = *(uint *)(lVar22 + 0xc);
                    uVar15 = *(uint *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) +
                                                                    (ulong)(uVar15 >> 0x16) * 0xf0)
                                                          + 0x20) + 0x168) +
                                      ((ulong)uVar15 & 0x3fffff) * 4) | uVar15 & 0xffc00000;
                    if (0 < (int)((int)local_90 - 1U)) {
                      uVar19 = (uVar15 * -0x61c8864f & 0xff00ff00) >> 8 |
                               (uVar15 * -0x61c8864f & 0xff00ff) << 8;
                      uVar19 = uVar19 >> 0x10 | uVar19 << 0x10;
                      while( true ) {
                        uVar19 = uVar19 & (int)local_90 - 1U;
                        uVar11 = *(uint *)(local_98 + (long)(int)uVar19 * 4);
                        if (uVar11 == 0xffffffff) break;
                        if (uVar11 == uVar15) {
                          if ((int)uVar19 < (int)local_90) goto LAB_031e70b4;
                          break;
                        }
                        uVar19 = uVar19 + 1;
                      }
                    }
                    if ((int)local_a8 <= local_a0 * 2) {
                      FUN_031e7a5c(&local_b0,(int)local_a8 << 1);
                    }
                    uVar19 = (uVar15 * -0x61c8864f & 0xff00ff00) >> 8 |
                             (uVar15 * -0x61c8864f & 0xff00ff) << 8;
                    uVar19 = (int)local_a8 - 1U & (uVar19 >> 0x10 | uVar19 << 0x10);
                    puVar16 = (uint *)(local_b0 + (long)(int)uVar19 * 4);
                    if (*puVar16 == 0xffffffff) {
                      iVar8 = 1;
                    }
                    else if (*puVar16 == uVar15) {
                      iVar8 = 0;
                    }
                    else {
                      do {
                        uVar19 = uVar19 + 1 & (int)local_a8 - 1U;
                        uVar11 = *(uint *)(local_b0 + (long)(int)uVar19 * 4);
                        if (uVar11 == 0xffffffff) {
                          iVar8 = 1;
                          goto LAB_031e70d0;
                        }
                      } while (uVar11 != uVar15);
                      iVar8 = 0;
LAB_031e70d0:
                      puVar16 = (uint *)(local_b0 + (long)(int)uVar19 * 4);
                    }
                    local_a0 = local_a0 + iVar8;
                    *puVar16 = uVar15;
                    sVar13 = (short)piVar10[2];
                    iVar8 = *piVar10;
                  }
LAB_031e70b4:
                  lVar18 = lVar18 + 1;
                  if (iVar8 + sVar13 <= lVar18) goto LAB_031e6ebc;
                  lVar22 = *(long *)(lVar14 + 0x20);
                } while( true );
              }
              goto LAB_031e6ec0;
            }
          }
LAB_031e70f4:
          uVar12 = local_a8 & 0xffffffff;
          if (0 < (int)local_a8) {
            uVar17 = 0;
            do {
              if (*(int *)(local_b0 + uVar17 * 4) != -1) break;
              uVar17 = uVar17 + 1;
            } while (uVar12 != uVar17);
            if ((int)uVar17 < (int)local_a8) {
              uVar17 = uVar17 & 0xffffffff;
              lVar14 = local_b0;
              do {
                uVar15 = *(uint *)(lVar14 + (-(uVar17 >> 0x1f & 1) & 0xfffffffc00000000 |
                                            (uVar17 & 0xffffffff) << 2));
                lVar9 = (long)(int)uVar17;
                lVar22 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar15 >> 0x16) * 0xf0);
                if (lVar22 != 0) {
                  local_170[0] = uVar15 & 0x3fffff;
                  local_160 = 0;
                  FUN_0319689c(lVar22,local_170,&local_160,&local_150);
                  uVar12 = local_78;
                  lVar14 = local_80;
                  iVar8 = -(uint)((float)local_110 <= (float)uStack_140);
                  iVar26 = -(uint)((float)((ulong)local_110 >> 0x20) <=
                                  (float)((ulong)uStack_140 >> 0x20));
                  iVar27 = -(uint)((float)uStack_108 <= (float)uStack_138);
                  iVar28 = -(uint)((float)local_150 <= (float)local_100);
                  iVar29 = -(uint)((float)((ulong)local_150 >> 0x20) <=
                                  (float)((ulong)local_100 >> 0x20));
                  iVar30 = -(uint)((float)uStack_148 <= (float)uStack_f8);
                  uVar19 = CONCAT13((byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar8 >> 0x18),
                                    CONCAT12((byte)((uint)iVar28 >> 0x10) &
                                             (byte)((uint)iVar8 >> 0x10),
                                             CONCAT11((byte)((uint)iVar28 >> 8) &
                                                      (byte)((uint)iVar8 >> 8),
                                                      (byte)iVar28 & (byte)iVar8)));
                  if ((uVar19 & (uint)(CONCAT17((byte)((uint)iVar29 >> 0x18) &
                                                (byte)((uint)iVar26 >> 0x18),
                                                CONCAT16((byte)((uint)iVar29 >> 0x10) &
                                                         (byte)((uint)iVar26 >> 0x10),
                                                         CONCAT15((byte)((uint)iVar29 >> 8) &
                                                                  (byte)((uint)iVar26 >> 8),
                                                                  CONCAT14((byte)iVar29 &
                                                                           (byte)iVar26,uVar19))))
                                      >> 0x20) &
                      CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar27 >> 0x18),
                               CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar27 >> 0x10),
                                        CONCAT11((byte)((uint)iVar30 >> 8) &
                                                 (byte)((uint)iVar27 >> 8),
                                                 (byte)iVar30 & (byte)iVar27)))) != 0) {
                    uVar19 = (int)local_78 + 1;
                    if ((int)(local_78._4_4_ & 0x3fffffff) <= (int)local_78) {
                      if (0x3ffffffe < (int)local_78) {
                        FUN_032bd0a8(uVar19);
                      }
                      uVar11 = (local_78._4_4_ & 0x3fffffff) << 1;
                      if (0x3ffffffe < uVar11) {
                        uVar11 = 0x3fffffff;
                      }
                      uVar4 = uVar19;
                      if ((int)uVar19 <= (int)uVar11) {
                        uVar4 = uVar11;
                      }
                      local_80 = FUN_032bd1d4(puVar6,uVar4,4,lVar14,uVar12 & 0xffffffff,lVar3);
                    }
                    *(uint *)(local_80 + (long)(int)local_78 * 4) = uVar15;
                    local_78 = CONCAT44(local_78._4_4_,uVar19);
                  }
                  uVar12 = local_a8 & 0xffffffff;
                  lVar14 = local_b0;
                }
                lVar22 = uVar17 << 0x20;
                do {
                  lVar22 = lVar22 + 0x100000000;
                  if ((int)uVar12 + -1 <= lVar9) break;
                  lVar18 = lVar9 * 4;
                  lVar9 = lVar9 + 1;
                } while (*(int *)(lVar14 + lVar18 + 4) == -1);
                uVar17 = lVar22 >> 0x20;
              } while ((int)((ulong)lVar22 >> 0x20) < (int)uVar12);
            }
          }
        }
        if ((int)local_90 <= local_88 * 2) {
          FUN_031e7a5c(&local_98,(int)local_90 << 1);
        }
        uVar15 = (uVar1 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar1 * -0x61c8864f & 0xff00ff) << 8;
        uVar15 = (int)local_90 - 1U & (uVar15 >> 0x10 | uVar15 << 0x10);
        puVar16 = (uint *)(local_98 + (long)(int)uVar15 * 4);
        if (*puVar16 == 0xffffffff) {
          iVar8 = 1;
        }
        else if (*puVar16 == uVar1) {
          iVar8 = 0;
        }
        else {
          do {
            uVar15 = uVar15 + 1 & (int)local_90 - 1U;
            uVar19 = *(uint *)(local_98 + (long)(int)uVar15 * 4);
            if (uVar19 == 0xffffffff) {
              iVar8 = 1;
              goto LAB_031e6bb0;
            }
          } while (uVar19 != uVar1);
          iVar8 = 0;
LAB_031e6bb0:
          puVar16 = (uint *)(local_98 + (long)(int)uVar15 * 4);
        }
        local_88 = local_88 + iVar8;
        *puVar16 = uVar1;
        uVar12 = local_78 & 0xffffffff;
LAB_031e67d0:
        uVar15 = (uint)uVar12;
      }
      param_3 = param_3 + 1;
    } while (param_3 != param_4);
  }
  FUN_0318b964(lVar20,&local_c0);
  iVar8 = (int)local_d8 + -1;
  if (0 < (int)local_d8) {
    do {
      piVar10 = (int *)(local_e0 + (long)iVar8 * 0x18);
      FUN_0318b964(*(undefined8 *)(*(long *)(param_1 + 0x38) + (long)*piVar10 * 0xf0),piVar10 + 2);
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  FUN_032c20d0(auStack_d0);
  lVar3 = local_e0;
  if ((int)local_d8 != 0) {
    lVar20 = (long)(int)local_d8 * 0x18;
    do {
      lVar14 = lVar3 + lVar20;
      *(undefined4 *)(lVar14 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar14 + -4)) && (*(long *)(lVar14 + -0x10) != 0)) {
        FUN_032cf244(puVar6,*(long *)(lVar14 + -0x10),8,*(uint *)(lVar14 + -4) & 0x3fffffff);
      }
      lVar20 = lVar20 + -0x18;
      *(undefined8 *)(lVar14 + -0x10) = 0;
      *(undefined4 *)(lVar14 + -4) = 0x80000000;
    } while (lVar20 != 0);
  }
  uVar12 = local_d8;
  uVar1 = local_d8._4_4_;
  local_d8 = (ulong)local_d8._4_4_ << 0x20;
  if ((-1 < (long)uVar12) && (local_e0 != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_e0,0x18,uVar1 & 0x3fffffff);
  }
  lVar3 = local_b8;
  uVar1 = local_b8._4_4_;
  local_b8 = (ulong)local_b8._4_4_ << 0x20;
  if ((-1 < lVar3) && (local_c0 != 0)) {
    FUN_032cf244(puVar6,local_c0,8,uVar1 & 0x3fffffff);
  }
  uVar12 = local_a8;
  uVar1 = local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < (long)uVar12) && (local_b0 != 0)) {
    FUN_032cf244(puVar6,local_b0,4,uVar1 & 0x3fffffff);
  }
  uVar12 = local_90;
  uVar1 = local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < (long)uVar12) && (local_98 != 0)) {
    FUN_032cf244(puVar6,local_98,4,uVar1 & 0x3fffffff);
  }
  uVar12 = local_78;
  uVar1 = local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < (long)uVar12) && (local_80 != 0)) {
    FUN_032cf244(puVar6,local_80,4,uVar1 & 0x3fffffff);
  }
  if (local_70 != 0) {
    FUN_032d5b34(local_70,&DAT_0390f40e);
  }
  return;
LAB_031e6ebc:
  iVar8 = local_168[0];
LAB_031e6ec0:
  lVar9 = lVar9 + 1;
  if (iVar8 <= lVar9) goto LAB_031e70f4;
  goto LAB_031e6ecc;
}


