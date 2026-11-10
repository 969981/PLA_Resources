/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00120980; name: FUN_00120980
 */


undefined8
FUN_00120980(char *param_1,long param_2,char *param_3,undefined8 param_4,undefined8 param_5,
            long param_6,uint *param_7)

{
  char *pcVar1;
  ushort *puVar2;
  uint *puVar3;
  byte bVar4;
  ushort uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  code *pcVar10;
  size_t sVar11;
  ushort *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  char *pcVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  char *pcVar21;
  uint *puVar22;
  char *pcVar23;
  char *pcVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  char *extraout_x18;
  long lVar30;
  char *pcVar31;
  ushort *puVar32;
  uint uVar33;
  ulong uVar34;
  char *pcVar35;
  ushort *__src;
  uint *puVar36;
  ulong *puVar37;
  ulong *puVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  ushort *local_1d0;
  ushort local_16c [72];
  char local_db [123];
  
  puVar14 = *(ulong **)(param_6 + 0x88);
  pcVar7 = *(char **)(param_6 + 0x38);
  pcVar1 = *(char **)(param_6 + 0x40);
  pcVar8 = param_1 + param_2;
  uVar34 = (ulong)*param_7;
  puVar37 = *(ulong **)(param_6 + 0x20);
  puVar32 = *(ushort **)(param_6 + 0x48);
  puVar2 = *(ushort **)(param_6 + 0x50);
  local_1d0 = *(ushort **)(param_6 + 0x10);
  puVar15 = *(ushort **)(param_6 + 0x18);
  sVar11 = (long)pcVar1 - (long)pcVar7;
  if (0x70 < (long)sVar11) {
    sVar11 = 0x71;
  }
  pcVar35 = pcVar1 + -sVar11;
  puVar36 = *(uint **)(param_6 + 0x78);
  puVar3 = *(uint **)(param_6 + 0x80);
  memcpy(local_db + -sVar11,pcVar35,sVar11);
  sVar11 = (long)puVar2 - (long)puVar32;
  if (0x1f < (long)sVar11) {
    sVar11 = 0x20;
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
  __src = (ushort *)((long)puVar2 - sVar11);
  local_db[0] = '\0';
  local_db[1] = '\0';
  local_db[2] = '\0';
  local_db[3] = '\0';
  local_db[4] = '\0';
  local_db[5] = '\0';
  local_db[6] = '\0';
  local_db[7] = '\0';
  local_db[0x70] = 0;
  pcVar6 = memcpy((void *)((long)local_16c - sVar11),__src,sVar11);
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
  pcVar9 = pcVar1;
  puVar12 = puVar2;
  pcVar17 = param_1;
  pcVar31 = extraout_x18;
  if ((puVar37 < (ulong *)((long)puVar14 + -0xf)) && (param_1 + 0x168 <= param_3)) {
    do {
      if (pcVar35 <= pcVar7) {
        if (pcVar9 <= pcVar7 && (long)pcVar7 - (long)pcVar9 != 0) {
          FUN_0010a430();
          pcVar10 = *(code **)PTR_PTR_043722f8;
          if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
          pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          pcVar8 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
          uVar39 = 0xd5;
          goto LAB_00121e38;
        }
        pcVar7 = local_db + ((long)pcVar7 - (long)pcVar9);
        pcVar9 = local_db;
        pcVar35 = local_db;
      }
      if (__src <= puVar32) {
        if (puVar12 <= puVar32 && (long)puVar32 - (long)puVar12 != 0) {
          FUN_0010a430();
          pcVar10 = *(code **)PTR_PTR_043722f8;
          if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
          pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          pcVar8 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
          uVar39 = 0xd6;
          goto LAB_00121e38;
        }
        puVar32 = (ushort *)((long)local_16c + ((long)puVar32 - (long)puVar12));
        puVar12 = local_16c;
        __src = local_16c;
      }
      uVar26 = *puVar37;
      uVar25 = (uint)uVar26;
      if ((uVar26 + 0xe7e7e7e7e7e7e7e8 & (uVar26 ^ 0xffffffffffffffff) & 0x8080808080808080) == 0) {
        uVar19 = puVar37[1];
        uVar33 = (uint)uVar34;
        uVar39 = *(undefined8 *)(pcVar17 + (int)uVar33);
        uVar40 = *(undefined8 *)pcVar7;
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                      CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                               CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                        (char)((ulong)uVar39 >> 0x28),
                                        CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                 (char)((ulong)uVar39 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                          (char)((ulong)uVar39 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                   (char)((ulong)uVar39 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar40 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  8),(char)uVar40 +
                                                                                     (char)uVar39)))
                                                ))));
        if ((uVar26 & 0x80) == 0) {
          uVar33 = -(uint)*puVar32;
        }
        pcVar17 = pcVar17 + (uVar26 & 7);
        pcVar7 = pcVar7 + (uVar26 & 7);
        *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar33);
        *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar33 + 8);
        pcVar17 = pcVar17 + (uVar26 >> 3 & 0xf);
        uVar34 = uVar26 >> 8 & 7;
        uVar39 = *(undefined8 *)(pcVar17 + (int)uVar33);
        uVar40 = *(undefined8 *)pcVar7;
        puVar32 = (ushort *)((long)puVar32 + ((ulong)((uVar25 & 0x80) >> 6) ^ 2));
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                      CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                               CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                        (char)((ulong)uVar39 >> 0x28),
                                        CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                 (char)((ulong)uVar39 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                          (char)((ulong)uVar39 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                   (char)((ulong)uVar39 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar40 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  8),(char)uVar40 +
                                                                                     (char)uVar39)))
                                                ))));
        pcVar17 = pcVar17 + uVar34;
        pcVar7 = pcVar7 + uVar34;
        if ((uVar26 & 0x8000) == 0) {
          uVar33 = -(uint)*puVar32;
        }
        puVar32 = (ushort *)((long)puVar32 + ((ulong)((uVar25 & 0x8000) >> 0xe) ^ 2));
        *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar33);
        *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar33 + 8);
        pcVar17 = pcVar17 + (uVar26 >> 0xb & 0xf);
        uVar39 = *(undefined8 *)(pcVar17 + (int)uVar33);
        uVar40 = *(undefined8 *)pcVar7;
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                      CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                               CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                        (char)((ulong)uVar39 >> 0x28),
                                        CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                 (char)((ulong)uVar39 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                          (char)((ulong)uVar39 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                   (char)((ulong)uVar39 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar40 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  8),(char)uVar40 +
                                                                                     (char)uVar39)))
                                                ))));
        uVar34 = uVar26 >> 0x10 & 7;
        pcVar17 = pcVar17 + uVar34;
        pcVar7 = pcVar7 + uVar34;
        if ((uVar26 & 0x800000) == 0) {
          uVar33 = -(uint)*puVar32;
        }
        puVar32 = (ushort *)((long)puVar32 + ((ulong)((uVar25 & 0x800000) >> 0x16) ^ 2));
        *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar33);
        *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar33 + 8);
        pcVar17 = pcVar17 + (uVar26 >> 0x13 & 0xf);
        uVar39 = *(undefined8 *)(pcVar17 + (int)uVar33);
        uVar40 = *(undefined8 *)pcVar7;
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                      CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                               CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                        (char)((ulong)uVar39 >> 0x28),
                                        CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                 (char)((ulong)uVar39 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                          (char)((ulong)uVar39 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                   (char)((ulong)uVar39 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar40 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  8),(char)uVar40 +
                                                                                     (char)uVar39)))
                                                ))));
        uVar34 = uVar26 >> 0x18 & 7;
        pcVar17 = pcVar17 + uVar34;
        pcVar7 = pcVar7 + uVar34;
        puVar16 = (ushort *)((long)puVar32 + ((ulong)(uVar25 >> 0x1e ^ 0xffffffff) & 2));
        if (-1 < (int)uVar25) {
          uVar33 = -(uint)*puVar32;
        }
        *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar33);
        *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar33 + 8);
        pcVar17 = pcVar17 + (uVar26 >> 0x1b & 0xf);
        uVar39 = *(undefined8 *)(pcVar17 + (int)uVar33);
        uVar40 = *(undefined8 *)pcVar7;
        uVar25 = *(uint *)((long)puVar37 + 4);
        uVar34 = (ulong)uVar25;
        pcVar7 = pcVar7 + (uVar34 & 7);
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                      CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                               CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                        (char)((ulong)uVar39 >> 0x28),
                                        CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                 (char)((ulong)uVar39 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                          (char)((ulong)uVar39 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                   (char)((ulong)uVar39 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar40 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  8),(char)uVar40 +
                                                                                     (char)uVar39)))
                                                ))));
        pcVar17 = pcVar17 + (uVar34 & 7);
        if ((int)(uVar34 & 0x80) == 0) {
          uVar33 = -(uint)*puVar16;
        }
        puVar16 = (ushort *)((long)puVar16 + ((uVar34 & 0x80) >> 6 ^ 2));
        *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar33);
        *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar33 + 8);
        pcVar17 = pcVar17 + ((ulong)(uVar25 >> 3) & 0xf);
        uVar39 = *(undefined8 *)(pcVar17 + (int)uVar33);
        uVar40 = *(undefined8 *)pcVar7;
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                      CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                               CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                        (char)((ulong)uVar39 >> 0x28),
                                        CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                 (char)((ulong)uVar39 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                          (char)((ulong)uVar39 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                   (char)((ulong)uVar39 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar40 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  8),(char)uVar40 +
                                                                                     (char)uVar39)))
                                                ))));
        uVar26 = (ulong)(uVar25 >> 8) & 7;
        pcVar17 = pcVar17 + uVar26;
        pcVar7 = pcVar7 + uVar26;
        if ((int)(uVar34 & 0x8000) == 0) {
          uVar33 = -(uint)*puVar16;
        }
        puVar16 = (ushort *)((long)puVar16 + ((uVar34 & 0x8000) >> 0xe ^ 2));
        *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar33);
        *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar33 + 8);
        pcVar17 = pcVar17 + ((ulong)(uVar25 >> 0xb) & 0xf);
        uVar39 = *(undefined8 *)(pcVar17 + (int)uVar33);
        uVar40 = *(undefined8 *)pcVar7;
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                      CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                               CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                        (char)((ulong)uVar39 >> 0x28),
                                        CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                 (char)((ulong)uVar39 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                          (char)((ulong)uVar39 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                   (char)((ulong)uVar39 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar40 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  8),(char)uVar40 +
                                                                                     (char)uVar39)))
                                                ))));
        uVar26 = (ulong)(uVar25 >> 0x10) & 7;
        pcVar17 = pcVar17 + uVar26;
        if ((int)(uVar34 & 0x800000) == 0) {
          uVar33 = -(uint)*puVar16;
        }
        puVar16 = (ushort *)((long)puVar16 + ((uVar34 & 0x800000) >> 0x16 ^ 2));
        *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar33);
        *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar33 + 8);
        pcVar17 = pcVar17 + ((ulong)(uVar25 >> 0x13) & 0xf);
        uVar39 = *(undefined8 *)(pcVar17 + (int)uVar33);
        uVar40 = *(undefined8 *)(pcVar7 + uVar26);
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                      CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                               CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                        (char)((ulong)uVar39 >> 0x28),
                                        CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                 (char)((ulong)uVar39 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                          (char)((ulong)uVar39 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                   (char)((ulong)uVar39 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar40 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  8),(char)uVar40 +
                                                                                     (char)uVar39)))
                                                ))));
        pcVar31 = (char *)((ulong)(uVar25 >> 0x18) & 7);
        pcVar7 = pcVar7 + uVar26 + (long)pcVar31;
        puVar32 = (ushort *)((long)puVar16 + ((ulong)(uVar25 >> 0x1e ^ 0xffffffff) & 2));
        if (-1 < (int)uVar25) {
          uVar33 = -(uint)*puVar16;
        }
        uVar34 = (ulong)uVar33;
        pcVar6 = pcVar17 + (long)pcVar31;
        *(undefined8 *)pcVar6 = *(undefined8 *)(pcVar6 + (int)uVar33);
        pcVar17 = pcVar6 + ((ulong)(uVar25 >> 0x1b) & 0xf);
        *(undefined8 *)(pcVar6 + 8) = *(undefined8 *)(pcVar6 + (int)uVar33 + 8);
        if ((uVar19 + 0xe7e7e7e7e7e7e7e8 & (uVar19 ^ 0xffffffffffffffff) & 0x8080808080808080) != 0)
        {
          bVar4 = (byte)puVar37[1];
          uVar19 = (ulong)bVar4;
          uVar25 = (uint)bVar4;
          puVar37 = (ulong *)((long)puVar37 + 9);
          uVar26 = uVar19;
          if (0x17 < bVar4) goto LAB_00120e20;
          goto LAB_00120e8c;
        }
        uVar39 = *(undefined8 *)(pcVar17 + (int)uVar33);
        uVar40 = *(undefined8 *)pcVar7;
        uVar25 = (uint)puVar37[1];
        uVar34 = (ulong)uVar25;
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                      CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                               CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                        (char)((ulong)uVar39 >> 0x28),
                                        CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                 (char)((ulong)uVar39 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                          (char)((ulong)uVar39 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                   (char)((ulong)uVar39 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar40 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  8),(char)uVar40 +
                                                                                     (char)uVar39)))
                                                ))));
        pcVar17 = pcVar17 + (uVar34 & 7);
        pcVar7 = pcVar7 + (uVar34 & 7);
        if ((int)(uVar34 & 0x80) == 0) {
          uVar33 = -(uint)*puVar32;
        }
        *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar33);
        puVar32 = (ushort *)((long)puVar32 + ((uVar34 & 0x80) >> 6 ^ 2));
        *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar33 + 8);
        pcVar17 = pcVar17 + ((ulong)(uVar25 >> 3) & 0xf);
        uVar26 = (ulong)(uVar25 >> 8) & 7;
        uVar39 = *(undefined8 *)(pcVar17 + (int)uVar33);
        uVar40 = *(undefined8 *)pcVar7;
        pcVar7 = pcVar7 + uVar26;
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                      CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                               CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                        (char)((ulong)uVar39 >> 0x28),
                                        CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                 (char)((ulong)uVar39 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                          (char)((ulong)uVar39 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                   (char)((ulong)uVar39 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar40 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  8),(char)uVar40 +
                                                                                     (char)uVar39)))
                                                ))));
        pcVar17 = pcVar17 + uVar26;
        if ((int)(uVar34 & 0x8000) == 0) {
          uVar33 = -(uint)*puVar32;
        }
        puVar32 = (ushort *)((long)puVar32 + ((uVar34 & 0x8000) >> 0xe ^ 2));
        *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar33);
        *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar33 + 8);
        pcVar17 = pcVar17 + ((ulong)(uVar25 >> 0xb) & 0xf);
        uVar39 = *(undefined8 *)(pcVar17 + (int)uVar33);
        uVar40 = *(undefined8 *)pcVar7;
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                      CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                               CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                        (char)((ulong)uVar39 >> 0x28),
                                        CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                 (char)((ulong)uVar39 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                          (char)((ulong)uVar39 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                   (char)((ulong)uVar39 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar40 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  8),(char)uVar40 +
                                                                                     (char)uVar39)))
                                                ))));
        uVar26 = (ulong)(uVar25 >> 0x10) & 7;
        pcVar17 = pcVar17 + uVar26;
        pcVar7 = pcVar7 + uVar26;
        if ((int)(uVar34 & 0x800000) == 0) {
          uVar33 = -(uint)*puVar32;
        }
        puVar32 = (ushort *)((long)puVar32 + ((uVar34 & 0x800000) >> 0x16 ^ 2));
        *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar33);
        *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar33 + 8);
        pcVar17 = pcVar17 + ((ulong)(uVar25 >> 0x13) & 0xf);
        uVar39 = *(undefined8 *)(pcVar17 + (int)uVar33);
        uVar40 = *(undefined8 *)pcVar7;
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                      CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                               CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                        (char)((ulong)uVar39 >> 0x28),
                                        CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                 (char)((ulong)uVar39 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                          (char)((ulong)uVar39 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                   (char)((ulong)uVar39 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar40 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  8),(char)uVar40 +
                                                                                     (char)uVar39)))
                                                ))));
        uVar34 = (ulong)(uVar25 >> 0x18) & 7;
        pcVar17 = pcVar17 + uVar34;
        pcVar7 = pcVar7 + uVar34;
        puVar16 = (ushort *)((long)puVar32 + ((ulong)(uVar25 >> 0x1e ^ 0xffffffff) & 2));
        if (-1 < (int)uVar25) {
          uVar33 = -(uint)*puVar32;
        }
        *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar33);
        *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar33 + 8);
        pcVar17 = pcVar17 + ((ulong)(uVar25 >> 0x1b) & 0xf);
        uVar39 = *(undefined8 *)(pcVar17 + (int)uVar33);
        uVar40 = *(undefined8 *)pcVar7;
        uVar25 = *(uint *)((long)puVar37 + 0xc);
        uVar34 = (ulong)uVar25;
        puVar37 = puVar37 + 2;
        pcVar7 = pcVar7 + (uVar34 & 7);
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                      CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                               CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                        (char)((ulong)uVar39 >> 0x28),
                                        CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                 (char)((ulong)uVar39 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                          (char)((ulong)uVar39 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                   (char)((ulong)uVar39 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar40 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  8),(char)uVar40 +
                                                                                     (char)uVar39)))
                                                ))));
        pcVar17 = pcVar17 + (uVar34 & 7);
        if ((int)(uVar34 & 0x80) == 0) {
          uVar33 = -(uint)*puVar16;
        }
        puVar16 = (ushort *)((long)puVar16 + ((uVar34 & 0x80) >> 6 ^ 2));
        *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar33);
        *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar33 + 8);
        pcVar17 = pcVar17 + ((ulong)(uVar25 >> 3) & 0xf);
        uVar39 = *(undefined8 *)(pcVar17 + (int)uVar33);
        uVar40 = *(undefined8 *)pcVar7;
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                      CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                               CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                        (char)((ulong)uVar39 >> 0x28),
                                        CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                 (char)((ulong)uVar39 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                          (char)((ulong)uVar39 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                   (char)((ulong)uVar39 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar40 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  8),(char)uVar40 +
                                                                                     (char)uVar39)))
                                                ))));
        uVar26 = (ulong)(uVar25 >> 8) & 7;
        pcVar17 = pcVar17 + uVar26;
        pcVar7 = pcVar7 + uVar26;
        if ((int)(uVar34 & 0x8000) == 0) {
          uVar33 = -(uint)*puVar16;
        }
        puVar16 = (ushort *)((long)puVar16 + ((uVar34 & 0x8000) >> 0xe ^ 2));
        *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar33);
        *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar33 + 8);
        pcVar17 = pcVar17 + ((ulong)(uVar25 >> 0xb) & 0xf);
        pcVar6 = (char *)((ulong)(uVar25 >> 0x13) & 0xf);
        uVar39 = *(undefined8 *)(pcVar17 + (int)uVar33);
        uVar40 = *(undefined8 *)pcVar7;
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                      CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                               CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                        (char)((ulong)uVar39 >> 0x28),
                                        CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                 (char)((ulong)uVar39 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                          (char)((ulong)uVar39 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                   (char)((ulong)uVar39 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar40 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  8),(char)uVar40 +
                                                                                     (char)uVar39)))
                                                ))));
        uVar26 = (ulong)(uVar25 >> 0x10) & 7;
        pcVar17 = pcVar17 + uVar26;
        if ((int)(uVar34 & 0x800000) == 0) {
          uVar33 = -(uint)*puVar16;
        }
        puVar16 = (ushort *)((long)puVar16 + ((uVar34 & 0x800000) >> 0x16 ^ 2));
        *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar33);
        *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar33 + 8);
        pcVar17 = pcVar17 + (long)pcVar6;
        uVar39 = *(undefined8 *)(pcVar17 + (int)uVar33);
        uVar40 = *(undefined8 *)(pcVar7 + uVar26);
        *(ulong *)pcVar17 =
             CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                      CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                               CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                        (char)((ulong)uVar39 >> 0x28),
                                        CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                 (char)((ulong)uVar39 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                          (char)((ulong)uVar39 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                   (char)((ulong)uVar39 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar40 >>
                                                                                  8) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  8),(char)uVar40 +
                                                                                     (char)uVar39)))
                                                ))));
        uVar34 = (ulong)(uVar25 >> 0x18) & 7;
        pcVar7 = pcVar7 + uVar26 + uVar34;
        pcVar31 = (char *)((ulong)(uVar25 >> 0x1b) & 0xf);
        pcVar17 = pcVar17 + uVar34;
        if (-1 < (int)uVar25) {
          uVar33 = -(uint)*puVar16;
        }
        puVar32 = (ushort *)((long)puVar16 + ((ulong)(uVar25 >> 0x1e ^ 0xffffffff) & 2));
        *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar33);
        *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar33 + 8);
        pcVar24 = pcVar17 + (long)pcVar31;
        puVar22 = puVar36;
joined_r0x001211d4:
        uVar34 = (ulong)uVar33;
        pcVar17 = pcVar24;
        puVar36 = puVar22;
      }
      else {
        uVar25 = uVar25 & 0xff;
        uVar19 = (ulong)uVar25;
        puVar37 = (ulong *)((long)puVar37 + 1);
        if (0x17 < uVar25) {
LAB_00120e20:
          do {
            uVar39 = *(undefined8 *)(pcVar17 + (int)(uint)uVar34);
            uVar40 = *(undefined8 *)pcVar7;
            uVar5 = *puVar32;
            uVar18 = (uint)uVar19;
            uVar33 = (uVar18 >> 7) - 1;
            pcVar7 = pcVar7 + (uVar19 & 7);
            *(ulong *)pcVar17 =
                 CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                          CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                                   CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                            (char)((ulong)uVar39 >> 0x28),
                                            CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                     (char)((ulong)uVar39 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                              (char)((ulong)uVar39 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar40 >> 0x10)
                                                                       + (char)((ulong)uVar39 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar40
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar39
                                                                                      >> 8),
                                                                                (char)uVar40 +
                                                                                (char)uVar39)))))));
            pcVar17 = pcVar17 + (uVar19 & 7);
            uVar25 = -(uint)uVar5 & uVar33 | (uint)uVar34 & (uVar33 ^ 0xffffffff);
            uVar34 = (ulong)uVar25;
            puVar32 = (ushort *)((long)puVar32 + (ulong)(uVar33 & 2));
            *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar25);
            *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar25 + 8);
            puVar38 = (ulong *)((long)puVar37 + 1);
            bVar4 = (byte)*puVar37;
            uVar19 = (ulong)bVar4;
            uVar25 = (uint)bVar4;
            pcVar17 = pcVar17 + (uVar18 >> 3 & 0xf);
            puVar37 = puVar38;
          } while (0x17 < bVar4);
          uVar26 = uVar19;
        }
LAB_00120e8c:
        if (2 < ((uint)uVar26 & 0xff)) {
          if (puVar36 < puVar3) {
            puVar22 = puVar36 + 1;
            pcVar23 = param_1 + -(ulong)*puVar36;
            pcVar24 = pcVar17 + (uVar25 + 5);
            *(undefined8 *)pcVar17 = *(undefined8 *)pcVar23;
            *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar23 + 8);
            uVar33 = (int)pcVar23 - (int)pcVar17;
            *(undefined8 *)(pcVar17 + 0x10) = *(undefined8 *)(pcVar23 + 0x10);
            if (0x18 < uVar25 + 5) {
              *(undefined8 *)(pcVar17 + 0x18) = *(undefined8 *)(pcVar23 + 0x18);
            }
            Hint_Prefetch((long)param_1 - (ulong)puVar36[4],0,0,0);
            goto joined_r0x001211d4;
          }
          goto LAB_00121d84;
        }
        if ((uVar26 & 0xff) == 0) {
          if (local_1d0 < puVar15) {
            puVar16 = (ushort *)((long)local_1d0 + 1);
            uVar26 = (ulong)(byte)*local_1d0;
            if (0xfb < uVar26) {
              local_1d0 = (ushort *)((long)local_1d0 + 3);
              if (local_1d0 <= puVar15) {
                uVar26 = uVar26 + (ulong)*puVar16 * 4;
                lVar20 = uVar26 + 0x40;
                if (lVar20 <= (long)pcVar8 - (long)pcVar17) goto LAB_00121244;
                goto LAB_00121fd4;
              }
              uVar26 = 0;
            }
            lVar20 = uVar26 + 0x40;
            local_1d0 = puVar16;
            if ((long)pcVar8 - (long)pcVar17 < lVar20) goto LAB_00121fd4;
          }
          else {
            uVar26 = 0;
            lVar20 = 0x40;
            if ((long)pcVar8 - (long)pcVar17 < 0x40) goto LAB_00121fd4;
          }
LAB_00121244:
          if ((long)pcVar9 - (long)pcVar7 < lVar20) goto LAB_00122000;
          uVar26 = uVar26 + 0x37;
          uVar25 = (int)(uVar26 >> 3) + 1;
          lVar29 = (long)(int)uVar34;
          pcVar31 = (char *)((ulong)uVar25 & 3);
          lVar28 = lVar20;
          if ((uVar25 & 3) != 0) {
            lVar28 = 0;
            lVar30 = -(long)pcVar31;
            do {
              uVar39 = *(undefined8 *)(pcVar17 + lVar28 + lVar29);
              uVar40 = *(undefined8 *)(pcVar7 + lVar28);
              *(ulong *)(pcVar17 + lVar28) =
                   CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                            CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                                     CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                              (char)((ulong)uVar39 >> 0x28),
                                              CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                       (char)((ulong)uVar39 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                                (char)((ulong)uVar39 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar40 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar39 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar40 >> 8) + (char)((ulong)uVar39 >> 8),
                                                  (char)uVar40 + (char)uVar39)))))));
              lVar28 = lVar28 + 8;
              lVar30 = lVar30 + 1;
            } while (lVar30 != 0);
            pcVar17 = pcVar17 + lVar28;
            pcVar7 = pcVar7 + lVar28;
            pcVar31 = pcVar17 + -8;
            pcVar6 = pcVar7 + -8;
            lVar28 = lVar20 - lVar28;
          }
          if (0x17 < uVar26) {
            lVar30 = 0;
            do {
              lVar27 = lVar30;
              pcVar6 = pcVar17 + lVar27 + lVar29;
              pcVar31 = pcVar7 + lVar27;
              uVar40 = *(undefined8 *)pcVar31;
              uVar39 = *(undefined8 *)pcVar6;
              pcVar24 = pcVar17 + lVar27;
              *(ulong *)pcVar24 =
                   CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                            CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                                     CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                              (char)((ulong)uVar39 >> 0x28),
                                              CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                       (char)((ulong)uVar39 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                                (char)((ulong)uVar39 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar40 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar39 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar40 >> 8) + (char)((ulong)uVar39 >> 8),
                                                  (char)uVar40 + (char)uVar39)))))));
              uVar39 = *(undefined8 *)(pcVar6 + 8);
              uVar40 = *(undefined8 *)(pcVar31 + 8);
              *(ulong *)(pcVar24 + 8) =
                   CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                            CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                                     CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                              (char)((ulong)uVar39 >> 0x28),
                                              CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                       (char)((ulong)uVar39 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                                (char)((ulong)uVar39 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar40 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar39 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar40 >> 8) + (char)((ulong)uVar39 >> 8),
                                                  (char)uVar40 + (char)uVar39)))))));
              uVar39 = *(undefined8 *)(pcVar6 + 0x10);
              uVar40 = *(undefined8 *)(pcVar31 + 0x10);
              *(ulong *)(pcVar24 + 0x10) =
                   CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                            CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                                     CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                              (char)((ulong)uVar39 >> 0x28),
                                              CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                       (char)((ulong)uVar39 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                                (char)((ulong)uVar39 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar40 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar39 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar40 >> 8) + (char)((ulong)uVar39 >> 8),
                                                  (char)uVar40 + (char)uVar39)))))));
              uVar39 = *(undefined8 *)(pcVar6 + 0x18);
              uVar40 = *(undefined8 *)(pcVar31 + 0x18);
              lVar28 = lVar28 + -0x20;
              *(ulong *)(pcVar24 + 0x18) =
                   CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                            CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                                     CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                              (char)((ulong)uVar39 >> 0x28),
                                              CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                       (char)((ulong)uVar39 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                                (char)((ulong)uVar39 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar40 >>
                                                                               0x10) +
                                                                         (char)((ulong)uVar39 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar40 >> 8) + (char)((ulong)uVar39 >> 8),
                                                  (char)uVar40 + (char)uVar39)))))));
              lVar30 = lVar27 + 0x20;
            } while (8 < lVar28);
            pcVar31 = pcVar17 + lVar27 + 0x18;
            pcVar6 = pcVar7 + lVar27 + 0x18;
          }
          lVar20 = lVar20 - (uVar26 & 0xffff8);
          pcVar17 = pcVar31 + lVar20;
          pcVar7 = pcVar6 + lVar20;
          uVar39 = *(undefined8 *)(pcVar17 + lVar29 + -8);
          uVar40 = *(undefined8 *)(pcVar7 + -8);
          *(ulong *)(pcVar17 + -8) =
               CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                        CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                                 CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                          (char)((ulong)uVar39 >> 0x28),
                                          CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                   (char)((ulong)uVar39 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                            (char)((ulong)uVar39 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                     (char)((ulong)uVar39 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar40
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar39
                                                                                    >> 8),
                                                                              (char)uVar40 +
                                                                              (char)uVar39)))))));
        }
        else if (((uint)uVar26 & 0xff) == 1) {
          if (local_1d0 < puVar15) {
            puVar16 = (ushort *)((long)local_1d0 + 1);
            uVar26 = (ulong)(byte)*local_1d0;
            if (uVar26 < 0xfc) {
              local_1d0 = puVar16;
            }
            else if (puVar15 < (ushort *)((long)local_1d0 + 3U)) {
              uVar26 = 0;
              local_1d0 = puVar16;
            }
            else {
              uVar26 = uVar26 + (ulong)*puVar16 * 4;
              local_1d0 = (ushort *)((long)local_1d0 + 3U);
            }
          }
          else {
            uVar26 = 0;
          }
          if ((long)pcVar8 - (long)pcVar17 < (long)(uVar26 + 99)) {
            if ((long)pcVar8 - (long)pcVar17 < (long)(uVar26 + 0x5b)) goto LAB_00122058;
            if ((long)param_3 - (long)pcVar17 < (long)(uVar26 + 99)) goto LAB_00122088;
          }
          uVar34 = -(ulong)*puVar32;
          pcVar24 = pcVar17 + -(ulong)*puVar32;
          *(undefined8 *)pcVar17 = *(undefined8 *)pcVar24;
          *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar24 + 8);
          *(undefined8 *)(pcVar17 + 0x10) = *(undefined8 *)(pcVar24 + 0x10);
          *(undefined8 *)(pcVar17 + 0x18) = *(undefined8 *)(pcVar24 + 0x18);
          *(undefined8 *)(pcVar17 + 0x20) = *(undefined8 *)(pcVar24 + 0x20);
          *(undefined8 *)(pcVar17 + 0x28) = *(undefined8 *)(pcVar24 + 0x28);
          *(undefined8 *)(pcVar17 + 0x30) = *(undefined8 *)(pcVar24 + 0x30);
          *(undefined8 *)(pcVar17 + 0x38) = *(undefined8 *)(pcVar24 + 0x38);
          pcVar24 = pcVar17 + 0x40;
          do {
            pcVar23 = pcVar24 + 8;
            *(undefined8 *)pcVar24 = *(undefined8 *)(pcVar24 + uVar34);
            pcVar24 = pcVar23;
          } while (pcVar23 < pcVar17 + uVar26 + 0x5b);
          puVar32 = puVar32 + 1;
          pcVar17 = pcVar17 + uVar26 + 0x5b;
        }
        else {
          puVar16 = local_1d0;
          if (local_1d0 < puVar15) {
            puVar16 = (ushort *)((long)local_1d0 + 1);
            uVar34 = (ulong)(byte)*local_1d0;
            if (0xfb < uVar34) {
              if (puVar15 < (ushort *)((long)local_1d0 + 3U)) goto joined_r0x00121424;
              uVar34 = uVar34 + (ulong)*puVar16 * 4;
              puVar16 = (ushort *)((long)local_1d0 + 3U);
            }
          }
          else {
joined_r0x00121424:
            uVar34 = 0;
          }
          if (puVar3 <= puVar36) goto LAB_0012202c;
          uVar26 = uVar34 + 0x1d;
          if ((long)pcVar8 - (long)pcVar17 < (long)(uVar34 + 0x2d)) {
            if ((long)pcVar8 - (long)pcVar17 < (long)uVar26) goto LAB_001220b4;
            if ((long)param_3 - (long)pcVar17 < (long)(uVar34 + 0x2d)) goto LAB_001220e4;
          }
          pcVar24 = param_1 + -(ulong)*puVar36;
          *(undefined8 *)pcVar17 = *(undefined8 *)pcVar24;
          *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar24 + 8);
          *(undefined8 *)(pcVar17 + 0x10) = *(undefined8 *)(pcVar24 + 0x10);
          *(undefined8 *)(pcVar17 + 0x18) = *(undefined8 *)(pcVar24 + 0x18);
          uVar34 = (ulong)(uint)((int)pcVar24 - (int)pcVar17);
          *(undefined8 *)(pcVar17 + 0x20) = *(undefined8 *)(pcVar24 + 0x20);
          if (0x28 < uVar26) {
            pcVar23 = pcVar17 + 0x28;
            pcVar24 = pcVar24 + 0x28;
            do {
              pcVar21 = pcVar23 + 8;
              *(undefined8 *)pcVar23 = *(undefined8 *)pcVar24;
              pcVar23 = pcVar21;
              pcVar24 = pcVar24 + 8;
            } while (pcVar21 < pcVar17 + uVar26);
          }
          Hint_Prefetch((long)param_1 - (ulong)puVar36[4],0,0,0);
          pcVar17 = pcVar17 + uVar26;
          puVar36 = puVar36 + 1;
          local_1d0 = puVar16;
        }
      }
    } while ((puVar37 < (ulong *)((long)puVar14 + -0xf)) && (pcVar17 + 0x168 <= param_3));
  }
  uVar25 = (uint)uVar34;
  if (pcVar8 < pcVar17) {
    FUN_0010a430();
    pcVar10 = *(code **)PTR_PTR_043722f8;
    if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
    pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
    pcVar8 = "OODLE ERROR : corruption : (to_ptr <= parse_chunk_end)\n";
    uVar39 = 0x1c4;
  }
  else {
    if (pcVar35 <= pcVar7) {
      if (pcVar9 <= pcVar7 && (long)pcVar7 - (long)pcVar9 != 0) {
        FUN_0010a430();
        pcVar10 = *(code **)PTR_PTR_043722f8;
        if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
        pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
        pcVar8 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
        uVar39 = 0x1eb;
        goto LAB_00121e38;
      }
      pcVar7 = local_db + ((long)pcVar7 - (long)pcVar9);
      pcVar9 = local_db;
      pcVar35 = local_db;
    }
    if (__src <= puVar32) {
      if (puVar12 <= puVar32 && (long)puVar32 - (long)puVar12 != 0) {
        FUN_0010a430();
        pcVar10 = *(code **)PTR_PTR_043722f8;
        if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
        pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
        pcVar8 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
        uVar39 = 0x1ec;
        goto LAB_00121e38;
      }
      puVar32 = (ushort *)((long)local_16c + ((long)puVar32 - (long)puVar12));
      puVar12 = local_16c;
      __src = local_16c;
    }
    if (puVar37 < puVar14) {
      puVar38 = puVar37 + 2;
      do {
        if (puVar38 <= puVar37) {
          if (pcVar35 <= pcVar7) {
            if (pcVar9 <= pcVar7 && (long)pcVar7 - (long)pcVar9 != 0) {
              FUN_0010a430();
              pcVar10 = *(code **)PTR_PTR_043722f8;
              if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
              pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              pcVar8 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
              uVar39 = 0x1f8;
              goto LAB_00121e38;
            }
            pcVar7 = local_db + ((long)pcVar7 - (long)pcVar9);
            pcVar9 = local_db;
            pcVar35 = local_db;
          }
          puVar38 = puVar37 + 2;
          if (__src <= puVar32) {
            if (puVar12 <= puVar32 && (long)puVar32 - (long)puVar12 != 0) {
              FUN_0010a430();
              pcVar10 = *(code **)PTR_PTR_043722f8;
              if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
              pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              pcVar8 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
              uVar39 = 0x1f9;
              goto LAB_00121e38;
            }
            puVar32 = (ushort *)((long)local_16c + ((long)puVar32 - (long)puVar12));
            puVar12 = local_16c;
            __src = local_16c;
          }
        }
        puVar13 = (ulong *)((long)puVar37 + 1);
        bVar4 = (byte)*puVar37;
        uVar26 = (ulong)bVar4;
        uVar25 = (uint)uVar34;
        if (0x17 < bVar4) {
          if (param_3 < pcVar17 + 8) {
            FUN_0010a430();
            pcVar10 = *(code **)PTR_PTR_043722f8;
            if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
            pcVar8 = "OODLE ERROR : corruption : (to_ptr+8 <= overrun_chunk_end)\n";
          }
          else {
            uVar39 = *(undefined8 *)(pcVar17 + (int)uVar25);
            uVar40 = *(undefined8 *)pcVar7;
            uVar5 = *puVar32;
            *(ulong *)pcVar17 =
                 CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                          CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                                   CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                            (char)((ulong)uVar39 >> 0x28),
                                            CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                     (char)((ulong)uVar39 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                              (char)((ulong)uVar39 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar40 >> 0x10)
                                                                       + (char)((ulong)uVar39 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar40
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar39
                                                                                      >> 8),
                                                                                (char)uVar40 +
                                                                                (char)uVar39)))))));
            pcVar17 = pcVar17 + (uVar26 & 7);
            if (pcVar17 + 0x10 <= param_3) {
              uVar33 = (bVar4 >> 7) - 1;
              uVar25 = -(uint)uVar5 & uVar33 | uVar25 & (uVar33 ^ 0xffffffff);
              uVar34 = (ulong)uVar25;
              puVar32 = (ushort *)((long)puVar32 + (ulong)(uVar33 & 2));
              *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + (int)uVar25);
              pcVar7 = pcVar7 + (uVar26 & 7);
              *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar17 + (int)uVar25 + 8);
              pcVar17 = pcVar17 + ((ulong)(bVar4 >> 3) & 0xf);
              goto joined_r0x00121b30;
            }
            FUN_0010a430();
            pcVar10 = *(code **)PTR_PTR_043722f8;
            if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
            pcVar8 = "OODLE ERROR : corruption : (to_ptr+16 <= overrun_chunk_end)\n";
          }
          pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          uVar39 = 0x200;
          goto LAB_00121e38;
        }
        puVar16 = local_1d0;
        if (bVar4 < 3) {
          puVar22 = puVar36;
          if (bVar4 == 0) {
            if (local_1d0 < puVar15) {
              puVar16 = (ushort *)((long)local_1d0 + 1);
              uVar26 = (ulong)(byte)*local_1d0;
              if (0xfb < uVar26) {
                local_1d0 = (ushort *)((long)local_1d0 + 3);
                if (local_1d0 <= puVar15) {
                  uVar26 = uVar26 + (ulong)*puVar16 * 4;
                  lVar20 = uVar26 + 0x40;
                  if (lVar20 <= (long)pcVar8 - (long)pcVar17) goto LAB_00121714;
                  goto LAB_00121fd4;
                }
                uVar26 = 0;
              }
              lVar20 = uVar26 + 0x40;
              local_1d0 = puVar16;
              if ((long)pcVar8 - (long)pcVar17 < lVar20) goto LAB_00121fd4;
            }
            else {
              uVar26 = 0;
              lVar20 = 0x40;
              if ((long)pcVar8 - (long)pcVar17 < 0x40) goto LAB_00121fd4;
            }
LAB_00121714:
            if ((long)pcVar9 - (long)pcVar7 < lVar20) goto LAB_00122000;
            uVar26 = uVar26 + 0x37;
            uVar33 = (int)(uVar26 >> 3) + 1;
            pcVar6 = (char *)((ulong)uVar33 & 3);
            lVar28 = lVar20;
            if ((uVar33 & 3) != 0) {
              lVar28 = 0;
              lVar29 = -(long)pcVar6;
              do {
                uVar39 = *(undefined8 *)(pcVar17 + lVar28 + (int)uVar25);
                uVar40 = *(undefined8 *)(pcVar7 + lVar28);
                *(ulong *)(pcVar17 + lVar28) =
                     CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                              CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                                 (char)((ulong)uVar39 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                          (char)((ulong)uVar39 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                                   (char)((ulong)uVar39 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar40 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar40 >> 8) + (char)((ulong)uVar39 >> 8),
                                                  (char)uVar40 + (char)uVar39)))))));
                lVar28 = lVar28 + 8;
                lVar29 = lVar29 + 1;
              } while (lVar29 != 0);
              pcVar17 = pcVar17 + lVar28;
              pcVar7 = pcVar7 + lVar28;
              pcVar6 = pcVar17 + -8;
              pcVar31 = pcVar7 + -8;
              lVar28 = lVar20 - lVar28;
            }
            if (0x17 < uVar26) {
              lVar29 = 0;
              do {
                lVar30 = lVar29;
                pcVar6 = pcVar17 + lVar30 + (int)uVar25;
                pcVar31 = pcVar7 + lVar30;
                uVar40 = *(undefined8 *)pcVar31;
                uVar39 = *(undefined8 *)pcVar6;
                pcVar24 = pcVar17 + lVar30;
                *(ulong *)pcVar24 =
                     CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                              CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                                 (char)((ulong)uVar39 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                          (char)((ulong)uVar39 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                                   (char)((ulong)uVar39 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar40 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar40 >> 8) + (char)((ulong)uVar39 >> 8),
                                                  (char)uVar40 + (char)uVar39)))))));
                uVar39 = *(undefined8 *)(pcVar6 + 8);
                uVar40 = *(undefined8 *)(pcVar31 + 8);
                *(ulong *)(pcVar24 + 8) =
                     CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                              CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                                 (char)((ulong)uVar39 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                          (char)((ulong)uVar39 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                                   (char)((ulong)uVar39 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar40 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar40 >> 8) + (char)((ulong)uVar39 >> 8),
                                                  (char)uVar40 + (char)uVar39)))))));
                uVar39 = *(undefined8 *)(pcVar6 + 0x10);
                uVar40 = *(undefined8 *)(pcVar31 + 0x10);
                *(ulong *)(pcVar24 + 0x10) =
                     CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                              CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                                 (char)((ulong)uVar39 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                          (char)((ulong)uVar39 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                                   (char)((ulong)uVar39 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar40 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar40 >> 8) + (char)((ulong)uVar39 >> 8),
                                                  (char)uVar40 + (char)uVar39)))))));
                uVar39 = *(undefined8 *)(pcVar6 + 0x18);
                uVar40 = *(undefined8 *)(pcVar31 + 0x18);
                lVar28 = lVar28 + -0x20;
                *(ulong *)(pcVar24 + 0x18) =
                     CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                              CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30)
                                       ,CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                                 (char)((ulong)uVar39 >> 0x28),
                                                 CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                          (char)((ulong)uVar39 >> 0x20),
                                                          CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                                   (char)((ulong)uVar39 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar40 >>
                                                                                  0x10) +
                                                                            (char)((ulong)uVar39 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar40 >> 8) + (char)((ulong)uVar39 >> 8),
                                                  (char)uVar40 + (char)uVar39)))))));
                lVar29 = lVar30 + 0x20;
              } while (8 < lVar28);
              pcVar6 = pcVar17 + lVar30 + 0x18;
              pcVar31 = pcVar7 + lVar30 + 0x18;
            }
            lVar20 = lVar20 - (uVar26 & 0xffff8);
            pcVar6 = pcVar6 + lVar20;
            pcVar7 = pcVar31 + lVar20;
            uVar39 = *(undefined8 *)(pcVar6 + (long)(int)uVar25 + -8);
            uVar40 = *(undefined8 *)(pcVar7 + -8);
            *(ulong *)(pcVar6 + -8) =
                 CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                          CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                                   CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                            (char)((ulong)uVar39 >> 0x28),
                                            CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                     (char)((ulong)uVar39 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                              (char)((ulong)uVar39 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar40 >> 0x10)
                                                                       + (char)((ulong)uVar39 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar40
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar39
                                                                                      >> 8),
                                                                                (char)uVar40 +
                                                                                (char)uVar39)))))));
            puVar16 = local_1d0;
          }
          else if (bVar4 == 1) {
            if (local_1d0 < puVar15) {
              puVar16 = (ushort *)((long)local_1d0 + 1);
              uVar34 = (ulong)(byte)*local_1d0;
              if (uVar34 < 0xfc) {
                local_1d0 = puVar16;
              }
              else if (puVar15 < (ushort *)((long)local_1d0 + 3U)) {
                uVar34 = 0;
                local_1d0 = puVar16;
              }
              else {
                uVar34 = uVar34 + (ulong)*puVar16 * 4;
                local_1d0 = (ushort *)((long)local_1d0 + 3U);
              }
            }
            else {
              uVar34 = 0;
            }
            if ((long)pcVar8 - (long)pcVar17 < (long)(uVar34 + 99)) {
              if ((long)pcVar8 - (long)pcVar17 < (long)(uVar34 + 0x5b)) goto LAB_00122058;
              if ((long)param_3 - (long)pcVar17 < (long)(uVar34 + 99)) goto LAB_00122088;
            }
            pcVar6 = pcVar17 + uVar34 + 0x5b;
            uVar34 = -(ulong)*puVar32;
            pcVar24 = pcVar17 + -(ulong)*puVar32;
            *(undefined8 *)pcVar17 = *(undefined8 *)pcVar24;
            *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar24 + 8);
            *(undefined8 *)(pcVar17 + 0x10) = *(undefined8 *)(pcVar24 + 0x10);
            *(undefined8 *)(pcVar17 + 0x18) = *(undefined8 *)(pcVar24 + 0x18);
            *(undefined8 *)(pcVar17 + 0x20) = *(undefined8 *)(pcVar24 + 0x20);
            *(undefined8 *)(pcVar17 + 0x28) = *(undefined8 *)(pcVar24 + 0x28);
            *(undefined8 *)(pcVar17 + 0x30) = *(undefined8 *)(pcVar24 + 0x30);
            *(undefined8 *)(pcVar17 + 0x38) = *(undefined8 *)(pcVar24 + 0x38);
            pcVar17 = pcVar17 + 0x40;
            do {
              pcVar24 = pcVar17 + 8;
              *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + uVar34);
              pcVar17 = pcVar24;
            } while (pcVar24 < pcVar6);
            puVar32 = puVar32 + 1;
            puVar16 = local_1d0;
          }
          else {
            if (local_1d0 < puVar15) {
              puVar16 = (ushort *)((long)local_1d0 + 1);
              uVar34 = (ulong)(byte)*local_1d0;
              if (0xfb < uVar34) {
                if (puVar15 < (ushort *)((long)local_1d0 + 3U)) goto joined_r0x001218d4;
                uVar34 = uVar34 + (ulong)*puVar16 * 4;
                puVar16 = (ushort *)((long)local_1d0 + 3U);
              }
            }
            else {
joined_r0x001218d4:
              uVar34 = 0;
            }
            if (puVar3 <= puVar36) goto LAB_0012202c;
            puVar22 = puVar36 + 1;
            uVar26 = uVar34 + 0x1d;
            if ((long)pcVar8 - (long)pcVar17 < (long)(uVar34 + 0x2d)) {
              if ((long)pcVar8 - (long)pcVar17 < (long)uVar26) goto LAB_001220b4;
              if ((long)param_3 - (long)pcVar17 < (long)(uVar34 + 0x2d)) goto LAB_001220e4;
            }
            pcVar24 = param_1 + -(ulong)*puVar36;
            *(undefined8 *)pcVar17 = *(undefined8 *)pcVar24;
            *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar24 + 8);
            *(undefined8 *)(pcVar17 + 0x10) = *(undefined8 *)(pcVar24 + 0x10);
            *(undefined8 *)(pcVar17 + 0x18) = *(undefined8 *)(pcVar24 + 0x18);
            uVar34 = (ulong)(uint)((int)pcVar24 - (int)pcVar17);
            pcVar6 = pcVar17 + uVar26;
            *(undefined8 *)(pcVar17 + 0x20) = *(undefined8 *)(pcVar24 + 0x20);
            if (0x28 < uVar26) {
              pcVar17 = pcVar17 + 0x28;
              pcVar24 = pcVar24 + 0x28;
              do {
                pcVar23 = pcVar17 + 8;
                *(undefined8 *)pcVar17 = *(undefined8 *)pcVar24;
                pcVar17 = pcVar23;
                pcVar24 = pcVar24 + 8;
              } while (pcVar23 < pcVar6);
            }
            Hint_Prefetch((long)param_1 - (ulong)puVar36[4],0,0,0);
          }
        }
        else {
          if (puVar3 <= puVar36) goto LAB_00121d84;
          lVar20 = uVar26 + 5;
          if ((long)pcVar8 - (long)pcVar17 < 0x24) {
            if ((long)pcVar8 - (long)pcVar17 < lVar20) {
              FUN_0010a430();
              pcVar10 = *(code **)PTR_PTR_043722f8;
              if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
              pcVar7 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
              pcVar8 = "OODLE ERROR : corruption : ml <= rrPtrDiff(parse_chunk_end - to_ptr)\n";
              uVar39 = 0x10b;
              goto LAB_00121e38;
            }
            if ((long)param_3 - (long)pcVar17 < (long)(uVar26 + 0x15)) {
              FUN_0010a430();
              pcVar10 = *(code **)PTR_PTR_043722f8;
              if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
              pcVar7 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
              pcVar8 = "OODLE ERROR : corruption : ml+16 <= rrPtrDiff(overrun_chunk_end - to_ptr)\n"
              ;
              uVar39 = 0x10f;
              goto LAB_00121e38;
            }
          }
          pcVar24 = param_1 + -(ulong)*puVar36;
          *(undefined8 *)pcVar17 = *(undefined8 *)pcVar24;
          *(undefined8 *)(pcVar17 + 8) = *(undefined8 *)(pcVar24 + 8);
          uVar34 = (ulong)(uint)((int)pcVar24 - (int)pcVar17);
          pcVar6 = pcVar17 + lVar20;
          *(undefined8 *)(pcVar17 + 0x10) = *(undefined8 *)(pcVar24 + 0x10);
          if (0x18 < (uint)lVar20) {
            *(undefined8 *)(pcVar17 + 0x18) = *(undefined8 *)(pcVar24 + 0x18);
          }
          Hint_Prefetch((long)param_1 - (ulong)puVar36[4],0,0,0);
          puVar22 = puVar36 + 1;
        }
        if (pcVar35 <= pcVar7) {
          if (pcVar9 <= pcVar7 && (long)pcVar7 - (long)pcVar9 != 0) {
            FUN_0010a430();
            pcVar10 = *(code **)PTR_PTR_043722f8;
            if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
            pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar8 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
            uVar39 = 0x20c;
            goto LAB_00121e38;
          }
          pcVar7 = local_db + ((long)pcVar7 - (long)pcVar9);
          pcVar9 = local_db;
          pcVar35 = local_db;
        }
        uVar25 = (uint)uVar34;
        puVar38 = (ulong *)((long)puVar37 + 0x11);
        pcVar17 = pcVar6;
        puVar36 = puVar22;
        local_1d0 = puVar16;
        if (__src <= puVar32) {
          if (puVar12 <= puVar32 && (long)puVar32 - (long)puVar12 != 0) {
            FUN_0010a430();
            pcVar10 = *(code **)PTR_PTR_043722f8;
            if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
            pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar8 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
            uVar39 = 0x20d;
            goto LAB_00121e38;
          }
          puVar32 = (ushort *)((long)local_16c + ((long)puVar32 - (long)puVar12));
          puVar12 = local_16c;
          __src = local_16c;
        }
joined_r0x00121b30:
        puVar37 = puVar13;
      } while (puVar13 < puVar14);
    }
    if (pcVar8 <= pcVar17) {
      if (pcVar17 != pcVar8) {
        return 0;
      }
LAB_00121d14:
      if (puVar12 <= puVar32 && (long)puVar32 - (long)puVar12 != 0) {
        return 0;
      }
      if (pcVar9 <= pcVar7 && (long)pcVar7 - (long)pcVar9 != 0) {
        return 0;
      }
      *param_7 = uVar25;
      *(char **)(param_6 + 0x38) = pcVar1 + ((long)pcVar7 - (long)pcVar9);
      *(long *)(param_6 + 0x48) = (long)puVar2 + ((long)puVar32 - (long)puVar12);
      if (puVar15 < local_1d0) {
        return 0;
      }
      *(ushort **)(param_6 + 0x10) = local_1d0;
      return param_5;
    }
    uVar34 = (long)pcVar8 - (long)pcVar17;
    if (pcVar7 + uVar34 <= pcVar9) {
      if (7 < (long)uVar34) {
        lVar20 = -8 - (long)pcVar17;
        uVar26 = uVar34;
        if (((uint)(pcVar8 + lVar20) >> 3 & 1) == 0) {
          uVar39 = *(undefined8 *)(pcVar17 + (int)uVar25);
          uVar40 = *(undefined8 *)pcVar7;
          *(ulong *)pcVar17 =
               CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                        CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                                 CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                          (char)((ulong)uVar39 >> 0x28),
                                          CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                   (char)((ulong)uVar39 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                            (char)((ulong)uVar39 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar40 >> 0x10) +
                                                                     (char)((ulong)uVar39 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar40
                                                                                    >> 8) +
                                                                              (char)((ulong)uVar39
                                                                                    >> 8),
                                                                              (char)uVar40 +
                                                                              (char)uVar39)))))));
          uVar26 = uVar34 - 8;
          pcVar17 = pcVar17 + 8;
          pcVar7 = pcVar7 + 8;
        }
        if ((char *)0x7 < pcVar8 + lVar20) {
          do {
            uVar39 = *(undefined8 *)pcVar7;
            uVar40 = *(undefined8 *)(pcVar17 + (long)(int)uVar25 + 8 + -8);
            *(ulong *)pcVar17 =
                 CONCAT17((char)((ulong)uVar39 >> 0x38) + (char)((ulong)uVar40 >> 0x38),
                          CONCAT16((char)((ulong)uVar39 >> 0x30) + (char)((ulong)uVar40 >> 0x30),
                                   CONCAT15((char)((ulong)uVar39 >> 0x28) +
                                            (char)((ulong)uVar40 >> 0x28),
                                            CONCAT14((char)((ulong)uVar39 >> 0x20) +
                                                     (char)((ulong)uVar40 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar39 >> 0x18) +
                                                              (char)((ulong)uVar40 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar39 >> 0x10)
                                                                       + (char)((ulong)uVar40 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar39
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar40
                                                                                      >> 8),
                                                                                (char)uVar39 +
                                                                                (char)uVar40)))))));
            uVar39 = *(undefined8 *)(pcVar17 + (long)(int)uVar25 + 8);
            uVar40 = *(undefined8 *)(pcVar7 + 8);
            pcVar7 = pcVar7 + 0x10;
            uVar26 = uVar26 - 0x10;
            *(ulong *)(pcVar17 + 8) =
                 CONCAT17((char)((ulong)uVar40 >> 0x38) + (char)((ulong)uVar39 >> 0x38),
                          CONCAT16((char)((ulong)uVar40 >> 0x30) + (char)((ulong)uVar39 >> 0x30),
                                   CONCAT15((char)((ulong)uVar40 >> 0x28) +
                                            (char)((ulong)uVar39 >> 0x28),
                                            CONCAT14((char)((ulong)uVar40 >> 0x20) +
                                                     (char)((ulong)uVar39 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar40 >> 0x18) +
                                                              (char)((ulong)uVar39 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar40 >> 0x10)
                                                                       + (char)((ulong)uVar39 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar40
                                                                                      >> 8) +
                                                                                (char)((ulong)uVar39
                                                                                      >> 8),
                                                                                (char)uVar40 +
                                                                                (char)uVar39)))))));
            pcVar17 = pcVar17 + 0x10;
          } while (7 < (long)uVar26);
        }
        uVar34 = uVar34 & 7;
      }
      if (uVar34 != 0) {
        uVar26 = uVar34;
        if ((uVar34 & 1) != 0) {
          *pcVar17 = pcVar17[(int)uVar25] + *pcVar7;
          pcVar7 = pcVar7 + 1;
          uVar26 = uVar34 - 1;
          pcVar17 = pcVar17 + 1;
        }
        if (uVar34 != 1) {
          pcVar8 = pcVar17 + 1;
          do {
            uVar26 = uVar26 - 2;
            pcVar8[-1] = (pcVar8 + (int)uVar25)[-1] + *pcVar7;
            pcVar35 = pcVar7 + 1;
            pcVar7 = pcVar7 + 2;
            *pcVar8 = pcVar8[(int)uVar25] + *pcVar35;
            pcVar8 = pcVar8 + 2;
          } while (uVar26 != 0);
        }
      }
      goto LAB_00121d14;
    }
    FUN_0010a430();
    pcVar10 = *(code **)PTR_PTR_043722f8;
    if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
    pcVar7 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
    pcVar8 = "OODLE ERROR : corruption : (literals_ptr+lrl <= literals_end)\n";
    uVar39 = 0x21f;
  }
LAB_00121e38:
  (*pcVar10)(0,pcVar7,uVar39,pcVar8);
LAB_00121e3c:
  FUN_0010a450();
  return 0;
LAB_00121fd4:
  FUN_0010a430();
  pcVar10 = *(code **)PTR_PTR_043722f8;
  if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
  pcVar7 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar8 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(parse_chunk_end-to_ptr))\n";
  uVar39 = 0x2a;
  goto LAB_00121e38;
LAB_00122000:
  FUN_0010a430();
  pcVar10 = *(code **)PTR_PTR_043722f8;
  if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
  pcVar7 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar8 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(literals_end-literals_ptr))\n";
  uVar39 = 0x2b;
  goto LAB_00121e38;
LAB_00122058:
  FUN_0010a430();
  pcVar10 = *(code **)PTR_PTR_043722f8;
  if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
  pcVar7 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar8 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  uVar39 = 0x80;
  goto LAB_00121e38;
LAB_00122088:
  FUN_0010a430();
  pcVar10 = *(code **)PTR_PTR_043722f8;
  if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
  pcVar7 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar8 = "OODLE ERROR : corruption : ( ml+8 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  uVar39 = 0x81;
  goto LAB_00121e38;
LAB_0012202c:
  FUN_0010a430();
  pcVar10 = *(code **)PTR_PTR_043722f8;
  if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
  pcVar7 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar8 = "OODLE ERROR : corruption : (escape_offset_ptr < escape_offset_end)\n";
  uVar39 = 0xb0;
  goto LAB_00121e38;
LAB_001220b4:
  FUN_0010a430();
  pcVar10 = *(code **)PTR_PTR_043722f8;
  if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
  pcVar7 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar8 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  uVar39 = 0xc0;
  goto LAB_00121e38;
LAB_001220e4:
  FUN_0010a430();
  pcVar10 = *(code **)PTR_PTR_043722f8;
  if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
  pcVar7 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar8 = "OODLE ERROR : corruption : ( ml+16 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  uVar39 = 0xc1;
  goto LAB_00121e38;
LAB_00121d84:
  FUN_0010a430();
  pcVar10 = *(code **)PTR_PTR_043722f8;
  if (pcVar10 == (code *)0x0) goto LAB_00121e3c;
  pcVar7 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar8 = "OODLE ERROR : corruption : (escape_offset_ptr < escape_offset_end)\n";
  uVar39 = 0xfb;
  goto LAB_00121e38;
}


