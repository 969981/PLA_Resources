/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d7d424; name: FUN_00d7d424
 */


void FUN_00d7d424(long param_1,undefined8 *param_2)

{
  long *local_50 [4];
  long *local_30;
  char *local_18;
  
  *(undefined8 *)(param_1 + 0x50) = *param_2;
  local_18 = "bin/misc/app_config/app_config_list.bin";
  FUN_009f1b84(local_50,&local_18);
  FUN_00938764(param_1 + 0xc0,0,local_50,0,*(undefined8 *)(param_1 + 0x50),0);
  FUN_00d7d4b4(param_1);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_50[0] != (long *)0x0) {
    (**(code **)(*local_50[0] + 0x20))();
  }
  return;
}


