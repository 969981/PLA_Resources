/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b4568; name: FUN_008b4568
 */


void FUN_008b4568(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  FUN_008b2820(param_1,6);
  *param_1 = &PTR_LAB_041b5be0;
  param_1[9] = &PTR_LAB_041b5c48;
  param_1[10] = &PTR_LAB_041b5c90;
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((long)param_1 + 0x7c) = *param_2;
  *(undefined4 *)((long)param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  return;
}


