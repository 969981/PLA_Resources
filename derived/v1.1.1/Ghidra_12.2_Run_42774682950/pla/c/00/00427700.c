/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00427700; name: FUN_00427700
 */


void FUN_00427700(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 2) == 0) {
    FUN_00406700(*param_1,param_1[4],"external/openssl/crypto/rand/rand_lib.c",0x1fa);
  }
  FUN_00400420(param_1,"external/openssl/crypto/rand/rand_lib.c",0x1fb);
  return;
}


