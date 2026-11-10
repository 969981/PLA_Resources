/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e73608; name: FUN_01e73608
 */


void FUN_01e73608(long *param_1)

{
  long *plVar1;
  
  FUN_02a68230(param_1,0,0);
  *param_1 = (long)&DAT_04256120;
  plVar1 = (long *)param_1[0x3b];
  param_1[9] = (long)&PTR_LAB_042561b8;
  param_1[10] = (long)&PTR_LAB_04256200;
  param_1[0x3d] = param_1[0x3d] | 1;
  if ((plVar1 == (long *)0x0) || (plVar1 == param_1)) {
    plVar1 = (long *)param_1[0x3a];
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar1 = (long *)param_1[0x3a];
  }
  if ((plVar1 == (long *)0x0) || (plVar1 == param_1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01e736a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,0);
  return;
}


