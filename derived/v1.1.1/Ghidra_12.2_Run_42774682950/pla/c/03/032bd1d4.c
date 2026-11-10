/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bd1d4; name: FUN_032bd1d4
 */


void * FUN_032bd1d4(long *param_1,uint param_2,uint param_3,void *param_4,int param_5,uint *param_6)

{
  uint uVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_70;
  uint local_68;
  uint local_64;
  undefined8 local_60;
  undefined *local_58;
  uint *local_50;
  uint *puStack_48;
  
  uVar1 = *param_6;
  local_70 = (long)(int)param_3 * (long)(int)param_2;
  local_68 = param_3;
  local_64 = param_2;
  if ((int)(param_3 | param_2) < 0) {
    local_60 = 2;
    local_58 = &DAT_0411b3a0;
    local_50 = &local_64;
    puStack_48 = &local_68;
    FUN_03320b50(0x1bd2a77e,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x53,"Array size overflow {}*{}",&local_60);
  }
  if ((int)local_64 < (int)(uVar1 & 0x3fffffff) || 0x3fffffff < (int)local_64) {
    local_60 = 1;
    local_50 = &local_64;
    local_58 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_60);
  }
  uVar4 = (ulong)(int)param_3;
  if ((int)*param_6 < 0) {
    __dest = (void *)(**(code **)(*param_1 + 0x10))(param_1,local_70,&local_70);
    memcpy(__dest,param_4,(long)param_5 * uVar4);
  }
  else {
    uVar3 = ((ulong)*param_6 & 0x3fffffff) * uVar4;
    __dest = (void *)(**(code **)(*param_1 + 0x10))(param_1,local_70,&local_70);
    uVar2 = uVar3;
    if (local_70 <= uVar3) {
      uVar2 = local_70;
    }
    memcpy(__dest,param_4,uVar2);
    (**(code **)(*param_1 + 0x18))(param_1,param_4,uVar3);
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = local_70 / uVar4;
  }
  if (0x3ffffffe < uVar2) {
    uVar2 = 0x3fffffff;
  }
  *param_6 = (uint)uVar2;
  return __dest;
}


