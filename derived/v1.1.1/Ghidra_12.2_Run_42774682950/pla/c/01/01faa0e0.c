/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01faa0e0; name: FUN_01faa0e0
 */


long * FUN_01faa0e0(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  
  if (param_1 != param_2) {
    do {
      if (((*param_1 != 0) && (lVar1 = FUN_01fa9c0c(*param_1 + 8), lVar1 != 0)) &&
         (*(long *)*param_3 == lVar1)) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (param_2 != param_1);
    param_1 = param_2;
  }
  return param_1;
}


