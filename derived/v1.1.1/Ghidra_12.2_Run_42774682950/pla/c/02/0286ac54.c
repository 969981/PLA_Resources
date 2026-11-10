/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0286ac54; name: FUN_0286ac54
 */


void FUN_0286ac54(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,auStack_a0);
    local_c0 = *param_5;
    local_b8 = (code *)param_5[1];
    local_b0 = param_5[2];
    uStack_a8 = param_5[3];
  }
  FUN_02866d8c(uVar2,param_2,param_3,&local_c0,param_4);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar1)(auStack_a0);
  }
  return;
}


