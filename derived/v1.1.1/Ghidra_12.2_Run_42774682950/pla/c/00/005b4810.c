/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b4810; name: FUN_005b4810
 */


long * FUN_005b4810(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/ssl/ssl_credentials.cc"
                 ,0x8c,1,
                 "grpc_ssl_credentials_create(pem_root_certs=%s, pem_key_cert_pair=%p, verify_options=%p, reserved=%p)"
                 ,param_1,param_2,param_3,param_4);
  }
  if (param_4 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/ssl/ssl_credentials.cc"
                 ,0x8d,2,"assertion failed: %s","reserved == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x50);
  puVar1 = PTR_DAT_04374fc8;
  if (plVar2 != (long *)0x0) {
    plVar2[2] = 1;
    plVar2[3] = (long)&DAT_0397b761;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    plVar2[9] = DAT_0388a620;
    FUN_005b412c(plVar2,param_1,param_2,param_3);
  }
  return plVar2;
}


