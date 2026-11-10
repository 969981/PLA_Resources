/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031efab8; name: FUN_031efab8
 */


long FUN_031efab8(long *param_1,uint param_2,undefined8 *param_3,uint param_4,uint *param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar13 = *param_5;
  uVar9 = (uVar13 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar9) {
    uVar9 = 0x3fffffff;
  }
  uVar14 = uVar13 & 0x3fffffff;
  local_7c = param_2;
  if ((int)param_2 <= (int)uVar9) {
    local_7c = uVar9;
  }
  local_88 = (ulong)local_7c * 0x60;
  if ((int)local_7c < (int)uVar14 || 0x3fffffff < (int)local_7c) {
    local_78 = 1;
    puStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar13 = *param_5;
    uVar14 = uVar13 & 0x3fffffff;
  }
  lVar6 = (**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  if (0 < (int)param_4) {
    puVar8 = (undefined2 *)(lVar6 + 0x50);
    puVar10 = param_3;
    uVar15 = (ulong)param_4;
    do {
      *(undefined8 *)(puVar8 + -0x28) = *puVar10;
      uVar12 = puVar10[5];
      *puVar10 = 0;
      *(undefined8 *)(puVar8 + -0x1c) = puVar10[3];
      *(undefined8 *)(puVar8 + -0x14) = uVar12;
      uVar12 = puVar10[2];
      *(undefined8 *)(puVar8 + -0x18) = puVar10[4];
      *(undefined8 *)(puVar8 + -0x20) = uVar12;
      *(undefined8 *)(puVar8 + -0xc) = puVar10[7];
      *(undefined8 *)(puVar8 + -0x10) = puVar10[6];
      *(undefined8 *)(puVar8 + -4) = puVar10[9];
      *(undefined8 *)(puVar8 + -8) = puVar10[8];
      uVar3 = *(undefined2 *)(puVar10 + 10);
      puVar1 = (undefined1 *)((long)puVar10 + 0x52);
      uVar15 = uVar15 - 1;
      puVar10 = puVar10 + 0xc;
      *(undefined1 *)(puVar8 + 1) = *puVar1;
      *puVar8 = uVar3;
      puVar8 = puVar8 + 0x30;
    } while (uVar15 != 0);
    uVar15 = 0;
    do {
      plVar7 = (long *)param_3[uVar15 * 0xc];
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar2 = plVar7 + 2;
        do {
          lVar11 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != param_4);
  }
  if (-1 < (int)uVar13) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar14 * 0x60);
  }
  if (local_88 < 0x17ffffffa0) {
    uVar9 = (uint)(local_88 / 0x60);
  }
  else {
    uVar9 = 0x3fffffff;
  }
  *param_5 = uVar9;
  return lVar6;
}


