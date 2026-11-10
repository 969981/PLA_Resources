/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00412c30; name: FUN_00412c30
 */


undefined8 FUN_00412c30(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  uVar1 = FUN_0040e5a0(0,param_1,param_2,param_3,param_4);
  if ((int)uVar1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_043741b8;
      if (*(int *)(param_3 + 0x10) != 0) {
        UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_043741b0;
      }
                    /* WARNING: Could not recover jumptable at 0x00412c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_1,param_3);
      return uVar1;
    }
    uVar1 = 1;
  }
  return uVar1;
}


