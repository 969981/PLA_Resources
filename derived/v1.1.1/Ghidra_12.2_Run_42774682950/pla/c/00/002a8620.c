/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a8620; name: FUN_002a8620
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002a8620(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  byte local_40;
  undefined7 uStack_3f;
  char cStack_38;
  undefined6 uStack_37;
  char cStack_31;
  char cStack_30;
  undefined6 uStack_2f;
  undefined1 uStack_29;
  
                    /* try { // try from 002a8630 to 002a8637 has its CatchHandler @ 002a8898 */
  FUN_002e2f18(param_1);
  local_40 = 0x2c;
  uStack_37._0_1_ = s_grpc_keepalive_time_ms_03996b3d[8];
  uStack_37._1_1_ = s_grpc_keepalive_time_ms_03996b3d[9];
  uStack_37._2_1_ = s_grpc_keepalive_time_ms_03996b3d[10];
  uStack_37._3_1_ = s_grpc_keepalive_time_ms_03996b3d[0xb];
  uStack_37._4_1_ = s_grpc_keepalive_time_ms_03996b3d[0xc];
  uStack_37._5_1_ = s_grpc_keepalive_time_ms_03996b3d[0xd];
  uStack_3f = s_grpc_keepalive_time_ms_03996b3d._0_7_;
  cStack_38 = s_grpc_keepalive_time_ms_03996b3d[7];
  cStack_31 = s_grpc_keepalive_time_ms_03996b3d[0xe];
  cStack_30 = s_grpc_keepalive_time_ms_03996b3d[0xf];
  uStack_2f._0_1_ = s_grpc_keepalive_time_ms_03996b3d[0x10];
  uStack_2f._1_1_ = s_grpc_keepalive_time_ms_03996b3d[0x11];
  uStack_2f._2_1_ = s_grpc_keepalive_time_ms_03996b3d[0x12];
  uStack_2f._3_1_ = s_grpc_keepalive_time_ms_03996b3d[0x13];
  uStack_2f._4_1_ = s_grpc_keepalive_time_ms_03996b3d[0x14];
  uStack_2f._5_1_ = s_grpc_keepalive_time_ms_03996b3d[0x15];
  uStack_29 = 0;
                    /* try { // try from 002a865c to 002a866b has its CatchHandler @ 002a886c */
  FUN_002e3af0(param_1,&local_40,10000);
  if ((local_40 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_29,CONCAT61(uStack_2f,cStack_30)));
  }
  pcVar5 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  uVar3 = s_grpc_keepalive_timeout_ms_038b315f._0_8_;
  uVar1 = CONCAT71(s_grpc_keepalive_timeout_ms_038b315f._9_7_,
                   s_grpc_keepalive_timeout_ms_038b315f[8]);
  cStack_30 = (char)pcVar5;
  uStack_2f = (undefined6)((ulong)pcVar5 >> 8);
  uStack_29 = (undefined1)((ulong)pcVar5 >> 0x38);
  cStack_38 = (char)_UNK_03888e88;
  uStack_37 = (undefined6)((ulong)_UNK_03888e88 >> 8);
  cStack_31 = (char)((ulong)_UNK_03888e88 >> 0x38);
  local_40 = (byte)_DAT_03888e80;
  uStack_3f = (undefined7)((ulong)_DAT_03888e80 >> 8);
  uVar2 = CONCAT17(s_grpc_keepalive_timeout_ms_038b315f[0x10],
                   s_grpc_keepalive_timeout_ms_038b315f._9_7_);
  *(undefined8 *)(pcVar5 + 0x11) = s_grpc_keepalive_timeout_ms_038b315f._17_8_;
  *(undefined8 *)(pcVar5 + 9) = uVar2;
  *(undefined8 *)(pcVar5 + 8) = uVar1;
  *(undefined8 *)pcVar5 = uVar3;
  pcVar5[0x19] = '\0';
                    /* try { // try from 002a86c0 to 002a86cf has its CatchHandler @ 002a885c */
  FUN_002e3af0(param_1,&local_40,20000);
  if ((local_40 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_29,CONCAT61(uStack_2f,cStack_30)));
  }
  pcVar5 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  uVar4 = s_grpc_keepalive_permit_without_ca_0398d888._24_8_;
  uVar3 = s_grpc_keepalive_permit_without_ca_0398d888._16_8_;
  uVar2 = s_grpc_keepalive_permit_without_ca_0398d888._8_8_;
  uVar1 = s_grpc_keepalive_permit_without_ca_0398d888._0_8_;
  cStack_30 = (char)pcVar5;
  uStack_2f = (undefined6)((ulong)pcVar5 >> 8);
  uStack_29 = (undefined1)((ulong)pcVar5 >> 0x38);
  cStack_38 = (char)_UNK_03889538;
  uStack_37 = (undefined6)((ulong)_UNK_03889538 >> 8);
  cStack_31 = (char)((ulong)_UNK_03889538 >> 0x38);
  local_40 = (byte)_DAT_03889530;
  uStack_3f = (undefined7)((ulong)_DAT_03889530 >> 8);
  pcVar5[0x23] = '\0';
  *(undefined8 *)(pcVar5 + 8) = uVar2;
  *(undefined8 *)pcVar5 = uVar1;
  *(undefined8 *)(pcVar5 + 0x18) = uVar4;
  *(undefined8 *)(pcVar5 + 0x10) = uVar3;
  pcVar5[0x1f] = 'a';
  pcVar5[0x20] = 'l';
  pcVar5[0x21] = 'l';
  pcVar5[0x22] = 's';
                    /* try { // try from 002a8728 to 002a8737 has its CatchHandler @ 002a884c */
  FUN_002e3af0(param_1,&local_40,0);
  if ((local_40 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_29,CONCAT61(uStack_2f,cStack_30)));
  }
  pcVar5 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  cStack_38 = (char)_UNK_03889b68;
  uStack_37 = (undefined6)((ulong)_UNK_03889b68 >> 8);
  cStack_31 = (char)((ulong)_UNK_03889b68 >> 0x38);
  local_40 = (byte)_DAT_03889b60;
  uStack_3f = (undefined7)((ulong)_DAT_03889b60 >> 8);
  cStack_30 = (char)pcVar5;
  uStack_2f = (undefined6)((ulong)pcVar5 >> 8);
  uStack_29 = (undefined1)((ulong)pcVar5 >> 0x38);
  pcVar5[0x20] = 'a';
  uVar4 = s_grpc_http2_max_pings_without_dat_0390f91e._24_8_;
  uVar3 = s_grpc_http2_max_pings_without_dat_0390f91e._16_8_;
  uVar2 = s_grpc_http2_max_pings_without_dat_0390f91e._8_8_;
  uVar1 = s_grpc_http2_max_pings_without_dat_0390f91e._0_8_;
  pcVar5[0x21] = '\0';
  *(undefined8 *)(pcVar5 + 8) = uVar2;
  *(undefined8 *)pcVar5 = uVar1;
  *(undefined8 *)(pcVar5 + 0x18) = uVar4;
  *(undefined8 *)(pcVar5 + 0x10) = uVar3;
                    /* try { // try from 002a878c to 002a879b has its CatchHandler @ 002a883c */
  FUN_002e3af0(param_1,&local_40,0);
  if ((local_40 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_29,CONCAT61(uStack_2f,cStack_30)));
  }
  pcVar5 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  cStack_38 = (char)_UNK_03889548;
  uStack_37 = (undefined6)((ulong)_UNK_03889548 >> 8);
  cStack_31 = (char)((ulong)_UNK_03889548 >> 0x38);
  local_40 = (byte)_DAT_03889540;
  uStack_3f = (undefined7)((ulong)_DAT_03889540 >> 8);
  cStack_30 = (char)pcVar5;
  uStack_2f = (undefined6)((ulong)pcVar5 >> 8);
  uStack_29 = (undefined1)((ulong)pcVar5 >> 0x38);
  pcVar5[0x20] = 's';
  uVar4 = s_grpc_http2_min_time_between_ping_03996b54._24_8_;
  uVar3 = s_grpc_http2_min_time_between_ping_03996b54._16_8_;
  uVar2 = s_grpc_http2_min_time_between_ping_03996b54._8_8_;
  uVar1 = s_grpc_http2_min_time_between_ping_03996b54._0_8_;
  pcVar5[0x21] = '_';
  pcVar5[0x22] = 'm';
  pcVar5[0x23] = 's';
  pcVar5[0x24] = '\0';
  *(undefined8 *)(pcVar5 + 8) = uVar2;
  *(undefined8 *)pcVar5 = uVar1;
  *(undefined8 *)(pcVar5 + 0x18) = uVar4;
  *(undefined8 *)(pcVar5 + 0x10) = uVar3;
                    /* try { // try from 002a87f4 to 002a8803 has its CatchHandler @ 002a882c */
  FUN_002e3af0(param_1,&local_40,40000);
  if ((local_40 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,CONCAT17(uStack_29,CONCAT61(uStack_2f,cStack_30)));
  }
  return;
}


