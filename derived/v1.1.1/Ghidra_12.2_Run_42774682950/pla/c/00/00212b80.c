/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00212b80; name: FUN_00212b80
 */


undefined8 FUN_00212b80(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return 0xffffffff;
    }
    if (*plVar1 == param_2) break;
    plVar1 = (long *)plVar1[2];
  }
  FUN_001e3790(param_1,plVar1,0);
  return 0;
}


