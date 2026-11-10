/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00473130; name: FUN_00473130
 */


undefined8 FUN_00473130(byte *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint3 uVar5;
  uint5 uVar6;
  uint6 uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong *puVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong local_70 [2];
  
  bVar2 = *param_1;
  pcVar1 = *(code **)(param_1 + 0x28);
  uVar23 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar2 >> 6 & 1) == 0) {
    (*pcVar1)(param_1,param_1 + 0x10,uVar23);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  uVar9 = (ulong)bVar2 & 7;
  uVar17 = uVar9 ^ 0xf;
  *param_1 = (byte)uVar9;
  if ((int)uVar9 == 0) {
    uVar9 = 0;
  }
  else {
    bVar3 = param_1[uVar17];
    uVar14 = uVar17 + 1;
    param_1[uVar17] = 0;
    uVar9 = (ulong)bVar3 << 8;
    if (uVar14 < 0xf) {
      uVar4 = CONCAT11(bVar3,param_1[uVar14]);
      param_1[uVar14] = 0;
      uVar14 = uVar17 + 2;
      uVar9 = (ulong)uVar4 << 8;
      if (uVar14 < 0xf) {
        uVar5 = CONCAT21(uVar4,param_1[uVar14]);
        param_1[uVar14] = 0;
        uVar14 = uVar17 + 3;
        uVar9 = (ulong)uVar5 << 8;
        if (uVar14 < 0xf) {
          uVar11 = CONCAT31(uVar5,param_1[uVar14]);
          param_1[uVar14] = 0;
          uVar14 = uVar17 + 4;
          uVar9 = (ulong)uVar11 << 8;
          if (uVar14 < 0xf) {
            uVar6 = CONCAT41(uVar11,param_1[uVar14]);
            param_1[uVar14] = 0;
            uVar14 = uVar17 + 5;
            uVar9 = (ulong)uVar6 << 8;
            if (uVar14 < 0xf) {
              uVar7 = CONCAT51(uVar6,param_1[uVar14]);
              param_1[uVar14] = 0;
              uVar14 = uVar17 + 6;
              uVar9 = (ulong)uVar7 << 8;
              if (uVar14 < 0xf) {
                bVar3 = param_1[uVar14];
                param_1[uVar14] = 0;
                uVar9 = (ulong)CONCAT61(uVar7,bVar3) << 8;
              }
            }
          }
        }
      }
    }
  }
  bVar3 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar9 | bVar3) != param_4) {
    return 0xffffffff;
  }
  uVar9 = *(long *)(param_1 + 0x20) + (param_4 + 0xf >> 3 | 1);
  *(ulong *)(param_1 + 0x20) = uVar9;
  if (0x2000000000000000 < uVar9) {
    return 0xfffffffe;
  }
  if (0xf < param_4) {
    uVar9 = param_4;
    do {
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ *param_2;
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ param_2[1];
      (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar23);
      (*pcVar1)(param_1,local_70,uVar23);
      bVar3 = param_1[0xf];
      param_1[0xf] = (byte)(bVar3 + 1);
      if (((((bVar3 + 1 >> 8 != 0) &&
            (bVar3 = param_1[0xe], param_1[0xe] = (byte)(bVar3 + 1), bVar3 + 1 >> 8 != 0)) &&
           (bVar3 = param_1[0xd], param_1[0xd] = (byte)(bVar3 + 1), bVar3 + 1 >> 8 != 0)) &&
          ((bVar3 = param_1[0xc], param_1[0xc] = (byte)(bVar3 + 1), bVar3 + 1 >> 8 != 0 &&
           (bVar3 = param_1[0xb], param_1[0xb] = (byte)(bVar3 + 1), bVar3 + 1 >> 8 != 0)))) &&
         ((bVar3 = param_1[10], param_1[10] = (byte)(bVar3 + 1), bVar3 + 1 >> 8 != 0 &&
          (bVar3 = param_1[9], param_1[9] = (byte)(bVar3 + 1), bVar3 + 1 >> 8 != 0)))) {
        param_1[8] = param_1[8] + 1;
      }
      uVar9 = uVar9 - 0x10;
      *param_3 = *param_2 ^ local_70[0];
      puVar12 = param_2 + 1;
      param_2 = param_2 + 2;
      param_3[1] = *puVar12 ^ local_70[1];
      param_3 = param_3 + 2;
    } while (0xf < uVar9);
    param_4 = param_4 & 0xf;
  }
  if (param_4 == 0) goto LAB_004735a0;
  if (param_4 < 0x40) {
LAB_004733b0:
    uVar9 = 0;
    uVar11 = 0;
LAB_004733c0:
    do {
      uVar11 = uVar11 + 1;
      param_1[uVar9 + 0x10] = param_1[uVar9 + 0x10] ^ *(byte *)((long)param_2 + uVar9);
      uVar9 = (ulong)uVar11;
    } while (uVar9 < param_4);
  }
  else {
    uVar11 = 0;
    uVar9 = 0;
    if (((int)(param_4 - 1) == -1) || (param_4 - 1 >> 0x20 != 0)) goto LAB_004733c0;
    if ((param_1 + 0x10 < (byte *)((long)param_2 + param_4)) && (param_2 < param_1 + 0x10 + param_4)
       ) goto LAB_004733b0;
    uVar9 = param_4 & 0xffffffffffffffc0;
    puVar12 = param_2 + 4;
    uVar14 = uVar9;
    pbVar8 = param_1;
    do {
      pbVar13 = pbVar8 + 0x40;
      uVar19 = puVar12[-3];
      uVar10 = puVar12[-4];
      uVar24 = puVar12[-1];
      uVar21 = puVar12[-2];
      uVar14 = uVar14 - 0x40;
      uVar20 = *(undefined8 *)(pbVar8 + 0x18);
      uVar18 = *(undefined8 *)(pbVar8 + 0x10);
      uVar25 = *(undefined8 *)(pbVar8 + 0x28);
      uVar22 = *(undefined8 *)(pbVar8 + 0x20);
      uVar27 = puVar12[1];
      uVar26 = *puVar12;
      uVar29 = puVar12[3];
      uVar28 = puVar12[2];
      *(ulong *)(pbVar8 + 0x18) =
           CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)(uVar19 >> 0x38),
                    CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)(uVar19 >> 0x30),
                             CONCAT15((byte)((ulong)uVar20 >> 0x28) ^ (byte)(uVar19 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                               (byte)(uVar19 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                        (byte)(uVar19 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                 (byte)(uVar19 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar20 >> 8)
                                                                          ^ (byte)(uVar19 >> 8),
                                                                          (byte)uVar20 ^
                                                                          (byte)uVar19)))))));
      *(ulong *)(pbVar8 + 0x10) =
           CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)(uVar10 >> 0x38),
                    CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)(uVar10 >> 0x30),
                             CONCAT15((byte)((ulong)uVar18 >> 0x28) ^ (byte)(uVar10 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                               (byte)(uVar10 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                        (byte)(uVar10 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar18 >> 0x10) ^
                                                                 (byte)(uVar10 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar18 >> 8)
                                                                          ^ (byte)(uVar10 >> 8),
                                                                          (byte)uVar18 ^
                                                                          (byte)uVar10)))))));
      *(ulong *)(pbVar8 + 0x28) =
           CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)(uVar24 >> 0x38),
                    CONCAT16((byte)((ulong)uVar25 >> 0x30) ^ (byte)(uVar24 >> 0x30),
                             CONCAT15((byte)((ulong)uVar25 >> 0x28) ^ (byte)(uVar24 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                               (byte)(uVar24 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar25 >> 0x18) ^
                                                        (byte)(uVar24 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar25 >> 0x10) ^
                                                                 (byte)(uVar24 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar25 >> 8)
                                                                          ^ (byte)(uVar24 >> 8),
                                                                          (byte)uVar25 ^
                                                                          (byte)uVar24)))))));
      *(ulong *)(pbVar8 + 0x20) =
           CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)(uVar21 >> 0x38),
                    CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)(uVar21 >> 0x30),
                             CONCAT15((byte)((ulong)uVar22 >> 0x28) ^ (byte)(uVar21 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                               (byte)(uVar21 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                        (byte)(uVar21 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar22 >> 0x10) ^
                                                                 (byte)(uVar21 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar22 >> 8)
                                                                          ^ (byte)(uVar21 >> 8),
                                                                          (byte)uVar22 ^
                                                                          (byte)uVar21)))))));
      uVar20 = *(undefined8 *)(pbVar8 + 0x38);
      uVar18 = *(undefined8 *)(pbVar8 + 0x30);
      uVar25 = *(undefined8 *)(pbVar8 + 0x48);
      uVar22 = *(undefined8 *)pbVar13;
      *(ulong *)(pbVar8 + 0x38) =
           CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)(uVar27 >> 0x38),
                    CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)(uVar27 >> 0x30),
                             CONCAT15((byte)((ulong)uVar20 >> 0x28) ^ (byte)(uVar27 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                               (byte)(uVar27 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                        (byte)(uVar27 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                 (byte)(uVar27 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar20 >> 8)
                                                                          ^ (byte)(uVar27 >> 8),
                                                                          (byte)uVar20 ^
                                                                          (byte)uVar27)))))));
      *(ulong *)(pbVar8 + 0x30) =
           CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)(uVar26 >> 0x38),
                    CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)(uVar26 >> 0x30),
                             CONCAT15((byte)((ulong)uVar18 >> 0x28) ^ (byte)(uVar26 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                               (byte)(uVar26 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                        (byte)(uVar26 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar18 >> 0x10) ^
                                                                 (byte)(uVar26 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar18 >> 8)
                                                                          ^ (byte)(uVar26 >> 8),
                                                                          (byte)uVar18 ^
                                                                          (byte)uVar26)))))));
      *(ulong *)(pbVar8 + 0x48) =
           CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)(uVar29 >> 0x38),
                    CONCAT16((byte)((ulong)uVar25 >> 0x30) ^ (byte)(uVar29 >> 0x30),
                             CONCAT15((byte)((ulong)uVar25 >> 0x28) ^ (byte)(uVar29 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                               (byte)(uVar29 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar25 >> 0x18) ^
                                                        (byte)(uVar29 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar25 >> 0x10) ^
                                                                 (byte)(uVar29 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar25 >> 8)
                                                                          ^ (byte)(uVar29 >> 8),
                                                                          (byte)uVar25 ^
                                                                          (byte)uVar29)))))));
      *(ulong *)pbVar13 =
           CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)(uVar28 >> 0x38),
                    CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)(uVar28 >> 0x30),
                             CONCAT15((byte)((ulong)uVar22 >> 0x28) ^ (byte)(uVar28 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                               (byte)(uVar28 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                        (byte)(uVar28 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar22 >> 0x10) ^
                                                                 (byte)(uVar28 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar22 >> 8)
                                                                          ^ (byte)(uVar28 >> 8),
                                                                          (byte)uVar22 ^
                                                                          (byte)uVar28)))))));
      puVar12 = puVar12 + 8;
      pbVar8 = pbVar13;
    } while (uVar14 != 0);
    uVar11 = (uint)param_4 & 0xffffffc0;
    if (param_4 != uVar9) goto LAB_004733c0;
  }
  (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar23);
  (*pcVar1)(param_1,local_70,uVar23);
  uVar9 = param_4;
  if (param_4 < 2) {
    uVar9 = 1;
  }
  if (uVar9 < 0x40) {
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    uVar14 = param_4;
    if (param_4 < 2) {
      uVar14 = 1;
    }
    uVar11 = 0;
    uVar10 = 0;
    if (((int)(uVar14 - 1) != -1) && (uVar14 - 1 >> 0x20 == 0)) {
      uVar14 = param_4;
      if (param_4 < 2) {
        uVar14 = 1;
      }
      uVar11 = 0;
      uVar10 = 0;
      if (((ulong *)((long)local_70 + uVar14) <= param_3 ||
           (ulong *)((long)param_3 + uVar14) <= local_70) &&
         ((ulong *)((long)param_2 + uVar14) <= param_3 ||
          (ulong *)((long)param_3 + uVar14) <= param_2)) {
        uVar10 = uVar9 & 0xffffffffffffffc0;
        uVar11 = (uint)uVar9 & 0xffffffc0;
        puVar12 = param_3 + 4;
        puVar15 = local_70 + 4;
        puVar16 = param_2 + 4;
        uVar14 = uVar10;
        do {
          uVar21 = puVar15[-3];
          uVar19 = puVar15[-4];
          uVar26 = puVar15[-1];
          uVar24 = puVar15[-2];
          uVar14 = uVar14 - 0x40;
          uVar32 = puVar16[-3];
          uVar31 = puVar16[-4];
          uVar34 = puVar16[-1];
          uVar33 = puVar16[-2];
          uVar28 = puVar15[1];
          uVar27 = *puVar15;
          uVar30 = puVar15[3];
          uVar29 = puVar15[2];
          uVar36 = puVar16[1];
          uVar35 = *puVar16;
          uVar38 = puVar16[3];
          uVar37 = puVar16[2];
          puVar12[-3] = CONCAT17((byte)(uVar32 >> 0x38) ^ (byte)(uVar21 >> 0x38),
                                 CONCAT16((byte)(uVar32 >> 0x30) ^ (byte)(uVar21 >> 0x30),
                                          CONCAT15((byte)(uVar32 >> 0x28) ^ (byte)(uVar21 >> 0x28),
                                                   CONCAT14((byte)(uVar32 >> 0x20) ^
                                                            (byte)(uVar21 >> 0x20),
                                                            CONCAT13((byte)(uVar32 >> 0x18) ^
                                                                     (byte)(uVar21 >> 0x18),
                                                                     CONCAT12((byte)(uVar32 >> 0x10)
                                                                              ^ (byte)(uVar21 >>
                                                                                      0x10),
                                                                              CONCAT11((byte)(uVar32
                                                                                             >> 8) ^
                                                                                       (byte)(uVar21
                                                                                             >> 8),
                                                                                       (byte)uVar32
                                                                                       ^ (byte)
                                                  uVar21)))))));
          puVar12[-4] = CONCAT17((byte)(uVar31 >> 0x38) ^ (byte)(uVar19 >> 0x38),
                                 CONCAT16((byte)(uVar31 >> 0x30) ^ (byte)(uVar19 >> 0x30),
                                          CONCAT15((byte)(uVar31 >> 0x28) ^ (byte)(uVar19 >> 0x28),
                                                   CONCAT14((byte)(uVar31 >> 0x20) ^
                                                            (byte)(uVar19 >> 0x20),
                                                            CONCAT13((byte)(uVar31 >> 0x18) ^
                                                                     (byte)(uVar19 >> 0x18),
                                                                     CONCAT12((byte)(uVar31 >> 0x10)
                                                                              ^ (byte)(uVar19 >>
                                                                                      0x10),
                                                                              CONCAT11((byte)(uVar31
                                                                                             >> 8) ^
                                                                                       (byte)(uVar19
                                                                                             >> 8),
                                                                                       (byte)uVar31
                                                                                       ^ (byte)
                                                  uVar19)))))));
          puVar12[-1] = CONCAT17((byte)(uVar34 >> 0x38) ^ (byte)(uVar26 >> 0x38),
                                 CONCAT16((byte)(uVar34 >> 0x30) ^ (byte)(uVar26 >> 0x30),
                                          CONCAT15((byte)(uVar34 >> 0x28) ^ (byte)(uVar26 >> 0x28),
                                                   CONCAT14((byte)(uVar34 >> 0x20) ^
                                                            (byte)(uVar26 >> 0x20),
                                                            CONCAT13((byte)(uVar34 >> 0x18) ^
                                                                     (byte)(uVar26 >> 0x18),
                                                                     CONCAT12((byte)(uVar34 >> 0x10)
                                                                              ^ (byte)(uVar26 >>
                                                                                      0x10),
                                                                              CONCAT11((byte)(uVar34
                                                                                             >> 8) ^
                                                                                       (byte)(uVar26
                                                                                             >> 8),
                                                                                       (byte)uVar34
                                                                                       ^ (byte)
                                                  uVar26)))))));
          puVar12[-2] = CONCAT17((byte)(uVar33 >> 0x38) ^ (byte)(uVar24 >> 0x38),
                                 CONCAT16((byte)(uVar33 >> 0x30) ^ (byte)(uVar24 >> 0x30),
                                          CONCAT15((byte)(uVar33 >> 0x28) ^ (byte)(uVar24 >> 0x28),
                                                   CONCAT14((byte)(uVar33 >> 0x20) ^
                                                            (byte)(uVar24 >> 0x20),
                                                            CONCAT13((byte)(uVar33 >> 0x18) ^
                                                                     (byte)(uVar24 >> 0x18),
                                                                     CONCAT12((byte)(uVar33 >> 0x10)
                                                                              ^ (byte)(uVar24 >>
                                                                                      0x10),
                                                                              CONCAT11((byte)(uVar33
                                                                                             >> 8) ^
                                                                                       (byte)(uVar24
                                                                                             >> 8),
                                                                                       (byte)uVar33
                                                                                       ^ (byte)
                                                  uVar24)))))));
          puVar12[1] = CONCAT17((byte)(uVar36 >> 0x38) ^ (byte)(uVar28 >> 0x38),
                                CONCAT16((byte)(uVar36 >> 0x30) ^ (byte)(uVar28 >> 0x30),
                                         CONCAT15((byte)(uVar36 >> 0x28) ^ (byte)(uVar28 >> 0x28),
                                                  CONCAT14((byte)(uVar36 >> 0x20) ^
                                                           (byte)(uVar28 >> 0x20),
                                                           CONCAT13((byte)(uVar36 >> 0x18) ^
                                                                    (byte)(uVar28 >> 0x18),
                                                                    CONCAT12((byte)(uVar36 >> 0x10)
                                                                             ^ (byte)(uVar28 >> 0x10
                                                                                     ),
                                                                             CONCAT11((byte)(uVar36 
                                                  >> 8) ^ (byte)(uVar28 >> 8),
                                                  (byte)uVar36 ^ (byte)uVar28)))))));
          *puVar12 = CONCAT17((byte)(uVar35 >> 0x38) ^ (byte)(uVar27 >> 0x38),
                              CONCAT16((byte)(uVar35 >> 0x30) ^ (byte)(uVar27 >> 0x30),
                                       CONCAT15((byte)(uVar35 >> 0x28) ^ (byte)(uVar27 >> 0x28),
                                                CONCAT14((byte)(uVar35 >> 0x20) ^
                                                         (byte)(uVar27 >> 0x20),
                                                         CONCAT13((byte)(uVar35 >> 0x18) ^
                                                                  (byte)(uVar27 >> 0x18),
                                                                  CONCAT12((byte)(uVar35 >> 0x10) ^
                                                                           (byte)(uVar27 >> 0x10),
                                                                           CONCAT11((byte)(uVar35 >>
                                                                                          8) ^
                                                                                    (byte)(uVar27 >>
                                                                                          8),(byte)
                                                  uVar35 ^ (byte)uVar27)))))));
          puVar12[3] = CONCAT17((byte)(uVar38 >> 0x38) ^ (byte)(uVar30 >> 0x38),
                                CONCAT16((byte)(uVar38 >> 0x30) ^ (byte)(uVar30 >> 0x30),
                                         CONCAT15((byte)(uVar38 >> 0x28) ^ (byte)(uVar30 >> 0x28),
                                                  CONCAT14((byte)(uVar38 >> 0x20) ^
                                                           (byte)(uVar30 >> 0x20),
                                                           CONCAT13((byte)(uVar38 >> 0x18) ^
                                                                    (byte)(uVar30 >> 0x18),
                                                                    CONCAT12((byte)(uVar38 >> 0x10)
                                                                             ^ (byte)(uVar30 >> 0x10
                                                                                     ),
                                                                             CONCAT11((byte)(uVar38 
                                                  >> 8) ^ (byte)(uVar30 >> 8),
                                                  (byte)uVar38 ^ (byte)uVar30)))))));
          puVar12[2] = CONCAT17((byte)(uVar37 >> 0x38) ^ (byte)(uVar29 >> 0x38),
                                CONCAT16((byte)(uVar37 >> 0x30) ^ (byte)(uVar29 >> 0x30),
                                         CONCAT15((byte)(uVar37 >> 0x28) ^ (byte)(uVar29 >> 0x28),
                                                  CONCAT14((byte)(uVar37 >> 0x20) ^
                                                           (byte)(uVar29 >> 0x20),
                                                           CONCAT13((byte)(uVar37 >> 0x18) ^
                                                                    (byte)(uVar29 >> 0x18),
                                                                    CONCAT12((byte)(uVar37 >> 0x10)
                                                                             ^ (byte)(uVar29 >> 0x10
                                                                                     ),
                                                                             CONCAT11((byte)(uVar37 
                                                  >> 8) ^ (byte)(uVar29 >> 8),
                                                  (byte)uVar37 ^ (byte)uVar29)))))));
          puVar12 = puVar12 + 8;
          puVar15 = puVar15 + 8;
          puVar16 = puVar16 + 8;
        } while (uVar14 != 0);
        if (uVar9 == uVar10) goto LAB_004735a0;
      }
    }
  }
  do {
    uVar11 = uVar11 + 1;
    *(byte *)((long)param_3 + uVar10) =
         *(byte *)((long)param_2 + uVar10) ^ *(byte *)((long)local_70 + uVar10);
    uVar10 = (ulong)uVar11;
  } while (uVar10 < param_4);
LAB_004735a0:
  memset(param_1 + uVar17,0,(ulong)(0x10 - (int)uVar17));
  (*pcVar1)(param_1,local_70,uVar23);
  *param_1 = bVar2;
  uVar18 = *(undefined8 *)(param_1 + 0x18);
  uVar23 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x18) =
       CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)(local_70[1] >> 0x38),
                CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)(local_70[1] >> 0x30),
                         CONCAT15((byte)((ulong)uVar18 >> 0x28) ^ (byte)(local_70[1] >> 0x28),
                                  CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                           (byte)(local_70[1] >> 0x20),
                                           CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                    (byte)(local_70[1] >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar18 >> 0x10) ^
                                                             (byte)(local_70[1] >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar18 >> 8) ^
                                                                      (byte)(local_70[1] >> 8),
                                                                      (byte)uVar18 ^
                                                                      (byte)local_70[1])))))));
  *(ulong *)(param_1 + 0x10) =
       CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)(local_70[0] >> 0x38),
                CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)(local_70[0] >> 0x30),
                         CONCAT15((byte)((ulong)uVar23 >> 0x28) ^ (byte)(local_70[0] >> 0x28),
                                  CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                           (byte)(local_70[0] >> 0x20),
                                           CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                    (byte)(local_70[0] >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar23 >> 0x10) ^
                                                             (byte)(local_70[0] >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar23 >> 8) ^
                                                                      (byte)(local_70[0] >> 8),
                                                                      (byte)uVar23 ^
                                                                      (byte)local_70[0])))))));
  return 0;
}


