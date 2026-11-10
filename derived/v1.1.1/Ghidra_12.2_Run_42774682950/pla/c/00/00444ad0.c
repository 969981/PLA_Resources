/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00444ad0; name: FUN_00444ad0
 */


undefined8 FUN_00444ad0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00444ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x28))();
  return uVar1;
}


