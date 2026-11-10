/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004235c0; name: FUN_004235c0
 */


undefined8 FUN_004235c0(int *param_1,long *param_2)

{
  int *piVar1;
  
  if (*param_1 == 0x425) {
    piVar1 = *(int **)(param_1 + 10);
    *param_2 = (long)*piVar1;
    return *(undefined8 *)(piVar1 + 2);
  }
  FUN_004014b0(6,0xb8,0xa4,"external/openssl/crypto/evp/p_lib.c",0x1b1);
  return 0;
}


