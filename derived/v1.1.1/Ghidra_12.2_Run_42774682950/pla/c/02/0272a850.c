/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0272a850; name: FUN_0272a850
 */


void FUN_0272a850(undefined8 param_1,undefined8 *param_2)

{
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = *param_2;
  local_38 = param_2[1];
  local_30 = param_2[2];
  local_28 = (long *)param_2[3];
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  local_50[0] = 1;
  local_48 = 0x2000;
  FUN_0275897c(param_1,&local_40,local_50);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


