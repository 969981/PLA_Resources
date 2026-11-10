/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00474360; name: FUN_00474360
 */


void FUN_00474360(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                 uint *param_6,int param_7,code *param_8)

{
  long lVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar14 = *param_6;
  if (param_7 == 0) {
    uVar10 = param_3;
    puVar12 = param_2;
    puVar13 = param_1;
    if (!(uVar14 == 0 || param_3 == 0)) {
      do {
        param_1 = (ulong *)((long)puVar13 + 1);
        uVar8 = *puVar13;
        param_2 = (ulong *)((long)puVar12 + 1);
        *(byte *)puVar12 = (byte)uVar8 ^ *(byte *)((long)param_5 + (ulong)uVar14);
        *(byte *)((long)param_5 + (ulong)uVar14) = (byte)uVar8;
        uVar7 = uVar14 + 1;
        param_3 = uVar10 - 1;
        uVar14 = uVar7 & 0xf;
        if ((uVar7 & 0xf) == 0) break;
        bVar6 = uVar10 != 1;
        uVar10 = param_3;
        puVar12 = param_2;
        puVar13 = param_1;
      } while (bVar6);
    }
    if (0xf < param_3) {
      (*param_8)(param_5,param_5,param_4);
      puVar12 = param_2;
      puVar13 = param_1;
      uVar10 = param_3;
      if (uVar14 < 0x10) {
        uVar8 = (ulong)uVar14;
        uVar9 = *(ulong *)((long)param_1 + uVar8);
        *(ulong *)((long)param_2 + uVar8) = *(ulong *)((long)param_5 + uVar8) ^ uVar9;
        *(ulong *)((long)param_5 + uVar8) = uVar9;
        uVar8 = uVar8 + 8;
        if (uVar8 < 0x10) {
          uVar9 = *(ulong *)((long)param_1 + uVar8);
          *(ulong *)((long)param_2 + uVar8) = *(ulong *)((long)param_5 + uVar8) ^ uVar9;
          *(ulong *)((long)param_5 + uVar8) = uVar9;
        }
      }
      while( true ) {
        param_1 = puVar13 + 2;
        param_2 = puVar12 + 2;
        if (uVar10 - 0x10 < 0x10) break;
        (*param_8)(param_5,param_5,param_4);
        uVar8 = *param_1;
        *param_2 = *param_5 ^ uVar8;
        *param_5 = uVar8;
        uVar8 = puVar13[3];
        puVar12[3] = param_5[1] ^ uVar8;
        param_5[1] = uVar8;
        puVar12 = param_2;
        puVar13 = param_1;
        uVar10 = uVar10 - 0x10;
      }
      uVar14 = 0;
      param_3 = param_3 & 0xf;
    }
    if (param_3 != 0) {
      (*param_8)(param_5,param_5,param_4);
      if (((0x1f < param_3) && ((uint)(param_3 - 1) <= ~uVar14)) && (param_3 - 1 >> 0x20 == 0)) {
        uVar10 = (ulong)uVar14;
        lVar1 = param_3 + uVar10;
        if (((!((byte *)((long)param_2 + uVar10) < (byte *)((long)param_5 + lVar1) &&
               (byte *)((long)param_5 + uVar10) < (byte *)((long)param_2 + lVar1))) &&
            (!((byte *)((long)param_2 + uVar10) < (byte *)((long)param_1 + lVar1) &&
              (byte *)((long)param_1 + uVar10) < (byte *)((long)param_2 + lVar1)))) &&
           (!((byte *)((long)param_5 + uVar10) < (byte *)((long)param_1 + lVar1) &&
             (byte *)((long)param_1 + uVar10) < (byte *)((long)param_5 + lVar1)))) {
          uVar8 = param_3 & 0xffffffffffffffe0;
          uVar7 = uVar14 + (int)uVar8;
          uVar10 = uVar8;
          do {
            uVar9 = (ulong)uVar14;
            uVar14 = uVar14 + 0x20;
            puVar3 = (undefined8 *)((long)param_5 + uVar9);
            pbVar2 = (byte *)((long)param_1 + uVar9);
            pbVar4 = (byte *)((long)param_2 + uVar9);
            uVar10 = uVar10 - 0x20;
            uVar16 = puVar3[1];
            uVar15 = *puVar3;
            uVar18 = puVar3[3];
            uVar17 = puVar3[2];
            uVar20 = *(undefined8 *)(pbVar2 + 8);
            uVar19 = *(undefined8 *)pbVar2;
            uVar22 = *(undefined8 *)(pbVar2 + 0x18);
            uVar21 = *(undefined8 *)(pbVar2 + 0x10);
            *(ulong *)(pbVar4 + 8) =
                 CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                          CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                            (byte)((ulong)uVar16 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                     (byte)((ulong)uVar16 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                              (byte)((ulong)uVar16 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar20 >> 0x10)
                                                                       ^ (byte)((ulong)uVar16 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar20
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar16
                                                                                      >> 8),
                                                                                (byte)uVar20 ^
                                                                                (byte)uVar16)))))));
            *(ulong *)pbVar4 =
                 CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                          CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                            (byte)((ulong)uVar15 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                     (byte)((ulong)uVar15 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                              (byte)((ulong)uVar15 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar19 >> 0x10)
                                                                       ^ (byte)((ulong)uVar15 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar19
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar15
                                                                                      >> 8),
                                                                                (byte)uVar19 ^
                                                                                (byte)uVar15)))))));
            *(ulong *)(pbVar4 + 0x18) =
                 CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                          CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                            (byte)((ulong)uVar18 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                     (byte)((ulong)uVar18 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                              (byte)((ulong)uVar18 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar22 >> 0x10)
                                                                       ^ (byte)((ulong)uVar18 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar22
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar18
                                                                                      >> 8),
                                                                                (byte)uVar22 ^
                                                                                (byte)uVar18)))))));
            *(ulong *)(pbVar4 + 0x10) =
                 CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                          CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                            (byte)((ulong)uVar17 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                     (byte)((ulong)uVar17 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                              (byte)((ulong)uVar17 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar21 >> 0x10)
                                                                       ^ (byte)((ulong)uVar17 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar21
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar17
                                                                                      >> 8),
                                                                                (byte)uVar21 ^
                                                                                (byte)uVar17)))))));
            puVar3[1] = uVar20;
            *puVar3 = uVar19;
            puVar3[3] = uVar22;
            puVar3[2] = uVar21;
          } while (uVar10 != 0);
          bVar6 = param_3 == uVar8;
          param_3 = param_3 - uVar8;
          uVar14 = uVar7;
          if (bVar6) goto LAB_00474884;
        }
      }
      uVar7 = uVar14;
      uVar10 = param_3;
      if ((param_3 & 1) != 0) {
        uVar10 = (ulong)uVar14;
        bVar5 = *(byte *)((long)param_1 + uVar10);
        *(byte *)((long)param_2 + uVar10) = bVar5 ^ *(byte *)((long)param_5 + uVar10);
        *(byte *)((long)param_5 + uVar10) = bVar5;
        uVar7 = uVar14 + 1;
        uVar10 = param_3 - 1;
      }
      if (param_3 != 1) {
        do {
          uVar8 = (ulong)uVar7;
          bVar5 = *(byte *)((long)param_1 + uVar8);
          *(byte *)((long)param_2 + uVar8) = bVar5 ^ *(byte *)((long)param_5 + uVar8);
          uVar10 = uVar10 - 2;
          *(byte *)((long)param_5 + uVar8) = bVar5;
          uVar8 = (ulong)(uVar7 + 1);
          uVar7 = uVar7 + 2;
          bVar5 = *(byte *)((long)param_1 + uVar8);
          *(byte *)((long)param_2 + uVar8) = bVar5 ^ *(byte *)((long)param_5 + uVar8);
          *(byte *)((long)param_5 + uVar8) = bVar5;
        } while (uVar10 != 0);
      }
      goto LAB_00474884;
    }
  }
  else {
    uVar10 = param_3;
    puVar12 = param_2;
    puVar13 = param_1;
    if (!(uVar14 == 0 || param_3 == 0)) {
      do {
        param_1 = (ulong *)((long)puVar13 + 1);
        bVar5 = *(byte *)((long)param_5 + (ulong)uVar14) ^ (byte)*puVar13;
        *(byte *)((long)param_5 + (ulong)uVar14) = bVar5;
        param_3 = uVar10 - 1;
        param_2 = (ulong *)((long)puVar12 + 1);
        *(byte *)puVar12 = bVar5;
        uVar7 = uVar14 + 1;
        uVar14 = uVar7 & 0xf;
        if ((uVar7 & 0xf) == 0) break;
        bVar6 = uVar10 != 1;
        uVar10 = param_3;
        puVar12 = param_2;
        puVar13 = param_1;
      } while (bVar6);
    }
    if (0xf < param_3) {
      (*param_8)(param_5,param_5,param_4);
      puVar12 = param_2;
      puVar13 = param_1;
      uVar10 = param_3;
      if (uVar14 < 0x10) {
        uVar8 = (ulong)uVar14;
        uVar9 = *(ulong *)((long)param_5 + uVar8) ^ *(ulong *)((long)param_1 + uVar8);
        *(ulong *)((long)param_5 + uVar8) = uVar9;
        *(ulong *)((long)param_2 + uVar8) = uVar9;
        uVar8 = uVar8 + 8;
        if (uVar8 < 0x10) {
          uVar9 = *(ulong *)((long)param_5 + uVar8) ^ *(ulong *)((long)param_1 + uVar8);
          *(ulong *)((long)param_5 + uVar8) = uVar9;
          *(ulong *)((long)param_2 + uVar8) = uVar9;
        }
      }
      while( true ) {
        param_1 = puVar13 + 2;
        param_2 = puVar12 + 2;
        if (uVar10 - 0x10 < 0x10) break;
        (*param_8)(param_5,param_5,param_4);
        uVar8 = *param_1;
        uVar9 = *param_5;
        *param_5 = uVar9 ^ uVar8;
        *param_2 = uVar9 ^ uVar8;
        uVar8 = puVar13[3];
        uVar9 = param_5[1];
        param_5[1] = uVar9 ^ uVar8;
        puVar12[3] = uVar9 ^ uVar8;
        puVar12 = param_2;
        puVar13 = param_1;
        uVar10 = uVar10 - 0x10;
      }
      uVar14 = 0;
      param_3 = param_3 & 0xf;
    }
    if (param_3 != 0) {
      (*param_8)(param_5,param_5,param_4);
      uVar10 = param_3;
      uVar7 = uVar14;
      if (((0x1f < param_3) && ((uint)(param_3 - 1) <= ~uVar14)) && (param_3 - 1 >> 0x20 == 0)) {
        uVar8 = (ulong)uVar14;
        lVar1 = param_3 + uVar8;
        if ((((byte *)((long)param_2 + lVar1) <= (byte *)((long)param_5 + uVar8) ||
              (byte *)((long)param_5 + lVar1) <= (byte *)((long)param_2 + uVar8)) &&
            ((byte *)((long)param_1 + lVar1) <= (byte *)((long)param_5 + uVar8) ||
             (byte *)((long)param_5 + lVar1) <= (byte *)((long)param_1 + uVar8))) &&
           ((byte *)((long)param_1 + lVar1) <= (byte *)((long)param_2 + uVar8) ||
            (byte *)((long)param_2 + lVar1) <= (byte *)((long)param_1 + uVar8))) {
          uVar9 = param_3 & 0xffffffffffffffe0;
          uVar10 = param_3 - uVar9;
          uVar7 = uVar14 + (int)uVar9;
          uVar8 = uVar9;
          do {
            uVar11 = (ulong)uVar14;
            uVar14 = uVar14 + 0x20;
            pbVar2 = (byte *)((long)param_1 + uVar11);
            uVar16 = *(undefined8 *)(pbVar2 + 8);
            uVar15 = *(undefined8 *)pbVar2;
            uVar18 = *(undefined8 *)(pbVar2 + 0x18);
            uVar17 = *(undefined8 *)(pbVar2 + 0x10);
            puVar3 = (undefined8 *)((long)param_5 + uVar11);
            pbVar2 = (byte *)((long)param_2 + uVar11);
            uVar8 = uVar8 - 0x20;
            uVar20 = puVar3[1];
            uVar19 = *puVar3;
            uVar22 = puVar3[3];
            uVar21 = puVar3[2];
            uVar17 = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                              CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
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
            uVar18 = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                              CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                 (byte)((ulong)uVar18 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                          (byte)((ulong)uVar18 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                                   (byte)((ulong)uVar18 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar22 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar22 ^ (byte)uVar18)))))));
            uVar15 = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                              CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                 (byte)((ulong)uVar15 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                          (byte)((ulong)uVar15 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                   (byte)((ulong)uVar15 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar19 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar15 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) ^ (byte)((ulong)uVar15 >> 8),
                                                  (byte)uVar19 ^ (byte)uVar15)))))));
            uVar16 = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                              CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                 (byte)((ulong)uVar16 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                          (byte)((ulong)uVar16 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                                   (byte)((ulong)uVar16 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar20 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar16 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar20 >> 8) ^ (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar20 ^ (byte)uVar16)))))));
            puVar3[1] = uVar16;
            *puVar3 = uVar15;
            puVar3[3] = uVar18;
            puVar3[2] = uVar17;
            *(undefined8 *)(pbVar2 + 8) = uVar16;
            *(undefined8 *)pbVar2 = uVar15;
            *(undefined8 *)(pbVar2 + 0x18) = uVar18;
            *(undefined8 *)(pbVar2 + 0x10) = uVar17;
          } while (uVar8 != 0);
          if (param_3 == uVar9) goto LAB_00474884;
        }
      }
      uVar8 = uVar10;
      if ((uVar10 & 1) != 0) {
        uVar8 = (ulong)uVar7;
        uVar7 = uVar7 + 1;
        bVar5 = *(byte *)((long)param_5 + uVar8) ^ *(byte *)((long)param_1 + uVar8);
        *(byte *)((long)param_5 + uVar8) = bVar5;
        *(byte *)((long)param_2 + uVar8) = bVar5;
        uVar8 = uVar10 - 1;
      }
      if (uVar10 != 1) {
        do {
          uVar10 = (ulong)uVar7;
          bVar5 = *(byte *)((long)param_5 + uVar10) ^ *(byte *)((long)param_1 + uVar10);
          *(byte *)((long)param_5 + uVar10) = bVar5;
          uVar8 = uVar8 - 2;
          *(byte *)((long)param_2 + uVar10) = bVar5;
          uVar10 = (ulong)(uVar7 + 1);
          uVar7 = uVar7 + 2;
          bVar5 = *(byte *)((long)param_5 + uVar10) ^ *(byte *)((long)param_1 + uVar10);
          *(byte *)((long)param_5 + uVar10) = bVar5;
          *(byte *)((long)param_2 + uVar10) = bVar5;
        } while (uVar8 != 0);
      }
      goto LAB_00474884;
    }
  }
  uVar7 = uVar14;
LAB_00474884:
  *param_6 = uVar7;
  return;
}


