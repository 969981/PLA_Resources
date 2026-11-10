/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bd3f0; name: FUN_032bd3f0
 */


void FUN_032bd3f0(long *param_1,undefined8 *param_2,int param_3,void *param_4,uint param_5)

{
  void *__dest;
  ulong uVar1;
  void *__src;
  ulong uVar2;
  ulong uVar3;
  uint local_5c;
  ulong local_58;
  undefined *local_50;
  uint *puStack_48;
  
  local_5c = param_5;
  if (0x3fffffff < (int)param_5) {
    local_58 = 1;
    puStack_48 = &local_5c;
    local_50 = &DAT_0411b3b8;
    FUN_03320b50(0x159079fc,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x80,"Invalid requestedCapacity {}",&local_58);
  }
  if ((param_4 == (void *)0x0) || ((int)param_5 <= *(int *)(param_2 + 1))) {
    local_58 = (long)(int)param_5 * (long)param_3;
    uVar3 = (ulong)param_3;
    uVar2 = (long)*(int *)((long)param_2 + 0xc) * uVar3;
    __src = (void *)*param_2;
    __dest = (void *)(**(code **)(*param_1 + 0x10))(param_1,local_58,&local_58);
    uVar1 = uVar2;
    if (local_58 <= uVar2) {
      uVar1 = local_58;
    }
    memcpy(__dest,__src,uVar1);
    (**(code **)(*param_1 + 0x18))(param_1,__src,uVar2);
    *param_2 = __dest;
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = local_58 / uVar3;
    }
    if (0x3ffffffe < uVar1) {
      uVar1 = 0x3fffffff;
    }
    *(int *)((long)param_2 + 0xc) = (int)uVar1;
  }
  else {
    memcpy(param_4,(void *)*param_2,(long)*(int *)(param_2 + 1) * (long)param_3);
    (**(code **)(*param_1 + 0x18))
              (param_1,*param_2,((ulong)*(uint *)((long)param_2 + 0xc) & 0x3fffffff) * (long)param_3
              );
    *param_2 = param_4;
    *(uint *)((long)param_2 + 0xc) = param_5 | 0x80000000;
  }
  return;
}


