/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00350fa4; name: FUN_00350fa4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00350fa4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  size_t __n;
  undefined8 uVar5;
  void *__dest;
  ulong uVar6;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  ulong local_70;
  size_t local_68;
  void *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  
  local_58 = (undefined4 *)FUN_002e2e80(PTR_FUN_04373078,4);
  local_50 = local_58 + 1;
  *local_58 = 8;
  pbVar4 = (byte *)param_3[1];
  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  if ((*pbVar4 & 1) == 0) {
    __n = (size_t)(*pbVar4 >> 1);
    pbVar4 = pbVar4 + 1;
  }
  else {
    __n = *(size_t *)(pbVar4 + 8);
    pbVar4 = *(byte **)(pbVar4 + 0x10);
  }
  local_48 = local_50;
  if (0xffffffffffffffef < __n + 6) {
                    /* try { // try from 00351168 to 0035116f has its CatchHandler @ 003511b0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n + 6 < 0x17) {
    local_70 = (ulong)(byte)((int)__n << 1);
    __dest = (void *)((ulong)&local_70 | 1);
    if (__n == 0) goto LAB_0035107c;
  }
  else {
    uVar6 = __n + 0x16 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
    local_70 = uVar6 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,pbVar4,__n);
LAB_0035107c:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00351080 to 00351093 has its CatchHandler @ 003511b0 */
  FUN_002e4094(&local_70,".dummy",6);
  uVar5 = *param_3;
  local_80 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  uVar3 = s_google_protobuf_FileOptions_038eecc9._0_8_;
  uVar1 = CONCAT53(s_google_protobuf_FileOptions_038eecc9._11_5_,
                   s_google_protobuf_FileOptions_038eecc9._8_3_);
  uStack_88 = _UNK_03888f48;
  local_90 = _DAT_03888f40;
  uVar2 = CONCAT35(s_google_protobuf_FileOptions_038eecc9._16_3_,
                   s_google_protobuf_FileOptions_038eecc9._11_5_);
  *(undefined8 *)(local_80 + 0x13) = s_google_protobuf_FileOptions_038eecc9._19_8_;
  *(undefined8 *)(local_80 + 0xb) = uVar2;
  *(undefined8 *)(local_80 + 8) = uVar1;
  *(undefined8 *)local_80 = uVar3;
  local_80[0x1b] = '\0';
                    /* try { // try from 003510d4 to 003510f3 has its CatchHandler @ 00351170 */
  FUN_003511ec(param_1,&local_70,uVar5,param_2,param_3,&local_58,&local_90);
  if ((local_90 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
  if ((local_70 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
  if (local_58 != (undefined4 *)0x0) {
    local_50 = local_58;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return;
}


