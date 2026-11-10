/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00802560; name: FUN_00802560
 */


undefined8 FUN_00802560(long *param_1)

{
  undefined8 uVar1;
  
  if (*(short *)((long)param_1 + 0x1a) == -1) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00802578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x60))();
  return uVar1;
}


