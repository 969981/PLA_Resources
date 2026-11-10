/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00451f30; name: FUN_00451f30
 */


long FUN_00451f30(long param_1)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      return *(long *)(param_1 + 0x10);
    }
    FUN_00451fb0(&local_18);
    lVar1 = local_18;
    if (local_18 != 0) {
      FUN_004014b0(0xb,0x77,0x44,"external/openssl/crypto/x509/x_pubkey.c",0xa2);
      FUN_00423420(lVar1);
    }
  }
  return 0;
}


