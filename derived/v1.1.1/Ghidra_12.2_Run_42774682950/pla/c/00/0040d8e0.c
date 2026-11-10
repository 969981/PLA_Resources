/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040d8e0; name: FUN_0040d8e0
 */


undefined4 * FUN_0040d8e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00400260(0x60,"external/openssl/crypto/bn/bn_mont.c",0xe8);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_004014b0(3,0x95,0x41,"external/openssl/crypto/bn/bn_mont.c",0xe9);
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  FUN_0040c250(puVar1 + 2);
  FUN_0040c250(puVar1 + 8);
  FUN_0040c250(puVar1 + 0xe);
  *(undefined8 *)(puVar1 + 0x14) = 0;
  puVar1[0x16] = 1;
  return puVar1;
}


