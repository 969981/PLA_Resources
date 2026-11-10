/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01225c84; name: FUN_01225c84
 */


void FUN_01225c84(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((param_2 & 1) == 0) {
    local_40 = 0x2e0bc554d42cf00f;
    pcStack_38 = "anime_byebye_msg_guide_on";
    local_30 = 0x19;
    local_28 = (long *)0x0;
    lVar1 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_40);
      lVar1 = *(long *)(param_1 + 0x2c8);
    }
    local_40 = 0x6b0ba82488732ef3;
    pcStack_38 = "anime_byebye_msg_guide_off";
    local_30 = 0x1a;
  }
  else {
    local_40 = 0x5e97d135b4fe049e;
    pcStack_38 = "pane_T_msg_guide_00";
    local_30 = 0x13;
    local_28 = (long *)0x0;
    FUN_0121ac84(param_1,0xd96521bcf2d01357,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = 0x6b0ba82488732ef3;
    pcStack_38 = "anime_byebye_msg_guide_off";
    local_30 = 0x1a;
    local_28 = (long *)0x0;
    lVar1 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_40);
      lVar1 = *(long *)(param_1 + 0x2c8);
    }
    local_40 = 0x2e0bc554d42cf00f;
    pcStack_38 = "anime_byebye_msg_guide_on";
    local_30 = 0x19;
  }
  if (lVar1 != 0) {
    local_28 = (long *)0x0;
    FUN_0283b1e8(lVar1,&local_40);
  }
  return;
}


