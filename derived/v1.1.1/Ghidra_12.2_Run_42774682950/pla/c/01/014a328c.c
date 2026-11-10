/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014a328c; name: FUN_014a328c
 */


void FUN_014a328c(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_00d39e50();
  param_1[0xd] = 0;
  puVar1 = PTR_DAT_0437a508;
  *param_1 = &PTR_LAB_04213530;
  param_1[0x15] = 0;
  param_1[9] = &PTR_LAB_04213580;
  param_1[10] = &PTR_LAB_042135c8;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = puVar1 + 0x10;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}


