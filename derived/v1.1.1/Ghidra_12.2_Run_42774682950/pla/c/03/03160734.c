/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03160734; name: FUN_03160734
 */


uint FUN_03160734(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

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
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 == (long *)0x0) {
    uVar1 = 1;
  }
  else {
    local_90[0] = 0xffffffff;
    local_78 = 0;
    local_60 = 0xffffffff;
    local_48 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_98 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c);
    local_94 = *(undefined4 *)(param_1 + 0x44);
    local_b8 = *(undefined8 *)(param_1 + 0x30);
    local_b0 = &local_98;
    puStack_a8 = local_90;
    local_a0 = 0x80;
    local_30 = param_2;
    local_28 = param_3;
    uStack_20 = param_4;
    local_18 = param_5;
    uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,&local_b8);
  }
  return uVar1 & 1;
}


