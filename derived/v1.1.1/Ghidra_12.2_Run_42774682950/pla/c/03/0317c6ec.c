/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317c6ec; name: FUN_0317c6ec
 */


long FUN_0317c6ec(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong local_78;
  uint local_6c;
  undefined8 local_68;
  undefined *local_60;
  uint *puStack_58;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar10 = *param_5;
  uVar6 = (uVar10 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar6) {
    uVar6 = 0x3fffffff;
  }
  local_6c = param_2;
  if ((int)param_2 <= (int)uVar6) {
    local_6c = uVar6;
  }
  uVar6 = uVar10 & 0x3fffffff;
  local_78 = (ulong)local_6c << 4;
  if ((int)local_6c < (int)uVar6 || 0x3fffffff < (int)local_6c) {
    local_68 = 1;
    puStack_58 = &local_6c;
    local_60 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_68);
    uVar10 = *param_5;
    uVar6 = uVar10 & 0x3fffffff;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,local_78,&local_78);
  if (0 < (int)param_4) {
    puVar7 = (undefined8 *)(param_3 + 8);
    puVar8 = (undefined8 *)(lVar4 + 8);
    uVar11 = (ulong)param_4;
    do {
      *(undefined4 *)(puVar8 + -1) = *(undefined4 *)(puVar7 + -1);
      uVar11 = uVar11 - 1;
      *puVar8 = *puVar7;
      *puVar7 = 0;
      puVar7 = puVar7 + 2;
      puVar8 = puVar8 + 2;
    } while (uVar11 != 0);
    uVar11 = 0;
    do {
      plVar5 = *(long **)(param_3 + uVar11 * 0x10 + 8);
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
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar6 << 4);
  }
  if (local_78 < 0x3fffffff0) {
    uVar10 = (uint)(local_78 >> 4);
  }
  else {
    uVar10 = 0x3fffffff;
  }
  *param_5 = uVar10;
  return lVar4;
}


