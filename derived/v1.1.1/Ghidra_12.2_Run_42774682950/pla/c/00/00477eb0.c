/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00477eb0; name: FUN_00477eb0
 */


bool FUN_00477eb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  byte *pbVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[6] = 5;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  lVar11 = FUN_00400260(0x50,"external/openssl/crypto/modes/ocb128.c",0x9e);
  param_1[0xb] = lVar11;
  if (lVar11 == 0) {
    FUN_004014b0(0xf,0x7a,0x41,"external/openssl/crypto/modes/ocb128.c",0x9f);
  }
  else {
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[2] = param_2;
    param_1[3] = param_3;
    param_1[4] = param_6;
    (*param_4)(param_1 + 7,param_1 + 7,param_2);
    uVar10 = DAT_0388a5b8;
    uVar5 = *(undefined8 *)((long)param_1 + 0x3d);
    bVar15 = (byte)((ulong)uVar5 >> 8);
    bVar16 = (byte)((ulong)uVar5 >> 0x10);
    bVar17 = (byte)((ulong)uVar5 >> 0x18);
    bVar18 = (byte)((ulong)uVar5 >> 0x20);
    bVar19 = (byte)((ulong)uVar5 >> 0x28);
    bVar20 = (byte)((ulong)uVar5 >> 0x30);
    bVar21 = (byte)((ulong)uVar5 >> 0x38);
    cVar3 = *(char *)(param_1 + 7);
    uVar1 = (int)cVar3 >> 7 & 0xffffff87U ^ (uint)*(byte *)((long)param_1 + 0x47) << 1;
    *(byte *)((long)param_1 + 0x56) =
         *(byte *)((long)param_1 + 0x47) >> 7 | *(byte *)((long)param_1 + 0x46) << 1;
    *(byte *)((long)param_1 + 0x55) =
         *(byte *)((long)param_1 + 0x46) >> 7 | *(byte *)((long)param_1 + 0x45) << 1;
    *(byte *)((long)param_1 + 0x4b) =
         *(byte *)((long)param_1 + 0x3c) >> 7 | *(byte *)((long)param_1 + 0x3b) << 1;
    *(byte *)((long)param_1 + 0x4a) =
         *(byte *)((long)param_1 + 0x3b) >> 7 | *(byte *)((long)param_1 + 0x3a) << 1;
    *(byte *)((long)param_1 + 0x49) =
         *(byte *)((long)param_1 + 0x3a) >> 7 | *(byte *)((long)param_1 + 0x39) << 1;
    *(byte *)(param_1 + 9) = *(byte *)((long)param_1 + 0x39) >> 7 | (byte)((int)cVar3 << 1);
    *(char *)((long)param_1 + 0x57) = (char)uVar1;
    pbVar14 = (byte *)param_1[0xb];
    *(byte *)((long)param_1 + 0x4c) =
         (byte)(((uint)uVar5 & 0xff) >> 7) | *(byte *)((long)param_1 + 0x3c) << 1;
    *(ulong *)((long)param_1 + 0x4d) =
         CONCAT17(bVar21 << 1 | *(byte *)((long)param_1 + 0x45) >> 7,
                  CONCAT16(bVar20 << 1 | bVar21 >> 7,
                           CONCAT15(bVar19 << 1 | bVar20 >> 7,
                                    CONCAT14(bVar18 << 1 | bVar19 >> 7,
                                             CONCAT13(bVar17 << 1 | bVar18 >> 7,
                                                      CONCAT12(bVar16 << 1 | bVar17 >> 7,
                                                               CONCAT11(bVar15 << 1 | bVar16 >> 7,
                                                                        (char)uVar5 << 1 |
                                                                        bVar15 >> 7)))))));
    bVar17 = (byte)(uVar1 << 1);
    pbVar14[0xf] = bVar17;
    bVar15 = *(byte *)((long)param_1 + 0x56);
    pbVar14[0xe] = (byte)(uVar1 >> 7) & 1 | bVar15 << 1;
    bVar16 = *(byte *)((long)param_1 + 0x55);
    pbVar14[0xd] = bVar15 >> 7 | bVar16 << 1;
    bVar15 = *(byte *)((long)param_1 + 0x54);
    pbVar14[0xc] = bVar16 >> 7 | bVar15 << 1;
    bVar16 = *(byte *)((long)param_1 + 0x53);
    pbVar14[0xb] = bVar15 >> 7 | bVar16 << 1;
    bVar15 = *(byte *)((long)param_1 + 0x52);
    pbVar14[10] = bVar16 >> 7 | bVar15 << 1;
    bVar16 = *(byte *)((long)param_1 + 0x51);
    pbVar14[9] = bVar15 >> 7 | bVar16 << 1;
    bVar15 = *(byte *)(param_1 + 10);
    pbVar14[8] = bVar16 >> 7 | bVar15 << 1;
    bVar16 = *(byte *)((long)param_1 + 0x4f);
    pbVar14[7] = bVar15 >> 7 | bVar16 << 1;
    bVar15 = *(byte *)((long)param_1 + 0x4e);
    pbVar14[6] = bVar16 >> 7 | bVar15 << 1;
    bVar16 = *(byte *)((long)param_1 + 0x4d);
    pbVar14[5] = bVar15 >> 7 | bVar16 << 1;
    bVar15 = *(byte *)((long)param_1 + 0x4c);
    pbVar14[4] = bVar16 >> 7 | bVar15 << 1;
    bVar16 = *(byte *)((long)param_1 + 0x4b);
    pbVar14[3] = bVar15 >> 7 | bVar16 << 1;
    bVar15 = *(byte *)((long)param_1 + 0x4a);
    pbVar14[2] = bVar16 >> 7 | bVar15 << 1;
    bVar16 = *(byte *)((long)param_1 + 0x49);
    pbVar14[1] = bVar15 >> 7 | bVar16 << 1;
    cVar2 = *(char *)(param_1 + 9);
    pbVar14[0xf] = bVar17 ^ (byte)((uint)(int)(char)(cVar3 << 1) >> 7) & 0x87;
    *pbVar14 = bVar16 >> 7 | cVar2 << 1;
    pcVar12 = (char *)param_1[0xb];
    cVar2 = *pcVar12;
    uVar9 = *(undefined8 *)(pcVar12 + 1);
    bVar15 = (byte)((ulong)uVar9 >> 0x38);
    pcVar12[0x1e] = (byte)pcVar12[0xf] >> 7 | pcVar12[0xe] << 1;
    pcVar12[0x1d] = (byte)pcVar12[0xe] >> 7 | pcVar12[0xd] << 1;
    auVar4[2] = cVar2 >> 7;
    auVar4._0_2_ = (short)cVar2;
    auVar4[3] = cVar2 >> 7;
    auVar4._4_4_ = 0;
    auVar4._8_8_ = uVar9;
    uVar5 = a64_TBL(ZEXT816(0),auVar4,uVar10);
    pcVar12[0x1c] = (byte)pcVar12[0xd] >> 7 | pcVar12[0xc] << 1;
    pcVar12[0x1b] = (byte)pcVar12[0xc] >> 7 | pcVar12[0xb] << 1;
    pcVar12[0x1a] = (byte)pcVar12[0xb] >> 7 | pcVar12[10] << 1;
    pcVar12[0x19] = (byte)pcVar12[10] >> 7 | pcVar12[9] << 1;
    pcVar12[0x1f] = (byte)((ulong)(long)cVar2 >> 7) & 0x87 ^ pcVar12[0xf] << 1;
    pcVar12[0x18] = (byte)pcVar12[9] >> 7 | bVar15 << 1;
    *(ulong *)(pcVar12 + 0x10) =
         CONCAT17(bVar15 >> 7 | (char)((ulong)uVar5 >> 0x38) << 1,
                  CONCAT16((byte)((ulong)uVar9 >> 0x30) >> 7 | (char)((ulong)uVar5 >> 0x30) << 1,
                           CONCAT15((byte)((ulong)uVar9 >> 0x28) >> 7 |
                                    (char)((ulong)uVar5 >> 0x28) << 1,
                                    CONCAT14((byte)((ulong)uVar9 >> 0x20) >> 7 |
                                             (char)((ulong)uVar5 >> 0x20) << 1,
                                             CONCAT13((byte)((ulong)uVar9 >> 0x18) >> 7 |
                                                      (char)((ulong)uVar5 >> 0x18) << 1,
                                                      CONCAT12((byte)((ulong)uVar9 >> 0x10) >> 7 |
                                                               (char)((ulong)uVar5 >> 0x10) << 1,
                                                               CONCAT11((byte)((ulong)uVar9 >> 8) >>
                                                                        7 | (char)((ulong)uVar5 >> 8
                                                                                  ) << 1,
                                                                        (byte)uVar9 >> 7 |
                                                                        (char)uVar5 << 1)))))));
    lVar13 = param_1[0xb];
    cVar2 = *(char *)(lVar13 + 0x10);
    uVar5 = *(undefined8 *)(lVar13 + 0x11);
    bVar15 = (byte)((ulong)uVar5 >> 8);
    bVar16 = (byte)((ulong)uVar5 >> 0x10);
    bVar17 = (byte)((ulong)uVar5 >> 0x18);
    bVar18 = (byte)((ulong)uVar5 >> 0x20);
    bVar19 = (byte)((ulong)uVar5 >> 0x28);
    bVar20 = (byte)((ulong)uVar5 >> 0x30);
    bVar21 = (byte)((ulong)uVar5 >> 0x38);
    *(byte *)(lVar13 + 0x2e) = *(byte *)(lVar13 + 0x1f) >> 7 | *(byte *)(lVar13 + 0x1e) << 1;
    *(byte *)(lVar13 + 0x2d) = *(byte *)(lVar13 + 0x1e) >> 7 | *(byte *)(lVar13 + 0x1d) << 1;
    *(byte *)(lVar13 + 0x2c) = *(byte *)(lVar13 + 0x1d) >> 7 | *(byte *)(lVar13 + 0x1c) << 1;
    auVar6[2] = cVar2 >> 7;
    auVar6._0_2_ = (short)cVar2;
    auVar6[3] = cVar2 >> 7;
    auVar6._4_4_ = 0;
    auVar6[8] = (byte)uVar5;
    auVar6[9] = bVar15;
    auVar6[10] = bVar16;
    auVar6[0xb] = bVar17;
    auVar6[0xc] = bVar18;
    auVar6[0xd] = bVar19;
    auVar6[0xe] = bVar20;
    auVar6[0xf] = bVar21;
    uVar9 = a64_TBL(ZEXT816(0),auVar6,uVar10);
    *(byte *)(lVar13 + 0x2b) = *(byte *)(lVar13 + 0x1c) >> 7 | *(byte *)(lVar13 + 0x1b) << 1;
    *(byte *)(lVar13 + 0x2a) = *(byte *)(lVar13 + 0x1b) >> 7 | *(byte *)(lVar13 + 0x1a) << 1;
    *(byte *)(lVar13 + 0x29) = *(byte *)(lVar13 + 0x1a) >> 7 | *(byte *)(lVar13 + 0x19) << 1;
    *(byte *)(lVar13 + 0x2f) =
         (byte)((ulong)(long)cVar2 >> 7) & 0x87 ^ *(byte *)(lVar13 + 0x1f) << 1;
    *(byte *)(lVar13 + 0x28) = *(byte *)(lVar13 + 0x19) >> 7 | bVar21 << 1;
    *(ulong *)(lVar13 + 0x20) =
         CONCAT17(bVar21 >> 7 | (char)((ulong)uVar9 >> 0x38) << 1,
                  CONCAT16(bVar20 >> 7 | (char)((ulong)uVar9 >> 0x30) << 1,
                           CONCAT15(bVar19 >> 7 | (char)((ulong)uVar9 >> 0x28) << 1,
                                    CONCAT14(bVar18 >> 7 | (char)((ulong)uVar9 >> 0x20) << 1,
                                             CONCAT13(bVar17 >> 7 |
                                                      (char)((ulong)uVar9 >> 0x18) << 1,
                                                      CONCAT12(bVar16 >> 7 |
                                                               (char)((ulong)uVar9 >> 0x10) << 1,
                                                               CONCAT11(bVar15 >> 7 |
                                                                        (char)((ulong)uVar9 >> 8) <<
                                                                        1,(byte)uVar5 >> 7 |
                                                                          (char)uVar9 << 1)))))));
    lVar13 = param_1[0xb];
    cVar2 = *(char *)(lVar13 + 0x20);
    uVar5 = *(undefined8 *)(lVar13 + 0x21);
    bVar15 = (byte)((ulong)uVar5 >> 8);
    bVar16 = (byte)((ulong)uVar5 >> 0x10);
    bVar17 = (byte)((ulong)uVar5 >> 0x18);
    bVar18 = (byte)((ulong)uVar5 >> 0x20);
    bVar19 = (byte)((ulong)uVar5 >> 0x28);
    bVar20 = (byte)((ulong)uVar5 >> 0x30);
    bVar21 = (byte)((ulong)uVar5 >> 0x38);
    *(byte *)(lVar13 + 0x3e) = *(byte *)(lVar13 + 0x2f) >> 7 | *(byte *)(lVar13 + 0x2e) << 1;
    *(byte *)(lVar13 + 0x3d) = *(byte *)(lVar13 + 0x2e) >> 7 | *(byte *)(lVar13 + 0x2d) << 1;
    *(byte *)(lVar13 + 0x3c) = *(byte *)(lVar13 + 0x2d) >> 7 | *(byte *)(lVar13 + 0x2c) << 1;
    auVar7[2] = cVar2 >> 7;
    auVar7._0_2_ = (short)cVar2;
    auVar7[3] = cVar2 >> 7;
    auVar7._4_4_ = 0;
    auVar7[8] = (byte)uVar5;
    auVar7[9] = bVar15;
    auVar7[10] = bVar16;
    auVar7[0xb] = bVar17;
    auVar7[0xc] = bVar18;
    auVar7[0xd] = bVar19;
    auVar7[0xe] = bVar20;
    auVar7[0xf] = bVar21;
    uVar9 = a64_TBL(ZEXT816(0),auVar7,uVar10);
    *(byte *)(lVar13 + 0x3b) = *(byte *)(lVar13 + 0x2c) >> 7 | *(byte *)(lVar13 + 0x2b) << 1;
    *(byte *)(lVar13 + 0x3a) = *(byte *)(lVar13 + 0x2b) >> 7 | *(byte *)(lVar13 + 0x2a) << 1;
    *(byte *)(lVar13 + 0x39) = *(byte *)(lVar13 + 0x2a) >> 7 | *(byte *)(lVar13 + 0x29) << 1;
    *(byte *)(lVar13 + 0x3f) =
         (byte)((ulong)(long)cVar2 >> 7) & 0x87 ^ *(byte *)(lVar13 + 0x2f) << 1;
    *(byte *)(lVar13 + 0x38) = *(byte *)(lVar13 + 0x29) >> 7 | bVar21 << 1;
    *(ulong *)(lVar13 + 0x30) =
         CONCAT17(bVar21 >> 7 | (char)((ulong)uVar9 >> 0x38) << 1,
                  CONCAT16(bVar20 >> 7 | (char)((ulong)uVar9 >> 0x30) << 1,
                           CONCAT15(bVar19 >> 7 | (char)((ulong)uVar9 >> 0x28) << 1,
                                    CONCAT14(bVar18 >> 7 | (char)((ulong)uVar9 >> 0x20) << 1,
                                             CONCAT13(bVar17 >> 7 |
                                                      (char)((ulong)uVar9 >> 0x18) << 1,
                                                      CONCAT12(bVar16 >> 7 |
                                                               (char)((ulong)uVar9 >> 0x10) << 1,
                                                               CONCAT11(bVar15 >> 7 |
                                                                        (char)((ulong)uVar9 >> 8) <<
                                                                        1,(byte)uVar5 >> 7 |
                                                                          (char)uVar9 << 1)))))));
    lVar13 = param_1[0xb];
    cVar2 = *(char *)(lVar13 + 0x30);
    uVar5 = *(undefined8 *)(lVar13 + 0x31);
    bVar15 = (byte)((ulong)uVar5 >> 8);
    bVar16 = (byte)((ulong)uVar5 >> 0x10);
    bVar17 = (byte)((ulong)uVar5 >> 0x18);
    bVar18 = (byte)((ulong)uVar5 >> 0x20);
    bVar19 = (byte)((ulong)uVar5 >> 0x28);
    bVar20 = (byte)((ulong)uVar5 >> 0x30);
    bVar21 = (byte)((ulong)uVar5 >> 0x38);
    *(byte *)(lVar13 + 0x4d) = *(byte *)(lVar13 + 0x3e) >> 7 | *(byte *)(lVar13 + 0x3d) << 1;
    *(byte *)(lVar13 + 0x4c) = *(byte *)(lVar13 + 0x3d) >> 7 | *(byte *)(lVar13 + 0x3c) << 1;
    auVar8[2] = cVar2 >> 7;
    auVar8._0_2_ = (short)cVar2;
    auVar8[3] = cVar2 >> 7;
    auVar8._4_4_ = 0;
    auVar8[8] = (byte)uVar5;
    auVar8[9] = bVar15;
    auVar8[10] = bVar16;
    auVar8[0xb] = bVar17;
    auVar8[0xc] = bVar18;
    auVar8[0xd] = bVar19;
    auVar8[0xe] = bVar20;
    auVar8[0xf] = bVar21;
    uVar9 = a64_TBL(ZEXT816(0),auVar8,uVar10);
    *(byte *)(lVar13 + 0x4e) = *(byte *)(lVar13 + 0x3f) >> 7 | *(byte *)(lVar13 + 0x3e) << 1;
    *(byte *)(lVar13 + 0x4b) = *(byte *)(lVar13 + 0x3c) >> 7 | *(byte *)(lVar13 + 0x3b) << 1;
    *(byte *)(lVar13 + 0x4a) = *(byte *)(lVar13 + 0x3b) >> 7 | *(byte *)(lVar13 + 0x3a) << 1;
    *(byte *)(lVar13 + 0x49) = *(byte *)(lVar13 + 0x3a) >> 7 | *(byte *)(lVar13 + 0x39) << 1;
    *(byte *)(lVar13 + 0x4f) =
         (byte)((ulong)(long)cVar2 >> 7) & 0x87 ^ *(byte *)(lVar13 + 0x3f) << 1;
    *(byte *)(lVar13 + 0x48) = *(byte *)(lVar13 + 0x39) >> 7 | bVar21 << 1;
    *(ulong *)(lVar13 + 0x40) =
         CONCAT17(bVar21 >> 7 | (char)((ulong)uVar9 >> 0x38) << 1,
                  CONCAT16(bVar20 >> 7 | (char)((ulong)uVar9 >> 0x30) << 1,
                           CONCAT15(bVar19 >> 7 | (char)((ulong)uVar9 >> 0x28) << 1,
                                    CONCAT14(bVar18 >> 7 | (char)((ulong)uVar9 >> 0x20) << 1,
                                             CONCAT13(bVar17 >> 7 |
                                                      (char)((ulong)uVar9 >> 0x18) << 1,
                                                      CONCAT12(bVar16 >> 7 |
                                                               (char)((ulong)uVar9 >> 0x10) << 1,
                                                               CONCAT11(bVar15 >> 7 |
                                                                        (char)((ulong)uVar9 >> 8) <<
                                                                        1,(byte)uVar5 >> 7 |
                                                                          (char)uVar9 << 1)))))));
    param_1[5] = 4;
  }
  return lVar11 != 0;
}


