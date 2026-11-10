/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d22a0; name: FUN_003d22a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003d22a0(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  undefined8 *puVar14;
  long lVar15;
  char *local_2a0;
  size_t local_298;
  undefined8 local_290;
  byte local_270;
  char cStack_26f;
  uint uStack_26e;
  undefined2 uStack_26a;
  char cStack_268;
  undefined5 uStack_267;
  char cStack_262;
  char cStack_261;
  char cStack_260;
  uint6 uStack_25f;
  undefined1 uStack_259;
  undefined *puStack_258;
  byte local_238 [16];
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  byte *local_48;
  byte *local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_40 = (byte *)0x0;
  local_48 = (byte *)0x0;
  bVar1 = *(byte *)(param_2 + 0x10);
  if ((bVar1 & 1) != 0) {
    pcVar13 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    cStack_260 = (char)pcVar13;
    uStack_25f = (uint6)((ulong)pcVar13 >> 8);
    uStack_259 = (undefined1)((ulong)pcVar13 >> 0x38);
    cStack_268 = (char)_UNK_03889b78;
    uStack_267 = (undefined5)((ulong)_UNK_03889b78 >> 8);
    cStack_262 = (char)((ulong)_UNK_03889b78 >> 0x30);
    cStack_261 = (char)((ulong)_UNK_03889b78 >> 0x38);
    local_270 = (byte)_DAT_03889b70;
    cStack_26f = (char)((ulong)_DAT_03889b70 >> 8);
    uStack_26e = (uint)((ulong)_DAT_03889b70 >> 0x10);
    uStack_26a = (undefined2)((ulong)_DAT_03889b70 >> 0x30);
    *(ulong *)(pcVar13 + 0xf) =
         CONCAT71(s_SEND_INITIAL_METADATA__038db06d._16_7_,s_SEND_INITIAL_METADATA__038db06d[0xf]);
    uVar5 = s_SEND_INITIAL_METADATA__038db06d._0_8_;
    uVar2 = CONCAT17(s_SEND_INITIAL_METADATA__038db06d[0xf],s_SEND_INITIAL_METADATA__038db06d._8_7_)
    ;
    pcVar13[0x17] = '\0';
    *(undefined8 *)(pcVar13 + 8) = uVar2;
    *(undefined8 *)pcVar13 = uVar5;
                    /* try { // try from 003d2308 to 003d2313 has its CatchHandler @ 003d285c */
    FUN_003d2904(&local_48,&local_270);
    if ((local_270 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_259,CONCAT61(uStack_25f,cStack_260)));
    }
    puVar14 = (undefined8 *)**(long **)(param_2 + 8);
    uStack_f8 = puVar14[7];
    local_100 = puVar14[6];
    uStack_e8 = puVar14[9];
    uStack_f0 = puVar14[8];
    uStack_d8 = puVar14[0xb];
    local_e0 = puVar14[10];
    uStack_c8 = puVar14[0xd];
    uStack_d0 = puVar14[0xc];
    uStack_b8 = puVar14[0xf];
    local_c0 = puVar14[0xe];
    uStack_a8 = puVar14[0x11];
    uStack_b0 = puVar14[0x10];
    uStack_98 = puVar14[0x13];
    local_a0 = puVar14[0x12];
    uStack_88 = puVar14[0x15];
    uStack_90 = puVar14[0x14];
    uStack_58 = puVar14[0x1b];
    local_60 = puVar14[0x1a];
    uStack_78 = puVar14[0x17];
    local_80 = puVar14[0x16];
    uStack_68 = puVar14[0x19];
    uStack_70 = puVar14[0x18];
    local_50 = puVar14[0x1c];
    uStack_108 = puVar14[5];
    uStack_110 = puVar14[4];
    uStack_128 = puVar14[1];
    local_130 = *puVar14;
    uStack_118 = puVar14[3];
    local_120 = puVar14[2];
                    /* try { // try from 003d237c to 003d2387 has its CatchHandler @ 003d2888 */
    FUN_003d2ad0(&local_130,&local_48);
    uStack_26a = 0;
    cStack_268 = '\0';
    uStack_267._0_1_ = '\0';
    uStack_267._1_1_ = '\0';
    uStack_267._2_1_ = '\0';
    uStack_267._3_1_ = '\0';
    uStack_267._4_1_ = '\0';
    cStack_262 = '\0';
    cStack_261 = '\0';
    cStack_260 = '\0';
    uStack_25f = 0;
    uStack_259 = 0;
    local_270 = 2;
    cStack_26f = '}';
    uStack_26e = 0;
                    /* try { // try from 003d239c to 003d23a7 has its CatchHandler @ 003d284c */
    FUN_003d2904(&local_48,&local_270);
    if ((local_270 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_259,CONCAT61(uStack_25f,cStack_260)));
    }
    bVar1 = *(byte *)(param_2 + 0x10);
  }
  if ((bVar1 >> 2 & 1) != 0) {
    lVar15 = *(long *)(*(long *)(param_2 + 8) + 0x28);
    if (lVar15 == 0) {
      pcVar13 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x40);
      cStack_260 = (char)pcVar13;
      uStack_25f = (uint6)((ulong)pcVar13 >> 8);
      uStack_259 = (undefined1)((ulong)pcVar13 >> 0x38);
      cStack_268 = (char)_UNK_03889568;
      uStack_267 = (undefined5)((ulong)_UNK_03889568 >> 8);
      cStack_262 = (char)((ulong)_UNK_03889568 >> 0x30);
      cStack_261 = (char)((ulong)_UNK_03889568 >> 0x38);
      local_270 = (byte)_DAT_03889560;
      cStack_26f = (char)((ulong)_DAT_03889560 >> 8);
      uStack_26e = (uint)((ulong)_DAT_03889560 >> 0x10);
      uStack_26a = (undefined2)((ulong)_DAT_03889560 >> 0x30);
      *(undefined8 *)(pcVar13 + 0x30) = s_SEND_MESSAGE_flag_and_length_unk_03924fe3._48_8_;
      uVar7 = s_SEND_MESSAGE_flag_and_length_unk_03924fe3._24_8_;
      uVar6 = s_SEND_MESSAGE_flag_and_length_unk_03924fe3._16_8_;
      uVar5 = s_SEND_MESSAGE_flag_and_length_unk_03924fe3._8_8_;
      uVar2 = s_SEND_MESSAGE_flag_and_length_unk_03924fe3._0_8_;
      pcVar13[0x38] = '\0';
      uVar9 = s_SEND_MESSAGE_flag_and_length_unk_03924fe3._40_8_;
      uVar8 = s_SEND_MESSAGE_flag_and_length_unk_03924fe3._32_8_;
      *(undefined8 *)(pcVar13 + 0x18) = uVar7;
      *(undefined8 *)(pcVar13 + 0x10) = uVar6;
      *(undefined8 *)(pcVar13 + 0x28) = uVar9;
      *(undefined8 *)(pcVar13 + 0x20) = uVar8;
      *(undefined8 *)(pcVar13 + 8) = uVar5;
      *(undefined8 *)pcVar13 = uVar2;
                    /* try { // try from 003d2464 to 003d246f has its CatchHandler @ 003d27c0 */
      FUN_003d2904(&local_48,&local_270);
      if ((local_270 & 1) == 0) goto LAB_003d2488;
      local_290 = CONCAT17(uStack_259,CONCAT61(uStack_25f,cStack_260));
    }
    else {
      uStack_26e = *(uint *)(lVar15 + 0xc);
      local_270 = (byte)uStack_26e;
      cStack_26f = (char)(uStack_26e >> 8);
      uStack_26e = uStack_26e >> 0x10;
      uStack_26a = 0;
      cStack_268 = (char)PTR_FUN_043739e0;
      uStack_267 = (undefined5)((ulong)PTR_FUN_043739e0 >> 8);
      cStack_262 = (char)((ulong)PTR_FUN_043739e0 >> 0x30);
      cStack_261 = (char)((ulong)PTR_FUN_043739e0 >> 0x38);
      cStack_260 = (char)*(undefined4 *)(lVar15 + 8);
      uStack_25f = (uint6)(uint3)((uint)*(undefined4 *)(lVar15 + 8) >> 8);
      uStack_259 = 0;
      puStack_258 = PTR_FUN_043739e0;
                    /* try { // try from 003d23e8 to 003d2403 has its CatchHandler @ 003d27e4 */
      FUN_002e6390(&local_2a0," SEND_MESSAGE:flags=0x%08x:len=%d",0x21,&local_270,2);
                    /* try { // try from 003d2404 to 003d240f has its CatchHandler @ 003d27d0 */
      FUN_003d2904(&local_48,&local_2a0);
      if (((ulong)local_2a0 & 1) == 0) goto LAB_003d2488;
    }
    FUN_002e2ea0(PTR_LAB_04373088,local_290);
  }
LAB_003d2488:
  bVar1 = *(byte *)(param_2 + 0x10);
  if ((bVar1 >> 1 & 1) != 0) {
    pcVar13 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    uVar2 = s_SEND_TRAILING_METADATA__039372d8._0_8_;
    cStack_260 = (char)pcVar13;
    uStack_25f = (uint6)((ulong)pcVar13 >> 8);
    uStack_259 = (undefined1)((ulong)pcVar13 >> 0x38);
    cStack_268 = (char)_UNK_03889048;
    uStack_267 = (undefined5)((ulong)_UNK_03889048 >> 8);
    cStack_262 = (char)((ulong)_UNK_03889048 >> 0x30);
    cStack_261 = (char)((ulong)_UNK_03889048 >> 0x38);
    local_270 = (byte)_DAT_03889040;
    cStack_26f = (char)((ulong)_DAT_03889040 >> 8);
    uStack_26e = (uint)((ulong)_DAT_03889040 >> 0x10);
    uStack_26a = (undefined2)((ulong)_DAT_03889040 >> 0x30);
    *(undefined8 *)(pcVar13 + 8) = s_SEND_TRAILING_METADATA__039372d8._8_8_;
    *(undefined8 *)pcVar13 = uVar2;
    *(undefined8 *)(pcVar13 + 0x10) = s_SEND_TRAILING_METADATA__039372d8._16_8_;
    pcVar13[0x18] = '\0';
                    /* try { // try from 003d24cc to 003d24d7 has its CatchHandler @ 003d283c */
    FUN_003d2904(&local_48,&local_270);
    if ((local_270 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_259,CONCAT61(uStack_25f,cStack_260)));
    }
    puVar14 = *(undefined8 **)(*(long *)(param_2 + 8) + 0x18);
    uStack_1e8 = puVar14[7];
    local_1f0 = puVar14[6];
    uStack_1d8 = puVar14[9];
    uStack_1e0 = puVar14[8];
    uStack_1c8 = puVar14[0xb];
    local_1d0 = puVar14[10];
    uStack_1b8 = puVar14[0xd];
    uStack_1c0 = puVar14[0xc];
    uStack_1a8 = puVar14[0xf];
    local_1b0 = puVar14[0xe];
    uStack_198 = puVar14[0x11];
    uStack_1a0 = puVar14[0x10];
    uStack_188 = puVar14[0x13];
    local_190 = puVar14[0x12];
    uStack_178 = puVar14[0x15];
    uStack_180 = puVar14[0x14];
    uStack_148 = puVar14[0x1b];
    local_150 = puVar14[0x1a];
    uStack_168 = puVar14[0x17];
    local_170 = puVar14[0x16];
    uStack_158 = puVar14[0x19];
    uStack_160 = puVar14[0x18];
    local_140 = puVar14[0x1c];
    uStack_1f8 = puVar14[5];
    uStack_200 = puVar14[4];
    uStack_218 = puVar14[1];
    local_220 = *puVar14;
    uStack_208 = puVar14[3];
    local_210 = puVar14[2];
                    /* try { // try from 003d2540 to 003d254b has its CatchHandler @ 003d2888 */
    FUN_003d2ad0(&local_220,&local_48);
    uStack_26a = 0;
    cStack_268 = '\0';
    uStack_267._0_1_ = '\0';
    uStack_267._1_1_ = '\0';
    uStack_267._2_1_ = '\0';
    uStack_267._3_1_ = '\0';
    uStack_267._4_1_ = '\0';
    cStack_262 = '\0';
    cStack_261 = '\0';
    cStack_260 = '\0';
    uStack_25f = 0;
    uStack_259 = 0;
    local_270 = 2;
    cStack_26f = '}';
    uStack_26e = 0;
                    /* try { // try from 003d2560 to 003d256b has its CatchHandler @ 003d281c */
    FUN_003d2904(&local_48,&local_270);
    if ((local_270 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_259,CONCAT61(uStack_25f,cStack_260)));
    }
    bVar1 = *(byte *)(param_2 + 0x10);
  }
  if ((bVar1 >> 3 & 1) != 0) {
    local_270 = 0x2c;
    uStack_267 = s_RECV_INITIAL_METADATA_0392e95a._8_5_;
    cStack_262 = s_RECV_INITIAL_METADATA_0392e95a[0xd];
    cStack_26f = s_RECV_INITIAL_METADATA_0392e95a[0];
    uStack_26e = s_RECV_INITIAL_METADATA_0392e95a._1_4_;
    uStack_26a = s_RECV_INITIAL_METADATA_0392e95a._5_2_;
    cStack_268 = s_RECV_INITIAL_METADATA_0392e95a[7];
    cStack_261 = s_RECV_INITIAL_METADATA_0392e95a[0xe];
    cStack_260 = s_RECV_INITIAL_METADATA_0392e95a[0xf];
    uStack_25f._0_1_ = s_RECV_INITIAL_METADATA_0392e95a[0x10];
    uStack_25f._1_1_ = s_RECV_INITIAL_METADATA_0392e95a[0x11];
    uStack_25f._2_1_ = s_RECV_INITIAL_METADATA_0392e95a[0x12];
    uStack_25f._3_1_ = s_RECV_INITIAL_METADATA_0392e95a[0x13];
    uStack_25f._4_1_ = s_RECV_INITIAL_METADATA_0392e95a[0x14];
    uStack_25f._5_1_ = s_RECV_INITIAL_METADATA_0392e95a[0x15];
    uStack_259 = 0;
                    /* try { // try from 003d25b0 to 003d25bb has its CatchHandler @ 003d282c */
    FUN_003d2904(&local_48,&local_270);
    if ((local_270 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_259,CONCAT61(uStack_25f,cStack_260)));
    }
    bVar1 = *(byte *)(param_2 + 0x10);
  }
  if ((bVar1 >> 4 & 1) != 0) {
    cStack_261 = '\0';
    local_270 = 0x1a;
    cStack_26f = s_RECV_MESSAGE_03918445[0];
    uStack_26e = s_RECV_MESSAGE_03918445._1_4_;
    cStack_260 = '\0';
    uStack_25f = 0;
    uStack_259 = 0;
    cStack_262 = '\0';
    uStack_26a = s_RECV_MESSAGE_03918445._5_2_;
    cStack_268 = s_RECV_MESSAGE_03918445[7];
    uStack_267._0_1_ = s_RECV_MESSAGE_03918445[8];
    uStack_267._1_1_ = s_RECV_MESSAGE_03918445[9];
    uStack_267._2_1_ = s_RECV_MESSAGE_03918445[10];
    uStack_267._3_1_ = s_RECV_MESSAGE_03918445[0xb];
    uStack_267._4_1_ = s_RECV_MESSAGE_03918445[0xc];
                    /* try { // try from 003d2608 to 003d2613 has its CatchHandler @ 003d280c */
    FUN_003d2904(&local_48,&local_270);
    if ((local_270 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_259,CONCAT61(uStack_25f,cStack_260)));
    }
    bVar1 = *(byte *)(param_2 + 0x10);
  }
  if ((bVar1 >> 5 & 1) != 0) {
    pcVar13 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    cStack_260 = (char)pcVar13;
    uStack_25f = (uint6)((ulong)pcVar13 >> 8);
    uStack_259 = (undefined1)((ulong)pcVar13 >> 0x38);
    cStack_268 = (char)_UNK_03889b78;
    uStack_267 = (undefined5)((ulong)_UNK_03889b78 >> 8);
    cStack_262 = (char)((ulong)_UNK_03889b78 >> 0x30);
    cStack_261 = (char)((ulong)_UNK_03889b78 >> 0x38);
    local_270 = (byte)_DAT_03889b70;
    cStack_26f = (char)((ulong)_DAT_03889b70 >> 8);
    uStack_26e = (uint)((ulong)_DAT_03889b70 >> 0x10);
    uStack_26a = (undefined2)((ulong)_DAT_03889b70 >> 0x30);
    *(ulong *)(pcVar13 + 0xf) =
         CONCAT71(s_RECV_TRAILING_METADATA_03984837._16_7_,s_RECV_TRAILING_METADATA_03984837[0xf]);
    uVar5 = s_RECV_TRAILING_METADATA_03984837._0_8_;
    uVar2 = CONCAT17(s_RECV_TRAILING_METADATA_03984837[0xf],s_RECV_TRAILING_METADATA_03984837._8_7_)
    ;
    pcVar13[0x17] = '\0';
    *(undefined8 *)(pcVar13 + 8) = uVar2;
    *(undefined8 *)pcVar13 = uVar5;
                    /* try { // try from 003d2670 to 003d267b has its CatchHandler @ 003d27fc */
    FUN_003d2904(&local_48,&local_270);
    if ((local_270 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_259,CONCAT61(uStack_25f,cStack_260)));
    }
    bVar1 = *(byte *)(param_2 + 0x10);
  }
  if ((bVar1 >> 6 & 1) != 0) {
    local_270 = 0x4f;
    cStack_26f = 'H';
    uStack_26e = 0x398;
    uStack_26a = 0;
    cStack_268 = '\b';
    uStack_267._0_1_ = '\0';
    uStack_267._1_1_ = '\0';
    uStack_267._2_1_ = '\0';
    uStack_267._3_1_ = '\0';
    uStack_267._4_1_ = '\0';
    cStack_262 = '\0';
    cStack_261 = '\0';
                    /* try { // try from 003d26b4 to 003d26db has its CatchHandler @ 003d2884 */
    local_2a0 = (char *)FUN_002f1480(*(undefined8 *)(*(long *)(param_2 + 8) + 0x88));
    local_298 = 0;
    if ((local_2a0 != (char *)0x0) && (local_298 = strlen(local_2a0), (long)local_298 < 0)) {
                    /* try { // try from 003d27a0 to 003d27bf has its CatchHandler @ 003d2884 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    FUN_002eced0(local_238,&local_270,&local_2a0);
                    /* try { // try from 003d26dc to 003d26e7 has its CatchHandler @ 003d27e8 */
    FUN_003d2904(&local_48,local_238);
    if ((local_238[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_228);
    }
  }
                    /* try { // try from 003d2708 to 003d271b has its CatchHandler @ 003d2888 */
  FUN_002e5790(param_1,local_48,local_40,&DAT_03996322,0);
  pbVar11 = local_48;
  puVar10 = PTR_LAB_04373088;
  if (local_48 != (byte *)0x0) {
    if (local_40 != local_48) {
      bVar1 = local_40[-0x18];
      pbVar12 = local_40 + -0x18;
      pbVar4 = local_40;
      while( true ) {
        pbVar3 = pbVar12;
        if ((bVar1 & 1) != 0) {
          FUN_002e2ea0(puVar10,*(undefined8 *)(pbVar4 + -8));
        }
        if (pbVar11 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar12 = pbVar3 + -0x18;
        pbVar4 = pbVar3;
      }
    }
    local_40 = pbVar11;
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
  }
  return;
}


