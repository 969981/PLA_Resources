/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b10e8; name: FUN_008b10e8
 */


void FUN_008b10e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_008b2820(param_1,5);
  *param_1 = &PTR_LAB_041b5958;
  param_1[9] = &PTR_LAB_041b59c0;
  param_1[10] = &PTR_LAB_041b5a08;
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar1 = *param_2;
  *(undefined8 *)((long)param_1 + 0x84) = param_2[1];
  *(undefined8 *)((long)param_1 + 0x7c) = uVar1;
  *(undefined4 *)((long)param_1 + 0x8c) = uVar2;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}


