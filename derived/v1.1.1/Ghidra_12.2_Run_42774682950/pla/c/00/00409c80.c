/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00409c80; name: FUN_00409c80
 */


long FUN_00409c80(void)

{
  long lVar1;
  
  lVar1 = FUN_004002a0(0x28,"external/openssl/crypto/asn1/a_object.c",0x153);
  if (lVar1 == 0) {
    FUN_004014b0(0xd,0x7b,0x41,"external/openssl/crypto/asn1/a_object.c",0x155);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x20) = 1;
  return lVar1;
}


