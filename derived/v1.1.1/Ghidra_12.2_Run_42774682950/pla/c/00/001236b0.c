/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001236b0; name: FUN_001236b0
 */


undefined8
FUN_001236b0(long param_1,long param_2,char *param_3,char *param_4,undefined8 param_5,long param_6,
            uint *param_7)

{
  char *pcVar1;
  char *pcVar2;
  ushort *puVar3;
  ushort uVar4;
  byte bVar5;
  char *__src;
  char *pcVar6;
  char *pcVar7;
  ulong *puVar8;
  size_t sVar9;
  ushort *puVar10;
  char *pcVar11;
  code *pcVar12;
  ushort *puVar13;
  ulong *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  long lVar17;
  char *pcVar18;
  ulong uVar19;
  long lVar20;
  char *pcVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  char *pcVar27;
  char *extraout_x17;
  char *pcVar28;
  long lVar29;
  char *extraout_x18;
  char *pcVar30;
  uint uVar31;
  ulong uVar32;
  ulong *puVar33;
  ulong *puVar34;
  ushort *__src_00;
  undefined8 uVar35;
  undefined8 uVar36;
  ushort *local_1d0;
  ushort local_16c [72];
  char local_db [123];
  
  pcVar6 = *(char **)(param_6 + 0x38);
  pcVar2 = *(char **)(param_6 + 0x40);
  puVar8 = *(ulong **)(param_6 + 0x88);
  puVar34 = (ulong *)((long)puVar8 + -0xf);
  pcVar7 = (char *)(param_1 + param_2);
  uVar32 = (ulong)*param_7;
  puVar33 = *(ulong **)(param_6 + 0x20);
  sVar9 = (long)pcVar2 - (long)pcVar6;
  if (0x70 < (long)sVar9) {
    sVar9 = 0x71;
  }
  local_1d0 = *(ushort **)(param_6 + 0x10);
  puVar15 = *(ushort **)(param_6 + 0x48);
  puVar3 = *(ushort **)(param_6 + 0x50);
  puVar10 = *(ushort **)(param_6 + 0x18);
  pcVar27 = (char *)(param_1 + 8);
  __src = pcVar2 + -sVar9;
  memcpy(local_db + -sVar9,__src,sVar9);
  sVar9 = (long)puVar3 - (long)puVar15;
  if (0x1f < (long)sVar9) {
    sVar9 = 0x20;
  }
  local_db[0x68] = '\0';
  local_db[0x69] = '\0';
  local_db[0x6a] = '\0';
  local_db[0x6b] = '\0';
  local_db[0x6c] = '\0';
  local_db[0x6d] = '\0';
  local_db[0x6e] = '\0';
  local_db[0x6f] = '\0';
  local_db[0x60] = '\0';
  local_db[0x61] = '\0';
  local_db[0x62] = '\0';
  local_db[99] = '\0';
  local_db[100] = '\0';
  local_db[0x65] = '\0';
  local_db[0x66] = '\0';
  local_db[0x67] = '\0';
  local_db[0x58] = '\0';
  local_db[0x59] = '\0';
  local_db[0x5a] = '\0';
  local_db[0x5b] = '\0';
  local_db[0x5c] = '\0';
  local_db[0x5d] = '\0';
  local_db[0x5e] = '\0';
  local_db[0x5f] = '\0';
  local_db[0x50] = '\0';
  local_db[0x51] = '\0';
  local_db[0x52] = '\0';
  local_db[0x53] = '\0';
  local_db[0x54] = '\0';
  local_db[0x55] = '\0';
  local_db[0x56] = '\0';
  local_db[0x57] = '\0';
  local_db[0x48] = '\0';
  local_db[0x49] = '\0';
  local_db[0x4a] = '\0';
  local_db[0x4b] = '\0';
  local_db[0x4c] = '\0';
  local_db[0x4d] = '\0';
  local_db[0x4e] = '\0';
  local_db[0x4f] = '\0';
  local_db[0x40] = '\0';
  local_db[0x41] = '\0';
  local_db[0x42] = '\0';
  local_db[0x43] = '\0';
  local_db[0x44] = '\0';
  local_db[0x45] = '\0';
  local_db[0x46] = '\0';
  local_db[0x47] = '\0';
  local_db[0x38] = '\0';
  local_db[0x39] = '\0';
  local_db[0x3a] = '\0';
  local_db[0x3b] = '\0';
  local_db[0x3c] = '\0';
  local_db[0x3d] = '\0';
  local_db[0x3e] = '\0';
  local_db[0x3f] = '\0';
  local_db[0x30] = '\0';
  local_db[0x31] = '\0';
  local_db[0x32] = '\0';
  local_db[0x33] = '\0';
  local_db[0x34] = '\0';
  local_db[0x35] = '\0';
  local_db[0x36] = '\0';
  local_db[0x37] = '\0';
  local_db[0x28] = '\0';
  local_db[0x29] = '\0';
  local_db[0x2a] = '\0';
  local_db[0x2b] = '\0';
  local_db[0x2c] = '\0';
  local_db[0x2d] = '\0';
  local_db[0x2e] = '\0';
  local_db[0x2f] = '\0';
  local_db[0x20] = '\0';
  local_db[0x21] = '\0';
  local_db[0x22] = '\0';
  local_db[0x23] = '\0';
  local_db[0x24] = '\0';
  local_db[0x25] = '\0';
  local_db[0x26] = '\0';
  local_db[0x27] = '\0';
  local_db[0x18] = '\0';
  local_db[0x19] = '\0';
  local_db[0x1a] = '\0';
  local_db[0x1b] = '\0';
  local_db[0x1c] = '\0';
  local_db[0x1d] = '\0';
  local_db[0x1e] = '\0';
  local_db[0x1f] = '\0';
  local_db[0x10] = '\0';
  local_db[0x11] = '\0';
  local_db[0x12] = '\0';
  local_db[0x13] = '\0';
  local_db[0x14] = '\0';
  local_db[0x15] = '\0';
  local_db[0x16] = '\0';
  local_db[0x17] = '\0';
  local_db[8] = '\0';
  local_db[9] = '\0';
  local_db[10] = '\0';
  local_db[0xb] = '\0';
  local_db[0xc] = '\0';
  local_db[0xd] = '\0';
  local_db[0xe] = '\0';
  local_db[0xf] = '\0';
  __src_00 = (ushort *)((long)puVar3 - sVar9);
  local_db[0] = '\0';
  local_db[1] = '\0';
  local_db[2] = '\0';
  local_db[3] = '\0';
  local_db[4] = '\0';
  local_db[5] = '\0';
  local_db[6] = '\0';
  local_db[7] = '\0';
  local_db[0x70] = 0;
  memcpy((void *)((long)local_16c - sVar9),__src_00,sVar9);
  local_16c[0xc] = 0;
  local_16c[0xd] = 0;
  local_16c[0xe] = 0;
  local_16c[0xf] = 0;
  local_16c[8] = 0;
  local_16c[9] = 0;
  local_16c[10] = 0;
  local_16c[0xb] = 0;
  local_16c[4] = 0;
  local_16c[5] = 0;
  local_16c[6] = 0;
  local_16c[7] = 0;
  local_16c[0] = 0;
  local_16c[1] = 0;
  local_16c[2] = 0;
  local_16c[3] = 0;
  pcVar11 = pcVar2;
  puVar13 = puVar3;
  pcVar28 = extraout_x17;
  if ((puVar33 < puVar34) && ((char *)(param_1 + 0x170U) <= param_3)) {
    pcVar30 = extraout_x18;
    do {
      if (__src <= pcVar6) {
        if (pcVar11 <= pcVar6 && (long)pcVar6 - (long)pcVar11 != 0) {
          FUN_0010a430();
          pcVar12 = *(code **)PTR_PTR_043722f8;
          if (pcVar12 == (code *)0x0) goto LAB_001247b4;
          pcVar6 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          pcVar7 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
          uVar35 = 0xd5;
          goto LAB_001247b0;
        }
        pcVar6 = local_db + ((long)pcVar6 - (long)pcVar11);
        __src = local_db;
        pcVar11 = local_db;
      }
      if (__src_00 <= puVar15) {
        if (puVar13 <= puVar15 && (long)puVar15 - (long)puVar13 != 0) {
          FUN_0010a430();
          pcVar12 = *(code **)PTR_PTR_043722f8;
          if (pcVar12 == (code *)0x0) goto LAB_001247b4;
          pcVar6 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          pcVar7 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
          uVar35 = 0xd6;
          goto LAB_001247b0;
        }
        puVar15 = (ushort *)((long)local_16c + ((long)puVar15 - (long)puVar13));
        puVar13 = local_16c;
        __src_00 = local_16c;
      }
      uVar24 = *puVar33;
      uVar22 = (uint)uVar24;
      if ((uVar24 + 0xe7e7e7e7e7e7e7e8 & (uVar24 ^ 0xffffffffffffffff) & 0x8080808080808080) == 0) {
        uVar19 = puVar33[1];
        uVar31 = (uint)uVar32;
        uVar35 = *(undefined8 *)(pcVar27 + (int)uVar31);
        uVar36 = *(undefined8 *)pcVar6;
        *(ulong *)pcVar27 =
             CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                      CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                               CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                        (char)((ulong)uVar35 >> 0x28),
                                        CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                 (char)((ulong)uVar35 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                          (char)((ulong)uVar35 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar36 >> 0x10) +
                                                                   (char)((ulong)uVar35 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar36 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar35 >>
                                                                                  8),(char)uVar36 +
                                                                                     (char)uVar35)))
                                                ))));
        pcVar27 = pcVar27 + (uVar24 & 7);
        if ((uVar24 & 0x80) == 0) {
          uVar31 = -(uint)*puVar15;
        }
        if (param_4 <= pcVar27 + (int)uVar31) {
          *(undefined8 *)pcVar27 = *(undefined8 *)(pcVar27 + (int)uVar31);
          pcVar6 = pcVar6 + (uVar24 & 7);
          *(undefined8 *)(pcVar27 + 8) = *(undefined8 *)(pcVar27 + (int)uVar31 + 8);
          pcVar27 = pcVar27 + (uVar24 >> 3 & 0xf);
          uVar32 = uVar24 >> 8 & 7;
          uVar35 = *(undefined8 *)(pcVar27 + (int)uVar31);
          uVar36 = *(undefined8 *)pcVar6;
          puVar15 = (ushort *)((long)puVar15 + (ulong)((uVar22 & 0x80) >> 6 ^ 2));
          *(ulong *)pcVar27 =
               CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                        CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                 CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                          (char)((ulong)uVar35 >> 0x28),
                                          CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                   (char)((ulong)uVar35 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                            (char)((ulong)uVar35 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar36 >> 0x10) +
                                                                     (char)((ulong)uVar35 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar36
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar35
                                                                                    >> 8),
                                                                              (char)uVar36 +
                                                                              (char)uVar35)))))));
          if ((uVar24 & 0x8000) == 0) {
            uVar31 = -(uint)*puVar15;
          }
          pcVar27 = pcVar27 + uVar32;
          if (param_4 <= pcVar27 + (int)uVar31) {
            pcVar6 = pcVar6 + uVar32;
            puVar15 = (ushort *)((long)puVar15 + (ulong)((uVar22 & 0x8000) >> 0xe ^ 2));
            *(undefined8 *)pcVar27 = *(undefined8 *)(pcVar27 + (int)uVar31);
            *(undefined8 *)(pcVar27 + 8) = *(undefined8 *)(pcVar27 + (int)uVar31 + 8);
            pcVar27 = pcVar27 + (uVar24 >> 0xb & 0xf);
            uVar32 = uVar24 >> 0x10 & 7;
            uVar35 = *(undefined8 *)(pcVar27 + (int)uVar31);
            uVar36 = *(undefined8 *)pcVar6;
            *(ulong *)pcVar27 =
                 CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                          CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                   CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                            (char)((ulong)uVar35 >> 0x28),
                                            CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                     (char)((ulong)uVar35 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                              (char)((ulong)uVar35 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar36 >> 0x10)
                                                                       + (char)((ulong)uVar35 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar36
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar35
                                                                                      >> 8),
                                                                                (char)uVar36 +
                                                                                (char)uVar35)))))));
            if ((uVar24 & 0x800000) == 0) {
              uVar31 = -(uint)*puVar15;
            }
            pcVar27 = pcVar27 + uVar32;
            if (param_4 <= pcVar27 + (int)uVar31) {
              pcVar6 = pcVar6 + uVar32;
              puVar15 = (ushort *)((long)puVar15 + (ulong)((uVar22 & 0x800000) >> 0x16 ^ 2));
              *(undefined8 *)pcVar27 = *(undefined8 *)(pcVar27 + (int)uVar31);
              *(undefined8 *)(pcVar27 + 8) = *(undefined8 *)(pcVar27 + (int)uVar31 + 8);
              pcVar27 = pcVar27 + (uVar24 >> 0x13 & 0xf);
              uVar32 = uVar24 >> 0x18 & 7;
              uVar35 = *(undefined8 *)(pcVar27 + (int)uVar31);
              uVar36 = *(undefined8 *)pcVar6;
              *(ulong *)pcVar27 =
                   CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                            CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                     CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                              (char)((ulong)uVar35 >> 0x28),
                                              CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                       (char)((ulong)uVar35 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                                (char)((ulong)uVar35 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar36 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar35 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar36 >> 8) + (char)((ulong)uVar35 >> 8),
                                                  (char)uVar36 + (char)uVar35)))))));
              if (-1 < (int)uVar22) {
                uVar31 = -(uint)*puVar15;
              }
              pcVar27 = pcVar27 + uVar32;
              if (param_4 <= pcVar27 + (int)uVar31) {
                pcVar6 = pcVar6 + uVar32;
                puVar15 = (ushort *)((long)puVar15 + ((ulong)(uVar22 >> 0x1e ^ 0xffffffff) & 2));
                *(undefined8 *)pcVar27 = *(undefined8 *)(pcVar27 + (int)uVar31);
                *(undefined8 *)(pcVar27 + 8) = *(undefined8 *)(pcVar27 + (int)uVar31 + 8);
                pcVar27 = pcVar27 + (uVar24 >> 0x1b & 0xf);
                uVar35 = *(undefined8 *)(pcVar27 + (int)uVar31);
                uVar36 = *(undefined8 *)pcVar6;
                uVar22 = *(uint *)((long)puVar33 + 4);
                uVar32 = (ulong)uVar22;
                *(ulong *)pcVar27 =
                     CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                              CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                                 (char)((ulong)uVar35 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                          (char)((ulong)uVar35 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                                   (char)((ulong)uVar35 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar36 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar35 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar36 >> 8) + (char)((ulong)uVar35 >> 8),
                                                  (char)uVar36 + (char)uVar35)))))));
                pcVar27 = pcVar27 + (uVar32 & 7);
                if ((int)(uVar32 & 0x80) == 0) {
                  uVar31 = -(uint)*puVar15;
                }
                if (param_4 <= pcVar27 + (int)uVar31) {
                  puVar15 = (ushort *)((long)puVar15 + ((uVar32 & 0x80) >> 6 ^ 2));
                  *(undefined8 *)pcVar27 = *(undefined8 *)(pcVar27 + (int)uVar31);
                  pcVar6 = pcVar6 + (uVar32 & 7);
                  uVar23 = uVar22 >> 8 & 7;
                  *(undefined8 *)(pcVar27 + 8) = *(undefined8 *)(pcVar27 + (int)uVar31 + 8);
                  pcVar27 = pcVar27 + ((ulong)(uVar22 >> 3) & 0xf);
                  uVar35 = *(undefined8 *)(pcVar27 + (int)uVar31);
                  uVar36 = *(undefined8 *)pcVar6;
                  *(ulong *)pcVar27 =
                       CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                                CONCAT16((char)((ulong)uVar36 >> 0x30) +
                                         (char)((ulong)uVar35 >> 0x30),
                                         CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                                  (char)((ulong)uVar35 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                           (char)((ulong)uVar35 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                                    (char)((ulong)uVar35 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar36 >>
                                                                                   0x10) +
                                                                             (char)((ulong)uVar35 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar36 >> 8) + (char)((ulong)uVar35 >> 8),
                                                  (char)uVar36 + (char)uVar35)))))));
                  pcVar27 = pcVar27 + uVar23;
                  if ((int)(uVar32 & 0x8000) == 0) {
                    uVar31 = -(uint)*puVar15;
                  }
                  if (param_4 <= pcVar27 + (int)uVar31) {
                    puVar15 = (ushort *)((long)puVar15 + ((uVar32 & 0x8000) >> 0xe ^ 2));
                    *(undefined8 *)pcVar27 = *(undefined8 *)(pcVar27 + (int)uVar31);
                    pcVar6 = pcVar6 + uVar23;
                    *(undefined8 *)(pcVar27 + 8) = *(undefined8 *)(pcVar27 + (int)uVar31 + 8);
                    pcVar27 = pcVar27 + ((ulong)(uVar22 >> 0xb) & 0xf);
                    uVar35 = *(undefined8 *)(pcVar27 + (int)uVar31);
                    uVar36 = *(undefined8 *)pcVar6;
                    *(ulong *)pcVar27 =
                         CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                                  CONCAT16((char)((ulong)uVar36 >> 0x30) +
                                           (char)((ulong)uVar35 >> 0x30),
                                           CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                                    (char)((ulong)uVar35 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                             (char)((ulong)uVar35 >> 0x20),
                                                             CONCAT13((char)((ulong)uVar36 >> 0x18)
                                                                      + (char)((ulong)uVar35 >> 0x18
                                                                              ),
                                                                      CONCAT12((char)((ulong)uVar36
                                                                                     >> 0x10) +
                                                                               (char)((ulong)uVar35
                                                                                     >> 0x10),
                                                                               CONCAT11((char)((
                                                  ulong)uVar36 >> 8) + (char)((ulong)uVar35 >> 8),
                                                  (char)uVar36 + (char)uVar35)))))));
                    uVar24 = (ulong)(uVar22 >> 0x10) & 7;
                    pcVar27 = pcVar27 + uVar24;
                    if ((int)(uVar32 & 0x800000) == 0) {
                      uVar31 = -(uint)*puVar15;
                    }
                    if (param_4 <= pcVar27 + (int)uVar31) {
                      puVar15 = (ushort *)((long)puVar15 + ((uVar32 & 0x800000) >> 0x16 ^ 2));
                      pcVar18 = pcVar27 + ((ulong)(uVar22 >> 0x13) & 0xf);
                      *(undefined8 *)pcVar27 = *(undefined8 *)(pcVar27 + (int)uVar31);
                      *(undefined8 *)(pcVar27 + 8) = *(undefined8 *)(pcVar27 + (int)uVar31 + 8);
                      uVar35 = *(undefined8 *)(pcVar18 + (int)uVar31);
                      uVar36 = *(undefined8 *)(pcVar6 + uVar24);
                      *(ulong *)pcVar18 =
                           CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                                    CONCAT16((char)((ulong)uVar36 >> 0x30) +
                                             (char)((ulong)uVar35 >> 0x30),
                                             CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                                      (char)((ulong)uVar35 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                               (char)((ulong)uVar35 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar36 >> 0x18
                                                                              ) + (char)((ulong)
                                                  uVar35 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar36 >> 0x10) +
                                                           (char)((ulong)uVar35 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar36 >> 8) +
                                                                    (char)((ulong)uVar35 >> 8),
                                                                    (char)uVar36 + (char)uVar35)))))
                                            ));
                      uVar23 = uVar22 >> 0x18 & 7;
                      pcVar18 = pcVar18 + uVar23;
                      if (-1 < (int)uVar22) {
                        uVar31 = -(uint)*puVar15;
                      }
                      pcVar28 = (char *)(long)(int)uVar31;
                      pcVar30 = pcVar18 + (long)pcVar28;
                      if (param_4 <= pcVar30) {
                        pcVar6 = pcVar6 + uVar24 + uVar23;
                        pcVar27 = pcVar18 + (uVar22 >> 0x1b & 0xf);
                        puVar15 = (ushort *)
                                  ((long)puVar15 + ((ulong)(uVar22 >> 0x1e ^ 0xffffffff) & 2));
                        *(undefined8 *)pcVar18 = *(undefined8 *)pcVar30;
                        *(undefined8 *)(pcVar18 + 8) = *(undefined8 *)(pcVar30 + 8);
                        if ((uVar19 + 0xe7e7e7e7e7e7e7e8 & (uVar19 ^ 0xffffffffffffffff) &
                            0x8080808080808080) != 0) {
                          bVar5 = (byte)puVar33[1];
                          puVar33 = (ulong *)((long)puVar33 + 9);
                          goto joined_r0x00123c58;
                        }
                        uVar35 = *(undefined8 *)(pcVar27 + (long)pcVar28);
                        uVar36 = *(undefined8 *)pcVar6;
                        uVar22 = (uint)puVar33[1];
                        uVar32 = (ulong)uVar22;
                        *(ulong *)pcVar27 =
                             CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                                      CONCAT16((char)((ulong)uVar36 >> 0x30) +
                                               (char)((ulong)uVar35 >> 0x30),
                                               CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                                        (char)((ulong)uVar35 >> 0x28),
                                                        CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                                 (char)((ulong)uVar35 >> 0x20),
                                                                 CONCAT13((char)((ulong)uVar36 >>
                                                                                0x18) +
                                                                          (char)((ulong)uVar35 >>
                                                                                0x18),
                                                                          CONCAT12((char)((ulong)
                                                  uVar36 >> 0x10) + (char)((ulong)uVar35 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar36 >> 8) +
                                                           (char)((ulong)uVar35 >> 8),
                                                           (char)uVar36 + (char)uVar35)))))));
                        pcVar27 = pcVar27 + (uVar32 & 7);
                        if ((int)(uVar32 & 0x80) == 0) {
                          uVar31 = -(uint)*puVar15;
                        }
                        if (param_4 <= pcVar27 + (int)uVar31) {
                          *(undefined8 *)pcVar27 = *(undefined8 *)(pcVar27 + (int)uVar31);
                          pcVar6 = pcVar6 + (uVar32 & 7);
                          *(undefined8 *)(pcVar27 + 8) = *(undefined8 *)(pcVar27 + (int)uVar31 + 8);
                          pcVar27 = pcVar27 + ((ulong)(uVar22 >> 3) & 0xf);
                          uVar23 = uVar22 >> 8 & 7;
                          uVar35 = *(undefined8 *)(pcVar27 + (int)uVar31);
                          uVar36 = *(undefined8 *)pcVar6;
                          puVar15 = (ushort *)((long)puVar15 + ((uVar32 & 0x80) >> 6 ^ 2));
                          *(ulong *)pcVar27 =
                               CONCAT17((char)((ulong)uVar36 >> 0x38) +
                                        (char)((ulong)uVar35 >> 0x38),
                                        CONCAT16((char)((ulong)uVar36 >> 0x30) +
                                                 (char)((ulong)uVar35 >> 0x30),
                                                 CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                                          (char)((ulong)uVar35 >> 0x28),
                                                          CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                                   (char)((ulong)uVar35 >> 0x20),
                                                                   CONCAT13((char)((ulong)uVar36 >>
                                                                                  0x18) +
                                                                            (char)((ulong)uVar35 >>
                                                                                  0x18),
                                                                            CONCAT12((char)((ulong)
                                                  uVar36 >> 0x10) + (char)((ulong)uVar35 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar36 >> 8) +
                                                           (char)((ulong)uVar35 >> 8),
                                                           (char)uVar36 + (char)uVar35)))))));
                          if ((int)(uVar32 & 0x8000) == 0) {
                            uVar31 = -(uint)*puVar15;
                          }
                          pcVar27 = pcVar27 + uVar23;
                          if (param_4 <= pcVar27 + (int)uVar31) {
                            puVar15 = (ushort *)((long)puVar15 + ((uVar32 & 0x8000) >> 0xe ^ 2));
                            *(undefined8 *)pcVar27 = *(undefined8 *)(pcVar27 + (int)uVar31);
                            pcVar6 = pcVar6 + uVar23;
                            *(undefined8 *)(pcVar27 + 8) =
                                 *(undefined8 *)(pcVar27 + (int)uVar31 + 8);
                            pcVar27 = pcVar27 + ((ulong)(uVar22 >> 0xb) & 0xf);
                            uVar24 = (ulong)(uVar22 >> 0x10) & 7;
                            uVar35 = *(undefined8 *)(pcVar27 + (int)uVar31);
                            uVar36 = *(undefined8 *)pcVar6;
                            *(ulong *)pcVar27 =
                                 CONCAT17((char)((ulong)uVar36 >> 0x38) +
                                          (char)((ulong)uVar35 >> 0x38),
                                          CONCAT16((char)((ulong)uVar36 >> 0x30) +
                                                   (char)((ulong)uVar35 >> 0x30),
                                                   CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                                            (char)((ulong)uVar35 >> 0x28),
                                                            CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                                     (char)((ulong)uVar35 >> 0x20),
                                                                     CONCAT13((char)((ulong)uVar36
                                                                                    >> 0x18) +
                                                                              (char)((ulong)uVar35
                                                                                    >> 0x18),
                                                                              CONCAT12((char)((ulong
                                                  )uVar36 >> 0x10) + (char)((ulong)uVar35 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar36 >> 8) +
                                                           (char)((ulong)uVar35 >> 8),
                                                           (char)uVar36 + (char)uVar35)))))));
                            if ((int)(uVar32 & 0x800000) == 0) {
                              uVar31 = -(uint)*puVar15;
                            }
                            pcVar27 = pcVar27 + uVar24;
                            if (param_4 <= pcVar27 + (int)uVar31) {
                              pcVar6 = pcVar6 + uVar24;
                              *(undefined8 *)pcVar27 = *(undefined8 *)(pcVar27 + (int)uVar31);
                              puVar15 = (ushort *)
                                        ((long)puVar15 + ((uVar32 & 0x800000) >> 0x16 ^ 2));
                              *(undefined8 *)(pcVar27 + 8) =
                                   *(undefined8 *)(pcVar27 + (int)uVar31 + 8);
                              pcVar27 = pcVar27 + ((ulong)(uVar22 >> 0x13) & 0xf);
                              uVar23 = uVar22 >> 0x18 & 7;
                              uVar35 = *(undefined8 *)(pcVar27 + (int)uVar31);
                              uVar36 = *(undefined8 *)pcVar6;
                              *(ulong *)pcVar27 =
                                   CONCAT17((char)((ulong)uVar36 >> 0x38) +
                                            (char)((ulong)uVar35 >> 0x38),
                                            CONCAT16((char)((ulong)uVar36 >> 0x30) +
                                                     (char)((ulong)uVar35 >> 0x30),
                                                     CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                                              (char)((ulong)uVar35 >> 0x28),
                                                              CONCAT14((char)((ulong)uVar36 >> 0x20)
                                                                       + (char)((ulong)uVar35 >>
                                                                               0x20),
                                                                       CONCAT13((char)((ulong)uVar36
                                                                                      >> 0x18) +
                                                                                (char)((ulong)uVar35
                                                                                      >> 0x18),
                                                                                CONCAT12((char)((
                                                  ulong)uVar36 >> 0x10) +
                                                  (char)((ulong)uVar35 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar36 >> 8) +
                                                           (char)((ulong)uVar35 >> 8),
                                                           (char)uVar36 + (char)uVar35)))))));
                              if (-1 < (int)uVar22) {
                                uVar31 = -(uint)*puVar15;
                              }
                              pcVar27 = pcVar27 + uVar23;
                              if (param_4 <= pcVar27 + (int)uVar31) {
                                pcVar6 = pcVar6 + uVar23;
                                puVar15 = (ushort *)
                                          ((long)puVar15 +
                                          ((ulong)(uVar22 >> 0x1e ^ 0xffffffff) & 2));
                                *(undefined8 *)pcVar27 = *(undefined8 *)(pcVar27 + (int)uVar31);
                                *(undefined8 *)(pcVar27 + 8) =
                                     *(undefined8 *)(pcVar27 + (int)uVar31 + 8);
                                pcVar27 = pcVar27 + ((ulong)(uVar22 >> 0x1b) & 0xf);
                                uVar35 = *(undefined8 *)(pcVar27 + (int)uVar31);
                                uVar36 = *(undefined8 *)pcVar6;
                                uVar22 = *(uint *)((long)puVar33 + 0xc);
                                uVar32 = (ulong)uVar22;
                                *(ulong *)pcVar27 =
                                     CONCAT17((char)((ulong)uVar36 >> 0x38) +
                                              (char)((ulong)uVar35 >> 0x38),
                                              CONCAT16((char)((ulong)uVar36 >> 0x30) +
                                                       (char)((ulong)uVar35 >> 0x30),
                                                       CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                                                (char)((ulong)uVar35 >> 0x28),
                                                                CONCAT14((char)((ulong)uVar36 >>
                                                                               0x20) +
                                                                         (char)((ulong)uVar35 >>
                                                                               0x20),
                                                                         CONCAT13((char)((ulong)
                                                  uVar36 >> 0x18) + (char)((ulong)uVar35 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar36 >> 0x10) +
                                                           (char)((ulong)uVar35 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar36 >> 8) +
                                                                    (char)((ulong)uVar35 >> 8),
                                                                    (char)uVar36 + (char)uVar35)))))
                                                  ));
                                pcVar27 = pcVar27 + (uVar32 & 7);
                                if ((int)(uVar32 & 0x80) == 0) {
                                  uVar31 = -(uint)*puVar15;
                                }
                                if (param_4 <= pcVar27 + (int)uVar31) {
                                  puVar15 = (ushort *)((long)puVar15 + ((uVar32 & 0x80) >> 6 ^ 2));
                                  *(undefined8 *)pcVar27 = *(undefined8 *)(pcVar27 + (int)uVar31);
                                  pcVar6 = pcVar6 + (uVar32 & 7);
                                  *(undefined8 *)(pcVar27 + 8) =
                                       *(undefined8 *)(pcVar27 + (int)uVar31 + 8);
                                  pcVar27 = pcVar27 + ((ulong)(uVar22 >> 3) & 0xf);
                                  uVar23 = uVar22 >> 8 & 7;
                                  uVar35 = *(undefined8 *)(pcVar27 + (int)uVar31);
                                  uVar36 = *(undefined8 *)pcVar6;
                                  *(ulong *)pcVar27 =
                                       CONCAT17((char)((ulong)uVar36 >> 0x38) +
                                                (char)((ulong)uVar35 >> 0x38),
                                                CONCAT16((char)((ulong)uVar36 >> 0x30) +
                                                         (char)((ulong)uVar35 >> 0x30),
                                                         CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                                                  (char)((ulong)uVar35 >> 0x28),
                                                                  CONCAT14((char)((ulong)uVar36 >>
                                                                                 0x20) +
                                                                           (char)((ulong)uVar35 >>
                                                                                 0x20),
                                                                           CONCAT13((char)((ulong)
                                                  uVar36 >> 0x18) + (char)((ulong)uVar35 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar36 >> 0x10) +
                                                           (char)((ulong)uVar35 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar36 >> 8) +
                                                                    (char)((ulong)uVar35 >> 8),
                                                                    (char)uVar36 + (char)uVar35)))))
                                                  ));
                                  if ((int)(uVar32 & 0x8000) == 0) {
                                    uVar31 = -(uint)*puVar15;
                                  }
                                  pcVar27 = pcVar27 + uVar23;
                                  if (param_4 <= pcVar27 + (int)uVar31) {
                                    puVar15 = (ushort *)
                                              ((long)puVar15 + ((uVar32 & 0x8000) >> 0xe ^ 2));
                                    *(undefined8 *)pcVar27 = *(undefined8 *)(pcVar27 + (int)uVar31);
                                    pcVar6 = pcVar6 + uVar23;
                                    *(undefined8 *)(pcVar27 + 8) =
                                         *(undefined8 *)(pcVar27 + (int)uVar31 + 8);
                                    pcVar27 = pcVar27 + ((ulong)(uVar22 >> 0xb) & 0xf);
                                    uVar24 = (ulong)(uVar22 >> 0x10) & 7;
                                    uVar35 = *(undefined8 *)(pcVar27 + (int)uVar31);
                                    uVar36 = *(undefined8 *)pcVar6;
                                    *(ulong *)pcVar27 =
                                         CONCAT17((char)((ulong)uVar36 >> 0x38) +
                                                  (char)((ulong)uVar35 >> 0x38),
                                                  CONCAT16((char)((ulong)uVar36 >> 0x30) +
                                                           (char)((ulong)uVar35 >> 0x30),
                                                           CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                                                    (char)((ulong)uVar35 >> 0x28),
                                                                    CONCAT14((char)((ulong)uVar36 >>
                                                                                   0x20) +
                                                                             (char)((ulong)uVar35 >>
                                                                                   0x20),
                                                                             CONCAT13((char)((ulong)
                                                  uVar36 >> 0x18) + (char)((ulong)uVar35 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar36 >> 0x10) +
                                                           (char)((ulong)uVar35 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar36 >> 8) +
                                                                    (char)((ulong)uVar35 >> 8),
                                                                    (char)uVar36 + (char)uVar35)))))
                                                  ));
                                    if ((int)(uVar32 & 0x800000) == 0) {
                                      uVar31 = -(uint)*puVar15;
                                    }
                                    pcVar27 = pcVar27 + uVar24;
                                    if (param_4 <= pcVar27 + (int)uVar31) {
                                      *(undefined8 *)pcVar27 =
                                           *(undefined8 *)(pcVar27 + (int)uVar31);
                                      puVar15 = (ushort *)
                                                ((long)puVar15 + ((uVar32 & 0x800000) >> 0x16 ^ 2));
                                      *(undefined8 *)(pcVar27 + 8) =
                                           *(undefined8 *)(pcVar27 + (int)uVar31 + 8);
                                      pcVar27 = pcVar27 + ((ulong)(uVar22 >> 0x13) & 0xf);
                                      uVar35 = *(undefined8 *)(pcVar27 + (int)uVar31);
                                      uVar36 = *(undefined8 *)(pcVar6 + uVar24);
                                      *(ulong *)pcVar27 =
                                           CONCAT17((char)((ulong)uVar36 >> 0x38) +
                                                    (char)((ulong)uVar35 >> 0x38),
                                                    CONCAT16((char)((ulong)uVar36 >> 0x30) +
                                                             (char)((ulong)uVar35 >> 0x30),
                                                             CONCAT15((char)((ulong)uVar36 >> 0x28)
                                                                      + (char)((ulong)uVar35 >> 0x28
                                                                              ),
                                                                      CONCAT14((char)((ulong)uVar36
                                                                                     >> 0x20) +
                                                                               (char)((ulong)uVar35
                                                                                     >> 0x20),
                                                                               CONCAT13((char)((
                                                  ulong)uVar36 >> 0x18) +
                                                  (char)((ulong)uVar35 >> 0x18),
                                                  CONCAT12((char)((ulong)uVar36 >> 0x10) +
                                                           (char)((ulong)uVar35 >> 0x10),
                                                           CONCAT11((char)((ulong)uVar36 >> 8) +
                                                                    (char)((ulong)uVar35 >> 8),
                                                                    (char)uVar36 + (char)uVar35)))))
                                                  ));
                                      pcVar28 = (char *)(ulong)(uVar22 >> 0x18 & 7);
                                      pcVar27 = pcVar27 + (long)pcVar28;
                                      if (-1 < (int)uVar22) {
                                        uVar31 = -(uint)*puVar15;
                                      }
                                      uVar32 = (ulong)uVar31;
                                      pcVar18 = pcVar27 + (int)uVar31;
                                      if (param_4 <= pcVar18) {
                                        pcVar6 = pcVar6 + uVar24 + (long)pcVar28;
                                        *(undefined8 *)pcVar27 = *(undefined8 *)pcVar18;
                                        pcVar30 = (char *)((ulong)(uVar22 >> 0x1e ^ 0xffffffff) & 2)
                                        ;
                                        puVar33 = puVar33 + 2;
                                        puVar15 = (ushort *)((long)puVar15 + (long)pcVar30);
                                        *(undefined8 *)(pcVar27 + 8) = *(undefined8 *)(pcVar18 + 8);
                                        pcVar27 = pcVar27 + (uVar22 >> 0x1b & 0xf);
                                        if (puVar33 < puVar34) goto LAB_00123f68;
                                        break;
                                      }
                                    }
                                  }
                                }
                                FUN_0010a430();
                                pcVar12 = *(code **)PTR_PTR_043722f8;
                                if (pcVar12 == (code *)0x0) goto LAB_001247b4;
                                pcVar6 = 
                                "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
                                pcVar7 = "OODLE ERROR : corruption : mp >= window_base\n";
                                uVar35 = 0x15a;
                                goto LAB_001247b0;
                              }
                            }
                          }
                        }
                        FUN_0010a430();
                        pcVar12 = *(code **)PTR_PTR_043722f8;
                        if (pcVar12 == (code *)0x0) goto LAB_001247b4;
                        pcVar6 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
                        pcVar7 = "OODLE ERROR : corruption : mp >= window_base\n";
                        uVar35 = 0x159;
                        goto LAB_001247b0;
                      }
                    }
                  }
                }
                FUN_0010a430();
                pcVar12 = *(code **)PTR_PTR_043722f8;
                if (pcVar12 == (code *)0x0) goto LAB_001247b4;
                pcVar6 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
                pcVar7 = "OODLE ERROR : corruption : mp >= window_base\n";
                uVar35 = 0x154;
                goto LAB_001247b0;
              }
            }
          }
        }
        FUN_0010a430();
        pcVar12 = *(code **)PTR_PTR_043722f8;
        if (pcVar12 == (code *)0x0) goto LAB_001247b4;
        pcVar6 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
        pcVar7 = "OODLE ERROR : corruption : mp >= window_base\n";
        uVar35 = 0x153;
        goto LAB_001247b0;
      }
      puVar33 = (ulong *)((long)puVar33 + 1);
      if (0x17 < (uVar22 & 0xff)) {
        do {
          uVar35 = *(undefined8 *)(pcVar27 + (int)(uint)uVar32);
          uVar36 = *(undefined8 *)pcVar6;
          uVar23 = (uint)uVar24;
          uVar22 = (uVar23 >> 7 & 1) - 1;
          pcVar1 = pcVar27 + (uVar23 & 7);
          uVar31 = (uint)uVar32 & (uVar22 ^ 0xffffffff);
          pcVar28 = (char *)(ulong)uVar31;
          uVar31 = -(uint)*puVar15 & uVar22 | uVar31;
          pcVar18 = pcVar1 + (int)uVar31;
          *(ulong *)pcVar27 =
               CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                        CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                 CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                          (char)((ulong)uVar35 >> 0x28),
                                          CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                   (char)((ulong)uVar35 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                            (char)((ulong)uVar35 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar36 >> 0x10) +
                                                                     (char)((ulong)uVar35 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar36
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar35
                                                                                    >> 8),
                                                                              (char)uVar36 +
                                                                              (char)uVar35)))))));
          if (pcVar18 < param_4) {
            FUN_0010a430();
            pcVar12 = *(code **)PTR_PTR_043722f8;
            if (pcVar12 == (code *)0x0) goto LAB_001247b4;
            pcVar6 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar7 = "OODLE ERROR : corruption : mp >= window_base\n";
            uVar35 = 0x186;
            goto LAB_001247b0;
          }
          pcVar6 = pcVar6 + (uVar23 & 7);
          *(undefined8 *)pcVar1 = *(undefined8 *)pcVar18;
          *(undefined8 *)(pcVar1 + 8) = *(undefined8 *)(pcVar18 + 8);
          bVar5 = (byte)*puVar33;
          puVar15 = (ushort *)((long)puVar15 + (ulong)(uVar22 & 2));
          pcVar27 = pcVar1 + ((uVar23 & 0xff) >> 3 & 0xf);
          puVar33 = (ulong *)((long)puVar33 + 1);
joined_r0x00123c58:
          uVar24 = (ulong)bVar5;
          uVar32 = (ulong)uVar31;
        } while (0x17 < bVar5);
      }
      if (2 < ((uint)uVar24 & 0xff)) {
        return 0;
      }
      if ((uVar24 & 0xff) == 0) {
        if (local_1d0 < puVar10) {
          puVar16 = (ushort *)((long)local_1d0 + 1);
          uVar24 = (ulong)(byte)*local_1d0;
          if (0xfb < uVar24) {
            local_1d0 = (ushort *)((long)local_1d0 + 3);
            if (local_1d0 <= puVar10) {
              uVar24 = uVar24 + (ulong)*puVar16 * 4;
              lVar17 = uVar24 + 0x40;
              if (lVar17 <= (long)pcVar7 - (long)pcVar27) goto LAB_00123f8c;
              goto LAB_00124a54;
            }
            uVar24 = 0;
          }
          lVar17 = uVar24 + 0x40;
          local_1d0 = puVar16;
          if ((long)pcVar7 - (long)pcVar27 < lVar17) goto LAB_00124a54;
        }
        else {
          uVar24 = 0;
          lVar17 = 0x40;
          if ((long)pcVar7 - (long)pcVar27 < 0x40) goto LAB_00124a54;
        }
LAB_00123f8c:
        if ((long)pcVar11 - (long)pcVar6 < lVar17) goto LAB_00124a80;
        uVar24 = uVar24 + 0x37;
        uVar22 = (int)(uVar24 >> 3) + 1;
        lVar20 = (long)(int)uVar32;
        pcVar28 = (char *)((ulong)uVar22 & 3);
        lVar26 = lVar17;
        if ((uVar22 & 3) != 0) {
          lVar26 = 0;
          lVar29 = -(long)pcVar28;
          do {
            uVar35 = *(undefined8 *)(pcVar27 + lVar26 + lVar20);
            uVar36 = *(undefined8 *)(pcVar6 + lVar26);
            *(ulong *)(pcVar27 + lVar26) =
                 CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                          CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                   CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                            (char)((ulong)uVar35 >> 0x28),
                                            CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                     (char)((ulong)uVar35 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                              (char)((ulong)uVar35 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar36 >> 0x10)
                                                                       + (char)((ulong)uVar35 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar36
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar35
                                                                                      >> 8),
                                                                                (char)uVar36 +
                                                                                (char)uVar35)))))));
            lVar26 = lVar26 + 8;
            lVar29 = lVar29 + 1;
          } while (lVar29 != 0);
          pcVar27 = pcVar27 + lVar26;
          pcVar6 = pcVar6 + lVar26;
          pcVar28 = pcVar27 + -8;
          pcVar30 = pcVar6 + -8;
          lVar26 = lVar17 - lVar26;
        }
        if (0x17 < uVar24) {
          lVar29 = 0;
          do {
            lVar25 = lVar29;
            pcVar28 = pcVar27 + lVar25 + lVar20;
            pcVar30 = pcVar6 + lVar25;
            uVar36 = *(undefined8 *)pcVar30;
            uVar35 = *(undefined8 *)pcVar28;
            pcVar18 = pcVar27 + lVar25;
            *(ulong *)pcVar18 =
                 CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                          CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                   CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                            (char)((ulong)uVar35 >> 0x28),
                                            CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                     (char)((ulong)uVar35 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                              (char)((ulong)uVar35 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar36 >> 0x10)
                                                                       + (char)((ulong)uVar35 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar36
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar35
                                                                                      >> 8),
                                                                                (char)uVar36 +
                                                                                (char)uVar35)))))));
            uVar35 = *(undefined8 *)(pcVar28 + 8);
            uVar36 = *(undefined8 *)(pcVar30 + 8);
            *(ulong *)(pcVar18 + 8) =
                 CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                          CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                   CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                            (char)((ulong)uVar35 >> 0x28),
                                            CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                     (char)((ulong)uVar35 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                              (char)((ulong)uVar35 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar36 >> 0x10)
                                                                       + (char)((ulong)uVar35 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar36
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar35
                                                                                      >> 8),
                                                                                (char)uVar36 +
                                                                                (char)uVar35)))))));
            uVar35 = *(undefined8 *)(pcVar28 + 0x10);
            uVar36 = *(undefined8 *)(pcVar30 + 0x10);
            *(ulong *)(pcVar18 + 0x10) =
                 CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                          CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                   CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                            (char)((ulong)uVar35 >> 0x28),
                                            CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                     (char)((ulong)uVar35 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                              (char)((ulong)uVar35 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar36 >> 0x10)
                                                                       + (char)((ulong)uVar35 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar36
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar35
                                                                                      >> 8),
                                                                                (char)uVar36 +
                                                                                (char)uVar35)))))));
            uVar35 = *(undefined8 *)(pcVar28 + 0x18);
            uVar36 = *(undefined8 *)(pcVar30 + 0x18);
            lVar26 = lVar26 + -0x20;
            *(ulong *)(pcVar18 + 0x18) =
                 CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                          CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                   CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                            (char)((ulong)uVar35 >> 0x28),
                                            CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                     (char)((ulong)uVar35 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                              (char)((ulong)uVar35 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar36 >> 0x10)
                                                                       + (char)((ulong)uVar35 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar36
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar35
                                                                                      >> 8),
                                                                                (char)uVar36 +
                                                                                (char)uVar35)))))));
            lVar29 = lVar25 + 0x20;
          } while (8 < lVar26);
          pcVar28 = pcVar27 + lVar25 + 0x18;
          pcVar30 = pcVar6 + lVar25 + 0x18;
        }
        lVar17 = lVar17 - (uVar24 & 0xffff8);
        pcVar27 = pcVar28 + lVar17;
        pcVar6 = pcVar30 + lVar17;
        uVar35 = *(undefined8 *)(pcVar27 + lVar20 + -8);
        uVar36 = *(undefined8 *)(pcVar6 + -8);
        *(ulong *)(pcVar27 + -8) =
             CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                      CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                               CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                        (char)((ulong)uVar35 >> 0x28),
                                        CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                 (char)((ulong)uVar35 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                          (char)((ulong)uVar35 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar36 >> 0x10) +
                                                                   (char)((ulong)uVar35 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar36 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar35 >>
                                                                                  8),(char)uVar36 +
                                                                                     (char)uVar35)))
                                                ))));
      }
      else {
        if (((uint)uVar24 & 0xff) != 1) {
          return 0;
        }
        if (local_1d0 < puVar10) {
          puVar16 = (ushort *)((long)local_1d0 + 1);
          uVar32 = (ulong)(byte)*local_1d0;
          if (uVar32 < 0xfc) {
            local_1d0 = puVar16;
          }
          else if (puVar10 < (ushort *)((long)local_1d0 + 3U)) {
            uVar32 = 0;
            local_1d0 = puVar16;
          }
          else {
            uVar32 = uVar32 + (ulong)*puVar16 * 4;
            local_1d0 = (ushort *)((long)local_1d0 + 3U);
          }
        }
        else {
          uVar32 = 0;
        }
        if ((long)pcVar7 - (long)pcVar27 < (long)(uVar32 + 99)) {
          if ((long)pcVar7 - (long)pcVar27 < (long)(uVar32 + 0x5b)) goto LAB_00124b04;
          if ((long)param_3 - (long)pcVar27 < (long)(uVar32 + 99)) goto LAB_00124b34;
        }
        puVar16 = puVar15 + 1;
        uVar4 = *puVar15;
        pcVar18 = pcVar27 + -(ulong)uVar4;
        if (pcVar18 < param_4) goto LAB_00124b60;
        pcVar1 = pcVar27 + uVar32 + 0x5b;
        *(undefined8 *)pcVar27 = *(undefined8 *)pcVar18;
        *(undefined8 *)(pcVar27 + 8) = *(undefined8 *)(pcVar18 + 8);
        *(undefined8 *)(pcVar27 + 0x10) = *(undefined8 *)(pcVar18 + 0x10);
        *(undefined8 *)(pcVar27 + 0x18) = *(undefined8 *)(pcVar18 + 0x18);
        *(undefined8 *)(pcVar27 + 0x20) = *(undefined8 *)(pcVar18 + 0x20);
        *(undefined8 *)(pcVar27 + 0x28) = *(undefined8 *)(pcVar18 + 0x28);
        *(undefined8 *)(pcVar27 + 0x30) = *(undefined8 *)(pcVar18 + 0x30);
        uVar32 = -(ulong)uVar4;
        *(undefined8 *)(pcVar27 + 0x38) = *(undefined8 *)(pcVar18 + 0x38);
        pcVar18 = pcVar27 + 0x40;
        do {
          pcVar21 = pcVar18 + 8;
          *(undefined8 *)pcVar18 = *(undefined8 *)(pcVar18 + uVar32);
          pcVar18 = pcVar21;
          puVar15 = puVar16;
          pcVar27 = pcVar1;
        } while (pcVar21 < pcVar1);
      }
      if (puVar34 <= puVar33) break;
LAB_00123f68:
    } while (pcVar27 + 0x168 <= param_3);
  }
  uVar22 = (uint)uVar32;
  if (pcVar7 < pcVar27) {
    FUN_0010a430();
    pcVar12 = *(code **)PTR_PTR_043722f8;
    if (pcVar12 == (code *)0x0) goto LAB_001247b4;
    pcVar6 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
    pcVar7 = "OODLE ERROR : corruption : (to_ptr <= parse_chunk_end)\n";
    uVar35 = 0x1c4;
  }
  else {
    if (__src <= pcVar6) {
      if (pcVar11 <= pcVar6 && (long)pcVar6 - (long)pcVar11 != 0) {
        FUN_0010a430();
        pcVar12 = *(code **)PTR_PTR_043722f8;
        if (pcVar12 == (code *)0x0) goto LAB_001247b4;
        pcVar6 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
        pcVar7 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
        uVar35 = 0x1eb;
        goto LAB_001247b0;
      }
      pcVar6 = local_db + ((long)pcVar6 - (long)pcVar11);
      __src = local_db;
      pcVar11 = local_db;
    }
    if (__src_00 <= puVar15) {
      if (puVar13 <= puVar15 && (long)puVar15 - (long)puVar13 != 0) {
        FUN_0010a430();
        pcVar12 = *(code **)PTR_PTR_043722f8;
        if (pcVar12 == (code *)0x0) goto LAB_001247b4;
        pcVar6 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
        pcVar7 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
        uVar35 = 0x1ec;
        goto LAB_001247b0;
      }
      puVar15 = (ushort *)((long)local_16c + ((long)puVar15 - (long)puVar13));
      puVar13 = local_16c;
      __src_00 = local_16c;
    }
    if (puVar33 < puVar8) {
      puVar34 = puVar33 + 2;
      pcVar30 = pcVar27;
      puVar16 = puVar15;
      do {
        if (puVar34 <= puVar33) {
          if (__src <= pcVar6) {
            if (pcVar11 <= pcVar6 && (long)pcVar6 - (long)pcVar11 != 0) {
              FUN_0010a430();
              pcVar12 = *(code **)PTR_PTR_043722f8;
              if (pcVar12 == (code *)0x0) goto LAB_001247b4;
              pcVar6 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              pcVar7 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
              uVar35 = 0x1f8;
              goto LAB_001247b0;
            }
            pcVar6 = local_db + ((long)pcVar6 - (long)pcVar11);
            __src = local_db;
            pcVar11 = local_db;
          }
          puVar34 = puVar33 + 2;
          if (__src_00 <= puVar16) {
            if (puVar13 <= puVar16 && (long)puVar16 - (long)puVar13 != 0) {
              FUN_0010a430();
              pcVar12 = *(code **)PTR_PTR_043722f8;
              if (pcVar12 == (code *)0x0) goto LAB_001247b4;
              pcVar6 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              pcVar7 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
              uVar35 = 0x1f9;
              goto LAB_001247b0;
            }
            puVar16 = (ushort *)((long)local_16c + ((long)puVar16 - (long)puVar13));
            puVar13 = local_16c;
            __src_00 = local_16c;
          }
        }
        puVar14 = (ulong *)((long)puVar33 + 1);
        bVar5 = (byte)*puVar33;
        uVar22 = (uint)uVar32;
        if (0x17 < bVar5) {
          if (param_3 < pcVar30 + 8) {
            FUN_0010a430();
            pcVar12 = *(code **)PTR_PTR_043722f8;
            if (pcVar12 == (code *)0x0) goto LAB_001247b4;
            pcVar7 = "OODLE ERROR : corruption : (to_ptr+8 <= overrun_chunk_end)\n";
          }
          else {
            uVar35 = *(undefined8 *)(pcVar30 + (int)uVar22);
            uVar36 = *(undefined8 *)pcVar6;
            uVar31 = (bVar5 >> 7) - 1;
            pcVar1 = pcVar30 + ((ulong)bVar5 & 7);
            uVar22 = -(uint)*puVar16 & uVar31 | uVar22 & (uVar31 ^ 0xffffffff);
            uVar32 = (ulong)uVar22;
            pcVar18 = pcVar1 + (int)uVar22;
            *(ulong *)pcVar30 =
                 CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                          CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                   CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                            (char)((ulong)uVar35 >> 0x28),
                                            CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                     (char)((ulong)uVar35 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                              (char)((ulong)uVar35 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar36 >> 0x10)
                                                                       + (char)((ulong)uVar35 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar36
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar35
                                                                                      >> 8),
                                                                                (char)uVar36 +
                                                                                (char)uVar35)))))));
            if (pcVar18 < param_4) {
              FUN_0010a430();
              pcVar12 = *(code **)PTR_PTR_043722f8;
              if (pcVar12 == (code *)0x0) goto LAB_001247b4;
              pcVar7 = "OODLE ERROR : corruption : mp >= window_base\n";
            }
            else {
              pcVar28 = pcVar1 + 0x10;
              if (pcVar28 <= param_3) {
                puVar15 = (ushort *)((long)puVar16 + (ulong)(uVar31 & 2));
                *(undefined8 *)pcVar1 = *(undefined8 *)pcVar18;
                pcVar6 = pcVar6 + ((ulong)bVar5 & 7);
                pcVar27 = pcVar1 + ((ulong)(bVar5 >> 3) & 0xf);
                *(undefined8 *)(pcVar1 + 8) = *(undefined8 *)(pcVar18 + 8);
                goto LAB_00124318;
              }
              FUN_0010a430();
              pcVar12 = *(code **)PTR_PTR_043722f8;
              if (pcVar12 == (code *)0x0) goto LAB_001247b4;
              pcVar7 = "OODLE ERROR : corruption : (to_ptr+16 <= overrun_chunk_end)\n";
            }
          }
          pcVar6 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          uVar35 = 0x200;
          goto LAB_001247b0;
        }
        if (2 < bVar5) {
          return 0;
        }
        if (bVar5 == 0) {
          if (local_1d0 < puVar10) {
            puVar15 = (ushort *)((long)local_1d0 + 1);
            uVar24 = (ulong)(byte)*local_1d0;
            if (uVar24 < 0xfc) {
              local_1d0 = puVar15;
            }
            else if (puVar10 < (ushort *)((long)local_1d0 + 3U)) {
              uVar24 = 0;
              local_1d0 = puVar15;
            }
            else {
              uVar24 = uVar24 + (ulong)*puVar15 * 4;
              local_1d0 = (ushort *)((long)local_1d0 + 3U);
            }
          }
          else {
            uVar24 = 0;
          }
          lVar17 = uVar24 + 0x40;
          if ((long)pcVar7 - (long)pcVar30 < lVar17) goto LAB_00124a54;
          if ((long)pcVar11 - (long)pcVar6 < lVar17) goto LAB_00124a80;
          uVar24 = uVar24 + 0x37;
          uVar31 = (int)(uVar24 >> 3) + 1;
          pcVar27 = (char *)((ulong)uVar31 & 3);
          lVar26 = lVar17;
          if ((uVar31 & 3) != 0) {
            lVar26 = 0;
            lVar20 = -(long)pcVar27;
            do {
              uVar35 = *(undefined8 *)(pcVar30 + lVar26 + (int)uVar22);
              uVar36 = *(undefined8 *)(pcVar6 + lVar26);
              *(ulong *)(pcVar30 + lVar26) =
                   CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                            CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                     CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                              (char)((ulong)uVar35 >> 0x28),
                                              CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                       (char)((ulong)uVar35 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                                (char)((ulong)uVar35 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar36 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar35 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar36 >> 8) + (char)((ulong)uVar35 >> 8),
                                                  (char)uVar36 + (char)uVar35)))))));
              lVar26 = lVar26 + 8;
              lVar20 = lVar20 + 1;
            } while (lVar20 != 0);
            pcVar30 = pcVar30 + lVar26;
            pcVar6 = pcVar6 + lVar26;
            pcVar27 = pcVar30 + -8;
            pcVar28 = pcVar6 + -8;
            lVar26 = lVar17 - lVar26;
          }
          if (0x17 < uVar24) {
            lVar20 = 0;
            do {
              lVar29 = lVar20;
              pcVar27 = pcVar30 + lVar29 + (int)uVar22;
              pcVar28 = pcVar6 + lVar29;
              uVar36 = *(undefined8 *)pcVar28;
              uVar35 = *(undefined8 *)pcVar27;
              pcVar18 = pcVar30 + lVar29;
              *(ulong *)pcVar18 =
                   CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                            CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                     CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                              (char)((ulong)uVar35 >> 0x28),
                                              CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                       (char)((ulong)uVar35 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                                (char)((ulong)uVar35 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar36 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar35 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar36 >> 8) + (char)((ulong)uVar35 >> 8),
                                                  (char)uVar36 + (char)uVar35)))))));
              uVar35 = *(undefined8 *)(pcVar27 + 8);
              uVar36 = *(undefined8 *)(pcVar28 + 8);
              *(ulong *)(pcVar18 + 8) =
                   CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                            CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                     CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                              (char)((ulong)uVar35 >> 0x28),
                                              CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                       (char)((ulong)uVar35 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                                (char)((ulong)uVar35 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar36 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar35 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar36 >> 8) + (char)((ulong)uVar35 >> 8),
                                                  (char)uVar36 + (char)uVar35)))))));
              uVar35 = *(undefined8 *)(pcVar27 + 0x10);
              uVar36 = *(undefined8 *)(pcVar28 + 0x10);
              *(ulong *)(pcVar18 + 0x10) =
                   CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                            CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                     CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                              (char)((ulong)uVar35 >> 0x28),
                                              CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                       (char)((ulong)uVar35 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                                (char)((ulong)uVar35 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar36 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar35 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar36 >> 8) + (char)((ulong)uVar35 >> 8),
                                                  (char)uVar36 + (char)uVar35)))))));
              uVar35 = *(undefined8 *)(pcVar27 + 0x18);
              uVar36 = *(undefined8 *)(pcVar28 + 0x18);
              lVar26 = lVar26 + -0x20;
              *(ulong *)(pcVar18 + 0x18) =
                   CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                            CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                     CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                              (char)((ulong)uVar35 >> 0x28),
                                              CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                       (char)((ulong)uVar35 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                                (char)((ulong)uVar35 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar36 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar35 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar36 >> 8) + (char)((ulong)uVar35 >> 8),
                                                  (char)uVar36 + (char)uVar35)))))));
              lVar20 = lVar29 + 0x20;
            } while (8 < lVar26);
            pcVar27 = pcVar30 + lVar29 + 0x18;
            pcVar28 = pcVar6 + lVar29 + 0x18;
          }
          lVar17 = lVar17 - (uVar24 & 0xffff8);
          pcVar27 = pcVar27 + lVar17;
          pcVar6 = pcVar28 + lVar17;
          uVar35 = *(undefined8 *)(pcVar27 + (long)(int)uVar22 + -8);
          uVar36 = *(undefined8 *)(pcVar6 + -8);
          *(ulong *)(pcVar27 + -8) =
               CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                        CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                 CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                          (char)((ulong)uVar35 >> 0x28),
                                          CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                   (char)((ulong)uVar35 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                            (char)((ulong)uVar35 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar36 >> 0x10) +
                                                                     (char)((ulong)uVar35 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar36
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar35
                                                                                    >> 8),
                                                                              (char)uVar36 +
                                                                              (char)uVar35)))))));
          puVar15 = puVar16;
        }
        else {
          if (bVar5 != 1) {
            return 0;
          }
          if (local_1d0 < puVar10) {
            puVar15 = (ushort *)((long)local_1d0 + 1);
            uVar32 = (ulong)(byte)*local_1d0;
            if (uVar32 < 0xfc) {
              local_1d0 = puVar15;
            }
            else if (puVar10 < (ushort *)((long)local_1d0 + 3U)) {
              uVar32 = 0;
              local_1d0 = puVar15;
            }
            else {
              uVar32 = uVar32 + (ulong)*puVar15 * 4;
              local_1d0 = (ushort *)((long)local_1d0 + 3U);
            }
          }
          else {
            uVar32 = 0;
          }
          if ((long)pcVar7 - (long)pcVar30 < (long)(uVar32 + 99)) {
            if ((long)pcVar7 - (long)pcVar30 < (long)(uVar32 + 0x5b)) goto LAB_00124b04;
            if ((long)param_3 - (long)pcVar30 < (long)(uVar32 + 99)) goto LAB_00124b34;
          }
          puVar15 = puVar16 + 1;
          uVar4 = *puVar16;
          pcVar18 = pcVar30 + -(ulong)uVar4;
          if (pcVar18 < param_4) goto LAB_00124b60;
          pcVar27 = pcVar30 + uVar32 + 0x5b;
          *(undefined8 *)pcVar30 = *(undefined8 *)pcVar18;
          *(undefined8 *)(pcVar30 + 8) = *(undefined8 *)(pcVar18 + 8);
          *(undefined8 *)(pcVar30 + 0x10) = *(undefined8 *)(pcVar18 + 0x10);
          *(undefined8 *)(pcVar30 + 0x18) = *(undefined8 *)(pcVar18 + 0x18);
          *(undefined8 *)(pcVar30 + 0x20) = *(undefined8 *)(pcVar18 + 0x20);
          *(undefined8 *)(pcVar30 + 0x28) = *(undefined8 *)(pcVar18 + 0x28);
          *(undefined8 *)(pcVar30 + 0x30) = *(undefined8 *)(pcVar18 + 0x30);
          uVar32 = -(ulong)uVar4;
          *(undefined8 *)(pcVar30 + 0x38) = *(undefined8 *)(pcVar18 + 0x38);
          pcVar30 = pcVar30 + 0x40;
          do {
            pcVar18 = pcVar30 + 8;
            *(undefined8 *)pcVar30 = *(undefined8 *)(pcVar30 + uVar32);
            pcVar30 = pcVar18;
          } while (pcVar18 < pcVar27);
        }
        if (__src <= pcVar6) {
          if (pcVar11 <= pcVar6 && (long)pcVar6 - (long)pcVar11 != 0) {
            FUN_0010a430();
            pcVar12 = *(code **)PTR_PTR_043722f8;
            if (pcVar12 == (code *)0x0) goto LAB_001247b4;
            pcVar6 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar7 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
            uVar35 = 0x20c;
            goto LAB_001247b0;
          }
          pcVar6 = local_db + ((long)pcVar6 - (long)pcVar11);
          __src = local_db;
          pcVar11 = local_db;
        }
        puVar34 = (ulong *)((long)puVar33 + 0x11);
        if (__src_00 <= puVar15) {
          if (puVar13 <= puVar15 && (long)puVar15 - (long)puVar13 != 0) {
            FUN_0010a430();
            pcVar12 = *(code **)PTR_PTR_043722f8;
            if (pcVar12 == (code *)0x0) goto LAB_001247b4;
            pcVar6 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar7 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
            uVar35 = 0x20d;
            goto LAB_001247b0;
          }
          puVar15 = (ushort *)((long)local_16c + ((long)puVar15 - (long)puVar13));
          puVar13 = local_16c;
          __src_00 = local_16c;
        }
LAB_00124318:
        uVar22 = (uint)uVar32;
        puVar33 = puVar14;
        pcVar30 = pcVar27;
        puVar16 = puVar15;
      } while (puVar14 < puVar8);
    }
    if (pcVar7 <= pcVar27) {
      if (pcVar27 != pcVar7) {
        return 0;
      }
LAB_0012471c:
      if (puVar13 <= puVar15 && (long)puVar15 - (long)puVar13 != 0) {
        return 0;
      }
      if (pcVar11 <= pcVar6 && (long)pcVar6 - (long)pcVar11 != 0) {
        return 0;
      }
      *param_7 = uVar22;
      *(char **)(param_6 + 0x38) = pcVar2 + ((long)pcVar6 - (long)pcVar11);
      *(char **)(param_6 + 0x48) = (char *)((long)puVar3 + ((long)puVar15 - (long)puVar13));
      if (puVar10 < local_1d0) {
        return 0;
      }
      *(ushort **)(param_6 + 0x10) = local_1d0;
      return param_5;
    }
    uVar32 = (long)pcVar7 - (long)pcVar27;
    if (pcVar6 + uVar32 <= pcVar11) {
      if (7 < (long)uVar32) {
        lVar17 = -8 - (long)pcVar27;
        uVar24 = uVar32;
        if (((uint)(pcVar7 + lVar17) >> 3 & 1) == 0) {
          uVar35 = *(undefined8 *)(pcVar27 + (int)uVar22);
          uVar36 = *(undefined8 *)pcVar6;
          *(ulong *)pcVar27 =
               CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                        CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                 CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                          (char)((ulong)uVar35 >> 0x28),
                                          CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                   (char)((ulong)uVar35 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                            (char)((ulong)uVar35 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar36 >> 0x10) +
                                                                     (char)((ulong)uVar35 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar36
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar35
                                                                                    >> 8),
                                                                              (char)uVar36 +
                                                                              (char)uVar35)))))));
          uVar24 = uVar32 - 8;
          pcVar27 = pcVar27 + 8;
          pcVar6 = pcVar6 + 8;
        }
        if ((char *)0x7 < pcVar7 + lVar17) {
          do {
            uVar35 = *(undefined8 *)pcVar6;
            uVar36 = *(undefined8 *)(pcVar27 + (long)(int)uVar22 + 8 + -8);
            *(ulong *)pcVar27 =
                 CONCAT17((char)((ulong)uVar35 >> 0x38) + (char)((ulong)uVar36 >> 0x38),
                          CONCAT16((char)((ulong)uVar35 >> 0x30) + (char)((ulong)uVar36 >> 0x30),
                                   CONCAT15((char)((ulong)uVar35 >> 0x28) +
                                            (char)((ulong)uVar36 >> 0x28),
                                            CONCAT14((char)((ulong)uVar35 >> 0x20) +
                                                     (char)((ulong)uVar36 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar35 >> 0x18) +
                                                              (char)((ulong)uVar36 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar35 >> 0x10)
                                                                       + (char)((ulong)uVar36 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar35
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar36
                                                                                      >> 8),
                                                                                (char)uVar35 +
                                                                                (char)uVar36)))))));
            uVar35 = *(undefined8 *)(pcVar27 + (long)(int)uVar22 + 8);
            uVar36 = *(undefined8 *)(pcVar6 + 8);
            pcVar6 = pcVar6 + 0x10;
            uVar24 = uVar24 - 0x10;
            *(ulong *)(pcVar27 + 8) =
                 CONCAT17((char)((ulong)uVar36 >> 0x38) + (char)((ulong)uVar35 >> 0x38),
                          CONCAT16((char)((ulong)uVar36 >> 0x30) + (char)((ulong)uVar35 >> 0x30),
                                   CONCAT15((char)((ulong)uVar36 >> 0x28) +
                                            (char)((ulong)uVar35 >> 0x28),
                                            CONCAT14((char)((ulong)uVar36 >> 0x20) +
                                                     (char)((ulong)uVar35 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar36 >> 0x18) +
                                                              (char)((ulong)uVar35 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar36 >> 0x10)
                                                                       + (char)((ulong)uVar35 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar36
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar35
                                                                                      >> 8),
                                                                                (char)uVar36 +
                                                                                (char)uVar35)))))));
            pcVar27 = pcVar27 + 0x10;
          } while (7 < (long)uVar24);
        }
        uVar32 = uVar32 & 7;
      }
      if (uVar32 != 0) {
        uVar24 = uVar32;
        if ((uVar32 & 1) != 0) {
          *pcVar27 = pcVar27[(int)uVar22] + *pcVar6;
          pcVar6 = pcVar6 + 1;
          uVar24 = uVar32 - 1;
          pcVar27 = pcVar27 + 1;
        }
        if (uVar32 != 1) {
          pcVar7 = pcVar27 + 1;
          do {
            uVar24 = uVar24 - 2;
            pcVar7[-1] = (pcVar7 + (int)uVar22)[-1] + *pcVar6;
            pcVar27 = pcVar6 + 1;
            pcVar6 = pcVar6 + 2;
            *pcVar7 = pcVar7[(int)uVar22] + *pcVar27;
            pcVar7 = pcVar7 + 2;
          } while (uVar24 != 0);
        }
      }
      goto LAB_0012471c;
    }
    FUN_0010a430();
    pcVar12 = *(code **)PTR_PTR_043722f8;
    if (pcVar12 == (code *)0x0) goto LAB_001247b4;
    pcVar6 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
    pcVar7 = "OODLE ERROR : corruption : (literals_ptr+lrl <= literals_end)\n";
    uVar35 = 0x21f;
  }
LAB_001247b0:
  (*pcVar12)(0,pcVar6,uVar35,pcVar7);
LAB_001247b4:
  FUN_0010a450();
  return 0;
LAB_00124a54:
  FUN_0010a430();
  pcVar12 = *(code **)PTR_PTR_043722f8;
  if (pcVar12 == (code *)0x0) goto LAB_001247b4;
  pcVar6 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar7 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(parse_chunk_end-to_ptr))\n";
  uVar35 = 0x2a;
  goto LAB_001247b0;
LAB_00124a80:
  FUN_0010a430();
  pcVar12 = *(code **)PTR_PTR_043722f8;
  if (pcVar12 == (code *)0x0) goto LAB_001247b4;
  pcVar6 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar7 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(literals_end-literals_ptr))\n";
  uVar35 = 0x2b;
  goto LAB_001247b0;
LAB_00124b04:
  FUN_0010a430();
  pcVar12 = *(code **)PTR_PTR_043722f8;
  if (pcVar12 == (code *)0x0) goto LAB_001247b4;
  pcVar6 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar7 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  uVar35 = 0x80;
  goto LAB_001247b0;
LAB_00124b34:
  FUN_0010a430();
  pcVar12 = *(code **)PTR_PTR_043722f8;
  if (pcVar12 == (code *)0x0) goto LAB_001247b4;
  pcVar6 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar7 = "OODLE ERROR : corruption : ( ml+8 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  uVar35 = 0x81;
  goto LAB_001247b0;
LAB_00124b60:
  FUN_0010a430();
  pcVar12 = *(code **)PTR_PTR_043722f8;
  if (pcVar12 == (code *)0x0) goto LAB_001247b4;
  pcVar6 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar7 = "OODLE ERROR : corruption : mp >= window_base\n";
  uVar35 = 0x92;
  goto LAB_001247b0;
}


