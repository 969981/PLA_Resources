/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00954364; name: FUN_00954364
 */


void FUN_00954364(long param_1)

{
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  if (*(int *)(*(long *)(param_1 + 0xa0) + 0x54) == 1) {
    local_30 = 0xb0f7f5a5337bbce6;
    pcStack_28 = "SET_STATE_BATTLE_TRAINER_SILENCE";
    local_20 = 0x20;
  }
  else {
    local_30 = 0x20428e553be92384;
    pcStack_28 = "SET_STATE_BATTLE_TRAINER_OFF";
    local_20 = 0x1c;
  }
  local_18 = (long *)0x0;
  FUN_00ab9db4(&local_30,0);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


