/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337aec8; name: FUN_0337aec8
 */


long FUN_0337aec8(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar13 = *param_5;
  uVar9 = (uVar13 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar9) {
    uVar9 = 0x3fffffff;
  }
  local_54 = param_2;
  if ((int)param_2 <= (int)uVar9) {
    local_54 = uVar9;
  }
  uVar9 = uVar13 & 0x3fffffff;
  local_80[0] = (ulong)local_54 << 6;
  if ((int)local_54 < (int)uVar9 || 0x3fffffff < (int)local_54) {
    local_80[1] = 1;
    puStack_68 = &local_54;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_80 + 1);
    uVar13 = *param_5;
    uVar9 = uVar13 & 0x3fffffff;
  }
  lVar7 = (**(code **)(*param_1 + 0x10))(param_1,local_80[0],local_80);
  if (0 < (int)param_4) {
    lVar10 = 0;
    uVar11 = (ulong)param_4;
    do {
      puVar2 = (undefined8 *)(param_3 + lVar10);
      uVar4 = puVar2[1];
      puVar3 = (undefined8 *)(lVar7 + lVar10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      uVar12 = puVar2[2];
      puVar3[2] = uVar12;
      if ((uVar12 & 1) != 0) {
        FUN_032e0c28(uVar12 & 0xfffffffffffffffe);
      }
      puVar3[4] = puVar2[4];
      *(undefined1 *)(puVar3 + 5) = *(undefined1 *)(puVar2 + 5);
      *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(puVar2 + 6);
      *(undefined4 *)((long)puVar3 + 0x34) = *(undefined4 *)((long)puVar2 + 0x34);
      *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(puVar2 + 7);
      uVar11 = uVar11 - 1;
      lVar10 = lVar10 + 0x40;
      *(undefined4 *)((long)puVar3 + 0x3c) = *(undefined4 *)((long)puVar2 + 0x3c);
      *(undefined1 *)(puVar2 + 5) = 0;
      puVar2[4] = 0;
      uVar12 = 0;
    } while (uVar11 != 0);
    do {
      lVar10 = param_3 + uVar12 * 0x40;
      FUN_03306908(lVar10 + 0x20);
      uVar11 = *(ulong *)(lVar10 + 0x10);
      if ((uVar11 & 1) != 0) {
        plVar8 = (long *)(uVar11 & 0xfffffffffffffffe);
        plVar1 = plVar8 + 1;
        do {
          lVar10 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar10 == 1)) {
          (**(code **)(*plVar8 + 8))();
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_4);
  }
  if (-1 < (int)uVar13) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar9 << 6);
  }
  if (local_80[0] < 0xfffffffc0) {
    uVar13 = (uint)(local_80[0] >> 6);
  }
  else {
    uVar13 = 0x3fffffff;
  }
  *param_5 = uVar13;
  return lVar7;
}


