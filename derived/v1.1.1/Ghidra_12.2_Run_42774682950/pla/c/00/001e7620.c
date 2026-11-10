/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e7620; name: FUN_001e7620
 */


bool FUN_001e7620(long param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = (*(ulong *)(param_1 + 0xe8) & (long)param_2) != 0;
  }
  return bVar1;
}


