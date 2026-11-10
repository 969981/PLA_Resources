/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec6c74; name: FUN_02ec6c74
 */


undefined8 FUN_02ec6c74(long *param_1,long param_2)

{
  param_1 = (long *)*param_1;
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1[1] == param_2) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


