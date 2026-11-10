/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d686b8; name: FUN_00d686b8
 */


void FUN_00d686b8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_40 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0x8abaf272a347e952;
  pcStack_68 = "pane_N_context";
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_60 = 0xe;
  local_58 = (long *)0x0;
  FUN_00d42690(param_1,1,1);
  local_4c = *(undefined1 *)(param_3 + 7);
  local_4a = *(undefined2 *)((long)param_3 + 0x3a);
  local_48 = *(undefined2 *)((long)param_3 + 0x3c);
  local_b0 = *param_3;
  local_a8 = param_3[1];
  local_a0 = param_3[2];
  local_98 = param_3[3];
  local_90 = param_3[4];
  local_88 = param_3[5];
  local_80 = param_3[6];
  local_50 = 0;
  local_78 = 4;
  FUN_00d67f30(param_1,param_2,&local_b0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


