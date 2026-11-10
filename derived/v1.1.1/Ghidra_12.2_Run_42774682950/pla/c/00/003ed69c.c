/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ed69c; name: FUN_003ed69c
 */


void FUN_003ed69c(undefined4 *param_1,int *param_2)

{
  void *pvVar1;
  size_t sVar2;
  long lVar3;
  long *plVar4;
  char *__s;
  undefined8 *puVar5;
  char *__s_00;
  ulong uVar6;
  ulong local_208;
  size_t local_200;
  void *local_1f8;
  ulong local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  long *local_1d8;
  long lStack_1d0;
  long local_1c8;
  byte local_1c0;
  undefined7 uStack_1bf;
  int local_1b8;
  undefined4 uStack_1b4;
  void *local_1b0;
  undefined4 local_1a8 [2];
  ulong local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 *puStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined1 local_14f;
  undefined6 uStack_14e;
  undefined8 local_148;
  undefined1 auStack_140 [80];
  undefined1 local_f0;
  undefined7 uStack_ef;
  char cStack_e8;
  undefined2 local_e7;
  undefined5 uStack_e5;
  undefined8 local_e0;
  undefined4 local_d8;
  long *local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  ulong *local_48;
  
  uStack_68 = *(undefined8 *)(param_2 + 4);
  local_70 = *(undefined8 *)(param_2 + 2);
  uStack_58 = *(undefined8 *)(param_2 + 8);
  uStack_60 = *(undefined8 *)(param_2 + 6);
  pvVar1 = (void *)FUN_002f2680(&local_70);
  local_1c0 = 0x16;
  local_1b0 = (void *)0x0;
  uStack_1bf = s_description_03917c2e._0_7_;
  local_1b8 = CONCAT31(0x6e6f69,s_description_03917c2e[7]);
  uStack_1b4 = 0;
                    /* try { // try from 003ed708 to 003ed713 has its CatchHandler @ 003edc10 */
  FUN_003ea108(local_1a8,pvVar1,0);
  if (2 < *param_2 - 1U) {
                    /* try { // try from 003edac4 to 003edae3 has its CatchHandler @ 003edb0c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/channel_trace.cc",0x8d,2,
                 "Should never reach here.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_148 = 0;
  uStack_14e = 0;
  local_158 = 0x10;
  uStack_157 = 0x74697265766573;
  uStack_150 = 0x79;
  local_14f = 0;
                    /* try { // try from 003ed760 to 003ed767 has its CatchHandler @ 003edbcc */
  FUN_003e9cf0(auStack_140,(&PTR_s_CT_INFO_04157178)[(int)(*param_2 - 1U)],0);
                    /* try { // try from 003ed76c to 003ed773 has its CatchHandler @ 003edbc0 */
  FUN_002ec330(&local_1d8,*(undefined8 *)(param_2 + 10),*(undefined8 *)(param_2 + 0xc));
  local_c0 = local_1c8;
  uStack_e5 = 0;
  local_f0 = 0x12;
  local_e0 = 0;
  local_e7 = 0x70;
  uStack_ef = s_timestamp_03918532._0_7_;
  cStack_e8 = s_timestamp_03918532[7];
  local_d8 = 4;
  lStack_c8 = lStack_1d0;
  local_d0 = local_1d8;
  local_1c8 = 0;
  local_b8 = &local_b0;
  local_1d8 = (long *)0x0;
  lStack_1d0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_b0 = 0;
                    /* try { // try from 003ed7d0 to 003ed7df has its CatchHandler @ 003edb94 */
  FUN_003edc3c(&local_88,&local_1c0,3);
  FUN_003edd2c(&local_f0);
  FUN_003edd2c(&local_158);
  FUN_003edd2c(&local_1c0);
  if (((ulong)local_1d8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_1c8);
  }
                    /* try { // try from 003ed810 to 003ed817 has its CatchHandler @ 003edb7c */
  free(pvVar1);
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) goto LAB_003eda44;
  if ((*(int *)(lVar3 + 0x18) == 0) || (*(int *)(lVar3 + 0x18) == 1)) {
    __s_00 = "channelId";
    __s = "channelRef";
  }
  else {
    __s_00 = "subchannelId";
    __s = "subchannelRef";
  }
                    /* try { // try from 003ed858 to 003ed85f has its CatchHandler @ 003edb78 */
  FUN_003e5690(&local_1f0,*(undefined8 *)(lVar3 + 0x20));
  local_1b8 = 0;
  uStack_1b4 = 0;
  local_1b0 = (void *)0x0;
  local_1c0 = 0;
  uStack_1bf = 0;
  sVar2 = strlen(__s_00);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 003edae4 to 003edaeb has its CatchHandler @ 003edafc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_1c0 = (byte)((int)sVar2 << 1);
    pvVar1 = (void *)((ulong)&local_1c0 | 1);
    if (sVar2 != 0) goto LAB_003ed8c4;
  }
  else {
    uVar6 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar1 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
    local_1c0 = (byte)uVar6 | 1;
    uStack_1bf = (undefined7)(uVar6 >> 8);
    uStack_1b4 = (undefined4)(sVar2 >> 0x20);
    local_1b8 = (int)sVar2;
    local_1b0 = pvVar1;
LAB_003ed8c4:
    memcpy(pvVar1,__s_00,sVar2);
  }
  local_190 = local_1e0;
  uStack_198 = uStack_1e8;
  local_1a0 = local_1f0;
  *(undefined1 *)((long)pvVar1 + sVar2) = 0;
  local_1a8[0] = 4;
  puStack_188 = &local_180;
  local_1e0 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
                    /* try { // try from 003ed90c to 003ed91b has its CatchHandler @ 003edb50 */
  FUN_003edc3c(&local_1d8,&local_1c0,1);
  local_200 = 0;
  local_1f8 = (void *)0x0;
  local_208 = 0;
  sVar2 = strlen(__s);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 003edaec to 003edaf3 has its CatchHandler @ 003edaf4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_208 = CONCAT71(local_208._1_7_,(char)((int)sVar2 << 1));
    pvVar1 = (void *)((ulong)&local_208 | 1);
    if (sVar2 != 0) goto LAB_003ed980;
  }
  else {
    uVar6 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar1 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
    local_208 = uVar6 | 1;
    local_200 = sVar2;
    local_1f8 = pvVar1;
LAB_003ed980:
    memcpy(pvVar1,__s,sVar2);
  }
  local_48 = &local_208;
  *(undefined1 *)((long)pvVar1 + sVar2) = 0;
                    /* try { // try from 003ed99c to 003ed9b7 has its CatchHandler @ 003edb14 */
  lVar3 = FUN_003eeaa8(&local_88,&local_208,&DAT_039fea26,&local_48,auStack_50);
  puVar5 = (undefined8 *)(lVar3 + 0x60);
  *(undefined4 *)(lVar3 + 0x38) = 5;
  FUN_003e9f80((undefined8 *)(lVar3 + 0x58),*puVar5);
  *(long **)(lVar3 + 0x58) = local_1d8;
  *(long *)(lVar3 + 0x60) = lStack_1d0;
  *(long *)(lVar3 + 0x68) = local_1c8;
  if (local_1c8 == 0) {
    *(undefined8 *)(lVar3 + 0x58) = puVar5;
  }
  else {
    *(undefined8 **)(lStack_1d0 + 0x10) = puVar5;
    local_1d8 = &lStack_1d0;
    lStack_1d0 = 0;
  }
  local_1c8 = 0;
  if ((local_208 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_1f8);
  }
  FUN_003e9f80(&local_1d8,lStack_1d0);
  FUN_003edd2c(&local_1c0);
  if ((local_1f0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_1e0);
  }
LAB_003eda44:
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = local_88;
  plVar4 = (long *)(param_1 + 10);
  *plVar4 = local_80;
  *(long *)(param_1 + 0xc) = local_78;
  if (local_78 == 0) {
    *(long **)(param_1 + 8) = plVar4;
  }
  else {
    *(long **)(local_80 + 0x10) = plVar4;
    local_88 = &local_80;
    local_80 = 0;
    local_78 = 0;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  FUN_003e9f80(&local_88,local_80);
  return;
}


