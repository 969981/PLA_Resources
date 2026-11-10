/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284e784; name: FUN_0284e784
 */


void FUN_0284e784(long *param_1,undefined4 *param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  long *local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined4 local_30;
  undefined *local_28;
  
  if (2 < param_3) {
    param_3 = 0;
  }
  local_28 = (&PTR_s_bin_appli_box_bin_box_icon_box_0_042705f8)[(int)param_3];
  FUN_009f1b84(&local_58,&local_28);
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_58;
  local_58 = (long *)0x0;
  *param_1 = (long)plVar2;
  param_1[1] = local_50;
  param_1[2] = local_48;
  plVar2 = (long *)param_1[4];
  param_1[3] = local_40;
  param_1[4] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  lVar1 = local_38;
  local_38 = 0;
  param_1[4] = lVar1;
  *(undefined4 *)(param_1 + 5) = local_30;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  *param_2 = 0;
  return;
}


