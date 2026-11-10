/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ec0830; name: FUN_00ec0830
 */


void FUN_00ec0830(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  double __x;
  
  iVar1 = FUN_001504d0(param_1,1);
  if (iVar1 == 0) {
    __x = (double)FUN_00150a90(param_1,1,0);
    llround(__x);
  }
  else {
    FUN_00150ba0(param_1,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00ec086c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)();
  return;
}


