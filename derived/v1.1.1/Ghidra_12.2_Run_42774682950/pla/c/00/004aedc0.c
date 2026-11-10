/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004aedc0; name: FUN_004aedc0
 */


undefined8 FUN_004aedc0(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
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
  undefined8 uVar35;
  undefined8 uVar36;
  
  lVar17 = *(long *)(param_1 + 0x78);
  uVar9 = *(uint *)(lVar17 + 0x70);
  uVar10 = (ulong)uVar9;
  uVar12 = param_3;
  uVar13 = param_2;
  if (uVar9 == 0) goto LAB_004aef6c;
  if ((param_4 != 0) && (uVar9 < 0x40)) {
    uVar12 = param_4 - 1;
    uVar19 = uVar12;
    if (0x3f - uVar10 <= uVar12) {
      uVar19 = 0x3f - uVar10;
    }
    uVar19 = uVar19 + 1;
    if (uVar19 < 0x40) {
LAB_004aeee4:
      lVar18 = 0;
      do {
        *(byte *)(param_2 + lVar18) =
             *(byte *)(uVar10 + lVar17 + 0x30 + lVar18) ^ *(byte *)(param_3 + lVar18);
        lVar1 = lVar18 + 1;
        if (param_4 - 1 == lVar18) break;
        lVar3 = uVar10 + lVar18;
        lVar18 = lVar1;
      } while (lVar3 + 1U < 0x40);
      uVar10 = uVar10 + lVar1;
      uVar13 = param_2 + lVar1;
      param_4 = param_4 - lVar1;
      uVar12 = param_3 + lVar1;
    }
    else {
      if (0x3f - uVar10 <= uVar12) {
        uVar12 = 0x3f - uVar10;
      }
      uVar13 = param_2 + uVar12 + 1;
      lVar18 = uVar10 + lVar17;
      if ((param_2 < param_3 + uVar12 + 1 && param_3 < uVar13) ||
         (param_2 < uVar12 + uVar10 + lVar17 + 0x31 && lVar18 + 0x30U < uVar13)) goto LAB_004aeee4;
      uVar14 = uVar19 & 0xffffffffffffffc0;
      uVar10 = uVar14 + uVar10;
      uVar13 = param_2 + uVar14;
      param_4 = param_4 - uVar14;
      uVar12 = param_3 + uVar14;
      puVar8 = (undefined8 *)(lVar18 + 0x60);
      puVar15 = (undefined8 *)(param_3 + 0x20);
      puVar16 = (undefined8 *)(param_2 + 0x20);
      uVar11 = uVar14;
      do {
        uVar22 = puVar15[-3];
        uVar21 = puVar15[-4];
        uVar24 = puVar15[-1];
        uVar23 = puVar15[-2];
        uVar11 = uVar11 - 0x40;
        uVar30 = puVar8[-5];
        uVar29 = puVar8[-6];
        uVar32 = puVar8[-3];
        uVar31 = puVar8[-4];
        uVar34 = puVar8[-1];
        uVar33 = puVar8[-2];
        uVar36 = puVar8[1];
        uVar35 = *puVar8;
        uVar26 = puVar15[1];
        uVar25 = *puVar15;
        uVar28 = puVar15[3];
        uVar27 = puVar15[2];
        puVar16[-3] = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
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
        puVar16[-4] = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
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
        puVar8 = puVar8 + 8;
        puVar16[-1] = CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                               CONCAT16((byte)((ulong)uVar32 >> 0x30) ^
                                        (byte)((ulong)uVar24 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                                 (byte)((ulong)uVar24 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                          (byte)((ulong)uVar24 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                                   (byte)((ulong)uVar24 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar32 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar24 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar32 >> 8) ^ (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar32 ^ (byte)uVar24)))))));
        puVar16[-2] = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                               CONCAT16((byte)((ulong)uVar31 >> 0x30) ^
                                        (byte)((ulong)uVar23 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                                 (byte)((ulong)uVar23 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                          (byte)((ulong)uVar23 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                                   (byte)((ulong)uVar23 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar31 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar23 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar31 >> 8) ^ (byte)((ulong)uVar23 >> 8),
                                                  (byte)uVar31 ^ (byte)uVar23)))))));
        puVar16[1] = CONCAT17((byte)((ulong)uVar34 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                              CONCAT16((byte)((ulong)uVar34 >> 0x30) ^ (byte)((ulong)uVar26 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar34 >> 0x28) ^
                                                 (byte)((ulong)uVar26 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar34 >> 0x20) ^
                                                          (byte)((ulong)uVar26 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar34 >> 0x18) ^
                                                                   (byte)((ulong)uVar26 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar34 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar26 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar34 >> 8) ^ (byte)((ulong)uVar26 >> 8),
                                                  (byte)uVar34 ^ (byte)uVar26)))))));
        *puVar16 = CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                            CONCAT16((byte)((ulong)uVar33 >> 0x30) ^ (byte)((ulong)uVar25 >> 0x30),
                                     CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                              (byte)((ulong)uVar25 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                       (byte)((ulong)uVar25 >> 0x20),
                                                       CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                                (byte)((ulong)uVar25 >> 0x18),
                                                                CONCAT12((byte)((ulong)uVar33 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar25 >>
                                                                               0x10),
                                                                         CONCAT11((byte)((ulong)
                                                  uVar33 >> 8) ^ (byte)((ulong)uVar25 >> 8),
                                                  (byte)uVar33 ^ (byte)uVar25)))))));
        puVar16[3] = CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)uVar28 >> 0x38),
                              CONCAT16((byte)((ulong)uVar36 >> 0x30) ^ (byte)((ulong)uVar28 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar36 >> 0x28) ^
                                                 (byte)((ulong)uVar28 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                                          (byte)((ulong)uVar28 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar36 >> 0x18) ^
                                                                   (byte)((ulong)uVar28 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar36 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar28 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar36 >> 8) ^ (byte)((ulong)uVar28 >> 8),
                                                  (byte)uVar36 ^ (byte)uVar28)))))));
        puVar16[2] = CONCAT17((byte)((ulong)uVar35 >> 0x38) ^ (byte)((ulong)uVar27 >> 0x38),
                              CONCAT16((byte)((ulong)uVar35 >> 0x30) ^ (byte)((ulong)uVar27 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar35 >> 0x28) ^
                                                 (byte)((ulong)uVar27 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar35 >> 0x20) ^
                                                          (byte)((ulong)uVar27 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar35 >> 0x18) ^
                                                                   (byte)((ulong)uVar27 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar35 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar27 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar35 >> 8) ^ (byte)((ulong)uVar27 >> 8),
                                                  (byte)uVar35 ^ (byte)uVar27)))))));
        puVar15 = puVar15 + 8;
        puVar16 = puVar16 + 8;
      } while (uVar11 != 0);
      param_2 = uVar13;
      param_3 = uVar12;
      if (uVar19 != uVar14) goto LAB_004aeee4;
    }
    uVar9 = (uint)uVar10;
  }
  *(uint *)(lVar17 + 0x70) = uVar9;
  if (param_4 == 0) {
    return 1;
  }
  if (uVar9 == 0x40) {
    iVar7 = *(int *)(lVar17 + 0x20);
    *(undefined4 *)(lVar17 + 0x70) = 0;
    *(int *)(lVar17 + 0x20) = iVar7 + 1;
    if (iVar7 == -1) {
      *(int *)(lVar17 + 0x24) = *(int *)(lVar17 + 0x24) + 1;
    }
  }
LAB_004aef6c:
  uVar9 = (uint)param_4 & 0x3f;
  uVar10 = (ulong)uVar9;
  uVar19 = param_4 - uVar10;
  if (0x3f < uVar19) {
    uVar20 = *(uint *)(lVar17 + 0x20);
    do {
      uVar11 = uVar19 >> 6;
      if (uVar19 >> 0x22 != 0) {
        uVar11 = 0x10000000;
      }
      uVar2 = uVar20 + (int)uVar11;
      uVar14 = (ulong)uVar2;
      uVar20 = 0;
      if (uVar11 <= uVar14) {
        uVar14 = 0;
        uVar20 = uVar2;
      }
      lVar18 = (uVar11 - uVar14) * 0x40;
      FUN_004afad0(uVar13,uVar12,lVar18,lVar17,lVar17 + 0x20);
      uVar19 = uVar19 + (uVar11 - uVar14) * -0x40;
      uVar12 = uVar12 + lVar18;
      *(uint *)(lVar17 + 0x20) = uVar20;
      uVar13 = uVar13 + lVar18;
      if (uVar20 == 0) {
        *(int *)(lVar17 + 0x24) = *(int *)(lVar17 + 0x24) + 1;
      }
    } while (0x3f < uVar19);
  }
  if ((param_4 & 0x3f) != 0) {
    *(undefined8 *)(lVar17 + 0x58) = 0;
    *(undefined8 *)(lVar17 + 0x50) = 0;
    *(undefined8 *)(lVar17 + 0x68) = 0;
    *(undefined8 *)(lVar17 + 0x60) = 0;
    puVar8 = (undefined8 *)(lVar17 + 0x30);
    *(undefined8 *)(lVar17 + 0x38) = 0;
    *puVar8 = 0;
    *(undefined8 *)(lVar17 + 0x48) = 0;
    *(undefined8 *)(lVar17 + 0x40) = 0;
    FUN_004afad0(puVar8,puVar8,0x40,lVar17,lVar17 + 0x20);
    if (uVar9 == 1) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      do {
        pbVar4 = (byte *)(uVar12 + lVar18);
        pbVar5 = (byte *)(lVar17 + 0x30 + lVar18);
        pbVar6 = (byte *)(uVar13 + lVar18);
        lVar18 = lVar18 + 2;
        *pbVar6 = *pbVar5 ^ *pbVar4;
        pbVar6[1] = pbVar5[1] ^ pbVar4[1];
      } while (uVar10 - (uVar10 & 1) != lVar18);
    }
    if ((param_4 & 1) != 0) {
      *(byte *)(uVar13 + lVar18) = *(byte *)(lVar17 + lVar18 + 0x30) ^ *(byte *)(uVar12 + lVar18);
    }
    *(uint *)(lVar17 + 0x70) = uVar9;
  }
  return 1;
}


