/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046e990; name: FUN_0046e990
 */


undefined8
FUN_0046e990(undefined8 param_1,ulong param_2,undefined8 param_3,undefined4 param_4,ulong param_5,
            ulong param_6,ulong param_7,ulong param_8,long param_9,undefined8 param_10)

{
  byte *pbVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  ushort uVar9;
  uint3 uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  uint *puVar16;
  byte *pbVar17;
  ulong uVar18;
  uint *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  uint *puVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  byte *pbVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  
  if ((param_5 & param_5 - 1) != 0) {
    return 0;
  }
  if (param_5 < 2) {
    return 0;
  }
  if (param_6 == 0) {
    return 0;
  }
  if (param_7 == 0) {
    return 0;
  }
  uVar34 = 0;
  if (param_6 != 0) {
    uVar34 = 0x3fffffff / param_6;
  }
  if (uVar34 < param_7) {
    uVar13 = 0xac;
    uVar14 = 0xae;
LAB_0046eaec:
    FUN_004014b0(6,0xb5,uVar13,"external/openssl/crypto/evp/pbe_scrypt.c",uVar14);
    return 0;
  }
  if ((param_6 * 0x10 < 0x40) && (param_5 >> (param_6 * 0x10 & 0x3f) != 0)) {
    uVar13 = 0xac;
    uVar14 = 0xb9;
    goto LAB_0046eaec;
  }
  lVar29 = param_7 * 0x80;
  uVar34 = lVar29 * param_6;
  if (uVar34 >> 0x1f != 0) {
    uVar13 = 0xac;
    uVar14 = 0xcb;
    goto LAB_0046eaec;
  }
  uVar15 = 0;
  if (param_6 != 0) {
    uVar15 = 0x1ffffffffffffff / param_6;
  }
  if (uVar15 < param_5 + 2) {
    uVar13 = 0xac;
    uVar14 = 0xd5;
    goto LAB_0046eaec;
  }
  lVar33 = param_6 * 0x20;
  uVar15 = (param_5 + 2) * lVar33 * 4;
  if (~uVar15 < uVar34) {
    uVar13 = 0xac;
    uVar14 = 0xdc;
    goto LAB_0046eaec;
  }
  uVar21 = 0x2000000;
  if (param_8 != 0) {
    uVar21 = param_8;
  }
  uVar15 = uVar34 + uVar15;
  if (uVar21 < uVar15) {
    uVar13 = 0xac;
    uVar14 = 0xe8;
    goto LAB_0046eaec;
  }
  if (param_9 == 0) {
    return 1;
  }
  lVar12 = FUN_00400260(uVar15,"external/openssl/crypto/evp/pbe_scrypt.c",0xf0);
  if (lVar12 == 0) {
    uVar13 = 0x41;
    uVar14 = 0xf2;
    goto LAB_0046eaec;
  }
  uVar13 = FUN_0044f850();
  iVar11 = FUN_0046d6f0(param_1,param_2 & 0xffffffff,param_3,param_4,1,uVar13,uVar34 & 0xffffffff,
                        lVar12);
  if (iVar11 != 0) {
    lVar3 = lVar12 + uVar34;
    lVar4 = lVar3 + param_6 * 0x80;
    puVar5 = (uint *)(lVar4 + param_6 * 0x80);
    if (lVar33 == 0) {
      uVar21 = 0;
      do {
        uVar32 = 1;
        do {
          FUN_0046ef70(puVar5,puVar5 + param_6 * -0x20,param_6);
          uVar32 = uVar32 + 1;
        } while (param_5 != uVar32);
        FUN_0046ef70(lVar3,puVar5 + (param_5 * 0x20 + -0x20) * param_6,param_6);
        uVar32 = param_5;
        do {
          FUN_0046ef70(lVar3,lVar4,param_6);
          uVar32 = uVar32 - 1;
        } while (uVar32 != 0);
        uVar21 = uVar21 + 1;
      } while (uVar21 != param_7);
    }
    else {
      lVar25 = (lVar29 + 0x100) * param_6;
      lVar28 = (lVar29 + 0x80) * param_6;
      lVar6 = uVar34 + lVar12;
      uVar32 = lVar12 + lVar28;
      uVar21 = 0;
      do {
        pbVar31 = (byte *)(lVar12 + param_6 * 0x80 * uVar21);
        lVar22 = lVar33;
        pbVar17 = pbVar31;
        puVar16 = puVar5;
        lVar26 = lVar12;
        do {
          lVar26 = lVar26 + 8;
          bVar7 = *pbVar17;
          *puVar16 = (uint)bVar7;
          uVar9 = CONCAT11(pbVar17[1],bVar7);
          *puVar16 = (uint)uVar9;
          uVar10 = CONCAT12(pbVar17[2],uVar9);
          *puVar16 = (uint)uVar10;
          *puVar16 = CONCAT13(pbVar17[3],uVar10);
          bVar7 = pbVar17[4];
          puVar16[1] = (uint)bVar7;
          uVar9 = CONCAT11(pbVar17[5],bVar7);
          puVar16[1] = (uint)uVar9;
          uVar10 = CONCAT12(pbVar17[6],uVar9);
          puVar16[1] = (uint)uVar10;
          pbVar1 = pbVar17 + 7;
          pbVar17 = pbVar17 + 8;
          lVar22 = lVar22 + -2;
          puVar16[1] = CONCAT13(*pbVar1,uVar10);
          puVar16 = puVar16 + 2;
        } while (lVar22 != 0);
        uVar30 = 1;
        do {
          FUN_0046ef70(lVar26 + lVar25,lVar26 + lVar28,param_6);
          uVar30 = uVar30 + 1;
          lVar26 = lVar26 + param_6 * 0x80;
        } while (param_5 != uVar30);
        FUN_0046ef70(lVar3,puVar5 + (param_5 * 0x20 + -0x20) * param_6,param_6);
        uVar30 = 0;
        do {
          uVar18 = (ulong)*(uint *)(lVar3 + (lVar33 + -0x10) * 4);
          uVar8 = 0;
          if (param_5 != 0) {
            uVar8 = uVar18 / param_5;
          }
          puVar16 = puVar5 + (uVar18 - uVar8 * param_5) * lVar33;
          puVar19 = (uint *)(lVar6 + 8);
          puVar24 = (uint *)(uVar32 + 8);
          lVar26 = lVar33;
          if ((lVar33 == 0) ||
             (lVar22 = param_5 * 0x80 * uVar8,
             uVar32 < lVar12 + ((lVar29 + 0x180 + uVar18 * 0x80) - lVar22) * param_6 &&
             lVar12 + ((lVar29 + 0x100 + uVar18 * 0x80) - lVar22) * param_6 <
             (ulong)(lVar12 + lVar25))) {
            do {
              lVar26 = lVar26 + -4;
              puVar24[-2] = *puVar16 ^ puVar19[-2];
              puVar24[-1] = puVar16[1] ^ puVar19[-1];
              *puVar24 = puVar16[2] ^ *puVar19;
              puVar2 = puVar16 + 3;
              puVar16 = puVar16 + 4;
              puVar24[1] = *puVar2 ^ puVar19[1];
              puVar19 = puVar19 + 4;
              puVar24 = puVar24 + 4;
            } while (lVar26 != 0);
          }
          else {
            lVar26 = 0;
            puVar23 = (undefined8 *)(uVar32 + 0x20);
            puVar27 = (undefined8 *)(lVar6 + 0x20);
            lVar22 = lVar33;
            do {
              puVar19 = puVar16 + lVar26;
              lVar26 = lVar26 + 0x10;
              lVar22 = lVar22 + -0x10;
              uVar14 = puVar27[-3];
              uVar13 = puVar27[-4];
              uVar36 = puVar27[-1];
              uVar35 = puVar27[-2];
              uVar42 = *(undefined8 *)(puVar19 + 2);
              uVar41 = *(undefined8 *)puVar19;
              uVar44 = *(undefined8 *)(puVar19 + 6);
              uVar43 = *(undefined8 *)(puVar19 + 4);
              uVar46 = *(undefined8 *)(puVar19 + 10);
              uVar45 = *(undefined8 *)(puVar19 + 8);
              uVar48 = *(undefined8 *)(puVar19 + 0xe);
              uVar47 = *(undefined8 *)(puVar19 + 0xc);
              uVar38 = puVar27[1];
              uVar37 = *puVar27;
              uVar40 = puVar27[3];
              uVar39 = puVar27[2];
              puVar23[-3] = CONCAT17((byte)((ulong)uVar42 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar42 >> 0x30) ^
                                              (byte)((ulong)uVar14 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar42 >> 0x28) ^
                                                       (byte)((ulong)uVar14 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar42 >> 0x20) ^
                                                                (byte)((ulong)uVar14 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar42 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar14 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar42 >> 0x10) ^ (byte)((ulong)uVar14 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar42 >> 8) ^
                                                           (byte)((ulong)uVar14 >> 8),
                                                           (byte)uVar42 ^ (byte)uVar14)))))));
              puVar23[-4] = CONCAT17((byte)((ulong)uVar41 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar41 >> 0x30) ^
                                              (byte)((ulong)uVar13 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar41 >> 0x28) ^
                                                       (byte)((ulong)uVar13 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar41 >> 0x20) ^
                                                                (byte)((ulong)uVar13 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar41 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar13 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar41 >> 0x10) ^ (byte)((ulong)uVar13 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar41 >> 8) ^
                                                           (byte)((ulong)uVar13 >> 8),
                                                           (byte)uVar41 ^ (byte)uVar13)))))));
              puVar23[-1] = CONCAT17((byte)((ulong)uVar44 >> 0x38) ^ (byte)((ulong)uVar36 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar44 >> 0x30) ^
                                              (byte)((ulong)uVar36 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar44 >> 0x28) ^
                                                       (byte)((ulong)uVar36 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar44 >> 0x20) ^
                                                                (byte)((ulong)uVar36 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar44 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar36 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar44 >> 0x10) ^ (byte)((ulong)uVar36 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar44 >> 8) ^
                                                           (byte)((ulong)uVar36 >> 8),
                                                           (byte)uVar44 ^ (byte)uVar36)))))));
              puVar23[-2] = CONCAT17((byte)((ulong)uVar43 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar43 >> 0x30) ^
                                              (byte)((ulong)uVar35 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar43 >> 0x28) ^
                                                       (byte)((ulong)uVar35 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar43 >> 0x20) ^
                                                                (byte)((ulong)uVar35 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar43 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar35 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar43 >> 0x10) ^ (byte)((ulong)uVar35 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar43 >> 8) ^
                                                           (byte)((ulong)uVar35 >> 8),
                                                           (byte)uVar43 ^ (byte)uVar35)))))));
              puVar23[1] = CONCAT17((byte)((ulong)uVar46 >> 0x38) ^ (byte)((ulong)uVar38 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar46 >> 0x30) ^
                                             (byte)((ulong)uVar38 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar46 >> 0x28) ^
                                                      (byte)((ulong)uVar38 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar46 >> 0x20) ^
                                                               (byte)((ulong)uVar38 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar46 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar38 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar46 >> 0x10) ^
                                                           (byte)((ulong)uVar38 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar46 >> 8) ^
                                                                    (byte)((ulong)uVar38 >> 8),
                                                                    (byte)uVar46 ^ (byte)uVar38)))))
                                            ));
              *puVar23 = CONCAT17((byte)((ulong)uVar45 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar45 >> 0x30) ^
                                           (byte)((ulong)uVar37 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar45 >> 0x28) ^
                                                    (byte)((ulong)uVar37 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar45 >> 0x20) ^
                                                             (byte)((ulong)uVar37 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar45 >> 0x18)
                                                                      ^ (byte)((ulong)uVar37 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar45
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar37
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar45 >> 8) ^ (byte)((ulong)uVar37 >> 8),
                                                  (byte)uVar45 ^ (byte)uVar37)))))));
              puVar23[3] = CONCAT17((byte)((ulong)uVar48 >> 0x38) ^ (byte)((ulong)uVar40 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar48 >> 0x30) ^
                                             (byte)((ulong)uVar40 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar48 >> 0x28) ^
                                                      (byte)((ulong)uVar40 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar48 >> 0x20) ^
                                                               (byte)((ulong)uVar40 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar48 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar40 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar48 >> 0x10) ^
                                                           (byte)((ulong)uVar40 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar48 >> 8) ^
                                                                    (byte)((ulong)uVar40 >> 8),
                                                                    (byte)uVar48 ^ (byte)uVar40)))))
                                            ));
              puVar23[2] = CONCAT17((byte)((ulong)uVar47 >> 0x38) ^ (byte)((ulong)uVar39 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar47 >> 0x30) ^
                                             (byte)((ulong)uVar39 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar47 >> 0x28) ^
                                                      (byte)((ulong)uVar39 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar47 >> 0x20) ^
                                                               (byte)((ulong)uVar39 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar47 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar39 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar47 >> 0x10) ^
                                                           (byte)((ulong)uVar39 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar47 >> 8) ^
                                                                    (byte)((ulong)uVar39 >> 8),
                                                                    (byte)uVar47 ^ (byte)uVar39)))))
                                            ));
              puVar23 = puVar23 + 8;
              puVar27 = puVar27 + 8;
            } while (lVar22 != 0);
          }
          FUN_0046ef70(lVar3,lVar4,param_6);
          uVar30 = uVar30 + 1;
        } while (uVar30 != param_5);
        lVar26 = lVar33;
        puVar20 = (undefined4 *)(lVar6 + 4);
        do {
          *(undefined4 *)pbVar31 = puVar20[-1];
          lVar26 = lVar26 + -2;
          *(undefined4 *)(pbVar31 + 4) = *puVar20;
          pbVar31 = pbVar31 + 8;
          puVar20 = puVar20 + 2;
        } while (lVar26 != 0);
        uVar21 = uVar21 + 1;
      } while (uVar21 != param_7);
    }
    uVar13 = FUN_0044f850();
    uVar14 = 1;
    iVar11 = FUN_0046d6f0(param_1,param_2,lVar12,uVar34,1,uVar13,param_10,param_9);
    if (iVar11 != 0) goto LAB_0046ef48;
  }
  FUN_004014b0(6,0xb5,0xb5,"external/openssl/crypto/evp/pbe_scrypt.c",0x105);
  uVar14 = 0;
LAB_0046ef48:
  FUN_00400620(lVar12,uVar15,"external/openssl/crypto/evp/pbe_scrypt.c",0x107);
  return uVar14;
}


