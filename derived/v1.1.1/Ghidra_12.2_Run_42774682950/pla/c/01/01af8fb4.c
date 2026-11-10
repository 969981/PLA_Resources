/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01af8fb4; name: FUN_01af8fb4
 */


bool FUN_01af8fb4(long *param_1)

{
  bool bVar1;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float fVar2;
  
  (**(code **)(*param_1 + 0x140))();
  if ((float)param_1[0xfa] <= extraout_s0) {
    if (extraout_s0 <= (float)param_1[0xfc]) {
      fVar2 = (float)((ulong)param_1[0xfc] >> 0x20);
      bVar1 = true;
      if (((float)((ulong)param_1[0xfa] >> 0x20) <= extraout_var) &&
         (bVar1 = false, !NAN(fVar2) && !NAN(extraout_var))) {
        bVar1 = fVar2 < extraout_var;
      }
      if (!bVar1) {
        return extraout_var_00 < (float)param_1[0xfb] || (float)param_1[0xfd] < extraout_var_00;
      }
    }
  }
  return true;
}


