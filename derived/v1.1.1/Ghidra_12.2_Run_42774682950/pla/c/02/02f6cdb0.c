/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6cdb0; name: FUN_02f6cdb0
 */


void FUN_02f6cdb0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_042b7ad8;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  FUN_02f726bc(param_1 + 3,param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined2 *)((long)param_1 + 0x34) = *(undefined2 *)(param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x2c) = uVar1;
  FUN_02f724a8(param_1 + 7,param_2 + 0x38);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x50);
  return;
}


