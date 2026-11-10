/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00428270; name: FUN_00428270
 */


uint FUN_00428270(void)

{
  uint uVar1;
  
  uVar1 = nn::time::IsInitialized();
  return uVar1 & 1;
}


