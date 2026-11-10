/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0151ac84; name: FUN_0151ac84
 */


void FUN_0151ac84(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *local_60;
  long local_58;
  long local_50;
  long local_48;
  long *local_40;
  undefined4 local_38;
  
  local_60 = (long *)*param_3;
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x18))();
  }
  local_58 = param_3[1];
  local_50 = param_3[2];
  local_48 = param_3[3];
  local_40 = (long *)param_3[4];
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x18))();
  }
  local_38 = (undefined4)param_3[5];
  FUN_0151b050(param_1,param_2,&local_60,param_4);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  return;
}


