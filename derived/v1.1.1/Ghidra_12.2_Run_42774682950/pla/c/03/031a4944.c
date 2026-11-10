/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a4944; name: FUN_031a4944
 */


void FUN_031a4944(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  
  *param_1 = &PTR_LAB_042f6518;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = param_3;
  if (param_3 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    FUN_032d645c(param_3);
    plVar1 = (long *)param_1[3];
  }
  param_1[4] = param_2;
                    /* WARNING: Could not recover jumptable at 0x031a499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38));
  return;
}


