/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a3844; name: FUN_013a3844
 */


void FUN_013a3844(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00d39e50();
  *param_1 = &PTR_LAB_04209530;
  param_1[0xd] = 0;
  param_1[9] = &PTR_LAB_04209580;
  param_1[10] = &PTR_LAB_042095c8;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  uVar1 = FUN_00d73f40();
  param_1[0xe3] = uVar1;
  return;
}


