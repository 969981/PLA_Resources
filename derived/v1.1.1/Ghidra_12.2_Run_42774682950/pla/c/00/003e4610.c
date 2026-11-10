/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e4610; name: FUN_003e4610
 */


void FUN_003e4610(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_002ebd80(0x78);
  plVar1[6] = (long)plVar1;
  plVar1[7] = 0;
  *plVar1 = (long)(plVar1 + 5);
  plVar1[5] = (long)plVar1;
  plVar1[1] = (long)(plVar1 + 5);
  plVar1[2] = 0;
  return;
}


