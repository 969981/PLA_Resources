/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0266ffac; name: FUN_0266ffac
 */


void FUN_0266ffac(undefined8 *param_1,undefined4 *param_2)

{
  FUN_01a6fbe4();
  *param_1 = &PTR_FUN_04265948;
  param_1[9] = &PTR_LAB_04265ad8;
  param_1[10] = &PTR_LAB_04265bb8;
  *(undefined4 *)((long)param_1 + 0x59c) = *param_2;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  FUN_01afe0dc(param_1 + 0xc0,param_2 + 2);
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  FUN_00d828bc(param_1 + 0xc4,param_2 + 6);
  *(undefined2 *)(param_1 + 0xcc) = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  return;
}


