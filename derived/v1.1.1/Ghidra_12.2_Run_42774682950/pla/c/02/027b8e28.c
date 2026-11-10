/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027b8e28; name: FUN_027b8e28
 */


void FUN_027b8e28(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  
  uStack_80 = *param_3;
  local_78 = param_3[1];
  uStack_70 = param_3[2];
  local_48 = (long *)param_3[3];
  local_68 = (long *)0x0;
  local_60 = uStack_80;
  uStack_58 = local_78;
  local_50 = uStack_70;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
    uStack_80 = *param_3;
    local_78 = param_3[1];
    uStack_70 = param_3[2];
    local_68 = (long *)param_3[3];
  }
  local_88 = *param_5;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  FUN_027b8efc(param_1,param_2,&local_60,param_4,&local_88);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


