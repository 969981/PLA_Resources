/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033784ac; name: FUN_033784ac
 */


void FUN_033784ac(long *param_1,int param_2)

{
  long local_20;
  int local_18;
  
  local_20 = *(long *)(*(long *)(*param_1 + 0x40) + (long)param_2 * 8);
  if (local_20 != 0) {
    *(undefined8 *)(*(long *)(*param_1 + 0x40) + (long)param_2 * 8) = 0;
    local_18 = param_2;
    FUN_033784f4(*param_1 + 0x50,&local_20);
  }
  return;
}


