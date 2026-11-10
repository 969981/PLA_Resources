/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f7244; name: FUN_030f7244
 */


void FUN_030f7244(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 8) = 0x7f7fffee;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_LAB_042aff48;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0x5f7ffff05f7ffff0;
  param_1[9] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffff;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x5c) = 0xf;
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x84) = 0xf;
  *(undefined2 *)(param_1 + 0x11) = 0xffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffffffffffff;
  puVar1 = PTR_FUN_042aff60;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  (*(code *)puVar1)();
  *param_1 = &PTR_LAB_042b5680;
  *(undefined1 *)(param_1 + 1) = 2;
  param_1[0x14] = param_2;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return;
}


