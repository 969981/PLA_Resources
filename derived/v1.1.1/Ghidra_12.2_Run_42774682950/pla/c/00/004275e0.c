/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004275e0; name: FUN_004275e0
 */


long FUN_004275e0(long *param_1,ulong param_2)

{
  if (param_2 != 0) {
    if (param_2 <= (ulong)(param_1[4] - param_1[1])) {
      if (*param_1 == 0) {
        FUN_004014b0(0x24,0x71,0x44,"external/openssl/crypto/rand/rand_lib.c",0x2b3);
        return 0;
      }
      return *param_1 + param_1[1];
    }
    FUN_004014b0(0x24,0x71,0x7d,"external/openssl/crypto/rand/rand_lib.c",0x2ae);
  }
  return 0;
}


