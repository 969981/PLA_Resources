/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c4b50; name: FUN_010c4b50
 */


void FUN_010c4b50(undefined8 param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  long *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined4 local_60;
  long *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  long *local_38;
  undefined4 local_30;
  char *local_28;
  
  if (param_3 == 10) {
    param_3 = DAT_043ba508;
  }
  local_38 = (long *)0x0;
  local_30 = 0;
  local_58 = (long *)0x0;
  local_50 = &DAT_cbf29ce484222645;
  local_48 = &DAT_03996322;
  local_40 = 0;
  switch(param_3) {
  case 2:
    local_28 = "bin/message/English/";
    break;
  case 3:
    local_28 = "bin/message/French/";
    break;
  case 4:
    local_28 = "bin/message/Italian/";
    break;
  case 5:
    local_28 = "bin/message/German/";
    break;
  case 6:
    local_28 = "bin/message/Spanish/";
    break;
  case 7:
    local_28 = "bin/message/Korean/";
    break;
  case 8:
    local_28 = "bin/message/Simp_Chinese/";
    break;
  case 9:
    local_28 = "bin/message/Trad_Chinese/";
    break;
  default:
    local_28 = "bin/message/JPN_KANJI/";
  }
  FUN_009f1b84(&local_88,&local_28);
  plVar1 = local_58;
  local_58 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  plVar1 = local_38;
  local_58 = local_88;
  local_88 = (long *)0x0;
  local_50 = (undefined1 *)uStack_80;
  local_48 = (undefined1 *)local_78;
  local_40 = uStack_70;
  local_38 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  local_38 = local_68;
  local_68 = (long *)0x0;
  local_30 = local_60;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  FUN_010c4f0c(param_1,&local_58,param_2,&DAT_03996322);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


