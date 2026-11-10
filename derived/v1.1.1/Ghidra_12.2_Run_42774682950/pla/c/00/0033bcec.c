/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033bcec; name: FUN_0033bcec
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0033bcec(undefined8 *param_1)

{
  long *plVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  size_t __n;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  undefined2 uVar23;
  undefined8 uVar24;
  ulong local_280;
  ulong local_278;
  char *local_270;
  undefined4 local_268;
  ulong local_260;
  undefined8 uStack_258;
  char *local_250;
  undefined4 local_248;
  ulong local_240;
  undefined8 uStack_238;
  char *local_230;
  undefined4 local_228;
  ulong local_220;
  undefined8 uStack_218;
  char *local_210;
  undefined4 local_208;
  ulong local_200;
  undefined8 uStack_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  ulong local_1e0;
  undefined8 uStack_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  ulong local_1c0;
  undefined8 uStack_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  ulong local_1a0;
  undefined8 uStack_198;
  char *local_190;
  undefined4 local_188;
  ulong local_180;
  undefined8 uStack_178;
  char *local_170;
  undefined4 local_168;
  byte local_160;
  undefined7 uStack_15f;
  char cStack_158;
  undefined7 uStack_157;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  ulong local_140;
  undefined8 uStack_138;
  char *local_130;
  undefined4 local_128;
  ulong local_120;
  undefined8 uStack_118;
  char *local_110;
  undefined4 local_108;
  ulong local_100;
  undefined8 uStack_f8;
  char *local_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined7 uStack_df;
  char cStack_d8;
  char acStack_d7 [5];
  undefined2 uStack_d2;
  char cStack_d0;
  char acStack_cf [5];
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined4 local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  undefined4 local_a8;
  byte local_a0;
  char local_9f [8];
  char acStack_97 [6];
  char cStack_91;
  char cStack_90;
  char acStack_8f [6];
  undefined1 uStack_89;
  undefined4 local_88;
  ulong uStack_80;
  long *local_78 [3];
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
                    /* try { // try from 0033bd28 to 0033bdd3 has its CatchHandler @ 0033cc18 */
  uVar11 = std::__next_prime(3);
  uVar18 = param_1[4];
  if (uVar18 < uVar11) {
    FUN_00366f20(param_1 + 3,uVar11);
  }
  else if (uVar11 < uVar18) {
    uVar12 = (ulong)((float)(ulong)param_1[6] / *(float *)(param_1 + 7));
    if ((uVar18 < 3) ||
       (uVar24 = CONCAT17(POPCOUNT((char)(uVar18 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar18 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar18 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar18 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar18 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar18 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar18 >> 8)),POPCOUNT((char)uVar18)))))))),
       uVar23 = NEON_uaddlv(uVar24,1), 1 < (uint)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23))) {
      uVar12 = std::__next_prime(uVar12);
      if (uVar12 <= uVar11) {
        uVar12 = uVar11;
      }
    }
    else {
      if (1 < uVar12) {
        uVar12 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar12 - 1) & 0x3f);
      }
      if (uVar12 <= uVar11) {
        uVar12 = uVar11;
      }
    }
    if (uVar12 < uVar18) {
      FUN_00366f20(param_1 + 3);
    }
  }
  puVar21 = param_1 + 8;
  param_1[9] = 0;
  *puVar21 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[10] = 0;
                    /* try { // try from 0033bdec to 0033be9b has its CatchHandler @ 0033cbb8 */
  uVar11 = std::__next_prime(3);
  uVar18 = param_1[9];
  if (uVar18 < uVar11) {
    FUN_00366f20(puVar21,uVar11);
  }
  else if (uVar11 < uVar18) {
    uVar12 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
    if ((uVar18 < 3) ||
       (uVar24 = CONCAT17(POPCOUNT((char)(uVar18 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar18 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar18 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar18 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar18 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar18 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar18 >> 8)),POPCOUNT((char)uVar18)))))))),
       uVar23 = NEON_uaddlv(uVar24,1), 1 < (uint)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23))) {
      uVar12 = std::__next_prime(uVar12);
      if (uVar12 <= uVar11) {
        uVar12 = uVar11;
      }
    }
    else {
      if (1 < uVar12) {
        uVar12 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar12 - 1) & 0x3f);
      }
      if (uVar12 <= uVar11) {
        uVar12 = uVar11;
      }
    }
    if (uVar12 < uVar18) {
      FUN_00366f20(puVar21);
    }
  }
  puVar21 = param_1 + 0xd;
  param_1[0xe] = 0;
  *puVar21 = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
                    /* try { // try from 0033beb4 to 0033bf63 has its CatchHandler @ 0033cb80 */
  uVar11 = std::__next_prime(3);
  uVar18 = param_1[0xe];
  if (uVar18 < uVar11) {
    FUN_00367294(puVar21,uVar11);
  }
  else if (uVar11 < uVar18) {
    uVar12 = (ulong)((float)(ulong)param_1[0x10] / *(float *)(param_1 + 0x11));
    if ((uVar18 < 3) ||
       (uVar24 = CONCAT17(POPCOUNT((char)(uVar18 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar18 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar18 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar18 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar18 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar18 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar18 >> 8)),POPCOUNT((char)uVar18)))))))),
       uVar23 = NEON_uaddlv(uVar24,1), 1 < (uint)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23))) {
      uVar12 = std::__next_prime(uVar12);
      if (uVar12 <= uVar11) {
        uVar12 = uVar11;
      }
    }
    else {
      if (1 < uVar12) {
        uVar12 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar12 - 1) & 0x3f);
      }
      if (uVar12 <= uVar11) {
        uVar12 = uVar11;
      }
    }
    if (uVar12 < uVar18) {
      FUN_00367294(puVar21);
    }
  }
  plVar20 = param_1 + 0x12;
  param_1[0x13] = 0;
  *plVar20 = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x29] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
                    /* try { // try from 0033bfb4 to 0033c063 has its CatchHandler @ 0033cb44 */
  uVar11 = std::__next_prime(3);
  uVar18 = param_1[0x27];
  if (uVar18 < uVar11) {
    FUN_0036760c(param_1 + 0x26,uVar11);
  }
  else if (uVar11 < uVar18) {
    uVar12 = (ulong)((float)(ulong)param_1[0x29] / *(float *)(param_1 + 0x2a));
    if ((uVar18 < 3) ||
       (uVar24 = CONCAT17(POPCOUNT((char)(uVar18 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar18 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar18 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar18 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar18 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar18 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar18 >> 8)),POPCOUNT((char)uVar18)))))))),
       uVar23 = NEON_uaddlv(uVar24,1), 1 < (uint)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23))) {
      uVar12 = std::__next_prime(uVar12);
      if (uVar12 <= uVar11) {
        uVar12 = uVar11;
      }
    }
    else {
      if (1 < uVar12) {
        uVar12 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar12 - 1) & 0x3f);
      }
      if (uVar12 <= uVar11) {
        uVar12 = uVar11;
      }
    }
    if (uVar12 < uVar18) {
      FUN_0036760c(param_1 + 0x26);
    }
  }
  puVar19 = param_1 + 0x2b;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  param_1[0x2c] = 0;
  *puVar19 = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
                    /* try { // try from 0033c078 to 0033c127 has its CatchHandler @ 0033cb0c */
  uVar11 = std::__next_prime(3);
  uVar18 = param_1[0x2c];
  if (uVar18 < uVar11) {
    FUN_00367994(puVar19,uVar11);
  }
  else if (uVar11 < uVar18) {
    uVar12 = (ulong)((float)(ulong)param_1[0x2e] / *(float *)(param_1 + 0x2f));
    if ((uVar18 < 3) ||
       (uVar24 = CONCAT17(POPCOUNT((char)(uVar18 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar18 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar18 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar18 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar18 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar18 >>
                                                                                      0x10)),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar18 >> 8)),POPCOUNT((char)uVar18)))))))),
       uVar23 = NEON_uaddlv(uVar24,1), 1 < (uint)CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23))) {
      uVar12 = std::__next_prime(uVar12);
      if (uVar12 <= uVar11) {
        uVar12 = uVar11;
      }
    }
    else {
      if (1 < uVar12) {
        uVar12 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar12 - 1) & 0x3f);
      }
      if (uVar12 <= uVar11) {
        uVar12 = uVar11;
      }
    }
    if (uVar12 < uVar18) {
      FUN_00367994(puVar19);
    }
  }
  param_1[0x30] = param_1 + 0x31;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  puVar22 = &local_280;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  puVar9 = PTR_FUN_04373078;
  local_270 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  uVar7 = s_google_protobuf_DoubleValue_038d0997._0_8_;
  uVar6 = _UNK_03888f48;
  uVar11 = _DAT_03888f40;
  uVar5 = CONCAT35(s_google_protobuf_DoubleValue_038d0997._16_3_,
                   s_google_protobuf_DoubleValue_038d0997._11_5_);
  local_278 = _UNK_03888f48;
  local_280 = _DAT_03888f40;
  uVar24 = CONCAT53(s_google_protobuf_DoubleValue_038d0997._11_5_,
                    s_google_protobuf_DoubleValue_038d0997._8_3_);
  *(undefined8 *)(local_270 + 0x13) = s_google_protobuf_DoubleValue_038d0997._19_8_;
  *(undefined8 *)(local_270 + 0xb) = uVar5;
  local_270[0x1b] = '\0';
  *(undefined8 *)(local_270 + 8) = uVar24;
  *(undefined8 *)local_270 = uVar7;
  local_268 = 1;
  local_250 = (char *)FUN_002e2e80(puVar9,0x20);
  uVar8 = s_google_protobuf_FloatValue_038e50a9._0_8_;
  uVar7 = _UNK_038897f8;
  uVar18 = _DAT_038897f0;
  uVar5 = CONCAT26(s_google_protobuf_FloatValue_038e50a9._16_2_,
                   s_google_protobuf_FloatValue_038e50a9._10_6_);
  uStack_258 = _UNK_038897f8;
  local_260 = _DAT_038897f0;
  uVar24 = CONCAT62(s_google_protobuf_FloatValue_038e50a9._10_6_,
                    s_google_protobuf_FloatValue_038e50a9._8_2_);
  *(undefined8 *)(local_250 + 0x12) = s_google_protobuf_FloatValue_038e50a9._18_8_;
  *(undefined8 *)(local_250 + 10) = uVar5;
  *(undefined8 *)(local_250 + 8) = uVar24;
  *(undefined8 *)local_250 = uVar8;
  local_250[0x1a] = '\0';
  local_248 = 2;
  local_230 = (char *)FUN_002e2e80(puVar9,0x20);
  uVar8 = s_google_protobuf_Int64Value_03940b19._0_8_;
  uStack_238 = uVar7;
  local_240 = uVar18;
  uVar24 = CONCAT62(s_google_protobuf_Int64Value_03940b19._10_6_,
                    s_google_protobuf_Int64Value_03940b19._8_2_);
  uVar5 = CONCAT26(s_google_protobuf_Int64Value_03940b19._16_2_,
                   s_google_protobuf_Int64Value_03940b19._10_6_);
  *(undefined8 *)(local_230 + 0x12) = s_google_protobuf_Int64Value_03940b19._18_8_;
  *(undefined8 *)(local_230 + 10) = uVar5;
  local_230[0x1a] = '\0';
  *(undefined8 *)(local_230 + 8) = uVar24;
  *(undefined8 *)local_230 = uVar8;
  local_228 = 3;
  local_210 = (char *)FUN_002e2e80(puVar9,0x20);
  uVar8 = s_google_protobuf_UInt64Value_03924b56._0_8_;
  uStack_218 = uVar6;
  local_220 = uVar11;
  uVar24 = CONCAT53(s_google_protobuf_UInt64Value_03924b56._11_5_,
                    s_google_protobuf_UInt64Value_03924b56._8_3_);
  uVar5 = CONCAT35(s_google_protobuf_UInt64Value_03924b56._16_3_,
                   s_google_protobuf_UInt64Value_03924b56._11_5_);
  *(undefined8 *)(local_210 + 0x13) = s_google_protobuf_UInt64Value_03924b56._19_8_;
  *(undefined8 *)(local_210 + 0xb) = uVar5;
  local_210[0x1b] = '\0';
  *(undefined8 *)(local_210 + 8) = uVar24;
  *(undefined8 *)local_210 = uVar8;
  local_208 = 4;
  local_1f0 = (char *)FUN_002e2e80(puVar9,0x20);
  uVar8 = s_google_protobuf_Int32Value_039a0708._0_8_;
  uStack_1f8 = uVar7;
  local_200 = uVar18;
  uVar24 = CONCAT62(s_google_protobuf_Int32Value_039a0708._10_6_,
                    s_google_protobuf_Int32Value_039a0708._8_2_);
  uVar5 = CONCAT26(s_google_protobuf_Int32Value_039a0708._16_2_,
                   s_google_protobuf_Int32Value_039a0708._10_6_);
  *(undefined8 *)(local_1f0 + 0x12) = s_google_protobuf_Int32Value_039a0708._18_8_;
  *(undefined8 *)(local_1f0 + 10) = uVar5;
  local_1f0[0x1a] = '\0';
  *(undefined8 *)(local_1f0 + 8) = uVar24;
  *(undefined8 *)local_1f0 = uVar8;
  local_1e8 = 5;
  local_1d0 = (char *)FUN_002e2e80(puVar9,0x20);
  uVar8 = s_google_protobuf_UInt32Value_0390fd00._0_8_;
  uStack_1d8 = uVar6;
  local_1e0 = uVar11;
  uVar24 = CONCAT53(s_google_protobuf_UInt32Value_0390fd00._11_5_,
                    s_google_protobuf_UInt32Value_0390fd00._8_3_);
  uVar5 = CONCAT35(s_google_protobuf_UInt32Value_0390fd00._16_3_,
                   s_google_protobuf_UInt32Value_0390fd00._11_5_);
  *(undefined8 *)(local_1d0 + 0x13) = s_google_protobuf_UInt32Value_0390fd00._19_8_;
  *(undefined8 *)(local_1d0 + 0xb) = uVar5;
  local_1d0[0x1b] = '\0';
  *(undefined8 *)(local_1d0 + 8) = uVar24;
  *(undefined8 *)local_1d0 = uVar8;
  local_1c8 = 6;
  local_1b0 = (char *)FUN_002e2e80(puVar9,0x20);
  uVar8 = s_google_protobuf_StringValue_039a0723._0_8_;
  uStack_1b8 = uVar6;
  local_1c0 = uVar11;
  uVar24 = CONCAT53(s_google_protobuf_StringValue_039a0723._11_5_,
                    s_google_protobuf_StringValue_039a0723._8_3_);
  uVar5 = CONCAT35(s_google_protobuf_StringValue_039a0723._16_3_,
                   s_google_protobuf_StringValue_039a0723._11_5_);
  *(undefined8 *)(local_1b0 + 0x13) = s_google_protobuf_StringValue_039a0723._19_8_;
  *(undefined8 *)(local_1b0 + 0xb) = uVar5;
  local_1b0[0x1b] = '\0';
  *(undefined8 *)(local_1b0 + 8) = uVar24;
  *(undefined8 *)local_1b0 = uVar8;
  local_1a8 = 7;
  local_190 = (char *)FUN_002e2e80(puVar9,0x20);
  uVar6 = s_google_protobuf_BytesValue_03917fe2._0_8_;
  uStack_198 = uVar7;
  local_1a0 = uVar18;
  uVar24 = CONCAT62(s_google_protobuf_BytesValue_03917fe2._10_6_,
                    s_google_protobuf_BytesValue_03917fe2._8_2_);
  uVar5 = CONCAT26(s_google_protobuf_BytesValue_03917fe2._16_2_,
                   s_google_protobuf_BytesValue_03917fe2._10_6_);
  *(undefined8 *)(local_190 + 0x12) = s_google_protobuf_BytesValue_03917fe2._18_8_;
  *(undefined8 *)(local_190 + 10) = uVar5;
  local_190[0x1a] = '\0';
  *(undefined8 *)(local_190 + 8) = uVar24;
  *(undefined8 *)local_190 = uVar6;
  local_188 = 8;
  local_170 = (char *)FUN_002e2e80(puVar9,0x20);
  uVar6 = _UNK_03888e88;
  uVar11 = _DAT_03888e80;
  uStack_178 = _UNK_03888e88;
  local_180 = _DAT_03888e80;
  local_170[0x19] = '\0';
  uVar7 = s_google_protobuf_BoolValue_039a86a9._0_8_;
  uVar24 = CONCAT71(s_google_protobuf_BoolValue_039a86a9._9_7_,
                    s_google_protobuf_BoolValue_039a86a9[8]);
  uVar5 = CONCAT17(s_google_protobuf_BoolValue_039a86a9[0x10],
                   s_google_protobuf_BoolValue_039a86a9._9_7_);
  *(undefined8 *)(local_170 + 0x11) = s_google_protobuf_BoolValue_039a86a9._17_8_;
  *(undefined8 *)(local_170 + 9) = uVar5;
  *(undefined8 *)(local_170 + 8) = uVar24;
  *(undefined8 *)local_170 = uVar7;
  local_168 = 9;
  local_160 = 0x26;
  uStack_157 = s_google_protobuf_Any_038d09b3._8_7_;
  uStack_15f = s_google_protobuf_Any_038d09b3._0_7_;
  cStack_158 = s_google_protobuf_Any_038d09b3[7];
  uStack_150 = 0x796e412e;
  uStack_14c = 0;
  local_148 = 10;
  local_130 = (char *)FUN_002e2e80(puVar9,0x20);
  uVar7 = s_google_protobuf_FieldMask_03924b72._0_8_;
  uStack_138 = uVar6;
  local_140 = uVar11;
  uVar24 = CONCAT71(s_google_protobuf_FieldMask_03924b72._9_7_,
                    s_google_protobuf_FieldMask_03924b72[8]);
  uVar5 = CONCAT17(s_google_protobuf_FieldMask_03924b72[0x10],
                   s_google_protobuf_FieldMask_03924b72._9_7_);
  *(undefined8 *)(local_130 + 0x11) = s_google_protobuf_FieldMask_03924b72._17_8_;
  *(undefined8 *)(local_130 + 9) = uVar5;
  *(undefined8 *)(local_130 + 8) = uVar24;
  *(undefined8 *)local_130 = uVar7;
  local_130[0x19] = '\0';
  local_128 = 0xb;
  local_110 = (char *)FUN_002e2e80(puVar9,0x20);
  uStack_118 = _UNK_03889048;
  local_120 = _DAT_03889040;
  *(undefined8 *)(local_110 + 0x10) = s_google_protobuf_Duration_038a08f3._16_8_;
  uVar24 = s_google_protobuf_Duration_038a08f3._0_8_;
  *(undefined8 *)(local_110 + 8) = s_google_protobuf_Duration_038a08f3._8_8_;
  *(undefined8 *)local_110 = uVar24;
  local_110[0x18] = '\0';
  local_108 = 0xc;
  local_f0 = (char *)FUN_002e2e80(puVar9,0x20);
  uStack_f8 = uVar6;
  local_100 = uVar11;
  local_f0[0x19] = '\0';
  uVar7 = s_google_protobuf_Timestamp_03924b8c._0_8_;
  uVar24 = CONCAT71(s_google_protobuf_Timestamp_03924b8c._9_7_,
                    s_google_protobuf_Timestamp_03924b8c[8]);
  uVar5 = CONCAT17(s_google_protobuf_Timestamp_03924b8c[0x10],
                   s_google_protobuf_Timestamp_03924b8c._9_7_);
  *(undefined8 *)(local_f0 + 0x11) = s_google_protobuf_Timestamp_03924b8c._17_8_;
  *(undefined8 *)(local_f0 + 9) = uVar5;
  *(undefined8 *)(local_f0 + 8) = uVar24;
  *(undefined8 *)local_f0 = uVar7;
  local_e8 = 0xd;
  local_e0 = 0x2a;
  uStack_c9 = 0;
  uStack_ca = 0;
  acStack_d7[0] = s_google_protobuf_Value_038be035[8];
  acStack_d7[1] = s_google_protobuf_Value_038be035[9];
  acStack_d7[2] = s_google_protobuf_Value_038be035[10];
  acStack_d7[3] = s_google_protobuf_Value_038be035[0xb];
  acStack_d7[4] = s_google_protobuf_Value_038be035[0xc];
  uStack_df = s_google_protobuf_Value_038be035._0_7_;
  cStack_d8 = s_google_protobuf_Value_038be035[7];
  uStack_d2 = s_google_protobuf_Value_038be035._13_2_;
  cStack_d0 = s_google_protobuf_Value_038be035[0xf];
  acStack_cf[0] = s_google_protobuf_Value_038be035[0x10];
  acStack_cf[1] = s_google_protobuf_Value_038be035[0x11];
  acStack_cf[2] = s_google_protobuf_Value_038be035[0x12];
  acStack_cf[3] = s_google_protobuf_Value_038be035[0x13];
  acStack_cf[4] = s_google_protobuf_Value_038be035[0x14];
  local_c8 = 0xe;
  local_b0 = (char *)FUN_002e2e80(puVar9,0x20);
  uVar7 = s_google_protobuf_ListValue_038eeca7._0_8_;
  uStack_b8 = uVar6;
  local_c0 = uVar11;
  uVar24 = CONCAT71(s_google_protobuf_ListValue_038eeca7._9_7_,
                    s_google_protobuf_ListValue_038eeca7[8]);
  uVar5 = CONCAT17(s_google_protobuf_ListValue_038eeca7[0x10],
                   s_google_protobuf_ListValue_038eeca7._9_7_);
  *(undefined8 *)(local_b0 + 0x11) = s_google_protobuf_ListValue_038eeca7._17_8_;
  *(undefined8 *)(local_b0 + 9) = uVar5;
  local_b0[0x19] = '\0';
  *(undefined8 *)(local_b0 + 8) = uVar24;
  *(undefined8 *)local_b0 = uVar7;
  local_a8 = 0xf;
  local_a0 = 0x2c;
  acStack_8f[0] = s_google_protobuf_Struct_0392e4cd[0x10];
  acStack_8f[1] = s_google_protobuf_Struct_0392e4cd[0x11];
  acStack_8f[2] = s_google_protobuf_Struct_0392e4cd[0x12];
  acStack_8f[3] = s_google_protobuf_Struct_0392e4cd[0x13];
  acStack_8f[4] = s_google_protobuf_Struct_0392e4cd[0x14];
  acStack_8f[5] = s_google_protobuf_Struct_0392e4cd[0x15];
  acStack_97[0] = s_google_protobuf_Struct_0392e4cd[8];
  acStack_97[1] = s_google_protobuf_Struct_0392e4cd[9];
  acStack_97[2] = s_google_protobuf_Struct_0392e4cd[10];
  acStack_97[3] = s_google_protobuf_Struct_0392e4cd[0xb];
  acStack_97[4] = s_google_protobuf_Struct_0392e4cd[0xc];
  acStack_97[5] = s_google_protobuf_Struct_0392e4cd[0xd];
  cStack_91 = s_google_protobuf_Struct_0392e4cd[0xe];
  cStack_90 = s_google_protobuf_Struct_0392e4cd[0xf];
  local_9f[0] = s_google_protobuf_Struct_0392e4cd[0];
  local_9f[1] = s_google_protobuf_Struct_0392e4cd[1];
  local_9f[2] = s_google_protobuf_Struct_0392e4cd[2];
  local_9f[3] = s_google_protobuf_Struct_0392e4cd[3];
  local_9f[4] = s_google_protobuf_Struct_0392e4cd[4];
  local_9f[5] = s_google_protobuf_Struct_0392e4cd[5];
  local_9f[6] = s_google_protobuf_Struct_0392e4cd[6];
  local_9f[7] = s_google_protobuf_Struct_0392e4cd[7];
  plVar1 = param_1 + 0x14;
  uStack_89 = 0;
  local_88 = 0x10;
  do {
    uVar11 = puVar22[1];
    pbVar3 = (byte *)puVar22[2];
    if (((byte)*puVar22 & 1) == 0) {
      pbVar3 = (byte *)((long)puVar22 + 1);
      uVar11 = (ulong)(byte)((byte)*puVar22 >> 1);
    }
                    /* try { // try from 0033c598 to 0033c59f has its CatchHandler @ 0033d3fc */
    puVar13 = (undefined8 *)FUN_008e8ed4(local_78,pbVar3,uVar11);
    puVar19 = (undefined8 *)param_1[0x13];
    if (puVar19 != (undefined8 *)0x0) {
      uVar24 = CONCAT17(POPCOUNT((char)((ulong)puVar19 >> 0x38)),
                        CONCAT16(POPCOUNT((char)((ulong)puVar19 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)((ulong)puVar19 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)((ulong)puVar19 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)((ulong)puVar19 >> 0x18))
                                                            ,CONCAT12(POPCOUNT((char)((ulong)puVar19
                                                                                     >> 0x10)),
                                                                      CONCAT11(POPCOUNT((char)((
                                                  ulong)puVar19 >> 8)),POPCOUNT((char)puVar19)))))))
                       );
      uVar23 = NEON_uaddlv(uVar24,1);
      uVar11 = CONCAT62((int6)((ulong)uVar24 >> 0x10),uVar23) & 0xffffffff;
      if (uVar11 < 2) {
        puVar21 = (undefined8 *)((long)puVar19 - 1U & (ulong)puVar13);
        plVar15 = *(long **)(*plVar20 + (long)puVar21 * 8);
      }
      else {
        puVar21 = puVar13;
        if (puVar19 <= puVar13) {
          uVar18 = 0;
          if (puVar19 != (undefined8 *)0x0) {
            uVar18 = (ulong)puVar13 / (ulong)puVar19;
          }
          puVar21 = (undefined8 *)((long)puVar13 - uVar18 * (long)puVar19);
        }
        plVar15 = *(long **)(*plVar20 + (long)puVar21 * 8);
      }
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        pbVar3 = (byte *)((long)puVar22 + 1);
        __n = (ulong)(byte)((byte)*puVar22 >> 1);
        if (((byte)*puVar22 & 1) != 0) {
          pbVar3 = (byte *)puVar22[2];
          __n = puVar22[1];
        }
        if (uVar11 < 2) {
          if (__n == 0) {
            do {
              if ((undefined8 *)plVar15[1] != puVar13 &&
                  (undefined8 *)((ulong)plVar15[1] & (long)puVar19 - 1U) != puVar21) break;
              uVar11 = (ulong)(*(byte *)(plVar15 + 2) >> 1);
              if ((*(byte *)(plVar15 + 2) & 1) != 0) {
                uVar11 = plVar15[3];
              }
              if (uVar11 == 0) goto LAB_0033c574;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          else {
            do {
              if ((undefined8 *)plVar15[1] != puVar13 &&
                  (undefined8 *)((ulong)plVar15[1] & (long)puVar19 - 1U) != puVar21) break;
              bVar4 = *(byte *)(plVar15 + 2);
              uVar11 = (ulong)(bVar4 >> 1);
              sVar2 = uVar11;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar15[3];
              }
              if (sVar2 == __n) {
                if ((bVar4 & 1) == 0) {
                  pbVar16 = (byte *)((long)plVar15 + 0x11);
                  pbVar17 = pbVar3;
                  while (*pbVar16 == *pbVar17) {
                    uVar11 = uVar11 - 1;
                    pbVar16 = pbVar16 + 1;
                    pbVar17 = pbVar17 + 1;
                    if (uVar11 == 0) goto LAB_0033c574;
                  }
                }
                else {
                  iVar10 = memcmp((void *)plVar15[4],pbVar3,__n);
                  if (iVar10 == 0) goto LAB_0033c574;
                }
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
        else if (__n == 0) {
          do {
            puVar14 = (undefined8 *)plVar15[1];
            if (puVar14 != puVar13) {
              if (puVar19 <= puVar14) {
                uVar11 = 0;
                if (puVar19 != (undefined8 *)0x0) {
                  uVar11 = (ulong)puVar14 / (ulong)puVar19;
                }
                puVar14 = (undefined8 *)((long)puVar14 - uVar11 * (long)puVar19);
              }
              if (puVar14 != puVar21) break;
            }
            uVar11 = (ulong)(*(byte *)(plVar15 + 2) >> 1);
            if ((*(byte *)(plVar15 + 2) & 1) != 0) {
              uVar11 = plVar15[3];
            }
            if (uVar11 == 0) goto LAB_0033c574;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            puVar14 = (undefined8 *)plVar15[1];
            if (puVar14 != puVar13) {
              if (puVar19 <= puVar14) {
                uVar11 = 0;
                if (puVar19 != (undefined8 *)0x0) {
                  uVar11 = (ulong)puVar14 / (ulong)puVar19;
                }
                puVar14 = (undefined8 *)((long)puVar14 - uVar11 * (long)puVar19);
              }
              if (puVar14 != puVar21) break;
            }
            bVar4 = *(byte *)(plVar15 + 2);
            uVar11 = (ulong)(bVar4 >> 1);
            sVar2 = uVar11;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar15[3];
            }
            if (sVar2 == __n) {
              if ((bVar4 & 1) == 0) {
                pbVar16 = (byte *)((long)plVar15 + 0x11);
                pbVar17 = pbVar3;
                while (*pbVar16 == *pbVar17) {
                  uVar11 = uVar11 - 1;
                  pbVar16 = pbVar16 + 1;
                  pbVar17 = pbVar17 + 1;
                  if (uVar11 == 0) goto LAB_0033c574;
                }
              }
              else {
                iVar10 = memcmp((void *)plVar15[4],pbVar3,__n);
                if (iVar10 == 0) goto LAB_0033c574;
              }
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
                    /* try { // try from 0033c670 to 0033c683 has its CatchHandler @ 0033ccc8 */
    FUN_00367c6c(local_78,plVar20,puVar13,puVar22);
    if ((puVar19 == (undefined8 *)0x0) ||
       (*(float *)(param_1 + 0x16) * (float)puVar19 < (float)(param_1[0x15] + 1))) {
      uVar11 = (ulong)(puVar19 < (undefined8 *)0x3 || ((ulong)puVar19 & (long)puVar19 - 1U) != 0) |
               (long)puVar19 << 1;
      uVar18 = (ulong)((float)(param_1[0x15] + 1) / *(float *)(param_1 + 0x16));
      if (uVar18 <= uVar11) {
        uVar18 = uVar11;
      }
                    /* try { // try from 0033c730 to 0033c737 has its CatchHandler @ 0033cc7c */
      FUN_00367d90(plVar20,uVar18);
      puVar19 = (undefined8 *)param_1[0x13];
      if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
        puVar21 = (undefined8 *)((long)puVar19 - 1U & (ulong)puVar13);
        plVar15 = *(long **)(*plVar20 + (long)puVar21 * 8);
        goto joined_r0x0033c75c;
      }
      if (puVar13 < puVar19) {
        plVar15 = *(long **)(*plVar20 + (long)puVar13 * 8);
        puVar21 = puVar13;
        goto joined_r0x0033c75c;
      }
      uVar11 = 0;
      if (puVar19 != (undefined8 *)0x0) {
        uVar11 = (ulong)puVar13 / (ulong)puVar19;
      }
      puVar21 = (undefined8 *)((long)puVar13 - uVar11 * (long)puVar19);
      plVar15 = *(long **)(*plVar20 + (long)puVar21 * 8);
      if (plVar15 == (long *)0x0) goto LAB_0033c6b4;
LAB_0033c554:
      *local_78[0] = *plVar15;
      *plVar15 = (long)local_78[0];
    }
    else {
      plVar15 = *(long **)(*plVar20 + (long)puVar21 * 8);
joined_r0x0033c75c:
      if (plVar15 != (long *)0x0) goto LAB_0033c554;
LAB_0033c6b4:
      *local_78[0] = *plVar1;
      *plVar1 = (long)local_78[0];
      *(long **)(*plVar20 + (long)puVar21 * 8) = plVar1;
      if (*local_78[0] != 0) {
        puVar13 = *(undefined8 **)(*local_78[0] + 8);
        if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
          puVar13 = (undefined8 *)((ulong)puVar13 & (long)puVar19 - 1U);
        }
        else if (puVar19 <= puVar13) {
          uVar11 = 0;
          if (puVar19 != (undefined8 *)0x0) {
            uVar11 = (ulong)puVar13 / (ulong)puVar19;
          }
          puVar13 = (undefined8 *)((long)puVar13 - uVar11 * (long)puVar19);
        }
        *(long **)(*plVar20 + (long)puVar13 * 8) = local_78[0];
      }
    }
    param_1[0x15] = param_1[0x15] + 1;
LAB_0033c574:
    puVar22 = puVar22 + 4;
    if (puVar22 == &uStack_80) {
      if ((local_a0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_89,CONCAT61(acStack_8f,cStack_90)));
      }
      if ((local_c0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_b0);
      }
      if ((local_e0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,
                     CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT51(acStack_cf,cStack_d0))));
      }
      if ((local_100 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_f0);
      }
      if ((local_120 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_110);
      }
      if ((local_140 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_130);
      }
      if ((local_160 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,CONCAT44(uStack_14c,uStack_150));
      }
      if ((local_180 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_170);
      }
      if ((local_1a0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_190);
      }
      if ((local_1c0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_1b0);
      }
      if ((local_1e0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_1d0);
      }
      if ((local_200 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_1f0);
      }
      if ((local_220 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_210);
      }
      if ((local_240 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_230);
      }
      if ((local_260 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_250);
      }
      if ((local_280 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_270);
      }
      return;
    }
  } while( true );
}


