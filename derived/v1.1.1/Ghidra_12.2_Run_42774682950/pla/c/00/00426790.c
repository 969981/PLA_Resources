/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00426790; name: FUN_00426790
 */


void FUN_00426790(long param_1)

{
  if (param_1 != 0) {
    FUN_0040c1e0();
    FUN_0040c1e0(param_1 + 0x18);
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      FUN_00400420(param_1,"external/openssl/crypto/bn/bn_recp.c",0x2a);
      return;
    }
  }
  return;
}


