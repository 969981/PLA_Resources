/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0330de98; name: FUN_0330de98
 */


undefined8 * FUN_0330de98(long *param_1,uint param_2,undefined8 *param_3,uint param_4,uint *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar11 = *param_5;
  uVar6 = (uVar11 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar6) {
    uVar6 = 0x3fffffff;
  }
  uVar12 = uVar11 & 0x3fffffff;
  local_54 = param_2;
  if ((int)param_2 <= (int)uVar6) {
    local_54 = uVar6;
  }
  local_80[0] = (ulong)local_54 * 0x30;
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
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_80[0],local_80);
  if (0 < (int)param_4) {
    *puVar4 = *param_3;
    puVar4[1] = param_3[1];
    puVar4[2] = param_3[2];
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    puVar4[3] = param_3[3];
    puVar4[4] = param_3[4];
    puVar4[5] = param_3[5];
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    if (param_4 != 1) {
      puVar4[6] = param_3[6];
      puVar4[7] = param_3[7];
      puVar4[8] = param_3[8];
      param_3[7] = 0;
      param_3[8] = 0;
      param_3[6] = 0;
      puVar4[9] = param_3[9];
      puVar4[10] = param_3[10];
      puVar4[0xb] = param_3[0xb];
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3[9] = 0;
      if (param_4 != 2) {
        puVar4[0xc] = param_3[0xc];
        puVar4[0xd] = param_3[0xd];
        puVar4[0xe] = param_3[0xe];
        param_3[0xd] = 0;
        param_3[0xe] = 0;
        param_3[0xc] = 0;
        puVar4[0xf] = param_3[0xf];
        puVar4[0x10] = param_3[0x10];
        puVar4[0x11] = param_3[0x11];
        param_3[0x10] = 0;
        param_3[0x11] = 0;
        param_3[0xf] = 0;
        if (param_4 != 3) {
          puVar4[0x12] = param_3[0x12];
          puVar4[0x13] = param_3[0x13];
          puVar4[0x14] = param_3[0x14];
          param_3[0x13] = 0;
          param_3[0x14] = 0;
          param_3[0x12] = 0;
          puVar4[0x15] = param_3[0x15];
          puVar4[0x16] = param_3[0x16];
          puVar4[0x17] = param_3[0x17];
          param_3[0x16] = 0;
          param_3[0x17] = 0;
          param_3[0x15] = 0;
          if (param_4 != 4) {
            lVar7 = (ulong)param_4 - 4;
            puVar8 = param_3 + 0x18;
            puVar9 = puVar4 + 0x1d;
            do {
              puVar9[-5] = *puVar8;
              puVar9[-4] = puVar8[1];
              puVar9[-3] = puVar8[2];
              puVar8[1] = 0;
              puVar8[2] = 0;
              *puVar8 = 0;
              puVar9[-2] = puVar8[3];
              puVar9[-1] = puVar8[4];
              lVar7 = lVar7 + -1;
              *puVar9 = puVar8[5];
              puVar8[4] = 0;
              puVar8[5] = 0;
              puVar8[3] = 0;
              puVar8 = puVar8 + 6;
              puVar9 = puVar9 + 6;
            } while (lVar7 != 0);
          }
        }
      }
    }
    uVar10 = 0;
    do {
      if ((param_3[uVar10 * 6 + 5] & 1) != 0) {
        plVar5 = (long *)(param_3[uVar10 * 6 + 5] & 0xfffffffffffffffe);
        plVar1 = plVar5 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar5 != (long *)0x0) && ((int)lVar7 == 1)) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      if ((param_3[uVar10 * 6 + 2] & 1) != 0) {
        plVar5 = (long *)(param_3[uVar10 * 6 + 2] & 0xfffffffffffffffe);
        plVar1 = plVar5 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar5 != (long *)0x0) && ((int)lVar7 == 1)) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_4);
  }
  if (-1 < (int)uVar11) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar12 * 0x30);
  }
  if (local_80[0] < 0xbffffffd0) {
    uVar6 = (uint)(local_80[0] / 0x30);
  }
  else {
    uVar6 = 0x3fffffff;
  }
  *param_5 = uVar6;
  return puVar4;
}


