/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337b7b0; name: FUN_0337b7b0
 */


long FUN_0337b7b0(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong *puVar13;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar11 = *param_5;
  uVar9 = (uVar11 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar9) {
    uVar9 = 0x3fffffff;
  }
  uVar12 = uVar11 & 0x3fffffff;
  local_54 = param_2;
  if ((int)param_2 <= (int)uVar9) {
    local_54 = uVar9;
  }
  local_80[0] = (ulong)local_54 * 0x18;
  if ((int)local_54 < (int)uVar12 || 0x3fffffff < (int)local_54) {
    local_80[1] = 1;
    puStack_68 = &local_54;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_80 + 1);
    uVar11 = *param_5;
    uVar12 = uVar11 & 0x3fffffff;
  }
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_80[0],local_80);
  if (0 < (int)param_4) {
    puVar7 = (ulong *)(param_3 + 0x10);
    puVar13 = (ulong *)(lVar5 + 0x10);
    uVar8 = (ulong)param_4;
    do {
      uVar10 = puVar7[-1];
      puVar13[-2] = puVar7[-2];
      puVar13[-1] = uVar10;
      uVar10 = *puVar7;
      *puVar13 = uVar10;
      if ((uVar10 & 1) != 0) {
        FUN_032e0c28(uVar10 & 0xfffffffffffffffe);
      }
      uVar8 = uVar8 - 1;
      puVar7 = puVar7 + 3;
      puVar13 = puVar13 + 3;
    } while (uVar8 != 0);
    uVar8 = 0;
    do {
      uVar10 = *(ulong *)(param_3 + uVar8 * 0x18 + 0x10);
      if ((uVar10 & 1) != 0) {
        plVar6 = (long *)(uVar10 & 0xfffffffffffffffe);
        plVar1 = plVar6 + 1;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_4);
  }
  if (-1 < (int)uVar11) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar12 * 0x18);
  }
  if (local_80[0] < 0x5ffffffe8) {
    uVar9 = (uint)(local_80[0] / 0x18);
  }
  else {
    uVar9 = 0x3fffffff;
  }
  *param_5 = uVar9;
  return lVar5;
}


