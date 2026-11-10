/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c8bec; name: FUN_032c8bec
 */


long * FUN_032c8bec(long *param_1,uint param_2,long *param_3,uint param_4,uint *param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong local_80 [2];
  undefined *local_70;
  uint *puStack_68;
  uint local_54;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar9 = *param_5;
  uVar4 = (uVar9 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar4) {
    uVar4 = 0x3fffffff;
  }
  uVar10 = uVar9 & 0x3fffffff;
  local_54 = param_2;
  if ((int)param_2 <= (int)uVar4) {
    local_54 = uVar4;
  }
  local_80[0] = (ulong)local_54 * 0x38;
  if ((int)local_54 < (int)uVar10 || 0x3fffffff < (int)local_54) {
    local_80[1] = 1;
    puStack_68 = &local_54;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",local_80 + 1);
    uVar9 = *param_5;
    uVar10 = uVar9 & 0x3fffffff;
  }
  plVar3 = (long *)(**(code **)(*param_1 + 0x10))(param_1,local_80[0],local_80);
  if (0 < (int)param_4) {
    lVar6 = *param_3;
    lVar5 = param_3[2];
    plVar3[1] = param_3[1];
    plVar3[2] = lVar5;
    *plVar3 = lVar6;
    lVar5 = param_3[4];
    lVar6 = param_3[5];
    lVar8 = param_3[6];
    plVar3[3] = param_3[3];
    plVar3[4] = lVar5;
    plVar3[5] = lVar6;
    plVar3[6] = lVar8;
    *(undefined1 *)(param_3 + 1) = 0;
    *(undefined4 *)((long)param_3 + 10) = 0;
    param_3[2] = 0;
    *param_3 = (long)&PTR_LAB_0434d568;
    if (param_4 != 1) {
      lVar6 = (ulong)param_4 - 1;
      plVar7 = param_3 + 9;
      plVar2 = plVar3;
      do {
        lVar5 = plVar7[-2];
        lVar6 = lVar6 + -1;
        lVar8 = *plVar7;
        plVar2[8] = plVar7[-1];
        plVar2[9] = lVar8;
        plVar2[7] = lVar5;
        lVar5 = plVar7[1];
        lVar8 = plVar7[2];
        lVar1 = plVar7[4];
        plVar2[0xc] = plVar7[3];
        plVar2[0xd] = lVar1;
        plVar2[10] = lVar5;
        plVar2[0xb] = lVar8;
        *(undefined1 *)(plVar7 + -1) = 0;
        *(undefined4 *)((long)plVar7 + -6) = 0;
        *plVar7 = 0;
        plVar7[-2] = (long)&PTR_LAB_0434d568;
        plVar7 = plVar7 + 7;
        plVar2 = plVar2 + 7;
      } while (lVar6 != 0);
    }
    (**(code **)(*param_3 + 8))(param_3);
    if (param_4 != 1) {
      lVar6 = (ulong)param_4 - 1;
      plVar7 = param_3;
      do {
        plVar7 = plVar7 + 7;
        (**(code **)(*plVar7 + 8))(plVar7);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  if (-1 < (int)uVar9) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar10 * 0x38);
  }
  if (local_80[0] < 0xdffffffc8) {
    uVar4 = (uint)(local_80[0] / 0x38);
  }
  else {
    uVar4 = 0x3fffffff;
  }
  *param_5 = uVar4;
  return plVar3;
}


