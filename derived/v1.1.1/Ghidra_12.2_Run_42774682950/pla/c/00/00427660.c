/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00427660; name: FUN_00427660
 */


undefined8 FUN_00427660(long param_1,ulong param_2,long param_3)

{
  if ((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 8)) < param_2) {
    FUN_004014b0(0x24,0x72,0x7d,"external/openssl/crypto/rand/rand_lib.c",0x2c6);
    return 0;
  }
  if (param_2 != 0) {
    *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + param_2;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_3;
  }
  return 1;
}


