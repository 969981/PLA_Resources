/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c7264; name: FUN_014c7264
 */


void FUN_014c7264(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x5c8) + 0x10))();
  FUN_02c5d40c(uVar1,param_2);
  FUN_014c427c(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x014c72bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x5c8) + 0x28))();
  return;
}


