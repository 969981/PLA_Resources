/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c56b4; name: FUN_013c56b4
 */


void FUN_013c56b4(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined4 local_28;
  char *local_18;
  
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_18 = "bin/appli/net/bin/net_mystery_00_lyt.bin";
  FUN_009f1b84(&local_50,&local_18);
  plVar2 = (long *)*param_2;
  *param_2 = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  *param_2 = (long)plVar2;
  param_2[1] = local_48;
  param_2[2] = local_40;
  plVar2 = (long *)param_2[4];
  param_2[3] = local_38;
  param_2[4] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  lVar1 = local_30;
  local_30 = 0;
  param_2[4] = lVar1;
  *(undefined4 *)(param_2 + 5) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  local_18 = "bin/appli/net/bin/uikit_net_mystery_00.bin";
  FUN_009f1b84(&local_50,&local_18);
  plVar2 = (long *)param_2[6];
  param_2[6] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  param_2[6] = (long)plVar2;
  param_2[7] = local_48;
  param_2[8] = local_40;
  plVar2 = (long *)param_2[10];
  param_2[9] = local_38;
  param_2[10] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  lVar1 = local_30;
  local_30 = 0;
  param_2[10] = lVar1;
  *(undefined4 *)(param_2 + 0xb) = local_28;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  *(undefined1 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x1b) = 1;
  return;
}


