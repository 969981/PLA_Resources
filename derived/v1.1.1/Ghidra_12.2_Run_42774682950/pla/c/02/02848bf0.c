/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02848bf0; name: FUN_02848bf0
 */


void FUN_02848bf0(undefined8 param_1,undefined8 param_2)

{
  long *local_58 [4];
  long *local_38;
  undefined *local_28;
  
  local_28 = PTR_s_bin_appli_msg_sys_bin_msg_sys_00_0426f948;
  FUN_009f1b84(local_58,&local_28);
  FUN_02836344(param_1,param_2,local_58,"msg_sys_00_s.bflyt",1);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_58[0] != (long *)0x0) {
    (**(code **)(*local_58[0] + 0x20))();
  }
  return;
}


