/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fce00; name: FUN_003fce00
 */


undefined8 FUN_003fce00(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (param_3 >> 0x1f != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x20f,2,
                 "assertion failed: %s","unprotected_bytes_size <= INT_MAX");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = FUN_004c3a80();
  if (-1 < iVar1) {
    return 0;
  }
  uVar2 = FUN_004c4da0(param_1,iVar1);
  pcVar3 = "SSL_ERROR_NONE";
  switch(uVar2) {
  case 0:
    break;
  case 1:
    pcVar3 = "SSL_ERROR_SSL";
    break;
  case 2:
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x215,2,
                 "Peer tried to renegotiate SSL connection. This is unsupported.","SSL_ERROR_NONE");
    return 6;
  case 3:
    pcVar3 = "SSL_ERROR_WANT_WRITE";
    break;
  case 4:
    pcVar3 = "SSL_ERROR_WANT_X509_LOOKUP";
    break;
  case 5:
    pcVar3 = "SSL_ERROR_SYSCALL";
    break;
  case 6:
    pcVar3 = "SSL_ERROR_ZERO_RETURN";
    break;
  case 7:
    pcVar3 = "SSL_ERROR_WANT_CONNECT";
    break;
  case 8:
    pcVar3 = "SSL_ERROR_WANT_ACCEPT";
    break;
  default:
    pcVar3 = "Unknown error";
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x219,2,
               "SSL_write failed with error %s.",pcVar3);
  return 7;
}


