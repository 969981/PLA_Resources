/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0049f250; name: FUN_0049f250
 */


undefined8
FUN_0049f250(long param_1,undefined8 param_2,long param_3,long param_4,byte *param_5,uint param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  size_t __n;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auStack_a0 [64];
  
  lVar6 = FUN_00444930();
  if (lVar6 != 0) {
    lVar10 = param_3;
    if (param_4 != 0) {
      lVar10 = param_4;
    }
    uVar3 = FUN_0041ccc0(param_3);
    if (-1 < (int)uVar3) {
      if (param_6 == 0xffffffff) {
        param_6 = uVar3;
LAB_0049f2d8:
        iVar4 = FUN_0040c070(*(undefined8 *)(param_1 + 0x18));
        uVar18 = iVar4 - 1U & 7;
        iVar4 = FUN_00456840(param_1);
        if ((0xff << (ulong)uVar18 & (uint)*param_5) == 0) {
          uVar19 = (uint)(uVar18 == 0);
          iVar5 = iVar4 - uVar19;
          if (uVar18 == 0) {
            param_5 = param_5 + 1;
          }
          if (iVar5 < (int)(uVar3 + 2)) {
            uVar7 = 0x6d;
            uVar8 = 0x4e;
          }
          else {
            uVar2 = (iVar5 - uVar3) - 2;
            uVar13 = uVar2;
            if ((param_6 == 0xfffffffd) || (uVar13 = param_6, (int)param_6 <= (int)uVar2)) {
              if (param_5[(long)iVar5 + -1] == 0xbc) {
                uVar2 = iVar5 + ~uVar3;
                lVar17 = (long)(int)uVar2;
                pbVar16 = (byte *)FUN_00400260(lVar17,"external/openssl/crypto/rsa/rsa_pss.c",0x5d);
                if (pbVar16 == (byte *)0x0) {
                  uVar7 = 0x41;
                  uVar8 = 0x5f;
LAB_0049f5c8:
                  FUN_004014b0(4,0x7e,uVar7,"external/openssl/crypto/rsa/rsa_pss.c",uVar8);
                }
                else {
                  __n = (size_t)(int)uVar3;
                  iVar5 = FUN_00454cc0(pbVar16,lVar17,param_5 + lVar17,__n,lVar10);
                  if (-1 < iVar5) {
                    if (0 < (int)uVar2) {
                      uVar9 = (ulong)uVar2;
                      if ((uVar2 < 0x40) ||
                         ((pbVar16 < param_5 + uVar9 && (param_5 < pbVar16 + uVar9)))) {
                        uVar11 = 0;
                        uVar14 = 0xffffffffffffffff;
                      }
                      else {
                        uVar11 = uVar9 & 0xffffffc0;
                        pbVar12 = pbVar16 + 0x20;
                        pbVar15 = param_5 + 0x20;
                        uVar14 = uVar11;
                        do {
                          uVar8 = *(undefined8 *)(pbVar15 + -0x18);
                          uVar7 = *(undefined8 *)(pbVar15 + -0x20);
                          uVar21 = *(undefined8 *)(pbVar15 + -8);
                          uVar20 = *(undefined8 *)(pbVar15 + -0x10);
                          uVar14 = uVar14 - 0x40;
                          uVar27 = *(undefined8 *)(pbVar12 + -0x18);
                          uVar26 = *(undefined8 *)(pbVar12 + -0x20);
                          uVar29 = *(undefined8 *)(pbVar12 + -8);
                          uVar28 = *(undefined8 *)(pbVar12 + -0x10);
                          uVar23 = *(undefined8 *)(pbVar15 + 8);
                          uVar22 = *(undefined8 *)pbVar15;
                          uVar25 = *(undefined8 *)(pbVar15 + 0x18);
                          uVar24 = *(undefined8 *)(pbVar15 + 0x10);
                          *(ulong *)(pbVar12 + -0x18) =
                               CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar8 >> 0x38)
                                        ,CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                                  (byte)((ulong)uVar8 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                           (byte)((ulong)uVar8 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                                    (byte)((ulong)uVar8 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar27 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar8 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar27 >> 0x10) ^ (byte)((ulong)uVar8 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar27 >> 8) ^
                                                           (byte)((ulong)uVar8 >> 8),
                                                           (byte)uVar27 ^ (byte)uVar8)))))));
                          *(ulong *)(pbVar12 + -0x20) =
                               CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar7 >> 0x38)
                                        ,CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                                  (byte)((ulong)uVar7 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                           (byte)((ulong)uVar7 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                                    (byte)((ulong)uVar7 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar26 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar7 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar26 >> 0x10) ^ (byte)((ulong)uVar7 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar26 >> 8) ^
                                                           (byte)((ulong)uVar7 >> 8),
                                                           (byte)uVar26 ^ (byte)uVar7)))))));
                          *(ulong *)(pbVar12 + -8) =
                               CONCAT17((byte)((ulong)uVar29 >> 0x38) ^
                                        (byte)((ulong)uVar21 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                                 (byte)((ulong)uVar21 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                          (byte)((ulong)uVar21 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                                   (byte)((ulong)uVar21 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar29 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar21 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar29 >> 0x10) ^ (byte)((ulong)uVar21 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar29 >> 8) ^
                                                           (byte)((ulong)uVar21 >> 8),
                                                           (byte)uVar29 ^ (byte)uVar21)))))));
                          *(ulong *)(pbVar12 + -0x10) =
                               CONCAT17((byte)((ulong)uVar28 >> 0x38) ^
                                        (byte)((ulong)uVar20 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                                 (byte)((ulong)uVar20 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                          (byte)((ulong)uVar20 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                                   (byte)((ulong)uVar20 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar28 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar20 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar28 >> 0x10) ^ (byte)((ulong)uVar20 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar28 >> 8) ^
                                                           (byte)((ulong)uVar20 >> 8),
                                                           (byte)uVar28 ^ (byte)uVar20)))))));
                          uVar8 = *(undefined8 *)(pbVar12 + 8);
                          uVar7 = *(undefined8 *)pbVar12;
                          uVar21 = *(undefined8 *)(pbVar12 + 0x18);
                          uVar20 = *(undefined8 *)(pbVar12 + 0x10);
                          *(ulong *)(pbVar12 + 8) =
                               CONCAT17((byte)((ulong)uVar8 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38)
                                        ,CONCAT16((byte)((ulong)uVar8 >> 0x30) ^
                                                  (byte)((ulong)uVar23 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar8 >> 0x28) ^
                                                           (byte)((ulong)uVar23 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar8 >> 0x20) ^
                                                                    (byte)((ulong)uVar23 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar8 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar23 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar8 >> 0x10) ^ (byte)((ulong)uVar23 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar8 >> 8) ^
                                                           (byte)((ulong)uVar23 >> 8),
                                                           (byte)uVar8 ^ (byte)uVar23)))))));
                          *(ulong *)pbVar12 =
                               CONCAT17((byte)((ulong)uVar7 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38)
                                        ,CONCAT16((byte)((ulong)uVar7 >> 0x30) ^
                                                  (byte)((ulong)uVar22 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar7 >> 0x28) ^
                                                           (byte)((ulong)uVar22 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar7 >> 0x20) ^
                                                                    (byte)((ulong)uVar22 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar7 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar22 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar7 >> 0x10) ^ (byte)((ulong)uVar22 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar7 >> 8) ^
                                                           (byte)((ulong)uVar22 >> 8),
                                                           (byte)uVar7 ^ (byte)uVar22)))))));
                          *(ulong *)(pbVar12 + 0x18) =
                               CONCAT17((byte)((ulong)uVar21 >> 0x38) ^
                                        (byte)((ulong)uVar25 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar21 >> 0x30) ^
                                                 (byte)((ulong)uVar25 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                          (byte)((ulong)uVar25 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                                   (byte)((ulong)uVar25 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar21 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar25 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar21 >> 0x10) ^ (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar21 >> 8) ^
                                                           (byte)((ulong)uVar25 >> 8),
                                                           (byte)uVar21 ^ (byte)uVar25)))))));
                          *(ulong *)(pbVar12 + 0x10) =
                               CONCAT17((byte)((ulong)uVar20 >> 0x38) ^
                                        (byte)((ulong)uVar24 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar20 >> 0x30) ^
                                                 (byte)((ulong)uVar24 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                          (byte)((ulong)uVar24 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                                   (byte)((ulong)uVar24 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar20 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar24 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar20 >> 0x10) ^ (byte)((ulong)uVar24 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar20 >> 8) ^
                                                           (byte)((ulong)uVar24 >> 8),
                                                           (byte)uVar20 ^ (byte)uVar24)))))));
                          pbVar12 = pbVar12 + 0x40;
                          pbVar15 = pbVar15 + 0x40;
                        } while (uVar14 != 0);
                        if (uVar11 == uVar9) goto LAB_0049f530;
                        uVar14 = ~uVar11;
                      }
                      if ((uVar2 & 1) != 0) {
                        pbVar16[uVar11] = pbVar16[uVar11] ^ param_5[uVar11];
                        uVar11 = uVar11 | 1;
                      }
                      if (uVar14 + uVar9 != 0) {
                        lVar10 = uVar9 - uVar11;
                        pbVar12 = pbVar16 + uVar11 + 1;
                        pbVar15 = param_5 + uVar11 + 1;
                        do {
                          lVar10 = lVar10 + -2;
                          pbVar12[-1] = pbVar12[-1] ^ pbVar15[-1];
                          *pbVar12 = *pbVar12 ^ *pbVar15;
                          pbVar12 = pbVar12 + 2;
                          pbVar15 = pbVar15 + 2;
                        } while (lVar10 != 0);
                      }
                    }
LAB_0049f530:
                    if (uVar18 != 0) {
                      *pbVar16 = *pbVar16 & (byte)(0xff >> (ulong)(8 - uVar18 & 0x1f));
                    }
                    lVar10 = 0;
                    do {
                      pbVar12 = pbVar16 + lVar10;
                      lVar1 = lVar10 + 1;
                      if ((int)(uVar2 - 1) <= lVar10) break;
                      lVar10 = lVar1;
                    } while (*pbVar12 == 0);
                    if (*pbVar12 == 1) {
                      uVar18 = (uint)lVar1;
                      if ((uVar13 == 0xfffffffe) || (~uVar19 + ((iVar4 - uVar3) - uVar13) == uVar18)
                         ) {
                        iVar4 = FUN_004449b0(lVar6,param_3,0);
                        if ((((iVar4 == 0) ||
                             ((iVar4 = FUN_00444ad0(lVar6,&DAT_03a1c1df,8), iVar4 == 0 ||
                              (iVar4 = FUN_00444ad0(lVar6,param_2,__n), iVar4 == 0)))) ||
                            ((uVar2 != uVar18 &&
                             (iVar4 = FUN_00444ad0(lVar6,pbVar16 + lVar1,(long)(int)(uVar2 - uVar18)
                                                  ), iVar4 == 0)))) ||
                           (iVar4 = FUN_00444b90(lVar6,auStack_a0,0), iVar4 == 0))
                        goto LAB_0049f5cc;
                        iVar4 = memcmp(auStack_a0,param_5 + lVar17,__n);
                        if (iVar4 == 0) {
                          uVar7 = 1;
                          goto LAB_0049f438;
                        }
                        uVar7 = 0x68;
                        uVar8 = 0x7c;
                      }
                      else {
                        uVar7 = 0x88;
                        uVar8 = 0x6e;
                      }
                    }
                    else {
                      uVar7 = 0x87;
                      uVar8 = 0x6a;
                    }
                    goto LAB_0049f5c8;
                  }
                }
LAB_0049f5cc:
                uVar7 = 0;
                goto LAB_0049f438;
              }
              uVar7 = 0x86;
              uVar8 = 0x58;
            }
            else {
              uVar7 = 0x6d;
              uVar8 = 0x54;
            }
          }
        }
        else {
          uVar7 = 0x85;
          uVar8 = 0x46;
        }
      }
      else {
        if (-4 < (int)param_6) goto LAB_0049f2d8;
        uVar7 = 0x88;
        uVar8 = 0x3f;
      }
      FUN_004014b0(4,0x7e,uVar7,"external/openssl/crypto/rsa/rsa_pss.c",uVar8);
    }
  }
  uVar7 = 0;
  pbVar16 = (byte *)0x0;
LAB_0049f438:
  FUN_00400420(pbVar16,"external/openssl/crypto/rsa/rsa_pss.c",0x83);
  FUN_00444950(lVar6);
  return uVar7;
}


