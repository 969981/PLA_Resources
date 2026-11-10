/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f34e4; name: FUN_003f34e4
 */


void FUN_003f34e4(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char *local_50;
  undefined4 local_48;
  
  if (param_2 == 0) {
    FUN_002f2c60(&local_50,"Handshaker shutdown");
    param_2 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc"
                           ,0xb5,&local_50,0,0);
  }
  uVar1 = FUN_002f1480(param_2);
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc"
               ,0xb8,0,"Security handshake failed: %s",uVar1);
  if (*(char *)(param_1 + 0x48) == '\0') {
    FUN_003f49a0(*(undefined8 *)(param_1 + 0x18));
    uVar1 = **(undefined8 **)(param_1 + 0x60);
    uVar2 = param_2;
    if (4 < param_2) {
      uVar2 = FUN_002f03c0(param_2,
                           "external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc"
                           ,0xc0);
    }
    FUN_00308310(uVar1,uVar2);
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x50) = *puVar3;
    *puVar3 = 0;
    *(undefined8 *)(param_1 + 0x58) = puVar3[2];
    puVar3[2] = 0;
    FUN_002e4a10(puVar3[1]);
    *(undefined8 *)(*(long *)(param_1 + 0x60) + 8) = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  local_50 = "external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc";
  local_48 = 0xc9;
  FUN_002f019c(&local_50,*(undefined8 *)(param_1 + 0x68),param_2);
  return;
}


