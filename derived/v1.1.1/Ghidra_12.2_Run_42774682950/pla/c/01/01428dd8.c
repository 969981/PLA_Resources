/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01428dd8; name: FUN_01428dd8
 */


void FUN_01428dd8(undefined8 *param_1)

{
  FUN_00d39e50();
  *param_1 = &PTR_LAB_0420f010;
  param_1[0xd] = 0;
  param_1[9] = &PTR_LAB_0420f060;
  param_1[10] = &PTR_LAB_0420f0a8;
  *(undefined2 *)(param_1 + 0xe) = 1;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}


