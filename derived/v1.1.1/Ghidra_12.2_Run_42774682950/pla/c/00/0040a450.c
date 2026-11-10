/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040a450; name: FUN_0040a450
 */


long FUN_0040a450(void)

{
  long lVar1;
  
  lVar1 = FUN_004002a0(0x18,"external/openssl/crypto/asn1/asn1_lib.c",0x13c);
  if (lVar1 == 0) {
    FUN_004014b0(0xd,0x82,0x41,"external/openssl/crypto/asn1/asn1_lib.c",0x13e);
    return 0;
  }
  *(undefined4 *)(lVar1 + 4) = 4;
  return lVar1;
}


