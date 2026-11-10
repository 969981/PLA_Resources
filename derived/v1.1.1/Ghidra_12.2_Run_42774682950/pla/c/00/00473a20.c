/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00473a20; name: FUN_00473a20
 */


undefined8 FUN_00473a20(byte *param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint3 uVar5;
  uint5 uVar6;
  uint6 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
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
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 local_70;
  undefined8 uStack_68;
  
  bVar2 = *param_1;
  pcVar1 = *(code **)(param_1 + 0x28);
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar2 >> 6 & 1) == 0) {
    (*pcVar1)(param_1,param_1 + 0x10,uVar20);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  uVar8 = (ulong)bVar2 & 7;
  uVar17 = uVar8 ^ 0xf;
  *param_1 = (byte)uVar8;
  if ((int)uVar8 == 0) {
    uVar8 = 0;
  }
  else {
    bVar3 = param_1[uVar17];
    uVar16 = uVar17 + 1;
    param_1[uVar17] = 0;
    uVar8 = (ulong)bVar3 << 8;
    if (uVar16 < 0xf) {
      uVar4 = CONCAT11(bVar3,param_1[uVar16]);
      param_1[uVar16] = 0;
      uVar16 = uVar17 + 2;
      uVar8 = (ulong)uVar4 << 8;
      if (uVar16 < 0xf) {
        uVar5 = CONCAT21(uVar4,param_1[uVar16]);
        param_1[uVar16] = 0;
        uVar16 = uVar17 + 3;
        uVar8 = (ulong)uVar5 << 8;
        if (uVar16 < 0xf) {
          uVar11 = CONCAT31(uVar5,param_1[uVar16]);
          param_1[uVar16] = 0;
          uVar16 = uVar17 + 4;
          uVar8 = (ulong)uVar11 << 8;
          if (uVar16 < 0xf) {
            uVar6 = CONCAT41(uVar11,param_1[uVar16]);
            param_1[uVar16] = 0;
            uVar16 = uVar17 + 5;
            uVar8 = (ulong)uVar6 << 8;
            if (uVar16 < 0xf) {
              uVar7 = CONCAT51(uVar6,param_1[uVar16]);
              param_1[uVar16] = 0;
              uVar16 = uVar17 + 6;
              uVar8 = (ulong)uVar7 << 8;
              if (uVar16 < 0xf) {
                bVar3 = param_1[uVar16];
                param_1[uVar16] = 0;
                uVar8 = (ulong)CONCAT61(uVar7,bVar3) << 8;
              }
            }
          }
        }
      }
    }
  }
  bVar3 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar8 | bVar3) != param_4) {
    return 0xffffffff;
  }
  uVar8 = *(long *)(param_1 + 0x20) + (param_4 + 0xf >> 3 | 1);
  *(ulong *)(param_1 + 0x20) = uVar8;
  if (0x2000000000000000 < uVar8) {
    return 0xfffffffe;
  }
  uVar16 = param_4 >> 4;
  uVar8 = param_4;
  if (uVar16 != 0) {
    (*param_5)(param_2,param_3,uVar16,uVar20,param_1,param_1 + 0x10);
    uVar9 = param_4 & 0xfffffffffffffff0;
    uVar8 = param_4 - uVar9;
    if (uVar8 == 0) goto LAB_00473d5c;
    param_2 = param_2 + uVar9;
    param_3 = param_3 + uVar9;
    uVar16 = (ulong)param_1[0xf] + (uVar16 & 0xff);
    param_1[0xf] = (byte)uVar16;
    uVar16 = uVar16 >> 8;
    if (uVar16 != 0 || param_4 >> 0xc != 0) {
      uVar16 = uVar16 + (param_4 >> 0xc & 0xff) + (ulong)param_1[0xe];
      param_1[0xe] = (byte)uVar16;
      uVar16 = uVar16 >> 8;
      if (uVar16 != 0 || param_4 >> 0x14 != 0) {
        uVar16 = uVar16 + (param_4 >> 0x14 & 0xff) + (ulong)param_1[0xd];
        param_1[0xd] = (byte)uVar16;
        uVar16 = uVar16 >> 8;
        if (uVar16 != 0 || param_4 >> 0x1c != 0) {
          uVar16 = uVar16 + (param_4 >> 0x1c & 0xff) + (ulong)param_1[0xc];
          param_1[0xc] = (byte)uVar16;
          uVar16 = uVar16 >> 8;
          if (uVar16 != 0 || param_4 >> 0x24 != 0) {
            uVar16 = uVar16 + (param_4 >> 0x24 & 0xff) + (ulong)param_1[0xb];
            param_1[0xb] = (byte)uVar16;
            uVar16 = uVar16 >> 8;
            if (uVar16 != 0 || param_4 >> 0x2c != 0) {
              uVar16 = uVar16 + (param_4 >> 0x2c & 0xff) + (ulong)param_1[10];
              param_1[10] = (byte)uVar16;
              uVar16 = uVar16 >> 8;
              if (uVar16 != 0 || param_4 >> 0x34 != 0) {
                uVar16 = uVar16 + (param_4 >> 0x34 & 0xff) + (ulong)param_1[9];
                param_1[9] = (byte)uVar16;
                if (uVar16 >> 8 != 0 || param_4 >> 0x3c != 0) {
                  param_1[8] = param_1[8] + (char)(uVar16 >> 8) + (byte)(param_4 >> 0x3c);
                }
              }
            }
          }
        }
      }
    }
  }
  if (uVar8 == 0) goto LAB_00473d5c;
  if (uVar8 < 0x40) {
LAB_00473ccc:
    uVar16 = 0;
    uVar11 = 0;
LAB_00473cdc:
    do {
      uVar11 = uVar11 + 1;
      param_1[uVar16 + 0x10] = param_1[uVar16 + 0x10] ^ param_2[uVar16];
      uVar16 = (ulong)uVar11;
    } while (uVar16 < uVar8);
  }
  else {
    uVar11 = 0;
    uVar16 = 0;
    if (((int)(uVar8 - 1) == -1) || (uVar8 - 1 >> 0x20 != 0)) goto LAB_00473cdc;
    if ((param_1 + 0x10 < param_2 + uVar8) && (param_2 < param_1 + 0x10 + uVar8)) goto LAB_00473ccc;
    uVar16 = uVar8 & 0xffffffffffffffc0;
    pbVar12 = param_2 + 0x20;
    uVar9 = uVar16;
    pbVar14 = param_1;
    do {
      pbVar13 = pbVar14 + 0x40;
      uVar19 = *(undefined8 *)(pbVar12 + -0x18);
      uVar18 = *(undefined8 *)(pbVar12 + -0x20);
      uVar22 = *(undefined8 *)(pbVar12 + -8);
      uVar21 = *(undefined8 *)(pbVar12 + -0x10);
      uVar9 = uVar9 - 0x40;
      uVar28 = *(undefined8 *)(pbVar14 + 0x18);
      uVar27 = *(undefined8 *)(pbVar14 + 0x10);
      uVar30 = *(undefined8 *)(pbVar14 + 0x28);
      uVar29 = *(undefined8 *)(pbVar14 + 0x20);
      uVar24 = *(undefined8 *)(pbVar12 + 8);
      uVar23 = *(undefined8 *)pbVar12;
      uVar26 = *(undefined8 *)(pbVar12 + 0x18);
      uVar25 = *(undefined8 *)(pbVar12 + 0x10);
      *(ulong *)(pbVar14 + 0x18) =
           CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                    CONCAT16((byte)((ulong)uVar28 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                             CONCAT15((byte)((ulong)uVar28 >> 0x28) ^ (byte)((ulong)uVar19 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                               (byte)((ulong)uVar19 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                        (byte)((ulong)uVar19 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar28 >> 0x10) ^
                                                                 (byte)((ulong)uVar19 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar28 >> 8)
                                                                          ^ (byte)((ulong)uVar19 >>
                                                                                  8),
                                                                          (byte)uVar28 ^
                                                                          (byte)uVar19)))))));
      *(ulong *)(pbVar14 + 0x10) =
           CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                    CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                             CONCAT15((byte)((ulong)uVar27 >> 0x28) ^ (byte)((ulong)uVar18 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                               (byte)((ulong)uVar18 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                        (byte)((ulong)uVar18 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar27 >> 0x10) ^
                                                                 (byte)((ulong)uVar18 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar27 >> 8)
                                                                          ^ (byte)((ulong)uVar18 >>
                                                                                  8),
                                                                          (byte)uVar27 ^
                                                                          (byte)uVar18)))))));
      *(ulong *)(pbVar14 + 0x28) =
           CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                    CONCAT16((byte)((ulong)uVar30 >> 0x30) ^ (byte)((ulong)uVar22 >> 0x30),
                             CONCAT15((byte)((ulong)uVar30 >> 0x28) ^ (byte)((ulong)uVar22 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                               (byte)((ulong)uVar22 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar30 >> 0x18) ^
                                                        (byte)((ulong)uVar22 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar30 >> 0x10) ^
                                                                 (byte)((ulong)uVar22 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar30 >> 8)
                                                                          ^ (byte)((ulong)uVar22 >>
                                                                                  8),
                                                                          (byte)uVar30 ^
                                                                          (byte)uVar22)))))));
      *(ulong *)(pbVar14 + 0x20) =
           CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                    CONCAT16((byte)((ulong)uVar29 >> 0x30) ^ (byte)((ulong)uVar21 >> 0x30),
                             CONCAT15((byte)((ulong)uVar29 >> 0x28) ^ (byte)((ulong)uVar21 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                               (byte)((ulong)uVar21 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar29 >> 0x18) ^
                                                        (byte)((ulong)uVar21 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar29 >> 0x10) ^
                                                                 (byte)((ulong)uVar21 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar29 >> 8)
                                                                          ^ (byte)((ulong)uVar21 >>
                                                                                  8),
                                                                          (byte)uVar29 ^
                                                                          (byte)uVar21)))))));
      uVar19 = *(undefined8 *)(pbVar14 + 0x38);
      uVar18 = *(undefined8 *)(pbVar14 + 0x30);
      uVar22 = *(undefined8 *)(pbVar14 + 0x48);
      uVar21 = *(undefined8 *)pbVar13;
      *(ulong *)(pbVar14 + 0x38) =
           CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                    CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar24 >> 0x30),
                             CONCAT15((byte)((ulong)uVar19 >> 0x28) ^ (byte)((ulong)uVar24 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                               (byte)((ulong)uVar24 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                        (byte)((ulong)uVar24 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                 (byte)((ulong)uVar24 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar19 >> 8)
                                                                          ^ (byte)((ulong)uVar24 >>
                                                                                  8),
                                                                          (byte)uVar19 ^
                                                                          (byte)uVar24)))))));
      *(ulong *)(pbVar14 + 0x30) =
           CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                    CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30),
                             CONCAT15((byte)((ulong)uVar18 >> 0x28) ^ (byte)((ulong)uVar23 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                               (byte)((ulong)uVar23 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                        (byte)((ulong)uVar23 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar18 >> 0x10) ^
                                                                 (byte)((ulong)uVar23 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar18 >> 8)
                                                                          ^ (byte)((ulong)uVar23 >>
                                                                                  8),
                                                                          (byte)uVar18 ^
                                                                          (byte)uVar23)))))));
      *(ulong *)(pbVar14 + 0x48) =
           CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                    CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar26 >> 0x30),
                             CONCAT15((byte)((ulong)uVar22 >> 0x28) ^ (byte)((ulong)uVar26 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                               (byte)((ulong)uVar26 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                        (byte)((ulong)uVar26 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar22 >> 0x10) ^
                                                                 (byte)((ulong)uVar26 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar22 >> 8)
                                                                          ^ (byte)((ulong)uVar26 >>
                                                                                  8),
                                                                          (byte)uVar22 ^
                                                                          (byte)uVar26)))))));
      *(ulong *)pbVar13 =
           CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                    CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar25 >> 0x30),
                             CONCAT15((byte)((ulong)uVar21 >> 0x28) ^ (byte)((ulong)uVar25 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                               (byte)((ulong)uVar25 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                        (byte)((ulong)uVar25 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar21 >> 0x10) ^
                                                                 (byte)((ulong)uVar25 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar21 >> 8)
                                                                          ^ (byte)((ulong)uVar25 >>
                                                                                  8),
                                                                          (byte)uVar21 ^
                                                                          (byte)uVar25)))))));
      pbVar12 = pbVar12 + 0x40;
      pbVar14 = pbVar13;
    } while (uVar9 != 0);
    uVar11 = (uint)uVar8 & 0xffffffc0;
    if (uVar8 != uVar16) goto LAB_00473cdc;
  }
  (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar20);
  (*pcVar1)(param_1,&local_70,uVar20);
  uVar16 = uVar8;
  if (uVar8 < 2) {
    uVar16 = 1;
  }
  if (uVar16 < 0x40) {
LAB_00473d30:
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    uVar9 = uVar8;
    if (uVar8 < 2) {
      uVar9 = 1;
    }
    uVar11 = 0;
    uVar10 = 0;
    if (((int)(uVar9 - 1) != -1) && (uVar9 - 1 >> 0x20 == 0)) {
      uVar9 = uVar8;
      if (uVar8 < 2) {
        uVar9 = 1;
      }
      if ((param_3 < param_2 + uVar9) && (param_2 < param_3 + uVar9)) goto LAB_00473d30;
      uVar10 = uVar16 & 0xffffffffffffffc0;
      pbVar14 = param_3 + 0x20;
      puVar15 = (undefined8 *)((long)register0x00000008 + -0x50);
      pbVar12 = param_2 + 0x20;
      uVar9 = uVar10;
      do {
        uVar19 = puVar15[-3];
        uVar18 = puVar15[-4];
        uVar22 = puVar15[-1];
        uVar21 = puVar15[-2];
        uVar9 = uVar9 - 0x40;
        uVar28 = *(undefined8 *)(pbVar12 + -0x18);
        uVar27 = *(undefined8 *)(pbVar12 + -0x20);
        uVar30 = *(undefined8 *)(pbVar12 + -8);
        uVar29 = *(undefined8 *)(pbVar12 + -0x10);
        uVar24 = puVar15[1];
        uVar23 = *puVar15;
        uVar26 = puVar15[3];
        uVar25 = puVar15[2];
        uVar32 = *(undefined8 *)(pbVar12 + 8);
        uVar31 = *(undefined8 *)pbVar12;
        uVar34 = *(undefined8 *)(pbVar12 + 0x18);
        uVar33 = *(undefined8 *)(pbVar12 + 0x10);
        *(ulong *)(pbVar14 + -0x18) =
             CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                      CONCAT16((byte)((ulong)uVar28 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                               CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                        (byte)((ulong)uVar19 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                 (byte)((ulong)uVar19 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                          (byte)((ulong)uVar19 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar28 >> 0x10) ^
                                                                   (byte)((ulong)uVar19 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar28 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar19 >>
                                                                                  8),(byte)uVar28 ^
                                                                                     (byte)uVar19)))
                                                ))));
        *(ulong *)(pbVar14 + -0x20) =
             CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                      CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                               CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                        (byte)((ulong)uVar18 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                 (byte)((ulong)uVar18 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                          (byte)((ulong)uVar18 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar27 >> 0x10) ^
                                                                   (byte)((ulong)uVar18 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar27 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  8),(byte)uVar27 ^
                                                                                     (byte)uVar18)))
                                                ))));
        *(ulong *)(pbVar14 + -8) =
             CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                      CONCAT16((byte)((ulong)uVar30 >> 0x30) ^ (byte)((ulong)uVar22 >> 0x30),
                               CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                        (byte)((ulong)uVar22 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                 (byte)((ulong)uVar22 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar30 >> 0x18) ^
                                                          (byte)((ulong)uVar22 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar30 >> 0x10) ^
                                                                   (byte)((ulong)uVar22 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar30 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar22 >>
                                                                                  8),(byte)uVar30 ^
                                                                                     (byte)uVar22)))
                                                ))));
        *(ulong *)(pbVar14 + -0x10) =
             CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                      CONCAT16((byte)((ulong)uVar29 >> 0x30) ^ (byte)((ulong)uVar21 >> 0x30),
                               CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                        (byte)((ulong)uVar21 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                 (byte)((ulong)uVar21 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar29 >> 0x18) ^
                                                          (byte)((ulong)uVar21 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar29 >> 0x10) ^
                                                                   (byte)((ulong)uVar21 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar29 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar21 >>
                                                                                  8),(byte)uVar29 ^
                                                                                     (byte)uVar21)))
                                                ))));
        *(ulong *)(pbVar14 + 8) =
             CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                      CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar24 >> 0x30),
                               CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                        (byte)((ulong)uVar24 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                 (byte)((ulong)uVar24 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                          (byte)((ulong)uVar24 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                                   (byte)((ulong)uVar24 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar32 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar24 >>
                                                                                  8),(byte)uVar32 ^
                                                                                     (byte)uVar24)))
                                                ))));
        *(ulong *)pbVar14 =
             CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                      CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30),
                               CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                        (byte)((ulong)uVar23 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                 (byte)((ulong)uVar23 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                          (byte)((ulong)uVar23 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar31 >> 0x10) ^
                                                                   (byte)((ulong)uVar23 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar31 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar23 >>
                                                                                  8),(byte)uVar31 ^
                                                                                     (byte)uVar23)))
                                                ))));
        *(ulong *)(pbVar14 + 0x18) =
             CONCAT17((byte)((ulong)uVar34 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                      CONCAT16((byte)((ulong)uVar34 >> 0x30) ^ (byte)((ulong)uVar26 >> 0x30),
                               CONCAT15((byte)((ulong)uVar34 >> 0x28) ^
                                        (byte)((ulong)uVar26 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar34 >> 0x20) ^
                                                 (byte)((ulong)uVar26 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar34 >> 0x18) ^
                                                          (byte)((ulong)uVar26 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar34 >> 0x10) ^
                                                                   (byte)((ulong)uVar26 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar34 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar26 >>
                                                                                  8),(byte)uVar34 ^
                                                                                     (byte)uVar26)))
                                                ))));
        *(ulong *)(pbVar14 + 0x10) =
             CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                      CONCAT16((byte)((ulong)uVar33 >> 0x30) ^ (byte)((ulong)uVar25 >> 0x30),
                               CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                        (byte)((ulong)uVar25 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                 (byte)((ulong)uVar25 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                          (byte)((ulong)uVar25 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar33 >> 0x10) ^
                                                                   (byte)((ulong)uVar25 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar33 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar25 >>
                                                                                  8),(byte)uVar33 ^
                                                                                     (byte)uVar25)))
                                                ))));
        pbVar14 = pbVar14 + 0x40;
        puVar15 = puVar15 + 8;
        pbVar12 = pbVar12 + 0x40;
      } while (uVar9 != 0);
      uVar11 = (uint)uVar16 & 0xffffffc0;
      if (uVar16 == uVar10) goto LAB_00473d5c;
    }
  }
  do {
    uVar11 = uVar11 + 1;
    param_3[uVar10] = param_2[uVar10] ^ *(byte *)((long)&local_70 + uVar10);
    uVar10 = (ulong)uVar11;
  } while (uVar10 < uVar8);
LAB_00473d5c:
  memset(param_1 + uVar17,0,(ulong)(0x10 - (int)uVar17));
  (*pcVar1)(param_1,&local_70,uVar20);
  *param_1 = bVar2;
  uVar18 = *(undefined8 *)(param_1 + 0x18);
  uVar20 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x18) =
       CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uStack_68 >> 0x38),
                CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uStack_68 >> 0x30),
                         CONCAT15((byte)((ulong)uVar18 >> 0x28) ^ (byte)((ulong)uStack_68 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                           (byte)((ulong)uStack_68 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                    (byte)((ulong)uStack_68 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar18 >> 0x10) ^
                                                             (byte)((ulong)uStack_68 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar18 >> 8) ^
                                                                      (byte)((ulong)uStack_68 >> 8),
                                                                      (byte)uVar18 ^ (byte)uStack_68
                                                                     )))))));
  *(ulong *)(param_1 + 0x10) =
       CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)local_70 >> 0x38),
                CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)local_70 >> 0x30),
                         CONCAT15((byte)((ulong)uVar20 >> 0x28) ^ (byte)((ulong)local_70 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                           (byte)((ulong)local_70 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                    (byte)((ulong)local_70 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                             (byte)((ulong)local_70 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar20 >> 8) ^
                                                                      (byte)((ulong)local_70 >> 8),
                                                                      (byte)uVar20 ^ (byte)local_70)
                                                            ))))));
  return 0;
}


