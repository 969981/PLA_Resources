/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046d6f0; name: FUN_0046d6f0
 */


undefined8
FUN_0046d6f0(char *param_1,ulong param_2,undefined8 param_3,int param_4,int param_5,
            undefined8 param_6,uint param_7,byte *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  size_t sVar12;
  ulong __n;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint local_a4;
  byte local_a0 [32];
  undefined8 auStack_80 [4];
  
  sVar12 = param_2 & 0xffffffff;
  uVar2 = FUN_0041ccc0(param_6);
  if (-1 < (int)uVar2) {
    lVar5 = FUN_0046e390();
    if (lVar5 == 0) {
      return 0;
    }
    if (param_1 == (char *)0x0) {
      sVar12 = 0;
      param_1 = "";
    }
    else if ((int)param_2 == -1) {
      sVar12 = strlen(param_1);
    }
    iVar3 = FUN_0046dda0(lVar5,param_1,sVar12 & 0xffffffff,param_6,0);
    if ((iVar3 != 0) && (lVar6 = FUN_0046e390(), lVar6 != 0)) {
      if (param_7 != 0) {
        uVar7 = 1;
        do {
          uVar1 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
          local_a4 = uVar1 >> 0x10 | uVar1 << 0x10;
          uVar1 = uVar2;
          if ((int)param_7 <= (int)uVar2) {
            uVar1 = param_7;
          }
          iVar3 = FUN_0046e4a0(lVar6,lVar5);
          if ((((iVar3 == 0) || (iVar3 = FUN_0046e2b0(lVar6,param_3,(long)param_4), iVar3 == 0)) ||
              (iVar3 = FUN_0046e2b0(lVar6,&local_a4,4), iVar3 == 0)) ||
             (iVar3 = FUN_0046e2d0(lVar6,local_a0,0), iVar3 == 0)) {
LAB_0046d9b4:
            FUN_0046e430(lVar6);
            goto LAB_0046d9bc;
          }
          __n = (ulong)(int)uVar1;
          memcpy(param_8,local_a0,__n);
          if (1 < param_5) {
            iVar3 = param_5 + -1;
            if (0 < (int)uVar1) {
              uVar11 = __n & 0xffffffffffffffc0;
              iVar3 = 1;
              iVar4 = FUN_0046e4a0(lVar6,lVar5);
              if (iVar4 != 0) {
                do {
                  iVar4 = FUN_0046e2b0(lVar6,local_a0,(long)(int)uVar2);
                  if ((iVar4 == 0) || (iVar4 = FUN_0046e2d0(lVar6,local_a0,0), iVar4 == 0)) break;
                  if (uVar1 < 0x40 || param_8 < local_a0 + __n && local_a0 < param_8 + __n) {
                    uVar9 = 0;
LAB_0046d950:
                    do {
                      param_8[uVar9] = param_8[uVar9] ^ local_a0[uVar9];
                      uVar9 = uVar9 + 1;
                    } while ((long)uVar9 < (long)__n);
                  }
                  else {
                    puVar8 = auStack_80;
                    pbVar10 = param_8 + 0x20;
                    uVar9 = uVar11;
                    do {
                      uVar14 = puVar8[-3];
                      uVar13 = puVar8[-4];
                      uVar16 = puVar8[-1];
                      uVar15 = puVar8[-2];
                      uVar9 = uVar9 - 0x40;
                      uVar22 = *(undefined8 *)(pbVar10 + -0x18);
                      uVar21 = *(undefined8 *)(pbVar10 + -0x20);
                      uVar24 = *(undefined8 *)(pbVar10 + -8);
                      uVar23 = *(undefined8 *)(pbVar10 + -0x10);
                      uVar18 = puVar8[1];
                      uVar17 = *puVar8;
                      uVar20 = puVar8[3];
                      uVar19 = puVar8[2];
                      *(ulong *)(pbVar10 + -0x18) =
                           CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar22 >> 0x30) ^
                                             (byte)((ulong)uVar14 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                      (byte)((ulong)uVar14 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                               (byte)((ulong)uVar14 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar22 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar14 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar22 >> 0x10) ^
                                                           (byte)((ulong)uVar14 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar22 >> 8) ^
                                                                    (byte)((ulong)uVar14 >> 8),
                                                                    (byte)uVar22 ^ (byte)uVar14)))))
                                            ));
                      *(ulong *)(pbVar10 + -0x20) =
                           CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar21 >> 0x30) ^
                                             (byte)((ulong)uVar13 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                      (byte)((ulong)uVar13 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                               (byte)((ulong)uVar13 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar21 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar13 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar21 >> 0x10) ^
                                                           (byte)((ulong)uVar13 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar21 >> 8) ^
                                                                    (byte)((ulong)uVar13 >> 8),
                                                                    (byte)uVar21 ^ (byte)uVar13)))))
                                            ));
                      *(ulong *)(pbVar10 + -8) =
                           CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar24 >> 0x30) ^
                                             (byte)((ulong)uVar16 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                      (byte)((ulong)uVar16 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                               (byte)((ulong)uVar16 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar24 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar16 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar24 >> 0x10) ^
                                                           (byte)((ulong)uVar16 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar24 >> 8) ^
                                                                    (byte)((ulong)uVar16 >> 8),
                                                                    (byte)uVar24 ^ (byte)uVar16)))))
                                            ));
                      *(ulong *)(pbVar10 + -0x10) =
                           CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar23 >> 0x30) ^
                                             (byte)((ulong)uVar15 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                      (byte)((ulong)uVar15 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                               (byte)((ulong)uVar15 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar23 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar15 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar23 >> 0x10) ^
                                                           (byte)((ulong)uVar15 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar23 >> 8) ^
                                                                    (byte)((ulong)uVar15 >> 8),
                                                                    (byte)uVar23 ^ (byte)uVar15)))))
                                            ));
                      uVar14 = *(undefined8 *)(pbVar10 + 8);
                      uVar13 = *(undefined8 *)pbVar10;
                      uVar16 = *(undefined8 *)(pbVar10 + 0x18);
                      uVar15 = *(undefined8 *)(pbVar10 + 0x10);
                      *(ulong *)(pbVar10 + 8) =
                           CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar14 >> 0x30) ^
                                             (byte)((ulong)uVar18 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar14 >> 0x28) ^
                                                      (byte)((ulong)uVar18 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar14 >> 0x20) ^
                                                               (byte)((ulong)uVar18 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar14 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar18 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar14 >> 0x10) ^
                                                           (byte)((ulong)uVar18 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar14 >> 8) ^
                                                                    (byte)((ulong)uVar18 >> 8),
                                                                    (byte)uVar14 ^ (byte)uVar18)))))
                                            ));
                      *(ulong *)pbVar10 =
                           CONCAT17((byte)((ulong)uVar13 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar13 >> 0x30) ^
                                             (byte)((ulong)uVar17 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar13 >> 0x28) ^
                                                      (byte)((ulong)uVar17 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar13 >> 0x20) ^
                                                               (byte)((ulong)uVar17 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar13 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar17 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar13 >> 0x10) ^
                                                           (byte)((ulong)uVar17 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar13 >> 8) ^
                                                                    (byte)((ulong)uVar17 >> 8),
                                                                    (byte)uVar13 ^ (byte)uVar17)))))
                                            ));
                      *(ulong *)(pbVar10 + 0x18) =
                           CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar16 >> 0x30) ^
                                             (byte)((ulong)uVar20 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar16 >> 0x28) ^
                                                      (byte)((ulong)uVar20 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar16 >> 0x20) ^
                                                               (byte)((ulong)uVar20 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar16 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar20 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar16 >> 0x10) ^
                                                           (byte)((ulong)uVar20 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar16 >> 8) ^
                                                                    (byte)((ulong)uVar20 >> 8),
                                                                    (byte)uVar16 ^ (byte)uVar20)))))
                                            ));
                      *(ulong *)(pbVar10 + 0x10) =
                           CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar15 >> 0x30) ^
                                             (byte)((ulong)uVar19 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar15 >> 0x28) ^
                                                      (byte)((ulong)uVar19 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                                               (byte)((ulong)uVar19 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar15 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar19 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar15 >> 0x10) ^
                                                           (byte)((ulong)uVar19 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar15 >> 8) ^
                                                                    (byte)((ulong)uVar19 >> 8),
                                                                    (byte)uVar15 ^ (byte)uVar19)))))
                                            ));
                      puVar8 = puVar8 + 8;
                      pbVar10 = pbVar10 + 0x40;
                    } while (uVar9 != 0);
                    uVar9 = uVar11;
                    if (uVar11 != __n) goto LAB_0046d950;
                  }
                  iVar3 = iVar3 + 1;
                  if (iVar3 == param_5) goto LAB_0046d7c8;
                  iVar4 = FUN_0046e4a0(lVar6,lVar5);
                  if (iVar4 == 0) break;
                } while( true );
              }
              goto LAB_0046d9b4;
            }
            do {
              iVar4 = FUN_0046e4a0(lVar6,lVar5);
              if (((iVar4 == 0) ||
                  (iVar4 = FUN_0046e2b0(lVar6,local_a0,(long)(int)uVar2), iVar4 == 0)) ||
                 (iVar4 = FUN_0046e2d0(lVar6,local_a0,0), iVar4 == 0)) goto LAB_0046d9b4;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
LAB_0046d7c8:
          param_7 = param_7 - uVar1;
          param_8 = param_8 + __n;
          uVar7 = uVar7 + 1;
        } while (param_7 != 0);
      }
      FUN_0046e430(lVar6);
      FUN_0046e430(lVar5);
      return 1;
    }
LAB_0046d9bc:
    FUN_0046e430(lVar5);
  }
  return 0;
}


