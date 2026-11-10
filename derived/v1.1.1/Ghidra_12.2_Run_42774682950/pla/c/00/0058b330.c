/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058b330; name: FUN_0058b330
 */


undefined8 FUN_0058b330(long param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/transport_security_common_api.cc"
                 ,0x2b,2,"versions is nullptr in grpc_gcp_rpc_protocol_versions_set_min().");
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return 1;
}


