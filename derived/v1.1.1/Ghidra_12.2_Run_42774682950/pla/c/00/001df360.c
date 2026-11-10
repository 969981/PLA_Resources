/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001df360; name: FUN_001df360
 */


void FUN_001df360(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return;
    }
    if (*plVar1 == param_2) break;
    plVar1 = (long *)plVar1[2];
  }
  FUN_001e3790((long *)(param_1 + 0x10),plVar1,0);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
  *(undefined8 *)(param_2 + 0x660) = 0;
  return;
}


