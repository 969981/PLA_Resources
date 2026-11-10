/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00415a60; name: FUN_00415a60
 */


long FUN_00415a60(long *param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    FUN_004014b0(0x25,0x6c,0x43,"external/openssl/crypto/dso/dso_lib.c",0xb2);
    return 0;
  }
  if (*(code **)(*param_1 + 0x18) == (code *)0x0) {
    FUN_004014b0(0x25,0x6c,0x6c,"external/openssl/crypto/dso/dso_lib.c",0xb6);
    return 0;
  }
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 == 0) {
    FUN_004014b0(0x25,0x6c,0x6a,"external/openssl/crypto/dso/dso_lib.c",0xba);
    return 0;
  }
  return lVar1;
}


