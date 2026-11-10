/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eda744; name: FUN_02eda744
 */


undefined8 FUN_02eda744(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == param_2) || (*(long **)(param_1 + 0x80) == (long *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x02eda75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(param_1 + 0x80) + 0x230))();
  return uVar1;
}


