/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e78d4; name: FUN_003e78d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003e78d4(undefined4 *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  void *__dest;
  long lVar7;
  long *plVar8;
  __tree_node_base *p_Var9;
  ulong __n;
  __tree_node_base *p_Var10;
  void *__src;
  ulong uVar11;
  undefined1 auVar12 [16];
  ulong local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  byte local_240;
  undefined5 uStack_23f;
  char cStack_23a;
  char cStack_239;
  char cStack_238;
  undefined4 uStack_237;
  char cStack_233;
  char cStack_232;
  char cStack_231;
  char local_230;
  undefined1 uStack_22f;
  undefined6 uStack_22e;
  undefined4 local_228;
  ulong local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 *puStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  ulong uStack_1b0;
  void *local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  long *local_168;
  long local_160;
  long local_158;
  ulong local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  ulong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long *local_118;
  long local_110;
  long lStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  __tree_node_base *local_b0;
  __tree_node_base *local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  long local_78;
  long local_70;
  __tree_node_base *local_68;
  __tree_node_base *local_60;
  long local_58;
  
  local_58 = 0;
  local_60 = (__tree_node_base *)0x0;
  local_68 = (__tree_node_base *)&local_60;
  if (*(long *)(param_2 + 0x40) != 0) {
                    /* try { // try from 003e7910 to 003e7917 has its CatchHandler @ 003e8d78 */
    FUN_003e5690(&local_150);
    local_240 = 0x1c;
    uStack_23f = s_streamsStarted_038aae5c._0_5_;
    cStack_23a = s_streamsStarted_038aae5c[5];
    local_230 = '\0';
    uStack_22f = 0;
    uStack_22e = 0;
    cStack_231 = '\0';
    cStack_239 = s_streamsStarted_038aae5c[6];
    cStack_238 = s_streamsStarted_038aae5c[7];
    uStack_237 = s_streamsStarted_038aae5c._8_4_;
    cStack_233 = s_streamsStarted_038aae5c[0xc];
    cStack_232 = s_streamsStarted_038aae5c[0xd];
                    /* try { // try from 003e7940 to 003e794f has its CatchHandler @ 003e8d40 */
    puVar5 = (undefined8 *)FUN_003ea500(&local_68,&local_80,&local_240);
    p_Var9 = (__tree_node_base *)*puVar5;
    if (p_Var9 == (__tree_node_base *)0x0) {
      p_Var9 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(ulong *)(p_Var9 + 0x30) = CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230));
      *(ulong *)(p_Var9 + 0x28) =
           CONCAT17(cStack_231,
                    CONCAT16(cStack_232,CONCAT15(cStack_233,CONCAT41(uStack_237,cStack_238))));
      *(ulong *)(p_Var9 + 0x20) =
           CONCAT17(cStack_239,CONCAT16(cStack_23a,CONCAT51(uStack_23f,local_240)));
      cStack_238 = '\0';
      uStack_237 = 0;
      cStack_233 = '\0';
      cStack_232 = '\0';
      cStack_231 = '\0';
      local_230 = '\0';
      uStack_22f = 0;
      uStack_22e = 0;
      local_240 = 0;
      uStack_23f._0_1_ = '\0';
      uStack_23f._1_1_ = '\0';
      uStack_23f._2_1_ = '\0';
      uStack_23f._3_1_ = '\0';
      uStack_23f._4_1_ = '\0';
      cStack_23a = '\0';
      cStack_239 = '\0';
      *(undefined8 *)(p_Var9 + 0x60) = 0;
      *(undefined8 *)(p_Var9 + 0x58) = 0;
      *(undefined8 *)(p_Var9 + 0x68) = 0;
      *(undefined8 *)(p_Var9 + 0x70) = 0;
      *(__tree_node_base **)(p_Var9 + 0x58) = p_Var9 + 0x60;
      *(undefined8 *)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      *(undefined8 *)(p_Var9 + 0x40) = 0;
      *(undefined8 *)(p_Var9 + 0x38) = 0;
      *(undefined8 *)(p_Var9 + 0x78) = 0;
      *(undefined8 *)(p_Var9 + 0x80) = 0;
      *(long **)(p_Var9 + 0x10) = local_80;
      *(undefined8 *)p_Var9 = 0;
      *(undefined8 *)(p_Var9 + 8) = 0;
      *puVar5 = p_Var9;
      if (*(__tree_node_base **)local_68 == (__tree_node_base *)0x0) {
        p_Var10 = p_Var9;
      }
      else {
        p_Var10 = (__tree_node_base *)*puVar5;
        local_68 = *(__tree_node_base **)local_68;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_60,p_Var10);
      local_58 = local_58 + 1;
    }
    p_Var10 = p_Var9 + 0x40;
    *(undefined4 *)(p_Var9 + 0x38) = 4;
    if (((byte)*p_Var10 & 1) == 0) {
      *(undefined2 *)p_Var10 = 0;
    }
    else {
      **(undefined1 **)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      if (((byte)p_Var9[0x40] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var9 + 0x50));
        *(undefined8 *)(p_Var9 + 0x40) = 0;
      }
    }
    *(undefined8 *)(p_Var9 + 0x50) = local_140;
    *(undefined8 *)(p_Var9 + 0x48) = uStack_148;
    *(ulong *)p_Var10 = local_150;
    uStack_148 = 0;
    local_140 = 0;
    local_150 = 0;
    if (((local_240 & 1) != 0) &&
       (FUN_002e2ea0(PTR_LAB_04373088,CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230))),
       (local_150 & 1) != 0)) {
      FUN_002e2ea0(PTR_LAB_04373088,local_140);
    }
    if (*(double *)(param_2 + 0x70) != 0.0) {
                    /* try { // try from 003e7a84 to 003e7a8f has its CatchHandler @ 003e8d88 */
      auVar12 = FUN_002eee50();
      FUN_002ef4e0(auVar12._0_8_,auVar12._8_8_,1);
                    /* try { // try from 003e7a90 to 003e7a97 has its CatchHandler @ 003e8c90 */
      FUN_002ec330(&local_150);
      cStack_238 = 0;
      uStack_237 = 0;
      cStack_233 = 0;
      cStack_232 = 0;
      cStack_231 = 0;
      local_230 = 0;
      uStack_22f = 0;
      uStack_22e = 0;
      local_240 = 0;
      uStack_23f = 0;
      cStack_23a = 0;
      cStack_239 = 0;
      pcVar6 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
      uVar4 = s_lastLocalStreamCreatedTimestamp_03937392._0_8_;
      uVar2 = CONCAT17(s_lastLocalStreamCreatedTimestamp_03937392[0xf],
                       s_lastLocalStreamCreatedTimestamp_03937392._8_7_);
      local_230 = (char)pcVar6;
      uStack_22f = (undefined1)((ulong)pcVar6 >> 8);
      uStack_22e = (undefined6)((ulong)pcVar6 >> 0x10);
      cStack_238 = (char)_UNK_03889558;
      uStack_237 = (undefined4)((ulong)_UNK_03889558 >> 8);
      cStack_233 = (char)((ulong)_UNK_03889558 >> 0x28);
      cStack_232 = (char)((ulong)_UNK_03889558 >> 0x30);
      cStack_231 = (char)((ulong)_UNK_03889558 >> 0x38);
      local_240 = (byte)_DAT_03889550;
      uStack_23f = (undefined5)((ulong)_DAT_03889550 >> 8);
      cStack_23a = (char)((ulong)_DAT_03889550 >> 0x30);
      cStack_239 = (char)((ulong)_DAT_03889550 >> 0x38);
      uVar3 = CONCAT71(s_lastLocalStreamCreatedTimestamp_03937392._16_7_,
                       s_lastLocalStreamCreatedTimestamp_03937392[0xf]);
      *(undefined8 *)(pcVar6 + 0x17) = s_lastLocalStreamCreatedTimestamp_03937392._23_8_;
      *(undefined8 *)(pcVar6 + 0xf) = uVar3;
      *(undefined8 *)(pcVar6 + 8) = uVar2;
      *(undefined8 *)pcVar6 = uVar4;
      pcVar6[0x1f] = '\0';
                    /* try { // try from 003e7adc to 003e7aeb has its CatchHandler @ 003e8c80 */
      puVar5 = (undefined8 *)FUN_003ea500(&local_68,&local_80,&local_240);
      p_Var9 = (__tree_node_base *)*puVar5;
      if (p_Var9 == (__tree_node_base *)0x0) {
        p_Var9 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
        *(ulong *)(p_Var9 + 0x30) = CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230));
        *(ulong *)(p_Var9 + 0x28) =
             CONCAT17(cStack_231,
                      CONCAT16(cStack_232,CONCAT15(cStack_233,CONCAT41(uStack_237,cStack_238))));
        *(ulong *)(p_Var9 + 0x20) =
             CONCAT17(cStack_239,CONCAT16(cStack_23a,CONCAT51(uStack_23f,local_240)));
        cStack_238 = '\0';
        uStack_237 = 0;
        cStack_233 = '\0';
        cStack_232 = '\0';
        cStack_231 = '\0';
        local_230 = '\0';
        uStack_22f = 0;
        uStack_22e = 0;
        local_240 = 0;
        uStack_23f._0_1_ = '\0';
        uStack_23f._1_1_ = '\0';
        uStack_23f._2_1_ = '\0';
        uStack_23f._3_1_ = '\0';
        uStack_23f._4_1_ = '\0';
        cStack_23a = '\0';
        cStack_239 = '\0';
        *(undefined8 *)(p_Var9 + 0x60) = 0;
        *(undefined8 *)(p_Var9 + 0x58) = 0;
        *(undefined8 *)(p_Var9 + 0x68) = 0;
        *(undefined8 *)(p_Var9 + 0x70) = 0;
        *(__tree_node_base **)(p_Var9 + 0x58) = p_Var9 + 0x60;
        *(undefined8 *)(p_Var9 + 0x50) = 0;
        *(undefined8 *)(p_Var9 + 0x48) = 0;
        *(undefined8 *)(p_Var9 + 0x40) = 0;
        *(undefined8 *)(p_Var9 + 0x38) = 0;
        *(undefined8 *)(p_Var9 + 0x78) = 0;
        *(undefined8 *)(p_Var9 + 0x80) = 0;
        *(long **)(p_Var9 + 0x10) = local_80;
        *(undefined8 *)p_Var9 = 0;
        *(undefined8 *)(p_Var9 + 8) = 0;
        *puVar5 = p_Var9;
        if (*(__tree_node_base **)local_68 == (__tree_node_base *)0x0) {
          p_Var10 = p_Var9;
        }
        else {
          p_Var10 = (__tree_node_base *)*puVar5;
          local_68 = *(__tree_node_base **)local_68;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_60,p_Var10);
        local_58 = local_58 + 1;
      }
      p_Var10 = p_Var9 + 0x40;
      *(undefined4 *)(p_Var9 + 0x38) = 4;
      if (((byte)*p_Var10 & 1) == 0) {
        *(undefined2 *)p_Var10 = 0;
      }
      else {
        **(undefined1 **)(p_Var9 + 0x50) = 0;
        *(undefined8 *)(p_Var9 + 0x48) = 0;
        if (((byte)p_Var9[0x40] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var9 + 0x50));
          *(undefined8 *)(p_Var9 + 0x40) = 0;
        }
      }
      *(undefined8 *)(p_Var9 + 0x50) = local_140;
      *(undefined8 *)(p_Var9 + 0x48) = uStack_148;
      *(ulong *)p_Var10 = local_150;
      uStack_148 = 0;
      local_140 = 0;
      local_150 = 0;
      if (((local_240 & 1) != 0) &&
         (FUN_002e2ea0(PTR_LAB_04373088,CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230))),
         (local_150 & 1) != 0)) {
        FUN_002e2ea0(PTR_LAB_04373088,local_140);
      }
    }
    if (*(double *)(param_2 + 0x78) != 0.0) {
                    /* try { // try from 003e7c20 to 003e7c2b has its CatchHandler @ 003e8d80 */
      auVar12 = FUN_002eee50();
      FUN_002ef4e0(auVar12._0_8_,auVar12._8_8_,1);
                    /* try { // try from 003e7c2c to 003e7c33 has its CatchHandler @ 003e8c78 */
      FUN_002ec330(&local_150);
      cStack_238 = 0;
      uStack_237 = 0;
      cStack_233 = 0;
      cStack_232 = 0;
      cStack_231 = 0;
      local_230 = 0;
      uStack_22f = 0;
      uStack_22e = 0;
      local_240 = 0;
      uStack_23f = 0;
      cStack_23a = 0;
      cStack_239 = 0;
      pcVar6 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
      uVar4 = s_lastRemoteStreamCreatedTimestamp_0395d7c7._24_8_;
      uVar3 = s_lastRemoteStreamCreatedTimestamp_0395d7c7._16_8_;
      uVar2 = s_lastRemoteStreamCreatedTimestamp_0395d7c7._0_8_;
      local_230 = (char)pcVar6;
      uStack_22f = (undefined1)((ulong)pcVar6 >> 8);
      uStack_22e = (undefined6)((ulong)pcVar6 >> 0x10);
      cStack_238 = (char)_UNK_03889718;
      uStack_237 = (undefined4)((ulong)_UNK_03889718 >> 8);
      cStack_233 = (char)((ulong)_UNK_03889718 >> 0x28);
      cStack_232 = (char)((ulong)_UNK_03889718 >> 0x30);
      cStack_231 = (char)((ulong)_UNK_03889718 >> 0x38);
      local_240 = (byte)_DAT_03889710;
      uStack_23f = (undefined5)((ulong)_DAT_03889710 >> 8);
      cStack_23a = (char)((ulong)_DAT_03889710 >> 0x30);
      cStack_239 = (char)((ulong)_DAT_03889710 >> 0x38);
      *(undefined8 *)(pcVar6 + 8) = s_lastRemoteStreamCreatedTimestamp_0395d7c7._8_8_;
      *(undefined8 *)pcVar6 = uVar2;
      *(undefined8 *)(pcVar6 + 0x18) = uVar4;
      *(undefined8 *)(pcVar6 + 0x10) = uVar3;
      pcVar6[0x20] = '\0';
                    /* try { // try from 003e7c70 to 003e7c7f has its CatchHandler @ 003e8c68 */
      puVar5 = (undefined8 *)FUN_003ea500(&local_68,&local_80,&local_240);
      p_Var9 = (__tree_node_base *)*puVar5;
      if (p_Var9 == (__tree_node_base *)0x0) {
        p_Var9 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
        *(ulong *)(p_Var9 + 0x30) = CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230));
        *(ulong *)(p_Var9 + 0x28) =
             CONCAT17(cStack_231,
                      CONCAT16(cStack_232,CONCAT15(cStack_233,CONCAT41(uStack_237,cStack_238))));
        *(ulong *)(p_Var9 + 0x20) =
             CONCAT17(cStack_239,CONCAT16(cStack_23a,CONCAT51(uStack_23f,local_240)));
        cStack_238 = '\0';
        uStack_237 = 0;
        cStack_233 = '\0';
        cStack_232 = '\0';
        cStack_231 = '\0';
        local_230 = '\0';
        uStack_22f = 0;
        uStack_22e = 0;
        local_240 = 0;
        uStack_23f._0_1_ = '\0';
        uStack_23f._1_1_ = '\0';
        uStack_23f._2_1_ = '\0';
        uStack_23f._3_1_ = '\0';
        uStack_23f._4_1_ = '\0';
        cStack_23a = '\0';
        cStack_239 = '\0';
        *(undefined8 *)(p_Var9 + 0x60) = 0;
        *(undefined8 *)(p_Var9 + 0x58) = 0;
        *(undefined8 *)(p_Var9 + 0x68) = 0;
        *(undefined8 *)(p_Var9 + 0x70) = 0;
        *(__tree_node_base **)(p_Var9 + 0x58) = p_Var9 + 0x60;
        *(undefined8 *)(p_Var9 + 0x50) = 0;
        *(undefined8 *)(p_Var9 + 0x48) = 0;
        *(undefined8 *)(p_Var9 + 0x40) = 0;
        *(undefined8 *)(p_Var9 + 0x38) = 0;
        *(undefined8 *)(p_Var9 + 0x78) = 0;
        *(undefined8 *)(p_Var9 + 0x80) = 0;
        *(long **)(p_Var9 + 0x10) = local_80;
        *(undefined8 *)p_Var9 = 0;
        *(undefined8 *)(p_Var9 + 8) = 0;
        *puVar5 = p_Var9;
        if (*(__tree_node_base **)local_68 == (__tree_node_base *)0x0) {
          p_Var10 = p_Var9;
        }
        else {
          p_Var10 = (__tree_node_base *)*puVar5;
          local_68 = *(__tree_node_base **)local_68;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_60,p_Var10);
        local_58 = local_58 + 1;
      }
      p_Var10 = p_Var9 + 0x40;
      *(undefined4 *)(p_Var9 + 0x38) = 4;
      if (((byte)*p_Var10 & 1) == 0) {
        *(undefined2 *)p_Var10 = 0;
      }
      else {
        **(undefined1 **)(p_Var9 + 0x50) = 0;
        *(undefined8 *)(p_Var9 + 0x48) = 0;
        if (((byte)p_Var9[0x40] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var9 + 0x50));
          *(undefined8 *)(p_Var9 + 0x40) = 0;
        }
      }
      *(undefined8 *)(p_Var9 + 0x50) = local_140;
      *(undefined8 *)(p_Var9 + 0x48) = uStack_148;
      *(ulong *)p_Var10 = local_150;
      uStack_148 = 0;
      local_140 = 0;
      local_150 = 0;
      if (((local_240 & 1) != 0) &&
         (FUN_002e2ea0(PTR_LAB_04373088,CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230))),
         (local_150 & 1) != 0)) {
        FUN_002e2ea0(PTR_LAB_04373088,local_140);
      }
    }
  }
  if (*(long *)(param_2 + 0x48) != 0) {
                    /* try { // try from 003e7dac to 003e7db3 has its CatchHandler @ 003e8d38 */
    FUN_003e5690(&local_150);
    local_240 = 0x20;
    uStack_22e = 0;
    uStack_22f = 0;
    uStack_237 = s_streamsSucceeded_03918521._8_4_;
    cStack_233 = s_streamsSucceeded_03918521[0xc];
    cStack_232 = s_streamsSucceeded_03918521[0xd];
    cStack_231 = s_streamsSucceeded_03918521[0xe];
    local_230 = s_streamsSucceeded_03918521[0xf];
    uStack_23f = s_streamsSucceeded_03918521._0_5_;
    cStack_23a = s_streamsSucceeded_03918521[5];
    cStack_239 = s_streamsSucceeded_03918521[6];
    cStack_238 = s_streamsSucceeded_03918521[7];
                    /* try { // try from 003e7dd8 to 003e7de7 has its CatchHandler @ 003e8d28 */
    puVar5 = (undefined8 *)FUN_003ea500(&local_68,&local_80,&local_240);
    p_Var9 = (__tree_node_base *)*puVar5;
    if (p_Var9 == (__tree_node_base *)0x0) {
      p_Var9 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(ulong *)(p_Var9 + 0x30) = CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230));
      *(ulong *)(p_Var9 + 0x28) =
           CONCAT17(cStack_231,
                    CONCAT16(cStack_232,CONCAT15(cStack_233,CONCAT41(uStack_237,cStack_238))));
      *(ulong *)(p_Var9 + 0x20) =
           CONCAT17(cStack_239,CONCAT16(cStack_23a,CONCAT51(uStack_23f,local_240)));
      cStack_238 = '\0';
      uStack_237 = 0;
      cStack_233 = '\0';
      cStack_232 = '\0';
      cStack_231 = '\0';
      local_230 = '\0';
      uStack_22f = 0;
      uStack_22e = 0;
      local_240 = 0;
      uStack_23f._0_1_ = '\0';
      uStack_23f._1_1_ = '\0';
      uStack_23f._2_1_ = '\0';
      uStack_23f._3_1_ = '\0';
      uStack_23f._4_1_ = '\0';
      cStack_23a = '\0';
      cStack_239 = '\0';
      *(undefined8 *)(p_Var9 + 0x60) = 0;
      *(undefined8 *)(p_Var9 + 0x58) = 0;
      *(undefined8 *)(p_Var9 + 0x68) = 0;
      *(undefined8 *)(p_Var9 + 0x70) = 0;
      *(__tree_node_base **)(p_Var9 + 0x58) = p_Var9 + 0x60;
      *(undefined8 *)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      *(undefined8 *)(p_Var9 + 0x40) = 0;
      *(undefined8 *)(p_Var9 + 0x38) = 0;
      *(undefined8 *)(p_Var9 + 0x78) = 0;
      *(undefined8 *)(p_Var9 + 0x80) = 0;
      *(long **)(p_Var9 + 0x10) = local_80;
      *(undefined8 *)p_Var9 = 0;
      *(undefined8 *)(p_Var9 + 8) = 0;
      *puVar5 = p_Var9;
      if (*(__tree_node_base **)local_68 == (__tree_node_base *)0x0) {
        p_Var10 = p_Var9;
      }
      else {
        p_Var10 = (__tree_node_base *)*puVar5;
        local_68 = *(__tree_node_base **)local_68;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_60,p_Var10);
      local_58 = local_58 + 1;
    }
    p_Var10 = p_Var9 + 0x40;
    *(undefined4 *)(p_Var9 + 0x38) = 4;
    if (((byte)*p_Var10 & 1) == 0) {
      *(undefined2 *)p_Var10 = 0;
    }
    else {
      **(undefined1 **)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      if (((byte)p_Var9[0x40] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var9 + 0x50));
        *(undefined8 *)(p_Var9 + 0x40) = 0;
      }
    }
    *(undefined8 *)(p_Var9 + 0x50) = local_140;
    *(undefined8 *)(p_Var9 + 0x48) = uStack_148;
    *(ulong *)p_Var10 = local_150;
    uStack_148 = 0;
    local_140 = 0;
    local_150 = 0;
    if (((local_240 & 1) != 0) &&
       (FUN_002e2ea0(PTR_LAB_04373088,CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230))),
       (local_150 & 1) != 0)) {
      FUN_002e2ea0(PTR_LAB_04373088,local_140);
    }
  }
  if (*(long *)(param_2 + 0x50) != 0) {
                    /* try { // try from 003e7f14 to 003e7f1b has its CatchHandler @ 003e8d20 */
    FUN_003e5690(&local_150);
    cStack_231 = '\0';
    local_240 = 0x1a;
    uStack_23f._0_1_ = s_streamsFailed_0392ea51[0];
    uStack_23f._1_1_ = s_streamsFailed_0392ea51[1];
    uStack_23f._2_1_ = s_streamsFailed_0392ea51[2];
    uStack_23f._3_1_ = s_streamsFailed_0392ea51[3];
    uStack_23f._4_1_ = s_streamsFailed_0392ea51[4];
    local_230 = '\0';
    uStack_22f = 0;
    uStack_22e = 0;
    cStack_232 = '\0';
    cStack_23a = s_streamsFailed_0392ea51[5];
    cStack_239 = s_streamsFailed_0392ea51[6];
    cStack_238 = s_streamsFailed_0392ea51[7];
    uStack_237 = s_streamsFailed_0392ea51._8_4_;
    cStack_233 = s_streamsFailed_0392ea51[0xc];
                    /* try { // try from 003e7f48 to 003e7f57 has its CatchHandler @ 003e8d10 */
    puVar5 = (undefined8 *)FUN_003ea500(&local_68,&local_80,&local_240);
    p_Var9 = (__tree_node_base *)*puVar5;
    if (p_Var9 == (__tree_node_base *)0x0) {
      p_Var9 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(ulong *)(p_Var9 + 0x30) = CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230));
      *(ulong *)(p_Var9 + 0x28) =
           CONCAT17(cStack_231,
                    CONCAT16(cStack_232,CONCAT15(cStack_233,CONCAT41(uStack_237,cStack_238))));
      *(ulong *)(p_Var9 + 0x20) =
           CONCAT17(cStack_239,CONCAT16(cStack_23a,CONCAT51(uStack_23f,local_240)));
      cStack_238 = '\0';
      uStack_237 = 0;
      cStack_233 = '\0';
      cStack_232 = '\0';
      cStack_231 = '\0';
      local_230 = '\0';
      uStack_22f = 0;
      uStack_22e = 0;
      local_240 = 0;
      uStack_23f._0_1_ = '\0';
      uStack_23f._1_1_ = '\0';
      uStack_23f._2_1_ = '\0';
      uStack_23f._3_1_ = '\0';
      uStack_23f._4_1_ = '\0';
      cStack_23a = '\0';
      cStack_239 = '\0';
      *(undefined8 *)(p_Var9 + 0x60) = 0;
      *(undefined8 *)(p_Var9 + 0x58) = 0;
      *(undefined8 *)(p_Var9 + 0x68) = 0;
      *(undefined8 *)(p_Var9 + 0x70) = 0;
      *(__tree_node_base **)(p_Var9 + 0x58) = p_Var9 + 0x60;
      *(undefined8 *)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      *(undefined8 *)(p_Var9 + 0x40) = 0;
      *(undefined8 *)(p_Var9 + 0x38) = 0;
      *(undefined8 *)(p_Var9 + 0x78) = 0;
      *(undefined8 *)(p_Var9 + 0x80) = 0;
      *(long **)(p_Var9 + 0x10) = local_80;
      *(undefined8 *)p_Var9 = 0;
      *(undefined8 *)(p_Var9 + 8) = 0;
      *puVar5 = p_Var9;
      if (*(__tree_node_base **)local_68 == (__tree_node_base *)0x0) {
        p_Var10 = p_Var9;
      }
      else {
        p_Var10 = (__tree_node_base *)*puVar5;
        local_68 = *(__tree_node_base **)local_68;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_60,p_Var10);
      local_58 = local_58 + 1;
    }
    p_Var10 = p_Var9 + 0x40;
    *(undefined4 *)(p_Var9 + 0x38) = 4;
    if (((byte)*p_Var10 & 1) == 0) {
      *(undefined2 *)p_Var10 = 0;
    }
    else {
      **(undefined1 **)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      if (((byte)p_Var9[0x40] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var9 + 0x50));
        *(undefined8 *)(p_Var9 + 0x40) = 0;
      }
    }
    *(undefined8 *)(p_Var9 + 0x50) = local_140;
    *(undefined8 *)(p_Var9 + 0x48) = uStack_148;
    *(ulong *)p_Var10 = local_150;
    uStack_148 = 0;
    local_140 = 0;
    local_150 = 0;
    if (((local_240 & 1) != 0) &&
       (FUN_002e2ea0(PTR_LAB_04373088,CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230))),
       (local_150 & 1) != 0)) {
      FUN_002e2ea0(PTR_LAB_04373088,local_140);
    }
  }
  if (*(long *)(param_2 + 0x58) != 0) {
                    /* try { // try from 003e8084 to 003e808b has its CatchHandler @ 003e8d08 */
    FUN_003e5690(&local_150);
    cStack_232 = 0;
    cStack_231 = 0;
    local_240 = 0x18;
    uStack_237 = 0x746e6553;
    local_230 = 0;
    uStack_22f = 0;
    uStack_22e = 0;
    cStack_233 = 0;
    uStack_23f = s_messagesSent_039848e1._0_5_;
    cStack_23a = s_messagesSent_039848e1[5];
    cStack_239 = s_messagesSent_039848e1[6];
    cStack_238 = s_messagesSent_039848e1[7];
                    /* try { // try from 003e80bc to 003e80cb has its CatchHandler @ 003e8cf8 */
    puVar5 = (undefined8 *)FUN_003ea500(&local_68,&local_80,&local_240);
    p_Var9 = (__tree_node_base *)*puVar5;
    if (p_Var9 == (__tree_node_base *)0x0) {
      p_Var9 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(ulong *)(p_Var9 + 0x30) = CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230));
      *(ulong *)(p_Var9 + 0x28) =
           CONCAT17(cStack_231,
                    CONCAT16(cStack_232,CONCAT15(cStack_233,CONCAT41(uStack_237,cStack_238))));
      *(ulong *)(p_Var9 + 0x20) =
           CONCAT17(cStack_239,CONCAT16(cStack_23a,CONCAT51(uStack_23f,local_240)));
      cStack_238 = '\0';
      uStack_237 = 0;
      cStack_233 = 0;
      cStack_232 = 0;
      cStack_231 = 0;
      local_230 = 0;
      uStack_22f = 0;
      uStack_22e = 0;
      local_240 = 0;
      uStack_23f = 0;
      cStack_23a = '\0';
      cStack_239 = '\0';
      *(undefined8 *)(p_Var9 + 0x60) = 0;
      *(undefined8 *)(p_Var9 + 0x58) = 0;
      *(undefined8 *)(p_Var9 + 0x68) = 0;
      *(undefined8 *)(p_Var9 + 0x70) = 0;
      *(__tree_node_base **)(p_Var9 + 0x58) = p_Var9 + 0x60;
      *(undefined8 *)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      *(undefined8 *)(p_Var9 + 0x40) = 0;
      *(undefined8 *)(p_Var9 + 0x38) = 0;
      *(undefined8 *)(p_Var9 + 0x78) = 0;
      *(undefined8 *)(p_Var9 + 0x80) = 0;
      *(long **)(p_Var9 + 0x10) = local_80;
      *(undefined8 *)p_Var9 = 0;
      *(undefined8 *)(p_Var9 + 8) = 0;
      *puVar5 = p_Var9;
      if (*(__tree_node_base **)local_68 == (__tree_node_base *)0x0) {
        p_Var10 = p_Var9;
      }
      else {
        p_Var10 = (__tree_node_base *)*puVar5;
        local_68 = *(__tree_node_base **)local_68;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_60,p_Var10);
      local_58 = local_58 + 1;
    }
    p_Var10 = p_Var9 + 0x40;
    *(undefined4 *)(p_Var9 + 0x38) = 4;
    if (((byte)*p_Var10 & 1) == 0) {
      *(undefined2 *)p_Var10 = 0;
    }
    else {
      **(undefined1 **)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      if (((byte)p_Var9[0x40] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var9 + 0x50));
        *(undefined8 *)(p_Var9 + 0x40) = 0;
      }
    }
    *(undefined8 *)(p_Var9 + 0x50) = local_140;
    *(undefined8 *)(p_Var9 + 0x48) = uStack_148;
    *(ulong *)p_Var10 = local_150;
    uStack_148 = 0;
    local_140 = 0;
    local_150 = 0;
    if (((local_240 & 1) != 0) &&
       (FUN_002e2ea0(PTR_LAB_04373088,CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230))),
       (local_150 & 1) != 0)) {
      FUN_002e2ea0(PTR_LAB_04373088,local_140);
    }
                    /* try { // try from 003e81f8 to 003e8203 has its CatchHandler @ 003e8ff8 */
    auVar12 = FUN_002eee50(*(undefined8 *)(param_2 + 0x80));
    FUN_002ef4e0(auVar12._0_8_,auVar12._8_8_,1);
                    /* try { // try from 003e8204 to 003e820b has its CatchHandler @ 003e8ce8 */
    FUN_002ec330(&local_150);
    cStack_238 = 0;
    uStack_237 = 0;
    cStack_233 = 0;
    cStack_232 = 0;
    cStack_231 = 0;
    local_230 = 0;
    uStack_22f = 0;
    uStack_22e = 0;
    local_240 = 0;
    uStack_23f = 0;
    cStack_23a = 0;
    cStack_239 = 0;
    pcVar6 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    uVar2 = s_lastMessageSentTimestamp_039a8bd0._0_8_;
    local_230 = (char)pcVar6;
    uStack_22f = (undefined1)((ulong)pcVar6 >> 8);
    uStack_22e = (undefined6)((ulong)pcVar6 >> 0x10);
    cStack_238 = (char)_UNK_03889048;
    uStack_237 = (undefined4)((ulong)_UNK_03889048 >> 8);
    cStack_233 = (char)((ulong)_UNK_03889048 >> 0x28);
    cStack_232 = (char)((ulong)_UNK_03889048 >> 0x30);
    cStack_231 = (char)((ulong)_UNK_03889048 >> 0x38);
    local_240 = (byte)_DAT_03889040;
    uStack_23f = (undefined5)((ulong)_DAT_03889040 >> 8);
    cStack_23a = (char)((ulong)_DAT_03889040 >> 0x30);
    cStack_239 = (char)((ulong)_DAT_03889040 >> 0x38);
    *(undefined8 *)(pcVar6 + 8) = s_lastMessageSentTimestamp_039a8bd0._8_8_;
    *(undefined8 *)pcVar6 = uVar2;
    *(undefined8 *)(pcVar6 + 0x10) = s_lastMessageSentTimestamp_039a8bd0._16_8_;
    pcVar6[0x18] = '\0';
                    /* try { // try from 003e8250 to 003e825f has its CatchHandler @ 003e8cc8 */
    puVar5 = (undefined8 *)FUN_003ea500(&local_68,&local_80,&local_240);
    p_Var9 = (__tree_node_base *)*puVar5;
    if (p_Var9 == (__tree_node_base *)0x0) {
      p_Var9 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(ulong *)(p_Var9 + 0x30) = CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230));
      *(ulong *)(p_Var9 + 0x28) =
           CONCAT17(cStack_231,
                    CONCAT16(cStack_232,CONCAT15(cStack_233,CONCAT41(uStack_237,cStack_238))));
      *(ulong *)(p_Var9 + 0x20) =
           CONCAT17(cStack_239,CONCAT16(cStack_23a,CONCAT51(uStack_23f,local_240)));
      cStack_238 = '\0';
      uStack_237 = 0;
      cStack_233 = '\0';
      cStack_232 = '\0';
      cStack_231 = '\0';
      local_230 = '\0';
      uStack_22f = 0;
      uStack_22e = 0;
      local_240 = 0;
      uStack_23f._0_1_ = '\0';
      uStack_23f._1_1_ = '\0';
      uStack_23f._2_1_ = '\0';
      uStack_23f._3_1_ = '\0';
      uStack_23f._4_1_ = '\0';
      cStack_23a = '\0';
      cStack_239 = '\0';
      *(undefined8 *)(p_Var9 + 0x60) = 0;
      *(undefined8 *)(p_Var9 + 0x58) = 0;
      *(undefined8 *)(p_Var9 + 0x68) = 0;
      *(undefined8 *)(p_Var9 + 0x70) = 0;
      *(__tree_node_base **)(p_Var9 + 0x58) = p_Var9 + 0x60;
      *(undefined8 *)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      *(undefined8 *)(p_Var9 + 0x40) = 0;
      *(undefined8 *)(p_Var9 + 0x38) = 0;
      *(undefined8 *)(p_Var9 + 0x78) = 0;
      *(undefined8 *)(p_Var9 + 0x80) = 0;
      *(long **)(p_Var9 + 0x10) = local_80;
      *(undefined8 *)p_Var9 = 0;
      *(undefined8 *)(p_Var9 + 8) = 0;
      *puVar5 = p_Var9;
      if (*(__tree_node_base **)local_68 == (__tree_node_base *)0x0) {
        p_Var10 = p_Var9;
      }
      else {
        p_Var10 = (__tree_node_base *)*puVar5;
        local_68 = *(__tree_node_base **)local_68;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_60,p_Var10);
      local_58 = local_58 + 1;
    }
    p_Var10 = p_Var9 + 0x40;
    *(undefined4 *)(p_Var9 + 0x38) = 4;
    if (((byte)*p_Var10 & 1) == 0) {
      *(undefined2 *)p_Var10 = 0;
    }
    else {
      **(undefined1 **)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      if (((byte)p_Var9[0x40] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var9 + 0x50));
        *(undefined8 *)(p_Var9 + 0x40) = 0;
      }
    }
    *(undefined8 *)(p_Var9 + 0x50) = local_140;
    *(undefined8 *)(p_Var9 + 0x48) = uStack_148;
    *(ulong *)p_Var10 = local_150;
    uStack_148 = 0;
    local_140 = 0;
    local_150 = 0;
    if (((local_240 & 1) != 0) &&
       (FUN_002e2ea0(PTR_LAB_04373088,CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230))),
       (local_150 & 1) != 0)) {
      FUN_002e2ea0(PTR_LAB_04373088,local_140);
    }
  }
  if (*(long *)(param_2 + 0x60) != 0) {
                    /* try { // try from 003e838c to 003e8393 has its CatchHandler @ 003e8cf0 */
    FUN_003e5690(&local_150);
    local_240 = 0x20;
    uStack_22e = 0;
    uStack_22f = 0;
    uStack_237 = s_messagesReceived_039848ee._8_4_;
    cStack_233 = s_messagesReceived_039848ee[0xc];
    cStack_232 = s_messagesReceived_039848ee[0xd];
    cStack_231 = s_messagesReceived_039848ee[0xe];
    local_230 = s_messagesReceived_039848ee[0xf];
    uStack_23f = s_messagesReceived_039848ee._0_5_;
    cStack_23a = s_messagesReceived_039848ee[5];
    cStack_239 = s_messagesReceived_039848ee[6];
    cStack_238 = s_messagesReceived_039848ee[7];
                    /* try { // try from 003e83b8 to 003e83c7 has its CatchHandler @ 003e8cd8 */
    puVar5 = (undefined8 *)FUN_003ea500(&local_68,&local_80,&local_240);
    p_Var9 = (__tree_node_base *)*puVar5;
    if (p_Var9 == (__tree_node_base *)0x0) {
      p_Var9 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(ulong *)(p_Var9 + 0x30) = CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230));
      *(ulong *)(p_Var9 + 0x28) =
           CONCAT17(cStack_231,
                    CONCAT16(cStack_232,CONCAT15(cStack_233,CONCAT41(uStack_237,cStack_238))));
      *(ulong *)(p_Var9 + 0x20) =
           CONCAT17(cStack_239,CONCAT16(cStack_23a,CONCAT51(uStack_23f,local_240)));
      cStack_238 = '\0';
      uStack_237 = 0;
      cStack_233 = '\0';
      cStack_232 = '\0';
      cStack_231 = '\0';
      local_230 = '\0';
      uStack_22f = 0;
      uStack_22e = 0;
      local_240 = 0;
      uStack_23f = 0;
      cStack_23a = '\0';
      cStack_239 = '\0';
      *(undefined8 *)(p_Var9 + 0x60) = 0;
      *(undefined8 *)(p_Var9 + 0x58) = 0;
      *(undefined8 *)(p_Var9 + 0x68) = 0;
      *(undefined8 *)(p_Var9 + 0x70) = 0;
      *(__tree_node_base **)(p_Var9 + 0x58) = p_Var9 + 0x60;
      *(undefined8 *)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      *(undefined8 *)(p_Var9 + 0x40) = 0;
      *(undefined8 *)(p_Var9 + 0x38) = 0;
      *(undefined8 *)(p_Var9 + 0x78) = 0;
      *(undefined8 *)(p_Var9 + 0x80) = 0;
      *(long **)(p_Var9 + 0x10) = local_80;
      *(undefined8 *)p_Var9 = 0;
      *(undefined8 *)(p_Var9 + 8) = 0;
      *puVar5 = p_Var9;
      if (*(__tree_node_base **)local_68 == (__tree_node_base *)0x0) {
        p_Var10 = p_Var9;
      }
      else {
        p_Var10 = (__tree_node_base *)*puVar5;
        local_68 = *(__tree_node_base **)local_68;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_60,p_Var10);
      local_58 = local_58 + 1;
    }
    p_Var10 = p_Var9 + 0x40;
    *(undefined4 *)(p_Var9 + 0x38) = 4;
    if (((byte)*p_Var10 & 1) == 0) {
      *(undefined2 *)p_Var10 = 0;
    }
    else {
      **(undefined1 **)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      if (((byte)p_Var9[0x40] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var9 + 0x50));
        *(undefined8 *)(p_Var9 + 0x40) = 0;
      }
    }
    *(undefined8 *)(p_Var9 + 0x50) = local_140;
    *(undefined8 *)(p_Var9 + 0x48) = uStack_148;
    *(ulong *)p_Var10 = local_150;
    uStack_148 = 0;
    local_140 = 0;
    local_150 = 0;
    if (((local_240 & 1) != 0) &&
       (FUN_002e2ea0(PTR_LAB_04373088,CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230))),
       (local_150 & 1) != 0)) {
      FUN_002e2ea0(PTR_LAB_04373088,local_140);
    }
                    /* try { // try from 003e84f4 to 003e84ff has its CatchHandler @ 003e8ff0 */
    auVar12 = FUN_002eee50(*(undefined8 *)(param_2 + 0x88));
    FUN_002ef4e0(auVar12._0_8_,auVar12._8_8_,1);
                    /* try { // try from 003e8500 to 003e8507 has its CatchHandler @ 003e8cb8 */
    FUN_002ec330(&local_150);
    cStack_238 = 0;
    uStack_237 = 0;
    cStack_233 = 0;
    cStack_232 = 0;
    cStack_231 = 0;
    local_230 = 0;
    uStack_22f = 0;
    uStack_22e = 0;
    local_240 = 0;
    uStack_23f = 0;
    cStack_23a = 0;
    cStack_239 = 0;
    pcVar6 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    uVar4 = s_lastMessageReceivedTimestamp_03904cfd._0_8_;
    uVar2 = CONCAT44(s_lastMessageReceivedTimestamp_03904cfd._12_4_,
                     s_lastMessageReceivedTimestamp_03904cfd._8_4_);
    local_230 = (char)pcVar6;
    uStack_22f = (undefined1)((ulong)pcVar6 >> 8);
    uStack_22e = (undefined6)((ulong)pcVar6 >> 0x10);
    cStack_238 = (char)_UNK_0388a478;
    uStack_237 = (undefined4)((ulong)_UNK_0388a478 >> 8);
    cStack_233 = (char)((ulong)_UNK_0388a478 >> 0x28);
    cStack_232 = (char)((ulong)_UNK_0388a478 >> 0x30);
    cStack_231 = (char)((ulong)_UNK_0388a478 >> 0x38);
    local_240 = (byte)_DAT_0388a470;
    uStack_23f = (undefined5)((ulong)_DAT_0388a470 >> 8);
    cStack_23a = (char)((ulong)_DAT_0388a470 >> 0x30);
    cStack_239 = (char)((ulong)_DAT_0388a470 >> 0x38);
    uVar3 = CONCAT44(s_lastMessageReceivedTimestamp_03904cfd._16_4_,
                     s_lastMessageReceivedTimestamp_03904cfd._12_4_);
    *(undefined8 *)(pcVar6 + 0x14) = s_lastMessageReceivedTimestamp_03904cfd._20_8_;
    *(undefined8 *)(pcVar6 + 0xc) = uVar3;
    *(undefined8 *)(pcVar6 + 8) = uVar2;
    *(undefined8 *)pcVar6 = uVar4;
    pcVar6[0x1c] = '\0';
                    /* try { // try from 003e854c to 003e855b has its CatchHandler @ 003e8c98 */
    puVar5 = (undefined8 *)FUN_003ea500(&local_68,&local_80,&local_240);
    p_Var9 = (__tree_node_base *)*puVar5;
    if (p_Var9 == (__tree_node_base *)0x0) {
      p_Var9 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(ulong *)(p_Var9 + 0x30) = CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230));
      *(ulong *)(p_Var9 + 0x28) =
           CONCAT17(cStack_231,
                    CONCAT16(cStack_232,CONCAT15(cStack_233,CONCAT41(uStack_237,cStack_238))));
      *(ulong *)(p_Var9 + 0x20) =
           CONCAT17(cStack_239,CONCAT16(cStack_23a,CONCAT51(uStack_23f,local_240)));
      cStack_238 = '\0';
      uStack_237 = 0;
      cStack_233 = '\0';
      cStack_232 = '\0';
      cStack_231 = '\0';
      local_230 = '\0';
      uStack_22f = 0;
      uStack_22e = 0;
      local_240 = 0;
      uStack_23f._0_1_ = '\0';
      uStack_23f._1_1_ = '\0';
      uStack_23f._2_1_ = '\0';
      uStack_23f._3_1_ = '\0';
      uStack_23f._4_1_ = '\0';
      cStack_23a = '\0';
      cStack_239 = '\0';
      *(undefined8 *)(p_Var9 + 0x60) = 0;
      *(undefined8 *)(p_Var9 + 0x58) = 0;
      *(undefined8 *)(p_Var9 + 0x68) = 0;
      *(undefined8 *)(p_Var9 + 0x70) = 0;
      *(__tree_node_base **)(p_Var9 + 0x58) = p_Var9 + 0x60;
      *(undefined8 *)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      *(undefined8 *)(p_Var9 + 0x40) = 0;
      *(undefined8 *)(p_Var9 + 0x38) = 0;
      *(undefined8 *)(p_Var9 + 0x78) = 0;
      *(undefined8 *)(p_Var9 + 0x80) = 0;
      *(long **)(p_Var9 + 0x10) = local_80;
      *(undefined8 *)p_Var9 = 0;
      *(undefined8 *)(p_Var9 + 8) = 0;
      *puVar5 = p_Var9;
      if (*(__tree_node_base **)local_68 == (__tree_node_base *)0x0) {
        p_Var10 = p_Var9;
      }
      else {
        p_Var10 = (__tree_node_base *)*puVar5;
        local_68 = *(__tree_node_base **)local_68;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_60,p_Var10);
      local_58 = local_58 + 1;
    }
    p_Var10 = p_Var9 + 0x40;
    *(undefined4 *)(p_Var9 + 0x38) = 4;
    if (((byte)*p_Var10 & 1) == 0) {
      *(undefined2 *)p_Var10 = 0;
    }
    else {
      **(undefined1 **)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      if (((byte)p_Var9[0x40] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var9 + 0x50));
        *(undefined8 *)(p_Var9 + 0x40) = 0;
      }
    }
    *(undefined8 *)(p_Var9 + 0x50) = local_140;
    *(undefined8 *)(p_Var9 + 0x48) = uStack_148;
    *(ulong *)p_Var10 = local_150;
    uStack_148 = 0;
    local_140 = 0;
    local_150 = 0;
    if (((local_240 & 1) != 0) &&
       (FUN_002e2ea0(PTR_LAB_04373088,CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230))),
       (local_150 & 1) != 0)) {
      FUN_002e2ea0(PTR_LAB_04373088,local_140);
    }
  }
  if (*(long *)(param_2 + 0x68) != 0) {
                    /* try { // try from 003e8688 to 003e868f has its CatchHandler @ 003e8cc0 */
    FUN_003e5690(&local_150);
    local_240 = 0x1c;
    uStack_23f = s_keepAlivesSent_038f9c42._0_5_;
    cStack_23a = s_keepAlivesSent_038f9c42[5];
    local_230 = '\0';
    uStack_22f = 0;
    uStack_22e = 0;
    cStack_231 = '\0';
    cStack_239 = s_keepAlivesSent_038f9c42[6];
    cStack_238 = s_keepAlivesSent_038f9c42[7];
    uStack_237 = s_keepAlivesSent_038f9c42._8_4_;
    cStack_233 = s_keepAlivesSent_038f9c42[0xc];
    cStack_232 = s_keepAlivesSent_038f9c42[0xd];
                    /* try { // try from 003e86b8 to 003e86c7 has its CatchHandler @ 003e8ca8 */
    puVar5 = (undefined8 *)FUN_003ea500(&local_68,&local_80,&local_240);
    p_Var9 = (__tree_node_base *)*puVar5;
    if (p_Var9 == (__tree_node_base *)0x0) {
      p_Var9 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(ulong *)(p_Var9 + 0x30) = CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230));
      *(ulong *)(p_Var9 + 0x28) =
           CONCAT17(cStack_231,
                    CONCAT16(cStack_232,CONCAT15(cStack_233,CONCAT41(uStack_237,cStack_238))));
      *(ulong *)(p_Var9 + 0x20) =
           CONCAT17(cStack_239,CONCAT16(cStack_23a,CONCAT51(uStack_23f,local_240)));
      cStack_238 = '\0';
      uStack_237 = 0;
      cStack_233 = '\0';
      cStack_232 = '\0';
      cStack_231 = '\0';
      local_230 = '\0';
      uStack_22f = 0;
      uStack_22e = 0;
      local_240 = 0;
      uStack_23f._0_1_ = '\0';
      uStack_23f._1_1_ = '\0';
      uStack_23f._2_1_ = '\0';
      uStack_23f._3_1_ = '\0';
      uStack_23f._4_1_ = '\0';
      cStack_23a = '\0';
      cStack_239 = '\0';
      *(undefined8 *)(p_Var9 + 0x60) = 0;
      *(undefined8 *)(p_Var9 + 0x58) = 0;
      *(undefined8 *)(p_Var9 + 0x68) = 0;
      *(undefined8 *)(p_Var9 + 0x70) = 0;
      *(__tree_node_base **)(p_Var9 + 0x58) = p_Var9 + 0x60;
      *(undefined8 *)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      *(undefined8 *)(p_Var9 + 0x40) = 0;
      *(undefined8 *)(p_Var9 + 0x38) = 0;
      *(undefined8 *)(p_Var9 + 0x78) = 0;
      *(undefined8 *)(p_Var9 + 0x80) = 0;
      *(long **)(p_Var9 + 0x10) = local_80;
      *(undefined8 *)p_Var9 = 0;
      *(undefined8 *)(p_Var9 + 8) = 0;
      *puVar5 = p_Var9;
      if (*(__tree_node_base **)local_68 == (__tree_node_base *)0x0) {
        p_Var10 = p_Var9;
      }
      else {
        p_Var10 = (__tree_node_base *)*puVar5;
        local_68 = *(__tree_node_base **)local_68;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_60,p_Var10);
      local_58 = local_58 + 1;
    }
    p_Var10 = p_Var9 + 0x40;
    *(undefined4 *)(p_Var9 + 0x38) = 4;
    if (((byte)*p_Var10 & 1) == 0) {
      *(undefined2 *)p_Var10 = 0;
    }
    else {
      **(undefined1 **)(p_Var9 + 0x50) = 0;
      *(undefined8 *)(p_Var9 + 0x48) = 0;
      if (((byte)p_Var9[0x40] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(p_Var9 + 0x50));
        *(undefined8 *)(p_Var9 + 0x40) = 0;
      }
    }
    *(undefined8 *)(p_Var9 + 0x50) = local_140;
    *(undefined8 *)(p_Var9 + 0x48) = uStack_148;
    *(ulong *)p_Var10 = local_150;
    uStack_148 = 0;
    local_140 = 0;
    local_150 = 0;
    if (((local_240 & 1) != 0) &&
       (FUN_002e2ea0(PTR_LAB_04373088,CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230))),
       (local_150 & 1) != 0)) {
      FUN_002e2ea0(PTR_LAB_04373088,local_140);
    }
  }
                    /* try { // try from 003e87f0 to 003e87f7 has its CatchHandler @ 003e8f64 */
  FUN_003e5690(&local_258,*(undefined8 *)(param_2 + 0x20));
  local_210 = local_248;
  local_230 = 0;
  uStack_22f = 0;
  uStack_22e = 0;
  cStack_233 = 0;
  cStack_232 = 0;
  cStack_231 = 0;
  uStack_23f = 0x656b636f73;
  cStack_23a = 0x74;
  cStack_239 = 0x49;
  cStack_238 = 100;
  local_200 = 0;
  uStack_1f8 = 0;
  puStack_208 = &local_200;
  local_240 = 0x10;
  uStack_237 = 0;
  local_228 = 4;
  local_248 = 0;
  uStack_218 = uStack_250;
  local_220 = local_258;
  local_258 = 0;
  uStack_250 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1e0 = 0;
  local_1d8 = &DAT_656d616e08;
  local_1c0 = 4;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = (void *)0x0;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    uStack_1b0 = *(ulong *)(param_2 + 0x30);
    local_1b8 = *(ulong *)(param_2 + 0x28);
    local_1a8 = *(void **)(param_2 + 0x38);
    goto LAB_003e8908;
  }
  __n = *(ulong *)(param_2 + 0x30);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003e8c30 to 003e8c33 has its CatchHandler @ 003e8c34 */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_2 + 0x38);
  if (__n < 0x17) {
    __dest = (void *)((long)&local_1b8 + 1);
    local_1b8 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_003e88f4;
  }
  else {
    uVar11 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar11);
    local_1b8 = uVar11 | 1;
    uStack_1b0 = __n;
    local_1a8 = __dest;
LAB_003e88f4:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_003e8908:
  local_1a0 = &local_198;
  local_190 = 0;
  uStack_188 = 0;
  local_198 = 0;
  local_180 = 0;
  uStack_178 = 0;
                    /* try { // try from 003e891c to 003e892b has its CatchHandler @ 003e8e38 */
  FUN_003e6510(&local_168,&local_240,2);
  uStack_148 = 0;
  local_140 = 0;
  local_150 = 0x66657206;
  local_138 = 5;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_118 = local_168;
  local_110 = local_160;
  lStack_108 = local_158;
  if (local_158 == 0) {
    local_118 = &local_110;
  }
  else {
    *(long **)(local_160 + 0x10) = &local_110;
    local_168 = &local_160;
    local_160 = 0;
    local_158 = 0;
  }
  uStack_f8 = 0;
  local_100 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_e8 = 0x6174616408;
  local_d0 = 5;
  local_b8 = 0;
  local_b0 = local_68;
  local_c8 = 0;
  uStack_c0 = 0;
  local_a8 = local_60;
  lStack_a0 = local_58;
  if (local_58 == 0) {
    local_b0 = (__tree_node_base *)&local_a8;
  }
  else {
    *(__tree_node_base **)(local_60 + 0x10) = (__tree_node_base *)&local_a8;
    local_60 = (__tree_node_base *)0x0;
    local_58 = 0;
    local_68 = (__tree_node_base *)&local_60;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
                    /* try { // try from 003e89f4 to 003e8a07 has its CatchHandler @ 003e8d90 */
  FUN_003e6510(&local_80,&local_150,2);
  FUN_003e7200(&local_98);
  FUN_003e9f80(&local_b0,local_a8);
  if ((local_c8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_b8);
  }
  if ((local_e8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,uStack_d8);
  }
  FUN_003e7200(&local_100);
  FUN_003e9f80(&local_118,local_110);
  if ((local_130 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_120);
  }
  if ((local_150 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_140);
  }
  FUN_003e9f80(&local_168,local_160);
  FUN_003e7200(&uStack_188);
  FUN_003e9f80(&local_1a0,local_198);
  if ((local_1b8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_1a8);
  }
  if (((ulong)local_1d8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,uStack_1c8);
  }
  FUN_003e7200(&local_1f0);
  FUN_003e9f80(&puStack_208,local_200);
  if ((local_220 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_210);
  }
  if ((local_240 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT62(uStack_22e,CONCAT11(uStack_22f,local_230)));
  }
  if ((local_258 & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 0xa8);
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,local_248);
    bVar1 = *(byte *)(param_2 + 0xa8);
  }
  if ((bVar1 & 1) == 0) {
    lVar7 = param_2 + 0xa9;
  }
  else {
    lVar7 = *(long *)(param_2 + 0xb8);
  }
                    /* try { // try from 003e8b7c to 003e8bb3 has its CatchHandler @ 003e9000 */
  FUN_003e9030(&local_80,"remote",lVar7);
  if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
    param_2 = param_2 + 0x91;
  }
  else {
    param_2 = *(long *)(param_2 + 0xa0);
  }
  FUN_003e9030(&local_80,"local",param_2);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 5;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = local_80;
  plVar8 = (long *)(param_1 + 10);
  *plVar8 = local_78;
  *(long *)(param_1 + 0xc) = local_70;
  if (local_70 == 0) {
    *(long **)(param_1 + 8) = plVar8;
  }
  else {
    *(long **)(local_78 + 0x10) = plVar8;
    local_80 = &local_78;
    local_78 = 0;
    local_70 = 0;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  FUN_003e9f80(&local_80,local_78);
  FUN_003e9f80(&local_68,local_60);
  return;
}


