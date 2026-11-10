/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00406610; name: FUN_00406610
 */


undefined8 FUN_00406610(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00400260(0x10,"external/openssl/crypto/init.c",0x332);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_004014b0(0xf,0x72,0x41,"external/openssl/crypto/init.c",0x333);
    return 0;
  }
  *puVar1 = param_1;
  puVar1[1] = DAT_0439e6c0;
  DAT_0439e6c0 = puVar1;
  return 1;
}


