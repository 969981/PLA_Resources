/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fa880; name: FUN_003fa880
 */


long * FUN_003fa880(char *param_1)

{
  int iVar1;
  long *__ptr;
  long lVar2;
  size_t sVar3;
  
  if (param_1 == (char *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x3b2,2,
                 "The root certificates are empty.");
  }
  else {
    __ptr = (long *)FUN_002ebd80(8);
    if (__ptr == (long *)0x0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x3b8,2,
                   "Could not allocate buffer for ssl_root_certs_store.");
      return (long *)0x0;
    }
    lVar2 = FUN_0046aa20();
    *__ptr = lVar2;
    if (lVar2 == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x3bd,2,
                   "Could not allocate buffer for X509_STORE.");
    }
    else {
      sVar3 = strlen(param_1);
      iVar1 = FUN_003fa980(lVar2,param_1,sVar3,0);
      if (iVar1 == 0) {
        return __ptr;
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x3c4,2,
                   "Could not load root certificates.");
      FUN_0046abb0(*__ptr);
    }
    free(__ptr);
  }
  return (long *)0x0;
}


