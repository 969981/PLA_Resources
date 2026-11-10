/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00505318; name: FUN_00505318
 */


void FUN_00505318(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 local_170;
  undefined1 auStack_168 [32];
  ulong local_148;
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
                 ,0x12e,2,"assertion failed: %s",
                 "message_compression_algorithm_ != GRPC_MESSAGE_COMPRESS_NONE");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_00305000(auStack_168);
  lVar3 = param_1 + 0xf0;
  uVar4 = *(uint *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x28) + 0xc);
  iVar1 = FUN_004fe610(*(undefined4 *)(param_1 + 8),lVar3,auStack_168);
  if (iVar1 == 0) {
    if (PTR_DAT_04374000[0x10] != '\0') {
      iVar1 = FUN_003f1970(*(undefined4 *)(param_1 + 8),&local_170);
      if (iVar1 == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
                     ,0x14a,2,"assertion failed: %s",
                     "grpc_message_compression_algorithm_name( message_compression_algorithm_, &algo_name)"
                    );
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
                   ,0x14b,1,"Algorithm \'%s\' enabled but decided not to compress. Input size: %lu",
                   local_170,*(undefined8 *)(param_1 + 0x110));
    }
  }
  else {
    if (PTR_DAT_04374000[0x10] != '\0') {
      uVar5 = *(ulong *)(param_1 + 0x110);
      iVar1 = FUN_003f1970(*(undefined4 *)(param_1 + 8),&local_170);
      if (iVar1 == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
                     ,0x13e,2,"assertion failed: %s",
                     "grpc_message_compression_algorithm_name( message_compression_algorithm_, &algo_name)"
                    );
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_002ebea0((double)((1.0 - (float)local_148 / (float)uVar5) * 100.0),
                   "external/com_google_grpc_base/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
                   ,0x13f,1,"Compressed[%s] %lu bytes vs. %lu bytes (%.2f%% savings)",local_170,
                   uVar5,local_148);
    }
    FUN_00305510(lVar3,auStack_168);
    uVar4 = uVar4 | 0x80000000;
  }
  FUN_00305020(auStack_168);
  FUN_004fefe4(param_1 + 0x218,lVar3,uVar4);
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 8);
  puVar2 = *(undefined8 **)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = param_1 + 0x218;
  if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 00505464 to 00505467 has its CatchHandler @ 00505518 */
    (**(code **)*puVar2)();
  }
  *(long *)(param_1 + 0x358) = **(long **)(param_1 + 0x18);
  **(long **)(param_1 + 0x18) = param_1 + 0x360;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_003d7c00(param_2);
  return;
}


