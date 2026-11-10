/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e1d530; name: FUN_00e1d530
 */


void FUN_00e1d530(void)

{
  int iVar1;
  undefined8 in_x3;
  undefined4 in_w4;
  undefined8 *in_x6;
  double __x;
  
  iVar1 = FUN_001504d0(in_x3,in_w4);
  if (iVar1 == 0) {
    __x = (double)FUN_00150a90(in_x3,in_w4,0);
    llround(__x);
  }
  else {
    FUN_00150ba0(in_x3,in_w4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00e1d57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_x6)();
  return;
}


