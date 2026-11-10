/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d67ea8; name: FUN_00d67ea8
 */


void FUN_00d67ea8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_2a;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_58 = 0;
  local_90 = 0;
  local_50 = 0x8abaf272a347e952;
  pcStack_48 = "pane_N_context";
  local_40 = 0xe;
  local_38 = (long *)0x0;
  local_30 = 4;
  local_2c = 1;
  local_2a = 0xffff;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_20 = 0;
  uStack_18 = 0;
  FUN_00d67f30(param_1,param_2,&local_90);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


