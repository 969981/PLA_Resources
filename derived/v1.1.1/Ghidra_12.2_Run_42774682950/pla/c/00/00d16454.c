/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d16454; name: FUN_00d16454
 */


void FUN_00d16454(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_58;
  char *local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_00d894e4();
  *param_1 = &PTR_LAB_041ea0e0;
  param_1[0xf] = param_2;
  param_1[9] = &PTR_LAB_041ea150;
  param_1[10] = &PTR_LAB_041ea198;
  local_58 = 0xb2c7ca93a71a8bc6;
  local_50 = "SetupResidentEvent";
  uStack_48 = 0x12;
  FUN_02a4754c(auStack_40,&local_58);
  FUN_00d16224(param_1 + 0x10,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


