/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030157ec; name: FUN_030157ec
 */


void FUN_030157ec(long param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  MutexType *pMVar8;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  lVar10 = param_1 + (ulong)*(byte *)(param_2 + 0x5e) * 0x18;
  pMVar8 = *(MutexType **)(param_1 + 0x340);
  nn::os::LockMutex(pMVar8);
  puVar9 = (uint *)(lVar10 + 0x48);
  *(uint *)(param_2 + 0x4c) = *puVar9;
  puVar11 = (uint *)(lVar10 + 0x4c);
  uVar14 = *puVar11;
  uVar4 = uVar14 & 0x3fffffff;
  puVar6 = *(undefined4 **)(lVar10 + 0x40);
  uVar12 = *puVar9;
  uVar13 = (ulong)uVar12;
  uVar1 = uVar12 + 1;
  puVar3 = puVar6;
  if ((int)uVar4 <= (int)uVar12) {
    if (0x3ffffffe < (int)uVar12) {
      FUN_032bd0a8(uVar1);
      uVar14 = *puVar11;
      uVar4 = uVar14 & 0x3fffffff;
    }
    puVar2 = PTR_PTR_0434a080;
    local_54 = (uVar14 & 0x3fffffff) << 1;
    if (0x3ffffffe < local_54) {
      local_54 = 0x3fffffff;
    }
    if ((int)local_54 < (int)uVar1) {
      local_54 = uVar12 + 1;
    }
    local_80[0] = (ulong)local_54 << 2;
    if ((int)local_54 < (int)uVar4 || 0x3fffffff < (int)local_54) {
      local_80[1] = 1;
      puStack_68 = &local_54;
      local_70 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",local_80 + 1);
      uVar14 = *puVar11;
    }
    puVar3 = (undefined4 *)(**(code **)(*(long *)puVar2 + 0x10))(puVar2,local_80[0],local_80);
    if (0 < (int)uVar12) {
      puVar5 = puVar3;
      puVar7 = puVar6;
      do {
        uVar13 = uVar13 - 1;
        *puVar5 = *puVar7;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar13 != 0);
    }
    if (-1 < (int)uVar14) {
      (**(code **)(*(long *)puVar2 + 0x18))(puVar2,puVar6,uVar14 << 2);
    }
    uVar4 = (uint)(local_80[0] >> 2);
    if (0xfffffffb < local_80[0]) {
      uVar4 = 0x3fffffff;
    }
    *puVar11 = uVar4;
    *(undefined4 **)(lVar10 + 0x40) = puVar3;
    uVar12 = *puVar9;
  }
  puVar3[(int)uVar12] = param_3;
  *puVar9 = uVar1;
  nn::os::UnlockMutex(pMVar8);
  return;
}


