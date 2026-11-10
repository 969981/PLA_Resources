/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01507f88; name: FUN_01507f88
 */


void FUN_01507f88(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((*(int *)(*(long *)(param_1 + 0x630) + 0xb0) == 0) ||
     (uVar1 = FUN_01507f14(param_1), (uVar1 & 1) == 0)) {
    uVar2 = 0xeafee607791b5324;
  }
  else {
    uVar2 = 0xeafee707791b54d7;
  }
  local_28 = (long *)0x0;
  local_30 = 0x13;
  pcStack_38 = "pane_T_msg_guide_00";
  local_40 = 0x5e97d135b4fe049e;
  FUN_015054fc(param_1,uVar2,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


