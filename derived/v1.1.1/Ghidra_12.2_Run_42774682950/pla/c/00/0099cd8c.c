/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099cd8c; name: FUN_0099cd8c
 */


void FUN_0099cd8c(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 *param_5,uint param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  uVar2 = *(undefined8 *)(param_2 + 0x78);
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
  FUN_009b9264(param_1,uVar2,param_3,param_4,&local_c0,param_6 & 1);
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


