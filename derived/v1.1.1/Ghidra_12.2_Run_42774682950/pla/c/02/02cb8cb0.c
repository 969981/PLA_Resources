/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cb8cb0; name: FUN_02cb8cb0
 */


undefined8 FUN_02cb8cb0(void)

{
  undefined8 uVar1;
  
  if (DAT_04408910 == '\x01') {
    uVar1 = nn::nifm::IsNetworkAvailable();
    return uVar1;
  }
  return 0;
}


