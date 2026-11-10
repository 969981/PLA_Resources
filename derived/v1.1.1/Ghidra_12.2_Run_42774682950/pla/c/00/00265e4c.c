/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00265e4c; name: FUN_00265e4c
 */


void FUN_00265e4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00265ebc(0x3f800000,param_1,0,1,0);
    param_2 = param_2 + -1;
    if (0 < param_2) {
      do {
        FUN_00265ebc(0x3f800000,param_1,0,1,0);
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}


