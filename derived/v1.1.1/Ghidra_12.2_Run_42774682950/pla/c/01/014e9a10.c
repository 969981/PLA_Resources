/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014e9a10; name: FUN_014e9a10
 */


void FUN_014e9a10(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_4a;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_00d42690(*(undefined8 *)(param_1 + 8),1,1);
  FUN_00d469b4(*(undefined8 *)(*(long *)(param_1 + 8) + 0x68),*(long *)(param_1 + 8),0);
  local_78 = 0;
  local_b0 = 0;
  local_70 = 0x8abaf272a347e952;
  pcStack_68 = "pane_N_context";
  local_60 = 0xe;
  local_58 = (long *)0x0;
  local_50 = 4;
  local_4c = 1;
  local_4a = 0xffff;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_00d67f30(*(undefined8 *)(param_1 + 8),param_2,&local_b0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  pcVar4 = *(code **)(param_1 + 0x18);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    (*pcVar4)(param_1 + 0x30);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x30);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[3];
    *(undefined8 *)(param_1 + 0x20) = param_3[2];
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = uVar2;
  }
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x10);
  return;
}


