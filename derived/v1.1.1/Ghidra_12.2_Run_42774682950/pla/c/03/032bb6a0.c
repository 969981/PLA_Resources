/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bb6a0; name: FUN_032bb6a0
 */


void FUN_032bb6a0(uint *param_1,long param_2,long param_3,long param_4,ulong param_5,long param_6,
                 long param_7,uint *param_8)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  int *piVar17;
  uint *puVar18;
  uint uVar19;
  int *piVar20;
  uint *puVar21;
  uint uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  uint *puVar27;
  uint *puVar28;
  int iVar29;
  undefined8 uVar30;
  int iVar31;
  int iVar32;
  long *plVar33;
  uint uVar34;
  ulong uVar35;
  void *__s;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uStack_6a0;
  long local_698 [2];
  uint local_684;
  undefined8 local_680;
  uint auStack_678 [2];
  undefined8 local_670 [129];
  uint *local_268 [65];
  
  uVar35 = (ulong)(param_2 - (long)param_1) >> 3;
  uVar34 = (uint)uVar35;
  if (uVar34 <= *param_8) {
    uVar19 = *(uint *)(param_7 + 0xc);
    if (uVar19 == 1) {
      plVar33 = (long *)(param_7 + 0x18);
      *plVar33 = 0;
      *(undefined8 *)(param_7 + 0x20) = 0x100000000;
    }
    else {
      if ((uVar19 & 0x102) != 0) {
        FUN_0332c35c(param_7);
        uVar19 = *(uint *)(param_7 + 0xc);
      }
      if (uVar19 == 0x10) {
        FUN_0332c6a8(param_7,1,1);
      }
      uVar8 = FUN_0332c2ec(param_7);
      if ((uVar8 & 1) == 0) {
        plVar33 = &DAT_04350a00;
        lVar13 = DAT_04350a00;
      }
      else {
        plVar33 = (long *)(param_7 + 0x18);
        lVar13 = *plVar33;
      }
      if (lVar13 != 0) {
        plVar33[1] = 0;
        *(undefined4 *)(plVar33 + 2) = 0;
      }
    }
    if ((int)uVar34 < 2) {
      uVar19 = 0;
      do {
        if (*(uint *)((long)plVar33 + 0xc) <= uVar19) {
          if (*plVar33 == 0) {
            return;
          }
          iVar7 = FUN_0332c1f8(*plVar33,plVar33);
          if (iVar7 < 0) {
            return;
          }
          uVar19 = *(uint *)(plVar33 + 1);
        }
        if (param_8[2] < uVar34) {
          FUN_032bc6b0(param_1,uVar35 & 0xffffffff,param_3,param_5,param_6,0);
        }
        uVar19 = uVar19 + 1;
      } while( true );
    }
    puVar9 = (uint *)((long)param_1 +
                     ((param_2 - (long)param_1) * 0x20000000 + -0x100000000 >> 0x1d));
    uVar19 = 0;
    while( true ) {
      if (*(uint *)((long)plVar33 + 0xc) <= uVar19) {
        if (*plVar33 == 0) {
          return;
        }
        iVar7 = FUN_0332c1f8(*plVar33,plVar33);
        if (iVar7 < 0) {
          return;
        }
        uVar19 = *(uint *)(plVar33 + 1);
      }
      if (uVar34 <= param_8[2]) break;
      local_698[0] = param_6;
      FUN_032bc6b0(param_1,uVar35 & 0xffffffff,param_3,param_5,param_6,0);
      param_6 = local_698[0];
LAB_032bbee4:
      uVar19 = uVar19 + 1;
    }
    lVar13 = 0;
    local_680 = param_1;
    local_268[0] = puVar9;
    puVar10 = param_1;
    puVar12 = puVar9;
LAB_032bbf14:
    lVar13 = (long)(int)lVar13;
LAB_032bbfe8:
    do {
      puVar18 = puVar12;
      do {
        puVar12 = puVar18;
        uVar23 = *(undefined8 *)(puVar10 + ((long)puVar12 - (long)puVar10 >> 4) * 2);
        puVar18 = puVar12;
        puVar21 = puVar10;
        do {
          puVar27 = puVar21 + 2;
          uVar22 = (uint)uVar23;
          if (*puVar21 < uVar22) {
            do {
              puVar21 = puVar27;
              puVar27 = puVar21 + 2;
            } while (*puVar21 < uVar22);
          }
          puVar28 = puVar18 + -2;
          if (uVar22 < *puVar18) {
            do {
              puVar18 = puVar28;
              puVar28 = puVar18 + -2;
            } while (uVar22 < *puVar18);
          }
          if (puVar21 <= puVar18) {
            if (puVar18 != puVar21) {
              uVar30 = *(undefined8 *)puVar18;
              *(undefined8 *)puVar18 = *(undefined8 *)puVar21;
              *(undefined8 *)puVar21 = uVar30;
            }
            puVar18 = puVar28;
            puVar21 = puVar27;
          }
        } while (puVar21 <= puVar18);
        if (puVar18 <= puVar10) {
          puVar10 = puVar21;
          if (puVar21 < puVar12) goto LAB_032bbfe8;
          iVar7 = (int)lVar13;
          if (iVar7 < 1) goto LAB_032bbee4;
          lVar13 = (long)iVar7 + -1;
          puVar10 = *(uint **)(auStack_678 + ((long)iVar7 + -2) * 2);
          puVar12 = local_268[lVar13];
          goto LAB_032bbf14;
        }
      } while (puVar12 <= puVar21);
      puVar27 = puVar18;
      puVar28 = puVar10;
      if ((long)puVar12 - (long)puVar21 <= (long)puVar18 - (long)puVar10) {
        puVar27 = puVar12;
        puVar28 = puVar21;
        puVar12 = puVar18;
        puVar21 = puVar10;
      }
      *(uint **)(auStack_678 + (lVar13 + -1) * 2) = puVar21;
      local_268[lVar13] = puVar12;
      puVar10 = puVar28;
      puVar12 = puVar27;
      lVar13 = lVar13 + 1;
    } while( true );
  }
  local_698[1] = (long)(int)param_5;
  local_684 = param_8[4];
  local_698[0] = param_6;
  if ((int)param_8[3] < 0) {
    uVar19 = param_8[8];
    uVar22 = *(uint *)(param_7 + 0xc);
    if (uVar22 == 1) {
      plVar33 = (long *)(param_7 + 0x18);
      *plVar33 = 0;
      *(undefined4 *)(param_7 + 0x20) = 0;
      *(uint *)(param_7 + 0x24) = uVar19 - 1;
    }
    else {
      if ((uVar22 & 0x102) != 0) {
        FUN_0332c35c(param_7);
        uVar22 = *(uint *)(param_7 + 0xc);
      }
      if (uVar22 == 0x10) {
        FUN_0332c6a8(param_7,uVar19 - 1,1);
      }
      uVar35 = FUN_0332c2ec(param_7);
      if ((uVar35 & 1) == 0) {
        plVar33 = &DAT_04350a00;
        lVar13 = DAT_04350a00;
      }
      else {
        plVar33 = (long *)(param_7 + 0x18);
        lVar13 = *plVar33;
      }
      if (lVar13 != 0) {
        plVar33[1] = 0;
        *(undefined4 *)(plVar33 + 2) = 0;
      }
    }
    uVar19 = 0;
    do {
      if (*(uint *)((long)plVar33 + 0xc) <= uVar19) {
        if ((*plVar33 == 0) || (iVar7 = FUN_0332c1f8(*plVar33,plVar33), iVar7 < 0))
        goto LAB_032bbccc;
        uVar19 = *(uint *)(plVar33 + 1);
      }
      iVar7 = uVar19 * local_684;
      uVar22 = iVar7 + local_684;
      if (uVar34 <= iVar7 + local_684) {
        uVar22 = uVar34;
      }
      if (iVar7 < (int)uVar22) {
        uVar35 = (ulong)iVar7;
        uVar8 = (ulong)(uVar22 - iVar7) & 3;
        if (~uVar35 + (long)(int)uVar22 < 3) {
          uVar11 = 0;
          uVar26 = 0xffffffff;
        }
        else {
          uVar11 = 0;
          uVar26 = 0xffffffff;
          puVar9 = param_1 + uVar35 * 2 + 6;
          do {
            puVar12 = (uint *)(local_698[1] + (long)puVar9);
            puVar9 = puVar9 + 8;
            uVar35 = uVar35 + 4;
            uVar11 = *puVar12 | puVar12[-2] | puVar12[-4] | puVar12[-6] | uVar11;
            uVar26 = *puVar12 & puVar12[-2] & puVar12[-4] & puVar12[-6] & uVar26;
          } while ((long)(int)uVar22 - uVar8 != uVar35);
        }
        if ((uVar22 - iVar7 & 3) != 0) {
          puVar9 = param_1 + uVar35 * 2;
          lVar13 = -uVar8;
          do {
            bVar6 = lVar13 != -1;
            lVar13 = lVar13 + 1;
            puVar12 = (uint *)(local_698[1] + (long)puVar9);
            puVar9 = puVar9 + 2;
            uVar11 = *puVar12 | uVar11;
            uVar26 = *puVar12 & uVar26;
          } while (bVar6);
        }
      }
      else {
        uVar11 = 0;
        uVar26 = 0xffffffff;
      }
      uVar11 = uVar11 | uVar11 >> 1;
      uVar26 = ~uVar26 | ~uVar26 >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar26 = uVar26 | uVar26 >> 2;
      uVar26 = uVar26 | uVar26 >> 4;
      piVar17 = (int *)(*(long *)(param_8 + 6) + (long)(int)uVar19 * 0x410);
      uVar19 = uVar19 + 1;
      uVar26 = uVar26 | uVar26 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      uVar26 = uVar26 | uVar26 >> 0x10;
      uVar11 = uVar11 - (uVar11 >> 1 & 0x55555555);
      uVar22 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar26 = uVar26 - (uVar26 >> 1 & 0x55555555);
      uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
      *piVar17 = 0x20 - ((uVar22 + (uVar22 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
      piVar17[1] = 0x20 - ((uVar26 + (uVar26 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
    } while( true );
  }
LAB_032bb768:
  uVar19 = param_8[8];
  uVar22 = *(uint *)(param_7 + 0xc);
  if (uVar22 == 1) {
    plVar33 = (long *)(param_7 + 0x18);
    *plVar33 = 0;
    *(undefined4 *)(param_7 + 0x20) = 0;
    *(uint *)(param_7 + 0x24) = uVar19 - 1;
  }
  else {
    if ((uVar22 & 0x102) != 0) {
      FUN_0332c35c(param_7);
      uVar22 = *(uint *)(param_7 + 0xc);
    }
    if (uVar22 == 0x10) {
      FUN_0332c6a8(param_7,uVar19 - 1,1);
    }
    uVar35 = FUN_0332c2ec(param_7);
    if ((uVar35 & 1) == 0) {
      plVar33 = &DAT_04350a00;
      lVar13 = DAT_04350a00;
    }
    else {
      plVar33 = (long *)(param_7 + 0x18);
      lVar13 = *plVar33;
    }
    if (lVar13 != 0) {
      plVar33[1] = 0;
      *(undefined4 *)(plVar33 + 2) = 0;
    }
  }
  uVar19 = 0;
  do {
    uVar22 = uVar19;
    if (*(uint *)((long)plVar33 + 0xc) <= uVar19) {
      if ((*plVar33 == 0) || (iVar7 = FUN_0332c1f8(*plVar33,plVar33), iVar7 < 0)) {
        uVar35 = FUN_0332c35c(param_7);
        if ((uVar35 & 1) != 0) {
          memset(&local_680,0,0x410);
          lVar25 = (long)(int)param_8[8] + -1;
          lVar13 = *(long *)(param_8 + 6);
          if (0 < (int)lVar25) {
            lVar24 = 0;
            lVar14 = 0x410;
            do {
              lVar25 = 0;
              do {
                puVar15 = (undefined8 *)(lVar13 + lVar24 * 0x410 + 0x20 + lVar25);
                lVar1 = lVar25 + 0x40;
                puVar15[-3] = *(undefined8 *)((long)auStack_678 + lVar25);
                puVar15[-4] = *(undefined8 *)((long)auStack_678 + lVar25 + -8);
                puVar15[-1] = *(undefined8 *)((long)auStack_678 + lVar25 + 0x10);
                puVar15[-2] = *(undefined8 *)((long)auStack_678 + lVar25 + 8);
                puVar15[1] = *(undefined8 *)((long)auStack_678 + lVar25 + 0x20);
                *puVar15 = *(undefined8 *)((long)auStack_678 + lVar25 + 0x18);
                uVar23 = *(undefined8 *)((long)auStack_678 + lVar25 + 0x30);
                puVar15[2] = *(undefined8 *)((long)auStack_678 + lVar25 + 0x28);
                puVar15[3] = uVar23;
                lVar25 = lVar1;
              } while (lVar1 != 0x400);
              lVar13 = *(long *)(param_8 + 6);
              lVar24 = lVar24 + 1;
              lVar25 = 0x20;
              do {
                puVar15 = (undefined8 *)((long)&local_680 + lVar25);
                lVar2 = lVar13 + lVar14 + lVar25;
                uVar23 = *(undefined8 *)(lVar2 + -0x20);
                uVar30 = *(undefined8 *)((long)local_698 + lVar25 + -8);
                uVar40 = *(undefined8 *)((long)local_698 + lVar25 + 0x10);
                uVar38 = *(undefined8 *)((long)local_698 + lVar25 + 8);
                *(ulong *)((long)local_698 + lVar25) =
                     CONCAT44((int)((ulong)*(undefined8 *)(lVar2 + -0x18) >> 0x20) +
                              (int)((ulong)*(undefined8 *)((long)local_698 + lVar25) >> 0x20),
                              (int)*(undefined8 *)(lVar2 + -0x18) +
                              (int)*(undefined8 *)((long)local_698 + lVar25));
                *(ulong *)((long)local_698 + lVar25 + -8) =
                     CONCAT44((int)((ulong)uVar23 >> 0x20) + (int)((ulong)uVar30 >> 0x20),
                              (int)uVar23 + (int)uVar30);
                uVar23 = *(undefined8 *)(lVar2 + -0x10);
                uVar37 = *(undefined8 *)((long)auStack_678 + lVar25);
                uVar36 = *puVar15;
                uVar41 = *(undefined8 *)((long)auStack_678 + lVar25 + 0x10);
                uVar39 = *(undefined8 *)((long)auStack_678 + lVar25 + 8);
                *(ulong *)((long)local_698 + lVar25 + 0x10) =
                     CONCAT44((int)((ulong)*(undefined8 *)(lVar2 + -8) >> 0x20) +
                              (int)((ulong)uVar40 >> 0x20),
                              (int)*(undefined8 *)(lVar2 + -8) + (int)uVar40);
                *(ulong *)((long)local_698 + lVar25 + 8) =
                     CONCAT44((int)((ulong)uVar23 >> 0x20) + (int)((ulong)uVar38 >> 0x20),
                              (int)uVar23 + (int)uVar38);
                puVar3 = (undefined8 *)(lVar13 + lVar14 + lVar25);
                uVar30 = puVar3[1];
                uVar23 = *puVar3;
                lVar1 = lVar25 + 0x40;
                *(ulong *)((long)auStack_678 + lVar25) =
                     CONCAT44((int)((ulong)uVar30 >> 0x20) + (int)((ulong)uVar37 >> 0x20),
                              (int)uVar30 + (int)uVar37);
                *puVar15 = CONCAT44((int)((ulong)uVar23 >> 0x20) + (int)((ulong)uVar36 >> 0x20),
                                    (int)uVar23 + (int)uVar36);
                uVar23 = *(undefined8 *)(lVar2 + 0x10);
                *(ulong *)((long)auStack_678 + lVar25 + 0x10) =
                     CONCAT44((int)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) +
                              (int)((ulong)uVar41 >> 0x20),
                              (int)*(undefined8 *)(lVar2 + 0x18) + (int)uVar41);
                *(ulong *)((long)auStack_678 + lVar25 + 8) =
                     CONCAT44((int)((ulong)uVar23 >> 0x20) + (int)((ulong)uVar39 >> 0x20),
                              (int)uVar23 + (int)uVar39);
                lVar25 = lVar1;
              } while (lVar1 != 0x420);
              lVar25 = (long)(int)param_8[8] + -1;
              lVar14 = lVar14 + 0x410;
            } while (lVar24 < lVar25);
          }
          uVar35 = 0;
          iVar7 = 0;
          piVar20 = (int *)((ulong)&local_680 | 8);
          piVar17 = (int *)(lVar13 + lVar25 * 0x410 + 8);
          do {
            iVar31 = piVar20[-2];
            piVar17[-2] = iVar7;
            iVar29 = piVar20[-1];
            piVar17[-1] = iVar31 + iVar7;
            iVar29 = iVar29 + iVar31 + iVar7;
            iVar31 = *piVar20;
            *piVar17 = iVar29;
            iVar31 = iVar31 + iVar29;
            iVar7 = piVar20[1];
            uVar35 = uVar35 + 4;
            piVar20 = piVar20 + 4;
            piVar17[1] = iVar31;
            piVar17 = piVar17 + 4;
            iVar7 = iVar7 + iVar31;
          } while (uVar35 < 0x100);
          *(int *)(lVar13 + lVar25 * 0x410 + 0x400) = iVar7;
        }
        uVar34 = param_8[8];
        uVar19 = *(uint *)(param_7 + 0xc);
        if (uVar19 == 1) {
          plVar33 = (long *)(param_7 + 0x18);
          *plVar33 = 0;
          *(undefined4 *)(param_7 + 0x20) = 0;
          *(uint *)(param_7 + 0x24) = uVar34 - 1;
        }
        else {
          if ((uVar19 & 0x102) != 0) {
            FUN_0332c35c(param_7);
            uVar19 = *(uint *)(param_7 + 0xc);
          }
          if (uVar19 == 0x10) {
            FUN_0332c6a8(param_7,uVar34 - 1,1);
          }
          uVar35 = FUN_0332c2ec(param_7);
          if ((uVar35 & 1) == 0) {
            plVar33 = &DAT_04350a00;
            lVar13 = DAT_04350a00;
          }
          else {
            plVar33 = (long *)(param_7 + 0x18);
            lVar13 = *plVar33;
          }
          if (lVar13 != 0) {
            plVar33[1] = 0;
            *(undefined4 *)(plVar33 + 2) = 0;
          }
        }
        lVar13 = local_698[1];
        uVar34 = 0;
        do {
          if (*(uint *)((long)plVar33 + 0xc) <= uVar34) {
            if ((*plVar33 == 0) || (iVar7 = FUN_0332c1f8(*plVar33,plVar33), iVar7 < 0)) {
              uVar35 = FUN_0332c35c(param_7);
              if ((uVar35 & 1) != 0) {
                local_680 = (uint *)0x10000000000;
                uVar34 = param_8[5];
                if (-1 < (int)param_8[3]) {
                  uVar34 = param_8[3];
                }
                lVar13 = *(long *)(param_8 + 6) + (long)(int)param_8[8] * 0x410 + -0x410;
                uVar19 = param_8[1];
                iVar7 = 1;
                param_8[0x10e] = 0;
                do {
                  iVar7 = iVar7 + -1;
                  uVar35 = (ulong)(int)auStack_678[((long)iVar7 + -1) * 2];
                  iVar29 = *(int *)(lVar13 + uVar35 * 4);
                  iVar31 = *(int *)(lVar13 + (long)(int)auStack_678[(long)iVar7 * 2 + -1] * 4) -
                           iVar29;
                  if (iVar31 != 0) {
                    puVar9 = auStack_678 + ((long)iVar7 + -1) * 2;
                    uVar8 = (long)(int)auStack_678[(long)iVar7 * 2 + -1];
                    do {
                      uVar22 = (uint)uVar8;
                      uVar26 = (uint)uVar35;
                      iVar32 = uVar22 - uVar26;
                      if ((int)uVar19 < iVar31) {
                        if (iVar32 == 1) goto LAB_032bc560;
                      }
                      else if (((iVar32 == 1) || (iVar32 <= 1 << (ulong)(uVar34 & 7))) ||
                              (4 < iVar32)) {
LAB_032bc560:
                        uVar22 = param_8[0x10e];
                        param_8[0x10e] = uVar22 + 1;
                        *(short *)(param_8 + (long)(int)uVar22 + 0xe) = (short)uVar35;
                        *(short *)((long)param_8 + (long)(int)uVar22 * 4 + 0x3a) = (short)uVar8;
                        break;
                      }
                      uVar11 = (int)(uVar26 + uVar22) >> 1;
                      uVar16 = (ulong)uVar11;
                      iVar32 = *(int *)(lVar13 + (long)(int)uVar11 * 4);
                      if (iVar31 - (iVar32 - iVar29) < iVar32 - iVar29) {
                        *puVar9 = uVar26;
                        uVar35 = (ulong)uVar11;
                        uVar16 = uVar8;
                        iVar29 = iVar32;
                        iVar32 = *(int *)(lVar13 + (long)(int)uVar22 * 4);
                        uVar22 = uVar11;
                      }
                      else {
                        *puVar9 = uVar11;
                        iVar29 = *(int *)(lVar13 + (long)(int)uVar26 * 4);
                      }
                      iVar31 = iVar32 - iVar29;
                      puVar9[1] = uVar22;
                      iVar7 = iVar7 + 1;
                      puVar9 = puVar9 + 2;
                      uVar8 = uVar16;
                    } while (iVar31 != 0);
                  }
                } while (iVar7 != 0);
              }
              uVar19 = *(uint *)(param_7 + 0xc);
              uVar34 = param_8[0x10e];
              if (uVar19 == 1) {
                plVar33 = (long *)(param_7 + 0x18);
                *plVar33 = 0;
                *(undefined4 *)(param_7 + 0x20) = 0;
                *(uint *)(param_7 + 0x24) = uVar34;
              }
              else {
                if ((uVar19 & 0x102) != 0) {
                  FUN_0332c35c(param_7);
                  uVar19 = *(uint *)(param_7 + 0xc);
                }
                if (uVar19 == 0x10) {
                  FUN_0332c6a8(param_7,uVar34,1);
                }
                uVar35 = FUN_0332c2ec(param_7);
                if ((uVar35 & 1) == 0) {
                  plVar33 = &DAT_04350a00;
                  lVar13 = DAT_04350a00;
                }
                else {
                  plVar33 = (long *)(param_7 + 0x18);
                  lVar13 = *plVar33;
                }
                if (lVar13 != 0) {
                  plVar33[1] = 0;
                  *(undefined4 *)(plVar33 + 2) = 0;
                }
              }
              uVar34 = 0;
              lVar13 = local_698[0];
              do {
                if (*(uint *)((long)plVar33 + 0xc) <= uVar34) {
                  if ((*plVar33 == 0) || (iVar7 = FUN_0332c1f8(*plVar33,plVar33), iVar7 < 0)) {
                    return;
                  }
                  uVar34 = *(uint *)(plVar33 + 1);
                  lVar13 = local_698[0];
                }
                lVar24 = *(long *)(param_8 + 6) + (long)(int)param_8[8] * 0x410 + -0x410;
                lVar25 = (long)((ulong)uVar34 << 0x20) >> 0x1e;
                uVar4 = *(ushort *)((long)param_8 + lVar25 + 0x38);
                uVar5 = *(ushort *)((long)param_8 + lVar25 + 0x3a);
                iVar7 = *(int *)(lVar24 + (ulong)uVar4 * 4);
                lVar25 = (long)iVar7;
                uVar19 = *(int *)(lVar24 + (ulong)uVar5 * 4) - iVar7;
                puVar9 = param_1 + lVar25 * 2;
                if (param_8[2] < uVar19) {
                  uVar22 = param_8[5];
                  if (-1 < (int)param_8[3]) {
                    uVar22 = param_8[3];
                  }
                  FUN_032bc6b0(param_3 + lVar25 * 8,uVar19,puVar9,
                               param_5 & 0xffffffff |
                               (ulong)(((int)(param_5 >> 0x20) - ((int)uVar22 >> 3)) -
                                      (uint)((int)((uint)uVar5 - (uint)uVar4) <=
                                            1 << (ulong)(uVar22 & 7))) << 0x20,lVar13,1);
                  lVar13 = local_698[0];
                }
                else if (uVar19 != 0) {
                  uVar8 = (ulong)uVar19;
                  uVar35 = uVar8 & 7;
                  if (uVar8 - 1 < 7) {
                    lVar24 = 0;
                  }
                  else {
                    lVar24 = 0;
                    puVar12 = param_1 + lVar25 * 2 + 8;
                    puVar15 = (undefined8 *)(param_3 + 0x20 + lVar25 * 8);
                    do {
                      *(undefined8 *)(puVar12 + -8) = puVar15[-4];
                      *(undefined8 *)(puVar12 + -6) = puVar15[-3];
                      *(undefined8 *)(puVar12 + -4) = puVar15[-2];
                      *(undefined8 *)(puVar12 + -2) = puVar15[-1];
                      *(undefined8 *)puVar12 = *puVar15;
                      *(undefined8 *)(puVar12 + 2) = puVar15[1];
                      *(undefined8 *)(puVar12 + 4) = puVar15[2];
                      puVar3 = puVar15 + 3;
                      lVar24 = lVar24 + 8;
                      puVar15 = puVar15 + 8;
                      *(undefined8 *)(puVar12 + 6) = *puVar3;
                      puVar12 = puVar12 + 0x10;
                    } while (uVar8 - uVar35 != lVar24);
                  }
                  if ((uVar19 & 7) != 0) {
                    puVar12 = param_1 + (lVar24 + lVar25) * 2;
                    puVar15 = (undefined8 *)(param_3 + (lVar24 + lVar25) * 8);
                    do {
                      uVar35 = uVar35 - 1;
                      *(undefined8 *)puVar12 = *puVar15;
                      puVar12 = puVar12 + 2;
                      puVar15 = puVar15 + 1;
                    } while (uVar35 != 0);
                  }
                  if (1 < (int)uVar19) {
                    puVar12 = puVar9 + (long)(int)(uVar19 - 1) * 2;
                    lVar25 = 0;
                    local_680 = puVar9;
                    local_268[0] = puVar12;
LAB_032bc3a8:
                    lVar25 = (long)(int)lVar25;
LAB_032bc47c:
                    do {
                      puVar10 = puVar12;
                      do {
                        puVar12 = puVar10;
                        uVar23 = *(undefined8 *)(puVar9 + ((long)puVar12 - (long)puVar9 >> 4) * 2);
                        puVar10 = puVar12;
                        puVar18 = puVar9;
                        do {
                          puVar21 = puVar18 + 2;
                          uVar19 = (uint)uVar23;
                          if (*puVar18 < uVar19) {
                            do {
                              puVar18 = puVar21;
                              puVar21 = puVar18 + 2;
                            } while (*puVar18 < uVar19);
                          }
                          puVar27 = puVar10 + -2;
                          if (uVar19 < *puVar10) {
                            do {
                              puVar10 = puVar27;
                              puVar27 = puVar10 + -2;
                            } while (uVar19 < *puVar10);
                          }
                          if (puVar18 <= puVar10) {
                            if (puVar10 != puVar18) {
                              uVar30 = *(undefined8 *)puVar10;
                              *(undefined8 *)puVar10 = *(undefined8 *)puVar18;
                              *(undefined8 *)puVar18 = uVar30;
                            }
                            puVar10 = puVar27;
                            puVar18 = puVar21;
                          }
                        } while (puVar18 <= puVar10);
                        if (puVar10 <= puVar9) {
                          puVar9 = puVar18;
                          if (puVar18 < puVar12) goto LAB_032bc47c;
                          iVar7 = (int)lVar25;
                          if (iVar7 < 1) goto LAB_032bc2f4;
                          lVar25 = (long)iVar7 + -1;
                          puVar9 = *(uint **)(auStack_678 + ((long)iVar7 + -2) * 2);
                          puVar12 = local_268[lVar25];
                          goto LAB_032bc3a8;
                        }
                      } while (puVar12 <= puVar18);
                      puVar21 = puVar10;
                      puVar27 = puVar9;
                      if ((long)puVar12 - (long)puVar18 <= (long)puVar10 - (long)puVar9) {
                        puVar21 = puVar12;
                        puVar27 = puVar18;
                        puVar12 = puVar10;
                        puVar18 = puVar9;
                      }
                      *(uint **)(auStack_678 + (lVar25 + -1) * 2) = puVar18;
                      local_268[lVar25] = puVar12;
                      puVar9 = puVar27;
                      puVar12 = puVar21;
                      lVar25 = lVar25 + 1;
                    } while( true );
                  }
                }
LAB_032bc2f4:
                uVar34 = uVar34 + 1;
              } while( true );
            }
            uVar34 = *(uint *)(plVar33 + 1);
          }
          lVar14 = *(long *)(param_8 + 6);
          lVar25 = lVar14 + 0x20;
          uVar26 = param_8[8];
          uVar22 = param_8[3];
          uVar19 = param_8[5];
          lVar24 = 0;
          do {
            puVar15 = (undefined8 *)(lVar25 + (long)(int)uVar34 * 0x410 + lVar24);
            puVar3 = (undefined8 *)(lVar25 + (long)(int)uVar26 * 0x410 + -0x410 + lVar24);
            uVar23 = puVar3[-4];
            puVar15[-3] = CONCAT44((int)((ulong)puVar3[-3] >> 0x20) +
                                   (int)((ulong)puVar15[-3] >> 0x20),
                                   (int)puVar3[-3] + (int)puVar15[-3]);
            puVar15[-4] = CONCAT44((int)((ulong)uVar23 >> 0x20) + (int)((ulong)puVar15[-4] >> 0x20),
                                   (int)uVar23 + (int)puVar15[-4]);
            uVar23 = puVar3[-2];
            lVar24 = lVar24 + 0x40;
            puVar15[-1] = CONCAT44((int)((ulong)puVar3[-1] >> 0x20) +
                                   (int)((ulong)puVar15[-1] >> 0x20),
                                   (int)puVar3[-1] + (int)puVar15[-1]);
            puVar15[-2] = CONCAT44((int)((ulong)uVar23 >> 0x20) + (int)((ulong)puVar15[-2] >> 0x20),
                                   (int)uVar23 + (int)puVar15[-2]);
            uVar23 = *puVar3;
            puVar15[1] = CONCAT44((int)((ulong)puVar3[1] >> 0x20) + (int)((ulong)puVar15[1] >> 0x20)
                                  ,(int)puVar3[1] + (int)puVar15[1]);
            *puVar15 = CONCAT44((int)((ulong)uVar23 >> 0x20) + (int)((ulong)*puVar15 >> 0x20),
                                (int)uVar23 + (int)*puVar15);
            uVar23 = puVar3[2];
            puVar15[3] = CONCAT44((int)((ulong)puVar3[3] >> 0x20) + (int)((ulong)puVar15[3] >> 0x20)
                                  ,(int)puVar3[3] + (int)puVar15[3]);
            puVar15[2] = CONCAT44((int)((ulong)uVar23 >> 0x20) + (int)((ulong)puVar15[2] >> 0x20),
                                  (int)uVar23 + (int)puVar15[2]);
          } while (lVar24 != 0x400);
          if (-1 < (int)uVar22) {
            uVar19 = uVar22;
          }
          iVar7 = local_684 * uVar34;
          uVar26 = (uint)((ulong)(param_4 - param_3) >> 3);
          uVar22 = iVar7 + local_684;
          if (uVar26 <= iVar7 + local_684) {
            uVar22 = uVar26;
          }
          if (iVar7 < (int)uVar22) {
            lVar14 = lVar14 + (long)(int)uVar34 * 0x410;
            uVar35 = (ulong)iVar7;
            uVar8 = (ulong)(0x18 - uVar19);
            uVar16 = ~uVar35;
            if ((uVar22 - iVar7 & 1) != 0) {
              lVar25 = uVar35 * 2;
              uVar35 = uVar35 + 1;
              lVar24 = ((ulong)(*(uint *)(lVar13 + (long)(param_1 + lVar25)) >> (uVar8 & 0x3f)) &
                       0xff) * 4;
              iVar7 = *(int *)(lVar14 + lVar24);
              *(int *)(lVar14 + lVar24) = iVar7 + 1;
              *(undefined8 *)(param_3 + (long)iVar7 * 8) = *(undefined8 *)(param_1 + lVar25);
            }
            if (uVar16 + (long)(int)uVar22 != 0) {
              lVar25 = uVar35 << 3;
              do {
                puVar15 = (undefined8 *)((long)param_1 + lVar25);
                lVar25 = lVar25 + 0x10;
                puVar9 = (uint *)(lVar13 + (long)puVar15);
                lVar24 = ((ulong)(*puVar9 >> (uVar8 & 0x3f)) & 0xff) * 4;
                iVar7 = *(int *)(lVar14 + lVar24);
                *(int *)(lVar14 + lVar24) = iVar7 + 1;
                *(undefined8 *)(param_3 + (long)iVar7 * 8) = *puVar15;
                lVar24 = ((ulong)(puVar9[2] >> (uVar8 & 0x3f)) & 0xff) * 4;
                iVar7 = *(int *)(lVar14 + lVar24);
                uVar16 = uVar35 + 2;
                *(int *)(lVar14 + lVar24) = iVar7 + 1;
                *(undefined8 *)(param_3 + (long)iVar7 * 8) =
                     *(undefined8 *)(param_1 + uVar35 * 2 + 2);
                uVar35 = uVar16;
              } while ((long)uVar16 < (long)(int)uVar22);
            }
          }
          uVar34 = uVar34 + 1;
        } while( true );
      }
      uVar22 = *(uint *)(plVar33 + 1);
    }
    uVar26 = param_8[5];
    if (-1 < (int)param_8[3]) {
      uVar26 = param_8[3];
    }
    uVar19 = uVar22 + 1;
    __s = (void *)(*(long *)(param_8 + 6) + (long)(int)uVar19 * 0x410);
    uStack_6a0._4_4_ = uVar22;
    memset(__s,0,0x400);
    iVar7 = uStack_6a0._4_4_ * local_684;
    uVar22 = iVar7 + local_684;
    if (uVar34 <= iVar7 + local_684) {
      uVar22 = uVar34;
    }
    if (iVar7 < (int)uVar22) {
      uVar8 = (ulong)(0x18 - uVar26);
      uVar35 = (ulong)iVar7;
      uVar16 = ~uVar35;
      if ((uVar22 - iVar7 & 1) != 0) {
        lVar13 = uVar35 * 8;
        uVar35 = uVar35 + 1;
        lVar13 = ((ulong)(*(uint *)((long)param_1 + local_698[1] + lVar13) >> (uVar8 & 0x3f)) & 0xff
                 ) * 4;
        *(int *)((long)__s + lVar13) = *(int *)((long)__s + lVar13) + 1;
      }
      if (uVar16 + (long)(int)uVar22 != 0) {
        puVar9 = param_1 + uVar35 * 2;
        do {
          puVar12 = (uint *)(local_698[1] + (long)puVar9);
          puVar9 = puVar9 + 4;
          lVar13 = ((ulong)(*puVar12 >> (uVar8 & 0x3f)) & 0xff) * 4;
          *(int *)((long)__s + lVar13) = *(int *)((long)__s + lVar13) + 1;
          lVar13 = ((ulong)(puVar12[2] >> (uVar8 & 0x3f)) & 0xff) * 4;
          uVar35 = uVar35 + 2;
          *(int *)((long)__s + lVar13) = *(int *)((long)__s + lVar13) + 1;
        } while ((long)uVar35 < (long)(int)uVar22);
      }
    }
  } while( true );
LAB_032bbccc:
  uVar35 = FUN_0332c35c(param_7);
  if ((uVar35 & 1) != 0) {
    if ((int)param_8[8] < 2) {
      uVar19 = 0x20;
      uVar22 = 0x20;
    }
    else {
      lVar13 = 0;
      uVar22 = 0x20;
      uVar19 = 0x20;
      puVar9 = (uint *)(*(long *)(param_8 + 6) + 4);
      do {
        if ((int)puVar9[-1] <= (int)uVar22) {
          uVar22 = puVar9[-1];
        }
        uVar26 = *puVar9;
        puVar9 = puVar9 + 0x104;
        lVar13 = lVar13 + 1;
        if ((int)uVar26 <= (int)uVar19) {
          uVar19 = uVar26;
        }
      } while (lVar13 < (long)(int)param_8[8] + -1);
    }
    if ((int)uVar22 <= (int)uVar19) {
      uVar22 = uVar19;
    }
    param_8[5] = uVar22;
  }
  goto LAB_032bb768;
}


