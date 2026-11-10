/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00424020; name: FUN_00424020
 */


undefined8 FUN_00424020(undefined8 *param_1,ulong param_2,long *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  undefined8 *puVar14;
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
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  if (*(int *)(param_1 + 0x11) == -1) {
    return 0;
  }
  uVar5 = FUN_0041cbf0(*param_1);
  *param_3 = (long)(int)uVar5;
  if (param_2 == 0) {
    return 1;
  }
  uVar4 = *(uint *)(param_1 + 0x11);
  if (uVar5 == uVar4) {
    if (0 < (int)uVar5) {
      uVar7 = (ulong)uVar5;
      if ((uVar5 < 0x40) ||
         ((param_2 < (long)param_1 + uVar7 + 0x68 && (param_1 + 1 < (undefined8 *)(param_2 + uVar7))
          ))) {
        uVar9 = 0;
        uVar11 = 0xffffffffffffffff;
      }
      else {
        uVar9 = uVar7 & 0xffffffc0;
        puVar12 = param_1 + 0xd;
        puVar14 = (undefined8 *)(param_2 + 0x20);
        uVar11 = uVar9;
        do {
          uVar16 = puVar12[1];
          uVar15 = *puVar12;
          uVar18 = puVar12[3];
          uVar17 = puVar12[2];
          uVar11 = uVar11 - 0x40;
          uVar24 = puVar12[-0xb];
          uVar23 = puVar12[-0xc];
          uVar26 = puVar12[-9];
          uVar25 = puVar12[-10];
          uVar20 = puVar12[5];
          uVar19 = puVar12[4];
          uVar22 = puVar12[7];
          uVar21 = puVar12[6];
          uVar28 = puVar12[-7];
          uVar27 = puVar12[-8];
          uVar30 = puVar12[-5];
          uVar29 = puVar12[-6];
          puVar14[-3] = CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar24 >> 0x30) ^
                                          (byte)((ulong)uVar16 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                   (byte)((ulong)uVar16 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                            (byte)((ulong)uVar16 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                                     (byte)((ulong)uVar16 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar24
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar16
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar24 >> 8) ^ (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar24 ^ (byte)uVar16)))))));
          puVar14[-4] = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar23 >> 0x30) ^
                                          (byte)((ulong)uVar15 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                   (byte)((ulong)uVar15 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                            (byte)((ulong)uVar15 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                                     (byte)((ulong)uVar15 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar23
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar15
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar23 >> 8) ^ (byte)((ulong)uVar15 >> 8),
                                                  (byte)uVar23 ^ (byte)uVar15)))))));
          puVar14[-1] = CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                          (byte)((ulong)uVar18 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                   (byte)((ulong)uVar18 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                            (byte)((ulong)uVar18 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                                     (byte)((ulong)uVar18 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar26
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar18
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar26 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar26 ^ (byte)uVar18)))))));
          puVar14[-2] = CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar25 >> 0x30) ^
                                          (byte)((ulong)uVar17 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                   (byte)((ulong)uVar17 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                            (byte)((ulong)uVar17 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar25 >> 0x18) ^
                                                                     (byte)((ulong)uVar17 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar25
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar17
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar25 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar25 ^ (byte)uVar17)))))));
          puVar12 = puVar12 + 8;
          puVar14[1] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                                CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                         (byte)((ulong)uVar20 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                  (byte)((ulong)uVar20 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                           (byte)((ulong)uVar20 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                                    (byte)((ulong)uVar20 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar28 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar20 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar28 >> 8) ^ (byte)((ulong)uVar20 >> 8),
                                                  (byte)uVar28 ^ (byte)uVar20)))))));
          *puVar14 = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                              CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                 (byte)((ulong)uVar19 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                          (byte)((ulong)uVar19 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                                   (byte)((ulong)uVar19 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar27 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar19 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar27 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar19)))))));
          puVar14[3] = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                         (byte)((ulong)uVar22 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                  (byte)((ulong)uVar22 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                           (byte)((ulong)uVar22 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar30 >> 0x18) ^
                                                                    (byte)((ulong)uVar22 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar30 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar22 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar30 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar30 ^ (byte)uVar22)))))));
          puVar14[2] = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                                CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                         (byte)((ulong)uVar21 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                  (byte)((ulong)uVar21 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                           (byte)((ulong)uVar21 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar29 >> 0x18) ^
                                                                    (byte)((ulong)uVar21 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar29 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar21 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar29 >> 8) ^ (byte)((ulong)uVar21 >> 8),
                                                  (byte)uVar29 ^ (byte)uVar21)))))));
          puVar14 = puVar14 + 8;
        } while (uVar11 != 0);
        if (uVar9 == uVar7) goto LAB_00424290;
        uVar11 = ~uVar9;
      }
      if ((uVar5 & 1) != 0) {
        *(byte *)(param_2 + uVar9) =
             *(byte *)((long)param_1 + uVar9 + 8) ^ *(byte *)((long)param_1 + uVar9 + 0x68);
        uVar9 = uVar9 | 1;
      }
      if (uVar11 + uVar7 != 0) {
        lVar8 = uVar7 - uVar9;
        pbVar10 = (byte *)((long)param_1 + uVar9 + 0x69);
        pbVar13 = (byte *)(uVar9 + param_2 + 1);
        do {
          lVar8 = lVar8 + -2;
          pbVar13[-1] = pbVar10[-0x61] ^ pbVar10[-1];
          bVar3 = *pbVar10;
          pbVar1 = pbVar10 + -0x60;
          pbVar10 = pbVar10 + 2;
          *pbVar13 = *pbVar1 ^ bVar3;
          pbVar13 = pbVar13 + 2;
        } while (lVar8 != 0);
      }
    }
  }
  else {
    iVar6 = (uVar5 - uVar4) + -1;
    *(undefined1 *)((long)param_1 + (long)(int)uVar4 + 0x68) = 0x80;
    if (iVar6 != 0 && 0 < (int)(uVar5 - uVar4)) {
      memset((void *)((long)param_1 + (long)(int)uVar4 + 0x69),0,(long)iVar6);
    }
    if (0 < (int)uVar5) {
      uVar7 = (ulong)uVar5;
      if ((uVar5 < 0x40) ||
         ((param_2 < (long)param_1 + uVar7 + 0x68 && (param_1 + 5 < (undefined8 *)(param_2 + uVar7))
          ))) {
        uVar9 = 0;
        uVar11 = 0xffffffffffffffff;
      }
      else {
        uVar9 = uVar7 & 0xffffffc0;
        puVar12 = (undefined8 *)(param_2 + 0x20);
        uVar11 = uVar9;
        puVar14 = param_1 + 0xb;
        do {
          uVar16 = puVar14[3];
          uVar15 = puVar14[2];
          uVar18 = puVar14[5];
          uVar17 = puVar14[4];
          uVar11 = uVar11 - 0x40;
          uVar20 = puVar14[7];
          uVar19 = puVar14[6];
          uVar22 = puVar14[9];
          uVar21 = puVar14[8];
          uVar24 = puVar14[-5];
          uVar23 = puVar14[-6];
          uVar26 = puVar14[-3];
          uVar25 = puVar14[-4];
          uVar28 = puVar14[-1];
          uVar27 = puVar14[-2];
          uVar30 = puVar14[1];
          uVar29 = *puVar14;
          puVar12[-3] = CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar24 >> 0x30) ^
                                          (byte)((ulong)uVar16 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                   (byte)((ulong)uVar16 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                            (byte)((ulong)uVar16 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                                     (byte)((ulong)uVar16 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar24
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar16
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar24 >> 8) ^ (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar24 ^ (byte)uVar16)))))));
          puVar12[-4] = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar23 >> 0x30) ^
                                          (byte)((ulong)uVar15 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                   (byte)((ulong)uVar15 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                            (byte)((ulong)uVar15 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                                     (byte)((ulong)uVar15 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar23
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar15
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar23 >> 8) ^ (byte)((ulong)uVar15 >> 8),
                                                  (byte)uVar23 ^ (byte)uVar15)))))));
          puVar12[-1] = CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                          (byte)((ulong)uVar18 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                   (byte)((ulong)uVar18 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                            (byte)((ulong)uVar18 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                                     (byte)((ulong)uVar18 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar26
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar18
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar26 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar26 ^ (byte)uVar18)))))));
          puVar12[-2] = CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar25 >> 0x30) ^
                                          (byte)((ulong)uVar17 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                   (byte)((ulong)uVar17 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                            (byte)((ulong)uVar17 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar25 >> 0x18) ^
                                                                     (byte)((ulong)uVar17 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar25
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar17
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar25 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar25 ^ (byte)uVar17)))))));
          puVar12[1] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                                CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                         (byte)((ulong)uVar20 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                  (byte)((ulong)uVar20 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                           (byte)((ulong)uVar20 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                                    (byte)((ulong)uVar20 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar28 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar20 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar28 >> 8) ^ (byte)((ulong)uVar20 >> 8),
                                                  (byte)uVar28 ^ (byte)uVar20)))))));
          *puVar12 = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                              CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                 (byte)((ulong)uVar19 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                          (byte)((ulong)uVar19 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                                   (byte)((ulong)uVar19 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar27 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar19 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar27 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar19)))))));
          puVar12[3] = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                         (byte)((ulong)uVar22 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                  (byte)((ulong)uVar22 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                           (byte)((ulong)uVar22 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar30 >> 0x18) ^
                                                                    (byte)((ulong)uVar22 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar30 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar22 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar30 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar30 ^ (byte)uVar22)))))));
          puVar12[2] = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                                CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                         (byte)((ulong)uVar21 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                  (byte)((ulong)uVar21 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                           (byte)((ulong)uVar21 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar29 >> 0x18) ^
                                                                    (byte)((ulong)uVar21 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar29 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar21 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar29 >> 8) ^ (byte)((ulong)uVar21 >> 8),
                                                  (byte)uVar29 ^ (byte)uVar21)))))));
          puVar12 = puVar12 + 8;
          puVar14 = puVar14 + 8;
        } while (uVar11 != 0);
        if (uVar9 == uVar7) goto LAB_00424290;
        uVar11 = ~uVar9;
      }
      if ((uVar5 & 1) != 0) {
        *(byte *)(param_2 + uVar9) =
             *(byte *)((long)param_1 + uVar9 + 0x28) ^ *(byte *)((long)param_1 + uVar9 + 0x68);
        uVar9 = uVar9 | 1;
      }
      if (uVar11 + uVar7 != 0) {
        lVar8 = uVar7 - uVar9;
        pbVar10 = (byte *)((long)param_1 + uVar9 + 0x68);
        pbVar13 = (byte *)(uVar9 + param_2 + 1);
        do {
          lVar8 = lVar8 + -2;
          pbVar13[-1] = pbVar10[-0x40] ^ *pbVar10;
          pbVar1 = pbVar10 + 1;
          pbVar2 = pbVar10 + -0x3f;
          pbVar10 = pbVar10 + 2;
          *pbVar13 = *pbVar2 ^ *pbVar1;
          pbVar13 = pbVar13 + 2;
        } while (lVar8 != 0);
      }
    }
  }
LAB_00424290:
  iVar6 = FUN_0041cc00(*param_1,param_2,param_2,uVar5);
  if (iVar6 == 0) {
    FUN_004006a0(param_2,(long)(int)uVar5);
    return 0;
  }
  return 1;
}


