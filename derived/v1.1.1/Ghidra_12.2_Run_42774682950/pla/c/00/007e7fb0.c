/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e7fb0; name: FUN_007e7fb0
 */


void FUN_007e7fb0(void *param_1,ulong param_2)

{
  nn::crypto::GenerateCryptographicallyRandomBytes(param_1,param_2 & 0xffffffff);
  return;
}


