/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d584e0; name: FUN_00d584e0
 */


void FUN_00d584e0(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long *plVar1;
  undefined1 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined8 local_78;
  long *local_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  
  local_b8 = 0;
  local_b0 = (long *)0x0;
  local_c8 = &DAT_cbf29ce484222645;
  puStack_c0 = &DAT_03996322;
  local_a8 = &DAT_cbf29ce484222645;
  puStack_a0 = &DAT_03996322;
  local_88 = &DAT_cbf29ce484222645;
  puStack_80 = &DAT_03996322;
  local_68 = &DAT_cbf29ce484222645;
  puStack_60 = &DAT_03996322;
  local_48 = 0xffffffff00000000;
  local_98 = 0;
  local_90 = (long *)0x0;
  local_78 = 0;
  local_70 = (long *)0x0;
  local_58 = 0;
  local_50 = (long *)0x0;
  FUN_00d582e4(&local_e8,param_4,param_5,1,1);
  plVar1 = local_b0;
  local_c8 = local_e8;
  puStack_c0 = (undefined1 *)uStack_e0;
  local_b8 = local_d8;
  local_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_b0 = local_d0;
  FUN_00d582e4(&local_e8,param_4,param_5,1,0);
  plVar1 = local_90;
  local_a8 = local_e8;
  puStack_a0 = (undefined1 *)uStack_e0;
  local_98 = local_d8;
  local_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_90 = local_d0;
  FUN_00d582e4(&local_e8,param_4,param_5,0,1);
  plVar1 = local_70;
  local_88 = local_e8;
  puStack_80 = (undefined1 *)uStack_e0;
  local_78 = local_d8;
  local_70 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_70 = local_d0;
  FUN_00d582e4(&local_e8,param_4,param_5,0,0);
  plVar1 = local_50;
  local_68 = local_e8;
  puStack_60 = (undefined1 *)uStack_e0;
  local_58 = local_d8;
  local_50 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_50 = local_d0;
  local_48 = CONCAT44(param_5,param_4);
  (**(code **)(*param_1 + 0x198))(param_1,param_2,param_3,&local_c8);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  return;
}


