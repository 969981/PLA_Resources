/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00427aa0; name: FUN_00427aa0
 */


undefined8 * FUN_00427aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_004002a0(0x38,"external/openssl/crypto/rand/rand_lib.c",0x1d4);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_004014b0(0x24,0x7c,0x41,"external/openssl/crypto/rand/rand_lib.c",0x1d7);
    return (undefined8 *)0x0;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 2) = 1;
  puVar1[5] = param_3;
  puVar1[3] = param_2;
  puVar1[4] = param_2;
  return puVar1;
}


