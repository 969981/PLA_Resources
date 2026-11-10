/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00203c08; name: FUN_00203c08
 */


undefined8 FUN_00203c08(long param_1)

{
  char *pcVar1;
  
  if (*(ulong *)(param_1 + 0xa48) < 8) {
    if (((*(ulong *)(param_1 + 0xa50) | 0x10000) == 0x10000) ||
       ((long)*(ulong *)(param_1 + 0xa48) <= (long)*(ulong *)(param_1 + 0xa50) >> 0x10)) {
      return 1;
    }
    pcVar1 = "CURL_SSLVERSION_MAX incompatible with CURL_SSLVERSION";
  }
  else {
    pcVar1 = "Unrecognized parameter value passed via CURLOPT_SSLVERSION";
  }
  FUN_001f3ae0(param_1,pcVar1);
  return 0;
}


