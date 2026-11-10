/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040a5b0; name: FUN_0040a5b0
 */


void FUN_0040a5b0(long param_1,int param_2)

{
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x10) >> 4 & 1) == 0) {
      FUN_00400420(*(undefined8 *)(param_1 + 8),"external/openssl/crypto/asn1/asn1_lib.c",0x14a);
    }
    if (param_2 == 0) {
      FUN_00400420(param_1,"external/openssl/crypto/asn1/asn1_lib.c",0x14c);
      return;
    }
  }
  return;
}


