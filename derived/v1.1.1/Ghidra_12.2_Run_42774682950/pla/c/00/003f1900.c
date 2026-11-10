/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f1900; name: FUN_003f1900
 */


undefined8 FUN_003f1900(int *param_1,int param_2,int param_3)

{
  if ((param_2 == 0) || (param_3 == 0)) {
    if (param_2 - 1U < 2) {
      *param_1 = param_2;
      return 1;
    }
    if (param_2 == 0) {
      if (param_3 == 0) {
        *param_1 = 0;
        return 1;
      }
      if (param_3 == 1) {
        *param_1 = 3;
        return 1;
      }
    }
  }
  *param_1 = 0;
  return 0;
}


