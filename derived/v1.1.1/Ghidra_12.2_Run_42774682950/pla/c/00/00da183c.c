/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da183c; name: FUN_00da183c
 */


void FUN_00da183c(undefined8 *param_1)

{
  undefined *puVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar1 = PTR_DAT_0437a508 + 0x10;
  *param_1 = &PTR_LAB_041ed7f0;
  param_1[1] = puVar1;
  FUN_010868b8(param_1 + 7);
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


