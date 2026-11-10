/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c14fc; name: FUN_008c14fc
 */


void FUN_008c14fc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  
  FUN_008b2820(param_1,0xe);
  *param_1 = &PTR_LAB_041b67a8;
  param_1[9] = &PTR_LAB_041b6810;
  param_1[10] = &PTR_LAB_041b6858;
  param_1[0x10] = *param_2;
  param_1[0x11] = param_2[1];
  param_1[0x12] = param_2[2];
  plVar1 = (long *)param_2[3];
  param_1[0x13] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  return;
}


