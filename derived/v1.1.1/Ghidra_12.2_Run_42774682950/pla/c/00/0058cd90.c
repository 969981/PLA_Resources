/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058cd90; name: FUN_0058cd90
 */


bool FUN_0058cd90(long param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_handshaker.cc"
                 ,0x251,2,"assertion failed: %s","handshaker != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_002ef750(param_1 + 0x68);
  cVar1 = *(char *)(param_1 + 0x90);
                    /* try { // try from 0058cdb0 to 0058cdb7 has its CatchHandler @ 0058cdf4 */
  FUN_002ef790(param_1 + 0x68);
  return cVar1 != '\0';
}


