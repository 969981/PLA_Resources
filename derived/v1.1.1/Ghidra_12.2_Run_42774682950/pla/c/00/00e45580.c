/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e45580; name: FUN_00e45580
 */


void FUN_00e45580(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  double __x;
  
  *param_3 = 1;
  param_3[1] = param_3[1] + 1;
  iVar1 = FUN_001504d0();
  if (iVar1 == 0) {
    __x = (double)FUN_00150a90(param_1,param_2,0);
    llround(__x);
    return;
  }
  FUN_00150ba0(param_1,param_2,0);
  return;
}


