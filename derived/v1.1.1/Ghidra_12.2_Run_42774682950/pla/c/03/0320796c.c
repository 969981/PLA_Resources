/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0320796c; name: FUN_0320796c
 */


long FUN_0320796c(long *param_1,uint param_2,long param_3,ulong param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong local_70 [2];
  undefined *local_60;
  uint *puStack_58;
  uint local_44;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar6 = *param_5;
  uVar2 = (uVar6 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar2) {
    uVar2 = 0x3fffffff;
  }
  local_44 = param_2;
  if ((int)param_2 <= (int)uVar2) {
    local_44 = uVar2;
  }
  uVar2 = uVar6 & 0x3fffffff;
  local_70[0] = (ulong)local_44 << 4;
  if ((int)local_44 < (int)uVar2 || 0x3fffffff < (int)local_44) {
    local_70[1] = 1;
    puStack_58 = &local_44;
    local_60 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_70 + 1);
    uVar6 = *param_5;
    uVar2 = uVar6 & 0x3fffffff;
  }
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_70[0],local_70);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      puVar4 = (undefined8 *)(lVar1 + 0x10);
      puVar5 = (undefined8 *)(param_3 + 0x10);
      do {
        puVar4[-1] = puVar5[-1];
        puVar4[-2] = puVar5[-2];
        puVar4[1] = puVar5[1];
        lVar3 = lVar3 + 2;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar3);
    }
    if ((param_4 & 1) != 0) {
      puVar4 = (undefined8 *)(lVar1 + lVar3 * 0x10);
      puVar5 = (undefined8 *)(param_3 + lVar3 * 0x10);
      puVar4[1] = puVar5[1];
      *puVar4 = *puVar5;
    }
  }
  if (-1 < (int)uVar6) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar2 << 4);
  }
  if (local_70[0] < 0x3fffffff0) {
    uVar6 = (uint)(local_70[0] >> 4);
  }
  else {
    uVar6 = 0x3fffffff;
  }
  *param_5 = uVar6;
  return lVar1;
}


