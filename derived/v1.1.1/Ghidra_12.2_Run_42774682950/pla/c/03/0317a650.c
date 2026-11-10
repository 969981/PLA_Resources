/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317a650; name: FUN_0317a650
 */


long FUN_0317a650(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar12 = *param_5;
  uVar9 = (uVar12 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar9) {
    uVar9 = 0x3fffffff;
  }
  uVar13 = uVar12 & 0x3fffffff;
  local_7c = param_2;
  if ((int)param_2 <= (int)uVar9) {
    local_7c = uVar9;
  }
  local_88 = (ulong)local_7c * 0x18;
  if ((int)local_7c < (int)uVar13 || 0x3fffffff < (int)local_7c) {
    local_78 = 1;
    puStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar12 = *param_5;
    uVar13 = uVar12 & 0x3fffffff;
  }
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  if (0 < (int)param_4) {
    puVar7 = (undefined8 *)(lVar5 + 8);
    puVar10 = (undefined8 *)(param_3 + 8);
    uVar14 = (ulong)param_4;
    do {
      puVar7[-1] = puVar10[-1];
      puVar10[-1] = 0;
      *puVar7 = 0;
      *puVar7 = *puVar10;
      uVar14 = uVar14 - 1;
      *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar10 + 1);
      *puVar10 = 0;
      puVar7 = puVar7 + 3;
      puVar10 = puVar10 + 3;
    } while (uVar14 != 0);
    uVar14 = 0;
    lVar4 = tpidr_el0;
    do {
      lVar11 = *(long *)(param_3 + uVar14 * 0x18 + 8);
      if (lVar11 != 0) {
        nn::os::FinalizeMutex((MutexType *)(lVar11 + 8));
        lVar8 = *(long *)(lVar4 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar4 + 0x38d490) = lVar8;
        }
        plVar6 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar11,0x38);
      }
      plVar6 = *(long **)(param_3 + uVar14 * 0x18);
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar11 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != param_4);
  }
  if (-1 < (int)uVar12) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar13 * 0x18);
  }
  if (local_88 < 0x5ffffffe8) {
    uVar9 = (uint)(local_88 / 0x18);
  }
  else {
    uVar9 = 0x3fffffff;
  }
  *param_5 = uVar9;
  return lVar5;
}


