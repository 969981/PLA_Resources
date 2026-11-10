/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00124b90; name: FUN_00124b90
 */


undefined8
FUN_00124b90(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,undefined8 param_5,
            long param_6,uint *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  ushort uVar5;
  byte bVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *pcVar10;
  ushort *puVar11;
  ulong *puVar12;
  size_t sVar13;
  ushort *puVar14;
  ulong *puVar15;
  code *pcVar16;
  ushort *puVar17;
  ushort *puVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  long lVar29;
  undefined8 *extraout_x14;
  undefined8 *puVar30;
  undefined8 *extraout_x15;
  undefined8 *puVar31;
  ulong *puVar32;
  uint uVar33;
  ulong uVar34;
  ushort *__src;
  undefined8 *puVar35;
  ulong *puVar36;
  ushort *local_1d0;
  ushort local_16c [72];
  undefined8 local_db [14];
  undefined1 local_6b;
  
  puVar24 = *(undefined8 **)(param_6 + 0x38);
  puVar3 = *(undefined8 **)(param_6 + 0x40);
  puVar12 = *(ulong **)(param_6 + 0x88);
  puVar32 = (ulong *)((long)puVar12 + -0xf);
  puVar2 = (undefined8 *)(param_1 + param_2);
  uVar34 = (ulong)*param_7;
  puVar36 = *(ulong **)(param_6 + 0x20);
  sVar13 = (long)puVar3 - (long)puVar24;
  puVar17 = *(ushort **)(param_6 + 0x48);
  puVar4 = *(ushort **)(param_6 + 0x50);
  if (0x70 < (long)sVar13) {
    sVar13 = 0x71;
  }
  local_1d0 = *(ushort **)(param_6 + 0x10);
  puVar14 = *(ushort **)(param_6 + 0x18);
  puVar23 = (undefined8 *)(param_1 + 8);
  puVar7 = (undefined8 *)((long)puVar3 - sVar13);
  memcpy((void *)((long)local_db - sVar13),puVar7,sVar13);
  sVar13 = (long)puVar4 - (long)puVar17;
  if (0x1f < (long)sVar13) {
    sVar13 = 0x20;
  }
  local_db[0xd] = 0;
  local_db[0xc] = 0;
  local_db[0xb] = 0;
  local_db[10] = 0;
  local_db[9] = 0;
  local_db[8] = 0;
  local_db[7] = 0;
  local_db[6] = 0;
  local_db[5] = 0;
  local_db[4] = 0;
  local_db[3] = 0;
  local_db[2] = 0;
  local_db[1] = 0;
  __src = (ushort *)((long)puVar4 - sVar13);
  local_db[0] = 0;
  local_6b = 0;
  memcpy((void *)((long)local_16c - sVar13),__src,sVar13);
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
  puVar11 = puVar4;
  puVar30 = extraout_x14;
  puVar35 = puVar3;
  if ((puVar36 < puVar32) && ((undefined8 *)(param_1 + 0x170U) <= param_3)) {
    puVar31 = extraout_x15;
    do {
      if (puVar7 <= puVar24) {
        if (puVar35 <= puVar24 && (long)puVar24 - (long)puVar35 != 0) {
          FUN_0010a430();
          pcVar16 = *(code **)PTR_PTR_043722f8;
          if (pcVar16 == (code *)0x0) goto LAB_00125a74;
          pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          pcVar10 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
          uVar9 = 0xd5;
          goto LAB_00125a70;
        }
        puVar24 = (undefined8 *)((long)local_db + ((long)puVar24 - (long)puVar35));
        puVar7 = local_db;
        puVar35 = local_db;
      }
      if (__src <= puVar17) {
        if (puVar11 <= puVar17 && (long)puVar17 - (long)puVar11 != 0) {
          FUN_0010a430();
          pcVar16 = *(code **)PTR_PTR_043722f8;
          if (pcVar16 == (code *)0x0) goto LAB_00125a74;
          pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          pcVar10 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
          uVar9 = 0xd6;
          goto LAB_00125a70;
        }
        puVar17 = (ushort *)((long)local_16c + ((long)puVar17 - (long)puVar11));
        puVar11 = local_16c;
        __src = local_16c;
      }
      uVar27 = *puVar36;
      uVar25 = (uint)uVar27;
      if ((uVar27 + 0xe7e7e7e7e7e7e7e8 & (uVar27 ^ 0xffffffffffffffff) & 0x8080808080808080) == 0) {
        uVar20 = puVar36[1];
        *puVar23 = *puVar24;
        puVar23 = (undefined8 *)((long)puVar23 + (uVar27 & 7));
        uVar33 = (uint)uVar34;
        if ((uVar27 & 0x80) == 0) {
          uVar33 = -(uint)*puVar17;
        }
        puVar30 = (undefined8 *)((long)puVar23 + (long)(int)uVar33);
        if (param_4 <= puVar30) {
          *puVar23 = *puVar30;
          puVar24 = (undefined8 *)((long)puVar24 + (uVar27 & 7));
          puVar23[1] = puVar30[1];
          puVar23 = (undefined8 *)((long)puVar23 + (uVar27 >> 3 & 0xf));
          puVar17 = (ushort *)((long)puVar17 + (ulong)((uVar25 & 0x80) >> 6 ^ 2));
          *puVar23 = *puVar24;
          uVar34 = uVar27 >> 8 & 7;
          puVar23 = (undefined8 *)((long)puVar23 + uVar34);
          if ((uVar27 & 0x8000) == 0) {
            uVar33 = -(uint)*puVar17;
          }
          puVar30 = (undefined8 *)((long)puVar23 + (long)(int)uVar33);
          if (param_4 <= puVar30) {
            puVar24 = (undefined8 *)((long)puVar24 + uVar34);
            puVar17 = (ushort *)((long)puVar17 + (ulong)((uVar25 & 0x8000) >> 0xe ^ 2));
            *puVar23 = *puVar30;
            puVar23[1] = puVar30[1];
            puVar23 = (undefined8 *)((long)puVar23 + (uVar27 >> 0xb & 0xf));
            uVar34 = uVar27 >> 0x10 & 7;
            *puVar23 = *puVar24;
            puVar23 = (undefined8 *)((long)puVar23 + uVar34);
            if ((uVar27 & 0x800000) == 0) {
              uVar33 = -(uint)*puVar17;
            }
            puVar30 = (undefined8 *)((long)puVar23 + (long)(int)uVar33);
            if (param_4 <= puVar30) {
              puVar24 = (undefined8 *)((long)puVar24 + uVar34);
              puVar17 = (ushort *)((long)puVar17 + (ulong)((uVar25 & 0x800000) >> 0x16 ^ 2));
              *puVar23 = *puVar30;
              puVar23[1] = puVar30[1];
              puVar23 = (undefined8 *)((long)puVar23 + (uVar27 >> 0x13 & 0xf));
              uVar34 = uVar27 >> 0x18 & 7;
              *puVar23 = *puVar24;
              puVar23 = (undefined8 *)((long)puVar23 + uVar34);
              if (-1 < (int)uVar25) {
                uVar33 = -(uint)*puVar17;
              }
              puVar30 = (undefined8 *)((long)puVar23 + (long)(int)uVar33);
              if (param_4 <= puVar30) {
                puVar24 = (undefined8 *)((long)puVar24 + uVar34);
                puVar17 = (ushort *)((long)puVar17 + ((ulong)(uVar25 >> 0x1e ^ 0xffffffff) & 2));
                *puVar23 = *puVar30;
                puVar23[1] = puVar30[1];
                puVar23 = (undefined8 *)((long)puVar23 + (uVar27 >> 0x1b & 0xf));
                uVar25 = *(uint *)((long)puVar36 + 4);
                uVar34 = (ulong)uVar25;
                *puVar23 = *puVar24;
                puVar23 = (undefined8 *)((long)puVar23 + (uVar34 & 7));
                if ((int)(uVar34 & 0x80) == 0) {
                  uVar33 = -(uint)*puVar17;
                }
                puVar30 = (undefined8 *)((long)puVar23 + (long)(int)uVar33);
                if (param_4 <= puVar30) {
                  puVar24 = (undefined8 *)((long)puVar24 + (uVar34 & 7));
                  *puVar23 = *puVar30;
                  puVar17 = (ushort *)((long)puVar17 + ((uVar34 & 0x80) >> 6 ^ 2));
                  uVar27 = (ulong)(uVar25 >> 8 & 7);
                  puVar23[1] = puVar30[1];
                  puVar23 = (undefined8 *)((long)puVar23 + ((ulong)(uVar25 >> 3) & 0xf));
                  *puVar23 = *puVar24;
                  puVar23 = (undefined8 *)((long)puVar23 + uVar27);
                  if ((int)(uVar34 & 0x8000) == 0) {
                    uVar33 = -(uint)*puVar17;
                  }
                  puVar30 = (undefined8 *)((long)puVar23 + (long)(int)uVar33);
                  if (param_4 <= puVar30) {
                    puVar24 = (undefined8 *)((long)puVar24 + uVar27);
                    *puVar23 = *puVar30;
                    puVar17 = (ushort *)((long)puVar17 + ((uVar34 & 0x8000) >> 0xe ^ 2));
                    puVar31 = (undefined8 *)((long)puVar23 + ((ulong)(uVar25 >> 0xb) & 0xf));
                    puVar23[1] = puVar30[1];
                    *puVar31 = *puVar24;
                    uVar27 = (ulong)(uVar25 >> 0x10) & 7;
                    puVar31 = (undefined8 *)((long)puVar31 + uVar27);
                    if ((int)(uVar34 & 0x800000) == 0) {
                      uVar33 = -(uint)*puVar17;
                    }
                    puVar23 = (undefined8 *)((long)puVar31 + (long)(int)uVar33);
                    if (param_4 <= puVar23) {
                      puVar24 = (undefined8 *)((long)puVar24 + uVar27);
                      *puVar31 = *puVar23;
                      puVar17 = (ushort *)((long)puVar17 + ((uVar34 & 0x800000) >> 0x16 ^ 2));
                      puVar28 = (undefined8 *)((long)puVar31 + ((ulong)(uVar25 >> 0x13) & 0xf));
                      puVar31[1] = puVar23[1];
                      *puVar28 = *puVar24;
                      uVar34 = (ulong)(uVar25 >> 0x18 & 7);
                      puVar28 = (undefined8 *)((long)puVar28 + uVar34);
                      if (-1 < (int)uVar25) {
                        uVar33 = -(uint)*puVar17;
                      }
                      puVar31 = (undefined8 *)((long)puVar28 + (long)(int)uVar33);
                      if (param_4 <= puVar31) {
                        puVar24 = (undefined8 *)((long)puVar24 + uVar34);
                        puVar23 = (undefined8 *)((long)puVar28 + (ulong)(uVar25 >> 0x1b & 0xf));
                        puVar30 = (undefined8 *)((ulong)(uVar25 >> 0x1e ^ 0xffffffff) & 2);
                        puVar17 = (ushort *)((long)puVar17 + (long)puVar30);
                        *puVar28 = *puVar31;
                        puVar28[1] = puVar31[1];
                        if ((uVar20 + 0xe7e7e7e7e7e7e7e8 & (uVar20 ^ 0xffffffffffffffff) &
                            0x8080808080808080) != 0) {
                          bVar6 = (byte)puVar36[1];
                          puVar36 = (ulong *)((long)puVar36 + 9);
                          goto joined_r0x001250bc;
                        }
                        uVar25 = (uint)puVar36[1];
                        uVar34 = (ulong)uVar25;
                        *puVar23 = *puVar24;
                        puVar23 = (undefined8 *)((long)puVar23 + (uVar34 & 7));
                        if ((int)(uVar34 & 0x80) == 0) {
                          uVar33 = -(uint)*puVar17;
                        }
                        puVar30 = (undefined8 *)((long)puVar23 + (long)(int)uVar33);
                        if (param_4 <= puVar30) {
                          *puVar23 = *puVar30;
                          puVar24 = (undefined8 *)((long)puVar24 + (uVar34 & 7));
                          puVar17 = (ushort *)((long)puVar17 + ((uVar34 & 0x80) >> 6 ^ 2));
                          uVar27 = (ulong)(uVar25 >> 8 & 7);
                          puVar23[1] = puVar30[1];
                          puVar23 = (undefined8 *)((long)puVar23 + ((ulong)(uVar25 >> 3) & 0xf));
                          *puVar23 = *puVar24;
                          puVar23 = (undefined8 *)((long)puVar23 + uVar27);
                          if ((int)(uVar34 & 0x8000) == 0) {
                            uVar33 = -(uint)*puVar17;
                          }
                          puVar30 = (undefined8 *)((long)puVar23 + (long)(int)uVar33);
                          if (param_4 <= puVar30) {
                            puVar24 = (undefined8 *)((long)puVar24 + uVar27);
                            *puVar23 = *puVar30;
                            puVar17 = (ushort *)((long)puVar17 + ((uVar34 & 0x8000) >> 0xe ^ 2));
                            puVar31 = (undefined8 *)((long)puVar23 + ((ulong)(uVar25 >> 0xb) & 0xf))
                            ;
                            puVar23[1] = puVar30[1];
                            *puVar31 = *puVar24;
                            uVar27 = (ulong)(uVar25 >> 0x10) & 7;
                            puVar31 = (undefined8 *)((long)puVar31 + uVar27);
                            if ((int)(uVar34 & 0x800000) == 0) {
                              uVar33 = -(uint)*puVar17;
                            }
                            puVar23 = (undefined8 *)((long)puVar31 + (long)(int)uVar33);
                            if (param_4 <= puVar23) {
                              puVar24 = (undefined8 *)((long)puVar24 + uVar27);
                              *puVar31 = *puVar23;
                              puVar17 = (ushort *)
                                        ((long)puVar17 + ((uVar34 & 0x800000) >> 0x16 ^ 2));
                              puVar30 = (undefined8 *)
                                        ((long)puVar31 + ((ulong)(uVar25 >> 0x13) & 0xf));
                              uVar34 = (ulong)(uVar25 >> 0x18 & 7);
                              puVar31[1] = puVar23[1];
                              *puVar30 = *puVar24;
                              puVar30 = (undefined8 *)((long)puVar30 + uVar34);
                              if (-1 < (int)uVar25) {
                                uVar33 = -(uint)*puVar17;
                              }
                              puVar23 = (undefined8 *)((long)puVar30 + (long)(int)uVar33);
                              if (param_4 <= puVar23) {
                                puVar24 = (undefined8 *)((long)puVar24 + uVar34);
                                puVar17 = (ushort *)
                                          ((long)puVar17 +
                                          ((ulong)(uVar25 >> 0x1e ^ 0xffffffff) & 2));
                                *puVar30 = *puVar23;
                                puVar30[1] = puVar23[1];
                                puVar30 = (undefined8 *)
                                          ((long)puVar30 + ((ulong)(uVar25 >> 0x1b) & 0xf));
                                uVar25 = *(uint *)((long)puVar36 + 0xc);
                                uVar34 = (ulong)uVar25;
                                *puVar30 = *puVar24;
                                puVar30 = (undefined8 *)((long)puVar30 + (uVar34 & 7));
                                if ((int)(uVar34 & 0x80) == 0) {
                                  uVar33 = -(uint)*puVar17;
                                }
                                puVar23 = (undefined8 *)((long)puVar30 + (long)(int)uVar33);
                                if (param_4 <= puVar23) {
                                  puVar24 = (undefined8 *)((long)puVar24 + (uVar34 & 7));
                                  *puVar30 = *puVar23;
                                  puVar17 = (ushort *)((long)puVar17 + ((uVar34 & 0x80) >> 6 ^ 2));
                                  uVar27 = (ulong)(uVar25 >> 8 & 7);
                                  puVar30[1] = puVar23[1];
                                  puVar30 = (undefined8 *)
                                            ((long)puVar30 + ((ulong)(uVar25 >> 3) & 0xf));
                                  *puVar30 = *puVar24;
                                  puVar30 = (undefined8 *)((long)puVar30 + uVar27);
                                  if ((int)(uVar34 & 0x8000) == 0) {
                                    uVar33 = -(uint)*puVar17;
                                  }
                                  puVar23 = (undefined8 *)((long)puVar30 + (long)(int)uVar33);
                                  if (param_4 <= puVar23) {
                                    puVar24 = (undefined8 *)((long)puVar24 + uVar27);
                                    *puVar30 = *puVar23;
                                    puVar17 = (ushort *)
                                              ((long)puVar17 + ((uVar34 & 0x8000) >> 0xe ^ 2));
                                    puVar31 = (undefined8 *)
                                              ((long)puVar30 + ((ulong)(uVar25 >> 0xb) & 0xf));
                                    puVar30[1] = puVar23[1];
                                    *puVar31 = *puVar24;
                                    uVar27 = (ulong)(uVar25 >> 0x10) & 7;
                                    puVar31 = (undefined8 *)((long)puVar31 + uVar27);
                                    if ((int)(uVar34 & 0x800000) == 0) {
                                      uVar33 = -(uint)*puVar17;
                                    }
                                    puVar23 = (undefined8 *)((long)puVar31 + (long)(int)uVar33);
                                    if (param_4 <= puVar23) {
                                      puVar17 = (ushort *)
                                                ((long)puVar17 + ((uVar34 & 0x800000) >> 0x16 ^ 2));
                                      puVar30 = (undefined8 *)
                                                ((long)puVar31 + ((ulong)(uVar25 >> 0x13) & 0xf));
                                      *puVar31 = *puVar23;
                                      puVar24 = (undefined8 *)((long)puVar24 + uVar27);
                                      puVar31[1] = puVar23[1];
                                      *puVar30 = *puVar24;
                                      puVar31 = (undefined8 *)(ulong)(uVar25 >> 0x18 & 7);
                                      puVar30 = (undefined8 *)((long)puVar30 + (long)puVar31);
                                      if (-1 < (int)uVar25) {
                                        uVar33 = -(uint)*puVar17;
                                      }
                                      uVar34 = (ulong)uVar33;
                                      puVar23 = (undefined8 *)((long)puVar30 + (long)(int)uVar33);
                                      if (param_4 <= puVar23) {
                                        puVar24 = (undefined8 *)((long)puVar24 + (long)puVar31);
                                        *puVar30 = *puVar23;
                                        puVar36 = puVar36 + 2;
                                        puVar17 = (ushort *)
                                                  ((long)puVar17 +
                                                  ((ulong)(uVar25 >> 0x1e ^ 0xffffffff) & 2));
                                        puVar30[1] = puVar23[1];
                                        puVar23 = (undefined8 *)
                                                  ((long)puVar30 + (ulong)(uVar25 >> 0x1b & 0xf));
                                        if (puVar36 < puVar32) goto LAB_00125370;
                                        break;
                                      }
                                    }
                                  }
                                }
                                FUN_0010a430();
                                pcVar16 = *(code **)PTR_PTR_043722f8;
                                if (pcVar16 == (code *)0x0) goto LAB_00125a74;
                                pcVar8 = 
                                "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
                                pcVar10 = "OODLE ERROR : corruption : mp >= window_base\n";
                                uVar9 = 0x15a;
                                goto LAB_00125a70;
                              }
                            }
                          }
                        }
                        FUN_0010a430();
                        pcVar16 = *(code **)PTR_PTR_043722f8;
                        if (pcVar16 == (code *)0x0) goto LAB_00125a74;
                        pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
                        pcVar10 = "OODLE ERROR : corruption : mp >= window_base\n";
                        uVar9 = 0x159;
                        goto LAB_00125a70;
                      }
                    }
                  }
                }
                FUN_0010a430();
                pcVar16 = *(code **)PTR_PTR_043722f8;
                if (pcVar16 == (code *)0x0) goto LAB_00125a74;
                pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
                pcVar10 = "OODLE ERROR : corruption : mp >= window_base\n";
                uVar9 = 0x154;
                goto LAB_00125a70;
              }
            }
          }
        }
        FUN_0010a430();
        pcVar16 = *(code **)PTR_PTR_043722f8;
        if (pcVar16 == (code *)0x0) goto LAB_00125a74;
        pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
        pcVar10 = "OODLE ERROR : corruption : mp >= window_base\n";
        uVar9 = 0x153;
        goto LAB_00125a70;
      }
      puVar36 = (ulong *)((long)puVar36 + 1);
      if (0x17 < (uVar25 & 0xff)) {
        do {
          uVar26 = (uint)uVar27;
          uVar25 = (uVar26 >> 7 & 1) - 1;
          uVar33 = (uint)uVar34 & (uVar25 ^ 0xffffffff);
          puVar31 = (undefined8 *)(ulong)uVar33;
          uVar33 = -(uint)*puVar17 & uVar25 | uVar33;
          *puVar23 = *puVar24;
          puVar23 = (undefined8 *)((long)puVar23 + (ulong)(uVar26 & 7));
          puVar30 = (undefined8 *)((long)puVar23 + (long)(int)uVar33);
          if (puVar30 < param_4) {
            FUN_0010a430();
            pcVar16 = *(code **)PTR_PTR_043722f8;
            if (pcVar16 == (code *)0x0) goto LAB_00125a74;
            pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar10 = "OODLE ERROR : corruption : mp >= window_base\n";
            uVar9 = 0x186;
            goto LAB_00125a70;
          }
          puVar24 = (undefined8 *)((long)puVar24 + (ulong)(uVar26 & 7));
          *puVar23 = *puVar30;
          puVar23[1] = puVar30[1];
          bVar6 = (byte)*puVar36;
          puVar30 = (undefined8 *)(ulong)(uVar25 & 2);
          puVar17 = (ushort *)((long)puVar17 + (long)puVar30);
          puVar23 = (undefined8 *)((long)puVar23 + (ulong)((uVar26 & 0xff) >> 3 & 0xf));
          puVar36 = (ulong *)((long)puVar36 + 1);
joined_r0x001250bc:
          uVar27 = (ulong)bVar6;
          uVar34 = (ulong)uVar33;
        } while (0x17 < bVar6);
      }
      if (2 < ((uint)uVar27 & 0xff)) {
        return 0;
      }
      if ((uVar27 & 0xff) == 0) {
        if (local_1d0 < puVar14) {
          puVar18 = (ushort *)((long)local_1d0 + 1);
          uVar27 = (ulong)(byte)*local_1d0;
          if (0xfb < uVar27) {
            local_1d0 = (ushort *)((long)local_1d0 + 3);
            if (local_1d0 <= puVar14) {
              uVar27 = uVar27 + (ulong)*puVar18 * 4;
              lVar19 = uVar27 + 0x40;
              if (lVar19 <= (long)puVar2 - (long)puVar23) goto LAB_00125394;
              goto LAB_00125d14;
            }
            uVar27 = 0;
          }
          lVar19 = uVar27 + 0x40;
          local_1d0 = puVar18;
          if ((long)puVar2 - (long)puVar23 < lVar19) goto LAB_00125d14;
        }
        else {
          uVar27 = 0;
          lVar19 = 0x40;
          if ((long)puVar2 - (long)puVar23 < 0x40) goto LAB_00125d14;
        }
LAB_00125394:
        puVar28 = (undefined8 *)((long)puVar35 - (long)puVar24);
        if ((long)puVar28 < lVar19) goto LAB_00125d40;
        puVar1 = (undefined8 *)(uVar27 + 0x2f);
        uVar25 = (int)((ulong)puVar1 >> 4) + 1;
        lVar29 = lVar19;
        if ((uVar25 & 7) != 0) {
          lVar29 = 0;
          lVar21 = -((ulong)uVar25 & 7);
          do {
            puVar30 = (undefined8 *)((long)puVar24 + lVar29);
            uVar9 = puVar30[1];
            puVar31 = (undefined8 *)((long)puVar23 + lVar29);
            lVar29 = lVar29 + 0x10;
            lVar21 = lVar21 + 1;
            *puVar31 = *puVar30;
            puVar31[1] = uVar9;
          } while (lVar21 != 0);
          puVar23 = (undefined8 *)((long)puVar23 + lVar29);
          puVar24 = (undefined8 *)((long)puVar24 + lVar29);
          puVar31 = puVar23 + -2;
          puVar28 = puVar24 + -2;
          lVar29 = lVar19 - lVar29;
        }
        puVar30 = puVar1;
        if ((undefined8 *)0x6f < puVar1) {
          puVar24 = puVar24 + -2;
          puVar23 = puVar23 + -2;
          do {
            uVar9 = puVar24[3];
            puVar31 = puVar23 + 0x10;
            puVar23[2] = puVar24[2];
            puVar23[3] = uVar9;
            lVar29 = lVar29 + -0x80;
            uVar9 = puVar24[5];
            puVar23[4] = puVar24[4];
            puVar23[5] = uVar9;
            uVar9 = puVar24[7];
            puVar23[6] = puVar24[6];
            puVar23[7] = uVar9;
            uVar9 = puVar24[9];
            puVar23[8] = puVar24[8];
            puVar23[9] = uVar9;
            uVar9 = puVar24[0xb];
            puVar23[10] = puVar24[10];
            puVar23[0xb] = uVar9;
            uVar9 = puVar24[0xd];
            puVar23[0xc] = puVar24[0xc];
            puVar23[0xd] = uVar9;
            uVar9 = puVar24[0xf];
            puVar23[0xe] = puVar24[0xe];
            puVar23[0xf] = uVar9;
            puVar28 = puVar24 + 0x10;
            uVar9 = puVar24[0x11];
            puVar23[0x10] = *puVar28;
            puVar23[0x11] = uVar9;
            puVar24 = puVar28;
            puVar30 = puVar31;
            puVar23 = puVar31;
          } while (0x10 < lVar29);
        }
        lVar19 = lVar19 - ((ulong)puVar1 & 0xffff0);
        puVar24 = (undefined8 *)((long)puVar28 + lVar19);
        puVar23 = (undefined8 *)((long)puVar31 + lVar19);
        uVar9 = puVar24[-1];
        puVar23[-2] = puVar24[-2];
        puVar23[-1] = uVar9;
      }
      else {
        if (((uint)uVar27 & 0xff) != 1) {
          return 0;
        }
        if (local_1d0 < puVar14) {
          puVar18 = (ushort *)((long)local_1d0 + 1);
          uVar34 = (ulong)(byte)*local_1d0;
          if (uVar34 < 0xfc) {
            local_1d0 = puVar18;
          }
          else if (puVar14 < (ushort *)((long)local_1d0 + 3U)) {
            uVar34 = 0;
            local_1d0 = puVar18;
          }
          else {
            uVar34 = uVar34 + (ulong)*puVar18 * 4;
            local_1d0 = (ushort *)((long)local_1d0 + 3U);
          }
        }
        else {
          uVar34 = 0;
        }
        if ((long)puVar2 - (long)puVar23 < (long)(uVar34 + 99)) {
          if ((long)puVar2 - (long)puVar23 < (long)(uVar34 + 0x5b)) goto LAB_00125dc4;
          if ((long)param_3 - (long)puVar23 < (long)(uVar34 + 99)) goto LAB_00125df4;
        }
        puVar18 = puVar17 + 1;
        uVar5 = *puVar17;
        puVar28 = (undefined8 *)((long)puVar23 - (ulong)uVar5);
        if (puVar28 < param_4) goto LAB_00125e20;
        puVar1 = (undefined8 *)((long)puVar23 + uVar34 + 0x5b);
        *puVar23 = *puVar28;
        puVar23[1] = puVar28[1];
        puVar23[2] = puVar28[2];
        puVar23[3] = puVar28[3];
        puVar23[4] = puVar28[4];
        puVar23[5] = puVar28[5];
        puVar23[6] = puVar28[6];
        uVar34 = -(ulong)uVar5;
        puVar23[7] = puVar28[7];
        puVar28 = puVar23 + 8;
        do {
          puVar22 = puVar28 + 1;
          *puVar28 = *(undefined8 *)((long)puVar28 + uVar34);
          puVar28 = puVar22;
          puVar17 = puVar18;
          puVar23 = puVar1;
        } while (puVar22 < puVar1);
      }
      if (puVar32 <= puVar36) break;
LAB_00125370:
    } while (puVar23 + 0x2d <= param_3);
  }
  uVar25 = (uint)uVar34;
  if (puVar2 < puVar23) {
    FUN_0010a430();
    pcVar16 = *(code **)PTR_PTR_043722f8;
    if (pcVar16 == (code *)0x0) goto LAB_00125a74;
    pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
    pcVar10 = "OODLE ERROR : corruption : (to_ptr <= parse_chunk_end)\n";
    uVar9 = 0x1c4;
  }
  else {
    if (puVar7 <= puVar24) {
      if (puVar35 <= puVar24 && (long)puVar24 - (long)puVar35 != 0) {
        FUN_0010a430();
        pcVar16 = *(code **)PTR_PTR_043722f8;
        if (pcVar16 == (code *)0x0) goto LAB_00125a74;
        pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
        pcVar10 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
        uVar9 = 0x1eb;
        goto LAB_00125a70;
      }
      puVar24 = (undefined8 *)((long)local_db + ((long)puVar24 - (long)puVar35));
      puVar7 = local_db;
      puVar35 = local_db;
    }
    if (__src <= puVar17) {
      if (puVar11 <= puVar17 && (long)puVar17 - (long)puVar11 != 0) {
        FUN_0010a430();
        pcVar16 = *(code **)PTR_PTR_043722f8;
        if (pcVar16 == (code *)0x0) goto LAB_00125a74;
        pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
        pcVar10 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
        uVar9 = 0x1ec;
        goto LAB_00125a70;
      }
      puVar17 = (ushort *)((long)local_16c + ((long)puVar17 - (long)puVar11));
      puVar11 = local_16c;
      __src = local_16c;
    }
    if (puVar36 < puVar12) {
      puVar32 = puVar36 + 2;
      puVar18 = puVar17;
      puVar31 = puVar23;
      do {
        if (puVar32 <= puVar36) {
          if (puVar7 <= puVar24) {
            if (puVar35 <= puVar24 && (long)puVar24 - (long)puVar35 != 0) {
              FUN_0010a430();
              pcVar16 = *(code **)PTR_PTR_043722f8;
              if (pcVar16 == (code *)0x0) goto LAB_00125a74;
              pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              pcVar10 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
              uVar9 = 0x1f8;
              goto LAB_00125a70;
            }
            puVar24 = (undefined8 *)((long)local_db + ((long)puVar24 - (long)puVar35));
            puVar7 = local_db;
            puVar35 = local_db;
          }
          puVar32 = puVar36 + 2;
          if (__src <= puVar18) {
            if (puVar11 <= puVar18 && (long)puVar18 - (long)puVar11 != 0) {
              FUN_0010a430();
              pcVar16 = *(code **)PTR_PTR_043722f8;
              if (pcVar16 == (code *)0x0) goto LAB_00125a74;
              pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
              pcVar10 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
              uVar9 = 0x1f9;
              goto LAB_00125a70;
            }
            puVar18 = (ushort *)((long)local_16c + ((long)puVar18 - (long)puVar11));
            puVar11 = local_16c;
            __src = local_16c;
          }
        }
        puVar15 = (ulong *)((long)puVar36 + 1);
        bVar6 = (byte)*puVar36;
        if (0x17 < bVar6) {
          if (param_3 < puVar31 + 1) {
            FUN_0010a430();
            pcVar16 = *(code **)PTR_PTR_043722f8;
            if (pcVar16 == (code *)0x0) goto LAB_00125a74;
            pcVar10 = "OODLE ERROR : corruption : (to_ptr+8 <= overrun_chunk_end)\n";
          }
          else {
            uVar33 = (bVar6 >> 7) - 1;
            puVar30 = (undefined8 *)((ulong)bVar6 & 7);
            uVar25 = -(uint)*puVar18 & uVar33 | (uint)uVar34 & (uVar33 ^ 0xffffffff);
            uVar34 = (ulong)uVar25;
            *puVar31 = *puVar24;
            puVar31 = (undefined8 *)((long)puVar31 + (long)puVar30);
            puVar28 = (undefined8 *)((long)puVar31 + (long)(int)uVar25);
            if (puVar28 < param_4) {
              FUN_0010a430();
              pcVar16 = *(code **)PTR_PTR_043722f8;
              if (pcVar16 == (code *)0x0) goto LAB_00125a74;
              pcVar10 = "OODLE ERROR : corruption : mp >= window_base\n";
            }
            else {
              if (puVar31 + 2 <= param_3) {
                puVar17 = (ushort *)((long)puVar18 + (ulong)(uVar33 & 2));
                *puVar31 = *puVar28;
                puVar24 = (undefined8 *)((long)puVar24 + (long)puVar30);
                puVar23 = (undefined8 *)((long)puVar31 + ((ulong)(bVar6 >> 3) & 0xf));
                puVar31[1] = puVar28[1];
                goto LAB_001256d8;
              }
              FUN_0010a430();
              pcVar16 = *(code **)PTR_PTR_043722f8;
              if (pcVar16 == (code *)0x0) goto LAB_00125a74;
              pcVar10 = "OODLE ERROR : corruption : (to_ptr+16 <= overrun_chunk_end)\n";
            }
          }
          pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
          uVar9 = 0x200;
          goto LAB_00125a70;
        }
        if (2 < bVar6) {
          return 0;
        }
        if (bVar6 == 0) {
          if (local_1d0 < puVar14) {
            puVar17 = (ushort *)((long)local_1d0 + 1);
            uVar27 = (ulong)(byte)*local_1d0;
            if (uVar27 < 0xfc) {
              local_1d0 = puVar17;
            }
            else if (puVar14 < (ushort *)((long)local_1d0 + 3U)) {
              uVar27 = 0;
              local_1d0 = puVar17;
            }
            else {
              uVar27 = uVar27 + (ulong)*puVar17 * 4;
              local_1d0 = (ushort *)((long)local_1d0 + 3U);
            }
          }
          else {
            uVar27 = 0;
          }
          lVar19 = uVar27 + 0x40;
          if ((long)puVar2 - (long)puVar31 < lVar19) goto LAB_00125d14;
          puVar23 = (undefined8 *)((long)puVar35 - (long)puVar24);
          if ((long)puVar23 < lVar19) goto LAB_00125d40;
          uVar27 = uVar27 + 0x2f;
          uVar25 = (int)(uVar27 >> 4) + 1;
          lVar29 = lVar19;
          if ((uVar25 & 7) != 0) {
            lVar29 = 0;
            lVar21 = -((ulong)uVar25 & 7);
            do {
              puVar23 = (undefined8 *)((long)puVar24 + lVar29);
              uVar9 = puVar23[1];
              puVar30 = (undefined8 *)((long)puVar31 + lVar29);
              lVar29 = lVar29 + 0x10;
              lVar21 = lVar21 + 1;
              *puVar30 = *puVar23;
              puVar30[1] = uVar9;
            } while (lVar21 != 0);
            puVar31 = (undefined8 *)((long)puVar31 + lVar29);
            puVar24 = (undefined8 *)((long)puVar24 + lVar29);
            puVar30 = puVar31 + -2;
            puVar23 = puVar24 + -2;
            lVar29 = lVar19 - lVar29;
          }
          if (0x6f < uVar27) {
            puVar24 = puVar24 + -2;
            puVar31 = puVar31 + -2;
            do {
              uVar9 = puVar24[3];
              puVar30 = puVar31 + 0x10;
              puVar31[2] = puVar24[2];
              puVar31[3] = uVar9;
              lVar29 = lVar29 + -0x80;
              uVar9 = puVar24[5];
              puVar31[4] = puVar24[4];
              puVar31[5] = uVar9;
              uVar9 = puVar24[7];
              puVar31[6] = puVar24[6];
              puVar31[7] = uVar9;
              uVar9 = puVar24[9];
              puVar31[8] = puVar24[8];
              puVar31[9] = uVar9;
              uVar9 = puVar24[0xb];
              puVar31[10] = puVar24[10];
              puVar31[0xb] = uVar9;
              uVar9 = puVar24[0xd];
              puVar31[0xc] = puVar24[0xc];
              puVar31[0xd] = uVar9;
              uVar9 = puVar24[0xf];
              puVar31[0xe] = puVar24[0xe];
              puVar31[0xf] = uVar9;
              puVar23 = puVar24 + 0x10;
              uVar9 = puVar24[0x11];
              puVar31[0x10] = *puVar23;
              puVar31[0x11] = uVar9;
              puVar24 = puVar23;
              puVar31 = puVar30;
            } while (0x10 < lVar29);
          }
          lVar19 = lVar19 - (uVar27 & 0xffff0);
          puVar24 = (undefined8 *)((long)puVar23 + lVar19);
          puVar23 = (undefined8 *)((long)puVar30 + lVar19);
          uVar9 = puVar24[-1];
          puVar23[-2] = puVar24[-2];
          puVar23[-1] = uVar9;
          puVar17 = puVar18;
        }
        else {
          if (bVar6 != 1) {
            return 0;
          }
          if (local_1d0 < puVar14) {
            puVar17 = (ushort *)((long)local_1d0 + 1);
            uVar34 = (ulong)(byte)*local_1d0;
            if (uVar34 < 0xfc) {
              local_1d0 = puVar17;
            }
            else if (puVar14 < (ushort *)((long)local_1d0 + 3U)) {
              uVar34 = 0;
              local_1d0 = puVar17;
            }
            else {
              uVar34 = uVar34 + (ulong)*puVar17 * 4;
              local_1d0 = (ushort *)((long)local_1d0 + 3U);
            }
          }
          else {
            uVar34 = 0;
          }
          if ((long)puVar2 - (long)puVar31 < (long)(uVar34 + 99)) {
            if ((long)puVar2 - (long)puVar31 < (long)(uVar34 + 0x5b)) goto LAB_00125dc4;
            if ((long)param_3 - (long)puVar31 < (long)(uVar34 + 99)) goto LAB_00125df4;
          }
          puVar17 = puVar18 + 1;
          uVar5 = *puVar18;
          puVar28 = (undefined8 *)((long)puVar31 - (ulong)uVar5);
          if (puVar28 < param_4) goto LAB_00125e20;
          puVar23 = (undefined8 *)((long)puVar31 + uVar34 + 0x5b);
          *puVar31 = *puVar28;
          puVar31[1] = puVar28[1];
          puVar31[2] = puVar28[2];
          puVar31[3] = puVar28[3];
          puVar31[4] = puVar28[4];
          puVar31[5] = puVar28[5];
          puVar31[6] = puVar28[6];
          uVar34 = -(ulong)uVar5;
          puVar31[7] = puVar28[7];
          puVar31 = puVar31 + 8;
          do {
            puVar28 = puVar31 + 1;
            *puVar31 = *(undefined8 *)((long)puVar31 + uVar34);
            puVar31 = puVar28;
          } while (puVar28 < puVar23);
        }
        if (puVar7 <= puVar24) {
          if (puVar35 <= puVar24 && (long)puVar24 - (long)puVar35 != 0) {
            FUN_0010a430();
            pcVar16 = *(code **)PTR_PTR_043722f8;
            if (pcVar16 == (code *)0x0) goto LAB_00125a74;
            pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar10 = "OODLE ERROR : corruption : ( literals_ptr <= literals_end )\n";
            uVar9 = 0x20c;
            goto LAB_00125a70;
          }
          puVar24 = (undefined8 *)((long)local_db + ((long)puVar24 - (long)puVar35));
          puVar7 = local_db;
          puVar35 = local_db;
        }
        puVar32 = (ulong *)((long)puVar36 + 0x11);
        if (__src <= puVar17) {
          if (puVar11 <= puVar17 && (long)puVar17 - (long)puVar11 != 0) {
            FUN_0010a430();
            pcVar16 = *(code **)PTR_PTR_043722f8;
            if (pcVar16 == (code *)0x0) goto LAB_00125a74;
            pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
            pcVar10 = "OODLE ERROR : corruption : ( off16_ptr <= off16_end )\n";
            uVar9 = 0x20d;
            goto LAB_00125a70;
          }
          puVar17 = (ushort *)((long)local_16c + ((long)puVar17 - (long)puVar11));
          puVar11 = local_16c;
          __src = local_16c;
        }
LAB_001256d8:
        uVar25 = (uint)uVar34;
        puVar18 = puVar17;
        puVar31 = puVar23;
        puVar36 = puVar15;
      } while (puVar15 < puVar12);
    }
    if (puVar2 <= puVar23) {
      if (puVar2 < puVar23) {
        return 0;
      }
      lVar19 = (long)puVar17 - (long)puVar11;
      if (puVar11 <= puVar17 && lVar19 != 0) {
        return 0;
      }
LAB_001259e0:
      if (puVar35 <= puVar24 && (long)puVar24 - (long)puVar35 != 0) {
        return 0;
      }
      *param_7 = uVar25;
      *(long *)(param_6 + 0x38) = (long)puVar3 + ((long)puVar24 - (long)puVar35);
      *(long *)(param_6 + 0x48) = (long)puVar4 + lVar19;
      if (puVar14 < local_1d0) {
        return 0;
      }
      *(ushort **)(param_6 + 0x10) = local_1d0;
      return param_5;
    }
    puVar7 = (undefined8 *)((long)puVar24 + ((long)puVar2 - (long)puVar23));
    if (puVar7 <= puVar35) {
      memcpy(puVar23,puVar24,(long)puVar2 - (long)puVar23);
      lVar19 = (long)puVar17 - (long)puVar11;
      puVar24 = puVar7;
      if (puVar11 <= puVar17 && lVar19 != 0) {
        return 0;
      }
      goto LAB_001259e0;
    }
    FUN_0010a430();
    pcVar16 = *(code **)PTR_PTR_043722f8;
    if (pcVar16 == (code *)0x0) goto LAB_00125a74;
    pcVar8 = "v:/devel/projects/oodle2/core/newlzf_decode_parse_outer.inl";
    pcVar10 = "OODLE ERROR : corruption : (literals_ptr+lrl <= literals_end)\n";
    uVar9 = 0x21f;
  }
LAB_00125a70:
  (*pcVar16)(0,pcVar8,uVar9,pcVar10);
LAB_00125a74:
  FUN_0010a450();
  return 0;
LAB_00125d14:
  FUN_0010a430();
  pcVar16 = *(code **)PTR_PTR_043722f8;
  if (pcVar16 == (code *)0x0) goto LAB_00125a74;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(parse_chunk_end-to_ptr))\n";
  uVar9 = 0x2a;
  goto LAB_00125a70;
LAB_00125d40:
  FUN_0010a430();
  pcVar16 = *(code **)PTR_PTR_043722f8;
  if (pcVar16 == (code *)0x0) goto LAB_00125a74;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : (lrl <= rrPtrDiff(literals_end-literals_ptr))\n";
  uVar9 = 0x2b;
  goto LAB_00125a70;
LAB_00125dc4:
  FUN_0010a430();
  pcVar16 = *(code **)PTR_PTR_043722f8;
  if (pcVar16 == (code *)0x0) goto LAB_00125a74;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : ( ml <= rrPtrDiff(parse_chunk_end-to_ptr) )\n";
  uVar9 = 0x80;
  goto LAB_00125a70;
LAB_00125df4:
  FUN_0010a430();
  pcVar16 = *(code **)PTR_PTR_043722f8;
  if (pcVar16 == (code *)0x0) goto LAB_00125a74;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : ( ml+8 <= rrPtrDiff(overrun_chunk_end-to_ptr) )\n";
  uVar9 = 0x81;
  goto LAB_00125a70;
LAB_00125e20:
  FUN_0010a430();
  pcVar16 = *(code **)PTR_PTR_043722f8;
  if (pcVar16 == (code *)0x0) goto LAB_00125a74;
  pcVar8 = "v:/devel/projects/oodle2/core/newlzf_escape_packet.inl";
  pcVar10 = "OODLE ERROR : corruption : mp >= window_base\n";
  uVar9 = 0x92;
  goto LAB_00125a70;
}


