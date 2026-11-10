/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00472e10; name: FUN_00472e10
 */


void FUN_00472e10(byte *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  if (param_3 == 0) {
    return;
  }
  pbVar1 = param_1 + 0x10;
  pcVar2 = *(code **)(param_1 + 0x28);
  *param_1 = *param_1 | 0x40;
  (*pcVar2)(param_1,pbVar1,*(undefined8 *)(param_1 + 0x30));
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar3 = (byte)(param_3 >> 8);
  if (param_3 >> 8 < 0xff) {
    *pbVar1 = *pbVar1 ^ bVar3;
    lVar9 = 2;
    lVar8 = 1;
  }
  else {
    *pbVar1 = ~*pbVar1;
    bVar5 = (byte)(param_3 >> 0x10);
    bVar4 = (byte)(param_3 >> 0x18);
    if (param_3 >> 0x20 == 0) {
      param_1[0x11] = param_1[0x11] ^ 0xfe;
      param_1[0x12] = param_1[0x12] ^ bVar4;
      lVar9 = 6;
      param_1[0x13] = param_1[0x13] ^ bVar5;
      param_1[0x14] = param_1[0x14] ^ bVar3;
      lVar8 = 5;
    }
    else {
      param_1[0x11] = ~param_1[0x11];
      param_1[0x12] = param_1[0x12] ^ (byte)(param_3 >> 0x38);
      param_1[0x14] = param_1[0x14] ^ (byte)(param_3 >> 0x28);
      param_1[0x15] = param_1[0x15] ^ (byte)(param_3 >> 0x20);
      param_1[0x13] = param_1[0x13] ^ (byte)(param_3 >> 0x30);
      param_1[0x16] = param_1[0x16] ^ bVar4;
      lVar9 = 10;
      param_1[0x17] = param_1[0x17] ^ bVar5;
      param_1[0x18] = param_1[0x18] ^ bVar3;
      lVar8 = 9;
    }
  }
  pbVar1[lVar8] = pbVar1[lVar8] ^ (byte)param_3;
  if (param_3 != 0) goto LAB_00472f90;
  do {
    bVar7 = false;
LAB_00472f68:
    (*pcVar2)(pbVar1,pbVar1,*(undefined8 *)(param_1 + 0x30));
    lVar9 = 0;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    if (!bVar7) {
      return;
    }
  } while (param_3 == 0);
LAB_00472f90:
  uVar12 = param_3 - 1;
  uVar11 = uVar12;
  if (0xfU - lVar9 <= uVar12) {
    uVar11 = 0xfU - lVar9;
  }
  uVar11 = uVar11 + 1;
  if (uVar11 < 0x10) goto LAB_004730d4;
  if (0xfU - lVar9 <= uVar12) {
    uVar12 = 0xfU - lVar9;
  }
  if ((param_1 + lVar9 + 0x10 < param_2 + uVar12 + 1) && (param_2 < param_1 + lVar9 + uVar12 + 0x11)
     ) goto LAB_004730d4;
  uVar13 = uVar11 & 0xfffffffffffffff0;
  uVar12 = (uVar13 - 0x10 >> 4) + 1;
  uVar14 = uVar12 & 3;
  if (uVar13 - 0x10 < 0x30) {
    lVar8 = 0;
    uVar6 = param_3;
  }
  else {
    lVar8 = 0;
    lVar15 = uVar14 - uVar12;
    do {
      pbVar10 = param_2 + lVar8;
      pbVar16 = param_1 + lVar8 + lVar9 + 0x20;
      uVar18 = *(undefined8 *)(pbVar10 + 8);
      uVar17 = *(undefined8 *)pbVar10;
      uVar21 = *(undefined8 *)(pbVar16 + -8);
      uVar19 = *(undefined8 *)(pbVar16 + -0x10);
      lVar8 = lVar8 + 0x40;
      uVar22 = *(undefined8 *)(pbVar16 + 8);
      uVar20 = *(undefined8 *)pbVar16;
      uVar24 = *(undefined8 *)(pbVar16 + 0x18);
      uVar23 = *(undefined8 *)(pbVar16 + 0x10);
      *(ulong *)(pbVar16 + -8) =
           CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                    CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                             CONCAT15((byte)((ulong)uVar21 >> 0x28) ^ (byte)((ulong)uVar18 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                               (byte)((ulong)uVar18 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                        (byte)((ulong)uVar18 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar21 >> 0x10) ^
                                                                 (byte)((ulong)uVar18 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar21 >> 8)
                                                                          ^ (byte)((ulong)uVar18 >>
                                                                                  8),
                                                                          (byte)uVar21 ^
                                                                          (byte)uVar18)))))));
      *(ulong *)(pbVar16 + -0x10) =
           CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                    CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                             CONCAT15((byte)((ulong)uVar19 >> 0x28) ^ (byte)((ulong)uVar17 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                               (byte)((ulong)uVar17 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                        (byte)((ulong)uVar17 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                 (byte)((ulong)uVar17 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar19 >> 8)
                                                                          ^ (byte)((ulong)uVar17 >>
                                                                                  8),
                                                                          (byte)uVar19 ^
                                                                          (byte)uVar17)))))));
      uVar18 = *(undefined8 *)(pbVar10 + 0x18);
      uVar17 = *(undefined8 *)(pbVar10 + 0x10);
      lVar15 = lVar15 + 4;
      *(ulong *)(pbVar16 + 8) =
           CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                    CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                             CONCAT15((byte)((ulong)uVar22 >> 0x28) ^ (byte)((ulong)uVar18 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                               (byte)((ulong)uVar18 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                        (byte)((ulong)uVar18 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar22 >> 0x10) ^
                                                                 (byte)((ulong)uVar18 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar22 >> 8)
                                                                          ^ (byte)((ulong)uVar18 >>
                                                                                  8),
                                                                          (byte)uVar22 ^
                                                                          (byte)uVar18)))))));
      *(ulong *)pbVar16 =
           CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                    CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                             CONCAT15((byte)((ulong)uVar20 >> 0x28) ^ (byte)((ulong)uVar17 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                               (byte)((ulong)uVar17 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                        (byte)((ulong)uVar17 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                 (byte)((ulong)uVar17 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar20 >> 8)
                                                                          ^ (byte)((ulong)uVar17 >>
                                                                                  8),
                                                                          (byte)uVar20 ^
                                                                          (byte)uVar17)))))));
      uVar18 = *(undefined8 *)(pbVar10 + 0x28);
      uVar17 = *(undefined8 *)(pbVar10 + 0x20);
      *(ulong *)(pbVar16 + 0x18) =
           CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                    CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                             CONCAT15((byte)((ulong)uVar24 >> 0x28) ^ (byte)((ulong)uVar18 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                               (byte)((ulong)uVar18 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                        (byte)((ulong)uVar18 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar24 >> 0x10) ^
                                                                 (byte)((ulong)uVar18 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar24 >> 8)
                                                                          ^ (byte)((ulong)uVar18 >>
                                                                                  8),
                                                                          (byte)uVar24 ^
                                                                          (byte)uVar18)))))));
      *(ulong *)(pbVar16 + 0x10) =
           CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                    CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                             CONCAT15((byte)((ulong)uVar23 >> 0x28) ^ (byte)((ulong)uVar17 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                               (byte)((ulong)uVar17 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                        (byte)((ulong)uVar17 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar23 >> 0x10) ^
                                                                 (byte)((ulong)uVar17 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar23 >> 8)
                                                                          ^ (byte)((ulong)uVar17 >>
                                                                                  8),
                                                                          (byte)uVar23 ^
                                                                          (byte)uVar17)))))));
      uVar18 = *(undefined8 *)(pbVar16 + 0x28);
      uVar17 = *(undefined8 *)(pbVar16 + 0x20);
      uVar20 = *(undefined8 *)(pbVar10 + 0x38);
      uVar19 = *(undefined8 *)(pbVar10 + 0x30);
      *(ulong *)(pbVar16 + 0x28) =
           CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                    CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                             CONCAT15((byte)((ulong)uVar18 >> 0x28) ^ (byte)((ulong)uVar20 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                               (byte)((ulong)uVar20 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                        (byte)((ulong)uVar20 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar18 >> 0x10) ^
                                                                 (byte)((ulong)uVar20 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar18 >> 8)
                                                                          ^ (byte)((ulong)uVar20 >>
                                                                                  8),
                                                                          (byte)uVar18 ^
                                                                          (byte)uVar20)))))));
      *(ulong *)(pbVar16 + 0x20) =
           CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                    CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                             CONCAT15((byte)((ulong)uVar17 >> 0x28) ^ (byte)((ulong)uVar19 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                               (byte)((ulong)uVar19 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                        (byte)((ulong)uVar19 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar17 >> 0x10) ^
                                                                 (byte)((ulong)uVar19 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar17 >> 8)
                                                                          ^ (byte)((ulong)uVar19 >>
                                                                                  8),
                                                                          (byte)uVar17 ^
                                                                          (byte)uVar19)))))));
    } while (lVar15 != 0);
    uVar12 = (param_3 - lVar8) + 1;
    uVar6 = param_3 - lVar8;
  }
  param_3 = param_3 - uVar13;
  if (uVar14 != 0) {
    uVar12 = uVar6 + 1;
    lVar15 = -uVar14;
    pbVar10 = param_1 + lVar9 + lVar8 + 0x10;
    pbVar16 = param_2 + lVar8;
    do {
      uVar18 = *(undefined8 *)(pbVar16 + 8);
      uVar17 = *(undefined8 *)pbVar16;
      uVar12 = uVar12 - 0x10;
      uVar20 = *(undefined8 *)(pbVar10 + 8);
      uVar19 = *(undefined8 *)pbVar10;
      bVar7 = lVar15 != -1;
      lVar15 = lVar15 + 1;
      *(ulong *)(pbVar10 + 8) =
           CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                    CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                             CONCAT15((byte)((ulong)uVar20 >> 0x28) ^ (byte)((ulong)uVar18 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                               (byte)((ulong)uVar18 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                        (byte)((ulong)uVar18 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                 (byte)((ulong)uVar18 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar20 >> 8)
                                                                          ^ (byte)((ulong)uVar18 >>
                                                                                  8),
                                                                          (byte)uVar20 ^
                                                                          (byte)uVar18)))))));
      *(ulong *)pbVar10 =
           CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                    CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                             CONCAT15((byte)((ulong)uVar19 >> 0x28) ^ (byte)((ulong)uVar17 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                               (byte)((ulong)uVar17 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                        (byte)((ulong)uVar17 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                 (byte)((ulong)uVar17 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar19 >> 8)
                                                                          ^ (byte)((ulong)uVar17 >>
                                                                                  8),
                                                                          (byte)uVar19 ^
                                                                          (byte)uVar17)))))));
      pbVar10 = pbVar10 + 0x10;
      pbVar16 = pbVar16 + 0x10;
    } while (bVar7);
  }
  param_2 = param_2 + uVar13;
  lVar9 = lVar9 + uVar13;
  bVar7 = uVar12 != 1;
  if (uVar11 != uVar13) {
LAB_004730d4:
    lVar9 = lVar9 + 0x10;
    pbVar10 = param_2;
    do {
      param_2 = pbVar10 + 1;
      param_3 = param_3 - 1;
      bVar7 = param_3 != 0;
      param_1[lVar9] = param_1[lVar9] ^ *pbVar10;
      if (param_3 == 0) break;
      uVar11 = lVar9 - 0xf;
      lVar9 = lVar9 + 1;
      pbVar10 = param_2;
    } while (uVar11 < 0x10);
  }
  goto LAB_00472f68;
}


