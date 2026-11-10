/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00415c60; name: FUN_00415c60
 */


long FUN_00415c60(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_00415d20();
    lVar1 = (**(code **)(lVar1 + 8))();
  }
  else {
    lVar1 = (**(code **)(param_1 + 8))();
  }
  if (lVar1 == 0) {
    FUN_004014b0(0xe,0x6f,0x41,"external/openssl/crypto/conf/conf_lib.c",0xba);
    return 0;
  }
  return lVar1;
}


