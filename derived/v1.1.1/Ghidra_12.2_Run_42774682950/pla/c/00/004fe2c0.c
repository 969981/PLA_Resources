/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fe2c0; name: FUN_004fe2c0
 */


void FUN_004fe2c0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *local_1f0;
  long local_1e8;
  undefined1 auStack_1e0 [32];
  char *local_1c0;
  undefined8 local_1b8;
  byte local_190 [16];
  ulong local_180;
  undefined1 auStack_178 [32];
  undefined1 auStack_158 [296];
  
  FUN_00305000(auStack_158);
  iVar1 = FUN_004fe7d0(*(undefined4 *)(param_1 + 0xe),param_1 + 0x23,auStack_158);
  if (iVar1 == 0) {
    if (param_1[1] != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/http/message_compress/message_decompress_filter.cc"
                   ,0x106,2,"assertion failed: %s","error_ == ((grpc_error*)0L)");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_1c0 = "Unexpected error decompressing data for algorithm with enum value ";
    local_1b8 = 0x42;
    local_1e8 = FUN_002ed6a0(*(undefined4 *)(param_1 + 0xe),auStack_1e0);
    local_1e8 = local_1e8 - (long)auStack_1e0;
    local_1f0 = auStack_1e0;
    if (local_1e8 < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    FUN_002eced0(local_190,&local_1c0,&local_1f0);
    uVar4 = (ulong)local_190 | 1;
    if ((local_190[0] & 1) != 0) {
      uVar4 = local_180;
    }
                    /* try { // try from 004fe42c to 004fe44f has its CatchHandler @ 004fe4d0 */
    FUN_002f2ff0(auStack_178,uVar4);
    uVar3 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/http/message_compress/message_decompress_filter.cc"
                         ,0x10b,auStack_178,0,0);
    param_1[1] = uVar3;
    if ((local_190[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_180);
    }
    FUN_00305020(auStack_158);
    uVar4 = param_1[1];
  }
  else {
    FUN_004fefe4(param_1 + 0x48,auStack_158,
                 *(uint *)(*(long *)param_1[0x22] + 0xc) & 0x3fffffff | 0x40000000);
    puVar2 = *(undefined8 **)param_1[0x22];
    *(undefined8 **)param_1[0x22] = param_1 + 0x48;
    if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 004fe32c to 004fe32f has its CatchHandler @ 004fe4cc */
      (**(code **)*puVar2)();
    }
    param_1[0x22] = 0;
    uVar4 = param_1[1];
  }
  if (4 < uVar4) {
    uVar4 = FUN_002f03c0(uVar4,
                         "external/com_google_grpc_base/src/core/ext/filters/http/message_compress/message_decompress_filter.cc"
                         ,0x11b);
  }
  if (*(char *)(param_1 + 0x70) != '\0') {
    uVar3 = param_1[0x7b];
    *(undefined1 *)(param_1 + 0x70) = 0;
    param_1[0x7b] = 0;
    FUN_003d6e50(*param_1,param_1 + 0x71,uVar3,
                 "external/com_google_grpc_base/src/core/ext/filters/http/message_compress/message_decompress_filter.cc"
                 ,300,"Continuing OnRecvTrailingMetadataReady");
  }
  uVar3 = param_1[0x18];
  param_1[0x18] = 0;
  local_1c0 = 
  "external/com_google_grpc_base/src/core/ext/filters/http/message_compress/message_decompress_filter.cc"
  ;
  local_1b8 = CONCAT44(local_1b8._4_4_,0x123);
  FUN_00302c34(&local_1c0,uVar3,uVar4);
  return;
}


