/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d348c; name: FUN_008d348c
 */


void FUN_008d348c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [24];
  long *local_c0;
  undefined1 auStack_b8 [24];
  long *local_a0;
  undefined1 auStack_98 [24];
  long *local_80;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  local_48 = DAT_041b6f88;
  puStack_40 = PTR_DAT_041b6f90;
  local_38 = DAT_041b6f98;
  local_60 = DAT_041b6fa0;
  puStack_58 = PTR_s_PokeChangeAI_041b6fa8;
  local_50 = DAT_041b6fb0;
  local_68 = DAT_041b6fc8;
  local_78 = DAT_041b6fb8;
  puStack_70 = PTR_s_Evaluate_041b6fc0;
  lVar1 = FUN_008c5a28();
  FUN_02a4754c(auStack_98,&local_48);
  FUN_02a4754c(auStack_b8,&local_60);
  FUN_02a4754c(auStack_d8,&local_78);
  uVar2 = FUN_008c5a30(param_1);
  FUN_008d35a4(*(undefined8 *)(lVar1 + 0x68),auStack_98,auStack_b8,auStack_d8,uVar2,param_2);
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  return;
}


