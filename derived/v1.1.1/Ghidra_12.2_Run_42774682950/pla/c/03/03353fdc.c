/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03353fdc; name: FUN_03353fdc
 */


undefined8 *
FUN_03353fdc(long *param_1,uint param_2,undefined8 *param_3,ulong param_4,uint *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar7 = *param_5;
  uVar2 = (uVar7 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar2) {
    uVar2 = 0x3fffffff;
  }
  uVar8 = uVar7 & 0x3fffffff;
  local_54 = param_2;
  if ((int)param_2 <= (int)uVar2) {
    local_54 = uVar2;
  }
  local_80[0] = (ulong)local_54 * 0xc;
  if ((int)local_54 < (int)uVar8 || 0x3fffffff < (int)local_54) {
    local_80[1] = 1;
    puStack_68 = &local_54;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_80 + 1);
    uVar7 = *param_5;
    uVar8 = uVar7 & 0x3fffffff;
  }
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_80[0],local_80);
  if (0 < (int)param_4) {
    if ((int)param_4 == 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      puVar5 = param_3;
      puVar6 = puVar1;
      do {
        uVar4 = *puVar5;
        lVar3 = lVar3 + 2;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar5 + 1);
        *puVar6 = uVar4;
        uVar4 = *(undefined8 *)((long)puVar5 + 0xc);
        *(undefined4 *)((long)puVar6 + 0x14) = *(undefined4 *)((long)puVar5 + 0x14);
        *(undefined8 *)((long)puVar6 + 0xc) = uVar4;
        puVar6 = puVar6 + 3;
        puVar5 = puVar5 + 3;
      } while ((param_4 & 0xffffffff) - (param_4 & 1) != lVar3);
    }
    if ((param_4 & 1) != 0) {
      puVar6 = (undefined8 *)((long)puVar1 + lVar3 * 0xc);
      puVar5 = (undefined8 *)((long)param_3 + lVar3 * 0xc);
      uVar4 = *puVar5;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar5 + 1);
      *puVar6 = uVar4;
    }
  }
  if (-1 < (int)uVar7) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar8 * 0xc);
  }
  if (local_80[0] < 0x2fffffff4) {
    uVar2 = (uint)(local_80[0] / 0xc);
  }
  else {
    uVar2 = 0x3fffffff;
  }
  *param_5 = uVar2;
  return puVar1;
}


