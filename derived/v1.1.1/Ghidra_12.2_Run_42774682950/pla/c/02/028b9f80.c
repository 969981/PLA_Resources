/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b9f80; name: FUN_028b9f80
 */


void FUN_028b9f80(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  code *pcVar2;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  long *local_158;
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [96];
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  local_158 = (long *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_170 = *param_2;
  local_168 = param_2[1];
  local_160 = param_2[2];
  plVar1 = (long *)param_2[3];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_158 = plVar1;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,auStack_130);
    pcVar2 = local_c8;
    local_150 = *param_3;
    local_148 = (code *)param_3[1];
    local_140 = param_3[2];
    uStack_138 = param_3[3];
    if (local_c8 != (code *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar2)(auStack_b0);
    }
  }
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,auStack_b0);
    local_d0 = *param_4;
    local_c8 = (code *)param_4[1];
    local_c0 = param_4[2];
    uStack_b8 = param_4[3];
  }
  FUN_028b9c64(param_1,&local_170);
  pcVar2 = local_c8;
  if (local_c8 == (code *)0x0) {
    local_c8 = (code *)0x0;
    pcVar2 = local_148;
  }
  else {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar2)(auStack_b0);
    pcVar2 = local_148;
  }
  if (pcVar2 == (code *)0x0) {
    local_148 = (code *)0x0;
  }
  else {
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar2)(auStack_130);
  }
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  return;
}


