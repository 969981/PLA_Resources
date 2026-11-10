/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01214508; name: FUN_01214508
 */


void FUN_01214508(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *local_80 [4];
  long *local_60;
  long *local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined4 local_28;
  char *local_18;
  
  local_18 = "bin/appli/box/bin/box_top_00_lyt.bin";
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
  local_50 = (long *)0x391dfbb;
  FUN_009f1b84(local_80,&local_50);
  FUN_0119ad60(param_2,local_80);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80[0] != (long *)0x0) {
    (**(code **)(*local_80[0] + 0x20))();
  }
  *(undefined2 *)((long)param_2 + 0xd4) = 0x101;
  *(undefined1 *)((long)param_2 + 0xd6) = 1;
  *(undefined1 *)(param_2 + 0x18) = 0;
  *(undefined4 *)((long)param_2 + 0xc4) = 1;
  *(undefined1 *)((long)param_2 + 0xd9) = 1;
  param_2[0x1c] = 0x9000000001;
  return;
}


