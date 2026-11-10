/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280b168; name: FUN_0280b168
 */


void FUN_0280b168(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = *(undefined8 *)(param_1 + 0xa8);
  plVar1 = *(long **)(param_1 + 0xe8);
  local_48 = *(undefined8 *)(param_1 + 0xb0);
  local_40 = *(undefined8 *)(param_1 + 0xb8);
  local_38 = *(long **)(param_1 + 0xc0);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_50,param_2);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x468) = param_2[1];
  *(undefined8 *)(param_1 + 0x460) = *param_2;
  return;
}


