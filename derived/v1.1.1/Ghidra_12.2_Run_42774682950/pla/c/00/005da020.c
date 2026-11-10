/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005da020; name: FUN_005da020
 */


void FUN_005da020(long param_1,ulong param_2)

{
  char *local_20;
  undefined4 local_18;
  
  local_18 = 0xad;
  local_20 = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/http_connect_handshaker.cc";
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined2 *)(param_1 + 0x1f0) = 0;
  *(code **)(param_1 + 0x1d8) = FUN_005da0a8;
  *(long *)(param_1 + 0x1e0) = param_1;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(char **)(param_1 + 0x1f8) =
       "external/com_google_grpc_base/src/core/ext/filters/client_channel/http_connect_handshaker.cc"
  ;
  *(undefined4 *)(param_1 + 0x200) = 0xb0;
  if (4 < param_2) {
    param_2 = FUN_002f03c0(param_2,
                           "external/com_google_grpc_base/src/core/ext/filters/client_channel/http_connect_handshaker.cc"
                           ,0xb1);
  }
  FUN_002f019c(&local_20,param_1 + 0x1d0,param_2);
  return;
}


