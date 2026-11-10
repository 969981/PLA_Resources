/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01282774; name: FUN_01282774
 */


void FUN_01282774(undefined8 *param_1)

{
  FUN_00d39e50();
  *param_1 = &PTR_FUN_042014b0;
  param_1[0xd] = 0;
  param_1[9] = &PTR_LAB_04201500;
  param_1[10] = &PTR_LAB_04201548;
  *(undefined2 *)(param_1 + 0xe) = 1;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  return;
}


