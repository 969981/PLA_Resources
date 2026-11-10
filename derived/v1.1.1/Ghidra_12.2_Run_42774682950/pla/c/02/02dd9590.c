/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dd9590; name: FUN_02dd9590
 */


void FUN_02dd9590(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulong local_60;
  undefined *puStack_58;
  int *local_50;
  uint *puStack_48;
  uint local_38;
  int local_34;
  
  uVar10 = *param_1;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  uVar10 = param_3[9];
  param_2[7] = param_3[7];
  param_2[9] = uVar10;
  uVar10 = param_3[5];
  param_2[3] = param_3[3];
  param_2[5] = uVar10;
  param_2[1] = param_3[1];
  *param_2 = *param_3;
  uVar10 = param_3[2];
  param_2[4] = param_3[4];
  param_2[2] = uVar10;
  uVar10 = param_3[8];
  param_2[6] = param_3[6];
  param_2[8] = uVar10;
  param_2[10] = 0;
  param_2[0xb] = 0x8000000000000000;
  puVar4 = PTR_PTR_0434a080;
  uVar3 = *(uint *)(param_3 + 0xb);
  puVar11 = (undefined4 *)param_3[10];
  if ((int)uVar3 < 1) {
    param_2[10] = 0;
    param_2[0xb] = 0x8000000000000000;
  }
  else {
    uVar9 = (ulong)(int)uVar3;
    local_34 = 4;
    local_38 = uVar3;
    if ((uVar9 & 0x3fffffffe0000000) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      puStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -(uVar9 >> 0x1d & 1) & 0xffffffff00000000 | (uVar9 & 0x3fffffff) << 2;
    puVar7 = (undefined4 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_60,&local_60);
    param_2[10] = puVar7;
    iVar5 = 0;
    if (local_34 != 0) {
      iVar5 = (int)local_60 / local_34;
    }
    *(uint *)(param_2 + 0xb) = uVar3;
    *(int *)((long)param_2 + 0x5c) = iVar5;
    uVar2 = uVar3 & 3;
    if (2 < uVar3 - 1) {
      iVar5 = uVar2 - uVar3;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar11;
        puVar8[1] = puVar11[1];
        puVar8[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar7 = puVar8 + 4;
        puVar11 = puVar11 + 4;
        iVar5 = iVar5 + 4;
        puVar8[3] = *puVar1;
        puVar8 = puVar7;
      } while (iVar5 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = *puVar11;
      puVar7 = puVar7 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  uVar10 = param_3[0xc];
  *(undefined4 *)(param_2 + 0xd) = *(undefined4 *)(param_3 + 0xd);
  param_2[0xc] = uVar10;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}


