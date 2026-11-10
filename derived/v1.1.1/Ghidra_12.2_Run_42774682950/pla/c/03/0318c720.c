/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318c720; name: FUN_0318c720
 */


long FUN_0318c720(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong local_88;
  int local_7c;
  undefined8 local_78;
  undefined *local_70;
  int *piStack_68;
  
  uVar12 = (ulong)param_2;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(uVar12);
  }
  uVar13 = *param_5;
  uVar7 = (uVar13 & 0x3fffffff) * 2;
  if (uVar7 < 0x3fffffff) {
    if ((int)uVar7 < (int)param_2) goto LAB_0318c77c;
  }
  else {
    uVar7 = 0x3fffffff;
    if (0x3fffffff < (int)param_2) goto LAB_0318c77c;
  }
  uVar12 = (ulong)uVar7;
LAB_0318c77c:
  local_88 = uVar12 * 0x18;
  uVar7 = uVar13 & 0x3fffffff;
  local_7c = (int)uVar12;
  if ((local_7c < (int)uVar7) || (0x3fffffff < local_7c)) {
    local_78 = 1;
    piStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar13 = *param_5;
    uVar7 = uVar13 & 0x3fffffff;
  }
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  if (0 < (int)param_4) {
    puVar8 = (undefined8 *)(lVar5 + 8);
    puVar10 = (undefined8 *)(param_3 + 8);
    uVar12 = (ulong)param_4;
    do {
      puVar8[-1] = puVar10[-1];
      puVar10[-1] = 0;
      *puVar8 = 0;
      *puVar8 = *puVar10;
      uVar12 = uVar12 - 1;
      *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar10 + 1);
      *puVar10 = 0;
      puVar8 = puVar8 + 3;
      puVar10 = puVar10 + 3;
    } while (uVar12 != 0);
    uVar12 = 0;
    lVar4 = tpidr_el0;
    do {
      lVar11 = *(long *)(param_3 + uVar12 * 0x18 + 8);
      if (lVar11 != 0) {
        nn::os::FinalizeMutex((MutexType *)(lVar11 + 8));
        lVar9 = *(long *)(lVar4 + 0x38d490);
        if (lVar9 == 0) {
          lVar9 = FUN_0333d16c(0,1);
          *(long *)(lVar4 + 0x38d490) = lVar9;
        }
        plVar6 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar11,0x38);
      }
      plVar6 = *(long **)(param_3 + uVar12 * 0x18);
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
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_4);
  }
  if (-1 < (int)uVar13) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar7 * 0x18);
  }
  if (local_88 < 0x5ffffffe8) {
    uVar13 = (uint)(local_88 / 0x18);
  }
  else {
    uVar13 = 0x3fffffff;
  }
  *param_5 = uVar13;
  return lVar5;
}


