/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f77dc; name: FUN_012f77dc
 */


void FUN_012f77dc(undefined8 *param_1)

{
  FUN_00d39e50();
  *param_1 = &PTR_FUN_04203688;
  *(undefined4 *)(param_1 + 0xd) = 0x1000000;
  param_1[9] = &PTR_LAB_042036d8;
  param_1[10] = &PTR_LAB_04203720;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  return;
}


