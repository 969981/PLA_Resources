/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031607cc; name: FUN_031607cc
 */


uint FUN_031607cc(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  uint uVar1;
  long *plVar2;
  undefined8 local_b8;
  float *local_b0;
  undefined4 *puStack_a8;
  undefined1 local_a0;
  float local_98;
  undefined4 local_94;
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_20;
  undefined8 uStack_18;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 == (long *)0x0) {
    uVar1 = 1;
  }
  else {
    local_90[0] = 0xffffffff;
    local_78 = 0;
    local_38 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_20 = 0;
    uStack_18 = 0;
    uStack_40 = 0;
    local_98 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c);
    local_94 = *(undefined4 *)(param_1 + 0x44);
    local_b8 = *(undefined8 *)(param_1 + 0x30);
    local_b0 = &local_98;
    puStack_a8 = local_90;
    local_a0 = param_6;
    local_60 = param_2;
    local_58 = param_3;
    uStack_50 = param_4;
    local_48 = param_5;
    uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,&local_b8);
  }
  return uVar1 & 1;
}


