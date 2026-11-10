/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00423790; name: FUN_00423790
 */


long FUN_00423790(int *param_1)

{
  long lVar1;
  
  if (*param_1 != 6) {
    FUN_004014b0(6,0x79,0x7f,"external/openssl/crypto/evp/p_lib.c",0x1d5);
    return 0;
  }
  lVar1 = *(long *)(param_1 + 10);
  if (lVar1 != 0) {
    FUN_00452450(lVar1);
  }
  return lVar1;
}


