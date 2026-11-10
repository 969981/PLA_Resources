/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029546dc; name: FUN_029546dc
 */


void FUN_029546dc(long param_1)

{
  undefined8 local_18;
  
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_18,8);
  *(undefined8 *)(param_1 + 8) = local_18;
  *(undefined8 *)(param_1 + 0x10) = 0x82a2b175229d6a5b;
  *(undefined8 *)(param_1 + 0x18) = local_18;
  return;
}


