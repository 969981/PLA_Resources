/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046bbe0; name: FUN_0046bbe0
 */


long FUN_0046bbe0(void)

{
  long lVar1;
  
  lVar1 = FUN_004002a0(0x70,"external/openssl/crypto/x509/x509_vpm.c",0x56);
  if (lVar1 == 0) {
    FUN_004014b0(0xb,0x9f,0x41,"external/openssl/crypto/x509/x509_vpm.c",0x58);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x2c) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x24) = 0xffffffff00000000;
  return lVar1;
}


