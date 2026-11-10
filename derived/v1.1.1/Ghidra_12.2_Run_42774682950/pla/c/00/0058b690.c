/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058b690; name: FUN_0058b690
 */


undefined8 FUN_0058b690(uint *param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  if ((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/transport_security_common_api.cc"
                 ,199,2,"Invalid arguments to grpc_gcp_rpc_protocol_versions_check().");
    return 0;
  }
  puVar2 = param_2;
  if ((*param_1 <= *param_2) && ((*param_1 != *param_2 || (param_1[1] <= param_2[1])))) {
    puVar2 = param_1;
  }
  puVar3 = param_1 + 2;
  uVar4 = *puVar3;
  uVar1 = param_2[2];
  if ((uVar4 <= uVar1) && ((uVar4 != uVar1 || (param_1[3] <= param_2[3])))) {
    puVar3 = param_2 + 2;
    uVar4 = uVar1;
  }
  uVar1 = *puVar2;
  if ((uVar1 <= uVar4) && ((uVar1 != uVar4 || (puVar2[1] <= puVar3[1])))) {
    if (uVar1 < uVar4) {
      return 0;
    }
    if ((uVar1 == uVar4) && (puVar2[1] < puVar3[1])) {
      return 0;
    }
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)puVar2;
  }
  return 1;
}


