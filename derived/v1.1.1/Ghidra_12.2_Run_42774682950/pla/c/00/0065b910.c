/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065b910; name: FUN_0065b910
 */


void FUN_0065b910(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar1 = param_1[1];
  if (lVar1 == lVar2) {
    lVar1 = lVar2;
  }
  else {
    do {
      lVar1 = lVar1 + -0x20;
      FUN_00689be4(lVar1);
    } while (lVar2 != lVar1);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x0065b97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar1,param_1[2] - lVar1,8);
  return;
}


