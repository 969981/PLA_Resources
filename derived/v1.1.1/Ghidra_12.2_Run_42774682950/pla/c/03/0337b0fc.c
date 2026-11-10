/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337b0fc; name: FUN_0337b0fc
 */


long FUN_0337b0fc(long *param_1,uint param_2,undefined8 *param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar11 = *param_5;
  uVar9 = (uVar11 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar9) {
    uVar9 = 0x3fffffff;
  }
  uVar12 = uVar11 & 0x3fffffff;
  local_7c = param_2;
  if ((int)param_2 <= (int)uVar9) {
    local_7c = uVar9;
  }
  local_88 = (ulong)local_7c * 0x28;
  if ((int)local_7c < (int)uVar12 || 0x3fffffff < (int)local_7c) {
    local_78 = 1;
    puStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar11 = *param_5;
    uVar12 = uVar11 & 0x3fffffff;
  }
  lVar6 = (**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  if (0 < (int)param_4) {
    puVar8 = (undefined8 *)(lVar6 + 0x10);
    puVar10 = param_3;
    uVar13 = (ulong)param_4;
    do {
      puVar8[-2] = *puVar10;
      puVar8[-1] = puVar10[1];
      *puVar8 = puVar10[2];
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
      puVar8[1] = puVar10[3];
      puVar1 = puVar10 + 4;
      puVar10[3] = 0;
      uVar13 = uVar13 - 1;
      puVar10 = puVar10 + 5;
      *(undefined4 *)(puVar8 + 2) = *(undefined4 *)puVar1;
      puVar8 = puVar8 + 5;
    } while (uVar13 != 0);
    uVar13 = 0;
    do {
      FUN_032c7b9c(param_3 + uVar13 * 5 + 3);
      if ((param_3[uVar13 * 5 + 2] & 1) != 0) {
        plVar7 = (long *)(param_3[uVar13 * 5 + 2] & 0xfffffffffffffffe);
        plVar2 = plVar7 + 1;
        do {
          lVar5 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_4);
  }
  if (-1 < (int)uVar11) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar12 * 0x28);
  }
  if (local_88 < 0x9ffffffd8) {
    uVar9 = (uint)(local_88 / 0x28);
  }
  else {
    uVar9 = 0x3fffffff;
  }
  *param_5 = uVar9;
  return lVar6;
}


