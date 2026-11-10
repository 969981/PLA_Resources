/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00473ef0; name: FUN_00473ef0
 */


undefined8 FUN_00473ef0(byte *param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  code *pcVar1;
  byte bVar2;
  ushort uVar3;
  uint3 uVar4;
  uint5 uVar5;
  uint6 uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined8 uVar18;
  byte bVar25;
  byte bVar26;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  undefined8 uVar27;
  byte bVar34;
  byte bVar35;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined8 uVar36;
  undefined8 uVar37;
  byte bVar44;
  byte bVar45;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  undefined8 uVar46;
  byte bVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 local_70 [2];
  
  bVar2 = *param_1;
  pcVar1 = *(code **)(param_1 + 0x28);
  uVar36 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar2 >> 6 & 1) == 0) {
    (*pcVar1)(param_1,param_1 + 0x10,uVar36);
  }
  uVar8 = (ulong)bVar2 & 7;
  uVar16 = uVar8 ^ 0xf;
  *param_1 = (byte)uVar8;
  if ((int)uVar8 == 0) {
    uVar8 = 0;
  }
  else {
    bVar17 = param_1[uVar16];
    uVar15 = uVar16 + 1;
    param_1[uVar16] = 0;
    uVar8 = (ulong)bVar17 << 8;
    if (uVar15 < 0xf) {
      uVar3 = CONCAT11(bVar17,param_1[uVar15]);
      param_1[uVar15] = 0;
      uVar15 = uVar16 + 2;
      uVar8 = (ulong)uVar3 << 8;
      if (uVar15 < 0xf) {
        uVar4 = CONCAT21(uVar3,param_1[uVar15]);
        param_1[uVar15] = 0;
        uVar15 = uVar16 + 3;
        uVar8 = (ulong)uVar4 << 8;
        if (uVar15 < 0xf) {
          uVar10 = CONCAT31(uVar4,param_1[uVar15]);
          param_1[uVar15] = 0;
          uVar15 = uVar16 + 4;
          uVar8 = (ulong)uVar10 << 8;
          if (uVar15 < 0xf) {
            uVar5 = CONCAT41(uVar10,param_1[uVar15]);
            param_1[uVar15] = 0;
            uVar15 = uVar16 + 5;
            uVar8 = (ulong)uVar5 << 8;
            if (uVar15 < 0xf) {
              uVar6 = CONCAT51(uVar5,param_1[uVar15]);
              param_1[uVar15] = 0;
              uVar15 = uVar16 + 6;
              uVar8 = (ulong)uVar6 << 8;
              if (uVar15 < 0xf) {
                bVar17 = param_1[uVar15];
                param_1[uVar15] = 0;
                uVar8 = (ulong)CONCAT61(uVar6,bVar17) << 8;
              }
            }
          }
        }
      }
    }
  }
  bVar17 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar8 | bVar17) != param_4) {
    return 0xffffffff;
  }
  uVar15 = param_4 >> 4;
  uVar8 = param_4;
  if (uVar15 != 0) {
    (*param_5)(param_2,param_3,uVar15,uVar36,param_1,param_1 + 0x10);
    uVar9 = param_4 & 0xfffffffffffffff0;
    uVar8 = param_4 - uVar9;
    if (uVar8 == 0) goto LAB_004741c4;
    param_2 = param_2 + uVar9;
    param_3 = param_3 + uVar9;
    uVar15 = (ulong)param_1[0xf] + (uVar15 & 0xff);
    param_1[0xf] = (byte)uVar15;
    uVar15 = uVar15 >> 8;
    if (uVar15 != 0 || param_4 >> 0xc != 0) {
      uVar15 = uVar15 + (param_4 >> 0xc & 0xff) + (ulong)param_1[0xe];
      param_1[0xe] = (byte)uVar15;
      uVar15 = uVar15 >> 8;
      if (uVar15 != 0 || param_4 >> 0x14 != 0) {
        uVar15 = uVar15 + (param_4 >> 0x14 & 0xff) + (ulong)param_1[0xd];
        param_1[0xd] = (byte)uVar15;
        uVar15 = uVar15 >> 8;
        if (uVar15 != 0 || param_4 >> 0x1c != 0) {
          uVar15 = uVar15 + (param_4 >> 0x1c & 0xff) + (ulong)param_1[0xc];
          param_1[0xc] = (byte)uVar15;
          uVar15 = uVar15 >> 8;
          if (uVar15 != 0 || param_4 >> 0x24 != 0) {
            uVar15 = uVar15 + (param_4 >> 0x24 & 0xff) + (ulong)param_1[0xb];
            param_1[0xb] = (byte)uVar15;
            uVar15 = uVar15 >> 8;
            if (uVar15 != 0 || param_4 >> 0x2c != 0) {
              uVar15 = uVar15 + (param_4 >> 0x2c & 0xff) + (ulong)param_1[10];
              param_1[10] = (byte)uVar15;
              uVar15 = uVar15 >> 8;
              if (uVar15 != 0 || param_4 >> 0x34 != 0) {
                uVar15 = uVar15 + (param_4 >> 0x34 & 0xff) + (ulong)param_1[9];
                param_1[9] = (byte)uVar15;
                if (uVar15 >> 8 != 0 || param_4 >> 0x3c != 0) {
                  param_1[8] = param_1[8] + (char)(uVar15 >> 8) + (byte)(param_4 >> 0x3c);
                }
              }
            }
          }
        }
      }
    }
  }
  if (uVar8 == 0) goto LAB_004741c4;
  (*pcVar1)(param_1,local_70,uVar36);
  if (uVar8 < 0x20) {
    uVar15 = 0;
    uVar10 = 0;
LAB_00474188:
    do {
      uVar10 = uVar10 + 1;
      bVar17 = param_2[uVar15] ^ *(byte *)((long)local_70 + uVar15);
      param_3[uVar15] = bVar17;
      param_1[uVar15 + 0x10] = param_1[uVar15 + 0x10] ^ bVar17;
      uVar15 = (ulong)uVar10;
    } while (uVar15 < uVar8);
  }
  else {
    uVar10 = 0;
    uVar15 = 0;
    if (((int)(uVar8 - 1) == -1) || (uVar8 - 1 >> 0x20 != 0)) goto LAB_00474188;
    pbVar12 = param_1 + 0x10;
    uVar10 = 0;
    uVar15 = 0;
    if ((param_3 < pbVar12 + uVar8 && pbVar12 < param_3 + uVar8) ||
       ((param_3 < param_2 + uVar8 && param_2 < param_3 + uVar8 ||
        (pbVar12 < param_2 + uVar8 && param_2 < pbVar12 + uVar8)))) goto LAB_00474188;
    uVar15 = uVar8 & 0xffffffffffffffe0;
    uVar10 = (uint)uVar8 & 0xffffffe0;
    puVar11 = local_70 + 2;
    pbVar12 = param_2 + 0x10;
    pbVar14 = param_3 + 0x10;
    uVar9 = uVar15;
    pbVar7 = param_1;
    do {
      pbVar13 = pbVar7 + 0x20;
      uVar27 = puVar11[-1];
      uVar18 = puVar11[-2];
      uVar46 = puVar11[1];
      uVar37 = *puVar11;
      puVar11 = puVar11 + 4;
      uVar9 = uVar9 - 0x20;
      uVar55 = *(undefined8 *)(pbVar12 + -8);
      uVar54 = *(undefined8 *)(pbVar12 + -0x10);
      uVar57 = *(undefined8 *)(pbVar12 + 8);
      uVar56 = *(undefined8 *)pbVar12;
      pbVar12 = pbVar12 + 0x20;
      bVar35 = (byte)uVar56 ^ (byte)uVar37;
      bVar38 = (byte)((ulong)uVar56 >> 8) ^ (byte)((ulong)uVar37 >> 8);
      bVar39 = (byte)((ulong)uVar56 >> 0x10) ^ (byte)((ulong)uVar37 >> 0x10);
      bVar40 = (byte)((ulong)uVar56 >> 0x18) ^ (byte)((ulong)uVar37 >> 0x18);
      bVar41 = (byte)((ulong)uVar56 >> 0x20) ^ (byte)((ulong)uVar37 >> 0x20);
      bVar42 = (byte)((ulong)uVar56 >> 0x28) ^ (byte)((ulong)uVar37 >> 0x28);
      bVar43 = (byte)((ulong)uVar56 >> 0x30) ^ (byte)((ulong)uVar37 >> 0x30);
      bVar44 = (byte)((ulong)uVar56 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38);
      bVar45 = (byte)uVar57 ^ (byte)uVar46;
      bVar47 = (byte)((ulong)uVar57 >> 8) ^ (byte)((ulong)uVar46 >> 8);
      bVar48 = (byte)((ulong)uVar57 >> 0x10) ^ (byte)((ulong)uVar46 >> 0x10);
      bVar49 = (byte)((ulong)uVar57 >> 0x18) ^ (byte)((ulong)uVar46 >> 0x18);
      bVar50 = (byte)((ulong)uVar57 >> 0x20) ^ (byte)((ulong)uVar46 >> 0x20);
      bVar51 = (byte)((ulong)uVar57 >> 0x28) ^ (byte)((ulong)uVar46 >> 0x28);
      bVar52 = (byte)((ulong)uVar57 >> 0x30) ^ (byte)((ulong)uVar46 >> 0x30);
      bVar53 = (byte)((ulong)uVar57 >> 0x38) ^ (byte)((ulong)uVar46 >> 0x38);
      bVar17 = (byte)uVar54 ^ (byte)uVar18;
      bVar19 = (byte)((ulong)uVar54 >> 8) ^ (byte)((ulong)uVar18 >> 8);
      bVar20 = (byte)((ulong)uVar54 >> 0x10) ^ (byte)((ulong)uVar18 >> 0x10);
      bVar21 = (byte)((ulong)uVar54 >> 0x18) ^ (byte)((ulong)uVar18 >> 0x18);
      bVar22 = (byte)((ulong)uVar54 >> 0x20) ^ (byte)((ulong)uVar18 >> 0x20);
      bVar23 = (byte)((ulong)uVar54 >> 0x28) ^ (byte)((ulong)uVar18 >> 0x28);
      bVar24 = (byte)((ulong)uVar54 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30);
      bVar25 = (byte)((ulong)uVar54 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38);
      bVar26 = (byte)uVar55 ^ (byte)uVar27;
      bVar28 = (byte)((ulong)uVar55 >> 8) ^ (byte)((ulong)uVar27 >> 8);
      bVar29 = (byte)((ulong)uVar55 >> 0x10) ^ (byte)((ulong)uVar27 >> 0x10);
      bVar30 = (byte)((ulong)uVar55 >> 0x18) ^ (byte)((ulong)uVar27 >> 0x18);
      bVar31 = (byte)((ulong)uVar55 >> 0x20) ^ (byte)((ulong)uVar27 >> 0x20);
      bVar32 = (byte)((ulong)uVar55 >> 0x28) ^ (byte)((ulong)uVar27 >> 0x28);
      bVar33 = (byte)((ulong)uVar55 >> 0x30) ^ (byte)((ulong)uVar27 >> 0x30);
      bVar34 = (byte)((ulong)uVar55 >> 0x38) ^ (byte)((ulong)uVar27 >> 0x38);
      *(ulong *)(pbVar14 + -8) =
           CONCAT17(bVar34,CONCAT16(bVar33,CONCAT15(bVar32,CONCAT14(bVar31,CONCAT13(bVar30,CONCAT12(
                                                  bVar29,CONCAT11(bVar28,bVar26)))))));
      *(ulong *)(pbVar14 + -0x10) =
           CONCAT17(bVar25,CONCAT16(bVar24,CONCAT15(bVar23,CONCAT14(bVar22,CONCAT13(bVar21,CONCAT12(
                                                  bVar20,CONCAT11(bVar19,bVar17)))))));
      *(ulong *)(pbVar14 + 8) =
           CONCAT17(bVar53,CONCAT16(bVar52,CONCAT15(bVar51,CONCAT14(bVar50,CONCAT13(bVar49,CONCAT12(
                                                  bVar48,CONCAT11(bVar47,bVar45)))))));
      *(ulong *)pbVar14 =
           CONCAT17(bVar44,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,CONCAT13(bVar40,CONCAT12(
                                                  bVar39,CONCAT11(bVar38,bVar35)))))));
      pbVar14 = pbVar14 + 0x20;
      uVar27 = *(undefined8 *)(pbVar7 + 0x18);
      uVar18 = *(undefined8 *)(pbVar7 + 0x10);
      uVar46 = *(undefined8 *)(pbVar7 + 0x28);
      uVar37 = *(undefined8 *)pbVar13;
      *(ulong *)(pbVar7 + 0x18) =
           CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ bVar34,
                    CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ bVar33,
                             CONCAT15((byte)((ulong)uVar27 >> 0x28) ^ bVar32,
                                      CONCAT14((byte)((ulong)uVar27 >> 0x20) ^ bVar31,
                                               CONCAT13((byte)((ulong)uVar27 >> 0x18) ^ bVar30,
                                                        CONCAT12((byte)((ulong)uVar27 >> 0x10) ^
                                                                 bVar29,CONCAT11((byte)((ulong)
                                                  uVar27 >> 8) ^ bVar28,(byte)uVar27 ^ bVar26)))))))
      ;
      *(ulong *)(pbVar7 + 0x10) =
           CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ bVar25,
                    CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ bVar24,
                             CONCAT15((byte)((ulong)uVar18 >> 0x28) ^ bVar23,
                                      CONCAT14((byte)((ulong)uVar18 >> 0x20) ^ bVar22,
                                               CONCAT13((byte)((ulong)uVar18 >> 0x18) ^ bVar21,
                                                        CONCAT12((byte)((ulong)uVar18 >> 0x10) ^
                                                                 bVar20,CONCAT11((byte)((ulong)
                                                  uVar18 >> 8) ^ bVar19,(byte)uVar18 ^ bVar17)))))))
      ;
      *(ulong *)(pbVar7 + 0x28) =
           CONCAT17((byte)((ulong)uVar46 >> 0x38) ^ bVar53,
                    CONCAT16((byte)((ulong)uVar46 >> 0x30) ^ bVar52,
                             CONCAT15((byte)((ulong)uVar46 >> 0x28) ^ bVar51,
                                      CONCAT14((byte)((ulong)uVar46 >> 0x20) ^ bVar50,
                                               CONCAT13((byte)((ulong)uVar46 >> 0x18) ^ bVar49,
                                                        CONCAT12((byte)((ulong)uVar46 >> 0x10) ^
                                                                 bVar48,CONCAT11((byte)((ulong)
                                                  uVar46 >> 8) ^ bVar47,(byte)uVar46 ^ bVar45)))))))
      ;
      *(ulong *)pbVar13 =
           CONCAT17((byte)((ulong)uVar37 >> 0x38) ^ bVar44,
                    CONCAT16((byte)((ulong)uVar37 >> 0x30) ^ bVar43,
                             CONCAT15((byte)((ulong)uVar37 >> 0x28) ^ bVar42,
                                      CONCAT14((byte)((ulong)uVar37 >> 0x20) ^ bVar41,
                                               CONCAT13((byte)((ulong)uVar37 >> 0x18) ^ bVar40,
                                                        CONCAT12((byte)((ulong)uVar37 >> 0x10) ^
                                                                 bVar39,CONCAT11((byte)((ulong)
                                                  uVar37 >> 8) ^ bVar38,(byte)uVar37 ^ bVar35)))))))
      ;
      pbVar7 = pbVar13;
    } while (uVar9 != 0);
    if (uVar8 != uVar15) goto LAB_00474188;
  }
  (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar36);
LAB_004741c4:
  memset(param_1 + uVar16,0,(ulong)(0x10 - (int)uVar16));
  (*pcVar1)(param_1,local_70,uVar36);
  *param_1 = bVar2;
  uVar18 = *(undefined8 *)(param_1 + 0x18);
  uVar36 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x18) =
       CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)local_70[1] >> 0x38),
                CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)local_70[1] >> 0x30),
                         CONCAT15((byte)((ulong)uVar18 >> 0x28) ^ (byte)((ulong)local_70[1] >> 0x28)
                                  ,CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                            (byte)((ulong)local_70[1] >> 0x20),
                                            CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                     (byte)((ulong)local_70[1] >> 0x18),
                                                     CONCAT12((byte)((ulong)uVar18 >> 0x10) ^
                                                              (byte)((ulong)local_70[1] >> 0x10),
                                                              CONCAT11((byte)((ulong)uVar18 >> 8) ^
                                                                       (byte)((ulong)local_70[1] >>
                                                                             8),(byte)uVar18 ^
                                                                                (byte)local_70[1])))
                                           ))));
  *(ulong *)(param_1 + 0x10) =
       CONCAT17((byte)((ulong)uVar36 >> 0x38) ^ (byte)((ulong)local_70[0] >> 0x38),
                CONCAT16((byte)((ulong)uVar36 >> 0x30) ^ (byte)((ulong)local_70[0] >> 0x30),
                         CONCAT15((byte)((ulong)uVar36 >> 0x28) ^ (byte)((ulong)local_70[0] >> 0x28)
                                  ,CONCAT14((byte)((ulong)uVar36 >> 0x20) ^
                                            (byte)((ulong)local_70[0] >> 0x20),
                                            CONCAT13((byte)((ulong)uVar36 >> 0x18) ^
                                                     (byte)((ulong)local_70[0] >> 0x18),
                                                     CONCAT12((byte)((ulong)uVar36 >> 0x10) ^
                                                              (byte)((ulong)local_70[0] >> 0x10),
                                                              CONCAT11((byte)((ulong)uVar36 >> 8) ^
                                                                       (byte)((ulong)local_70[0] >>
                                                                             8),(byte)uVar36 ^
                                                                                (byte)local_70[0])))
                                           ))));
  return 0;
}


