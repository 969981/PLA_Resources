/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00851208; name: FUN_00851208
 */


void FUN_00851208(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x58))();
                    /* WARNING: Could not recover jumptable at 0x00851230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,uVar1);
  return;
}


