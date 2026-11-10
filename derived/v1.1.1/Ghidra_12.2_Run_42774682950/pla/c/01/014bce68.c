/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014bce68; name: FUN_014bce68
 */


void FUN_014bce68(long *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined1 *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined2 local_37;
  undefined1 local_35;
  
  local_38 = 0;
  local_37 = 0;
  local_35 = 0;
  local_48 = 0x3f80000000000009;
  uStack_40 = 0x83f800000;
  puVar1 = (undefined8 *)FUN_02ad80d0();
  local_68 = &DAT_121d7307bd58c49b;
  puStack_60 = &DAT_03a81ce8;
  local_58 = 0x1f;
  local_50 = (long *)0x0;
  FUN_02b59d78(param_1,*puVar1,&local_48,&local_68,param_3,*(undefined8 *)(param_2 + 0x50));
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  FUN_02bb32fc(*(undefined8 *)(*param_1 + 0x60),0);
  FUN_02bb3880(*(undefined8 *)(*param_1 + 0x60),0);
  FUN_02bb27d4(*(undefined8 *)(*param_1 + 0x60),0,1);
  FUN_02b58c7c(*param_1,param_4);
  return;
}


