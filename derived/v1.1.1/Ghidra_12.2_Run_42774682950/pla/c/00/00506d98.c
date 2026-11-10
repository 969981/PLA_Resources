/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00506d98; name: FUN_00506d98
 */


void FUN_00506d98(undefined8 *param_1,void *param_2,ulong param_3,long *param_4)

{
  undefined8 uVar1;
  void *__dest;
  ulong uVar2;
  ulong local_a0;
  ulong local_98;
  void *local_90;
  undefined1 auStack_88 [80];
  long *local_38;
  
  local_38 = param_4;
  if (param_4 == (long *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                 ,0x23,2,"assertion failed: %s","error != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_0050a1b0(auStack_88);
  if (*param_4 != 0) {
    *param_1 = 0;
    goto LAB_00506e70;
  }
  local_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  if (0xffffffffffffffef < param_3) {
                    /* try { // try from 00506eb4 to 00506ebb has its CatchHandler @ 00506ebc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_3 < 0x17) {
    local_a0 = (ulong)(byte)((int)param_3 << 1);
    __dest = (void *)((ulong)&local_a0 | 1);
    if (param_3 != 0) goto LAB_00506e30;
  }
  else {
    uVar2 = param_3 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar2);
    local_a0 = uVar2 | 1;
    local_98 = param_3;
    local_90 = __dest;
LAB_00506e30:
    memcpy(__dest,param_2,param_3);
  }
  *(undefined1 *)((long)__dest + param_3) = 0;
                    /* try { // try from 00506e44 to 00506e53 has its CatchHandler @ 00506ed0 */
  uVar1 = FUN_00509510(&local_a0,auStack_88,&local_38);
  *param_1 = uVar1;
  if ((local_a0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_90);
  }
LAB_00506e70:
  FUN_003ee5f8(auStack_88);
  return;
}


