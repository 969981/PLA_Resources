/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059c7e4; name: FUN_0059c7e4
 */


void FUN_0059c7e4(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  char *local_40;
  undefined4 local_38;
  
  if (param_2 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0xc2b,2,"assertion failed: %s","error != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_40 = 
  "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
  local_38 = 0xc2c;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 2000);
  uVar1 = param_2;
  if (4 < param_2) {
    uVar1 = FUN_002f03c0(param_2,
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0xc2d);
  }
  FUN_002f019c(&local_40,uVar3,uVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(lVar2 + 2000) = 0;
  uVar1 = *(ulong *)(lVar2 + 0x958);
  if (4 < uVar1) {
    FUN_002f0430(uVar1,
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0xc2f);
  }
  if (param_2 < 5) {
    lVar2 = *(long *)(param_1 + 0x18);
    *(ulong *)(lVar2 + 0x958) = param_2;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    uVar3 = FUN_002f03c0(param_2,
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0xc30);
    lVar2 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(lVar2 + 0x958) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    param_2 = FUN_002f03c0(param_2,
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0xc31);
  }
  FUN_0059adb0(uVar3,lVar2,param_2);
  return;
}


