/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03321694; name: FUN_03321694
 */


undefined8 FUN_03321694(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 == (long *)0x0) {
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x033216a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,param_1);
  return uVar2;
}


