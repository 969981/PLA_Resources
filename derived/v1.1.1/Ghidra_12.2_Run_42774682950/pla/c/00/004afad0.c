/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004afad0; name: FUN_004afad0
 */


void FUN_004afad0(ulong param_1,int *param_2,ulong param_3,uint *param_4,uint *param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  int *piVar27;
  uint uVar28;
  int *piVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  int local_a0 [4];
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  if (param_3 != 0) {
    uVar2 = *param_4;
    uVar7 = param_4[1];
    uVar3 = param_4[4];
    uVar8 = param_4[5];
    uVar4 = param_4[2];
    uVar9 = param_4[3];
    uVar5 = param_4[6];
    uVar10 = param_4[7];
    uVar17 = *param_5;
    uVar11 = param_5[1];
    uVar6 = param_5[2];
    uVar12 = param_5[3];
    do {
      iVar33 = -0x14;
      uVar20 = 0x3320646e;
      uVar28 = 0x61707865;
      uVar38 = uVar7;
      uVar36 = uVar4;
      uVar39 = uVar9;
      uVar34 = uVar5;
      uVar35 = uVar10;
      uVar30 = 0x79622d32;
      uVar31 = uVar6;
      uVar32 = uVar12;
      uVar18 = uVar11;
      uVar23 = uVar3;
      uVar21 = uVar2;
      uVar26 = 0x6b206574;
      uVar24 = uVar8;
      uVar37 = uVar17;
      do {
        uVar37 = uVar21 + uVar28 ^ uVar37;
        uVar18 = uVar38 + uVar20 ^ uVar18;
        uVar13 = uVar18 >> 0x10 | uVar18 << 0x10;
        uVar14 = uVar37 >> 0x10 | uVar37 << 0x10;
        uVar23 = uVar14 + uVar23;
        uVar37 = uVar23 ^ uVar21;
        uVar24 = uVar13 + uVar24;
        uVar18 = uVar24 ^ uVar38;
        uVar18 = uVar18 >> 0x14 | uVar18 << 0xc;
        uVar37 = uVar37 >> 0x14 | uVar37 << 0xc;
        uVar28 = uVar37 + uVar21 + uVar28;
        uVar14 = uVar28 ^ uVar14;
        uVar20 = uVar18 + uVar38 + uVar20;
        uVar13 = uVar20 ^ uVar13;
        uVar13 = uVar13 >> 0x18 | uVar13 << 8;
        uVar14 = uVar14 >> 0x18 | uVar14 << 8;
        uVar23 = uVar14 + uVar23;
        uVar37 = uVar23 ^ uVar37;
        uVar32 = uVar39 + uVar26 ^ uVar32;
        uVar24 = uVar13 + uVar24;
        uVar15 = uVar37 >> 0x19 | uVar37 << 7;
        uVar31 = uVar36 + uVar30 ^ uVar31;
        uVar32 = uVar32 >> 0x10 | uVar32 << 0x10;
        uVar18 = uVar24 ^ uVar18;
        uVar35 = uVar32 + uVar35;
        uVar21 = uVar18 >> 0x19 | uVar18 << 7;
        uVar37 = uVar35 ^ uVar39;
        uVar31 = uVar31 >> 0x10 | uVar31 << 0x10;
        uVar34 = uVar31 + uVar34;
        uVar18 = uVar34 ^ uVar36;
        uVar38 = uVar37 >> 0x14 | uVar37 << 0xc;
        uVar26 = uVar38 + uVar39 + uVar26;
        uVar32 = uVar26 ^ uVar32;
        uVar26 = uVar15 + uVar26;
        uVar37 = uVar32 >> 0x18 | uVar32 << 8;
        uVar39 = uVar18 >> 0x14 | uVar18 << 0xc;
        uVar30 = uVar39 + uVar36 + uVar30;
        uVar31 = uVar30 ^ uVar31;
        uVar28 = uVar21 + uVar28;
        uVar18 = uVar31 >> 0x18 | uVar31 << 8;
        uVar35 = uVar37 + uVar35;
        uVar37 = uVar28 ^ uVar37;
        uVar37 = uVar37 >> 0x10 | uVar37 << 0x10;
        uVar38 = uVar35 ^ uVar38;
        uVar16 = uVar38 >> 0x19 | uVar38 << 7;
        uVar34 = uVar18 + uVar34;
        uVar18 = uVar26 ^ uVar18;
        uVar39 = uVar34 ^ uVar39;
        uVar34 = uVar37 + uVar34;
        uVar21 = uVar34 ^ uVar21;
        uVar31 = uVar21 >> 0x14 | uVar21 << 0xc;
        uVar28 = uVar31 + uVar28;
        uVar37 = uVar28 ^ uVar37;
        uVar32 = uVar37 >> 0x18 | uVar37 << 8;
        uVar37 = uVar39 >> 0x19 | uVar39 << 7;
        uVar20 = uVar37 + uVar20;
        uVar34 = uVar32 + uVar34;
        uVar31 = uVar34 ^ uVar31;
        uVar38 = uVar31 >> 0x19 | uVar31 << 7;
        uVar14 = uVar14 ^ uVar20;
        uVar31 = uVar14 >> 0x10 | uVar14 << 0x10;
        uVar35 = uVar31 + uVar35;
        uVar37 = uVar35 ^ uVar37;
        uVar36 = uVar37 >> 0x14 | uVar37 << 0xc;
        uVar20 = uVar36 + uVar20;
        uVar31 = uVar20 ^ uVar31;
        uVar30 = uVar16 + uVar30;
        uVar13 = uVar13 ^ uVar30;
        uVar39 = uVar13 >> 0x10 | uVar13 << 0x10;
        uVar23 = uVar23 + uVar39;
        uVar21 = uVar18 >> 0x10 | uVar18 << 0x10;
        uVar24 = uVar21 + uVar24;
        uVar15 = uVar24 ^ uVar15;
        uVar14 = uVar15 >> 0x14 | uVar15 << 0xc;
        uVar26 = uVar14 + uVar26;
        uVar21 = uVar26 ^ uVar21;
        uVar37 = uVar31 >> 0x18 | uVar31 << 8;
        uVar35 = uVar37 + uVar35;
        uVar36 = uVar35 ^ uVar36;
        uVar36 = uVar36 >> 0x19 | uVar36 << 7;
        uVar16 = uVar23 ^ uVar16;
        uVar31 = uVar16 >> 0x14 | uVar16 << 0xc;
        uVar30 = uVar31 + uVar30;
        uVar39 = uVar30 ^ uVar39;
        uVar18 = uVar39 >> 0x18 | uVar39 << 8;
        uVar23 = uVar18 + uVar23;
        uVar31 = uVar23 ^ uVar31;
        uVar39 = uVar31 >> 0x19 | uVar31 << 7;
        uVar31 = uVar21 >> 0x18 | uVar21 << 8;
        uVar24 = uVar31 + uVar24;
        uVar14 = uVar24 ^ uVar14;
        uVar21 = uVar14 >> 0x19 | uVar14 << 7;
        iVar33 = iVar33 + 2;
      } while (iVar33 != 0);
      local_a0[1] = uVar20 + 0x3320646e;
      local_a0[0] = uVar28 + 0x61707865;
      local_a0[3] = uVar26 + 0x6b206574;
      local_a0[2] = uVar30 + 0x79622d32;
      local_8c = uVar38 + uVar7;
      local_90 = uVar21 + uVar2;
      local_84 = uVar39 + uVar9;
      local_88 = uVar36 + uVar4;
      local_7c = uVar24 + uVar8;
      local_80 = uVar23 + uVar3;
      local_74 = uVar35 + uVar10;
      local_78 = uVar34 + uVar5;
      local_6c = uVar18 + uVar11;
      local_70 = uVar37 + uVar17;
      local_64 = uVar32 + uVar12;
      uVar1 = param_3;
      if (0x3f < param_3) {
        uVar1 = 0x40;
      }
      local_68 = uVar31 + uVar6;
      if (uVar1 != 0) {
        if (param_3 < 0x40) {
          uVar25 = 0;
        }
        else {
          uVar25 = 0;
          if (((long)param_2 + uVar1 <= param_1 || (int *)(param_1 + uVar1) <= param_2) &&
             ((long)local_a0 + uVar1 <= param_1 || (int *)(param_1 + uVar1) <= local_a0)) {
            uVar25 = uVar1 & 0x40;
            uVar19 = uVar25;
            puVar22 = (undefined8 *)(param_1 + 0x20);
            piVar27 = param_2 + 8;
            piVar29 = &local_80;
            do {
              uVar41 = *(undefined8 *)(piVar27 + -6);
              uVar40 = *(undefined8 *)(piVar27 + -8);
              uVar43 = *(undefined8 *)(piVar27 + -2);
              uVar42 = *(undefined8 *)(piVar27 + -4);
              uVar19 = uVar19 - 0x40;
              uVar49 = *(undefined8 *)(piVar29 + -6);
              uVar48 = *(undefined8 *)(piVar29 + -8);
              uVar51 = *(undefined8 *)(piVar29 + -2);
              uVar50 = *(undefined8 *)(piVar29 + -4);
              uVar45 = *(undefined8 *)(piVar27 + 2);
              uVar44 = *(undefined8 *)piVar27;
              uVar47 = *(undefined8 *)(piVar27 + 6);
              uVar46 = *(undefined8 *)(piVar27 + 4);
              uVar53 = *(undefined8 *)(piVar29 + 2);
              uVar52 = *(undefined8 *)piVar29;
              uVar55 = *(undefined8 *)(piVar29 + 6);
              uVar54 = *(undefined8 *)(piVar29 + 4);
              puVar22[-3] = CONCAT17((byte)((ulong)uVar49 >> 0x38) ^ (byte)((ulong)uVar41 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar49 >> 0x30) ^
                                              (byte)((ulong)uVar41 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar49 >> 0x28) ^
                                                       (byte)((ulong)uVar41 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar49 >> 0x20) ^
                                                                (byte)((ulong)uVar41 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar49 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar41 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar49 >> 0x10) ^ (byte)((ulong)uVar41 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar49 >> 8) ^
                                                           (byte)((ulong)uVar41 >> 8),
                                                           (byte)uVar49 ^ (byte)uVar41)))))));
              puVar22[-4] = CONCAT17((byte)((ulong)uVar48 >> 0x38) ^ (byte)((ulong)uVar40 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar48 >> 0x30) ^
                                              (byte)((ulong)uVar40 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar48 >> 0x28) ^
                                                       (byte)((ulong)uVar40 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar48 >> 0x20) ^
                                                                (byte)((ulong)uVar40 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar48 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar40 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar48 >> 0x10) ^ (byte)((ulong)uVar40 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar48 >> 8) ^
                                                           (byte)((ulong)uVar40 >> 8),
                                                           (byte)uVar48 ^ (byte)uVar40)))))));
              puVar22[-1] = CONCAT17((byte)((ulong)uVar51 >> 0x38) ^ (byte)((ulong)uVar43 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar51 >> 0x30) ^
                                              (byte)((ulong)uVar43 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar51 >> 0x28) ^
                                                       (byte)((ulong)uVar43 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar51 >> 0x20) ^
                                                                (byte)((ulong)uVar43 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar51 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar43 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar51 >> 0x10) ^ (byte)((ulong)uVar43 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar51 >> 8) ^
                                                           (byte)((ulong)uVar43 >> 8),
                                                           (byte)uVar51 ^ (byte)uVar43)))))));
              puVar22[-2] = CONCAT17((byte)((ulong)uVar50 >> 0x38) ^ (byte)((ulong)uVar42 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar50 >> 0x30) ^
                                              (byte)((ulong)uVar42 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar50 >> 0x28) ^
                                                       (byte)((ulong)uVar42 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar50 >> 0x20) ^
                                                                (byte)((ulong)uVar42 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar50 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar42 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar50 >> 0x10) ^ (byte)((ulong)uVar42 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar50 >> 8) ^
                                                           (byte)((ulong)uVar42 >> 8),
                                                           (byte)uVar50 ^ (byte)uVar42)))))));
              puVar22[1] = CONCAT17((byte)((ulong)uVar53 >> 0x38) ^ (byte)((ulong)uVar45 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar53 >> 0x30) ^
                                             (byte)((ulong)uVar45 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar53 >> 0x28) ^
                                                      (byte)((ulong)uVar45 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar53 >> 0x20) ^
                                                               (byte)((ulong)uVar45 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar53 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar45 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar53 >> 0x10) ^
                                                           (byte)((ulong)uVar45 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar53 >> 8) ^
                                                                    (byte)((ulong)uVar45 >> 8),
                                                                    (byte)uVar53 ^ (byte)uVar45)))))
                                            ));
              *puVar22 = CONCAT17((byte)((ulong)uVar52 >> 0x38) ^ (byte)((ulong)uVar44 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar52 >> 0x30) ^
                                           (byte)((ulong)uVar44 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar52 >> 0x28) ^
                                                    (byte)((ulong)uVar44 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar52 >> 0x20) ^
                                                             (byte)((ulong)uVar44 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar52 >> 0x18)
                                                                      ^ (byte)((ulong)uVar44 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar52
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar44
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar52 >> 8) ^ (byte)((ulong)uVar44 >> 8),
                                                  (byte)uVar52 ^ (byte)uVar44)))))));
              puVar22[3] = CONCAT17((byte)((ulong)uVar55 >> 0x38) ^ (byte)((ulong)uVar47 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar55 >> 0x30) ^
                                             (byte)((ulong)uVar47 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar55 >> 0x28) ^
                                                      (byte)((ulong)uVar47 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar55 >> 0x20) ^
                                                               (byte)((ulong)uVar47 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar55 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar47 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar55 >> 0x10) ^
                                                           (byte)((ulong)uVar47 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar55 >> 8) ^
                                                                    (byte)((ulong)uVar47 >> 8),
                                                                    (byte)uVar55 ^ (byte)uVar47)))))
                                            ));
              puVar22[2] = CONCAT17((byte)((ulong)uVar54 >> 0x38) ^ (byte)((ulong)uVar46 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar54 >> 0x30) ^
                                             (byte)((ulong)uVar46 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar54 >> 0x28) ^
                                                      (byte)((ulong)uVar46 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar54 >> 0x20) ^
                                                               (byte)((ulong)uVar46 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar54 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar46 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar54 >> 0x10) ^
                                                           (byte)((ulong)uVar46 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar54 >> 8) ^
                                                                    (byte)((ulong)uVar46 >> 8),
                                                                    (byte)uVar54 ^ (byte)uVar46)))))
                                            ));
              puVar22 = puVar22 + 8;
              piVar27 = piVar27 + 0x10;
              piVar29 = piVar29 + 0x10;
            } while (uVar19 != 0);
            if (uVar1 == uVar25) goto LAB_004afb38;
          }
        }
        do {
          *(byte *)(param_1 + uVar25) =
               *(byte *)((long)local_a0 + uVar25) ^ *(byte *)((long)param_2 + uVar25);
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar1);
      }
LAB_004afb38:
      param_1 = param_1 + uVar1;
      param_2 = (int *)((long)param_2 + uVar1);
      param_3 = param_3 - uVar1;
      uVar17 = uVar17 + 1;
    } while (param_3 != 0);
  }
  return;
}


