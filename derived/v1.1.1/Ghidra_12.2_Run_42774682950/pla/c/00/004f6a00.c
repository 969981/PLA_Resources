/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f6a00; name: FUN_004f6a00
 */


void FUN_004f6a00(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_00446a50(*(undefined8 *)(param_1 + 8));
  thunk_FUN_0040a4b0(*(undefined8 *)(param_1 + 0x10));
  FUN_00423420(*(undefined8 *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00400420(*(undefined8 *)(param_1 + 0x28),"external/openssl/crypto/asn1/x_pkey.c",0x2d);
  }
  FUN_00400420(param_1,"external/openssl/crypto/asn1/x_pkey.c",0x2e);
  return;
}


