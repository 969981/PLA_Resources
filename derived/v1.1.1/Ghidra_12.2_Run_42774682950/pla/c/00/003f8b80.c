/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f8b80; name: FUN_003f8b80
 */


undefined8 FUN_003f8b80(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [32];
  
  lVar2 = FUN_003f4c80(param_1,"ssl_alpn_selected_protocol");
  if (lVar2 == 0) {
    FUN_002f2c60(auStack_30,"Cannot check peer: missing selected ALPN property.");
    uVar3 = 0xa0;
  }
  else {
    iVar1 = FUN_004f9d30(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
    if (iVar1 != 0) {
      return 0;
    }
    FUN_002f2c60(auStack_30,"Cannot check peer: invalid ALPN value.");
    uVar3 = 0xa4;
  }
  uVar3 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl_utils.cc"
                       ,uVar3,auStack_30,0,0);
  return uVar3;
}


