/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001684a0; name: FUN_001684a0
 */


void FUN_001684a0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  if (param_2[4] == param_2[5]) {
    FUN_00167ad0();
    iVar1 = *param_2;
  }
  else {
    FUN_00168360();
    iVar1 = *param_2;
  }
  if (iVar1 - 1U < 6) {
                    /* WARNING: Could not recover jumptable at 0x001684ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_001684f0 + (ulong)(byte)(&DAT_039c5f6f)[iVar1 - 1U] * 4))();
    return;
  }
  FUN_00168360(param_1,param_2);
  return;
}


