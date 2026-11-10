/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059ecc0; name: FUN_0059ecc0
 */


void FUN_0059ecc0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  char *local_40;
  undefined4 local_38;
  
  uVar1 = *(ulong *)(param_1 + 0x48);
  if (uVar1 == 0) {
    if (param_2 != (undefined8 *)0x0) {
      param_2[3] = 0;
      *param_2 = 0;
      if (*(long *)(param_1 + 0xeb8) == 0) {
        puVar2 = (undefined8 *)(param_1 + 0xeb8);
      }
      else {
        puVar2 = *(undefined8 **)(param_1 + 0xec0);
      }
      *puVar2 = param_2;
      *(undefined8 **)(param_1 + 0xec0) = param_2;
    }
    if (param_3 != (undefined8 *)0x0) {
      param_3[3] = 0;
      *param_3 = 0;
      if (*(long *)(param_1 + 0xec8) == 0) {
        puVar2 = (undefined8 *)(param_1 + 0xec8);
      }
      else {
        puVar2 = *(undefined8 **)(param_1 + 0xed0);
      }
      *puVar2 = param_3;
      *(undefined8 **)(param_1 + 0xed0) = param_3;
    }
  }
  else {
    local_40 = 
    "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
    local_38 = 0x692;
    if (4 < uVar1) {
      uVar1 = FUN_002f03c0(uVar1,
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x693);
    }
    FUN_002f019c(&local_40,param_2,uVar1);
    local_40 = 
    "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
    local_38 = 0x694;
    uVar1 = *(ulong *)(param_1 + 0x48);
    if (4 < uVar1) {
      uVar1 = FUN_002f03c0(uVar1,
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x695);
    }
    FUN_002f019c(&local_40,param_3,uVar1);
  }
  return;
}


