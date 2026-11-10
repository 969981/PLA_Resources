/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0273eab8; name: FUN_0273eab8
 */


void FUN_0273eab8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_70 = *param_3;
  uStack_68 = param_3[1];
  local_60 = param_3[2];
  local_38 = (long *)param_3[3];
  local_58 = (long *)0x0;
  local_50 = local_70;
  uStack_48 = uStack_68;
  local_40 = local_60;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
    local_70 = *param_3;
    uStack_68 = param_3[1];
    local_60 = param_3[2];
    local_58 = (long *)param_3[3];
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  FUN_0273eb78(param_1,param_2,&local_50,param_4,auStack_78);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


