/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025ac72c; name: FUN_025ac72c
 */


undefined1  [16] FUN_025ac72c(int param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  
  if (((param_1 < 1) && (param_2 < 1)) && (param_3 < 1)) {
    return ZEXT816(0);
  }
  auVar1._0_8_ = ((double)param_2 / 60.0) * 60.0 + (double)(uint)(param_1 * 0x3c) +
                 (((double)param_3 / 60.0) * 60.0) / 60.0;
  auVar1._8_8_ = 0;
  return auVar1;
}


