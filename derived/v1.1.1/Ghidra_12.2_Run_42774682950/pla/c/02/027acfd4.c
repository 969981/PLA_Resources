/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027acfd4; name: FUN_027acfd4
 */


void FUN_027acfd4(undefined8 param_1,long *param_2)

{
  undefined4 local_60 [2];
  undefined8 local_58;
  long *local_50;
  undefined1 auStack_48 [24];
  long *local_30;
  undefined8 local_28;
  
  FUN_013ba5d8(&local_50,param_2 + 1,"+inner");
  FUN_02a47560(auStack_48,&local_50);
  local_60[0] = 0;
  local_28 = 0;
  local_58 = 0x2000;
  if (*(long *)(*param_2 + 0x68) != 0) {
    FUN_013b6898(*(long *)(*param_2 + 0x68),&local_28);
  }
  local_28 = 0;
  FUN_013ba578(param_1,auStack_48,local_60,&local_28);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


