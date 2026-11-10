/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a4630; name: FUN_004a4630
 */


undefined8
FUN_004a4630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            void *param_5,size_t *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 local_68;
  
  local_68 = param_3;
  uVar4 = FUN_0042d4f0();
  uVar5 = FUN_004a3e30();
  iVar2 = FUN_0041ccc0(param_2);
  lVar21 = 0;
  if (uVar5 == 0) {
    lVar25 = 0;
    puVar20 = (undefined8 *)0x0;
    lVar8 = 0;
    lVar11 = 0;
    uVar22 = 0;
    lVar27 = 0;
  }
  else {
    lVar25 = 0;
    puVar20 = (undefined8 *)0x0;
    lVar8 = 0;
    lVar11 = 0;
    uVar22 = 0;
    lVar27 = 0;
    if (0 < iVar2) {
      memset(param_5,0xff,*param_6);
      puVar20 = (undefined8 *)FUN_0041d030(0,&local_68,param_4,PTR_DAT_043745a8);
      if (puVar20 == (undefined8 *)0x0) {
        uVar4 = 100;
        uVar24 = 0x126;
LAB_004a4924:
        FUN_004014b0(0x35,0x66,uVar4,"external/openssl/crypto/sm2/sm2_crypt.c",uVar24);
        lVar21 = 0;
      }
      else {
        if (*(int *)puVar20[2] != iVar2) {
          uVar4 = 0x68;
          uVar24 = 299;
          goto LAB_004a4924;
        }
        uVar26 = *(ulong *)((uint *)puVar20[3] + 2);
        uVar24 = *(undefined8 *)((int *)puVar20[2] + 2);
        uVar1 = *(uint *)puVar20[3];
        uVar23 = (ulong)(int)uVar1;
        lVar21 = FUN_0040de30();
        if (lVar21 != 0) {
          FUN_0040e090(lVar21);
          uVar6 = FUN_0040e240(lVar21);
          lVar27 = FUN_0040e240(lVar21);
          if (lVar27 == 0) {
            FUN_004014b0(0x35,0x66,3,"external/openssl/crypto/sm2/sm2_crypt.c",0x13e);
            lVar25 = 0;
            lVar8 = 0;
            lVar11 = 0;
            uVar22 = 0;
            lVar27 = 0;
          }
          else {
            uVar22 = FUN_004002a0(uVar23,"external/openssl/crypto/sm2/sm2_crypt.c",0x142);
            lVar8 = FUN_004002a0(uVar5 << 1,"external/openssl/crypto/sm2/sm2_crypt.c",0x143);
            lVar11 = FUN_004002a0((long)iVar2,"external/openssl/crypto/sm2/sm2_crypt.c",0x144);
            if (((uVar22 == 0) || (lVar8 == 0)) || (lVar11 == 0)) {
              FUN_004014b0(0x35,0x66,0x41,"external/openssl/crypto/sm2/sm2_crypt.c",0x147);
              lVar25 = 0;
              lVar27 = 0;
            }
            else {
              lVar25 = FUN_0042df90(uVar4);
              if (lVar25 == 0) {
                uVar4 = 0x41;
                uVar24 = 0x14d;
              }
              else {
                iVar3 = FUN_0042ea00(uVar4,lVar25,*puVar20,puVar20[1],lVar21);
                if (iVar3 != 0) {
                  uVar7 = FUN_0042d560(param_1);
                  iVar3 = FUN_0042f280(uVar4,lVar25,0,lVar25,uVar7,lVar21);
                  if ((iVar3 != 0) &&
                     (iVar3 = FUN_0042ebc0(uVar4,lVar25,uVar6,lVar27,lVar21), iVar3 != 0)) {
                    iVar3 = FUN_0040c940(uVar6,lVar8,uVar5 & 0xffffffff);
                    if (-1 < iVar3) {
                      iVar3 = FUN_0040c940(lVar27,lVar8 + uVar5,uVar5 & 0xffffffff);
                      if ((-1 < iVar3) &&
                         (iVar3 = FUN_0049bc10(uVar22,uVar23,lVar8,uVar5 << 1,0,0,param_2),
                         iVar3 != 0)) {
                        uVar9 = (ulong)uVar1;
                        if (uVar1 != 0) {
                          if (uVar1 < 0x40) {
                            uVar12 = 0;
                          }
                          else {
                            uVar12 = 0;
                            if (((void *)(uVar26 + uVar9) <= param_5 ||
                                 (long)param_5 + uVar9 <= uVar26) &&
                               ((void *)(uVar22 + uVar9) <= param_5 ||
                                (long)param_5 + uVar9 <= uVar22)) {
                              uVar12 = uVar23 & 0xffffffc0;
                              puVar16 = (undefined8 *)((long)param_5 + 0x20);
                              puVar18 = (undefined8 *)(uVar26 + 0x20);
                              puVar19 = (undefined8 *)(uVar22 + 0x20);
                              uVar14 = uVar12;
                              do {
                                uVar6 = puVar18[-3];
                                uVar4 = puVar18[-4];
                                uVar28 = puVar18[-1];
                                uVar7 = puVar18[-2];
                                uVar14 = uVar14 - 0x40;
                                uVar34 = puVar19[-3];
                                uVar33 = puVar19[-4];
                                uVar36 = puVar19[-1];
                                uVar35 = puVar19[-2];
                                uVar30 = puVar18[1];
                                uVar29 = *puVar18;
                                uVar32 = puVar18[3];
                                uVar31 = puVar18[2];
                                uVar38 = puVar19[1];
                                uVar37 = *puVar19;
                                uVar40 = puVar19[3];
                                uVar39 = puVar19[2];
                                puVar16[-3] = CONCAT17((byte)((ulong)uVar34 >> 0x38) ^
                                                       (byte)((ulong)uVar6 >> 0x38),
                                                       CONCAT16((byte)((ulong)uVar34 >> 0x30) ^
                                                                (byte)((ulong)uVar6 >> 0x30),
                                                                CONCAT15((byte)((ulong)uVar34 >>
                                                                               0x28) ^
                                                                         (byte)((ulong)uVar6 >> 0x28
                                                                               ),CONCAT14((byte)((
                                                  ulong)uVar34 >> 0x20) ^
                                                  (byte)((ulong)uVar6 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar34 >> 0x18) ^
                                                           (byte)((ulong)uVar6 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar34 >> 0x10) ^
                                                                    (byte)((ulong)uVar6 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar34 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar6 >>
                                                                                   8),(byte)uVar34 ^
                                                                                      (byte)uVar6)))
                                                  ))));
                                puVar16[-4] = CONCAT17((byte)((ulong)uVar33 >> 0x38) ^
                                                       (byte)((ulong)uVar4 >> 0x38),
                                                       CONCAT16((byte)((ulong)uVar33 >> 0x30) ^
                                                                (byte)((ulong)uVar4 >> 0x30),
                                                                CONCAT15((byte)((ulong)uVar33 >>
                                                                               0x28) ^
                                                                         (byte)((ulong)uVar4 >> 0x28
                                                                               ),CONCAT14((byte)((
                                                  ulong)uVar33 >> 0x20) ^
                                                  (byte)((ulong)uVar4 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                           (byte)((ulong)uVar4 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar33 >> 0x10) ^
                                                                    (byte)((ulong)uVar4 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar33 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar4 >>
                                                                                   8),(byte)uVar33 ^
                                                                                      (byte)uVar4)))
                                                  ))));
                                puVar16[-1] = CONCAT17((byte)((ulong)uVar36 >> 0x38) ^
                                                       (byte)((ulong)uVar28 >> 0x38),
                                                       CONCAT16((byte)((ulong)uVar36 >> 0x30) ^
                                                                (byte)((ulong)uVar28 >> 0x30),
                                                                CONCAT15((byte)((ulong)uVar36 >>
                                                                               0x28) ^
                                                                         (byte)((ulong)uVar28 >>
                                                                               0x28),
                                                                         CONCAT14((byte)((ulong)
                                                  uVar36 >> 0x20) ^ (byte)((ulong)uVar28 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar36 >> 0x18) ^
                                                           (byte)((ulong)uVar28 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar36 >> 0x10) ^
                                                                    (byte)((ulong)uVar28 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar36 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar28 >>
                                                                                   8),(byte)uVar36 ^
                                                                                      (byte)uVar28))
                                                          )))));
                                puVar16[-2] = CONCAT17((byte)((ulong)uVar35 >> 0x38) ^
                                                       (byte)((ulong)uVar7 >> 0x38),
                                                       CONCAT16((byte)((ulong)uVar35 >> 0x30) ^
                                                                (byte)((ulong)uVar7 >> 0x30),
                                                                CONCAT15((byte)((ulong)uVar35 >>
                                                                               0x28) ^
                                                                         (byte)((ulong)uVar7 >> 0x28
                                                                               ),CONCAT14((byte)((
                                                  ulong)uVar35 >> 0x20) ^
                                                  (byte)((ulong)uVar7 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar35 >> 0x18) ^
                                                           (byte)((ulong)uVar7 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar35 >> 0x10) ^
                                                                    (byte)((ulong)uVar7 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar35 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar7 >>
                                                                                   8),(byte)uVar35 ^
                                                                                      (byte)uVar7)))
                                                  ))));
                                puVar16[1] = CONCAT17((byte)((ulong)uVar38 >> 0x38) ^
                                                      (byte)((ulong)uVar30 >> 0x38),
                                                      CONCAT16((byte)((ulong)uVar38 >> 0x30) ^
                                                               (byte)((ulong)uVar30 >> 0x30),
                                                               CONCAT15((byte)((ulong)uVar38 >> 0x28
                                                                              ) ^ (byte)((ulong)
                                                  uVar30 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                           (byte)((ulong)uVar30 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                                    (byte)((ulong)uVar30 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar38 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar30 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar38 >> 8) ^ (byte)((ulong)uVar30 >> 8),
                                                  (byte)uVar38 ^ (byte)uVar30)))))));
                                *puVar16 = CONCAT17((byte)((ulong)uVar37 >> 0x38) ^
                                                    (byte)((ulong)uVar29 >> 0x38),
                                                    CONCAT16((byte)((ulong)uVar37 >> 0x30) ^
                                                             (byte)((ulong)uVar29 >> 0x30),
                                                             CONCAT15((byte)((ulong)uVar37 >> 0x28)
                                                                      ^ (byte)((ulong)uVar29 >> 0x28
                                                                              ),
                                                                      CONCAT14((byte)((ulong)uVar37
                                                                                     >> 0x20) ^
                                                                               (byte)((ulong)uVar29
                                                                                     >> 0x20),
                                                                               CONCAT13((byte)((
                                                  ulong)uVar37 >> 0x18) ^
                                                  (byte)((ulong)uVar29 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar37 >> 0x10) ^
                                                           (byte)((ulong)uVar29 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar37 >> 8) ^
                                                                    (byte)((ulong)uVar29 >> 8),
                                                                    (byte)uVar37 ^ (byte)uVar29)))))
                                                  ));
                                puVar16[3] = CONCAT17((byte)((ulong)uVar40 >> 0x38) ^
                                                      (byte)((ulong)uVar32 >> 0x38),
                                                      CONCAT16((byte)((ulong)uVar40 >> 0x30) ^
                                                               (byte)((ulong)uVar32 >> 0x30),
                                                               CONCAT15((byte)((ulong)uVar40 >> 0x28
                                                                              ) ^ (byte)((ulong)
                                                  uVar32 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar40 >> 0x20) ^
                                                           (byte)((ulong)uVar32 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar40 >> 0x18) ^
                                                                    (byte)((ulong)uVar32 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar40 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar32 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar40 >> 8) ^ (byte)((ulong)uVar32 >> 8),
                                                  (byte)uVar40 ^ (byte)uVar32)))))));
                                puVar16[2] = CONCAT17((byte)((ulong)uVar39 >> 0x38) ^
                                                      (byte)((ulong)uVar31 >> 0x38),
                                                      CONCAT16((byte)((ulong)uVar39 >> 0x30) ^
                                                               (byte)((ulong)uVar31 >> 0x30),
                                                               CONCAT15((byte)((ulong)uVar39 >> 0x28
                                                                              ) ^ (byte)((ulong)
                                                  uVar31 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar39 >> 0x20) ^
                                                           (byte)((ulong)uVar31 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar39 >> 0x18) ^
                                                                    (byte)((ulong)uVar31 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar39 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar31 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar39 >> 8) ^ (byte)((ulong)uVar31 >> 8),
                                                  (byte)uVar39 ^ (byte)uVar31)))))));
                                puVar16 = puVar16 + 8;
                                puVar18 = puVar18 + 8;
                                puVar19 = puVar19 + 8;
                              } while (uVar14 != 0);
                              if (uVar12 == uVar9) goto LAB_004a4b74;
                            }
                          }
                          uVar14 = ~uVar12;
                          if ((uVar23 & 1) != 0) {
                            *(byte *)((long)param_5 + uVar12) =
                                 *(byte *)(uVar22 + uVar12) ^ *(byte *)(uVar26 + uVar12);
                            uVar12 = uVar12 | 1;
                          }
                          if (uVar14 + uVar9 != 0) {
                            lVar10 = uVar9 - uVar12;
                            lVar27 = uVar12 + 1;
                            pbVar13 = (byte *)((long)param_5 + lVar27);
                            pbVar15 = (byte *)(uVar22 + lVar27);
                            pbVar17 = (byte *)(uVar26 + lVar27);
                            do {
                              lVar10 = lVar10 + -2;
                              pbVar13[-1] = pbVar15[-1] ^ pbVar17[-1];
                              *pbVar13 = *pbVar15 ^ *pbVar17;
                              pbVar13 = pbVar13 + 2;
                              pbVar15 = pbVar15 + 2;
                              pbVar17 = pbVar17 + 2;
                            } while (lVar10 != 0);
                          }
                        }
LAB_004a4b74:
                        lVar27 = FUN_00444930();
                        if (lVar27 == 0) {
                          uVar4 = 0x41;
                          uVar24 = 0x167;
                        }
                        else {
                          iVar3 = FUN_00444980(lVar27,param_2);
                          if ((((iVar3 == 0) ||
                               (iVar3 = FUN_00444ad0(lVar27,lVar8,uVar5), iVar3 == 0)) ||
                              (iVar3 = FUN_00444ad0(lVar27,param_5,uVar23), iVar3 == 0)) ||
                             ((iVar3 = FUN_00444ad0(lVar27,lVar8 + uVar5,uVar5), iVar3 == 0 ||
                              (iVar3 = FUN_00444af0(lVar27,lVar11,0), iVar3 == 0)))) {
                            uVar24 = 0x170;
                            uVar4 = 6;
                          }
                          else {
                            iVar2 = FUN_00404df0(lVar11,uVar24,(long)iVar2);
                            if (iVar2 == 0) {
                              uVar4 = 1;
                              *param_6 = uVar23;
                              goto LAB_004a495c;
                            }
                            uVar24 = 0x175;
                            uVar4 = 0x66;
                          }
                        }
                        FUN_004014b0(0x35,0x66,uVar4,"external/openssl/crypto/sm2/sm2_crypt.c",
                                     uVar24);
                        goto LAB_004a4940;
                      }
                    }
                    FUN_004014b0(0x35,0x66,0x44,"external/openssl/crypto/sm2/sm2_crypt.c",0x15e);
                    lVar27 = 0;
                    goto LAB_004a4940;
                  }
                }
                uVar24 = 0x156;
                uVar4 = 0x10;
              }
              FUN_004014b0(0x35,0x66,uVar4,"external/openssl/crypto/sm2/sm2_crypt.c",uVar24);
              lVar27 = 0;
            }
          }
          goto LAB_004a4940;
        }
        FUN_004014b0(0x35,0x66,0x41,"external/openssl/crypto/sm2/sm2_crypt.c",0x135);
      }
      lVar25 = 0;
      lVar8 = 0;
      lVar11 = 0;
      uVar22 = 0;
      lVar27 = 0;
    }
  }
LAB_004a4940:
  memset(param_5,0,*param_6);
  uVar4 = 0;
LAB_004a495c:
  FUN_00400420(uVar22,"external/openssl/crypto/sm2/sm2_crypt.c",0x180);
  FUN_00400420(lVar8,"external/openssl/crypto/sm2/sm2_crypt.c",0x181);
  FUN_00400420(lVar11,"external/openssl/crypto/sm2/sm2_crypt.c",0x182);
  FUN_0042db80(lVar25);
  FUN_0040def0(lVar21);
  FUN_00421810(puVar20,PTR_DAT_043745a8);
  FUN_00444950(lVar27);
  return uVar4;
}


