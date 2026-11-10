/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00473600; name: FUN_00473600
 */


undefined8 FUN_00473600(byte *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  code *pcVar1;
  byte bVar2;
  ushort uVar3;
  uint3 uVar4;
  uint5 uVar5;
  uint6 uVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  byte *pbVar13;
  ulong *puVar14;
  ulong uVar15;
  byte bVar16;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  ulong uVar17;
  byte bVar24;
  byte bVar25;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  ulong uVar26;
  byte bVar33;
  byte bVar34;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  ulong uVar35;
  byte bVar43;
  undefined8 uVar36;
  byte bVar44;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  ulong uVar45;
  byte bVar53;
  undefined8 uVar46;
  ulong uVar54;
  ulong uVar55;
  undefined8 uVar56;
  ulong uVar57;
  undefined8 uVar58;
  ulong uVar59;
  undefined8 uVar60;
  ulong local_70 [2];
  
  bVar2 = *param_1;
  pcVar1 = *(code **)(param_1 + 0x28);
  uVar36 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar2 >> 6 & 1) == 0) {
    (*pcVar1)(param_1,param_1 + 0x10,uVar36);
  }
  uVar8 = (ulong)bVar2 & 7;
  uVar15 = uVar8 ^ 0xf;
  *param_1 = (byte)uVar8;
  if ((int)uVar8 == 0) {
    uVar8 = 0;
  }
  else {
    bVar16 = param_1[uVar15];
    uVar10 = uVar15 + 1;
    param_1[uVar15] = 0;
    uVar8 = (ulong)bVar16 << 8;
    if (uVar10 < 0xf) {
      uVar3 = CONCAT11(bVar16,param_1[uVar10]);
      param_1[uVar10] = 0;
      uVar10 = uVar15 + 2;
      uVar8 = (ulong)uVar3 << 8;
      if (uVar10 < 0xf) {
        uVar4 = CONCAT21(uVar3,param_1[uVar10]);
        param_1[uVar10] = 0;
        uVar10 = uVar15 + 3;
        uVar8 = (ulong)uVar4 << 8;
        if (uVar10 < 0xf) {
          uVar9 = CONCAT31(uVar4,param_1[uVar10]);
          param_1[uVar10] = 0;
          uVar10 = uVar15 + 4;
          uVar8 = (ulong)uVar9 << 8;
          if (uVar10 < 0xf) {
            uVar5 = CONCAT41(uVar9,param_1[uVar10]);
            param_1[uVar10] = 0;
            uVar10 = uVar15 + 5;
            uVar8 = (ulong)uVar5 << 8;
            if (uVar10 < 0xf) {
              uVar6 = CONCAT51(uVar5,param_1[uVar10]);
              param_1[uVar10] = 0;
              uVar10 = uVar15 + 6;
              uVar8 = (ulong)uVar6 << 8;
              if (uVar10 < 0xf) {
                bVar16 = param_1[uVar10];
                param_1[uVar10] = 0;
                uVar8 = (ulong)CONCAT61(uVar6,bVar16) << 8;
              }
            }
          }
        }
      }
    }
  }
  bVar16 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar8 | bVar16) != param_4) {
    return 0xffffffff;
  }
  if (0xf < param_4) {
    uVar8 = param_4;
    do {
      (*pcVar1)(param_1,local_70,uVar36);
      bVar16 = param_1[0xf];
      param_1[0xf] = (byte)(bVar16 + 1);
      if ((((bVar16 + 1 >> 8 != 0) &&
           (bVar16 = param_1[0xe], param_1[0xe] = (byte)(bVar16 + 1), bVar16 + 1 >> 8 != 0)) &&
          (bVar16 = param_1[0xd], param_1[0xd] = (byte)(bVar16 + 1), bVar16 + 1 >> 8 != 0)) &&
         (((bVar16 = param_1[0xc], param_1[0xc] = (byte)(bVar16 + 1), bVar16 + 1 >> 8 != 0 &&
           (bVar16 = param_1[0xb], param_1[0xb] = (byte)(bVar16 + 1), bVar16 + 1 >> 8 != 0)) &&
          ((bVar16 = param_1[10], param_1[10] = (byte)(bVar16 + 1), bVar16 + 1 >> 8 != 0 &&
           (bVar16 = param_1[9], param_1[9] = (byte)(bVar16 + 1), bVar16 + 1 >> 8 != 0)))))) {
        param_1[8] = param_1[8] + 1;
      }
      uVar10 = *param_2;
      *param_3 = uVar10 ^ local_70[0];
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ uVar10 ^ local_70[0];
      uVar10 = param_2[1];
      param_3[1] = uVar10 ^ local_70[1];
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ uVar10 ^ local_70[1];
      (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar36);
      uVar8 = uVar8 - 0x10;
      param_2 = param_2 + 2;
      param_3 = param_3 + 2;
    } while (0xf < uVar8);
    param_4 = param_4 & 0xf;
  }
  if (param_4 == 0) goto LAB_004739c0;
  (*pcVar1)(param_1,local_70,uVar36);
  if (param_4 < 0x20) {
    uVar8 = 0;
    uVar9 = 0;
LAB_00473984:
    do {
      uVar9 = uVar9 + 1;
      bVar16 = *(byte *)((long)param_2 + uVar8) ^ *(byte *)((long)local_70 + uVar8);
      *(byte *)((long)param_3 + uVar8) = bVar16;
      param_1[uVar8 + 0x10] = param_1[uVar8 + 0x10] ^ bVar16;
      uVar8 = (ulong)uVar9;
    } while (uVar8 < param_4);
  }
  else {
    uVar9 = 0;
    uVar8 = 0;
    if (((int)(param_4 - 1) == -1) || (param_4 - 1 >> 0x20 != 0)) goto LAB_00473984;
    puVar11 = (ulong *)(param_1 + 0x10);
    puVar12 = (ulong *)((long)puVar11 + param_4);
    puVar14 = (ulong *)((long)param_3 + param_4);
    uVar9 = 0;
    uVar8 = 0;
    if (((param_3 < puVar12 && puVar11 < puVar14) ||
        (((param_3 < (ulong *)((long)local_70 + param_4) && local_70 < puVar14 ||
          (param_3 < (ulong *)((long)param_2 + param_4) && param_2 < puVar14)) ||
         (puVar11 < (ulong *)((long)local_70 + param_4) && local_70 < puVar12)))) ||
       (puVar11 < (ulong *)((long)param_2 + param_4) && param_2 < puVar12)) goto LAB_00473984;
    uVar8 = param_4 & 0xffffffffffffffe0;
    uVar9 = (uint)param_4 & 0xffffffe0;
    puVar11 = local_70 + 2;
    puVar12 = param_2 + 2;
    puVar14 = param_3 + 2;
    uVar10 = uVar8;
    pbVar7 = param_1;
    do {
      pbVar13 = pbVar7 + 0x20;
      uVar26 = puVar11[-1];
      uVar17 = puVar11[-2];
      uVar45 = puVar11[1];
      uVar35 = *puVar11;
      puVar11 = puVar11 + 4;
      uVar10 = uVar10 - 0x20;
      uVar55 = puVar12[-1];
      uVar54 = puVar12[-2];
      uVar59 = puVar12[1];
      uVar57 = *puVar12;
      puVar12 = puVar12 + 4;
      bVar34 = (byte)uVar57 ^ (byte)uVar35;
      bVar37 = (byte)(uVar57 >> 8) ^ (byte)(uVar35 >> 8);
      bVar38 = (byte)(uVar57 >> 0x10) ^ (byte)(uVar35 >> 0x10);
      bVar39 = (byte)(uVar57 >> 0x18) ^ (byte)(uVar35 >> 0x18);
      bVar40 = (byte)(uVar57 >> 0x20) ^ (byte)(uVar35 >> 0x20);
      bVar41 = (byte)(uVar57 >> 0x28) ^ (byte)(uVar35 >> 0x28);
      bVar42 = (byte)(uVar57 >> 0x30) ^ (byte)(uVar35 >> 0x30);
      bVar43 = (byte)(uVar57 >> 0x38) ^ (byte)(uVar35 >> 0x38);
      bVar44 = (byte)uVar59 ^ (byte)uVar45;
      bVar47 = (byte)(uVar59 >> 8) ^ (byte)(uVar45 >> 8);
      bVar48 = (byte)(uVar59 >> 0x10) ^ (byte)(uVar45 >> 0x10);
      bVar49 = (byte)(uVar59 >> 0x18) ^ (byte)(uVar45 >> 0x18);
      bVar50 = (byte)(uVar59 >> 0x20) ^ (byte)(uVar45 >> 0x20);
      bVar51 = (byte)(uVar59 >> 0x28) ^ (byte)(uVar45 >> 0x28);
      bVar52 = (byte)(uVar59 >> 0x30) ^ (byte)(uVar45 >> 0x30);
      bVar53 = (byte)(uVar59 >> 0x38) ^ (byte)(uVar45 >> 0x38);
      bVar16 = (byte)uVar54 ^ (byte)uVar17;
      bVar18 = (byte)(uVar54 >> 8) ^ (byte)(uVar17 >> 8);
      bVar19 = (byte)(uVar54 >> 0x10) ^ (byte)(uVar17 >> 0x10);
      bVar20 = (byte)(uVar54 >> 0x18) ^ (byte)(uVar17 >> 0x18);
      bVar21 = (byte)(uVar54 >> 0x20) ^ (byte)(uVar17 >> 0x20);
      bVar22 = (byte)(uVar54 >> 0x28) ^ (byte)(uVar17 >> 0x28);
      bVar23 = (byte)(uVar54 >> 0x30) ^ (byte)(uVar17 >> 0x30);
      bVar24 = (byte)(uVar54 >> 0x38) ^ (byte)(uVar17 >> 0x38);
      bVar25 = (byte)uVar55 ^ (byte)uVar26;
      bVar27 = (byte)(uVar55 >> 8) ^ (byte)(uVar26 >> 8);
      bVar28 = (byte)(uVar55 >> 0x10) ^ (byte)(uVar26 >> 0x10);
      bVar29 = (byte)(uVar55 >> 0x18) ^ (byte)(uVar26 >> 0x18);
      bVar30 = (byte)(uVar55 >> 0x20) ^ (byte)(uVar26 >> 0x20);
      bVar31 = (byte)(uVar55 >> 0x28) ^ (byte)(uVar26 >> 0x28);
      bVar32 = (byte)(uVar55 >> 0x30) ^ (byte)(uVar26 >> 0x30);
      bVar33 = (byte)(uVar55 >> 0x38) ^ (byte)(uVar26 >> 0x38);
      puVar14[-1] = CONCAT17(bVar33,CONCAT16(bVar32,CONCAT15(bVar31,CONCAT14(bVar30,CONCAT13(bVar29,
                                                  CONCAT12(bVar28,CONCAT11(bVar27,bVar25)))))));
      puVar14[-2] = CONCAT17(bVar24,CONCAT16(bVar23,CONCAT15(bVar22,CONCAT14(bVar21,CONCAT13(bVar20,
                                                  CONCAT12(bVar19,CONCAT11(bVar18,bVar16)))))));
      puVar14[1] = CONCAT17(bVar53,CONCAT16(bVar52,CONCAT15(bVar51,CONCAT14(bVar50,CONCAT13(bVar49,
                                                  CONCAT12(bVar48,CONCAT11(bVar47,bVar44)))))));
      *puVar14 = CONCAT17(bVar43,CONCAT16(bVar42,CONCAT15(bVar41,CONCAT14(bVar40,CONCAT13(bVar39,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar34)))))));
      puVar14 = puVar14 + 4;
      uVar56 = *(undefined8 *)(pbVar7 + 0x18);
      uVar46 = *(undefined8 *)(pbVar7 + 0x10);
      uVar60 = *(undefined8 *)(pbVar7 + 0x28);
      uVar58 = *(undefined8 *)pbVar13;
      *(ulong *)(pbVar7 + 0x18) =
           CONCAT17((byte)((ulong)uVar56 >> 0x38) ^ bVar33,
                    CONCAT16((byte)((ulong)uVar56 >> 0x30) ^ bVar32,
                             CONCAT15((byte)((ulong)uVar56 >> 0x28) ^ bVar31,
                                      CONCAT14((byte)((ulong)uVar56 >> 0x20) ^ bVar30,
                                               CONCAT13((byte)((ulong)uVar56 >> 0x18) ^ bVar29,
                                                        CONCAT12((byte)((ulong)uVar56 >> 0x10) ^
                                                                 bVar28,CONCAT11((byte)((ulong)
                                                  uVar56 >> 8) ^ bVar27,(byte)uVar56 ^ bVar25)))))))
      ;
      *(ulong *)(pbVar7 + 0x10) =
           CONCAT17((byte)((ulong)uVar46 >> 0x38) ^ bVar24,
                    CONCAT16((byte)((ulong)uVar46 >> 0x30) ^ bVar23,
                             CONCAT15((byte)((ulong)uVar46 >> 0x28) ^ bVar22,
                                      CONCAT14((byte)((ulong)uVar46 >> 0x20) ^ bVar21,
                                               CONCAT13((byte)((ulong)uVar46 >> 0x18) ^ bVar20,
                                                        CONCAT12((byte)((ulong)uVar46 >> 0x10) ^
                                                                 bVar19,CONCAT11((byte)((ulong)
                                                  uVar46 >> 8) ^ bVar18,(byte)uVar46 ^ bVar16)))))))
      ;
      *(ulong *)(pbVar7 + 0x28) =
           CONCAT17((byte)((ulong)uVar60 >> 0x38) ^ bVar53,
                    CONCAT16((byte)((ulong)uVar60 >> 0x30) ^ bVar52,
                             CONCAT15((byte)((ulong)uVar60 >> 0x28) ^ bVar51,
                                      CONCAT14((byte)((ulong)uVar60 >> 0x20) ^ bVar50,
                                               CONCAT13((byte)((ulong)uVar60 >> 0x18) ^ bVar49,
                                                        CONCAT12((byte)((ulong)uVar60 >> 0x10) ^
                                                                 bVar48,CONCAT11((byte)((ulong)
                                                  uVar60 >> 8) ^ bVar47,(byte)uVar60 ^ bVar44)))))))
      ;
      *(ulong *)pbVar13 =
           CONCAT17((byte)((ulong)uVar58 >> 0x38) ^ bVar43,
                    CONCAT16((byte)((ulong)uVar58 >> 0x30) ^ bVar42,
                             CONCAT15((byte)((ulong)uVar58 >> 0x28) ^ bVar41,
                                      CONCAT14((byte)((ulong)uVar58 >> 0x20) ^ bVar40,
                                               CONCAT13((byte)((ulong)uVar58 >> 0x18) ^ bVar39,
                                                        CONCAT12((byte)((ulong)uVar58 >> 0x10) ^
                                                                 bVar38,CONCAT11((byte)((ulong)
                                                  uVar58 >> 8) ^ bVar37,(byte)uVar58 ^ bVar34)))))))
      ;
      pbVar7 = pbVar13;
    } while (uVar10 != 0);
    if (param_4 != uVar8) goto LAB_00473984;
  }
  (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar36);
LAB_004739c0:
  memset(param_1 + uVar15,0,(ulong)(0x10 - (int)uVar15));
  (*pcVar1)(param_1,local_70,uVar36);
  *param_1 = bVar2;
  uVar46 = *(undefined8 *)(param_1 + 0x18);
  uVar36 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x18) =
       CONCAT17((byte)((ulong)uVar46 >> 0x38) ^ (byte)(local_70[1] >> 0x38),
                CONCAT16((byte)((ulong)uVar46 >> 0x30) ^ (byte)(local_70[1] >> 0x30),
                         CONCAT15((byte)((ulong)uVar46 >> 0x28) ^ (byte)(local_70[1] >> 0x28),
                                  CONCAT14((byte)((ulong)uVar46 >> 0x20) ^
                                           (byte)(local_70[1] >> 0x20),
                                           CONCAT13((byte)((ulong)uVar46 >> 0x18) ^
                                                    (byte)(local_70[1] >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar46 >> 0x10) ^
                                                             (byte)(local_70[1] >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar46 >> 8) ^
                                                                      (byte)(local_70[1] >> 8),
                                                                      (byte)uVar46 ^
                                                                      (byte)local_70[1])))))));
  *(ulong *)(param_1 + 0x10) =
       CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)(local_70[0] >> 0x38),
                CONCAT16((byte)((ulong)uVar36 >> 0x30) ^ (byte)(local_70[0] >> 0x30),
                         CONCAT15((byte)((ulong)uVar36 >> 0x28) ^ (byte)(local_70[0] >> 0x28),
                                  CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                           (byte)(local_70[0] >> 0x20),
                                           CONCAT13((byte)((ulong)uVar36 >> 0x18) ^
                                                    (byte)(local_70[0] >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar36 >> 0x10) ^
                                                             (byte)(local_70[0] >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar36 >> 8) ^
                                                                      (byte)(local_70[0] >> 8),
                                                                      (byte)uVar36 ^
                                                                      (byte)local_70[0])))))));
  return 0;
}


