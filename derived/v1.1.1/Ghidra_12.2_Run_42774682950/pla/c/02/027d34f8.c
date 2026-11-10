/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d34f8; name: FUN_027d34f8
 */


void FUN_027d34f8(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  long *local_48;
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_013ba5d8(&local_48,param_2 + 5,"+inner");
  FUN_02a47560(auStack_40,&local_48);
  local_58[0] = 0;
  local_50 = 0x2000;
  plVar1 = *(long **)(*param_2 + 0x60);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2 + 1);
  }
  local_60 = 0;
  FUN_013ba578(param_1,auStack_40,local_58,&local_60);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


