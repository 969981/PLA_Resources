/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02837d60; name: FUN_02837d60
 */


void FUN_02837d60(long *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 2;
  if ((param_3 & 1) == 0) {
    uVar1 = 3;
  }
  if ((param_2 & 1) == 0) {
    uVar1 = ~param_3 & 1;
  }
  *(uint *)((long)param_1 + 0xdc) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02837d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc0))(param_1,param_3 & 1);
  return;
}


