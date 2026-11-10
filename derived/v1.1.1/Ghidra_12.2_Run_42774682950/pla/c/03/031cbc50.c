/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cbc50; name: FUN_031cbc50
 */


void FUN_031cbc50(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  void *__dest;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  int local_88;
  int local_84;
  long local_80;
  undefined *puStack_78;
  int *local_70;
  int *piStack_68;
  
  iVar5 = FUN_031ce824();
  puVar4 = PTR_PTR_0434a080;
  if ((int)param_1[1] == iVar5) {
    lVar8 = *param_1;
    iVar1 = iVar5 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar5) {
      lVar8 = FUN_031ce910(PTR_PTR_0434a080,iVar1,lVar8);
      iVar5 = (int)param_1[1];
      *param_1 = lVar8;
    }
    puVar11 = (undefined4 *)(lVar8 + (long)iVar5 * 0x30);
    *puVar11 = *param_2;
    uVar2 = *param_3;
    lVar9 = (long)iVar5;
    puVar12 = (undefined8 *)(puVar11 + 4);
    *puVar12 = 0;
    puVar11[2] = uVar2;
    piVar7 = puVar11 + 6;
    piVar7[0] = 0;
    piVar7[1] = -0x80000000;
    iVar5 = param_3[4];
    puVar10 = *(undefined4 **)(param_3 + 2);
    local_88 = iVar5;
    if (iVar5 < 1) {
      *puVar12 = 0;
      *piVar7 = 0;
      puVar11[7] = -0x80000000;
    }
    else {
      local_84 = 0x68;
      if ((ulong)((long)iVar5 * 0x68) >> 0x1f != 0) {
        local_80 = 2;
        puStack_78 = &DAT_0411b3a0;
        local_70 = &local_84;
        piStack_68 = &local_88;
        FUN_03320b50(0xc69ddef,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                     ,0x30,"Memory allocation request overflow {}*{}",&local_80);
      }
      local_80 = (long)iVar5 * 0x6800000000 >> 0x20;
      puVar6 = (undefined4 *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_80,&local_80);
      *puVar12 = puVar6;
      *piVar7 = iVar5;
      iVar3 = 0;
      if (local_84 != 0) {
        iVar3 = (int)local_80 / local_84;
      }
      puVar11[7] = iVar3;
      do {
        *puVar6 = *puVar10;
        FUN_031cf1bc(puVar6 + 2,puVar10 + 2);
        iVar5 = iVar5 + -1;
        puVar6 = puVar6 + 0x1a;
        puVar10 = puVar10 + 0x1a;
      } while (iVar5 != 0);
    }
    puVar12 = (undefined8 *)(lVar8 + lVar9 * 0x30 + 0x20);
    if (*(int *)(*(long *)(param_3 + 6) + 4) == -2) {
      *puVar12 = &DAT_03aad864;
      *(undefined4 *)(lVar8 + lVar9 * 0x30 + 0x28) = 0;
    }
    else {
      *(undefined4 *)(lVar8 + lVar9 * 0x30 + 0x28) = param_3[8];
      iVar5 = param_3[8];
      lVar8 = tpidr_el0;
      lVar9 = *(long *)(lVar8 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar8 + 0x38d490) = lVar9;
      }
      __dest = (void *)FUN_032cf2d8(*(undefined8 *)(*(long *)(lVar9 + 8) + 0x58),8,iVar5 + 1);
      *puVar12 = __dest;
      memcpy(__dest,*(void **)(param_3 + 6),(long)(int)param_3[8] * 8 + 8);
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  return;
}


