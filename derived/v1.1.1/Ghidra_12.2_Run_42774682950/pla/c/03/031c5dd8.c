/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c5dd8; name: FUN_031c5dd8
 */


undefined8 * FUN_031c5dd8(long *param_1,uint param_2,undefined8 *param_3,uint param_4,uint *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong local_70 [2];
  undefined *local_60;
  uint *puStack_58;
  uint local_44;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar10 = *param_5;
  uVar7 = (uVar10 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar7) {
    uVar7 = 0x3fffffff;
  }
  local_44 = param_2;
  if ((int)param_2 <= (int)uVar7) {
    local_44 = uVar7;
  }
  uVar7 = uVar10 & 0x3fffffff;
  local_70[0] = (ulong)local_44 << 3;
  if (((int)local_44 < (int)uVar7) || (0x3fffffff < (int)local_44)) {
    local_70[1] = 1;
    puStack_58 = &local_44;
    local_60 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_70 + 1);
    uVar10 = *param_5;
    uVar7 = uVar10 & 0x3fffffff;
  }
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_70[0],local_70);
  if (0 < (int)param_4) {
    puVar6 = puVar4;
    puVar8 = param_3;
    uVar11 = (ulong)param_4;
    do {
      uVar11 = uVar11 - 1;
      *puVar6 = *puVar8;
      *puVar8 = 0;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar11 != 0);
    uVar11 = 0;
    do {
      plVar5 = (long *)param_3[uVar11];
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_4);
  }
  if (-1 < (int)uVar10) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar7 << 3);
  }
  if (local_70[0] < 0x1fffffff8) {
    uVar7 = (uint)(local_70[0] >> 3);
  }
  else {
    uVar7 = 0x3fffffff;
  }
  *param_5 = uVar7;
  return puVar4;
}


