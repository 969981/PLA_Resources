/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001764e0; name: FUN_001764e0
 */


long FUN_001764e0(undefined8 param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  
  if (param_3 + 1 < 2) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001599d0(param_1,"attempt to perform \'n%%0\'");
    }
  }
  else {
    lVar1 = 0;
    if (param_3 != 0) {
      lVar1 = (long)param_2 / (long)param_3;
    }
    lVar1 = param_2 - lVar1 * param_3;
    if (lVar1 != 0) {
      return lVar1 + (param_3 & (long)(param_3 ^ param_2) >> 0x3f);
    }
  }
  return 0;
}


