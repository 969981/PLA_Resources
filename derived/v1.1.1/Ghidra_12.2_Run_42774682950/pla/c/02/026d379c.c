/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026d379c; name: FUN_026d379c
 */


void FUN_026d379c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar1 = (long *)param_2[3];
  param_1[3] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[4] = *param_3;
  param_1[5] = param_3[1];
  param_1[6] = param_3[2];
  plVar1 = (long *)param_3[3];
  param_1[7] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[8] = *param_4;
  param_1[9] = param_4[1];
  param_1[10] = param_4[2];
  plVar1 = (long *)param_4[3];
  param_1[0xb] = plVar1;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x026d3868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


