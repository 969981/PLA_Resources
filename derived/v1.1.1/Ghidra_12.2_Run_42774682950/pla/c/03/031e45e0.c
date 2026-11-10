/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e45e0; name: FUN_031e45e0
 */


undefined8 FUN_031e45e0(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  void *__dest;
  int iVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int *piVar18;
  int local_88;
  int local_84;
  ulong local_80;
  undefined *puStack_78;
  int *local_70;
  int *piStack_68;
  
  uVar7 = FUN_031e5990();
  puVar6 = PTR_PTR_0434a080;
  iVar12 = (int)uVar7;
  if ((int)param_1[1] == iVar12) {
    lVar14 = *param_1;
    iVar1 = iVar12 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar12) {
      lVar14 = FUN_031e5a7c(PTR_PTR_0434a080,iVar1,lVar14);
      iVar12 = (int)param_1[1];
      *param_1 = lVar14;
    }
    puVar17 = (undefined4 *)(lVar14 + (long)iVar12 * 0x28);
    *puVar17 = *param_2;
    lVar11 = (long)iVar12;
    puVar15 = (undefined8 *)(puVar17 + 2);
    *puVar15 = 0;
    piVar18 = puVar17 + 4;
    piVar18[0] = 0;
    piVar18[1] = -0x80000000;
    iVar12 = *(int *)(param_3 + 1);
    puVar16 = (undefined4 *)*param_3;
    local_88 = iVar12;
    if (iVar12 < 1) {
      *puVar15 = 0;
      *piVar18 = 0;
      puVar17[5] = -0x80000000;
    }
    else {
      uVar13 = (ulong)iVar12;
      local_84 = 0x10;
      if ((uVar13 & 0xffffffff8000000) != 0) {
        local_80 = 2;
        puStack_78 = &DAT_0411b3a0;
        local_70 = &local_84;
        piStack_68 = &local_88;
        FUN_03320b50(0xc69ddef,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                     ,0x30,"Memory allocation request overflow {}*{}",&local_80);
      }
      local_80 = -(uVar13 >> 0x1b & 1) & 0xffffffff00000000 | (uVar13 & 0xfffffff) << 4;
      puVar8 = (undefined4 *)(**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_80,&local_80);
      *puVar15 = puVar8;
      *piVar18 = iVar12;
      iVar3 = 0;
      if (local_84 != 0) {
        iVar3 = (int)local_80 / local_84;
      }
      iVar9 = 0;
      puVar17[5] = iVar3;
      do {
        *puVar8 = *puVar16;
        lVar10 = *(long *)(puVar16 + 2);
        *(long *)(puVar8 + 2) = lVar10;
        puVar8 = puVar8 + 4;
        puVar16 = puVar16 + 4;
        if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
          plVar2 = (long *)(lVar10 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = *plVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != iVar12);
    }
    puVar15 = (undefined8 *)(lVar14 + lVar11 * 0x28 + 0x18);
    if (*(int *)(param_3[2] + 4) == -2) {
      *puVar15 = &DAT_03aad864;
      *(undefined4 *)(lVar14 + lVar11 * 0x28 + 0x20) = 0;
    }
    else {
      *(undefined4 *)(lVar14 + lVar11 * 0x28 + 0x20) = *(undefined4 *)(param_3 + 3);
      iVar12 = *(int *)(param_3 + 3);
      lVar14 = tpidr_el0;
      lVar11 = *(long *)(lVar14 + 0x38d490);
      if (lVar11 == 0) {
        lVar11 = FUN_0333d16c(0,1);
        *(long *)(lVar14 + 0x38d490) = lVar11;
      }
      __dest = (void *)FUN_032cf2d8(*(undefined8 *)(*(long *)(lVar11 + 8) + 0x58),8,iVar12 + 1);
      *puVar15 = __dest;
      memcpy(__dest,(void *)param_3[2],(long)*(int *)(param_3 + 3) * 8 + 8);
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  return uVar7;
}


