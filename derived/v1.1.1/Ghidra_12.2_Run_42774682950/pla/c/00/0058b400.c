/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058b400; name: FUN_0058b400
 */


bool FUN_0058b400(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (undefined8 *)0x0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/transport_security_common_api.cc"
                 ,0x4a,2,"Invalid nullptr arguments to grpc_gcp_rpc_protocol_versions_encode().");
    return false;
  }
  lVar1 = FUN_00542580(param_1,PTR_PTR_04374e68,param_2,&local_18);
  if (lVar1 != 0) {
    FUN_002f2f40(&local_38,lVar1,local_18);
    param_3[1] = uStack_30;
    *param_3 = local_38;
    param_3[3] = uStack_20;
    param_3[2] = local_28;
  }
  return lVar1 != 0;
}


