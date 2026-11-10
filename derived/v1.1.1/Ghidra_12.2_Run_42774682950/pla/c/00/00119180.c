/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00119180; name: FUN_00119180
 */


bool FUN_00119180(long param_1,char *param_2,char *param_3,char *param_4,long param_5)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  size_t __n;
  byte bVar11;
  int iVar12;
  uint *puVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  char *pcVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  char *__src;
  char *pcVar23;
  uint *puVar24;
  byte *pbVar26;
  byte *pbVar25;
  undefined8 uVar27;
  undefined8 uVar28;
  char *local_220;
  char local_150 [204];
  undefined8 uStack_84;
  int aiStack_7c [7];
  
  if ((long)param_4 - (long)param_3 < 0x10) {
    return false;
  }
  puVar7 = *(uint **)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x18);
  lVar8 = *(long *)(param_1 + 0x50);
  lVar10 = *(long *)(param_1 + 0x58);
  puVar24 = *(uint **)(param_1 + 0x20);
  pbVar25 = *(byte **)(param_1 + 0x30);
  lVar22 = *(long *)(param_1 + 0x38);
  puVar2 = puVar24 + *(long *)(param_1 + 0x28);
  pcVar23 = *(char **)(param_1 + 0x40);
  __n = *(size_t *)(param_1 + 0x48);
  aiStack_7c[1] = 0xfffffff8;
  aiStack_7c[2] = 0xfffffff8;
  aiStack_7c[3] = 0xfffffff8;
  if (0x14f < (long)param_4 - (long)param_3) {
    param_3 = param_4 + -0x150;
  }
  puVar2[0] = 3;
  puVar2[1] = 3;
  puVar2[2] = 3;
  puVar2[3] = 3;
  puVar2[4] = 3;
  puVar2[5] = 3;
  puVar2[6] = 3;
  puVar2[7] = 3;
  pbVar3 = pbVar25 + lVar22;
  puVar2[8] = 3;
  puVar2[9] = 3;
  puVar2[10] = 3;
  puVar2[0xb] = 3;
  puVar2[0xc] = 3;
  puVar2[0xd] = 3;
  puVar2[0xe] = 3;
  puVar2[0xf] = 3;
  local_220 = pcVar23 + __n;
  if (199 < (long)__n) {
    __n = 200;
  }
  __src = local_220 + -__n;
  memcpy(local_150 + -__n,__src,__n);
  uVar16 = 0xfffffffffffffff8;
  local_150[0] = '\0';
  local_150[1] = '\0';
  local_150[2] = '\0';
  local_150[3] = '\0';
  local_150[4] = '\0';
  local_150[5] = '\0';
  local_150[6] = '\0';
  local_150[7] = '\0';
  local_150[0xb8] = '\0';
  local_150[0xb9] = '\0';
  local_150[0xba] = '\0';
  local_150[0xbb] = '\0';
  local_150[0xbc] = '\0';
  local_150[0xbd] = '\0';
  local_150[0xbe] = '\0';
  local_150[0xbf] = '\0';
  local_150[0xc0] = '\0';
  local_150[0xc1] = '\0';
  local_150[0xc2] = '\0';
  local_150[0xc3] = '\0';
  local_150[0xc4] = '\0';
  local_150[0xc5] = '\0';
  local_150[0xc6] = '\0';
  local_150[199] = '\0';
  local_150[0xa8] = '\0';
  local_150[0xa9] = '\0';
  local_150[0xaa] = '\0';
  local_150[0xab] = '\0';
  local_150[0xac] = '\0';
  local_150[0xad] = '\0';
  local_150[0xae] = '\0';
  local_150[0xaf] = '\0';
  local_150[0xb0] = '\0';
  local_150[0xb1] = '\0';
  local_150[0xb2] = '\0';
  local_150[0xb3] = '\0';
  local_150[0xb4] = '\0';
  local_150[0xb5] = '\0';
  local_150[0xb6] = '\0';
  local_150[0xb7] = '\0';
  local_150[0x98] = '\0';
  local_150[0x99] = '\0';
  local_150[0x9a] = '\0';
  local_150[0x9b] = '\0';
  local_150[0x9c] = '\0';
  local_150[0x9d] = '\0';
  local_150[0x9e] = '\0';
  local_150[0x9f] = '\0';
  local_150[0xa0] = '\0';
  local_150[0xa1] = '\0';
  local_150[0xa2] = '\0';
  local_150[0xa3] = '\0';
  local_150[0xa4] = '\0';
  local_150[0xa5] = '\0';
  local_150[0xa6] = '\0';
  local_150[0xa7] = '\0';
  local_150[0x88] = '\0';
  local_150[0x89] = '\0';
  local_150[0x8a] = '\0';
  local_150[0x8b] = '\0';
  local_150[0x8c] = '\0';
  local_150[0x8d] = '\0';
  local_150[0x8e] = '\0';
  local_150[0x8f] = '\0';
  local_150[0x90] = '\0';
  local_150[0x91] = '\0';
  local_150[0x92] = '\0';
  local_150[0x93] = '\0';
  local_150[0x94] = '\0';
  local_150[0x95] = '\0';
  local_150[0x96] = '\0';
  local_150[0x97] = '\0';
  local_150[0x78] = '\0';
  local_150[0x79] = '\0';
  local_150[0x7a] = '\0';
  local_150[0x7b] = '\0';
  local_150[0x7c] = '\0';
  local_150[0x7d] = '\0';
  local_150[0x7e] = '\0';
  local_150[0x7f] = '\0';
  local_150[0x80] = '\0';
  local_150[0x81] = '\0';
  local_150[0x82] = '\0';
  local_150[0x83] = '\0';
  local_150[0x84] = '\0';
  local_150[0x85] = '\0';
  local_150[0x86] = '\0';
  local_150[0x87] = '\0';
  local_150[0x68] = '\0';
  local_150[0x69] = '\0';
  local_150[0x6a] = '\0';
  local_150[0x6b] = '\0';
  local_150[0x6c] = '\0';
  local_150[0x6d] = '\0';
  local_150[0x6e] = '\0';
  local_150[0x6f] = '\0';
  local_150[0x70] = '\0';
  local_150[0x71] = '\0';
  local_150[0x72] = '\0';
  local_150[0x73] = '\0';
  local_150[0x74] = '\0';
  local_150[0x75] = '\0';
  local_150[0x76] = '\0';
  local_150[0x77] = '\0';
  local_150[0x58] = '\0';
  local_150[0x59] = '\0';
  local_150[0x5a] = '\0';
  local_150[0x5b] = '\0';
  local_150[0x5c] = '\0';
  local_150[0x5d] = '\0';
  local_150[0x5e] = '\0';
  local_150[0x5f] = '\0';
  local_150[0x60] = '\0';
  local_150[0x61] = '\0';
  local_150[0x62] = '\0';
  local_150[99] = '\0';
  local_150[100] = '\0';
  local_150[0x65] = '\0';
  local_150[0x66] = '\0';
  local_150[0x67] = '\0';
  local_150[0x48] = '\0';
  local_150[0x49] = '\0';
  local_150[0x4a] = '\0';
  local_150[0x4b] = '\0';
  local_150[0x4c] = '\0';
  local_150[0x4d] = '\0';
  local_150[0x4e] = '\0';
  local_150[0x4f] = '\0';
  local_150[0x50] = '\0';
  local_150[0x51] = '\0';
  local_150[0x52] = '\0';
  local_150[0x53] = '\0';
  local_150[0x54] = '\0';
  local_150[0x55] = '\0';
  local_150[0x56] = '\0';
  local_150[0x57] = '\0';
  local_150[0x38] = '\0';
  local_150[0x39] = '\0';
  local_150[0x3a] = '\0';
  local_150[0x3b] = '\0';
  local_150[0x3c] = '\0';
  local_150[0x3d] = '\0';
  local_150[0x3e] = '\0';
  local_150[0x3f] = '\0';
  local_150[0x40] = '\0';
  local_150[0x41] = '\0';
  local_150[0x42] = '\0';
  local_150[0x43] = '\0';
  local_150[0x44] = '\0';
  local_150[0x45] = '\0';
  local_150[0x46] = '\0';
  local_150[0x47] = '\0';
  local_150[0x28] = '\0';
  local_150[0x29] = '\0';
  local_150[0x2a] = '\0';
  local_150[0x2b] = '\0';
  local_150[0x2c] = '\0';
  local_150[0x2d] = '\0';
  local_150[0x2e] = '\0';
  local_150[0x2f] = '\0';
  local_150[0x30] = '\0';
  local_150[0x31] = '\0';
  local_150[0x32] = '\0';
  local_150[0x33] = '\0';
  local_150[0x34] = '\0';
  local_150[0x35] = '\0';
  local_150[0x36] = '\0';
  local_150[0x37] = '\0';
  local_150[0x18] = '\0';
  local_150[0x19] = '\0';
  local_150[0x1a] = '\0';
  local_150[0x1b] = '\0';
  local_150[0x1c] = '\0';
  local_150[0x1d] = '\0';
  local_150[0x1e] = '\0';
  local_150[0x1f] = '\0';
  local_150[0x20] = '\0';
  local_150[0x21] = '\0';
  local_150[0x22] = '\0';
  local_150[0x23] = '\0';
  local_150[0x24] = '\0';
  local_150[0x25] = '\0';
  local_150[0x26] = '\0';
  local_150[0x27] = '\0';
  local_150[8] = '\0';
  local_150[9] = '\0';
  local_150[10] = '\0';
  local_150[0xb] = '\0';
  local_150[0xc] = '\0';
  local_150[0xd] = '\0';
  local_150[0xe] = '\0';
  local_150[0xf] = '\0';
  local_150[0x10] = '\0';
  local_150[0x11] = '\0';
  local_150[0x12] = '\0';
  local_150[0x13] = '\0';
  local_150[0x14] = '\0';
  local_150[0x15] = '\0';
  local_150[0x16] = '\0';
  local_150[0x17] = '\0';
  puVar15 = puVar7;
  do {
    if ((pbVar3 <= pbVar25) || (param_3 <= param_2)) {
      while( true ) {
        if (pbVar3 <= pbVar25) {
          if (lVar8 != lVar8 + lVar10 * 4) {
            return false;
          }
          if (puVar24 != puVar2) {
            return false;
          }
          if (puVar15 != puVar7 + lVar9) {
            return false;
          }
          if (param_2 < param_4) {
            uVar20 = (long)param_4 - (long)param_2;
            if ((long)local_220 - (long)pcVar23 != uVar20) {
              return false;
            }
            if (7 < (long)uVar20) {
              lVar8 = -8 - (long)param_2;
              uVar17 = uVar20;
              if (((uint)(param_4 + lVar8) >> 3 & 1) == 0) {
                uVar27 = *(undefined8 *)(param_2 + uVar16);
                uVar28 = *(undefined8 *)pcVar23;
                *(ulong *)param_2 =
                     CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                              CONCAT16((char)((ulong)uVar28 >> 0x30) + (char)((ulong)uVar27 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                                 (char)((ulong)uVar27 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                          (char)((ulong)uVar27 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                                   (char)((ulong)uVar27 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar28 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar27 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar28 >> 8) + (char)((ulong)uVar27 >> 8),
                                                  (char)uVar28 + (char)uVar27)))))));
                uVar17 = uVar20 - 8;
                param_2 = param_2 + 8;
                pcVar23 = pcVar23 + 8;
              }
              if (&DAT_00000007 < param_4 + lVar8) {
                do {
                  uVar27 = *(undefined8 *)pcVar23;
                  uVar28 = *(undefined8 *)(param_2 + uVar16 + 8 + -8);
                  *(ulong *)param_2 =
                       CONCAT17((char)((ulong)uVar27 >> 0x38) + (char)((ulong)uVar28 >> 0x38),
                                CONCAT16((char)((ulong)uVar27 >> 0x30) +
                                         (char)((ulong)uVar28 >> 0x30),
                                         CONCAT15((char)((ulong)uVar27 >> 0x28) +
                                                  (char)((ulong)uVar28 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar27 >> 0x20) +
                                                           (char)((ulong)uVar28 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar27 >> 0x18) +
                                                                    (char)((ulong)uVar28 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar27 >>
                                                                                   0x10) +
                                                                             (char)((ulong)uVar28 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar27 >> 8) + (char)((ulong)uVar28 >> 8),
                                                  (char)uVar27 + (char)uVar28)))))));
                  uVar27 = *(undefined8 *)(param_2 + uVar16 + 8);
                  uVar28 = *(undefined8 *)(pcVar23 + 8);
                  pcVar23 = pcVar23 + 0x10;
                  uVar17 = uVar17 - 0x10;
                  *(ulong *)(param_2 + 8) =
                       CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                                CONCAT16((char)((ulong)uVar28 >> 0x30) +
                                         (char)((ulong)uVar27 >> 0x30),
                                         CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                                  (char)((ulong)uVar27 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                           (char)((ulong)uVar27 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                                    (char)((ulong)uVar27 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar28 >>
                                                                                   0x10) +
                                                                             (char)((ulong)uVar27 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar28 >> 8) + (char)((ulong)uVar27 >> 8),
                                                  (char)uVar28 + (char)uVar27)))))));
                  param_2 = param_2 + 0x10;
                } while (7 < (long)uVar17);
              }
              uVar20 = uVar20 & 7;
            }
            if (uVar20 != 0) {
              uVar17 = uVar20;
              if ((uVar20 & 1) != 0) {
                *param_2 = param_2[uVar16] + *pcVar23;
                pcVar23 = pcVar23 + 1;
                uVar17 = uVar20 - 1;
                param_2 = param_2 + 1;
              }
              if (uVar20 != 1) {
                do {
                  uVar17 = uVar17 - 2;
                  *param_2 = (param_2 + uVar16 + 1)[-1] + *pcVar23;
                  param_2[1] = param_2[uVar16 + 1] + pcVar23[1];
                  param_2 = param_2 + 2;
                  pcVar23 = pcVar23 + 2;
                } while (uVar17 != 0);
              }
            }
          }
          return param_2 == param_4;
        }
        if (__src <= pcVar23) {
          if (local_220 <= pcVar23 && (long)pcVar23 - (long)local_220 != 0) {
            return false;
          }
          pcVar23 = local_150 + ((long)pcVar23 - (long)local_220);
          __src = local_150;
          local_220 = local_150;
        }
        bVar11 = *pbVar25;
        aiStack_7c[4] = *puVar15;
        uVar20 = (ulong)*puVar24;
        puVar13 = puVar24 + 1;
        if (((ulong)bVar11 & 3) != 3) {
          uVar20 = (ulong)bVar11 & 3;
          puVar13 = puVar24;
        }
        if ((long)(param_4 + (-0x10 - (long)param_2)) < (long)uVar20) break;
        uVar27 = *(undefined8 *)(param_2 + uVar16);
        uVar28 = *(undefined8 *)pcVar23;
        *(ulong *)param_2 =
             CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                      CONCAT16((char)((ulong)uVar28 >> 0x30) + (char)((ulong)uVar27 >> 0x30),
                               CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                        (char)((ulong)uVar27 >> 0x28),
                                        CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                 (char)((ulong)uVar27 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                          (char)((ulong)uVar27 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar28 >> 0x10) +
                                                                   (char)((ulong)uVar27 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar28 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar27 >>
                                                                                  8),(char)uVar28 +
                                                                                     (char)uVar27)))
                                                ))));
        if (8 < uVar20) {
          uVar27 = *(undefined8 *)(param_2 + uVar16 + 8);
          uVar28 = *(undefined8 *)(pcVar23 + 8);
          *(ulong *)(param_2 + 8) =
               CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                        CONCAT16((char)((ulong)uVar28 >> 0x30) + (char)((ulong)uVar27 >> 0x30),
                                 CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                          (char)((ulong)uVar27 >> 0x28),
                                          CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                   (char)((ulong)uVar27 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                            (char)((ulong)uVar27 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar28 >> 0x10) +
                                                                     (char)((ulong)uVar27 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar28
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar27
                                                                                    >> 8),
                                                                              (char)uVar28 +
                                                                              (char)uVar27)))))));
          if (0x10 < uVar20) {
            uVar27 = *(undefined8 *)(param_2 + uVar16 + 0x10);
            uVar28 = *(undefined8 *)(pcVar23 + 0x10);
            *(ulong *)(param_2 + 0x10) =
                 CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                          CONCAT16((char)((ulong)uVar28 >> 0x30) + (char)((ulong)uVar27 >> 0x30),
                                   CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                            (char)((ulong)uVar27 >> 0x28),
                                            CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                     (char)((ulong)uVar27 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                              (char)((ulong)uVar27 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar28 >> 0x10)
                                                                       + (char)((ulong)uVar27 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar28
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar27
                                                                                      >> 8),
                                                                                (char)uVar28 +
                                                                                (char)uVar27)))))));
            if (0x18 < uVar20) {
              if (((long)__src - (long)pcVar23 <= (long)uVar20) &&
                 ((long)local_220 - (long)pcVar23 < (long)uVar20)) {
                return false;
              }
              lVar22 = 0x1f - uVar20;
              lVar21 = uVar20 - 0x18;
              if (lVar22 < 0) {
                lVar22 = -1;
              }
              uVar17 = lVar21 + lVar22;
              uVar1 = ((uint)(uVar17 >> 3) & 0x1fffffff) + 1;
              pcVar19 = param_2 + 0x18;
              pcVar23 = pcVar23 + 0x18;
              if ((uVar1 & 3) != 0) {
                lVar22 = 0;
                lVar14 = -((ulong)uVar1 & 3);
                do {
                  uVar27 = *(undefined8 *)(param_2 + lVar22 + uVar16 + 0x18);
                  uVar28 = *(undefined8 *)(pcVar23 + lVar22);
                  *(ulong *)(pcVar19 + lVar22) =
                       CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                                CONCAT16((char)((ulong)uVar28 >> 0x30) +
                                         (char)((ulong)uVar27 >> 0x30),
                                         CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                                  (char)((ulong)uVar27 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                           (char)((ulong)uVar27 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                                    (char)((ulong)uVar27 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar28 >>
                                                                                   0x10) +
                                                                             (char)((ulong)uVar27 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar28 >> 8) + (char)((ulong)uVar27 >> 8),
                                                  (char)uVar28 + (char)uVar27)))))));
                  lVar22 = lVar22 + 8;
                  lVar14 = lVar14 + 1;
                } while (lVar14 != 0);
                pcVar19 = pcVar19 + lVar22;
                lVar21 = lVar21 - lVar22;
                pcVar23 = pcVar23 + lVar22;
                param_2 = pcVar19;
              }
              if (0x17 < uVar17) {
                lVar22 = 0;
                do {
                  pcVar4 = pcVar19 + lVar22 + uVar16;
                  pcVar5 = pcVar23 + lVar22;
                  uVar28 = *(undefined8 *)pcVar5;
                  uVar27 = *(undefined8 *)pcVar4;
                  pcVar6 = pcVar19 + lVar22;
                  lVar22 = lVar22 + 0x20;
                  *(ulong *)pcVar6 =
                       CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                                CONCAT16((char)((ulong)uVar28 >> 0x30) +
                                         (char)((ulong)uVar27 >> 0x30),
                                         CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                                  (char)((ulong)uVar27 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                           (char)((ulong)uVar27 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                                    (char)((ulong)uVar27 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar28 >>
                                                                                   0x10) +
                                                                             (char)((ulong)uVar27 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar28 >> 8) + (char)((ulong)uVar27 >> 8),
                                                  (char)uVar28 + (char)uVar27)))))));
                  uVar27 = *(undefined8 *)(pcVar4 + 8);
                  uVar28 = *(undefined8 *)(pcVar5 + 8);
                  *(ulong *)(pcVar6 + 8) =
                       CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                                CONCAT16((char)((ulong)uVar28 >> 0x30) +
                                         (char)((ulong)uVar27 >> 0x30),
                                         CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                                  (char)((ulong)uVar27 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                           (char)((ulong)uVar27 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                                    (char)((ulong)uVar27 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar28 >>
                                                                                   0x10) +
                                                                             (char)((ulong)uVar27 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar28 >> 8) + (char)((ulong)uVar27 >> 8),
                                                  (char)uVar28 + (char)uVar27)))))));
                  uVar27 = *(undefined8 *)(pcVar4 + 0x10);
                  uVar28 = *(undefined8 *)(pcVar5 + 0x10);
                  *(ulong *)(pcVar6 + 0x10) =
                       CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                                CONCAT16((char)((ulong)uVar28 >> 0x30) +
                                         (char)((ulong)uVar27 >> 0x30),
                                         CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                                  (char)((ulong)uVar27 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                           (char)((ulong)uVar27 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                                    (char)((ulong)uVar27 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar28 >>
                                                                                   0x10) +
                                                                             (char)((ulong)uVar27 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar28 >> 8) + (char)((ulong)uVar27 >> 8),
                                                  (char)uVar28 + (char)uVar27)))))));
                  uVar27 = *(undefined8 *)(pcVar4 + 0x18);
                  uVar28 = *(undefined8 *)(pcVar5 + 0x18);
                  lVar21 = lVar21 + -0x20;
                  *(ulong *)(pcVar6 + 0x18) =
                       CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                                CONCAT16((char)((ulong)uVar28 >> 0x30) +
                                         (char)((ulong)uVar27 >> 0x30),
                                         CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                                  (char)((ulong)uVar27 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                           (char)((ulong)uVar27 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                                    (char)((ulong)uVar27 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar28 >>
                                                                                   0x10) +
                                                                             (char)((ulong)uVar27 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar28 >> 8) + (char)((ulong)uVar27 >> 8),
                                                  (char)uVar28 + (char)uVar27)))))));
                } while (0 < lVar21);
                pcVar23 = pcVar23 + lVar22;
                param_2 = pcVar19 + lVar22;
              }
              uVar20 = (uVar20 - 0x20) - (uVar17 & 0xfffffffffffffff8);
            }
          }
        }
        pcVar19 = param_2 + uVar20;
        pcVar23 = pcVar23 + uVar20;
        uVar20 = (ulong)(bVar11 >> 6);
        uVar27 = *(undefined8 *)((long)&uStack_84 + uVar20 * 4);
        iVar12 = aiStack_7c[uVar20 + 1];
        uVar16 = (ulong)iVar12;
        aiStack_7c[uVar20 + 1] = aiStack_7c[uVar20];
        *(undefined8 *)(aiStack_7c + (uVar20 - 1)) = uVar27;
        aiStack_7c[1] = iVar12;
        if (uVar16 < (ulong)(param_5 - (long)pcVar19)) {
          return false;
        }
        uVar20 = (ulong)(bVar11 >> 2) & 0xf;
        pcVar4 = pcVar19 + uVar16;
        if (uVar20 == 0xf) {
          puVar24 = puVar13 + 1;
          if ((long)(param_4 + (-8 - (long)pcVar19)) < (long)(ulong)(*puVar13 + 0xe)) {
            return false;
          }
          param_2 = pcVar19 + (*puVar13 + 0xe);
          *(undefined8 *)pcVar19 = *(undefined8 *)pcVar4;
          *(undefined8 *)(pcVar19 + 8) = *(undefined8 *)(pcVar4 + 8);
          *(undefined8 *)(pcVar19 + 0x10) = *(undefined8 *)(pcVar4 + 0x10);
          for (pcVar19 = pcVar19 + 0x18; pcVar19 < param_2; pcVar19 = pcVar19 + 8) {
            *(undefined8 *)pcVar19 = *(undefined8 *)(pcVar19 + uVar16);
          }
        }
        else {
          *(undefined8 *)pcVar19 = *(undefined8 *)pcVar4;
          param_2 = pcVar19 + uVar20 + 2;
          *(undefined8 *)(pcVar19 + 8) = *(undefined8 *)(pcVar4 + 8);
          puVar24 = puVar13;
        }
        puVar15 = (uint *)((long)puVar15 + ((ulong)((bVar11 >> 6) + 1) & 4));
        if (puVar2 < puVar15) {
          return false;
        }
        pbVar25 = pbVar25 + 1;
        if (puVar2 < puVar24) {
          return false;
        }
      }
      return false;
    }
    if (__src <= pcVar23) {
      if (local_220 <= pcVar23 && (long)pcVar23 - (long)local_220 != 0) {
        return false;
      }
      pcVar23 = local_150 + ((long)pcVar23 - (long)local_220);
      __src = local_150;
      local_220 = local_150;
    }
    pbVar18 = pbVar3;
    if (7 < (long)pbVar3 - (long)pbVar25) {
      pbVar18 = pbVar25 + 8;
    }
    pbVar26 = pbVar25;
    if (pbVar25 < pbVar18) {
      do {
        pbVar25 = pbVar26 + 1;
        bVar11 = *pbVar26;
        aiStack_7c[4] = *puVar15;
        uVar27 = *(undefined8 *)(param_2 + uVar16);
        uVar28 = *(undefined8 *)pcVar23;
        uVar20 = (ulong)*puVar24;
        puVar13 = puVar24 + 1;
        if (((ulong)bVar11 & 3) != 3) {
          uVar20 = (ulong)bVar11 & 3;
          puVar13 = puVar24;
        }
        *(ulong *)param_2 =
             CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                      CONCAT16((char)((ulong)uVar28 >> 0x30) + (char)((ulong)uVar27 >> 0x30),
                               CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                        (char)((ulong)uVar27 >> 0x28),
                                        CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                 (char)((ulong)uVar27 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                          (char)((ulong)uVar27 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar28 >> 0x10) +
                                                                   (char)((ulong)uVar27 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar28 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar27 >>
                                                                                  8),(char)uVar28 +
                                                                                     (char)uVar27)))
                                                ))));
        if (8 < uVar20) {
          uVar27 = *(undefined8 *)(param_2 + uVar16 + 8);
          uVar28 = *(undefined8 *)(pcVar23 + 8);
          *(ulong *)(param_2 + 8) =
               CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                        CONCAT16((char)((ulong)uVar28 >> 0x30) + (char)((ulong)uVar27 >> 0x30),
                                 CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                          (char)((ulong)uVar27 >> 0x28),
                                          CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                   (char)((ulong)uVar27 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                            (char)((ulong)uVar27 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar28 >> 0x10) +
                                                                     (char)((ulong)uVar27 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar28
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar27
                                                                                    >> 8),
                                                                              (char)uVar28 +
                                                                              (char)uVar27)))))));
          if (0x10 < uVar20) {
            uVar27 = *(undefined8 *)(param_2 + uVar16 + 0x10);
            uVar28 = *(undefined8 *)(pcVar23 + 0x10);
            *(ulong *)(param_2 + 0x10) =
                 CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                          CONCAT16((char)((ulong)uVar28 >> 0x30) + (char)((ulong)uVar27 >> 0x30),
                                   CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                            (char)((ulong)uVar27 >> 0x28),
                                            CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                     (char)((ulong)uVar27 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                              (char)((ulong)uVar27 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar28 >> 0x10)
                                                                       + (char)((ulong)uVar27 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar28
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar27
                                                                                      >> 8),
                                                                                (char)uVar28 +
                                                                                (char)uVar27)))))));
            if (0x18 < uVar20) {
              if (((long)__src - (long)pcVar23 <= (long)uVar20) &&
                 (pbVar18 = pbVar25, (long)local_220 - (long)pcVar23 < (long)uVar20)) {
                return false;
              }
              if (((long)param_3 - (long)param_2 < (long)uVar20) &&
                 (pbVar18 = pbVar25, (long)(param_4 + (-0x10 - (long)param_2)) < (long)uVar20)) {
                return false;
              }
              lVar22 = 0x1f - uVar20;
              lVar21 = uVar20 - 0x18;
              if (lVar22 < 0) {
                lVar22 = -1;
              }
              uVar17 = lVar21 + lVar22;
              uVar1 = ((uint)(uVar17 >> 3) & 0x1fffffff) + 1;
              pcVar19 = param_2 + 0x18;
              pcVar23 = pcVar23 + 0x18;
              if ((uVar1 & 3) != 0) {
                lVar22 = 0;
                lVar14 = -((ulong)uVar1 & 3);
                do {
                  uVar27 = *(undefined8 *)(param_2 + lVar22 + uVar16 + 0x18);
                  uVar28 = *(undefined8 *)(pcVar23 + lVar22);
                  *(ulong *)(pcVar19 + lVar22) =
                       CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                                CONCAT16((char)((ulong)uVar28 >> 0x30) +
                                         (char)((ulong)uVar27 >> 0x30),
                                         CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                                  (char)((ulong)uVar27 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                           (char)((ulong)uVar27 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                                    (char)((ulong)uVar27 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar28 >>
                                                                                   0x10) +
                                                                             (char)((ulong)uVar27 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar28 >> 8) + (char)((ulong)uVar27 >> 8),
                                                  (char)uVar28 + (char)uVar27)))))));
                  lVar22 = lVar22 + 8;
                  lVar14 = lVar14 + 1;
                } while (lVar14 != 0);
                pcVar19 = pcVar19 + lVar22;
                lVar21 = lVar21 - lVar22;
                pcVar23 = pcVar23 + lVar22;
                param_2 = pcVar19;
              }
              if (0x17 < uVar17) {
                lVar22 = 0;
                do {
                  pcVar4 = pcVar19 + lVar22 + uVar16;
                  pcVar5 = pcVar23 + lVar22;
                  uVar28 = *(undefined8 *)pcVar5;
                  uVar27 = *(undefined8 *)pcVar4;
                  pcVar6 = pcVar19 + lVar22;
                  lVar22 = lVar22 + 0x20;
                  *(ulong *)pcVar6 =
                       CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                                CONCAT16((char)((ulong)uVar28 >> 0x30) +
                                         (char)((ulong)uVar27 >> 0x30),
                                         CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                                  (char)((ulong)uVar27 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                           (char)((ulong)uVar27 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                                    (char)((ulong)uVar27 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar28 >>
                                                                                   0x10) +
                                                                             (char)((ulong)uVar27 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar28 >> 8) + (char)((ulong)uVar27 >> 8),
                                                  (char)uVar28 + (char)uVar27)))))));
                  uVar27 = *(undefined8 *)(pcVar4 + 8);
                  uVar28 = *(undefined8 *)(pcVar5 + 8);
                  *(ulong *)(pcVar6 + 8) =
                       CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                                CONCAT16((char)((ulong)uVar28 >> 0x30) +
                                         (char)((ulong)uVar27 >> 0x30),
                                         CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                                  (char)((ulong)uVar27 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                           (char)((ulong)uVar27 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                                    (char)((ulong)uVar27 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar28 >>
                                                                                   0x10) +
                                                                             (char)((ulong)uVar27 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar28 >> 8) + (char)((ulong)uVar27 >> 8),
                                                  (char)uVar28 + (char)uVar27)))))));
                  uVar27 = *(undefined8 *)(pcVar4 + 0x10);
                  uVar28 = *(undefined8 *)(pcVar5 + 0x10);
                  *(ulong *)(pcVar6 + 0x10) =
                       CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                                CONCAT16((char)((ulong)uVar28 >> 0x30) +
                                         (char)((ulong)uVar27 >> 0x30),
                                         CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                                  (char)((ulong)uVar27 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                           (char)((ulong)uVar27 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                                    (char)((ulong)uVar27 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar28 >>
                                                                                   0x10) +
                                                                             (char)((ulong)uVar27 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar28 >> 8) + (char)((ulong)uVar27 >> 8),
                                                  (char)uVar28 + (char)uVar27)))))));
                  uVar27 = *(undefined8 *)(pcVar4 + 0x18);
                  uVar28 = *(undefined8 *)(pcVar5 + 0x18);
                  lVar21 = lVar21 + -0x20;
                  *(ulong *)(pcVar6 + 0x18) =
                       CONCAT17((char)((ulong)uVar28 >> 0x38) + (char)((ulong)uVar27 >> 0x38),
                                CONCAT16((char)((ulong)uVar28 >> 0x30) +
                                         (char)((ulong)uVar27 >> 0x30),
                                         CONCAT15((char)((ulong)uVar28 >> 0x28) +
                                                  (char)((ulong)uVar27 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar28 >> 0x20) +
                                                           (char)((ulong)uVar27 >> 0x20),
                                                           CONCAT13((char)((ulong)uVar28 >> 0x18) +
                                                                    (char)((ulong)uVar27 >> 0x18),
                                                                    CONCAT12((char)((ulong)uVar28 >>
                                                                                   0x10) +
                                                                             (char)((ulong)uVar27 >>
                                                                                   0x10),
                                                                             CONCAT11((char)((ulong)
                                                  uVar28 >> 8) + (char)((ulong)uVar27 >> 8),
                                                  (char)uVar28 + (char)uVar27)))))));
                } while (0 < lVar21);
                pcVar23 = pcVar23 + lVar22;
                param_2 = pcVar19 + lVar22;
              }
              uVar20 = (uVar20 - 0x20) - (uVar17 & 0xfffffffffffffff8);
            }
          }
        }
        pcVar19 = param_2 + uVar20;
        pcVar23 = pcVar23 + uVar20;
        uVar20 = (ulong)(bVar11 >> 6);
        uVar27 = *(undefined8 *)((long)&uStack_84 + uVar20 * 4);
        iVar12 = aiStack_7c[uVar20 + 1];
        uVar16 = (ulong)iVar12;
        aiStack_7c[uVar20 + 1] = aiStack_7c[uVar20];
        *(undefined8 *)(aiStack_7c + (uVar20 - 1)) = uVar27;
        aiStack_7c[1] = iVar12;
        if (uVar16 < (ulong)(param_5 - (long)pcVar19)) {
          return false;
        }
        uVar20 = (ulong)(bVar11 >> 2) & 0xf;
        puVar15 = (uint *)((long)puVar15 + ((ulong)((bVar11 >> 6) + 1) & 4));
        pcVar4 = pcVar19 + uVar16;
        if (uVar20 == 0xf) {
          puVar24 = puVar13 + 1;
          if ((long)(param_4 + (-8 - (long)pcVar19)) < (long)(ulong)(*puVar13 + 0xe)) {
            return false;
          }
          param_2 = pcVar19 + (*puVar13 + 0xe);
          *(undefined8 *)pcVar19 = *(undefined8 *)pcVar4;
          *(undefined8 *)(pcVar19 + 8) = *(undefined8 *)(pcVar4 + 8);
          *(undefined8 *)(pcVar19 + 0x10) = *(undefined8 *)(pcVar4 + 0x10);
          for (pcVar19 = pcVar19 + 0x18; pcVar19 < param_2; pcVar19 = pcVar19 + 8) {
            *(undefined8 *)pcVar19 = *(undefined8 *)(pcVar19 + uVar16);
          }
          if (param_3 <= param_2) break;
        }
        else {
          param_2 = pcVar19 + uVar20 + 2;
          *(undefined8 *)pcVar19 = *(undefined8 *)pcVar4;
          *(undefined8 *)(pcVar19 + 8) = *(undefined8 *)(pcVar4 + 8);
          puVar24 = puVar13;
        }
        pbVar26 = pbVar25;
      } while (pbVar25 < pbVar18);
    }
    if (puVar2 < puVar24) {
      return false;
    }
    if (puVar2 < puVar15) {
      return false;
    }
  } while( true );
}


