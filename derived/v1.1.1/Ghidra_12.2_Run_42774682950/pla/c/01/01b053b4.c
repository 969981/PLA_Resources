/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b053b4; name: FUN_01b053b4
 */


void FUN_01b053b4(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = 1L << (param_2 & 0x3f);
  if ((param_3 & 1) == 0) {
    uVar1 = param_1[0x188] & (uVar1 ^ 0xffffffffffffffff);
  }
  else {
    uVar1 = param_1[0x188] | uVar1;
  }
  param_1[0x188] = uVar1;
  if (((uVar1 & 0x3f) == 0) || (*(char *)((long)param_1 + 0xa1d) == '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01b053f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))();
  return;
}


