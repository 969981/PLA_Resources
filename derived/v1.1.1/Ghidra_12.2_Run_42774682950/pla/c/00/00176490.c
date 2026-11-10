/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00176490; name: FUN_00176490
 */


long FUN_00176490(undefined8 param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  
  if (param_3 + 1 < 2) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001599d0(param_1,"attempt to divide by zero");
    }
    return -param_2;
  }
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = (long)param_2 / (long)param_3;
  }
  if ((long)(param_3 ^ param_2) < 0) {
    return lVar1 - (ulong)(param_2 != lVar1 * param_3);
  }
  return lVar1;
}


