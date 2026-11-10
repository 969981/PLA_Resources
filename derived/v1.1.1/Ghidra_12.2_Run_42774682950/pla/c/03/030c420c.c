/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c420c; name: FUN_030c420c
 */


long FUN_030c420c(long *param_1,uint param_2,long *param_3,uint param_4,uint *param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_78;
  int local_6c;
  undefined8 local_68;
  undefined *local_60;
  int *piStack_58;
  
  uVar8 = (ulong)param_4;
  uVar9 = (ulong)param_2;
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(uVar9);
  }
  uVar3 = *param_5;
  uVar4 = (uVar3 & 0x3fffffff) * 2;
  if (uVar4 < 0x3fffffff) {
    if ((int)uVar4 < (int)param_2) goto LAB_030c4264;
  }
  else {
    uVar4 = 0x3fffffff;
    if (0x3fffffff < (int)param_2) goto LAB_030c4264;
  }
  uVar9 = (ulong)uVar4;
LAB_030c4264:
  uVar4 = uVar3 & 0x3fffffff;
  local_6c = (int)uVar9;
  local_78 = uVar9 << 5;
  if ((local_6c < (int)uVar4) || (0x3fffffff < local_6c)) {
    local_68 = 1;
    piStack_58 = &local_6c;
    local_60 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_68);
    uVar3 = *param_5;
    uVar4 = uVar3 & 0x3fffffff;
  }
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_78,&local_78);
  if (0 < (int)param_4) {
    plVar5 = param_3 + 1;
    plVar6 = (long *)(lVar2 + 8);
    uVar9 = uVar8;
    do {
      plVar6[-1] = (long)&PTR_LAB_042b49e0;
      lVar1 = *plVar5;
      lVar7 = plVar5[2];
      plVar6[1] = plVar5[1];
      plVar6[2] = lVar7;
      uVar9 = uVar9 - 1;
      plVar5 = plVar5 + 4;
      *plVar6 = lVar1;
      plVar6 = plVar6 + 4;
    } while (uVar9 != 0);
    plVar5 = param_3;
    do {
      (**(code **)(*plVar5 + 8))(plVar5);
      uVar8 = uVar8 - 1;
      plVar5 = plVar5 + 4;
    } while (uVar8 != 0);
  }
  if (-1 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar4 << 5);
  }
  uVar3 = (uint)(local_78 >> 5);
  if (0x7ffffffdf < local_78) {
    uVar3 = 0x3fffffff;
  }
  *param_5 = uVar3;
  return lVar2;
}


