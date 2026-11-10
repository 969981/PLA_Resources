/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317cf84; name: FUN_0317cf84
 */


void FUN_0317cf84(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined4 *puVar12;
  ulong local_60;
  undefined *puStack_58;
  int *local_50;
  int *piStack_48;
  int local_38;
  int local_34;
  
  lVar10 = tpidr_el0;
  lVar9 = *(long *)(lVar10 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar9;
  }
  plVar6 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x38,0);
  *puVar7 = &PTR_LAB_0430a690;
  puVar7[1] = 0xffffffff;
  puVar7[2] = 1;
  *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((long)puVar7 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  lVar10 = *(long *)(param_2 + 0x20);
  puVar7[4] = lVar10;
  if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
    plVar6 = (long *)(lVar10 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar7[5] = 0;
  puVar7[6] = 0x8000000000000000;
  puVar5 = PTR_PTR_0434a080;
  iVar11 = *(int *)(param_2 + 0x30);
  puVar12 = *(undefined4 **)(param_2 + 0x28);
  if (iVar11 < 1) {
    puVar7[5] = 0;
    puVar7[6] = 0x8000000000000000;
  }
  else {
    local_34 = 0xc;
    local_38 = iVar11;
    if (((ulong)((long)iVar11 * 3) >> 0x1d & 0x1ffffffff) != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_34;
      piStack_48 = &local_38;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = -((ulong)((uint)(iVar11 * 3) >> 0x1d) & 1) & 0xffffffff00000000 |
               ((ulong)(uint)(iVar11 * 3) & 0x3fffffff) << 2;
    puVar8 = (undefined4 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_60,&local_60);
    puVar7[5] = puVar8;
    iVar2 = 0;
    if (local_34 != 0) {
      iVar2 = (int)local_60 / local_34;
    }
    *(int *)(puVar7 + 6) = iVar11;
    *(int *)((long)puVar7 + 0x34) = iVar2;
    do {
      *puVar8 = *puVar12;
      puVar8[1] = puVar12[1];
      *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar12 + 2);
      puVar1 = (undefined2 *)((long)puVar12 + 10);
      iVar11 = iVar11 + -1;
      puVar12 = puVar12 + 3;
      *(undefined2 *)((long)puVar8 + 10) = *puVar1;
      puVar8 = puVar8 + 3;
    } while (iVar11 != 0);
  }
  *param_1 = puVar7;
  return;
}


