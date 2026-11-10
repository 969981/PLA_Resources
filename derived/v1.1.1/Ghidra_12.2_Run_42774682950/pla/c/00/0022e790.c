/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022e790; name: FUN_0022e790
 */


void FUN_0022e790(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [3];
  undefined2 uStack_65;
  undefined3 uStack_63;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_48 = 0;
  local_80 = 0;
  local_58 = 0;
  uStack_50 = 0;
  _local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_00876d0c(&local_80);
  local_80 = local_80 & 0xfffffff8ffffffff | 0x400000000;
  FUN_00876cfc(&local_78);
  local_78._0_4_ = (uint)(uint3)local_78;
  local_78 = CONCAT71(local_78._1_7_,6);
  FUN_00876cfc(local_68);
  _local_68 = (uint)(uint3)local_68;
  _local_68 = CONCAT71(stack0xffffffffffffff99,6);
  FUN_0087e204(param_1 + 0x360,param_2,&local_80);
  FUN_00876d0c(&local_80);
  uVar1 = local_80 & 0xfffffff8ffffffff;
  local_80._0_2_ = CONCAT11(1,(char)uVar1);
  local_80 = CONCAT62((int6)(uVar1 >> 0x10),(undefined2)local_80) | 0x400000000;
  FUN_00876cfc(&local_78);
  local_78._0_5_ = CONCAT23(0x102,(uint3)local_78);
  FUN_00876cfc(local_68);
  _local_68 = CONCAT23(0x102,local_68);
  FUN_0087e204(param_1 + 0x37c,param_2,&local_80);
  FUN_00876d0c(&local_80);
  local_80 = local_80 & 0xfffffff8ffffffff | 0x400000000;
  FUN_00876cfc(&local_78);
  uVar1 = local_78 >> 0x20;
  local_78._0_4_ = CONCAT22(0x203,(undefined2)local_78);
  local_78 = CONCAT44((int)uVar1,(uint)local_78) & 0xffffff00ffffffff;
  FUN_00876cfc(local_68);
  uVar2 = _local_68;
  _local_68 = CONCAT22(0x203,local_68._0_2_);
  uStack_63 = SUB83(uVar2,5);
  _local_68 = (uint5)_local_68;
  FUN_0087e204(param_1 + 0x398,param_2,&local_80);
  return;
}


