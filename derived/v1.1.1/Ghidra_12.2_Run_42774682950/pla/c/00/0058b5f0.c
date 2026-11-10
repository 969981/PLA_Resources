/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058b5f0; name: FUN_0058b5f0
 */


undefined8 FUN_0058b5f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (((param_1 == (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) ||
     ((param_1 != (undefined8 *)0x0 && (param_2 == (undefined8 *)0x0)))) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/transport_security_common_api.cc"
                 ,0x9f,2,"Invalid arguments to grpc_gcp_rpc_protocol_versions_copy().");
    return 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/transport_security_common_api.cc"
                   ,0x1d,2,"versions is nullptr in grpc_gcp_rpc_protocol_versions_set_max().");
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/transport_security_common_api.cc"
                   ,0x2b,2,"versions is nullptr in grpc_gcp_rpc_protocol_versions_set_min().");
      return 1;
    }
    uVar1 = *param_1;
    param_2[1] = param_1[1];
    *param_2 = uVar1;
  }
  return 1;
}


