/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f8fe0; name: FUN_001f8fe0
 */


int FUN_001f8fe0(int param_1,int param_2,int param_3,int param_4)

{
  param_1 = param_1 - param_3;
  if (0x20c49a < param_1) {
    return 0x7fffffff;
  }
  if (param_1 < -0x20c49a) {
    return -0x80000000;
  }
  return (param_2 - param_4) / 1000 + param_1 * 1000;
}


