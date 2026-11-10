/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f7f774; name: FUN_01f7f774
 */


void FUN_01f7f774(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,auStack_90);
    local_b0 = *param_4;
    local_a8 = (code *)param_4[1];
    local_a0 = param_4[2];
    uStack_98 = param_4[3];
  }
  FUN_01f7f934(param_1,uVar2,param_3,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar1)(auStack_90);
  }
  return;
}


