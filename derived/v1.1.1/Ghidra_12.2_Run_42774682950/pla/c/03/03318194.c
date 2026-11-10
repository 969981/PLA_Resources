/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03318194; name: FUN_03318194
 */


undefined8 * FUN_03318194(long *param_1,uint param_2,undefined8 *param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong local_70;
  undefined8 local_68;
  undefined *local_60;
  uint *puStack_58;
  uint local_44;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar12 = *param_5;
  uVar7 = (uVar12 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar7) {
    uVar7 = 0x3fffffff;
  }
  local_44 = param_2;
  if ((int)param_2 <= (int)uVar7) {
    local_44 = uVar7;
  }
  uVar7 = uVar12 & 0x3fffffff;
  local_70 = (ulong)local_44 << 5;
  if ((int)local_44 < (int)uVar7 || 0x3fffffff < (int)local_44) {
    local_68 = 1;
    puStack_58 = &local_44;
    local_60 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_68);
    uVar12 = *param_5;
    uVar7 = uVar12 & 0x3fffffff;
  }
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_70,&local_70);
  if (0 < (int)param_4) {
    *puVar5 = *param_3;
    puVar5[1] = param_3[1];
    puVar5[2] = param_3[2];
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_3 + 3);
    if (param_4 != 1) {
      puVar5[4] = param_3[4];
      puVar5[5] = param_3[5];
      puVar5[6] = param_3[6];
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(param_3 + 7);
      if (param_4 != 2) {
        puVar5[8] = param_3[8];
        puVar5[9] = param_3[9];
        puVar5[10] = param_3[10];
        param_3[8] = 0;
        param_3[9] = 0;
        param_3[10] = 0;
        *(undefined4 *)(puVar5 + 0xb) = *(undefined4 *)(param_3 + 0xb);
        if (param_4 != 3) {
          lVar8 = (ulong)param_4 - 3;
          puVar9 = param_3 + 0xc;
          puVar10 = puVar5 + 0xf;
          do {
            puVar10[-3] = *puVar9;
            puVar10[-2] = puVar9[1];
            puVar10[-1] = puVar9[2];
            puVar1 = puVar9 + 3;
            puVar9[1] = 0;
            puVar9[2] = 0;
            *puVar9 = 0;
            lVar8 = lVar8 + -1;
            puVar9 = puVar9 + 4;
            *(undefined4 *)puVar10 = *(undefined4 *)puVar1;
            puVar10 = puVar10 + 4;
          } while (lVar8 != 0);
        }
      }
    }
    if ((param_3[2] & 1) != 0) {
      plVar6 = (long *)(param_3[2] & 0xfffffffffffffffe);
      plVar2 = plVar6 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar8 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    if (param_4 != 1) {
      if ((param_3[6] & 1) != 0) {
        plVar6 = (long *)(param_3[6] & 0xfffffffffffffffe);
        plVar2 = plVar6 + 1;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar8 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      if (param_4 != 2) {
        if ((param_3[10] & 1) != 0) {
          plVar6 = (long *)(param_3[10] & 0xfffffffffffffffe);
          plVar2 = plVar6 + 1;
          do {
            lVar8 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = (int)lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((plVar6 != (long *)0x0) && ((int)lVar8 == 1)) {
            (**(code **)(*plVar6 + 8))();
          }
        }
        if (param_4 != 3) {
          uVar11 = 3;
          do {
            if ((param_3[uVar11 * 4 + 2] & 1) != 0) {
              plVar6 = (long *)(param_3[uVar11 * 4 + 2] & 0xfffffffffffffffe);
              plVar2 = plVar6 + 1;
              do {
                lVar8 = *plVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *(int *)plVar2 = (int)lVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((plVar6 != (long *)0x0) && ((int)lVar8 == 1)) {
                (**(code **)(*plVar6 + 8))();
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != param_4);
        }
      }
    }
  }
  if (-1 < (int)uVar12) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar7 << 5);
  }
  if (local_70 < 0x7ffffffe0) {
    uVar12 = (uint)(local_70 >> 5);
  }
  else {
    uVar12 = 0x3fffffff;
  }
  *param_5 = uVar12;
  return puVar5;
}


