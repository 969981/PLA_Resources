/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fafdb8; name: FUN_01fafdb8
 */


void FUN_01fafdb8(undefined8 *param_1)

{
  undefined4 local_28;
  undefined4 local_24;
  
  *param_1 = &PTR_FUN_0425aeb8;
  param_1[9] = &PTR_LAB_0425af40;
  param_1[10] = &PTR_LAB_0425af88;
  local_24 = 1;
  FUN_01fafe28(DAT_043d4b78,&local_24);
  local_28 = 0;
  FUN_01fafe28(DAT_043d4b78,&local_28);
  FUN_01faff68(param_1 + 0x4d);
  FUN_01fb02c0(param_1);
  return;
}


