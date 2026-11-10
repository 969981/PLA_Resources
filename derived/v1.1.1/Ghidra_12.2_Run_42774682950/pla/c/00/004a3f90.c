/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a3f90; name: FUN_004a3f90
 */


undefined8
FUN_004a3f90(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,void *param_5,
            size_t *param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong uVar22;
  undefined8 *puVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  void *local_68;
  
  local_68 = param_5;
  lVar3 = FUN_00444930();
  uVar4 = FUN_0042d4f0(param_1);
  uVar5 = FUN_0042e350();
  uVar6 = FUN_0042d570(param_1);
  iVar1 = FUN_0041ccc0(param_2);
  local_78 = 0;
  local_70 = 0;
  if ((lVar3 == 0) || (iVar1 < 1)) {
    uVar4 = 0x8d;
  }
  else {
    uVar7 = FUN_004a3e30(uVar4);
    if (uVar7 != 0) {
      lVar8 = FUN_0042df90(uVar4);
      lVar9 = FUN_0042df90(uVar4);
      lVar10 = FUN_0040de30();
      if (((lVar8 == 0) || (lVar9 == 0)) || (lVar10 == 0)) {
        uVar4 = 0x41;
        uVar5 = 0x9b;
LAB_004a431c:
        FUN_004014b0(0x35,0x67,uVar4,"external/openssl/crypto/sm2/sm2_crypt.c",uVar5);
        uVar18 = 0;
        lVar16 = 0;
        lVar17 = 0;
      }
      else {
        FUN_0040e090(lVar10);
        uVar11 = FUN_0040e240(lVar10);
        uVar12 = FUN_0040e240(lVar10);
        uVar13 = FUN_0040e240(lVar10);
        uVar14 = FUN_0040e240(lVar10);
        lVar15 = FUN_0040e240(lVar10);
        if (lVar15 == 0) {
          uVar5 = 0xa7;
          uVar4 = 3;
          goto LAB_004a431c;
        }
        lVar16 = FUN_004002a0(uVar7 << 1,"external/openssl/crypto/sm2/sm2_crypt.c",0xab);
        lVar17 = FUN_004002a0((long)iVar1,"external/openssl/crypto/sm2/sm2_crypt.c",0xac);
        if ((lVar16 == 0) || (lVar17 == 0)) {
          uVar4 = 0x41;
          uVar5 = 0xaf;
LAB_004a438c:
          FUN_004014b0(0x35,0x67,uVar4,"external/openssl/crypto/sm2/sm2_crypt.c",uVar5);
          uVar18 = 0;
        }
        else {
          memset(param_5,0,*param_6);
          iVar2 = FUN_00426fa0(uVar11,uVar5);
          if (iVar2 == 0) {
            uVar4 = 0x44;
            uVar5 = 0xb6;
            goto LAB_004a438c;
          }
          iVar2 = FUN_0042f280(uVar4,lVar8,uVar11,0,0,lVar10);
          if (((iVar2 == 0) || (iVar2 = FUN_0042ebc0(uVar4,lVar8,uVar12,uVar14,lVar10), iVar2 == 0))
             || ((iVar2 = FUN_0042f280(uVar4,lVar9,0,uVar6,uVar11,lVar10), iVar2 == 0 ||
                 (iVar2 = FUN_0042ebc0(uVar4,lVar9,uVar13,lVar15,lVar10), iVar2 == 0)))) {
            uVar5 = 0xbe;
            uVar4 = 0x10;
LAB_004a4364:
            FUN_004014b0(0x35,0x67,uVar4,"external/openssl/crypto/sm2/sm2_crypt.c",uVar5);
            uVar18 = 0;
            uVar4 = 0;
            goto LAB_004a439c;
          }
          iVar2 = FUN_0040c940(uVar13,lVar16,uVar7 & 0xffffffff);
          if (iVar2 < 0) {
LAB_004a4428:
            uVar4 = 0x44;
            uVar5 = 0xc4;
            goto LAB_004a4364;
          }
          iVar2 = FUN_0040c940(lVar15,lVar16 + uVar7,uVar7 & 0xffffffff);
          if (iVar2 < 0) goto LAB_004a4428;
          uVar18 = FUN_004002a0(param_4,"external/openssl/crypto/sm2/sm2_crypt.c",200);
          if (uVar18 == 0) {
            uVar4 = 0x41;
            uVar5 = 0xca;
LAB_004a45c0:
            FUN_004014b0(0x35,0x67,uVar4,"external/openssl/crypto/sm2/sm2_crypt.c",uVar5);
            uVar4 = 0;
            goto LAB_004a439c;
          }
          iVar2 = FUN_0049bc10(uVar18,param_4,lVar16,uVar7 << 1,0,0,param_2);
          if (iVar2 == 0) {
            uVar5 = 0xd1;
LAB_004a45bc:
            uVar4 = 6;
            goto LAB_004a45c0;
          }
          if (param_4 != 0) {
            if ((param_4 < 0x40) || ((uVar18 < param_3 + param_4 && (param_3 < uVar18 + param_4))))
            {
              uVar20 = 0;
            }
            else {
              uVar20 = param_4 & 0xffffffffffffffc0;
              puVar23 = (undefined8 *)(param_3 + 0x20);
              puVar25 = (undefined8 *)(uVar18 + 0x20);
              uVar22 = uVar20;
              do {
                uVar5 = puVar23[-3];
                uVar4 = puVar23[-4];
                uVar11 = puVar23[-1];
                uVar6 = puVar23[-2];
                uVar22 = uVar22 - 0x40;
                uVar30 = puVar25[-3];
                uVar29 = puVar25[-4];
                uVar32 = puVar25[-1];
                uVar31 = puVar25[-2];
                uVar26 = puVar23[1];
                uVar13 = *puVar23;
                uVar28 = puVar23[3];
                uVar27 = puVar23[2];
                puVar25[-3] = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                                (byte)((ulong)uVar5 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                         (byte)((ulong)uVar5 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                                  (byte)((ulong)uVar5 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar30 >>
                                                                                 0x18) ^
                                                                           (byte)((ulong)uVar5 >>
                                                                                 0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar30 >> 0x10) ^ (byte)((ulong)uVar5 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar30 >> 8) ^
                                                           (byte)((ulong)uVar5 >> 8),
                                                           (byte)uVar30 ^ (byte)uVar5)))))));
                puVar25[-4] = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                                (byte)((ulong)uVar4 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                         (byte)((ulong)uVar4 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                                  (byte)((ulong)uVar4 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar29 >>
                                                                                 0x18) ^
                                                                           (byte)((ulong)uVar4 >>
                                                                                 0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar29 >> 0x10) ^ (byte)((ulong)uVar4 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar29 >> 8) ^
                                                           (byte)((ulong)uVar4 >> 8),
                                                           (byte)uVar29 ^ (byte)uVar4)))))));
                puVar25[-1] = CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38)
                                       ,CONCAT16((byte)((ulong)uVar32 >> 0x30) ^
                                                 (byte)((ulong)uVar11 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                                          (byte)((ulong)uVar11 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                                   (byte)((ulong)uVar11 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar32 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar11 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar32 >> 0x10) ^ (byte)((ulong)uVar11 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar32 >> 8) ^
                                                           (byte)((ulong)uVar11 >> 8),
                                                           (byte)uVar32 ^ (byte)uVar11)))))));
                puVar25[-2] = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar31 >> 0x30) ^
                                                (byte)((ulong)uVar6 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                                         (byte)((ulong)uVar6 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                                  (byte)((ulong)uVar6 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar31 >>
                                                                                 0x18) ^
                                                                           (byte)((ulong)uVar6 >>
                                                                                 0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar31 >> 0x10) ^ (byte)((ulong)uVar6 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar31 >> 8) ^
                                                           (byte)((ulong)uVar6 >> 8),
                                                           (byte)uVar31 ^ (byte)uVar6)))))));
                uVar5 = puVar25[1];
                uVar4 = *puVar25;
                uVar11 = puVar25[3];
                uVar6 = puVar25[2];
                puVar25[1] = CONCAT17((byte)((ulong)uVar5 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar5 >> 0x30) ^
                                               (byte)((ulong)uVar26 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar5 >> 0x28) ^
                                                        (byte)((ulong)uVar26 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar5 >> 0x20) ^
                                                                 (byte)((ulong)uVar26 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar5 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar26 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar5 >> 0x10) ^ (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar5 >> 8) ^
                                                           (byte)((ulong)uVar26 >> 8),
                                                           (byte)uVar5 ^ (byte)uVar26)))))));
                *puVar25 = CONCAT17((byte)((ulong)uVar4 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar4 >> 0x30) ^
                                             (byte)((ulong)uVar13 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar4 >> 0x28) ^
                                                      (byte)((ulong)uVar13 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar4 >> 0x20) ^
                                                               (byte)((ulong)uVar13 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar4 >> 0x18)
                                                                        ^ (byte)((ulong)uVar13 >>
                                                                                0x18),
                                                                        CONCAT12((byte)((ulong)uVar4
                                                                                       >> 0x10) ^
                                                                                 (byte)((ulong)
                                                  uVar13 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar4 >> 8) ^
                                                           (byte)((ulong)uVar13 >> 8),
                                                           (byte)uVar4 ^ (byte)uVar13)))))));
                puVar25[3] = CONCAT17((byte)((ulong)uVar11 >> 0x38) ^ (byte)((ulong)uVar28 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar11 >> 0x30) ^
                                               (byte)((ulong)uVar28 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar11 >> 0x28) ^
                                                        (byte)((ulong)uVar28 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar11 >> 0x20) ^
                                                                 (byte)((ulong)uVar28 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar11 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar28 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar11 >> 0x10) ^ (byte)((ulong)uVar28 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar11 >> 8) ^
                                                           (byte)((ulong)uVar28 >> 8),
                                                           (byte)uVar11 ^ (byte)uVar28)))))));
                puVar25[2] = CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ (byte)((ulong)uVar27 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar6 >> 0x30) ^
                                               (byte)((ulong)uVar27 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar6 >> 0x28) ^
                                                        (byte)((ulong)uVar27 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                                 (byte)((ulong)uVar27 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar6 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar27 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar6 >> 0x10) ^ (byte)((ulong)uVar27 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar6 >> 8) ^
                                                           (byte)((ulong)uVar27 >> 8),
                                                           (byte)uVar6 ^ (byte)uVar27)))))));
                puVar23 = puVar23 + 8;
                puVar25 = puVar25 + 8;
              } while (uVar22 != 0);
              if (uVar20 == param_4) goto LAB_004a44c4;
            }
            uVar22 = ~uVar20;
            if ((param_4 & 1) != 0) {
              *(byte *)(uVar18 + uVar20) = *(byte *)(uVar18 + uVar20) ^ *(byte *)(param_3 + uVar20);
              uVar20 = uVar20 | 1;
            }
            if (uVar22 + param_4 != 0) {
              lVar15 = param_4 - uVar20;
              pbVar21 = (byte *)(uVar18 + uVar20 + 1);
              pbVar24 = (byte *)(param_3 + uVar20 + 1);
              do {
                lVar15 = lVar15 + -2;
                pbVar21[-1] = pbVar21[-1] ^ pbVar24[-1];
                *pbVar21 = *pbVar21 ^ *pbVar24;
                pbVar21 = pbVar21 + 2;
                pbVar24 = pbVar24 + 2;
              } while (lVar15 != 0);
            }
          }
LAB_004a44c4:
          iVar2 = FUN_00444980(lVar3,param_2);
          if ((((iVar2 == 0) || (iVar2 = FUN_00444ad0(lVar3,lVar16,uVar7), iVar2 == 0)) ||
              (iVar2 = FUN_00444ad0(lVar3,param_3,param_4), iVar2 == 0)) ||
             ((iVar2 = FUN_00444ad0(lVar3,lVar16 + uVar7,uVar7), iVar2 == 0 ||
              (iVar2 = FUN_00444af0(lVar3,lVar17,0), iVar2 == 0)))) {
            uVar5 = 0xdd;
            goto LAB_004a45bc;
          }
          local_88 = uVar12;
          local_80 = uVar14;
          lVar15 = FUN_0041cee0();
          local_78 = lVar15;
          lVar19 = FUN_0041cee0();
          local_70 = lVar19;
          if ((lVar19 == 0) || (lVar15 == 0)) {
            uVar4 = 0x41;
            uVar5 = 0xe7;
          }
          else {
            iVar1 = thunk_FUN_0040a280(lVar15,lVar17,iVar1);
            if ((iVar1 == 0) || (iVar1 = thunk_FUN_0040a280(lVar19,uVar18,param_4), iVar1 == 0)) {
              uVar4 = 0x44;
              uVar5 = 0xec;
            }
            else {
              iVar1 = FUN_0041f020(&local_88,&local_68,PTR_DAT_043745a8);
              if (-1 < iVar1) {
                uVar4 = 1;
                *param_6 = (long)iVar1;
                goto LAB_004a439c;
              }
              uVar4 = 0x44;
              uVar5 = 0xf3;
            }
          }
          FUN_004014b0(0x35,0x67,uVar4,"external/openssl/crypto/sm2/sm2_crypt.c",uVar5);
        }
      }
      uVar4 = 0;
      goto LAB_004a439c;
    }
    uVar4 = 0x93;
  }
  FUN_004014b0(0x35,0x67,0x44,"external/openssl/crypto/sm2/sm2_crypt.c",uVar4);
  lVar10 = 0;
  lVar8 = 0;
  lVar9 = 0;
  uVar18 = 0;
  lVar16 = 0;
  lVar17 = 0;
  uVar4 = 0;
LAB_004a439c:
  thunk_FUN_0040a4b0(local_70);
  thunk_FUN_0040a4b0(local_78);
  FUN_00400420(uVar18,"external/openssl/crypto/sm2/sm2_crypt.c",0xfd);
  FUN_00400420(lVar16,"external/openssl/crypto/sm2/sm2_crypt.c",0xfe);
  FUN_00400420(lVar17,"external/openssl/crypto/sm2/sm2_crypt.c",0xff);
  FUN_00444950(lVar3);
  FUN_0040def0(lVar10);
  FUN_0042db80(lVar8);
  FUN_0042db80(lVar9);
  return uVar4;
}


