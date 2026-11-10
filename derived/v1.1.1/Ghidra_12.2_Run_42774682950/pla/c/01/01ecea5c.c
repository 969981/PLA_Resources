/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ecea5c; name: FUN_01ecea5c
 */


void FUN_01ecea5c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00b6141c(param_2,param_1);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  param_2[5] = plVar1;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01eceac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


