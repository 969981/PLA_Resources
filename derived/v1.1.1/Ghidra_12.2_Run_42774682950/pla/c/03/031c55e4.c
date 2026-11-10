/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c55e4; name: FUN_031c55e4
 */


long * FUN_031c55e4(long *param_1,uint param_2,long *param_3,uint param_4,uint *param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  ulong local_78;
  uint local_6c;
  undefined8 local_68;
  undefined *local_60;
  uint *puStack_58;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar9 = *param_5;
  uVar5 = (uVar9 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar5) {
    uVar5 = 0x3fffffff;
  }
  local_6c = param_2;
  if ((int)param_2 <= (int)uVar5) {
    local_6c = uVar5;
  }
  uVar5 = uVar9 & 0x3fffffff;
  local_78 = (ulong)local_6c << 3;
  if ((int)local_6c < (int)uVar5 || 0x3fffffff < (int)local_6c) {
    local_68 = 1;
    puStack_58 = &local_6c;
    local_60 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_68);
    uVar9 = *param_5;
    uVar5 = uVar9 & 0x3fffffff;
  }
  plVar3 = (long *)(**(code **)(*param_1 + 0x10))(param_1,local_78,&local_78);
  if (0 < (int)param_4) {
    *plVar3 = *param_3;
    *param_3 = 0;
    if (param_4 != 1) {
      plVar3[1] = param_3[1];
      param_3[1] = 0;
      if (param_4 != 2) {
        lVar6 = (ulong)param_4 - 2;
        plVar4 = param_3 + 2;
        plVar7 = plVar3 + 2;
        do {
          lVar6 = lVar6 + -1;
          *plVar7 = *plVar4;
          *plVar4 = 0;
          plVar4 = plVar4 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar6 != 0);
      }
    }
    plVar4 = (long *)*param_3;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar7 = plVar4 + 2;
      do {
        lVar6 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
    if (param_4 != 1) {
      plVar4 = (long *)param_3[1];
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar7 = plVar4 + 2;
        do {
          lVar6 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
      if (param_4 != 2) {
        uVar8 = 2;
        do {
          plVar4 = (long *)param_3[uVar8];
          if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
            plVar7 = plVar4 + 2;
            do {
              lVar6 = *plVar7;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar2) {
                *plVar7 = lVar6 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar6 + -1 == 0) {
              (**(code **)(*plVar4 + 0x18))();
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != param_4);
      }
    }
  }
  if (-1 < (int)uVar9) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar5 << 3);
  }
  if (local_78 < 0x1fffffff8) {
    uVar9 = (uint)(local_78 >> 3);
  }
  else {
    uVar9 = 0x3fffffff;
  }
  *param_5 = uVar9;
  return plVar3;
}


