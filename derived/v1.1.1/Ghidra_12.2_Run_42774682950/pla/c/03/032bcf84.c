/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bcf84; name: FUN_032bcf84
 */


undefined8 FUN_032bcf84(long *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  void *__dest;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_58;
  undefined8 local_50;
  undefined *puStack_48;
  uint *local_40;
  uint *puStack_38;
  uint local_24;
  
  uVar4 = (ulong)(int)param_3;
  puVar3 = (uint *)(param_2 + 1);
  uVar1 = *puVar3;
  local_58 = (long)(int)uVar1 * uVar4;
  local_24 = param_3;
  if ((int)(uVar1 | param_3) < 0) {
    local_50 = 2;
    puStack_48 = &DAT_0411b3a0;
    puStack_38 = &local_24;
    local_40 = puVar3;
    FUN_03320b50(0x77a36e5f,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x27,"Array size overflow {}*{}",&local_50);
    uVar1 = *puVar3;
  }
  if (uVar1 == 0) {
    uVar2 = 0;
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    __dest = (void *)(**(code **)(*param_1 + 0x10))(param_1,local_58,&local_58);
    if (__dest == (void *)0x0) {
      uVar2 = 0x80040200;
    }
    else {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = local_58 / uVar4;
      }
      if (0x3ffffffe < uVar5) {
        uVar5 = 0x3fffffff;
      }
      memcpy(__dest,(void *)*param_2,local_58);
      uVar2 = 0;
      *param_2 = __dest;
      *(int *)((long)param_2 + 0xc) = (int)uVar5;
    }
  }
  return uVar2;
}


