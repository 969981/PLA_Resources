/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058b490; name: FUN_0058b490
 */


undefined8 FUN_0058b490(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  if (param_2 == (undefined4 *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/transport_security_common_api.cc"
                 ,0x5c,2,"version is nullptr in grpc_gcp_rpc_protocol_versions_decode().");
    uVar6 = 0;
  }
  else {
    lVar2 = FUN_0053f520(0,0,PTR_PTR_04374c10);
    lVar1 = (long)param_1 + 9;
    if (*param_1 != 0) {
      lVar1 = param_1[2];
    }
    uVar4 = param_1[1] & 0xff;
    if (*param_1 != 0) {
      uVar4 = param_1[1];
    }
                    /* try { // try from 0058b4dc to 0058b56b has its CatchHandler @ 0058b5d0 */
    puVar3 = (undefined8 *)FUN_0053ee00(PTR_PTR_04374e68,lVar2);
    if ((puVar3 == (undefined8 *)0x0) ||
       (uVar4 = FUN_005403e0(lVar1,uVar4,puVar3,PTR_PTR_04374e68,lVar2), (uVar4 & 1) == 0)) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/transport_security_common_api.cc"
                   ,0x67,2,"cannot deserialize RpcProtocolVersions message");
      uVar6 = 0;
    }
    else {
      puVar5 = (undefined4 *)*puVar3;
      if (puVar5 == (undefined4 *)0x0) {
        *param_2 = 0;
        param_2[1] = 0;
        puVar5 = (undefined4 *)puVar3[1];
      }
      else {
        *param_2 = *puVar5;
        param_2[1] = puVar5[1];
        puVar5 = (undefined4 *)puVar3[1];
      }
      if (puVar5 == (undefined4 *)0x0) {
        param_2[2] = 0;
        param_2[3] = 0;
        uVar6 = 1;
      }
      else {
        param_2[2] = *puVar5;
        param_2[3] = puVar5[1];
        uVar6 = 1;
      }
    }
    if (lVar2 != 0) {
                    /* try { // try from 0058b5b0 to 0058b5b7 has its CatchHandler @ 0058b5cc */
      FUN_0053f5f0(lVar2);
    }
  }
  return uVar6;
}


