/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314cea4; name: FUN_0314cea4
 */


void FUN_0314cea4(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_2 + 8) = 0x7f7fffee;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined4 *)((long)param_2 + 0xc) = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = &PTR_LAB_042aff48;
  param_2[2] = 0x5f7ffff05f7ffff0;
  param_2[9] = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 10) = 0xffffff;
  *(undefined4 *)(param_2 + 0xb) = 0xffffffff;
  *(undefined1 *)((long)param_2 + 0x5c) = 0xf;
  *(undefined2 *)(param_2 + 0xc) = 0xffff;
  *(undefined4 *)((long)param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0xf) = 0xffffff;
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  *(undefined1 *)((long)param_2 + 0x84) = 0xf;
  *(undefined2 *)(param_2 + 0x11) = 0xffff;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0xffffffffffffffff;
  puVar1 = PTR_FUN_042aff60;
  *(undefined4 *)((long)param_2 + 0x8c) = 0;
  (*(code *)puVar1)();
  *param_2 = &PTR_LAB_042ef768;
  param_2[0x15] = param_3[1];
  uVar2 = *param_3;
  param_2[0x16] = CONCAT44(param_1,param_1);
  param_2[0x14] = uVar2;
  return;
}


