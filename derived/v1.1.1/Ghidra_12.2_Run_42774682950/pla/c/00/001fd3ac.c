/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fd3ac; name: FUN_001fd3ac
 */


undefined8 FUN_001fd3ac(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (*(long *)(*(long *)(param_1 + 0x420) + 0x38) == 0)) {
    *param_2 = 1;
    return 0;
  }
  *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x001fd3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)(param_1 + 0x420) + 0x38))();
  return uVar1;
}


