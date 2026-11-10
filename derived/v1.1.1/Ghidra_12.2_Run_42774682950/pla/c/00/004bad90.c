/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bad90; name: FUN_004bad90
 */


void FUN_004bad90(ulong *param_1,ulong *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  lVar31 = 0;
  puVar13 = param_2;
  do {
    if (((ulong)puVar13 & 7) == 0) {
      uVar14 = puVar13[1];
      uVar15 = *puVar13;
      uVar44 = puVar13[3];
      uVar16 = puVar13[2];
      uVar29 = param_1[1];
      uVar19 = *param_1;
      local_a0 = CONCAT17((byte)(uVar15 >> 0x38) ^ (byte)(uVar19 >> 0x38),
                          CONCAT16((byte)(uVar15 >> 0x30) ^ (byte)(uVar19 >> 0x30),
                                   CONCAT15((byte)(uVar15 >> 0x28) ^ (byte)(uVar19 >> 0x28),
                                            CONCAT14((byte)(uVar15 >> 0x20) ^ (byte)(uVar19 >> 0x20)
                                                     ,CONCAT13((byte)(uVar15 >> 0x18) ^
                                                               (byte)(uVar19 >> 0x18),
                                                               CONCAT12((byte)(uVar15 >> 0x10) ^
                                                                        (byte)(uVar19 >> 0x10),
                                                                        CONCAT11((byte)(uVar15 >> 8)
                                                                                 ^ (byte)(uVar19 >>
                                                                                         8),
                                                                                 (byte)uVar15 ^
                                                                                 (byte)uVar19)))))))
      ;
      uStack_98 = CONCAT17((byte)(uVar14 >> 0x38) ^ (byte)(uVar29 >> 0x38),
                           CONCAT16((byte)(uVar14 >> 0x30) ^ (byte)(uVar29 >> 0x30),
                                    CONCAT15((byte)(uVar14 >> 0x28) ^ (byte)(uVar29 >> 0x28),
                                             CONCAT14((byte)(uVar14 >> 0x20) ^
                                                      (byte)(uVar29 >> 0x20),
                                                      CONCAT13((byte)(uVar14 >> 0x18) ^
                                                               (byte)(uVar29 >> 0x18),
                                                               CONCAT12((byte)(uVar14 >> 0x10) ^
                                                                        (byte)(uVar29 >> 0x10),
                                                                        CONCAT11((byte)(uVar14 >> 8)
                                                                                 ^ (byte)(uVar29 >>
                                                                                         8),
                                                                                 (byte)uVar14 ^
                                                                                 (byte)uVar29)))))))
      ;
      uVar14 = param_1[3];
      uVar15 = param_1[2];
      local_90 = CONCAT17((byte)(uVar16 >> 0x38) ^ (byte)(uVar15 >> 0x38),
                          CONCAT16((byte)(uVar16 >> 0x30) ^ (byte)(uVar15 >> 0x30),
                                   CONCAT15((byte)(uVar16 >> 0x28) ^ (byte)(uVar15 >> 0x28),
                                            CONCAT14((byte)(uVar16 >> 0x20) ^ (byte)(uVar15 >> 0x20)
                                                     ,CONCAT13((byte)(uVar16 >> 0x18) ^
                                                               (byte)(uVar15 >> 0x18),
                                                               CONCAT12((byte)(uVar16 >> 0x10) ^
                                                                        (byte)(uVar15 >> 0x10),
                                                                        CONCAT11((byte)(uVar16 >> 8)
                                                                                 ^ (byte)(uVar15 >>
                                                                                         8),
                                                                                 (byte)uVar16 ^
                                                                                 (byte)uVar15)))))))
      ;
      uStack_88 = CONCAT17((byte)(uVar44 >> 0x38) ^ (byte)(uVar14 >> 0x38),
                           CONCAT16((byte)(uVar44 >> 0x30) ^ (byte)(uVar14 >> 0x30),
                                    CONCAT15((byte)(uVar44 >> 0x28) ^ (byte)(uVar14 >> 0x28),
                                             CONCAT14((byte)(uVar44 >> 0x20) ^
                                                      (byte)(uVar14 >> 0x20),
                                                      CONCAT13((byte)(uVar44 >> 0x18) ^
                                                               (byte)(uVar14 >> 0x18),
                                                               CONCAT12((byte)(uVar44 >> 0x10) ^
                                                                        (byte)(uVar14 >> 0x10),
                                                                        CONCAT11((byte)(uVar44 >> 8)
                                                                                 ^ (byte)(uVar14 >>
                                                                                         8),
                                                                                 (byte)uVar44 ^
                                                                                 (byte)uVar14)))))))
      ;
      uVar16 = param_1[5];
      uVar44 = param_1[4];
      uVar46 = puVar13[5];
      uVar45 = puVar13[4];
      local_80 = CONCAT17((byte)(uVar45 >> 0x38) ^ (byte)(uVar44 >> 0x38),
                          CONCAT16((byte)(uVar45 >> 0x30) ^ (byte)(uVar44 >> 0x30),
                                   CONCAT15((byte)(uVar45 >> 0x28) ^ (byte)(uVar44 >> 0x28),
                                            CONCAT14((byte)(uVar45 >> 0x20) ^ (byte)(uVar44 >> 0x20)
                                                     ,CONCAT13((byte)(uVar45 >> 0x18) ^
                                                               (byte)(uVar44 >> 0x18),
                                                               CONCAT12((byte)(uVar45 >> 0x10) ^
                                                                        (byte)(uVar44 >> 0x10),
                                                                        CONCAT11((byte)(uVar45 >> 8)
                                                                                 ^ (byte)(uVar44 >>
                                                                                         8),
                                                                                 (byte)uVar45 ^
                                                                                 (byte)uVar44)))))))
      ;
      uStack_78 = CONCAT17((byte)(uVar46 >> 0x38) ^ (byte)(uVar16 >> 0x38),
                           CONCAT16((byte)(uVar46 >> 0x30) ^ (byte)(uVar16 >> 0x30),
                                    CONCAT15((byte)(uVar46 >> 0x28) ^ (byte)(uVar16 >> 0x28),
                                             CONCAT14((byte)(uVar46 >> 0x20) ^
                                                      (byte)(uVar16 >> 0x20),
                                                      CONCAT13((byte)(uVar46 >> 0x18) ^
                                                               (byte)(uVar16 >> 0x18),
                                                               CONCAT12((byte)(uVar46 >> 0x10) ^
                                                                        (byte)(uVar16 >> 0x10),
                                                                        CONCAT11((byte)(uVar46 >> 8)
                                                                                 ^ (byte)(uVar16 >>
                                                                                         8),
                                                                                 (byte)uVar46 ^
                                                                                 (byte)uVar16)))))))
      ;
      uVar45 = param_1[6];
      local_70 = puVar13[6] ^ uVar45;
      puVar17 = puVar13 + 7;
    }
    else {
      uVar14 = puVar13[1];
      uVar15 = *puVar13;
      uVar44 = puVar13[3];
      uVar16 = puVar13[2];
      uVar46 = puVar13[5];
      uVar45 = puVar13[4];
      uVar29 = param_1[1];
      uVar19 = *param_1;
      local_a0 = CONCAT17((byte)(uVar15 >> 0x38) ^ (byte)(uVar19 >> 0x38),
                          CONCAT16((byte)(uVar15 >> 0x30) ^ (byte)(uVar19 >> 0x30),
                                   CONCAT15((byte)(uVar15 >> 0x28) ^ (byte)(uVar19 >> 0x28),
                                            CONCAT14((byte)(uVar15 >> 0x20) ^ (byte)(uVar19 >> 0x20)
                                                     ,CONCAT13((byte)(uVar15 >> 0x18) ^
                                                               (byte)(uVar19 >> 0x18),
                                                               CONCAT12((byte)(uVar15 >> 0x10) ^
                                                                        (byte)(uVar19 >> 0x10),
                                                                        CONCAT11((byte)(uVar15 >> 8)
                                                                                 ^ (byte)(uVar19 >>
                                                                                         8),
                                                                                 (byte)uVar15 ^
                                                                                 (byte)uVar19)))))))
      ;
      uStack_98 = CONCAT17((byte)(uVar14 >> 0x38) ^ (byte)(uVar29 >> 0x38),
                           CONCAT16((byte)(uVar14 >> 0x30) ^ (byte)(uVar29 >> 0x30),
                                    CONCAT15((byte)(uVar14 >> 0x28) ^ (byte)(uVar29 >> 0x28),
                                             CONCAT14((byte)(uVar14 >> 0x20) ^
                                                      (byte)(uVar29 >> 0x20),
                                                      CONCAT13((byte)(uVar14 >> 0x18) ^
                                                               (byte)(uVar29 >> 0x18),
                                                               CONCAT12((byte)(uVar14 >> 0x10) ^
                                                                        (byte)(uVar29 >> 0x10),
                                                                        CONCAT11((byte)(uVar14 >> 8)
                                                                                 ^ (byte)(uVar29 >>
                                                                                         8),
                                                                                 (byte)uVar14 ^
                                                                                 (byte)uVar29)))))))
      ;
      uVar14 = param_1[3];
      uVar15 = param_1[2];
      local_90 = CONCAT17((byte)(uVar16 >> 0x38) ^ (byte)(uVar15 >> 0x38),
                          CONCAT16((byte)(uVar16 >> 0x30) ^ (byte)(uVar15 >> 0x30),
                                   CONCAT15((byte)(uVar16 >> 0x28) ^ (byte)(uVar15 >> 0x28),
                                            CONCAT14((byte)(uVar16 >> 0x20) ^ (byte)(uVar15 >> 0x20)
                                                     ,CONCAT13((byte)(uVar16 >> 0x18) ^
                                                               (byte)(uVar15 >> 0x18),
                                                               CONCAT12((byte)(uVar16 >> 0x10) ^
                                                                        (byte)(uVar15 >> 0x10),
                                                                        CONCAT11((byte)(uVar16 >> 8)
                                                                                 ^ (byte)(uVar15 >>
                                                                                         8),
                                                                                 (byte)uVar16 ^
                                                                                 (byte)uVar15)))))))
      ;
      uStack_88 = CONCAT17((byte)(uVar44 >> 0x38) ^ (byte)(uVar14 >> 0x38),
                           CONCAT16((byte)(uVar44 >> 0x30) ^ (byte)(uVar14 >> 0x30),
                                    CONCAT15((byte)(uVar44 >> 0x28) ^ (byte)(uVar14 >> 0x28),
                                             CONCAT14((byte)(uVar44 >> 0x20) ^
                                                      (byte)(uVar14 >> 0x20),
                                                      CONCAT13((byte)(uVar44 >> 0x18) ^
                                                               (byte)(uVar14 >> 0x18),
                                                               CONCAT12((byte)(uVar44 >> 0x10) ^
                                                                        (byte)(uVar14 >> 0x10),
                                                                        CONCAT11((byte)(uVar44 >> 8)
                                                                                 ^ (byte)(uVar14 >>
                                                                                         8),
                                                                                 (byte)uVar44 ^
                                                                                 (byte)uVar14)))))))
      ;
      uVar16 = param_1[5];
      uVar44 = param_1[4];
      local_80 = CONCAT17((byte)(uVar45 >> 0x38) ^ (byte)(uVar44 >> 0x38),
                          CONCAT16((byte)(uVar45 >> 0x30) ^ (byte)(uVar44 >> 0x30),
                                   CONCAT15((byte)(uVar45 >> 0x28) ^ (byte)(uVar44 >> 0x28),
                                            CONCAT14((byte)(uVar45 >> 0x20) ^ (byte)(uVar44 >> 0x20)
                                                     ,CONCAT13((byte)(uVar45 >> 0x18) ^
                                                               (byte)(uVar44 >> 0x18),
                                                               CONCAT12((byte)(uVar45 >> 0x10) ^
                                                                        (byte)(uVar44 >> 0x10),
                                                                        CONCAT11((byte)(uVar45 >> 8)
                                                                                 ^ (byte)(uVar44 >>
                                                                                         8),
                                                                                 (byte)uVar45 ^
                                                                                 (byte)uVar44)))))))
      ;
      uStack_78 = CONCAT17((byte)(uVar46 >> 0x38) ^ (byte)(uVar16 >> 0x38),
                           CONCAT16((byte)(uVar46 >> 0x30) ^ (byte)(uVar16 >> 0x30),
                                    CONCAT15((byte)(uVar46 >> 0x28) ^ (byte)(uVar16 >> 0x28),
                                             CONCAT14((byte)(uVar46 >> 0x20) ^
                                                      (byte)(uVar16 >> 0x20),
                                                      CONCAT13((byte)(uVar46 >> 0x18) ^
                                                               (byte)(uVar16 >> 0x18),
                                                               CONCAT12((byte)(uVar46 >> 0x10) ^
                                                                        (byte)(uVar16 >> 0x10),
                                                                        CONCAT11((byte)(uVar46 >> 8)
                                                                                 ^ (byte)(uVar16 >>
                                                                                         8),
                                                                                 (byte)uVar46 ^
                                                                                 (byte)uVar16)))))))
      ;
      uVar45 = param_1[6];
      local_70 = puVar13[6] ^ uVar45;
      puVar17 = &uStack_68;
    }
    lVar37 = 0;
    uStack_68 = *puVar17 ^ param_1[7];
    uVar46 = param_1[7];
    do {
      uVar30 = uVar19 >> 0x1a;
      uVar25 = uVar19 >> 10;
      uVar32 = uVar19 >> 0x22;
      uVar18 = uVar19 >> 2;
      uVar26 = uVar19 >> 0x12;
      uVar33 = uVar19 >> 0x2a;
      uVar4 = local_a0 >> 0x28;
      uVar38 = uVar29 >> 2;
      uVar5 = local_a0 >> 0x30;
      uVar39 = uVar29 >> 10;
      uVar40 = uVar29 >> 0x12;
      uVar41 = uVar29 >> 0x1a;
      uVar42 = uVar29 >> 0x22;
      uVar6 = uStack_98 >> 0x20;
      uVar7 = uStack_98 >> 0x28;
      uVar20 = uVar15 >> 2;
      uVar23 = uVar15 >> 10;
      uVar43 = uVar15 >> 0x1a;
      uVar27 = uVar15 >> 0x12;
      uVar8 = local_90 >> 0x20;
      uVar34 = uVar14 >> 2;
      uVar35 = uVar14 >> 10;
      uVar36 = uVar14 >> 0x12;
      uVar9 = uStack_88 >> 0x18;
      uVar10 = local_80 >> 8;
      uVar24 = uVar44 >> 2;
      uVar11 = local_80 >> 0x10;
      uVar28 = uVar44 >> 10;
      uVar12 = uStack_78 >> 8;
      uVar21 = uVar16 >> 2;
      uVar22 = *(ulong *)(&DAT_03a22950 + (uVar29 >> 0x2a & 0x3fc0 | 0x30)) ^
               *(ulong *)(&DAT_03a22950 + ((ulong)((uint)(uVar19 >> 0x32) | 0x38) & 0x3ff8)) ^
               *(ulong *)(&DAT_03a22950 + (uVar15 >> 0x22 & 0x3fc0 | 0x28)) ^
               *(ulong *)(&DAT_03a22950 + (uVar14 >> 0x1a & 0x3fc0 | 0x20)) ^
               *(ulong *)(&DAT_03a22950 + (uVar44 >> 0x12 & 0x3fc0 | 0x18)) ^
               *(ulong *)(&DAT_03a22950 + (uVar16 >> 10 & 0x3fc0 | 0x10)) ^
               *(ulong *)(&DAT_03a22950 + (uVar45 >> 2 & 0x3fc0 | 8)) ^
               *(ulong *)(&DAT_03a22950 + ((ulong)(uint)((int)uVar46 << 3) & 0x7f8) * 8);
      uVar19 = *(ulong *)((long)&DAT_03a26950 + lVar37) ^
               *(ulong *)(&DAT_03a22950 + ((ulong)(uint)((int)uVar19 << 3) & 0x7f8) * 8) ^
               *(ulong *)(&DAT_03a22950 + ((ulong)((uint)(uVar29 >> 0x32) | 0x38) & 0x3ff8)) ^
               *(ulong *)(&DAT_03a22950 + (uVar15 >> 0x2a & 0x3fc0 | 0x30)) ^
               *(ulong *)(&DAT_03a22950 + (uVar14 >> 0x22 & 0x3fc0 | 0x28)) ^
               *(ulong *)(&DAT_03a22950 + (uVar44 >> 0x1a & 0x3fc0 | 0x20)) ^
               *(ulong *)(&DAT_03a22950 + (uVar16 >> 0x12 & 0x3fc0 | 0x18)) ^
               *(ulong *)(&DAT_03a22950 + (uVar45 >> 10 & 0x3fc0 | 0x10)) ^
               *(ulong *)(&DAT_03a22950 + (uVar46 >> 2 & 0x3fc0 | 8));
      uVar29 = *(ulong *)(&DAT_03a22950 + ((ulong)(uint)((int)uVar29 << 3) & 0x7f8) * 8) ^
               *(ulong *)(&DAT_03a22950 + (uVar18 & 0x3fc0 | 8)) ^
               *(ulong *)(&DAT_03a22950 + ((ulong)((uint)(uVar15 >> 0x32) | 0x38) & 0x3ff8)) ^
               *(ulong *)(&DAT_03a22950 + (uVar14 >> 0x2a & 0x3fc0 | 0x30)) ^
               *(ulong *)(&DAT_03a22950 + (uVar44 >> 0x22 & 0x3fc0 | 0x28)) ^
               *(ulong *)(&DAT_03a22950 + (uVar16 >> 0x1a & 0x3fc0 | 0x20)) ^
               *(ulong *)(&DAT_03a22950 + (uVar45 >> 0x12 & 0x3fc0 | 0x18)) ^
               *(ulong *)(&DAT_03a22950 + (uVar46 >> 10 & 0x3fc0 | 0x10));
      uVar15 = *(ulong *)(&DAT_03a22950 + (uVar38 & 0x3fc0 | 8)) ^
               *(ulong *)(&DAT_03a22950 + (uVar25 & 0x3fc0 | 0x10)) ^
               *(ulong *)(&DAT_03a22950 + ((ulong)(uint)((int)uVar15 << 3) & 0x7f8) * 8) ^
               *(ulong *)(&DAT_03a22950 + ((ulong)((uint)(uVar14 >> 0x32) | 0x38) & 0x3ff8)) ^
               *(ulong *)(&DAT_03a22950 + (uVar44 >> 0x2a & 0x3fc0 | 0x30)) ^
               *(ulong *)(&DAT_03a22950 + (uVar16 >> 0x22 & 0x3fc0 | 0x28)) ^
               *(ulong *)(&DAT_03a22950 + (uVar45 >> 0x1a & 0x3fc0 | 0x20)) ^
               *(ulong *)(&DAT_03a22950 + (uVar46 >> 0x12 & 0x3fc0 | 0x18));
      uVar18 = uStack_68 >> 0x30;
      uVar14 = *(ulong *)(&DAT_03a22950 + (uVar39 & 0x3fc0 | 0x10)) ^
               *(ulong *)(&DAT_03a22950 + (uVar26 & 0x3fc0 | 0x18)) ^
               *(ulong *)(&DAT_03a22950 + (uVar20 & 0x3fc0 | 8)) ^
               *(ulong *)(&DAT_03a22950 + ((ulong)(uint)((int)uVar14 << 3) & 0x7f8) * 8) ^
               *(ulong *)(&DAT_03a22950 + ((ulong)((uint)(uVar44 >> 0x32) | 0x38) & 0x3ff8)) ^
               *(ulong *)(&DAT_03a22950 + (uVar16 >> 0x2a & 0x3fc0 | 0x30)) ^
               *(ulong *)(&DAT_03a22950 + (uVar45 >> 0x22 & 0x3fc0 | 0x28)) ^
               *(ulong *)(&DAT_03a22950 + (uVar46 >> 0x1a & 0x3fc0 | 0x20));
      uVar44 = *(ulong *)(&DAT_03a22950 + (uVar40 & 0x3fc0 | 0x18)) ^
               *(ulong *)(&DAT_03a22950 + (uVar30 & 0x3fc0 | 0x20)) ^
               *(ulong *)(&DAT_03a22950 + (uVar23 & 0x3fc0 | 0x10)) ^
               *(ulong *)(&DAT_03a22950 + (uVar34 & 0x3fc0 | 8)) ^
               *(ulong *)(&DAT_03a22950 + ((ulong)(uint)((int)uVar44 << 3) & 0x7f8) * 8) ^
               *(ulong *)(&DAT_03a22950 + ((ulong)((uint)(uVar16 >> 0x32) | 0x38) & 0x3ff8)) ^
               *(ulong *)(&DAT_03a22950 + (uVar45 >> 0x2a & 0x3fc0 | 0x30)) ^
               *(ulong *)(&DAT_03a22950 + (uVar46 >> 0x22 & 0x3fc0 | 0x28));
      uVar16 = *(ulong *)(&DAT_03a22950 + (uVar41 & 0x3fc0 | 0x20)) ^
               *(ulong *)(&DAT_03a22950 + (uVar32 & 0x3fc0 | 0x28)) ^
               *(ulong *)(&DAT_03a22950 + (uVar27 & 0x3fc0 | 0x18)) ^
               *(ulong *)(&DAT_03a22950 + (uVar35 & 0x3fc0 | 0x10)) ^
               *(ulong *)(&DAT_03a22950 + (uVar24 & 0x3fc0 | 8)) ^
               *(ulong *)(&DAT_03a22950 + ((ulong)(uint)((int)uVar16 << 3) & 0x7f8) * 8) ^
               *(ulong *)(&DAT_03a22950 + ((ulong)((uint)(uVar45 >> 0x32) | 0x38) & 0x3ff8)) ^
               *(ulong *)(&DAT_03a22950 + (uVar46 >> 0x2a & 0x3fc0 | 0x30));
      uVar45 = *(ulong *)(&DAT_03a22950 + (uVar42 & 0x3fc0 | 0x28)) ^
               *(ulong *)(&DAT_03a22950 + (uVar33 & 0x3fc0 | 0x30)) ^
               *(ulong *)(&DAT_03a22950 + (uVar43 & 0x3fc0 | 0x20)) ^
               *(ulong *)(&DAT_03a22950 + (uVar36 & 0x3fc0 | 0x18)) ^
               *(ulong *)(&DAT_03a22950 + (uVar28 & 0x3fc0 | 0x10)) ^
               *(ulong *)(&DAT_03a22950 + (uVar21 & 0x3fc0 | 8)) ^
               *(ulong *)(&DAT_03a22950 + ((ulong)(uint)((int)uVar45 << 3) & 0x7f8) * 8) ^
               *(ulong *)(&DAT_03a22950 + ((ulong)((uint)(uVar46 >> 0x32) | 0x38) & 0x3ff8));
      uVar20 = *(ulong *)(&DAT_03a22950 + ((local_a0 >> 0x38) << 6 | 0x38)) ^ uVar22 ^
               *(ulong *)(&DAT_03a22950 + ((uStack_98 >> 0x30 & 0xff) << 6 | 0x30)) ^
               *(ulong *)(&DAT_03a22950 + ((local_90 >> 0x28 & 0xff) << 6 | 0x28)) ^
               *(ulong *)(&DAT_03a22950 + ((uStack_88 >> 0x20 & 0xff) << 6 | 0x20)) ^
               *(ulong *)(&DAT_03a22950 + ((local_80 >> 0x18 & 0xff) << 6 | 0x18)) ^
               *(ulong *)(&DAT_03a22950 + ((uStack_78 >> 0x10 & 0xff) << 6 | 0x10)) ^
               *(ulong *)(&DAT_03a22950 + ((local_70 >> 8 & 0xff) << 6 | 8)) ^
               *(ulong *)(&DAT_03a22950 + (uStack_68 & 0xff) * 0x40);
      uVar25 = *(ulong *)(&DAT_03a22950 + (local_a0 & 0xff) * 0x40) ^ uVar19 ^
               *(ulong *)(&DAT_03a22950 + ((uStack_98 >> 0x38) << 6 | 0x38)) ^
               *(ulong *)(&DAT_03a22950 + ((local_90 >> 0x30 & 0xff) << 6 | 0x30)) ^
               *(ulong *)(&DAT_03a22950 + ((uStack_88 >> 0x28 & 0xff) << 6 | 0x28)) ^
               *(ulong *)(&DAT_03a22950 + ((local_80 >> 0x20 & 0xff) << 6 | 0x20)) ^
               *(ulong *)(&DAT_03a22950 + ((uStack_78 >> 0x18 & 0xff) << 6 | 0x18)) ^
               *(ulong *)(&DAT_03a22950 + ((local_70 >> 0x10 & 0xff) << 6 | 0x10)) ^
               *(ulong *)(&DAT_03a22950 + ((uStack_68 >> 8 & 0xff) << 6 | 8));
      uVar24 = *(ulong *)(&DAT_03a22950 + ((local_a0 >> 8 & 0xff) << 6 | 8)) ^ uVar29 ^
               *(ulong *)(&DAT_03a22950 + (uStack_98 & 0xff) * 0x40) ^
               *(ulong *)(&DAT_03a22950 + ((local_90 >> 0x38) << 6 | 0x38)) ^
               *(ulong *)(&DAT_03a22950 + ((uStack_88 >> 0x30 & 0xff) << 6 | 0x30)) ^
               *(ulong *)(&DAT_03a22950 + ((local_80 >> 0x28 & 0xff) << 6 | 0x28)) ^
               *(ulong *)(&DAT_03a22950 + ((uStack_78 >> 0x20 & 0xff) << 6 | 0x20)) ^
               *(ulong *)(&DAT_03a22950 + ((local_70 >> 0x18 & 0xff) << 6 | 0x18)) ^
               *(ulong *)(&DAT_03a22950 + ((uStack_68 >> 0x10 & 0xff) << 6 | 0x10));
      uVar23 = *(ulong *)(&DAT_03a22950 + ((local_a0 >> 0x10 & 0xff) << 6 | 0x10)) ^ uVar15 ^
               *(ulong *)(&DAT_03a22950 + ((uStack_98 >> 8 & 0xff) << 6 | 8)) ^
               *(ulong *)(&DAT_03a22950 + (local_90 & 0xff) * 0x40) ^
               *(ulong *)(&DAT_03a22950 + ((uStack_88 >> 0x38) << 6 | 0x38)) ^
               *(ulong *)(&DAT_03a22950 + ((local_80 >> 0x30 & 0xff) << 6 | 0x30)) ^
               *(ulong *)(&DAT_03a22950 + ((uStack_78 >> 0x28 & 0xff) << 6 | 0x28)) ^
               *(ulong *)(&DAT_03a22950 + ((local_70 >> 0x20 & 0xff) << 6 | 0x20)) ^
               *(ulong *)(&DAT_03a22950 + ((uStack_68 >> 0x18 & 0xff) << 6 | 0x18));
      uVar21 = *(ulong *)(&DAT_03a22950 + ((local_a0 >> 0x18 & 0xff) << 6 | 0x18)) ^ uVar14 ^
               *(ulong *)(&DAT_03a22950 + ((uStack_98 >> 0x10 & 0xff) << 6 | 0x10)) ^
               *(ulong *)(&DAT_03a22950 + ((local_90 >> 8 & 0xff) << 6 | 8)) ^
               *(ulong *)(&DAT_03a22950 + (uStack_88 & 0xff) * 0x40) ^
               *(ulong *)(&DAT_03a22950 + ((local_80 >> 0x38) << 6 | 0x38)) ^
               *(ulong *)(&DAT_03a22950 + ((uStack_78 >> 0x30 & 0xff) << 6 | 0x30)) ^
               *(ulong *)(&DAT_03a22950 + ((local_70 >> 0x28 & 0xff) << 6 | 0x28)) ^
               *(ulong *)(&DAT_03a22950 + ((uStack_68 >> 0x20 & 0xff) << 6 | 0x20));
      local_80 = *(ulong *)(&DAT_03a22950 + ((local_a0 >> 0x20 & 0xff) << 6 | 0x20)) ^ uVar44 ^
                 *(ulong *)(&DAT_03a22950 + ((uStack_98 >> 0x18 & 0xff) << 6 | 0x18)) ^
                 *(ulong *)(&DAT_03a22950 + ((local_90 >> 0x10 & 0xff) << 6 | 0x10)) ^
                 *(ulong *)(&DAT_03a22950 + ((uStack_88 >> 8 & 0xff) << 6 | 8)) ^
                 *(ulong *)(&DAT_03a22950 + (local_80 & 0xff) * 0x40) ^
                 *(ulong *)(&DAT_03a22950 + ((uStack_78 >> 0x38) << 6 | 0x38)) ^
                 *(ulong *)(&DAT_03a22950 + ((local_70 >> 0x30 & 0xff) << 6 | 0x30)) ^
                 *(ulong *)(&DAT_03a22950 + ((uStack_68 >> 0x28 & 0xff) << 6 | 0x28));
      uVar46 = uStack_68 >> 0x38;
      uStack_68 = uVar20;
      local_a0 = uVar25;
      uStack_98 = uVar24;
      uStack_78 = *(ulong *)(&DAT_03a22950 + ((uVar4 & 0xff) << 6 | 0x28)) ^ uVar16 ^
                  *(ulong *)(&DAT_03a22950 + ((uVar6 & 0xff) << 6 | 0x20)) ^
                  *(ulong *)(&DAT_03a22950 + ((local_90 >> 0x18 & 0xff) << 6 | 0x18)) ^
                  *(ulong *)(&DAT_03a22950 + ((uStack_88 >> 0x10 & 0xff) << 6 | 0x10)) ^
                  *(ulong *)(&DAT_03a22950 + ((uVar10 & 0xff) << 6 | 8)) ^
                  *(ulong *)(&DAT_03a22950 + (uStack_78 & 0xff) * 0x40) ^
                  *(ulong *)(&DAT_03a22950 + ((local_70 >> 0x38) << 6 | 0x38)) ^
                  *(ulong *)(&DAT_03a22950 + ((uVar18 & 0xff) << 6 | 0x30));
      local_90 = uVar23;
      uStack_88 = uVar21;
      local_70 = *(ulong *)(&DAT_03a22950 + ((uVar5 & 0xff) << 6 | 0x30)) ^ uVar45 ^
                 *(ulong *)(&DAT_03a22950 + ((uVar7 & 0xff) << 6 | 0x28)) ^
                 *(ulong *)(&DAT_03a22950 + ((uVar8 & 0xff) << 6 | 0x20)) ^
                 *(ulong *)(&DAT_03a22950 + ((uVar9 & 0xff) << 6 | 0x18)) ^
                 *(ulong *)(&DAT_03a22950 + ((uVar11 & 0xff) << 6 | 0x10)) ^
                 *(ulong *)(&DAT_03a22950 + ((uVar12 & 0xff) << 6 | 8)) ^
                 *(ulong *)(&DAT_03a22950 + (local_70 & 0xff) * 0x40) ^
                 *(ulong *)(&DAT_03a22950 + (uVar46 << 6 | 0x38));
      lVar37 = lVar37 + 8;
      uVar46 = uVar22;
    } while (lVar37 != 0x50);
    if (((ulong)puVar13 & 7) == 0) {
      *param_1 = *puVar13 ^ uVar25 ^ *param_1;
      param_1[1] = puVar13[1] ^ uVar24 ^ param_1[1];
      param_1[2] = puVar13[2] ^ uVar23 ^ param_1[2];
      param_1[3] = puVar13[3] ^ uVar21 ^ param_1[3];
      param_1[4] = puVar13[4] ^ local_80 ^ param_1[4];
      param_1[5] = puVar13[5] ^ uStack_78 ^ param_1[5];
      param_1[6] = puVar13[6] ^ local_70 ^ param_1[6];
      param_1[7] = puVar13[7] ^ uVar20 ^ param_1[7];
    }
    else if (param_1 < (ulong *)((long)register0x00000008 + -0x60) && &local_a0 < param_1 + 8 ||
             param_1 < param_2 + lVar31 * 8 + 8 && param_2 + lVar31 * 8 < param_1 + 8) {
      lVar37 = 0;
      do {
        pbVar1 = (byte *)((long)puVar13 + lVar37);
        pbVar2 = (byte *)((long)param_1 + lVar37 + 3);
        pbVar2[-3] = *pbVar1 ^ *(byte *)((long)&local_a0 + lVar37) ^ pbVar2[-3];
        pbVar3 = (byte *)(((ulong)&local_a0 | 1) + lVar37);
        lVar37 = lVar37 + 4;
        pbVar2[-2] = pbVar1[1] ^ *pbVar3 ^ pbVar2[-2];
        pbVar2[-1] = pbVar1[2] ^ pbVar3[1] ^ pbVar2[-1];
        *pbVar2 = pbVar1[3] ^ pbVar3[2] ^ *pbVar2;
      } while (lVar37 != 0x40);
    }
    else {
      uVar29 = puVar13[1];
      uVar15 = *puVar13;
      uVar16 = param_1[1];
      uVar14 = *param_1;
      uVar44 = param_1[3];
      uVar19 = param_1[2];
      param_1[1] = CONCAT17((byte)(uVar29 >> 0x38) ^ (byte)(uVar24 >> 0x38) ^ (byte)(uVar16 >> 0x38)
                            ,CONCAT16((byte)(uVar29 >> 0x30) ^ (byte)(uVar24 >> 0x30) ^
                                      (byte)(uVar16 >> 0x30),
                                      CONCAT15((byte)(uVar29 >> 0x28) ^ (byte)(uVar24 >> 0x28) ^
                                               (byte)(uVar16 >> 0x28),
                                               CONCAT14((byte)(uVar29 >> 0x20) ^
                                                        (byte)(uVar24 >> 0x20) ^
                                                        (byte)(uVar16 >> 0x20),
                                                        CONCAT13((byte)(uVar29 >> 0x18) ^
                                                                 (byte)(uVar24 >> 0x18) ^
                                                                 (byte)(uVar16 >> 0x18),
                                                                 CONCAT12((byte)(uVar29 >> 0x10) ^
                                                                          (byte)(uVar24 >> 0x10) ^
                                                                          (byte)(uVar16 >> 0x10),
                                                                          CONCAT11((byte)(uVar29 >>
                                                                                         8) ^
                                                                                   (byte)(uVar24 >>
                                                                                         8) ^
                                                                                   (byte)(uVar16 >>
                                                                                         8),(byte)
                                                  uVar29 ^ (byte)uVar24 ^ (byte)uVar16)))))));
      *param_1 = CONCAT17((byte)(uVar15 >> 0x38) ^ (byte)(uVar25 >> 0x38) ^ (byte)(uVar14 >> 0x38),
                          CONCAT16((byte)(uVar15 >> 0x30) ^ (byte)(uVar25 >> 0x30) ^
                                   (byte)(uVar14 >> 0x30),
                                   CONCAT15((byte)(uVar15 >> 0x28) ^ (byte)(uVar25 >> 0x28) ^
                                            (byte)(uVar14 >> 0x28),
                                            CONCAT14((byte)(uVar15 >> 0x20) ^ (byte)(uVar25 >> 0x20)
                                                     ^ (byte)(uVar14 >> 0x20),
                                                     CONCAT13((byte)(uVar15 >> 0x18) ^
                                                              (byte)(uVar25 >> 0x18) ^
                                                              (byte)(uVar14 >> 0x18),
                                                              CONCAT12((byte)(uVar15 >> 0x10) ^
                                                                       (byte)(uVar25 >> 0x10) ^
                                                                       (byte)(uVar14 >> 0x10),
                                                                       CONCAT11((byte)(uVar15 >> 8)
                                                                                ^ (byte)(uVar25 >> 8
                                                                                        ) ^
                                                                                (byte)(uVar14 >> 8),
                                                                                (byte)uVar15 ^
                                                                                (byte)uVar25 ^
                                                                                (byte)uVar14)))))));
      uVar14 = puVar13[3];
      uVar15 = puVar13[2];
      param_1[3] = CONCAT17((byte)(uVar14 >> 0x38) ^ (byte)(uVar21 >> 0x38) ^ (byte)(uVar44 >> 0x38)
                            ,CONCAT16((byte)(uVar14 >> 0x30) ^ (byte)(uVar21 >> 0x30) ^
                                      (byte)(uVar44 >> 0x30),
                                      CONCAT15((byte)(uVar14 >> 0x28) ^ (byte)(uVar21 >> 0x28) ^
                                               (byte)(uVar44 >> 0x28),
                                               CONCAT14((byte)(uVar14 >> 0x20) ^
                                                        (byte)(uVar21 >> 0x20) ^
                                                        (byte)(uVar44 >> 0x20),
                                                        CONCAT13((byte)(uVar14 >> 0x18) ^
                                                                 (byte)(uVar21 >> 0x18) ^
                                                                 (byte)(uVar44 >> 0x18),
                                                                 CONCAT12((byte)(uVar14 >> 0x10) ^
                                                                          (byte)(uVar21 >> 0x10) ^
                                                                          (byte)(uVar44 >> 0x10),
                                                                          CONCAT11((byte)(uVar14 >>
                                                                                         8) ^
                                                                                   (byte)(uVar21 >>
                                                                                         8) ^
                                                                                   (byte)(uVar44 >>
                                                                                         8),(byte)
                                                  uVar14 ^ (byte)uVar21 ^ (byte)uVar44)))))));
      param_1[2] = CONCAT17((byte)(uVar15 >> 0x38) ^ (byte)(uVar23 >> 0x38) ^ (byte)(uVar19 >> 0x38)
                            ,CONCAT16((byte)(uVar15 >> 0x30) ^ (byte)(uVar23 >> 0x30) ^
                                      (byte)(uVar19 >> 0x30),
                                      CONCAT15((byte)(uVar15 >> 0x28) ^ (byte)(uVar23 >> 0x28) ^
                                               (byte)(uVar19 >> 0x28),
                                               CONCAT14((byte)(uVar15 >> 0x20) ^
                                                        (byte)(uVar23 >> 0x20) ^
                                                        (byte)(uVar19 >> 0x20),
                                                        CONCAT13((byte)(uVar15 >> 0x18) ^
                                                                 (byte)(uVar23 >> 0x18) ^
                                                                 (byte)(uVar19 >> 0x18),
                                                                 CONCAT12((byte)(uVar15 >> 0x10) ^
                                                                          (byte)(uVar23 >> 0x10) ^
                                                                          (byte)(uVar19 >> 0x10),
                                                                          CONCAT11((byte)(uVar15 >>
                                                                                         8) ^
                                                                                   (byte)(uVar23 >>
                                                                                         8) ^
                                                                                   (byte)(uVar19 >>
                                                                                         8),(byte)
                                                  uVar15 ^ (byte)uVar23 ^ (byte)uVar19)))))));
      uVar29 = puVar13[5];
      uVar15 = puVar13[4];
      uVar16 = param_1[5];
      uVar14 = param_1[4];
      uVar44 = param_1[7];
      uVar19 = param_1[6];
      param_1[5] = CONCAT17((byte)(uVar29 >> 0x38) ^ (byte)(uStack_78 >> 0x38) ^
                            (byte)(uVar16 >> 0x38),
                            CONCAT16((byte)(uVar29 >> 0x30) ^ (byte)(uStack_78 >> 0x30) ^
                                     (byte)(uVar16 >> 0x30),
                                     CONCAT15((byte)(uVar29 >> 0x28) ^ (byte)(uStack_78 >> 0x28) ^
                                              (byte)(uVar16 >> 0x28),
                                              CONCAT14((byte)(uVar29 >> 0x20) ^
                                                       (byte)(uStack_78 >> 0x20) ^
                                                       (byte)(uVar16 >> 0x20),
                                                       CONCAT13((byte)(uVar29 >> 0x18) ^
                                                                (byte)(uStack_78 >> 0x18) ^
                                                                (byte)(uVar16 >> 0x18),
                                                                CONCAT12((byte)(uVar29 >> 0x10) ^
                                                                         (byte)(uStack_78 >> 0x10) ^
                                                                         (byte)(uVar16 >> 0x10),
                                                                         CONCAT11((byte)(uVar29 >> 8
                                                                                        ) ^ (byte)(
                                                  uStack_78 >> 8) ^ (byte)(uVar16 >> 8),
                                                  (byte)uVar29 ^ (byte)uStack_78 ^ (byte)uVar16)))))
                                    ));
      param_1[4] = CONCAT17((byte)(uVar15 >> 0x38) ^ (byte)(local_80 >> 0x38) ^
                            (byte)(uVar14 >> 0x38),
                            CONCAT16((byte)(uVar15 >> 0x30) ^ (byte)(local_80 >> 0x30) ^
                                     (byte)(uVar14 >> 0x30),
                                     CONCAT15((byte)(uVar15 >> 0x28) ^ (byte)(local_80 >> 0x28) ^
                                              (byte)(uVar14 >> 0x28),
                                              CONCAT14((byte)(uVar15 >> 0x20) ^
                                                       (byte)(local_80 >> 0x20) ^
                                                       (byte)(uVar14 >> 0x20),
                                                       CONCAT13((byte)(uVar15 >> 0x18) ^
                                                                (byte)(local_80 >> 0x18) ^
                                                                (byte)(uVar14 >> 0x18),
                                                                CONCAT12((byte)(uVar15 >> 0x10) ^
                                                                         (byte)(local_80 >> 0x10) ^
                                                                         (byte)(uVar14 >> 0x10),
                                                                         CONCAT11((byte)(uVar15 >> 8
                                                                                        ) ^ (byte)(
                                                  local_80 >> 8) ^ (byte)(uVar14 >> 8),
                                                  (byte)uVar15 ^ (byte)local_80 ^ (byte)uVar14))))))
                           );
      uVar14 = puVar13[7];
      uVar15 = puVar13[6];
      param_1[7] = CONCAT17((byte)(uVar14 >> 0x38) ^ (byte)(uVar20 >> 0x38) ^ (byte)(uVar44 >> 0x38)
                            ,CONCAT16((byte)(uVar14 >> 0x30) ^ (byte)(uVar20 >> 0x30) ^
                                      (byte)(uVar44 >> 0x30),
                                      CONCAT15((byte)(uVar14 >> 0x28) ^ (byte)(uVar20 >> 0x28) ^
                                               (byte)(uVar44 >> 0x28),
                                               CONCAT14((byte)(uVar14 >> 0x20) ^
                                                        (byte)(uVar20 >> 0x20) ^
                                                        (byte)(uVar44 >> 0x20),
                                                        CONCAT13((byte)(uVar14 >> 0x18) ^
                                                                 (byte)(uVar20 >> 0x18) ^
                                                                 (byte)(uVar44 >> 0x18),
                                                                 CONCAT12((byte)(uVar14 >> 0x10) ^
                                                                          (byte)(uVar20 >> 0x10) ^
                                                                          (byte)(uVar44 >> 0x10),
                                                                          CONCAT11((byte)(uVar14 >>
                                                                                         8) ^
                                                                                   (byte)(uVar20 >>
                                                                                         8) ^
                                                                                   (byte)(uVar44 >>
                                                                                         8),(byte)
                                                  uVar14 ^ (byte)uVar20 ^ (byte)uVar44)))))));
      param_1[6] = CONCAT17((byte)(uVar15 >> 0x38) ^ (byte)(local_70 >> 0x38) ^
                            (byte)(uVar19 >> 0x38),
                            CONCAT16((byte)(uVar15 >> 0x30) ^ (byte)(local_70 >> 0x30) ^
                                     (byte)(uVar19 >> 0x30),
                                     CONCAT15((byte)(uVar15 >> 0x28) ^ (byte)(local_70 >> 0x28) ^
                                              (byte)(uVar19 >> 0x28),
                                              CONCAT14((byte)(uVar15 >> 0x20) ^
                                                       (byte)(local_70 >> 0x20) ^
                                                       (byte)(uVar19 >> 0x20),
                                                       CONCAT13((byte)(uVar15 >> 0x18) ^
                                                                (byte)(local_70 >> 0x18) ^
                                                                (byte)(uVar19 >> 0x18),
                                                                CONCAT12((byte)(uVar15 >> 0x10) ^
                                                                         (byte)(local_70 >> 0x10) ^
                                                                         (byte)(uVar19 >> 0x10),
                                                                         CONCAT11((byte)(uVar15 >> 8
                                                                                        ) ^ (byte)(
                                                  local_70 >> 8) ^ (byte)(uVar19 >> 8),
                                                  (byte)uVar15 ^ (byte)local_70 ^ (byte)uVar19))))))
                           );
    }
    puVar13 = puVar13 + 8;
    param_3 = param_3 + -1;
    lVar31 = lVar31 + 1;
  } while (param_3 != 0);
  return;
}


