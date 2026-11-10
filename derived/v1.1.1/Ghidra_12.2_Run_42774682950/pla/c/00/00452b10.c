/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00452b10; name: FUN_00452b10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00452b10(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  byte bVar16;
  byte bVar18;
  long lVar17;
  byte bVar21;
  long lVar19;
  undefined8 uVar20;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  
  if ((param_2 == 0) && (param_2 = *(long *)(param_3 + 8), param_2 == 0)) {
    FUN_004014b0(3,0x65,0x6b,"external/openssl/crypto/bn/bn_blind.c",0xaf);
    return 0;
  }
  if (*(long *)(param_3 + 0x38) == 0) {
    uVar4 = FUN_00413180(param_1,param_1,param_2,*(undefined8 *)(param_3 + 0x18),param_4);
    return uVar4;
  }
  uVar2 = *(uint *)(param_2 + 8);
  uVar5 = (ulong)(int)uVar2;
  if (*(int *)((long)param_1 + 0xc) < (int)uVar2) goto LAB_00452cb8;
  uVar3 = *(uint *)(param_1 + 1);
  lVar6 = (long)(int)uVar3;
  if (uVar2 != 0) {
    lVar8 = *param_1;
    uVar1 = uVar5;
    if (uVar5 < 2) {
      uVar1 = 1;
    }
    if (uVar1 < 0x10) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar1 & 0xfffffffffffffff0;
      puVar10 = (undefined8 *)(lVar8 + 0x20);
      uVar12 = uVar9;
      lVar13 = _DAT_03889b90;
      lVar11 = _UNK_03889b98;
      lVar14 = _DAT_03888e90;
      lVar15 = _UNK_03888e98;
      do {
        lVar17 = lVar14 - lVar6;
        lVar19 = lVar15 - lVar6;
        lVar22 = lVar13 - lVar6;
        lVar24 = lVar11 - lVar6;
        uVar12 = uVar12 - 0x10;
        bVar30 = (byte)(lVar22 >> 0x3f);
        lVar13 = lVar13 + 0x10;
        lVar11 = lVar11 + 0x10;
        lVar14 = lVar14 + 0x10;
        lVar15 = lVar15 + 0x10;
        uVar20 = puVar10[-3];
        uVar4 = puVar10[-4];
        uVar25 = puVar10[-1];
        uVar23 = puVar10[-2];
        bVar16 = (byte)(lVar17 >> 0x3f);
        bVar18 = (byte)(lVar19 >> 0x3f);
        bVar21 = (byte)(lVar24 >> 0x3f);
        bVar26 = (byte)(lVar17 + 4 >> 0x3f);
        bVar27 = (byte)(lVar19 + 4 >> 0x3f);
        bVar28 = (byte)(lVar22 + 4 >> 0x3f);
        bVar29 = (byte)(lVar24 + 4 >> 0x3f);
        puVar10[-3] = CONCAT17((byte)((ulong)uVar20 >> 0x38) & bVar21,
                               CONCAT16((byte)((ulong)uVar20 >> 0x30) & bVar21,
                                        CONCAT15((byte)((ulong)uVar20 >> 0x28) & bVar21,
                                                 CONCAT14((byte)((ulong)uVar20 >> 0x20) & bVar21,
                                                          CONCAT13((byte)((ulong)uVar20 >> 0x18) &
                                                                   bVar30,CONCAT12((byte)((ulong)
                                                  uVar20 >> 0x10) & bVar30,
                                                  CONCAT11((byte)((ulong)uVar20 >> 8) & bVar30,
                                                           (byte)uVar20 & bVar30)))))));
        puVar10[-4] = CONCAT17((byte)((ulong)uVar4 >> 0x38) & bVar18,
                               CONCAT16((byte)((ulong)uVar4 >> 0x30) & bVar18,
                                        CONCAT15((byte)((ulong)uVar4 >> 0x28) & bVar18,
                                                 CONCAT14((byte)((ulong)uVar4 >> 0x20) & bVar18,
                                                          CONCAT13((byte)((ulong)uVar4 >> 0x18) &
                                                                   bVar16,CONCAT12((byte)((ulong)
                                                  uVar4 >> 0x10) & bVar16,
                                                  CONCAT11((byte)((ulong)uVar4 >> 8) & bVar16,
                                                           (byte)uVar4 & bVar16)))))));
        puVar10[-1] = CONCAT17((byte)((ulong)uVar25 >> 0x38) & bVar29,
                               CONCAT16((byte)((ulong)uVar25 >> 0x30) & bVar29,
                                        CONCAT15((byte)((ulong)uVar25 >> 0x28) & bVar29,
                                                 CONCAT14((byte)((ulong)uVar25 >> 0x20) & bVar29,
                                                          CONCAT13((byte)((ulong)uVar25 >> 0x18) &
                                                                   bVar28,CONCAT12((byte)((ulong)
                                                  uVar25 >> 0x10) & bVar28,
                                                  CONCAT11((byte)((ulong)uVar25 >> 8) & bVar28,
                                                           (byte)uVar25 & bVar28)))))));
        puVar10[-2] = CONCAT17((byte)((ulong)uVar23 >> 0x38) & bVar27,
                               CONCAT16((byte)((ulong)uVar23 >> 0x30) & bVar27,
                                        CONCAT15((byte)((ulong)uVar23 >> 0x28) & bVar27,
                                                 CONCAT14((byte)((ulong)uVar23 >> 0x20) & bVar27,
                                                          CONCAT13((byte)((ulong)uVar23 >> 0x18) &
                                                                   bVar26,CONCAT12((byte)((ulong)
                                                  uVar23 >> 0x10) & bVar26,
                                                  CONCAT11((byte)((ulong)uVar23 >> 8) & bVar26,
                                                           (byte)uVar23 & bVar26)))))));
        uVar20 = puVar10[1];
        uVar4 = *puVar10;
        uVar25 = puVar10[3];
        uVar23 = puVar10[2];
        bVar26 = (byte)(lVar17 + 0xc >> 0x3f);
        bVar27 = (byte)(lVar19 + 0xc >> 0x3f);
        bVar28 = (byte)(lVar22 + 0xc >> 0x3f);
        bVar29 = (byte)(lVar24 + 0xc >> 0x3f);
        bVar30 = (byte)(lVar17 + 8 >> 0x3f);
        bVar16 = (byte)(lVar19 + 8 >> 0x3f);
        bVar18 = (byte)(lVar22 + 8 >> 0x3f);
        bVar21 = (byte)(lVar24 + 8 >> 0x3f);
        puVar10[1] = CONCAT17((byte)((ulong)uVar20 >> 0x38) & bVar21,
                              CONCAT16((byte)((ulong)uVar20 >> 0x30) & bVar21,
                                       CONCAT15((byte)((ulong)uVar20 >> 0x28) & bVar21,
                                                CONCAT14((byte)((ulong)uVar20 >> 0x20) & bVar21,
                                                         CONCAT13((byte)((ulong)uVar20 >> 0x18) &
                                                                  bVar18,CONCAT12((byte)((ulong)
                                                  uVar20 >> 0x10) & bVar18,
                                                  CONCAT11((byte)((ulong)uVar20 >> 8) & bVar18,
                                                           (byte)uVar20 & bVar18)))))));
        *puVar10 = CONCAT17((byte)((ulong)uVar4 >> 0x38) & bVar16,
                            CONCAT16((byte)((ulong)uVar4 >> 0x30) & bVar16,
                                     CONCAT15((byte)((ulong)uVar4 >> 0x28) & bVar16,
                                              CONCAT14((byte)((ulong)uVar4 >> 0x20) & bVar16,
                                                       CONCAT13((byte)((ulong)uVar4 >> 0x18) &
                                                                bVar30,CONCAT12((byte)((ulong)uVar4
                                                                                      >> 0x10) &
                                                                                bVar30,CONCAT11((
                                                  byte)((ulong)uVar4 >> 8) & bVar30,
                                                  (byte)uVar4 & bVar30)))))));
        puVar10[3] = CONCAT17((byte)((ulong)uVar25 >> 0x38) & bVar29,
                              CONCAT16((byte)((ulong)uVar25 >> 0x30) & bVar29,
                                       CONCAT15((byte)((ulong)uVar25 >> 0x28) & bVar29,
                                                CONCAT14((byte)((ulong)uVar25 >> 0x20) & bVar29,
                                                         CONCAT13((byte)((ulong)uVar25 >> 0x18) &
                                                                  bVar28,CONCAT12((byte)((ulong)
                                                  uVar25 >> 0x10) & bVar28,
                                                  CONCAT11((byte)((ulong)uVar25 >> 8) & bVar28,
                                                           (byte)uVar25 & bVar28)))))));
        puVar10[2] = CONCAT17((byte)((ulong)uVar23 >> 0x38) & bVar27,
                              CONCAT16((byte)((ulong)uVar23 >> 0x30) & bVar27,
                                       CONCAT15((byte)((ulong)uVar23 >> 0x28) & bVar27,
                                                CONCAT14((byte)((ulong)uVar23 >> 0x20) & bVar27,
                                                         CONCAT13((byte)((ulong)uVar23 >> 0x18) &
                                                                  bVar26,CONCAT12((byte)((ulong)
                                                  uVar23 >> 0x10) & bVar26,
                                                  CONCAT11((byte)((ulong)uVar23 >> 8) & bVar26,
                                                           (byte)uVar23 & bVar26)))))));
        puVar10 = puVar10 + 8;
      } while (uVar12 != 0);
      if (uVar1 == uVar9) goto LAB_00452ca0;
    }
    do {
      lVar11 = uVar9 * 4;
      lVar13 = uVar9 - lVar6;
      uVar9 = uVar9 + 1;
      *(uint *)(lVar8 + lVar11) = *(uint *)(lVar8 + lVar11) & (uint)(lVar13 >> 0x3f);
    } while (uVar9 < uVar5);
  }
LAB_00452ca0:
  uVar7 = (uint)((long)(uVar5 - lVar6) >> 0x3f);
  *(uint *)(param_1 + 1) = uVar2 & (uVar7 ^ 0xffffffff) | uVar3 & uVar7;
LAB_00452cb8:
  uVar4 = FUN_0040d3e0(param_1,param_1,param_2);
  return uVar4;
}


