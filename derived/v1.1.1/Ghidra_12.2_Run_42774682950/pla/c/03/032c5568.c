/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c5568; name: FUN_032c5568
 */


long FUN_032c5568(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [128];
  undefined4 local_28;
  
  local_a8[0] = 0;
  local_b8 = local_a8;
  local_b0 = 0x8000008000000001;
  local_28 = *(undefined4 *)(param_1 + 0x90);
  local_d8 = *param_3;
  uStack_d0 = param_3[1];
  local_c8 = param_3[2];
  uStack_c0 = param_3[3];
  FUN_032c5440(&local_b8,param_2,&local_d8);
  FUN_032c5d4c(param_1,local_b8,~(uint)local_b8 + (uint)local_b8 + (int)local_b0);
  FUN_032c4ce8(&local_b8);
  return param_1;
}


