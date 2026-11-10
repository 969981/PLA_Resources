/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014ff908; name: FUN_014ff908
 */


void FUN_014ff908(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_50 = 0xf4f2119844d295f9;
  pcStack_48 = "poke_waza_list";
  local_40 = 0xe;
  uVar1 = FUN_00d2ee28(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_02819f78(uVar1);
  FUN_0281a0b4(uVar1);
  FUN_014fb91c(param_1,0xff,1);
  FUN_014ff79c(param_1);
  local_50 = 0x326c85acaf096ae9;
  pcStack_48 = "button_decide_x";
  local_40 = 0xf;
  local_38 = (long *)0x0;
  plVar2 = (long *)FUN_00d2e944(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((plVar2 != (long *)0x0) && (*(char *)((long)plVar2 + 0xa2) != '\0')) {
    *(undefined1 *)((long)plVar2 + 0xa2) = 0;
    (**(code **)(*plVar2 + 0x98))(plVar2,0);
  }
  local_50 = 0xe591f7cd38c690c3;
  pcStack_48 = "InputDecide";
  local_40 = 0xb;
  local_38 = (long *)0x0;
  FUN_014f99d0(param_1,&local_50,0);
  *(undefined1 *)(param_1 + 0x65c) = 1;
  FUN_014f9b50(param_1,0);
  return;
}


