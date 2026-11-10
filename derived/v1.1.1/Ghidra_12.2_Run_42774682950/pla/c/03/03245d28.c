/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03245d28; name: FUN_03245d28
 */


undefined8 FUN_03245d28(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  ulong local_50;
  undefined *puStack_48;
  int *local_40;
  int *piStack_38;
  
  puVar6 = PTR_PTR_0434a080;
  local_68 = (undefined4 *)0x0;
  local_60 = 0x8000000000000000;
  iVar2 = *(int *)(param_2 + 1);
  puVar12 = (undefined4 *)*param_2;
  local_58 = iVar2;
  if (iVar2 < 1) {
    local_68 = (undefined4 *)0x0;
    local_60 = -0x8000000000000000;
  }
  else {
    uVar10 = (ulong)iVar2;
    local_54 = 0x10;
    if ((uVar10 & 0xffffffff8000000) != 0) {
      local_50 = 2;
      puStack_48 = &DAT_0411b3a0;
      local_40 = &local_54;
      piStack_38 = &local_58;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_50);
    }
    local_50 = -(uVar10 >> 0x1b & 1) & 0xffffffff00000000 | (uVar10 & 0xfffffff) << 4;
    local_68 = (undefined4 *)(**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_50,&local_50);
    iVar3 = 0;
    if (local_54 != 0) {
      iVar3 = (int)local_50 / local_54;
    }
    iVar9 = 0;
    local_60 = CONCAT44(iVar3,iVar2);
    puVar7 = local_68;
    do {
      *puVar7 = *puVar12;
      lVar11 = *(long *)(puVar12 + 2);
      *(long *)(puVar7 + 2) = lVar11;
      puVar7 = puVar7 + 4;
      puVar12 = puVar12 + 4;
      if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != 0)) {
        plVar8 = (long *)(lVar11 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar2);
  }
  FUN_03251d28(param_1,&local_68);
  puVar12 = local_68;
  if ((int)local_60 != 0) {
    puVar7 = local_68 + (long)(int)local_60 * 4;
    do {
      plVar8 = *(long **)(puVar7 + -2);
      puVar7 = puVar7 + -4;
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar1 = plVar8 + 2;
        do {
          lVar11 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
    } while (puVar7 != puVar12);
  }
  lVar11 = local_60;
  uVar10 = (ulong)local_60._4_4_;
  local_60 = (ulong)local_60._4_4_ << 0x20;
  if ((-1 < lVar11) && (local_68 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_68,(uVar10 & 0x3fffffff) << 4);
  }
  return 1;
}


