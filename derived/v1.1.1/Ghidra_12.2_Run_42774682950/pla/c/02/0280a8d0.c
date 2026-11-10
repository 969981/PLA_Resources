/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280a8d0; name: FUN_0280a8d0
 */


void FUN_0280a8d0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  
  *(undefined4 *)(param_1 + 0x510) = param_3;
  *(undefined1 *)(param_1 + 0x701) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 4;
  FUN_0280a9e0();
  FUN_0280ace8(param_1);
  local_50 = *(undefined8 *)(param_1 + 0xa8);
  plVar1 = *(long **)(param_1 + 0xe8);
  local_48 = *(undefined8 *)(param_1 + 0xb0);
  local_40 = *(undefined8 *)(param_1 + 0xb8);
  local_38 = *(long **)(param_1 + 0xc0);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  (**(code **)(*plVar1 + 0xa8))(plVar1,&local_50,param_2);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = *(undefined8 *)(param_1 + 0xa8);
  plVar1 = *(long **)(param_1 + 0xe8);
  local_48 = *(undefined8 *)(param_1 + 0xb0);
  local_40 = *(undefined8 *)(param_1 + 0xb8);
  local_38 = *(long **)(param_1 + 0xc0);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  auVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_50);
  *(undefined1 (*) [16])(param_1 + 0x460) = auVar2;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x500) = 1;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  return;
}


