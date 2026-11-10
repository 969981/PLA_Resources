/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d9f28; name: FUN_005d9f28
 */


void FUN_005d9f28(long param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char *local_40;
  undefined4 local_38;
  
  if (param_2 == 0) {
    FUN_002f2c60(&local_40,"Handshaker shutdown");
    param_2 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/http_connect_handshaker.cc"
                           ,0x73,&local_40,0,0);
    cVar1 = *(char *)(param_1 + 0x38);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x38);
  }
  if (cVar1 == '\0') {
    uVar4 = **(undefined8 **)(param_1 + 0x50);
    uVar2 = param_2;
    if (4 < param_2) {
      uVar2 = FUN_002f03c0(param_2,
                           "external/com_google_grpc_base/src/core/ext/filters/client_channel/http_connect_handshaker.cc"
                           ,0x7a);
    }
    FUN_00308310(uVar4,uVar2);
    puVar3 = *(undefined8 **)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x40) = *puVar3;
    *puVar3 = 0;
    *(undefined8 *)(param_1 + 0x48) = puVar3[2];
    puVar3[2] = 0;
    FUN_002e4a10(puVar3[1]);
    *(undefined8 *)(*(long *)(param_1 + 0x50) + 8) = 0;
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  local_40 = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/http_connect_handshaker.cc";
  local_38 = 0x83;
  FUN_002f019c(&local_40,*(undefined8 *)(param_1 + 0x58),param_2);
  return;
}


