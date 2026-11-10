/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ba340; name: FUN_028ba340
 */


void FUN_028ba340(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  long *local_1c8;
  undefined8 local_1c0;
  code *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [96];
  undefined8 local_140;
  code *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [96];
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  local_138 = (code *)0x0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_1c8 = (long *)0x0;
  local_1c0 = 0;
  local_1b8 = (code *)0x0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1e0 = *param_2;
  local_1d8 = param_2[1];
  local_1d0 = param_2[2];
  plVar1 = (long *)param_2[3];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_1c8 = plVar1;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,auStack_1a0);
    local_1c0 = *param_3;
    local_1b8 = (code *)param_3[1];
    local_1b0 = param_3[2];
    uStack_1a8 = param_3[3];
  }
  FUN_028ba490(param_1,&local_1e0);
  pcVar2 = local_b8;
  if (local_b8 == (code *)0x0) {
    local_b8 = (code *)0x0;
    pcVar2 = local_138;
  }
  else {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar2)(auStack_a0);
    pcVar2 = local_138;
  }
  if (pcVar2 == (code *)0x0) {
    local_138 = (code *)0x0;
    pcVar2 = local_1b8;
  }
  else {
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar2)(auStack_120);
    pcVar2 = local_1b8;
  }
  if (pcVar2 == (code *)0x0) {
    local_1b8 = (code *)0x0;
  }
  else {
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1c0 = 0;
    local_1b8 = (code *)0x0;
    (*pcVar2)(auStack_1a0);
  }
  if (local_1c8 != (long *)0x0) {
    (**(code **)(*local_1c8 + 0x20))();
  }
  return;
}


