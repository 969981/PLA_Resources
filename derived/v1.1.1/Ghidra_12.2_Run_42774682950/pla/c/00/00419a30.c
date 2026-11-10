/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00419a30; name: FUN_00419a30
 */


bool FUN_00419a30(long param_1,byte *param_2,ulong param_3,byte *param_4,ulong param_5,byte *param_6
                 ,ulong param_7)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  byte *pbVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  ulong uVar15;
  size_t __n;
  ulong uVar16;
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
  ulong local_80;
  int local_6c;
  int local_68;
  int local_64;
  
  puVar13 = (undefined8 *)(param_1 + 0xa8);
  local_6c = 0x10;
  FUN_0041b3a0(puVar13);
  pbVar7 = (byte *)(param_1 + 0xe8);
  iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xa8),param_1 + 200,&local_6c,pbVar7,0x10);
  if (iVar6 == 0) {
    return false;
  }
  if (local_6c != 0x10) {
    return false;
  }
  if (*(long *)(param_1 + 0xc0) != 0x10) {
    FUN_0041b3a0(puVar13);
    iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xa8),param_1 + 0xd8,&local_6c,pbVar7,0x10);
    if (iVar6 == 0) {
      return false;
    }
    if (local_6c != 0x10) {
      return false;
    }
  }
  FUN_0041b3a0(puVar13);
  iVar6 = FUN_0041ba00(*puVar13,pbVar7,&local_6c,pbVar7,0x10);
  if (iVar6 == 0) {
    return false;
  }
  if (local_6c != 0x10) {
    return false;
  }
  uVar10 = *(ulong *)(param_1 + 0xc0);
  if (uVar10 == 0x18) {
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xe0);
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
      uVar16 = param_3;
      if (uVar10 <= param_3) {
        uVar16 = uVar10;
      }
      if (uVar16 != 0) {
        if ((uVar16 < 0x40) ||
           (((byte *)(param_1 + 200U) < param_2 + uVar16 &&
            (param_2 < (byte *)(uVar16 + param_1 + 200))))) {
          uVar10 = 0;
LAB_00419bc4:
          do {
            *(byte *)(param_1 + 200 + uVar10) = *(byte *)(param_1 + 200 + uVar10) ^ param_2[uVar10];
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar16);
        }
        else {
          uVar10 = uVar16 & 0xffffffffffffffc0;
          puVar13 = (undefined8 *)(param_1 + 0xf8);
          pbVar14 = param_2 + 0x20;
          uVar12 = uVar10;
          do {
            uVar18 = *(undefined8 *)(pbVar14 + -0x18);
            uVar17 = *(undefined8 *)(pbVar14 + -0x20);
            uVar20 = *(undefined8 *)(pbVar14 + -8);
            uVar19 = *(undefined8 *)(pbVar14 + -0x10);
            uVar12 = uVar12 - 0x40;
            uVar26 = puVar13[-5];
            uVar25 = puVar13[-6];
            uVar28 = puVar13[-3];
            uVar27 = puVar13[-4];
            uVar22 = *(undefined8 *)(pbVar14 + 8);
            uVar21 = *(undefined8 *)pbVar14;
            uVar24 = *(undefined8 *)(pbVar14 + 0x18);
            uVar23 = *(undefined8 *)(pbVar14 + 0x10);
            puVar13[-5] = CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                            (byte)((ulong)uVar18 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                     (byte)((ulong)uVar18 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                              (byte)((ulong)uVar18 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar26 >> 0x18)
                                                                       ^ (byte)((ulong)uVar18 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar26
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar18
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar26 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar26 ^ (byte)uVar18)))))));
            puVar13[-6] = CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar25 >> 0x30) ^
                                            (byte)((ulong)uVar17 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                     (byte)((ulong)uVar17 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                              (byte)((ulong)uVar17 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar25 >> 0x18)
                                                                       ^ (byte)((ulong)uVar17 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar25
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar17
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar25 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar25 ^ (byte)uVar17)))))));
            puVar13[-3] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                            (byte)((ulong)uVar20 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                     (byte)((ulong)uVar20 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                              (byte)((ulong)uVar20 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar28 >> 0x18)
                                                                       ^ (byte)((ulong)uVar20 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar28
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar20
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar28 >> 8) ^ (byte)((ulong)uVar20 >> 8),
                                                  (byte)uVar28 ^ (byte)uVar20)))))));
            puVar13[-4] = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                            (byte)((ulong)uVar19 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                     (byte)((ulong)uVar19 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                              (byte)((ulong)uVar19 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar27 >> 0x18)
                                                                       ^ (byte)((ulong)uVar19 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar27
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar19
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar27 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar19)))))));
            uVar18 = puVar13[-1];
            uVar17 = puVar13[-2];
            uVar20 = puVar13[1];
            uVar19 = *puVar13;
            puVar13[-1] = CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar18 >> 0x30) ^
                                            (byte)((ulong)uVar22 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                                     (byte)((ulong)uVar22 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                              (byte)((ulong)uVar22 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar18 >> 0x18)
                                                                       ^ (byte)((ulong)uVar22 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar18
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar22
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar18 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar18 ^ (byte)uVar22)))))));
            puVar13[-2] = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar17 >> 0x30) ^
                                            (byte)((ulong)uVar21 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                     (byte)((ulong)uVar21 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                              (byte)((ulong)uVar21 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar17 >> 0x18)
                                                                       ^ (byte)((ulong)uVar21 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar17
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar21
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar17 >> 8) ^ (byte)((ulong)uVar21 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar21)))))));
            puVar13[1] = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar20 >> 0x30) ^
                                           (byte)((ulong)uVar24 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                    (byte)((ulong)uVar24 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                             (byte)((ulong)uVar24 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar20 >> 0x18)
                                                                      ^ (byte)((ulong)uVar24 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar20
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar24
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar20 >> 8) ^ (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar20 ^ (byte)uVar24)))))));
            *puVar13 = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                                CONCAT16((byte)((ulong)uVar19 >> 0x30) ^
                                         (byte)((ulong)uVar23 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                  (byte)((ulong)uVar23 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                           (byte)((ulong)uVar23 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                    (byte)((ulong)uVar23 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar19 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar23 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) ^ (byte)((ulong)uVar23 >> 8),
                                                  (byte)uVar19 ^ (byte)uVar23)))))));
            puVar13 = puVar13 + 8;
            pbVar14 = pbVar14 + 0x40;
          } while (uVar12 != 0);
          if (uVar16 != uVar10) goto LAB_00419bc4;
        }
        uVar10 = *(ulong *)(param_1 + 0xc0);
      }
      if (uVar10 < param_3) {
        param_3 = param_3 - uVar10;
        if (0xf < param_3) {
          param_3 = 0x10;
        }
        if (((param_3 != 0) && (*pbVar7 = *pbVar7 ^ param_2[uVar10], param_3 != 1)) &&
           (*(byte *)(param_1 + 0xe9) = *(byte *)(param_1 + 0xe9) ^ param_2[uVar10 + 1], 2 < param_3
           )) {
          lVar11 = 0;
          do {
            *(byte *)(param_1 + 0xea + lVar11) =
                 *(byte *)(param_1 + 0xea + lVar11) ^
                 param_2[lVar11 + *(long *)(param_1 + 0xc0) + 2];
            uVar10 = lVar11 + 3;
            lVar11 = lVar11 + 1;
          } while (uVar10 < param_3);
        }
      }
    }
    if ((param_4 == (byte *)0x0) || (param_5 == 0)) goto LAB_0041a540;
    uVar16 = *(ulong *)(param_1 + 0xc0);
    uVar10 = param_5;
    if (uVar16 <= param_5) {
      uVar10 = uVar16;
    }
    if (uVar10 != 0) {
      if ((uVar10 < 0x40) ||
         (((byte *)(param_1 + 200U) < param_4 + uVar10 &&
          (param_4 < (byte *)(uVar10 + param_1 + 200))))) {
        uVar16 = 0;
LAB_00419cb0:
        do {
          *(byte *)(param_1 + 200 + uVar16) = *(byte *)(param_1 + 200 + uVar16) ^ param_4[uVar16];
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar10);
      }
      else {
        uVar16 = uVar10 & 0xffffffffffffffc0;
        puVar13 = (undefined8 *)(param_1 + 0xf8);
        pbVar14 = param_4 + 0x20;
        uVar12 = uVar16;
        do {
          uVar18 = *(undefined8 *)(pbVar14 + -0x18);
          uVar17 = *(undefined8 *)(pbVar14 + -0x20);
          uVar20 = *(undefined8 *)(pbVar14 + -8);
          uVar19 = *(undefined8 *)(pbVar14 + -0x10);
          uVar12 = uVar12 - 0x40;
          uVar26 = puVar13[-5];
          uVar25 = puVar13[-6];
          uVar28 = puVar13[-3];
          uVar27 = puVar13[-4];
          uVar22 = *(undefined8 *)(pbVar14 + 8);
          uVar21 = *(undefined8 *)pbVar14;
          uVar24 = *(undefined8 *)(pbVar14 + 0x18);
          uVar23 = *(undefined8 *)(pbVar14 + 0x10);
          puVar13[-5] = CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
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
          puVar13[-6] = CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
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
          puVar13[-3] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                          (byte)((ulong)uVar20 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                   (byte)((ulong)uVar20 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                            (byte)((ulong)uVar20 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                                     (byte)((ulong)uVar20 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar28
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar20
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar28 >> 8) ^ (byte)((ulong)uVar20 >> 8),
                                                  (byte)uVar28 ^ (byte)uVar20)))))));
          puVar13[-4] = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                          (byte)((ulong)uVar19 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                   (byte)((ulong)uVar19 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                            (byte)((ulong)uVar19 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                                     (byte)((ulong)uVar19 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar27
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar19
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar27 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar19)))))));
          uVar18 = puVar13[-1];
          uVar17 = puVar13[-2];
          uVar20 = puVar13[1];
          uVar19 = *puVar13;
          puVar13[-1] = CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar18 >> 0x30) ^
                                          (byte)((ulong)uVar22 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                                   (byte)((ulong)uVar22 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                            (byte)((ulong)uVar22 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                                     (byte)((ulong)uVar22 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar18
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar22
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar18 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar18 ^ (byte)uVar22)))))));
          puVar13[-2] = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar17 >> 0x30) ^
                                          (byte)((ulong)uVar21 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                   (byte)((ulong)uVar21 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                            (byte)((ulong)uVar21 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                                     (byte)((ulong)uVar21 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar17
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar21
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar17 >> 8) ^ (byte)((ulong)uVar21 >> 8),
                                                  (byte)uVar17 ^ (byte)uVar21)))))));
          puVar13[1] = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                                CONCAT16((byte)((ulong)uVar20 >> 0x30) ^
                                         (byte)((ulong)uVar24 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                  (byte)((ulong)uVar24 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                           (byte)((ulong)uVar24 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                                    (byte)((ulong)uVar24 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar20 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar24 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar20 >> 8) ^ (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar20 ^ (byte)uVar24)))))));
          *puVar13 = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                              CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                 (byte)((ulong)uVar23 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                          (byte)((ulong)uVar23 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                   (byte)((ulong)uVar23 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar19 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar23 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) ^ (byte)((ulong)uVar23 >> 8),
                                                  (byte)uVar19 ^ (byte)uVar23)))))));
          puVar13 = puVar13 + 8;
          pbVar14 = pbVar14 + 0x40;
        } while (uVar12 != 0);
        if (uVar10 != uVar16) goto LAB_00419cb0;
      }
      uVar16 = *(ulong *)(param_1 + 0xc0);
    }
    if (uVar16 < param_5) {
      param_5 = param_5 - uVar16;
      if (0xf < param_5) {
        param_5 = 0x10;
      }
      if (((param_5 != 0) && (*pbVar7 = *pbVar7 ^ param_4[uVar16], param_5 != 1)) &&
         (*(byte *)(param_1 + 0xe9) = *(byte *)(param_1 + 0xe9) ^ param_4[uVar16 + 1], 2 < param_5))
      {
        lVar11 = 0;
        do {
          *(byte *)(param_1 + 0xea + lVar11) =
               *(byte *)(param_1 + 0xea + lVar11) ^ param_4[lVar11 + *(long *)(param_1 + 0xc0) + 2];
          uVar10 = lVar11 + 3;
          lVar11 = lVar11 + 1;
        } while (uVar10 < param_5);
      }
    }
    goto LAB_0041a540;
  }
  if (((param_4 != (byte *)0x0) || (param_2 != (byte *)0x0)) || (param_6 != (byte *)0x0)) {
    local_68 = 0x10;
    local_64 = 0x10;
    lVar11 = param_1 + 0x110;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar11,&local_64,lVar11,0x10);
    if (iVar6 == 0) {
      return false;
    }
    if (local_64 != 0x10) {
      return false;
    }
    *(undefined1 *)(param_1 + 0xfb) = 1;
    local_64 = 0x10;
    *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) ^ *(byte *)(param_1 + 0xf8);
    *(byte *)(param_1 + 0x121) = *(byte *)(param_1 + 0x121) ^ *(byte *)(param_1 + 0xf9);
    *(byte *)(param_1 + 0x122) = *(byte *)(param_1 + 0x122) ^ *(byte *)(param_1 + 0xfa);
    *(byte *)(param_1 + 0x123) = *(byte *)(param_1 + 0x123) ^ 1;
    uVar17 = *(undefined8 *)(param_1 + 0xfc);
    lVar1 = param_1 + 0x120;
    uVar18 = *(undefined8 *)(param_1 + 0x124);
    *(undefined8 *)(param_1 + 0x124) =
         CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                  CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                           CONCAT15((byte)((ulong)uVar18 >> 0x28) ^ (byte)((ulong)uVar17 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                             (byte)((ulong)uVar17 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                      (byte)((ulong)uVar17 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar18 >> 0x10) ^
                                                               (byte)((ulong)uVar17 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar18 >> 8) ^
                                                                        (byte)((ulong)uVar17 >> 8),
                                                                        (byte)uVar18 ^ (byte)uVar17)
                                                              ))))));
    *(byte *)(param_1 + 300) = *(byte *)(param_1 + 300) ^ *(byte *)(param_1 + 0x104);
    *(byte *)(param_1 + 0x12d) = *(byte *)(param_1 + 0x12d) ^ *(byte *)(param_1 + 0x105);
    *(byte *)(param_1 + 0x12e) = *(byte *)(param_1 + 0x12e) ^ *(byte *)(param_1 + 0x106);
    *(byte *)(param_1 + 0x12f) = *(byte *)(param_1 + 0x12f) ^ *(byte *)(param_1 + 0x107);
    iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar1,&local_64,lVar1,0x10);
    if (iVar6 == 0) {
      return false;
    }
    if (local_64 != 0x10) {
      return false;
    }
    cVar8 = '\x10';
    if (*(long *)(param_1 + 0xc0) != 0x10) {
      *(undefined1 *)(param_1 + 0xfb) = 2;
      local_64 = 0x10;
      *(byte *)(param_1 + 0x130) = *(byte *)(param_1 + 0x130) ^ *(byte *)(param_1 + 0xf8);
      *(byte *)(param_1 + 0x131) = *(byte *)(param_1 + 0x131) ^ *(byte *)(param_1 + 0xf9);
      *(byte *)(param_1 + 0x132) = *(byte *)(param_1 + 0x132) ^ *(byte *)(param_1 + 0xfa);
      *(byte *)(param_1 + 0x133) = *(byte *)(param_1 + 0x133) ^ 2;
      uVar17 = *(undefined8 *)(param_1 + 0xfc);
      uVar18 = *(undefined8 *)(param_1 + 0x134);
      *(ulong *)(param_1 + 0x134) =
           CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                    CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                             CONCAT15((byte)((ulong)uVar18 >> 0x28) ^ (byte)((ulong)uVar17 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                               (byte)((ulong)uVar17 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                        (byte)((ulong)uVar17 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar18 >> 0x10) ^
                                                                 (byte)((ulong)uVar17 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar18 >> 8)
                                                                          ^ (byte)((ulong)uVar17 >>
                                                                                  8),
                                                                          (byte)uVar18 ^
                                                                          (byte)uVar17)))))));
      *(byte *)(param_1 + 0x13c) = *(byte *)(param_1 + 0x13c) ^ *(byte *)(param_1 + 0x104);
      *(byte *)(param_1 + 0x13d) = *(byte *)(param_1 + 0x13d) ^ *(byte *)(param_1 + 0x105);
      *(byte *)(param_1 + 0x13e) = *(byte *)(param_1 + 0x13e) ^ *(byte *)(param_1 + 0x106);
      *(byte *)(param_1 + 0x13f) = *(byte *)(param_1 + 0x13f) ^ *(byte *)(param_1 + 0x107);
      iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),param_1 + 0x130,&local_64,param_1 + 0x130
                           ,0x10);
      if (iVar6 == 0) {
        return false;
      }
      if (local_64 != 0x10) {
        return false;
      }
      cVar8 = (char)*(undefined8 *)(param_1 + 0xc0);
    }
    uVar10 = 0;
    if (param_2 != (byte *)0x0) {
      uVar10 = param_3;
    }
    uVar16 = 0;
    if (param_6 != (byte *)0x0) {
      uVar16 = param_7;
    }
    uVar12 = 0;
    if (param_4 != (byte *)0x0) {
      uVar12 = param_5;
    }
    lVar9 = uVar12 + uVar10 + uVar16;
    bVar2 = (byte)((ulong)lVar9 >> 0x18);
    *(byte *)(param_1 + 0xf8) = bVar2;
    bVar3 = (byte)((ulong)lVar9 >> 0x10);
    *(byte *)(param_1 + 0xf9) = bVar3;
    bVar4 = (byte)((ulong)lVar9 >> 8);
    *(byte *)(param_1 + 0xfa) = bVar4;
    *(undefined2 *)(param_1 + 0xfc) = 0;
    *(undefined1 *)(param_1 + 0xfe) = 0;
    *(byte *)(param_1 + 0xfb) = (byte)lVar9;
    *(byte *)(param_1 + 0xff) = cVar8 + 0x10U;
    *(undefined8 *)(param_1 + 0x108) = 8;
    if ((param_2 != (byte *)0x0) && (uVar10 != 0)) {
      local_80 = uVar10 - 8;
      if (uVar10 < 8) {
        lVar9 = 8;
      }
      else {
        uVar17 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 0x100) = uVar17;
        local_64 = 0x10;
        *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) ^ bVar2;
        *(byte *)(param_1 + 0x111) = *(byte *)(param_1 + 0x111) ^ bVar3;
        *(byte *)(param_1 + 0x112) = *(byte *)(param_1 + 0x112) ^ bVar4;
        uVar18 = *(undefined8 *)(param_1 + 0x118);
        *(byte *)(param_1 + 0x113) = *(byte *)(param_1 + 0x113) ^ (byte)lVar9;
        *(byte *)(param_1 + 0x117) = *(byte *)(param_1 + 0x117) ^ cVar8 + 0x10U;
        *(ulong *)(param_1 + 0x118) =
             CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                      CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                               CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                        (byte)((ulong)uVar17 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                 (byte)((ulong)uVar17 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                          (byte)((ulong)uVar17 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar18 >> 0x10) ^
                                                                   (byte)((ulong)uVar17 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar18 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar17 >>
                                                                                  8),(byte)uVar18 ^
                                                                                     (byte)uVar17)))
                                                ))));
        iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar11,&local_64,lVar11,0x10);
        if (iVar6 == 0) {
          return false;
        }
        if (local_64 != 0x10) {
          return false;
        }
        uVar18 = *(undefined8 *)(param_1 + 0x100);
        uVar17 = *(undefined8 *)(param_1 + 0xf8);
        uVar20 = *(undefined8 *)(param_1 + 0x128);
        uVar19 = *(undefined8 *)(param_1 + 0x120);
        *(ulong *)(param_1 + 0x128) =
             CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                      CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                               CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                        (byte)((ulong)uVar18 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                 (byte)((ulong)uVar18 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                          (byte)((ulong)uVar18 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                   (byte)((ulong)uVar18 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar20 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  8),(byte)uVar20 ^
                                                                                     (byte)uVar18)))
                                                ))));
        *(ulong *)(param_1 + 0x120) =
             CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                      CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                               CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                        (byte)((ulong)uVar17 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                 (byte)((ulong)uVar17 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                          (byte)((ulong)uVar17 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                   (byte)((ulong)uVar17 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar19 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar17 >>
                                                                                  8),(byte)uVar19 ^
                                                                                     (byte)uVar17)))
                                                ))));
        iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar1,&local_64,lVar1,0x10);
        if (iVar6 == 0) {
          return false;
        }
        if (local_64 != 0x10) {
          return false;
        }
        if (*(long *)(param_1 + 0xc0) != 0x10) {
          local_64 = 0x10;
          uVar18 = *(undefined8 *)(param_1 + 0x100);
          uVar17 = *(undefined8 *)(param_1 + 0xf8);
          uVar20 = *(undefined8 *)(param_1 + 0x138);
          uVar19 = *(undefined8 *)(param_1 + 0x130);
          *(ulong *)(param_1 + 0x138) =
               CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                        CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                          (byte)((ulong)uVar18 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                   (byte)((ulong)uVar18 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                            (byte)((ulong)uVar18 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                     (byte)((ulong)uVar18 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar20
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar18
                                                                                    >> 8),
                                                                              (byte)uVar20 ^
                                                                              (byte)uVar18)))))));
          *(ulong *)(param_1 + 0x130) =
               CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                        CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                          (byte)((ulong)uVar17 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                   (byte)((ulong)uVar17 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                            (byte)((ulong)uVar17 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                     (byte)((ulong)uVar17 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar19
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar17
                                                                                    >> 8),
                                                                              (byte)uVar19 ^
                                                                              (byte)uVar17)))))));
          iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),param_1 + 0x130,&local_64,
                               param_1 + 0x130,0x10);
          if (iVar6 == 0) {
            return false;
          }
          if (local_64 != 0x10) {
            return false;
          }
        }
        *(undefined8 *)(param_1 + 0x108) = 0;
        if (local_80 < 0x10) {
          param_2 = param_2 + 8;
          uVar10 = local_80;
        }
        else {
          pbVar7 = param_2 + 0xb;
          do {
            param_2 = pbVar7;
            local_64 = 0x10;
            *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) ^ param_2[-3];
            *(byte *)(param_1 + 0x111) = *(byte *)(param_1 + 0x111) ^ param_2[-2];
            *(byte *)(param_1 + 0x112) = *(byte *)(param_1 + 0x112) ^ param_2[-1];
            *(byte *)(param_1 + 0x113) = *(byte *)(param_1 + 0x113) ^ *param_2;
            *(byte *)(param_1 + 0x114) = *(byte *)(param_1 + 0x114) ^ param_2[1];
            *(byte *)(param_1 + 0x115) = *(byte *)(param_1 + 0x115) ^ param_2[2];
            *(byte *)(param_1 + 0x116) = *(byte *)(param_1 + 0x116) ^ param_2[3];
            *(byte *)(param_1 + 0x117) = *(byte *)(param_1 + 0x117) ^ param_2[4];
            *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) ^ param_2[5];
            *(byte *)(param_1 + 0x119) = *(byte *)(param_1 + 0x119) ^ param_2[6];
            *(byte *)(param_1 + 0x11a) = *(byte *)(param_1 + 0x11a) ^ param_2[7];
            *(byte *)(param_1 + 0x11b) = *(byte *)(param_1 + 0x11b) ^ param_2[8];
            *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) ^ param_2[9];
            *(byte *)(param_1 + 0x11d) = *(byte *)(param_1 + 0x11d) ^ param_2[10];
            *(byte *)(param_1 + 0x11e) = *(byte *)(param_1 + 0x11e) ^ param_2[0xb];
            *(byte *)(param_1 + 0x11f) = *(byte *)(param_1 + 0x11f) ^ param_2[0xc];
            iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar11,&local_64,lVar11,0x10);
            if (iVar6 == 0) {
              return false;
            }
            if (local_64 != 0x10) {
              return false;
            }
            local_64 = 0x10;
            *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) ^ param_2[-3];
            *(byte *)(param_1 + 0x121) = *(byte *)(param_1 + 0x121) ^ param_2[-2];
            *(byte *)(param_1 + 0x122) = *(byte *)(param_1 + 0x122) ^ param_2[-1];
            *(byte *)(param_1 + 0x123) = *(byte *)(param_1 + 0x123) ^ *param_2;
            *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) ^ param_2[1];
            *(byte *)(param_1 + 0x125) = *(byte *)(param_1 + 0x125) ^ param_2[2];
            *(byte *)(param_1 + 0x126) = *(byte *)(param_1 + 0x126) ^ param_2[3];
            *(byte *)(param_1 + 0x127) = *(byte *)(param_1 + 0x127) ^ param_2[4];
            *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) ^ param_2[5];
            *(byte *)(param_1 + 0x129) = *(byte *)(param_1 + 0x129) ^ param_2[6];
            *(byte *)(param_1 + 0x12a) = *(byte *)(param_1 + 0x12a) ^ param_2[7];
            *(byte *)(param_1 + 299) = *(byte *)(param_1 + 299) ^ param_2[8];
            *(byte *)(param_1 + 300) = *(byte *)(param_1 + 300) ^ param_2[9];
            *(byte *)(param_1 + 0x12d) = *(byte *)(param_1 + 0x12d) ^ param_2[10];
            *(byte *)(param_1 + 0x12e) = *(byte *)(param_1 + 0x12e) ^ param_2[0xb];
            *(byte *)(param_1 + 0x12f) = *(byte *)(param_1 + 0x12f) ^ param_2[0xc];
            iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar1,&local_64,lVar1,0x10);
            if (iVar6 == 0) {
              return false;
            }
            if (local_64 != 0x10) {
              return false;
            }
            if (*(long *)(param_1 + 0xc0) != 0x10) {
              local_64 = 0x10;
              *(byte *)(param_1 + 0x130) = *(byte *)(param_1 + 0x130) ^ param_2[-3];
              *(byte *)(param_1 + 0x131) = *(byte *)(param_1 + 0x131) ^ param_2[-2];
              *(byte *)(param_1 + 0x132) = *(byte *)(param_1 + 0x132) ^ param_2[-1];
              *(byte *)(param_1 + 0x133) = *(byte *)(param_1 + 0x133) ^ *param_2;
              *(byte *)(param_1 + 0x134) = *(byte *)(param_1 + 0x134) ^ param_2[1];
              *(byte *)(param_1 + 0x135) = *(byte *)(param_1 + 0x135) ^ param_2[2];
              *(byte *)(param_1 + 0x136) = *(byte *)(param_1 + 0x136) ^ param_2[3];
              *(byte *)(param_1 + 0x137) = *(byte *)(param_1 + 0x137) ^ param_2[4];
              *(byte *)(param_1 + 0x138) = *(byte *)(param_1 + 0x138) ^ param_2[5];
              *(byte *)(param_1 + 0x139) = *(byte *)(param_1 + 0x139) ^ param_2[6];
              *(byte *)(param_1 + 0x13a) = *(byte *)(param_1 + 0x13a) ^ param_2[7];
              *(byte *)(param_1 + 0x13b) = *(byte *)(param_1 + 0x13b) ^ param_2[8];
              *(byte *)(param_1 + 0x13c) = *(byte *)(param_1 + 0x13c) ^ param_2[9];
              *(byte *)(param_1 + 0x13d) = *(byte *)(param_1 + 0x13d) ^ param_2[10];
              *(byte *)(param_1 + 0x13e) = *(byte *)(param_1 + 0x13e) ^ param_2[0xb];
              *(byte *)(param_1 + 0x13f) = *(byte *)(param_1 + 0x13f) ^ param_2[0xc];
              iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),param_1 + 0x130,&local_64,
                                   param_1 + 0x130,0x10);
              if (iVar6 == 0) {
                return false;
              }
              if (local_64 != 0x10) {
                return false;
              }
            }
            local_80 = local_80 - 0x10;
            pbVar7 = param_2 + 0x10;
          } while (0xf < local_80);
          param_2 = param_2 + 0xd;
          uVar10 = local_80;
        }
        if (uVar10 == 0) goto LAB_00419fc8;
        lVar9 = *(long *)(param_1 + 0x108);
      }
      memcpy((void *)(param_1 + lVar9 + 0xf8),param_2,uVar10);
      *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + uVar10;
    }
LAB_00419fc8:
    if ((param_6 != (byte *)0x0) && (uVar16 != 0)) {
      lVar9 = *(long *)(param_1 + 0x108);
      if (lVar9 != 0) {
        uVar10 = 0x10 - lVar9;
        if (uVar10 <= uVar16) {
          memcpy((void *)(param_1 + lVar9 + 0xf8),param_6,uVar10);
          local_64 = 0x10;
          uVar18 = *(undefined8 *)(param_1 + 0x100);
          uVar17 = *(undefined8 *)(param_1 + 0xf8);
          uVar20 = *(undefined8 *)(param_1 + 0x118);
          uVar19 = *(undefined8 *)(param_1 + 0x110);
          *(ulong *)(param_1 + 0x118) =
               CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                        CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                          (byte)((ulong)uVar18 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                   (byte)((ulong)uVar18 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                            (byte)((ulong)uVar18 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                     (byte)((ulong)uVar18 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar20
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar18
                                                                                    >> 8),
                                                                              (byte)uVar20 ^
                                                                              (byte)uVar18)))))));
          *(ulong *)(param_1 + 0x110) =
               CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                        CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                          (byte)((ulong)uVar17 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                   (byte)((ulong)uVar17 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                            (byte)((ulong)uVar17 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                     (byte)((ulong)uVar17 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar19
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar17
                                                                                    >> 8),
                                                                              (byte)uVar19 ^
                                                                              (byte)uVar17)))))));
          iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar11,&local_64,lVar11,0x10);
          if (iVar6 == 0) {
            return false;
          }
          if (local_64 != 0x10) {
            return false;
          }
          uVar18 = *(undefined8 *)(param_1 + 0x100);
          uVar17 = *(undefined8 *)(param_1 + 0xf8);
          uVar20 = *(undefined8 *)(param_1 + 0x128);
          uVar19 = *(undefined8 *)(param_1 + 0x120);
          *(ulong *)(param_1 + 0x128) =
               CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                        CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                          (byte)((ulong)uVar18 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                   (byte)((ulong)uVar18 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                            (byte)((ulong)uVar18 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                     (byte)((ulong)uVar18 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar20
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar18
                                                                                    >> 8),
                                                                              (byte)uVar20 ^
                                                                              (byte)uVar18)))))));
          *(ulong *)(param_1 + 0x120) =
               CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                        CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                          (byte)((ulong)uVar17 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                   (byte)((ulong)uVar17 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                            (byte)((ulong)uVar17 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                     (byte)((ulong)uVar17 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar19
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar17
                                                                                    >> 8),
                                                                              (byte)uVar19 ^
                                                                              (byte)uVar17)))))));
          iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar1,&local_64,lVar1,0x10);
          if (iVar6 == 0) {
            return false;
          }
          if (local_64 != 0x10) {
            return false;
          }
          if (*(long *)(param_1 + 0xc0) != 0x10) {
            local_64 = 0x10;
            uVar18 = *(undefined8 *)(param_1 + 0x100);
            uVar17 = *(undefined8 *)(param_1 + 0xf8);
            uVar20 = *(undefined8 *)(param_1 + 0x138);
            uVar19 = *(undefined8 *)(param_1 + 0x130);
            *(ulong *)(param_1 + 0x138) =
                 CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                          CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                            (byte)((ulong)uVar18 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                     (byte)((ulong)uVar18 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                              (byte)((ulong)uVar18 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar20 >> 0x10)
                                                                       ^ (byte)((ulong)uVar18 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar20
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar18
                                                                                      >> 8),
                                                                                (byte)uVar20 ^
                                                                                (byte)uVar18)))))));
            *(ulong *)(param_1 + 0x130) =
                 CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                          CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                            (byte)((ulong)uVar17 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                     (byte)((ulong)uVar17 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                              (byte)((ulong)uVar17 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar19 >> 0x10)
                                                                       ^ (byte)((ulong)uVar17 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar19
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar17
                                                                                      >> 8),
                                                                                (byte)uVar19 ^
                                                                                (byte)uVar17)))))));
            iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),param_1 + 0x130,&local_64,
                                 param_1 + 0x130,0x10);
            if (iVar6 == 0) {
              return false;
            }
            if (local_64 != 0x10) {
              return false;
            }
          }
          param_6 = param_6 + uVar10;
          *(undefined8 *)(param_1 + 0x108) = 0;
          uVar16 = uVar16 - uVar10;
        }
      }
      if (0xf < uVar16) {
        do {
          local_64 = 0x10;
          *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) ^ *param_6;
          *(byte *)(param_1 + 0x111) = *(byte *)(param_1 + 0x111) ^ param_6[1];
          *(byte *)(param_1 + 0x112) = *(byte *)(param_1 + 0x112) ^ param_6[2];
          *(byte *)(param_1 + 0x113) = *(byte *)(param_1 + 0x113) ^ param_6[3];
          *(byte *)(param_1 + 0x114) = *(byte *)(param_1 + 0x114) ^ param_6[4];
          *(byte *)(param_1 + 0x115) = *(byte *)(param_1 + 0x115) ^ param_6[5];
          *(byte *)(param_1 + 0x116) = *(byte *)(param_1 + 0x116) ^ param_6[6];
          *(byte *)(param_1 + 0x117) = *(byte *)(param_1 + 0x117) ^ param_6[7];
          *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) ^ param_6[8];
          *(byte *)(param_1 + 0x119) = *(byte *)(param_1 + 0x119) ^ param_6[9];
          *(byte *)(param_1 + 0x11a) = *(byte *)(param_1 + 0x11a) ^ param_6[10];
          *(byte *)(param_1 + 0x11b) = *(byte *)(param_1 + 0x11b) ^ param_6[0xb];
          *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) ^ param_6[0xc];
          *(byte *)(param_1 + 0x11d) = *(byte *)(param_1 + 0x11d) ^ param_6[0xd];
          *(byte *)(param_1 + 0x11e) = *(byte *)(param_1 + 0x11e) ^ param_6[0xe];
          *(byte *)(param_1 + 0x11f) = *(byte *)(param_1 + 0x11f) ^ param_6[0xf];
          iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar11,&local_64,lVar11,0x10);
          if (iVar6 == 0) {
            return false;
          }
          if (local_64 != 0x10) {
            return false;
          }
          local_64 = 0x10;
          *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) ^ *param_6;
          *(byte *)(param_1 + 0x121) = *(byte *)(param_1 + 0x121) ^ param_6[1];
          *(byte *)(param_1 + 0x122) = *(byte *)(param_1 + 0x122) ^ param_6[2];
          *(byte *)(param_1 + 0x123) = *(byte *)(param_1 + 0x123) ^ param_6[3];
          *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) ^ param_6[4];
          *(byte *)(param_1 + 0x125) = *(byte *)(param_1 + 0x125) ^ param_6[5];
          *(byte *)(param_1 + 0x126) = *(byte *)(param_1 + 0x126) ^ param_6[6];
          *(byte *)(param_1 + 0x127) = *(byte *)(param_1 + 0x127) ^ param_6[7];
          *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) ^ param_6[8];
          *(byte *)(param_1 + 0x129) = *(byte *)(param_1 + 0x129) ^ param_6[9];
          *(byte *)(param_1 + 0x12a) = *(byte *)(param_1 + 0x12a) ^ param_6[10];
          *(byte *)(param_1 + 299) = *(byte *)(param_1 + 299) ^ param_6[0xb];
          *(byte *)(param_1 + 300) = *(byte *)(param_1 + 300) ^ param_6[0xc];
          *(byte *)(param_1 + 0x12d) = *(byte *)(param_1 + 0x12d) ^ param_6[0xd];
          *(byte *)(param_1 + 0x12e) = *(byte *)(param_1 + 0x12e) ^ param_6[0xe];
          *(byte *)(param_1 + 0x12f) = *(byte *)(param_1 + 0x12f) ^ param_6[0xf];
          iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar1,&local_64,lVar1,0x10);
          if (iVar6 == 0) {
            return false;
          }
          if (local_64 != 0x10) {
            return false;
          }
          if (*(long *)(param_1 + 0xc0) != 0x10) {
            local_64 = 0x10;
            *(byte *)(param_1 + 0x130) = *(byte *)(param_1 + 0x130) ^ *param_6;
            *(byte *)(param_1 + 0x131) = *(byte *)(param_1 + 0x131) ^ param_6[1];
            *(byte *)(param_1 + 0x132) = *(byte *)(param_1 + 0x132) ^ param_6[2];
            *(byte *)(param_1 + 0x133) = *(byte *)(param_1 + 0x133) ^ param_6[3];
            *(byte *)(param_1 + 0x134) = *(byte *)(param_1 + 0x134) ^ param_6[4];
            *(byte *)(param_1 + 0x135) = *(byte *)(param_1 + 0x135) ^ param_6[5];
            *(byte *)(param_1 + 0x136) = *(byte *)(param_1 + 0x136) ^ param_6[6];
            *(byte *)(param_1 + 0x137) = *(byte *)(param_1 + 0x137) ^ param_6[7];
            *(byte *)(param_1 + 0x138) = *(byte *)(param_1 + 0x138) ^ param_6[8];
            *(byte *)(param_1 + 0x139) = *(byte *)(param_1 + 0x139) ^ param_6[9];
            *(byte *)(param_1 + 0x13a) = *(byte *)(param_1 + 0x13a) ^ param_6[10];
            *(byte *)(param_1 + 0x13b) = *(byte *)(param_1 + 0x13b) ^ param_6[0xb];
            *(byte *)(param_1 + 0x13c) = *(byte *)(param_1 + 0x13c) ^ param_6[0xc];
            *(byte *)(param_1 + 0x13d) = *(byte *)(param_1 + 0x13d) ^ param_6[0xd];
            *(byte *)(param_1 + 0x13e) = *(byte *)(param_1 + 0x13e) ^ param_6[0xe];
            *(byte *)(param_1 + 0x13f) = *(byte *)(param_1 + 0x13f) ^ param_6[0xf];
            iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),param_1 + 0x130,&local_64,
                                 param_1 + 0x130,0x10);
            if (iVar6 == 0) {
              return false;
            }
            if (local_64 != 0x10) {
              return false;
            }
          }
          uVar16 = uVar16 - 0x10;
          param_6 = param_6 + 0x10;
        } while (0xf < uVar16);
      }
      if (uVar16 != 0) {
        memcpy((void *)(param_1 + *(long *)(param_1 + 0x108) + 0xf8),param_6,uVar16);
        *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + uVar16;
      }
    }
    if ((param_4 == (byte *)0x0) || (uVar12 == 0)) {
LAB_0041b088:
      lVar9 = *(long *)(param_1 + 0x108);
      if (lVar9 == 0) goto LAB_0041b0a0;
LAB_0041b090:
      lVar5 = -lVar9;
      uVar10 = lVar5 + 0x10;
      if (1 < uVar10) goto LAB_0041b0a0;
      memcpy((void *)(param_1 + lVar9 + 0xf8),&DAT_03a04574,uVar10);
      local_64 = 0x10;
      uVar18 = *(undefined8 *)(param_1 + 0x100);
      uVar17 = *(undefined8 *)(param_1 + 0xf8);
      uVar20 = *(undefined8 *)(param_1 + 0x118);
      uVar19 = *(undefined8 *)(param_1 + 0x110);
      *(ulong *)(param_1 + 0x118) =
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
      *(ulong *)(param_1 + 0x110) =
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
      iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar11,&local_64,lVar11,0x10);
      if (iVar6 == 0) {
        return false;
      }
      if (local_64 != 0x10) {
        return false;
      }
      uVar18 = *(undefined8 *)(param_1 + 0x100);
      uVar17 = *(undefined8 *)(param_1 + 0xf8);
      uVar20 = *(undefined8 *)(param_1 + 0x128);
      uVar19 = *(undefined8 *)(param_1 + 0x120);
      *(ulong *)(param_1 + 0x128) =
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
      *(ulong *)(param_1 + 0x120) =
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
      iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar1,&local_64,lVar1,0x10);
      if (iVar6 == 0) {
        return false;
      }
      if (local_64 != 0x10) {
        return false;
      }
      if (*(long *)(param_1 + 0xc0) != 0x10) {
        local_64 = 0x10;
        uVar18 = *(undefined8 *)(param_1 + 0x100);
        uVar17 = *(undefined8 *)(param_1 + 0xf8);
        uVar20 = *(undefined8 *)(param_1 + 0x138);
        uVar19 = *(undefined8 *)(param_1 + 0x130);
        *(ulong *)(param_1 + 0x138) =
             CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                      CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                               CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                        (byte)((ulong)uVar18 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                 (byte)((ulong)uVar18 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                          (byte)((ulong)uVar18 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                   (byte)((ulong)uVar18 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar20 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  8),(byte)uVar20 ^
                                                                                     (byte)uVar18)))
                                                ))));
        *(ulong *)(param_1 + 0x130) =
             CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                      CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                               CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                        (byte)((ulong)uVar17 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                 (byte)((ulong)uVar17 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                          (byte)((ulong)uVar17 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                   (byte)((ulong)uVar17 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar19 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar17 >>
                                                                                  8),(byte)uVar19 ^
                                                                                     (byte)uVar17)))
                                                ))));
        iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),param_1 + 0x130,&local_64,
                             param_1 + 0x130,0x10);
        if (iVar6 == 0) {
          return false;
        }
        if (local_64 != 0x10) {
          return false;
        }
      }
      __n = lVar9 - 0xf;
      *(undefined8 *)(param_1 + 0x108) = 0;
      if (__n != 0) {
        lVar9 = 0;
        pbVar7 = &BYTE_03a04584 + lVar5;
        goto LAB_0041b0ac;
      }
    }
    else {
      lVar9 = *(long *)(param_1 + 0x108);
      if (lVar9 != 0) {
        uVar10 = 0x10 - lVar9;
        if (uVar10 <= uVar12) {
          memcpy((void *)(param_1 + lVar9 + 0xf8),param_4,uVar10);
          local_64 = 0x10;
          uVar18 = *(undefined8 *)(param_1 + 0x100);
          uVar17 = *(undefined8 *)(param_1 + 0xf8);
          uVar20 = *(undefined8 *)(param_1 + 0x118);
          uVar19 = *(undefined8 *)(param_1 + 0x110);
          *(ulong *)(param_1 + 0x118) =
               CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                        CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                          (byte)((ulong)uVar18 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                   (byte)((ulong)uVar18 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                            (byte)((ulong)uVar18 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                     (byte)((ulong)uVar18 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar20
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar18
                                                                                    >> 8),
                                                                              (byte)uVar20 ^
                                                                              (byte)uVar18)))))));
          *(ulong *)(param_1 + 0x110) =
               CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                        CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                          (byte)((ulong)uVar17 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                   (byte)((ulong)uVar17 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                            (byte)((ulong)uVar17 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                     (byte)((ulong)uVar17 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar19
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar17
                                                                                    >> 8),
                                                                              (byte)uVar19 ^
                                                                              (byte)uVar17)))))));
          iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar11,&local_64,lVar11,0x10);
          if (iVar6 == 0) {
            return false;
          }
          if (local_64 != 0x10) {
            return false;
          }
          uVar18 = *(undefined8 *)(param_1 + 0x100);
          uVar17 = *(undefined8 *)(param_1 + 0xf8);
          uVar20 = *(undefined8 *)(param_1 + 0x128);
          uVar19 = *(undefined8 *)(param_1 + 0x120);
          *(ulong *)(param_1 + 0x128) =
               CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                        CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                          (byte)((ulong)uVar18 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                   (byte)((ulong)uVar18 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                            (byte)((ulong)uVar18 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                     (byte)((ulong)uVar18 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar20
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar18
                                                                                    >> 8),
                                                                              (byte)uVar20 ^
                                                                              (byte)uVar18)))))));
          *(ulong *)(param_1 + 0x120) =
               CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                        CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                          (byte)((ulong)uVar17 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                   (byte)((ulong)uVar17 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                            (byte)((ulong)uVar17 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                     (byte)((ulong)uVar17 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar19
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar17
                                                                                    >> 8),
                                                                              (byte)uVar19 ^
                                                                              (byte)uVar17)))))));
          iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar1,&local_64,lVar1,0x10);
          if (iVar6 == 0) {
            return false;
          }
          if (local_64 != 0x10) {
            return false;
          }
          if (*(long *)(param_1 + 0xc0) != 0x10) {
            local_64 = 0x10;
            uVar18 = *(undefined8 *)(param_1 + 0x100);
            uVar17 = *(undefined8 *)(param_1 + 0xf8);
            uVar20 = *(undefined8 *)(param_1 + 0x138);
            uVar19 = *(undefined8 *)(param_1 + 0x130);
            *(ulong *)(param_1 + 0x138) =
                 CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                          CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                            (byte)((ulong)uVar18 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                     (byte)((ulong)uVar18 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                              (byte)((ulong)uVar18 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar20 >> 0x10)
                                                                       ^ (byte)((ulong)uVar18 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar20
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar18
                                                                                      >> 8),
                                                                                (byte)uVar20 ^
                                                                                (byte)uVar18)))))));
            *(ulong *)(param_1 + 0x130) =
                 CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                          CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                            (byte)((ulong)uVar17 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                     (byte)((ulong)uVar17 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                              (byte)((ulong)uVar17 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar19 >> 0x10)
                                                                       ^ (byte)((ulong)uVar17 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar19
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar17
                                                                                      >> 8),
                                                                                (byte)uVar19 ^
                                                                                (byte)uVar17)))))));
            iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),param_1 + 0x130,&local_64,
                                 param_1 + 0x130,0x10);
            if (iVar6 == 0) {
              return false;
            }
            if (local_64 != 0x10) {
              return false;
            }
          }
          param_4 = param_4 + uVar10;
          *(undefined8 *)(param_1 + 0x108) = 0;
          uVar12 = uVar12 - uVar10;
        }
      }
      if (0xf < uVar12) {
        do {
          local_64 = 0x10;
          *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) ^ *param_4;
          *(byte *)(param_1 + 0x111) = *(byte *)(param_1 + 0x111) ^ param_4[1];
          *(byte *)(param_1 + 0x112) = *(byte *)(param_1 + 0x112) ^ param_4[2];
          *(byte *)(param_1 + 0x113) = *(byte *)(param_1 + 0x113) ^ param_4[3];
          *(byte *)(param_1 + 0x114) = *(byte *)(param_1 + 0x114) ^ param_4[4];
          *(byte *)(param_1 + 0x115) = *(byte *)(param_1 + 0x115) ^ param_4[5];
          *(byte *)(param_1 + 0x116) = *(byte *)(param_1 + 0x116) ^ param_4[6];
          *(byte *)(param_1 + 0x117) = *(byte *)(param_1 + 0x117) ^ param_4[7];
          *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) ^ param_4[8];
          *(byte *)(param_1 + 0x119) = *(byte *)(param_1 + 0x119) ^ param_4[9];
          *(byte *)(param_1 + 0x11a) = *(byte *)(param_1 + 0x11a) ^ param_4[10];
          *(byte *)(param_1 + 0x11b) = *(byte *)(param_1 + 0x11b) ^ param_4[0xb];
          *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) ^ param_4[0xc];
          *(byte *)(param_1 + 0x11d) = *(byte *)(param_1 + 0x11d) ^ param_4[0xd];
          *(byte *)(param_1 + 0x11e) = *(byte *)(param_1 + 0x11e) ^ param_4[0xe];
          *(byte *)(param_1 + 0x11f) = *(byte *)(param_1 + 0x11f) ^ param_4[0xf];
          iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar11,&local_64,lVar11,0x10);
          if (iVar6 == 0) {
            return false;
          }
          if (local_64 != 0x10) {
            return false;
          }
          local_64 = 0x10;
          *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) ^ *param_4;
          *(byte *)(param_1 + 0x121) = *(byte *)(param_1 + 0x121) ^ param_4[1];
          *(byte *)(param_1 + 0x122) = *(byte *)(param_1 + 0x122) ^ param_4[2];
          *(byte *)(param_1 + 0x123) = *(byte *)(param_1 + 0x123) ^ param_4[3];
          *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) ^ param_4[4];
          *(byte *)(param_1 + 0x125) = *(byte *)(param_1 + 0x125) ^ param_4[5];
          *(byte *)(param_1 + 0x126) = *(byte *)(param_1 + 0x126) ^ param_4[6];
          *(byte *)(param_1 + 0x127) = *(byte *)(param_1 + 0x127) ^ param_4[7];
          *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) ^ param_4[8];
          *(byte *)(param_1 + 0x129) = *(byte *)(param_1 + 0x129) ^ param_4[9];
          *(byte *)(param_1 + 0x12a) = *(byte *)(param_1 + 0x12a) ^ param_4[10];
          *(byte *)(param_1 + 299) = *(byte *)(param_1 + 299) ^ param_4[0xb];
          *(byte *)(param_1 + 300) = *(byte *)(param_1 + 300) ^ param_4[0xc];
          *(byte *)(param_1 + 0x12d) = *(byte *)(param_1 + 0x12d) ^ param_4[0xd];
          *(byte *)(param_1 + 0x12e) = *(byte *)(param_1 + 0x12e) ^ param_4[0xe];
          *(byte *)(param_1 + 0x12f) = *(byte *)(param_1 + 0x12f) ^ param_4[0xf];
          iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar1,&local_64,lVar1,0x10);
          if (iVar6 == 0) {
            return false;
          }
          if (local_64 != 0x10) {
            return false;
          }
          if (*(long *)(param_1 + 0xc0) != 0x10) {
            local_64 = 0x10;
            *(byte *)(param_1 + 0x130) = *(byte *)(param_1 + 0x130) ^ *param_4;
            *(byte *)(param_1 + 0x131) = *(byte *)(param_1 + 0x131) ^ param_4[1];
            *(byte *)(param_1 + 0x132) = *(byte *)(param_1 + 0x132) ^ param_4[2];
            *(byte *)(param_1 + 0x133) = *(byte *)(param_1 + 0x133) ^ param_4[3];
            *(byte *)(param_1 + 0x134) = *(byte *)(param_1 + 0x134) ^ param_4[4];
            *(byte *)(param_1 + 0x135) = *(byte *)(param_1 + 0x135) ^ param_4[5];
            *(byte *)(param_1 + 0x136) = *(byte *)(param_1 + 0x136) ^ param_4[6];
            *(byte *)(param_1 + 0x137) = *(byte *)(param_1 + 0x137) ^ param_4[7];
            *(byte *)(param_1 + 0x138) = *(byte *)(param_1 + 0x138) ^ param_4[8];
            *(byte *)(param_1 + 0x139) = *(byte *)(param_1 + 0x139) ^ param_4[9];
            *(byte *)(param_1 + 0x13a) = *(byte *)(param_1 + 0x13a) ^ param_4[10];
            *(byte *)(param_1 + 0x13b) = *(byte *)(param_1 + 0x13b) ^ param_4[0xb];
            *(byte *)(param_1 + 0x13c) = *(byte *)(param_1 + 0x13c) ^ param_4[0xc];
            *(byte *)(param_1 + 0x13d) = *(byte *)(param_1 + 0x13d) ^ param_4[0xd];
            *(byte *)(param_1 + 0x13e) = *(byte *)(param_1 + 0x13e) ^ param_4[0xe];
            *(byte *)(param_1 + 0x13f) = *(byte *)(param_1 + 0x13f) ^ param_4[0xf];
            iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),param_1 + 0x130,&local_64,
                                 param_1 + 0x130,0x10);
            if (iVar6 == 0) {
              return false;
            }
            if (local_64 != 0x10) {
              return false;
            }
          }
          uVar12 = uVar12 - 0x10;
          param_4 = param_4 + 0x10;
        } while (0xf < uVar12);
      }
      if (uVar12 == 0) goto LAB_0041b088;
      memcpy((void *)(param_1 + *(long *)(param_1 + 0x108) + 0xf8),param_4,uVar12);
      lVar9 = *(long *)(param_1 + 0x108) + uVar12;
      *(long *)(param_1 + 0x108) = lVar9;
      if (lVar9 != 0) goto LAB_0041b090;
LAB_0041b0a0:
      __n = 1;
      pbVar7 = &DAT_03a04574;
LAB_0041b0ac:
      memcpy((void *)(param_1 + lVar9 + 0xf8),pbVar7,__n);
      lVar9 = *(long *)(param_1 + 0x108) + __n;
      *(long *)(param_1 + 0x108) = lVar9;
      if (lVar9 != 0) {
        memset((void *)(param_1 + lVar9 + 0xf8),0,0x10 - lVar9);
        local_64 = 0x10;
        uVar18 = *(undefined8 *)(param_1 + 0x100);
        uVar17 = *(undefined8 *)(param_1 + 0xf8);
        uVar20 = *(undefined8 *)(param_1 + 0x118);
        uVar19 = *(undefined8 *)(param_1 + 0x110);
        *(ulong *)(param_1 + 0x118) =
             CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                      CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                               CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                        (byte)((ulong)uVar18 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                 (byte)((ulong)uVar18 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                          (byte)((ulong)uVar18 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                   (byte)((ulong)uVar18 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar20 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  8),(byte)uVar20 ^
                                                                                     (byte)uVar18)))
                                                ))));
        *(ulong *)(param_1 + 0x110) =
             CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                      CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                               CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                        (byte)((ulong)uVar17 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                 (byte)((ulong)uVar17 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                          (byte)((ulong)uVar17 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                   (byte)((ulong)uVar17 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar19 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar17 >>
                                                                                  8),(byte)uVar19 ^
                                                                                     (byte)uVar17)))
                                                ))));
        iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar11,&local_64,lVar11,0x10);
        if (iVar6 == 0) {
          return false;
        }
        if (local_64 != 0x10) {
          return false;
        }
        uVar18 = *(undefined8 *)(param_1 + 0x100);
        uVar17 = *(undefined8 *)(param_1 + 0xf8);
        uVar20 = *(undefined8 *)(param_1 + 0x128);
        uVar19 = *(undefined8 *)(param_1 + 0x120);
        *(ulong *)(param_1 + 0x128) =
             CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                      CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                               CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                        (byte)((ulong)uVar18 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                 (byte)((ulong)uVar18 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                          (byte)((ulong)uVar18 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                   (byte)((ulong)uVar18 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar20 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  8),(byte)uVar20 ^
                                                                                     (byte)uVar18)))
                                                ))));
        *(ulong *)(param_1 + 0x120) =
             CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                      CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                               CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                        (byte)((ulong)uVar17 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                 (byte)((ulong)uVar17 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                          (byte)((ulong)uVar17 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                   (byte)((ulong)uVar17 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar19 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar17 >>
                                                                                  8),(byte)uVar19 ^
                                                                                     (byte)uVar17)))
                                                ))));
        iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),lVar1,&local_64,lVar1,0x10);
        if (iVar6 == 0) {
          return false;
        }
        if (local_64 != 0x10) {
          return false;
        }
        if (*(long *)(param_1 + 0xc0) != 0x10) {
          local_64 = 0x10;
          uVar18 = *(undefined8 *)(param_1 + 0x100);
          uVar17 = *(undefined8 *)(param_1 + 0xf8);
          uVar20 = *(undefined8 *)(param_1 + 0x138);
          uVar19 = *(undefined8 *)(param_1 + 0x130);
          *(ulong *)(param_1 + 0x138) =
               CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                        CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                          (byte)((ulong)uVar18 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                   (byte)((ulong)uVar18 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                            (byte)((ulong)uVar18 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                     (byte)((ulong)uVar18 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar20
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar18
                                                                                    >> 8),
                                                                              (byte)uVar20 ^
                                                                              (byte)uVar18)))))));
          *(ulong *)(param_1 + 0x130) =
               CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                        CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                          (byte)((ulong)uVar17 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                   (byte)((ulong)uVar17 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                            (byte)((ulong)uVar17 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                     (byte)((ulong)uVar17 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar19
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar17
                                                                                    >> 8),
                                                                              (byte)uVar19 ^
                                                                              (byte)uVar17)))))));
          iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xb0),param_1 + 0x130,&local_64,
                               param_1 + 0x130,0x10);
          if (iVar6 == 0) {
            return false;
          }
          if (local_64 != 0x10) {
            return false;
          }
        }
      }
    }
    iVar6 = FUN_0041b5e0(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb8),0,lVar11,0,
                         1);
    if (((((iVar6 == 0) ||
          (iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xa8),lVar11,&local_68,
                                param_1 + 0xa8 + *(long *)(param_1 + 0xc0) + 0x68,0x10), iVar6 == 0)
          ) || (local_68 != 0x10)) ||
        ((iVar6 = FUN_0041ba00(*puVar13,lVar1,&local_68,lVar11,0x10), iVar6 == 0 ||
         (local_68 != 0x10)))) ||
       ((*(long *)(param_1 + 0xc0) != 0x10 &&
        ((iVar6 = FUN_0041ba00(*(undefined8 *)(param_1 + 0xa8),param_1 + 0x130,&local_68,lVar1,0x10)
         , iVar6 == 0 || (local_68 != 0x10)))))) {
      return false;
    }
  }
  if ((param_3 == 0) || (uVar10 = *(ulong *)(param_1 + 0x90), uVar10 == 0)) goto LAB_0041a540;
  uVar12 = *(ulong *)(param_1 + 0xc0);
  uVar16 = uVar10;
  if (uVar12 <= uVar10) {
    uVar16 = uVar12;
  }
  if (uVar16 != 0) {
    if (uVar16 < 0x40) {
      uVar12 = 0;
LAB_0041a498:
      do {
        lVar11 = param_1 + uVar12;
        uVar12 = uVar12 + 1;
        *(byte *)(lVar11 + 200) = *(byte *)(lVar11 + 200) ^ *(byte *)(lVar11 + 0x110);
      } while (uVar12 < uVar16);
    }
    else {
      uVar12 = uVar16 & 0xffffffffffffffc0;
      puVar13 = (undefined8 *)(param_1 + 200);
      uVar15 = uVar12;
      do {
        uVar23 = puVar13[1];
        uVar21 = *puVar13;
        uVar27 = puVar13[3];
        uVar25 = puVar13[2];
        uVar15 = uVar15 - 0x40;
        uVar18 = puVar13[10];
        uVar17 = puVar13[9];
        uVar20 = puVar13[0xc];
        uVar19 = puVar13[0xb];
        uVar24 = puVar13[5];
        uVar22 = puVar13[4];
        uVar28 = puVar13[7];
        uVar26 = puVar13[6];
        puVar13[1] = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                              CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                 (byte)((ulong)uVar18 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                          (byte)((ulong)uVar18 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                                   (byte)((ulong)uVar18 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar23 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar23 ^ (byte)uVar18)))))));
        *puVar13 = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                            CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                              (byte)((ulong)uVar17 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                       (byte)((ulong)uVar17 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                (byte)((ulong)uVar17 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar21 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar17 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar17)))))));
        puVar13[3] = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                              CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                 (byte)((ulong)uVar20 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                          (byte)((ulong)uVar20 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                                   (byte)((ulong)uVar20 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar27 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar20 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar27 >> 8) ^ (byte)((ulong)uVar20 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar20)))))));
        puVar13[2] = CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                              CONCAT16((byte)((ulong)uVar25 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                 (byte)((ulong)uVar19 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                          (byte)((ulong)uVar19 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar25 >> 0x18) ^
                                                                   (byte)((ulong)uVar19 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar25 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar19 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar25 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar25 ^ (byte)uVar19)))))));
        uVar18 = puVar13[0xe];
        uVar17 = puVar13[0xd];
        uVar20 = puVar13[0x10];
        uVar19 = puVar13[0xf];
        puVar13[5] = CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                              CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                 (byte)((ulong)uVar18 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                          (byte)((ulong)uVar18 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                                   (byte)((ulong)uVar18 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar24 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar24 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar24 ^ (byte)uVar18)))))));
        puVar13[4] = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                              CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                 (byte)((ulong)uVar17 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                          (byte)((ulong)uVar17 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                                   (byte)((ulong)uVar17 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar22 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar17 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar22 ^ (byte)uVar17)))))));
        puVar13[7] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                              CONCAT16((byte)((ulong)uVar28 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
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
        puVar13[6] = CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                              CONCAT16((byte)((ulong)uVar26 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                 (byte)((ulong)uVar19 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                          (byte)((ulong)uVar19 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                                   (byte)((ulong)uVar19 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar26 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar19 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar26 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar26 ^ (byte)uVar19)))))));
        puVar13 = puVar13 + 8;
      } while (uVar15 != 0);
      if (uVar16 != uVar12) goto LAB_0041a498;
    }
    uVar12 = *(ulong *)(param_1 + 0xc0);
  }
  uVar16 = uVar10 - uVar12;
  if (uVar12 <= uVar10 && uVar16 != 0) {
    if (0xf < uVar16) {
      uVar16 = 0x10;
    }
    if (((uVar16 != 0) &&
        (*(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) ^ *(byte *)(param_1 + uVar12 + 0x110)
        , uVar16 != 1)) &&
       (*(byte *)(param_1 + 0xe9) = *(byte *)(param_1 + 0xe9) ^ *(byte *)(uVar12 + param_1 + 0x111),
       2 < uVar16)) {
      lVar11 = 0;
      do {
        lVar1 = param_1 + lVar11;
        lVar9 = param_1 + *(long *)(param_1 + 0xc0) + lVar11;
        uVar10 = lVar11 + 3;
        lVar11 = lVar11 + 1;
        *(byte *)(lVar1 + 0xea) = *(byte *)(lVar1 + 0xea) ^ *(byte *)(lVar9 + 0x112);
      } while (uVar10 < uVar16);
    }
  }
LAB_0041a540:
  iVar6 = FUN_0041b5e0(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb8),0,
                       param_1 + 200,0,1);
  return iVar6 != 0;
}


