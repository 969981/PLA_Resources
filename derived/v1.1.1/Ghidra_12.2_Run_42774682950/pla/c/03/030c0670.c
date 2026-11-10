/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c0670; name: FUN_030c0670
 */


void FUN_030c0670(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  *param_1 = &PTR_LAB_042b4798;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[4] = &PTR_LAB_042b47d8;
  *(undefined4 *)(param_1 + 5) = param_2;
  param_1[8] = param_5;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[6] = param_4;
  param_1[7] = param_3;
  return;
}


