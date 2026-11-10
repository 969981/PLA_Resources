/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00423610; name: FUN_00423610
 */


undefined8 FUN_00423610(int *param_1,long *param_2)

{
  int *piVar1;
  
  if (*param_1 == 0x426) {
    piVar1 = *(int **)(param_1 + 10);
    *param_2 = (long)*piVar1;
    return *(undefined8 *)(piVar1 + 2);
  }
  FUN_004014b0(6,0xac,0xaf,"external/openssl/crypto/evp/p_lib.c",0x1c0);
  return 0;
}


