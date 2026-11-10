/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f0f4c; name: FUN_031f0f4c
 */


long FUN_031f0f4c(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
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
  uVar7 = (uVar11 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar7) {
    uVar7 = 0x3fffffff;
  }
  uVar12 = uVar11 & 0x3fffffff;
  local_7c = param_2;
  if ((int)param_2 <= (int)uVar7) {
    local_7c = uVar7;
  }
  local_88 = (ulong)local_7c * 0x60;
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
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  if (0 < (int)param_4) {
    puVar6 = (undefined8 *)(param_3 + 0x50);
    puVar8 = (undefined8 *)(lVar4 + 0x50);
    uVar13 = (ulong)param_4;
    do {
      uVar10 = puVar6[-5];
      uVar13 = uVar13 - 1;
      puVar8[-7] = puVar6[-7];
      puVar8[-5] = uVar10;
      puVar8[-9] = puVar6[-9];
      puVar8[-10] = puVar6[-10];
      uVar10 = puVar6[-8];
      puVar8[-6] = puVar6[-6];
      puVar8[-8] = uVar10;
      puVar8[-3] = puVar6[-3];
      puVar8[-4] = puVar6[-4];
      puVar8[-1] = puVar6[-1];
      puVar8[-2] = puVar6[-2];
      *puVar8 = *puVar6;
      *puVar6 = 0;
      puVar6 = puVar6 + 0xc;
      puVar8 = puVar8 + 0xc;
    } while (uVar13 != 0);
    uVar13 = 0;
    do {
      plVar5 = *(long **)(param_3 + uVar13 * 0x60 + 0x50);
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
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_4);
  }
  if (-1 < (int)uVar11) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar12 * 0x60);
  }
  if (local_88 < 0x17ffffffa0) {
    uVar7 = (uint)(local_88 / 0x60);
  }
  else {
    uVar7 = 0x3fffffff;
  }
  *param_5 = uVar7;
  return lVar4;
}


