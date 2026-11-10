/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031658c4; name: FUN_031658c4
 */


undefined8
FUN_031658c4(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_118;
  float *local_110;
  undefined4 *puStack_108;
  undefined1 local_100;
  float local_f8;
  undefined4 local_f4;
  undefined4 auStack_f0 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if ((plVar1 == (long *)0x0) ||
     ((uVar2 = (**(code **)(*plVar1 + 0x28))
                         (plVar1,*(undefined8 *)(param_1 + 0x30),param_2,param_3,param_4,param_5),
      (uVar2 & 1) != 0 &&
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x20))
                         (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),param_6,param_7
                          ,param_9,param_10), (uVar2 & 1) != 0)))) {
    plVar1 = *(long **)(param_1 + 0x28);
    if (plVar1 != (long *)0x0) {
      local_b8 = 0;
      uStack_b0 = 0;
      puStack_108 = auStack_f0;
      local_a8 = 0;
      local_c0 = 0xffffffff;
      local_c8 = 0;
      local_78 = param_10;
      uStack_d0 = 0;
      uStack_80 = param_9;
      local_f8 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c);
      local_f4 = *(undefined4 *)(param_1 + 0x44);
      local_118 = *(undefined8 *)(param_1 + 0x30);
      local_110 = &local_f8;
      local_100 = param_11;
      auStack_f0[0] = param_2;
      local_e8 = param_3;
      uStack_e0 = param_4;
      local_d8 = param_5;
      local_90 = param_6;
      local_88 = param_7;
      uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,&local_118);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


