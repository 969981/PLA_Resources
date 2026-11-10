/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fcf30; name: FUN_003fcf30
 */


undefined8 FUN_003fcf30(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined1 auStack_130 [256];
  
  if (*param_3 >> 0x1f != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x1ee,2,
                 "assertion failed: %s","*unprotected_bytes_size <= INT_MAX");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = FUN_004c38e0();
  if (0 < iVar1) {
    *param_3 = (long)iVar1;
    return 0;
  }
  uVar2 = FUN_004c4da0(param_1);
  pcVar4 = "SSL_ERROR_NONE";
  switch(uVar2) {
  case 0:
    break;
  case 1:
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x1fe,2,
                 "Corruption detected.","SSL_ERROR_NONE");
    uVar3 = FUN_00401770();
    if (uVar3 == 0) {
      return 8;
    }
    do {
      FUN_00401a90(uVar3 & 0xffffffff,auStack_130,0x100);
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x1e6,2,
                   &DAT_038bd9bd,auStack_130);
      uVar3 = FUN_00401770();
    } while (uVar3 != 0);
    return 8;
  case 2:
  case 6:
    *param_3 = 0;
    return 0;
  case 3:
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x1fa,2,
                 "Peer tried to renegotiate SSL connection. This is unsupported.","SSL_ERROR_NONE");
    return 6;
  case 4:
    pcVar4 = "SSL_ERROR_WANT_X509_LOOKUP";
    break;
  case 5:
    pcVar4 = "SSL_ERROR_SYSCALL";
    break;
  case 7:
    pcVar4 = "SSL_ERROR_WANT_CONNECT";
    break;
  case 8:
    pcVar4 = "SSL_ERROR_WANT_ACCEPT";
    break;
  default:
    pcVar4 = "Unknown error";
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x202,2,
               "SSL_read failed with error %s.",pcVar4);
  return 10;
}


