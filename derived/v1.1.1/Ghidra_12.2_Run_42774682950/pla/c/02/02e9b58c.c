/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9b58c; name: FUN_02e9b58c
 */


void FUN_02e9b58c(long param_1,ulong param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,byte param_6)

{
  int iVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined8 local_58;
  byte local_50;
  undefined4 local_4c;
  
  local_50 = param_6 & 1;
  local_4c = 0xffffffff;
  local_68 = 0;
  local_60 = 0;
  uStack_64 = param_4;
  local_58 = param_5;
  iVar1 = (**(code **)(*DAT_0440a098 + 0x28))(DAT_0440a098,param_2,&local_68,0,param_1 + 0x40,1);
  if ((iVar1 != 1) && ((param_6 & 1) != 0)) {
    local_50 = 0;
    iVar1 = (**(code **)(*DAT_0440a098 + 0x28))
                      (DAT_0440a098,param_2 & 0xffffffff,&local_68,0,param_1 + 0x40,1);
  }
  if (iVar1 == 1) {
    FUN_02e9b348(param_1,param_3);
  }
  return;
}


