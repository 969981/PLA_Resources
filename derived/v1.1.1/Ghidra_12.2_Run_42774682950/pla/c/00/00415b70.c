/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00415b70; name: FUN_00415b70
 */


long FUN_00415b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_00417bd0();
  if (lVar1 == 0) {
    if (param_1 == 0) {
      FUN_004014b0(0xe,0x6d,0x6a,"external/openssl/crypto/conf/conf_lib.c",0x10e);
    }
    else {
      FUN_004014b0(0xe,0x6d,0x6c,"external/openssl/crypto/conf/conf_lib.c",0x111);
      FUN_00402170(4,"group=",param_2," name=",param_3);
    }
  }
  return lVar1;
}


