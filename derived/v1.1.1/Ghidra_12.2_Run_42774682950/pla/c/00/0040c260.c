/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040c260; name: FUN_0040c260
 */


long FUN_0040c260(void)

{
  long lVar1;
  
  lVar1 = FUN_004002a0(0x18,"external/openssl/crypto/bn/bn_lib.c",0xbe);
  if (lVar1 == 0) {
    FUN_004014b0(3,0x71,0x41,"external/openssl/crypto/bn/bn_lib.c",0xbf);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x14) = 1;
  return lVar1;
}


