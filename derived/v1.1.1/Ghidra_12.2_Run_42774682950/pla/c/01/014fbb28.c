/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fbb28; name: FUN_014fbb28
 */


void FUN_014fbb28(long param_1,int param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (param_2 == 0) {
    local_40 = 0x3e15d4fcf512bfb7;
    pcStack_38 = "waza_custom_list";
    local_30 = 0x10;
    local_28 = (long *)0x0;
    plVar1 = (long *)FUN_00d2ee28(param_1 + 0x180,&local_40);
    (**(code **)(*plVar1 + 0x58))();
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    uVar2 = 0;
    param_2 = 0;
  }
  else {
    local_40 = 0xf4f2119844d295f9;
    pcStack_38 = "poke_waza_list";
    local_30 = 0xe;
    local_28 = (long *)0x0;
    plVar1 = (long *)FUN_00d2ee28(param_1 + 0x180,&local_40);
    (**(code **)(*plVar1 + 0x58))();
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x650) = uVar2;
  FUN_014f988c(param_1,param_2);
  return;
}


