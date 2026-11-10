/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fd0ac; name: FUN_001fd0ac
 */


undefined8 FUN_001fd0ac(long param_1,long *param_2)

{
  long *plVar1;
  
  if (param_2 != (long *)0x0) {
    for (plVar1 = (long *)*param_2; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
      if (*plVar1 == param_1) {
        FUN_001e3790(param_2,plVar1,0);
        return 1;
      }
    }
  }
  return 0;
}


