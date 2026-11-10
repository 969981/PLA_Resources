/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015b970; name: FUN_0015b970
 */


undefined4 FUN_0015b970(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  int local_54;
  undefined8 local_50;
  int local_44;
  undefined8 local_40;
  int local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *(short *)(param_1 + 0xc4) = *(short *)(param_1 + 0xc4) + 1;
  local_78 = 0;
  local_54 = 0;
  local_50 = 0;
  local_44 = 0;
  local_40 = 0;
  local_34 = 0;
  local_68 = 0;
  local_60 = 0;
  local_80 = param_2;
  local_30 = param_4;
  uStack_28 = param_3;
  uVar1 = FUN_0015b7f0(param_1,FUN_0015ba60,&local_80,
                       *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x38),
                       *(undefined8 *)(param_1 + 0xb0));
  local_78 = FUN_00161510(param_1,local_78,local_68,0);
  local_68 = 0;
  FUN_00161510(param_1,local_60,(long)local_54 << 1,0);
  FUN_00161510(param_1,local_50,(long)local_44 * 0x18,0);
  FUN_00161510(param_1,local_40,(long)local_34 * 0x18,0);
  *(short *)(param_1 + 0xc4) = *(short *)(param_1 + 0xc4) + -1;
  return uVar1;
}


