/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040d960; name: FUN_0040d960
 */


void FUN_0040d960(long param_1)

{
  if (param_1 != 0) {
    FUN_0040c140(param_1 + 8);
    FUN_0040c140(param_1 + 0x20);
    FUN_0040c140(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      FUN_00400420(param_1,"external/openssl/crypto/bn/bn_mont.c",0x104);
      return;
    }
  }
  return;
}


