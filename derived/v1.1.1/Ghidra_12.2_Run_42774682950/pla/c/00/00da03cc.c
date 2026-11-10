/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da03cc; name: FUN_00da03cc
 */


void FUN_00da03cc(undefined8 *param_1)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  *param_1 = &PTR_LAB_041ed6a8;
  nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x12));
  nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x1d) == '\0') {
    cVar1 = *(char *)(param_1 + 0x17);
  }
  else {
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x18));
    cVar1 = *(char *)(param_1 + 0x17);
  }
  if (cVar1 != '\0') {
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x12));
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[3];
  *param_1 = &PTR_LAB_041ed6d8;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x00da0440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 6);
  return;
}


