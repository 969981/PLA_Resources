/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00425b80; name: FUN_00425b80
 */


/* WARNING: Removing unreachable block (ram,0x00426060) */
/* WARNING: Type propagation algorithm not settling */

uint FUN_00425b80(undefined8 param_1,long param_2,long *param_3,undefined8 *param_4,
                 undefined8 param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  int *piVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  void *__s;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  long local_e0;
  undefined8 local_d8;
  long *local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  uint local_b0;
  uint local_ac;
  ulong local_a8;
  long local_a0;
  ulong local_98;
  int *local_90;
  int local_88;
  int iStack_84;
  undefined8 local_80;
  int *local_78;
  int local_70;
  int iStack_6c;
  undefined8 local_68;
  
  iVar4 = FUN_0040d2b0(param_4);
  if (iVar4 == 0) {
    FUN_004014b0(3,0x7c,0x66,"external/openssl/crypto/bn/bn_exp.c",0x266);
    return 0;
  }
  iVar4 = (int)param_3[1];
  if (iVar4 == 0) {
    iVar4 = FUN_0040d1e0(param_4,1);
    if (iVar4 == 0) {
      uVar27 = FUN_0040c6b0(param_1,1);
      return uVar27;
    }
    FUN_0040c6b0(param_1,0);
    return 1;
  }
  local_98 = (ulong)*(uint *)(param_4 + 1);
  FUN_0040e090(param_5);
  lVar17 = param_6;
  if ((param_6 == 0) &&
     ((lVar17 = FUN_0040d8e0(), lVar17 == 0 ||
      (iVar5 = FUN_0040d9b0(lVar17,param_4,param_5), iVar5 == 0)))) {
    __s = (void *)0x0;
    iVar5 = 0;
    uVar14 = 0;
    uVar27 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x10) == 0) {
      iVar5 = FUN_0040cc00(param_2,param_4);
      lVar7 = param_2;
      if (-1 < iVar5) goto LAB_00425bfc;
LAB_00425c28:
      if (iVar4 < 0x1e) {
        if (iVar4 < 10) {
          if (iVar4 < 3) {
            uVar27 = 3;
            if (iVar4 < 1) {
              uVar27 = 1;
            }
          }
          else {
            uVar27 = 4;
          }
        }
        else {
          uVar27 = 5;
        }
      }
      else {
        uVar27 = 6;
      }
      local_ac = 1 << (ulong)uVar27;
      uVar1 = (int)local_98 * 2;
      if ((int)uVar1 <= (int)local_ac) {
        uVar1 = local_ac;
      }
      uVar1 = uVar1 + ((int)local_98 << (ulong)uVar27);
      uVar14 = (ulong)uVar1 << 2;
      local_a8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar14;
      lVar18 = (ulong)uVar1 << 0x22;
      lVar8 = lVar18 + 0x4000000000 >> 0x20;
      local_d8 = param_1;
      if ((int)uVar14 < 0xc00) {
        uVar14 = (long)&local_e0 - (lVar8 + 0xfU & 0xfffffffffffffff0);
      }
      else {
        uVar14 = FUN_00400260(lVar8,"external/openssl/crypto/bn/bn_exp.c",0x2d3);
        if (uVar14 == 0) {
          iVar5 = (int)local_a8;
          __s = (void *)0x0;
          uVar14 = 0;
          goto joined_r0x00425cc4;
        }
      }
      uVar12 = local_98;
      local_c0 = uVar14 & 0x3f;
      lVar8 = uVar14 - local_c0;
      __s = (void *)(lVar8 + 0x40);
      iVar5 = (int)local_98;
      lVar28 = (long)iVar5;
      local_d0 = param_3;
      local_b0 = uVar27;
      local_a0 = lVar17;
      memset(__s,0,lVar18 >> 0x20);
      local_88 = 0;
      local_b8 = 0;
      if (0xbff < (int)local_a8) {
        local_b8 = uVar14;
      }
      local_70 = 0;
      uVar29 = (ulong)local_ac;
      piVar13 = (int *)((long)__s + lVar28 * 4 * uVar29);
      local_90 = piVar13 + lVar28;
      local_80 = DAT_0388a650;
      local_68 = DAT_0388a650;
      piVar10 = (int *)*param_4;
      local_c8 = uVar14;
      iStack_84 = iVar5;
      local_78 = piVar13;
      iStack_6c = iVar5;
      if (piVar10[iVar5 + -1] < 0) {
        *piVar13 = -*piVar10;
        if (1 < iVar5) {
          uVar21 = uVar12 - 1;
          if (uVar21 < 0x10) {
LAB_00425f28:
            uVar15 = 1;
            uVar21 = 0xfffffffffffffffe;
          }
          else {
            lVar18 = lVar28 * uVar29 * 4;
            lVar17 = (lVar18 - local_c0) + uVar14;
            if (((int *)(lVar17 + 0x44U) < piVar10 + uVar12) &&
               (piVar10 + 1 < (int *)(((lVar18 + uVar12 * 4) - local_c0) + uVar14 + 0x40)))
            goto LAB_00425f28;
            uVar20 = uVar21 & 0xfffffffffffffff0;
            uVar15 = uVar20 | 1;
            puVar22 = (undefined8 *)(lVar17 + 0x74);
            piVar23 = piVar10 + 9;
            uVar24 = uVar20;
            do {
              uVar30 = *(undefined8 *)(piVar23 + -6);
              uVar9 = *(undefined8 *)(piVar23 + -8);
              uVar32 = *(undefined8 *)(piVar23 + -2);
              uVar31 = *(undefined8 *)(piVar23 + -4);
              uVar24 = uVar24 - 0x10;
              uVar34 = *(undefined8 *)(piVar23 + 2);
              uVar33 = *(undefined8 *)piVar23;
              uVar36 = *(undefined8 *)(piVar23 + 6);
              uVar35 = *(undefined8 *)(piVar23 + 4);
              puVar22[-5] = CONCAT17(~(byte)((ulong)uVar30 >> 0x38),
                                     CONCAT16(~(byte)((ulong)uVar30 >> 0x30),
                                              CONCAT15(~(byte)((ulong)uVar30 >> 0x28),
                                                       CONCAT14(~(byte)((ulong)uVar30 >> 0x20),
                                                                CONCAT13(~(byte)((ulong)uVar30 >>
                                                                                0x18),
                                                                         CONCAT12(~(byte)((ulong)
                                                  uVar30 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar30 >> 8),~(byte)uVar30
                                                          )))))));
              puVar22[-6] = CONCAT17(~(byte)((ulong)uVar9 >> 0x38),
                                     CONCAT16(~(byte)((ulong)uVar9 >> 0x30),
                                              CONCAT15(~(byte)((ulong)uVar9 >> 0x28),
                                                       CONCAT14(~(byte)((ulong)uVar9 >> 0x20),
                                                                CONCAT13(~(byte)((ulong)uVar9 >>
                                                                                0x18),
                                                                         CONCAT12(~(byte)((ulong)
                                                  uVar9 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar9 >> 8),~(byte)uVar9))
                                                  )))));
              puVar22[-3] = CONCAT17(~(byte)((ulong)uVar32 >> 0x38),
                                     CONCAT16(~(byte)((ulong)uVar32 >> 0x30),
                                              CONCAT15(~(byte)((ulong)uVar32 >> 0x28),
                                                       CONCAT14(~(byte)((ulong)uVar32 >> 0x20),
                                                                CONCAT13(~(byte)((ulong)uVar32 >>
                                                                                0x18),
                                                                         CONCAT12(~(byte)((ulong)
                                                  uVar32 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar32 >> 8),~(byte)uVar32
                                                          )))))));
              puVar22[-4] = CONCAT17(~(byte)((ulong)uVar31 >> 0x38),
                                     CONCAT16(~(byte)((ulong)uVar31 >> 0x30),
                                              CONCAT15(~(byte)((ulong)uVar31 >> 0x28),
                                                       CONCAT14(~(byte)((ulong)uVar31 >> 0x20),
                                                                CONCAT13(~(byte)((ulong)uVar31 >>
                                                                                0x18),
                                                                         CONCAT12(~(byte)((ulong)
                                                  uVar31 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar31 >> 8),~(byte)uVar31
                                                          )))))));
              puVar22[-1] = CONCAT17(~(byte)((ulong)uVar34 >> 0x38),
                                     CONCAT16(~(byte)((ulong)uVar34 >> 0x30),
                                              CONCAT15(~(byte)((ulong)uVar34 >> 0x28),
                                                       CONCAT14(~(byte)((ulong)uVar34 >> 0x20),
                                                                CONCAT13(~(byte)((ulong)uVar34 >>
                                                                                0x18),
                                                                         CONCAT12(~(byte)((ulong)
                                                  uVar34 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar34 >> 8),~(byte)uVar34
                                                          )))))));
              puVar22[-2] = CONCAT17(~(byte)((ulong)uVar33 >> 0x38),
                                     CONCAT16(~(byte)((ulong)uVar33 >> 0x30),
                                              CONCAT15(~(byte)((ulong)uVar33 >> 0x28),
                                                       CONCAT14(~(byte)((ulong)uVar33 >> 0x20),
                                                                CONCAT13(~(byte)((ulong)uVar33 >>
                                                                                0x18),
                                                                         CONCAT12(~(byte)((ulong)
                                                  uVar33 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar33 >> 8),~(byte)uVar33
                                                          )))))));
              puVar22[1] = CONCAT17(~(byte)((ulong)uVar36 >> 0x38),
                                    CONCAT16(~(byte)((ulong)uVar36 >> 0x30),
                                             CONCAT15(~(byte)((ulong)uVar36 >> 0x28),
                                                      CONCAT14(~(byte)((ulong)uVar36 >> 0x20),
                                                               CONCAT13(~(byte)((ulong)uVar36 >>
                                                                               0x18),
                                                                        CONCAT12(~(byte)((ulong)
                                                  uVar36 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar36 >> 8),~(byte)uVar36
                                                          )))))));
              *puVar22 = CONCAT17(~(byte)((ulong)uVar35 >> 0x38),
                                  CONCAT16(~(byte)((ulong)uVar35 >> 0x30),
                                           CONCAT15(~(byte)((ulong)uVar35 >> 0x28),
                                                    CONCAT14(~(byte)((ulong)uVar35 >> 0x20),
                                                             CONCAT13(~(byte)((ulong)uVar35 >> 0x18)
                                                                      ,CONCAT12(~(byte)((ulong)
                                                  uVar35 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar35 >> 8),~(byte)uVar35
                                                          )))))));
              puVar22 = puVar22 + 8;
              piVar23 = piVar23 + 0x10;
            } while (uVar24 != 0);
            if (uVar21 == uVar20) goto LAB_00426008;
            uVar21 = ~uVar15;
          }
          if ((uVar12 & 1) == 0) {
            piVar13[uVar15] = ~piVar10[uVar15];
            uVar15 = uVar15 + 1;
          }
          if (uVar21 + uVar12 != 0) {
            lVar17 = uVar12 - uVar15;
            puVar11 = (uint *)(piVar10 + uVar15 + 1);
            puVar16 = (uint *)(((uVar15 * 4 + lVar28 * uVar29 * 4) - local_c0) + uVar14 + 0x44);
            do {
              puVar16[-1] = ~puVar11[-1];
              lVar17 = lVar17 + -2;
              *puVar16 = ~*puVar11;
              puVar11 = puVar11 + 2;
              puVar16 = puVar16 + 2;
            } while (lVar17 != 0);
          }
        }
LAB_00426008:
        lVar17 = local_a0;
        local_70 = iVar5;
      }
      else {
        uVar9 = FUN_0040bfc0();
        lVar17 = local_a0;
        iVar6 = FUN_0040d8d0(&local_78,uVar9,local_a0,param_5);
        if (iVar6 == 0) {
          iVar5 = (int)local_a8;
          uVar14 = local_b8;
          goto joined_r0x00425cc4;
        }
      }
      uVar27 = local_b0;
      iVar6 = FUN_0040d8d0(&local_90,lVar7,lVar17,param_5);
      piVar10 = local_78;
      uVar12 = local_c0;
      if (iVar6 == 0) {
        iVar5 = (int)local_a8;
        lVar17 = local_a0;
        uVar14 = local_b8;
      }
      else {
        iVar6 = local_70;
        if (iVar5 <= local_70) {
          iVar6 = iVar5;
        }
        if (0 < iVar6) {
          uVar14 = (long)iVar6 & 1;
          if (iVar6 == 1) {
            lVar7 = 0;
            lVar17 = 0;
          }
          else {
            lVar7 = 0;
            lVar17 = 0;
            piVar13 = local_78 + 1;
            do {
              lVar18 = lVar7 * 4;
              lVar7 = lVar7 + uVar29 * 2;
              *(int *)((long)__s + lVar18) = piVar13[-1];
              lVar17 = lVar17 + 2;
              *(int *)((uVar29 * 4 - local_c0) + local_c8 + 0x40 + lVar18) = *piVar13;
              piVar13 = piVar13 + 2;
            } while ((long)iVar6 - uVar14 != lVar17);
            if (uVar14 == 0) goto LAB_004260d0;
          }
          *(int *)((long)__s + lVar7 * 4) = piVar10[lVar17];
        }
LAB_004260d0:
        piVar10 = local_90;
        iVar6 = local_88;
        if (iVar5 <= local_88) {
          iVar6 = iVar5;
        }
        if (0 < iVar6) {
          uVar14 = (long)iVar6 & 1;
          if (iVar6 == 1) {
            lVar17 = 0;
            lVar18 = 1;
          }
          else {
            lVar17 = 0;
            lVar18 = 0x11;
            lVar7 = local_c8 + (uVar29 * 4 - local_c0);
            piVar13 = local_90 + 1;
            do {
              lVar28 = lVar18 * 4;
              lVar17 = lVar17 + 2;
              *(int *)(lVar8 + lVar28) = piVar13[-1];
              lVar18 = lVar18 + uVar29 * 2;
              *(int *)(lVar7 + lVar28) = *piVar13;
              piVar13 = piVar13 + 2;
            } while ((long)iVar6 - uVar14 != lVar17);
            lVar18 = lVar18 + -0x10;
            if (uVar14 == 0) goto LAB_0042610c;
          }
          *(int *)((long)__s + lVar18 * 4) = piVar10[lVar17];
        }
LAB_0042610c:
        local_e0 = param_6;
        if (1 < uVar27) {
          iVar6 = FUN_0040d410(&local_78,&local_90,&local_90,local_a0,param_5);
          piVar10 = local_78;
          iVar5 = (int)local_a8;
          lVar17 = local_a0;
          uVar14 = local_b8;
          param_6 = local_e0;
          if (iVar6 == 0) goto joined_r0x00425cc4;
          iVar5 = local_70;
          if ((int)local_98 <= local_70) {
            iVar5 = (int)local_98;
          }
          if (0 < iVar5) {
            uVar14 = (long)iVar5 & 1;
            if (iVar5 == 1) {
              lVar17 = 0;
              lVar18 = 2;
            }
            else {
              lVar17 = 0;
              lVar18 = 0x12;
              lVar7 = local_c8 + (uVar29 * 4 - uVar12);
              piVar13 = local_78 + 1;
              do {
                lVar28 = lVar18 * 4;
                lVar17 = lVar17 + 2;
                *(int *)(lVar8 + lVar28) = piVar13[-1];
                lVar18 = lVar18 + uVar29 * 2;
                *(int *)(lVar7 + lVar28) = *piVar13;
                piVar13 = piVar13 + 2;
              } while ((long)iVar5 - uVar14 != lVar17);
              lVar18 = lVar18 + -0x10;
              if (uVar14 == 0) goto LAB_0042617c;
            }
            *(int *)((long)__s + lVar18 * 4) = piVar10[lVar17];
          }
LAB_0042617c:
          if (3 < (int)local_ac) {
            lVar17 = (uVar29 * 8 - uVar12) + local_c8 + 0x4c;
            lVar7 = (uVar29 * 4 - uVar12) + local_c8 + 0x4c;
            lVar18 = (uVar29 * 0xc - uVar12) + local_c8 + 0x4c;
            local_c0 = lVar8 + 0x40;
            uVar14 = 3;
            do {
              iVar5 = FUN_0040d410(&local_78,&local_90,&local_78,local_a0,param_5);
              piVar10 = local_78;
              if (iVar5 == 0) {
                uVar27 = 0;
                iVar5 = (int)local_a8;
                uVar14 = local_b8;
                lVar17 = local_a0;
                param_6 = local_e0;
                goto joined_r0x00426550;
              }
              iVar5 = local_70;
              if ((int)local_98 <= local_70) {
                iVar5 = (int)local_98;
              }
              if (0 < iVar5) {
                uVar21 = (ulong)iVar5;
                uVar12 = uVar21 & 3;
                if (uVar21 - 1 < 3) {
                  lVar28 = 0;
                  uVar21 = uVar14;
                }
                else {
                  lVar19 = 0;
                  lVar28 = 0;
                  piVar13 = local_78 + 2;
                  do {
                    lVar25 = lVar19 * 4;
                    lVar19 = lVar19 + uVar29 * 4;
                    *(int *)(lVar8 + lVar25 + 0x4c) = piVar13[-2];
                    *(int *)(lVar7 + lVar25) = piVar13[-1];
                    *(int *)(lVar17 + lVar25) = *piVar13;
                    piVar23 = piVar13 + 1;
                    lVar28 = lVar28 + 4;
                    piVar13 = piVar13 + 4;
                    *(int *)(lVar18 + lVar25) = *piVar23;
                  } while (uVar21 - uVar12 != lVar28);
                  uVar21 = uVar14 + lVar19;
                }
                if (uVar12 != 0) {
                  piVar13 = (int *)(local_c0 + uVar21 * 4);
                  piVar10 = piVar10 + lVar28;
                  do {
                    *piVar13 = *piVar10;
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + uVar29;
                    piVar10 = piVar10 + 1;
                  } while (uVar12 != 0);
                }
              }
              uVar14 = uVar14 + 1;
              lVar18 = lVar18 + 4;
              lVar17 = lVar17 + 4;
              lVar7 = lVar7 + 4;
              lVar8 = lVar8 + 4;
            } while (uVar14 != uVar29);
          }
        }
        uVar12 = local_98;
        lVar17 = local_a0;
        uVar27 = local_b0;
        uVar14 = local_b8;
        plVar3 = local_d0;
        param_6 = local_e0;
        iVar6 = iVar4 * 0x20 + -1;
        iVar5 = 0;
        if (local_b0 != 0) {
          iVar5 = iVar6 / (int)local_b0;
        }
        uVar1 = (iVar6 - iVar5 * local_b0) + 1;
        iVar6 = iVar4 * 0x20 - uVar1;
        iVar4 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar4 = iVar6;
        }
        iVar5 = (int)local_a8;
        if (iVar6 < -0x1f) {
          uVar26 = 0;
        }
        else {
          iVar4 = iVar4 >> 5;
          if (iVar4 < (int)local_d0[1]) {
            uVar2 = iVar6 % 0x20;
            uVar26 = *(uint *)(*local_d0 + (long)iVar4 * 4);
            if (uVar2 != 0) {
              uVar26 = uVar26 >> (ulong)(uVar2 & 0x1f);
              if ((int)((long)iVar4 + 1) < (int)local_d0[1]) {
                uVar26 = *(int *)(*local_d0 + ((long)iVar4 + 1) * 4) << (ulong)(-uVar2 & 0x1f) |
                         uVar26;
              }
            }
          }
          else {
            uVar26 = 0;
          }
        }
        iVar4 = FUN_00426580(&local_78,local_98 & 0xffffffff,__s,
                             uVar26 & ~(-1 << (ulong)(uVar1 & 0x1f)),local_b0);
        if (iVar4 != 0) {
          uVar1 = local_ac - 1;
          do {
            uVar26 = uVar27;
            if (iVar6 < 1) {
              iVar4 = FUN_0040d7d0(local_d8,&local_78,lVar17,param_5);
              iVar5 = (int)local_a8;
              uVar27 = (uint)(iVar4 != 0);
              goto joined_r0x00426550;
            }
            do {
              iVar4 = FUN_0040d410(&local_78,&local_78,&local_78,lVar17,param_5);
              uVar27 = local_b0;
              if (iVar4 == 0) goto LAB_004264dc;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
            iVar6 = iVar6 - local_b0;
            iVar4 = iVar6 + 0x1f;
            if (-1 < iVar6) {
              iVar4 = iVar6;
            }
            if (iVar6 < -0x1f) {
LAB_004264a0:
              uVar26 = 0;
            }
            else {
              iVar5 = (int)plVar3[1];
              iVar4 = iVar4 >> 5;
              if (iVar5 <= iVar4) goto LAB_004264a0;
              lVar7 = *plVar3;
              uVar2 = iVar6 % 0x20;
              uVar26 = *(uint *)(lVar7 + (long)iVar4 * 4);
              if (uVar2 != 0) {
                uVar26 = uVar26 >> (ulong)(uVar2 & 0x1f);
                if ((int)((long)iVar4 + 1) < iVar5) {
                  uVar26 = *(int *)(lVar7 + ((long)iVar4 + 1) * 4) << (ulong)(-uVar2 & 0x1f) |
                           uVar26;
                }
              }
            }
            iVar4 = FUN_00426580(&local_90,uVar12 & 0xffffffff,__s,uVar26 & uVar1,local_b0);
          } while ((iVar4 != 0) &&
                  (iVar4 = FUN_0040d410(&local_78,&local_78,&local_90,lVar17,param_5), iVar4 != 0));
LAB_004264dc:
          iVar5 = (int)local_a8;
        }
      }
    }
    else {
LAB_00425bfc:
      lVar7 = FUN_0040e240(param_5);
      if ((lVar7 != 0) && (iVar5 = FUN_00412c30(lVar7,param_2,param_4,param_5), iVar5 != 0))
      goto LAB_00425c28;
      __s = (void *)0x0;
      iVar5 = 0;
      uVar14 = 0;
    }
joined_r0x00425cc4:
    uVar27 = 0;
joined_r0x00426550:
    if (param_6 != 0) goto LAB_00425cd0;
  }
  FUN_0040d960(lVar17);
LAB_00425cd0:
  if (__s != (void *)0x0) {
    FUN_004006a0(__s,(long)iVar5);
    FUN_00400420(uVar14,"external/openssl/crypto/bn/bn_exp.c",0x463);
  }
  FUN_0040e1b0(param_5);
  return uVar27;
}


