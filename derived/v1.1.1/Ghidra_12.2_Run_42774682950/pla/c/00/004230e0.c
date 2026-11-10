/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004230e0; name: FUN_004230e0
 */


undefined8 * FUN_004230e0(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_004002a0(0x48,"external/openssl/crypto/evp/p_lib.c",0x8e);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_004014b0(6,0x6a,0x41,"external/openssl/crypto/evp/p_lib.c",0x91);
    return (undefined8 *)0x0;
  }
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined4 *)(puVar1 + 6) = 1;
  lVar2 = FUN_004000a0();
  puVar1[8] = lVar2;
  if (lVar2 == 0) {
    FUN_004014b0(6,0x6a,0x41,"external/openssl/crypto/evp/p_lib.c",0x9a);
    FUN_00400420(puVar1,"external/openssl/crypto/evp/p_lib.c",0x9b);
    return (undefined8 *)0x0;
  }
  return puVar1;
}


