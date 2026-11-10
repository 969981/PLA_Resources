/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026223e4; name: FUN_026223e4
 */


void FUN_026223e4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_04287c30;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[5] = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[4] = uVar1;
  return;
}


