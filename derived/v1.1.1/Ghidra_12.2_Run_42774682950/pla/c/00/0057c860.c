/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057c860; name: FUN_0057c860
 */


undefined1 * FUN_0057c860(char *param_1,char *param_2)

{
  undefined1 *puVar1;
  size_t __n;
  size_t __n_00;
  undefined1 *__dest;
  
  __n = strlen(param_1);
  __n_00 = strlen(param_2);
  __dest = (undefined1 *)FUN_002ebd50(__n + __n_00 + 2);
  memcpy(__dest,param_1,__n);
  puVar1 = __dest + __n;
  *puVar1 = 0x2e;
  memcpy(puVar1 + 1,param_2,__n_00);
  puVar1 = puVar1 + 1 + __n_00;
  if (puVar1 < __dest) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/jwt/json_token.cc"
                 ,0xce,2,"assertion failed: %s","current >= result");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((long)puVar1 - (long)__dest != __n + __n_00 + 1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/jwt/json_token.cc"
                 ,0xcf,2,"assertion failed: %s","(uintptr_t)(current - result) == result_len");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *puVar1 = 0;
  free(param_1);
  free(param_2);
  return __dest;
}


