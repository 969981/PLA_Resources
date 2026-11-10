/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00927294; name: FUN_00927294
 */


void FUN_00927294(undefined8 *param_1)

{
  FUN_00926734();
  *param_1 = &PTR_LAB_041b7c90;
  param_1[9] = &PTR_LAB_041b7cd8;
  param_1[10] = &PTR_LAB_041b7d20;
  param_1[0xe] = 0x1f00000000;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0x1f;
  *(undefined4 *)((long)param_1 + 0x82) = 0x1f0000;
  *(undefined2 *)((long)param_1 + 0x86) = 0x1f;
  return;
}


