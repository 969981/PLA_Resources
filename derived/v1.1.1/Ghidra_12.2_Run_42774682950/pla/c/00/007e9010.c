/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e9010; name: FUN_007e9010
 */


undefined8 FUN_007e9010(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    for (plVar1 = (long *)param_1[1]; plVar1 != param_1; plVar1 = (long *)plVar1[1]) {
      if (plVar1 == param_2) {
        return 1;
      }
    }
  }
  return 0;
}


