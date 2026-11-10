/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db84c4; name: FUN_00db84c4
 */


void FUN_00db84c4(undefined8 *param_1)

{
  undefined8 local_18;
  
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_18,8);
  *param_1 = local_18;
  param_1[1] = 0x82a2b175229d6a5b;
  param_1[2] = local_18;
  return;
}


