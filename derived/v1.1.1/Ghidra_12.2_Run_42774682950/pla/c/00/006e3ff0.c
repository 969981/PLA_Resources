/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e3ff0; name: FUN_006e3ff0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e3ff0(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  size_t __n;
  char *__s;
  void *__dest;
  ulong uVar5;
  ulong local_78;
  size_t local_70;
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  
  if ((*(byte *)(param_3 + 0x80) & 1) == 0) {
    cVar1 = *(char *)(param_3 + 0x81);
  }
  else {
    cVar1 = **(char **)(param_3 + 0x90);
  }
  if (cVar1 == '\0') goto LAB_006e4140;
  local_50 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  uVar4 = s_grpc_ssl_target_name_override_039a8b93._0_8_;
  uVar3 = CONCAT53(s_grpc_ssl_target_name_override_039a8b93._16_5_,
                   s_grpc_ssl_target_name_override_039a8b93._13_3_);
  uStack_58 = _UNK_03889f78;
  local_60 = _DAT_03889f70;
  uVar2 = CONCAT35(s_grpc_ssl_target_name_override_039a8b93._13_3_,
                   s_grpc_ssl_target_name_override_039a8b93._8_5_);
  *(undefined8 *)(local_50 + 0x15) = s_grpc_ssl_target_name_override_039a8b93._21_8_;
  *(undefined8 *)(local_50 + 0xd) = uVar3;
  *(undefined8 *)(local_50 + 8) = uVar2;
  *(undefined8 *)local_50 = uVar4;
  local_50[0x1d] = '\0';
  if ((*(byte *)(param_3 + 0x80) & 1) == 0) {
    __s = (char *)(param_3 + 0x81);
  }
  else {
    __s = *(char **)(param_3 + 0x90);
  }
  local_70 = 0;
  local_68 = (void *)0x0;
  local_78 = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006e4164 to 006e416b has its CatchHandler @ 006e416c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_78 | 1);
    if (__n != 0) goto LAB_006e40ec;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
    local_78 = uVar5 | 1;
    local_70 = __n;
    local_68 = __dest;
LAB_006e40ec:
    memcpy(__dest,__s,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 006e4100 to 006e410f has its CatchHandler @ 006e417c */
  FUN_002e3154(param_2,&local_60,&local_78);
  if ((local_78 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
LAB_006e4140:
                    /* try { // try from 006e4140 to 006e414b has its CatchHandler @ 006e41c8 */
  FUN_002e3358(param_1,param_2);
  return;
}


