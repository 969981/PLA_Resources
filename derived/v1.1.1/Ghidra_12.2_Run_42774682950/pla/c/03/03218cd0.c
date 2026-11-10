/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03218cd0; name: FUN_03218cd0
 */


undefined1  [16]
FUN_03218cd0(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined1 auVar1 [16];
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  local_70 = 0x8000020;
  local_6c = 0x22;
  local_68 = param_3;
  local_60 = param_4;
  local_58 = (int)param_1;
  local_54 = param_5;
  FUN_031aa380(param_2 + 0x28,param_2,&local_70);
  auVar1 = FUN_0315f3f0(param_1,*(undefined8 *)(param_2 + 0x140),param_3,param_4,param_5);
  FUN_03179f50(*(undefined8 *)(param_2 + 0x130));
  local_88[0] = param_3;
  local_80 = param_4;
  local_78 = (int)param_1;
  local_74 = param_5;
  FUN_03218da0(param_2 + 0xa0,param_2,local_88);
  auVar1._8_8_ = auVar1._8_8_ & 0xffffffff;
  return auVar1;
}


