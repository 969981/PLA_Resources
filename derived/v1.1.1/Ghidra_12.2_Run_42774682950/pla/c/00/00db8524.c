/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db8524; name: FUN_00db8524
 */


undefined8 FUN_00db8524(void)

{
  undefined8 local_18;
  
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_18,8);
  return local_18;
}


