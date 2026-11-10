/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042f3e0; name: FUN_0042f3e0
 */


undefined8 FUN_0042f3e0(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 400) == (code *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0042f3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 400))();
  return uVar1;
}


