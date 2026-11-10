/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014dc8a0; name: FUN_014dc8a0
 */


void FUN_014dc8a0(undefined8 param_1)

{
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  FUN_014dc994();
  local_40 = 0xc4dbc279d356203b;
  pcStack_38 = "common/net.dat";
  local_30 = 0xe;
  local_28 = (long *)0x0;
  local_60 = 0xb85896b9113f59a5;
  pcStack_58 = "matching_cap_05";
  local_50 = 0xf;
  local_48 = (long *)0x0;
  local_80 = 0x7eaaeac569f45ae7;
  pcStack_78 = "pane_T_h_netm_00";
  local_70 = 0x10;
  local_68 = (long *)0x0;
  FUN_014dcb58(param_1,&local_40,&local_60,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  FUN_014dcd00(param_1,0,0);
  return;
}


