/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059a250; name: FUN_0059a250
 */


void FUN_0059a250(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [32];
  
  iVar1 = *(int *)(param_1 + 0xfc8);
  *(int *)(param_1 + 0xfc8) = iVar1 + 1;
  if (*(int *)(param_1 + 0xef4) <= iVar1 && *(int *)(param_1 + 0xef4) != 0) {
    FUN_002f2c60(auStack_40,"too_many_pings");
    uVar2 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0x6fc,auStack_40,0,0);
    uVar2 = FUN_002f0d20(uVar2,7,0xb);
    FUN_0059a320(param_1,uVar2);
    FUN_002f2c60(auStack_40,"Too many pings");
    uVar2 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0x701,auStack_40,0,0);
    uVar2 = FUN_002f0d20(uVar2,3,0xe);
    FUN_0059a470(param_1,uVar2);
  }
  return;
}


